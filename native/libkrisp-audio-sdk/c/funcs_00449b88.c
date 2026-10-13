// ===== 00449b88  FUN_00449b88 =====

void FUN_00449b88(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0046b880(*param_2);
  FUN_003fa7a4(param_1,uVar1);
  return;
}


// ===== 00449bb8  FUN_00449bb8 =====

void FUN_00449bb8(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           FUN_003c8474(0x108,"providers/implementations/encode_decode/decode_epki2pki.c",0x2a);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
  }
  return;
}


// ===== 00449bf0  FUN_00449bf0 =====

void FUN_00449bf0(undefined8 param_1)

{
  FUN_003c86b4(param_1,"providers/implementations/encode_decode/decode_epki2pki.c",0x35);
  return;
}


// ===== 00449c00  FUN_00449c00 =====

uint FUN_00449c00(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                 undefined8 param_5,code *param_6,undefined8 param_7)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined4 *local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  ulong local_4c0 [6];
  int local_48c;
  long local_488;
  undefined1 auStack_480 [40];
  undefined4 *local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined4 *local_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined4 *local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined4 *local_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 *local_80;
  long local_78;
  long *local_70 [2];
  
  local_70[0] = (long *)0x0;
  local_80 = (undefined8 *)0x0;
  lVar6 = FUN_0043f154(*param_1);
  if (lVar6 == 0) {
    uVar5 = 0;
  }
  else {
    iVar4 = FUN_003e04f8(lVar6,local_70);
    FUN_0037db50(lVar6);
    if (iVar4 < 0) {
      uVar5 = 1;
    }
    else {
      lVar6 = local_70[0][1];
      lVar10 = *local_70[0];
      local_78 = lVar6;
      FUN_003c86b4(local_70[0],"providers/implementations/encode_decode/decode_epki2pki.c",0x6e);
      FUN_0037f6d4();
      lVar7 = FUN_003dfe20(0,&local_78,lVar10);
      if (lVar7 == 0) {
        FUN_0037f71c();
        uVar5 = 1;
      }
      else {
        local_4c0[0] = 0;
        FUN_0037f8c4();
        iVar4 = (*param_6)(auStack_480,0x400,local_4c0,0,param_7);
        if (iVar4 == 0) {
          FUN_00379868();
          FUN_0037995c("providers/implementations/encode_decode/decode_epki2pki.c",0x79,
                       "epki2pki_decode");
          FUN_00379a5c(0x39,0x9f,0);
          uVar5 = 0;
        }
        else {
          local_488 = 0;
          local_48c = 0;
          FUN_003dfe50(lVar7,&local_80,&local_4e8);
          puVar3 = local_80;
          uVar2 = local_4c0[0];
          uVar11 = *(undefined8 *)(local_4e8 + 2);
          uVar1 = *local_4e8;
          uVar8 = FUN_0046b880(*param_1);
          lVar9 = FUN_00449f78(puVar3,auStack_480,uVar2 & 0xffffffff,uVar11,uVar1,&local_488,
                               &local_48c,0,uVar8,param_1 + 1);
          if (lVar9 != 0) {
            FUN_003c86b4(lVar6,"providers/implementations/encode_decode/decode_epki2pki.c",0x88);
            lVar10 = (long)local_48c;
            lVar6 = local_488;
          }
          uVar5 = (uint)(lVar9 != 0);
          local_80 = (undefined8 *)0x0;
        }
        FUN_003dfe44(lVar7);
      }
      FUN_0037f6d4();
      local_78 = lVar6;
      lVar7 = FUN_003dfe94(0,&local_78,lVar10);
      FUN_0037f71c();
      if ((lVar7 != 0) && (iVar4 = FUN_003dff4c(0,0,0,&local_80,lVar7), iVar4 != 0)) {
        local_488 = CONCAT44(local_488._4_4_,2);
        FUN_003dd260(local_4c0,0x32,*local_80,0);
        FUN_003cd8cc(auStack_480,"data-type",local_4c0,0);
        FUN_003cd8cc(&local_4e8,"data-structure","PrivateKeyInfo",0);
        local_438 = local_4c8;
        uStack_450 = uStack_4e0;
        local_458 = local_4e8;
        uStack_440 = uStack_4d0;
        local_448 = local_4d8;
        FUN_003cd924(&local_4e8,&DAT_001eef54,lVar6,lVar10);
        local_410 = local_4c8;
        uStack_428 = uStack_4e0;
        local_430 = local_4e8;
        uStack_418 = uStack_4d0;
        uStack_420 = local_4d8;
        FUN_003cb668(&local_4e8,&DAT_001eccc2,&local_488);
        local_3e8 = local_4c8;
        uStack_400 = uStack_4e0;
        local_408 = local_4e8;
        uStack_3f0 = uStack_4d0;
        local_3f8 = local_4d8;
        FUN_003cdfcc(&local_4e8);
        uStack_3d8 = uStack_4e0;
        local_3e0 = local_4e8;
        uStack_3c8 = uStack_4d0;
        uStack_3d0 = local_4d8;
        local_3c0 = local_4c8;
        uVar5 = (*param_4)(auStack_480,param_5);
      }
      FUN_003dfeb8(lVar7);
      FUN_003c86b4(lVar6,"providers/implementations/encode_decode/decode_epki2pki.c",0xaf);
    }
  }
  return uVar5;
}


// ===== 00449f20  FUN_00449f20 =====

undefined ** FUN_00449f20(void)

{
  return &PTR_s_properties_00787748;
}


// ===== 00449f2c  FUN_00449f2c =====

undefined8 FUN_00449f2c(long param_1,undefined8 param_2)

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


// ===== 00449f78  FUN_00449f78 =====

long FUN_00449f78(undefined8 *param_1,undefined8 param_2,int param_3,long param_4,int param_5,
                 long *param_6,undefined4 *param_7,undefined4 param_8,undefined8 param_9,
                 undefined8 param_10)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  int local_48;
  int local_44;
  
  lVar4 = FUN_0037fab8();
  local_48 = 0;
  if (lVar4 == 0) {
    FUN_00379868();
    uVar6 = 0x1f;
LAB_0044a0ec:
    FUN_0037995c("crypto/pkcs12/p12_decr.c",uVar6,"PKCS12_pbe_crypt_ex");
    uVar6 = 0x80006;
    goto LAB_0044a0fc;
  }
  iVar1 = FUN_003a2468(*param_1,param_2,param_3,param_1[1],lVar4,param_8,param_9,param_10);
  if (iVar1 != 0) {
    iVar1 = FUN_0038936c(lVar4);
    iVar1 = iVar1 + param_5;
    FUN_0038944c(lVar4);
    uVar2 = FUN_00388e44();
    iVar9 = param_5;
    if ((uVar2 >> 0x19 & 1) == 0) goto LAB_0044a02c;
    iVar3 = FUN_00381710(lVar4,0x16,0,&local_48);
    if (iVar3 < 0) {
      FUN_00379868();
      uVar6 = 0x32;
LAB_0044a148:
      FUN_0037995c("crypto/pkcs12/p12_decr.c",uVar6,"PKCS12_pbe_crypt_ex");
      uVar6 = 0xc0103;
LAB_0044a0fc:
      pcVar7 = (char *)0x0;
    }
    else {
      iVar3 = FUN_00389488(lVar4);
      if (iVar3 == 0) {
        iVar9 = param_5 - local_48;
        if (local_48 <= param_5) {
          iVar3 = FUN_00381710(lVar4,0x11,local_48,param_4 + iVar9);
          if (iVar3 < 0) {
            FUN_00379868();
            uVar6 = 0x40;
            goto LAB_0044a148;
          }
          goto LAB_0044a02c;
        }
        FUN_00379868();
        FUN_0037995c("crypto/pkcs12/p12_decr.c",0x3a,"PKCS12_pbe_crypt_ex");
        uVar6 = 0x77;
        goto LAB_0044a0fc;
      }
      iVar1 = local_48 + iVar1;
LAB_0044a02c:
      lVar5 = FUN_003c83a4((long)iVar1,"crypto/pkcs12/p12_decr.c",0x46);
      if (lVar5 == 0) goto LAB_0044a108;
      iVar1 = FUN_003803d0(lVar4,lVar5,&local_44,param_4,iVar9);
      if (iVar1 == 0) {
        FUN_003c86b4(lVar5,"crypto/pkcs12/p12_decr.c",0x4a);
        FUN_00379868();
        uVar6 = 0x4c;
        goto LAB_0044a0ec;
      }
      lVar10 = (long)local_44;
      iVar1 = FUN_0038095c(lVar4,lVar5 + lVar10,&local_44);
      if (iVar1 != 0) {
        uVar8 = local_44 + lVar10;
        FUN_0038944c(lVar4);
        uVar2 = FUN_00388e44();
        if (((uVar2 >> 0x19 & 1) != 0) && (iVar1 = FUN_00389488(lVar4), iVar1 != 0)) {
          iVar1 = FUN_00381710(lVar4,0x10,local_48,lVar5 + uVar8);
          if (iVar1 < 0) {
            FUN_003c86b4(lVar5,"crypto/pkcs12/p12_decr.c",0x5f);
            FUN_00379868();
            uVar6 = 0x61;
            goto LAB_0044a148;
          }
          uVar8 = (ulong)(uint)(local_48 + (int)uVar8);
        }
        if (param_7 != (undefined4 *)0x0) {
          *param_7 = (int)uVar8;
        }
        if (param_6 != (long *)0x0) {
          *param_6 = lVar5;
        }
        goto LAB_0044a108;
      }
      FUN_003c86b4(lVar5,"crypto/pkcs12/p12_decr.c",0x52);
      FUN_00379868();
      FUN_0037995c("crypto/pkcs12/p12_decr.c",0x54,"PKCS12_pbe_crypt_ex");
      pcVar7 = "empty password";
      if (param_3 != 0) {
        pcVar7 = "maybe wrong password";
      }
      uVar6 = 0x74;
    }
    FUN_00379a5c(0x23,uVar6,pcVar7);
  }
  lVar5 = 0;
LAB_0044a108:
  FUN_0037fae8(lVar4);
  return lVar5;
}


// ===== 0044a270  FUN_0044a270 =====

void FUN_0044a270(void)

{
  FUN_00449f78();
  return;
}


// ===== 0044a290  FUN_0044a290 =====

long FUN_0044a290(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 *param_5,int param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  local_34 = 0;
  lVar1 = FUN_00449f78(param_1,param_3,param_4,*(undefined8 *)(param_5 + 2),*param_5,&local_28,
                       &local_34,0,param_7,param_8);
  if (lVar1 != 0) {
    local_30 = local_28;
    lVar1 = FUN_0038a93c(0,&local_30,(long)local_34,param_2);
    if (param_6 != 0) {
      FUN_003c89b8(local_28,(long)local_34);
    }
    if (lVar1 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/pkcs12/p12_decr.c",0x97,"PKCS12_item_decrypt_d2i_ex");
      FUN_00379a5c(0x23,0x65,0);
    }
    FUN_003c86b4(local_28,"crypto/pkcs12/p12_decr.c",0x98);
    return lVar1;
  }
  return 0;
}


// ===== 0044a384  FUN_0044a384 =====

void FUN_0044a384(void)

{
  FUN_0044a290();
  return;
}


// ===== 0044a390  FUN_0044a390 =====

long FUN_0044a390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,int param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long local_48;
  
  local_48 = 0;
  lVar2 = FUN_0038a358();
  if (lVar2 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/pkcs12/p12_decr.c",0xb5,"PKCS12_item_i2d_encrypt_ex");
    uVar4 = 0x8000d;
  }
  else {
    iVar1 = FUN_0039b478(param_5,&local_48,param_2);
    if (local_48 != 0) {
      lVar3 = FUN_00449f78(param_1,param_3,param_4,local_48,iVar1,lVar2 + 8,lVar2,1,param_7,param_8)
      ;
      if (lVar3 != 0) {
        if (param_6 != 0) {
          FUN_003c89b8(local_48,(long)iVar1);
        }
        FUN_003c86b4(local_48,"crypto/pkcs12/p12_decr.c",0xc5);
        return lVar2;
      }
      FUN_00379868();
      FUN_0037995c("crypto/pkcs12/p12_decr.c",0xbf,"PKCS12_item_i2d_encrypt_ex");
      FUN_00379a5c(0x23,0x67,0);
      FUN_003c86b4(local_48,"crypto/pkcs12/p12_decr.c",0xc0);
      goto LAB_0044a4a4;
    }
    FUN_00379868();
    FUN_0037995c("crypto/pkcs12/p12_decr.c",0xba,"PKCS12_item_i2d_encrypt_ex");
    uVar4 = 0x66;
  }
  FUN_00379a5c(0x23,uVar4,0);
LAB_0044a4a4:
  thunk_FUN_0038eddc(lVar2);
  return 0;
}


// ===== 0044a518  FUN_0044a518 =====

void FUN_0044a518(void)

{
  FUN_0044a390();
  return;
}


// ===== 0044a524  FUN_0044a524 =====

void FUN_0044a524(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           FUN_003c8474(0x18,"providers/implementations/encode_decode/decode_msblob2key.c",0x42);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = &DAT_007877f8;
  }
  return;
}


// ===== 0044a564  FUN_0044a564 =====

void FUN_0044a564(undefined8 param_1)

{
  FUN_003c86b4(param_1,"providers/implementations/encode_decode/decode_msblob2key.c",0x4f);
  return;
}


// ===== 0044a574  FUN_0044a574 =====

bool FUN_0044a574(undefined8 param_1,uint param_2)

{
  return (param_2 & 3) != 0 || param_2 == 0;
}


// ===== 0044a584  FUN_0044a584 =====

undefined4
FUN_0044a584(undefined8 *param_1,undefined8 param_2,uint param_3,code *param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  int local_88;
  int local_84;
  undefined1 auStack_80 [4];
  undefined4 local_7c;
  undefined1 auStack_78 [16];
  undefined1 *local_68;
  
  lVar6 = FUN_0043f154(*param_1);
  local_90 = 0;
  local_88 = -1;
  local_84 = -1;
  if (lVar6 == 0) {
    return 0;
  }
  iVar2 = FUN_0037dd7c(lVar6,auStack_78,0x10);
  if (iVar2 == 0x10) {
    FUN_0037f6d4();
    local_68 = auStack_78;
    iVar2 = FUN_0044a9e8(&local_68,0x10,auStack_80,&local_7c,&local_84,&local_88);
    FUN_0037f71c();
    if (iVar2 < 1) {
LAB_0044a6b0:
      puVar9 = (undefined1 *)0x0;
      goto LAB_0044a6b4;
    }
    *(uint *)(param_1 + 2) = param_3;
    if (local_84 == 0) {
      if (*(int *)param_1[1] != 6) goto LAB_0044a6b0;
    }
    else if (*(int *)param_1[1] != 0x74) goto LAB_0044a6b0;
    uVar3 = FUN_0044ad04(local_7c,local_84,local_88);
    if (0x19000 < uVar3) {
      puVar9 = (undefined1 *)0x0;
      uVar7 = 0x80;
      uVar8 = 0x83;
      goto LAB_0044a678;
    }
    puVar9 = (undefined1 *)
             FUN_003c83a4(uVar3,"providers/implementations/encode_decode/decode_msblob2key.c",0x86);
    if (puVar9 == (undefined1 *)0x0) {
LAB_0044a854:
      uVar5 = 0;
      goto LAB_0044a6dc;
    }
    local_68 = puVar9;
    uVar4 = FUN_0037dd7c(lVar6,puVar9,uVar3);
    if (uVar4 != uVar3) {
      uVar7 = 0x7b;
      uVar8 = 0x8b;
      goto LAB_0044a678;
    }
    if (param_3 == 0) {
      if (local_88 != 0) goto LAB_0044a7f4;
LAB_0044a78c:
      if (*(long *)(param_1[1] + 0x18) == 0) {
LAB_0044a7e4:
        if (param_3 != 0) goto LAB_0044a7ec;
        goto LAB_0044a7f0;
      }
      uStack_118 = 0;
      local_120 = 0;
      local_108 = 0;
      uStack_110 = 0;
      uStack_128 = 0;
      local_130 = 0;
      iVar2 = FUN_003d083c(&local_130,param_6,param_7);
      if (iVar2 == 0) goto LAB_0044a854;
      local_68 = puVar9;
      local_90 = (**(code **)(param_1[1] + 0x18))(&local_68,local_7c,local_88);
      if ((param_3 != 0) && (local_90 == 0)) goto LAB_0044a6b4;
      if (local_90 == 0) goto LAB_0044a7e4;
    }
    else {
      if (((param_3 & 1) != 0) && (local_88 == 0)) goto LAB_0044a78c;
LAB_0044a7ec:
      if ((param_3 >> 1 & 1) == 0) goto LAB_0044a6b4;
LAB_0044a7f0:
      if (local_88 == 0) goto LAB_0044a6b4;
LAB_0044a7f4:
      if ((*(code **)(param_1[1] + 0x20) == (code *)0x0) ||
         (local_68 = puVar9, local_90 = (**(code **)(param_1[1] + 0x20))(&local_68,local_7c),
         local_90 == 0)) goto LAB_0044a6b4;
    }
    if (*(code **)(param_1[1] + 0x28) == (code *)0x0) {
      FUN_003c86b4(puVar9,"providers/implementations/encode_decode/decode_msblob2key.c",0xb6);
      FUN_0037db50(lVar6);
LAB_0044a87c:
      local_134 = 2;
      FUN_003cb668(&local_130,&DAT_001eccc2,&local_134);
      FUN_003cd8cc(&local_160,"data-type",*(undefined8 *)(param_1[1] + 8),0);
      local_e8 = local_140;
      uStack_100 = uStack_158;
      local_108 = local_160;
      uStack_f0 = uStack_148;
      local_f8 = uStack_150;
      FUN_003cd924(&local_160,"reference",&local_90,8);
      local_c0 = local_140;
      uStack_d8 = uStack_158;
      local_e0 = local_160;
      uStack_c8 = uStack_148;
      uStack_d0 = uStack_150;
      FUN_003cdfcc(&local_160);
      uStack_b0 = uStack_158;
      local_b8 = local_160;
      uStack_a0 = uStack_148;
      local_a8 = uStack_150;
      local_98 = local_140;
      uVar5 = (*param_4)(&local_130,param_5);
      lVar6 = 0;
      puVar9 = (undefined1 *)0x0;
      goto LAB_0044a6dc;
    }
    (**(code **)(param_1[1] + 0x28))(local_90,param_1);
    lVar1 = local_90;
    FUN_003c86b4(puVar9,"providers/implementations/encode_decode/decode_msblob2key.c",0xb6);
    FUN_0037db50(lVar6);
    if (lVar1 != 0) goto LAB_0044a87c;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    uVar7 = 0x7b;
    uVar8 = 0x70;
LAB_0044a678:
    FUN_00379868();
    FUN_0037995c("providers/implementations/encode_decode/decode_msblob2key.c",uVar8,
                 "msblob2key_decode");
    FUN_00379a5c(9,uVar7,0);
LAB_0044a6b4:
    FUN_003c86b4(puVar9,"providers/implementations/encode_decode/decode_msblob2key.c",0xb6);
    FUN_0037db50(lVar6);
  }
  lVar6 = 0;
  puVar9 = (undefined1 *)0x0;
  uVar5 = 1;
LAB_0044a6dc:
  FUN_0037db50(lVar6);
  FUN_003c86b4(puVar9,"providers/implementations/encode_decode/decode_msblob2key.c",0xcf);
  (**(code **)(param_1[1] + 0x30))(local_90);
  return uVar5;
}


// ===== 0044a92c  FUN_0044a92c =====

undefined8
FUN_0044a92c(long param_1,undefined8 *param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_00451634(*(undefined8 *)(*(long *)(param_1 + 8) + 0x10));
  if ((param_3 == 8) && (UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    iVar1 = 0x87;
    if (*(int *)(param_1 + 0x10) != 0) {
      iVar1 = *(int *)(param_1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x0044a99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(*param_2,iVar1,param_4,param_5);
    return uVar2;
  }
  return 0;
}


// ===== 0044a9b8  FUN_0044a9b8 =====

void FUN_0044a9b8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0046b880(*param_2);
  FUN_003fa7a4(param_1,uVar1);
  return;
}


// ===== 0044a9e8  FUN_0044a9e8 =====

undefined8
FUN_0044a9e8(long *param_1,uint param_2,int *param_3,undefined4 *param_4,int *param_5,int *param_6)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  char *pcVar4;
  int iVar5;
  
  if (param_2 < 0x10) {
    return 0;
  }
  pcVar4 = (char *)*param_1;
  if (*pcVar4 == '\a') {
    if (*param_6 == 1) {
      FUN_00379868();
      uVar3 = 0xb7;
      goto LAB_0044aac0;
    }
    *param_6 = 0;
    cVar2 = pcVar4[1];
  }
  else {
    if (*pcVar4 != '\x06') {
      return 0;
    }
    if (*param_6 == 0) {
      FUN_00379868();
      uVar3 = 0xaf;
      goto LAB_0044ab44;
    }
    *param_6 = 1;
    cVar2 = pcVar4[1];
  }
  if (cVar2 != '\x02') {
    FUN_00379868();
    FUN_0037995c("crypto/pem/pvkfmt.c",0xc3,"ossl_do_blob_header");
    FUN_00379a5c(9,0x75,0);
    return 0;
  }
  *param_3 = *(int *)(pcVar4 + 8);
  *param_4 = *(undefined4 *)(pcVar4 + 0xc);
  iVar1 = *param_3;
  if (iVar1 < 0x32415352) {
    if ((iVar1 != 0x31415352) && (iVar1 != 0x31535344)) {
LAB_0044ac1c:
      FUN_00379868();
      uVar3 = 0xde;
      goto LAB_0044ac94;
    }
    if (*param_6 == 0) {
      FUN_00379868();
      uVar3 = 0xd0;
LAB_0044ab44:
      FUN_0037995c("crypto/pem/pvkfmt.c",uVar3,"ossl_do_blob_header");
      FUN_00379a5c(9,0x77,0);
      return 0;
    }
  }
  else {
    if ((iVar1 != 0x32415352) && (iVar1 != 0x32535344)) goto LAB_0044ac1c;
    if (*param_6 == 1) {
      FUN_00379868();
      uVar3 = 0xd8;
LAB_0044aac0:
      FUN_0037995c("crypto/pem/pvkfmt.c",uVar3,"ossl_do_blob_header");
      FUN_00379a5c(9,0x78,0);
      return 0;
    }
  }
  if (iVar1 < 0x32415352) {
    if (iVar1 == 0x31415352) {
LAB_0044ac38:
      if (*param_5 == 1) {
        FUN_00379868();
        FUN_0037995c("crypto/pem/pvkfmt.c",0xef,"ossl_do_blob_header");
        FUN_00379a5c(9,0x84,0);
        return 0;
      }
      *param_5 = 0;
      *param_1 = (long)(pcVar4 + 0x10);
      return 1;
    }
    iVar5 = 0x31535344;
  }
  else {
    if (iVar1 == 0x32415352) goto LAB_0044ac38;
    iVar5 = 0x32535344;
  }
  if (iVar1 == iVar5) {
    if (*param_5 != 0) {
      *param_5 = 1;
      *param_1 = (long)(pcVar4 + 0x10);
      return 1;
    }
    FUN_00379868();
    FUN_0037995c("crypto/pem/pvkfmt.c",0xe7,"ossl_do_blob_header");
    FUN_00379a5c(9,0x83,0);
    return 0;
  }
  FUN_00379868();
  uVar3 = 0xf6;
LAB_0044ac94:
  FUN_0037995c("crypto/pem/pvkfmt.c",uVar3,"ossl_do_blob_header");
  FUN_00379a5c(9,0x74,0);
  return 0xffffffff;
}


// ===== 0044ad04  FUN_0044ad04 =====

int FUN_0044ad04(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_1 + 7U >> 3;
  uVar4 = (param_1 + 0xfU >> 4) * 5 + uVar3 * 2;
  if (param_3 != 0) {
    uVar4 = uVar3;
  }
  iVar1 = uVar3 * 2 + 0x40;
  if (param_3 != 0) {
    iVar1 = uVar3 * 3 + 0x2c;
  }
  iVar2 = uVar4 + 4;
  if (param_2 != 0) {
    iVar2 = iVar1;
  }
  return iVar2;
}


// ===== 0044ad50  FUN_0044ad50 =====

void FUN_0044ad50(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int local_14;
  
  local_14 = -1;
  uVar2 = FUN_0044ad9c(*param_1,param_2,&local_14,param_3);
  uVar3 = 0x74;
  if (local_14 != 1) {
    uVar3 = 0;
  }
  uVar1 = 6;
  if (local_14 != 0) {
    uVar1 = uVar3;
  }
  FUN_0044aecc(uVar2,uVar1);
  return;
}


// ===== 0044ad9c  FUN_0044ad9c =====

long FUN_0044ad9c(undefined8 param_1,undefined8 param_2,int *param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 auStack_38 [4];
  int local_34;
  undefined8 local_18;
  
  local_18 = param_1;
  iVar2 = FUN_0044a9e8(&local_18,param_2,auStack_38,&local_34,param_3,param_4);
  if (iVar2 < 1) {
    uVar6 = 0x7a;
    uVar4 = 0x126;
  }
  else {
    uVar5 = local_34 + 7U >> 3;
    if (*param_3 == 0) {
      if (*param_4 == 0) {
        uVar5 = (local_34 + 0xfU >> 4) * 5 + uVar5 * 2;
      }
      uVar5 = uVar5 + 4;
    }
    else if (*param_4 == 0) {
      uVar5 = uVar5 * 2 + 0x40;
    }
    else {
      uVar5 = uVar5 * 3 + 0x2c;
    }
    bVar1 = uVar5 <= (int)param_2 - 0x10U;
    uVar4 = 299;
    if (bVar1) {
      uVar4 = 0x136;
    }
    uVar6 = 0x7b;
    if ((bVar1) && (uVar6 = 0x6e, *param_3 == 0)) {
      lVar3 = FUN_0044b20c(&local_18);
      if (lVar3 != 0) {
        return lVar3;
      }
      uVar6 = 0x6e;
      uVar4 = 0x136;
    }
  }
  FUN_00379868();
  FUN_0037995c("crypto/pem/pvkfmt.c",uVar4,"do_b2i_key");
  FUN_00379a5c(9,uVar6,0);
  return 0;
}


// ===== 0044aecc  FUN_0044aecc =====

long FUN_0044aecc(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1;
  if (param_1 != 0) {
    if ((param_2 == 6) || (param_2 == 0x74)) {
      lVar2 = FUN_003a8a70();
      if (lVar2 == 0) {
        FUN_00379868();
        FUN_0037995c("crypto/pem/pvkfmt.c",0x6c,"evp_pkey_new0_key");
        FUN_00379a5c(9,0x80006,0);
        lVar2 = 0;
        if (param_2 != 6) {
          return 0;
        }
      }
      else {
        if (param_2 != 6) {
          return lVar2;
        }
        iVar1 = FUN_003b09ec(lVar2,param_1);
        if (iVar1 == 0) {
          FUN_00379868();
          FUN_0037995c("crypto/pem/pvkfmt.c",0x5d,"evp_pkey_new0_key");
          FUN_00379a5c(9,0x80006,0);
          FUN_003a6c04(lVar2);
          lVar2 = 0;
        }
      }
      FUN_003fa6a0(param_1);
    }
    else {
      FUN_00379868();
      FUN_0037995c("crypto/pem/pvkfmt.c",0x54,"evp_pkey_new0_key");
      FUN_00379a5c(9,0xc0103,0);
      lVar2 = 0;
    }
  }
  return lVar2;
}


// ===== 0044afec  FUN_0044afec =====

undefined8 FUN_0044afec(undefined8 param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  int local_64;
  undefined1 auStack_60 [4];
  int local_5c;
  undefined1 auStack_58 [16];
  undefined1 *local_48;
  
  local_64 = -1;
  iVar2 = FUN_0037dd7c(param_1,auStack_58,0x10);
  if (iVar2 != 0x10) {
    FUN_00379868();
    FUN_0037995c("crypto/pem/pvkfmt.c",0x14f,"ossl_b2i_bio");
    uVar7 = 0x7b;
LAB_0044b0cc:
    FUN_00379a5c(9,uVar7,0);
    return 0;
  }
  local_48 = auStack_58;
  iVar3 = FUN_0044a9e8(&local_48,0x10,auStack_60,&local_5c,&local_64,param_2);
  iVar2 = local_64;
  if (iVar3 < 1) {
    return 0;
  }
  uVar1 = local_5c + 7U >> 3;
  if (local_64 == 0) {
    if (*param_2 == 0) {
      uVar1 = (local_5c + 0xfU >> 4) * 5 + uVar1 * 2;
    }
    uVar1 = uVar1 + 4;
  }
  else if (*param_2 == 0) {
    uVar1 = uVar1 * 2 + 0x40;
  }
  else {
    uVar1 = uVar1 * 3 + 0x2c;
  }
  if (0x19000 < uVar1) {
    FUN_00379868();
    FUN_0037995c("crypto/pem/pvkfmt.c",0x158,"ossl_b2i_bio");
    uVar7 = 0x80;
    goto LAB_0044b0cc;
  }
  puVar5 = (undefined1 *)FUN_003c83a4(uVar1,"crypto/pem/pvkfmt.c",0x15b);
  if (puVar5 != (undefined1 *)0x0) {
    local_48 = puVar5;
    uVar4 = FUN_0037dd7c(param_1,puVar5,uVar1);
    if (uVar4 == uVar1) {
      if ((iVar2 == 0) && (lVar6 = FUN_0044b20c(&local_48,local_5c,*param_2), lVar6 != 0)) {
        uVar7 = FUN_0044aecc(lVar6,6);
        goto LAB_0044b1b8;
      }
      FUN_00379868();
      FUN_0037995c("crypto/pem/pvkfmt.c",0x16c,"ossl_b2i_bio");
      uVar7 = 0x6e;
    }
    else {
      FUN_00379868();
      FUN_0037995c("crypto/pem/pvkfmt.c",0x160,"ossl_b2i_bio");
      uVar7 = 0x7b;
    }
    FUN_00379a5c(9,uVar7,0);
  }
  uVar7 = 0;
LAB_0044b1b8:
  FUN_003c86b4(puVar5,"crypto/pem/pvkfmt.c",0x172);
  return uVar7;
}


// ===== 0044b20c  FUN_0044b20c =====

long FUN_0044b20c(long *param_1,int param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  long lVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  
  puVar16 = (undefined4 *)*param_1;
  uVar14 = 0x80003;
  lVar5 = FUN_003fa500();
  if (lVar5 == 0) {
    lVar7 = 0;
    lVar15 = 0;
    lVar6 = 0;
LAB_0044b300:
    lVar12 = 0;
    lVar11 = 0;
    lVar10 = 0;
LAB_0044b304:
    lVar9 = 0;
    lVar8 = 0;
    uVar13 = 0x1f0;
    uVar14 = 0x80004;
    goto LAB_0044b308;
  }
  lVar6 = FUN_0038f584();
  if (lVar6 == 0) {
LAB_0044b2bc:
    lVar7 = 0;
LAB_0044b2c0:
    lVar8 = 0;
LAB_0044b2c8:
    lVar9 = 0;
LAB_0044b2cc:
    lVar10 = 0;
LAB_0044b2d0:
    lVar11 = 0;
  }
  else {
    puVar17 = puVar16 + 1;
    iVar4 = FUN_0038f9ec(lVar6,*puVar16);
    if (iVar4 == 0) goto LAB_0044b2bc;
    uVar2 = (ulong)(param_2 + 7U >> 3);
    lVar7 = FUN_0039011c(puVar17,uVar2,0);
    if (lVar7 == 0) goto LAB_0044b2c0;
    lVar1 = (long)puVar17 + uVar2;
    if (param_3 != 0) {
      lVar15 = 0;
      iVar4 = FUN_003fae98(lVar5,lVar7,lVar6,0);
joined_r0x0044b2ac:
      if (iVar4 != 0) {
        *param_1 = lVar1;
        return lVar5;
      }
      goto LAB_0044b300;
    }
    uVar3 = (ulong)(param_2 + 0xfU >> 4);
    lVar8 = FUN_0039011c(lVar1,uVar3,0);
    if (lVar8 == 0) goto LAB_0044b2c8;
    lVar9 = FUN_0039011c(lVar1 + uVar3,uVar3,0);
    if (lVar9 == 0) goto LAB_0044b2cc;
    lVar1 = lVar1 + uVar3 + uVar3;
    lVar10 = FUN_0039011c(lVar1,uVar3,0);
    if (lVar10 == 0) goto LAB_0044b2d0;
    lVar1 = lVar1 + uVar3;
    lVar11 = FUN_0039011c(lVar1,uVar3,0);
    if (lVar11 != 0) {
      lVar1 = lVar1 + uVar3;
      lVar12 = FUN_0039011c(lVar1,uVar3,0);
      if (lVar12 == 0) {
        lVar15 = 0;
      }
      else {
        lVar1 = lVar1 + uVar3;
        lVar15 = FUN_0039011c(lVar1,uVar2,0);
        if (lVar15 != 0) {
          iVar4 = FUN_003faf58(lVar5,lVar8,lVar9);
          if (iVar4 == 0) {
            uVar13 = 0x1f0;
            uVar14 = 0x80004;
            goto LAB_0044b308;
          }
          iVar4 = FUN_003fb010(lVar5,lVar10,lVar11,lVar12);
          if (iVar4 != 0) {
            lVar1 = lVar1 + uVar2;
            iVar4 = FUN_003fae98(lVar5,lVar7,lVar6,lVar15);
            goto joined_r0x0044b2ac;
          }
          goto LAB_0044b304;
        }
      }
      uVar13 = 499;
      uVar14 = 0x80003;
      goto LAB_0044b308;
    }
  }
  lVar15 = 0;
  lVar12 = 0;
  uVar13 = 499;
LAB_0044b308:
  FUN_00379868();
  FUN_0037995c("crypto/pem/pvkfmt.c",uVar13,"ossl_b2i_RSA_after_header");
  FUN_00379a5c(9,uVar14,0);
  FUN_0038f4f4(lVar6);
  FUN_0038f4f4(lVar7);
  FUN_0038f4f4(lVar8);
  FUN_0038f4f4(lVar9);
  FUN_0038f4f4(lVar10);
  FUN_0038f4f4(lVar11);
  FUN_0038f4f4(lVar12);
  FUN_0038f4f4(lVar15);
  FUN_003fa6a0(lVar5);
  return 0;
}


// ===== 0044b504  FUN_0044b504 =====

void FUN_0044b504(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 local_18;
  int local_14;
  
  local_18 = 0;
  local_14 = -1;
  uVar2 = FUN_0044ad9c(*param_1,param_2,&local_14,&local_18);
  uVar3 = 0x74;
  if (local_14 != 1) {
    uVar3 = 0;
  }
  uVar1 = 6;
  if (local_14 != 0) {
    uVar1 = uVar3;
  }
  FUN_0044aecc(uVar2,uVar1);
  return;
}


// ===== 0044b554  FUN_0044b554 =====

void FUN_0044b554(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 local_18;
  int local_14;
  
  local_18 = 1;
  local_14 = -1;
  uVar2 = FUN_0044ad9c(*param_1,param_2,&local_14,&local_18);
  uVar3 = 0x74;
  if (local_14 != 1) {
    uVar3 = 0;
  }
  uVar1 = 6;
  if (local_14 != 0) {
    uVar1 = uVar3;
  }
  FUN_0044aecc(uVar2,uVar1);
  return;
}


// ===== 0044b5a8  FUN_0044b5a8 =====

void FUN_0044b5a8(undefined8 param_1)

{
  undefined4 local_14;
  
  local_14 = 0;
  FUN_0044afec(param_1,&local_14);
  return;
}


// ===== 0044b5cc  FUN_0044b5cc =====

void FUN_0044b5cc(undefined8 param_1)

{
  undefined4 local_14;
  
  local_14 = 1;
  FUN_0044afec(param_1,&local_14);
  return;
}


// ===== 0044b5f4  FUN_0044b5f4 =====

int FUN_0044b5f4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_28;
  
  local_28 = 0;
  iVar1 = FUN_0044bcec(&local_28,param_2,0);
  if (-1 < iVar1) {
    iVar2 = FUN_0037df4c(param_1,local_28,iVar1);
    FUN_003c86b4(local_28,"crypto/pem/pvkfmt.c",0x276);
    if (iVar2 != iVar1) {
      iVar1 = -1;
    }
    return iVar1;
  }
  return -1;
}


// ===== 0044b678  FUN_0044b678 =====

int FUN_0044b678(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_28;
  
  local_28 = 0;
  iVar1 = FUN_0044bcec(&local_28,param_2,1);
  if (-1 < iVar1) {
    iVar2 = FUN_0037df4c(param_1,local_28,iVar1);
    FUN_003c86b4(local_28,"crypto/pem/pvkfmt.c",0x276);
    if (iVar2 != iVar1) {
      iVar1 = -1;
    }
    return iVar1;
  }
  return -1;
}


// ===== 0044b6fc  FUN_0044b6fc =====

undefined8 FUN_0044b6fc(long *param_1,uint param_2,int param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = (int *)*param_1;
  if (param_3 == 0) {
    if (0x17 < param_2) {
      piVar5 = piVar4 + 1;
      if (*piVar4 != -0x4f4a0ee2) {
        FUN_00379868();
        FUN_0037995c("crypto/pem/pvkfmt.c",0x30b,"ossl_do_PVK_header");
        FUN_00379a5c(9,0x74,0);
        return 0;
      }
      goto LAB_0044b784;
    }
    FUN_00379868();
    uVar3 = 0x306;
  }
  else {
    piVar5 = piVar4;
    if (0x13 < param_2) {
LAB_0044b784:
      iVar1 = piVar5[2];
      *param_4 = piVar5[3];
      uVar2 = piVar5[4];
      *param_5 = uVar2;
      if (0x19000 < uVar2) {
        return 0;
      }
      if (0x2800 < *param_4) {
        return 0;
      }
      if ((iVar1 != 0) && (*param_4 == 0)) {
        FUN_00379868();
        FUN_0037995c("crypto/pem/pvkfmt.c",0x31c,"ossl_do_PVK_header");
        FUN_00379a5c(9,0x79,0);
        return 0;
      }
      *param_1 = (long)(piVar5 + 5);
      return 1;
    }
    FUN_00379868();
    uVar3 = 0x301;
  }
  FUN_0037995c("crypto/pem/pvkfmt.c",uVar3,"ossl_do_PVK_header");
  FUN_00379a5c(9,0x7d,0);
  return 0;
}


// ===== 0044b850  FUN_0044b850 =====

void FUN_0044b850(undefined8 param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0;
  local_18 = 0;
  FUN_0044b87c(param_1,&local_14,&local_18);
  return;
}


// ===== 0044b87c  FUN_0044b87c =====

undefined8 FUN_0044b87c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int local_70;
  int iStack_6c;
  undefined1 auStack_68 [24];
  undefined1 *local_38;
  
  iVar1 = FUN_0037dd7c(param_1,auStack_68,0x18);
  if (iVar1 != 0x18) {
    FUN_00379868();
    FUN_0037995c("crypto/pem/pvkfmt.c",0x3af,"do_PVK_key_bio");
    FUN_00379a5c(9,0x7c,0);
    return 0;
  }
  local_38 = auStack_68;
  iVar1 = FUN_0044b6fc(&local_38,0x18,0,&iStack_6c,&local_70);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = iStack_6c + local_70;
  lVar3 = FUN_003c83a4((long)iVar1,"crypto/pem/pvkfmt.c",0x3b7);
  if (lVar3 == 0) {
    return 0;
  }
  iVar2 = FUN_0037dd7c(param_1,lVar3,iVar1);
  if (iVar2 != iVar1) {
    FUN_00379868();
    FUN_0037995c("crypto/pem/pvkfmt.c",0x3bc,"do_PVK_key_bio");
    FUN_00379a5c(9,0x7c,0);
    uVar5 = 0;
    goto LAB_0044ba14;
  }
  lVar4 = FUN_0037fab8();
  if (lVar4 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/pem/pvkfmt.c",0x355,"do_PVK_body_key");
    uVar5 = 0x80006;
LAB_0044b9e4:
    FUN_00379a5c(9,uVar5,0);
    uVar5 = 0;
  }
  else {
    if (iStack_6c != 0) {
      FUN_00379868();
      FUN_0037995c("crypto/pem/pvkfmt.c",0x392,"do_PVK_body_key");
      uVar5 = 0x71;
      goto LAB_0044b9e4;
    }
    uVar5 = FUN_0044ad9c(lVar3,local_70,param_2,param_3);
  }
  FUN_0037fae8(lVar4);
LAB_0044ba14:
  FUN_003c893c(lVar3,(long)iVar1,"crypto/pem/pvkfmt.c",0x3c2);
  return uVar5;
}


// ===== 0044ba4c  FUN_0044ba4c =====

void FUN_0044ba4c(undefined8 param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0;
  local_18 = 0;
  FUN_0044b87c(param_1,&local_14,&local_18);
  return;
}


// ===== 0044ba78  FUN_0044ba78 =====

void FUN_0044ba78(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 local_18;
  int local_14;
  
  local_14 = -1;
  local_18 = 0xffffffff;
  uVar2 = FUN_0044b87c(param_1,&local_14,&local_18);
  uVar3 = 0x74;
  if (local_14 != 1) {
    uVar3 = 0;
  }
  uVar1 = 6;
  if (local_14 != 0) {
    uVar1 = uVar3;
  }
  FUN_0044aecc(uVar2,uVar1);
  return;
}


// ===== 0044bac4  FUN_0044bac4 =====

void FUN_0044bac4(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 local_18;
  int local_14;
  
  local_14 = -1;
  local_18 = 0xffffffff;
  uVar2 = FUN_0044b87c(param_1,&local_14,&local_18);
  uVar3 = 0x74;
  if (local_14 != 1) {
    uVar3 = 0;
  }
  uVar1 = 6;
  if (local_14 != 0) {
    uVar1 = uVar3;
  }
  FUN_0044aecc(uVar2,uVar1);
  return;
}


// ===== 0044bb10  FUN_0044bb10 =====

int FUN_0044bb10(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *local_38;
  
  iVar2 = FUN_0044bcec(0,param_2,0);
  if (-1 < iVar2) {
    iVar6 = 0x28;
    if (param_3 == 0) {
      iVar6 = 0x18;
    }
    iVar6 = iVar2 + iVar6;
    puVar4 = (undefined4 *)FUN_003c83a4(iVar6,"crypto/pem/pvkfmt.c",0x40b);
    if (puVar4 != (undefined4 *)0x0) {
      local_38 = puVar4;
      lVar5 = FUN_0037fab8();
      uVar1 = DAT_001b7038;
      if (lVar5 != 0) {
        puVar4[1] = 0;
        *puVar4 = (int)uVar1;
        iVar3 = FUN_003a7c64(param_2);
        if (iVar3 == 6) {
          puVar7 = puVar4 + 3;
          puVar4[2] = 1;
        }
        else {
          puVar7 = puVar4 + 2;
        }
        *(bool *)puVar7 = param_3 != 0;
        *(undefined2 *)((long)puVar7 + 1) = 0;
        *(char *)(puVar7 + 1) = (param_3 != 0) << 4;
        *(undefined1 *)((long)puVar7 + 3) = 0;
        *(char *)((long)puVar7 + 9) = (char)((uint)iVar2 >> 8);
        *(undefined2 *)((long)puVar7 + 5) = 0;
        *(char *)((long)puVar7 + 10) = (char)((uint)iVar2 >> 0x10);
        local_38 = puVar7 + 3;
        *(undefined1 *)((long)puVar7 + 7) = 0;
        *(char *)(puVar7 + 2) = (char)iVar2;
        *(char *)((long)puVar7 + 0xb) = (char)((uint)iVar2 >> 0x18);
        FUN_0044bcec(&local_38,param_2,0);
        if (param_3 == 0) {
          FUN_0037fae8(lVar5);
          iVar2 = FUN_0037df4c(param_1,puVar4,iVar6);
          FUN_003c86b4(puVar4,"crypto/pem/pvkfmt.c",0x463);
          if (iVar2 != iVar6) {
            FUN_00379868();
            FUN_0037995c("crypto/pem/pvkfmt.c",0x467,"i2b_PVK_bio_ex");
            FUN_00379a5c(9,0x76,0);
            return -1;
          }
          return iVar6;
        }
        FUN_00379868();
        FUN_0037995c("crypto/pem/pvkfmt.c",0x445,"i2b_PVK");
        FUN_00379a5c(9,0x71,0);
      }
      FUN_0037fae8(lVar5);
      FUN_003c86b4(puVar4,"crypto/pem/pvkfmt.c",0x453);
    }
  }
  return -1;
}


// ===== 0044bce8  thunk_FUN_0044bb10 =====

int thunk_FUN_0044bb10(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puStack_38;
  
  iVar2 = FUN_0044bcec(0,param_2,0);
  if (-1 < iVar2) {
    iVar6 = 0x28;
    if (param_3 == 0) {
      iVar6 = 0x18;
    }
    iVar6 = iVar2 + iVar6;
    puVar4 = (undefined4 *)FUN_003c83a4(iVar6,"crypto/pem/pvkfmt.c",0x40b);
    if (puVar4 != (undefined4 *)0x0) {
      puStack_38 = puVar4;
      lVar5 = FUN_0037fab8();
      uVar1 = DAT_001b7038;
      if (lVar5 != 0) {
        puVar4[1] = 0;
        *puVar4 = (int)uVar1;
        iVar3 = FUN_003a7c64(param_2);
        if (iVar3 == 6) {
          puVar7 = puVar4 + 3;
          puVar4[2] = 1;
        }
        else {
          puVar7 = puVar4 + 2;
        }
        *(bool *)puVar7 = param_3 != 0;
        *(undefined2 *)((long)puVar7 + 1) = 0;
        *(char *)(puVar7 + 1) = (param_3 != 0) << 4;
        *(undefined1 *)((long)puVar7 + 3) = 0;
        *(char *)((long)puVar7 + 9) = (char)((uint)iVar2 >> 8);
        *(undefined2 *)((long)puVar7 + 5) = 0;
        *(char *)((long)puVar7 + 10) = (char)((uint)iVar2 >> 0x10);
        puStack_38 = puVar7 + 3;
        *(undefined1 *)((long)puVar7 + 7) = 0;
        *(char *)(puVar7 + 2) = (char)iVar2;
        *(char *)((long)puVar7 + 0xb) = (char)((uint)iVar2 >> 0x18);
        FUN_0044bcec(&puStack_38,param_2,0);
        if (param_3 == 0) {
          FUN_0037fae8(lVar5);
          iVar2 = FUN_0037df4c(param_1,puVar4,iVar6);
          FUN_003c86b4(puVar4,"crypto/pem/pvkfmt.c",0x463);
          if (iVar2 != iVar6) {
            FUN_00379868();
            FUN_0037995c("crypto/pem/pvkfmt.c",0x467,"i2b_PVK_bio_ex");
            FUN_00379a5c(9,0x76,0);
            return -1;
          }
          return iVar6;
        }
        FUN_00379868();
        FUN_0037995c("crypto/pem/pvkfmt.c",0x445,"i2b_PVK");
        FUN_00379a5c(9,0x71,0);
      }
      FUN_0037fae8(lVar5);
      FUN_003c86b4(puVar4,"crypto/pem/pvkfmt.c",0x453);
    }
  }
  return -1;
}


// ===== 0044bcec  FUN_0044bcec =====

int FUN_0044bcec(long *param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 *puVar11;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  iVar3 = FUN_003a8020(param_2,&DAT_001f9542);
  if (iVar3 == 0) {
    return -1;
  }
  uVar7 = FUN_003b0a80(param_2);
  FUN_003fb290(uVar7,0,&local_58,0);
  iVar3 = FUN_0038f2c0(local_58);
  if (iVar3 < 0x21) {
    iVar3 = FUN_003f990c(uVar7);
    iVar4 = FUN_003f9914(uVar7);
    if (param_3 != 0) {
      if (iVar3 == 0) {
        return -1;
      }
      uVar10 = 0x31;
      uVar1 = iVar3 + 7U >> 3;
joined_r0x0044c06c:
      iVar4 = uVar1 + 0x14;
      if (param_1 == (long *)0x0) {
        return iVar4;
      }
      puVar11 = (undefined1 *)*param_1;
      puVar8 = puVar11;
      if (puVar11 == (undefined1 *)0x0) {
        puVar8 = (undefined1 *)FUN_003c83a4((long)iVar4,"crypto/pem/pvkfmt.c",0x250);
        if (puVar8 == (undefined1 *)0x0) {
          return -1;
        }
        *param_1 = (long)puVar8;
      }
      *(undefined2 *)(puVar8 + 9) = 0x4153;
      uVar7 = DAT_001b7120;
      uVar9 = 6;
      if (param_3 == 0) {
        uVar9 = 7;
      }
      *puVar8 = uVar9;
      puVar8[0xb] = uVar10;
      puVar8[0xd] = (char)((uint)iVar3 >> 8);
      *(undefined8 *)(puVar8 + 1) = uVar7;
      puVar8[0xc] = (char)iVar3;
      puVar8[0xe] = (char)((uint)iVar3 >> 0x10);
      puVar8[0xf] = (char)((uint)iVar3 >> 0x18);
      uVar7 = FUN_003b0a80(param_2);
      iVar3 = FUN_003f9914();
      iVar5 = FUN_003f990c(uVar7);
      FUN_003fb290(uVar7,&local_58,&local_68,&local_60);
      FUN_00390134(local_68,puVar8 + 0x10,4);
      puVar8 = puVar8 + 0x14;
      FUN_00390134(local_58,puVar8,iVar3);
      if (param_3 == 0) {
        puVar8 = puVar8 + iVar3;
        iVar6 = (int)(iVar5 + 0xfU) >> 4;
        FUN_003fb2b8(uVar7,&local_70,&local_78);
        FUN_003fb368(uVar7,&local_88,&local_90,&local_80);
        FUN_00390134(local_70,puVar8,iVar6);
        lVar2 = (long)((ulong)(iVar5 + 0xfU) << 0x20) >> 0x24;
        puVar8 = puVar8 + lVar2;
        FUN_00390134(local_78,puVar8,iVar6);
        puVar8 = puVar8 + lVar2;
        FUN_00390134(local_88,puVar8,iVar6);
        puVar8 = puVar8 + lVar2;
        FUN_00390134(local_90,puVar8,iVar6);
        FUN_00390134(local_80,puVar8 + lVar2,iVar6);
        FUN_00390134(local_60,puVar8 + lVar2 + lVar2,iVar3);
      }
      if (puVar11 != (undefined1 *)0x0) {
        *param_1 = *param_1 + (long)iVar4;
        return iVar4;
      }
      return iVar4;
    }
    FUN_003fb290(uVar7,0,0,&local_60);
    iVar6 = FUN_0038f2c0(local_60);
    iVar5 = iVar6 + 0xe;
    if (iVar6 + 7 < 0 == SCARRY4(iVar6,7)) {
      iVar5 = iVar6 + 7;
    }
    if (iVar5 >> 3 <= iVar4) {
      iVar4 = (int)(iVar3 + 0xfU) >> 4;
      FUN_003fb2b8(uVar7,&local_68,&local_70);
      FUN_003fb368(uVar7,&local_80,&local_88,&local_78);
      iVar6 = FUN_0038f2c0(local_78);
      iVar5 = iVar6 + 0xe;
      if (iVar6 + 7 < 0 == SCARRY4(iVar6,7)) {
        iVar5 = iVar6 + 7;
      }
      if (iVar5 >> 3 <= iVar4) {
        iVar6 = FUN_0038f2c0(local_68);
        iVar5 = iVar6 + 0xe;
        if (iVar6 + 7 < 0 == SCARRY4(iVar6,7)) {
          iVar5 = iVar6 + 7;
        }
        if (iVar5 >> 3 <= iVar4) {
          iVar6 = FUN_0038f2c0(local_70);
          iVar5 = iVar6 + 0xe;
          if (iVar6 + 7 < 0 == SCARRY4(iVar6,7)) {
            iVar5 = iVar6 + 7;
          }
          if (iVar5 >> 3 <= iVar4) {
            iVar6 = FUN_0038f2c0(local_80);
            iVar5 = iVar6 + 0xe;
            if (iVar6 + 7 < 0 == SCARRY4(iVar6,7)) {
              iVar5 = iVar6 + 7;
            }
            if (iVar5 >> 3 <= iVar4) {
              iVar6 = FUN_0038f2c0(local_88);
              iVar5 = iVar6 + 0xe;
              if (iVar6 + 7 < 0 == SCARRY4(iVar6,7)) {
                iVar5 = iVar6 + 7;
              }
              if (iVar5 >> 3 <= iVar4) {
                if (iVar3 == 0) {
                  return -1;
                }
                uVar10 = 0x32;
                uVar1 = (iVar3 + 0xfU >> 4) * 5 + (iVar3 + 7U >> 3) * 2;
                goto joined_r0x0044c06c;
              }
            }
          }
        }
      }
    }
  }
  FUN_00379868();
  FUN_0037995c("crypto/pem/pvkfmt.c",0x2a0,"check_bitlen_rsa");
  FUN_00379a5c(9,0x7e,0);
  return -1;
}


// ===== 0044c074  FUN_0044c074 =====

void FUN_0044c074(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           FUN_003c8474(8,"providers/implementations/encode_decode/decode_pem2der.c",0x3b);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
  }
  return;
}


// ===== 0044c0ac  FUN_0044c0ac =====

void FUN_0044c0ac(undefined8 param_1)

{
  FUN_003c86b4(param_1,"providers/implementations/encode_decode/decode_pem2der.c",0x46);
  return;
}


// ===== 0044c0bc  FUN_0044c0bc =====

undefined4
FUN_0044c0bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  size_t sVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 auStack_138 [5];
  undefined8 local_110 [20];
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  char *local_38;
  
  local_38 = (char *)0x0;
  local_60 = 0;
  local_58 = (char *)0x0;
  local_68 = 0;
  local_6c = 0;
  lVar5 = FUN_0043f154(*param_1);
  if (lVar5 != 0) {
    iVar3 = FUN_004120f4(lVar5,&local_38,&local_58,&local_60,&local_68);
    FUN_0037db50(lVar5);
    pcVar2 = local_58;
    if (0 < iVar3) {
      sVar6 = strlen(local_58);
      if ((sVar6 < 0xb) ||
         ((local_160 = param_6, uStack_158 = param_7, iVar3 = FUN_004113f4(pcVar2,auStack_138),
          iVar3 != 0 &&
          (iVar3 = FUN_00411200(auStack_138,local_60,&local_68,FUN_0044c4dc,&local_160), iVar3 != 0)
          ))) {
        pcVar2 = local_38;
        iVar3 = strcmp(local_38,"ENCRYPTED PRIVATE KEY");
        if (iVar3 == 0) {
          ppuVar7 = (undefined **)&UNK_00787870;
        }
        else {
          iVar3 = strcmp(pcVar2,"PRIVATE KEY");
          if (iVar3 == 0) {
            ppuVar7 = &PTR_s_PRIVATE_KEY_00787890;
          }
          else {
            iVar3 = strcmp(pcVar2,"PUBLIC KEY");
            if (iVar3 == 0) {
              ppuVar7 = &PTR_s_PUBLIC_KEY_007878b0;
            }
            else {
              iVar3 = strcmp(pcVar2,"DH PARAMETERS");
              if (iVar3 == 0) {
                ppuVar7 = &PTR_s_DH_PARAMETERS_007878d0;
              }
              else {
                iVar3 = strcmp(pcVar2,"X9.42 DH PARAMETERS");
                if (iVar3 == 0) {
                  ppuVar7 = &PTR_s_X9_42_DH_PARAMETERS_007878f0;
                }
                else {
                  iVar3 = strcmp(pcVar2,"DSA PRIVATE KEY");
                  if (iVar3 == 0) {
                    ppuVar7 = &PTR_s_DSA_PRIVATE_KEY_00787910;
                  }
                  else {
                    iVar3 = strcmp(pcVar2,"DSA PUBLIC KEY");
                    if (iVar3 == 0) {
                      ppuVar7 = &PTR_s_DSA_PUBLIC_KEY_00787930;
                    }
                    else {
                      iVar3 = strcmp(pcVar2,"DSA PARAMETERS");
                      if (iVar3 == 0) {
                        ppuVar7 = &PTR_s_DSA_PARAMETERS_00787950;
                      }
                      else {
                        iVar3 = strcmp(pcVar2,"EC PRIVATE KEY");
                        if (iVar3 == 0) {
                          ppuVar7 = &PTR_s_EC_PRIVATE_KEY_00787970;
                        }
                        else {
                          iVar3 = strcmp(pcVar2,"EC PARAMETERS");
                          if (iVar3 == 0) {
                            ppuVar7 = &PTR_s_EC_PARAMETERS_00787990;
                          }
                          else {
                            iVar3 = strcmp(pcVar2,"SM2 PARAMETERS");
                            if (iVar3 == 0) {
                              ppuVar7 = &PTR_s_SM2_PARAMETERS_007879b0;
                            }
                            else {
                              iVar3 = strcmp(pcVar2,"RSA PRIVATE KEY");
                              if (iVar3 == 0) {
                                ppuVar7 = &PTR_s_RSA_PRIVATE_KEY_007879d0;
                              }
                              else {
                                iVar3 = strcmp(pcVar2,"RSA PUBLIC KEY");
                                if (iVar3 == 0) {
                                  ppuVar7 = &PTR_s_RSA_PUBLIC_KEY_007879f0;
                                }
                                else {
                                  iVar3 = strcmp(pcVar2,"CERTIFICATE");
                                  if (iVar3 == 0) {
                                    ppuVar7 = &PTR_s_CERTIFICATE_00787a10;
                                  }
                                  else {
                                    iVar3 = strcmp(pcVar2,"TRUSTED CERTIFICATE");
                                    if (iVar3 == 0) {
                                      ppuVar7 = &PTR_s_TRUSTED_CERTIFICATE_00787a30;
                                    }
                                    else {
                                      iVar3 = strcmp(pcVar2,"X509 CERTIFICATE");
                                      if (iVar3 == 0) {
                                        ppuVar7 = &PTR_s_X509_CERTIFICATE_00787a50;
                                      }
                                      else {
                                        iVar3 = strcmp(pcVar2,"X509 CRL");
                                        if (iVar3 != 0) {
                                          uVar4 = 1;
                                          goto LAB_0044c484;
                                        }
                                        ppuVar7 = &PTR_s_X509_CRL_00787a70;
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
        puVar1 = ppuVar7[3];
        puVar8 = auStack_138;
        local_6c = *(undefined4 *)(ppuVar7 + 1);
        if (ppuVar7[2] != (undefined *)0x0) {
          puVar8 = local_110;
          FUN_003cd8cc(auStack_138,"data-type",ppuVar7[2],0);
        }
        puVar9 = puVar8;
        if (puVar1 != (undefined *)0x0) {
          puVar9 = puVar8 + 5;
          FUN_003cd8cc(&local_160,"data-structure",puVar1,0);
          puVar8[4] = local_140;
          puVar8[1] = uStack_158;
          *puVar8 = local_160;
          puVar8[3] = uStack_148;
          puVar8[2] = uStack_150;
        }
        FUN_003cd924(&local_160,&DAT_001eef54,local_60,local_68);
        puVar9[4] = local_140;
        puVar9[1] = uStack_158;
        *puVar9 = local_160;
        puVar9[3] = uStack_148;
        puVar9[2] = uStack_150;
        FUN_003cb668(&local_160,&DAT_001eccc2,&local_6c);
        puVar9[9] = local_140;
        puVar9[6] = uStack_158;
        puVar9[5] = local_160;
        puVar9[8] = uStack_148;
        puVar9[7] = uStack_150;
        FUN_003cdfcc(&local_160);
        puVar9[0xb] = uStack_158;
        puVar9[10] = local_160;
        puVar9[0xd] = uStack_148;
        puVar9[0xc] = uStack_150;
        puVar9[0xe] = local_140;
        uVar4 = (*param_4)(auStack_138,param_5);
      }
      else {
        uVar4 = 0;
      }
LAB_0044c484:
      FUN_003c86b4(local_38,"providers/implementations/encode_decode/decode_pem2der.c",0xd1);
      FUN_003c86b4(local_58,"providers/implementations/encode_decode/decode_pem2der.c",0xd2);
      FUN_003c86b4(local_60,"providers/implementations/encode_decode/decode_pem2der.c",0xd3);
      return uVar4;
    }
  }
  return 1;
}


// ===== 0044c4dc  FUN_0044c4dc =====

undefined4 FUN_0044c4dc(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 local_18 [2];
  
  if ((param_4 != (undefined8 *)0x0) && ((code *)*param_4 != (code *)0x0)) {
    iVar1 = (*(code *)*param_4)(param_1,(long)param_2,local_18,0,param_4[1]);
    if (iVar1 != 0) {
      return local_18[0];
    }
    return 0xffffffff;
  }
  return 0xffffffff;
}


// ===== 0044c534  FUN_0044c534 =====

void FUN_0044c534(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           FUN_003c8474(0x118,"providers/implementations/encode_decode/decode_pvk2key.c",0x46);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = &DAT_00787b10;
  }
  return;
}


// ===== 0044c578  FUN_0044c578 =====

void FUN_0044c578(undefined8 param_1)

{
  FUN_003c86b4(param_1,"providers/implementations/encode_decode/decode_pvk2key.c",0x53);
  return;
}


// ===== 0044c588  FUN_0044c588 =====

uint FUN_0044c588(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & 1;
  if (param_2 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}


// ===== 0044c598  FUN_0044c598 =====

undefined4
FUN_0044c598(undefined8 *param_1,undefined8 param_2,uint param_3,code *param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  long local_58;
  
  lVar4 = FUN_0043f154(*param_1);
  local_58 = 0;
  if (lVar4 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x22) = param_3;
  if (((param_3 == 0) || ((param_3 & 1) != 0)) && (*(long *)(param_1[0x21] + 0x18) != 0)) {
    uStack_e8 = 0;
    local_f0 = 0;
    local_d8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    local_100 = 0;
    iVar1 = FUN_003d083c(&local_100,param_6,param_7);
    if (iVar1 != 0) {
      pcVar7 = *(code **)(param_1[0x21] + 0x18);
      uVar5 = FUN_0046b880(*param_1);
      lVar6 = (*pcVar7)(lVar4,PTR_FUN_007a1b90,&local_100,uVar5,param_1 + 1);
      local_58 = lVar6;
      uVar2 = FUN_0037a744();
      if ((((int)uVar2 < 0) || ((uVar2 & 0xff800000) != 0x4800000)) ||
         (((uVar2 & 0x7fffff) != 0x68 && ((uVar2 & 0x7fffff) != 0x65)))) {
        if (lVar6 != 0) {
          if (*(code **)(param_1[0x21] + 0x20) != (code *)0x0) {
            (**(code **)(param_1[0x21] + 0x20))(lVar6,param_1);
          }
          FUN_0037db50(lVar4);
          local_104 = 2;
          FUN_003cb668(&local_100,&DAT_001eccc2,&local_104);
          FUN_003cd8cc(&local_130,"data-type",*(undefined8 *)(param_1[0x21] + 8),0);
          local_b8 = local_110;
          uStack_d0 = uStack_128;
          local_d8 = local_130;
          uStack_c0 = uStack_118;
          local_c8 = uStack_120;
          FUN_003cd924(&local_130,"reference",&local_58,8);
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
          uVar3 = (*param_4)(&local_100,param_5);
          lVar4 = 0;
          goto LAB_0044c770;
        }
        goto LAB_0044c764;
      }
      FUN_0037f8c4();
    }
    uVar3 = 0;
  }
  else {
LAB_0044c764:
    FUN_0037db50(lVar4);
    lVar4 = 0;
    uVar3 = 1;
  }
LAB_0044c770:
  FUN_0037db50(lVar4);
  (**(code **)(param_1[0x21] + 0x28))(local_58);
  return uVar3;
}


// ===== 0044c7a4  FUN_0044c7a4 =====

undefined8
FUN_0044c7a4(long param_1,undefined8 *param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_00451634(*(undefined8 *)(*(long *)(param_1 + 0x108) + 0x10));
  if ((param_3 == 8) && (UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    iVar1 = 0x87;
    if (*(int *)(param_1 + 0x110) != 0) {
      iVar1 = *(int *)(param_1 + 0x110);
    }
                    /* WARNING: Could not recover jumptable at 0x0044c814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(*param_2,iVar1,param_4,param_5);
    return uVar2;
  }
  return 0;
}


// ===== 0044c830  FUN_0044c830 =====

undefined ** FUN_0044c830(void)

{
  return &PTR_s_properties_00787b40;
}


// ===== 0044c83c  FUN_0044c83c =====

undefined8 FUN_0044c83c(long param_1,undefined8 param_2)

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


// ===== 0044c888  FUN_0044c888 =====

void FUN_0044c888(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0046b880(*param_2);
  FUN_003fa7a4(param_1,uVar1);
  return;
}


// ===== 0044c8b8  FUN_0044c8b8 =====

void FUN_0044c8b8(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           FUN_003c8474(0x108,"providers/implementations/encode_decode/decode_spki2typespki.c",0x28)
  ;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
  }
  return;
}


// ===== 0044c8f0  FUN_0044c8f0 =====

void FUN_0044c8f0(undefined8 param_1)

{
  FUN_003c86b4(param_1,"providers/implementations/encode_decode/decode_spki2typespki.c",0x33);
  return;
}


// ===== 0044c900  FUN_0044c900 =====

undefined4
FUN_0044c900(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined1 auStack_170 [40];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 auStack_a2 [50];
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_5c = 2;
  local_70 = 0;
  local_68 = 0;
  iVar2 = FUN_004517b8(*param_1,param_2,&local_48,&local_58);
  uVar1 = local_58;
  if (iVar2 == 0) {
    return 1;
  }
  local_50 = local_48;
  uVar4 = FUN_0046b880(*param_1);
  lVar5 = FUN_0043c218(&local_50,uVar1,uVar4,param_1 + 1);
  if (lVar5 == 0) {
    uVar3 = 1;
  }
  else {
    iVar2 = FUN_0043d100(0,0,0,&local_68,lVar5);
    if (iVar2 != 0) {
      FUN_003a3bf8(&local_70,0,0,local_68);
      iVar2 = FUN_003dd260(auStack_a2,0x32,local_70,0);
      if (0 < iVar2) {
        FUN_0043c28c(lVar5);
        FUN_003cd8cc(auStack_170,"data-type",auStack_a2,0);
        FUN_003cd8cc(&local_198,"data-structure","SubjectPublicKeyInfo",0);
        local_128 = local_178;
        uStack_140 = uStack_190;
        local_148 = local_198;
        uStack_130 = uStack_180;
        local_138 = local_188;
        FUN_003cd924(&local_198,&DAT_001eef54,local_48,local_58);
        local_100 = local_178;
        uStack_118 = uStack_190;
        local_120 = local_198;
        uStack_108 = uStack_180;
        local_110 = local_188;
        FUN_003cb668(&local_198,&DAT_001eccc2,&local_5c);
        local_d8 = local_178;
        uStack_f0 = uStack_190;
        local_f8 = local_198;
        uStack_e0 = uStack_180;
        local_e8 = local_188;
        FUN_003cdfcc(&local_198);
        uStack_c8 = uStack_190;
        local_d0 = local_198;
        uStack_b8 = uStack_180;
        uStack_c0 = local_188;
        local_b0 = local_178;
        uVar3 = (*param_4)(auStack_170,param_5);
        lVar5 = 0;
        goto LAB_0044cabc;
      }
    }
    uVar3 = 0;
  }
LAB_0044cabc:
  FUN_0043c28c(lVar5);
  FUN_003c86b4(local_48,"providers/implementations/encode_decode/decode_spki2typespki.c",0x8c);
  return uVar3;
}


// ===== 0044caf4  FUN_0044caf4 =====

undefined ** FUN_0044caf4(void)

{
  return &PTR_s_properties_00787bf0;
}


// ===== 0044cb00  FUN_0044cb00 =====

undefined8 FUN_0044cb00(long param_1,undefined8 param_2)

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


// ===== 0044cb4c  FUN_0044cb4c =====

void FUN_0044cb4c(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           FUN_003c8474(0x48,"providers/implementations/encode_decode/encode_key2any.c",0x3b1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    *(undefined4 *)(puVar1 + 1) = 1;
  }
  return;
}


// ===== 0044cb8c  FUN_0044cb8c =====

void FUN_0044cb8c(long param_1)

{
  FUN_003d05c4(param_1 + 0x18);
  FUN_0037fa4c(*(undefined8 *)(param_1 + 0x10));
  FUN_003c86b4(param_1,"providers/implementations/encode_decode/encode_key2any.c",0x3c1);
  return;
}


// ===== 0044cbc8  FUN_0044cbc8 =====

undefined ** FUN_0044cbc8(void)

{
  return &PTR_s_cipher_00788780;
}


// ===== 0044cbd4  FUN_0044cbd4 =====

undefined8 FUN_0044cbd4(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 local_48;
  long local_28;
  
  uVar2 = FUN_0046b880(*param_1);
  lVar3 = FUN_003cb19c(param_2,"cipher");
  lVar4 = FUN_003cb19c(param_2,"properties");
  lVar5 = FUN_003cb19c(param_2,"save-parameters");
  if (lVar3 != 0) {
    local_28 = 0;
    local_48 = 0;
    iVar1 = FUN_003cdfdc(lVar3,&local_28);
    if ((iVar1 == 0) || ((lVar4 != 0 && (iVar1 = FUN_003cdfdc(lVar4,&local_48), iVar1 == 0)))) {
      return 0;
    }
    FUN_0037fa4c(param_1[2]);
    param_1[2] = 0;
    *(uint *)((long)param_1 + 0xc) = (uint)(local_28 != 0);
    if (local_28 != 0) {
      lVar3 = FUN_003823dc(uVar2,local_28,local_48);
      param_1[2] = lVar3;
      if (lVar3 == 0) {
        return 0;
      }
    }
  }
  if ((lVar5 == 0) || (uVar2 = thunk_FUN_003cb238(lVar5,param_1 + 1), (int)uVar2 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 0044ccec  FUN_0044ccec =====

bool FUN_0044ccec(undefined8 param_1,uint param_2)

{
  return (param_2 & 3) != 0 || param_2 == 0;
}


// ===== 0044ccfc  FUN_0044ccfc =====

void FUN_0044ccfc(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_00451664(PTR_DAT_007a1d30,*param_1,param_2,param_3);
  return;
}


// ===== 0044cd1c  FUN_0044cd1c =====

void FUN_0044cd1c(undefined8 param_1)

{
  FUN_00451780(PTR_DAT_007a1d30,param_1);
  return;
}


// ===== 0044cd30  FUN_0044cd30 =====

undefined8 FUN_0044cd30(void)

{
  undefined8 uVar1;
  long in_x3;
  uint in_w4;
  
  if ((in_x3 == 0) && (((in_w4 & 1) != 0 || ((in_w4 >> 1 & 1) != 0)))) {
    uVar1 = FUN_0044deec();
    return uVar1;
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/encode_decode/encode_key2any.c",0x522,
               "rsa_to_type_specific_keypair_der_encode");
  FUN_00379a5c(0x39,0x80106,0);
  return 0;
}


// ===== 0044cdd4  FUN_0044cdd4 =====

bool FUN_0044cdd4(undefined8 param_1,uint param_2)

{
  return (param_2 & 3) != 0 || param_2 == 0;
}


// ===== 0044cde4  FUN_0044cde4 =====

void FUN_0044cde4(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_00451664(PTR_DAT_007a1d30,*param_1,param_2,param_3);
  return;
}


// ===== 0044ce04  FUN_0044ce04 =====

void FUN_0044ce04(undefined8 param_1)

{
  FUN_00451780(PTR_DAT_007a1d30,param_1);
  return;
}


// ===== 0044ce18  FUN_0044ce18 =====

undefined8 FUN_0044ce18(void)

{
  undefined8 uVar1;
  long in_x3;
  uint in_w4;
  
  if (in_x3 == 0) {
    if ((in_w4 & 1) != 0) {
      uVar1 = FUN_0044deec();
      return uVar1;
    }
    if ((in_w4 >> 1 & 1) != 0) {
      uVar1 = FUN_0044deec();
      return uVar1;
    }
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/encode_decode/encode_key2any.c",0x535,
               "rsa_to_type_specific_keypair_pem_encode");
  FUN_00379a5c(0x39,0x80106,0);
  return 0;
}


// ===== 0044ced8  FUN_0044ced8 =====

uint FUN_0044ced8(undefined8 param_1,uint param_2)

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


// ===== 0044cef4  FUN_0044cef4 =====

void FUN_0044cef4(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_00451664(PTR_DAT_007a1d30,*param_1,param_2,param_3);
  return;
}


// ===== 0044cf14  FUN_0044cf14 =====

void FUN_0044cf14(undefined8 param_1)

{
  FUN_00451780(PTR_DAT_007a1d30,param_1);
  return;
}


// ===== 0044cf28  FUN_0044cf28 =====

undefined8 FUN_0044cf28(void)

{
  undefined8 uVar1;
  long in_x3;
  ulong in_x4;
  
  if ((in_x3 == 0) && ((in_x4 & 1) != 0)) {
    uVar1 = FUN_0044deec();
    return uVar1;
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/encode_decode/encode_key2any.c",0x54c,
               "rsa_to_EncryptedPrivateKeyInfo_der_encode");
  FUN_00379a5c(0x39,0x80106,0);
  return 0;
}


// ===== 0044cfb4  FUN_0044cfb4 =====

uint FUN_0044cfb4(undefined8 param_1,uint param_2)

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


// ===== 0044cfd0  FUN_0044cfd0 =====

void FUN_0044cfd0(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_00451664(PTR_DAT_007a1d30,*param_1,param_2,param_3);
  return;
}


// ===== 0044cff0  FUN_0044cff0 =====

void FUN_0044cff0(undefined8 param_1)

{
  FUN_00451780(PTR_DAT_007a1d30,param_1);
  return;
}


// ===== 0044d004  FUN_0044d004 =====

undefined8 FUN_0044d004(void)

{
  undefined8 uVar1;
  long in_x3;
  ulong in_x4;
  
  if ((in_x3 == 0) && ((in_x4 & 1) != 0)) {
    uVar1 = FUN_0044deec();
    return uVar1;
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/encode_decode/encode_key2any.c",0x54d,
               "rsa_to_EncryptedPrivateKeyInfo_pem_encode");
  FUN_00379a5c(0x39,0x80106,0);
  return 0;
}


// ===== 0044d090  FUN_0044d090 =====

uint FUN_0044d090(undefined8 param_1,uint param_2)

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


// ===== 0044d0ac  FUN_0044d0ac =====

void FUN_0044d0ac(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_00451664(PTR_DAT_007a1d30,*param_1,param_2,param_3);
  return;
}


// ===== 0044d0cc  FUN_0044d0cc =====

void FUN_0044d0cc(undefined8 param_1)

{
  FUN_00451780(PTR_DAT_007a1d30,param_1);
  return;
}


// ===== 0044d0e0  FUN_0044d0e0 =====

undefined8 FUN_0044d0e0(void)

{
  undefined8 uVar1;
  long in_x3;
  ulong in_x4;
  
  if ((in_x3 == 0) && ((in_x4 & 1) != 0)) {
    uVar1 = FUN_0044deec();
    return uVar1;
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/encode_decode/encode_key2any.c",0x54e,
               "rsa_to_PrivateKeyInfo_der_encode");
  FUN_00379a5c(0x39,0x80106,0);
  return 0;
}


// ===== 0044d16c  FUN_0044d16c =====

uint FUN_0044d16c(undefined8 param_1,uint param_2)

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


// ===== 0044d188  FUN_0044d188 =====

void FUN_0044d188(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_00451664(PTR_DAT_007a1d30,*param_1,param_2,param_3);
  return;
}


// ===== 0044d1a8  FUN_0044d1a8 =====

void FUN_0044d1a8(undefined8 param_1)

{
  FUN_00451780(PTR_DAT_007a1d30,param_1);
  return;
}


// ===== 0044d1bc  FUN_0044d1bc =====

undefined8 FUN_0044d1bc(void)

{
  undefined8 uVar1;
  long in_x3;
  ulong in_x4;
  
  if ((in_x3 == 0) && ((in_x4 & 1) != 0)) {
    uVar1 = FUN_0044deec();
    return uVar1;
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/encode_decode/encode_key2any.c",0x54f,
               "rsa_to_PrivateKeyInfo_pem_encode");
  FUN_00379a5c(0x39,0x80106,0);
  return 0;
}


// ===== 0044d248  FUN_0044d248 =====

uint FUN_0044d248(undefined8 param_1,uint param_2)

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


// ===== 0044d264  FUN_0044d264 =====

void FUN_0044d264(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_00451664(PTR_DAT_007a1d30,*param_1,param_2,param_3);
  return;
}


// ===== 0044d284  FUN_0044d284 =====

void FUN_0044d284(undefined8 param_1)

{
  FUN_00451780(PTR_DAT_007a1d30,param_1);
  return;
}


// ===== 0044d298  FUN_0044d298 =====

undefined8 FUN_0044d298(void)

{
  undefined8 uVar1;
  long in_x3;
  uint in_w4;
  
  if ((in_x3 == 0) && ((in_w4 >> 1 & 1) != 0)) {
    uVar1 = FUN_0044deec();
    return uVar1;
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/encode_decode/encode_key2any.c",0x550,
               "rsa_to_SubjectPublicKeyInfo_der_encode");
  FUN_00379a5c(0x39,0x80106,0);
  return 0;
}


// ===== 0044d324  FUN_0044d324 =====

uint FUN_0044d324(undefined8 param_1,uint param_2)

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


// ===== 0044d340  FUN_0044d340 =====

void FUN_0044d340(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_00451664(PTR_DAT_007a1d30,*param_1,param_2,param_3);
  return;
}


// ===== 0044d360  FUN_0044d360 =====

void FUN_0044d360(undefined8 param_1)

{
  FUN_00451780(PTR_DAT_007a1d30,param_1);
  return;
}


// ===== 0044d374  FUN_0044d374 =====

undefined8 FUN_0044d374(void)

{
  undefined8 uVar1;
  long in_x3;
  uint in_w4;
  
  if ((in_x3 == 0) && ((in_w4 >> 1 & 1) != 0)) {
    uVar1 = FUN_0044deec();
    return uVar1;
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/encode_decode/encode_key2any.c",0x551,
               "rsa_to_SubjectPublicKeyInfo_pem_encode");
  FUN_00379a5c(0x39,0x80106,0);
  return 0;
}


// ===== 0044d400  FUN_0044d400 =====

uint FUN_0044d400(undefined8 param_1,uint param_2)

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


// ===== 0044d41c  FUN_0044d41c =====

void FUN_0044d41c(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_00451664(PTR_DAT_007a1d38,*param_1,param_2,param_3);
  return;
}


// ===== 0044d43c  FUN_0044d43c =====

void FUN_0044d43c(undefined8 param_1)

{
  FUN_00451780(PTR_DAT_007a1d38,param_1);
  return;
}


// ===== 0044d450  FUN_0044d450 =====

undefined8 FUN_0044d450(void)

{
  undefined8 uVar1;
  long in_x3;
  ulong in_x4;
  
  if ((in_x3 == 0) && ((in_x4 & 1) != 0)) {
    uVar1 = FUN_0044deec();
    return uVar1;
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/encode_decode/encode_key2any.c",0x552,
               "rsapss_to_EncryptedPrivateKeyInfo_der_encode");
  FUN_00379a5c(0x39,0x80106,0);
  return 0;
}


// ===== 0044d4dc  FUN_0044d4dc =====

uint FUN_0044d4dc(undefined8 param_1,uint param_2)

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


// ===== 0044d4f8  FUN_0044d4f8 =====

void FUN_0044d4f8(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_00451664(PTR_DAT_007a1d38,*param_1,param_2,param_3);
  return;
}


// ===== 0044d518  FUN_0044d518 =====

void FUN_0044d518(undefined8 param_1)

{
  FUN_00451780(PTR_DAT_007a1d38,param_1);
  return;
}


// ===== 0044d52c  FUN_0044d52c =====

undefined8 FUN_0044d52c(void)

{
  undefined8 uVar1;
  long in_x3;
  ulong in_x4;
  
  if ((in_x3 == 0) && ((in_x4 & 1) != 0)) {
    uVar1 = FUN_0044deec();
    return uVar1;
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/encode_decode/encode_key2any.c",0x553,
               "rsapss_to_EncryptedPrivateKeyInfo_pem_encode");
  FUN_00379a5c(0x39,0x80106,0);
  return 0;
}


// ===== 0044d5b8  FUN_0044d5b8 =====

uint FUN_0044d5b8(undefined8 param_1,uint param_2)

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


// ===== 0044d5d4  FUN_0044d5d4 =====

void FUN_0044d5d4(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_00451664(PTR_DAT_007a1d38,*param_1,param_2,param_3);
  return;
}


// ===== 0044d5f4  FUN_0044d5f4 =====

void FUN_0044d5f4(undefined8 param_1)

{
  FUN_00451780(PTR_DAT_007a1d38,param_1);
  return;
}


// ===== 0044d608  FUN_0044d608 =====

undefined8 FUN_0044d608(void)

{
  undefined8 uVar1;
  long in_x3;
  ulong in_x4;
  
  if ((in_x3 == 0) && ((in_x4 & 1) != 0)) {
    uVar1 = FUN_0044deec();
    return uVar1;
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/encode_decode/encode_key2any.c",0x554,
               "rsapss_to_PrivateKeyInfo_der_encode");
  FUN_00379a5c(0x39,0x80106,0);
  return 0;
}


// ===== 0044d694  FUN_0044d694 =====

uint FUN_0044d694(undefined8 param_1,uint param_2)

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


// ===== 0044d6b0  FUN_0044d6b0 =====

void FUN_0044d6b0(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_00451664(PTR_DAT_007a1d38,*param_1,param_2,param_3);
  return;
}


// ===== 0044d6d0  FUN_0044d6d0 =====

void FUN_0044d6d0(undefined8 param_1)

{
  FUN_00451780(PTR_DAT_007a1d38,param_1);
  return;
}


// ===== 0044d6e4  FUN_0044d6e4 =====

undefined8 FUN_0044d6e4(void)

{
  undefined8 uVar1;
  long in_x3;
  ulong in_x4;
  
  if ((in_x3 == 0) && ((in_x4 & 1) != 0)) {
    uVar1 = FUN_0044deec();
    return uVar1;
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/encode_decode/encode_key2any.c",0x555,
               "rsapss_to_PrivateKeyInfo_pem_encode");
  FUN_00379a5c(0x39,0x80106,0);
  return 0;
}


// ===== 0044d770  FUN_0044d770 =====

uint FUN_0044d770(undefined8 param_1,uint param_2)

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


// ===== 0044d78c  FUN_0044d78c =====

void FUN_0044d78c(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_00451664(PTR_DAT_007a1d38,*param_1,param_2,param_3);
  return;
}


// ===== 0044d7ac  FUN_0044d7ac =====

void FUN_0044d7ac(undefined8 param_1)

{
  FUN_00451780(PTR_DAT_007a1d38,param_1);
  return;
}


// ===== 0044d7c0  FUN_0044d7c0 =====

undefined8 FUN_0044d7c0(void)

{
  undefined8 uVar1;
  long in_x3;
  uint in_w4;
  
  if ((in_x3 == 0) && ((in_w4 >> 1 & 1) != 0)) {
    uVar1 = FUN_0044deec();
    return uVar1;
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/encode_decode/encode_key2any.c",0x556,
               "rsapss_to_SubjectPublicKeyInfo_der_encode");
  FUN_00379a5c(0x39,0x80106,0);
  return 0;
}


// ===== 0044d84c  FUN_0044d84c =====

uint FUN_0044d84c(undefined8 param_1,uint param_2)

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


// ===== 0044d868  FUN_0044d868 =====

void FUN_0044d868(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_00451664(PTR_DAT_007a1d38,*param_1,param_2,param_3);
  return;
}


// ===== 0044d888  FUN_0044d888 =====

void FUN_0044d888(undefined8 param_1)

{
  FUN_00451780(PTR_DAT_007a1d38,param_1);
  return;
}


// ===== 0044d89c  FUN_0044d89c =====

undefined8 FUN_0044d89c(void)

{
  undefined8 uVar1;
  long in_x3;
  uint in_w4;
  
  if ((in_x3 == 0) && ((in_w4 >> 1 & 1) != 0)) {
    uVar1 = FUN_0044deec();
    return uVar1;
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/encode_decode/encode_key2any.c",0x557,
               "rsapss_to_SubjectPublicKeyInfo_pem_encode");
  FUN_00379a5c(0x39,0x80106,0);
  return 0;
}


// ===== 0044d928  FUN_0044d928 =====

bool FUN_0044d928(undefined8 param_1,uint param_2)

{
  return (param_2 & 3) != 0 || param_2 == 0;
}


// ===== 0044d938  FUN_0044d938 =====

void FUN_0044d938(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_00451664(PTR_DAT_007a1d30,*param_1,param_2,param_3);
  return;
}


// ===== 0044d958  FUN_0044d958 =====

void FUN_0044d958(undefined8 param_1)

{
  FUN_00451780(PTR_DAT_007a1d30,param_1);
  return;
}


// ===== 0044d96c  FUN_0044d96c =====

undefined8 FUN_0044d96c(void)

{
  undefined8 uVar1;
  long in_x3;
  uint in_w4;
  
  if ((in_x3 == 0) && (((in_w4 & 1) != 0 || ((in_w4 >> 1 & 1) != 0)))) {
    uVar1 = FUN_0044deec();
    return uVar1;
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/encode_decode/encode_key2any.c",0x5a1,
               "rsa_to_RSA_der_encode");
  FUN_00379a5c(0x39,0x80106,0);
  return 0;
}


// ===== 0044da10  FUN_0044da10 =====

bool FUN_0044da10(undefined8 param_1,uint param_2)

{
  return (param_2 & 3) != 0 || param_2 == 0;
}


// ===== 0044da20  FUN_0044da20 =====

void FUN_0044da20(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_00451664(PTR_DAT_007a1d30,*param_1,param_2,param_3);
  return;
}


// ===== 0044da40  FUN_0044da40 =====

void FUN_0044da40(undefined8 param_1)

{
  FUN_00451780(PTR_DAT_007a1d30,param_1);
  return;
}


// ===== 0044da54  FUN_0044da54 =====

undefined8 FUN_0044da54(void)

{
  undefined8 uVar1;
  long in_x3;
  uint in_w4;
  
  if (in_x3 == 0) {
    if ((in_w4 & 1) != 0) {
      uVar1 = FUN_0044deec();
      return uVar1;
    }
    if ((in_w4 >> 1 & 1) != 0) {
      uVar1 = FUN_0044deec();
      return uVar1;
    }
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/encode_decode/encode_key2any.c",0x5a2,
               "rsa_to_RSA_pem_encode");
  FUN_00379a5c(0x39,0x80106,0);
  return 0;
}


// ===== 0044db14  FUN_0044db14 =====

bool FUN_0044db14(undefined8 param_1,uint param_2)

{
  return (param_2 & 3) != 0 || param_2 == 0;
}


// ===== 0044db24  FUN_0044db24 =====

void FUN_0044db24(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_00451664(PTR_DAT_007a1d30,*param_1,param_2,param_3);
  return;
}


// ===== 0044db44  FUN_0044db44 =====

void FUN_0044db44(undefined8 param_1)

{
  FUN_00451780(PTR_DAT_007a1d30,param_1);
  return;
}


// ===== 0044db58  FUN_0044db58 =====

undefined8 FUN_0044db58(void)

{
  undefined8 uVar1;
  long in_x3;
  uint in_w4;
  
  if ((in_x3 == 0) && (((in_w4 & 1) != 0 || ((in_w4 >> 1 & 1) != 0)))) {
    uVar1 = FUN_0044deec();
    return uVar1;
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/encode_decode/encode_key2any.c",0x5b7,
               "rsa_to_PKCS1_der_encode");
  FUN_00379a5c(0x39,0x80106,0);
  return 0;
}


// ===== 0044dbfc  FUN_0044dbfc =====

bool FUN_0044dbfc(undefined8 param_1,uint param_2)

{
  return (param_2 & 3) != 0 || param_2 == 0;
}


// ===== 0044dc0c  FUN_0044dc0c =====

void FUN_0044dc0c(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_00451664(PTR_DAT_007a1d30,*param_1,param_2,param_3);
  return;
}


// ===== 0044dc2c  FUN_0044dc2c =====

void FUN_0044dc2c(undefined8 param_1)

{
  FUN_00451780(PTR_DAT_007a1d30,param_1);
  return;
}


// ===== 0044dc40  FUN_0044dc40 =====

undefined8 FUN_0044dc40(void)

{
  undefined8 uVar1;
  long in_x3;
  uint in_w4;
  
  if (in_x3 == 0) {
    if ((in_w4 & 1) != 0) {
      uVar1 = FUN_0044deec();
      return uVar1;
    }
    if ((in_w4 >> 1 & 1) != 0) {
      uVar1 = FUN_0044deec();
      return uVar1;
    }
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/encode_decode/encode_key2any.c",0x5b8,
               "rsa_to_PKCS1_pem_encode");
  FUN_00379a5c(0x39,0x80106,0);
  return 0;
}


// ===== 0044dd00  FUN_0044dd00 =====

bool FUN_0044dd00(undefined8 param_1,uint param_2)

{
  return (param_2 & 3) != 0 || param_2 == 0;
}


// ===== 0044dd10  FUN_0044dd10 =====

void FUN_0044dd10(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_00451664(PTR_DAT_007a1d38,*param_1,param_2,param_3);
  return;
}


// ===== 0044dd30  FUN_0044dd30 =====

void FUN_0044dd30(undefined8 param_1)

{
  FUN_00451780(PTR_DAT_007a1d38,param_1);
  return;
}


// ===== 0044dd44  FUN_0044dd44 =====

undefined8 FUN_0044dd44(void)

{
  undefined8 uVar1;
  long in_x3;
  uint in_w4;
  
  if ((in_x3 == 0) && (((in_w4 & 1) != 0 || ((in_w4 >> 1 & 1) != 0)))) {
    uVar1 = FUN_0044deec();
    return uVar1;
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/encode_decode/encode_key2any.c",0x5b9,
               "rsapss_to_PKCS1_der_encode");
  FUN_00379a5c(0x39,0x80106,0);
  return 0;
}


// ===== 0044dde8  FUN_0044dde8 =====

bool FUN_0044dde8(undefined8 param_1,uint param_2)

{
  return (param_2 & 3) != 0 || param_2 == 0;
}


// ===== 0044ddf8  FUN_0044ddf8 =====

void FUN_0044ddf8(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_00451664(PTR_DAT_007a1d38,*param_1,param_2,param_3);
  return;
}


// ===== 0044de18  FUN_0044de18 =====

void FUN_0044de18(undefined8 param_1)

{
  FUN_00451780(PTR_DAT_007a1d38,param_1);
  return;
}


// ===== 0044de2c  FUN_0044de2c =====

undefined8 FUN_0044de2c(void)

{
  undefined8 uVar1;
  long in_x3;
  uint in_w4;
  
  if (in_x3 == 0) {
    if ((in_w4 & 1) != 0) {
      uVar1 = FUN_0044deec();
      return uVar1;
    }
    if ((in_w4 >> 1 & 1) != 0) {
      uVar1 = FUN_0044deec();
      return uVar1;
    }
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/encode_decode/encode_key2any.c",0x5ba,
               "rsapss_to_PKCS1_pem_encode");
  FUN_00379a5c(0x39,0x80106,0);
  return 0;
}


// ===== 0044deec  FUN_0044deec =====

undefined4
FUN_0044deec(undefined8 *param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5,
            code *param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  if (param_3 == 0) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/encode_decode/encode_key2any.c",0x41f,"key2any_encode");
    uVar2 = 0xc0102;
  }
  else {
    puVar4 = param_1;
    uVar5 = param_2;
    if (param_6 != (code *)0x0) {
      auVar6 = FUN_003fb538(param_3,0xf000);
      puVar4 = auVar6._0_8_;
      if (auVar6._0_4_ == 0) {
        if (param_4 == 6) goto LAB_0044df50;
      }
      else {
        uVar5 = auVar6._8_8_;
        if ((auVar6._0_4_ == 0x1000) && (uVar5 = param_2, param_4 == 0x390)) {
LAB_0044df50:
          lVar3 = FUN_0043f154(*param_1);
          if ((lVar3 == 0) ||
             ((param_7 != 0 && (iVar1 = FUN_003d083c(param_1 + 3,param_7,param_8), iVar1 == 0)))) {
            uVar2 = 0;
          }
          else {
            uVar2 = (*param_6)(lVar3,param_3,param_4,param_5,FUN_0044e0fc,param_9,param_1);
          }
          FUN_0037db50(lVar3);
          return uVar2;
        }
      }
    }
    FUN_00379868(puVar4,uVar5);
    FUN_0037995c("providers/implementations/encode_decode/encode_key2any.c",0x42c,"key2any_encode");
    uVar2 = 0x80106;
  }
  FUN_00379a5c(0x39,uVar2,0);
  return 0;
}


// ===== 0044e050  FUN_0044e050 =====

bool FUN_0044e050(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  code *in_x5;
  undefined8 local_8;
  
  local_8 = 0;
  iVar1 = (*in_x5)(param_2,&local_8);
  if (0 < iVar1) {
    iVar1 = FUN_0037df4c(param_1,local_8,iVar1);
    FUN_003c86b4(local_8,"providers/implementations/encode_decode/encode_key2any.c",0x184);
    return 0 < iVar1;
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/encode_decode/encode_key2any.c",0x17f,
               "key_to_type_specific_der_bio");
  FUN_00379a5c(0x39,0x80039,0);
  return false;
}


// ===== 0044e0fc  FUN_0044e0fc =====

undefined8
FUN_0044e0fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
            undefined4 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  ulong local_70;
  undefined1 auStack_68 [56];
  
  uVar2 = FUN_003fb520();
  *param_4 = 0;
  iVar1 = FUN_003fb538(param_1,0xf000);
  if (iVar1 != 0x1000) {
    if (iVar1 != 0) {
      return 0;
    }
    uVar5 = 5;
LAB_0044e158:
    *param_5 = uVar5;
    return 1;
  }
  iVar1 = FUN_00404a34(uVar2);
  if (iVar1 != 0) {
    uVar5 = 0xffffffff;
    goto LAB_0044e158;
  }
  local_70 = 0;
  iVar1 = FUN_003ceb5c(auStack_68);
  if (iVar1 == 0) {
    lVar3 = 0;
    goto LAB_0044e258;
  }
  iVar1 = FUN_0046b418(auStack_68,0xffffffff,uVar2);
  if (((iVar1 == 0) || (iVar1 = FUN_003ceec8(auStack_68), iVar1 == 0)) ||
     (iVar1 = FUN_003cf2bc(auStack_68,&local_70), iVar1 == 0)) {
    lVar3 = 0;
LAB_0044e248:
    FUN_003cf324(auStack_68);
  }
  else {
    FUN_003cf324(auStack_68);
    if (local_70 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_003c83a4(local_70,"providers/implementations/encode_decode/encode_key2any.c",0x361
                          );
      if (((lVar3 == 0) || (iVar1 = FUN_003ce940(auStack_68,lVar3,local_70), iVar1 == 0)) ||
         ((iVar1 = FUN_0046b418(auStack_68,0xffffffff,uVar2), iVar1 == 0 ||
          ((iVar1 = FUN_003ceec8(auStack_68), iVar1 == 0 ||
           (iVar1 = FUN_003cf2bc(auStack_68,&local_70), iVar1 == 0)))))) goto LAB_0044e248;
      FUN_003cf324(auStack_68);
    }
    lVar4 = FUN_0038edac();
    if (lVar4 != 0) {
      *param_5 = 0x10;
      FUN_0038ee3c(lVar4,lVar3,local_70 & 0xffffffff);
      *param_4 = lVar4;
      return 1;
    }
  }
LAB_0044e258:
  FUN_003c86b4(lVar3,"providers/implementations/encode_decode/encode_key2any.c",0x382);
  return 0;
}


// ===== 0044e2c4  FUN_0044e2c4 =====

bool FUN_0044e2c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  
  iVar1 = FUN_00410b54(param_6,param_4,param_1,param_2,*(undefined8 *)(param_7 + 0x10),0,0,
                       PTR_FUN_007a1b88,param_7 + 0x18);
  return 0 < iVar1;
}


// ===== 0044e318  FUN_0044e318 =====

bool FUN_0044e318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  
  iVar1 = FUN_00410b54(param_6,param_4,param_1,param_2,*(undefined8 *)(param_7 + 0x10),0,0,0,0);
  return 0 < iVar1;
}


// ===== 0044e364  FUN_0044e364 =====

ulong FUN_0044e364(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  code *param_5,undefined8 param_6,long param_7)

{
  ulong uVar1;
  long lVar2;
  undefined4 local_44;
  undefined8 local_28;
  
  local_28 = 0;
  local_44 = 0xffffffff;
  if (*(int *)(param_7 + 0xc) == 0) {
    uVar1 = 0;
  }
  else if ((param_5 == (code *)0x0) ||
          (uVar1 = (*param_5)(param_2,param_3,*(undefined4 *)(param_7 + 8),&local_28,&local_44),
          (int)uVar1 != 0)) {
    lVar2 = FUN_0044e464(param_2,param_3,local_28,local_44,param_6,param_7);
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_00434768(param_1,lVar2);
      uVar1 = uVar1 & 0xffffffff;
    }
    FUN_003dfe44(lVar2);
    return uVar1;
  }
  return uVar1;
}


// ===== 0044e464  FUN_0044e464 =====

undefined8
FUN_0044e464(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
            ,undefined8 *param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_440 [1024];
  ulong local_28;
  
  lVar2 = FUN_0044e58c();
  if (lVar2 == 0) {
    if (param_4 == 0x10) {
      FUN_0038eddc(param_3);
    }
    else if (param_4 == 6) {
      FUN_0039a0f4(param_3);
      return 0;
    }
    return 0;
  }
  local_28 = 0;
  uVar3 = FUN_0046b880(*param_6);
  if (param_6[2] != 0) {
    iVar1 = FUN_003d09fc(auStack_440,0x400,&local_28,0,1,param_6 + 3);
    if (iVar1 != 0) {
      uVar3 = FUN_0044ed54(0xffffffff,param_6[2],auStack_440,local_28 & 0xffffffff,0,0,0,lVar2,uVar3
                           ,0);
      FUN_003c89b8(auStack_440,local_28);
      goto LAB_0044e558;
    }
    FUN_00379868();
    FUN_0037995c("providers/implementations/encode_decode/encode_key2any.c",0x74,"p8info_to_encp8");
    FUN_00379a5c(0x39,0x9f,0);
  }
  uVar3 = 0;
LAB_0044e558:
  FUN_003dfeb8(lVar2);
  return uVar3;
}


// ===== 0044e58c  FUN_0044e58c =====

long FUN_0044e58c(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                 code *param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_48;
  
  local_48 = 0;
  lVar2 = FUN_003dfeac();
  if ((lVar2 != 0) && (iVar1 = (*param_5)(param_1,&local_48), 0 < iVar1)) {
    uVar3 = FUN_003dcce8(param_2);
    iVar1 = FUN_003dfec4(lVar2,uVar3,0,param_4,param_3,local_48,iVar1);
    if (iVar1 != 0) {
      return lVar2;
    }
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/encode_decode/encode_key2any.c",0x5e,"key_to_p8info");
  FUN_00379a5c(0x39,0x8000d,0);
  FUN_003dfeb8(lVar2);
  FUN_003c86b4(local_48,"providers/implementations/encode_decode/encode_key2any.c",0x60);
  return 0;
}


// ===== 0044e678  FUN_0044e678 =====

ulong FUN_0044e678(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  code *param_5,undefined8 param_6,long param_7)

{
  ulong uVar1;
  long lVar2;
  undefined4 local_44;
  undefined8 local_28;
  
  local_28 = 0;
  local_44 = 0xffffffff;
  if (*(int *)(param_7 + 0xc) == 0) {
    uVar1 = 0;
  }
  else if ((param_5 == (code *)0x0) ||
          (uVar1 = (*param_5)(param_2,param_3,*(undefined4 *)(param_7 + 8),&local_28,&local_44),
          (int)uVar1 != 0)) {
    lVar2 = FUN_0044e464(param_2,param_3,local_28,local_44,param_6,param_7);
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_0044f57c(param_1,lVar2);
      uVar1 = uVar1 & 0xffffffff;
    }
    FUN_003dfe44(lVar2);
    return uVar1;
  }
  return uVar1;
}


// ===== 0044e778  FUN_0044e778 =====

undefined4
FUN_0044e778(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            code *param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int local_54;
  undefined8 local_50;
  undefined4 local_44;
  undefined8 local_28;
  
  local_50 = 0;
  local_54 = -1;
  if (*(int *)(param_7 + 0xc) == 0) {
    if (param_5 == (code *)0x0) {
      lVar3 = FUN_0044e58c(param_2,param_3,0,0xffffffff,param_6);
    }
    else {
      iVar1 = (*param_5)(param_2,param_3,*(undefined4 *)(param_7 + 8),&local_50,&local_54);
      if (iVar1 == 0) {
        return 0;
      }
      lVar3 = FUN_0044e58c(param_2,param_3,local_50,local_54,param_6);
    }
    if (lVar3 == 0) {
      if (local_54 == 0x10) {
        FUN_0038eddc(local_50);
      }
      else if (local_54 == 6) {
        FUN_0039a0f4();
      }
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_004347d8(param_1,lVar3);
    }
    FUN_003dfeb8(lVar3);
    return uVar2;
  }
  local_28 = 0;
  local_44 = 0xffffffff;
  if ((param_5 != (code *)0x0) &&
     (iVar1 = (*param_5)(param_2,param_3,*(undefined4 *)(param_7 + 8),&local_28,&local_44),
     iVar1 == 0)) {
    return 0;
  }
  lVar3 = FUN_0044e464(param_2,param_3,local_28,local_44,param_6,param_7);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00434768(param_1,lVar3);
  }
  FUN_003dfe44(lVar3);
  return uVar2;
}


// ===== 0044e8fc  FUN_0044e8fc =====

undefined4
FUN_0044e8fc(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            code *param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int local_54;
  undefined8 local_50;
  undefined4 local_44;
  undefined8 local_28;
  
  local_50 = 0;
  local_54 = -1;
  if (*(int *)(param_7 + 0xc) == 0) {
    if (param_5 == (code *)0x0) {
      lVar3 = FUN_0044e58c(param_2,param_3,0,0xffffffff,param_6);
    }
    else {
      iVar1 = (*param_5)(param_2,param_3,*(undefined4 *)(param_7 + 8),&local_50,&local_54);
      if (iVar1 == 0) {
        return 0;
      }
      lVar3 = FUN_0044e58c(param_2,param_3,local_50,local_54,param_6);
    }
    if (lVar3 == 0) {
      if (local_54 == 0x10) {
        FUN_0038eddc(local_50);
      }
      else if (local_54 == 6) {
        FUN_0039a0f4();
      }
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0044f5ec(param_1,lVar3);
    }
    FUN_003dfeb8(lVar3);
    return uVar2;
  }
  local_28 = 0;
  local_44 = 0xffffffff;
  if ((param_5 != (code *)0x0) &&
     (iVar1 = (*param_5)(param_2,param_3,*(undefined4 *)(param_7 + 8),&local_28,&local_44),
     iVar1 == 0)) {
    return 0;
  }
  lVar3 = FUN_0044e464(param_2,param_3,local_28,local_44,param_6,param_7);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0044f57c(param_1,lVar3);
  }
  FUN_003dfe44(lVar3);
  return uVar2;
}


// ===== 0044ea80  FUN_0044ea80 =====

undefined4
FUN_0044ea80(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            code *param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 local_3c;
  undefined8 local_38;
  
  local_38 = 0;
  local_3c = 0xffffffff;
  if (param_5 == (code *)0x0) {
    lVar3 = FUN_0044eb64(param_2,param_3,0,0xffffffff,param_6);
  }
  else {
    iVar1 = (*param_5)(param_2,param_3,*(undefined4 *)(param_7 + 8),&local_38,&local_3c);
    if (iVar1 == 0) {
      return 0;
    }
    lVar3 = FUN_0044eb64(param_2,param_3,local_38,local_3c,param_6);
  }
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004347a0(param_1,lVar3);
  }
  FUN_0043c2c8(lVar3);
  return uVar2;
}


// ===== 0044eb64  FUN_0044eb64 =====

long FUN_0044eb64(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                 code *param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_48;
  
  local_48 = 0;
  lVar2 = FUN_0043c2bc();
  if ((lVar2 != 0) && (iVar1 = (*param_5)(param_1,&local_48), 0 < iVar1)) {
    uVar3 = FUN_003dcce8(param_2);
    iVar1 = FUN_0043d0a4(lVar2,uVar3,param_4,param_3,local_48,iVar1);
    if (iVar1 != 0) {
      return lVar2;
    }
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/encode_decode/encode_key2any.c",0x9d,"key_to_pubkey");
  FUN_00379a5c(0x39,0x8000b,0);
  FUN_0043c2c8(lVar2);
  FUN_003c86b4(local_48,"providers/implementations/encode_decode/encode_key2any.c",0x9f);
  return 0;
}


// ===== 0044ec4c  FUN_0044ec4c =====

undefined4
FUN_0044ec4c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            code *param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int local_3c;
  undefined8 local_38;
  
  local_38 = 0;
  local_3c = -1;
  if (param_5 == (code *)0x0) {
    lVar3 = FUN_0044eb64(param_2,param_3,0,0xffffffff,param_6);
  }
  else {
    iVar1 = (*param_5)(param_2,param_3,*(undefined4 *)(param_7 + 8),&local_38,&local_3c);
    if (iVar1 == 0) {
      return 0;
    }
    lVar3 = FUN_0044eb64(param_2,param_3,local_38,local_3c,param_6);
  }
  if (lVar3 == 0) {
    if (local_3c == 0x10) {
      FUN_0038eddc(local_38);
    }
    else if (local_3c == 6) {
      FUN_0039a0f4();
    }
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0044f934(param_1,lVar3);
  }
  FUN_0043c2c8(lVar3);
  return uVar2;
}


// ===== 0044ed54  FUN_0044ed54 =====

long FUN_0044ed54(int param_1,long param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5,
                 undefined4 param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9,
                 undefined8 param_10)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_1 == -1) {
    if (param_2 == 0) {
      FUN_00379868();
      uVar5 = 0x1b;
LAB_0044eecc:
      FUN_0037995c("crypto/pkcs12/p12_p8e.c",uVar5,"PKCS8_encrypt_ex");
      uVar1 = 0xc0102;
      goto LAB_0044eedc;
    }
    lVar3 = FUN_003a3414(param_2,param_7,param_5,param_6,0,0xffffffff,param_9);
  }
  else {
    FUN_0037f6d4();
    iVar2 = FUN_003a29f4(1,param_1,0,0,0);
    if (iVar2 == 0) {
      FUN_0037f71c();
      lVar3 = FUN_003a4cc4(param_1,param_7,param_5,param_6,param_9);
    }
    else {
      FUN_0037f8c4();
      if (param_2 == 0) {
        FUN_00379868();
        uVar5 = 0x25;
        goto LAB_0044eecc;
      }
      lVar3 = FUN_003a3414(param_2,param_7,param_5,param_6,0,param_1,param_9);
    }
  }
  if (lVar3 != 0) {
    lVar4 = FUN_0044ef04(param_3,param_4,param_8,lVar3,param_9,param_10);
    if (lVar4 == 0) {
      FUN_003a3a50(lVar3);
      return 0;
    }
    return lVar4;
  }
  FUN_00379868();
  FUN_0037995c("crypto/pkcs12/p12_p8e.c",0x30,"PKCS8_encrypt_ex");
  uVar1 = 0x8000d;
LAB_0044eedc:
  FUN_00379a5c(0x23,uVar1,0);
  return 0;
}


// ===== 0044ef04  FUN_0044ef04 =====

undefined8 *
FUN_0044ef04(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_003dfe88();
  lVar2 = FUN_0044a390(param_4,uVar1,param_1,param_2,param_3,1,param_5,param_6);
  if (lVar2 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/pkcs12/p12_p8e.c",0x50,"PKCS8_set0_pbe_ex");
    FUN_00379a5c(0x23,0x67,0);
    return (undefined8 *)0x0;
  }
  puVar3 = (undefined8 *)FUN_003c8474(0x10,"crypto/pkcs12/p12_p8e.c",0x54);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = param_4;
    puVar3[1] = lVar2;
    return puVar3;
  }
  thunk_FUN_0038eddc(lVar2);
  return (undefined8 *)0x0;
}


// ===== 0044eff4  FUN_0044eff4 =====

void FUN_0044eff4(void)

{
  FUN_0044ed54();
  return;
}


// ===== 0044f014  FUN_0044f014 =====

void FUN_0044f014(void)

{
  FUN_0044ef04();
  return;
}


// ===== 0044f020  FUN_0044f020 =====

void FUN_0044f020(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_0044f05c(param_1,param_2,0,param_3,0,param_4,param_5,param_6,param_7);
  return;
}


// ===== 0044f05c  FUN_0044f05c =====

/* WARNING: Type propagation algorithm not settling */

uint FUN_0044f05c(undefined8 param_1,undefined8 param_2,int param_3,int param_4,long param_5,
                 char *param_6,ulong param_7,code *param_8,char *param_9)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  size_t sVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  char acStack_468 [1032];
  
  puVar1 = &DAT_001d60f8;
  if (param_3 != 0) {
    puVar1 = &DAT_001d4441;
  }
  param_7 = param_7 & 0xffffffff;
  lVar5 = FUN_003aa8a0(param_2,0x87,puVar1,"PrivateKeyInfo",0);
  if (lVar5 == 0) {
    return 0;
  }
  if (param_6 == (char *)0x0 && param_8 == (code *)0x0) {
    if (param_9 == (char *)0x0) {
      param_6 = (char *)0x0;
      param_8 = (code *)PTR_FUN_007a1ba8;
    }
    else {
      sVar6 = strlen(param_9);
      param_8 = (code *)0x0;
      param_7 = sVar6 & 0xffffffff;
      param_6 = param_9;
    }
  }
  iVar4 = (int)param_7;
  if ((param_4 == -1) && (iVar3 = FUN_003abf28(lVar5), iVar3 != 0)) {
    if (param_5 != 0) {
      uVar9 = FUN_00389880(param_5);
      iVar3 = FUN_003aa7f0(lVar5,uVar9,0);
      if (((iVar3 == 0) ||
          ((param_6 != (char *)0x0 && (iVar4 = FUN_003aa880(lVar5,param_6,(long)iVar4), iVar4 == 0))
          )) || ((param_8 != (code *)0x0 &&
                 (iVar4 = FUN_003aa890(lVar5,param_8,param_9), iVar4 == 0)))) {
        uVar2 = 0;
        goto LAB_0044f324;
      }
    }
    iVar4 = FUN_003abe90(lVar5,param_1);
    uVar2 = (uint)(iVar4 != 0);
    goto LAB_0044f324;
  }
  lVar7 = FUN_00439a84(param_2);
  if (lVar7 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/pem/pem_pk8.c",0x85,"do_pk8pkey");
    uVar9 = 0x73;
LAB_0044f15c:
    FUN_00379a5c(9,uVar9,0);
    uVar2 = 0;
  }
  else if ((param_4 == -1) && (param_5 == 0)) {
    if (param_3 == 0) {
      uVar2 = FUN_00410b54(PTR_FUN_007a19e8,"PRIVATE KEY",param_1,lVar7,0,0,0,0,0);
    }
    else {
      uVar2 = FUN_004347d8(param_1,lVar7);
    }
  }
  else {
    if (param_6 == (char *)0x0) {
      iVar4 = (*param_8)(acStack_468,0x400,1,param_9);
      if (iVar4 < 0) {
        FUN_00379868();
        FUN_0037995c("crypto/pem/pem_pk8.c",0x8c,"do_pk8pkey");
        uVar9 = 0x6f;
        goto LAB_0044f15c;
      }
      lVar8 = FUN_0044eff4(param_4,param_5,acStack_468,iVar4,0,0,0,lVar7);
LAB_0044f290:
      FUN_003c89b8(acStack_468,(long)iVar4);
    }
    else {
      lVar8 = FUN_0044eff4(param_4,param_5,param_6,param_7,0,0,0,lVar7);
      if (param_6 == acStack_468) goto LAB_0044f290;
    }
    if (lVar8 == 0) {
      uVar2 = 0;
    }
    else {
      if (param_3 == 0) {
        uVar2 = FUN_00410b54(PTR_FUN_007a1a10,"ENCRYPTED PRIVATE KEY",param_1,lVar8,0,0,0,0,0);
      }
      else {
        uVar2 = FUN_00434768(param_1,lVar8);
      }
      FUN_003dfe44(lVar8);
    }
  }
  FUN_003dfeb8(lVar7);
LAB_0044f324:
  FUN_003ab75c(lVar5);
  return uVar2;
}


// ===== 0044f378  FUN_0044f378 =====

void FUN_0044f378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_0044f05c(param_1,param_2,0,0xffffffff,param_3,param_4,param_5,param_6,param_7);
  return;
}


// ===== 0044f3b4  FUN_0044f3b4 =====

void FUN_0044f3b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_0044f05c(param_1,param_2,1,0xffffffff,param_3,param_4,param_5,param_6,param_7);
  return;
}


// ===== 0044f3f0  FUN_0044f3f0 =====

void FUN_0044f3f0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_0044f05c(param_1,param_2,1,param_3,0,param_4,param_5,param_6,param_7);
  return;
}


// ===== 0044f42c  FUN_0044f42c =====

long FUN_0044f42c(undefined8 param_1,long *param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_440 [1024];
  
  lVar2 = FUN_00434748(param_1,0);
  if (lVar2 == 0) {
    return 0;
  }
  if (param_3 == (code *)0x0) {
    iVar1 = FUN_00410458(auStack_440,0x400,0,param_4);
  }
  else {
    iVar1 = (*param_3)();
  }
  if (iVar1 < 0) {
    FUN_00379868();
    FUN_0037995c("crypto/pem/pem_pk8.c",0xba,"d2i_PKCS8PrivateKey_bio");
    FUN_00379a5c(9,0x68,0);
    FUN_003dfe44(lVar2);
  }
  else {
    lVar3 = FUN_0044f6b0(lVar2,auStack_440,iVar1);
    FUN_003dfe44(lVar2);
    FUN_003c89b8(auStack_440,iVar1);
    if (lVar3 != 0) {
      lVar2 = FUN_00439a78(lVar3);
      FUN_003dfeb8(lVar3);
      if (lVar2 == 0) {
        return 0;
      }
      if (param_2 == (long *)0x0) {
        return lVar2;
      }
      FUN_003a6c04(*param_2);
      *param_2 = lVar2;
      return lVar2;
    }
  }
  return 0;
}


// ===== 0044f558  FUN_0044f558 =====

void FUN_0044f558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_0044f718(PTR_FUN_007a1a08,"ENCRYPTED PRIVATE KEY",param_1,param_2,param_3,param_4);
  return;
}


// ===== 0044f57c  FUN_0044f57c =====

void FUN_0044f57c(undefined8 param_1,undefined8 param_2)

{
  FUN_00410b54(PTR_FUN_007a1a10,"ENCRYPTED PRIVATE KEY",param_1,param_2,0,0,0,0,0);
  return;
}


// ===== 0044f5c8  FUN_0044f5c8 =====

void FUN_0044f5c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_0044f718(PTR_FUN_007a19e0,"PRIVATE KEY",param_1,param_2,param_3,param_4);
  return;
}


// ===== 0044f5ec  FUN_0044f5ec =====

void FUN_0044f5ec(undefined8 param_1,undefined8 param_2)

{
  FUN_00410b54(PTR_FUN_007a19e8,"PRIVATE KEY",param_1,param_2,0,0,0,0,0);
  return;
}


// ===== 0044f638  FUN_0044f638 =====

void FUN_0044f638(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined8 local_28;
  
  FUN_003dfe50(param_1,&local_28,&local_48);
  uVar1 = FUN_003dfe88();
  FUN_0044a290(local_28,uVar1,param_2,param_3,local_48,1,param_4,param_5);
  return;
}


// ===== 0044f6b0  FUN_0044f6b0 =====

void FUN_0044f6b0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 local_38;
  undefined8 local_18;
  
  FUN_003dfe50(param_1,&local_18,&local_38);
  uVar1 = FUN_003dfe88();
  FUN_0044a290(local_18,uVar1,param_2,param_3,local_38,1,0,0);
  return;
}


// ===== 0044f718  FUN_0044f718 =====

long FUN_0044f718(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_30 = 0;
  iVar1 = FUN_00410694(&local_30,&local_38,0,param_2,param_3,param_5,param_6);
  if (iVar1 != 0) {
    local_28 = local_30;
    lVar2 = (*param_1)(param_4,&local_28,local_38);
    if (lVar2 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/pem/pem_oth.c",0x21,"PEM_ASN1_read_bio");
      FUN_00379a5c(9,0x8000d,0);
    }
    FUN_003c86b4(local_30,"crypto/pem/pem_oth.c",0x22);
    return lVar2;
  }
  return 0;
}


// ===== 0044f7e4  FUN_0044f7e4 =====

void FUN_0044f7e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_0044f718(PTR_FUN_007a1d20,"CERTIFICATE REQUEST",param_1,param_2,param_3,param_4);
  return;
}


// ===== 0044f808  FUN_0044f808 =====

void FUN_0044f808(undefined8 param_1,undefined8 param_2)

{
  FUN_00410b54(PTR_FUN_007a1d28,"CERTIFICATE REQUEST",param_1,param_2,0,0,0,0,0);
  return;
}


// ===== 0044f854  FUN_0044f854 =====

void FUN_0044f854(undefined8 param_1,undefined8 param_2)

{
  FUN_00410b54(PTR_FUN_007a1d28,"NEW CERTIFICATE REQUEST",param_1,param_2,0,0,0,0,0);
  return;
}


// ===== 0044f8a0  FUN_0044f8a0 =====

void FUN_0044f8a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_0044f718(PTR_FUN_007a1d10,"X509 CRL",param_1,param_2,param_3,param_4);
  return;
}


// ===== 0044f8c4  FUN_0044f8c4 =====

void FUN_0044f8c4(undefined8 param_1,undefined8 param_2)

{
  FUN_00410b54(PTR_FUN_007a1d18,"X509 CRL",param_1,param_2,0,0,0,0,0);
  return;
}


// ===== 0044f910  FUN_0044f910 =====

void FUN_0044f910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_0044f718(PTR_FUN_007a1d00,"PUBLIC KEY",param_1,param_2,param_3,param_4);
  return;
}


// ===== 0044f934  FUN_0044f934 =====

void FUN_0044f934(undefined8 param_1,undefined8 param_2)

{
  FUN_00410b54(PTR_FUN_007a1ce0,"PUBLIC KEY",param_1,param_2,0,0,0,0,0);
  return;
}


// ===== 0044f980  FUN_0044f980 =====

void FUN_0044f980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_0044f718(PTR_FUN_007a1bb0,"PKCS7",param_1,param_2,param_3,param_4);
  return;
}


// ===== 0044f9a4  FUN_0044f9a4 =====

void FUN_0044f9a4(undefined8 param_1,undefined8 param_2)

{
  FUN_00410b54(PTR_FUN_007a1bb8,"PKCS7",param_1,param_2,0,0,0,0,0);
  return;
}


// ===== 0044f9f0  FUN_0044f9f0 =====

void FUN_0044f9f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_0044f718(PTR_FUN_007a19d0,"CERTIFICATE",param_1,param_2,param_3,param_4);
  return;
}


// ===== 0044fa14  FUN_0044fa14 =====

void FUN_0044fa14(undefined8 param_1,undefined8 param_2)

{
  FUN_00410b54(PTR_FUN_007a19d8,"CERTIFICATE",param_1,param_2,0,0,0,0,0);
  return;
}


// ===== 0044fa60  FUN_0044fa60 =====

long FUN_0044fa60(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_004503c4(param_1,0);
  lVar2 = lVar1;
  if (lVar1 != 0) {
    lVar2 = FUN_003b0ad8();
    FUN_003a6c04(lVar1);
    if ((lVar2 != 0) && (param_2 != (long *)0x0)) {
      FUN_003fa6a0(*param_2);
      *param_2 = lVar2;
    }
  }
  return lVar2;
}


// ===== 0044fac8  FUN_0044fac8 =====

void FUN_0044fac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_00410b54(PTR_FUN_007a1be0,"RSA PRIVATE KEY",param_1,param_2,param_3,param_4,param_5,param_6,
               param_7);
  return;
}


// ===== 0044fb18  FUN_0044fb18 =====

void FUN_0044fb18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_0044f718(PTR_FUN_007a1bd0,"RSA PUBLIC KEY",param_1,param_2,param_3,param_4);
  return;
}


// ===== 0044fb3c  FUN_0044fb3c =====

void FUN_0044fb3c(undefined8 param_1,undefined8 param_2)

{
  FUN_00410b54(PTR_FUN_007a1bd8,"RSA PUBLIC KEY",param_1,param_2,0,0,0,0,0);
  return;
}


// ===== 0044fb88  FUN_0044fb88 =====

void FUN_0044fb88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_0044f718(PTR_FUN_007a1ce8,"PUBLIC KEY",param_1,param_2,param_3,param_4);
  return;
}


// ===== 0044fbac  FUN_0044fbac =====

void FUN_0044fbac(undefined8 param_1,undefined8 param_2)

{
  FUN_00410b54(PTR_FUN_007a1cf0,"PUBLIC KEY",param_1,param_2,0,0,0,0,0);
  return;
}


// ===== 0044fbf8  FUN_0044fbf8 =====

ulong FUN_0044fbf8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = FUN_003aa8a0(param_2,0x86,&DAT_001d60f8,"SubjectPublicKeyInfo",0);
  iVar1 = FUN_003abf28();
  if (iVar1 != 0) {
    uVar3 = FUN_003abe90(uVar2,param_1);
    FUN_003ab75c(uVar2);
    return uVar3 & 0xffffffff;
  }
  FUN_003ab75c(uVar2);
  uVar3 = FUN_00410b54(PTR_FUN_007a1cd8,"PUBLIC KEY",param_1,param_2,0,0,0,0,0);
  return uVar3;
}


// ===== 0044fcbc  FUN_0044fcbc =====

ulong FUN_0044fcbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = FUN_003aa8a0(param_2,0x86,&DAT_001d60f8,"SubjectPublicKeyInfo",param_4);
  iVar1 = FUN_003abf28();
  if (iVar1 != 0) {
    uVar3 = FUN_003abe90(uVar2,param_1);
    FUN_003ab75c(uVar2);
    return uVar3 & 0xffffffff;
  }
  FUN_003ab75c(uVar2);
  uVar3 = FUN_00410b54(PTR_FUN_007a1cd8,"PUBLIC KEY",param_1,param_2,0,0,0,0,0);
  return uVar3;
}


// ===== 0044fd80  FUN_0044fd80 =====

undefined * FUN_0044fd80(void)

{
  return &DAT_007887f8;
}


// ===== 0044fd8c  FUN_0044fd8c =====

void FUN_0044fd8c(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0044fd98  FUN_0044fd98 =====

void FUN_0044fd98(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_007887f8);
  return;
}


// ===== 0044fda4  FUN_0044fda4 =====

void FUN_0044fda4(void)

{
  FUN_0039a5f4(&DAT_007887f8);
  return;
}


// ===== 0044fdb0  FUN_0044fdb0 =====

void FUN_0044fdb0(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_007887f8);
  return;
}


// ===== 0044fdbc  FUN_0044fdbc =====

undefined8 FUN_0044fdbc(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 1) {
    param_2 = (undefined8 *)*param_2;
    uVar1 = FUN_003dcce8(0x4f);
    *param_2 = uVar1;
  }
  return 1;
}


// ===== 0044fdf0  FUN_0044fdf0 =====

void FUN_0044fdf0(void)

{
  FUN_0044fdf8();
  return;
}


// ===== 0044fdf8  FUN_0044fdf8 =====

long FUN_0044fdf8(undefined8 param_1,long *param_2,undefined *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,uint param_7)

{
  undefined *puVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined4 *puVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  long local_488 [128];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  char *local_70 [2];
  
  uStack_4a8 = 0;
  local_4b0 = 0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  uStack_4b8 = 0;
  local_4c0 = 0;
  iVar3 = FUN_0037e4bc(param_1,0x85,0,0);
  if (iVar3 < 0) {
    FUN_00386ccc();
    lVar12 = FUN_0037db44();
    if (lVar12 == 0) {
      return 0;
    }
    param_1 = FUN_0037eda0(lVar12,param_1);
    iVar3 = FUN_0037e4bc(param_1,0x85,0,0);
  }
  else {
    lVar12 = 0;
  }
  puVar1 = PTR_FUN_007a1ba8;
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
  }
  iVar4 = FUN_003d0774(&local_4c0,puVar1,param_4);
  if ((iVar4 != 0) && (iVar4 = FUN_003d09cc(&local_4c0), iVar4 != 0)) {
    FUN_0037f6d4();
    local_488[0] = 0;
    iVar4 = FUN_0037e4bc(param_1,0x85,0,0);
    if ((-1 < iVar4) &&
       (lVar8 = FUN_00383d54(local_488,&DAT_001d60f8,0,0,param_7,param_5,param_6), lVar8 != 0)) {
      iVar5 = FUN_00383924(lVar8,PTR_FUN_007a1b88,&local_4c0);
      if (iVar5 != 0) {
        FUN_0037f6d4();
        iVar5 = FUN_00385994(lVar8,param_1);
        while( true ) {
          if ((iVar5 != 0) && (local_488[0] != 0)) {
            FUN_0037f71c();
            uVar11 = param_7;
            if ((param_7 & 1) != 0) {
              uVar11 = param_7 & 0xfffffffd;
            }
            iVar4 = FUN_0039fb18(local_488[0],uVar11);
            if (iVar4 == 0) {
              FUN_003a6c04(local_488[0]);
              local_488[0] = 0;
              FUN_00379868();
              FUN_0037995c("crypto/pem/pem_pkey.c",0x55,"pem_read_bio_key_decoder");
              FUN_00379a5c(9,0x7e,0);
              FUN_00385540(lVar8);
              lVar8 = local_488[0];
            }
            else {
              if (param_2 == (long *)0x0) goto LAB_0045002c;
              FUN_003a6c04(*param_2);
              *param_2 = local_488[0];
              FUN_00385540(lVar8);
              lVar8 = local_488[0];
            }
            goto joined_r0x00450038;
          }
          iVar5 = FUN_0037e4bc(param_1,2,0,0);
          if (((iVar5 != 0) || (iVar6 = FUN_0037e4bc(param_1,0x85,0,0), iVar6 < 0)) ||
             (iVar6 <= iVar4)) break;
          uVar7 = FUN_0037a6b8();
          uVar11 = 0x7fffff;
          if ((int)uVar7 < 0) {
            uVar11 = 0x7fffffff;
          }
          if ((uVar11 & uVar7) != 0x8010c) break;
          FUN_0037f71c();
          FUN_0037f6d4();
          iVar5 = FUN_00385994(lVar8,param_1);
          iVar4 = iVar6;
        }
        FUN_0037f8c4();
      }
LAB_0045002c:
      FUN_00385540(lVar8);
      lVar8 = local_488[0];
joined_r0x00450038:
      local_488[0] = lVar8;
      if (lVar8 == 0) goto LAB_0045003c;
LAB_00450350:
      FUN_0037f71c();
      FUN_003d05c4(&local_4c0);
      goto joined_r0x00450374;
    }
LAB_0045003c:
    iVar3 = FUN_0037e4bc(param_1,0x80,(long)iVar3,0);
    if (-1 < iVar3) {
      local_70[0] = (char *)0x0;
      local_80 = 0;
      FUN_0037f6d4();
      if ((param_7 & 1) == 0) {
        pcVar2 = "PARAMETERS";
        if ((param_7 & 2) != 0) {
          pcVar2 = "PUBLIC KEY";
        }
        iVar3 = FUN_00410694(&local_80,&local_88,local_70,pcVar2,param_1,PTR_FUN_007a1b88,&local_4c0
                            );
      }
      else {
        iVar3 = FUN_00410b4c(&local_80,&local_88,local_70,"ANY PRIVATE KEY",param_1,PTR_FUN_007a1b88
                             ,&local_4c0);
      }
      if (iVar3 == 0) {
        FUN_0037f71c();
      }
      else {
        FUN_0037f8c4();
        pcVar2 = local_70[0];
        local_78 = local_80;
        iVar3 = strcmp(local_70[0],"PRIVATE KEY");
        if (iVar3 == 0) {
          lVar10 = FUN_003dfe94(0,&local_78,local_88);
          if (lVar10 != 0) {
            lVar8 = FUN_00439730(lVar10,param_5,param_6);
            if (param_2 != (long *)0x0) {
              FUN_003a6c04(*param_2);
              *param_2 = lVar8;
            }
            FUN_003dfeb8(lVar10);
            goto LAB_004502ac;
          }
          goto LAB_004502b0;
        }
        iVar3 = strcmp(pcVar2,"ENCRYPTED PRIVATE KEY");
        if (iVar3 == 0) {
          lVar8 = FUN_003dfe20(0,&local_78,local_88);
          if (lVar8 != 0) {
            iVar3 = FUN_003d0f84(local_488,0x400,0,&local_4c0);
            if (-1 < iVar3) {
              lVar10 = FUN_0044f6b0(lVar8,local_488,iVar3);
              FUN_003dfe44(lVar8);
              FUN_003c89b8(local_488,iVar3);
              if (lVar10 != 0) {
                lVar8 = FUN_00439730(lVar10,param_5,param_6);
                if (param_2 != (long *)0x0) {
                  FUN_003a6c04(*param_2);
                  *param_2 = lVar8;
                }
                FUN_003dfeb8(lVar10);
                goto LAB_004502ac;
              }
              goto LAB_004502a8;
            }
            FUN_00379868();
            FUN_0037995c("crypto/pem/pem_pkey.c",0x9f,"pem_read_bio_key_legacy");
            FUN_00379a5c(9,0x68,0);
            FUN_003dfe44(lVar8);
            goto LAB_00450320;
          }
LAB_004502a8:
          lVar8 = 0;
LAB_004502ac:
          if (lVar8 == 0) goto LAB_004502b0;
        }
        else {
          iVar3 = FUN_004120fc(pcVar2,"PRIVATE KEY");
          if (iVar3 < 1) {
            if ((param_7 & 3) == 2) {
              lVar8 = FUN_0043cb3c(param_2,&local_78,local_88);
              goto LAB_004502ac;
            }
          }
          else {
            puVar9 = (undefined4 *)FUN_003a9d34(0,local_70[0],iVar3);
            if ((puVar9 != (undefined4 *)0x0) && (*(long *)(puVar9 + 0x2e) != 0)) {
              lVar8 = FUN_0043a090(*puVar9,param_2,&local_78,local_88,param_5,param_6);
              goto LAB_004502ac;
            }
          }
LAB_004502b0:
          lVar8 = FUN_0037a744();
          if (lVar8 == 0) {
            FUN_00379868();
            FUN_0037995c("crypto/pem/pem_pkey.c",0xcf,"pem_read_bio_key_legacy");
            FUN_00379a5c(9,0x8000d,0);
          }
LAB_00450320:
          lVar8 = 0;
        }
        FUN_003c96d0(local_70[0],"crypto/pem/pem_pkey.c",0xd1);
        FUN_003c9d0c(local_80,local_88,"crypto/pem/pem_pkey.c",0xd2);
        if (lVar8 != 0) goto LAB_00450350;
      }
    }
    FUN_0037f8c4();
  }
  lVar8 = 0;
  FUN_003d05c4(&local_4c0);
joined_r0x00450374:
  if (lVar12 != 0) {
    FUN_0037edf4(lVar12);
    FUN_0037db50(lVar12);
  }
  return lVar8;
}


// ===== 004503ac  FUN_004503ac =====

void FUN_004503ac(void)

{
  FUN_0044fdf8();
  return;
}


// ===== 004503bc  FUN_004503bc =====

void FUN_004503bc(void)

{
  FUN_0044fdf8();
  return;
}


// ===== 004503c4  FUN_004503c4 =====

void FUN_004503c4(void)

{
  FUN_0044fdf8();
  return;
}


// ===== 004503d4  FUN_004503d4 =====

ulong FUN_004503d4(undefined8 param_1,long param_2,long param_3,char *param_4,int param_5,
                  undefined *param_6,char *param_7,undefined8 param_8,undefined8 param_9)

{
  int iVar1;
  undefined8 uVar2;
  size_t sVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar2 = FUN_003aa8a0(param_2,0x87,&DAT_001d60f8,"PrivateKeyInfo",param_9);
  iVar1 = FUN_003abf28();
  if (iVar1 != 0) {
    if (param_4 == (char *)0x0 && param_6 == (undefined *)0x0) {
      if (param_7 == (char *)0x0) {
        param_4 = (char *)0x0;
        param_6 = PTR_FUN_007a1ba8;
      }
      else {
        sVar3 = strlen(param_7);
        param_6 = (undefined *)0x0;
        param_5 = (int)sVar3;
        param_4 = param_7;
      }
    }
    if (param_3 != 0) {
      uVar4 = FUN_00389880(param_3);
      iVar1 = FUN_003aa7f0(uVar2,uVar4,0);
      if (((iVar1 == 0) ||
          ((param_4 != (char *)0x0 &&
           (iVar1 = FUN_003aa880(uVar2,param_4,(long)param_5), iVar1 == 0)))) ||
         ((param_6 != (undefined *)0x0 && (iVar1 = FUN_003aa890(uVar2,param_6,param_7), iVar1 == 0))
         )) {
        FUN_003ab75c(uVar2);
        return 0;
      }
    }
    uVar5 = FUN_003abe90(uVar2,param_1);
    FUN_003ab75c(uVar2);
    return uVar5 & 0xffffffff;
  }
  FUN_003ab75c(uVar2);
  if (param_2 == 0) {
    return 0;
  }
  if ((*(long *)(param_2 + 8) != 0) && (*(long *)(*(long *)(param_2 + 8) + 0x48) == 0)) {
    uVar5 = FUN_00450594(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    return uVar5;
  }
  uVar5 = FUN_0044f378(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar5;
}


// ===== 00450594  FUN_00450594 =====

undefined4
FUN_00450594(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined1 auStack_a0 [80];
  long local_38;
  
  local_38 = 0;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    if ((((*(long *)(param_2 + 0x20) != 0) || (*(long *)(param_2 + 0x68) != 0)) &&
        (*(long *)(param_2 + 0x60) != 0)) && (iVar1 = FUN_003a64f4(&local_38,param_2), iVar1 != 0))
    {
      param_2 = local_38;
    }
    lVar3 = *(long *)(param_2 + 8);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0xc0) == 0)) {
      FUN_00379868();
      FUN_0037995c("crypto/pem/pem_pkey.c",0x165,"PEM_write_bio_PrivateKey_traditional");
      FUN_00379a5c(9,0x6e,0);
      uVar2 = 0;
    }
    else {
      FUN_0037cd5c(auStack_a0,0x50,"%s PRIVATE KEY",*(undefined8 *)(lVar3 + 0x10));
      uVar2 = FUN_00410b54(PTR_FUN_007a19c8,auStack_a0,param_1,param_2,param_3,param_4,param_5,
                           param_6,param_7);
    }
    FUN_003a6c04(local_38);
  }
  return uVar2;
}


// ===== 004506c0  FUN_004506c0 =====

void FUN_004506c0(void)

{
  FUN_004503d4();
  return;
}


// ===== 004506e0  FUN_004506e0 =====

void FUN_004506e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_0044fdf8(param_1,param_2,FUN_004506fc,0,param_3,param_4,0x84);
  return;
}


// ===== 004506fc  FUN_004506fc =====

undefined8 FUN_004506fc(void)

{
  return 0xffffffff;
}


// ===== 00450704  FUN_00450704 =====

void FUN_00450704(undefined8 param_1,undefined8 param_2)

{
  FUN_0044fdf8(param_1,param_2,FUN_004506fc,0,0,0,0x84);
  return;
}


// ===== 00450720  FUN_00450720 =====

ulong FUN_00450720(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_80 [80];
  
  uVar2 = FUN_003aa8a0(param_2,0x84,&DAT_001d60f8,"type-specific",0);
  iVar1 = FUN_003abf28();
  if (iVar1 != 0) {
    uVar3 = FUN_003abe90(uVar2,param_1);
    FUN_003ab75c(uVar2);
    return uVar3 & 0xffffffff;
  }
  FUN_003ab75c(uVar2);
  lVar4 = *(long *)(param_2 + 8);
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x78) != 0)) {
    FUN_0037cd5c(auStack_80,0x50,"%s PARAMETERS",*(undefined8 *)(lVar4 + 0x10));
    uVar3 = FUN_00410b54(*(undefined8 *)(*(long *)(param_2 + 8) + 0x78),auStack_80,param_1,param_2,0
                         ,0,0,0,0);
    return uVar3;
  }
  return 0;
}


// ===== 00450820  FUN_00450820 =====

void FUN_00450820(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           FUN_003c8474(0x40,"providers/implementations/encode_decode/encode_key2ms.c",0x49);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    *(undefined4 *)(puVar1 + 1) = 2;
  }
  return;
}


// ===== 00450860  FUN_00450860 =====

void FUN_00450860(long param_1)

{
  FUN_003d05c4(param_1 + 0x10);
  FUN_003c86b4(param_1,"providers/implementations/encode_decode/encode_key2ms.c",0x58);
  return;
}


// ===== 00450894  FUN_00450894 =====

undefined ** FUN_00450894(void)

{
  return &PTR_s_encrypt_level_007889b0;
}


// ===== 004508a0  FUN_004508a0 =====

undefined8 FUN_004508a0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_003cb19c(param_2,"encrypt-level");
  if ((lVar1 == 0) || (uVar2 = thunk_FUN_003cb238(lVar1,param_1 + 8), (int)uVar2 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 004508e4  FUN_004508e4 =====

bool FUN_004508e4(undefined8 param_1,uint param_2)

{
  return (param_2 & 3) != 0;
}


// ===== 004508f0  FUN_004508f0 =====

void FUN_004508f0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_00451664(PTR_DAT_007a1d30,param_1,param_2,param_3);
  return;
}


// ===== 0045090c  FUN_0045090c =====

void FUN_0045090c(undefined8 param_1)

{
  FUN_00451780(PTR_DAT_007a1d30,param_1);
  return;
}


// ===== 00450920  FUN_00450920 =====

undefined4
FUN_00450920(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5,
            long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_4 != 0) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/encode_decode/encode_key2ms.c",0xe9,"rsa2pvk_encode");
    FUN_00379a5c(0x39,0x80106,0);
    return 0;
  }
  if ((param_5 & 1) == 0) {
    return 0;
  }
  lVar3 = FUN_003a8a70();
  if (((lVar3 != 0) && (iVar1 = FUN_003b09ec(lVar3,param_3), iVar1 != 0)) &&
     ((param_6 == 0 || (iVar1 = FUN_003d083c(param_1 + 2,param_6,param_7), iVar1 != 0)))) {
    uVar4 = FUN_0046b880(*param_1);
    lVar5 = FUN_0043f154(*param_1,param_2);
    if (lVar5 != 0) {
      uVar2 = FUN_0044bb10(lVar5,lVar3,*(undefined4 *)(param_1 + 1),PTR_FUN_007a1b90,param_1 + 2,
                           uVar4,0);
      FUN_0037db50(lVar5);
      goto LAB_00450a40;
    }
  }
  uVar2 = 0;
LAB_00450a40:
  FUN_003a6c04(lVar3);
  return uVar2;
}


// ===== 00450a60  FUN_00450a60 =====

void FUN_00450a60(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_00451664(PTR_DAT_007a1d30,param_1,param_2,param_3);
  return;
}


// ===== 00450a7c  FUN_00450a7c =====

void FUN_00450a7c(undefined8 param_1)

{
  FUN_00451780(PTR_DAT_007a1d30,param_1);
  return;
}


// ===== 00450a90  FUN_00450a90 =====

undefined4
FUN_00450a90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  
  if (param_4 != 0) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/encode_decode/encode_key2ms.c",0xea,"rsa2msblob_encode")
    ;
    FUN_00379a5c(0x39,0x80106,0);
    return 0;
  }
  if ((param_5 & 3) != 0) {
    lVar3 = FUN_003a8a70();
    if (((lVar3 == 0) || (iVar1 = FUN_003b09ec(lVar3,param_3), iVar1 == 0)) ||
       (lVar4 = FUN_0043f154(*param_1,param_2), lVar4 == 0)) {
      uVar2 = 0;
    }
    else {
      if ((param_5 & 1) == 0) {
        uVar2 = FUN_0044b678();
      }
      else {
        uVar2 = FUN_0044b5f4(lVar4,lVar3);
      }
      FUN_0037db50(lVar4);
    }
    FUN_003a6c04(lVar3);
    return uVar2;
  }
  return 0;
}


// ===== 00450b98  FUN_00450b98 =====

void FUN_00450b98(void)

{
  return;
}


// ===== 00450b9c  FUN_00450b9c =====

void FUN_00450b9c(void)

{
  return;
}


// ===== 00450ba0  FUN_00450ba0 =====

void FUN_00450ba0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_00451664(PTR_DAT_007a1d30,param_1,param_2,param_3);
  return;
}


// ===== 00450bbc  FUN_00450bbc =====

void FUN_00450bbc(undefined8 param_1)

{
  FUN_00451780(PTR_DAT_007a1d30,param_1);
  return;
}


// ===== 00450bd0  FUN_00450bd0 =====

undefined4
FUN_00450bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  long lVar2;
  
  if (param_4 == 0) {
    lVar2 = FUN_0043f154();
    if (lVar2 != 0) {
      uVar1 = FUN_00450d30(lVar2,param_3,param_5);
      FUN_0037db50(lVar2);
      return uVar1;
    }
  }
  else {
    FUN_00379868();
    FUN_0037995c("providers/implementations/encode_decode/encode_key2text.c",0x36f,"rsa2text_encode"
                );
    FUN_00379a5c(0x39,0x80106,0);
  }
  return 0;
}


// ===== 00450c68  FUN_00450c68 =====

void FUN_00450c68(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_00451664(PTR_DAT_007a1d38,param_1,param_2,param_3);
  return;
}


// ===== 00450c84  FUN_00450c84 =====

void FUN_00450c84(undefined8 param_1)

{
  FUN_00451780(PTR_DAT_007a1d38,param_1);
  return;
}


// ===== 00450c98  FUN_00450c98 =====

undefined4
FUN_00450c98(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  long lVar2;
  
  if (param_4 == 0) {
    lVar2 = FUN_0043f154();
    if (lVar2 != 0) {
      uVar1 = FUN_00450d30(lVar2,param_3,param_5);
      FUN_0037db50(lVar2);
      return uVar1;
    }
  }
  else {
    FUN_00379868();
    FUN_0037995c("providers/implementations/encode_decode/encode_key2text.c",0x370,
                 "rsapss2text_encode");
    FUN_00379a5c(0x39,0x80106,0);
  }
  return 0;
}


// ===== 00450d30  FUN_00450d30 =====

undefined4 FUN_00450d30(long param_1,long param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  local_68 = 0;
  local_78 = 0;
  local_70 = 0;
  uVar9 = FUN_003fb520(param_2);
  if ((param_1 == 0) || (param_2 == 0)) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/encode_decode/encode_key2text.c",0x285,"rsa_to_text");
    FUN_00379a5c(0x39,0xc0102,0);
    lVar12 = 0;
    lVar11 = 0;
    uVar1 = 0;
    lVar10 = 0;
    goto LAB_00450e30;
  }
  lVar10 = FUN_0040bf0c();
  lVar11 = FUN_0040bf0c();
  lVar12 = FUN_0040bf0c();
  if (((lVar10 == 0) || (lVar11 == 0)) || (lVar12 == 0)) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/encode_decode/encode_key2text.c",0x28e,"rsa_to_text");
    FUN_00379a5c(0x39,0x8000f,0);
  }
  else {
    if ((param_3 & 1) == 0) {
      if ((param_3 >> 1 & 1) == 0) {
        pcVar14 = (char *)0x0;
        pcVar15 = (char *)0x0;
        pcVar16 = "RSA key";
      }
      else {
        pcVar16 = "Public-Key";
        pcVar15 = "Modulus:";
        pcVar14 = "Exponent:";
      }
    }
    else {
      pcVar16 = "Private-Key";
      pcVar15 = "modulus:";
      pcVar14 = "publicExponent:";
    }
    FUN_003fb290(param_2,&local_70,&local_78,&local_68);
    FUN_003fb84c(param_2,lVar10,lVar11,lVar12);
    uVar1 = FUN_0040caf8(lVar10);
    uVar2 = FUN_0038f2c0(local_70);
    if ((param_3 & 1) == 0) {
      iVar3 = FUN_0037b9f8(param_1,"%s: (%d bit)\n",pcVar16,uVar2);
    }
    else {
      iVar3 = FUN_0037b9f8(param_1,"%s: (%d bit, %d primes)\n",pcVar16,uVar2,uVar1);
    }
    if (((0 < iVar3) && (iVar3 = FUN_004512a4(param_1,pcVar15,local_70), iVar3 != 0)) &&
       (iVar3 = FUN_004512a4(param_1,pcVar14,local_78), iVar3 != 0)) {
      if ((param_3 & 1) == 0) {
LAB_00450f54:
        if ((param_3 >> 7 & 1) != 0) {
          iVar3 = FUN_003fb538(param_2,0xf000);
          if (iVar3 == 0x1000) {
            iVar3 = FUN_00404a34(uVar9);
            if (iVar3 == 0) {
              iVar3 = FUN_00404ac8(uVar9);
              iVar4 = FUN_00404adc(uVar9);
              iVar5 = FUN_00404af0(uVar9);
              iVar6 = FUN_00404b04(uVar9);
              iVar7 = FUN_00404b18(uVar9);
              iVar8 = FUN_0037b9f8(param_1,"PSS parameter restrictions:\n");
              if (0 < iVar8) {
                uVar9 = FUN_00404ed0(iVar3);
                pcVar16 = " (default)";
                pcVar15 = pcVar16;
                if (iVar3 != 0x40) {
                  pcVar15 = "";
                }
                iVar3 = FUN_0037b9f8(param_1,"  Hash Algorithm: %s%s\n",uVar9,pcVar15);
                if (0 < iVar3) {
                  uVar9 = FUN_00404f78(iVar4);
                  uVar13 = FUN_00404ed0(iVar5);
                  pcVar15 = "";
                  pcVar14 = pcVar16;
                  if (iVar5 != 0x40 || iVar4 != 0x38f) {
                    pcVar14 = pcVar15;
                  }
                  iVar3 = FUN_0037b9f8(param_1,"  Mask Algorithm: %s with %s%s\n",uVar9,uVar13,
                                       pcVar14);
                  if (0 < iVar3) {
                    pcVar14 = pcVar16;
                    if (iVar6 != 0x14) {
                      pcVar14 = pcVar15;
                    }
                    iVar3 = FUN_0037b9f8(param_1,"  Minimum Salt Length: %d%s\n",iVar6,pcVar14);
                    if (0 < iVar3) {
                      if (iVar7 != 1) {
                        pcVar16 = pcVar15;
                      }
                      iVar3 = FUN_0037b9f8(param_1,"  Trailer Field: 0x%x%s\n",iVar7,pcVar16);
                      goto joined_r0x0045129c;
                    }
                  }
                }
              }
            }
            else {
              iVar3 = FUN_0037b9f8(param_1,"No PSS parameter restrictions\n");
              if (0 < iVar3) goto LAB_00451170;
            }
            goto LAB_00450e2c;
          }
          if ((iVar3 == 0) && (iVar3 = FUN_00404a34(uVar9), iVar3 == 0)) {
            iVar3 = FUN_0037b9f8(param_1,"(INVALID PSS PARAMETERS)\n");
joined_r0x0045129c:
            if (iVar3 < 1) goto LAB_00450e2c;
          }
        }
LAB_00451170:
        uVar1 = 1;
        goto LAB_00450e30;
      }
      iVar3 = FUN_004512a4(param_1,"privateExponent:",local_68);
      if (iVar3 != 0) {
        uVar13 = FUN_0040cb0c(lVar10,0);
        iVar3 = FUN_004512a4(param_1,"prime1:",uVar13);
        if (iVar3 != 0) {
          uVar13 = FUN_0040cb0c(lVar10,1);
          iVar3 = FUN_004512a4(param_1,"prime2:",uVar13);
          if (iVar3 != 0) {
            uVar13 = FUN_0040cb0c(lVar11,0);
            iVar3 = FUN_004512a4(param_1,"exponent1:",uVar13);
            if (iVar3 != 0) {
              uVar13 = FUN_0040cb0c(lVar11,1);
              iVar3 = FUN_004512a4(param_1,"exponent2:",uVar13);
              if (iVar3 != 0) {
                uVar13 = FUN_0040cb0c(lVar12,0);
                iVar3 = FUN_004512a4(param_1,"coefficient:",uVar13);
                if (iVar3 != 0) {
                  iVar3 = 2;
                  while( true ) {
                    iVar4 = FUN_0040caf8(lVar10);
                    if (iVar4 <= iVar3) goto LAB_00450f54;
                    iVar4 = FUN_0037b9f8(param_1,"prime%d:",iVar3 + 1);
                    if (iVar4 < 1) break;
                    uVar13 = FUN_0040cb0c(lVar10,iVar3);
                    iVar4 = FUN_004512a4(param_1,0,uVar13);
                    if ((iVar4 == 0) ||
                       (iVar4 = FUN_0037b9f8(param_1,"exponent%d:",iVar3 + 1), iVar4 < 1)) break;
                    uVar13 = FUN_0040cb0c(lVar11,iVar3);
                    iVar4 = FUN_004512a4(param_1,0,uVar13);
                    if (iVar4 == 0) break;
                    iVar4 = FUN_0037b9f8(param_1,"coefficient%d:",iVar3 + 1);
                    if (iVar4 < 1) break;
                    uVar13 = FUN_0040cb0c(lVar12,iVar3 + -1);
                    iVar4 = FUN_004512a4(param_1,0,uVar13);
                    iVar3 = iVar3 + 1;
                    if (iVar4 == 0) break;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00450e2c:
  uVar1 = 0;
LAB_00450e30:
  FUN_0040bd78(lVar10);
  FUN_0040bd78(lVar11);
  FUN_0040bd78(lVar12);
  return uVar1;
}


// ===== 004512a4  FUN_004512a4 =====

ulong FUN_004512a4(undefined8 param_1,char *param_2,long param_3)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  byte bVar4;
  byte bVar5;
  char *pcVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  uint uVar13;
  byte *pbVar14;
  undefined4 local_48;
  undefined1 local_44;
  
  local_44 = 0;
  local_48 = 0x20202020;
  if (param_3 == 0) {
    return 0;
  }
  pcVar1 = "";
  pcVar3 = pcVar1;
  pcVar6 = pcVar1;
  if (param_2 != (char *)0x0) {
    pcVar3 = " ";
    pcVar6 = param_2;
  }
  iVar8 = FUN_0038f448(param_3);
  if (iVar8 != 0) {
    uVar9 = FUN_0037b9f8(param_1,"%s%s0\n",pcVar6,pcVar3);
    return uVar9;
  }
  iVar8 = FUN_0038f2c0(param_3);
  if (iVar8 < 0x41) {
    puVar10 = (undefined8 *)FUN_003f154c(param_3);
    iVar8 = FUN_003908c4(param_3);
    if (iVar8 != 0) {
      pcVar1 = "-";
    }
    uVar9 = FUN_0037b9f8(param_1,"%s%s%s%lu (%s0x%lx)\n",pcVar6,pcVar3,pcVar1,*puVar10,pcVar1,
                         *puVar10);
    return uVar9;
  }
  pbVar11 = (byte *)FUN_003cfce4(param_3);
  if (pbVar11 == (byte *)0x0) {
    return 0;
  }
  bVar7 = *pbVar11 == 0x2d;
  pbVar14 = pbVar11;
  if (bVar7) {
    pbVar14 = pbVar11 + 1;
  }
  pcVar3 = " (Negative)";
  if (!bVar7) {
    pcVar3 = pcVar1;
  }
  iVar8 = FUN_0037b9f8(param_1,"%s%s\n",pcVar6,pcVar3);
  if ((iVar8 < 1) || (iVar8 = FUN_0037b9f8(param_1,&DAT_001d3a58,&local_48), iVar8 < 1)) {
LAB_00451584:
    uVar13 = 0;
  }
  else {
    bVar4 = *pbVar14;
    if (bVar4 < 0x38) {
      if (bVar4 != 0) {
        puVar12 = &DAT_001c717f;
        uVar9 = 1;
LAB_00451478:
        bVar5 = pbVar14[1];
        uVar13 = (uint)bVar4;
        if (0xffffffe5 < uVar13 - 0x5b) {
          uVar13 = uVar13 | 0x20;
        }
        uVar2 = (uint)bVar5;
        if (0xffffffe5 < bVar5 - 0x5b) {
          uVar2 = bVar5 | 0x20;
        }
        iVar8 = FUN_0037b9f8(param_1,"%s%c%c",puVar12,uVar13,uVar2);
        if (iVar8 < 1) goto LAB_00451584;
        bVar4 = pbVar14[2];
        if (bVar4 != 0) {
          pbVar14 = pbVar11 + (ulong)bVar7 + 4;
          do {
            puVar12 = &DAT_001d9efd;
            if ((int)uVar9 + (int)(uVar9 / 0xf) * -0xf == 0) {
              iVar8 = FUN_0037b9f8(param_1,&DAT_001f3fb6,&local_48);
              if (iVar8 < 1) goto LAB_00451584;
              bVar4 = pbVar14[-2];
              puVar12 = &DAT_001c717f;
            }
            bVar5 = pbVar14[-1];
            uVar13 = (uint)bVar4;
            if (0xffffffe5 < uVar13 - 0x5b) {
              uVar13 = uVar13 | 0x20;
            }
            uVar2 = (uint)bVar5;
            if (0xffffffe5 < bVar5 - 0x5b) {
              uVar2 = bVar5 | 0x20;
            }
            iVar8 = FUN_0037b9f8(param_1,"%s%c%c",puVar12,uVar13,uVar2);
            if (iVar8 < 1) goto LAB_00451584;
            bVar4 = *pbVar14;
            uVar9 = (ulong)((int)uVar9 + 1);
            pbVar14 = pbVar14 + 2;
          } while (bVar4 != 0);
        }
      }
    }
    else {
      iVar8 = FUN_0037b9f8(param_1,&DAT_001f6273,0);
      if (iVar8 < 1) goto LAB_00451584;
      bVar4 = *pbVar14;
      if (bVar4 != 0) {
        puVar12 = &DAT_001d9efd;
        uVar9 = 2;
        goto LAB_00451478;
      }
    }
    iVar8 = FUN_0037b9f8(param_1,&DAT_001e2980);
    uVar13 = (uint)(0 < iVar8);
  }
  FUN_003c86b4(pbVar11,"providers/implementations/encode_decode/encode_key2text.c",0x7d);
  return (ulong)uVar13;
}


// ===== 004515a4  FUN_004515a4 =====

undefined8 FUN_004515a4(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = param_1 + 2;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar1 == 1) break;
    iVar1 = piVar2[2];
    piVar2 = piVar2 + 4;
  }
  return *(undefined8 *)piVar2;
}


// ===== 004515d4  FUN_004515d4 =====

undefined8 FUN_004515d4(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = param_1 + 2;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar1 == 10) break;
    iVar1 = piVar2[2];
    piVar2 = piVar2 + 4;
  }
  return *(undefined8 *)piVar2;
}


// ===== 00451604  FUN_00451604 =====

undefined8 FUN_00451604(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = param_1 + 2;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar1 == 0x28) break;
    iVar1 = piVar2[2];
    piVar2 = piVar2 + 4;
  }
  return *(undefined8 *)piVar2;
}


// ===== 00451634  FUN_00451634 =====

undefined8 FUN_00451634(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = param_1 + 2;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar1 == 0x2a) break;
    iVar1 = piVar2[2];
    piVar2 = piVar2 + 4;
  }
  return *(undefined8 *)piVar2;
}


// ===== 00451664  FUN_00451664 =====

long FUN_00451664(int *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  int *piVar4;
  code *pcVar5;
  code *pcVar6;
  
  iVar1 = *param_1;
  piVar4 = param_1 + 2;
  do {
    if (iVar1 == 0) {
      pcVar3 = (code *)0x0;
      iVar1 = *param_1;
      piVar4 = param_1 + 2;
joined_r0x004516a4:
      while( true ) {
        if (iVar1 == 0) {
          pcVar5 = (code *)0x0;
          iVar1 = *param_1;
          piVar4 = param_1 + 2;
          goto joined_r0x004516dc;
        }
        if (iVar1 == 10) break;
        iVar1 = piVar4[2];
        piVar4 = piVar4 + 4;
      }
      pcVar5 = *(code **)piVar4;
      piVar4 = param_1 + 2;
      iVar1 = *param_1;
      if (iVar1 == 0) {
        return 0;
      }
      do {
        if (iVar1 == 0x28) {
          lVar2 = 0;
          if ((((pcVar3 != (code *)0x0) && (pcVar6 = *(code **)piVar4, pcVar6 != (code *)0x0)) &&
              (pcVar5 != (code *)0x0)) &&
             ((lVar2 = (*pcVar3)(param_2), lVar2 == 0 ||
              (iVar1 = (*pcVar6)(lVar2,param_3,param_4), iVar1 == 0)))) {
            (*pcVar5)(lVar2);
            return 0;
          }
          return lVar2;
        }
        iVar1 = piVar4[2];
        piVar4 = piVar4 + 4;
joined_r0x004516dc:
      } while (iVar1 != 0);
      return 0;
    }
    if (iVar1 == 1) {
      pcVar3 = *(code **)piVar4;
      iVar1 = *param_1;
      piVar4 = param_1 + 2;
      goto joined_r0x004516a4;
    }
    iVar1 = piVar4[2];
    piVar4 = piVar4 + 4;
  } while( true );
}


// ===== 00451780  FUN_00451780 =====

void FUN_00451780(int *param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = param_1 + 2;
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    if (iVar1 == 10) break;
    iVar1 = piVar2[2];
    piVar2 = piVar2 + 4;
  }
  if (*(code **)piVar2 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004517b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)piVar2)(param_2);
  return;
}


// ===== 004517b8  FUN_004517b8 =====

uint FUN_004517b8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *local_38;
  
  local_38 = (undefined8 *)0x0;
  lVar3 = FUN_0043f154();
  if (lVar3 != 0) {
    uVar2 = FUN_003e04f8(lVar3,&local_38);
    if (-1 < (int)uVar2) {
      uVar1 = *local_38;
      *param_3 = local_38[1];
      *param_4 = uVar1;
      FUN_003c86b4(local_38,"providers/implementations/encode_decode/endecoder_common.c",100);
    }
    FUN_0037db50(lVar3);
    return ~uVar2 >> 0x1f;
  }
  return 0;
}


// ===== 00451854  FUN_00451854 =====

void FUN_00451854(undefined8 param_1)

{
  FUN_00451bc0("TLS1-PRF",param_1);
  return;
}


// ===== 00451864  FUN_00451864 =====

undefined8 FUN_00451864(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043eb70();
  if ((((param_2 != 0) && (param_1 != 0)) && (iVar1 != 0)) &&
     (iVar1 = FUN_0045a934(param_2), iVar1 != 0)) {
    *(long *)(param_1 + 0x10) = param_2;
    uVar2 = FUN_003a5250(*(undefined8 *)(param_1 + 8),param_3);
    return uVar2;
  }
  return 0;
}


// ===== 004518cc  FUN_004518cc =====

undefined8 FUN_004518cc(long param_1,long param_2,ulong *param_3,ulong param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar3 = FUN_0043eb70();
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  uVar4 = FUN_003a5154(*(undefined8 *)(param_1 + 8));
  if (param_2 != 0) {
    if ((uVar4 != 0xffffffffffffffff) && (bVar1 = param_4 < uVar4, param_4 = uVar4, bVar1)) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/exchange/kdf_exch.c",0x71,"kdf_derive");
      FUN_00379a5c(0x39,0x6a,0);
      return 0;
    }
    iVar2 = FUN_003a5208(*(undefined8 *)(param_1 + 8),param_2,param_4,0);
    uVar4 = param_4;
    if (iVar2 < 1) {
      return 0;
    }
  }
  *param_3 = uVar4;
  return 1;
}


// ===== 004519b0  FUN_004519b0 =====

void FUN_004519b0(long param_1)

{
  FUN_003a4f88(*(undefined8 *)(param_1 + 8));
  FUN_0045a90c(*(undefined8 *)(param_1 + 0x10));
  FUN_003c86b4(param_1,"providers/implementations/exchange/kdf_exch.c",0x86);
  return;
}


// ===== 004519ec  FUN_004519ec =====

undefined8 * FUN_004519ec(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar2 = FUN_0043eb70();
  if (iVar2 != 0) {
    puVar3 = (undefined8 *)FUN_003c8474(0x18,"providers/implementations/exchange/kdf_exch.c",0x91);
    if (puVar3 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    uVar5 = param_1[1];
    uVar1 = param_1[2];
    uVar6 = *param_1;
    puVar3[1] = param_1[1];
    *puVar3 = uVar6;
    puVar3[2] = uVar1;
    lVar4 = FUN_003a4fd8(uVar5);
    puVar3[1] = lVar4;
    if (lVar4 == 0) {
      uVar5 = 0x99;
    }
    else {
      iVar2 = FUN_0045a934(puVar3[2]);
      if (iVar2 != 0) {
        return puVar3;
      }
      FUN_003a4f88(puVar3[1]);
      uVar5 = 0x9e;
    }
    FUN_003c86b4(puVar3,"providers/implementations/exchange/kdf_exch.c",uVar5);
  }
  return (undefined8 *)0x0;
}


// ===== 00451a90  FUN_00451a90 =====

void FUN_00451a90(long param_1)

{
  FUN_003a5250(*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 00451a98  FUN_00451a98 =====

undefined8 FUN_00451a98(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_0046b880(param_2);
  lVar2 = FUN_003a5290(uVar1,"TLS1-PRF",0);
  if (lVar2 != 0) {
    uVar1 = FUN_003a573c();
    FUN_003a5660(lVar2);
    return uVar1;
  }
  return 0;
}


// ===== 00451af0  FUN_00451af0 =====

void FUN_00451af0(undefined8 param_1)

{
  FUN_00451bc0(&DAT_001e2fb1,param_1);
  return;
}


// ===== 00451b00  FUN_00451b00 =====

undefined8 FUN_00451b00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_0046b880(param_2);
  lVar2 = FUN_003a5290(uVar1,&DAT_001e2fb1,0);
  if (lVar2 != 0) {
    uVar1 = FUN_003a573c();
    FUN_003a5660(lVar2);
    return uVar1;
  }
  return 0;
}


// ===== 00451b58  FUN_00451b58 =====

void FUN_00451b58(undefined8 param_1)

{
  FUN_00451bc0("SCRYPT",param_1);
  return;
}


// ===== 00451b68  FUN_00451b68 =====

undefined8 FUN_00451b68(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_0046b880(param_2);
  lVar2 = FUN_003a5290(uVar1,"SCRYPT",0);
  if (lVar2 != 0) {
    uVar1 = FUN_003a573c();
    FUN_003a5660(lVar2);
    return uVar1;
  }
  return 0;
}


// ===== 00451bc0  FUN_00451bc0 =====

undefined8 * FUN_00451bc0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)FUN_003c8474(0x18,"providers/implementations/exchange/kdf_exch.c",0x31);
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    *puVar2 = param_2;
    uVar3 = FUN_0046b880(param_2);
    lVar4 = FUN_003a5290(uVar3,param_1,0);
    if (lVar4 != 0) {
      lVar5 = FUN_003a4e60();
      puVar2[1] = lVar5;
      FUN_003a5660(lVar4);
      if (lVar5 != 0) {
        return puVar2;
      }
    }
    FUN_003c86b4(puVar2,"providers/implementations/exchange/kdf_exch.c",0x42);
  }
  return (undefined8 *)0x0;
}


// ===== 00451c70  FUN_00451c70 =====

undefined8 * FUN_00451c70(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)FUN_003c8474(0x88,"providers/implementations/kdfs/hkdf.c",99);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_1;
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}


// ===== 00451cc0  FUN_00451cc0 =====

undefined8 * FUN_00451cc0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar5 = *param_1;
  iVar3 = FUN_0043eb70();
  if (iVar3 != 0) {
    puVar4 = (undefined8 *)FUN_003c8474(0x88,"providers/implementations/kdfs/hkdf.c",99);
    if (puVar4 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    uVar1 = param_1[5];
    uVar2 = param_1[6];
    *puVar4 = uVar5;
    iVar3 = FUN_0043fd80(uVar1,uVar2,puVar4 + 5,puVar4 + 6);
    if ((((iVar3 != 0) &&
         (iVar3 = FUN_0043fd80(param_1[7],param_1[8],puVar4 + 7,puVar4 + 8), iVar3 != 0)) &&
        (iVar3 = FUN_0043fd80(param_1[9],param_1[10],puVar4 + 9,puVar4 + 10), iVar3 != 0)) &&
       (((iVar3 = FUN_0043fd80(param_1[0xb],param_1[0xc],puVar4 + 0xb,puVar4 + 0xc), iVar3 != 0 &&
         (iVar3 = FUN_0043fd80(param_1[0xd],param_1[0xe],puVar4 + 0xd,puVar4 + 0xe), iVar3 != 0)) &&
        ((iVar3 = FUN_0043fd80(param_1[0xf],param_1[0x10],puVar4 + 0xf,puVar4 + 0x10), iVar3 != 0 &&
         (iVar3 = FUN_0043f72c(puVar4 + 2,param_1 + 2), iVar3 != 0)))))) {
      *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_1 + 1);
      return puVar4;
    }
    FUN_00451dc4(puVar4);
  }
  return (undefined8 *)0x0;
}


// ===== 00451dc4  FUN_00451dc4 =====

void FUN_00451dc4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *param_1;
    FUN_0043f700(param_1 + 2);
    FUN_003c86b4(param_1[5],"providers/implementations/kdfs/hkdf.c",0x78);
    FUN_003c86b4(param_1[9],"providers/implementations/kdfs/hkdf.c",0x79);
    FUN_003c86b4(param_1[0xb],"providers/implementations/kdfs/hkdf.c",0x7a);
    FUN_003c893c(param_1[0xd],param_1[0xe],"providers/implementations/kdfs/hkdf.c",0x7b);
    FUN_003c893c(param_1[7],param_1[8],"providers/implementations/kdfs/hkdf.c",0x7c);
    FUN_003c893c(param_1[0xf],param_1[0x10],"providers/implementations/kdfs/hkdf.c",0x7d);
    param_1[0x10] = 0;
    param_1[0xf] = 0;
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
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = uVar1;
    FUN_003c86b4(param_1,"providers/implementations/kdfs/hkdf.c",0x6e);
    return;
  }
  return;
}


// ===== 00451e98  FUN_00451e98 =====

void FUN_00451e98(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_0043f700(param_1 + 2);
  FUN_003c86b4(param_1[5],"providers/implementations/kdfs/hkdf.c",0x78);
  FUN_003c86b4(param_1[9],"providers/implementations/kdfs/hkdf.c",0x79);
  FUN_003c86b4(param_1[0xb],"providers/implementations/kdfs/hkdf.c",0x7a);
  FUN_003c893c(param_1[0xd],param_1[0xe],"providers/implementations/kdfs/hkdf.c",0x7b);
  FUN_003c893c(param_1[7],param_1[8],"providers/implementations/kdfs/hkdf.c",0x7c);
  FUN_003c893c(param_1[0xf],param_1[0x10],"providers/implementations/kdfs/hkdf.c",0x7d);
  param_1[0x10] = 0;
  param_1[0xf] = 0;
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
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = uVar1;
  return;
}


// ===== 00451f54  FUN_00451f54 =====

ulong FUN_00451f54(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_a0 [64];
  
  uVar6 = FUN_0046b880(*param_1);
  uVar7 = FUN_0043eb70();
  if ((int)uVar7 == 0) {
    return uVar7;
  }
  if (param_4 != 0) {
    uVar7 = FUN_004528d8(param_1,param_4);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    uVar7 = FUN_003cdd44(param_4,&DAT_001b78fe,param_1 + 0xf,param_1 + 0x10,0x8000);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
  }
  lVar8 = FUN_0043f900(param_1 + 2);
  if (lVar8 == 0) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/kdfs/hkdf.c",0xbf,"kdf_hkdf_derive");
    uVar6 = 0x81;
  }
  else {
    lVar9 = param_1[7];
    if (lVar9 == 0) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/kdfs/hkdf.c",0xc3,"kdf_hkdf_derive");
      uVar6 = 0x80;
    }
    else {
      if (param_3 != 0) {
        if (*(int *)(param_1 + 1) == 1) {
          uVar7 = FUN_00452654(uVar6,lVar8,param_1[5],param_1[6],lVar9,param_1[8],param_2,param_3);
          return uVar7;
        }
        if (*(int *)(param_1 + 1) == 2) {
          uVar7 = FUN_00452748(lVar8,lVar9,param_1[8],param_1[0xf],param_1[0x10],param_2,param_3);
          return uVar7;
        }
        uVar1 = param_1[5];
        uVar3 = param_1[6];
        uVar10 = param_1[8];
        uVar2 = param_1[0xf];
        uVar4 = param_1[0x10];
        iVar5 = FUN_00389a38();
        if (iVar5 < 0) {
          return 0;
        }
        uVar7 = FUN_00452654(uVar6,lVar8,uVar1,uVar3,lVar9,uVar10,auStack_a0,iVar5);
        if ((int)uVar7 != 0) {
          uVar7 = FUN_00452748(lVar8,auStack_a0,iVar5,uVar2,uVar4,param_2,param_3);
          FUN_003c89b8(auStack_a0,0x40);
          return uVar7 & 0xffffffff;
        }
        return uVar7;
      }
      FUN_00379868();
      FUN_0037995c("providers/implementations/kdfs/hkdf.c",199,"kdf_hkdf_derive");
      uVar6 = 0x69;
    }
  }
  FUN_00379a5c(0x39,uVar6,0);
  return 0;
}


// ===== 00452188  FUN_00452188 =====

undefined ** FUN_00452188(void)

{
  return &PTR_DAT_00788d80;
}


// ===== 00452194  FUN_00452194 =====

ulong FUN_00452194(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 != 0) {
    uVar2 = FUN_004528d8();
    if ((int)uVar2 != 0) {
      iVar1 = FUN_003cdd44(param_2,&DAT_001b78fe,param_1 + 0x78,param_1 + 0x80,0x8000);
      uVar2 = (ulong)(iVar1 != 0);
    }
    return uVar2;
  }
  return 1;
}


// ===== 004521ec  FUN_004521ec =====

undefined ** FUN_004521ec(void)

{
  return &PTR_DAT_00788ec0;
}


// ===== 004521f8  FUN_004521f8 =====

undefined8 FUN_004521f8(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_003cb140(param_2,&DAT_001f543b);
  if (lVar2 == 0) {
    return 0xfffffffe;
  }
  lVar3 = FUN_0043f900(param_1 + 0x10);
  if (*(int *)(param_1 + 8) == 1) {
    if (lVar3 == 0) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/kdfs/hkdf.c",0xa9,"kdf_hkdf_size");
      FUN_00379a5c(0x39,0x81,0);
    }
    else {
      iVar1 = FUN_00389a38();
      if (0 < iVar1) {
        uVar4 = thunk_FUN_003cc2a4(lVar2,iVar1);
        return uVar4;
      }
    }
    return 0;
  }
  uVar4 = thunk_FUN_003cc2a4(lVar2,0xffffffffffffffff);
  return uVar4;
}


// ===== 004522bc  FUN_004522bc =====

ulong FUN_004522bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_e8 [64];
  undefined1 auStack_a8 [72];
  
  uVar10 = FUN_0043eb70();
  if (((int)uVar10 != 0) && (uVar10 = FUN_004524ec(param_1,param_4), (int)uVar10 != 0)) {
    lVar11 = FUN_0043f900(param_1 + 2);
    if (lVar11 == 0) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/kdfs/hkdf.c",0x29c,"kdf_tls1_3_derive");
      FUN_00379a5c(0x39,0x81,0);
      uVar10 = 0;
    }
    else if (*(int *)(param_1 + 1) == 2) {
      uVar10 = FUN_00452ae8(lVar11,param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],
                            param_1[0xc],param_1[0xd],param_1[0xe],param_2,param_3);
    }
    else {
      if (*(int *)(param_1 + 1) == 1) {
        uVar12 = FUN_0046b880(*param_1);
        uVar2 = param_1[0xb];
        uVar5 = param_1[0xc];
        puVar3 = (undefined *)param_1[7];
        uVar10 = param_1[8];
        uVar4 = param_1[9];
        uVar6 = param_1[10];
        lVar15 = param_1[5];
        uVar8 = FUN_00389a38(lVar11);
        if (0 < (int)uVar8) {
          uVar14 = (ulong)uVar8;
          puVar1 = &DAT_0020ee18;
          uVar7 = uVar14;
          if (puVar3 != (undefined *)0x0) {
            puVar1 = puVar3;
            uVar7 = uVar10;
          }
          if (lVar15 != 0) {
            lVar13 = FUN_0039d270();
            if (((lVar13 != 0) && (iVar9 = FUN_0039d92c(lVar13,lVar11,0), 0 < iVar9)) &&
               (iVar9 = FUN_0039dac8(lVar13,auStack_e8,0), 0 < iVar9)) {
              FUN_0039d284(lVar13);
              uVar10 = FUN_00452ae8(lVar11,lVar15,uVar14,uVar4,uVar6,uVar2,uVar5,auStack_e8,uVar14,
                                    auStack_a8,uVar14);
              if ((int)uVar10 == 0) {
                return uVar10;
              }
              uVar10 = FUN_00452654(uVar12,lVar11,auStack_a8,uVar14,puVar1,uVar7,param_2,param_3);
              FUN_003c89b8(auStack_a8,uVar14);
              return uVar10 & 0xffffffff;
            }
            FUN_0039d284(lVar13);
            return 0;
          }
          uVar10 = FUN_00452654(uVar12,lVar11,&DAT_0020ee18,0,puVar1,uVar7,param_2,param_3);
          return uVar10;
        }
      }
      uVar10 = 0;
    }
  }
  return uVar10;
}


// ===== 004524e0  FUN_004524e0 =====

undefined ** FUN_004524e0(void)

{
  return &PTR_DAT_00788f10;
}


// ===== 004524ec  FUN_004524ec =====

undefined8 FUN_004524ec(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = FUN_004528d8();
  if ((int)uVar1 != 0) {
    if (*(int *)(param_1 + 8) == 0) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/kdfs/hkdf.c",0x2c2,"kdf_tls1_3_set_ctx_params");
      FUN_00379a5c(0x39,0x7d,0);
      return 0;
    }
    lVar2 = FUN_003cb19c(param_2,"prefix");
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)(param_1 + 0x48);
      FUN_003c86b4(*puVar3,"providers/implementations/kdfs/hkdf.c",0x2c7);
      *puVar3 = 0;
      uVar1 = FUN_003cd608(lVar2,puVar3,0,param_1 + 0x50);
      if ((int)uVar1 == 0) {
        return uVar1;
      }
    }
    lVar2 = FUN_003cb19c(param_2,"label");
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)(param_1 + 0x58);
      FUN_003c86b4(*puVar3,"providers/implementations/kdfs/hkdf.c",0x2cf);
      *puVar3 = 0;
      uVar1 = FUN_003cd608(lVar2,puVar3,0,param_1 + 0x60);
      if ((int)uVar1 == 0) {
        return uVar1;
      }
    }
    puVar3 = (undefined8 *)(param_1 + 0x68);
    FUN_003c893c(*puVar3,*(undefined8 *)(param_1 + 0x70),"providers/implementations/kdfs/hkdf.c",
                 0x2d6);
    *puVar3 = 0;
    lVar2 = FUN_003cb19c(param_2,&DAT_001eef54);
    if ((lVar2 == 0) ||
       (uVar1 = FUN_003cd608(lVar2,puVar3,0,(undefined8 *)(param_1 + 0x70)), (int)uVar1 != 0)) {
      uVar1 = 1;
    }
  }
  return uVar1;
}


// ===== 00452654  FUN_00452654 =====

bool FUN_00452654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,ulong param_8)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = FUN_00389a38(param_2);
  if (-1 < (int)uVar1) {
    if (uVar1 == param_8) {
      uVar3 = FUN_0038996c(param_2);
      iVar2 = FUN_00389a38(param_2);
      lVar4 = FUN_004001c8(param_1,&DAT_001e0e65,0,uVar3,0,param_3,param_4,param_5,param_6,param_7,
                           (long)iVar2,0);
      return lVar4 != 0;
    }
    FUN_00379868();
    FUN_0037995c("providers/implementations/kdfs/hkdf.c",0x1b1,"HKDF_Extract");
    FUN_00379a5c(0x39,0x8b,0);
  }
  return false;
}


// ===== 00452748  FUN_00452748 =====

ulong FUN_00452748(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,ulong param_7)

{
  size_t __n;
  ulong uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 local_a4 [4];
  undefined1 auStack_a0 [64];
  
  uVar2 = FUN_00389a38();
  if ((int)uVar2 < 1) {
    uVar4 = 0;
  }
  else {
    uVar5 = (ulong)uVar2;
    uVar4 = 0;
    uVar1 = 0;
    if (uVar5 != 0) {
      uVar1 = param_7 / uVar5;
    }
    if (param_7 != uVar1 * uVar5) {
      uVar1 = uVar1 + 1;
    }
    if (((param_6 != 0) && (uVar1 < 0x100)) && (uVar4 = FUN_003ff7b8(0), uVar4 != 0)) {
      iVar3 = FUN_003ff340(uVar4,param_2,param_3,param_1,0);
      if (iVar3 == 0) {
LAB_0045289c:
        uVar2 = 0;
      }
      else {
        if (uVar1 != 0) {
          lVar6 = 0;
          uVar7 = 1;
          do {
            local_a4[0] = (undefined1)uVar7;
            if ((((1 < (uint)uVar7) &&
                 ((iVar3 = FUN_003ff340(uVar4,0,0,0,0), iVar3 == 0 ||
                  (iVar3 = FUN_003ff6e0(uVar4,auStack_a0,uVar5), iVar3 == 0)))) ||
                (iVar3 = FUN_003ff6e0(uVar4,param_4,param_5), iVar3 == 0)) ||
               ((iVar3 = FUN_003ff6e0(uVar4,local_a4,1), iVar3 == 0 ||
                (iVar3 = FUN_003ff6f8(uVar4,auStack_a0,0), iVar3 == 0)))) goto LAB_0045289c;
            __n = param_7 - lVar6;
            if (uVar5 <= param_7 - lVar6) {
              __n = uVar5;
            }
            memcpy((void *)(param_6 + lVar6),auStack_a0,__n);
            uVar7 = (ulong)((uint)uVar7 + 1);
            lVar6 = __n + lVar6;
          } while (uVar7 <= uVar1);
        }
        uVar2 = 1;
      }
      FUN_003c89b8(auStack_a0,0x40);
      FUN_003ff868(uVar4);
      uVar4 = (ulong)uVar2;
    }
  }
  return uVar4;
}


// ===== 004528d8  FUN_004528d8 =====

undefined8 FUN_004528d8(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  uint local_24;
  
  uVar2 = FUN_0046b880(*param_1);
  uVar2 = FUN_0043f7c4(param_1 + 2,param_2,uVar2);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  lVar3 = FUN_003cb19c(param_2,&DAT_001f5635);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 8) == 4) {
      iVar1 = FUN_003cab04(*(undefined8 *)(lVar3 + 0x10),"EXTRACT_AND_EXPAND");
      if (iVar1 == 0) {
        local_24 = 0;
      }
      else {
        iVar1 = FUN_003cab04(*(undefined8 *)(lVar3 + 0x10),"EXTRACT_ONLY");
        if (iVar1 == 0) {
          local_24 = 1;
        }
        else {
          iVar1 = FUN_003cab04(*(undefined8 *)(lVar3 + 0x10),"EXPAND_ONLY");
          if (iVar1 != 0) {
            FUN_00379868();
            uVar2 = 0xf0;
            goto LAB_004529e4;
          }
          local_24 = 2;
        }
      }
    }
    else {
      iVar1 = thunk_FUN_003cb238(lVar3,&local_24);
      if (iVar1 == 0) {
        FUN_00379868();
        uVar2 = 0xfc;
LAB_004529e4:
        FUN_0037995c("providers/implementations/kdfs/hkdf.c",uVar2,"hkdf_common_set_ctx_params");
        FUN_00379a5c(0x39,0x7d,0);
        return 0;
      }
      if (2 < local_24) {
        FUN_00379868();
        uVar2 = 0xf7;
        goto LAB_004529e4;
      }
    }
    *(uint *)(param_1 + 1) = local_24;
  }
  lVar3 = FUN_003cb19c(param_2,&DAT_001e2b47);
  if (lVar3 != 0) {
    puVar4 = param_1 + 7;
    FUN_003c893c(*puVar4,param_1[8],"providers/implementations/kdfs/hkdf.c",0x102);
    *puVar4 = 0;
    uVar2 = FUN_003cd608(lVar3,puVar4,0,param_1 + 8);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  lVar3 = FUN_003cb19c(param_2,&DAT_001c2fe1);
  if (((lVar3 != 0) && (*(long *)(lVar3 + 0x18) != 0)) && (*(long *)(lVar3 + 0x10) != 0)) {
    puVar4 = param_1 + 5;
    FUN_003c86b4(*puVar4,"providers/implementations/kdfs/hkdf.c",0x10b);
    *puVar4 = 0;
    uVar2 = FUN_003cd608(lVar3,puVar4,0,param_1 + 6);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  return 1;
}


// ===== 00452ae8  FUN_00452ae8 =====

undefined8
FUN_00452ae8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9
            ,undefined8 param_10,undefined8 param_11)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_8a0 [56];
  undefined1 auStack_868 [2048];
  undefined8 local_68;
  
  iVar1 = FUN_003ce85c(auStack_8a0,auStack_868,0x800,0);
  if (((((iVar1 != 0) && (iVar1 = FUN_003cef94(auStack_8a0,param_11,2), iVar1 != 0)) &&
       (iVar1 = FUN_003ce610(auStack_8a0,1), iVar1 != 0)) &&
      ((iVar1 = FUN_003cf164(auStack_8a0,param_4,param_5), iVar1 != 0 &&
       (iVar1 = FUN_003cf164(auStack_8a0,param_6,param_7), iVar1 != 0)))) &&
     (iVar1 = FUN_003ce6b8(auStack_8a0), iVar1 != 0)) {
    uVar2 = 0;
    if (param_8 != 0) {
      uVar2 = param_9;
    }
    iVar1 = FUN_003cf1c0(auStack_8a0,param_8,uVar2,1);
    if (((iVar1 != 0) && (iVar1 = FUN_003cf2bc(auStack_8a0,&local_68), iVar1 != 0)) &&
       (iVar1 = FUN_003ceec8(auStack_8a0), iVar1 != 0)) {
      uVar2 = FUN_00452748(param_1,param_2,param_3,auStack_868,local_68,param_10,param_11);
      return uVar2;
    }
  }
  FUN_003cf324(auStack_8a0);
  return 0;
}


// ===== 00452c28  FUN_00452c28 =====

long FUN_00452c28(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = FUN_003c8474(0xd8,"providers/implementations/kdfs/hmacdrbg_kdf.c",0x2f);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0xa8) = param_1;
    return lVar2;
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/kdfs/hmacdrbg_kdf.c",0x31,"hmac_drbg_kdf_new");
  FUN_00379a5c(0x39,0xc0100,0);
  return 0;
}


// ===== 00452cb8  FUN_00452cb8 =====

void FUN_00452cb8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = param_1[0x15];
    FUN_003ffb7c(*param_1);
    FUN_0043f700(param_1 + 1);
    FUN_003c893c(param_1[0x16],param_1[0x18],"providers/implementations/kdfs/hmacdrbg_kdf.c",0x40);
    FUN_003c893c(param_1[0x17],param_1[0x19],"providers/implementations/kdfs/hmacdrbg_kdf.c",0x41);
    FUN_003c89b8(param_1,0xd8);
    param_1[0x15] = uVar1;
    FUN_003c86b4(param_1,"providers/implementations/kdfs/hmacdrbg_kdf.c",0x4c);
    return;
  }
  return;
}


// ===== 00452d48  FUN_00452d48 =====

long * FUN_00452d48(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar5 = param_1[0x15];
  iVar1 = FUN_0043eb70();
  if (iVar1 == 0) {
    return (long *)0x0;
  }
  plVar2 = (long *)FUN_003c8474(0xd8,"providers/implementations/kdfs/hmacdrbg_kdf.c",0x2f);
  if (plVar2 == (long *)0x0) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/kdfs/hmacdrbg_kdf.c",0x31,"hmac_drbg_kdf_new");
    FUN_00379a5c(0x39,0xc0100,0);
    return (long *)0x0;
  }
  lVar3 = *param_1;
  plVar2[0x15] = lVar5;
  if (lVar3 != 0) {
    lVar5 = FUN_003ffbcc();
    *plVar2 = lVar5;
    if (lVar5 == 0) goto LAB_00452e40;
  }
  iVar1 = FUN_0043f72c(plVar2 + 1,param_1 + 1);
  if (iVar1 != 0) {
    lVar3 = param_1[5];
    lVar9 = param_1[8];
    lVar8 = param_1[7];
    lVar4 = param_1[4];
    lVar5 = param_1[0x16];
    plVar2[6] = param_1[6];
    plVar2[5] = lVar3;
    lVar7 = param_1[10];
    lVar6 = param_1[9];
    lVar3 = param_1[0x18];
    plVar2[8] = lVar9;
    plVar2[7] = lVar8;
    lVar9 = param_1[0xc];
    lVar8 = param_1[0xb];
    plVar2[10] = lVar7;
    plVar2[9] = lVar6;
    lVar7 = param_1[0xe];
    lVar6 = param_1[0xd];
    plVar2[0xc] = lVar9;
    plVar2[0xb] = lVar8;
    lVar9 = param_1[0x10];
    lVar8 = param_1[0xf];
    plVar2[0xe] = lVar7;
    plVar2[0xd] = lVar6;
    lVar7 = param_1[0x12];
    lVar6 = param_1[0x11];
    plVar2[0x10] = lVar9;
    plVar2[0xf] = lVar8;
    plVar2[0x12] = lVar7;
    plVar2[0x11] = lVar6;
    lVar7 = param_1[0x14];
    lVar6 = param_1[0x13];
    plVar2[4] = lVar4;
    plVar2[0x14] = lVar7;
    plVar2[0x13] = lVar6;
    iVar1 = FUN_0043fd80(lVar5,lVar3,plVar2 + 0x16,plVar2 + 0x18);
    if ((iVar1 != 0) &&
       (iVar1 = FUN_0043fd80(param_1[0x17],param_1[0x19],plVar2 + 0x17,plVar2 + 0x19), iVar1 != 0))
    {
      *(int *)(plVar2 + 0x1a) = (int)param_1[0x1a];
      return plVar2;
    }
  }
LAB_00452e40:
  lVar5 = plVar2[0x15];
  FUN_003ffb7c(*plVar2);
  FUN_0043f700(plVar2 + 1);
  FUN_003c893c(plVar2[0x16],plVar2[0x18],"providers/implementations/kdfs/hmacdrbg_kdf.c",0x40);
  FUN_003c893c(plVar2[0x17],plVar2[0x19],"providers/implementations/kdfs/hmacdrbg_kdf.c",0x41);
  FUN_003c89b8(plVar2,0xd8);
  plVar2[0x15] = lVar5;
  FUN_003c86b4(plVar2,"providers/implementations/kdfs/hmacdrbg_kdf.c",0x4c);
  return (long *)0x0;
}


// ===== 00452f00  FUN_00452f00 =====

void FUN_00452f00(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[0x15];
  FUN_003ffb7c(*param_1);
  FUN_0043f700(param_1 + 1);
  FUN_003c893c(param_1[0x16],param_1[0x18],"providers/implementations/kdfs/hmacdrbg_kdf.c",0x40);
  FUN_003c893c(param_1[0x17],param_1[0x19],"providers/implementations/kdfs/hmacdrbg_kdf.c",0x41);
  FUN_003c89b8(param_1,0xd8);
  param_1[0x15] = uVar1;
  return;
}


// ===== 00452f78  FUN_00452f78 =====

undefined8 FUN_00452f78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043eb70();
  if ((iVar1 == 0) || (iVar1 = FUN_0045303c(param_1,param_4), iVar1 == 0)) {
    return 0;
  }
  if (*(int *)(param_1 + 0xd0) == 0) {
    if (*(long *)(param_1 + 0xb0) == 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0xc0) == 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0xb8) == 0) {
      return 0;
    }
    if (*(long *)(param_1 + 200) == 0) {
      return 0;
    }
    iVar1 = FUN_004646cc(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0xd0) = 1;
  }
  uVar2 = FUN_004647fc(param_1,param_2,param_3,0,0);
  return uVar2;
}


// ===== 00453030  FUN_00453030 =====

undefined ** FUN_00453030(void)

{
  return &PTR_s_entropy_00789140;
}


// ===== 0045303c  FUN_0045303c =====

undefined8 FUN_0045303c(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar3 = FUN_0046b880(*(undefined8 *)(param_1 + 0xa8));
  local_40 = 0;
  local_38 = 0;
  if (param_2 != 0) {
    lVar4 = FUN_003cb19c(param_2,"entropy");
    if (lVar4 != 0) {
      uVar5 = FUN_003cd608(lVar4,&local_38,0,&local_40);
      if ((int)uVar5 == 0) {
        return uVar5;
      }
      FUN_003c86b4(*(undefined8 *)(param_1 + 0xb0),"providers/implementations/kdfs/hmacdrbg_kdf.c",
                   0xc2);
      uVar5 = local_38;
      *(undefined4 *)(param_1 + 0xd0) = 0;
      local_38 = 0;
      *(undefined8 *)(param_1 + 0xb0) = uVar5;
      *(undefined8 *)(param_1 + 0xc0) = local_40;
    }
    lVar4 = FUN_003cb19c(param_2,"nonce");
    if (lVar4 != 0) {
      uVar5 = FUN_003cd608(lVar4,&local_38,0,&local_40);
      if ((int)uVar5 == 0) {
        return uVar5;
      }
      FUN_003c86b4(*(undefined8 *)(param_1 + 0xb8),"providers/implementations/kdfs/hmacdrbg_kdf.c",
                   0xcd);
      *(undefined4 *)(param_1 + 0xd0) = 0;
      *(undefined8 *)(param_1 + 0xb8) = local_38;
      *(undefined8 *)(param_1 + 200) = local_40;
    }
    lVar4 = FUN_003cb19c(param_2,"digest");
    if (lVar4 != 0) {
      uVar5 = FUN_0043f7c4(param_1 + 8,param_2,uVar3);
      if ((int)uVar5 != 0) {
        lVar4 = FUN_0043f900(param_1 + 8);
        if (lVar4 != 0) {
          uVar1 = FUN_00389a84();
          if ((uVar1 >> 1 & 1) != 0) {
            FUN_00379868();
            FUN_0037995c("providers/implementations/kdfs/hmacdrbg_kdf.c",0xdc,
                         "hmac_drbg_kdf_set_ctx_params");
            FUN_00379a5c(0x39,0xb7,0);
            return 0;
          }
          iVar2 = FUN_00389a38(lVar4);
          *(long *)(param_1 + 0x20) = (long)iVar2;
        }
        uVar5 = FUN_0043fb50(param_1,param_2,&DAT_001e0e65,0,0,uVar3);
      }
      return uVar5;
    }
  }
  return 1;
}


// ===== 004531e8  FUN_004531e8 =====

undefined ** FUN_004531e8(void)

{
  return &PTR_DAT_00789208;
}


// ===== 004531f4  FUN_004531f4 =====

undefined8 FUN_004531f4(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = FUN_003cb140(param_2,&DAT_001f1681);
  if (lVar1 != 0) {
    if (*param_1 == 0) {
      return 0;
    }
    FUN_003ffcc0(*param_1);
    uVar2 = FUN_00400160();
    uVar2 = FUN_003cd630(lVar1,uVar2);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  lVar1 = FUN_003cb140(param_2,"digest");
  if (lVar1 != 0) {
    lVar3 = FUN_0043f900(param_1 + 1);
    if (lVar3 == 0) {
      return 0;
    }
    uVar2 = FUN_0038996c();
    uVar2 = FUN_003cd630(lVar1,uVar2);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  return 1;
}


// ===== 004532a8  FUN_004532a8 =====

undefined8 * FUN_004532a8(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  
  iVar2 = FUN_0043eb70();
  if (iVar2 != 0) {
    puVar3 = (undefined8 *)FUN_003c8474(0x70,"providers/implementations/kdfs/kbkdf.c",0x78);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = param_1;
      uVar1 = DAT_001b7088;
      *(undefined4 *)(puVar3 + 3) = 0x20;
      *(undefined4 *)(puVar3 + 0xd) = 1;
      puVar3[0xc] = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}


// ===== 00453314  FUN_00453314 =====

undefined8 * FUN_00453314(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar7 = *param_1;
  iVar3 = FUN_0043eb70();
  if (iVar3 == 0) {
    return (undefined8 *)0x0;
  }
  puVar4 = (undefined8 *)FUN_003c8474(0x70,"providers/implementations/kdfs/kbkdf.c",0x78);
  if (puVar4 != (undefined8 *)0x0) {
    uVar5 = param_1[2];
    *puVar4 = uVar7;
    uVar7 = DAT_001b7088;
    *(undefined4 *)(puVar4 + 3) = 0x20;
    *(undefined4 *)(puVar4 + 0xd) = 1;
    puVar4[0xc] = uVar7;
    lVar6 = FUN_003ffbcc(uVar5);
    puVar4[2] = lVar6;
    if ((((lVar6 == 0) ||
         (iVar3 = FUN_0043fd80(param_1[4],param_1[5],puVar4 + 4,puVar4 + 5), iVar3 == 0)) ||
        (iVar3 = FUN_0043fd80(param_1[6],param_1[7],puVar4 + 6,puVar4 + 7), iVar3 == 0)) ||
       ((iVar3 = FUN_0043fd80(param_1[8],param_1[9],puVar4 + 8,puVar4 + 9), iVar3 == 0 ||
        (iVar3 = FUN_0043fd80(param_1[10],param_1[0xb],puVar4 + 10,puVar4 + 0xb), iVar3 == 0)))) {
      uVar7 = *puVar4;
      FUN_003ffb7c(puVar4[2]);
      FUN_003c893c(puVar4[8],puVar4[9],"providers/implementations/kdfs/kbkdf.c",0x91);
      FUN_003c893c(puVar4[6],puVar4[7],"providers/implementations/kdfs/kbkdf.c",0x92);
      FUN_003c893c(puVar4[4],puVar4[5],"providers/implementations/kdfs/kbkdf.c",0x93);
      FUN_003c893c(puVar4[10],puVar4[0xb],"providers/implementations/kdfs/kbkdf.c",0x94);
      puVar4[0xd] = 0;
      *puVar4 = uVar7;
      *(undefined4 *)(puVar4 + 0xd) = 1;
      puVar4[4] = 0;
      puVar4[3] = 0;
      puVar4[0xc] = 0;
      puVar4[0xb] = 0;
      puVar4[10] = 0;
      puVar4[9] = 0;
      puVar4[8] = 0;
      puVar4[7] = 0;
      puVar4[6] = 0;
      puVar4[5] = 0;
      puVar4[2] = 0;
      puVar4[1] = 0;
      *(undefined4 *)(puVar4 + 3) = 0x20;
      *(undefined4 *)(puVar4 + 0xc) = 1;
      FUN_003c86b4(puVar4,"providers/implementations/kdfs/kbkdf.c",0x87);
      return (undefined8 *)0x0;
    }
    uVar1 = *(undefined4 *)(param_1 + 3);
    uVar2 = *(undefined4 *)(param_1 + 0xd);
    uVar7 = param_1[0xc];
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_1 + 1);
    *(undefined4 *)(puVar4 + 3) = uVar1;
    *(undefined4 *)(puVar4 + 0xd) = uVar2;
    puVar4[0xc] = uVar7;
  }
  return puVar4;
}


// ===== 004534bc  FUN_004534bc =====

void FUN_004534bc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *param_1;
    FUN_003ffb7c(param_1[2]);
    FUN_003c893c(param_1[8],param_1[9],"providers/implementations/kdfs/kbkdf.c",0x91);
    FUN_003c893c(param_1[6],param_1[7],"providers/implementations/kdfs/kbkdf.c",0x92);
    FUN_003c893c(param_1[4],param_1[5],"providers/implementations/kdfs/kbkdf.c",0x93);
    FUN_003c893c(param_1[10],param_1[0xb],"providers/implementations/kdfs/kbkdf.c",0x94);
    param_1[0xd] = 0;
    *param_1 = uVar1;
    param_1[4] = 0;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 3) = 0x20;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0xd) = 1;
    param_1[2] = 0;
    param_1[1] = 0;
    FUN_003c86b4(param_1,"providers/implementations/kdfs/kbkdf.c",0x87);
    return;
  }
  return;
}


// ===== 00453584  FUN_00453584 =====

void FUN_00453584(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_003ffb7c(param_1[2]);
  FUN_003c893c(param_1[8],param_1[9],"providers/implementations/kdfs/kbkdf.c",0x91);
  FUN_003c893c(param_1[6],param_1[7],"providers/implementations/kdfs/kbkdf.c",0x92);
  FUN_003c893c(param_1[4],param_1[5],"providers/implementations/kdfs/kbkdf.c",0x93);
  FUN_003c893c(param_1[10],param_1[0xb],"providers/implementations/kdfs/kbkdf.c",0x94);
  param_1[0xd] = 0;
  *param_1 = uVar1;
  param_1[4] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 3) = 0x20;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0xd) = 1;
  return;
}


// ===== 00453634  FUN_00453634 =====

ulong FUN_00453634(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulong local_48;
  
  uVar4 = FUN_0043eb70();
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  uVar4 = FUN_00453908(param_1,param_4);
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
    if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x20) == 0)) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/kdfs/kbkdf.c",0x121,"kbkdf_derive");
      uVar7 = 0x72;
    }
    else {
      FUN_00379868();
      FUN_0037995c("providers/implementations/kdfs/kbkdf.c",0x126,"kbkdf_derive");
      uVar7 = 0x96;
    }
LAB_00453794:
    FUN_00379a5c(0x39,uVar7,0);
    return 0;
  }
  if (param_3 == 0) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/kdfs/kbkdf.c",300,"kbkdf_derive");
    uVar7 = 0x69;
    goto LAB_00453794;
  }
  if (*(int *)(param_1 + 100) == 0) {
    uVar4 = FUN_003ffcc8(lVar6);
    if (uVar4 != 0) {
      if ((*(ulong *)(param_1 + 0x58) == 0) || (*(ulong *)(param_1 + 0x58) == uVar4)) {
        if (*(int *)(param_1 + 8) == 0) {
          uVar2 = 0;
          if (uVar4 != 0) {
            uVar2 = param_3 / uVar4;
          }
          if (uVar2 >> ((ulong)*(uint *)(param_1 + 0x18) & 0x3f) != 0) {
            uVar7 = 0x69;
            uVar8 = 0x143;
            goto LAB_004537e0;
          }
        }
        iVar3 = *(int *)(param_1 + 0x60);
        lVar6 = FUN_003c8474(uVar4,"providers/implementations/kdfs/kbkdf.c",0x14b);
        if (lVar6 != 0) {
          uVar5 = (int)param_3 << 3;
          uVar1 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
          uVar5 = 0;
          if (iVar3 != 0) {
            uVar5 = uVar1 >> 0x10 | uVar1 << 0x10;
          }
          iVar3 = FUN_00453c04(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 8),
                               *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                               *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                               *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),lVar6
                               ,uVar4,uVar5,*(undefined4 *)(param_1 + 0x68),param_2,param_3,
                               *(undefined4 *)(param_1 + 0x18));
          goto joined_r0x00453898;
        }
        goto LAB_0045389c;
      }
      uVar7 = 0x9a;
      uVar8 = 0x13b;
LAB_004537e0:
      FUN_00379868();
      FUN_0037995c("providers/implementations/kdfs/kbkdf.c",uVar8,"kbkdf_derive");
      FUN_00379a5c(0x39,uVar7,0);
    }
    lVar6 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    uVar8 = *(undefined8 *)(param_1 + 0x48);
    local_48 = param_3;
    FUN_003ccbb0(auStack_98,&DAT_001f543b,&local_48);
    FUN_003cdfcc(&local_c0);
    uStack_68 = uStack_b8;
    local_70 = local_c0;
    uStack_58 = uStack_a8;
    uStack_60 = uStack_b0;
    local_50 = local_a0;
    iVar3 = FUN_0040013c(lVar6,auStack_98);
    if (iVar3 < 1) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_003ffe34(lVar6,uVar7,uVar8);
      if (iVar3 != 0) {
        iVar3 = FUN_003ffe40(lVar6,param_2,0,local_48);
      }
    }
    uVar4 = 0;
    lVar6 = 0;
joined_r0x00453898:
    if (iVar3 != 0) {
      uVar5 = 1;
      goto LAB_004538ac;
    }
  }
LAB_0045389c:
  FUN_003c89b8(param_2,param_3);
  uVar5 = 0;
LAB_004538ac:
  FUN_003c893c(lVar6,uVar4,"providers/implementations/kdfs/kbkdf.c",0x155);
  return (ulong)uVar5;
}


// ===== 004538fc  FUN_004538fc =====

undefined ** FUN_004538fc(void)

{
  return &PTR_DAT_00789320;
}


// ===== 00453908  FUN_00453908 =====

undefined8 FUN_00453908(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  int local_14;
  
  uVar2 = FUN_0046b880(*param_1);
  if (param_2 == 0) {
    return 1;
  }
  uVar2 = FUN_0043fb50(param_1 + 2,param_2,0,0,0,uVar2);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if (param_1[2] == 0) goto LAB_00453988;
  uVar2 = FUN_003ffcc0();
  iVar1 = FUN_00400170(uVar2,"KMAC128");
  if (iVar1 == 0) {
    uVar2 = FUN_003ffcc0(param_1[2]);
    iVar1 = FUN_00400170(uVar2,"KMAC256");
    if (iVar1 != 0) goto LAB_00453980;
    uVar2 = FUN_003ffcc0(param_1[2]);
    iVar1 = FUN_00400170(uVar2,&DAT_001e0e65);
    if (iVar1 != 0) goto LAB_00453988;
    uVar2 = FUN_003ffcc0(param_1[2]);
    iVar1 = FUN_00400170(uVar2,&DAT_001da05c);
    if (iVar1 != 0) goto LAB_00453988;
    FUN_00379868();
    FUN_0037995c("providers/implementations/kdfs/kbkdf.c",0x16f,"kbkdf_set_ctx_params");
    uVar2 = 0x97;
LAB_004539ec:
    FUN_00379a5c(0x39,uVar2,0);
    uVar2 = 0;
  }
  else {
LAB_00453980:
    *(undefined4 *)((long)param_1 + 100) = 1;
LAB_00453988:
    lVar3 = FUN_003cb19c(param_2,&DAT_001f5635);
    if (lVar3 != 0) {
      iVar1 = FUN_003cab60("counter",*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18));
      if (iVar1 == 0) {
        uVar5 = 0;
      }
      else {
        iVar1 = FUN_003cab60("feedback",*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18))
        ;
        if (iVar1 != 0) {
          FUN_00379868();
          FUN_0037995c("providers/implementations/kdfs/kbkdf.c",0x17c,"kbkdf_set_ctx_params");
          uVar2 = 0x7d;
          goto LAB_004539ec;
        }
        uVar5 = 1;
      }
      *(undefined4 *)(param_1 + 1) = uVar5;
    }
    uVar2 = FUN_003cdc74(param_2,&DAT_001e2b47,param_1 + 4,param_1 + 5);
    if ((((((int)uVar2 != 0) &&
          (uVar2 = FUN_003cdc74(param_2,&DAT_001c2fe1,param_1 + 6,param_1 + 7), (int)uVar2 != 0)) &&
         (uVar2 = FUN_003cdd44(param_2,&DAT_001b78fe,param_1 + 8,param_1 + 9,0), (int)uVar2 != 0))
        && (uVar2 = FUN_003cdc74(param_2,&DAT_001d805b,param_1 + 10,param_1 + 0xb), (int)uVar2 != 0)
        ) && ((lVar3 = FUN_003cb19c(param_2,"use-l"), lVar3 == 0 ||
              (uVar2 = thunk_FUN_003cb238(lVar3,param_1 + 0xc), (int)uVar2 != 0)))) {
      lVar3 = FUN_003cb19c(param_2,&DAT_001e6b9d);
      if (lVar3 != 0) {
        local_14 = 0;
        iVar1 = thunk_FUN_003cb238(lVar3,&local_14);
        if (iVar1 == 0) {
          return 0;
        }
        if (3 < (local_14 - 8U >> 3 | local_14 << 0x1d)) {
          return 0;
        }
        *(int *)(param_1 + 3) = local_14;
      }
      lVar3 = FUN_003cb19c(param_2,"use-separator");
      if ((lVar3 == 0) || (uVar2 = thunk_FUN_003cb238(lVar3,param_1 + 0xd), (int)uVar2 != 0)) {
        lVar3 = param_1[2];
        if ((lVar3 != 0) && (lVar4 = param_1[5], lVar4 != 0)) {
          if (*(int *)((long)param_1 + 100) != 0) {
            uVar2 = FUN_00453ef4(lVar3,param_1[6],param_1[7]);
            if ((int)uVar2 == 0) {
              return uVar2;
            }
            lVar3 = param_1[2];
            lVar4 = param_1[5];
          }
          uVar2 = FUN_003ffe28(lVar3,param_1[4],lVar4,0);
          if ((int)uVar2 == 0) {
            return uVar2;
          }
        }
        return 1;
      }
    }
  }
  return uVar2;
}


// ===== 00453bc4  FUN_00453bc4 =====

undefined ** FUN_00453bc4(void)

{
  return &PTR_DAT_00789528;
}


// ===== 00453bd0  FUN_00453bd0 =====

undefined8 FUN_00453bd0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_003cb140(param_2,&DAT_001f543b);
  if (lVar1 != 0) {
    uVar2 = thunk_FUN_003cc2a4(lVar1,0xffffffffffffffff);
    return uVar2;
  }
  return 0xfffffffe;
}


// ===== 00453c04  FUN_00453c04 =====

undefined4
FUN_00453c04(undefined8 param_1,int param_2,void *param_3,size_t param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7,undefined8 param_8,void *param_9,ulong param_10,
            int param_11,int param_12,void *param_13,ulong param_14,uint param_15)

{
  uint uVar1;
  size_t sVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  void *pvVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 uVar14;
  uint local_68;
  undefined1 local_64 [4];
  
  uVar7 = param_14;
  iVar5 = param_11;
  local_64[0] = 0;
  if (param_4 != 0) {
    memcpy(param_9,param_3,param_4);
  }
  if (uVar7 == 0) {
LAB_00453ec0:
    lVar10 = 0;
    uVar14 = 1;
  }
  else {
    uVar1 = param_15 + 7;
    if (-1 < (int)param_15) {
      uVar1 = param_15;
    }
    local_68 = 0x1000000;
    lVar10 = FUN_003ffbcc(param_1);
    if ((lVar10 != 0) &&
       ((param_2 != 1 || (iVar8 = FUN_003ffe34(lVar10,param_9,param_4), iVar8 != 0)))) {
      lVar4 = (long)((ulong)uVar1 << 0x20) >> 0x23;
      iVar8 = FUN_003ffe34(lVar10,local_64 + (long)(4 - ((int)uVar1 >> 3)) + -4,lVar4);
      if (((iVar8 != 0) &&
          ((iVar9 = FUN_003ffe34(lVar10,param_5,param_6), iVar8 = param_12, iVar9 != 0 &&
           (((param_12 == 0 || (iVar9 = FUN_003ffe34(lVar10,local_64,1), iVar9 != 0)) &&
            (iVar9 = FUN_003ffe34(lVar10,param_7,param_8), iVar9 != 0)))))) &&
         (((iVar5 == 0 || (iVar9 = FUN_003ffe34(lVar10,&param_11,4), iVar9 != 0)) &&
          (iVar9 = FUN_003ffe40(lVar10,param_9,0), pvVar6 = param_13, iVar9 != 0)))) {
        sVar2 = uVar7;
        if (param_10 <= uVar7) {
          sVar2 = param_10;
        }
        memcpy(param_13,param_9,sVar2);
        FUN_003ffb7c(lVar10);
        if (param_10 <= uVar7 && uVar7 - param_10 != 0) {
          uVar11 = 2;
          uVar12 = uVar7 - param_10;
          uVar13 = param_10;
          do {
            uVar3 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
            local_68 = uVar3 >> 0x10 | uVar3 << 0x10;
            lVar10 = FUN_003ffbcc(param_1);
            if (((((lVar10 == 0) ||
                  ((param_2 == 1 && (iVar9 = FUN_003ffe34(lVar10,param_9,param_10), iVar9 == 0))))
                 || (iVar9 = FUN_003ffe34(lVar10,local_64 + (long)(4 - ((int)uVar1 >> 3)) + -4,lVar4
                                         ), iVar9 == 0)) ||
                ((iVar9 = FUN_003ffe34(lVar10,param_5,param_6), iVar9 == 0 ||
                 ((((iVar8 != 0 && (iVar9 = FUN_003ffe34(lVar10,local_64,1), iVar9 == 0)) ||
                   (iVar9 = FUN_003ffe34(lVar10,param_7,param_8), iVar9 == 0)) ||
                  ((iVar5 != 0 && (iVar9 = FUN_003ffe34(lVar10,&param_11,4), iVar9 == 0)))))))) ||
               (iVar9 = FUN_003ffe40(lVar10,param_9,0,param_10), iVar9 == 0)) goto LAB_00453eb8;
            sVar2 = uVar12;
            if (param_10 <= uVar12) {
              sVar2 = param_10;
            }
            memcpy((void *)((long)pvVar6 + uVar13),param_9,sVar2);
            uVar13 = uVar13 + param_10;
            FUN_003ffb7c(lVar10);
            lVar10 = 0;
            uVar14 = 1;
            uVar11 = uVar11 + 1;
            uVar12 = uVar12 - param_10;
          } while (uVar13 < uVar7);
          goto LAB_00453ec8;
        }
        goto LAB_00453ec0;
      }
    }
LAB_00453eb8:
    uVar14 = 0;
  }
LAB_00453ec8:
  FUN_003ffb7c(lVar10);
  return uVar14;
}


// ===== 00453ef4  FUN_00453ef4 =====

bool FUN_00453ef4(undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  int iVar2;
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
  
  bVar1 = true;
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_003cd924(auStack_70,"custom");
    FUN_003cdfcc(&local_98);
    uStack_40 = uStack_90;
    local_48 = local_98;
    uStack_30 = uStack_80;
    local_38 = local_88;
    local_28 = local_78;
    iVar2 = FUN_0040013c(param_1,auStack_70);
    bVar1 = 0 < iVar2;
  }
  return bVar1;
}


// ===== 00453f68  FUN_00453f68 =====

undefined8 * FUN_00453f68(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)FUN_003c8474(0x40,"providers/implementations/kdfs/krb5kdf.c",0x43);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_1;
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}


// ===== 00453fb8  FUN_00453fb8 =====

undefined8 * FUN_00453fb8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar5 = *param_1;
  iVar3 = FUN_0043eb70();
  if (iVar3 == 0) {
    return (undefined8 *)0x0;
  }
  puVar4 = (undefined8 *)FUN_003c8474(0x40,"providers/implementations/kdfs/krb5kdf.c",0x43);
  if (puVar4 != (undefined8 *)0x0) {
    uVar1 = param_1[4];
    uVar2 = param_1[5];
    *puVar4 = uVar5;
    iVar3 = FUN_0043fd80(uVar1,uVar2,puVar4 + 4,puVar4 + 5);
    if (((iVar3 == 0) ||
        (iVar3 = FUN_0043fd80(param_1[6],param_1[7],puVar4 + 6,puVar4 + 7), iVar3 == 0)) ||
       (iVar3 = FUN_0043f57c(puVar4 + 1,param_1 + 1), iVar3 == 0)) {
      uVar5 = *puVar4;
      FUN_0043f550(puVar4 + 1);
      FUN_003c893c(puVar4[4],puVar4[5],"providers/implementations/kdfs/krb5kdf.c",0x59);
      FUN_003c893c(puVar4[6],puVar4[7],"providers/implementations/kdfs/krb5kdf.c",0x5a);
      puVar4[7] = 0;
      *puVar4 = uVar5;
      puVar4[6] = 0;
      puVar4[5] = 0;
      puVar4[4] = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      puVar4[1] = 0;
      FUN_003c86b4(puVar4,"providers/implementations/kdfs/krb5kdf.c",0x4f);
      return (undefined8 *)0x0;
    }
  }
  return puVar4;
}


// ===== 004540b8  FUN_004540b8 =====

void FUN_004540b8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *param_1;
    FUN_0043f550(param_1 + 1);
    FUN_003c893c(param_1[4],param_1[5],"providers/implementations/kdfs/krb5kdf.c",0x59);
    FUN_003c893c(param_1[6],param_1[7],"providers/implementations/kdfs/krb5kdf.c",0x5a);
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = uVar1;
    FUN_003c86b4(param_1,"providers/implementations/kdfs/krb5kdf.c",0x4f);
    return;
  }
  return;
}


// ===== 0045413c  FUN_0045413c =====

void FUN_0045413c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_0043f550(param_1 + 1);
  FUN_003c893c(param_1[4],param_1[5],"providers/implementations/kdfs/krb5kdf.c",0x59);
  FUN_003c893c(param_1[6],param_1[7],"providers/implementations/kdfs/krb5kdf.c",0x5a);
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = uVar1;
  return;
}


// ===== 004541a8  FUN_004541a8 =====

ulong FUN_004541a8(long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  size_t __n;
  byte *pbVar2;
  void *__src;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  undefined8 uVar20;
  byte *__src_00;
  int local_a4;
  byte abStack_a0 [32];
  byte abStack_80 [32];
  
  uVar10 = FUN_0043eb70();
  if ((int)uVar10 == 0) {
    return uVar10;
  }
  uVar10 = FUN_00454620(param_1,param_4);
  if ((int)uVar10 == 0) {
    return uVar10;
  }
  lVar11 = FUN_0043f6f0(param_1 + 8);
  if (lVar11 == 0) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/kdfs/krb5kdf.c",0x89,"krb5kdf_derive");
    uVar12 = 0x9b;
LAB_0045436c:
    FUN_00379a5c(0x39,uVar12,0);
    return 0;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/kdfs/krb5kdf.c",0x8d,"krb5kdf_derive");
    uVar12 = 0x80;
    goto LAB_0045436c;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/kdfs/krb5kdf.c",0x91,"krb5kdf_derive");
    uVar12 = 0x9c;
    goto LAB_0045436c;
  }
  uVar12 = FUN_0043f6f8(param_1 + 8);
  if (*(ulong *)(param_1 + 0x28) != param_3) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/kdfs/krb5kdf.c",0x191,"KRB5KDF");
    uVar12 = 0x8b;
    goto LAB_0045436c;
  }
  __src = *(void **)(param_1 + 0x30);
  uVar10 = *(ulong *)(param_1 + 0x38);
  uVar20 = *(undefined8 *)(param_1 + 0x20);
  lVar13 = FUN_0037fab8();
  if (lVar13 == 0) {
    return 0;
  }
  iVar8 = FUN_00381064(lVar13,lVar11,uVar12,uVar20,0);
  if ((iVar8 != 0) &&
     (((iVar8 = FUN_003897ac(lVar13), (long)iVar8 == param_3 ||
       (iVar8 = FUN_003814f4(lVar13,param_3 & 0xffffffff), 0 < iVar8)) &&
      (iVar8 = FUN_00381d28(lVar13,0), iVar8 != 0)))) {
    uVar14 = FUN_0038936c(lVar13);
    uVar9 = (uint)uVar14;
    if ((ulong)(long)(int)uVar9 < uVar10) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/kdfs/krb5kdf.c",0x1a4,"KRB5KDF");
      FUN_00379a5c(0x39,0x9d,0);
      uVar9 = 0;
      goto LAB_004545bc;
    }
    uVar15 = uVar14 & 0xffffffff;
    uVar14 = uVar14 & 0xffffffff;
    if (uVar10 == uVar15) {
      memcpy(abStack_a0,__src,uVar10);
    }
    else {
      uVar17 = uVar15;
      if ((int)uVar10 != 0) {
        uVar18 = uVar14;
        uVar6 = uVar10 & 0xffffffff;
        do {
          uVar17 = uVar6;
          uVar16 = 0;
          uVar19 = (uint)uVar17;
          if (uVar19 != 0) {
            uVar16 = (uint)uVar18 / uVar19;
          }
          uVar16 = (uint)uVar18 - uVar16 * uVar19;
          uVar18 = uVar17;
          uVar6 = (ulong)uVar16;
        } while (uVar16 != 0);
      }
      iVar8 = 0;
      if (uVar17 != 0) {
        iVar8 = (int)((uVar10 * uVar15) / uVar17);
      }
      memset(abStack_a0,0,uVar15);
      if (-1 < (int)(iVar8 - 1U)) {
        uVar16 = 0;
        uVar15 = (ulong)(iVar8 - 1U);
        do {
          iVar8 = 0;
          if (uVar10 != 0) {
            iVar8 = (int)(uVar15 / uVar10);
          }
          uVar5 = 0;
          uVar19 = (uint)uVar15;
          if (uVar9 != 0) {
            uVar5 = uVar19 / uVar9;
          }
          uVar4 = uVar19 - ((uint)(iVar8 * 0xd) >> 3);
          uVar1 = iVar8 * 0xd & 7;
          uVar17 = 0;
          if (uVar10 != 0) {
            uVar17 = (uVar4 - 1) / uVar10;
          }
          uVar18 = 0;
          if (uVar10 != 0) {
            uVar18 = uVar4 / uVar10;
          }
          uVar19 = uVar19 - uVar5 * uVar9;
          uVar5 = uVar16 + abStack_a0[uVar19] +
                  ((uint)*(byte *)((long)__src + ((ulong)(uVar4 - 1) - uVar17 * uVar10)) <<
                   (ulong)(8 - uVar1 & 0x1f) & 0xfe |
                  (uint)(*(byte *)((long)__src + ((ulong)uVar4 - uVar18 * uVar10)) >> (ulong)uVar1))
          ;
          abStack_a0[uVar19] = (byte)uVar5;
          uVar16 = uVar5 >> 8;
          bVar7 = uVar15 != 0;
          uVar15 = uVar15 - 1;
        } while (bVar7);
        uVar9 = uVar9 - 1;
        if ((-1 < (int)uVar9) && (0xff < uVar5)) {
          do {
            bVar3 = abStack_a0[uVar9];
            abStack_a0[uVar9] = (byte)(bVar3 + 1);
            bVar7 = uVar9 == 0;
            uVar9 = uVar9 - 1;
            if (bVar7) break;
          } while (bVar3 + 1 >> 8 != 0);
        }
      }
    }
    if (param_3 == 0) {
LAB_004545d8:
      uVar9 = 1;
      goto LAB_004545bc;
    }
    iVar8 = FUN_003803e0(lVar13,abStack_80,&local_a4,abStack_a0,uVar14);
    if (iVar8 != 0) {
      uVar10 = 0;
      __src_00 = abStack_80;
      while( true ) {
        uVar15 = (ulong)local_a4;
        iVar8 = FUN_0038096c(lVar13,__src_00,&local_a4);
        if (iVar8 == 0) break;
        if (local_a4 != 0) {
          FUN_00379868();
          FUN_0037995c("providers/implementations/kdfs/krb5kdf.c",0x1b9,"KRB5KDF");
          FUN_00379a5c(0x39,0x6b,0);
          uVar9 = 0;
          goto LAB_004545bc;
        }
        __n = param_3 - uVar10;
        if (uVar15 <= param_3 - uVar10) {
          __n = uVar15;
        }
        memcpy((void *)(param_2 + uVar10),__src_00,__n);
        uVar10 = __n + uVar10;
        if (param_3 <= uVar10) goto LAB_004545d8;
        iVar8 = FUN_0037f938(lVar13);
        if ((((iVar8 == 0) || (iVar8 = FUN_00381064(lVar13,lVar11,uVar12,uVar20,0), iVar8 == 0)) ||
            ((iVar8 = FUN_003897ac(lVar13), (long)iVar8 != param_3 &&
             (iVar8 = FUN_003814f4(lVar13,param_3 & 0xffffffff), iVar8 < 1)))) ||
           (iVar8 = FUN_00381d28(lVar13,0), iVar8 == 0)) break;
        pbVar2 = __src_00 + 0x20;
        if (__src_00 != abStack_a0) {
          pbVar2 = abStack_a0;
        }
        iVar8 = FUN_003803e0(lVar13,pbVar2,&local_a4,__src_00,uVar14);
        __src_00 = pbVar2;
        if (iVar8 == 0) break;
      }
    }
  }
  uVar9 = 0;
LAB_004545bc:
  FUN_0037fae8(lVar13);
  FUN_003c89b8(abStack_a0,0x40);
  return (ulong)uVar9;
}


// ===== 00454614  FUN_00454614 =====

undefined ** FUN_00454614(void)

{
  return &PTR_s_properties_00789618;
}


// ===== 00454620  FUN_00454620 =====

undefined8 FUN_00454620(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar1 = FUN_0046b880(*param_1);
  if (param_2 != 0) {
    uVar1 = FUN_0043f5c8(param_1 + 1,param_2,uVar1);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
    lVar2 = FUN_003cb19c(param_2,&DAT_001e2b47);
    if (lVar2 != 0) {
      puVar3 = param_1 + 4;
      puVar4 = param_1 + 5;
      FUN_003c893c(*puVar3,*puVar4,"providers/implementations/kdfs/krb5kdf.c",0x62);
      *puVar4 = 0;
      *puVar3 = 0;
      uVar1 = FUN_003cd608(lVar2,puVar3,0,puVar4);
      if ((int)uVar1 == 0) {
        return uVar1;
      }
    }
    lVar2 = FUN_003cb19c(param_2,"constant");
    if (lVar2 != 0) {
      puVar3 = param_1 + 6;
      param_1 = param_1 + 7;
      FUN_003c893c(*puVar3,*param_1,"providers/implementations/kdfs/krb5kdf.c",0x62);
      *param_1 = 0;
      *puVar3 = 0;
      uVar1 = FUN_003cd608(lVar2,puVar3,0,param_1);
      if ((int)uVar1 == 0) {
        return uVar1;
      }
    }
  }
  return 1;
}


// ===== 00454720  FUN_00454720 =====

undefined ** FUN_00454720(void)

{
  return &PTR_DAT_007896e0;
}


// ===== 0045472c  FUN_0045472c =====

undefined8 FUN_0045472c(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_0043f6f0(param_1 + 8);
  if (lVar2 == 0) {
    lVar2 = 0x40;
    lVar3 = FUN_003cb140(param_2,&DAT_001f543b);
  }
  else {
    iVar1 = FUN_003897a4();
    lVar2 = (long)iVar1;
    lVar3 = FUN_003cb140(param_2,&DAT_001f543b);
  }
  if (lVar3 != 0) {
    uVar4 = thunk_FUN_003cc2a4(lVar3,lVar2);
    return uVar4;
  }
  return 0xfffffffe;
}


// ===== 0045479c  FUN_0045479c =====

undefined8 * FUN_0045479c(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
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
  
  iVar2 = FUN_0043eb70();
  if (iVar2 != 0) {
    puVar3 = (undefined8 *)FUN_003c8474(0x50,"providers/implementations/kdfs/pbkdf2.c",0x4a);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = param_1;
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
      uVar4 = FUN_0046b880(param_1);
      FUN_003cd8cc(&local_80,"digest",&DAT_001eef82,0);
      iVar2 = FUN_0043f7c4(puVar3 + 6,&local_80,uVar4);
      if (iVar2 == 0) {
        FUN_0043f700(puVar3 + 6);
      }
      puVar1 = PTR_DAT_007a1d48;
      puVar3[5] = 0x800;
      *(undefined4 *)(puVar3 + 9) = *(undefined4 *)puVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}


// ===== 0045487c  FUN_0045487c =====

undefined8 * FUN_0045487c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  uVar6 = *param_1;
  iVar4 = FUN_0043eb70();
  if (iVar4 == 0) {
    return (undefined8 *)0x0;
  }
  puVar5 = (undefined8 *)FUN_003c8474(0x50,"providers/implementations/kdfs/pbkdf2.c",0x4a);
  if (puVar5 != (undefined8 *)0x0) {
    uVar1 = param_1[3];
    uVar2 = param_1[4];
    *puVar5 = uVar6;
    iVar4 = FUN_0043fd80(uVar1,uVar2,puVar5 + 3,puVar5 + 4);
    if (((iVar4 == 0) ||
        (iVar4 = FUN_0043fd80(param_1[1],param_1[2],puVar5 + 1,puVar5 + 2), iVar4 == 0)) ||
       (iVar4 = FUN_0043f72c(puVar5 + 6,param_1 + 6), iVar4 == 0)) {
      FUN_0043f700(puVar5 + 6);
      FUN_003c86b4(puVar5[3],"providers/implementations/kdfs/pbkdf2.c",0x5d);
      FUN_003c893c(puVar5[1],puVar5[2],"providers/implementations/kdfs/pbkdf2.c",0x5e);
      puVar5[3] = 0;
      puVar5[2] = 0;
      puVar5[5] = 0;
      puVar5[4] = 0;
      puVar5[7] = 0;
      puVar5[6] = 0;
      puVar5[9] = 0;
      puVar5[8] = 0;
      puVar5[1] = 0;
      *puVar5 = 0;
      FUN_003c86b4(puVar5,"providers/implementations/kdfs/pbkdf2.c",0x68);
      return (undefined8 *)0x0;
    }
    uVar3 = *(undefined4 *)(param_1 + 9);
    puVar5[5] = param_1[5];
    *(undefined4 *)(puVar5 + 9) = uVar3;
  }
  return puVar5;
}


// ===== 00454980  FUN_00454980 =====

void FUN_00454980(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_0043f700(param_1 + 6);
    FUN_003c86b4(param_1[3],"providers/implementations/kdfs/pbkdf2.c",0x5d);
    FUN_003c893c(param_1[1],param_1[2],"providers/implementations/kdfs/pbkdf2.c",0x5e);
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    FUN_003c86b4(param_1,"providers/implementations/kdfs/pbkdf2.c",0x68);
    return;
  }
  return;
}


// ===== 004549f0  FUN_004549f0 =====

void FUN_004549f0(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
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
  
  uVar3 = *param_1;
  FUN_0043f700(param_1 + 6);
  FUN_003c86b4(param_1[3],"providers/implementations/kdfs/pbkdf2.c",0x5d);
  FUN_003c893c(param_1[1],param_1[2],"providers/implementations/kdfs/pbkdf2.c",0x5e);
  param_1[9] = 0;
  *param_1 = uVar3;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
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
  uVar3 = FUN_0046b880(uVar3);
  FUN_003cd8cc(&local_80,"digest",&DAT_001eef82,0);
  iVar2 = FUN_0043f7c4(param_1 + 6,&local_80,uVar3);
  if (iVar2 == 0) {
    FUN_0043f700(param_1 + 6);
  }
  puVar1 = PTR_DAT_007a1d48;
  param_1[5] = 0x800;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)puVar1;
  return;
}


// ===== 00454ad0  FUN_00454ad0 =====

ulong FUN_00454ad0(long param_1,void *param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  byte *pbVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  byte *pbVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  int iVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  uint local_a4;
  byte local_a0 [16];
  undefined8 auStack_90 [6];
  
  uVar6 = FUN_0043eb70();
  if ((int)uVar6 == 0) {
    return uVar6;
  }
  uVar6 = FUN_00454fe4(param_1,param_4);
  if ((int)uVar6 == 0) {
    return uVar6;
  }
  if (*(long *)(param_1 + 8) == 0) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/kdfs/pbkdf2.c",0xb7,"kdf_pbkdf2_derive");
    uVar10 = 0x82;
  }
  else if (*(long *)(param_1 + 0x18) == 0) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/kdfs/pbkdf2.c",0xbc,"kdf_pbkdf2_derive");
    uVar10 = 0x83;
  }
  else {
    uVar7 = FUN_0043f900(param_1 + 0x30);
    uVar10 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(ulong *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    uVar25 = *(undefined8 *)(param_1 + 0x20);
    uVar24 = *(ulong *)(param_1 + 0x28);
    iVar5 = *(int *)(param_1 + 0x48);
    uVar4 = FUN_00389a38();
    if ((int)uVar4 < 1) {
      return 0;
    }
    uVar22 = (ulong)uVar4;
    uVar11 = 0;
    if (uVar22 != 0) {
      uVar11 = param_3 / uVar22;
    }
    if (uVar11 < 0xffffffff) {
      iVar23 = (int)uVar25;
      if (iVar5 == 0) {
LAB_00454c9c:
        lVar8 = FUN_003ff7b8();
        if (lVar8 == 0) {
          return 0;
        }
        iVar5 = FUN_003ff340(lVar8,uVar10,uVar6 & 0xffffffff,uVar7,0);
        if (iVar5 == 0) {
          uVar4 = 0;
          lVar9 = 0;
        }
        else {
          lVar9 = FUN_003ff7b8();
          if (lVar9 == 0) {
LAB_00454fbc:
            uVar4 = 0;
          }
          else {
            if ((int)param_3 != 0) {
              if (uVar24 == 0 || uVar24 - 1 == 0) {
                uVar21 = 1;
                do {
                  uVar20 = (uint)param_3;
                  uVar3 = (uVar21 & 0xff00ff00) >> 8 | (uVar21 & 0xff00ff) << 8;
                  local_a4 = uVar3 >> 0x10 | uVar3 << 0x10;
                  uVar3 = uVar20;
                  if ((int)uVar4 <= (int)uVar20) {
                    uVar3 = uVar4;
                  }
                  iVar5 = FUN_003ff8d4(lVar9,lVar8);
                  if ((((iVar5 == 0) || (iVar5 = FUN_003ff6e0(lVar9,uVar2,(long)iVar23), iVar5 == 0)
                       ) || (iVar5 = FUN_003ff6e0(lVar9,&local_a4,4), iVar5 == 0)) ||
                     (iVar5 = FUN_003ff6f8(lVar9,local_a0,0), iVar5 == 0)) goto LAB_00454fbc;
                  memcpy(param_2,local_a0,(long)(int)uVar3);
                  param_3 = (ulong)(uVar20 - uVar3);
                  uVar21 = uVar21 + 1;
                  param_2 = (void *)((long)param_2 + (long)(int)uVar3);
                } while (uVar20 - uVar3 != 0);
              }
              else {
                uVar21 = 1;
                do {
                  uVar20 = (uint)param_3;
                  uVar3 = (uVar21 & 0xff00ff00) >> 8 | (uVar21 & 0xff00ff) << 8;
                  local_a4 = uVar3 >> 0x10 | uVar3 << 0x10;
                  uVar3 = uVar20;
                  if ((int)uVar4 <= (int)uVar20) {
                    uVar3 = uVar4;
                  }
                  iVar5 = FUN_003ff8d4(lVar9,lVar8);
                  if (((iVar5 == 0) || (iVar5 = FUN_003ff6e0(lVar9,uVar2,(long)iVar23), iVar5 == 0))
                     || ((iVar5 = FUN_003ff6e0(lVar9,&local_a4,4), iVar5 == 0 ||
                         (iVar5 = FUN_003ff6f8(lVar9,local_a0,0), iVar5 == 0)))) goto LAB_00454fbc;
                  memcpy(param_2,local_a0,(long)(int)uVar3);
                  lVar15 = uVar24 - 1;
                  if ((int)uVar20 < 1) {
                    do {
                      iVar5 = FUN_003ff8d4(lVar9,lVar8);
                      if (((iVar5 == 0) || (iVar5 = FUN_003ff6e0(lVar9,local_a0,uVar22), iVar5 == 0)
                          ) || (iVar5 = FUN_003ff6f8(lVar9,local_a0,0), iVar5 == 0))
                      goto LAB_00454fbc;
                      lVar15 = lVar15 + -1;
                    } while (lVar15 != 0);
                  }
                  else {
                    uVar6 = 1;
                    uVar1 = uVar3;
                    if ((int)uVar3 < 2) {
                      uVar1 = 1;
                    }
                    uVar11 = (ulong)uVar1;
                    uVar17 = uVar11 & 0x7fffffe0;
                    uVar12 = uVar11 & 0x7ffffff8;
                    do {
                      iVar5 = FUN_003ff8d4(lVar9,lVar8);
                      if (((iVar5 == 0) || (iVar5 = FUN_003ff6e0(lVar9,local_a0,uVar22), iVar5 == 0)
                          ) || (iVar5 = FUN_003ff6f8(lVar9,local_a0,0), iVar5 == 0))
                      goto LAB_00454fbc;
                      if ((int)uVar3 < 8) {
                        uVar13 = 0;
LAB_00454e90:
                        lVar15 = uVar11 - uVar13;
                        pbVar14 = (byte *)((long)param_2 + uVar13);
                        pbVar19 = local_a0 + uVar13;
                        do {
                          lVar15 = lVar15 + -1;
                          *pbVar14 = *pbVar14 ^ *pbVar19;
                          pbVar14 = pbVar14 + 1;
                          pbVar19 = pbVar19 + 1;
                        } while (lVar15 != 0);
                      }
                      else {
                        uVar13 = uVar17;
                        puVar16 = (undefined8 *)((long)param_2 + 0x10);
                        puVar18 = auStack_90;
                        if ((int)uVar3 < 0x20) {
                          uVar13 = 0;
LAB_00454e58:
                          lVar15 = uVar13 - uVar12;
                          pbVar14 = local_a0 + uVar13;
                          puVar16 = (undefined8 *)((long)param_2 + uVar13);
                          do {
                            uVar10 = *(undefined8 *)pbVar14;
                            uVar25 = *puVar16;
                            lVar15 = lVar15 + 8;
                            *puVar16 = CONCAT17((byte)((ulong)uVar25 >> 0x38) ^
                                                (byte)((ulong)uVar10 >> 0x38),
                                                CONCAT16((byte)((ulong)uVar25 >> 0x30) ^
                                                         (byte)((ulong)uVar10 >> 0x30),
                                                         CONCAT15((byte)((ulong)uVar25 >> 0x28) ^
                                                                  (byte)((ulong)uVar10 >> 0x28),
                                                                  CONCAT14((byte)((ulong)uVar25 >>
                                                                                 0x20) ^
                                                                           (byte)((ulong)uVar10 >>
                                                                                 0x20),
                                                                           CONCAT13((byte)((ulong)
                                                  uVar25 >> 0x18) ^ (byte)((ulong)uVar10 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar25 >> 0x10) ^
                                                           (byte)((ulong)uVar10 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar25 >> 8) ^
                                                                    (byte)((ulong)uVar10 >> 8),
                                                                    (byte)uVar25 ^ (byte)uVar10)))))
                                                  ));
                            pbVar14 = pbVar14 + 8;
                            puVar16 = puVar16 + 1;
                          } while (lVar15 != 0);
                          uVar13 = uVar12;
                          if (uVar12 != uVar11) goto LAB_00454e90;
                        }
                        else {
                          do {
                            uVar25 = puVar16[-1];
                            uVar10 = puVar16[-2];
                            uVar30 = puVar16[1];
                            uVar29 = *puVar16;
                            uVar13 = uVar13 - 0x20;
                            uVar26 = puVar18[-1];
                            uVar7 = puVar18[-2];
                            uVar28 = puVar18[1];
                            uVar27 = *puVar18;
                            puVar16[-1] = CONCAT17((byte)((ulong)uVar25 >> 0x38) ^
                                                   (byte)((ulong)uVar26 >> 0x38),
                                                   CONCAT16((byte)((ulong)uVar25 >> 0x30) ^
                                                            (byte)((ulong)uVar26 >> 0x30),
                                                            CONCAT15((byte)((ulong)uVar25 >> 0x28) ^
                                                                     (byte)((ulong)uVar26 >> 0x28),
                                                                     CONCAT14((byte)((ulong)uVar25
                                                                                    >> 0x20) ^
                                                                              (byte)((ulong)uVar26
                                                                                    >> 0x20),
                                                                              CONCAT13((byte)((ulong
                                                  )uVar25 >> 0x18) ^ (byte)((ulong)uVar26 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar25 >> 0x10) ^
                                                           (byte)((ulong)uVar26 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar25 >> 8) ^
                                                                    (byte)((ulong)uVar26 >> 8),
                                                                    (byte)uVar25 ^ (byte)uVar26)))))
                                                  ));
                            puVar16[-2] = CONCAT17((byte)((ulong)uVar10 >> 0x38) ^
                                                   (byte)((ulong)uVar7 >> 0x38),
                                                   CONCAT16((byte)((ulong)uVar10 >> 0x30) ^
                                                            (byte)((ulong)uVar7 >> 0x30),
                                                            CONCAT15((byte)((ulong)uVar10 >> 0x28) ^
                                                                     (byte)((ulong)uVar7 >> 0x28),
                                                                     CONCAT14((byte)((ulong)uVar10
                                                                                    >> 0x20) ^
                                                                              (byte)((ulong)uVar7 >>
                                                                                    0x20),
                                                                              CONCAT13((byte)((ulong
                                                  )uVar10 >> 0x18) ^ (byte)((ulong)uVar7 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar10 >> 0x10) ^
                                                           (byte)((ulong)uVar7 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar10 >> 8) ^
                                                                    (byte)((ulong)uVar7 >> 8),
                                                                    (byte)uVar10 ^ (byte)uVar7))))))
                                                  );
                            puVar16[1] = CONCAT17((byte)((ulong)uVar30 >> 0x38) ^
                                                  (byte)((ulong)uVar28 >> 0x38),
                                                  CONCAT16((byte)((ulong)uVar30 >> 0x30) ^
                                                           (byte)((ulong)uVar28 >> 0x30),
                                                           CONCAT15((byte)((ulong)uVar30 >> 0x28) ^
                                                                    (byte)((ulong)uVar28 >> 0x28),
                                                                    CONCAT14((byte)((ulong)uVar30 >>
                                                                                   0x20) ^
                                                                             (byte)((ulong)uVar28 >>
                                                                                   0x20),
                                                                             CONCAT13((byte)((ulong)
                                                  uVar30 >> 0x18) ^ (byte)((ulong)uVar28 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar30 >> 0x10) ^
                                                           (byte)((ulong)uVar28 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar30 >> 8) ^
                                                                    (byte)((ulong)uVar28 >> 8),
                                                                    (byte)uVar30 ^ (byte)uVar28)))))
                                                  ));
                            *puVar16 = CONCAT17((byte)((ulong)uVar29 >> 0x38) ^
                                                (byte)((ulong)uVar27 >> 0x38),
                                                CONCAT16((byte)((ulong)uVar29 >> 0x30) ^
                                                         (byte)((ulong)uVar27 >> 0x30),
                                                         CONCAT15((byte)((ulong)uVar29 >> 0x28) ^
                                                                  (byte)((ulong)uVar27 >> 0x28),
                                                                  CONCAT14((byte)((ulong)uVar29 >>
                                                                                 0x20) ^
                                                                           (byte)((ulong)uVar27 >>
                                                                                 0x20),
                                                                           CONCAT13((byte)((ulong)
                                                  uVar29 >> 0x18) ^ (byte)((ulong)uVar27 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar29 >> 0x10) ^
                                                           (byte)((ulong)uVar27 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar29 >> 8) ^
                                                                    (byte)((ulong)uVar27 >> 8),
                                                                    (byte)uVar29 ^ (byte)uVar27)))))
                                                  ));
                            puVar16 = puVar16 + 4;
                            puVar18 = puVar18 + 4;
                          } while (uVar13 != 0);
                          if (uVar17 != uVar11) {
                            uVar13 = uVar17;
                            if ((uVar1 & 0x18) == 0) goto LAB_00454e90;
                            goto LAB_00454e58;
                          }
                        }
                      }
                      uVar6 = uVar6 + 1;
                    } while (uVar6 != uVar24);
                  }
                  param_3 = (ulong)(uVar20 - uVar3);
                  param_2 = (void *)((long)param_2 + (long)(int)uVar3);
                  uVar21 = uVar21 + 1;
                } while (uVar20 - uVar3 != 0);
              }
            }
            uVar4 = 1;
          }
        }
        FUN_003ff868(lVar9);
        FUN_003ff868(lVar8);
        return (ulong)uVar4;
      }
      if (param_3 * 8 < 0x70) {
        FUN_00379868();
        FUN_0037995c("providers/implementations/kdfs/pbkdf2.c",0x14b,"pbkdf2_derive");
        uVar10 = 0xab;
      }
      else if (iVar23 < 0x10) {
        FUN_00379868();
        FUN_0037995c("providers/implementations/kdfs/pbkdf2.c",0x14f,"pbkdf2_derive");
        uVar10 = 0x70;
      }
      else {
        if (999 < uVar24) goto LAB_00454c9c;
        FUN_00379868();
        FUN_0037995c("providers/implementations/kdfs/pbkdf2.c",0x153,"pbkdf2_derive");
        uVar10 = 0x7b;
      }
    }
    else {
      FUN_00379868();
      FUN_0037995c("providers/implementations/kdfs/pbkdf2.c",0x145,"pbkdf2_derive");
      uVar10 = 0x69;
    }
  }
  FUN_00379a5c(0x39,uVar10,0);
  return 0;
}


// ===== 00454fd8  FUN_00454fd8 =====

undefined ** FUN_00454fd8(void)

{
  return &PTR_s_properties_007897d0;
}


// ===== 00454fe4  FUN_00454fe4 =====

undefined8 FUN_00454fe4(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong local_48;
  int local_24;
  
  uVar2 = FUN_0046b880(*param_1);
  if (param_2 != 0) {
    uVar2 = FUN_0043f7c4(param_1 + 6,param_2,uVar2);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    lVar3 = FUN_003cb19c(param_2,"pkcs5");
    if (lVar3 != 0) {
      uVar2 = thunk_FUN_003cb238(lVar3,&local_24);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      *(uint *)(param_1 + 9) = (uint)(local_24 == 0);
    }
    lVar3 = FUN_003cb19c(param_2,&DAT_001e0907);
    if (lVar3 != 0) {
      plVar4 = param_1 + 1;
      puVar5 = param_1 + 2;
      FUN_003c893c(*plVar4,*puVar5,"providers/implementations/kdfs/pbkdf2.c",0x9f);
      *puVar5 = 0;
      *plVar4 = 0;
      if (*(long *)(lVar3 + 0x18) == 0) {
        lVar3 = FUN_003c83a4(1,"providers/implementations/kdfs/pbkdf2.c",0xa4);
        *plVar4 = lVar3;
        if (lVar3 == 0) {
          return 0;
        }
      }
      else if ((*(long *)(lVar3 + 0x10) != 0) &&
              (uVar2 = FUN_003cd608(lVar3,plVar4,0,puVar5), (int)uVar2 == 0)) {
        return uVar2;
      }
    }
    lVar3 = FUN_003cb19c(param_2,&DAT_001c2fe1);
    if (lVar3 != 0) {
      if ((*(int *)(param_1 + 9) != 0) && (*(ulong *)(lVar3 + 0x18) < 0x10)) {
        FUN_00379868();
        FUN_0037995c("providers/implementations/kdfs/pbkdf2.c",0xe1,"kdf_pbkdf2_set_ctx_params");
        uVar2 = 0x70;
        goto LAB_00455218;
      }
      plVar4 = param_1 + 3;
      puVar5 = param_1 + 4;
      FUN_003c893c(*plVar4,*puVar5,"providers/implementations/kdfs/pbkdf2.c",0x9f);
      *puVar5 = 0;
      *plVar4 = 0;
      if (*(long *)(lVar3 + 0x18) == 0) {
        lVar3 = FUN_003c83a4(1,"providers/implementations/kdfs/pbkdf2.c",0xa4);
        *plVar4 = lVar3;
        if (lVar3 == 0) {
          return 0;
        }
      }
      else if ((*(long *)(lVar3 + 0x10) != 0) &&
              (uVar2 = FUN_003cd608(lVar3,plVar4,0,puVar5), (int)uVar2 == 0)) {
        return uVar2;
      }
    }
    lVar3 = FUN_003cb19c(param_2,&DAT_001c7525);
    if (lVar3 != 0) {
      uVar2 = FUN_003cc060(lVar3,&local_48);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      uVar1 = 1000;
      if (*(int *)(param_1 + 9) == 0) {
        uVar1 = 1;
      }
      if (local_48 < uVar1) {
        FUN_00379868();
        FUN_0037995c("providers/implementations/kdfs/pbkdf2.c",0xed,"kdf_pbkdf2_set_ctx_params");
        uVar2 = 0x7b;
LAB_00455218:
        FUN_00379a5c(0x39,uVar2,0);
        return 0;
      }
      param_1[5] = local_48;
    }
  }
  return 1;
}


// ===== 0045525c  FUN_0045525c =====

undefined ** FUN_0045525c(void)

{
  return &PTR_DAT_007898e8;
}


// ===== 00455268  FUN_00455268 =====

undefined8 FUN_00455268(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_003cb140(param_2,&DAT_001f543b);
  if (lVar1 != 0) {
    uVar2 = thunk_FUN_003cc2a4(lVar1,0xffffffffffffffff);
    return uVar2;
  }
  return 0xfffffffe;
}


// ===== 0045529c  FUN_0045529c =====

undefined8 * FUN_0045529c(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)FUN_003c8474(0x50,"providers/implementations/kdfs/pkcs12kdf.c",0x90);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_1;
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}


// ===== 004552ec  FUN_004552ec =====

undefined8 * FUN_004552ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  uVar6 = *param_1;
  iVar4 = FUN_0043eb70();
  if (iVar4 == 0) {
    return (undefined8 *)0x0;
  }
  puVar5 = (undefined8 *)FUN_003c8474(0x50,"providers/implementations/kdfs/pkcs12kdf.c",0x90);
  if (puVar5 != (undefined8 *)0x0) {
    uVar1 = param_1[6];
    uVar2 = param_1[7];
    *puVar5 = uVar6;
    iVar4 = FUN_0043fd80(uVar1,uVar2,puVar5 + 6,puVar5 + 7);
    if (((iVar4 == 0) ||
        (iVar4 = FUN_0043fd80(param_1[4],param_1[5],puVar5 + 4,puVar5 + 5), iVar4 == 0)) ||
       (iVar4 = FUN_0043f72c(puVar5 + 1,param_1 + 1), iVar4 == 0)) {
      FUN_0043f700(puVar5 + 1);
      FUN_003c86b4(puVar5[6],"providers/implementations/kdfs/pkcs12kdf.c",0x9a);
      FUN_003c893c(puVar5[4],puVar5[5],"providers/implementations/kdfs/pkcs12kdf.c",0x9b);
      puVar5[3] = 0;
      puVar5[2] = 0;
      puVar5[5] = 0;
      puVar5[4] = 0;
      puVar5[7] = 0;
      puVar5[6] = 0;
      puVar5[9] = 0;
      puVar5[8] = 0;
      puVar5[1] = 0;
      *puVar5 = 0;
      FUN_003c86b4(puVar5,"providers/implementations/kdfs/pkcs12kdf.c",0xa5);
      return (undefined8 *)0x0;
    }
    uVar3 = *(undefined4 *)(param_1 + 9);
    puVar5[8] = param_1[8];
    *(undefined4 *)(puVar5 + 9) = uVar3;
  }
  return puVar5;
}


// ===== 004553f0  FUN_004553f0 =====

void FUN_004553f0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_0043f700(param_1 + 1);
    FUN_003c86b4(param_1[6],"providers/implementations/kdfs/pkcs12kdf.c",0x9a);
    FUN_003c893c(param_1[4],param_1[5],"providers/implementations/kdfs/pkcs12kdf.c",0x9b);
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    FUN_003c86b4(param_1,"providers/implementations/kdfs/pkcs12kdf.c",0xa5);
    return;
  }
  return;
}


// ===== 00455460  FUN_00455460 =====

void FUN_00455460(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_0043f700(param_1 + 1);
  FUN_003c86b4(param_1[6],"providers/implementations/kdfs/pkcs12kdf.c",0x9a);
  FUN_003c893c(param_1[4],param_1[5],"providers/implementations/kdfs/pkcs12kdf.c",0x9b);
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = uVar1;
  return;
}


// ===== 004554d0  FUN_004554d0 =====

undefined4 FUN_004554d0(long param_1,void *param_2,ulong param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  ulong uVar2;
  size_t __n;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  void *__s;
  void *__src;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong __n_00;
  ulong uVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  ulong uVar23;
  ulong local_b8;
  void *local_98;
  
  iVar7 = FUN_0043eb70();
  if ((iVar7 == 0) || (iVar7 = FUN_00455a10(param_1,param_4), iVar7 == 0)) {
    return 0;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/kdfs/pkcs12kdf.c",0xe4,"kdf_pkcs12_derive");
    uVar9 = 0x82;
LAB_004558f8:
    FUN_00379a5c(0x39,uVar9,0);
    return 0;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/kdfs/pkcs12kdf.c",0xe9,"kdf_pkcs12_derive");
    uVar9 = 0x83;
    goto LAB_004558f8;
  }
  uVar9 = FUN_0043f900(param_1 + 8);
  lVar18 = *(long *)(param_1 + 0x30);
  uVar17 = *(ulong *)(param_1 + 0x38);
  lVar3 = *(long *)(param_1 + 0x20);
  uVar15 = *(ulong *)(param_1 + 0x28);
  iVar7 = *(int *)(param_1 + 0x48);
  uVar19 = *(ulong *)(param_1 + 0x40);
  lVar10 = FUN_0039d270();
  if (lVar10 == 0) {
    uVar21 = 0x3f;
    uVar22 = 0x80006;
  }
  else {
    uVar11 = FUN_003899ec(uVar9);
    __n_00 = uVar11 & 0xffffffff;
    uVar8 = FUN_00389a38(uVar9);
    uVar22 = 0xda;
    uVar21 = 0x45;
    if ((0 < (int)uVar8) && (0 < (int)(uint)uVar11)) {
      uVar23 = (ulong)uVar8;
      __s = (void *)FUN_003c83a4(__n_00,"providers/implementations/kdfs/pkcs12kdf.c",0x4a);
      __src = (void *)FUN_003c83a4(uVar23,"providers/implementations/kdfs/pkcs12kdf.c",0x4b);
      lVar12 = FUN_003c83a4(__n_00 + 1,"providers/implementations/kdfs/pkcs12kdf.c",0x4c);
      uVar16 = (uVar17 + __n_00) - 1;
      uVar4 = 0;
      if (__n_00 != 0) {
        uVar4 = ((uVar15 + __n_00) - 1) / __n_00;
      }
      uVar20 = 0;
      if (__n_00 != 0) {
        uVar20 = uVar16 / __n_00;
      }
      uVar2 = 0;
      if (uVar15 != 0) {
        uVar2 = uVar4 * __n_00;
      }
      uVar20 = uVar20 * __n_00;
      uVar4 = uVar2 + uVar20;
      lVar13 = FUN_003c83a4(uVar4,"providers/implementations/kdfs/pkcs12kdf.c",0x53);
      uVar22 = 0;
      if ((((__s != (void *)0x0) && (__src != (void *)0x0)) && (lVar12 != 0)) && (lVar13 != 0)) {
        memset(__s,iVar7,__n_00);
        lVar14 = lVar13;
        if (uVar16 != uVar16 - uVar20) {
          uVar16 = 0;
          do {
            uVar5 = 0;
            if (uVar17 != 0) {
              uVar5 = uVar16 / uVar17;
            }
            *(undefined1 *)(lVar13 + uVar16) = *(undefined1 *)(lVar18 + (uVar16 - uVar5 * uVar17));
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar20);
          lVar14 = lVar13 + uVar16;
        }
        if (uVar2 != 0) {
          uVar17 = 0;
          do {
            uVar16 = 0;
            if (uVar15 != 0) {
              uVar16 = uVar17 / uVar15;
            }
            *(undefined1 *)(lVar14 + uVar17) = *(undefined1 *)(lVar3 + (uVar17 - uVar16 * uVar15));
            uVar17 = uVar17 + 1;
          } while (uVar2 != uVar17);
        }
        iVar7 = FUN_0039d92c(lVar10,uVar9,0);
        if (iVar7 == 0) {
          uVar22 = 0;
        }
        else {
          local_b8 = param_3;
          local_98 = param_2;
          do {
            iVar7 = FUN_0039d938(lVar10,__s,__n_00);
            if (((iVar7 == 0) || (iVar7 = FUN_0039d938(lVar10,lVar13,uVar4), iVar7 == 0)) ||
               (iVar7 = FUN_0039dac8(lVar10,__src,0), iVar7 == 0)) break;
            lVar18 = uVar19 - 1;
            if (1 < uVar19) {
              do {
                iVar7 = FUN_0039d92c(lVar10,uVar9,0);
                if (((iVar7 == 0) || (iVar7 = FUN_0039d938(lVar10,__src,uVar23), iVar7 == 0)) ||
                   (iVar7 = FUN_0039dac8(lVar10,__src,0), iVar7 == 0)) goto LAB_0045589c;
                lVar18 = lVar18 + -1;
              } while (lVar18 != 0);
            }
            __n = local_b8;
            if (uVar23 <= local_b8) {
              __n = uVar23;
            }
            memcpy(local_98,__src,__n);
            bVar6 = local_b8 < uVar23;
            local_b8 = local_b8 - uVar23;
            if (bVar6 || local_b8 == 0) {
              uVar22 = 1;
              goto LAB_00455958;
            }
            if (1 < (uint)uVar11) {
              uVar17 = 0;
              do {
                uVar15 = uVar17 + 1;
                uVar16 = 0;
                if (uVar23 != 0) {
                  uVar16 = uVar17 / uVar23;
                }
                uVar20 = 0;
                if (uVar23 != 0) {
                  uVar20 = uVar15 / uVar23;
                }
                lVar18 = uVar17 - uVar16 * uVar23;
                puVar1 = (undefined1 *)(lVar12 + uVar17);
                uVar17 = uVar17 + 2;
                *puVar1 = *(undefined1 *)((long)__src + lVar18);
                puVar1[1] = *(undefined1 *)((long)__src + (uVar15 - uVar20 * uVar23));
                uVar15 = uVar11 & 0x7ffffffe;
                if ((uVar11 & 0x7ffffffe) == uVar17) goto joined_r0x00455814;
              } while( true );
            }
            uVar15 = 0;
            do {
              uVar17 = 0;
              if (uVar23 != 0) {
                uVar17 = uVar15 / uVar23;
              }
              *(undefined1 *)(lVar12 + uVar15) =
                   *(undefined1 *)((long)__src + (uVar15 - uVar17 * uVar23));
              uVar15 = uVar15 + 1;
joined_r0x00455814:
            } while (uVar15 != __n_00);
            if (uVar4 != 0) {
              uVar17 = 0;
              lVar18 = lVar13 + -1;
              do {
                uVar8 = 1;
                uVar15 = __n_00;
                do {
                  uVar8 = uVar8 + *(byte *)(lVar18 + uVar15) + (uint)*(byte *)(lVar12 + -1 + uVar15)
                  ;
                  uVar16 = uVar15 - 1;
                  *(char *)(lVar18 + uVar15) = (char)uVar8;
                  uVar8 = uVar8 >> 8;
                  uVar15 = uVar16;
                } while (uVar16 != 0);
                uVar17 = uVar17 + __n_00;
                lVar18 = lVar18 + __n_00;
              } while (uVar17 < uVar4);
            }
            local_98 = (void *)((long)local_98 + uVar23);
            iVar7 = FUN_0039d92c(lVar10,uVar9,0);
          } while (iVar7 != 0);
LAB_0045589c:
          uVar22 = 0;
        }
      }
      goto LAB_00455958;
    }
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/kdfs/pkcs12kdf.c",uVar21,"pkcs12kdf_derive");
  FUN_00379a5c(0x39,uVar22,0);
  __src = (void *)0x0;
  lVar13 = 0;
  __s = (void *)0x0;
  uVar22 = 0;
  lVar12 = 0;
LAB_00455958:
  FUN_003c86b4(__src,"providers/implementations/kdfs/pkcs12kdf.c",0x81);
  FUN_003c86b4(lVar12,"providers/implementations/kdfs/pkcs12kdf.c",0x82);
  FUN_003c86b4(__s,"providers/implementations/kdfs/pkcs12kdf.c",0x83);
  FUN_003c86b4(lVar13,"providers/implementations/kdfs/pkcs12kdf.c",0x84);
  FUN_0039d284(lVar10);
  return uVar22;
}


// ===== 00455a04  FUN_00455a04 =====

undefined ** FUN_00455a04(void)

{
  return &PTR_s_properties_007899d8;
}


// ===== 00455a10  FUN_00455a10 =====

undefined8 FUN_00455a10(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  uVar1 = FUN_0046b880(*param_1);
  if (param_2 != 0) {
    uVar1 = FUN_0043f7c4(param_1 + 1,param_2,uVar1);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
    lVar2 = FUN_003cb19c(param_2,&DAT_001e0907);
    if (lVar2 != 0) {
      plVar3 = param_1 + 4;
      puVar4 = param_1 + 5;
      FUN_003c893c(*plVar3,*puVar4,"providers/implementations/kdfs/pkcs12kdf.c",0xcc);
      *puVar4 = 0;
      *plVar3 = 0;
      if (*(long *)(lVar2 + 0x18) == 0) {
        lVar2 = FUN_003c83a4(1,"providers/implementations/kdfs/pkcs12kdf.c",0xd1);
        *plVar3 = lVar2;
        if (lVar2 == 0) {
          return 0;
        }
      }
      else if ((*(long *)(lVar2 + 0x10) != 0) &&
              (uVar1 = FUN_003cd608(lVar2,plVar3,0,puVar4), (int)uVar1 == 0)) {
        return uVar1;
      }
    }
    lVar2 = FUN_003cb19c(param_2,&DAT_001c2fe1);
    if (lVar2 != 0) {
      plVar3 = param_1 + 6;
      puVar4 = param_1 + 7;
      FUN_003c893c(*plVar3,*puVar4,"providers/implementations/kdfs/pkcs12kdf.c",0xcc);
      *puVar4 = 0;
      *plVar3 = 0;
      if (*(long *)(lVar2 + 0x18) == 0) {
        lVar2 = FUN_003c83a4(1,"providers/implementations/kdfs/pkcs12kdf.c",0xd1);
        *plVar3 = lVar2;
        if (lVar2 == 0) {
          return 0;
        }
      }
      else if ((*(long *)(lVar2 + 0x10) != 0) &&
              (uVar1 = FUN_003cd608(lVar2,plVar3,0,puVar4), (int)uVar1 == 0)) {
        return uVar1;
      }
    }
    lVar2 = FUN_003cb19c(param_2,&DAT_001da6db);
    if (((lVar2 != 0) && (uVar1 = thunk_FUN_003cb238(lVar2,param_1 + 9), (int)uVar1 == 0)) ||
       ((lVar2 = FUN_003cb19c(param_2,&DAT_001c7525), lVar2 != 0 &&
        (uVar1 = FUN_003cc060(lVar2,param_1 + 8), (int)uVar1 == 0)))) {
      return uVar1;
    }
  }
  return 1;
}


// ===== 00455bc4  FUN_00455bc4 =====

undefined ** FUN_00455bc4(void)

{
  return &PTR_DAT_00789af0;
}


// ===== 00455bd0  FUN_00455bd0 =====

undefined8 FUN_00455bd0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_003cb140(param_2,&DAT_001f543b);
  if (lVar1 != 0) {
    uVar2 = thunk_FUN_003cc2a4(lVar1,0xffffffffffffffff);
    return uVar2;
  }
  return 0xfffffffe;
}


// ===== 00455c04  FUN_00455c04 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00455c04(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar4 = FUN_0046b880();
  iVar3 = FUN_0043eb70();
  if (iVar3 != 0) {
    puVar5 = (undefined8 *)FUN_003c8474(0x58,"providers/implementations/kdfs/scrypt.c",0x41);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = uVar4;
      uVar2 = _UNK_00200a28;
      uVar1 = _DAT_00200a20;
      uVar4 = _DAT_002002b0;
      puVar5[7] = _UNK_002002b8;
      puVar5[6] = uVar4;
      puVar5[9] = uVar2;
      puVar5[8] = uVar1;
    }
    return puVar5;
  }
  return (undefined8 *)0x0;
}


// ===== 00455c6c  FUN_00455c6c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00455c6c(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar5 = *param_1;
  iVar2 = FUN_0043eb70();
  if (iVar2 == 0) {
    return (undefined8 *)0x0;
  }
  puVar3 = (undefined8 *)FUN_003c8474(0x58,"providers/implementations/kdfs/scrypt.c",0x41);
  uVar1 = _UNK_00200a28;
  uVar8 = _DAT_00200a20;
  uVar7 = _UNK_002002b8;
  uVar6 = _DAT_002002b0;
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  lVar4 = param_1[10];
  *puVar3 = uVar5;
  puVar3[7] = uVar7;
  puVar3[6] = uVar6;
  puVar3[9] = uVar1;
  puVar3[8] = uVar8;
  if ((lVar4 == 0) || (iVar2 = FUN_0039e4f4(), iVar2 != 0)) {
    if (param_1[1] != 0) {
      lVar4 = FUN_003ca2f4(param_1[1],"providers/implementations/kdfs/scrypt.c",0x6d);
      puVar3[1] = lVar4;
      if (lVar4 == 0) goto LAB_00455d48;
    }
    iVar2 = FUN_0043fd80(param_1[4],param_1[5],puVar3 + 4,puVar3 + 5);
    if ((iVar2 != 0) &&
       (iVar2 = FUN_0043fd80(param_1[2],param_1[3],puVar3 + 2,puVar3 + 3), iVar2 != 0)) {
      uVar6 = param_1[7];
      uVar5 = param_1[6];
      uVar8 = param_1[9];
      uVar7 = param_1[8];
      puVar3[10] = param_1[10];
      puVar3[7] = uVar6;
      puVar3[6] = uVar5;
      puVar3[9] = uVar8;
      puVar3[8] = uVar7;
      return puVar3;
    }
  }
LAB_00455d48:
  FUN_003c86b4(puVar3[1],"providers/implementations/kdfs/scrypt.c",0x53);
  FUN_0039d050(puVar3[10]);
  FUN_003c86b4(puVar3[4],"providers/implementations/kdfs/scrypt.c",0x5e);
  FUN_003c893c(puVar3[2],puVar3[3],"providers/implementations/kdfs/scrypt.c",0x5f);
  puVar3[7] = uVar7;
  puVar3[6] = uVar6;
  puVar3[9] = uVar1;
  puVar3[8] = uVar8;
  FUN_003c86b4(puVar3,"providers/implementations/kdfs/scrypt.c",0x56);
  return (undefined8 *)0x0;
}


// ===== 00455dbc  FUN_00455dbc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00455dbc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    FUN_003c86b4(*(undefined8 *)(param_1 + 8),"providers/implementations/kdfs/scrypt.c",0x53);
    FUN_0039d050(*(undefined8 *)(param_1 + 0x50));
    FUN_003c86b4(*(undefined8 *)(param_1 + 0x20),"providers/implementations/kdfs/scrypt.c",0x5e);
    FUN_003c893c(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                 "providers/implementations/kdfs/scrypt.c",0x5f);
    uVar3 = _UNK_00200a28;
    uVar2 = _DAT_00200a20;
    uVar1 = _DAT_002002b0;
    *(undefined8 *)(param_1 + 0x38) = _UNK_002002b8;
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    *(undefined8 *)(param_1 + 0x48) = uVar3;
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    FUN_003c86b4(param_1,"providers/implementations/kdfs/scrypt.c",0x56);
    return;
  }
  return;
}


// ===== 00455e44  FUN_00455e44 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00455e44(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_003c86b4(*(undefined8 *)(param_1 + 0x20),"providers/implementations/kdfs/scrypt.c",0x5e);
  FUN_003c893c(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
               "providers/implementations/kdfs/scrypt.c",0x5f);
  uVar3 = _UNK_00200a28;
  uVar2 = _DAT_00200a20;
  uVar1 = _DAT_002002b0;
  *(undefined8 *)(param_1 + 0x38) = _UNK_002002b8;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  return;
}


// ===== 00455e9c  FUN_00455e9c =====

undefined4 FUN_00455e9c(undefined8 *param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  ulong uVar5;
  ushort uVar6;
  uint3 uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  uint *puVar14;
  ulong uVar15;
  ulong uVar16;
  uint *puVar17;
  long lVar18;
  uint *puVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  uint *puVar29;
  undefined4 uVar30;
  long lVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  undefined2 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  
  iVar9 = FUN_0043eb70();
  if (iVar9 == 0) {
    return 0;
  }
  iVar9 = FUN_004564bc(param_1,param_4);
  if (iVar9 == 0) {
    return 0;
  }
  lVar25 = param_1[2];
  if (lVar25 == 0) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/kdfs/scrypt.c",0xc1,"kdf_scrypt_derive");
    uVar37 = 0x39;
    uVar12 = 0x82;
  }
  else {
    lVar28 = param_1[4];
    if (lVar28 == 0) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/kdfs/scrypt.c",0xc6,"kdf_scrypt_derive");
      uVar37 = 0x39;
      uVar12 = 0x83;
      goto LAB_0045610c;
    }
    lVar10 = param_1[10];
    if (lVar10 == 0) {
      FUN_0039d050();
      lVar10 = FUN_0039e6f4(*param_1,"sha256",param_1[1]);
      param_1[10] = lVar10;
      if (lVar10 == 0) {
        FUN_003c86b4(param_1,"providers/implementations/kdfs/scrypt.c",0xa5);
        FUN_00379868();
        FUN_0037995c("providers/implementations/kdfs/scrypt.c",0xa6,"set_digest");
        uVar37 = 0x39;
        uVar12 = 0x93;
        goto LAB_0045610c;
      }
      lVar25 = param_1[2];
      lVar28 = param_1[4];
    }
    uVar33 = param_1[6];
    if (uVar33 < 2) {
      return 0;
    }
    uVar27 = param_1[7];
    if (uVar27 == 0) {
      return 0;
    }
    uVar35 = param_1[8];
    if (uVar35 == 0) {
      return 0;
    }
    uVar37 = NEON_cnt(uVar33,1);
    uVar36 = NEON_uaddlv(uVar37,1);
    if (1 < (uint)CONCAT62((int6)((ulong)uVar37 >> 0x10),uVar36)) {
      return 0;
    }
    uVar34 = 0;
    if (uVar27 != 0) {
      uVar34 = 0x3fffffff / uVar27;
    }
    if (uVar34 < uVar35) {
      FUN_00379868();
      uVar37 = 0x1cc;
    }
    else {
      uVar37 = *param_1;
      uVar12 = param_1[1];
      uVar22 = param_1[3];
      uVar34 = param_1[5];
      if ((uVar27 * 0x10 < 0x40) && (uVar33 >> (uVar27 * 0x10 & 0x3f) != 0)) {
        FUN_00379868();
        uVar37 = 0x1d7;
      }
      else {
        lVar31 = uVar35 * 0x80;
        uVar24 = lVar31 * uVar27;
        if (uVar24 >> 0x1f == 0) {
          uVar15 = 0;
          if (uVar27 != 0) {
            uVar15 = 0x1ffffffffffffff / uVar27;
          }
          if (uVar15 < uVar33 + 2) {
            FUN_00379868();
            uVar37 = 499;
          }
          else {
            lVar18 = uVar27 * 0x20;
            uVar15 = (uVar33 + 2) * lVar18 * 4;
            if (CARRY8(uVar15,uVar24)) {
              FUN_00379868();
              uVar37 = 0x1fa;
            }
            else {
              uVar15 = uVar24 + uVar15;
              if (uVar15 <= (ulong)param_1[9]) {
                if (param_2 == 0) {
                  return 1;
                }
                lVar11 = FUN_003c83a4(uVar15,"providers/implementations/kdfs/scrypt.c",0x20b);
                if (lVar11 == 0) {
                  return 0;
                }
                iVar9 = FUN_003a583c(lVar25,uVar22,lVar28,uVar34 & 0xffffffff,1,lVar10,
                                     uVar24 & 0xffffffff,lVar11,uVar37,uVar12);
                if (iVar9 != 0) {
                  puVar2 = (uint *)(lVar11 + uVar24);
                  puVar3 = puVar2 + uVar27 * 0x20;
                  puVar4 = puVar3 + uVar27 * 0x20;
                  if (lVar18 == 0) {
                    uVar34 = 0;
                    do {
                      uVar32 = 1;
                      do {
                        FUN_0045685c(puVar4,puVar3,uVar27);
                        uVar32 = uVar32 + 1;
                      } while (uVar33 != uVar32);
                      FUN_0045685c(puVar2,puVar4 + (uVar33 * 0x20 + -0x20) * uVar27,uVar27);
                      uVar32 = uVar33;
                      do {
                        FUN_0045685c(puVar2,puVar3,uVar27);
                        uVar32 = uVar32 - 1;
                      } while (uVar32 != 0);
                      uVar34 = uVar34 + 1;
                    } while (uVar34 != uVar35);
                  }
                  else {
                    lVar26 = uVar27 * 0x80;
                    uVar34 = 0;
                    lVar28 = uVar27 * (lVar31 + 0x80);
                    do {
                      puVar29 = (uint *)(lVar11 + lVar26 * uVar34);
                      lVar13 = lVar18;
                      puVar14 = puVar29;
                      puVar17 = puVar4;
                      lVar20 = lVar11;
                      do {
                        lVar20 = lVar20 + 4;
                        uVar8 = *puVar14;
                        lVar13 = lVar13 + -1;
                        *puVar17 = (uint)(byte)uVar8;
                        uVar6 = CONCAT11(*(undefined1 *)((long)puVar14 + 1),(byte)uVar8);
                        *puVar17 = (uint)uVar6;
                        uVar7 = CONCAT12(*(undefined1 *)((long)puVar14 + 2),uVar6);
                        *puVar17 = (uint)uVar7;
                        puVar1 = (undefined1 *)((long)puVar14 + 3);
                        puVar14 = puVar14 + 1;
                        *puVar17 = CONCAT13(*puVar1,uVar7);
                        puVar17 = puVar17 + 1;
                      } while (lVar13 != 0);
                      uVar32 = 1;
                      do {
                        FUN_0045685c(lVar20 + uVar27 * (lVar31 + 0x100),lVar20 + lVar28,uVar27);
                        uVar32 = uVar32 + 1;
                        lVar20 = lVar20 + lVar26;
                      } while (uVar33 != uVar32);
                      FUN_0045685c(puVar2,puVar4 + (uVar33 * 0x20 + -0x20) * uVar27,uVar27);
                      uVar32 = 0;
                      do {
                        uVar16 = (ulong)puVar3[-0x10];
                        uVar5 = 0;
                        if (uVar33 != 0) {
                          uVar5 = uVar16 / uVar33;
                        }
                        puVar14 = puVar4 + (uVar16 - uVar5 * uVar33) * lVar18;
                        puVar17 = puVar2;
                        puVar19 = puVar3;
                        lVar20 = lVar18;
                        if ((lVar26 == 0) ||
                           (uVar27 * (uVar33 * 0x80 * uVar5 + uVar16 * -0x80 + -0x80) == 0)) {
                          do {
                            lVar20 = lVar20 + -1;
                            *puVar19 = *puVar14 ^ *puVar17;
                            puVar14 = puVar14 + 1;
                            puVar17 = puVar17 + 1;
                            puVar19 = puVar19 + 1;
                          } while (lVar20 != 0);
                        }
                        else {
                          lVar20 = 0;
                          lVar13 = lVar18;
                          puVar21 = (undefined8 *)(lVar28 + lVar11 + 0x10);
                          puVar23 = (undefined8 *)(uVar24 + lVar11 + 0x10);
                          do {
                            puVar17 = puVar14 + lVar20;
                            uVar41 = puVar23[-1];
                            uVar40 = puVar23[-2];
                            uVar43 = puVar23[1];
                            uVar42 = *puVar23;
                            lVar13 = lVar13 + -8;
                            lVar20 = lVar20 + 8;
                            puVar23 = puVar23 + 4;
                            uVar39 = *(undefined8 *)(puVar17 + 2);
                            uVar38 = *(undefined8 *)puVar17;
                            uVar45 = *(undefined8 *)(puVar17 + 6);
                            uVar44 = *(undefined8 *)(puVar17 + 4);
                            puVar21[-1] = CONCAT17((byte)((ulong)uVar39 >> 0x38) ^
                                                   (byte)((ulong)uVar41 >> 0x38),
                                                   CONCAT16((byte)((ulong)uVar39 >> 0x30) ^
                                                            (byte)((ulong)uVar41 >> 0x30),
                                                            CONCAT15((byte)((ulong)uVar39 >> 0x28) ^
                                                                     (byte)((ulong)uVar41 >> 0x28),
                                                                     CONCAT14((byte)((ulong)uVar39
                                                                                    >> 0x20) ^
                                                                              (byte)((ulong)uVar41
                                                                                    >> 0x20),
                                                                              CONCAT13((byte)((ulong
                                                  )uVar39 >> 0x18) ^ (byte)((ulong)uVar41 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar39 >> 0x10) ^
                                                           (byte)((ulong)uVar41 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar39 >> 8) ^
                                                                    (byte)((ulong)uVar41 >> 8),
                                                                    (byte)uVar39 ^ (byte)uVar41)))))
                                                  ));
                            puVar21[-2] = CONCAT17((byte)((ulong)uVar38 >> 0x38) ^
                                                   (byte)((ulong)uVar40 >> 0x38),
                                                   CONCAT16((byte)((ulong)uVar38 >> 0x30) ^
                                                            (byte)((ulong)uVar40 >> 0x30),
                                                            CONCAT15((byte)((ulong)uVar38 >> 0x28) ^
                                                                     (byte)((ulong)uVar40 >> 0x28),
                                                                     CONCAT14((byte)((ulong)uVar38
                                                                                    >> 0x20) ^
                                                                              (byte)((ulong)uVar40
                                                                                    >> 0x20),
                                                                              CONCAT13((byte)((ulong
                                                  )uVar38 >> 0x18) ^ (byte)((ulong)uVar40 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar38 >> 0x10) ^
                                                           (byte)((ulong)uVar40 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar38 >> 8) ^
                                                                    (byte)((ulong)uVar40 >> 8),
                                                                    (byte)uVar38 ^ (byte)uVar40)))))
                                                  ));
                            puVar21[1] = CONCAT17((byte)((ulong)uVar45 >> 0x38) ^
                                                  (byte)((ulong)uVar43 >> 0x38),
                                                  CONCAT16((byte)((ulong)uVar45 >> 0x30) ^
                                                           (byte)((ulong)uVar43 >> 0x30),
                                                           CONCAT15((byte)((ulong)uVar45 >> 0x28) ^
                                                                    (byte)((ulong)uVar43 >> 0x28),
                                                                    CONCAT14((byte)((ulong)uVar45 >>
                                                                                   0x20) ^
                                                                             (byte)((ulong)uVar43 >>
                                                                                   0x20),
                                                                             CONCAT13((byte)((ulong)
                                                  uVar45 >> 0x18) ^ (byte)((ulong)uVar43 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar45 >> 0x10) ^
                                                           (byte)((ulong)uVar43 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar45 >> 8) ^
                                                                    (byte)((ulong)uVar43 >> 8),
                                                                    (byte)uVar45 ^ (byte)uVar43)))))
                                                  ));
                            *puVar21 = CONCAT17((byte)((ulong)uVar44 >> 0x38) ^
                                                (byte)((ulong)uVar42 >> 0x38),
                                                CONCAT16((byte)((ulong)uVar44 >> 0x30) ^
                                                         (byte)((ulong)uVar42 >> 0x30),
                                                         CONCAT15((byte)((ulong)uVar44 >> 0x28) ^
                                                                  (byte)((ulong)uVar42 >> 0x28),
                                                                  CONCAT14((byte)((ulong)uVar44 >>
                                                                                 0x20) ^
                                                                           (byte)((ulong)uVar42 >>
                                                                                 0x20),
                                                                           CONCAT13((byte)((ulong)
                                                  uVar44 >> 0x18) ^ (byte)((ulong)uVar42 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar44 >> 0x10) ^
                                                           (byte)((ulong)uVar42 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar44 >> 8) ^
                                                                    (byte)((ulong)uVar42 >> 8),
                                                                    (byte)uVar44 ^ (byte)uVar42)))))
                                                  ));
                            puVar21 = puVar21 + 4;
                          } while (lVar13 != 0);
                        }
                        FUN_0045685c(puVar2,puVar3,uVar27);
                        uVar32 = uVar32 + 1;
                        puVar14 = puVar2;
                        lVar20 = lVar18;
                      } while (uVar32 != uVar33);
                      do {
                        lVar20 = lVar20 + -1;
                        *puVar29 = *puVar14;
                        puVar14 = puVar14 + 1;
                        puVar29 = puVar29 + 1;
                      } while (lVar20 != 0);
                      uVar34 = uVar34 + 1;
                    } while (uVar34 != uVar35);
                  }
                  uVar30 = 1;
                  iVar9 = FUN_003a583c(lVar25,uVar22,lVar11,uVar24,1,lVar10,param_3,param_2,uVar37,
                                       uVar12);
                  if (iVar9 != 0) goto LAB_00456494;
                }
                FUN_00379868();
                FUN_0037995c("providers/implementations/kdfs/scrypt.c",0x21e,"scrypt_alg");
                FUN_00379a5c(6,0xb5,0);
                uVar30 = 0;
LAB_00456494:
                FUN_003c893c(lVar11,uVar15,"providers/implementations/kdfs/scrypt.c",0x220);
                return uVar30;
              }
              FUN_00379868();
              uVar37 = 0x203;
            }
          }
        }
        else {
          FUN_00379868();
          uVar37 = 0x1e9;
        }
      }
    }
    FUN_0037995c("providers/implementations/kdfs/scrypt.c",uVar37,"scrypt_alg");
    uVar37 = 6;
    uVar12 = 0xac;
  }
LAB_0045610c:
  FUN_00379a5c(uVar37,uVar12,0);
  return 0;
}


// ===== 004564b0  FUN_004564b0 =====

undefined ** FUN_004564b0(void)

{
  return &PTR_DAT_00789be0;
}


// ===== 004564bc  FUN_004564bc =====

undefined8 FUN_004564bc(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined2 uVar6;
  ulong local_28;
  
  if (param_2 == 0) {
    return 1;
  }
  lVar2 = FUN_003cb19c(param_2,&DAT_001e0907);
  if (lVar2 != 0) {
    plVar4 = (long *)(param_1 + 0x10);
    puVar5 = (undefined8 *)(param_1 + 0x18);
    FUN_003c893c(*plVar4,*puVar5,"providers/implementations/kdfs/scrypt.c",0x92);
    *puVar5 = 0;
    *plVar4 = 0;
    if (*(long *)(lVar2 + 0x18) == 0) {
      lVar2 = FUN_003c83a4(1,"providers/implementations/kdfs/scrypt.c",0x97);
      *plVar4 = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
    }
    else if ((*(long *)(lVar2 + 0x10) != 0) &&
            (uVar3 = FUN_003cd608(lVar2,plVar4,0,puVar5), (int)uVar3 == 0)) {
      return uVar3;
    }
  }
  lVar2 = FUN_003cb19c(param_2,&DAT_001c2fe1);
  if (lVar2 != 0) {
    plVar4 = (long *)(param_1 + 0x20);
    puVar5 = (undefined8 *)(param_1 + 0x28);
    FUN_003c893c(*plVar4,*puVar5,"providers/implementations/kdfs/scrypt.c",0x92);
    *puVar5 = 0;
    *plVar4 = 0;
    if (*(long *)(lVar2 + 0x18) == 0) {
      lVar2 = FUN_003c83a4(1,"providers/implementations/kdfs/scrypt.c",0x97);
      *plVar4 = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
    }
    else if ((*(long *)(lVar2 + 0x10) != 0) &&
            (uVar3 = FUN_003cd608(lVar2,plVar4,0,puVar5), (int)uVar3 == 0)) {
      return uVar3;
    }
  }
  lVar2 = FUN_003cb19c(param_2,&DAT_001c0e15);
  if (lVar2 != 0) {
    iVar1 = FUN_003cc060(lVar2,&local_28);
    if (iVar1 == 0) {
      return 0;
    }
    if (local_28 < 2) {
      return 0;
    }
    uVar3 = NEON_cnt(local_28,1);
    uVar6 = NEON_uaddlv(uVar3,1);
    if (1 < (CONCAT62((int6)((ulong)uVar3 >> 0x10),uVar6) & 0xffffffff)) {
      return 0;
    }
    *(ulong *)(param_1 + 0x30) = local_28;
  }
  lVar2 = FUN_003cb19c(param_2,&DAT_001e6b9d);
  if (lVar2 != 0) {
    iVar1 = FUN_003cc060(lVar2,&local_28);
    if (iVar1 == 0) {
      return 0;
    }
    if (local_28 == 0) {
      return 0;
    }
    *(ulong *)(param_1 + 0x38) = local_28;
  }
  lVar2 = FUN_003cb19c(param_2,&DAT_001be7f0);
  if (lVar2 != 0) {
    iVar1 = FUN_003cc060(lVar2,&local_28);
    if (iVar1 == 0) {
      return 0;
    }
    if (local_28 == 0) {
      return 0;
    }
    *(ulong *)(param_1 + 0x40) = local_28;
  }
  lVar2 = FUN_003cb19c(param_2,"maxmem_bytes");
  if (lVar2 != 0) {
    iVar1 = FUN_003cc060(lVar2,&local_28);
    if (iVar1 == 0) {
      return 0;
    }
    if (local_28 == 0) {
      return 0;
    }
    *(ulong *)(param_1 + 0x48) = local_28;
  }
  lVar2 = FUN_003cb19c(param_2,"properties");
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 8) != 4) {
      return 0;
    }
    lVar2 = *(long *)(lVar2 + 0x10);
    FUN_003c86b4(*(undefined8 *)(param_1 + 8),"providers/implementations/kdfs/scrypt.c",0xae);
    *(undefined8 *)(param_1 + 8) = 0;
    if (lVar2 != 0) {
      lVar2 = FUN_003ca2f4(lVar2,"providers/implementations/kdfs/scrypt.c",0xb1);
      *(long *)(param_1 + 8) = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
    }
    uVar3 = FUN_004567c8(param_1);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
  }
  return 1;
}


// ===== 00456788  FUN_00456788 =====

undefined ** FUN_00456788(void)

{
  return &PTR_DAT_00789d20;
}


// ===== 00456794  FUN_00456794 =====

undefined8 FUN_00456794(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_003cb140(param_2,&DAT_001f543b);
  if (lVar1 != 0) {
    uVar2 = thunk_FUN_003cc2a4(lVar1,0xffffffffffffffff);
    return uVar2;
  }
  return 0xfffffffe;
}


// ===== 004567c8  FUN_004567c8 =====

undefined8 FUN_004567c8(undefined8 *param_1)

{
  long lVar1;
  
  FUN_0039d050(param_1[10]);
  lVar1 = FUN_0039e6f4(*param_1,"sha256",param_1[1]);
  param_1[10] = lVar1;
  if (lVar1 != 0) {
    return 1;
  }
  FUN_003c86b4(0,param_1,"providers/implementations/kdfs/scrypt.c",0xa5);
  FUN_00379868();
  FUN_0037995c("providers/implementations/kdfs/scrypt.c",0xa6,"set_digest");
  FUN_00379a5c(0x39,0x93,0);
  return 0;
}


// ===== 0045685c  FUN_0045685c =====

void FUN_0045685c(long param_1,undefined8 *param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
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
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  uint uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  int iVar32;
  undefined8 uVar34;
  undefined8 uVar35;
  uint uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  uint uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  uint uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  uint uVar45;
  undefined8 uVar46;
  int iVar47;
  undefined8 uVar49;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint local_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint7 uVar33;
  uint7 uVar48;
  
  uVar29 = param_2[param_3 * 0x10 + -7];
  uVar25 = param_2[param_3 * 0x10 + -8];
  uVar37 = param_2[param_3 * 0x10 + -5];
  uVar34 = param_2[param_3 * 0x10 + -6];
  uVar30 = param_2[param_3 * 0x10 + -3];
  uVar26 = param_2[param_3 * 0x10 + -4];
  uVar43 = param_2[param_3 * 0x10 + -1];
  uVar40 = param_2[param_3 * 0x10 + -2];
  local_c0 = uVar25;
  uStack_b8 = uVar29;
  uStack_b0 = uVar34;
  uStack_a8 = uVar37;
  local_a0 = uVar26;
  uStack_98 = uVar30;
  uStack_90 = uVar40;
  uStack_88 = uVar43;
  if (param_3 * 2 != 0) {
    uVar23 = 0;
    do {
      uVar31 = param_2[1];
      uVar27 = *param_2;
      uVar38 = param_2[3];
      uVar35 = param_2[2];
      uVar16 = 10;
      uVar24 = CONCAT13((byte)((ulong)uVar25 >> 0x18) ^ (byte)((ulong)uVar27 >> 0x18),
                        CONCAT12((byte)((ulong)uVar25 >> 0x10) ^ (byte)((ulong)uVar27 >> 0x10),
                                 CONCAT11((byte)((ulong)uVar25 >> 8) ^ (byte)((ulong)uVar27 >> 8),
                                          (byte)uVar25 ^ (byte)uVar27)));
      uVar28 = CONCAT13((byte)((ulong)uVar29 >> 0x18) ^ (byte)((ulong)uVar31 >> 0x18),
                        CONCAT12((byte)((ulong)uVar29 >> 0x10) ^ (byte)((ulong)uVar31 >> 0x10),
                                 CONCAT11((byte)((ulong)uVar29 >> 8) ^ (byte)((ulong)uVar31 >> 8),
                                          (byte)uVar29 ^ (byte)uVar31)));
      iVar32 = CONCAT13((byte)((ulong)uVar34 >> 0x18) ^ (byte)((ulong)uVar35 >> 0x18),
                        CONCAT12((byte)((ulong)uVar34 >> 0x10) ^ (byte)((ulong)uVar35 >> 0x10),
                                 CONCAT11((byte)((ulong)uVar34 >> 8) ^ (byte)((ulong)uVar35 >> 8),
                                          (byte)uVar34 ^ (byte)uVar35)));
      uVar33 = CONCAT16((byte)((ulong)uVar34 >> 0x30) ^ (byte)((ulong)uVar35 >> 0x30),
                        CONCAT15((byte)((ulong)uVar34 >> 0x28) ^ (byte)((ulong)uVar35 >> 0x28),
                                 CONCAT14((byte)((ulong)uVar34 >> 0x20) ^
                                          (byte)((ulong)uVar35 >> 0x20),iVar32)));
      uVar36 = CONCAT13((byte)((ulong)uVar37 >> 0x18) ^ (byte)((ulong)uVar38 >> 0x18),
                        CONCAT12((byte)((ulong)uVar37 >> 0x10) ^ (byte)((ulong)uVar38 >> 0x10),
                                 CONCAT11((byte)((ulong)uVar37 >> 8) ^ (byte)((ulong)uVar38 >> 8),
                                          (byte)uVar37 ^ (byte)uVar38)));
      uVar44 = param_2[5];
      uVar41 = param_2[4];
      uVar49 = param_2[7];
      uVar46 = param_2[6];
      uVar39 = CONCAT13((byte)((ulong)uVar26 >> 0x18) ^ (byte)((ulong)uVar41 >> 0x18),
                        CONCAT12((byte)((ulong)uVar26 >> 0x10) ^ (byte)((ulong)uVar41 >> 0x10),
                                 CONCAT11((byte)((ulong)uVar26 >> 8) ^ (byte)((ulong)uVar41 >> 8),
                                          (byte)uVar26 ^ (byte)uVar41)));
      uVar42 = CONCAT13((byte)((ulong)uVar30 >> 0x18) ^ (byte)((ulong)uVar44 >> 0x18),
                        CONCAT12((byte)((ulong)uVar30 >> 0x10) ^ (byte)((ulong)uVar44 >> 0x10),
                                 CONCAT11((byte)((ulong)uVar30 >> 8) ^ (byte)((ulong)uVar44 >> 8),
                                          (byte)uVar30 ^ (byte)uVar44)));
      uVar45 = CONCAT13((byte)((ulong)uVar40 >> 0x18) ^ (byte)((ulong)uVar46 >> 0x18),
                        CONCAT12((byte)((ulong)uVar40 >> 0x10) ^ (byte)((ulong)uVar46 >> 0x10),
                                 CONCAT11((byte)((ulong)uVar40 >> 8) ^ (byte)((ulong)uVar46 >> 8),
                                          (byte)uVar40 ^ (byte)uVar46)));
      iVar47 = CONCAT13((byte)((ulong)uVar43 >> 0x18) ^ (byte)((ulong)uVar49 >> 0x18),
                        CONCAT12((byte)((ulong)uVar43 >> 0x10) ^ (byte)((ulong)uVar49 >> 0x10),
                                 CONCAT11((byte)((ulong)uVar43 >> 8) ^ (byte)((ulong)uVar49 >> 8),
                                          (byte)uVar43 ^ (byte)uVar49)));
      uVar48 = CONCAT16((byte)((ulong)uVar43 >> 0x30) ^ (byte)((ulong)uVar49 >> 0x30),
                        CONCAT15((byte)((ulong)uVar43 >> 0x28) ^ (byte)((ulong)uVar49 >> 0x28),
                                 CONCAT14((byte)((ulong)uVar43 >> 0x20) ^
                                          (byte)((ulong)uVar49 >> 0x20),iVar47)));
      uVar17 = (ulong)uVar33 & 0xffffffff;
      uStack_6c = (uint)(CONCAT17((byte)((ulong)uVar34 >> 0x38) ^ (byte)((ulong)uVar35 >> 0x38),
                                  uVar33) >> 0x20);
      uVar8 = uStack_6c;
      uStack_7c = (uint)(CONCAT17((byte)((ulong)uVar25 >> 0x38) ^ (byte)((ulong)uVar27 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar25 >> 0x30) ^
                                           (byte)((ulong)uVar27 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar25 >> 0x28) ^
                                                    (byte)((ulong)uVar27 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar25 >> 0x20) ^
                                                             (byte)((ulong)uVar27 >> 0x20),uVar24)))
                                 ) >> 0x20);
      uVar6 = uStack_7c;
      uStack_5c = (uint)(CONCAT17((byte)((ulong)uVar26 >> 0x38) ^ (byte)((ulong)uVar41 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar26 >> 0x30) ^
                                           (byte)((ulong)uVar41 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar26 >> 0x28) ^
                                                    (byte)((ulong)uVar41 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar26 >> 0x20) ^
                                                             (byte)((ulong)uVar41 >> 0x20),uVar39)))
                                 ) >> 0x20);
      uVar10 = uStack_5c;
      uStack_4c = (uint)(CONCAT17((byte)((ulong)uVar40 >> 0x38) ^ (byte)((ulong)uVar46 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar40 >> 0x30) ^
                                           (byte)((ulong)uVar46 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar40 >> 0x28) ^
                                                    (byte)((ulong)uVar46 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar40 >> 0x20) ^
                                                             (byte)((ulong)uVar46 >> 0x20),uVar45)))
                                 ) >> 0x20);
      uVar12 = uStack_4c;
      uVar15 = (ulong)uVar48 & 0xffffffff;
      uStack_44 = (uint)(CONCAT17((byte)((ulong)uVar43 >> 0x38) ^ (byte)((ulong)uVar49 >> 0x38),
                                  uVar48) >> 0x20);
      uVar13 = uStack_44;
      uStack_54 = (uint)(CONCAT17((byte)((ulong)uVar30 >> 0x38) ^ (byte)((ulong)uVar44 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar30 >> 0x30) ^
                                           (byte)((ulong)uVar44 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar30 >> 0x28) ^
                                                    (byte)((ulong)uVar44 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar30 >> 0x20) ^
                                                             (byte)((ulong)uVar44 >> 0x20),uVar42)))
                                 ) >> 0x20);
      uVar11 = uStack_54;
      uStack_74 = (uint)(CONCAT17((byte)((ulong)uVar29 >> 0x38) ^ (byte)((ulong)uVar31 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar29 >> 0x30) ^
                                           (byte)((ulong)uVar31 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar29 >> 0x28) ^
                                                    (byte)((ulong)uVar31 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar29 >> 0x20) ^
                                                             (byte)((ulong)uVar31 >> 0x20),uVar28)))
                                 ) >> 0x20);
      uVar7 = uStack_74;
      uStack_64 = (uint)(CONCAT17((byte)((ulong)uVar37 >> 0x38) ^ (byte)((ulong)uVar38 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar37 >> 0x30) ^
                                           (byte)((ulong)uVar38 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar37 >> 0x28) ^
                                                    (byte)((ulong)uVar38 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar37 >> 0x20) ^
                                                             (byte)((ulong)uVar38 >> 0x20),uVar36)))
                                 ) >> 0x20);
      uVar9 = uStack_64;
      uVar22 = uVar24;
      uVar21 = uVar39;
      uVar19 = uVar45;
      uVar14 = uVar42;
      uVar20 = uVar28;
      uVar18 = uVar36;
      do {
        uVar16 = uVar16 - 2;
        uVar4 = (uint)uVar17 ^ (uVar19 + uVar22 >> 0x19 | (uVar19 + uVar22) * 0x80);
        uStack_5c = uStack_5c ^ (uStack_7c + uStack_6c >> 0x19 | (uStack_7c + uStack_6c) * 0x80);
        uVar5 = (uint)uVar15 ^ (uVar18 + uVar14 >> 0x19 | (uVar18 + uVar14) * 0x80);
        uStack_74 = uStack_74 ^ (uStack_54 + uStack_44 >> 0x19 | (uStack_54 + uStack_44) * 0x80);
        uVar21 = uVar21 ^ (uVar4 + uVar22 >> 0x17 | (uVar4 + uVar22) * 0x200);
        uStack_4c = uStack_4c ^ (uStack_5c + uStack_6c >> 0x17 | (uStack_5c + uStack_6c) * 0x200);
        uVar20 = uVar20 ^ (uVar5 + uVar14 >> 0x17 | (uVar5 + uVar14) * 0x200);
        uStack_64 = uStack_64 ^ (uStack_74 + uStack_44 >> 0x17 | (uStack_74 + uStack_44) * 0x200);
        uVar19 = uVar19 ^ (uVar21 + uVar4 >> 0x13 | (uVar21 + uVar4) * 0x2000);
        uStack_7c = uStack_7c ^ (uStack_4c + uStack_5c >> 0x13 | (uStack_4c + uStack_5c) * 0x2000);
        uVar18 = uVar18 ^ (uVar20 + uVar5 >> 0x13 | (uVar20 + uVar5) * 0x2000);
        uStack_54 = uStack_54 ^ (uStack_64 + uStack_74 >> 0x13 | (uStack_64 + uStack_74) * 0x2000);
        uVar1 = uVar19 + uVar21;
        uVar2 = uStack_7c + uStack_4c;
        uVar22 = uVar22 ^ (uVar1 >> 0xe | uVar1 * 0x40000);
        uVar1 = uVar18 + uVar20;
        uStack_6c = uStack_6c ^ (uVar2 >> 0xe | uVar2 * 0x40000);
        uVar2 = uStack_54 + uStack_64;
        uVar14 = uVar14 ^ (uVar1 >> 0xe | uVar1 * 0x40000);
        uStack_44 = uStack_44 ^ (uVar2 >> 0xe | uVar2 * 0x40000);
        uStack_7c = uStack_7c ^ (uStack_74 + uVar22 >> 0x19 | (uStack_74 + uVar22) * 0x80);
        uVar18 = uVar18 ^ (uStack_6c + uVar4 >> 0x19 | (uStack_6c + uVar4) * 0x80);
        uStack_54 = uStack_54 ^ (uVar14 + uStack_5c >> 0x19 | (uVar14 + uStack_5c) * 0x80);
        uVar19 = uVar19 ^ (uStack_44 + uVar5 >> 0x19 | (uStack_44 + uVar5) * 0x80);
        uVar20 = uVar20 ^ (uStack_7c + uVar22 >> 0x17 | (uStack_7c + uVar22) * 0x200);
        uStack_64 = uStack_64 ^ (uVar18 + uStack_6c >> 0x17 | (uVar18 + uStack_6c) * 0x200);
        uVar21 = uVar21 ^ (uStack_54 + uVar14 >> 0x17 | (uStack_54 + uVar14) * 0x200);
        uStack_4c = uStack_4c ^ (uVar19 + uStack_44 >> 0x17 | (uVar19 + uStack_44) * 0x200);
        uStack_74 = uStack_74 ^ (uVar20 + uStack_7c >> 0x13 | (uVar20 + uStack_7c) * 0x2000);
        uVar4 = uVar4 ^ (uStack_64 + uVar18 >> 0x13 | (uStack_64 + uVar18) * 0x2000);
        uVar17 = (ulong)uVar4;
        uStack_5c = uStack_5c ^ (uVar21 + uStack_54 >> 0x13 | (uVar21 + uStack_54) * 0x2000);
        uVar5 = uVar5 ^ (uStack_4c + uVar19 >> 0x13 | (uStack_4c + uVar19) * 0x2000);
        uVar15 = (ulong)uVar5;
        uVar22 = uVar22 ^ (uStack_74 + uVar20 >> 0xe | (uStack_74 + uVar20) * 0x40000);
        uStack_6c = uStack_6c ^ (uVar4 + uStack_64 >> 0xe | (uVar4 + uStack_64) * 0x40000);
        uVar14 = uVar14 ^ (uStack_5c + uVar21 >> 0xe | (uStack_5c + uVar21) * 0x40000);
        uStack_44 = uStack_44 ^ (uVar5 + uStack_4c >> 0xe | (uVar5 + uStack_4c) * 0x40000);
      } while (2 < uVar16);
      _uStack_58 = CONCAT44(uStack_54,uVar14);
      _uStack_78 = CONCAT44(uStack_74,uVar20);
      _local_70 = CONCAT44(uStack_6c,uVar4);
      _local_80 = CONCAT44(uStack_7c,uVar22);
      _local_60 = CONCAT44(uStack_5c,uVar21);
      _local_50 = CONCAT44(uStack_4c,uVar19);
      param_2 = param_2 + 8;
      _local_48 = CONCAT44(uStack_44,uVar5);
      _local_68 = CONCAT44(uStack_64,uVar18);
      uVar25 = CONCAT44(uVar6 + uStack_7c,uVar24 + uVar22);
      uVar29 = CONCAT44(uVar7 + uStack_74,uVar28 + uVar20);
      uVar34 = CONCAT44(uVar8 + uStack_6c,iVar32 + uVar4);
      uVar37 = CONCAT44(uVar9 + uStack_64,uVar36 + uVar18);
      uVar26 = CONCAT44(uVar10 + uStack_5c,uVar39 + uVar21);
      uVar30 = CONCAT44(uVar11 + uStack_54,uVar42 + uVar14);
      uVar40 = CONCAT44(uVar12 + uStack_4c,uVar45 + uVar19);
      uVar43 = CONCAT44(uVar13 + uStack_44,iVar47 + uVar5);
      local_c0 = uVar25;
      uStack_b8 = uVar29;
      uStack_b0 = uVar34;
      uStack_a8 = uVar37;
      local_a0 = uVar26;
      uStack_98 = uVar30;
      uStack_90 = uVar40;
      uStack_88 = uVar43;
      FUN_003c89b8(&local_80,0x40);
      uVar15 = uVar23 & 1;
      uVar17 = uVar23 >> 1;
      uVar23 = uVar23 + 1;
      puVar3 = (undefined8 *)(param_1 + ((-uVar15 & param_3) + uVar17) * 0x40);
      puVar3[1] = uStack_b8;
      *puVar3 = local_c0;
      puVar3[3] = uStack_a8;
      puVar3[2] = uStack_b0;
      puVar3[5] = uStack_98;
      puVar3[4] = local_a0;
      puVar3[7] = uStack_88;
      puVar3[6] = uStack_90;
    } while (uVar23 != param_3 * 2);
  }
  FUN_003c89b8(&local_c0,0x40);
  return;
}


// ===== 00456af8  FUN_00456af8 =====

undefined8 * FUN_00456af8(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)FUN_003c8474(0x58,"providers/implementations/kdfs/sshkdf.c",0x3d);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_1;
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}


// ===== 00456b48  FUN_00456b48 =====

undefined8 * FUN_00456b48(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar5 = *param_1;
  iVar3 = FUN_0043eb70();
  if (iVar3 == 0) {
    return (undefined8 *)0x0;
  }
  puVar4 = (undefined8 *)FUN_003c8474(0x58,"providers/implementations/kdfs/sshkdf.c",0x3d);
  if (puVar4 != (undefined8 *)0x0) {
    uVar1 = param_1[4];
    uVar2 = param_1[5];
    *puVar4 = uVar5;
    iVar3 = FUN_0043fd80(uVar1,uVar2,puVar4 + 4,puVar4 + 5);
    if ((((iVar3 == 0) ||
         (iVar3 = FUN_0043fd80(param_1[6],param_1[7],puVar4 + 6,puVar4 + 7), iVar3 == 0)) ||
        (iVar3 = FUN_0043fd80(param_1[9],param_1[10],puVar4 + 9,puVar4 + 10), iVar3 == 0)) ||
       (iVar3 = FUN_0043f72c(puVar4 + 1,param_1 + 1), iVar3 == 0)) {
      uVar5 = *puVar4;
      FUN_0043f700(puVar4 + 1);
      FUN_003c893c(puVar4[4],puVar4[5],"providers/implementations/kdfs/sshkdf.c",0x52);
      FUN_003c893c(puVar4[6],puVar4[7],"providers/implementations/kdfs/sshkdf.c",0x53);
      FUN_003c893c(puVar4[9],puVar4[10],"providers/implementations/kdfs/sshkdf.c",0x54);
      *puVar4 = uVar5;
      puVar4[10] = 0;
      puVar4[9] = 0;
      puVar4[8] = 0;
      puVar4[7] = 0;
      puVar4[6] = 0;
      puVar4[5] = 0;
      puVar4[4] = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      puVar4[1] = 0;
      FUN_003c86b4(puVar4,"providers/implementations/kdfs/sshkdf.c",0x48);
      return (undefined8 *)0x0;
    }
    *(undefined1 *)(puVar4 + 8) = *(undefined1 *)(param_1 + 8);
  }
  return puVar4;
}


// ===== 00456c78  FUN_00456c78 =====

void FUN_00456c78(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *param_1;
    FUN_0043f700(param_1 + 1);
    FUN_003c893c(param_1[4],param_1[5],"providers/implementations/kdfs/sshkdf.c",0x52);
    FUN_003c893c(param_1[6],param_1[7],"providers/implementations/kdfs/sshkdf.c",0x53);
    FUN_003c893c(param_1[9],param_1[10],"providers/implementations/kdfs/sshkdf.c",0x54);
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = uVar1;
    FUN_003c86b4(param_1,"providers/implementations/kdfs/sshkdf.c",0x48);
    return;
  }
  return;
}


// ===== 00456d10  FUN_00456d10 =====

void FUN_00456d10(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_0043f700(param_1 + 1);
  FUN_003c893c(param_1[4],param_1[5],"providers/implementations/kdfs/sshkdf.c",0x52);
  FUN_003c893c(param_1[6],param_1[7],"providers/implementations/kdfs/sshkdf.c",0x53);
  FUN_003c893c(param_1[9],param_1[10],"providers/implementations/kdfs/sshkdf.c",0x54);
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = uVar1;
  return;
}


// ===== 00456d90  FUN_00456d90 =====

undefined8 FUN_00456d90(long param_1,void *param_2,size_t param_3,undefined8 param_4)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong __n;
  undefined8 uVar10;
  uint local_a8;
  undefined1 auStack_a4 [64];
  char local_64 [4];
  
  uVar3 = FUN_0043eb70();
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  uVar3 = FUN_0045709c(param_1,param_4);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  lVar4 = FUN_0043f900(param_1 + 8);
  if (lVar4 == 0) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/kdfs/sshkdf.c",0x85,"kdf_sshkdf_derive");
    uVar3 = 0x81;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x20);
    if (lVar6 == 0) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/kdfs/sshkdf.c",0x89,"kdf_sshkdf_derive");
      uVar3 = 0x80;
    }
    else {
      lVar7 = *(long *)(param_1 + 0x30);
      if (lVar7 == 0) {
        FUN_00379868();
        FUN_0037995c("providers/implementations/kdfs/sshkdf.c",0x8d,"kdf_sshkdf_derive");
        uVar3 = 0x87;
      }
      else {
        lVar9 = *(long *)(param_1 + 0x48);
        if (lVar9 == 0) {
          FUN_00379868();
          FUN_0037995c("providers/implementations/kdfs/sshkdf.c",0x91,"kdf_sshkdf_derive");
          uVar3 = 0x85;
        }
        else {
          local_64[0] = *(char *)(param_1 + 0x40);
          if (local_64[0] != '\0') {
            uVar3 = *(undefined8 *)(param_1 + 0x28);
            uVar8 = *(undefined8 *)(param_1 + 0x38);
            uVar10 = *(undefined8 *)(param_1 + 0x50);
            local_a8 = 0;
            lVar5 = FUN_0039d270();
            if (lVar5 == 0) {
              return 0;
            }
            iVar2 = FUN_0039d92c(lVar5,lVar4,0);
            if (((((iVar2 == 0) || (iVar2 = FUN_0039d938(lVar5,lVar6,uVar3), iVar2 == 0)) ||
                 (iVar2 = FUN_0039d938(lVar5,lVar7,uVar8), iVar2 == 0)) ||
                ((iVar2 = FUN_0039d938(lVar5,local_64,1), iVar2 == 0 ||
                 (iVar2 = FUN_0039d938(lVar5,lVar9,uVar10), iVar2 == 0)))) ||
               (iVar2 = FUN_0039dac8(lVar5,auStack_a4,&local_a8), iVar2 == 0)) {
LAB_00457054:
              uVar10 = 0;
            }
            else {
              __n = (ulong)local_a8;
              if (param_3 < __n) {
LAB_00456eb4:
                memcpy(param_2,auStack_a4,param_3);
              }
              else {
                memcpy(param_2,auStack_a4,__n);
                if (__n < param_3) {
                  do {
                    iVar2 = FUN_0039d92c(lVar5,lVar4,0);
                    if (((iVar2 == 0) || (iVar2 = FUN_0039d938(lVar5,lVar6,uVar3), iVar2 == 0)) ||
                       ((iVar2 = FUN_0039d938(lVar5,lVar7,uVar8), iVar2 == 0 ||
                        ((iVar2 = FUN_0039d938(lVar5,param_2,__n), iVar2 == 0 ||
                         (iVar2 = FUN_0039dac8(lVar5,auStack_a4,&local_a8), iVar2 == 0))))))
                    goto LAB_00457054;
                    uVar1 = __n + local_a8;
                    if (param_3 < uVar1) {
                      param_3 = param_3 - __n;
                      param_2 = (void *)((long)param_2 + __n);
                      goto LAB_00456eb4;
                    }
                    memcpy((void *)((long)param_2 + __n),auStack_a4,(ulong)local_a8);
                    uVar10 = 1;
                    __n = uVar1;
                  } while (uVar1 < param_3);
                  goto LAB_00457058;
                }
              }
              uVar10 = 1;
            }
LAB_00457058:
            FUN_0039d284(uVar10,lVar5);
            FUN_003c89b8(auStack_a4,0x40);
            return uVar10;
          }
          FUN_00379868();
          FUN_0037995c("providers/implementations/kdfs/sshkdf.c",0x95,"kdf_sshkdf_derive");
          uVar3 = 0x86;
        }
      }
    }
  }
  FUN_00379a5c(0x39,uVar3,0);
  return 0;
}


// ===== 00457090  FUN_00457090 =====

undefined ** FUN_00457090(void)

{
  return &PTR_s_properties_00789e10;
}


// ===== 0045709c  FUN_0045709c =====

undefined8 FUN_0045709c(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte *local_28;
  
  uVar2 = FUN_0046b880(*param_1);
  if (param_2 == 0) {
    return 1;
  }
  uVar2 = FUN_0043f7c4(param_1 + 1,param_2,uVar2);
  if ((int)uVar2 != 0) {
    lVar3 = FUN_003cb19c(param_2,&DAT_001e2b47);
    if (lVar3 != 0) {
      puVar4 = param_1 + 4;
      puVar5 = param_1 + 5;
      FUN_003c893c(*puVar4,*puVar5,"providers/implementations/kdfs/sshkdf.c",0x74);
      *puVar5 = 0;
      *puVar4 = 0;
      uVar2 = FUN_003cd608(lVar3,puVar4,0,puVar5);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
    }
    lVar3 = FUN_003cb19c(param_2,"xcghash");
    if (lVar3 != 0) {
      puVar4 = param_1 + 6;
      puVar5 = param_1 + 7;
      FUN_003c893c(*puVar4,*puVar5,"providers/implementations/kdfs/sshkdf.c",0x74);
      *puVar5 = 0;
      *puVar4 = 0;
      uVar2 = FUN_003cd608(lVar3,puVar4,0,puVar5);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
    }
    lVar3 = FUN_003cb19c(param_2,"session_id");
    if (lVar3 != 0) {
      puVar4 = param_1 + 9;
      puVar5 = param_1 + 10;
      FUN_003c893c(*puVar4,*puVar5,"providers/implementations/kdfs/sshkdf.c",0x74);
      *puVar5 = 0;
      *puVar4 = 0;
      uVar2 = FUN_003cd608(lVar3,puVar4,0,puVar5);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
    }
    lVar3 = FUN_003cb19c(param_2,&DAT_001eccc2);
    if (lVar3 == 0) {
      return 1;
    }
    iVar1 = FUN_003cdfdc(lVar3,&local_28);
    if (((iVar1 != 0) && (local_28 != (byte *)0x0)) && (*(long *)(lVar3 + 0x18) == 1)) {
      if (0xfffffff9 < *local_28 - 0x47) {
        *(byte *)(param_1 + 8) = *local_28;
        return 1;
      }
      FUN_00379868();
      FUN_0037995c("providers/implementations/kdfs/sshkdf.c",0xc2,"kdf_sshkdf_set_ctx_params");
      FUN_00379a5c(0x39,0x8a,0);
    }
    uVar2 = 0;
  }
  return uVar2;
}


// ===== 004572a0  FUN_004572a0 =====

undefined ** FUN_004572a0(void)

{
  return &PTR_DAT_00789f28;
}


// ===== 004572ac  FUN_004572ac =====

undefined8 FUN_004572ac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_003cb140(param_2,&DAT_001f543b);
  if (lVar1 != 0) {
    uVar2 = thunk_FUN_003cc2a4(lVar1,0xffffffffffffffff);
    return uVar2;
  }
  return 0xfffffffe;
}


// ===== 004572e0  FUN_004572e0 =====

undefined8 * FUN_004572e0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)FUN_003c8474(0x68,"providers/implementations/kdfs/sskdf.c",0x127);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_1;
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}


// ===== 00457330  FUN_00457330 =====

undefined8 * FUN_00457330(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *param_1;
  iVar2 = FUN_0043eb70();
  if (iVar2 == 0) {
    return (undefined8 *)0x0;
  }
  puVar3 = (undefined8 *)FUN_003c8474(0x68,"providers/implementations/kdfs/sskdf.c",0x127);
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  lVar4 = param_1[1];
  *puVar3 = uVar5;
  if (lVar4 != 0) {
    lVar4 = FUN_003ffbcc();
    puVar3[1] = lVar4;
    if (lVar4 == 0) goto LAB_004573f4;
  }
  iVar2 = FUN_0043fd80(param_1[7],param_1[8],puVar3 + 7,puVar3 + 8);
  if ((((iVar2 != 0) &&
       (iVar2 = FUN_0043fd80(param_1[9],param_1[10],puVar3 + 9,puVar3 + 10), iVar2 != 0)) &&
      (iVar2 = FUN_0043fd80(param_1[5],param_1[6],puVar3 + 5,puVar3 + 6), iVar2 != 0)) &&
     (iVar2 = FUN_0043f72c(puVar3 + 2,param_1 + 2), iVar2 != 0)) {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    puVar3[0xb] = param_1[0xb];
    *(undefined4 *)(puVar3 + 0xc) = uVar1;
    return puVar3;
  }
LAB_004573f4:
  uVar5 = *puVar3;
  FUN_003ffb7c(puVar3[1]);
  FUN_0043f700(puVar3 + 2);
  FUN_003c893c(puVar3[5],puVar3[6],"providers/implementations/kdfs/sskdf.c",0x133);
  FUN_003c893c(puVar3[7],puVar3[8],"providers/implementations/kdfs/sskdf.c",0x134);
  FUN_003c893c(puVar3[9],puVar3[10],"providers/implementations/kdfs/sskdf.c",0x135);
  *puVar3 = uVar5;
  puVar3[0xc] = 0;
  puVar3[0xb] = 0;
  puVar3[10] = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[1] = 0;
  FUN_003c86b4(puVar3,"providers/implementations/kdfs/sskdf.c",0x140);
  return (undefined8 *)0x0;
}


// ===== 00457484  FUN_00457484 =====

void FUN_00457484(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *param_1;
    FUN_003ffb7c(param_1[1]);
    FUN_0043f700(param_1 + 2);
    FUN_003c893c(param_1[5],param_1[6],"providers/implementations/kdfs/sskdf.c",0x133);
    FUN_003c893c(param_1[7],param_1[8],"providers/implementations/kdfs/sskdf.c",0x134);
    FUN_003c893c(param_1[9],param_1[10],"providers/implementations/kdfs/sskdf.c",0x135);
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
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = uVar1;
    FUN_003c86b4(param_1,"providers/implementations/kdfs/sskdf.c",0x140);
    return;
  }
  return;
}


// ===== 00457528  FUN_00457528 =====

void FUN_00457528(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_003ffb7c(param_1[1]);
  FUN_0043f700(param_1 + 2);
  FUN_003c893c(param_1[5],param_1[6],"providers/implementations/kdfs/sskdf.c",0x133);
  FUN_003c893c(param_1[7],param_1[8],"providers/implementations/kdfs/sskdf.c",0x134);
  FUN_003c893c(param_1[9],param_1[10],"providers/implementations/kdfs/sskdf.c",0x135);
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
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = uVar1;
  return;
}


// ===== 004575b4  FUN_004575b4 =====

ulong FUN_004575b4(long param_1,void *param_2,ulong param_3,undefined8 param_4)

{
  undefined1 *__src;
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined1 *puVar17;
  ulong uVar18;
  uint local_e8 [2];
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 local_c0 [8];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulong local_70 [2];
  
  iVar3 = FUN_0043eb70();
  if ((iVar3 != 0) && (iVar3 = FUN_00457a94(param_1,param_4), iVar3 != 0)) {
    if (*(long *)(param_1 + 0x28) == 0) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/kdfs/sskdf.c",0x17c,"sskdf_derive");
      uVar7 = 0x84;
    }
    else {
      lVar6 = FUN_0043f900(param_1 + 0x10);
      if (*(long *)(param_1 + 8) == 0) {
        if (lVar6 != 0) {
          uVar18 = FUN_00457db8(lVar6,*(undefined8 *)(param_1 + 0x28),
                                *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                                *(undefined8 *)(param_1 + 0x40),0,param_2,param_3);
          return uVar18;
        }
        FUN_00379868();
        uVar7 = 0x1ae;
      }
      else {
        uVar7 = FUN_003ffcc0(*(long *)(param_1 + 8));
        iVar3 = FUN_00400170(uVar7,&DAT_001e0e65);
        if (iVar3 == 0) {
          if (*(int *)(param_1 + 0x60) == 0) {
            FUN_00379868();
            FUN_0037995c("providers/implementations/kdfs/sskdf.c",0x19b,"sskdf_derive");
            uVar7 = 0x89;
            goto LAB_004578ec;
          }
          iVar5 = FUN_00400170(uVar7,"KMAC128");
          uVar4 = 0x84;
          if (iVar5 != 0) {
            uVar4 = 0xa4;
          }
          puVar14 = &UNK_0020ee5c;
          uVar7 = 3;
          lVar6 = *(long *)(param_1 + 0x48);
          if (lVar6 == 0) {
LAB_00457704:
            uVar18 = (ulong)uVar4;
            lVar6 = FUN_003c8474(uVar18,"providers/implementations/kdfs/sskdf.c",0x1a0);
            *(long *)(param_1 + 0x48) = lVar6;
            if (lVar6 == 0) goto LAB_004578f4;
            *(ulong *)(param_1 + 0x50) = uVar18;
          }
          else {
LAB_004576fc:
            uVar18 = *(ulong *)(param_1 + 0x50);
            if (uVar18 == 0) goto LAB_00457704;
          }
          uVar4 = 0;
          if (((param_3 - 0x40000001 < 0xffffffffc0000000) ||
              (uVar11 = *(ulong *)(param_1 + 0x30), 0x40000000 < uVar11)) ||
             (uVar12 = *(ulong *)(param_1 + 0x40), 0x40000000 < uVar12)) goto LAB_004578f8;
          uVar9 = *(undefined8 *)(param_1 + 0x28);
          uVar16 = *(ulong *)(param_1 + 0x58);
          uVar15 = *(undefined8 *)(param_1 + 8);
          uVar10 = *(undefined8 *)(param_1 + 0x38);
          local_70[0] = uVar16;
          if (iVar3 == 0) {
            FUN_003cd924(local_c0,"custom",puVar14,uVar7);
            FUN_003cdfcc(local_e8);
            uStack_90 = uStack_e0;
            uStack_80 = uStack_d0;
            local_88 = local_d8;
            local_78 = local_c8;
            iVar3 = FUN_0040013c(uVar15,local_c0);
            if ((iVar3 != 0) &&
               (((uVar2 = param_3, uVar16 == 0 || (uVar2 = local_70[0], uVar16 == param_3)) ||
                ((uVar1 = uVar16 - 0x14 >> 2, (uVar1 | uVar16 << 0x3e) < 0xc &&
                 ((1L << (uVar1 & 0x3f) & 0x88dU) != 0)))))) {
              local_70[0] = uVar2;
              FUN_003ccbb0(local_e8,&DAT_001f543b,local_70);
              uStack_b8 = uStack_e0;
              uStack_a8 = uStack_d0;
              uStack_b0 = local_d8;
              local_a0 = local_c8;
              iVar3 = FUN_0040013c(uVar15,local_c0);
              if (0 < iVar3) {
                if (local_70[0] < 0x41) goto LAB_00457788;
                puVar17 = (undefined1 *)
                          FUN_003c8474(local_70[0],"providers/implementations/kdfs/sskdf.c",0xc9);
                if (puVar17 != (undefined1 *)0x0) goto LAB_0045778c;
              }
            }
LAB_00457a28:
            lVar6 = 0;
            uVar4 = 0;
LAB_00457a30:
            FUN_003c89b8(local_c0,0x40);
          }
          else {
LAB_00457788:
            puVar17 = (undefined1 *)0x0;
LAB_0045778c:
            __src = local_c0;
            if (puVar17 != (undefined1 *)0x0) {
              __src = puVar17;
            }
            iVar3 = FUN_003ffe28(uVar15,lVar6,uVar18,0);
            if ((iVar3 == 0) || (uVar18 = FUN_003ffcc8(uVar15), uVar18 == 0)) {
LAB_00457920:
              uVar4 = 0;
              lVar6 = 0;
            }
            else {
              if ((puVar17 == (undefined1 *)0x0) && (0x40 < uVar18)) goto LAB_00457a28;
              local_e8[0] = 0x1000000;
              lVar8 = FUN_003ffbcc(uVar15);
              if (lVar8 == 0) goto LAB_00457920;
              uVar13 = 2;
              do {
                lVar6 = lVar8;
                iVar3 = FUN_003ffe34(lVar6,local_e8,4);
                if (((iVar3 == 0) || (iVar3 = FUN_003ffe34(lVar6,uVar9,uVar11), iVar3 == 0)) ||
                   (iVar3 = FUN_003ffe34(lVar6,uVar10,uVar12), iVar3 == 0)) {
LAB_00457a7c:
                  uVar4 = 0;
                  break;
                }
                if (param_3 < uVar18) {
                  iVar3 = FUN_003ffe40(lVar6,__src,0,uVar18);
                  if (iVar3 == 0) goto LAB_00457a7c;
                  memcpy(param_2,__src,param_3);
LAB_00457a70:
                  uVar4 = 1;
                  break;
                }
                iVar3 = FUN_003ffe40(lVar6,param_2,0,param_3);
                if (iVar3 == 0) goto LAB_00457a7c;
                param_3 = param_3 - uVar18;
                if (param_3 == 0) goto LAB_00457a70;
                param_2 = (void *)((long)param_2 + uVar18);
                FUN_003ffb7c(lVar6);
                uVar4 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
                local_e8[0] = uVar4 >> 0x10 | uVar4 << 0x10;
                lVar8 = FUN_003ffbcc(uVar15);
                uVar4 = 0;
                lVar6 = 0;
                uVar13 = uVar13 + 1;
              } while (lVar8 != 0);
            }
            if (puVar17 == (undefined1 *)0x0) goto LAB_00457a30;
            FUN_003c893c(puVar17,uVar16,"providers/implementations/kdfs/sskdf.c",0x118);
          }
          FUN_003ffb7c(lVar6);
          goto LAB_004578f8;
        }
        if (lVar6 != 0) {
          uVar4 = FUN_00389a38(lVar6);
          if ((int)uVar4 < 1) goto LAB_004578f4;
          puVar14 = (undefined *)0x0;
          uVar7 = 0;
          lVar6 = *(long *)(param_1 + 0x48);
          if (lVar6 != 0) goto LAB_004576fc;
          goto LAB_00457704;
        }
        FUN_00379868();
        uVar7 = 0x18c;
      }
      FUN_0037995c("providers/implementations/kdfs/sskdf.c",uVar7,"sskdf_derive");
      uVar7 = 0x81;
    }
LAB_004578ec:
    FUN_00379a5c(0x39,uVar7,0);
  }
LAB_004578f4:
  uVar4 = 0;
LAB_004578f8:
  return (ulong)uVar4;
}


// ===== 00457a88  FUN_00457a88 =====

undefined ** FUN_00457a88(void)

{
  return &PTR_s_secret_0078a0b8;
}


// ===== 00457a94  FUN_00457a94 =====

undefined8 FUN_00457a94(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long local_18;
  
  uVar2 = FUN_0046b880(*param_1);
  if (param_2 == 0) {
    return 1;
  }
  uVar3 = FUN_0043fb50(param_1 + 1,param_2,0,0,0,uVar2);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  if (param_1[1] != 0) {
    uVar3 = FUN_003ffcc0();
    iVar1 = FUN_00400170(uVar3,"KMAC128");
    if (iVar1 == 0) {
      uVar3 = FUN_003ffcc0(param_1[1]);
      iVar1 = FUN_00400170(uVar3,"KMAC256");
      if (iVar1 == 0) goto LAB_00457b18;
    }
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
LAB_00457b18:
  uVar2 = FUN_0043f7c4(param_1 + 2,param_2,uVar2);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  uVar2 = FUN_003cdc74(param_2,"secret",param_1 + 5,param_1 + 6);
  if ((int)uVar2 == -1) {
    uVar2 = FUN_003cdc74(param_2,&DAT_001e2b47,param_1 + 5,param_1 + 6);
  }
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  uVar2 = FUN_003cdd44(param_2,&DAT_001b78fe,param_1 + 7,param_1 + 8,0);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  uVar2 = FUN_003cdc74(param_2,&DAT_001c2fe1,param_1 + 9,param_1 + 10);
  if ((int)uVar2 != 0) {
    lVar4 = FUN_003cb19c(param_2,"maclen");
    if (lVar4 != 0) {
      iVar1 = thunk_FUN_003cc060(lVar4,&local_18);
      if (iVar1 == 0) {
        return 0;
      }
      if (local_18 == 0) {
        return 0;
      }
      param_1[0xb] = local_18;
    }
    return 1;
  }
  return uVar2;
}


// ===== 00457bec  FUN_00457bec =====

undefined ** FUN_00457bec(void)

{
  return &PTR_DAT_0078a220;
}


// ===== 00457bf8  FUN_00457bf8 =====

undefined8 FUN_00457bf8(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = FUN_003cb140(param_2,&DAT_001f543b);
  if (lVar2 == 0) {
    return 0xfffffffe;
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    uVar3 = thunk_FUN_003cc2a4(lVar2,0xffffffffffffffff);
    return uVar3;
  }
  lVar4 = FUN_0043f900(param_1 + 0x10);
  if (lVar4 != 0) {
    uVar1 = FUN_00389a38();
    uVar3 = thunk_FUN_003cc2a4(lVar2,uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    return uVar3;
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/kdfs/sskdf.c",0x16c,"sskdf_size");
  FUN_00379a5c(0x39,0x81,0);
  uVar3 = thunk_FUN_003cc2a4(lVar2,0);
  return uVar3;
}


// ===== 00457cb0  FUN_00457cb0 =====

undefined8 FUN_00457cb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if ((iVar1 != 0) && (iVar1 = FUN_00457a94(param_1,param_4), iVar1 != 0)) {
    if (*(long *)(param_1 + 0x28) == 0) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/kdfs/sskdf.c",0x1c0,"x963kdf_derive");
      uVar3 = 0x84;
    }
    else if (*(long *)(param_1 + 8) == 0) {
      lVar2 = FUN_0043f900(param_1 + 0x10);
      if (lVar2 != 0) {
        uVar3 = FUN_00457db8(lVar2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),1,
                             param_2,param_3);
        return uVar3;
      }
      FUN_00379868();
      FUN_0037995c("providers/implementations/kdfs/sskdf.c",0x1cc,"x963kdf_derive");
      uVar3 = 0x81;
    }
    else {
      FUN_00379868();
      FUN_0037995c("providers/implementations/kdfs/sskdf.c",0x1c5,"x963kdf_derive");
      uVar3 = 0x88;
    }
    FUN_00379a5c(0x39,uVar3,0);
  }
  return 0;
}


// ===== 00457db8  FUN_00457db8 =====

undefined8
FUN_00457db8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5,
            int param_6,void *param_7,ulong param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 auStack_a4 [64];
  uint local_64;
  
  if (0x40000000 < param_3) {
    return 0;
  }
  if (0x40000000 < param_5) {
    return 0;
  }
  if (param_8 - 0x40000001 < 0xffffffffc0000000) {
    return 0;
  }
  uVar2 = FUN_00389a38(param_1);
  if ((int)uVar2 < 1) {
    return 0;
  }
  uVar7 = (ulong)uVar2;
  lVar4 = FUN_0039d270();
  lVar5 = FUN_0039d270();
  uVar6 = 0;
  if ((lVar4 == 0) || (lVar5 == 0)) goto LAB_00457fec;
  iVar3 = FUN_0039d8c0(0,lVar5,param_1);
  if (iVar3 != 0) {
    local_64 = 0x1000000;
    iVar3 = FUN_0039e0a8(lVar4,lVar5);
    if (iVar3 != 0) {
      if (param_6 == 0) {
        uVar2 = 2;
        do {
          iVar3 = FUN_0039d938(lVar4,&local_64,4);
          if (((iVar3 == 0) || (iVar3 = FUN_0039d938(lVar4,param_2,param_3), iVar3 == 0)) ||
             (iVar3 = FUN_0039d938(lVar4,param_4,param_5), iVar3 == 0)) goto LAB_00457fe8;
          if (param_8 < uVar7) goto LAB_00457fbc;
          iVar3 = FUN_0039dac8(lVar4,param_7,0);
          if (iVar3 == 0) goto LAB_00457fe8;
          param_8 = param_8 - uVar7;
          if (param_8 == 0) goto LAB_00457fe0;
          uVar1 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
          local_64 = uVar1 >> 0x10 | uVar1 << 0x10;
          param_7 = (void *)((long)param_7 + uVar7);
          iVar3 = FUN_0039e0a8(lVar4,lVar5);
          uVar6 = 0;
          uVar2 = uVar2 + 1;
        } while (iVar3 != 0);
      }
      else {
        uVar2 = 2;
        do {
          iVar3 = FUN_0039d938(lVar4,param_2,param_3);
          if (((iVar3 == 0) || (iVar3 = FUN_0039d938(lVar4,&local_64,4), iVar3 == 0)) ||
             (iVar3 = FUN_0039d938(lVar4,param_4,param_5), iVar3 == 0)) goto LAB_00457fe8;
          if (param_8 < uVar7) goto LAB_00457fbc;
          iVar3 = FUN_0039dac8(lVar4,param_7,0);
          if (iVar3 == 0) goto LAB_00457fe8;
          param_8 = param_8 - uVar7;
          if (param_8 == 0) goto LAB_00457fe0;
          uVar1 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
          local_64 = uVar1 >> 0x10 | uVar1 << 0x10;
          param_7 = (void *)((long)param_7 + uVar7);
          iVar3 = FUN_0039e0a8(lVar4,lVar5);
          uVar6 = 0;
          uVar2 = uVar2 + 1;
        } while (iVar3 != 0);
      }
      goto LAB_00457fec;
    }
  }
LAB_00457fe8:
  uVar6 = 0;
LAB_00457fec:
  FUN_0039d284(uVar6,lVar4);
  FUN_0039d284(lVar5);
  FUN_003c89b8(auStack_a4,0x40);
  return uVar6;
LAB_00457fbc:
  iVar3 = FUN_0039dac8(lVar4,auStack_a4,0);
  if (iVar3 != 0) {
    memcpy(param_7,auStack_a4,param_8);
LAB_00457fe0:
    uVar6 = 1;
    goto LAB_00457fec;
  }
  goto LAB_00457fe8;
}


// ===== 00458030  FUN_00458030 =====

undefined8 * FUN_00458030(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)FUN_003c8474(0x430,"providers/implementations/kdfs/tls1_prf.c",0x74);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_1;
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}


// ===== 00458080  FUN_00458080 =====

undefined8 * FUN_00458080(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  size_t __n;
  
  uVar4 = *param_1;
  iVar1 = FUN_0043eb70();
  if (iVar1 == 0) {
    return (undefined8 *)0x0;
  }
  puVar2 = (undefined8 *)FUN_003c8474(0x430,"providers/implementations/kdfs/tls1_prf.c",0x74);
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  lVar3 = param_1[1];
  *puVar2 = uVar4;
  if (lVar3 != 0) {
    lVar3 = FUN_003ffbcc();
    puVar2[1] = lVar3;
    if (lVar3 == 0) goto LAB_00458128;
  }
  if (param_1[2] != 0) {
    lVar3 = FUN_003ffbcc();
    puVar2[2] = lVar3;
    if (lVar3 == 0) goto LAB_00458128;
  }
  iVar1 = FUN_0043fd80(param_1[3],param_1[4],puVar2 + 3,puVar2 + 4);
  if (iVar1 != 0) {
    __n = param_1[0x85];
    memcpy(puVar2 + 5,param_1 + 5,__n);
    puVar2[0x85] = __n;
    return puVar2;
  }
LAB_00458128:
  uVar4 = *puVar2;
  FUN_003ffb7c(puVar2[1]);
  FUN_003ffb7c(puVar2[2]);
  FUN_003c893c(puVar2[3],puVar2[4],"providers/implementations/kdfs/tls1_prf.c",0x8a);
  FUN_003c89b8(puVar2 + 5,puVar2[0x85]);
  memset(puVar2 + 1,0,0x428);
  *puVar2 = uVar4;
  FUN_003c86b4(puVar2,"providers/implementations/kdfs/tls1_prf.c",0x7f);
  return (undefined8 *)0x0;
}


// ===== 004581a0  FUN_004581a0 =====

void FUN_004581a0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *param_1;
    FUN_003ffb7c(param_1[1]);
    FUN_003ffb7c(param_1[2]);
    FUN_003c893c(param_1[3],param_1[4],"providers/implementations/kdfs/tls1_prf.c",0x8a);
    FUN_003c89b8(param_1 + 5,param_1[0x85]);
    memset(param_1 + 1,0,0x428);
    *param_1 = uVar1;
    FUN_003c86b4(param_1,"providers/implementations/kdfs/tls1_prf.c",0x7f);
    return;
  }
  return;
}


// ===== 0045822c  FUN_0045822c =====

void FUN_0045822c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_003ffb7c(param_1[1]);
  FUN_003ffb7c(param_1[2]);
  FUN_003c893c(param_1[3],param_1[4],"providers/implementations/kdfs/tls1_prf.c",0x8a);
  FUN_003c89b8(param_1 + 5,param_1[0x85]);
  memset(param_1 + 1,0,0x428);
  *param_1 = uVar1;
  return;
}


// ===== 0045829c  FUN_0045829c =====

undefined8 FUN_0045829c(undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar4 = FUN_0046b880(*param_1);
  uVar5 = FUN_0043eb70();
  if ((int)uVar5 == 0) {
    return uVar5;
  }
  uVar5 = FUN_004585f0(param_1,param_4);
  if ((int)uVar5 == 0) {
    return uVar5;
  }
  if (param_1[1] == 0) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/kdfs/tls1_prf.c",0xb3,"kdf_tls1_prf_derive");
    uVar4 = 0x81;
LAB_004584d4:
    FUN_00379a5c(0x39,uVar4,0);
    return 0;
  }
  if (param_1[3] == 0) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/kdfs/tls1_prf.c",0xb7,"kdf_tls1_prf_derive");
    uVar4 = 0x84;
    goto LAB_004584d4;
  }
  if (param_1[0x85] == 0) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/kdfs/tls1_prf.c",0xbb,"kdf_tls1_prf_derive");
    uVar4 = 0x8c;
    goto LAB_004584d4;
  }
  if (param_3 == 0) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/kdfs/tls1_prf.c",0xbf,"kdf_tls1_prf_derive");
    uVar4 = 0x69;
    goto LAB_004584d4;
  }
  iVar3 = FUN_00458a90(uVar4);
  uVar12 = param_1[0x85];
  if (((iVar3 != 0) && (0xc < uVar12)) &&
     (param_1[5] == 0x732072657473616d && *(long *)((long)param_1 + 0x2d) == 0x7465726365732072)) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/kdfs/tls1_prf.c",0xcd,"kdf_tls1_prf_derive");
    uVar4 = 0xe9;
    goto LAB_004584d4;
  }
  lVar1 = param_1[2];
  lVar9 = param_1[3];
  lVar2 = param_1[4];
  if (lVar1 == 0) {
    uVar4 = FUN_00458814(param_1[1],lVar9,lVar2,param_1 + 5,uVar12,param_2,param_3);
    return uVar4;
  }
  uVar13 = lVar2 + 1U >> 1;
  uVar4 = FUN_00458814(param_1[1],lVar9,uVar13,param_1 + 5,uVar12,param_2,param_3);
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  lVar6 = FUN_003c83a4(param_3,"providers/implementations/kdfs/tls1_prf.c",0x1b8);
  if (lVar6 == 0) {
    return 0;
  }
  iVar3 = FUN_00458814(lVar1,(lVar9 + lVar2) - uVar13,uVar13,param_1 + 5,uVar12,lVar6,param_3);
  if (iVar3 == 0) {
    FUN_003c893c(lVar6,param_3,"providers/implementations/kdfs/tls1_prf.c",0x1bd);
    return 0;
  }
  if (param_3 < 8) {
    uVar13 = 0;
  }
  else {
    if (param_3 < 0x20) {
      uVar12 = 0;
    }
    else {
      uVar13 = param_3 & 0xffffffffffffffe0;
      puVar8 = (undefined8 *)(lVar6 + 0x10);
      puVar10 = (undefined8 *)(param_2 + 0x10);
      uVar12 = uVar13;
      do {
        uVar5 = puVar10[-1];
        uVar4 = puVar10[-2];
        uVar19 = puVar10[1];
        uVar18 = *puVar10;
        uVar12 = uVar12 - 0x20;
        uVar15 = puVar8[-1];
        uVar14 = puVar8[-2];
        uVar17 = puVar8[1];
        uVar16 = *puVar8;
        puVar8 = puVar8 + 4;
        puVar10[-1] = CONCAT17((byte)((ulong)uVar5 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38),
                               CONCAT16((byte)((ulong)uVar5 >> 0x30) ^ (byte)((ulong)uVar15 >> 0x30)
                                        ,CONCAT15((byte)((ulong)uVar5 >> 0x28) ^
                                                  (byte)((ulong)uVar15 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar5 >> 0x20) ^
                                                           (byte)((ulong)uVar15 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar5 >> 0x18) ^
                                                                    (byte)((ulong)uVar15 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar5 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar15 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar5 >> 8) ^ (byte)((ulong)uVar15 >> 8),
                                                  (byte)uVar5 ^ (byte)uVar15)))))));
        puVar10[-2] = CONCAT17((byte)((ulong)uVar4 >> 0x38) ^ (byte)((ulong)uVar14 >> 0x38),
                               CONCAT16((byte)((ulong)uVar4 >> 0x30) ^ (byte)((ulong)uVar14 >> 0x30)
                                        ,CONCAT15((byte)((ulong)uVar4 >> 0x28) ^
                                                  (byte)((ulong)uVar14 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar4 >> 0x20) ^
                                                           (byte)((ulong)uVar14 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar4 >> 0x18) ^
                                                                    (byte)((ulong)uVar14 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar4 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar14 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar4 >> 8) ^ (byte)((ulong)uVar14 >> 8),
                                                  (byte)uVar4 ^ (byte)uVar14)))))));
        puVar10[1] = CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                              CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                                 (byte)((ulong)uVar17 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                          (byte)((ulong)uVar17 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                                   (byte)((ulong)uVar17 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar19 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar17 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar19 >> 8) ^ (byte)((ulong)uVar17 >> 8),
                                                  (byte)uVar19 ^ (byte)uVar17)))))));
        *puVar10 = CONCAT17((byte)((ulong)uVar18 >> 0x38) ^ (byte)((ulong)uVar16 >> 0x38),
                            CONCAT16((byte)((ulong)uVar18 >> 0x30) ^ (byte)((ulong)uVar16 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar18 >> 0x28) ^
                                              (byte)((ulong)uVar16 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar18 >> 0x20) ^
                                                       (byte)((ulong)uVar16 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar18 >> 0x18) ^
                                                                (byte)((ulong)uVar16 >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar18 >>
                                                                               0x10) ^
                                                                         (byte)((ulong)uVar16 >>
                                                                               0x10),
                                                                         CONCAT11((byte)((ulong)
                                                  uVar18 >> 8) ^ (byte)((ulong)uVar16 >> 8),
                                                  (byte)uVar18 ^ (byte)uVar16)))))));
        puVar10 = puVar10 + 4;
      } while (uVar12 != 0);
      if (uVar13 == param_3) goto LAB_004585c4;
      uVar12 = uVar13;
      if ((param_3 & 0x18) == 0) goto LAB_004585a0;
    }
    uVar13 = param_3 & 0xfffffffffffffff8;
    lVar9 = uVar12 - uVar13;
    puVar8 = (undefined8 *)(lVar6 + uVar12);
    puVar10 = (undefined8 *)(param_2 + uVar12);
    do {
      uVar4 = *puVar8;
      uVar5 = *puVar10;
      lVar9 = lVar9 + 8;
      *puVar10 = CONCAT17((byte)((ulong)uVar5 >> 0x38) ^ (byte)((ulong)uVar4 >> 0x38),
                          CONCAT16((byte)((ulong)uVar5 >> 0x30) ^ (byte)((ulong)uVar4 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar5 >> 0x28) ^
                                            (byte)((ulong)uVar4 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar5 >> 0x20) ^
                                                     (byte)((ulong)uVar4 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar5 >> 0x18) ^
                                                              (byte)((ulong)uVar4 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar5 >> 0x10)
                                                                       ^ (byte)((ulong)uVar4 >> 0x10
                                                                               ),
                                                                       CONCAT11((byte)((ulong)uVar5
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar4
                                                                                      >> 8),
                                                                                (byte)uVar5 ^
                                                                                (byte)uVar4)))))));
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    } while (lVar9 != 0);
    if (uVar13 == param_3) goto LAB_004585c4;
  }
LAB_004585a0:
  lVar9 = param_3 - uVar13;
  pbVar7 = (byte *)(lVar6 + uVar13);
  pbVar11 = (byte *)(param_2 + uVar13);
  do {
    lVar9 = lVar9 + -1;
    *pbVar11 = *pbVar11 ^ *pbVar7;
    pbVar7 = pbVar7 + 1;
    pbVar11 = pbVar11 + 1;
  } while (lVar9 != 0);
LAB_004585c4:
  FUN_003c893c(lVar6,param_3,"providers/implementations/kdfs/tls1_prf.c",0x1c2);
  return 1;
}


// ===== 004585e4  FUN_004585e4 =====

undefined ** FUN_004585e4(void)

{
  return &PTR_s_properties_0078a310;
}


// ===== 004585f0  FUN_004585f0 =====

undefined8 FUN_004585f0(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long local_48;
  long local_28;
  
  uVar2 = FUN_0046b880(*param_1);
  if (param_2 != 0) {
    lVar3 = FUN_003cb19c(param_2,"digest");
    if (lVar3 != 0) {
      iVar1 = FUN_003cab04(*(undefined8 *)(lVar3 + 0x10),"MD5-SHA1");
      if (iVar1 == 0) {
        uVar4 = FUN_0043fb50(param_1 + 1,param_2,&DAT_001e0e65,0,&DAT_001f35df,uVar2);
        if ((int)uVar4 == 0) {
          return uVar4;
        }
        uVar2 = FUN_0043fb50(param_1 + 2,param_2,&DAT_001e0e65,0,&DAT_001eef82,uVar2);
        iVar1 = (int)uVar2;
      }
      else {
        FUN_003ffb7c(param_1[2]);
        uVar2 = FUN_0043fb50(param_1 + 1,param_2,&DAT_001e0e65,0,0,uVar2);
        iVar1 = (int)uVar2;
      }
      if (iVar1 == 0) {
        return uVar2;
      }
    }
    lVar3 = FUN_003cb19c(param_2,"secret");
    if (lVar3 != 0) {
      puVar7 = param_1 + 3;
      FUN_003c893c(*puVar7,param_1[4],"providers/implementations/kdfs/tls1_prf.c",0xf4);
      *puVar7 = 0;
      uVar2 = FUN_003cd608(lVar3,puVar7,0,param_1 + 4);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
    }
    for (lVar3 = FUN_003cb19c(param_2,&DAT_001d805b); lVar3 != 0;
        lVar3 = FUN_003cb19c(lVar3 + 0x28,&DAT_001d805b)) {
      lVar5 = param_1[0x85];
      local_48 = 0;
      local_28 = (long)param_1 + lVar5 + 0x28;
      lVar6 = *(long *)(lVar3 + 0x18);
      if ((*(long *)(lVar3 + 0x18) != 0) &&
         (lVar6 = *(long *)(lVar3 + 0x10), *(long *)(lVar3 + 0x10) != 0)) {
        uVar2 = FUN_003cd608(lVar3,&local_28,0x400 - lVar5,&local_48);
        if ((int)uVar2 == 0) {
          return uVar2;
        }
        lVar5 = param_1[0x85];
        lVar6 = local_48;
      }
      param_1[0x85] = lVar5 + lVar6;
    }
  }
  return 1;
}


// ===== 004587d4  FUN_004587d4 =====

undefined ** FUN_004587d4(void)

{
  return &PTR_DAT_0078a3d8;
}


// ===== 004587e0  FUN_004587e0 =====

undefined8 FUN_004587e0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_003cb140(param_2,&DAT_001f543b);
  if (lVar1 != 0) {
    uVar2 = thunk_FUN_003cc2a4(lVar1,0xffffffffffffffff);
    return uVar2;
  }
  return 0xfffffffe;
}


// ===== 00458814  FUN_00458814 =====

undefined4
FUN_00458814(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
            undefined8 param_5,void *param_6,ulong param_7)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 local_a8;
  undefined1 auStack_a0 [64];
  
  iVar1 = FUN_003ffe28();
  if ((iVar1 == 0) || (uVar2 = FUN_003ffcc8(param_1), uVar2 == 0)) {
    lVar4 = 0;
LAB_0045894c:
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_003ffbcc(param_1);
    if (lVar3 != 0) {
      if (param_4 == 0) {
        iVar1 = FUN_003ffe40(lVar3,auStack_a0,&local_a8,0x40);
        if (iVar1 != 0) {
          uVar5 = 0;
          do {
            FUN_003ffb7c(lVar3);
            lVar4 = FUN_003ffbcc(param_1);
            if ((lVar4 == 0) || (iVar1 = FUN_003ffe34(lVar4,auStack_a0,local_a8), iVar1 == 0))
            goto LAB_0045894c;
            if (param_7 < uVar2 || param_7 - uVar2 == 0) goto LAB_00458a54;
            lVar3 = FUN_003ffbcc(lVar4);
            if ((lVar3 == 0) || (iVar1 = FUN_003ffe40(lVar4,param_6,0,param_7), iVar1 == 0))
            goto LAB_00458a00;
            FUN_003ffb7c(lVar4);
            param_6 = (void *)((long)param_6 + uVar2);
            iVar1 = FUN_003ffe40(lVar3,auStack_a0,&local_a8,0x40);
            lVar4 = 0;
            param_7 = param_7 - uVar2;
          } while (iVar1 != 0);
          goto LAB_00458a04;
        }
      }
      else {
        iVar1 = FUN_003ffe34(lVar3,param_4,param_5);
        if ((iVar1 != 0) && (iVar1 = FUN_003ffe40(lVar3,auStack_a0,&local_a8,0x40), iVar1 != 0)) {
          uVar5 = 0;
          while( true ) {
            FUN_003ffb7c(lVar3);
            lVar4 = FUN_003ffbcc(param_1);
            if ((lVar4 == 0) || (iVar1 = FUN_003ffe34(lVar4,auStack_a0,local_a8), iVar1 == 0))
            goto LAB_0045894c;
            if (param_7 < uVar2 || param_7 - uVar2 == 0) break;
            lVar3 = FUN_003ffbcc();
            if (((lVar3 == 0) || (iVar1 = FUN_003ffe34(lVar4,param_4,param_5), iVar1 == 0)) ||
               (iVar1 = FUN_003ffe40(lVar4,param_6,0,param_7), iVar1 == 0)) goto LAB_00458a00;
            FUN_003ffb7c(lVar4);
            param_6 = (void *)((long)param_6 + uVar2);
            iVar1 = FUN_003ffe40(lVar3,auStack_a0,&local_a8,0x40);
            lVar4 = 0;
            param_7 = param_7 - uVar2;
            if (iVar1 == 0) goto LAB_00458a04;
          }
          iVar1 = FUN_003ffe34(lVar4,param_4,param_5);
          if (iVar1 == 0) goto LAB_0045894c;
LAB_00458a54:
          iVar1 = FUN_003ffe40(lVar4,auStack_a0,&local_a8,0x40);
          if (iVar1 != 0) {
            memcpy(param_6,auStack_a0,param_7);
            lVar3 = 0;
            uVar5 = 1;
            goto LAB_00458a04;
          }
          goto LAB_0045894c;
        }
      }
    }
    lVar4 = 0;
  }
LAB_00458a00:
  uVar5 = 0;
LAB_00458a04:
  FUN_003ffb7c(lVar4);
  FUN_003ffb7c(lVar3);
  FUN_003c89b8(auStack_a0,0x40);
  return uVar5;
}


// ===== 00458a88  FUN_00458a88 =====

undefined8 FUN_00458a88(void)

{
  return 0;
}


// ===== 00458a90  FUN_00458a90 =====

undefined8 FUN_00458a90(void)

{
  return 0;
}


// ===== 00458a98  FUN_00458a98 =====

void FUN_00458a98(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00440c20(param_1,param_2,1);
  if (iVar1 != 0) {
    return;
  }
  FUN_00440c30(param_2,&DAT_0078a428,6);
  return;
}


// ===== 00458adc  FUN_00458adc =====

undefined8 * FUN_00458adc(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)FUN_003c8474(0xa0,"providers/implementations/kdfs/x942kdf.c",0x153);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_1;
      *(undefined4 *)(puVar2 + 0x13) = 1;
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}


// ===== 00458b34  FUN_00458b34 =====

undefined8 * FUN_00458b34(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = *param_1;
  iVar3 = FUN_0043eb70();
  if (iVar3 != 0) {
    puVar4 = (undefined8 *)FUN_003c8474(0xa0,"providers/implementations/kdfs/x942kdf.c",0x153);
    if (puVar4 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    uVar6 = param_1[4];
    uVar1 = param_1[5];
    *puVar4 = uVar5;
    *(undefined4 *)(puVar4 + 0x13) = 1;
    iVar3 = FUN_0043fd80(uVar6,uVar1,puVar4 + 4,puVar4 + 5);
    if ((((iVar3 != 0) &&
         (iVar3 = FUN_0043fd80(param_1[6],param_1[7],puVar4 + 6,puVar4 + 7), iVar3 != 0)) &&
        (iVar3 = FUN_0043fd80(param_1[8],param_1[0xc],puVar4 + 8,puVar4 + 0xc), iVar3 != 0)) &&
       (((iVar3 = FUN_0043fd80(param_1[9],param_1[0xd],puVar4 + 9,puVar4 + 0xd), iVar3 != 0 &&
         (iVar3 = FUN_0043fd80(param_1[10],param_1[0xe],puVar4 + 10,puVar4 + 0xe), iVar3 != 0)) &&
        ((iVar3 = FUN_0043fd80(param_1[0xb],param_1[0xf],puVar4 + 0xb,puVar4 + 0xf), iVar3 != 0 &&
         (iVar3 = FUN_0043f72c(puVar4 + 1,param_1 + 1), iVar3 != 0)))))) {
      uVar6 = param_1[0x11];
      uVar5 = param_1[0x10];
      uVar2 = *(undefined4 *)(param_1 + 0x13);
      puVar4[0x12] = param_1[0x12];
      puVar4[0x11] = uVar6;
      puVar4[0x10] = uVar5;
      *(undefined4 *)(puVar4 + 0x13) = uVar2;
      return puVar4;
    }
    FUN_00458cac(puVar4);
    FUN_003c86b4(puVar4,"providers/implementations/kdfs/x942kdf.c",0x171);
  }
  return (undefined8 *)0x0;
}


// ===== 00458c74  FUN_00458c74 =====

void FUN_00458c74(long param_1)

{
  if (param_1 != 0) {
    FUN_00458cac();
    FUN_003c86b4(param_1,"providers/implementations/kdfs/x942kdf.c",0x171);
    return;
  }
  return;
}


// ===== 00458cac  FUN_00458cac =====

void FUN_00458cac(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_0043f700(param_1 + 1);
  FUN_003c893c(param_1[4],param_1[5],"providers/implementations/kdfs/x942kdf.c",0x160);
  FUN_003c893c(param_1[6],param_1[7],"providers/implementations/kdfs/x942kdf.c",0x161);
  FUN_003c893c(param_1[8],param_1[0xc],"providers/implementations/kdfs/x942kdf.c",0x162);
  FUN_003c893c(param_1[9],param_1[0xd],"providers/implementations/kdfs/x942kdf.c",0x163);
  FUN_003c893c(param_1[10],param_1[0xe],"providers/implementations/kdfs/x942kdf.c",0x164);
  FUN_003c893c(param_1[0xb],param_1[0xf],"providers/implementations/kdfs/x942kdf.c",0x165);
  param_1[0x13] = 0;
  *param_1 = uVar1;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
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
  param_1[2] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 0x13) = 1;
  return;
}


// ===== 00458d88  FUN_00458d88 =====

undefined4 FUN_00458d88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_48 = 0;
  uStack_40 = 0;
  iVar1 = FUN_0043eb70();
  if ((iVar1 != 0) && (iVar1 = FUN_0045901c(param_1,param_4), iVar1 != 0)) {
    if ((*(int *)(param_1 + 0x98) == 0) || (*(long *)(param_1 + 0x50) == 0)) {
      if ((*(long *)(param_1 + 0x30) == 0) ||
         ((((*(long *)(param_1 + 0x40) == 0 && (*(long *)(param_1 + 0x48) == 0)) &&
           (*(long *)(param_1 + 0x50) == 0)) && (*(long *)(param_1 + 0x58) == 0)))) {
        if (*(long *)(param_1 + 0x20) == 0) {
          FUN_00379868();
          FUN_0037995c("providers/implementations/kdfs/x942kdf.c",0x1d2,"x942kdf_derive");
          uVar4 = 0x84;
        }
        else {
          lVar3 = FUN_0043f900(param_1 + 8);
          if (lVar3 == 0) {
            FUN_00379868();
            FUN_0037995c("providers/implementations/kdfs/x942kdf.c",0x1d7,"x942kdf_derive");
            uVar4 = 0x81;
          }
          else if ((*(long *)(param_1 + 0x88) == 0) || (*(long *)(param_1 + 0x90) == 0)) {
            FUN_00379868();
            FUN_0037995c("providers/implementations/kdfs/x942kdf.c",0x1db,"x942kdf_derive");
            uVar4 = 0x90;
          }
          else if ((*(long *)(param_1 + 0x40) == 0) || (*(ulong *)(param_1 + 0x60) >> 0x1e == 0)) {
            if (*(int *)(param_1 + 0x98) == 0) {
              uVar4 = 0;
            }
            else {
              uVar4 = *(undefined8 *)(param_1 + 0x80);
            }
            iVar1 = FUN_0045941c(uVar4,*(long *)(param_1 + 0x88),*(long *)(param_1 + 0x90),
                                 *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                                 *(long *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x60),
                                 *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x68),
                                 *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x70),
                                 *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x78),
                                 &uStack_40,&local_48,&local_38);
            uVar4 = uStack_40;
            if (iVar1 != 0) {
              uVar2 = FUN_004595c4(lVar3,*(undefined8 *)(param_1 + 0x20),
                                   *(undefined8 *)(param_1 + 0x28),uStack_40,local_48,local_38,
                                   param_2,param_3);
              FUN_003c86b4(uVar4,"providers/implementations/kdfs/x942kdf.c",500);
              return uVar2;
            }
            FUN_00379868();
            FUN_0037995c("providers/implementations/kdfs/x942kdf.c",0x1ef,"x942kdf_derive");
            uVar4 = 0x8d;
          }
          else {
            FUN_00379868();
            FUN_0037995c("providers/implementations/kdfs/x942kdf.c",0x1e3,"x942kdf_derive");
            uVar4 = 200;
          }
        }
      }
      else {
        FUN_00379868();
        FUN_0037995c("providers/implementations/kdfs/x942kdf.c",0x1ce,"x942kdf_derive");
        uVar4 = 0x73;
      }
    }
    else {
      FUN_00379868();
      FUN_0037995c("providers/implementations/kdfs/x942kdf.c",0x1c2,"x942kdf_derive");
      uVar4 = 0xc6;
    }
    FUN_00379a5c(0x39,uVar4,0);
  }
  return 0;
}


// ===== 00459010  FUN_00459010 =====

undefined ** FUN_00459010(void)

{
  return &PTR_s_properties_0078a528;
}


// ===== 0045901c  FUN_0045901c =====

undefined8 FUN_0045901c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long local_38;
  
  uVar2 = FUN_0046b880(*param_1);
  if (param_2 != 0) {
    uVar3 = FUN_0043f7c4(param_1 + 1,param_2,uVar2);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    lVar4 = FUN_003cb19c(param_2,"secret");
    if ((((lVar4 != 0) || (lVar4 = FUN_003cb19c(param_2,&DAT_001e2b47), lVar4 != 0)) &&
        (*(long *)(lVar4 + 0x18) != 0)) && (*(long *)(lVar4 + 0x10) != 0)) {
      FUN_003c86b4(param_1[4],"providers/implementations/kdfs/x942kdf.c",0x19e);
      param_1[4] = 0;
      uVar3 = FUN_003cd608(lVar4,param_1 + 4,0,param_1 + 5);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
    }
    lVar4 = FUN_003cb19c(param_2,"acvp-info");
    if (((lVar4 != 0) && (*(long *)(lVar4 + 0x18) != 0)) && (*(long *)(lVar4 + 0x10) != 0)) {
      FUN_003c86b4(param_1[6],"providers/implementations/kdfs/x942kdf.c",0x19e);
      param_1[6] = 0;
      uVar3 = FUN_003cd608(lVar4,param_1 + 6,0,param_1 + 7);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
    }
    lVar4 = FUN_003cb19c(param_2,"partyu-info");
    if (((lVar4 != 0) || (lVar4 = FUN_003cb19c(param_2,&DAT_001d8b50), lVar4 != 0)) &&
       ((*(long *)(lVar4 + 0x18) != 0 && (*(long *)(lVar4 + 0x10) != 0)))) {
      FUN_003c86b4(param_1[8],"providers/implementations/kdfs/x942kdf.c",0x19e);
      param_1[8] = 0;
      uVar3 = FUN_003cd608(lVar4,param_1 + 8,0,param_1 + 0xc);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
    }
    lVar4 = FUN_003cb19c(param_2,"partyv-info");
    if (((lVar4 != 0) && (*(long *)(lVar4 + 0x18) != 0)) && (*(long *)(lVar4 + 0x10) != 0)) {
      FUN_003c86b4(param_1[9],"providers/implementations/kdfs/x942kdf.c",0x19e);
      param_1[9] = 0;
      uVar3 = FUN_003cd608(lVar4,param_1 + 9,0,param_1 + 0xd);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
    }
    lVar4 = FUN_003cb19c(param_2,"use-keybits");
    if ((lVar4 != 0) && (uVar3 = thunk_FUN_003cb238(lVar4,param_1 + 0x13), (int)uVar3 == 0)) {
      return uVar3;
    }
    lVar4 = FUN_003cb19c(param_2,"supp-pubinfo");
    if (lVar4 != 0) {
      if ((*(long *)(lVar4 + 0x18) != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
        FUN_003c86b4(param_1[10],"providers/implementations/kdfs/x942kdf.c",0x19e);
        param_1[10] = 0;
        uVar3 = FUN_003cd608(lVar4,param_1 + 10,0,param_1 + 0xe);
        if ((int)uVar3 == 0) {
          return uVar3;
        }
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
    }
    lVar4 = FUN_003cb19c(param_2,"supp-privinfo");
    if (((lVar4 != 0) && (*(long *)(lVar4 + 0x18) != 0)) && (*(long *)(lVar4 + 0x10) != 0)) {
      FUN_003c86b4(param_1[0xb],"providers/implementations/kdfs/x942kdf.c",0x19e);
      param_1[0xb] = 0;
      uVar3 = FUN_003cd608(lVar4,param_1 + 0xb,0,param_1 + 0xf);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
    }
    lVar4 = FUN_003cb19c(param_2,"cekalg");
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 8) != 4) {
        return 0;
      }
      lVar5 = FUN_003cb19c(param_2,"properties");
      uVar3 = 0;
      if (lVar5 != 0) {
        uVar3 = *(undefined8 *)(lVar4 + 0x10);
      }
      uVar2 = FUN_00459970(uVar2,*(undefined8 *)(lVar4 + 0x10),uVar3,&local_38);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      puVar1 = (&PTR_DAT_0078a738)[local_38 * 4];
      uVar2 = *(undefined8 *)(&DAT_0078a740 + local_38 * 0x20);
      param_1[0x10] = *(undefined8 *)(&DAT_0078a748 + local_38 * 0x20);
      param_1[0x11] = puVar1;
      param_1[0x12] = uVar2;
    }
  }
  return 1;
}


// ===== 00459370  FUN_00459370 =====

undefined ** FUN_00459370(void)

{
  return &PTR_DAT_0078a7b0;
}


// ===== 0045937c  FUN_0045937c =====

undefined8 FUN_0045937c(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_003cb140(param_2,&DAT_001f543b);
  if (lVar2 == 0) {
    return 0xfffffffe;
  }
  lVar3 = FUN_0043f900(param_1 + 8);
  if (lVar3 != 0) {
    uVar1 = FUN_00389a38();
    uVar4 = thunk_FUN_003cc2a4(lVar2,uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    return uVar4;
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/kdfs/x942kdf.c",0x1a9,"x942kdf_size");
  FUN_00379a5c(0x39,0x81,0);
  uVar4 = thunk_FUN_003cc2a4(lVar2,0);
  return uVar4;
}


// ===== 0045941c  FUN_0045941c =====

undefined4
FUN_0045941c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
            undefined8 param_13,long *param_14,undefined8 *param_15,long *param_16)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined1 auStack_b0 [56];
  undefined8 local_78;
  char *local_70 [2];
  
  local_78 = 0;
  local_70[0] = (char *)0x0;
  if (param_1 >> 0x18 != 0) {
    return 0;
  }
  iVar2 = (int)param_1 << 3;
  iVar1 = FUN_004597d0(auStack_b0,0,0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       param_9,param_10,param_11,param_12,param_13,iVar2,0,param_13,param_8,param_7)
  ;
  if ((iVar1 != 0) && (iVar1 = FUN_003cf2bc(auStack_b0,&local_78), iVar1 != 0)) {
    FUN_003cf324(auStack_b0);
    lVar3 = FUN_003c8474(local_78,"providers/implementations/kdfs/x942kdf.c",0xe6);
    if ((lVar3 != 0) &&
       (iVar2 = FUN_004597d0(auStack_b0,lVar3,local_78,param_2,param_3,param_4,param_5,param_6,
                             param_7,param_8,param_9,param_10,param_11,param_12,param_13,iVar2,
                             local_70), iVar2 != 0)) {
      lVar4 = FUN_003ce6d8(auStack_b0);
      uVar5 = 0;
      if ((lVar4 != lVar3) || (local_70[0] == (char *)0x0)) goto LAB_00459598;
      if ((*local_70[0] == '\x04') && (local_70[0][1] == '\x04')) {
        uVar5 = 1;
        *param_16 = (long)(local_70[0] + 2);
        *param_14 = lVar3;
        *param_15 = local_78;
        goto LAB_00459598;
      }
    }
  }
  uVar5 = 0;
LAB_00459598:
  FUN_003cf324(auStack_b0);
  return uVar5;
}


// ===== 004595c4  FUN_004595c4 =====

undefined8
FUN_004595c4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5,
            uint *param_6,void *param_7,ulong param_8)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  undefined1 auStack_a0 [64];
  
  if (((param_3 < 0x40000001) && (param_5 < 0x40000001)) &&
     (0xffffffffbfffffff < param_8 - 0x40000001)) {
    uVar1 = FUN_00389a38();
    if (0 < (int)uVar1) {
      lVar3 = FUN_0039d270();
      lVar4 = FUN_0039d270();
      uVar5 = 0;
      if ((lVar3 != 0) && (lVar4 != 0)) {
        iVar2 = FUN_0039d8c0(0,lVar4,param_1);
        if (iVar2 == 0) {
          uVar5 = 0;
        }
        else {
          *param_6 = 0x1000000;
          iVar2 = FUN_0039e0a8(lVar3,lVar4);
          if (iVar2 != 0) {
            uVar6 = 2;
            uVar7 = (ulong)uVar1;
            do {
              iVar2 = FUN_0039d938(lVar3,param_2,param_3);
              if ((iVar2 == 0) || (iVar2 = FUN_0039d938(lVar3,param_4,param_5), iVar2 == 0)) break;
              if (param_8 < uVar7) {
                iVar2 = FUN_0039dac8(lVar3,auStack_a0,0);
                if (iVar2 != 0) {
                  memcpy(param_7,auStack_a0,param_8);
                  uVar5 = 1;
                  goto LAB_00459780;
                }
                break;
              }
              iVar2 = FUN_0039dac8(lVar3,param_7,0);
              if (iVar2 == 0) break;
              param_8 = param_8 - uVar7;
              if (param_8 == 0) {
                uVar5 = 1;
                goto LAB_00459780;
              }
              uVar1 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
              param_7 = (void *)((long)param_7 + uVar7);
              *param_6 = uVar1 >> 0x10 | uVar1 << 0x10;
              iVar2 = FUN_0039e0a8(lVar3,lVar4);
              uVar6 = uVar6 + 1;
            } while (iVar2 != 0);
          }
          uVar5 = 0;
        }
      }
LAB_00459780:
      FUN_0039d284(uVar5,lVar3);
      FUN_0039d284(lVar4);
      FUN_003c89b8(auStack_a0,0x40);
      return uVar5;
    }
  }
  else {
    FUN_00379868();
    FUN_0037995c("providers/implementations/kdfs/x942kdf.c",0x11a,"x942kdf_hash_kdm");
    FUN_00379a5c(0x39,0x8e,0);
  }
  return 0;
}


// ===== 004597d0  FUN_004597d0 =====

ulong FUN_004597d0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,long param_8,undefined8 param_9
                  ,long param_10,undefined8 param_11,long param_12,undefined8 param_13,long param_14
                  ,undefined8 param_15,int param_16,long *param_17)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_2 == 0) {
    uVar2 = FUN_003ceb5c();
    iVar1 = (int)uVar2;
  }
  else {
    uVar2 = FUN_003ce940();
    iVar1 = (int)uVar2;
  }
  if ((((((iVar1 != 0) && (uVar2 = FUN_0045a1dc(param_1,0xffffffff), (int)uVar2 != 0)) &&
        ((param_14 == 0 || (uVar2 = FUN_00459ca8(param_1,3,param_14,param_15), (int)uVar2 != 0))))
       && (((param_12 == 0 || (uVar2 = FUN_00459ca8(param_1,2,param_12,param_13), (int)uVar2 != 0))
           && ((param_16 == 0 || (uVar2 = FUN_00459dc0(param_1,2), (int)uVar2 != 0)))))) &&
      (((param_10 == 0 || (uVar2 = FUN_00459ca8(param_1,1,param_10,param_11), (int)uVar2 != 0)) &&
       ((param_8 == 0 || (uVar2 = FUN_00459ca8(param_1,0,param_8,param_9), (int)uVar2 != 0)))))) &&
     ((((param_6 == 0 || (uVar2 = FUN_00459a60(param_1,0xffffffff,param_6,param_7), (int)uVar2 != 0)
        ) && (uVar2 = FUN_0045a1dc(param_1,0xffffffff), (int)uVar2 != 0)) &&
      (uVar2 = FUN_00459dc0(param_1,0xffffffff,1), (int)uVar2 != 0)))) {
    if (param_17 != (long *)0x0) {
      lVar3 = FUN_003ce6d8(param_1);
      *param_17 = lVar3;
      if (lVar3 == 0) {
        return 0;
      }
    }
    uVar2 = FUN_00459a60(param_1,0xffffffff,param_4,param_5);
    if ((((int)uVar2 != 0) && (uVar2 = FUN_0045a230(param_1,0xffffffff), (int)uVar2 != 0)) &&
       (uVar2 = FUN_0045a230(param_1,0xffffffff), (int)uVar2 != 0)) {
      iVar1 = FUN_003ceec8(param_1);
      return (ulong)(iVar1 != 0);
    }
  }
  return uVar2;
}


// ===== 00459970  FUN_00459970 =====

undefined8 FUN_00459970(void)

{
  int iVar1;
  long lVar2;
  undefined8 *in_x3;
  undefined8 uVar3;
  
  lVar2 = FUN_003823dc();
  if (lVar2 != 0) {
    iVar1 = FUN_00388e5c(lVar2,"AES-128-WRAP");
    if (iVar1 == 0) {
      iVar1 = FUN_00388e5c(lVar2,"AES-192-WRAP");
      if (iVar1 == 0) {
        iVar1 = FUN_00388e5c(lVar2,"AES-256-WRAP");
        if (iVar1 == 0) {
          iVar1 = FUN_00388e5c(lVar2,"DES3-WRAP");
          if (iVar1 == 0) goto LAB_00459a18;
          uVar3 = 3;
        }
        else {
          uVar3 = 2;
        }
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 0;
    }
    *in_x3 = uVar3;
    FUN_0037fa4c(lVar2);
    return 1;
  }
LAB_00459a18:
  FUN_00379868();
  FUN_0037995c("providers/implementations/kdfs/x942kdf.c",0x5f,"find_alg_id");
  FUN_00379a5c(0x39,0x91,0);
  FUN_0037fa4c(lVar2);
  return 0;
}


// ===== 00459a60  FUN_00459a60 =====

ulong FUN_00459a60(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  long local_40;
  long lStack_38;
  
  if ((int)param_2 < 0) {
    uVar2 = FUN_003cf164(param_1,param_3,param_4);
    if ((int)uVar2 != 0) {
      uVar2 = 1;
    }
  }
  else {
    if (0x1e < param_2) {
      return 0;
    }
    uVar2 = FUN_003cef34(param_1);
    if (((((int)uVar2 != 0) && (uVar2 = FUN_003cf164(param_1,param_3,param_4), (int)uVar2 != 0)) &&
        (uVar2 = FUN_003cf2bc(param_1,&lStack_38), (int)uVar2 != 0)) &&
       ((uVar2 = FUN_003ce6b8(param_1), (int)uVar2 != 0 &&
        (uVar2 = FUN_003cf2bc(param_1,&local_40), (int)uVar2 != 0)))) {
      if (lStack_38 == local_40) {
        return 1;
      }
      iVar1 = FUN_003cef94(param_1,param_2 | 0xa0,1);
      return (ulong)(iVar1 != 0);
    }
  }
  return uVar2;
}


// ===== 00459b74  FUN_00459b74 =====

ulong FUN_00459b74(undefined8 param_1,uint param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  long local_38;
  long local_18;
  
  if (-1 < (int)param_2) {
    if (0x1e < param_2) {
      return 0;
    }
    uVar2 = FUN_003cef34(param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  uVar2 = FUN_003cef34(param_1);
  if (((int)uVar2 != 0) &&
     ((param_3 == 0 || (uVar2 = FUN_003cef94(param_1,0xff,1), (int)uVar2 != 0)))) {
    iVar1 = FUN_003ce6b8(param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_003cef94(param_1,1,1);
      if (iVar1 != 0) {
        return 0;
      }
      if (-1 < (int)param_2) {
        uVar2 = FUN_003cf2bc(param_1,&local_18);
        if ((int)uVar2 == 0) {
          return uVar2;
        }
        uVar2 = FUN_003ce6b8(param_1);
        if ((int)uVar2 == 0) {
          return uVar2;
        }
        uVar2 = FUN_003cf2bc(param_1,&local_38);
        if ((int)uVar2 == 0) {
          return uVar2;
        }
        if (local_18 != local_38) {
          iVar1 = FUN_003cef94(param_1,param_2 | 0xa0,1);
          return (ulong)(iVar1 != 0);
        }
      }
      return 1;
    }
    uVar2 = 0;
  }
  return uVar2;
}


// ===== 00459ca8  FUN_00459ca8 =====

ulong FUN_00459ca8(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  long local_40;
  long lStack_38;
  
  if (-1 < (int)param_2) {
    if (0x1e < param_2) {
      return 0;
    }
    uVar2 = FUN_003cef34(param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  uVar2 = FUN_003cef34(param_1);
  if (((((int)uVar2 == 0) || (uVar2 = FUN_003cf164(param_1,param_3,param_4), (int)uVar2 == 0)) ||
      (uVar2 = FUN_003ce6b8(param_1), (int)uVar2 == 0)) ||
     (uVar2 = FUN_003cef94(param_1,4,1), (int)uVar2 == 0)) {
    return uVar2;
  }
  if (-1 < (int)param_2) {
    uVar2 = FUN_003cf2bc(param_1,&lStack_38);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    uVar2 = FUN_003ce6b8(param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    uVar2 = FUN_003cf2bc(param_1,&local_40);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    if (lStack_38 != local_40) {
      iVar1 = FUN_003cef94(param_1,param_2 | 0xa0,1);
      return (ulong)(iVar1 != 0);
    }
  }
  return 1;
}


// ===== 00459dc0  FUN_00459dc0 =====

void FUN_00459dc0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined4 local_14;
  
  local_14 = 0;
  if (param_3 != 0) {
    puVar2 = (undefined1 *)((ulong)&local_14 | 3);
    do {
      *puVar2 = (char)param_3;
      bVar1 = 0xff < param_3;
      puVar2 = puVar2 + -1;
      param_3 = param_3 >> 8;
    } while (bVar1);
  }
  FUN_00459ca8(param_1,param_2,&local_14,4);
  return;
}


// ===== 00459e08  FUN_00459e08 =====

void FUN_00459e08(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 local_14;
  
  local_14 = param_3;
  FUN_00459e34(param_1,param_2,FUN_00459f70,&local_14);
  return;
}


// ===== 00459e34  FUN_00459e34 =====

ulong FUN_00459e34(undefined8 param_1,uint param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  undefined4 local_44;
  long local_40;
  long local_38;
  
  local_44 = 0;
  if (-1 < (int)param_2) {
    if (0x1e < param_2) {
      return 0;
    }
    uVar2 = FUN_003cef34(param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  uVar2 = FUN_003cef34(param_1);
  if (((((int)uVar2 == 0) || (uVar2 = (*param_3)(param_1,param_4,&local_44), (int)uVar2 == 0)) ||
      (((char)local_44 < '\0' && (uVar2 = FUN_003cef94(param_1,0,1), (int)uVar2 == 0)))) ||
     ((uVar2 = FUN_003ce6b8(param_1), (int)uVar2 == 0 ||
      (uVar2 = FUN_003cef94(param_1,2,1), (int)uVar2 == 0)))) {
    return uVar2;
  }
  if (-1 < (int)param_2) {
    uVar2 = FUN_003cf2bc(param_1,&local_38);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    uVar2 = FUN_003ce6b8(param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    uVar2 = FUN_003cf2bc(param_1,&local_40);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    if (local_38 != local_40) {
      iVar1 = FUN_003cef94(param_1,param_2 | 0xa0,1);
      return (ulong)(iVar1 != 0);
    }
  }
  return 1;
}


// ===== 00459f70  FUN_00459f70 =====

void FUN_00459f70(undefined8 param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  if (*param_2 == 0) {
    FUN_003cef94(param_1,0,1);
    return;
  }
  uVar2 = 0;
  uVar1 = *param_2;
  do {
    uVar3 = uVar1;
    uVar2 = uVar2 + 1;
    uVar1 = uVar3 >> 8;
  } while (0xff < uVar3);
  *param_3 = uVar3;
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  FUN_003cef94(param_1,*param_2,uVar2);
  return;
}


// ===== 00459fb8  FUN_00459fb8 =====

undefined8 FUN_00459fb8(undefined8 param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_14;
  
  if (param_3 != 0) {
    iVar1 = FUN_003908c4(param_3);
    if (iVar1 == 0) {
      iVar1 = FUN_0038f448(param_3);
      if (iVar1 != 0) {
        local_14 = 0;
        uVar2 = FUN_00459e34(param_1,param_2,FUN_00459f70,&local_14);
        return uVar2;
      }
      uVar2 = FUN_00459e34(param_1,param_2,FUN_0045a054,param_3);
      return uVar2;
    }
  }
  return 0;
}


// ===== 0045a054  FUN_0045a054 =====

undefined8 FUN_0045a054(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long local_38;
  
  local_38 = 0;
  iVar3 = FUN_0038f2c0(param_2);
  uVar1 = iVar3 + 0xe;
  if ((int)(iVar3 + 7U) < 0 == SCARRY4(iVar3,7)) {
    uVar1 = iVar3 + 7U;
  }
  lVar2 = (long)((ulong)uVar1 << 0x20) >> 0x23;
  lVar4 = FUN_003f154c(param_2);
  uVar6 = lVar2 - 1;
  *param_3 = (uint)(*(ulong *)(lVar4 + (uVar6 & 0xfffffffffffffff8)) >> ((uVar6 & 7) << 3)) & 0xff;
  uVar5 = FUN_003ce2c4(param_1,lVar2,&local_38);
  if ((int)uVar5 != 0) {
    if (local_38 != 0) {
      FUN_00390014(param_2);
    }
    uVar5 = 1;
  }
  return uVar5;
}


// ===== 0045a0f0  FUN_0045a0f0 =====

ulong FUN_0045a0f0(undefined8 param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  long local_30;
  long lStack_28;
  
  if (-1 < (int)param_2) {
    if (0x1e < param_2) {
      return 0;
    }
    uVar2 = FUN_003cef34(param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  uVar2 = FUN_003cef34(param_1);
  if ((((int)uVar2 == 0) || (uVar2 = FUN_003ce6b8(param_1), (int)uVar2 == 0)) ||
     (uVar2 = FUN_003cef94(param_1,5,1), (int)uVar2 == 0)) {
    return uVar2;
  }
  if (-1 < (int)param_2) {
    uVar2 = FUN_003cf2bc(param_1,&lStack_28);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    uVar2 = FUN_003ce6b8(param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    uVar2 = FUN_003cf2bc(param_1,&local_30);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    if (lStack_28 != local_30) {
      iVar1 = FUN_003cef94(param_1,param_2 | 0xa0,1);
      return (ulong)(iVar1 != 0);
    }
  }
  return 1;
}


// ===== 0045a1dc  FUN_0045a1dc =====

bool FUN_0045a1dc(undefined8 param_1,uint param_2)

{
  int iVar1;
  
  if (-1 < (int)param_2) {
    if (param_2 < 0x1f) {
      iVar1 = FUN_003cef34();
      if (iVar1 != 0) goto LAB_0045a208;
    }
    return false;
  }
LAB_0045a208:
  iVar1 = FUN_003cef34(param_1);
  return iVar1 != 0;
}


// ===== 0045a230  FUN_0045a230 =====

ulong FUN_0045a230(undefined8 param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  long local_40;
  long lStack_38;
  long local_30;
  long local_28;
  
  uVar2 = FUN_003cf2bc(param_1,&lStack_38);
  if ((((int)uVar2 != 0) && (uVar2 = FUN_003ce6b8(param_1), (int)uVar2 != 0)) &&
     (uVar2 = FUN_003cf2bc(param_1,&local_40), (int)uVar2 != 0)) {
    if (lStack_38 == local_40) {
      uVar2 = FUN_003cebb8(param_1,2);
      iVar1 = (int)uVar2;
    }
    else {
      uVar2 = FUN_003cef94(param_1,0x30,1);
      iVar1 = (int)uVar2;
    }
    if (iVar1 != 0) {
      if (-1 < (int)param_2) {
        if (0x1e < param_2) {
          return 0;
        }
        uVar2 = FUN_003cf2bc(param_1,&local_28);
        if ((int)uVar2 == 0) {
          return uVar2;
        }
        uVar2 = FUN_003ce6b8(param_1);
        if ((int)uVar2 == 0) {
          return uVar2;
        }
        uVar2 = FUN_003cf2bc(param_1,&local_30);
        if ((int)uVar2 == 0) {
          return uVar2;
        }
        if (local_28 != local_30) {
          iVar1 = FUN_003cef94(param_1,param_2 | 0xa0,1);
          return (ulong)(iVar1 != 0);
        }
      }
      return 1;
    }
  }
  return uVar2;
}


// ===== 0045a34c  FUN_0045a34c =====

undefined8 * FUN_0045a34c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_003c8474(0x18,"providers/implementations/kem/rsa_kem.c",0x56);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = FUN_0046b880(param_1);
    *puVar1 = uVar2;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  }
  return puVar1;
}


// ===== 0045a3a0  FUN_0045a3a0 =====

void FUN_0045a3a0(void)

{
  FUN_0045a7d0();
  return;
}


// ===== 0045a3a8  FUN_0045a3a8 =====

undefined8 FUN_0045a3a8(long param_1,long param_2,long *param_3,undefined8 param_4,long *param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0xfffffffe;
  }
  iVar1 = FUN_003f9914(*(undefined8 *)(param_1 + 8));
  lVar7 = (long)iVar1;
  if (param_2 == 0) {
    if (iVar1 == 0) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/kem/rsa_kem.c",0x101,"rsasve_generate");
      FUN_00379a5c(0x39,0x9e,0);
    }
    else if (param_3 != (long *)0x0 || param_5 != (long *)0x0) goto LAB_0045a4e4;
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 8);
    FUN_003fa79c(uVar8);
    lVar3 = FUN_003914c4();
    if (lVar3 == 0) {
      return 0;
    }
    FUN_003916e0();
    uVar4 = FUN_00391898(lVar3);
    lVar5 = FUN_00391898(lVar3);
    if (lVar5 != 0) {
      uVar8 = FUN_003fb4a8(uVar8);
      lVar6 = FUN_0038f85c(uVar4,uVar8);
      if ((((lVar6 != 0) && (iVar2 = FUN_003993bc(uVar4,3), iVar2 != 0)) &&
          (iVar2 = FUN_003f6804(lVar5,uVar4,0,lVar3), iVar2 != 0)) &&
         (iVar2 = FUN_0039928c(lVar5,2), iVar2 != 0)) {
        iVar2 = FUN_0038fe10(lVar5,param_4,iVar1);
        FUN_0039180c(lVar3);
        FUN_00391550(lVar3);
        if (iVar2 != iVar1) {
          return 0;
        }
        iVar1 = FUN_003f993c(iVar1,param_4,param_2,*(undefined8 *)(param_1 + 8),3);
        if (iVar1 == 0) {
          FUN_003c89b8(param_4,lVar7);
          return 0;
        }
LAB_0045a4e4:
        if (param_3 != (long *)0x0) {
          *param_3 = lVar7;
        }
        if (param_5 != (long *)0x0) {
          *param_5 = lVar7;
        }
        return 1;
      }
    }
    FUN_0039180c(lVar3);
    FUN_00391550(lVar3);
  }
  return 0;
}


// ===== 0045a55c  FUN_0045a55c =====

void FUN_0045a55c(void)

{
  FUN_0045a7d0();
  return;
}


// ===== 0045a564  FUN_0045a564 =====

ulong FUN_0045a564(long param_1,long param_2,long *param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0xfffffffe;
  }
  iVar1 = FUN_003f9914(*(undefined8 *)(param_1 + 8));
  if (param_2 == 0) {
    if (iVar1 != 0) {
      *param_3 = (long)iVar1;
      return 1;
    }
    FUN_00379868();
    FUN_0037995c("providers/implementations/kem/rsa_kem.c",0x130,"rsasve_recover");
    uVar2 = 0x9e;
  }
  else {
    if (iVar1 == param_5) {
      iVar1 = FUN_003f9954(param_5,param_4,param_2,*(undefined8 *)(param_1 + 8),3);
      return (ulong)(0 < iVar1);
    }
    FUN_00379868();
    FUN_0037995c("providers/implementations/kem/rsa_kem.c",0x139,"rsasve_recover");
    uVar2 = 0x8e;
  }
  FUN_00379a5c(0x39,uVar2,0);
  return 0;
}


// ===== 0045a674  FUN_0045a674 =====

void FUN_0045a674(long param_1)

{
  FUN_003fa6a0(*(undefined8 *)(param_1 + 8));
  FUN_003c86b4(param_1,"providers/implementations/kem/rsa_kem.c",0x65);
  return;
}


// ===== 0045a6a8  FUN_0045a6a8 =====

undefined8 * FUN_0045a6a8(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)FUN_003c8474(0x18,"providers/implementations/kem/rsa_kem.c",0x6d);
  if (puVar2 != (undefined8 *)0x0) {
    uVar4 = *param_1;
    uVar3 = param_1[2];
    puVar2[1] = param_1[1];
    *puVar2 = uVar4;
    puVar2[2] = uVar3;
    if ((puVar2[1] != 0) && (iVar1 = FUN_003fa780(puVar2[1]), iVar1 == 0)) {
      FUN_003c86b4(puVar2,"providers/implementations/kem/rsa_kem.c",0x73);
      return (undefined8 *)0x0;
    }
  }
  return puVar2;
}


// ===== 0045a72c  FUN_0045a72c =====

bool FUN_0045a72c(long param_1)

{
  return param_1 != 0;
}


// ===== 0045a738  FUN_0045a738 =====

undefined * FUN_0045a738(void)

{
  return &DAT_0020ee60;
}


// ===== 0045a744  FUN_0045a744 =====

long FUN_0045a744(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_1 != 0) {
    if (param_2 != 0) {
      lVar2 = FUN_003cb19c(param_2,"operation");
      if (lVar2 != 0) {
        if (((*(int *)(lVar2 + 8) != 4) || (*(long *)(lVar2 + 0x10) == 0)) ||
           (iVar1 = FUN_003cab04("RSASVE"), iVar1 != 0)) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      return 1;
    }
    param_1 = 1;
  }
  return param_1;
}


// ===== 0045a7c4  FUN_0045a7c4 =====

undefined ** FUN_0045a7c4(void)

{
  return &PTR_s_operation_0078a8c0;
}


// ===== 0045a7d0  FUN_0045a7d0 =====

undefined8 FUN_0045a7d0(undefined8 *param_1,long param_2,long param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = 0;
  if ((((param_1 == (undefined8 *)0x0) || (param_2 == 0)) ||
      (uVar2 = FUN_00440b0c(*param_1,param_2,param_4), (int)uVar2 == 0)) ||
     (uVar2 = FUN_003fa780(param_2), (int)uVar2 == 0)) {
    return uVar2;
  }
  FUN_003fa6a0(param_1[1]);
  param_1[1] = param_2;
  if ((param_3 != 0) && (lVar3 = FUN_003cb19c(param_3,"operation"), lVar3 != 0)) {
    if (*(int *)(lVar3 + 8) != 4) {
      return 0;
    }
    if ((*(long *)(lVar3 + 0x10) == 0) || (iVar1 = FUN_003cab04("RSASVE"), iVar1 != 0)) {
      return 0;
    }
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return 1;
}


// ===== 0045a8a0  FUN_0045a8a0 =====

undefined8 * FUN_0045a8a0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)
             FUN_003c8474(0x10,"providers/implementations/keymgmt/kdf_legacy_kmgmt.c",0x24);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar2 + 1) = 1;
      uVar3 = FUN_0046b880(param_1);
      *puVar2 = uVar3;
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}


// ===== 0045a90c  FUN_0045a90c =====

void FUN_0045a90c(long param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = iVar1 + -1;
    *(int *)(param_1 + 8) = iVar2;
    if (iVar2 == 0 || iVar1 < 1) {
      FUN_003c86b4(param_1,"providers/implementations/keymgmt/kdf_legacy_kmgmt.c",0x3d);
      return;
    }
  }
  return;
}


// ===== 0045a934  FUN_0045a934 =====

undefined8 FUN_0045a934(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0043eb70();
  if ((int)uVar1 != 0) {
    uVar1 = 1;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return uVar1;
}


// ===== 0045a968  FUN_0045a968 =====

undefined8 * FUN_0045a968(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)
             FUN_003c8474(0x10,"providers/implementations/keymgmt/kdf_legacy_kmgmt.c",0x24);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar2 + 1) = 1;
      uVar3 = FUN_0046b880(param_1);
      *puVar2 = uVar3;
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}


// ===== 0045a9d4  FUN_0045a9d4 =====

void FUN_0045a9d4(long param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = iVar1 + -1;
    *(int *)(param_1 + 8) = iVar2;
    if (iVar2 == 0 || iVar1 < 1) {
      FUN_003c86b4(param_1,"providers/implementations/keymgmt/kdf_legacy_kmgmt.c",0x3d);
      return;
    }
  }
  return;
}


// ===== 0045a9fc  FUN_0045a9fc =====

undefined8 FUN_0045a9fc(void)

{
  return 1;
}


// ===== 0045aa04  FUN_0045aa04 =====

undefined8 * FUN_0045aa04(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)
             FUN_003c8474(0x48,"providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x47);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_1;
      *(undefined4 *)(puVar2 + 1) = 1;
      *(undefined4 *)(puVar2 + 8) = param_2;
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}


