// ===== 007935e0  FUN_007935e0 =====

void FUN_007935e0(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = FUN_00719ff4();
  *param_2 = lVar1;
  if (lVar1 != 0) {
    FUN_0077a170(param_1,lVar1);
    return;
  }
  return;
}


// ===== 0079362c  FUN_0079362c =====

long FUN_0079362c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  local_30 = param_1;
  local_28 = param_2;
  lVar1 = FUN_007934f4(&local_30);
  if ((lVar1 == 0) || (local_28 != 0)) {
    FUN_00777eb4(4,0,100,"../../third_party/boringssl/src/crypto/rsa/rsa_asn1.cc",0x55);
    FUN_00743408(lVar1);
    lVar1 = 0;
  }
  return lVar1;
}


// ===== 0079369c  FUN_0079369c =====

undefined8 FUN_0079369c(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  iVar1 = FUN_00771098(param_1,&local_50,0x20000010);
  if (iVar1 == 0) goto LAB_00793730;
  if (*(long *)(param_2 + 8) != 0) {
    iVar1 = FUN_0077a228(&local_50);
    if (iVar1 == 0) goto LAB_00793730;
    if (*(long *)(param_2 + 0x10) != 0) {
      iVar1 = FUN_0077a228(&local_50);
      if ((iVar1 != 0) && (iVar1 = FUN_00770ae8(param_1), iVar1 != 0)) {
        return 1;
      }
      goto LAB_00793730;
    }
  }
  FUN_00777eb4(4,0,0x90,"../../third_party/boringssl/src/crypto/rsa/rsa_asn1.cc",0x32);
LAB_00793730:
  FUN_00777eb4(4,0,0x79,"../../third_party/boringssl/src/crypto/rsa/rsa_asn1.cc",0x62);
  return 0;
}


// ===== 00793764  FUN_00793764 =====

undefined8 FUN_00793764(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_0077a228();
    return uVar1;
  }
  FUN_00777eb4(4,0,0x90,"../../third_party/boringssl/src/crypto/rsa/rsa_asn1.cc",0x32);
  return 0;
}


// ===== 007937a0  FUN_007937a0 =====

long FUN_007937a0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 *puStack_28;
  
  lVar2 = FUN_00742cb0();
  if (lVar2 == 0) {
    return 0;
  }
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  iVar1 = FUN_00772950(param_1,&local_30,0x20000010);
  if ((iVar1 == 0) || (iVar1 = FUN_00772b1c(&local_30,&local_38), iVar1 == 0)) {
    uVar4 = 100;
    uVar5 = 0x84;
  }
  else if (local_38 == (undefined1 *)0x0) {
    lVar3 = FUN_00719ff4();
    *(long *)(lVar2 + 8) = lVar3;
    if ((lVar3 == 0) || (iVar1 = FUN_0077a170(&local_30,lVar3), iVar1 == 0)) goto LAB_0079383c;
    lVar3 = FUN_00719ff4();
    *(long *)(lVar2 + 0x10) = lVar3;
    if ((lVar3 == 0) || (iVar1 = FUN_0077a170(&local_30,lVar3), iVar1 == 0)) goto LAB_0079383c;
    lVar3 = FUN_00719ff4();
    *(long *)(lVar2 + 0x18) = lVar3;
    if ((lVar3 == 0) || (iVar1 = FUN_0077a170(&local_30,lVar3), iVar1 == 0)) goto LAB_0079383c;
    lVar3 = FUN_00719ff4();
    *(long *)(lVar2 + 0x20) = lVar3;
    if ((lVar3 == 0) ||
       ((((iVar1 = FUN_0077a170(&local_30,lVar3), iVar1 == 0 ||
          (iVar1 = FUN_007935e0(&local_30,lVar2 + 0x28), iVar1 == 0)) ||
         (iVar1 = FUN_007935e0(&local_30,lVar2 + 0x30), iVar1 == 0)) ||
        ((iVar1 = FUN_007935e0(&local_30,lVar2 + 0x38), iVar1 == 0 ||
         (iVar1 = FUN_007935e0(&local_30,lVar2 + 0x40), iVar1 == 0)))))) goto LAB_0079383c;
    if (puStack_28 == (undefined1 *)0x0) {
      iVar1 = FUN_00742cbc(lVar2);
      if (iVar1 != 0) {
        return lVar2;
      }
      uVar4 = 0x68;
      uVar5 = 0x9e;
    }
    else {
      uVar4 = 100;
      uVar5 = 0x99;
    }
  }
  else {
    uVar4 = 0x6a;
    uVar5 = 0x89;
  }
  FUN_00777eb4(4,0,uVar4,"../../third_party/boringssl/src/crypto/rsa/rsa_asn1.cc",uVar5);
LAB_0079383c:
  FUN_00743408(lVar2);
  return 0;
}


// ===== 0079395c  FUN_0079395c =====

long FUN_0079395c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  local_30 = param_1;
  local_28 = param_2;
  lVar1 = FUN_007937a0(&local_30);
  if ((lVar1 == 0) || (local_28 != 0)) {
    FUN_00777eb4(4,0,100,"../../third_party/boringssl/src/crypto/rsa/rsa_asn1.cc",0xae);
    FUN_00743408(lVar1);
    lVar1 = 0;
  }
  return lVar1;
}


// ===== 007939cc  FUN_007939cc =====

undefined8 FUN_007939cc(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  iVar1 = FUN_00771098(param_1,&local_50,0x20000010);
  if ((iVar1 == 0) || (iVar1 = FUN_007719cc(&local_50,0), iVar1 == 0)) goto LAB_00793ae4;
  if (*(long *)(param_2 + 8) != 0) {
    iVar1 = FUN_0077a228(&local_50);
    if (iVar1 == 0) goto LAB_00793ae4;
    if (*(long *)(param_2 + 0x10) != 0) {
      iVar1 = FUN_0077a228(&local_50);
      if (iVar1 == 0) goto LAB_00793ae4;
      if (*(long *)(param_2 + 0x18) != 0) {
        iVar1 = FUN_0077a228(&local_50);
        if (iVar1 == 0) goto LAB_00793ae4;
        if (*(long *)(param_2 + 0x20) != 0) {
          iVar1 = FUN_0077a228(&local_50);
          if (iVar1 == 0) goto LAB_00793ae4;
          if (*(long *)(param_2 + 0x28) != 0) {
            iVar1 = FUN_0077a228(&local_50);
            if (iVar1 == 0) goto LAB_00793ae4;
            if (*(long *)(param_2 + 0x30) != 0) {
              iVar1 = FUN_0077a228(&local_50);
              if (iVar1 == 0) goto LAB_00793ae4;
              if (*(long *)(param_2 + 0x38) != 0) {
                iVar1 = FUN_0077a228(&local_50);
                if (((iVar1 != 0) &&
                    (iVar1 = FUN_00793764(&local_50,*(undefined8 *)(param_2 + 0x40)), iVar1 != 0))
                   && (iVar1 = FUN_00770ae8(param_1), iVar1 != 0)) {
                  return 1;
                }
                goto LAB_00793ae4;
              }
            }
          }
        }
      }
    }
  }
  FUN_00777eb4(4,0,0x90,"../../third_party/boringssl/src/crypto/rsa/rsa_asn1.cc",0x32);
LAB_00793ae4:
  FUN_00777eb4(4,0,0x79,"../../third_party/boringssl/src/crypto/rsa/rsa_asn1.cc",0xc0);
  return 0;
}


// ===== 00793b18  FUN_00793b18 =====

undefined4 FUN_00793b18(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00770970(&local_50);
  iVar1 = FUN_00770984(&local_50,0x100);
  if ((iVar1 == 0) || (iVar1 = FUN_0079369c(&local_50,param_1), iVar1 == 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_007708b4(&local_50,param_2);
  }
  FUN_00770a10(&local_50);
  return uVar2;
}


// ===== 00793ba0  FUN_00793ba0 =====

undefined4 FUN_00793ba0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00770970(&local_50);
  iVar1 = FUN_00770984(&local_50,0x200);
  if ((iVar1 == 0) || (iVar1 = FUN_007939cc(&local_50,param_1), iVar1 == 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_007708b4(&local_50,param_2);
  }
  FUN_00770a10(&local_50);
  return uVar2;
}


// ===== 00793c28  FUN_00793c28 =====

undefined8 FUN_00793c28(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 < 2) {
    if (param_1 == 0) {
      return 0;
    }
    if (param_1 == 1) {
      uVar1 = FUN_0072abc4();
      return uVar1;
    }
  }
  else {
    if (param_1 == 2) {
      uVar1 = FUN_0072ac44();
      return uVar1;
    }
    if (param_1 == 3) {
      uVar1 = FUN_0072acc4();
      return uVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00793c74  FUN_00793c74 =====

undefined8 FUN_00793c74(undefined8 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  long *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *local_38;
  undefined1 *local_18;
  
  local_18 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  iVar1 = FUN_00772950(param_1,&puStack_40,0x20000010);
  if (((((((iVar1 == 0) || (iVar1 = FUN_00772950(&puStack_40,&local_50,0xa0000000), iVar1 == 0)) ||
         (iVar1 = FUN_00772950(&puStack_40,&local_60,0xa0000001), iVar1 == 0)) ||
        ((iVar1 = FUN_00772950(&local_60,&puStack_70,0x20000010), iVar1 == 0 ||
         (iVar1 = FUN_00772950(&puStack_70,&local_80,6), iVar1 == 0)))) ||
       ((puStack_78 != (undefined1 *)0x9 ||
        ((*local_80 != 0x1010df78648862a || (char)local_80[1] != '\b' ||
         (puStack_58 != (undefined1 *)0x0)))))) ||
      (iVar1 = FUN_00772950(&puStack_40,&local_90,0xa0000002), iVar1 == 0)) ||
     ((iVar1 = FUN_00772b1c(&local_90,&local_18), iVar1 == 0 || (puStack_88 != (undefined1 *)0x0))))
  {
    uVar3 = 0x152;
  }
  else {
    if ((param_3 != 0) && (local_38 != (undefined1 *)0x0)) {
      local_a8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      local_a0 = &DAT_aaaaaaaaaaaaaaaa;
      iVar1 = FUN_00772950(&puStack_40,&local_a0,0xa0000003);
      if ((iVar1 == 0) ||
         ((iVar1 = FUN_00772b1c(&local_a0,&local_a8), iVar1 == 0 || (local_a8 != (undefined1 *)0x1))
         )) {
        uVar3 = 0x15f;
        goto LAB_00793e0c;
      }
    }
    if (local_38 == (undefined1 *)0x0) {
      iVar1 = FUN_007757ec(&local_50);
      if ((iVar1 == 0) || (puStack_48 != (undefined1 *)0x0)) {
        uVar3 = 0x16a;
      }
      else {
        iVar2 = FUN_007757ec(&puStack_70);
        if ((iVar2 == iVar1) && (local_68 == (undefined1 *)0x0)) {
          if (iVar1 - 0x2a0U < 3) {
            if (local_18 == (undefined1 *)(ulong)((iVar1 - 0x2a0U) * 0x10 + 0x20)) {
              *param_2 = iVar1 + -0x29f;
              return 1;
            }
            uVar3 = 0x18a;
          }
          else {
            uVar3 = 0x186;
          }
        }
        else {
          uVar3 = 0x171;
        }
      }
    }
    else {
      uVar3 = 0x164;
    }
  }
LAB_00793e0c:
  FUN_00777eb4(4,0,100,"../../third_party/boringssl/src/crypto/rsa/rsa_asn1.cc",uVar3);
  return 0;
}


// ===== 00793f18  FUN_00793f18 =====

undefined4
FUN_00793f18(undefined1 *param_1,ulong param_2,void *param_3,ulong param_4,undefined8 param_5,
            undefined8 param_6,long param_7,long param_8)

{
  undefined1 *puVar1;
  size_t __n;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined4 uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 *local_b0 [4];
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (param_7 == 0) {
    param_7 = FUN_0072aac4();
  }
  lVar13 = param_7;
  if (param_8 != 0) {
    lVar13 = param_8;
  }
  uVar6 = FUN_0072a5a0(param_7);
  uVar10 = uVar6 * 2;
  if (param_2 < uVar10 + 2) {
    FUN_00777eb4(4,0,0x7e,"../../third_party/boringssl/src/crypto/rsa/rsa_crypt.cc",0x3c);
    uVar19 = 0;
    goto LAB_007941a8;
  }
  uVar20 = param_2 - 1;
  if (uVar20 + ~uVar10 < param_4) {
    uVar8 = 0x72;
    uVar9 = 0x42;
  }
  else {
    if (uVar10 < uVar20) {
      *param_1 = 0;
      iVar5 = FUN_0072a5ac(param_5,param_6,param_1 + uVar6 + 1,0,param_7,0);
      if (iVar5 == 0) {
LAB_00794194:
        puVar7 = (undefined1 *)0x0;
LAB_0079419c:
        uVar19 = 0;
      }
      else {
        puVar1 = param_1 + uVar6 + 1;
        __n = (uVar20 - param_4) + ~uVar10;
        if (__n != 0) {
          memset(puVar1 + uVar6,0,__n);
        }
        puVar1[~uVar6 + (uVar20 - param_4)] = 1;
        if (param_4 != 0) {
          memcpy(param_1 + (param_2 - param_4),param_3,param_4);
        }
        iVar5 = FUN_00793258(param_1 + 1,uVar6);
        if (iVar5 == 0) goto LAB_00794194;
        uVar10 = uVar20 - uVar6;
        puVar7 = (undefined1 *)FUN_0078c954(uVar20 - uVar6);
        if ((puVar7 == (undefined1 *)0x0) ||
           (iVar5 = FUN_00741df8(puVar7,uVar20 - uVar6,param_1 + 1,uVar6,lVar13), iVar5 == 0))
        goto LAB_0079419c;
        if (uVar20 != uVar6) {
          if ((uVar10 < 8) || ((puVar1 < puVar7 + uVar10 && (puVar7 < param_1 + param_2)))) {
            uVar20 = 0;
          }
          else {
            if (uVar10 < 0x20) {
              uVar18 = 0;
            }
            else {
              uVar20 = uVar10 & 0xffffffffffffffe0;
              puVar15 = (undefined8 *)(param_1 + uVar6 + 0x11);
              puVar17 = (undefined8 *)(puVar7 + 0x10);
              uVar18 = uVar10 & 0xffffffffffffffe0;
              do {
                uVar9 = puVar15[-1];
                uVar8 = puVar15[-2];
                uVar26 = puVar15[1];
                uVar25 = *puVar15;
                uVar18 = uVar18 - 0x20;
                uVar22 = puVar17[-1];
                uVar21 = puVar17[-2];
                uVar24 = puVar17[1];
                uVar23 = *puVar17;
                puVar17 = puVar17 + 4;
                puVar15[-1] = CONCAT17((byte)((ulong)uVar9 >> 0x38) ^ (byte)((ulong)uVar22 >> 0x38),
                                       CONCAT16((byte)((ulong)uVar9 >> 0x30) ^
                                                (byte)((ulong)uVar22 >> 0x30),
                                                CONCAT15((byte)((ulong)uVar9 >> 0x28) ^
                                                         (byte)((ulong)uVar22 >> 0x28),
                                                         CONCAT14((byte)((ulong)uVar9 >> 0x20) ^
                                                                  (byte)((ulong)uVar22 >> 0x20),
                                                                  CONCAT13((byte)((ulong)uVar9 >>
                                                                                 0x18) ^
                                                                           (byte)((ulong)uVar22 >>
                                                                                 0x18),
                                                                           CONCAT12((byte)((ulong)
                                                  uVar9 >> 0x10) ^ (byte)((ulong)uVar22 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar9 >> 8) ^
                                                           (byte)((ulong)uVar22 >> 8),
                                                           (byte)uVar9 ^ (byte)uVar22)))))));
                puVar15[-2] = CONCAT17((byte)((ulong)uVar8 >> 0x38) ^ (byte)((ulong)uVar21 >> 0x38),
                                       CONCAT16((byte)((ulong)uVar8 >> 0x30) ^
                                                (byte)((ulong)uVar21 >> 0x30),
                                                CONCAT15((byte)((ulong)uVar8 >> 0x28) ^
                                                         (byte)((ulong)uVar21 >> 0x28),
                                                         CONCAT14((byte)((ulong)uVar8 >> 0x20) ^
                                                                  (byte)((ulong)uVar21 >> 0x20),
                                                                  CONCAT13((byte)((ulong)uVar8 >>
                                                                                 0x18) ^
                                                                           (byte)((ulong)uVar21 >>
                                                                                 0x18),
                                                                           CONCAT12((byte)((ulong)
                                                  uVar8 >> 0x10) ^ (byte)((ulong)uVar21 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar8 >> 8) ^
                                                           (byte)((ulong)uVar21 >> 8),
                                                           (byte)uVar8 ^ (byte)uVar21)))))));
                puVar15[1] = CONCAT17((byte)((ulong)uVar26 >> 0x38) ^ (byte)((ulong)uVar24 >> 0x38),
                                      CONCAT16((byte)((ulong)uVar26 >> 0x30) ^
                                               (byte)((ulong)uVar24 >> 0x30),
                                               CONCAT15((byte)((ulong)uVar26 >> 0x28) ^
                                                        (byte)((ulong)uVar24 >> 0x28),
                                                        CONCAT14((byte)((ulong)uVar26 >> 0x20) ^
                                                                 (byte)((ulong)uVar24 >> 0x20),
                                                                 CONCAT13((byte)((ulong)uVar26 >>
                                                                                0x18) ^
                                                                          (byte)((ulong)uVar24 >>
                                                                                0x18),
                                                                          CONCAT12((byte)((ulong)
                                                  uVar26 >> 0x10) ^ (byte)((ulong)uVar24 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar26 >> 8) ^
                                                           (byte)((ulong)uVar24 >> 8),
                                                           (byte)uVar26 ^ (byte)uVar24)))))));
                *puVar15 = CONCAT17((byte)((ulong)uVar25 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar25 >> 0x30) ^
                                             (byte)((ulong)uVar23 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar25 >> 0x28) ^
                                                      (byte)((ulong)uVar23 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar25 >> 0x20) ^
                                                               (byte)((ulong)uVar23 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar25 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar23 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar25 >> 0x10) ^
                                                           (byte)((ulong)uVar23 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar25 >> 8) ^
                                                                    (byte)((ulong)uVar23 >> 8),
                                                                    (byte)uVar25 ^ (byte)uVar23)))))
                                            ));
                puVar15 = puVar15 + 4;
              } while (uVar18 != 0);
              if (uVar10 == uVar20) goto LAB_00794120;
              uVar18 = uVar20;
              if ((uVar10 & 0x18) == 0) goto LAB_007940f4;
            }
            uVar20 = uVar10 & 0xfffffffffffffff8;
            lVar14 = uVar18 - uVar20;
            puVar15 = (undefined8 *)(param_1 + uVar6 + uVar18 + 1);
            puVar17 = (undefined8 *)(puVar7 + uVar18);
            do {
              uVar8 = *puVar17;
              uVar9 = *puVar15;
              lVar14 = lVar14 + 8;
              *puVar15 = CONCAT17((byte)((ulong)uVar9 >> 0x38) ^ (byte)((ulong)uVar8 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar9 >> 0x30) ^
                                           (byte)((ulong)uVar8 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar9 >> 0x28) ^
                                                    (byte)((ulong)uVar8 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar9 >> 0x20) ^
                                                             (byte)((ulong)uVar8 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar9 >> 0x18) ^
                                                                      (byte)((ulong)uVar8 >> 0x18),
                                                                      CONCAT12((byte)((ulong)uVar9
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar8
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar9 >> 8) ^ (byte)((ulong)uVar8 >> 8),
                                                  (byte)uVar9 ^ (byte)uVar8)))))));
              puVar15 = puVar15 + 1;
              puVar17 = puVar17 + 1;
            } while (lVar14 != 0);
            if (uVar10 == uVar20) goto LAB_00794120;
          }
LAB_007940f4:
          lVar14 = uVar6 + uVar20 + 1;
          lVar12 = lVar14 - param_2;
          pbVar16 = puVar7 + uVar20;
          pbVar11 = param_1 + lVar14;
          do {
            bVar4 = lVar12 != -1;
            lVar12 = lVar12 + 1;
            *pbVar11 = *pbVar11 ^ *pbVar16;
            pbVar16 = pbVar16 + 1;
            pbVar11 = pbVar11 + 1;
          } while (bVar4);
        }
LAB_00794120:
        local_b0[1] = &DAT_aaaaaaaaaaaaaaaa;
        local_b0[0] = &DAT_aaaaaaaaaaaaaaaa;
        local_b0[3] = &DAT_aaaaaaaaaaaaaaaa;
        local_b0[2] = &DAT_aaaaaaaaaaaaaaaa;
        puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
        local_90 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
        iVar5 = FUN_00741df8(local_b0,uVar6,puVar1,uVar10,lVar13);
        if (iVar5 == 0) goto LAB_0079419c;
        if (uVar6 != 0) {
          if (uVar6 - 0x41 < 0xffffffffffffffc0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(0x5512,0x794354);
            (*pcVar3)();
          }
          if (uVar6 < 8) {
            uVar10 = 0;
          }
          else {
            if (uVar6 < 0x20) {
              uVar20 = 0;
            }
            else {
              uVar10 = uVar6 & 0x60;
              uVar9 = *(undefined8 *)(param_1 + 9);
              uVar8 = *(undefined8 *)(param_1 + 1);
              uVar22 = *(undefined8 *)(param_1 + 0x19);
              uVar21 = *(undefined8 *)(param_1 + 0x11);
              *(ulong *)(param_1 + 9) =
                   CONCAT17((byte)((ulong)uVar9 >> 0x38) ^ (byte)((ulong)local_b0[1] >> 0x38),
                            CONCAT16((byte)((ulong)uVar9 >> 0x30) ^
                                     (byte)((ulong)local_b0[1] >> 0x30),
                                     CONCAT15((byte)((ulong)uVar9 >> 0x28) ^
                                              (byte)((ulong)local_b0[1] >> 0x28),
                                              CONCAT14((byte)((ulong)uVar9 >> 0x20) ^
                                                       (byte)((ulong)local_b0[1] >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar9 >> 0x18) ^
                                                                (byte)((ulong)local_b0[1] >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar9 >> 0x10
                                                                               ) ^ (byte)((ulong)
                                                  local_b0[1] >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar9 >> 8) ^
                                                           (byte)((ulong)local_b0[1] >> 8),
                                                           (byte)uVar9 ^ (byte)local_b0[1])))))));
              *(ulong *)(param_1 + 1) =
                   CONCAT17((byte)((ulong)uVar8 >> 0x38) ^ (byte)((ulong)local_b0[0] >> 0x38),
                            CONCAT16((byte)((ulong)uVar8 >> 0x30) ^
                                     (byte)((ulong)local_b0[0] >> 0x30),
                                     CONCAT15((byte)((ulong)uVar8 >> 0x28) ^
                                              (byte)((ulong)local_b0[0] >> 0x28),
                                              CONCAT14((byte)((ulong)uVar8 >> 0x20) ^
                                                       (byte)((ulong)local_b0[0] >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar8 >> 0x18) ^
                                                                (byte)((ulong)local_b0[0] >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar8 >> 0x10
                                                                               ) ^ (byte)((ulong)
                                                  local_b0[0] >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar8 >> 8) ^
                                                           (byte)((ulong)local_b0[0] >> 8),
                                                           (byte)uVar8 ^ (byte)local_b0[0])))))));
              *(ulong *)(param_1 + 0x19) =
                   CONCAT17((byte)((ulong)uVar22 >> 0x38) ^ (byte)((ulong)local_b0[3] >> 0x38),
                            CONCAT16((byte)((ulong)uVar22 >> 0x30) ^
                                     (byte)((ulong)local_b0[3] >> 0x30),
                                     CONCAT15((byte)((ulong)uVar22 >> 0x28) ^
                                              (byte)((ulong)local_b0[3] >> 0x28),
                                              CONCAT14((byte)((ulong)uVar22 >> 0x20) ^
                                                       (byte)((ulong)local_b0[3] >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar22 >> 0x18) ^
                                                                (byte)((ulong)local_b0[3] >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar22 >>
                                                                               0x10) ^
                                                                         (byte)((ulong)local_b0[3]
                                                                               >> 0x10),
                                                                         CONCAT11((byte)((ulong)
                                                  uVar22 >> 8) ^ (byte)((ulong)local_b0[3] >> 8),
                                                  (byte)uVar22 ^ (byte)local_b0[3])))))));
              *(ulong *)(param_1 + 0x11) =
                   CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ (byte)((ulong)local_b0[2] >> 0x38),
                            CONCAT16((byte)((ulong)uVar21 >> 0x30) ^
                                     (byte)((ulong)local_b0[2] >> 0x30),
                                     CONCAT15((byte)((ulong)uVar21 >> 0x28) ^
                                              (byte)((ulong)local_b0[2] >> 0x28),
                                              CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                                       (byte)((ulong)local_b0[2] >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar21 >> 0x18) ^
                                                                (byte)((ulong)local_b0[2] >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar21 >>
                                                                               0x10) ^
                                                                         (byte)((ulong)local_b0[2]
                                                                               >> 0x10),
                                                                         CONCAT11((byte)((ulong)
                                                  uVar21 >> 8) ^ (byte)((ulong)local_b0[2] >> 8),
                                                  (byte)uVar21 ^ (byte)local_b0[2])))))));
              if (uVar10 != 0x20) {
                uVar9 = *(undefined8 *)(param_1 + 0x29);
                uVar8 = *(undefined8 *)(param_1 + 0x21);
                uVar22 = *(undefined8 *)(param_1 + 0x39);
                uVar21 = *(undefined8 *)(param_1 + 0x31);
                *(ulong *)(param_1 + 0x29) =
                     CONCAT17((byte)((ulong)uVar9 >> 0x38) ^ (byte)((ulong)puStack_88 >> 0x38),
                              CONCAT16((byte)((ulong)uVar9 >> 0x30) ^
                                       (byte)((ulong)puStack_88 >> 0x30),
                                       CONCAT15((byte)((ulong)uVar9 >> 0x28) ^
                                                (byte)((ulong)puStack_88 >> 0x28),
                                                CONCAT14((byte)((ulong)uVar9 >> 0x20) ^
                                                         (byte)((ulong)puStack_88 >> 0x20),
                                                         CONCAT13((byte)((ulong)uVar9 >> 0x18) ^
                                                                  (byte)((ulong)puStack_88 >> 0x18),
                                                                  CONCAT12((byte)((ulong)uVar9 >>
                                                                                 0x10) ^
                                                                           (byte)((ulong)puStack_88
                                                                                 >> 0x10),
                                                                           CONCAT11((byte)((ulong)
                                                  uVar9 >> 8) ^ (byte)((ulong)puStack_88 >> 8),
                                                  (byte)uVar9 ^ (byte)puStack_88)))))));
                *(ulong *)(param_1 + 0x21) =
                     CONCAT17((byte)((ulong)uVar8 >> 0x38) ^ (byte)((ulong)local_90 >> 0x38),
                              CONCAT16((byte)((ulong)uVar8 >> 0x30) ^
                                       (byte)((ulong)local_90 >> 0x30),
                                       CONCAT15((byte)((ulong)uVar8 >> 0x28) ^
                                                (byte)((ulong)local_90 >> 0x28),
                                                CONCAT14((byte)((ulong)uVar8 >> 0x20) ^
                                                         (byte)((ulong)local_90 >> 0x20),
                                                         CONCAT13((byte)((ulong)uVar8 >> 0x18) ^
                                                                  (byte)((ulong)local_90 >> 0x18),
                                                                  CONCAT12((byte)((ulong)uVar8 >>
                                                                                 0x10) ^
                                                                           (byte)((ulong)local_90 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)((ulong)
                                                  uVar8 >> 8) ^ (byte)((ulong)local_90 >> 8),
                                                  (byte)uVar8 ^ (byte)local_90)))))));
                *(ulong *)(param_1 + 0x39) =
                     CONCAT17((byte)((ulong)uVar22 >> 0x38) ^ (byte)((ulong)puStack_78 >> 0x38),
                              CONCAT16((byte)((ulong)uVar22 >> 0x30) ^
                                       (byte)((ulong)puStack_78 >> 0x30),
                                       CONCAT15((byte)((ulong)uVar22 >> 0x28) ^
                                                (byte)((ulong)puStack_78 >> 0x28),
                                                CONCAT14((byte)((ulong)uVar22 >> 0x20) ^
                                                         (byte)((ulong)puStack_78 >> 0x20),
                                                         CONCAT13((byte)((ulong)uVar22 >> 0x18) ^
                                                                  (byte)((ulong)puStack_78 >> 0x18),
                                                                  CONCAT12((byte)((ulong)uVar22 >>
                                                                                 0x10) ^
                                                                           (byte)((ulong)puStack_78
                                                                                 >> 0x10),
                                                                           CONCAT11((byte)((ulong)
                                                  uVar22 >> 8) ^ (byte)((ulong)puStack_78 >> 8),
                                                  (byte)uVar22 ^ (byte)puStack_78)))))));
                *(ulong *)(param_1 + 0x31) =
                     CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ (byte)((ulong)puStack_80 >> 0x38),
                              CONCAT16((byte)((ulong)uVar21 >> 0x30) ^
                                       (byte)((ulong)puStack_80 >> 0x30),
                                       CONCAT15((byte)((ulong)uVar21 >> 0x28) ^
                                                (byte)((ulong)puStack_80 >> 0x28),
                                                CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                                         (byte)((ulong)puStack_80 >> 0x20),
                                                         CONCAT13((byte)((ulong)uVar21 >> 0x18) ^
                                                                  (byte)((ulong)puStack_80 >> 0x18),
                                                                  CONCAT12((byte)((ulong)uVar21 >>
                                                                                 0x10) ^
                                                                           (byte)((ulong)puStack_80
                                                                                 >> 0x10),
                                                                           CONCAT11((byte)((ulong)
                                                  uVar21 >> 8) ^ (byte)((ulong)puStack_80 >> 8),
                                                  (byte)uVar21 ^ (byte)puStack_80)))))));
              }
              if (uVar6 == uVar10) goto LAB_007942bc;
              uVar20 = uVar10;
              if ((uVar6 & 0x18) == 0) goto LAB_00794290;
            }
            uVar10 = uVar6 & 0x78;
            lVar13 = uVar20 - uVar10;
            puVar15 = (undefined8 *)(param_1 + uVar20 + 1);
            puVar17 = (undefined8 *)((long)local_b0 + uVar20);
            do {
              uVar8 = *puVar17;
              uVar9 = *puVar15;
              lVar13 = lVar13 + 8;
              *puVar15 = CONCAT17((byte)((ulong)uVar9 >> 0x38) ^ (byte)((ulong)uVar8 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar9 >> 0x30) ^
                                           (byte)((ulong)uVar8 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar9 >> 0x28) ^
                                                    (byte)((ulong)uVar8 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar9 >> 0x20) ^
                                                             (byte)((ulong)uVar8 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar9 >> 0x18) ^
                                                                      (byte)((ulong)uVar8 >> 0x18),
                                                                      CONCAT12((byte)((ulong)uVar9
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar8
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar9 >> 8) ^ (byte)((ulong)uVar8 >> 8),
                                                  (byte)uVar9 ^ (byte)uVar8)))))));
              puVar15 = puVar15 + 1;
              puVar17 = puVar17 + 1;
            } while (lVar13 != 0);
            if (uVar6 == uVar10) goto LAB_007942bc;
          }
LAB_00794290:
          pbVar16 = param_1 + uVar10;
          lVar13 = uVar6 - uVar10;
          pbVar11 = (byte *)((long)local_b0 + uVar10);
          do {
            pbVar16 = pbVar16 + 1;
            lVar13 = lVar13 + -1;
            *pbVar16 = *pbVar16 ^ *pbVar11;
            pbVar11 = pbVar11 + 1;
          } while (lVar13 != 0);
        }
LAB_007942bc:
        uVar19 = 1;
      }
      FUN_0078cb3c(puVar7);
      goto LAB_007941a8;
    }
    uVar8 = 0x7e;
    uVar9 = 0x47;
  }
  FUN_00777eb4(4,0,uVar8,"../../third_party/boringssl/src/crypto/rsa/rsa_crypt.cc",uVar9);
  uVar19 = 0;
LAB_007941a8:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar19;
}


// ===== 00794354  FUN_00794354 =====

void FUN_00794354(void *param_1,ulong *param_2,ulong param_3,char *param_4,ulong param_5,
                 undefined8 param_6,undefined8 param_7,long param_8,long param_9)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  char *pcVar18;
  char *pcVar19;
  ulong uVar20;
  ulong uVar21;
  char *pcVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0 [4];
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  if (param_8 == 0) {
    param_8 = FUN_0072aac4();
  }
  lVar15 = param_8;
  if (param_9 != 0) {
    lVar15 = param_9;
  }
  uVar8 = FUN_0072a5a0(param_8);
  if (param_5 < uVar8 * 2 + 2) {
    pcVar22 = (char *)0x0;
    goto LAB_007943d4;
  }
  uVar1 = param_5 + ~uVar8;
  pcVar22 = (char *)FUN_0078c954(uVar1);
  if (pcVar22 != (char *)0x0) {
    local_b0[1] = &DAT_aaaaaaaaaaaaaaaa;
    local_b0[0] = &DAT_aaaaaaaaaaaaaaaa;
    local_b0[3] = &DAT_aaaaaaaaaaaaaaaa;
    local_b0[2] = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
    iVar7 = FUN_00741df8(local_b0,uVar8,param_4 + uVar8 + 1,uVar1,lVar15);
    if (iVar7 != 0) {
      if (uVar8 != 0) {
        if (uVar8 - 0x41 < 0xffffffffffffffc0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(0x5512,0x79479c);
          (*pcVar5)();
        }
        if (uVar8 < 8) {
          uVar11 = 0;
        }
        else {
          if (uVar8 < 0x20) {
            uVar21 = 0;
          }
          else {
            uVar11 = uVar8 & 0x60;
            uVar10 = *(undefined8 *)(param_4 + 9);
            uVar9 = *(undefined8 *)(param_4 + 1);
            uVar24 = *(undefined8 *)(param_4 + 0x19);
            uVar23 = *(undefined8 *)(param_4 + 0x11);
            local_b0[1] = (undefined1 *)
                          CONCAT17((byte)((ulong)local_b0[1] >> 0x38) ^
                                   (byte)((ulong)uVar10 >> 0x38),
                                   CONCAT16((byte)((ulong)local_b0[1] >> 0x30) ^
                                            (byte)((ulong)uVar10 >> 0x30),
                                            CONCAT15((byte)((ulong)local_b0[1] >> 0x28) ^
                                                     (byte)((ulong)uVar10 >> 0x28),
                                                     CONCAT14((byte)((ulong)local_b0[1] >> 0x20) ^
                                                              (byte)((ulong)uVar10 >> 0x20),
                                                              CONCAT13((byte)((ulong)local_b0[1] >>
                                                                             0x18) ^
                                                                       (byte)((ulong)uVar10 >> 0x18)
                                                                       ,CONCAT12((byte)((ulong)
                                                  local_b0[1] >> 0x10) ^
                                                  (byte)((ulong)uVar10 >> 0x10),
                                                  CONCAT11((byte)((ulong)local_b0[1] >> 8) ^
                                                           (byte)((ulong)uVar10 >> 8),
                                                           (byte)local_b0[1] ^ (byte)uVar10)))))));
            local_b0[0] = (undefined1 *)
                          CONCAT17((byte)((ulong)local_b0[0] >> 0x38) ^ (byte)((ulong)uVar9 >> 0x38)
                                   ,CONCAT16((byte)((ulong)local_b0[0] >> 0x30) ^
                                             (byte)((ulong)uVar9 >> 0x30),
                                             CONCAT15((byte)((ulong)local_b0[0] >> 0x28) ^
                                                      (byte)((ulong)uVar9 >> 0x28),
                                                      CONCAT14((byte)((ulong)local_b0[0] >> 0x20) ^
                                                               (byte)((ulong)uVar9 >> 0x20),
                                                               CONCAT13((byte)((ulong)local_b0[0] >>
                                                                              0x18) ^
                                                                        (byte)((ulong)uVar9 >> 0x18)
                                                                        ,CONCAT12((byte)((ulong)
                                                  local_b0[0] >> 0x10) ^
                                                  (byte)((ulong)uVar9 >> 0x10),
                                                  CONCAT11((byte)((ulong)local_b0[0] >> 8) ^
                                                           (byte)((ulong)uVar9 >> 8),
                                                           (byte)local_b0[0] ^ (byte)uVar9)))))));
            local_b0[3] = (undefined1 *)
                          CONCAT17((byte)((ulong)local_b0[3] >> 0x38) ^
                                   (byte)((ulong)uVar24 >> 0x38),
                                   CONCAT16((byte)((ulong)local_b0[3] >> 0x30) ^
                                            (byte)((ulong)uVar24 >> 0x30),
                                            CONCAT15((byte)((ulong)local_b0[3] >> 0x28) ^
                                                     (byte)((ulong)uVar24 >> 0x28),
                                                     CONCAT14((byte)((ulong)local_b0[3] >> 0x20) ^
                                                              (byte)((ulong)uVar24 >> 0x20),
                                                              CONCAT13((byte)((ulong)local_b0[3] >>
                                                                             0x18) ^
                                                                       (byte)((ulong)uVar24 >> 0x18)
                                                                       ,CONCAT12((byte)((ulong)
                                                  local_b0[3] >> 0x10) ^
                                                  (byte)((ulong)uVar24 >> 0x10),
                                                  CONCAT11((byte)((ulong)local_b0[3] >> 8) ^
                                                           (byte)((ulong)uVar24 >> 8),
                                                           (byte)local_b0[3] ^ (byte)uVar24)))))));
            local_b0[2] = (undefined1 *)
                          CONCAT17((byte)((ulong)local_b0[2] >> 0x38) ^
                                   (byte)((ulong)uVar23 >> 0x38),
                                   CONCAT16((byte)((ulong)local_b0[2] >> 0x30) ^
                                            (byte)((ulong)uVar23 >> 0x30),
                                            CONCAT15((byte)((ulong)local_b0[2] >> 0x28) ^
                                                     (byte)((ulong)uVar23 >> 0x28),
                                                     CONCAT14((byte)((ulong)local_b0[2] >> 0x20) ^
                                                              (byte)((ulong)uVar23 >> 0x20),
                                                              CONCAT13((byte)((ulong)local_b0[2] >>
                                                                             0x18) ^
                                                                       (byte)((ulong)uVar23 >> 0x18)
                                                                       ,CONCAT12((byte)((ulong)
                                                  local_b0[2] >> 0x10) ^
                                                  (byte)((ulong)uVar23 >> 0x10),
                                                  CONCAT11((byte)((ulong)local_b0[2] >> 8) ^
                                                           (byte)((ulong)uVar23 >> 8),
                                                           (byte)local_b0[2] ^ (byte)uVar23)))))));
            if (uVar11 != 0x20) {
              uVar10 = *(undefined8 *)(param_4 + 0x29);
              uVar9 = *(undefined8 *)(param_4 + 0x21);
              uVar24 = *(undefined8 *)(param_4 + 0x39);
              uVar23 = *(undefined8 *)(param_4 + 0x31);
              puStack_88 = (undefined1 *)
                           CONCAT17((byte)((ulong)puStack_88 >> 0x38) ^
                                    (byte)((ulong)uVar10 >> 0x38),
                                    CONCAT16((byte)((ulong)puStack_88 >> 0x30) ^
                                             (byte)((ulong)uVar10 >> 0x30),
                                             CONCAT15((byte)((ulong)puStack_88 >> 0x28) ^
                                                      (byte)((ulong)uVar10 >> 0x28),
                                                      CONCAT14((byte)((ulong)puStack_88 >> 0x20) ^
                                                               (byte)((ulong)uVar10 >> 0x20),
                                                               CONCAT13((byte)((ulong)puStack_88 >>
                                                                              0x18) ^
                                                                        (byte)((ulong)uVar10 >> 0x18
                                                                              ),CONCAT12((byte)((
                                                  ulong)puStack_88 >> 0x10) ^
                                                  (byte)((ulong)uVar10 >> 0x10),
                                                  CONCAT11((byte)((ulong)puStack_88 >> 8) ^
                                                           (byte)((ulong)uVar10 >> 8),
                                                           (byte)puStack_88 ^ (byte)uVar10)))))));
              local_90 = (undefined1 *)
                         CONCAT17((byte)((ulong)local_90 >> 0x38) ^ (byte)((ulong)uVar9 >> 0x38),
                                  CONCAT16((byte)((ulong)local_90 >> 0x30) ^
                                           (byte)((ulong)uVar9 >> 0x30),
                                           CONCAT15((byte)((ulong)local_90 >> 0x28) ^
                                                    (byte)((ulong)uVar9 >> 0x28),
                                                    CONCAT14((byte)((ulong)local_90 >> 0x20) ^
                                                             (byte)((ulong)uVar9 >> 0x20),
                                                             CONCAT13((byte)((ulong)local_90 >> 0x18
                                                                            ) ^ (byte)((ulong)uVar9
                                                                                      >> 0x18),
                                                                      CONCAT12((byte)((ulong)
                                                  local_90 >> 0x10) ^ (byte)((ulong)uVar9 >> 0x10),
                                                  CONCAT11((byte)((ulong)local_90 >> 8) ^
                                                           (byte)((ulong)uVar9 >> 8),
                                                           (byte)local_90 ^ (byte)uVar9)))))));
              puStack_78 = (undefined1 *)
                           CONCAT17((byte)((ulong)puStack_78 >> 0x38) ^
                                    (byte)((ulong)uVar24 >> 0x38),
                                    CONCAT16((byte)((ulong)puStack_78 >> 0x30) ^
                                             (byte)((ulong)uVar24 >> 0x30),
                                             CONCAT15((byte)((ulong)puStack_78 >> 0x28) ^
                                                      (byte)((ulong)uVar24 >> 0x28),
                                                      CONCAT14((byte)((ulong)puStack_78 >> 0x20) ^
                                                               (byte)((ulong)uVar24 >> 0x20),
                                                               CONCAT13((byte)((ulong)puStack_78 >>
                                                                              0x18) ^
                                                                        (byte)((ulong)uVar24 >> 0x18
                                                                              ),CONCAT12((byte)((
                                                  ulong)puStack_78 >> 0x10) ^
                                                  (byte)((ulong)uVar24 >> 0x10),
                                                  CONCAT11((byte)((ulong)puStack_78 >> 8) ^
                                                           (byte)((ulong)uVar24 >> 8),
                                                           (byte)puStack_78 ^ (byte)uVar24)))))));
              puStack_80 = (undefined1 *)
                           CONCAT17((byte)((ulong)puStack_80 >> 0x38) ^
                                    (byte)((ulong)uVar23 >> 0x38),
                                    CONCAT16((byte)((ulong)puStack_80 >> 0x30) ^
                                             (byte)((ulong)uVar23 >> 0x30),
                                             CONCAT15((byte)((ulong)puStack_80 >> 0x28) ^
                                                      (byte)((ulong)uVar23 >> 0x28),
                                                      CONCAT14((byte)((ulong)puStack_80 >> 0x20) ^
                                                               (byte)((ulong)uVar23 >> 0x20),
                                                               CONCAT13((byte)((ulong)puStack_80 >>
                                                                              0x18) ^
                                                                        (byte)((ulong)uVar23 >> 0x18
                                                                              ),CONCAT12((byte)((
                                                  ulong)puStack_80 >> 0x10) ^
                                                  (byte)((ulong)uVar23 >> 0x10),
                                                  CONCAT11((byte)((ulong)puStack_80 >> 8) ^
                                                           (byte)((ulong)uVar23 >> 8),
                                                           (byte)puStack_80 ^ (byte)uVar23)))))));
            }
            if (uVar8 == uVar11) goto LAB_0079452c;
            uVar21 = uVar11;
            if ((uVar8 & 0x18) == 0) goto LAB_00794500;
          }
          uVar11 = uVar8 & 0x78;
          lVar17 = uVar21 - uVar11;
          puVar16 = (undefined8 *)((long)local_b0 + uVar21);
          pcVar18 = param_4 + uVar21 + 1;
          do {
            uVar9 = *(undefined8 *)pcVar18;
            uVar10 = *puVar16;
            lVar17 = lVar17 + 8;
            *puVar16 = CONCAT17((byte)((ulong)uVar10 >> 0x38) ^ (byte)((ulong)uVar9 >> 0x38),
                                CONCAT16((byte)((ulong)uVar10 >> 0x30) ^
                                         (byte)((ulong)uVar9 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar10 >> 0x28) ^
                                                  (byte)((ulong)uVar9 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar10 >> 0x20) ^
                                                           (byte)((ulong)uVar9 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar10 >> 0x18) ^
                                                                    (byte)((ulong)uVar9 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar10 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar9 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar10 >> 8) ^ (byte)((ulong)uVar9 >> 8),
                                                  (byte)uVar10 ^ (byte)uVar9)))))));
            puVar16 = puVar16 + 1;
            pcVar18 = pcVar18 + 8;
          } while (lVar17 != 0);
          if (uVar8 == uVar11) goto LAB_0079452c;
        }
LAB_00794500:
        pbVar13 = (byte *)(param_4 + uVar11);
        lVar17 = uVar8 - uVar11;
        pbVar12 = (byte *)((long)local_b0 + uVar11);
        do {
          pbVar13 = pbVar13 + 1;
          lVar17 = lVar17 + -1;
          *pbVar12 = *pbVar12 ^ *pbVar13;
          pbVar12 = pbVar12 + 1;
        } while (lVar17 != 0);
      }
LAB_0079452c:
      iVar7 = FUN_00741df8(pcVar22,uVar1,local_b0,uVar8,lVar15);
      if (iVar7 != 0) {
        if (uVar1 != 0) {
          if ((uVar1 < 8) ||
             ((pcVar22 < param_4 + param_5 && (param_4 + uVar8 + 1 < pcVar22 + uVar1)))) {
            uVar11 = 0;
          }
          else {
            if (uVar1 < 0x20) {
              uVar21 = 0;
            }
            else {
              uVar11 = uVar1 & 0xffffffffffffffe0;
              pcVar18 = pcVar22 + 0x10;
              pcVar19 = param_4 + uVar8 + 0x11;
              uVar21 = uVar1 & 0xffffffffffffffe0;
              do {
                uVar10 = *(undefined8 *)(pcVar18 + -8);
                uVar9 = *(undefined8 *)(pcVar18 + -0x10);
                uVar28 = *(undefined8 *)(pcVar18 + 8);
                uVar27 = *(undefined8 *)pcVar18;
                uVar21 = uVar21 - 0x20;
                uVar24 = *(undefined8 *)(pcVar19 + -8);
                uVar23 = *(undefined8 *)(pcVar19 + -0x10);
                uVar26 = *(undefined8 *)(pcVar19 + 8);
                uVar25 = *(undefined8 *)pcVar19;
                pcVar19 = pcVar19 + 0x20;
                *(ulong *)(pcVar18 + -8) =
                     CONCAT17((byte)((ulong)uVar10 >> 0x38) ^ (byte)((ulong)uVar24 >> 0x38),
                              CONCAT16((byte)((ulong)uVar10 >> 0x30) ^ (byte)((ulong)uVar24 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar10 >> 0x28) ^
                                                 (byte)((ulong)uVar24 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar10 >> 0x20) ^
                                                          (byte)((ulong)uVar24 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar10 >> 0x18) ^
                                                                   (byte)((ulong)uVar24 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar10 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar24 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar10 >> 8) ^ (byte)((ulong)uVar24 >> 8),
                                                  (byte)uVar10 ^ (byte)uVar24)))))));
                *(ulong *)(pcVar18 + -0x10) =
                     CONCAT17((byte)((ulong)uVar9 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38),
                              CONCAT16((byte)((ulong)uVar9 >> 0x30) ^ (byte)((ulong)uVar23 >> 0x30),
                                       CONCAT15((byte)((ulong)uVar9 >> 0x28) ^
                                                (byte)((ulong)uVar23 >> 0x28),
                                                CONCAT14((byte)((ulong)uVar9 >> 0x20) ^
                                                         (byte)((ulong)uVar23 >> 0x20),
                                                         CONCAT13((byte)((ulong)uVar9 >> 0x18) ^
                                                                  (byte)((ulong)uVar23 >> 0x18),
                                                                  CONCAT12((byte)((ulong)uVar9 >>
                                                                                 0x10) ^
                                                                           (byte)((ulong)uVar23 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)((ulong)
                                                  uVar9 >> 8) ^ (byte)((ulong)uVar23 >> 8),
                                                  (byte)uVar9 ^ (byte)uVar23)))))));
                *(ulong *)(pcVar18 + 8) =
                     CONCAT17((byte)((ulong)uVar28 >> 0x38) ^ (byte)((ulong)uVar26 >> 0x38),
                              CONCAT16((byte)((ulong)uVar28 >> 0x30) ^ (byte)((ulong)uVar26 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar28 >> 0x28) ^
                                                 (byte)((ulong)uVar26 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar28 >> 0x20) ^
                                                          (byte)((ulong)uVar26 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar28 >> 0x18) ^
                                                                   (byte)((ulong)uVar26 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar28 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar26 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar28 >> 8) ^ (byte)((ulong)uVar26 >> 8),
                                                  (byte)uVar28 ^ (byte)uVar26)))))));
                *(ulong *)pcVar18 =
                     CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ (byte)((ulong)uVar25 >> 0x38),
                              CONCAT16((byte)((ulong)uVar27 >> 0x30) ^ (byte)((ulong)uVar25 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar27 >> 0x28) ^
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
                pcVar18 = pcVar18 + 0x20;
              } while (uVar21 != 0);
              if (uVar1 == uVar11) goto LAB_0079459c;
              uVar21 = uVar11;
              if ((uVar1 & 0x18) == 0) goto LAB_00794570;
            }
            uVar11 = uVar1 & 0xfffffffffffffff8;
            lVar15 = uVar21 - uVar11;
            pcVar18 = pcVar22 + uVar21;
            pcVar19 = param_4 + uVar8 + uVar21 + 1;
            do {
              uVar9 = *(undefined8 *)pcVar19;
              uVar10 = *(undefined8 *)pcVar18;
              lVar15 = lVar15 + 8;
              *(ulong *)pcVar18 =
                   CONCAT17((byte)((ulong)uVar10 >> 0x38) ^ (byte)((ulong)uVar9 >> 0x38),
                            CONCAT16((byte)((ulong)uVar10 >> 0x30) ^ (byte)((ulong)uVar9 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar10 >> 0x28) ^
                                              (byte)((ulong)uVar9 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar10 >> 0x20) ^
                                                       (byte)((ulong)uVar9 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar10 >> 0x18) ^
                                                                (byte)((ulong)uVar9 >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar10 >>
                                                                               0x10) ^
                                                                         (byte)((ulong)uVar9 >> 0x10
                                                                               ),CONCAT11((byte)((
                                                  ulong)uVar10 >> 8) ^ (byte)((ulong)uVar9 >> 8),
                                                  (byte)uVar10 ^ (byte)uVar9)))))));
              pcVar18 = pcVar18 + 8;
              pcVar19 = pcVar19 + 8;
            } while (lVar15 != 0);
            if (uVar1 == uVar11) goto LAB_0079459c;
          }
LAB_00794570:
          lVar15 = uVar8 + uVar11 + 1;
          lVar17 = lVar15 - param_5;
          pbVar13 = (byte *)(pcVar22 + uVar11);
          pbVar12 = (byte *)(param_4 + lVar15);
          do {
            bVar6 = lVar17 != -1;
            lVar17 = lVar17 + 1;
            *pbVar13 = *pbVar13 ^ *pbVar12;
            pbVar13 = pbVar13 + 1;
            pbVar12 = pbVar12 + 1;
          } while (bVar6);
        }
LAB_0079459c:
        puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
        local_f0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
        local_d0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
        iVar7 = FUN_0072a5ac(param_6,param_7,&local_f0,0,param_8,0);
        if (iVar7 != 0) {
          iVar7 = FUN_0078cd34(pcVar22,&local_f0,uVar8);
          if (uVar8 < uVar1) {
            uVar11 = 0;
            lVar15 = ~(uVar8 << 1) + param_5;
            uVar14 = 0xffffffffffffffff;
            uVar21 = -(ulong)(iVar7 != 0 || *param_4 != '\0');
            do {
              uVar20 = uVar21;
              cVar3 = pcVar22[uVar8];
              uVar21 = uVar14;
              if (cVar3 != '\x01') {
                uVar21 = 0;
              }
              uVar14 = uVar14 & (-(ulong)(cVar3 == '\x01') ^ 0xffffffffffffffff);
              uVar2 = 0;
              if (cVar3 != '\0') {
                uVar2 = uVar14;
              }
              lVar15 = lVar15 + -1;
              uVar11 = uVar21 & uVar8 | uVar11 & (uVar21 ^ 0xffffffffffffffff);
              uVar8 = uVar8 + 1;
              uVar21 = uVar2 | uVar20;
            } while (lVar15 != 0);
            if (uVar14 != 0 || uVar20 != 0) goto LAB_007943d4;
            uVar11 = uVar11 + 1;
            uVar8 = uVar1 - uVar11;
            if (uVar8 <= param_3) {
              if (uVar1 != uVar11) {
                memcpy(param_1,pcVar22 + uVar11,uVar8);
              }
              *param_2 = uVar8;
              FUN_0078cb3c(pcVar22);
              uVar9 = 1;
              goto LAB_0079465c;
            }
            uVar9 = 0x71;
            uVar10 = 0xcc;
          }
          else {
LAB_007943d4:
            uVar9 = 0x85;
            uVar10 = 0xd9;
          }
          FUN_00777eb4(4,0,uVar9,"../../third_party/boringssl/src/crypto/rsa/rsa_crypt.cc",uVar10);
        }
      }
    }
  }
  FUN_0078cb3c(pcVar22);
  uVar9 = 0;
LAB_0079465c:
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}


// ===== 0079479c  FUN_0079479c =====

ulong FUN_0079479c(long param_1,ulong *param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,int param_7)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  if ((*(long *)(param_1 + 8) == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar8 = 0x90;
    uVar9 = 0x15c;
LAB_00794840:
    FUN_00777eb4(4,0,uVar8,"../../third_party/boringssl/src/crypto/rsa/rsa_crypt.cc",uVar9);
  }
  else {
    iVar1 = FUN_00744acc(param_1);
    if (iVar1 != 0) {
      uVar2 = FUN_007425e8(param_1);
      uVar2 = uVar2 & 0xffffffff;
      if (uVar2 <= param_4) {
        uVar3 = FUN_0071b1a0();
        uVar10 = uVar3;
        if (uVar3 == 0) goto LAB_00794848;
        FUN_0071b2e0(uVar3);
        lVar4 = FUN_0071b348(uVar3);
        lVar5 = FUN_0071b348(uVar3);
        lVar6 = FUN_0078c954(uVar2);
        uVar10 = 0;
        if (((lVar4 != 0) && (lVar5 != 0)) && (lVar6 != 0)) {
          if (param_7 == 4) {
            iVar1 = FUN_00793f18(lVar6,uVar2,param_5,param_6,0,0,0,0);
          }
          else if (param_7 == 3) {
            iVar1 = FUN_00741d80(lVar6,uVar2,param_5,param_6);
          }
          else {
            if (param_7 != 1) {
              FUN_00777eb4(4,0,0x8f,"../../third_party/boringssl/src/crypto/rsa/rsa_crypt.cc",0x185)
              ;
              uVar10 = 0;
              goto LAB_007949b4;
            }
            iVar1 = FUN_00794a48(lVar6,uVar2,param_5,param_6);
          }
          if ((0 < iVar1) && (lVar7 = FUN_0071a744(lVar6,uVar2,lVar4), lVar7 != 0)) {
            iVar1 = FUN_00719374(lVar4,*(undefined8 *)(param_1 + 8));
            if (iVar1 < 0) {
              iVar1 = FUN_00723d4c(param_1 + 0x90,param_1 + 0x58,*(undefined8 *)(param_1 + 8),uVar3)
              ;
              if ((iVar1 == 0) ||
                 (iVar1 = FUN_0071d9ec(lVar5,lVar4,*(undefined8 *)(param_1 + 0x10),
                                       *(long *)(param_1 + 0x90) + 0x18,uVar3), iVar1 == 0))
              goto LAB_00794980;
              iVar1 = FUN_0071ab6c(param_3,uVar2,lVar5);
              if (iVar1 != 0) {
                uVar10 = 1;
                *param_2 = uVar2;
                goto LAB_007949b4;
              }
              uVar8 = 0x44;
              uVar9 = 0x1a0;
            }
            else {
              uVar8 = 0x73;
              uVar9 = 0x193;
            }
            FUN_00777eb4(4,0,uVar8,"../../third_party/boringssl/src/crypto/rsa/rsa_crypt.cc",uVar9);
          }
LAB_00794980:
          uVar10 = 0;
        }
LAB_007949b4:
        FUN_0078cb3c(lVar6);
        FUN_0071b480(uVar3);
        FUN_0071b1d4(uVar3);
        goto LAB_00794848;
      }
      uVar8 = 0x87;
      uVar9 = 0x166;
      goto LAB_00794840;
    }
  }
  uVar10 = 0;
LAB_00794848:
  return uVar10 & 0xffffffff;
}


// ===== 00794a48  FUN_00794a48 =====

undefined8 FUN_00794a48(undefined2 *param_1,ulong param_2,void *param_3,ulong param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  long lVar5;
  long lVar6;
  
  if (param_2 < 0xb) {
    uVar2 = 0x7e;
    uVar3 = 0xe3;
  }
  else {
    if (param_4 <= param_2 - 0xb) {
      lVar5 = (param_2 - param_4) + -3;
      puVar4 = param_1 + 1;
      *param_1 = 0x200;
      FUN_00793258(puVar4,lVar5);
      lVar6 = 0;
      do {
        cVar1 = *(char *)((long)puVar4 + lVar6);
        while (cVar1 == '\0') {
          FUN_00793258((long)puVar4 + lVar6,1);
          cVar1 = *(char *)((long)puVar4 + lVar6);
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 != lVar5);
      *(undefined1 *)((long)param_1 + (param_2 - param_4) + -1) = 0;
      if (param_4 != 0) {
        memcpy((void *)((long)param_1 + (param_2 - param_4)),param_3,param_4);
      }
      return 1;
    }
    uVar2 = 0x72;
    uVar3 = 0xe8;
  }
  FUN_00777eb4(4,0,uVar2,"../../third_party/boringssl/src/crypto/rsa/rsa_crypt.cc",uVar3);
  return 0;
}


// ===== 00794b6c  FUN_00794b6c =====

ulong FUN_00794b6c(long *param_1,size_t *param_2,char *param_3,ulong param_4,undefined8 param_5,
                  ulong param_6,int param_7)

{
  char *pcVar1;
  size_t __n;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (*(code **)(*param_1 + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00794bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    return uVar4;
  }
  uVar2 = FUN_007425e8(param_1);
  uVar4 = (ulong)uVar2;
  if (param_4 < uVar4) {
    FUN_00777eb4(4,0,0x87,"../../third_party/boringssl/src/crypto/rsa/rsa_crypt.cc",0x1b4);
    uVar2 = 0;
    goto LAB_00794d38;
  }
  pcVar5 = param_3;
  if ((param_7 == 3) || (pcVar5 = (char *)FUN_0078c954(uVar4), pcVar5 != (char *)0x0)) {
    if (param_6 == uVar4) {
      iVar3 = FUN_00745b38(param_1,pcVar5,param_5,param_6);
      if (iVar3 != 0) {
        if (param_7 == 4) {
          iVar3 = FUN_00794354(param_3,param_2,param_6,pcVar5,param_6,0,0,0,0);
          if (iVar3 != 0) {
LAB_00794d08:
            uVar2 = 1;
            goto LAB_00794d30;
          }
        }
        else {
          if (param_7 == 3) {
            *param_2 = param_6;
            uVar2 = 1;
            goto LAB_00794d38;
          }
          if (param_7 != 1) {
            FUN_00777eb4(4,0,0x8f,"../../third_party/boringssl/src/crypto/rsa/rsa_crypt.cc",0x1da);
            goto LAB_00794d2c;
          }
          if (uVar2 == 0) {
            uVar6 = 0x78;
            uVar7 = 0xfa;
          }
          else if (uVar2 < 0xb) {
            uVar6 = 0x7e;
            uVar7 = 0x103;
          }
          else {
            uVar8 = 0;
            uVar9 = 0xffffffffffffffff;
            uVar4 = 2;
            do {
              pcVar1 = pcVar5 + uVar4;
              uVar10 = uVar9;
              if (*pcVar1 != '\0') {
                uVar10 = 0;
              }
              uVar11 = uVar10 & uVar4;
              uVar4 = uVar4 + 1;
              uVar10 = uVar8 & (uVar10 ^ 0xffffffffffffffff);
              uVar8 = uVar11 | uVar10;
              uVar9 = uVar9 & (-(ulong)(*pcVar1 == '\0') ^ 0xffffffffffffffff);
            } while (param_6 != uVar4);
            if (((((long)(9 - uVar8 | uVar10) < 0) && (*pcVar5 == '\0')) && (pcVar5[1] == '\x02'))
               && (uVar9 != 0xffffffffffffffff)) {
              uVar8 = uVar8 + 1;
              __n = param_6 - uVar8;
              if (uVar8 <= param_6) {
                if (__n != 0) {
                  memcpy(param_3,pcVar5 + uVar8,__n);
                }
                *param_2 = __n;
                goto LAB_00794d08;
              }
              uVar6 = 0x89;
              uVar7 = 0x130;
            }
            else {
              uVar6 = 0x89;
              uVar7 = 0x128;
            }
          }
          FUN_00777eb4(4,0,uVar6,"../../third_party/boringssl/src/crypto/rsa/rsa_crypt.cc",uVar7);
        }
        uVar6 = 0x88;
        uVar7 = 0x1e0;
        goto LAB_00794cbc;
      }
    }
    else {
      uVar6 = 0x70;
      uVar7 = 0x1c3;
LAB_00794cbc:
      FUN_00777eb4(4,0,uVar6,"../../third_party/boringssl/src/crypto/rsa/rsa_crypt.cc",uVar7);
    }
    uVar2 = 0;
    if (param_7 == 3) goto LAB_00794d38;
  }
  else {
LAB_00794d2c:
    uVar2 = 0;
  }
LAB_00794d30:
  FUN_0078cb3c(pcVar5);
LAB_00794d38:
  return (ulong)uVar2;
}


// ===== 00794e58  FUN_00794e58 =====

undefined8 FUN_00794e58(void)

{
  FUN_007472b0();
  return 1;
}


// ===== 00794e78  FUN_00794e78 =====

undefined8 FUN_00794e78(void)

{
  FUN_00747348();
  return 1;
}


// ===== 00794e98  FUN_00794e98 =====

undefined8 FUN_00794e98(void)

{
  FUN_007474b0();
  return 1;
}


// ===== 00794eb8  FUN_00794eb8 =====

undefined8 FUN_00794eb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007472b0(&local_a0);
  FUN_00747348(&local_a0,param_1,param_2);
  FUN_007474b0(param_3,&local_a0);
  FUN_0078cba8(&local_a0,0x60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00794f58  thunk_FUN_007472f0 =====

void thunk_FUN_007472f0(void)

{
  FUN_007472f0();
  return;
}


// ===== 00794f60  FUN_00794f60 =====

undefined8 FUN_00794f60(void)

{
  FUN_00738b74();
  return 1;
}


// ===== 00794f80  FUN_00794f80 =====

undefined8 FUN_00794f80(void)

{
  FUN_00738bb0();
  return 1;
}


// ===== 00794fa0  FUN_00794fa0 =====

undefined8 FUN_00794fa0(undefined8 param_1,long param_2)

{
  if (0x20 < *(uint *)(param_2 + 0x6c)) {
    return 0;
  }
  FUN_00738d18();
  return 1;
}


// ===== 00794fd8  FUN_00794fd8 =====

undefined8 FUN_00794fd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00738b74(&local_b0);
  FUN_00738bb0(&local_b0,param_1,param_2);
  FUN_00738d18(param_3,&local_b0);
  FUN_0078cba8(&local_b0,0x70);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079507c  thunk_FUN_007475fc =====

void thunk_FUN_007475fc(void)

{
  FUN_007475fc();
  return;
}


// ===== 00795084  FUN_00795084 =====

undefined8 FUN_00795084(void)

{
  FUN_00738d40();
  return 1;
}


// ===== 007950a4  FUN_007950a4 =====

undefined8 FUN_007950a4(void)

{
  FUN_00738d80();
  return 1;
}


// ===== 007950c4  FUN_007950c4 =====

long FUN_007950c4(long param_1)

{
  if (param_1 != 0) {
    FUN_00738ed8();
    param_1 = 1;
  }
  return param_1;
}


// ===== 007950ec  FUN_007950ec =====

undefined8 FUN_007950ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  local_110 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  local_120 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00738d40(&local_120);
  FUN_00738d80(&local_120,param_1,param_2);
  FUN_00738ed8(param_3,&local_120);
  FUN_0078cba8(&local_120,0xd0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007951a4  FUN_007951a4 =====

undefined8 * FUN_007951a4(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)FUN_0078c9d4(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    lVar2 = FUN_0078ca74(4,8);
    puVar1[1] = lVar2;
    if (lVar2 == 0) {
      FUN_0078cb3c(puVar1);
      puVar1 = (undefined8 *)0x0;
    }
    else {
      puVar1[3] = 4;
      puVar1[4] = param_1;
    }
  }
  return puVar1;
}


// ===== 00795214  FUN_00795214 =====

undefined8 * FUN_00795214(void)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)FUN_0078c9d4(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    lVar2 = FUN_0078ca74(4,8);
    puVar1[1] = lVar2;
    if (lVar2 == 0) {
      FUN_0078cb3c(puVar1);
      puVar1 = (undefined8 *)0x0;
    }
    else {
      puVar1[3] = 4;
      puVar1[4] = 0;
    }
  }
  return puVar1;
}


// ===== 00795280  FUN_00795280 =====

long * FUN_00795280(long *param_1)

{
  if (param_1 != (long *)0x0) {
    param_1 = (long *)*param_1;
  }
  return param_1;
}


// ===== 00795290  FUN_00795290 =====

void FUN_00795290(long *param_1)

{
  size_t __n;
  
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    __n = *param_1 << 3;
    if (__n != 0) {
      memset((void *)param_1[1],0,__n);
    }
    *param_1 = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}


// ===== 007952e0  FUN_007952e0 =====

ulong * FUN_007952e0(ulong *param_1,ulong param_2)

{
  if (param_1 != (ulong *)0x0) {
    if (param_2 < *param_1) {
      return *(ulong **)(param_1[1] + param_2 * 8);
    }
    param_1 = (ulong *)0x0;
  }
  return param_1;
}


// ===== 00795308  FUN_00795308 =====

undefined8 FUN_00795308(ulong *param_1,ulong param_2,undefined8 param_3)

{
  if ((param_1 != (ulong *)0x0) && (param_2 < *param_1)) {
    *(undefined8 *)(param_1[1] + param_2 * 8) = param_3;
    return param_3;
  }
  return 0;
}


// ===== 00795334  FUN_00795334 =====

void FUN_00795334(long param_1)

{
  if (param_1 != 0) {
    FUN_0078cb3c(*(undefined8 *)(param_1 + 8));
    FUN_0078cb3c(param_1);
    return;
  }
  return;
}


// ===== 00795370  FUN_00795370 =====

void FUN_00795370(ulong *param_1,code *param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != (ulong *)0x0) {
    uVar1 = *param_1;
    if (uVar1 != 0) {
      uVar2 = 0;
      do {
        if (*(long *)(param_1[1] + uVar2 * 8) != 0) {
          (*param_2)(param_3);
          uVar1 = *param_1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1);
    }
    FUN_0078cb3c(param_1[1]);
    FUN_0078cb3c(param_1);
    return;
  }
  return;
}


// ===== 007953f4  FUN_007953f4 =====

ulong * FUN_007953f4(ulong *param_1,undefined8 param_2,ulong param_3)

{
  void *__src;
  ulong *puVar1;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  ulong uVar4;
  
  puVar1 = param_1;
  if (param_1 != (ulong *)0x0) {
    uVar3 = *param_1;
    if (uVar3 < 0x7fffffff) {
      uVar4 = param_1[3];
      if (uVar4 <= uVar3 + 1) {
        uVar2 = FUN_0078cbe0(param_1[1],uVar4 << 4);
        if (uVar2 == 0) {
          return (ulong *)0x0;
        }
        uVar3 = *param_1;
        param_1[1] = uVar2;
        param_1[3] = uVar4 << 1;
      }
      if (uVar3 < param_3 || uVar3 - param_3 == 0) {
        *(undefined8 *)(param_1[1] + uVar3 * 8) = param_2;
      }
      else {
        __n = (uVar3 - param_3) * 8;
        uVar3 = param_1[1];
        if (__n != 0) {
          __src = (void *)(uVar3 + param_3 * 8);
          memmove((void *)((long)__src + 8),__src,__n);
          uVar3 = param_1[1];
        }
        *(undefined8 *)(uVar3 + param_3 * 8) = param_2;
      }
      *(undefined4 *)(param_1 + 2) = 0;
      puVar1 = (ulong *)(*param_1 + 1);
      *param_1 = (ulong)puVar1;
    }
    else {
      FUN_00777eb4(0xe,0,0x45,"../../third_party/boringssl/src/crypto/stack/stack.cc",0x8d);
      puVar1 = (ulong *)0x0;
    }
  }
  return puVar1;
}


// ===== 007954d8  FUN_007954d8 =====

undefined8 FUN_007954d8(ulong *param_1,ulong param_2)

{
  undefined8 *__dest;
  size_t __n;
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((param_1 == (ulong *)0x0) || (uVar2 = *param_1, uVar2 <= param_2)) {
    uVar3 = 0;
  }
  else {
    __dest = (undefined8 *)(param_1[1] + param_2 * 8);
    uVar1 = uVar2 - 1;
    uVar3 = *__dest;
    if ((param_2 != uVar1) && (__n = (uVar2 + ~param_2) * 8, __n != 0)) {
      memmove(__dest,__dest + 1,__n);
      uVar1 = *param_1 - 1;
    }
    *param_1 = uVar1;
  }
  return uVar3;
}


// ===== 00795554  FUN_00795554 =====

long FUN_00795554(long *param_1,long param_2)

{
  long *__dest;
  long lVar1;
  long lVar2;
  size_t __n;
  long lVar3;
  
  if ((param_1 != (long *)0x0) && (lVar2 = *param_1, lVar2 != 0)) {
    __n = lVar2 * 8;
    __dest = (long *)param_1[1];
    lVar1 = 0;
    do {
      __n = __n - 8;
      lVar3 = *__dest;
      if (lVar3 == param_2) {
        if ((lVar2 + -1 != lVar1) && (lVar1 = lVar2 + -1, __n != 0)) {
          memmove(__dest,__dest + 1,__n);
          lVar1 = *param_1 + -1;
        }
        *param_1 = lVar1;
        return lVar3;
      }
      lVar1 = lVar1 + 1;
      __dest = __dest + 1;
    } while (lVar2 != lVar1);
  }
  return 0;
}


// ===== 007955ec  FUN_007955ec =====

void FUN_007955ec(ulong *param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_1 != (ulong *)0x0) {
    if (*param_1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar3 = 0;
      uVar2 = 0;
      do {
        iVar1 = (*param_2)(param_3,*(undefined8 *)(param_1[1] + uVar3 * 8),param_4);
        if (iVar1 == 0) {
          *(undefined8 *)(param_1[1] + uVar2 * 8) = *(undefined8 *)(param_1[1] + uVar3 * 8);
          uVar2 = uVar2 + 1;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *param_1);
    }
    *param_1 = uVar2;
  }
  return;
}


// ===== 0079568c  FUN_0079568c =====

ulong * FUN_0079568c(ulong *param_1,ulong *param_2,long param_3,code *param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 != (ulong *)0x0) {
    if (param_1[4] == 0) {
      if (*param_1 != 0) {
        uVar2 = 0;
        do {
          if (*(long *)(param_1[1] + uVar2 * 8) == param_3) goto LAB_007957a0;
          uVar2 = uVar2 + 1;
        } while (*param_1 != uVar2);
      }
    }
    else if (param_3 != 0) {
      uVar3 = *param_1;
      if (((int)param_1[2] == 0) && (1 < uVar3)) {
        uVar2 = 0;
        do {
          iVar1 = (*param_4)(param_1[4],param_3,*(undefined8 *)(param_1[1] + uVar2 * 8));
          if (iVar1 == 0) {
LAB_007957a0:
            if (param_2 != (ulong *)0x0) {
              *param_2 = uVar2;
            }
            return (ulong *)0x1;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < *param_1);
      }
      else if (uVar3 != 0) {
        uVar4 = 0;
        do {
          uVar2 = uVar4 + ((uVar3 - uVar4) - 1 >> 1);
          iVar1 = (*param_4)(param_1[4],param_3,*(undefined8 *)(param_1[1] + uVar2 * 8));
          if (iVar1 < 1) {
            if (-1 < iVar1) {
              if (uVar3 - uVar4 == 1) goto LAB_007957a0;
              uVar2 = uVar2 + 1;
            }
          }
          else {
            uVar4 = uVar2 + 1;
            uVar2 = uVar3;
          }
          uVar3 = uVar2;
        } while (uVar4 < uVar2);
      }
    }
    param_1 = (ulong *)0x0;
  }
  return param_1;
}


// ===== 007957c8  FUN_007957c8 =====

bool FUN_007957c8(ulong *param_1)

{
  if ((param_1 != (ulong *)0x0) && ((int)param_1[2] == 0)) {
    if (param_1[4] != 0) {
      return *param_1 < 2;
    }
    return false;
  }
  return true;
}


// ===== 00795800  FUN_00795800 =====

undefined8 FUN_00795800(long *param_1)

{
  undefined8 *__dest;
  long lVar1;
  undefined8 uVar2;
  
  if ((param_1 == (long *)0x0) || (*param_1 == 0)) {
    uVar2 = 0;
  }
  else {
    __dest = (undefined8 *)param_1[1];
    lVar1 = *param_1 + -1;
    uVar2 = *__dest;
    if ((lVar1 != 0) && (lVar1 * 8 != 0)) {
      memmove(__dest,__dest + 1,lVar1 * 8);
      lVar1 = *param_1 + -1;
    }
    *param_1 = lVar1;
  }
  return uVar2;
}


// ===== 00795868  FUN_00795868 =====

ulong FUN_00795868(ulong *param_1,undefined8 param_2)

{
  void *__src;
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 == (ulong *)0x0) {
    return 0;
  }
  uVar3 = *param_1;
  if (0x7ffffffe < uVar3) {
    FUN_00777eb4(0xe,0,0x45,"../../third_party/boringssl/src/crypto/stack/stack.cc",0x8d);
    return 0;
  }
  uVar4 = param_1[3];
  if (uVar4 <= uVar3 + 1) {
    uVar1 = FUN_0078cbe0(param_1[1],uVar4 << 4);
    if (uVar1 == 0) {
      return 0;
    }
    uVar2 = *param_1;
    param_1[1] = uVar1;
    param_1[3] = uVar4 << 1;
    if ((uVar2 < uVar3 || uVar2 - uVar3 == 0) ||
       (__n = (uVar2 - uVar3) * 8, uVar2 = uVar3, __n == 0)) goto LAB_0079591c;
    __src = (void *)(uVar1 + uVar3 * 8);
    memmove((void *)((long)__src + 8),__src,__n);
  }
  uVar1 = param_1[1];
  uVar2 = uVar3;
LAB_0079591c:
  *(undefined8 *)(uVar1 + uVar2 * 8) = param_2;
  uVar3 = *param_1;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = uVar3 + 1;
  return uVar3 + 1;
}


// ===== 00795944  FUN_00795944 =====

long FUN_00795944(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == (long *)0x0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      lVar2 = *(long *)(param_1[1] + (lVar1 + -1) * 8);
      *param_1 = lVar1 + -1;
      return lVar2;
    }
  }
  return lVar1;
}


// ===== 00795978  FUN_00795978 =====

undefined8 * FUN_00795978(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_0078c9d4(0x28);
    if (puVar1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    lVar2 = FUN_0078cf30(param_1[1],param_1[3] << 3);
    puVar1[1] = lVar2;
    if (lVar2 != 0) {
      *puVar1 = *param_1;
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 2);
      puVar1[3] = param_1[3];
      puVar1[4] = param_1[4];
      return puVar1;
    }
    FUN_0078cb3c();
    FUN_0078cb3c(puVar1);
  }
  return (undefined8 *)0x0;
}


// ===== 00795a0c  FUN_00795a0c =====

void FUN_00795a0c(ulong *param_1,code *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  if (((param_1 != (ulong *)0x0) && (param_1[4] != 0)) && ((int)param_1[2] == 0)) {
    uVar6 = *param_1;
    if (1 < uVar6) {
      for (uVar7 = uVar6 - 2 >> 1; uVar7 < uVar6; uVar7 = uVar7 - 1) {
        uVar8 = uVar7 << 1 | 1;
        uVar4 = uVar7;
        if (uVar8 < uVar6) {
          do {
            iVar1 = (*param_2)(param_1[4],*(undefined8 *)(param_1[1] + uVar4 * 8),
                               *(undefined8 *)(param_1[1] + uVar8 * 8));
            uVar2 = uVar4 * 2 + 2;
            if (-1 < iVar1) {
              uVar8 = uVar4;
            }
            uVar9 = uVar8;
            if ((uVar2 < uVar6) &&
               (iVar1 = (*param_2)(param_1[4],*(undefined8 *)(param_1[1] + uVar8 * 8),
                                   *(undefined8 *)(param_1[1] + uVar2 * 8)), uVar9 = uVar2,
               -1 < iVar1)) {
              uVar9 = uVar8;
            }
            if (uVar4 == uVar9) break;
            uVar2 = param_1[1];
            uVar8 = uVar9 << 1 | 1;
            uVar5 = *(undefined8 *)(uVar2 + uVar4 * 8);
            *(undefined8 *)(uVar2 + uVar4 * 8) = *(undefined8 *)(uVar2 + uVar9 * 8);
            *(undefined8 *)(param_1[1] + uVar9 * 8) = uVar5;
            uVar4 = uVar9;
          } while (uVar8 < uVar6);
          uVar6 = *param_1;
        }
      }
LAB_00795bac:
      uVar6 = uVar6 - 1;
      if (uVar6 != 0) {
        puVar3 = (undefined8 *)param_1[1];
        uVar5 = *puVar3;
        *puVar3 = puVar3[uVar6];
        *(undefined8 *)(param_1[1] + uVar6 * 8) = uVar5;
        if (uVar6 == 1) goto LAB_00795bb4;
        lVar10 = 0;
        uVar7 = 1;
        uVar8 = 0;
        do {
          iVar1 = (*param_2)(param_1[4],*(undefined8 *)(param_1[1] + uVar8 * 8),
                             *(undefined8 *)(param_1[1] + uVar7 * 8));
          uVar4 = lVar10 + 2;
          if (-1 < iVar1) {
            uVar7 = uVar8;
          }
          uVar2 = uVar7;
          if ((uVar4 < uVar6) &&
             (iVar1 = (*param_2)(param_1[4],*(undefined8 *)(param_1[1] + uVar7 * 8),
                                 *(undefined8 *)(param_1[1] + uVar4 * 8)), uVar2 = uVar4, -1 < iVar1
             )) {
            uVar2 = uVar7;
          }
          if (uVar8 == uVar2) break;
          uVar4 = param_1[1];
          lVar10 = uVar2 << 1;
          uVar7 = uVar2 << 1 | 1;
          uVar5 = *(undefined8 *)(uVar4 + uVar8 * 8);
          *(undefined8 *)(uVar4 + uVar8 * 8) = *(undefined8 *)(uVar4 + uVar2 * 8);
          *(undefined8 *)(param_1[1] + uVar2 * 8) = uVar5;
          uVar8 = uVar2;
        } while (uVar7 < uVar6);
        goto LAB_00795bac;
      }
    }
LAB_00795bb4:
    *(undefined4 *)(param_1 + 2) = 1;
  }
  return;
}


// ===== 00795bd8  FUN_00795bd8 =====

void FUN_00795bd8(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x20) != param_2) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(long *)(param_1 + 0x20) = param_2;
  return;
}


// ===== 00795bf8  FUN_00795bf8 =====

ulong * FUN_00795bf8(ulong *param_1,code *param_2,undefined8 param_3,code *param_4,
                    undefined8 param_5)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_1 != (ulong *)0x0) {
    puVar1 = (ulong *)FUN_0078c9d4(0x28);
    if (puVar1 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    uVar2 = FUN_0078cf30(param_1[1],param_1[3] << 3);
    puVar1[1] = uVar2;
    if (uVar2 != 0) {
      uVar4 = *param_1;
      *puVar1 = uVar4;
      *(int *)(puVar1 + 2) = (int)param_1[2];
      puVar1[3] = param_1[3];
      puVar1[4] = param_1[4];
      if (uVar4 == 0) {
        return puVar1;
      }
      uVar5 = 0;
      do {
        if (*(long *)(uVar2 + uVar5 * 8) != 0) {
          uVar3 = (*param_2)(param_3);
          *(undefined8 *)(puVar1[1] + uVar5 * 8) = uVar3;
          uVar2 = puVar1[1];
          if (*(long *)(uVar2 + uVar5 * 8) == 0) {
            if (uVar5 != 0) {
              uVar2 = 0;
              do {
                if (*(long *)(puVar1[1] + uVar2 * 8) != 0) {
                  (*param_4)(param_5);
                }
                uVar2 = uVar2 + 1;
              } while (uVar5 != uVar2);
              uVar2 = puVar1[1];
            }
            break;
          }
          uVar4 = *puVar1;
        }
        uVar5 = uVar5 + 1;
        if (uVar4 <= uVar5) {
          return puVar1;
        }
      } while( true );
    }
    FUN_0078cb3c(uVar2);
    FUN_0078cb3c(puVar1);
  }
  return (ulong *)0x0;
}


// ===== 00795d20  FUN_00795d20 =====

void FUN_00795d20(pthread_rwlock_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_rwlock_init(param_1,(pthread_rwlockattr_t *)0x0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00795d48  FUN_00795d48 =====

void FUN_00795d48(pthread_rwlock_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_rwlock_rdlock(param_1);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00795d6c  FUN_00795d6c =====

void FUN_00795d6c(pthread_rwlock_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_rwlock_wrlock(param_1);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00795d90  FUN_00795d90 =====

void FUN_00795d90(pthread_rwlock_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_rwlock_unlock(param_1);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00795db4  FUN_00795db4 =====

void FUN_00795db4(pthread_rwlock_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_rwlock_unlock(param_1);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00795dd8  <EXTERNAL>::pthread_rwlock_destroy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_destroy(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = pthread_rwlock_destroy(__rwlock);
  return iVar1;
}


// ===== 00795de0  FUN_00795de0 =====

void FUN_00795de0(pthread_once_t *param_1,__init_routine *param_2)

{
  int iVar1;
  
  iVar1 = pthread_once(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00795e04  FUN_00795e04 =====

void * FUN_00795e04(uint param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = pthread_once((pthread_once_t *)&DAT_00d8017c,FUN_00795e6c);
  if (iVar1 == 0) {
    if (DAT_00d80180 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = pthread_getspecific(DAT_00d80184);
      if (pvVar2 != (void *)0x0) {
        pvVar2 = *(void **)((long)pvVar2 + (ulong)param_1 * 8);
      }
    }
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00795e6c  FUN_00795e6c =====

void FUN_00795e6c(void)

{
  int iVar1;
  
  iVar1 = pthread_key_create(&DAT_00d80184,FUN_00795f98);
  DAT_00d80180 = (uint)(iVar1 == 0);
  return;
}


// ===== 00795ea8  FUN_00795ea8 =====

undefined8 FUN_00795ea8(uint param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  int iVar2;
  void *__pointer;
  
  iVar2 = pthread_once((pthread_once_t *)&DAT_00d8017c,FUN_00795e6c);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (DAT_00d80180 == 0) goto LAB_00795f6c;
  __pointer = pthread_getspecific(DAT_00d80184);
  if (__pointer == (void *)0x0) {
    __pointer = calloc(1,0x28);
    if (__pointer == (void *)0x0) goto LAB_00795f6c;
    iVar2 = pthread_setspecific(DAT_00d80184,__pointer);
    if (iVar2 != 0) {
      free(__pointer);
      goto LAB_00795f6c;
    }
  }
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00d80188);
  if (iVar2 == 0) {
    if (param_1 < 5) {
      (&DAT_00d801b0)[param_1] = param_3;
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_00d80188);
      *(undefined8 *)((long)__pointer + (ulong)param_1 * 8) = param_2;
      return 1;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(0x5512,0x795f98);
    (*pcVar1)();
  }
LAB_00795f6c:
  (*param_3)(param_2);
  return 0;
}


// ===== 00795f98  FUN_00795f98 =====

void FUN_00795f98(undefined8 *param_1)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  int iVar6;
  
  if ((param_1 != (undefined8 *)0x0) &&
     (iVar6 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00d80188), pcVar5 = DAT_00d801d0,
     pcVar4 = DAT_00d801c8, pcVar3 = DAT_00d801c0, pcVar2 = DAT_00d801b8, pcVar1 = DAT_00d801b0,
     iVar6 == 0)) {
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_00d80188);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(*param_1);
    }
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(param_1[1]);
    }
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(param_1[2]);
    }
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(param_1[3]);
    }
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(param_1[4]);
    }
    free(param_1);
    return;
  }
  return;
}


// ===== 00796058  FUN_00796058 =====

undefined8 FUN_00796058(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_007789f4();
  if (iVar1 == 0x198) {
    uVar2 = FUN_0077b3b8(param_1);
    uVar2 = FUN_007769c8(uVar2,param_2);
    return uVar2;
  }
  if (iVar1 != 0x74) {
    if (iVar1 == 6) {
      uVar2 = FUN_00788680(param_1);
      uVar2 = FUN_00793ba0(uVar2,param_2);
      return uVar2;
    }
    FUN_00777eb4(0xc,0,0xbb,"../../third_party/boringssl/src/crypto/x509/i2d_pr.cc",0x22);
    return 0xffffffff;
  }
  uVar2 = FUN_0077abd0(param_1);
  uVar2 = FUN_00779ed0(uVar2,param_2);
  return uVar2;
}


// ===== 00796110  FUN_00796110 =====

void FUN_00796110(void)

{
  FUN_0076e4fc(&DAT_00d34ea0);
  return;
}


// ===== 00796120  FUN_00796120 =====

void FUN_00796120(undefined8 param_1)

{
  FUN_0076e060(param_1,&DAT_00d34ea0);
  return;
}


// ===== 00796130  FUN_00796130 =====

void FUN_00796130(void)

{
  FUN_0076e4fc(&DAT_00d35020);
  return;
}


// ===== 00796140  FUN_00796140 =====

void FUN_00796140(undefined8 param_1)

{
  FUN_0076e060(param_1,&DAT_00d35020);
  return;
}


// ===== 00796150  FUN_00796150 =====

void FUN_00796150(void)

{
  FUN_0076e4fc(&DAT_00d35070);
  return;
}


// ===== 00796160  FUN_00796160 =====

void FUN_00796160(undefined8 param_1)

{
  FUN_0076e060(param_1,&DAT_00d35070);
  return;
}


// ===== 00796170  FUN_00796170 =====

undefined8 FUN_00796170(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  if (param_2 == (int *)0x0) {
    return 0xffffffff;
  }
  iVar1 = *param_1;
  if (iVar1 != *param_2) {
    return 0xffffffff;
  }
  if (iVar1 < 5) {
    if (iVar1 < 3) {
      if (1 < iVar1 - 1U) {
        if (iVar1 != 0) {
          return 0xffffffff;
        }
        puVar5 = *(undefined8 **)(param_1 + 2);
        if (puVar5 == (undefined8 *)0x0) {
          return 0xffffffff;
        }
        puVar7 = *(undefined8 **)(param_2 + 2);
        if (puVar7 == (undefined8 *)0x0) {
          return 0xffffffff;
        }
        uVar2 = FUN_0078d950(*puVar5,*puVar7);
        if ((int)uVar2 == 0) {
          uVar2 = FUN_0076bc18(puVar5[1],puVar7[1]);
          return uVar2;
        }
        return uVar2;
      }
    }
    else if (iVar1 != 3) {
      if (iVar1 == 4) {
        uVar2 = FUN_007a0a48(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
        return uVar2;
      }
      return 0xffffffff;
    }
  }
  else {
    if (6 < iVar1) {
      if (iVar1 == 7) {
        uVar2 = thunk_FUN_007696a8(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
        return uVar2;
      }
      if (iVar1 == 8) {
        uVar2 = FUN_0078d950(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
        return uVar2;
      }
      return 0xffffffff;
    }
    if (iVar1 == 5) {
      plVar6 = *(long **)(param_1 + 2);
      plVar8 = *(long **)(param_2 + 2);
      lVar3 = *plVar8;
      if (*plVar6 == 0) {
        if (lVar3 != 0) {
          return 0xffffffff;
        }
      }
      else if ((lVar3 == 0) || (iVar1 = FUN_007696a8(), iVar1 != 0)) {
        return 0xffffffff;
      }
      lVar3 = plVar6[1];
      lVar4 = plVar8[1];
      goto LAB_0079626c;
    }
    if (iVar1 != 6) {
      return 0xffffffff;
    }
  }
  lVar3 = *(long *)(param_1 + 2);
  lVar4 = *(long *)(param_2 + 2);
LAB_0079626c:
  uVar2 = FUN_007696a8(lVar3,lVar4);
  return uVar2;
}


// ===== 007962d8  thunk_FUN_007696a8 =====

void thunk_FUN_007696a8(void)

{
  FUN_007696a8();
  return;
}


// ===== 007962e0  FUN_007962e0 =====

void FUN_007962e0(undefined8 param_1,undefined8 param_2,int param_3)

{
  FUN_007693d8(param_1,param_2,(long)param_3);
  return;
}


// ===== 007962ec  FUN_007962ec =====

undefined8 FUN_007962ec(long param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  iVar2 = FUN_0079644c();
  if (iVar2 == 0) goto code_r0x007963f4;
  puVar5 = &UNK_00d35120;
  uVar3 = 1;
  puVar4 = &UNK_00d351b0;
  switch(param_2) {
  default:
    goto code_r0x007963f4;
  case 1:
    goto code_r0x007963bc;
  case 2:
    puVar4 = &UNK_00d35138;
    break;
  case 3:
    puVar4 = &UNK_00d35150;
    break;
  case 4:
    puVar4 = &UNK_00d35168;
    break;
  case 5:
    puVar4 = &UNK_00d35180;
    break;
  case 6:
    puVar4 = &UNK_00d35198;
    goto joined_r0x00796390;
  case 7:
    goto code_r0x0079642c;
  case 8:
    puVar4 = &UNK_00d351c8;
    goto joined_r0x00796390;
  case 9:
    puVar5 = &UNK_00d351e0;
    goto code_r0x007963bc;
  case 0xffffffff:
    goto code_r0x007963fc;
  }
  if (param_3 != 0) {
LAB_007963c0:
    uVar1 = *(uint *)(param_1 + 0x110);
    if ((((uVar1 >> 1 & 1) != 0) && ((*(byte *)(param_1 + 0x114) >> 2 & 1) == 0)) ||
       ((((uVar1 ^ 0xffffffff) & 0x2040) != 0 && ((uVar1 & 0x11) != 0x11)))) {
code_r0x007963f4:
      uVar3 = 0;
code_r0x007963fc:
      return uVar3;
    }
  }
code_r0x0079642c:
                    /* WARNING: Could not recover jumptable at 0x00796448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(puVar4 + 8))(puVar4,param_1,param_3);
  return uVar3;
code_r0x007963bc:
  puVar4 = puVar5;
joined_r0x00796390:
  if (param_3 == 0) goto code_r0x0079642c;
  goto LAB_007963c0;
}


// ===== 0079644c  FUN_0079644c =====

uint FUN_0079644c(long param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  int local_38;
  int local_34;
  
  FUN_00795d48(param_1 + 0x170);
  uVar12 = *(uint *)(param_1 + 0x110);
  FUN_00795d90(param_1 + 0x170);
  if ((uVar12 >> 8 & 1) != 0) goto LAB_00796a08;
  FUN_00795d6c(param_1 + 0x170);
  if ((*(byte *)(param_1 + 0x111) & 1) == 0) {
    uVar4 = FUN_0072abc4();
    iVar2 = FUN_007a1f8c(param_1,uVar4,param_1 + 0x148,0);
    if (iVar2 == 0) {
      *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | 0x80;
    }
    lVar5 = FUN_007a134c(param_1);
    if (lVar5 == 0) {
      *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | 0x40;
    }
    local_38 = -0x55555556;
    piVar6 = (int *)FUN_007a0de4(param_1,0x57,&local_38,0);
    if (piVar6 == (int *)0x0) {
      if (local_38 != -1) {
        uVar12 = 0x80;
        goto LAB_00796568;
      }
    }
    else {
      if (*piVar6 != 0) {
        *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | 0x10;
      }
      if (*(long *)(piVar6 + 2) == 0) {
        uVar4 = 0xffffffffffffffff;
      }
      else if ((*(int *)(*(long *)(piVar6 + 2) + 4) == 0x102) || (*piVar6 == 0)) {
        uVar4 = 0;
        *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | 0x80;
      }
      else {
        uVar4 = FUN_0076cfe8();
      }
      *(undefined8 *)(param_1 + 0x108) = uVar4;
      FUN_00797020(piVar6);
      uVar12 = 1;
LAB_00796568:
      *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | uVar12;
    }
    piVar6 = (int *)FUN_007a0de4(param_1,0x53,&local_38,0);
    if (piVar6 == (int *)0x0) {
      if (local_38 != -1) {
        *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | 0x80;
      }
    }
    else {
      if (*piVar6 < 1) {
        *(undefined4 *)(param_1 + 0x114) = 0;
      }
      else {
        bVar1 = **(byte **)(piVar6 + 2);
        *(uint *)(param_1 + 0x114) = (uint)bVar1;
        if (1 < *piVar6) {
          *(uint *)(param_1 + 0x114) =
               (uint)CONCAT11(*(undefined1 *)(*(long *)(piVar6 + 2) + 1),bVar1);
        }
      }
      *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | 2;
      thunk_FUN_007695a4();
    }
    *(undefined4 *)(param_1 + 0x118) = 0;
    lVar5 = FUN_007a0de4(param_1,0x7e,&local_38,0);
    if (lVar5 == 0) {
      if (local_38 != -1) {
        *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | 0x80;
      }
    }
    else {
      *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | 4;
      lVar7 = FUN_00795280();
      if (lVar7 != 0) {
        uVar13 = 0;
        do {
          FUN_007952e0(lVar5,uVar13);
          iVar2 = FUN_0078d994();
          if (iVar2 < 0x89) {
            if (iVar2 < 0x83) {
              if (iVar2 == 0x81) {
                uVar12 = 1;
              }
              else {
                if (iVar2 != 0x82) goto LAB_007966f4;
                uVar12 = 2;
              }
            }
            else if (iVar2 == 0x83) {
              uVar12 = 8;
            }
            else if (iVar2 == 0x84) {
              uVar12 = 4;
            }
            else {
              if (iVar2 != 0x85) goto LAB_007966f4;
              uVar12 = 0x40;
            }
LAB_007966e8:
            *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | uVar12;
          }
          else {
            if (0xb3 < iVar2) {
              if (iVar2 == 0xb4) {
                uVar12 = 0x20;
              }
              else if (iVar2 == 0x129) {
                uVar12 = 0x80;
              }
              else {
                if (iVar2 != 0x38e) goto LAB_007966f4;
                uVar12 = 0x100;
              }
              goto LAB_007966e8;
            }
            if ((iVar2 == 0x89) || (iVar2 == 0x8b)) {
              uVar12 = 0x10;
              goto LAB_007966e8;
            }
          }
LAB_007966f4:
          uVar13 = uVar13 + 1;
          uVar8 = FUN_00795280(lVar5);
        } while (uVar13 < uVar8);
      }
      FUN_00795370(lVar5,FUN_00796e84,PTR_FUN_00d526e0);
    }
    lVar5 = FUN_007a0de4(param_1,0x52,&local_38,0);
    *(long *)(param_1 + 0x120) = lVar5;
    if ((lVar5 == 0) && (local_38 != -1)) {
      *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | 0x80;
    }
    lVar5 = FUN_007a0de4(param_1,0x5a,&local_38,0);
    *(long *)(param_1 + 0x128) = lVar5;
    if ((lVar5 == 0) && (local_38 != -1)) {
      *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | 0x80;
    }
    uVar4 = FUN_007a0bd0(param_1);
    uVar9 = FUN_007a0b50(param_1);
    iVar2 = FUN_007a0a48(uVar4,uVar9);
    if (iVar2 == 0) {
      *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | 0x20;
      iVar2 = FUN_00796a2c(param_1,*(undefined8 *)(param_1 + 0x128));
      if ((iVar2 == 0) &&
         (((*(uint *)(param_1 + 0x110) >> 1 & 1) == 0 ||
          ((*(byte *)(param_1 + 0x114) >> 2 & 1) != 0)))) {
        *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | 0x2000;
      }
    }
    lVar5 = FUN_007a0de4(param_1,0x55,&local_38,0);
    *(long *)(param_1 + 0x138) = lVar5;
    if ((lVar5 == 0) && (local_38 != -1)) {
      *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | 0x80;
    }
    lVar5 = FUN_007a0de4(param_1,0x29a,&local_38,0);
    *(long *)(param_1 + 0x140) = lVar5;
    if ((lVar5 == 0) && (local_38 != -1)) {
      *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | 0x80;
    }
    local_34 = -0x55555556;
    lVar5 = FUN_007a0de4(param_1,0x67,&local_34,0);
    *(long *)(param_1 + 0x130) = lVar5;
    if ((lVar5 == 0) && (local_34 != -1)) {
LAB_00796890:
      *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | 0x80;
    }
    else {
      lVar5 = FUN_00795280();
      if (lVar5 != 0) {
        uVar13 = 0;
        do {
          puVar10 = (undefined8 *)FUN_007952e0(*(undefined8 *)(param_1 + 0x130),uVar13);
          if (((int *)*puVar10 != (int *)0x0) && (*(int *)*puVar10 == 1)) {
            lVar5 = FUN_00795280(puVar10[2]);
            if (lVar5 != 0) {
              uVar8 = 0;
              do {
                piVar6 = (int *)FUN_007952e0(puVar10[2],uVar8);
                if (*piVar6 == 4) {
                  lVar5 = *(long *)(piVar6 + 2);
                  if (lVar5 != 0) goto LAB_007968bc;
                  break;
                }
                uVar8 = uVar8 + 1;
                uVar11 = FUN_00795280(puVar10[2]);
              } while (uVar8 < uVar11);
            }
            lVar5 = FUN_007a0b50(param_1);
LAB_007968bc:
            iVar2 = FUN_00797770(*puVar10,lVar5);
            if (iVar2 == 0) goto LAB_00796890;
          }
          uVar13 = uVar13 + 1;
          uVar8 = FUN_00795280(*(undefined8 *)(param_1 + 0x130));
        } while (uVar13 < uVar8);
      }
    }
    local_38 = 0;
    iVar2 = FUN_007a0dc0(param_1);
    if (0 < iVar2) {
      do {
        uVar4 = FUN_007a0dd8(param_1,local_38);
        iVar2 = FUN_007a1440();
        if (iVar2 != 0) {
          FUN_007a14b0(uVar4);
          iVar2 = FUN_0078d994();
          if (iVar2 < 0x191) {
            if ((0x2b < iVar2 - 0x53U) ||
               ((0x80000000055U >> ((ulong)(iVar2 - 0x53U) & 0x3f) & 1) == 0)) {
LAB_007969e8:
              *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | 0x200;
              break;
            }
          }
          else if (((1 < iVar2 - 0x2ebU) && (iVar2 != 0x191)) && (iVar2 != 0x29a))
          goto LAB_007969e8;
        }
        iVar2 = local_38 + 1;
        local_38 = iVar2;
        iVar3 = FUN_007a0dc0(param_1);
      } while (iVar2 < iVar3);
    }
    *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | 0x100;
  }
  FUN_00795db4(param_1 + 0x170);
LAB_00796a08:
  return (*(uint *)(param_1 + 0x110) >> 7 ^ 0xffffffff) & 1;
}


// ===== 00796a2c  FUN_00796a2c =====

undefined8 FUN_00796a2c(long param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  
  if (param_2 == (long *)0x0) {
    return 0;
  }
  if (((*param_2 == 0) || (*(long *)(param_1 + 0x120) == 0)) ||
     (iVar1 = thunk_FUN_007696a8(), iVar1 == 0)) {
    if (param_2[2] != 0) {
      uVar2 = FUN_007a0be8(param_1);
      iVar1 = FUN_0076c88c(uVar2,param_2[2]);
      if (iVar1 != 0) {
        return 0x1f;
      }
    }
    lVar5 = param_2[1];
    if ((lVar5 != 0) && (lVar3 = FUN_00795280(lVar5), lVar3 != 0)) {
      lVar6 = 0;
      do {
        piVar4 = (int *)FUN_007952e0(lVar5,lVar6);
        if (*piVar4 == 4) {
          lVar5 = *(long *)(piVar4 + 2);
          if (lVar5 != 0) {
            uVar2 = FUN_007a0b50(param_1);
            iVar1 = FUN_007a0a48(lVar5,uVar2);
            if (iVar1 != 0) {
              return 0x1f;
            }
          }
          break;
        }
        lVar6 = lVar6 + 1;
      } while (lVar3 != lVar6);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0x1e;
  }
  return uVar2;
}


// ===== 00796b18  FUN_00796b18 =====

ulong FUN_00796b18(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN_0079644c();
  if ((int)uVar2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x110);
    if (((uVar1 >> 1 & 1) == 0) || ((*(byte *)(param_1 + 0x114) >> 2 & 1) != 0)) {
      if (((uVar1 ^ 0xffffffff) & 0x2040) == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = (ulong)(uVar1 & uVar1 >> 4 & 1);
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


// ===== 00796b78  FUN_00796b78 =====

undefined8 FUN_00796b78(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_007a0bd0();
  uVar3 = FUN_007a0b50(param_2);
  iVar1 = FUN_007a0a48(uVar2,uVar3);
  if (iVar1 == 0) {
    iVar1 = FUN_0079644c(param_1);
    if ((iVar1 == 0) || (iVar1 = FUN_0079644c(param_2), iVar1 == 0)) {
      uVar2 = 1;
    }
    else if ((*(long *)(param_2 + 0x128) == 0) || (uVar2 = FUN_00796a2c(param_1), (int)uVar2 == 0))
    {
      if (((*(byte *)(param_1 + 0x110) >> 1 & 1) == 0) ||
         ((*(byte *)(param_1 + 0x114) >> 2 & 1) != 0)) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0x20;
      }
    }
  }
  else {
    uVar2 = 0x1d;
  }
  return uVar2;
}


// ===== 00796c20  FUN_00796c20 =====

undefined8 FUN_00796c20(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0079644c();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x120);
  }
  return uVar2;
}


// ===== 00796c58  FUN_00796c58 =====

undefined8 FUN_00796c58(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0079644c();
  if ((iVar1 == 0) || (*(undefined8 **)(param_1 + 0x128) == (undefined8 *)0x0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = **(undefined8 **)(param_1 + 0x128);
  }
  return uVar2;
}


// ===== 00796c98  FUN_00796c98 =====

bool FUN_00796c98(undefined8 param_1,long param_2,int param_3)

{
  bool bVar1;
  
  if (((*(uint *)(param_2 + 0x110) >> 2 & 1) != 0) && ((*(byte *)(param_2 + 0x118) >> 1 & 1) == 0))
  {
    return false;
  }
  bVar1 = true;
  if ((param_3 == 0) && ((*(uint *)(param_2 + 0x110) >> 1 & 1) != 0)) {
    bVar1 = (*(byte *)(param_2 + 0x114) & 0x88) != 0;
  }
  return bVar1;
}


// ===== 00796cd4  FUN_00796cd4 =====

bool FUN_00796cd4(undefined8 param_1,long param_2,int param_3)

{
  bool bVar1;
  
  if (((*(uint *)(param_2 + 0x110) >> 2 & 1) != 0) && ((*(byte *)(param_2 + 0x118) & 1) == 0)) {
    return false;
  }
  bVar1 = true;
  if ((param_3 == 0) && ((*(uint *)(param_2 + 0x110) >> 1 & 1) != 0)) {
    bVar1 = (*(byte *)(param_2 + 0x114) & 0xa8) != 0;
  }
  return bVar1;
}


// ===== 00796d10  FUN_00796d10 =====

uint FUN_00796d10(undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  
  if (((*(uint *)(param_2 + 0x110) >> 2 & 1) != 0) && ((*(byte *)(param_2 + 0x118) & 1) == 0)) {
    return 0;
  }
  uVar1 = 1;
  if ((param_3 == 0) && ((*(uint *)(param_2 + 0x110) >> 1 & 1) != 0)) {
    uVar1 = *(uint *)(param_2 + 0x114) >> 5 & 1;
  }
  return uVar1;
}


// ===== 00796d44  FUN_00796d44 =====

bool FUN_00796d44(undefined8 param_1,long param_2,int param_3)

{
  bool bVar1;
  
  if (((*(uint *)(param_2 + 0x110) >> 2 & 1) != 0) && ((*(byte *)(param_2 + 0x118) >> 2 & 1) == 0))
  {
    return false;
  }
  bVar1 = true;
  if ((param_3 == 0) && ((*(uint *)(param_2 + 0x110) >> 1 & 1) != 0)) {
    bVar1 = (*(byte *)(param_2 + 0x114) & 0xc0) != 0;
  }
  return bVar1;
}


// ===== 00796d7c  FUN_00796d7c =====

uint FUN_00796d7c(undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  
  if (((*(uint *)(param_2 + 0x110) >> 2 & 1) != 0) && ((*(byte *)(param_2 + 0x118) >> 2 & 1) == 0))
  {
    return 0;
  }
  uVar1 = 1;
  if ((param_3 == 0) && ((*(uint *)(param_2 + 0x110) >> 1 & 1) != 0)) {
    uVar1 = *(uint *)(param_2 + 0x114) >> 5 & 1;
  }
  return uVar1;
}


// ===== 00796db0  FUN_00796db0 =====

uint FUN_00796db0(undefined8 param_1,long param_2,int param_3)

{
  if (param_3 != 0) {
    return 1;
  }
  if ((*(byte *)(param_2 + 0x110) >> 1 & 1) == 0) {
    return 1;
  }
  return *(uint *)(param_2 + 0x114) >> 1 & 1;
}


// ===== 00796ddc  FUN_00796ddc =====

undefined8 FUN_00796ddc(void)

{
  return 1;
}


// ===== 00796de8  FUN_00796de8 =====

undefined8 FUN_00796de8(undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_3 != 0) {
    return 1;
  }
  uVar1 = *(uint *)(param_2 + 0x110);
  if ((uVar1 >> 1 & 1) == 0) {
    if ((uVar1 >> 2 & 1) == 0) {
      return 0;
    }
  }
  else {
    if ((uVar1 >> 2 & 1) == 0) {
      return 0;
    }
    if (*(uint *)(param_2 + 0x114) == 0) {
      return 0;
    }
    if ((*(uint *)(param_2 + 0x114) & 0xffffff3f) != 0) {
      return 0;
    }
  }
  if (*(int *)(param_2 + 0x118) != 0x40) {
    return 0;
  }
  iVar2 = FUN_007a0dcc(param_2,0x7e,0xffffffff);
  if (-1 < iVar2) {
    FUN_007a0dd8(param_2,iVar2);
    uVar3 = FUN_007a1440();
    if ((int)uVar3 == 0) {
      return uVar3;
    }
  }
  return 1;
}


// ===== 00796e84  FUN_00796e84 =====

void FUN_00796e84(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00796e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}


// ===== 00796e94  FUN_00796e94 =====

undefined8 FUN_00796e94(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 local_8;
  
  local_8 = param_3;
  FUN_0079e980(&DAT_001a0f3f,*param_2,&local_8);
  FUN_0079ecfc("pathlen",*(undefined8 *)(param_2 + 2),&local_8);
  return local_8;
}


// ===== 00796ee8  FUN_00796ee8 =====

long FUN_00796ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  char *__s1;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = FUN_0076e4fc(&DAT_00d351f8);
  if ((lVar2 != 0) && (lVar3 = FUN_00795280(param_3), lVar3 != 0)) {
    uVar6 = 0;
    do {
      puVar4 = (undefined8 *)FUN_007952e0(param_3,uVar6);
      __s1 = (char *)puVar4[1];
      if (((*__s1 == 'C') && (__s1[1] == 'A')) && (__s1[2] == '\0')) {
        iVar1 = FUN_0079eeac(puVar4,lVar2);
      }
      else {
        iVar1 = strcmp(__s1,"pathlen");
        if (iVar1 != 0) {
          FUN_00777eb4(0x14,0,0x7b,"../../third_party/boringssl/src/crypto/x509/v3_bcons.cc",0x57);
          FUN_00777f98(6,"section:",*puVar4,",name:",puVar4[1],",value:",puVar4[2]);
          goto LAB_00796ff0;
        }
        iVar1 = FUN_0079ef30(puVar4,lVar2 + 8);
      }
      if (iVar1 == 0) {
LAB_00796ff0:
        FUN_0076e060(lVar2,&DAT_00d351f8);
        return 0;
      }
      uVar6 = uVar6 + 1;
      uVar5 = FUN_00795280(param_3);
    } while (uVar6 < uVar5);
  }
  return lVar2;
}


// ===== 00797020  FUN_00797020 =====

void FUN_00797020(undefined8 param_1)

{
  FUN_0076e060(param_1,&DAT_00d351f8);
  return;
}


// ===== 00797030  FUN_00797030 =====

long FUN_00797030(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  char *__s1;
  
  lVar2 = FUN_00795214();
  if (lVar2 == 0) {
    lVar3 = 0;
LAB_0079728c:
    lVar4 = 0;
LAB_00797290:
    FUN_00796140(lVar4);
    FUN_00796160(lVar3);
    FUN_00795370(lVar2,FUN_00797d30,FUN_00797420);
    lVar2 = 0;
  }
  else {
    lVar3 = FUN_00795280(param_3);
    if (lVar3 != 0) {
      uVar9 = 0;
      do {
        lVar3 = FUN_007952e0(param_3,uVar9);
        if (*(long *)(lVar3 + 0x10) == 0) {
          lVar4 = FUN_0079b7ac(param_2,*(undefined8 *)(lVar3 + 8));
          if (lVar4 == 0) {
LAB_007972e0:
            lVar3 = 0;
            goto LAB_00797290;
          }
          plVar6 = (long *)FUN_0076e4fc(&DAT_00d35400);
          if (plVar6 != (long *)0x0) {
            lVar3 = FUN_00795280(lVar4);
            if (lVar3 != 0) {
              uVar8 = 0;
              do {
                lVar3 = FUN_007952e0(lVar4,uVar8);
                iVar1 = FUN_00797840(plVar6,param_2,lVar3);
                if (iVar1 < 1) {
                  if (iVar1 < 0) goto LAB_00797278;
                  __s1 = *(char **)(lVar3 + 8);
                  iVar1 = strcmp(__s1,"reasons");
                  if (iVar1 == 0) {
                    iVar1 = FUN_00797ad4(plVar6 + 1,*(undefined8 *)(lVar3 + 0x10));
                    if (iVar1 == 0) goto LAB_00797278;
                  }
                  else {
                    iVar1 = strcmp(__s1,"CRLissuer");
                    if (iVar1 == 0) {
                      FUN_00796160(plVar6[2]);
                      if (**(char **)(lVar3 + 0x10) == '@') {
                        lVar5 = FUN_0079b7ac(param_2,*(char **)(lVar3 + 0x10) + 1);
                        lVar3 = 0;
                      }
                      else {
                        lVar5 = FUN_0079efb4();
                        lVar3 = lVar5;
                      }
                      if (lVar5 == 0) {
                        FUN_00777eb4(0x14,0,0x99,
                                     "../../third_party/boringssl/src/crypto/x509/v3_crld.cc",0x49);
                        lVar3 = 0;
                        plVar6[2] = 0;
                        goto LAB_0079727c;
                      }
                      lVar5 = FUN_00798a4c(0,param_2);
                      FUN_00795370(lVar3,FUN_00797d20,PTR_FUN_00d52880);
                      plVar6[2] = lVar5;
                      if (lVar5 == 0) goto LAB_00797278;
                    }
                  }
                }
                uVar8 = uVar8 + 1;
                uVar7 = FUN_00795280(lVar4);
              } while (uVar8 < uVar7);
            }
            lVar3 = FUN_00795868(lVar2,plVar6);
            if (lVar3 != 0) goto LAB_00797258;
          }
LAB_00797278:
          lVar3 = 0;
LAB_0079727c:
          FUN_0076e060(plVar6,&DAT_00d35400);
          goto LAB_0079728c;
        }
        lVar4 = FUN_00798b18(param_1,param_2);
        if (lVar4 == 0) goto LAB_007972e0;
        lVar3 = FUN_00796150();
        if ((lVar3 == 0) || (lVar5 = FUN_00795868(lVar3,lVar4), lVar5 == 0)) goto LAB_00797290;
        plVar6 = (long *)FUN_0076e4fc(&DAT_00d35400);
        if (plVar6 == (long *)0x0) goto LAB_0079728c;
        lVar4 = FUN_00795868(lVar2,plVar6);
        if (lVar4 == 0) goto LAB_0079727c;
        lVar4 = FUN_0076e4fc(&DAT_00d353d0);
        *plVar6 = lVar4;
        if (lVar4 == 0) goto LAB_0079728c;
        *(long *)(lVar4 + 8) = lVar3;
        *(undefined4 *)*plVar6 = 0;
LAB_00797258:
        uVar9 = uVar9 + 1;
        uVar8 = FUN_00795280(param_3);
      } while (uVar9 < uVar8);
    }
  }
  return lVar2;
}


// ===== 00797310  FUN_00797310 =====

undefined8 FUN_00797310(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  
  lVar1 = FUN_00795280(param_2);
  if (lVar1 != 0) {
    uVar4 = 0;
    do {
      FUN_0076fb34(param_3,&DAT_001ded1c);
      plVar3 = (long *)FUN_007952e0(param_2,uVar4);
      if (*plVar3 != 0) {
        FUN_00797d88(param_3,*plVar3,param_4);
      }
      if (plVar3[1] != 0) {
        FUN_00797e60(param_3,"Reasons",plVar3[1],param_4);
      }
      if (plVar3[2] != 0) {
        FUN_0079a5f0(param_3,"%*sCRL Issuer:\n",param_4,&DAT_001b3348);
        FUN_00797f48(param_3,plVar3[2],param_4);
      }
      uVar4 = uVar4 + 1;
      uVar2 = FUN_00795280(param_2);
    } while (uVar4 < uVar2);
  }
  return 1;
}


// ===== 00797420  FUN_00797420 =====

void FUN_00797420(undefined8 param_1)

{
  FUN_0076e060(param_1,&DAT_00d35400);
  return;
}


// ===== 00797430  FUN_00797430 =====

void FUN_00797430(undefined8 param_1)

{
  FUN_0076e060(param_1,&DAT_00d352d0);
  return;
}


// ===== 00797440  FUN_00797440 =====

void FUN_00797440(undefined8 param_1)

{
  FUN_0076e060(param_1,&DAT_00d35510);
  return;
}


// ===== 00797450  FUN_00797450 =====

long FUN_00797450(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *__s1;
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  lVar3 = FUN_0076e4fc(&DAT_00d35510);
  if (lVar3 == 0) {
LAB_007975d4:
    FUN_0076e060(lVar3,&DAT_00d35510);
    lVar3 = 0;
  }
  else {
    lVar4 = FUN_00795280(param_3);
    if (lVar4 != 0) {
      uVar7 = 0;
      do {
        puVar6 = (undefined8 *)FUN_007952e0(param_3,uVar7);
        __s1 = (char *)puVar6[1];
        uVar1 = puVar6[2];
        iVar2 = FUN_00797840(lVar3,param_2,puVar6);
        if (iVar2 < 1) {
          if (iVar2 < 0) goto LAB_007975d4;
          iVar2 = strcmp(__s1,"onlyuser");
          if (iVar2 == 0) {
            lVar4 = lVar3 + 8;
          }
          else {
            iVar2 = strcmp(__s1,"onlyCA");
            if (iVar2 == 0) {
              lVar4 = lVar3 + 0xc;
            }
            else {
              iVar2 = strcmp(__s1,"onlyAA");
              if (iVar2 == 0) {
                lVar4 = lVar3 + 0x1c;
              }
              else {
                iVar2 = strcmp(__s1,"indirectCRL");
                if (iVar2 != 0) {
                  iVar2 = strcmp(__s1,"onlysomereasons");
                  if (iVar2 == 0) {
                    iVar2 = FUN_00797ad4(lVar3 + 0x10,uVar1);
                    if (iVar2 != 0) goto LAB_007974c8;
                  }
                  else {
                    FUN_00777eb4(0x14,0,0x7b,
                                 "../../third_party/boringssl/src/crypto/x509/v3_crld.cc",0x1b4);
                    FUN_00777f98(6,"section:",*puVar6,",name:",puVar6[1],",value:",puVar6[2]);
                  }
                  goto LAB_007975d4;
                }
                lVar4 = lVar3 + 0x18;
              }
            }
          }
          iVar2 = FUN_0079eeac(puVar6,lVar4);
          if (iVar2 == 0) goto LAB_007975d4;
        }
LAB_007974c8:
        uVar7 = uVar7 + 1;
        uVar5 = FUN_00795280(param_3);
      } while (uVar7 < uVar5);
    }
  }
  return lVar3;
}


// ===== 0079760c  FUN_0079760c =====

undefined8 FUN_0079760c(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  if (*param_2 != 0) {
    FUN_00797d88(param_3,*param_2,param_4);
  }
  if (0 < (int)param_2[1]) {
    FUN_0079a5f0(param_3,"%*sOnly User Certificates\n",param_4,&DAT_001b3348);
  }
  if (0 < *(int *)((long)param_2 + 0xc)) {
    FUN_0079a5f0(param_3,"%*sOnly CA Certificates\n",param_4,&DAT_001b3348);
  }
  if (0 < (int)param_2[3]) {
    FUN_0079a5f0(param_3,"%*sIndirect CRL\n",param_4,&DAT_001b3348);
  }
  if (param_2[2] != 0) {
    FUN_00797e60(param_3,"Only Some Reasons",param_2[2],param_4);
  }
  if (0 < *(int *)((long)param_2 + 0x1c)) {
    FUN_0079a5f0(param_3,"%*sOnly Attribute Certificates\n",param_4,&DAT_001b3348);
  }
  if ((((*param_2 == 0) && ((int)param_2[1] < 1)) && (*(int *)((long)param_2 + 0xc) < 1)) &&
     ((((int)param_2[3] < 1 && (param_2[2] == 0)) && (*(int *)((long)param_2 + 0x1c) < 1)))) {
    FUN_0079a5f0(param_3,"%*s<EMPTY>\n",param_4,&DAT_001b3348);
  }
  return 1;
}


// ===== 00797770  FUN_00797770 =====

undefined8 FUN_00797770(int *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  if (param_1 == (int *)0x0) {
    return 1;
  }
  if (*param_1 == 1) {
    uVar5 = *(undefined8 *)(param_1 + 2);
    lVar2 = FUN_007a65d4(param_2);
    *(long *)(param_1 + 4) = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
    lVar2 = FUN_00795280(uVar5);
    if (lVar2 != 0) {
      uVar6 = 0;
      do {
        uVar3 = FUN_007952e0(uVar5,uVar6);
        iVar1 = FUN_007a16fc(*(undefined8 *)(param_1 + 4),uVar3,0xffffffff,uVar6 == 0);
        if (iVar1 == 0) goto LAB_0079781c;
        uVar6 = uVar6 + 1;
        uVar4 = FUN_00795280(uVar5);
      } while (uVar6 < uVar4);
    }
    iVar1 = FUN_007a67e4(*(undefined8 *)(param_1 + 4),0);
    if (iVar1 < 0) {
LAB_0079781c:
      FUN_007a6074(*(undefined8 *)(param_1 + 4));
      param_1[4] = 0;
      param_1[5] = 0;
      return 0;
    }
  }
  return 1;
}


// ===== 00797840  FUN_00797840 =====

undefined8 FUN_00797840(long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  
  pcVar9 = *(char **)(param_3 + 8);
  iVar1 = strcmp(pcVar9,"fullname");
  if (iVar1 == 0) {
    pcVar9 = *(char **)(param_3 + 0x10);
    if (pcVar9 == (char *)0x0) {
      uVar8 = 0x89;
      uVar6 = 0x5d;
      goto LAB_00797a60;
    }
    if (*pcVar9 == '@') {
      lVar2 = FUN_0079b7ac(param_2,pcVar9 + 1);
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_0079efb4();
      lVar2 = lVar3;
    }
    if (lVar2 != 0) {
      lVar2 = FUN_00798a4c(0,param_2);
      FUN_00795370(lVar3,FUN_00797d20,PTR_FUN_00d52880);
      uVar8 = 0;
      lVar3 = 0;
      if (lVar2 == 0) goto LAB_00797a00;
      lVar7 = *param_1;
      lVar3 = lVar2;
joined_r0x007978f8:
      if (lVar7 == 0) {
        puVar5 = (undefined4 *)FUN_0076e4fc(&DAT_00d353d0);
        *param_1 = (long)puVar5;
        if (puVar5 != (undefined4 *)0x0) {
          if (lVar3 != 0) {
            *puVar5 = 0;
            *(long *)(*param_1 + 8) = lVar3;
            return 1;
          }
          *puVar5 = 1;
          *(undefined8 *)(*param_1 + 8) = uVar8;
          return 1;
        }
      }
      else {
        FUN_00777eb4(0x14,0,0x6a,"../../third_party/boringssl/src/crypto/x509/v3_crld.cc",0x86);
      }
      goto LAB_00797a00;
    }
    FUN_00777eb4(0x14,0,0x99,"../../third_party/boringssl/src/crypto/x509/v3_crld.cc",0x49);
    uVar8 = 0;
  }
  else {
    iVar1 = strcmp(pcVar9,"relativename");
    if (iVar1 != 0) {
      return 0;
    }
    if (*(long *)(param_3 + 0x10) == 0) {
      uVar8 = 0x89;
      uVar6 = 0x68;
LAB_00797a60:
      FUN_00777eb4(0x14,0,uVar8,"../../third_party/boringssl/src/crypto/x509/v3_crld.cc",uVar6);
      return 0xffffffff;
    }
    lVar3 = FUN_0079b7ac(param_2);
    if (lVar3 == 0) {
      uVar8 = 0x99;
      uVar6 = 0x6d;
      goto LAB_00797a60;
    }
    puVar4 = (undefined8 *)FUN_007a6048();
    if (puVar4 == (undefined8 *)0x0) {
      return 0xffffffff;
    }
    iVar1 = FUN_0079ffa0(puVar4,lVar3,0x1001);
    uVar8 = *puVar4;
    *puVar4 = 0;
    FUN_007a6074(puVar4);
    if (iVar1 != 0) {
      lVar3 = FUN_00795280(uVar8);
      if (lVar3 == 0) goto LAB_00797a00;
      lVar3 = FUN_00795280(uVar8);
      lVar3 = FUN_007952e0(uVar8,lVar3 + -1);
      if (*(int *)(lVar3 + 0x20) == 0) {
        lVar3 = 0;
        lVar7 = *param_1;
        goto joined_r0x007978f8;
      }
      FUN_00777eb4(0x14,0,0x7a,"../../third_party/boringssl/src/crypto/x509/v3_crld.cc",0x7e);
    }
  }
  lVar3 = 0;
LAB_00797a00:
  FUN_00795370(lVar3,FUN_005aeeb8,PTR_FUN_00d51ec8);
  FUN_00795370(uVar8,FUN_00797d10,PTR_FUN_00d52890);
  return 0xffffffff;
}


// ===== 00797ad4  FUN_00797ad4 =====

undefined4 FUN_00797ad4(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  char *__s2;
  long lVar8;
  
  if (*param_1 == 0) {
    lVar2 = FUN_0079efb4(param_2);
    if (lVar2 == 0) {
      uVar6 = 0;
    }
    else {
      lVar3 = FUN_00795280();
      if (lVar3 != 0) {
        uVar7 = 0;
        do {
          lVar3 = FUN_007952e0(lVar2,uVar7);
          lVar8 = *param_1;
          __s2 = *(char **)(lVar3 + 8);
          if (lVar8 == 0) {
            lVar8 = FUN_0076e960();
            *param_1 = lVar8;
            if (lVar8 != 0) goto LAB_00797b90;
LAB_00797cd0:
            uVar6 = 0;
            goto LAB_00797cd4;
          }
LAB_00797b90:
          iVar1 = strcmp("unused",__s2);
          if (iVar1 == 0) {
            puVar5 = &DAT_00d355a8;
          }
          else {
            iVar1 = strcmp("keyCompromise",__s2);
            if (iVar1 == 0) {
              puVar5 = &DAT_00d355c0;
            }
            else {
              iVar1 = strcmp("CACompromise",__s2);
              if (iVar1 == 0) {
                puVar5 = &DAT_00d355d8;
              }
              else {
                iVar1 = strcmp("affiliationChanged",__s2);
                if (iVar1 == 0) {
                  puVar5 = &DAT_00d355f0;
                }
                else {
                  iVar1 = strcmp("superseded",__s2);
                  if (iVar1 == 0) {
                    puVar5 = &DAT_00d35608;
                  }
                  else {
                    iVar1 = strcmp("cessationOfOperation",__s2);
                    if (iVar1 == 0) {
                      puVar5 = &DAT_00d35620;
                    }
                    else {
                      iVar1 = strcmp("certificateHold",__s2);
                      if (iVar1 == 0) {
                        puVar5 = &DAT_00d35638;
                      }
                      else {
                        iVar1 = strcmp("privilegeWithdrawn",__s2);
                        if (iVar1 == 0) {
                          puVar5 = &DAT_00d35650;
                        }
                        else {
                          iVar1 = strcmp("AACompromise",__s2);
                          puVar5 = &DAT_00d35668;
                          if (iVar1 != 0) goto LAB_00797cd0;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          iVar1 = FUN_0076a09c(lVar8,*puVar5,1);
          if (iVar1 == 0) goto LAB_00797cd0;
          uVar7 = uVar7 + 1;
          uVar4 = FUN_00795280(lVar2);
        } while (uVar7 < uVar4);
      }
      uVar6 = 1;
LAB_00797cd4:
      FUN_00795370(lVar2,FUN_00797d20,PTR_FUN_00d52880);
    }
  }
  else {
    FUN_00777eb4(0x14,0,0xa3,"../../third_party/boringssl/src/crypto/x509/v3_crld.cc",0xad);
    uVar6 = 0;
  }
  return uVar6;
}


// ===== 00797d10  FUN_00797d10 =====

void FUN_00797d10(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00797d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}


// ===== 00797d20  FUN_00797d20 =====

void FUN_00797d20(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00797d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}


// ===== 00797d30  FUN_00797d30 =====

void FUN_00797d30(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00797d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}


// ===== 00797d40  FUN_00797d40 =====

undefined8 FUN_00797d40(int param_1,long *param_2)

{
  if (param_1 == 3) {
    FUN_007a6074(*(undefined8 *)(*param_2 + 0x10));
  }
  else if (param_1 == 1) {
    *(undefined8 *)(*param_2 + 0x10) = 0;
    return 1;
  }
  return 1;
}


// ===== 00797d88  FUN_00797d88 =====

void FUN_00797d88(undefined8 param_1,int *param_2,int param_3)

{
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*param_2 != 0) {
    local_40 = *(undefined8 *)(param_2 + 2);
    uStack_38 = 0;
    FUN_0079a5f0(param_1,"%*sRelative Name:\n%*s",param_3,&DAT_001b3348,param_3 + 2,&DAT_001b3348);
    FUN_0079df98(param_1,&local_40,0,0x82031f);
    FUN_0076fb34(param_1,&DAT_001ded1c);
    return;
  }
  FUN_0079a5f0(param_1,"%*sFull Name:\n",param_3,&DAT_001b3348);
  FUN_00797f48(param_1,*(undefined8 *)(param_2 + 2),param_3);
  return;
}


// ===== 00797e60  FUN_00797e60 =====

void FUN_00797e60(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  
  FUN_0079a5f0(param_1,"%*s%s:\n%*s",param_4,&DAT_001b3348,param_2,param_4 + 2);
  bVar2 = false;
  puVar5 = &DAT_00d355a8;
  pcVar4 = "Unused";
  do {
    uVar1 = *puVar5;
    while (iVar3 = FUN_0076a1b8(param_3,uVar1), iVar3 == 0) {
      pcVar4 = *(char **)(puVar5 + 8);
      if (pcVar4 == (char *)0x0) {
        if (bVar2) goto LAB_00797f18;
        pcVar4 = "<EMPTY>\n";
        goto LAB_00797f2c;
      }
      puVar5 = puVar5 + 6;
      uVar1 = *puVar5;
    }
    if (bVar2) {
      FUN_0076fb34(param_1,&DAT_001e1644);
    }
    FUN_0076fb34(param_1,pcVar4);
    pcVar4 = *(char **)(puVar5 + 8);
    puVar5 = puVar5 + 6;
    bVar2 = true;
  } while (pcVar4 != (char *)0x0);
LAB_00797f18:
  pcVar4 = "\n";
LAB_00797f2c:
  FUN_0076fb34(param_1,pcVar4);
  return;
}


// ===== 00797f48  FUN_00797f48 =====

void FUN_00797f48(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = FUN_00795280(param_2);
  if (lVar1 != 0) {
    uVar4 = 0;
    do {
      FUN_0079a5f0(param_1,&DAT_001cb88f,param_3 + 2,&DAT_001b3348);
      uVar2 = FUN_007952e0(param_2,uVar4);
      FUN_007987f4(param_1,uVar2);
      FUN_0076fb34(param_1,&DAT_001ded1c);
      uVar4 = uVar4 + 1;
      uVar3 = FUN_00795280(param_2);
    } while (uVar4 < uVar3);
  }
  return;
}


// ===== 00798000  thunk_FUN_00798368 =====

void thunk_FUN_00798368(void)

{
  FUN_00798368();
  return;
}


// ===== 00798008  FUN_00798008 =====

long FUN_00798008(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = FUN_00795214();
  if ((lVar2 != 0) && (lVar3 = FUN_00795280(param_3), lVar3 != 0)) {
    uVar6 = 0;
    do {
      lVar3 = FUN_007952e0(param_3,uVar6);
      iVar1 = FUN_0079f610(*(undefined8 *)(lVar3 + 8),"email");
      if (((iVar1 == 0) || (*(char **)(lVar3 + 0x10) == (char *)0x0)) ||
         (iVar1 = strcmp(*(char **)(lVar3 + 0x10),"copy"), iVar1 != 0)) {
        iVar1 = FUN_0079f610(*(undefined8 *)(lVar3 + 8),"email");
        if (((iVar1 != 0) && (*(char **)(lVar3 + 0x10) != (char *)0x0)) &&
           (iVar1 = strcmp(*(char **)(lVar3 + 0x10),"move"), iVar1 == 0)) {
          iVar1 = FUN_00798f44(param_2,lVar2,1);
          goto joined_r0x00798128;
        }
        lVar3 = FUN_00798b30(0);
        if ((lVar3 == 0) || (lVar4 = FUN_00795868(lVar2,lVar3), lVar4 == 0)) {
          FUN_00796140(lVar3);
          goto LAB_00798138;
        }
      }
      else {
        iVar1 = FUN_00798f44(param_2,lVar2,0);
joined_r0x00798128:
        if (iVar1 == 0) {
LAB_00798138:
          FUN_00795370(lVar2,FUN_005aeeb8,PTR_FUN_00d51ec8);
          return 0;
        }
      }
      uVar6 = uVar6 + 1;
      uVar5 = FUN_00795280(param_3);
    } while (uVar6 < uVar5);
  }
  return lVar2;
}


// ===== 00798174  FUN_00798174 =====

long FUN_00798174(undefined8 param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar2 = FUN_00795214();
  if ((lVar2 != 0) && (lVar3 = FUN_00795280(param_3), lVar3 != 0)) {
    uVar8 = 0;
    do {
      lVar3 = FUN_007952e0(param_3,uVar8);
      iVar1 = FUN_0079f610(*(undefined8 *)(lVar3 + 8),"issuer");
      if (((iVar1 == 0) || (*(char **)(lVar3 + 0x10) == (char *)0x0)) ||
         (iVar1 = strcmp(*(char **)(lVar3 + 0x10),"copy"), iVar1 != 0)) {
        lVar3 = FUN_00798b30(0);
        if ((lVar3 == 0) || (lVar4 = FUN_00795868(lVar2,lVar3), lVar4 == 0)) {
          FUN_00796140(lVar3);
          goto LAB_0079832c;
        }
      }
      else {
        if (param_2 == (int *)0x0) {
LAB_007982e4:
          FUN_00777eb4(0x14,0,0x8d,"../../third_party/boringssl/src/crypto/x509/v3_alt.cc",0x132);
LAB_0079832c:
          FUN_00795370(lVar2,FUN_005aeeb8,PTR_FUN_00d51ec8);
          return 0;
        }
        if (*param_2 != 1) {
          if (*(long *)(param_2 + 2) == 0) goto LAB_007982e4;
          iVar1 = FUN_007a0dcc(*(long *)(param_2 + 2),0x55,0xffffffff);
          if (-1 < iVar1) {
            lVar3 = FUN_007a0dd8(*(undefined8 *)(param_2 + 2),iVar1);
            if ((lVar3 == 0) || (lVar3 = FUN_0079932c(), lVar3 == 0)) {
              FUN_00777eb4(0x14,0,0x88,"../../third_party/boringssl/src/crypto/x509/v3_alt.cc",0x13f
                          );
              lVar3 = 0;
LAB_00798324:
              FUN_00796160(lVar3);
              goto LAB_0079832c;
            }
            lVar4 = FUN_00795280();
            if (lVar4 != 0) {
              uVar5 = 0;
              do {
                uVar6 = FUN_007952e0(lVar3,uVar5);
                lVar4 = FUN_00795868(lVar2,uVar6);
                if (lVar4 == 0) goto LAB_00798324;
                FUN_00795308(lVar3,uVar5,0);
                uVar5 = uVar5 + 1;
                uVar7 = FUN_00795280(lVar3);
              } while (uVar5 < uVar7);
            }
            FUN_00796160(lVar3);
          }
        }
      }
      uVar8 = uVar8 + 1;
      uVar5 = FUN_00795280(param_3);
    } while (uVar8 < uVar5);
  }
  return lVar2;
}


// ===== 00798368  FUN_00798368 =====

long FUN_00798368(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar1 = FUN_00795280(param_2);
  if (lVar1 == 0) {
    lVar1 = param_3;
    if (param_3 == 0) {
      lVar1 = FUN_00795214();
      return lVar1;
    }
  }
  else {
    uVar5 = 0;
    lVar4 = param_3;
    do {
      uVar2 = FUN_007952e0(param_2,uVar5);
      lVar1 = FUN_00798428(uVar2,uVar2,lVar4);
      if (param_3 == 0 && lVar1 == 0) {
        FUN_00795370(lVar4,FUN_00797d20,PTR_FUN_00d52880);
        return 0;
      }
      if (lVar1 == 0) {
        return 0;
      }
      uVar5 = uVar5 + 1;
      uVar3 = FUN_00795280(param_2);
      lVar4 = lVar1;
    } while (uVar5 < uVar3);
  }
  return lVar1;
}


// ===== 00798428  FUN_00798428 =====

void FUN_00798428(undefined8 param_1,int *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  ushort *puVar6;
  undefined4 local_160;
  undefined1 local_15c;
  long local_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  undefined1 *puStack_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined1 *puStack_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = *param_2;
  puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
  local_150 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_140 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
  local_130 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_120 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  local_110 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_15c = 0xaa;
  local_160 = 0xaaaaaaaa;
  local_158 = param_3;
  if (iVar2 < 4) {
    if (iVar2 < 2) {
      if (iVar2 == 0) {
        pcVar3 = "othername";
LAB_00798530:
        pcVar4 = "<unsupported>";
        goto LAB_007987a0;
      }
      if (iVar2 != 1) goto LAB_007987b0;
      uVar5 = *(undefined8 *)(param_2 + 2);
      pcVar3 = "email";
    }
    else {
      if (iVar2 != 2) {
        if (iVar2 != 3) goto LAB_007987b0;
        pcVar3 = "X400Name";
        goto LAB_00798530;
      }
      uVar5 = *(undefined8 *)(param_2 + 2);
      pcVar3 = "DNS";
    }
LAB_00798558:
    iVar2 = FUN_0079e914(pcVar3,uVar5,&local_158);
  }
  else {
    if (iVar2 < 6) {
      if (iVar2 != 4) {
        if (iVar2 != 5) goto LAB_007987b0;
        pcVar3 = "EdiPartyName";
        goto LAB_00798530;
      }
      param_3 = FUN_007a0dfc(*(undefined8 *)(param_2 + 2),&local_150,0x100);
      if (param_3 == 0) goto LAB_007987b0;
      pcVar3 = "DirName";
    }
    else {
      if (iVar2 == 6) {
        uVar5 = *(undefined8 *)(param_2 + 2);
        pcVar3 = "URI";
        goto LAB_00798558;
      }
      if (iVar2 != 7) {
        if (iVar2 != 8) goto LAB_007987b0;
        FUN_0076c51c(&local_150,0x100,*(undefined8 *)(param_2 + 2));
        pcVar3 = "Registered ID";
        goto LAB_0079879c;
      }
      iVar2 = **(int **)(param_2 + 2);
      puVar6 = *(ushort **)(*(int **)(param_2 + 2) + 2);
      if (iVar2 == 0x10) {
        local_150 = (undefined1 *)0xaaaaaaaaaaaaaa00;
        snprintf((char *)&local_160,5,"%X",(ulong)((uint)(*puVar6 >> 8) | (*puVar6 & 0xff00ff) << 8)
                );
        FUN_0078d45c(&local_150,&local_160,0x100);
        FUN_0078d45c(&local_150,&DAT_001ca603,0x100);
        snprintf((char *)&local_160,5,"%X",
                 (ulong)((uint)(puVar6[1] >> 8) | (puVar6[1] & 0xff00ff) << 8));
        FUN_0078d45c(&local_150,&local_160,0x100);
        FUN_0078d45c(&local_150,&DAT_001ca603,0x100);
        snprintf((char *)&local_160,5,"%X",
                 (ulong)((uint)(puVar6[2] >> 8) | (puVar6[2] & 0xff00ff) << 8));
        FUN_0078d45c(&local_150,&local_160,0x100);
        FUN_0078d45c(&local_150,&DAT_001ca603,0x100);
        snprintf((char *)&local_160,5,"%X",
                 (ulong)((uint)(puVar6[3] >> 8) | (puVar6[3] & 0xff00ff) << 8));
        FUN_0078d45c(&local_150,&local_160,0x100);
        FUN_0078d45c(&local_150,&DAT_001ca603,0x100);
        snprintf((char *)&local_160,5,"%X",
                 (ulong)((uint)(puVar6[4] >> 8) | (puVar6[4] & 0xff00ff) << 8));
        FUN_0078d45c(&local_150,&local_160,0x100);
        FUN_0078d45c(&local_150,&DAT_001ca603,0x100);
        snprintf((char *)&local_160,5,"%X",
                 (ulong)((uint)(puVar6[5] >> 8) | (puVar6[5] & 0xff00ff) << 8));
        FUN_0078d45c(&local_150,&local_160,0x100);
        FUN_0078d45c(&local_150,&DAT_001ca603,0x100);
        snprintf((char *)&local_160,5,"%X",
                 (ulong)((uint)(puVar6[6] >> 8) | (puVar6[6] & 0xff00ff) << 8));
        FUN_0078d45c(&local_150,&local_160,0x100);
        FUN_0078d45c(&local_150,&DAT_001ca603,0x100);
        snprintf((char *)&local_160,5,"%X",
                 (ulong)((uint)(puVar6[7] >> 8) | (puVar6[7] & 0xff00ff) << 8));
        FUN_0078d45c(&local_150,&local_160,0x100);
      }
      else {
        if (iVar2 != 4) {
          pcVar3 = "IP Address";
          pcVar4 = "<invalid>";
          goto LAB_007987a0;
        }
        snprintf((char *)&local_150,0x100,"%d.%d.%d.%d",(ulong)(byte)*puVar6,
                 (ulong)*(byte *)((long)puVar6 + 1),(ulong)(byte)puVar6[1],
                 (ulong)*(byte *)((long)puVar6 + 3));
      }
      pcVar3 = "IP Address";
    }
LAB_0079879c:
    pcVar4 = (char *)&local_150;
LAB_007987a0:
    iVar2 = FUN_0079e788(pcVar3,pcVar4,&local_158);
  }
  param_3 = local_158;
  if (iVar2 == 0) {
    param_3 = 0;
  }
LAB_007987b0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_3);
}


// ===== 007987f4  FUN_007987f4 =====

undefined8 FUN_007987f4(undefined8 param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  ushort *puVar3;
  
  iVar1 = *param_2;
  if (iVar1 < 4) {
    if (iVar1 < 2) {
      if (iVar1 != 0) {
        if (iVar1 != 1) {
          return 1;
        }
        pcVar2 = "email:";
LAB_007988d4:
        FUN_0079a5f0(param_1,pcVar2);
        FUN_0079d6dc(param_1,*(undefined8 *)(param_2 + 2));
        return 1;
      }
      pcVar2 = "othername:<unsupported>";
    }
    else {
      if (iVar1 == 2) {
        pcVar2 = "DNS:";
        goto LAB_007988d4;
      }
      if (iVar1 != 3) {
        return 1;
      }
      pcVar2 = "X400Name:<unsupported>";
    }
  }
  else if (iVar1 < 6) {
    if (iVar1 == 4) {
      FUN_0079a5f0(param_1,"DirName: ");
      FUN_0079df98(param_1,*(undefined8 *)(param_2 + 2),0,0x82031f);
      return 1;
    }
    if (iVar1 != 5) {
      return 1;
    }
    pcVar2 = "EdiPartyName:<unsupported>";
  }
  else {
    if (iVar1 == 6) {
      pcVar2 = "URI:";
      goto LAB_007988d4;
    }
    if (iVar1 != 7) {
      if (iVar1 != 8) {
        return 1;
      }
      FUN_0079a5f0(param_1,"Registered ID");
      FUN_0076c528(param_1,*(undefined8 *)(param_2 + 2));
      return 1;
    }
    iVar1 = **(int **)(param_2 + 2);
    puVar3 = *(ushort **)(*(int **)(param_2 + 2) + 2);
    if (iVar1 == 0x10) {
      FUN_0079a5f0(param_1,"IP Address");
      FUN_0079a5f0(param_1,&DAT_001df5a7,(uint)(*puVar3 >> 8) | (*puVar3 & 0xff00ff) << 8);
      FUN_0079a5f0(param_1,&DAT_001df5a7,(uint)(puVar3[1] >> 8) | (puVar3[1] & 0xff00ff) << 8);
      FUN_0079a5f0(param_1,&DAT_001df5a7,(uint)(puVar3[2] >> 8) | (puVar3[2] & 0xff00ff) << 8);
      FUN_0079a5f0(param_1,&DAT_001df5a7,(uint)(puVar3[3] >> 8) | (puVar3[3] & 0xff00ff) << 8);
      FUN_0079a5f0(param_1,&DAT_001df5a7,(uint)(puVar3[4] >> 8) | (puVar3[4] & 0xff00ff) << 8);
      FUN_0079a5f0(param_1,&DAT_001df5a7,(uint)(puVar3[5] >> 8) | (puVar3[5] & 0xff00ff) << 8);
      FUN_0079a5f0(param_1,&DAT_001df5a7,(uint)(puVar3[6] >> 8) | (puVar3[6] & 0xff00ff) << 8);
      FUN_0079a5f0(param_1,&DAT_001df5a7,(uint)(puVar3[7] >> 8) | (puVar3[7] & 0xff00ff) << 8);
      FUN_0076fb34(param_1,&DAT_001ded1c);
      return 1;
    }
    if (iVar1 == 4) {
      FUN_0079a5f0(param_1,"IP Address:%d.%d.%d.%d",(char)*puVar3,*(undefined1 *)((long)puVar3 + 1),
                   (char)puVar3[1],*(undefined1 *)((long)puVar3 + 3));
      return 1;
    }
    pcVar2 = "IP Address:<invalid>";
  }
  FUN_0079a5f0(param_1,pcVar2);
  return 1;
}


// ===== 00798a4c  FUN_00798a4c =====

long FUN_00798a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  lVar1 = FUN_00795214();
  if ((lVar1 != 0) && (lVar2 = FUN_00795280(param_3), lVar2 != 0)) {
    uVar5 = 0;
    do {
      auVar6 = FUN_007952e0(param_3,uVar5);
      lVar2 = FUN_00798b30(0,auVar6._8_8_,param_2,auVar6._0_8_,0);
      if ((lVar2 == 0) || (lVar3 = FUN_00795868(lVar1,lVar2), lVar3 == 0)) {
        FUN_00796140(lVar2);
        FUN_00795370(lVar1,FUN_005aeeb8,PTR_FUN_00d51ec8);
        return 0;
      }
      uVar5 = uVar5 + 1;
      uVar4 = FUN_00795280(param_3);
    } while (uVar5 < uVar4);
  }
  return lVar1;
}


// ===== 00798b18  FUN_00798b18 =====

void FUN_00798b18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00798b30(0,param_2,param_2,param_3,0);
  return;
}


// ===== 00798b30  FUN_00798b30 =====

uint * FUN_00798b30(uint *param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5)

{
  int iVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  char *pcVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *__s;
  uint uVar10;
  
  __s = *(char **)(param_4 + 0x10);
  if (__s == (char *)0x0) {
    FUN_00777eb4(0x14,0,0x89,"../../third_party/boringssl/src/crypto/x509/v3_alt.cc",0x220);
    return (uint *)0x0;
  }
  uVar9 = *(undefined8 *)(param_4 + 8);
  iVar1 = FUN_0079f610(uVar9,"email");
  if (iVar1 == 0) {
    iVar1 = FUN_0079f610(uVar9,&DAT_001cb893);
    if (iVar1 == 0) {
      iVar1 = FUN_0079f610(uVar9,&DAT_001a0f8b);
      if (iVar1 == 0) {
        iVar1 = FUN_0079f610(uVar9,&DAT_001eae24);
        if (iVar1 == 0) {
          iVar1 = FUN_0079f610(uVar9,&DAT_001aed17);
          if (iVar1 == 0) {
            iVar1 = FUN_0079f610(uVar9,"dirName");
            if (iVar1 == 0) {
              iVar1 = FUN_0079f610(uVar9,"otherName");
              if (iVar1 == 0) {
                FUN_00777eb4(0x14,0,0xa0,"../../third_party/boringssl/src/crypto/x509/v3_alt.cc",
                             0x234);
                FUN_00777f98(2,"name=",uVar9);
                return (uint *)0x0;
              }
              uVar10 = 0;
            }
            else {
              uVar10 = 4;
            }
          }
          else {
            uVar10 = 7;
          }
        }
        else {
          uVar10 = 8;
        }
      }
      else {
        uVar10 = 2;
      }
    }
    else {
      uVar10 = 6;
    }
  }
  else {
    uVar10 = 1;
  }
  puVar2 = param_1;
  if ((param_1 == (uint *)0x0) && (puVar2 = (uint *)FUN_00796130(), puVar2 == (uint *)0x0)) {
    return (uint *)0x0;
  }
  if (uVar10 < 6) {
    if (1 < uVar10 - 1) {
      if (uVar10 == 0) {
        pcVar6 = strchr(__s,0x3b);
        if ((pcVar6 != (char *)0x0) && (plVar7 = (long *)FUN_00796110(), plVar7 != (long *)0x0)) {
          lVar3 = FUN_0078d2d8(__s,(long)pcVar6 - (long)__s);
          if (lVar3 != 0) {
            FUN_0076c804(*plVar7);
            lVar4 = FUN_0078dd14(lVar3,0);
            *plVar7 = lVar4;
            FUN_0078cb3c(lVar3);
            if (*plVar7 != 0) {
              FUN_0076e9e8(plVar7[1]);
              lVar3 = FUN_0079b804(pcVar6 + 1,param_3);
              plVar7[1] = lVar3;
              if (lVar3 != 0) {
                *puVar2 = 0;
                *(long **)(puVar2 + 2) = plVar7;
                return puVar2;
              }
            }
          }
          FUN_00796120(plVar7);
        }
        uVar9 = 0x94;
        uVar8 = 0x207;
      }
      else if (uVar10 == 4) {
        lVar3 = FUN_0079b7ac(param_3,__s);
        lVar4 = FUN_007a6048();
        if (lVar4 != 0) {
          if (lVar3 == 0) {
            FUN_00777eb4(0x14,0,0x99,"../../third_party/boringssl/src/crypto/x509/v3_alt.cc",0x26b);
            FUN_00777f98(2,"section=",__s);
          }
          else {
            iVar1 = FUN_0079ffa0(lVar4,lVar3,0x1001);
            if (iVar1 != 0) {
              *(long *)(puVar2 + 2) = lVar4;
              *puVar2 = 4;
              return puVar2;
            }
          }
        }
        FUN_007a6074(lVar4);
        uVar9 = 0x69;
        uVar8 = 0x200;
      }
      else {
LAB_00798d34:
        uVar9 = 0xa1;
        uVar8 = 0x20c;
      }
      FUN_00777eb4(0x14,0,uVar9,"../../third_party/boringssl/src/crypto/x509/v3_alt.cc",uVar8);
      goto joined_r0x00798d0c;
    }
  }
  else {
    if (uVar10 == 8) {
      lVar3 = FUN_0078dd14(__s,0);
      if (lVar3 != 0) {
        *(long *)(puVar2 + 2) = lVar3;
        *puVar2 = 8;
        return puVar2;
      }
      FUN_00777eb4(0x14,0,0x65,"../../third_party/boringssl/src/crypto/x509/v3_alt.cc",0x1e7);
      FUN_00777f98(2,"value=",__s);
      goto joined_r0x00798d0c;
    }
    if (uVar10 == 7) {
      *puVar2 = 7;
      if (param_5 == 0) {
        lVar3 = FUN_0079fc58(__s);
        *(long *)(puVar2 + 2) = lVar3;
      }
      else {
        lVar3 = FUN_0079fcf4();
        *(long *)(puVar2 + 2) = lVar3;
      }
      if (lVar3 != 0) {
        return puVar2;
      }
      FUN_00777eb4(0x14,0,100,"../../third_party/boringssl/src/crypto/x509/v3_alt.cc",0x1f8);
      FUN_00777f98(2,"value=",__s);
      goto joined_r0x00798d0c;
    }
    if (uVar10 != 6) goto LAB_00798d34;
  }
  lVar3 = FUN_0076e974();
  if (lVar3 != 0) {
    sVar5 = strlen(__s);
    iVar1 = FUN_007693d8(lVar3,__s,sVar5);
    if (iVar1 != 0) {
      *puVar2 = uVar10;
      *(long *)(puVar2 + 2) = lVar3;
      return puVar2;
    }
  }
  FUN_007695a4(lVar3);
joined_r0x00798d0c:
  if (param_1 == (uint *)0x0) {
    FUN_00796140(puVar2);
  }
  return (uint *)0x0;
}


// ===== 00798f44  FUN_00798f44 =====

undefined8 FUN_00798f44(int *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *puVar5;
  
  if (param_1 == (int *)0x0) {
LAB_0079902c:
    FUN_00777eb4(0x14,0,0x91,"../../third_party/boringssl/src/crypto/x509/v3_alt.cc",0x180);
    lVar4 = 0;
LAB_0079904c:
    puVar5 = (undefined4 *)0x0;
  }
  else {
    if (*param_1 == 1) {
      return 1;
    }
    if (*(long *)(param_1 + 4) == 0) {
      if (*(long *)(param_1 + 6) == 0) goto LAB_0079902c;
      uVar2 = FUN_007a11c0();
    }
    else {
      uVar2 = FUN_007a0bd0(*(long *)(param_1 + 4));
    }
    iVar1 = -1;
    do {
      iVar1 = FUN_007a1558(uVar2,0x30,iVar1);
      if (iVar1 < 0) {
        return 1;
      }
      uVar3 = FUN_007a14d4(uVar2,iVar1);
      FUN_007a14c0();
      lVar4 = FUN_007694e4();
      if (param_3 != 0) {
        FUN_007a1604(uVar2,iVar1);
        FUN_007a5b74(uVar3);
        iVar1 = iVar1 + -1;
      }
      if (lVar4 == 0) goto LAB_0079904c;
      puVar5 = (undefined4 *)FUN_00796130();
      if (puVar5 == (undefined4 *)0x0) goto LAB_00799050;
      *(long *)(puVar5 + 2) = lVar4;
      *puVar5 = 1;
      lVar4 = FUN_00795868(param_2,puVar5);
    } while (lVar4 != 0);
    lVar4 = 0;
  }
LAB_00799050:
  FUN_00796140(puVar5);
  thunk_FUN_007695a4(lVar4);
  return 0;
}


// ===== 00799080  FUN_00799080 =====

int * FUN_00799080(int param_1)

{
  int *piVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (-1 < param_1) {
    if (param_1 < 0x171) {
      piVar1 = (int *)PTR_DAT_00d527b0;
      switch(param_1) {
      case 0x47:
        goto code_r0x007990c4;
      case 0x48:
        return (int *)PTR_DAT_00d527f0;
      case 0x49:
        return (int *)PTR_DAT_00d527f8;
      case 0x4a:
        return (int *)PTR_DAT_00d52800;
      case 0x4b:
        return (int *)PTR_DAT_00d52808;
      case 0x4c:
        return (int *)PTR_DAT_00d52810;
      case 0x4d:
        return (int *)PTR_DAT_00d52818;
      case 0x4e:
        return (int *)PTR_DAT_00d52820;
      case 0x52:
        return (int *)PTR_DAT_00d52898;
      case 0x53:
        return (int *)PTR_DAT_00d527b8;
      case 0x55:
        return (int *)PTR_DAT_00d52790;
      case 0x56:
        return (int *)PTR_DAT_00d52798;
      case 0x57:
        return (int *)PTR_DAT_00d527a8;
      case 0x58:
        return (int *)PTR_DAT_00d52838;
      case 0x59:
        return (int *)PTR_DAT_00d527c0;
      case 0x5a:
        return (int *)PTR_DAT_00d52788;
      case 0x67:
        return (int *)PTR_DAT_00d527c8;
      case 0x7e:
        return (int *)PTR_DAT_00d527e8;
      case 0x8c:
        return (int *)PTR_DAT_00d52840;
      case 0x8d:
        return (int *)PTR_DAT_00d527e0;
      case 0x8e:
        return (int *)PTR_DAT_00d52858;
      case 0xb1:
        return (int *)PTR_DAT_00d52828;
      }
    }
    else if (param_1 < 0x2eb) {
      if (param_1 < 0x191) {
        if (param_1 == 0x171) {
          return (int *)PTR_DAT_00d52860;
        }
        if (param_1 == 0x18e) {
          return (int *)PTR_DAT_00d52830;
        }
      }
      else {
        if (param_1 == 0x191) {
          return (int *)PTR_DAT_00d52868;
        }
        if (param_1 == 0x29a) {
          return (int *)PTR_DAT_00d52850;
        }
      }
    }
    else if (param_1 < 0x302) {
      if (param_1 == 0x2eb) {
        return (int *)PTR_DAT_00d52878;
      }
      if (param_1 == 0x2ec) {
        return (int *)PTR_DAT_00d52848;
      }
    }
    else {
      if (param_1 == 0x302) {
        return (int *)PTR_DAT_00d527d8;
      }
      if (param_1 == 0x303) {
        return (int *)PTR_DAT_00d527a0;
      }
      if (param_1 == 0x359) {
        return (int *)PTR_DAT_00d527d0;
      }
    }
    if ((DAT_00d801d8 != (undefined8 *)0x0) && (lVar2 = DAT_00d801d8[1] << 3, lVar2 != 0)) {
      puVar3 = (undefined8 *)*DAT_00d801d8;
      do {
        if (*(int *)*puVar3 == param_1) {
          return (int *)*puVar3;
        }
        piVar1 = (int *)0x0;
        lVar2 = lVar2 + -8;
        puVar3 = puVar3 + 1;
      } while (lVar2 != 0);
code_r0x007990c4:
      return piVar1;
    }
  }
  return (int *)0x0;
}


// ===== 0079932c  FUN_0079932c =====

long FUN_0079932c(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long local_28;
  
  iVar1 = FUN_0078d994(*param_1);
  if (iVar1 != 0) {
    lVar2 = FUN_00799080();
    if (lVar2 == 0) {
      return 0;
    }
    local_28 = *(long *)((int *)param_1[2] + 2);
    lVar3 = FUN_0076a75c(0,&local_28,(long)*(int *)param_1[2],*(undefined8 *)(lVar2 + 8));
    if (lVar3 == 0) {
      return 0;
    }
    if (local_28 == *(long *)((int *)param_1[2] + 2) + (long)*(int *)param_1[2]) {
      return lVar3;
    }
    FUN_0076e060(lVar3,*(undefined8 *)(lVar2 + 8));
    FUN_00777eb4(0x14,0,0xa4,"../../third_party/boringssl/src/crypto/x509/v3_lib.cc",0xc4);
  }
  return 0;
}


// ===== 007993d8  FUN_007993d8 =====

undefined8 FUN_007993d8(long param_1,int param_2,undefined4 *param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_1 != 0) {
    if (param_4 == (int *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (ulong)(*param_4 + 1U & ((int)(*param_4 + 1U) >> 0x1f ^ 0xffffffffU));
    }
    uVar4 = FUN_00795280(param_1);
    if (uVar7 < uVar4) {
      puVar8 = (undefined8 *)0x0;
      do {
        puVar5 = (undefined8 *)FUN_007952e0(param_1,uVar7);
        iVar2 = FUN_0078d994(*puVar5);
        if (iVar2 == param_2) {
          if (param_4 != (int *)0x0) {
            *param_4 = (int)uVar7;
            if (puVar5 != (undefined8 *)0x0) goto LAB_007994cc;
            goto LAB_00799490;
          }
          bVar1 = puVar8 != (undefined8 *)0x0;
          puVar8 = puVar5;
          if (bVar1) {
            if (param_3 == (undefined4 *)0x0) {
              return 0;
            }
            uVar3 = 0xfffffffe;
            goto LAB_007994a0;
          }
        }
        uVar7 = uVar7 + 1;
        uVar4 = FUN_00795280(param_1);
      } while (uVar7 < uVar4);
      puVar5 = puVar8;
      if (puVar8 != (undefined8 *)0x0) {
LAB_007994cc:
        if (param_3 != (undefined4 *)0x0) {
          uVar3 = FUN_007a1440(puVar5);
          *param_3 = uVar3;
        }
        uVar6 = FUN_0079932c(puVar5);
        return uVar6;
      }
    }
  }
  if (param_4 != (int *)0x0) {
LAB_00799490:
    *param_4 = -1;
  }
  if (param_3 != (undefined4 *)0x0) {
    uVar3 = 0xffffffff;
LAB_007994a0:
    *param_3 = uVar3;
  }
  return 0;
}


// ===== 007994fc  FUN_007994fc =====

undefined8 FUN_007994fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 local_28;
  
  puVar4 = *(undefined4 **)(param_1 + 0x60);
  lVar3 = *(long *)(puVar4 + 2);
  local_28 = param_3;
  while (lVar3 != 0) {
    iVar2 = FUN_0076a1b8(param_2,*puVar4);
    if (iVar2 != 0) {
      FUN_0079e788(*(undefined8 *)(puVar4 + 2),0,&local_28);
    }
    plVar1 = (long *)(puVar4 + 8);
    puVar4 = puVar4 + 6;
    lVar3 = *plVar1;
  }
  return local_28;
}


// ===== 00799574  FUN_00799574 =====

long FUN_00799574(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  char *__s2;
  char *__s1;
  undefined8 *puVar7;
  
  lVar2 = FUN_0076e960();
  if ((lVar2 != 0) && (lVar3 = FUN_00795280(param_3), lVar3 != 0)) {
    uVar6 = 0;
    do {
      puVar4 = (undefined8 *)FUN_007952e0(param_3,uVar6);
      __s1 = *(char **)(*(long *)(param_1 + 0x60) + 8);
      if (__s1 == (char *)0x0) {
LAB_0079963c:
        FUN_00777eb4(0x14,0,0x9c,"../../third_party/boringssl/src/crypto/x509/v3_bitst.cc",0x51);
        FUN_00777f98(6,"section:",*puVar4,",name:",puVar4[1],",value:",puVar4[2]);
LAB_00799680:
        thunk_FUN_007695a4(lVar2);
        return 0;
      }
      __s2 = (char *)puVar4[1];
      puVar7 = (undefined8 *)(*(long *)(param_1 + 0x60) + 0x10);
      while ((iVar1 = strcmp((char *)*puVar7,__s2), iVar1 != 0 &&
             (iVar1 = strcmp(__s1,__s2), iVar1 != 0))) {
        __s1 = (char *)puVar7[2];
        puVar7 = puVar7 + 3;
        if (__s1 == (char *)0x0) goto LAB_0079963c;
      }
      iVar1 = FUN_0076a09c(lVar2,*(undefined4 *)(puVar7 + -2),1);
      if (iVar1 == 0) goto LAB_00799680;
      if (puVar7[-1] == 0) goto LAB_0079963c;
      uVar6 = uVar6 + 1;
      uVar5 = FUN_00795280(param_3);
    } while (uVar6 < uVar5);
  }
  return lVar2;
}


// ===== 007996ac  FUN_007996ac =====

long FUN_007996ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  local_c8 = &DAT_aaaaaaaaaaaaaaaa;
  lVar2 = FUN_00795280(param_2);
  if (lVar2 == 0) {
    lVar2 = param_3;
    if (param_3 == 0) {
      if (*(long *)(lVar6 + 0x28) == local_68) {
        lVar6 = FUN_00795214();
        return lVar6;
      }
      goto LAB_00799848;
    }
  }
  else {
    uVar7 = 0;
    lVar8 = param_3;
    do {
      puVar3 = (undefined8 *)FUN_007952e0(param_2,uVar7);
      lVar2 = FUN_00798428(param_1,puVar3[1],lVar8);
      if (lVar2 == 0) {
LAB_007997e8:
        lVar2 = 0;
        if ((param_3 == 0) && (lVar8 != 0)) {
          FUN_00795370(lVar8,FUN_00797d20,PTR_FUN_00d52880);
          lVar2 = 0;
        }
        break;
      }
      lVar4 = FUN_007952e0(lVar2,uVar7);
      FUN_0076c51c(&local_c0,0x50,*puVar3);
      iVar1 = FUN_0078d258(&local_c8,"%s - %s",&local_c0,*(undefined8 *)(lVar4 + 8));
      lVar8 = lVar2;
      if (iVar1 == -1) goto LAB_007997e8;
      FUN_0078cb3c(*(undefined8 *)(lVar4 + 8));
      uVar7 = uVar7 + 1;
      *(undefined1 **)(lVar4 + 8) = local_c8;
      uVar5 = FUN_00795280(param_2);
    } while (uVar7 < uVar5);
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return lVar2;
  }
LAB_00799848:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079984c  FUN_0079984c =====

long FUN_0079984c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *local_80;
  char *pcStack_78;
  undefined8 local_70;
  
  lVar1 = FUN_00795214();
  if ((lVar1 != 0) && (lVar2 = FUN_00795280(param_3), lVar2 != 0)) {
    uVar7 = 0;
    do {
      lVar2 = FUN_007952e0(param_3,uVar7);
      plVar3 = (long *)FUN_0076e4fc(&DAT_00d35c28);
      if (plVar3 == (long *)0x0) goto code_r0x007999cc;
      pcVar4 = strchr(*(char **)(lVar2 + 8),0x3b);
      if (pcVar4 == (char *)0x0) {
        FUN_00777eb4(0x14,0,0x87,"../../third_party/boringssl/src/crypto/x509/v3_info.cc",0x8a);
LAB_007999b8:
        FUN_0076e060(plVar3,&DAT_00d35c28);
code_r0x007999cc:
        FUN_00795370(lVar1,FUN_00799a24,0);
        return 0;
      }
      pcStack_78 = pcVar4 + 1;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = *(undefined8 *)(lVar2 + 0x10);
      lVar5 = FUN_00798b30(plVar3[1],param_1,param_2,&local_80,0);
      if ((lVar5 == 0) ||
         (lVar2 = FUN_0078d2d8(*(long *)(lVar2 + 8),(long)pcVar4 - *(long *)(lVar2 + 8)), lVar2 == 0
         )) goto LAB_007999b8;
      lVar5 = FUN_0078dd14(lVar2,0);
      *plVar3 = lVar5;
      if (lVar5 == 0) {
        FUN_00777eb4(0x14,0,0x65,"../../third_party/boringssl/src/crypto/x509/v3_info.cc",0x99);
        FUN_00777f98(2,"value=",lVar2);
        FUN_0078cb3c(lVar2);
        goto LAB_007999b8;
      }
      lVar5 = FUN_00795868(lVar1,plVar3);
      if (lVar5 == 0) {
        FUN_0076e060(plVar3,&DAT_00d35c28);
        FUN_0078cb3c(lVar2);
        goto code_r0x007999cc;
      }
      FUN_0078cb3c(lVar2);
      uVar7 = uVar7 + 1;
      uVar6 = FUN_00795280(param_3);
    } while (uVar7 < uVar6);
  }
  return lVar1;
}


// ===== 00799a24  FUN_00799a24 =====

void FUN_00799a24(undefined8 param_1,undefined8 param_2)

{
  FUN_0076e060(param_2,&DAT_00d35c28);
  return;
}


// ===== 00799a38  FUN_00799a38 =====

long * FUN_00799a38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  char *__s1;
  undefined1 *local_80;
  char *pcStack_78;
  undefined1 *local_70;
  
  plVar2 = (long *)FUN_0076e4fc(&DAT_00d35cb8);
  if (plVar2 == (long *)0x0) {
LAB_00799b98:
    puVar4 = (undefined8 *)0x0;
LAB_00799b9c:
    FUN_0076e060(plVar2,&DAT_00d35cb8);
    FUN_0076e060(puVar4,&DAT_00d35d90);
    plVar2 = (long *)0x0;
  }
  else {
    lVar3 = FUN_00795280(param_3);
    if (lVar3 != 0) {
      uVar8 = 0;
      do {
        lVar3 = FUN_007952e0(param_3,uVar8);
        local_70 = &DAT_aaaaaaaaaaaaaaaa;
        pcStack_78 = &DAT_aaaaaaaaaaaaaaaa;
        local_80 = &DAT_aaaaaaaaaaaaaaaa;
        __s1 = *(char **)(lVar3 + 8);
        iVar1 = strncmp(__s1,"permitted",9);
        if ((iVar1 == 0) && (__s1[9] != '\0')) {
          lVar6 = 10;
          plVar7 = plVar2;
        }
        else {
          iVar1 = strncmp(__s1,"excluded",8);
          if ((iVar1 != 0) || (__s1[8] == '\0')) {
            FUN_00777eb4(0x14,0,0x87,"../../third_party/boringssl/src/crypto/x509/v3_ncons.cc",0x66)
            ;
            goto LAB_00799b98;
          }
          lVar6 = 9;
          plVar7 = plVar2 + 1;
        }
        pcStack_78 = __s1 + lVar6;
        local_70 = *(undefined1 **)(lVar3 + 0x10);
        puVar4 = (undefined8 *)FUN_0076e4fc(&DAT_00d35d90);
        lVar3 = FUN_00798b30(*puVar4,param_1,param_2,&local_80,1);
        if (lVar3 == 0) goto LAB_00799b9c;
        lVar3 = *plVar7;
        if (lVar3 == 0) {
          lVar3 = FUN_00795214();
          *plVar7 = lVar3;
          if (lVar3 == 0) goto LAB_00799b9c;
        }
        lVar3 = FUN_00795868(lVar3,puVar4);
        if (lVar3 == 0) goto LAB_00799b9c;
        uVar8 = uVar8 + 1;
        uVar5 = FUN_00795280(param_3);
      } while (uVar8 < uVar5);
    }
  }
  return plVar2;
}


// ===== 00799be8  FUN_00799be8 =====

undefined8
FUN_00799be8(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_00799f60(*param_2,param_3,param_4,"Permitted");
  FUN_00799f60(param_2[1],param_3,param_4,"Excluded");
  return 1;
}


// ===== 00799c50  FUN_00799c50 =====

void FUN_00799c50(undefined8 param_1)

{
  FUN_0076e060(param_1,&DAT_00d35cb8);
  return;
}


// ===== 00799c60  FUN_00799c60 =====

undefined8 FUN_00799c60(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar6 = FUN_007a0bd0();
  iVar5 = FUN_007a1530();
  lVar7 = FUN_00795280(*(undefined8 *)(param_1 + 0x138));
  uVar1 = lVar7 + iVar5;
  lVar7 = FUN_00795280(*param_2);
  lVar8 = FUN_00795280(param_2[1]);
  uVar2 = lVar8 + lVar7;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar2;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar1;
  iVar5 = FUN_007a1530(lVar6);
  if (((ulong)(long)iVar5 <= uVar1) && (uVar9 = FUN_00795280(*param_2), uVar9 <= uVar2)) {
    if (uVar2 == 0) {
      if (uVar2 * uVar1 < 0x100001) goto LAB_00799d28;
    }
    else if (uVar2 * uVar1 < 0x100001 && SUB168(auVar3 * auVar4,8) == 0) {
LAB_00799d28:
      iVar5 = FUN_007a1530(lVar6);
      if (0 < iVar5) {
        local_50 = 4;
        uStack_4c = 0xaaaaaaaa;
        local_48 = lVar6;
        uVar10 = FUN_00799dfc(&local_50,param_2);
        if ((int)uVar10 != 0) {
          return uVar10;
        }
        iVar5 = -1;
        _local_50 = CONCAT44(uStack_4c,1);
        while (iVar5 = FUN_007a1558(lVar6,0x30,iVar5), iVar5 != -1) {
          FUN_007a14d4(lVar6,iVar5);
          local_48 = FUN_007a14c0();
          if (*(int *)(local_48 + 4) != 0x16) {
            return 0x35;
          }
          uVar10 = FUN_00799dfc(&local_50,param_2);
          if ((int)uVar10 != 0) {
            return uVar10;
          }
        }
      }
      uVar10 = *(undefined8 *)(param_1 + 0x138);
      lVar6 = FUN_00795280(uVar10);
      if (lVar6 == 0) {
        return 0;
      }
      lVar7 = 0;
      do {
        uVar11 = FUN_007952e0(uVar10,lVar7);
        uVar11 = FUN_00799dfc(uVar11,param_2);
        if ((int)uVar11 != 0) {
          return uVar11;
        }
        lVar7 = lVar7 + 1;
      } while (lVar6 != lVar7);
      return uVar11;
    }
  }
  return 1;
}


// ===== 00799dfc  FUN_00799dfc =====

long FUN_00799dfc(int *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  
  uVar4 = *param_2;
  lVar1 = FUN_00795280(uVar4);
  if (lVar1 == 0) {
LAB_00799ec8:
    uVar4 = param_2[1];
    lVar1 = FUN_00795280(uVar4);
    if (lVar1 != 0) {
      lVar5 = 0;
      do {
        puVar2 = (undefined8 *)FUN_007952e0(uVar4,lVar5);
        if (*param_1 == *(int *)*puVar2) {
          if ((puVar2[1] != 0) || (puVar2[2] != 0)) {
            return 0x31;
          }
          lVar3 = FUN_0079a134(param_1);
          if ((int)lVar3 != 0x2f) {
            if ((int)lVar3 == 0) {
              return 0x30;
            }
            return lVar3;
          }
        }
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = 0;
    }
  }
  else {
    lVar5 = 0;
    iVar6 = 0;
LAB_00799e38:
    while (puVar2 = (undefined8 *)FUN_007952e0(uVar4,lVar5), *param_1 == *(int *)*puVar2) {
      if (puVar2[1] != 0) {
        return 0x31;
      }
      if (puVar2[2] != 0) {
        return 0x31;
      }
      if (iVar6 == 2) break;
      lVar3 = FUN_0079a134(param_1);
      if ((int)lVar3 != 0x2f) {
        if ((int)lVar3 != 0) {
          return lVar3;
        }
        iVar6 = 2;
        break;
      }
      if (lVar1 + -1 == lVar5) goto LAB_00799ec0;
      iVar6 = 1;
      lVar5 = lVar5 + 1;
    }
    if (lVar1 + -1 != lVar5) {
      lVar5 = lVar5 + 1;
      goto LAB_00799e38;
    }
    if (iVar6 != 1) goto LAB_00799ec8;
LAB_00799ec0:
    lVar1 = 0x2f;
  }
  return lVar1;
}


// ===== 00799f60  FUN_00799f60 =====

void FUN_00799f60(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  int *piVar4;
  long lVar5;
  ushort *puVar6;
  int iVar7;
  
  lVar1 = FUN_00795280();
  if (lVar1 != 0) {
    FUN_0079a5f0(param_2,"%*s%s:\n",param_3,&DAT_001b3348,param_4);
  }
  lVar1 = FUN_00795280(param_1);
  if (lVar1 != 0) {
    lVar5 = 0;
    do {
      puVar2 = (undefined8 *)FUN_007952e0(param_1,lVar5);
      FUN_0079a5f0(param_2,&DAT_001cb88f,param_3 + 2,&DAT_001b3348);
      if (*(int *)*puVar2 == 7) {
        piVar4 = *(int **)((int *)*puVar2 + 2);
        puVar6 = *(ushort **)(piVar4 + 2);
        iVar7 = *piVar4;
        FUN_0076fb34(param_2,&DAT_001bff56);
        if (iVar7 == 8) {
          FUN_0079a5f0(param_2,"%d.%d.%d.%d/%d.%d.%d.%d",(char)*puVar6,
                       *(undefined1 *)((long)puVar6 + 1),(char)puVar6[1],
                       *(undefined1 *)((long)puVar6 + 3),(char)puVar6[2],
                       *(undefined1 *)((long)puVar6 + 5),(char)puVar6[3],
                       *(undefined1 *)((long)puVar6 + 7));
        }
        else if (iVar7 == 0x20) {
          for (iVar7 = 0;
              (FUN_0079a5f0(param_2,&DAT_001cb897,(uint)(*puVar6 >> 8) | (*puVar6 & 0xff00ff) << 8),
              puVar3 = &DAT_001c7bbb, iVar7 == 7 || (puVar3 = &DAT_001ca603, iVar7 != 0xf));
              iVar7 = iVar7 + 1) {
            FUN_0076fb34(param_2,puVar3);
            puVar6 = puVar6 + 1;
          }
        }
        else {
          FUN_0079a5f0(param_2,"IP Address:<invalid>");
        }
      }
      else {
        FUN_007987f4(param_2);
      }
      FUN_0076fb34(param_2,&DAT_001ded1c);
      lVar5 = lVar5 + 1;
    } while (lVar5 != lVar1);
  }
  return;
}


// ===== 0079a134  FUN_0079a134 =====

undefined8 FUN_0079a134(long param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  size_t __n;
  ulong uVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  char *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  
  iVar3 = *param_2;
  if (iVar3 < 4) {
    if (iVar3 == 1) {
      local_50 = *(undefined1 **)(*(int **)(param_1 + 8) + 2);
      puStack_48 = (undefined1 *)(long)**(int **)(param_1 + 8);
      local_60 = *(char **)(*(int **)(param_2 + 2) + 2);
      puStack_58 = (undefined1 *)(long)**(int **)(param_2 + 2);
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      iVar3 = FUN_00772558(&local_50,&local_70,0x40);
      if (iVar3 == 0) {
        return 0x35;
      }
      iVar3 = FUN_00772558(&local_60,&local_80,0x40);
      if (iVar3 == 0) {
        if ((puStack_58 != (undefined1 *)0x0) && (*local_60 == '.')) {
          if (puStack_48 < puStack_58) {
            return 0x2f;
          }
          puStack_38 = puStack_48;
          local_40 = local_50;
          FUN_00772150(&local_40,(long)puStack_48 - (long)puStack_58);
          puVar10 = local_40;
          pcVar8 = local_60;
          if (puStack_38 != puStack_58) {
            return 0x2f;
          }
          if (puStack_38 == (undefined1 *)0x0) {
            return 0;
          }
          uVar7 = 0;
          do {
            iVar3 = FUN_0078d074(puVar10[uVar7]);
            iVar4 = FUN_0078d074(pcVar8[uVar7]);
            if (iVar3 != iVar4) {
              return 0x2f;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < puStack_38);
          return 0;
        }
      }
      else {
        if ((puStack_78 != (undefined1 *)0x0) &&
           (iVar3 = FUN_0077220c(&local_80,local_70,puStack_68), iVar3 == 0)) {
          return 0x2f;
        }
        FUN_00772150(&local_60,1);
      }
      FUN_00772150(&local_50,1);
      puVar10 = local_50;
      pcVar8 = local_60;
      if (puStack_58 != puStack_48) {
        return 0x2f;
      }
      if (puStack_58 != (undefined1 *)0x0) {
        uVar7 = 0;
        do {
          iVar3 = FUN_0078d074(pcVar8[uVar7]);
          iVar4 = FUN_0078d074(puVar10[uVar7]);
          if (iVar3 != iVar4) {
            return 0x2f;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < puStack_58);
      }
    }
    else {
      if (iVar3 != 2) {
        return 0x33;
      }
      local_50 = *(undefined1 **)(*(uint **)(param_1 + 8) + 2);
      uVar1 = **(uint **)(param_1 + 8);
      puStack_48 = (undefined1 *)(long)(int)uVar1;
      uVar2 = **(uint **)(param_2 + 2);
      uVar7 = (ulong)(int)uVar2;
      if (uVar2 != 0) {
        pcVar8 = *(char **)(*(uint **)(param_2 + 2) + 2);
        if (*pcVar8 == '.') {
          if (uVar1 < uVar2) {
            return 0x2f;
          }
          local_40 = local_50;
          puStack_38 = puStack_48;
          FUN_00772150(&local_40,(long)puStack_48 - uVar7);
          puVar10 = local_40;
          if (puStack_38 != (undefined1 *)uVar7) {
            return 0x2f;
          }
          uVar7 = 0;
          do {
            iVar3 = FUN_0078d074(puVar10[uVar7]);
            iVar4 = FUN_0078d074(pcVar8[uVar7]);
            if (iVar3 != iVar4) {
              return 0x2f;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < puStack_38);
        }
        else {
          if (uVar2 < uVar1) {
            local_40 = (undefined1 *)CONCAT71(local_40._1_7_,0xaa);
            iVar3 = FUN_00772150(&local_50,~uVar7 + (long)puStack_48);
            if (iVar3 == 0) {
              return 0x2f;
            }
            iVar3 = FUN_0077224c(&local_50,&local_40);
            if (iVar3 == 0) {
              return 0x2f;
            }
            if ((char)local_40 != '.') {
              return 0x2f;
            }
          }
          puVar10 = local_50;
          if (puStack_48 != (undefined1 *)uVar7) {
            return 0x2f;
          }
          uVar7 = 0;
          do {
            iVar3 = FUN_0078d074(puVar10[uVar7]);
            iVar4 = FUN_0078d074(pcVar8[uVar7]);
            if (iVar3 != iVar4) {
              return 0x2f;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < puStack_48);
        }
      }
    }
    return 0;
  }
  if (iVar3 != 6) {
    if (iVar3 != 4) {
      return 0x33;
    }
    uVar9 = *(undefined8 *)(param_2 + 2);
    puVar5 = (undefined8 *)FUN_007a62b4(*(undefined8 *)(param_1 + 8));
    if ((puVar5 == (undefined8 *)0x0) ||
       (puVar6 = (undefined8 *)FUN_007a62b4(uVar9), puVar6 == (undefined8 *)0x0)) {
      return 0x11;
    }
    __n = puVar6[1];
    if ((ulong)puVar5[1] < __n) {
      return 0x2f;
    }
    if (__n != 0) {
      iVar3 = memcmp((void *)*puVar6,(void *)*puVar5,__n);
      if (iVar3 != 0) {
        return 0x2f;
      }
      return 0;
    }
    return 0;
  }
  local_50 = *(undefined1 **)(*(int **)(param_1 + 8) + 2);
  puStack_48 = (undefined1 *)(long)**(int **)(param_1 + 8);
  pcVar8 = *(char **)(*(int **)(param_2 + 2) + 2);
  iVar3 = **(int **)(param_2 + 2);
  puVar10 = (undefined1 *)(long)iVar3;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = (undefined1 *)CONCAT71(local_80._1_7_,0xaa);
  iVar4 = FUN_00772558(&local_50,&local_60,0x3a);
  if ((iVar4 == 0) || (iVar4 = FUN_00772150(&local_50,1), iVar4 == 0)) {
    return 0x35;
  }
  iVar4 = FUN_0077224c(&local_50,&local_80);
  if (iVar4 == 0) {
    return 0x35;
  }
  if ((char)local_80 != '/') {
    return 0x35;
  }
  iVar4 = FUN_0077224c(&local_50,&local_80);
  if (iVar4 == 0) {
    return 0x35;
  }
  if ((char)local_80 != '/') {
    return 0x35;
  }
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  iVar4 = FUN_00772558(&local_50,&local_70,0x3a);
  if ((iVar4 == 0) && (iVar4 = FUN_00772558(&local_50,&local_70,0x2f), iVar4 == 0)) {
    puStack_68 = puStack_48;
    local_70 = local_50;
  }
  if (puStack_68 == (undefined1 *)0x0) {
    return 0x35;
  }
  if (iVar3 == 0) {
    return 0x2f;
  }
  if (*pcVar8 == '.') {
    if (puStack_68 < puVar10) {
      return 0x2f;
    }
    puStack_38 = puStack_68;
    local_40 = local_70;
    FUN_00772150(&local_40,(long)puStack_68 - (long)puVar10);
    puVar11 = local_40;
    if (puStack_38 != puVar10) {
      return 0x2f;
    }
    puVar10 = (undefined1 *)0x0;
    do {
      iVar3 = FUN_0078d074(puVar11[(long)puVar10]);
      iVar4 = FUN_0078d074(pcVar8[(long)puVar10]);
      if (iVar3 != iVar4) {
        return 0x2f;
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 < puStack_38);
    return 0;
  }
  puVar11 = local_70;
  if (puStack_68 != puVar10) {
    return 0x2f;
  }
  do {
    iVar3 = FUN_0078d074(*pcVar8);
    iVar4 = FUN_0078d074(*puVar11);
    if (iVar3 != iVar4) {
      return 0x2f;
    }
    puVar10 = puVar10 + -1;
    pcVar8 = pcVar8 + 1;
    puVar11 = puVar11 + 1;
  } while (puVar10 != (undefined1 *)0x0);
  return 0;
}


// ===== 0079a5f0  FUN_0079a5f0 =====

undefined4
FUN_0079a5f0(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *__s;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined1 *local_1b0;
  undefined1 **ppuStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined1 *local_190;
  undefined1 **ppuStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  undefined1 *puStack_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined1 *puStack_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  long local_48;
  
  puStack_180 = &local_1e0;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  ppuStack_188 = &local_1b0;
  puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
  local_150 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_140 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
  local_130 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_120 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  local_110 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_178 = 0xffffff80ffffffd0;
  local_1e0 = param_3;
  uStack_1d8 = param_4;
  local_1d0 = param_5;
  uStack_1c8 = param_6;
  local_1c0 = param_7;
  uStack_1b8 = param_8;
  local_190 = (undefined1 *)register0x00000008;
  uVar2 = vsnprintf((char *)&local_150,0x100,param_2,&local_190);
  if (-1 < (int)uVar2) {
    if (uVar2 < 0x100) {
      uVar3 = FUN_0076f9a8(param_1,&local_150);
      goto LAB_0079a73c;
    }
    __s = (char *)FUN_0078c954((ulong)(uVar2 + 1));
    if (__s != (char *)0x0) {
      ppuStack_1a8 = &local_1b0;
      puStack_1a0 = &local_1e0;
      uStack_198 = 0xffffff80ffffffd0;
      local_1b0 = (undefined1 *)register0x00000008;
      iVar4 = vsnprintf(__s,(ulong)(uVar2 + 1),param_2,&local_1b0);
      uVar3 = FUN_0076f9a8(param_1,__s,iVar4);
      FUN_0078cb3c(__s);
      goto LAB_0079a73c;
    }
  }
  uVar3 = 0xffffffff;
LAB_0079a73c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079a770  thunk_FUN_0079ea94 =====

void thunk_FUN_0079ea94(void)

{
  FUN_0079ea94();
  return;
}


// ===== 0079a778  FUN_0079a778 =====

void FUN_0079a778(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0079eb74(param_1,param_3);
  return;
}


// ===== 0079a784  FUN_0079a784 =====

void * FUN_0079a784(undefined8 param_1,int *param_2)

{
  void *__dest;
  long lVar1;
  
  if ((param_2 == (int *)0x0) || (*param_2 == 0)) {
    __dest = (void *)0x0;
  }
  else {
    __dest = (void *)FUN_0078c954((long)(*param_2 + 1));
    if (__dest != (void *)0x0) {
      if (*param_2 == 0) {
        lVar1 = 0;
      }
      else {
        memcpy(__dest,*(void **)(param_2 + 2),(long)*param_2);
        lVar1 = (long)*param_2;
      }
      *(undefined1 *)((long)__dest + lVar1) = 0;
    }
  }
  return __dest;
}


// ===== 0079a7f8  FUN_0079a7f8 =====

long FUN_0079a7f8(undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  long lVar2;
  size_t sVar3;
  
  if (param_3 == (char *)0x0) {
    FUN_00777eb4(0x14,0,0x7c,"../../third_party/boringssl/src/crypto/x509/v3_ia5.cc",0x31);
  }
  else {
    lVar2 = FUN_0076e974();
    if (lVar2 == 0) {
      return 0;
    }
    sVar3 = strlen(param_3);
    iVar1 = FUN_007693d8(lVar2,param_3,sVar3);
    if (iVar1 != 0) {
      return lVar2;
    }
    thunk_FUN_007695a4(lVar2);
  }
  return 0;
}


// ===== 0079a878  FUN_0079a878 =====

long FUN_0079a878(undefined8 param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long local_38;
  
  piVar3 = (int *)*param_2;
  local_38 = param_3;
  if (piVar3 != (int *)0x0) {
    lVar2 = FUN_0079f3ac(*(undefined8 *)(piVar3 + 2),(long)*piVar3);
    if (lVar2 == 0) {
      FUN_0078cb3c();
      goto LAB_0079a920;
    }
    iVar1 = FUN_0079e788("keyid",lVar2,&local_38);
    FUN_0078cb3c(lVar2);
    if (iVar1 == 0) goto LAB_0079a920;
  }
  lVar2 = local_38;
  if ((param_2[1] == 0) || (lVar2 = FUN_00798368(0,param_2[1],local_38), lVar2 != 0)) {
    local_38 = lVar2;
    if (param_2[2] == 0) {
      return local_38;
    }
    iVar1 = FUN_0079ecfc("serial",param_2[2],&local_38);
    if (iVar1 != 0) {
      return local_38;
    }
  }
LAB_0079a920:
  if (param_3 == 0) {
    FUN_00795370(local_38,FUN_00797d20,PTR_FUN_00d52880);
  }
  return 0;
}


// ===== 0079a958  FUN_0079a958 =====

long * FUN_0079a958(undefined8 param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined4 *puVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  char *__s1;
  
  lVar3 = FUN_00795280(param_3);
  if (lVar3 == 0) {
    iVar9 = 0;
    iVar2 = 0;
  }
  else {
    uVar10 = 0;
    iVar2 = 0;
    iVar9 = 0;
    do {
      lVar3 = FUN_007952e0(param_3,uVar10);
      __s1 = *(char **)(lVar3 + 8);
      iVar1 = strcmp(__s1,"keyid");
      if (iVar1 == 0) {
        if (*(char **)(lVar3 + 0x10) == (char *)0x0) {
          iVar9 = 1;
        }
        else {
          iVar1 = strcmp(*(char **)(lVar3 + 0x10),"always");
          iVar9 = 1;
          if (iVar1 == 0) {
            iVar9 = 2;
          }
        }
      }
      else {
        iVar2 = strcmp(__s1,"issuer");
        if (iVar2 != 0) {
          FUN_00777eb4(0x14,0,0x9f,"../../third_party/boringssl/src/crypto/x509/v3_akey.cc",0x79);
          FUN_00777f98(2,"name=",*(undefined8 *)(lVar3 + 8));
          return (long *)0x0;
        }
        if (*(char **)(lVar3 + 0x10) == (char *)0x0) {
          iVar2 = 1;
        }
        else {
          iVar1 = strcmp(*(char **)(lVar3 + 0x10),"always");
          iVar2 = 1;
          if (iVar1 == 0) {
            iVar2 = 2;
          }
        }
      }
      uVar10 = uVar10 + 1;
      uVar4 = FUN_00795280(param_3);
    } while (uVar10 < uVar4);
  }
  if (param_2 != (int *)0x0) {
    lVar3 = *(long *)(param_2 + 2);
    if (lVar3 != 0) {
      if (iVar9 == 0) {
        lVar5 = 0;
      }
      else {
        iVar1 = FUN_007a0dcc(lVar3,0x52,0xffffffff);
        if ((iVar1 < 0) || (lVar5 = FUN_007a0dd8(lVar3,iVar1), lVar5 == 0)) {
          lVar5 = 0;
        }
        else {
          lVar5 = FUN_0079932c();
        }
        if ((iVar9 == 2) && (lVar5 == 0)) {
          FUN_00777eb4(0x14,0,0x9b,"../../third_party/boringssl/src/crypto/x509/v3_akey.cc",0x90);
          return (long *)0x0;
        }
      }
      if ((iVar2 == 2) || (lVar5 == 0 && iVar2 != 0)) {
        FUN_007a0b50(lVar3);
        lVar11 = FUN_007a65d4();
        FUN_007a0be8(lVar3);
        lVar3 = thunk_FUN_007694e4();
        if ((lVar11 == 0) || (lVar3 == 0)) {
          FUN_00777eb4(0x14,0,0x9a,"../../third_party/boringssl/src/crypto/x509/v3_akey.cc",0x99);
        }
        else {
          plVar6 = (long *)FUN_0079ac60();
          if ((((plVar6 != (long *)0x0) && (lVar12 = FUN_00795214(), lVar12 != 0)) &&
              (puVar7 = (undefined4 *)FUN_00796130(), puVar7 != (undefined4 *)0x0)) &&
             (lVar8 = FUN_00795868(lVar12,puVar7), lVar8 != 0)) {
            *(long *)(puVar7 + 2) = lVar11;
            *puVar7 = 4;
            goto LAB_0079ab88;
          }
        }
      }
      else {
        plVar6 = (long *)FUN_0079ac60();
        lVar3 = 0;
        lVar12 = 0;
        lVar11 = 0;
        if (plVar6 != (long *)0x0) {
LAB_0079ab88:
          plVar6[1] = lVar12;
          plVar6[2] = lVar3;
          *plVar6 = lVar5;
          return plVar6;
        }
      }
      FUN_007a6074(lVar11);
      thunk_FUN_007695a4(lVar3);
      thunk_FUN_007695a4(lVar5);
      return (long *)0x0;
    }
    if (*param_2 == 1) {
      plVar6 = (long *)FUN_0079ac60();
      return plVar6;
    }
  }
  FUN_00777eb4(0x14,0,0x8c,"../../third_party/boringssl/src/crypto/x509/v3_akey.cc",0x83);
  return (long *)0x0;
}


// ===== 0079ac60  FUN_0079ac60 =====

void FUN_0079ac60(void)

{
  FUN_0076e4fc(&DAT_00d362f8);
  return;
}


// ===== 0079ac70  FUN_0079ac70 =====

void FUN_0079ac70(undefined8 param_1)

{
  FUN_0076e060(param_1,&DAT_00d362f8);
  return;
}


// ===== 0079ac80  FUN_0079ac80 =====

undefined8 FUN_0079ac80(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  
  lVar4 = FUN_00795280(param_2);
  if (lVar4 != 0) {
    uVar12 = 0;
    do {
      puVar5 = (undefined8 *)FUN_007952e0(param_2,uVar12);
      FUN_0079a5f0(param_3,"%*sPolicy: ",param_4,&DAT_001b3348);
      FUN_0076c528(param_3,*puVar5);
      FUN_0076fb34(param_3,&DAT_001ded1c);
      lVar4 = puVar5[1];
      if ((lVar4 != 0) && (lVar6 = FUN_00795280(lVar4), lVar6 != 0)) {
        uVar13 = 0;
        do {
          puVar5 = (undefined8 *)FUN_007952e0(lVar4,uVar13);
          iVar3 = FUN_0078d994(*puVar5);
          if (iVar3 == 0xa5) {
            FUN_0079a5f0(param_3,"%*sUser Notice:\n",param_4 + 2,&DAT_001b3348);
            puVar5 = (undefined8 *)puVar5[1];
            puVar14 = (undefined8 *)*puVar5;
            if (puVar14 != (undefined8 *)0x0) {
              FUN_0079a5f0(param_3,"%*sOrganization: %.*s\n",param_4 + 4,&DAT_001b3348,
                           *(undefined4 *)*puVar14,*(undefined8 *)((undefined4 *)*puVar14 + 2));
              uVar7 = FUN_00795280(puVar14[1]);
              puVar1 = &DAT_0019cf4c;
              if (uVar7 < 2) {
                puVar1 = &DAT_001b3348;
              }
              FUN_0079a5f0(param_3,"%*sNumber%s: ",param_4 + 4,&DAT_001b3348,puVar1);
              lVar6 = FUN_00795280(puVar14[1]);
              if (lVar6 != 0) {
                lVar6 = FUN_007952e0(puVar14[1],0);
                if (lVar6 == 0) {
                  FUN_0076fb34(param_3,"(null)");
                }
                else {
                  lVar6 = FUN_0079ea94(0,lVar6);
                  if (lVar6 == 0) goto LAB_0079ad7c;
                  FUN_0076fb34(param_3,lVar6);
                  FUN_0078cb3c(lVar6);
                }
                uVar7 = FUN_00795280(puVar14[1]);
                if (1 < uVar7) {
                  uVar7 = 1;
                  do {
                    lVar6 = FUN_007952e0(puVar14[1],uVar7);
                    FUN_0076fb34(param_3,&DAT_001e1644);
                    if (lVar6 == 0) {
                      FUN_0076fb34(param_3,"(null)");
                    }
                    else {
                      lVar6 = FUN_0079ea94(0,lVar6);
                      if (lVar6 == 0) goto LAB_0079ad7c;
                      FUN_0076fb34(param_3,lVar6);
                      FUN_0078cb3c(lVar6);
                    }
                    uVar7 = uVar7 + 1;
                    uVar8 = FUN_00795280(puVar14[1]);
                  } while (uVar7 < uVar8);
                }
              }
              FUN_0076fb34(param_3,&DAT_001ded1c);
            }
            puVar11 = (undefined4 *)puVar5[1];
            if (puVar11 != (undefined4 *)0x0) {
              uVar2 = *puVar11;
              uVar10 = *(undefined8 *)(puVar11 + 2);
              iVar3 = param_4 + 4;
              pcVar9 = "%*sExplicit Text: %.*s\n";
              goto LAB_0079af64;
            }
          }
          else if (iVar3 == 0xa4) {
            iVar3 = param_4 + 2;
            pcVar9 = "%*sCPS: %.*s\n";
            uVar2 = *(undefined4 *)puVar5[1];
            uVar10 = *(undefined8 *)((undefined4 *)puVar5[1] + 2);
LAB_0079af64:
            FUN_0079a5f0(param_3,pcVar9,iVar3,&DAT_001b3348,uVar2,uVar10);
          }
          else {
            FUN_0079a5f0(param_3,"%*sUnknown Qualifier: ",param_4 + 4,&DAT_001b3348);
            FUN_0076c528(param_3,*puVar5);
            FUN_0076fb34(param_3,&DAT_001ded1c);
          }
LAB_0079ad7c:
          uVar13 = uVar13 + 1;
          uVar7 = FUN_00795280(lVar4);
        } while (uVar13 < uVar7);
      }
      uVar12 = uVar12 + 1;
      uVar13 = FUN_00795280(param_2);
    } while (uVar12 < uVar13);
  }
  return 1;
}


// ===== 0079af98  FUN_0079af98 =====

long FUN_0079af98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  size_t sVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  char *pcVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  
  lVar3 = FUN_00795214();
  if (lVar3 != 0) {
    lVar4 = FUN_0079efb4(param_3);
    if (lVar4 == 0) {
      FUN_00777eb4(0x14,0,0x14,"../../third_party/boringssl/src/crypto/x509/v3_cpols.cc",0x79);
LAB_0079b700:
      FUN_00795370(lVar4,FUN_00797d20,PTR_FUN_00d52880);
      FUN_00795370(lVar3,FUN_0079b79c,FUN_0079b77c);
      lVar3 = 0;
    }
    else {
      lVar5 = FUN_00795280(lVar4);
      if (lVar5 != 0) {
        bVar1 = false;
        uVar22 = 0;
LAB_0079b018:
        puVar6 = (undefined8 *)FUN_007952e0(lVar4,uVar22);
        if ((puVar6[2] == 0) && (pcVar21 = (char *)puVar6[1], pcVar21 != (char *)0x0)) {
          iVar2 = strcmp(pcVar21,"ia5org");
          if (iVar2 == 0) {
            bVar1 = true;
LAB_0079b004:
            uVar22 = uVar22 + 1;
            uVar24 = FUN_00795280(lVar4);
            if (uVar24 <= uVar22) goto LAB_0079b470;
            goto LAB_0079b018;
          }
          if (*pcVar21 == '@') {
            lVar5 = FUN_0079b7ac(param_2,pcVar21 + 1);
            if (lVar5 == 0) {
              uVar18 = 0x86;
              uVar19 = 0x8c;
              goto LAB_0079b4a4;
            }
            plVar7 = (long *)FUN_0076e4fc(&DAT_00d36450);
            if (plVar7 != (long *)0x0) {
              lVar8 = FUN_00795280(lVar5);
              if (lVar8 != 0) {
                uVar24 = 0;
                uVar20 = 0x1a;
                if (bVar1) {
                  uVar20 = 0x16;
                }
                do {
                  puVar6 = (undefined8 *)FUN_007952e0(lVar5,uVar24);
                  pcVar21 = (char *)puVar6[1];
                  iVar2 = strcmp(pcVar21,"policyIdentifier");
                  if (iVar2 == 0) {
                    lVar8 = FUN_0078dd14(puVar6[2],0);
                    if (lVar8 == 0) {
                      uVar18 = 0x81;
                      uVar19 = 0xbf;
                      goto LAB_0079b640;
                    }
                    *plVar7 = lVar8;
                  }
                  else {
                    iVar2 = FUN_0079f610(pcVar21,&DAT_001df5c3);
                    if (iVar2 == 0) {
                      iVar2 = FUN_0079f610(puVar6[1],"userNotice");
                      if (iVar2 == 0) {
                        uVar18 = 0x82;
                        uVar19 = 0xf3;
                      }
                      else if (*(char *)puVar6[2] == '@') {
                        lVar8 = FUN_0079b7ac(param_2,(char *)puVar6[2] + 1);
                        if (lVar8 != 0) {
                          plVar10 = (long *)FUN_0076e4fc(&DAT_00d36420);
                          if (plVar10 != (long *)0x0) {
                            lVar12 = FUN_0078dd74(0xa5);
                            *plVar10 = lVar12;
                            if (lVar12 == 0) {
                              uVar18 = 0x44;
                              uVar19 = 0x10f;
                            }
                            else {
                              plVar13 = (long *)FUN_0076e4fc(&DAT_00d363f0);
                              if (plVar13 == (long *)0x0) goto LAB_0079b518;
                              plVar10[1] = (long)plVar13;
                              lVar12 = FUN_00795280(lVar8);
                              if (lVar12 != 0) {
                                uVar9 = 0;
                                do {
                                  puVar6 = (undefined8 *)FUN_007952e0(lVar8,uVar9);
                                  pcVar21 = (char *)puVar6[1];
                                  iVar2 = strcmp(pcVar21,"explicitText");
                                  if (iVar2 == 0) {
                                    lVar12 = FUN_0076e99c();
                                    plVar13[1] = lVar12;
                                    if (lVar12 == 0) goto LAB_0079b518;
LAB_0079b3c0:
                                    pcVar21 = (char *)puVar6[2];
                                    sVar11 = strlen(pcVar21);
                                    iVar2 = FUN_007693d8(lVar12,pcVar21,sVar11);
                                    if (iVar2 == 0) goto LAB_0079b518;
                                  }
                                  else {
                                    iVar2 = strcmp(pcVar21,"organization");
                                    if (iVar2 == 0) {
                                      plVar17 = (long *)*plVar13;
                                      if (plVar17 == (long *)0x0) {
                                        plVar17 = (long *)FUN_0076e4fc(&DAT_00d363c0);
                                        if (plVar17 == (long *)0x0) goto LAB_0079b518;
                                        *plVar13 = (long)plVar17;
                                      }
                                      *(undefined4 *)(*plVar17 + 4) = uVar20;
                                      lVar12 = *plVar17;
                                      goto LAB_0079b3c0;
                                    }
                                    iVar2 = strcmp(pcVar21,"noticeNumbers");
                                    if (iVar2 != 0) {
                                      FUN_00777eb4(0x14,0,0x82,
                                                                                                      
                                                  "../../third_party/boringssl/src/crypto/x509/v3_cpols.cc"
                                                  ,0x14b);
                                      FUN_00777f98(6,"section:",*puVar6,",name:",puVar6[1],",value:"
                                                   ,puVar6[2]);
                                      goto LAB_0079b518;
                                    }
                                    lVar12 = *plVar13;
                                    if (lVar12 == 0) {
                                      lVar12 = FUN_0076e4fc(&DAT_00d363c0);
                                      if (lVar12 == 0) goto LAB_0079b518;
                                      *plVar13 = lVar12;
                                    }
                                    lVar14 = FUN_0079efb4(puVar6[2]);
                                    if ((lVar14 == 0) ||
                                       (lVar15 = FUN_00795280(lVar14), lVar15 == 0)) {
                                      FUN_00777eb4(0x14,0,0x80,
                                                                                                      
                                                  "../../third_party/boringssl/src/crypto/x509/v3_cpols.cc"
                                                  ,0x140);
                                      FUN_00777f98(6,"section:",*puVar6,",name:",puVar6[1],",value:"
                                                   ,puVar6[2]);
LAB_0079b500:
                                      FUN_00795370(lVar14,FUN_00797d20,PTR_FUN_00d52880);
                                      goto LAB_0079b518;
                                    }
                                    uVar18 = *(undefined8 *)(lVar12 + 8);
                                    lVar12 = FUN_00795280(lVar14);
                                    if (lVar12 != 0) {
                                      uVar23 = 0;
                                      do {
                                        lVar12 = FUN_007952e0(lVar14,uVar23);
                                        lVar12 = FUN_0079eb74(0,*(undefined8 *)(lVar12 + 8));
                                        if (lVar12 == 0) {
                                          FUN_00777eb4(0x14,0,0x7f,
                                                                                                              
                                                  "../../third_party/boringssl/src/crypto/x509/v3_cpols.cc"
                                                  ,0x164);
                                          goto LAB_0079b500;
                                        }
                                        lVar15 = FUN_00795868(uVar18,lVar12);
                                        if (lVar15 == 0) {
                                          thunk_FUN_007695a4(lVar12);
                                          goto LAB_0079b500;
                                        }
                                        uVar23 = uVar23 + 1;
                                        uVar16 = FUN_00795280(lVar14);
                                      } while (uVar23 < uVar16);
                                    }
                                    FUN_00795370(lVar14,FUN_00797d20,PTR_FUN_00d52880);
                                  }
                                  uVar9 = uVar9 + 1;
                                  uVar23 = FUN_00795280(lVar8);
                                } while (uVar9 < uVar23);
                              }
                              plVar13 = (long *)*plVar13;
                              if ((plVar13 == (long *)0x0) || ((plVar13[1] != 0 && (*plVar13 != 0)))
                                 ) {
                                lVar8 = plVar7[1];
                                if (lVar8 == 0) {
                                  lVar8 = FUN_00795214();
                                  plVar7[1] = lVar8;
                                }
                                lVar8 = FUN_00795868(lVar8,plVar10);
                                if (lVar8 != 0) goto LAB_0079b0ec;
                                goto LAB_0079b6f0;
                              }
                              uVar18 = 0x8a;
                              uVar19 = 0x153;
                            }
                            FUN_00777eb4(0x14,0,uVar18,
                                         "../../third_party/boringssl/src/crypto/x509/v3_cpols.cc",
                                         uVar19);
                          }
LAB_0079b518:
                          FUN_0076e060(plVar10,&DAT_00d36420);
                          goto LAB_0079b6f0;
                        }
                        uVar18 = 0x86;
                        uVar19 = 0xe4;
                      }
                      else {
                        uVar18 = 0x6f;
                        uVar19 = 0xdd;
                      }
LAB_0079b640:
                      FUN_00777eb4(0x14,0,uVar18,
                                   "../../third_party/boringssl/src/crypto/x509/v3_cpols.cc",uVar19)
                      ;
                      FUN_00777f98(6,"section:",*puVar6,",name:",puVar6[1],",value:",puVar6[2]);
                      goto LAB_0079b6f0;
                    }
                    if (plVar7[1] == 0) {
                      lVar8 = FUN_00795214();
                      plVar7[1] = lVar8;
                    }
                    plVar10 = (long *)FUN_0076e4fc(&DAT_00d36420);
                    if ((plVar10 == (long *)0x0) ||
                       (lVar8 = FUN_00795868(plVar7[1],plVar10), lVar8 == 0)) goto LAB_0079b6f0;
                    lVar8 = FUN_0078dd74(0xa4);
                    *plVar10 = lVar8;
                    if (lVar8 == 0) {
                      uVar18 = 0x44;
                      uVar19 = 0xd1;
                      goto LAB_0079b6ec;
                    }
                    lVar8 = FUN_0076e974();
                    plVar10[1] = lVar8;
                    if (lVar8 == 0) goto LAB_0079b6f0;
                    pcVar21 = (char *)puVar6[2];
                    sVar11 = strlen(pcVar21);
                    iVar2 = FUN_007693d8(lVar8,pcVar21,sVar11);
                    if (iVar2 == 0) goto LAB_0079b6f0;
                  }
LAB_0079b0ec:
                  uVar24 = uVar24 + 1;
                  uVar9 = FUN_00795280(lVar5);
                } while (uVar24 < uVar9);
              }
              if (*plVar7 != 0) goto LAB_0079b43c;
              uVar18 = 0x8e;
              uVar19 = 0xfa;
LAB_0079b6ec:
              FUN_00777eb4(0x14,0,uVar18,"../../third_party/boringssl/src/crypto/x509/v3_cpols.cc",
                           uVar19);
            }
LAB_0079b6f0:
            FUN_0076e060(plVar7,&DAT_00d36450);
            goto LAB_0079b700;
          }
          lVar5 = FUN_0078dd14(pcVar21,0);
          if (lVar5 != 0) {
            plVar7 = (long *)FUN_0076e4fc(&DAT_00d36450);
            if (plVar7 != (long *)0x0) {
              *plVar7 = lVar5;
LAB_0079b43c:
              lVar5 = FUN_00795868(lVar3,plVar7);
              if (lVar5 == 0) goto LAB_0079b6f0;
              goto LAB_0079b004;
            }
            FUN_0076c804(lVar5);
            goto LAB_0079b700;
          }
          uVar18 = 0x81;
          uVar19 = 0x98;
        }
        else {
          uVar18 = 0x83;
          uVar19 = 0x80;
        }
LAB_0079b4a4:
        FUN_00777eb4(0x14,0,uVar18,"../../third_party/boringssl/src/crypto/x509/v3_cpols.cc",uVar19)
        ;
        FUN_00777f98(6,"section:",*puVar6,",name:",puVar6[1],",value:",puVar6[2]);
        goto LAB_0079b700;
      }
LAB_0079b470:
      FUN_00795370(lVar4,FUN_00797d20,PTR_FUN_00d52880);
    }
  }
  return lVar3;
}


// ===== 0079b77c  FUN_0079b77c =====

void FUN_0079b77c(undefined8 param_1)

{
  FUN_0076e060(param_1,&DAT_00d36450);
  return;
}


// ===== 0079b78c  FUN_0079b78c =====

void FUN_0079b78c(undefined8 param_1)

{
  FUN_0076e060(param_1,&DAT_00d36328);
  return;
}


// ===== 0079b79c  FUN_0079b79c =====

void FUN_0079b79c(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0079b7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}


// ===== 0079b7ac  FUN_0079b7ac =====

undefined8 FUN_0079b7ac(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar1 = FUN_0079cc64();
    return uVar1;
  }
  FUN_00777eb4(0x14,0,0x93,"../../third_party/boringssl/src/crypto/x509/v3_conf.cc",0x161);
  return 0;
}


// ===== 0079b7f4  FUN_0079b7f4 =====

void FUN_0079b7f4(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0079b800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}


// ===== 0079b804  FUN_0079b804 =====

undefined8 FUN_0079b804(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00770970(&local_50);
  iVar1 = FUN_00770984(&local_50,0);
  if ((iVar1 != 0) && (iVar1 = FUN_0079b8dc(&local_50,param_1,param_2,1,0), iVar1 != 0)) {
    uVar2 = FUN_00770d00(&local_50);
    if (uVar2 < 0x10001) {
      local_58 = FUN_00770cd4(&local_50);
      uVar3 = FUN_00770d00(&local_50);
      uVar3 = FUN_0076e9b8(0,&local_58,uVar3);
      goto LAB_0079b890;
    }
    FUN_00777eb4(0xc,0,0xb1,"../../third_party/boringssl/src/crypto/x509/asn1_gen.cc",0x4a);
  }
  uVar3 = 0;
LAB_0079b890:
  FUN_00770a10(&local_50);
  return uVar3;
}


// ===== 0079b8dc  FUN_0079b8dc =====

/* WARNING: Type propagation algorithm not settling */

uint FUN_0079b8dc(undefined8 param_1,long *param_2,long param_3,int param_4,int param_5)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  size_t sVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined8 uVar12;
  long *plVar13;
  uint *puVar14;
  ulong uVar15;
  size_t sVar16;
  long *__s;
  char *pcVar17;
  long lVar18;
  long *local_b0;
  char *pcStack_a8;
  long *local_a0;
  char *pcStack_98;
  long *local_90;
  char *pcStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  
  if (param_5 < 0x33) {
    uVar4 = 0;
LAB_0079b97c:
    do {
      cVar2 = (char)*param_2;
      __s = param_2;
      while ((cVar2 != '\0' && (iVar3 = FUN_0078d08c(), iVar3 != 0))) {
        __s = (long *)((long)__s + 1);
        cVar2 = *(char *)__s;
      }
      pcVar6 = strchr((char *)__s,0x2c);
      if (pcVar6 == (char *)0x0) {
LAB_0079bd30:
        pcVar6 = strchr((char *)__s,0x3a);
        if (pcVar6 == (char *)0x0) {
          sVar16 = strlen((char *)__s);
          plVar13 = (long *)&DAT_001b3348;
        }
        else {
          sVar16 = (long)pcVar6 - (long)__s;
          plVar13 = (long *)(pcVar6 + 1);
        }
        puVar14 = &DAT_00d36650;
        lVar18 = 0x210;
        goto LAB_0079bd80;
      }
      pcStack_88 = pcVar6 + -(long)__s;
      local_90 = __s;
      while( true ) {
        local_b0 = (long *)CONCAT71(local_b0._1_7_,0xaa);
        local_a0 = local_90;
        pcStack_98 = pcStack_88;
        iVar3 = FUN_007723b4(&local_90,&local_b0);
        if ((iVar3 == 0) || (iVar3 = FUN_0078d08c((ulong)local_b0 & 0xff), iVar3 == 0)) break;
      }
      pcStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
      local_b0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
      iVar3 = FUN_00772558(&local_a0,&local_b0,0x3a);
      pcVar17 = pcStack_98;
      plVar13 = local_a0;
      if (iVar3 == 0) {
        local_a0 = (long *)0x0;
        pcStack_98 = (char *)0x0;
        pcStack_a8 = pcVar17;
        local_b0 = plVar13;
      }
      else {
        FUN_00772150(&local_a0,1);
      }
      plVar13 = local_b0;
      param_2 = (long *)(pcVar6 + 1);
      if (5 < (long)pcStack_a8) {
        if (pcStack_a8 == (char *)0x8) {
          iVar3 = memcmp(local_b0,"IMPLICIT",8);
          if (iVar3 == 0) goto LAB_0079baf4;
          if (*plVar13 == 0x544943494c505845) goto LAB_0079bc60;
        }
        else if ((pcStack_a8 == (char *)0x6) &&
                ((int)*local_b0 == 0x4d524f46 && *(short *)((long)local_b0 + 4) == 0x5441))
        goto LAB_0079ba8c;
LAB_0079bbd4:
        iVar3 = FUN_0079c41c(&local_b0,"OCTWRAP");
        if (iVar3 == 0) {
          iVar3 = FUN_0079c41c(&local_b0,"BITWRAP");
          if (iVar3 != 0) {
            uVar10 = 1;
            uVar11 = 3;
            if (uVar4 != 0) {
              uVar11 = uVar4;
            }
            goto LAB_0079bc30;
          }
          iVar3 = FUN_0079c41c(&local_b0,"SEQWRAP");
          if (iVar3 == 0) {
            iVar3 = FUN_0079c41c(&local_b0,"SETWRAP");
            if (iVar3 == 0) goto LAB_0079bd30;
            uVar11 = 0x20000011;
            if (uVar4 != 0) {
              uVar11 = uVar4 | 0x20000000;
            }
          }
          else {
            uVar11 = 0x20000010;
            if (uVar4 != 0) {
              uVar11 = uVar4 | 0x20000000;
            }
          }
        }
        else {
          uVar11 = 4;
          if (uVar4 != 0) {
            uVar11 = uVar4;
          }
        }
        uVar10 = 0;
LAB_0079bc30:
        uVar4 = FUN_0079c5fc(param_1,param_2,param_3,uVar11,uVar10,param_4,param_5);
        return uVar4;
      }
      if (pcStack_a8 != (char *)0x3) {
        if ((pcStack_a8 != (char *)0x4) || (iVar3 = memcmp(local_b0,&DAT_001b77af,4), iVar3 != 0))
        goto LAB_0079bbd4;
LAB_0079ba8c:
        if ((long)pcStack_98 < 5) {
          if (pcStack_98 == (char *)0x3) {
            iVar3 = memcmp(local_a0,&DAT_001ce67e,3);
            if (iVar3 == 0) {
              param_4 = 3;
              goto LAB_0079b97c;
            }
          }
          else if ((pcStack_98 == (char *)0x4) &&
                  (iVar3 = memcmp(local_a0,&DAT_001b47e5,4), iVar3 == 0)) {
            param_4 = 2;
            goto LAB_0079b97c;
          }
        }
        else if (pcStack_98 == (char *)0x7) {
          iVar3 = memcmp(local_a0,"BITLIST",7);
          if (iVar3 == 0) {
            param_4 = 4;
            goto LAB_0079b97c;
          }
        }
        else if ((pcStack_98 == (char *)0x5) &&
                ((int)*local_a0 == 0x49435341 && *(char *)((long)local_a0 + 4) == 'I')) {
          param_4 = 1;
          goto LAB_0079b97c;
        }
        uVar10 = 0xb6;
        uVar12 = 0xcd;
        goto LAB_0079b920;
      }
      iVar3 = memcmp(local_b0,&DAT_001aed86,3);
      if (iVar3 != 0) {
        if ((short)*plVar13 != 0x5845 || *(char *)((long)plVar13 + 2) != 'P') goto LAB_0079bbd4;
LAB_0079bc60:
        if (uVar4 != 0) {
          uVar10 = 0x83;
          uVar12 = 0xdf;
          goto LAB_0079b920;
        }
        uVar4 = FUN_0079c48c(&local_a0);
        if (uVar4 == 0) {
          return 0;
        }
        puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
        local_80 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
        pcStack_88 = &DAT_aaaaaaaaaaaaaaaa;
        local_90 = (long *)&DAT_aaaaaaaaaaaaaaaa;
        iVar3 = FUN_00771098(param_1,&local_90,uVar4 | 0x20000000);
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = FUN_0079b8dc(&local_90,param_2,param_3,param_4,param_5 + 1);
        goto joined_r0x0079c284;
      }
LAB_0079baf4:
      if (uVar4 != 0) {
        uVar10 = 0x83;
        uVar12 = 0xd3;
        goto LAB_0079b920;
      }
      uVar4 = FUN_0079c48c(&local_a0);
      if (uVar4 == 0) {
        return 0;
      }
    } while( true );
  }
  uVar10 = 0x83;
  uVar12 = 0x95;
  goto LAB_0079b920;
LAB_0079bd74:
  lVar18 = lVar18 + -0x10;
  puVar14 = puVar14 + 4;
  if (lVar18 == 0) goto LAB_0079be24;
  goto LAB_0079bd80;
LAB_0079be24:
  uVar10 = 0xb9;
  uVar12 = 0x137;
  goto LAB_0079b920;
LAB_0079bd80:
  pcVar17 = *(char **)(puVar14 + -2);
  sVar7 = strlen(pcVar17);
  if ((sVar16 != sVar7) || ((sVar16 != 0 && (iVar3 = memcmp(__s,pcVar17,sVar16), iVar3 != 0))))
  goto LAB_0079bd74;
  uVar11 = *puVar14;
  if (uVar11 == 0) goto LAB_0079be24;
  uVar1 = uVar11;
  if (uVar4 != 0) {
    uVar1 = uVar11 & 0x20000000 | uVar4;
  }
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  pcStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  iVar3 = FUN_00771098(param_1,&local_90,uVar1);
  if (iVar3 == 0) {
    return 0;
  }
  switch(uVar11) {
  case 1:
    if (param_4 != 1) {
      uVar10 = 0xa1;
      uVar12 = 0x14c;
      goto LAB_0079b920;
    }
    local_a0 = (long *)CONCAT44(local_a0._4_4_,0xaaaaaaaa);
    iVar3 = FUN_0079ed70(plVar13,&local_a0);
    if (iVar3 == 0) {
      uVar10 = 0x7d;
      uVar12 = 0x151;
      goto LAB_0079b920;
    }
    iVar3 = FUN_00771298(&local_90,-(uint)((int)local_a0 != 0));
    goto joined_r0x0079c284;
  case 2:
  case 10:
    if (param_4 == 1) {
      lVar18 = FUN_0079eb74(0,plVar13);
      if (lVar18 != 0) {
        iVar3 = FUN_0076c9b4(lVar18,0);
        local_a0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
        if (((iVar3 < 1) || (iVar5 = FUN_0077133c(&local_90,&local_a0,iVar3), iVar5 == 0)) ||
           (iVar5 = FUN_0076c9b4(lVar18,&local_a0), iVar5 != iVar3)) {
          uVar4 = 0;
        }
        else {
          iVar3 = FUN_00770ae8(param_1);
          uVar4 = (uint)(iVar3 != 0);
        }
        thunk_FUN_007695a4(lVar18);
        return uVar4;
      }
      uVar10 = 0x82;
      uVar12 = 0x15f;
    }
    else {
      uVar10 = 0x8b;
      uVar12 = 0x15a;
    }
    goto LAB_0079b920;
  case 3:
    if (param_4 == 4) {
      lVar18 = FUN_0076e960();
      if (lVar18 == 0) {
        return 0;
      }
      iVar3 = FUN_0079ccac(plVar13,0x2c,1,FUN_0079c6a8,lVar18);
      if (iVar3 == 0) {
        FUN_00777eb4(0xc,0,0x97,"../../third_party/boringssl/src/crypto/x509/asn1_gen.cc",0x1b5);
        thunk_FUN_007695a4(lVar18);
        return 0;
      }
      iVar3 = FUN_00769bf8(lVar18,0);
      local_a0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
      if (((iVar3 < 1) || (iVar5 = FUN_0077133c(&local_90,&local_a0,iVar3), iVar5 == 0)) ||
         (iVar5 = FUN_00769bf8(lVar18,&local_a0), iVar5 != iVar3)) {
        uVar4 = 0;
      }
      else {
        iVar3 = FUN_00770ae8(param_1);
        uVar4 = (uint)(iVar3 != 0);
      }
      thunk_FUN_007695a4(lVar18);
      return uVar4;
    }
    iVar3 = FUN_00771298(&local_90,0);
    if (iVar3 == 0) {
      return 0;
    }
  case 4:
    if (param_4 == 3) {
      local_a0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
      lVar18 = FUN_0079f4d8(plVar13,&local_a0);
      if (lVar18 != 0) {
        iVar3 = FUN_007712e0(&local_90,lVar18,local_a0);
        if (iVar3 == 0) {
          uVar4 = 0;
        }
        else {
          iVar3 = FUN_00770ae8(param_1);
          uVar4 = (uint)(iVar3 != 0);
        }
        FUN_0078cb3c(lVar18);
        return uVar4;
      }
      uVar10 = 0x80;
      uVar12 = 0x1d3;
      goto LAB_0079b920;
    }
    if (param_4 != 1) {
      uVar10 = 0x7c;
      uVar12 = 0x1db;
      goto LAB_0079b920;
    }
LAB_0079c26c:
    sVar16 = strlen((char *)plVar13);
    iVar3 = FUN_007712e0(&local_90,plVar13,sVar16);
    goto joined_r0x0079c284;
  case 5:
    if ((char)*plVar13 == '\0') goto LAB_0079c1cc;
    uVar10 = 0x85;
    uVar12 = 0x145;
    goto LAB_0079b920;
  case 6:
    if (param_4 == 1) {
      lVar18 = FUN_0078dd14(plVar13,0);
      if ((lVar18 != 0) && (*(int *)(lVar18 + 0x14) != 0)) {
        iVar3 = FUN_007712e0(&local_90,*(undefined8 *)(lVar18 + 0x18));
        if (iVar3 == 0) {
          uVar4 = 0;
        }
        else {
          iVar3 = FUN_00770ae8(param_1);
          uVar4 = (uint)(iVar3 != 0);
        }
        FUN_0076c804(lVar18);
        return uVar4;
      }
      uVar10 = 0x86;
      uVar12 = 0x172;
    }
    else {
      uVar10 = 0xa5;
      uVar12 = 0x16d;
    }
    goto LAB_0079b920;
  case 7:
  case 8:
  case 9:
  case 0xb:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x15:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1d:
    goto code_r0x0079c020;
  case 0xc:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x1c:
  case 0x1e:
    if (param_4 == 1) {
      uVar10 = 0x1001;
    }
    else {
      if (param_4 != 2) {
        uVar10 = 0x7f;
        uVar12 = 0x19b;
        goto LAB_0079b920;
      }
      uVar10 = 0x1000;
    }
    local_a0 = (long *)0x0;
    uVar12 = FUN_0076a734(uVar11);
    iVar3 = FUN_0079c74c(&local_a0,plVar13,0xffffffffffffffff,uVar10,uVar12,0,0x10000);
    if (iVar3 < 1) {
      return 0;
    }
    iVar3 = FUN_007712e0(&local_90,local_a0[1],(long)(int)*local_a0);
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      iVar3 = FUN_00770ae8(param_1);
      uVar4 = (uint)(iVar3 != 0);
    }
    FUN_007695a4(local_a0);
    return uVar4;
  case 0x17:
  case 0x18:
    if (param_4 == 1) {
      pcStack_98 = (char *)strlen((char *)plVar13);
      local_a0 = plVar13;
      if (uVar11 == 0x17) {
        iVar3 = FUN_00773968();
      }
      else {
        iVar3 = FUN_007734f8(&local_a0,0,0);
      }
      if (iVar3 != 0) goto LAB_0079c26c;
      uVar10 = 0x8a;
      uVar12 = 0x188;
    }
    else {
      uVar10 = 0xb0;
      uVar12 = 0x17d;
    }
    goto LAB_0079b920;
  }
  if (1 < uVar11 + 0xdffffff0) {
code_r0x0079c020:
    uVar10 = 0x44;
    uVar12 = 0x200;
    goto LAB_0079b920;
  }
  if (pcVar6 == (char *)0x0) goto LAB_0079bed0;
  if (param_3 == 0) {
    uVar10 = 0xaa;
    uVar12 = 0x1e2;
    goto LAB_0079b920;
  }
  lVar18 = FUN_0079b7ac(param_3,plVar13);
  if (lVar18 == 0) {
    FUN_00777eb4(0xc,0,0xaa,"../../third_party/boringssl/src/crypto/x509/asn1_gen.cc",0x1e7);
    return 0;
  }
  lVar8 = FUN_00795280(lVar18);
  if (lVar8 == 0) goto LAB_0079bed0;
  uVar15 = 0;
  while( true ) {
    lVar8 = FUN_007952e0(lVar18,uVar15);
    iVar3 = FUN_0079b8dc(&local_90,*(undefined8 *)(lVar8 + 0x10),param_3,1,param_5 + 1);
    if (iVar3 == 0) {
      return 0;
    }
    uVar9 = FUN_00770d00(&local_90);
    if (0x10000 < uVar9) break;
    uVar15 = uVar15 + 1;
    uVar9 = FUN_00795280(lVar18);
    if (uVar9 <= uVar15) {
LAB_0079bed0:
      if (uVar11 != 0x20000011) {
LAB_0079c1cc:
        uVar4 = FUN_00770ae8(param_1);
        return uVar4;
      }
      iVar3 = FUN_00771eec(&local_90);
joined_r0x0079c284:
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = FUN_00770ae8(param_1);
      return (uint)(iVar3 != 0);
    }
  }
  uVar10 = 0xb1;
  uVar12 = 500;
LAB_0079b920:
  FUN_00777eb4(0xc,0,uVar10,"../../third_party/boringssl/src/crypto/x509/asn1_gen.cc",uVar12);
  return 0;
}


// ===== 0079c41c  FUN_0079c41c =====

bool FUN_0079c41c(undefined8 *param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  size_t __n;
  
  __n = param_1[1];
  sVar3 = strlen(param_2);
  if (__n == sVar3) {
    if (__n == 0) {
      bVar1 = true;
    }
    else {
      iVar2 = memcmp((void *)*param_1,param_2,__n);
      bVar1 = iVar2 == 0;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


// ===== 0079c48c  FUN_0079c48c =====

uint FUN_0079c48c(undefined8 *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  byte local_2c [4];
  undefined1 *local_28;
  undefined8 local_20;
  long lStack_18;
  
  lStack_18 = param_1[1];
  local_20 = *param_1;
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  iVar3 = FUN_007725cc(&local_20,&local_28);
  if ((iVar3 == 0) || ((ulong)local_28 >> 0x1d != 0)) {
    uVar4 = 0x91;
    uVar5 = 0x5d;
    goto LAB_0079c5e4;
  }
  local_2c[0] = 0xaa;
  iVar3 = FUN_0077224c(&local_20,local_2c);
  if (iVar3 == 0) {
    uVar6 = 0x80000000;
    goto LAB_0079c534;
  }
  if (local_2c[0] < 0x50) {
    if (local_2c[0] == 0x41) {
      uVar6 = 0x40000000;
    }
    else {
      if (local_2c[0] != 0x43) {
LAB_0079c560:
        uVar4 = 0x90;
        uVar5 = 0x73;
        goto LAB_0079c5e4;
      }
      uVar6 = 0x80000000;
    }
joined_r0x0079c5b4:
    bVar2 = false;
  }
  else {
    if (local_2c[0] == 0x50) {
      uVar6 = 0xc0000000;
      goto joined_r0x0079c5b4;
    }
    if (local_2c[0] != 0x55) goto LAB_0079c560;
    uVar6 = 0;
    bVar2 = true;
  }
  if (lStack_18 == 0) {
    bVar1 = false;
    if (local_28 == (undefined1 *)0x0) {
      bVar1 = bVar2;
    }
    if (!bVar1) {
LAB_0079c534:
      return uVar6 | (uint)local_28;
    }
    uVar4 = 0x91;
    uVar5 = 0x80;
  }
  else {
    uVar4 = 0x90;
    uVar5 = 0x78;
  }
LAB_0079c5e4:
  FUN_00777eb4(0xc,0,uVar4,"../../third_party/boringssl/src/crypto/x509/asn1_gen.cc",uVar5);
  return 0;
}


// ===== 0079c5fc  FUN_0079c5fc =====

ulong FUN_0079c5fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  int param_5,undefined4 param_6,int param_7)

{
  int iVar1;
  ulong uVar2;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  uVar2 = FUN_00771098(param_1,&local_70,param_4);
  if (((int)uVar2 != 0) &&
     (((param_5 == 0 || (uVar2 = FUN_00771298(&local_70,0), (int)uVar2 != 0)) &&
      (uVar2 = FUN_0079b8dc(&local_70,param_2,param_3,param_6,param_7 + 1), (int)uVar2 != 0)))) {
    iVar1 = FUN_00770ae8(param_1);
    uVar2 = (ulong)(iVar1 != 0);
  }
  return uVar2;
}


// ===== 0079c6a8  FUN_0079c6a8 =====

bool FUN_0079c6a8(undefined8 param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 local_30;
  long local_28;
  undefined1 *local_8;
  
  local_8 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = param_1;
  local_28 = param_2;
  iVar2 = FUN_007725cc(&local_30,&local_8);
  if (((iVar2 == 0) || (local_28 != 0)) || ((undefined1 *)0x100 < local_8)) {
    FUN_00777eb4(0xc,0,0x91,"../../third_party/boringssl/src/crypto/x509/asn1_gen.cc",0x214);
    bVar1 = false;
  }
  else {
    iVar2 = FUN_0076a09c(param_3,local_8,1);
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}


// ===== 0079c73c  FUN_0079c73c =====

void FUN_0079c73c(void)

{
  FUN_0079c74c();
  return;
}


// ===== 0079c74c  FUN_0079c74c =====

undefined4
FUN_0079c74c(long *param_1,char *param_2,size_t param_3,uint param_4,ulong param_5,ulong param_6,
            ulong param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  size_t sVar4;
  char *pcVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  undefined4 uVar11;
  ulong uVar12;
  code *pcVar13;
  code *pcVar14;
  ulong uVar15;
  undefined4 local_b4;
  long local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  char *local_70;
  size_t local_68;
  
  if (param_3 == 0xffffffffffffffff) {
    param_3 = strlen(param_2);
  }
  uVar8 = param_4 - 0x1000;
  uVar9 = 0x2806;
  if (param_5 != 0) {
    uVar9 = param_5;
  }
  if ((uVar8 < 5) && ((0x17U >> (ulong)(param_4 & 0x1f) & 1) != 0)) {
    pcVar14 = (code *)(&PTR_FUN_00d36858)[uVar8];
    uVar11 = *(undefined4 *)(&DAT_0020ef5c + (ulong)uVar8 * 4);
    local_70 = param_2;
    local_68 = param_3;
    if (param_3 == 0) {
      uVar15 = 0;
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      uVar15 = 0;
      do {
        local_a0 = (undefined1 *)CONCAT44(local_a0._4_4_,0xaaaaaaaa);
        iVar6 = (*pcVar14)(&local_70,&local_a0);
        puVar3 = local_a0;
        if (iVar6 == 0) {
          FUN_00777eb4(0xc,0,uVar11,"../../third_party/boringssl/src/crypto/asn1/a_mbstr.cc",0x5c);
          return 0xffffffff;
        }
        uVar8 = (uint)local_a0;
        if ((uVar12 == 0) && ((uint)local_a0 == 0xfeff && (param_4 == 0x1002 || param_4 == 0x1004)))
        {
          FUN_00777eb4(0xc,0,0x7e,"../../third_party/boringssl/src/crypto/asn1/a_mbstr.cc",0x67);
          return 0xffffffff;
        }
        if (((uint)uVar9 >> 1 & 1) != 0) {
          if ((uint)local_a0 < 0x80) {
            iVar6 = FUN_0078d054((ulong)local_a0 & 0xffffffff);
            if ((iVar6 == 0) &&
               (((0x3d < uVar8 || ((0x2400fb8100000000U >> ((ulong)puVar3 & 0x3f) & 1) == 0)) &&
                (uVar8 != 0x3f)))) {
              uVar9 = uVar9 & 0xfffffffffffffffd;
            }
          }
          else {
            uVar9 = uVar9 & 0xfffffffffffffffd;
          }
        }
        uVar1 = uVar9 & 0xffffffffffffffef;
        if (((uint)(0x7f < (uint)local_a0) & (uint)uVar9 >> 4) == 0) {
          uVar1 = uVar9;
        }
        uVar2 = uVar1 & 0xfffffffffffffffb;
        if (((uint)(0xff < (uint)local_a0) & (uint)uVar1 >> 2) == 0) {
          uVar2 = uVar1;
        }
        uVar9 = uVar2 & 0xfffffffffffff7ff;
        if (((uint)(((ulong)local_a0 & 0xffff0000) != 0) & (uint)uVar2 >> 0xb) == 0) {
          uVar9 = uVar2;
        }
        if (uVar9 == 0) {
          FUN_00777eb4(0xc,0,0x7e,"../../third_party/boringssl/src/crypto/asn1/a_mbstr.cc",0x79);
          return 0xffffffff;
        }
        uVar12 = uVar12 + 1;
        lVar7 = FUN_00773cf4();
        if ((0 < (long)param_7) && (param_7 < uVar12)) {
          FUN_00777eb4(0xc,0,0xad,"../../third_party/boringssl/src/crypto/asn1/a_mbstr.cc",0x80);
          FUN_007781a4("maxsize=%zu",param_7);
          return 0xffffffff;
        }
        uVar15 = lVar7 + uVar15;
      } while (local_68 != 0);
    }
    if (((long)param_6 < 1) || (param_6 <= uVar12)) {
      uVar8 = (uint)uVar9;
      pcVar13 = (code *)PTR_FUN_00d52720;
      if ((uVar8 >> 1 & 1) == 0) {
        if ((uVar8 >> 4 & 1) == 0) {
          if ((uVar8 >> 2 & 1) == 0) {
            if ((uVar8 >> 0xb & 1) == 0) {
              if ((uVar8 >> 8 & 1) == 0) {
                if ((uVar8 >> 0xd & 1) == 0) {
                  FUN_00777eb4(0xc,0,0x7e,"../../third_party/boringssl/src/crypto/asn1/a_mbstr.cc",
                               0xa7);
                  return 0xffffffff;
                }
                uVar8 = 0x1000;
                uVar11 = 0xc;
                uVar12 = uVar15;
                pcVar13 = (code *)PTR_FUN_00d52718;
              }
              else {
                uVar12 = uVar12 << 2;
                uVar8 = 0x1004;
                uVar11 = 0x1c;
                pcVar13 = (code *)PTR_FUN_00d52730;
              }
            }
            else {
              uVar12 = uVar12 << 1;
              uVar8 = 0x1002;
              uVar11 = 0x1e;
              pcVar13 = (code *)PTR_FUN_00d52728;
            }
          }
          else {
            uVar8 = 0x1001;
            uVar11 = 0x14;
          }
        }
        else {
          uVar8 = 0x1001;
          uVar11 = 0x16;
        }
      }
      else {
        uVar8 = 0x1001;
        uVar11 = 0x13;
      }
      if (param_1 == (long *)0x0) {
        return uVar11;
      }
      lVar10 = *param_1;
      lVar7 = lVar10;
      if ((lVar10 != 0) || (lVar7 = FUN_00769628(uVar11), lVar7 != 0)) {
        puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
        local_90 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
        local_a0 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_00770970(&local_a0);
        local_b0 = 0;
        local_a8 = 0;
        if (param_4 == uVar8) {
          iVar6 = FUN_007693d8(lVar7,param_2,param_3);
          if (iVar6 != 0) {
            *(undefined4 *)(lVar7 + 4) = uVar11;
            *param_1 = lVar7;
            return uVar11;
          }
        }
        else {
          iVar6 = FUN_00770984(&local_a0,uVar12 + 1);
          sVar4 = param_3;
          pcVar5 = param_2;
          if (iVar6 != 0) {
            do {
              local_70 = pcVar5;
              local_68 = sVar4;
              if (local_68 == 0) {
                iVar6 = FUN_00771298(&local_a0,0);
                if (((iVar6 != 0) &&
                    (iVar6 = FUN_00770a30(&local_a0,&local_a8,&local_b0), iVar6 != 0)) &&
                   (0xffffffff80000000 < local_b0 - 0x80000000U)) {
                  *(undefined4 *)(lVar7 + 4) = uVar11;
                  FUN_007695e4(lVar7,local_a8,(int)local_b0 + -1);
                  *param_1 = lVar7;
                  return uVar11;
                }
                FUN_00777eb4(0xc,0,0x44,"../../third_party/boringssl/src/crypto/asn1/a_mbstr.cc",
                             0xd9);
                FUN_0078cb3c(local_a8);
                goto LAB_0079cbf4;
              }
              local_b4 = 0xaaaaaaaa;
              iVar6 = (*pcVar14)(&local_70,&local_b4);
            } while ((iVar6 != 0) &&
                    (iVar6 = (*pcVar13)(&local_a0,local_b4), sVar4 = local_68, pcVar5 = local_70,
                    iVar6 != 0));
            FUN_00777eb4(0xc,0,0x44,"../../third_party/boringssl/src/crypto/asn1/a_mbstr.cc",0xcf);
          }
        }
LAB_0079cbf4:
        if (lVar10 == 0) {
          FUN_007695a4(lVar7);
        }
        FUN_00770a10(&local_a0);
      }
    }
    else {
      FUN_00777eb4(0xc,0,0xae,"../../third_party/boringssl/src/crypto/asn1/a_mbstr.cc",0x87);
      FUN_007781a4("minsize=%zu",param_6);
    }
  }
  else {
    FUN_00777eb4(0xc,0,0xb6,"../../third_party/boringssl/src/crypto/asn1/a_mbstr.cc",0x51);
  }
  return 0xffffffff;
}


// ===== 0079cc34  FUN_0079cc34 =====

void FUN_0079cc34(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0078c9d4(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  return;
}


// ===== 0079cc64  FUN_0079cc64 =====

long FUN_0079cc64(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  local_20 = param_2;
  lVar1 = FUN_0078e224(*(undefined8 *)(param_1 + 8),&local_20,FUN_0079cdc4,FUN_0079cdd4);
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 8);
  }
  return lVar1;
}


// ===== 0079ccac  FUN_0079ccac =====

undefined8 FUN_0079ccac(char *param_1,uint param_2,int param_3,code *param_4,undefined8 param_5)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  if (param_1 == (char *)0x0) {
    FUN_00777eb4(0xd,0,100,"../../third_party/boringssl/src/crypto/conf/conf.cc",0x24d);
    uVar5 = 0;
  }
  else {
    do {
      if (param_3 != 0) {
        cVar1 = *param_1;
        while ((cVar1 != '\0' && (iVar2 = FUN_0078d08c(), iVar2 != 0))) {
          param_1 = param_1 + 1;
          cVar1 = *param_1;
        }
      }
      pcVar3 = strchr(param_1,param_2 & 0xff);
      if ((pcVar3 == param_1) || (*param_1 == '\0')) {
        param_1 = (char *)0x0;
        pcVar6 = (char *)0x0;
      }
      else {
        if (pcVar3 == (char *)0x0) {
          sVar4 = strlen(param_1);
          pcVar6 = param_1 + sVar4;
          if (param_3 == 0) goto LAB_0079cd58;
LAB_0079cd48:
          do {
            pcVar6 = pcVar6 + -1;
            iVar2 = FUN_0078d08c(*pcVar6);
          } while (iVar2 != 0);
        }
        else {
          pcVar6 = pcVar3;
          if (param_3 != 0) goto LAB_0079cd48;
LAB_0079cd58:
          pcVar6 = pcVar6 + -1;
        }
        pcVar6 = pcVar6 + (1 - (long)param_1);
      }
      uVar5 = (*param_4)(param_1,pcVar6,param_5);
      if ((int)uVar5 < 1) {
        return uVar5;
      }
      param_1 = pcVar3 + 1;
    } while (pcVar3 != (char *)0x0);
    uVar5 = 1;
  }
  return uVar5;
}


// ===== 0079cdc4  FUN_0079cdc4 =====

void FUN_0079cdc4(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0079cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}


// ===== 0079cdd4  FUN_0079cdd4 =====

void FUN_0079cdd4(code *UNRECOVERED_JUMPTABLE,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0079cde4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,param_3);
  return;
}


// ===== 0079cde8  FUN_0079cde8 =====

undefined8 FUN_0079cde8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_98 = param_3;
  lVar2 = FUN_00795280(param_2);
  if (lVar2 != 0) {
    uVar5 = 0;
    do {
      uVar3 = FUN_007952e0(param_2,uVar5);
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
      local_60 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_0076c51c(&local_90,0x50,uVar3);
      FUN_0079e788(0,&local_90,&local_98);
      uVar5 = uVar5 + 1;
      uVar4 = FUN_00795280(param_2);
      param_3 = local_98;
    } while (uVar5 < uVar4);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_3;
}


// ===== 0079ceac  FUN_0079ceac =====

long FUN_0079ceac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar1 = FUN_00795214();
  if ((lVar1 != 0) && (lVar2 = FUN_00795280(param_3), lVar2 != 0)) {
    uVar6 = 0;
    do {
      puVar3 = (undefined8 *)FUN_007952e0(param_3,uVar6);
      lVar2 = puVar3[2];
      if (lVar2 == 0) {
        lVar2 = puVar3[1];
      }
      lVar2 = FUN_0078dd14(lVar2,0);
      if ((lVar2 == 0) || (lVar4 = FUN_00795868(lVar1,lVar2), lVar4 == 0)) {
        FUN_0076c804(lVar2);
        FUN_00795370(lVar1,FUN_00796e84,PTR_FUN_00d526e0);
        FUN_00777eb4(0x14,0,0x81,"../../third_party/boringssl/src/crypto/x509/v3_extku.cc",0x5a);
        FUN_00777f98(6,"section:",*puVar3,",name:",puVar3[1],",value:",puVar3[2]);
        return 0;
      }
      uVar6 = uVar6 + 1;
      uVar5 = FUN_00795280(param_3);
    } while (uVar6 < uVar5);
  }
  return lVar1;
}


// ===== 0079cfbc  FUN_0079cfbc =====

bool FUN_0079cfbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_0079a5f0(param_3,&DAT_001cb88f,param_4,&DAT_001b3348);
  if (iVar2 < 1) {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_0079d80c(param_3,param_2);
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}


// ===== 0079d028  thunk_FUN_0076e9a8 =====

void thunk_FUN_0076e9a8(void)

{
  FUN_0076e9a8();
  return;
}


// ===== 0079d030  FUN_0079d030 =====

undefined8 FUN_0079d030(void)

{
  return 1;
}


// ===== 0079d03c  FUN_0079d03c =====

int FUN_0079d03c(long param_1,int *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *__s;
  size_t sVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  undefined4 uVar10;
  byte *local_60;
  ulong local_58 [2];
  char local_44;
  char local_43;
  
  iVar3 = param_2[1];
  uVar5 = (uint)param_3;
  if ((uVar5 >> 6 & 1) == 0) {
    iVar2 = 0;
  }
  else {
    __s = (char *)FUN_0079da80(iVar3);
    sVar6 = strlen(__s);
    if (param_1 != 0) {
      iVar2 = FUN_0076f9a8(param_1,__s,sVar6 & 0xffffffff);
      if (iVar2 != (int)sVar6) {
        return -1;
      }
      iVar2 = FUN_0076f9a8(param_1,&DAT_001ca603,1);
      if (iVar2 != 1) {
        return -1;
      }
    }
    iVar2 = (int)sVar6 + 1;
  }
  if ((uVar5 >> 7 & 1) == 0) {
    if ((uVar5 >> 5 & 1) == 0) {
      uVar1 = iVar3 - 0xc;
      if ((uVar1 < 0x13) && ((0x55dc1U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
        uVar10 = *(undefined4 *)(&DAT_0020ef84 + (ulong)uVar1 * 4);
        goto LAB_0079d104;
      }
      if ((uVar5 >> 8 & 1) != 0) goto LAB_0079d1a8;
    }
    uVar10 = 0x1001;
LAB_0079d104:
    local_58[0] = local_58[0] & 0xffffffffffffff00;
    iVar3 = FUN_0079d320(*(undefined8 *)(param_2 + 2),*param_2,uVar10,param_3,local_58,0);
    if (iVar3 < 0) {
      return -1;
    }
    iVar4 = iVar3 + iVar2;
    if ((char)local_58[0] != '\0') {
      iVar4 = iVar3 + iVar2 + 2;
    }
    if (param_1 == 0) {
      return iVar4;
    }
    if (((char)local_58[0] != '\0') && (iVar3 = FUN_0076f9a8(param_1,&DAT_001d6255,1), iVar3 != 1))
    {
      return -1;
    }
    iVar3 = FUN_0079d320(*(undefined8 *)(param_2 + 2),*param_2,uVar10,param_3,0,param_1);
    if (iVar3 < 0) {
      return -1;
    }
    if ((char)local_58[0] != '\0') {
      iVar3 = FUN_0076f9a8(param_1,&DAT_001d6255,1);
      if (iVar3 != 1) {
        return -1;
      }
      return iVar4;
    }
    return iVar4;
  }
LAB_0079d1a8:
  if (param_1 == 0) {
    if ((uVar5 >> 9 & 1) != 0) goto LAB_0079d264;
    iVar3 = *param_2;
  }
  else {
    iVar3 = FUN_0076f9a8(param_1,&DAT_001a9504,1);
    if (iVar3 != 1) {
      return -1;
    }
    if ((uVar5 >> 9 & 1) != 0) {
LAB_0079d264:
      local_58[0] = 0;
      local_58[1] = 0;
      FUN_0076baf8(local_58,param_2);
      local_60 = (byte *)0x0;
      uVar5 = FUN_0076e9c8(local_58,&local_60);
      if ((int)uVar5 < 0) {
        return -1;
      }
      if ((param_1 != 0) && (uVar5 != 0)) {
        uVar9 = (ulong)uVar5;
        pbVar7 = local_60;
        do {
          local_43 = "0123456789ABCDEF"[(ulong)*pbVar7 & 0xf];
          local_44 = "0123456789ABCDEF"[*pbVar7 >> 4];
          iVar3 = FUN_0076f9a8(param_1,&local_44,2);
          if (iVar3 != 2) {
            iVar3 = -1;
            goto LAB_0079d2e4;
          }
          uVar9 = uVar9 - 1;
          pbVar7 = pbVar7 + 1;
        } while (uVar9 != 0);
      }
      iVar3 = uVar5 << 1;
LAB_0079d2e4:
      FUN_0078cb3c(local_60);
      uVar5 = 0xffffffff;
      if (iVar3 != -1 && iVar3 + 1 < 0 == SCARRY4(iVar3,1)) {
        uVar5 = iVar3 + 1;
      }
      goto joined_r0x0079d2f8;
    }
    iVar3 = *param_2;
    if (iVar3 == 0) {
      return iVar2 + 1;
    }
    lVar8 = (long)iVar3;
    pbVar7 = *(byte **)(param_2 + 2);
    do {
      local_58[0] = CONCAT71(CONCAT61(local_58[0]._2_6_,"0123456789ABCDEF"[(ulong)*pbVar7 & 0xf]),
                             "0123456789ABCDEF"[*pbVar7 >> 4]);
      iVar4 = FUN_0076f9a8(param_1,local_58,2);
      if (iVar4 != 2) {
        return -1;
      }
      lVar8 = lVar8 + -1;
      pbVar7 = pbVar7 + 1;
    } while (lVar8 != 0);
  }
  if (iVar3 << 1 < 0) {
    return -1;
  }
  uVar5 = iVar3 << 1 | 1;
joined_r0x0079d2f8:
  if ((int)uVar5 < 0) {
    return -1;
  }
  return uVar5 + iVar2;
}


// ===== 0079d320  FUN_0079d320 =====

int FUN_0079d320(long param_1,int param_2,uint param_3,undefined8 param_4,undefined8 param_5,
                undefined8 param_6)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  code *pcVar8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined4 local_7c;
  undefined2 local_78;
  undefined4 local_74;
  long local_70;
  long local_68;
  
  uVar2 = param_3 - 0x1000;
  iVar7 = -1;
  if ((uVar2 < 5) && ((0x17U >> (ulong)(param_3 & 0x1f) & 1) != 0)) {
    local_68 = (long)param_2;
    uVar1 = *(undefined4 *)(&DAT_0020ef70 + (ulong)uVar2 * 4);
    pcVar8 = (code *)(&PTR_FUN_00d36a68)[uVar2];
    if (param_2 != 0) {
      iVar7 = 0;
      local_70 = param_1;
      do {
        while( true ) {
          local_74 = 0xaaaaaaaa;
          bVar4 = local_70 == param_1;
          iVar5 = (*pcVar8)(&local_70,&local_74);
          lVar3 = local_68;
          if (iVar5 == 0) {
            FUN_00777eb4(0xc,0,uVar1,"../../third_party/boringssl/src/crypto/asn1/a_strex.cc",0x80);
            return -1;
          }
          if (((uint)param_4 >> 4 & 1) == 0) break;
          local_78 = 0xaaaa;
          local_7c = 0xaaaaaaaa;
          puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
          local_a0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
          local_b0 = &DAT_aaaaaaaaaaaaaaaa;
          FUN_007709ec(&local_b0,&local_7c,6);
          iVar5 = FUN_00773d1c(&local_b0,local_74);
          if (iVar5 == 0) {
            FUN_00777eb4(0xc,0,0x44,"../../third_party/boringssl/src/crypto/asn1/a_strex.cc",0x89);
            return 1;
          }
          lVar6 = FUN_00770d00(&local_b0);
          if (lVar6 != 0) {
            iVar5 = FUN_0079d8c4((undefined1)local_7c,param_4,param_5,param_6,bVar4,
                                 lVar3 == 0 && lVar6 == 1);
            if (iVar5 < 0) {
              return -1;
            }
            iVar7 = iVar5 + iVar7;
            if (lVar6 != 1) {
              iVar5 = FUN_0079d8c4(local_7c._1_1_,param_4,param_5,param_6,0,lVar3 == 0 && lVar6 == 2
                                  );
              if (iVar5 < 0) {
                return -1;
              }
              iVar7 = iVar5 + iVar7;
              if (lVar6 != 2) {
                iVar5 = FUN_0079d8c4(local_7c._2_1_,param_4,param_5,param_6,0,
                                     lVar3 == 0 && lVar6 == 3);
                if (iVar5 < 0) {
                  return -1;
                }
                iVar7 = iVar5 + iVar7;
                if (lVar6 != 3) {
                  iVar5 = FUN_0079d8c4(local_7c._3_1_,param_4,param_5,param_6,0,
                                       lVar3 == 0 && lVar6 == 4);
                  if (iVar5 < 0) {
                    return -1;
                  }
                  iVar7 = iVar5 + iVar7;
                  if (lVar6 != 4) {
                    iVar5 = FUN_0079d8c4((undefined1)local_78,param_4,param_5,param_6,0,
                                         lVar3 == 0 && lVar6 == 5);
                    if (iVar5 < 0) {
                      return -1;
                    }
                    iVar7 = iVar5 + iVar7;
                    if (lVar6 != 5) {
                      iVar5 = FUN_0079d8c4(local_78._1_1_,param_4,param_5,param_6,0,
                                           lVar3 == 0 && lVar6 == 6);
                      if (iVar5 < 0) {
                        return -1;
                      }
                      if (lVar6 != 6) {
                    /* WARNING: Does not return */
                        pcVar8 = (code *)SoftwareBreakpoint(0x5512,0x79d610);
                        (*pcVar8)();
                      }
                      iVar7 = iVar5 + iVar7;
                    }
                  }
                }
              }
            }
          }
          if (local_68 == 0) {
            return iVar7;
          }
        }
        iVar5 = FUN_0079d8c4(local_74,param_4,param_5,param_6,bVar4,local_68 == 0);
        if (iVar5 < 0) {
          return -1;
        }
        iVar7 = iVar5 + iVar7;
      } while (local_68 != 0);
      return iVar7;
    }
    iVar7 = 0;
  }
  return iVar7;
}


// ===== 0079d610  FUN_0079d610 =====

ulong FUN_0079d610(undefined8 *param_1,int *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulong *local_8;
  
  if (param_2 != (int *)0x0) {
    uVar1 = param_2[1] - 0xc;
    if ((uVar1 < 0x13) && ((0x55dc1U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
      local_30 = 0;
      local_8 = &local_38;
      local_38 = 0xaaaaaaaa00000000;
      local_28 = 0;
      uVar2 = FUN_0079c73c(&local_8,*(undefined8 *)(param_2 + 2),(long)*param_2,
                           *(undefined4 *)(&DAT_0020ef84 + (ulong)uVar1 * 4),0x2000);
      if (-1 < (int)uVar2) {
        uVar2 = local_38 & 0xffffffff;
        *param_1 = local_30;
      }
    }
    else {
      FUN_00777eb4(0xc,0,0xb9,"../../third_party/boringssl/src/crypto/asn1/a_strex.cc",0x149);
      uVar2 = 0xffffffff;
    }
    return uVar2;
  }
  return 0xffffffff;
}


// ===== 0079d6dc  FUN_0079d6dc =====

void FUN_0079d6dc(undefined8 param_1,int *param_2)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  byte bVar10;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_2 == (int *)0x0) {
LAB_0079d7d4:
    uVar4 = 0;
  }
  else {
    iVar3 = *param_2;
    if (0 < iVar3) {
      lVar9 = *(long *)(param_2 + 2);
      lVar8 = 0;
      uVar6 = 0;
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      local_a0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
      local_b0 = &DAT_aaaaaaaaaaaaaaaa;
      do {
        bVar7 = *(byte *)(lVar9 + lVar8);
        if (bVar7 < 0x7f) {
          bVar10 = bVar7;
          if (bVar7 != 10) {
            bVar10 = 0x2e;
          }
          bVar1 = bVar7;
          if (bVar7 != 0xd) {
            bVar1 = bVar10;
          }
          if (bVar7 < 0x20) {
            bVar7 = bVar1;
          }
        }
        else {
          bVar7 = 0x2e;
        }
        uVar5 = (uint)uVar6;
        *(byte *)((long)&local_b0 + uVar6) = bVar7;
        uVar6 = (ulong)(uVar5 + 1);
        if (0x4e < uVar5) {
          iVar3 = FUN_0076f9a8(param_1,&local_b0);
          if (iVar3 < 1) goto LAB_0079d7d4;
          iVar3 = *param_2;
          uVar6 = 0;
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < iVar3);
      if (((int)uVar6 != 0) && (iVar3 = FUN_0076f9a8(param_1,&local_b0), iVar3 < 1))
      goto LAB_0079d7d4;
    }
    uVar4 = 1;
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


// ===== 0079d80c  FUN_0079d80c =====

bool FUN_0079d80c(undefined8 param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined8 local_30;
  long lStack_28;
  
  local_30 = *(undefined8 *)(param_2 + 2);
  lStack_28 = (long)*param_2;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  iVar3 = FUN_007734f8(&local_30,&local_70,0);
  if (iVar3 == 0) {
    FUN_0076fb34(param_1,"Bad time value");
    bVar2 = false;
  }
  else {
    if (0xb < (uint)local_60) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(0x5512,0x79d8c4);
      (*pcVar1)();
    }
    iVar3 = FUN_0079a5f0(param_1,"%s %2d %02d:%02d:%02d %d GMT",
                         (&PTR_DAT_00d36a08)[(ulong)local_60 & 0xffffffff],uStack_68._4_4_,
                         (ulong)uStack_68 & 0xffffffff,local_70._4_4_,(ulong)local_70 & 0xffffffff,
                         local_60._4_4_ + 0x76c);
    bVar2 = 0 < iVar3;
  }
  return bVar2;
}


// ===== 0079d8c4  FUN_0079d8c4 =====

ulong FUN_0079d8c4(uint param_1,uint param_2,undefined1 *param_3,long param_4,int param_5,
                  int param_6)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  size_t sVar4;
  char *__format;
  ulong uVar5;
  undefined1 local_54 [4];
  undefined1 *local_50;
  undefined1 *puStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = (ulong)param_1;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_54[0] = (undefined1)param_1;
  if (param_1 < 0x10000) {
    if (param_1 < 0x100) {
      if ((param_1 < 0x80) || ((param_2 >> 2 & 1) == 0)) {
        uVar3 = param_1 & 0xff;
        if (((param_2 >> 1 & 1) == 0) || ((0x1f < uVar3 && (uVar3 != 0x7f)))) {
          if ((param_2 & 1) == 0) {
            if ((param_1 == 0x5c) && ((param_2 & 0xe) != 0)) {
              __format = "\\%c";
              uVar5 = 0x5c;
              goto LAB_0079d940;
            }
          }
          else {
            if ((uVar3 == 0x5c) || (uVar3 == 0x22)) {
LAB_0079da18:
              __format = "\\%c";
              goto LAB_0079d940;
            }
            if (((((param_1 & 0xfd) == 0x3c) ||
                 ((uVar3 < 0x3c && ((0x800180000000000U >> ((ulong)uVar3 & 0x3f) & 1) != 0)))) ||
                ((param_5 != 0 && ((uVar3 == 0x20 || (uVar3 == 0x23)))))) ||
               ((param_1 == 0x20 && (param_6 != 0)))) {
              if ((param_2 >> 3 & 1) == 0) goto LAB_0079da18;
              if (param_3 != (undefined1 *)0x0) {
                *param_3 = 1;
              }
            }
          }
          if (param_4 == 0) {
            sVar4 = 1;
          }
          else {
            uVar3 = FUN_0076f9a8(param_4,local_54,1);
            if (uVar3 != 1) {
              uVar3 = 0xffffffff;
            }
            sVar4 = (size_t)uVar3;
          }
          goto LAB_0079d96c;
        }
      }
      __format = "\\%02X";
    }
    else {
      __format = "\\U%04X";
    }
  }
  else {
    __format = "\\W%08X";
  }
LAB_0079d940:
  snprintf((char *)&local_50,0x10,__format,uVar5);
  sVar4 = strlen((char *)&local_50);
  if (param_4 != 0) {
    uVar2 = FUN_0076f9a8(param_4,&local_50,sVar4 & 0xffffffff);
    uVar3 = (uint)sVar4;
    if (uVar2 != uVar3) {
      uVar3 = 0xffffffff;
    }
    sVar4 = (size_t)uVar3;
  }
LAB_0079d96c:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return sVar4 & 0xffffffff;
}


// ===== 0079da80  FUN_0079da80 =====

char * FUN_0079da80(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 10;
  if ((param_1 & 0xfffffff7) != 0x102) {
    uVar1 = param_1;
  }
  if (0x1e < uVar1) {
    return "(unknown)";
  }
  return &DAT_0020efd0 + *(int *)(&DAT_0020efd0 + (ulong)uVar1 * 4);
}


// ===== 0079dac0  FUN_0079dac0 =====

void FUN_0079dac0(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  long *plVar5;
  
  lVar2 = FUN_0076d03c(param_2);
  piVar4 = *(int **)(param_1 + 0x60);
  lVar3 = *(long *)(piVar4 + 2);
  if (lVar3 != 0) {
    if (lVar2 != *piVar4) {
      plVar5 = (long *)(piVar4 + 8);
      do {
        lVar3 = *plVar5;
        if (lVar3 == 0) goto LAB_0079db28;
        plVar1 = plVar5 + -1;
        plVar5 = plVar5 + 3;
      } while (lVar2 != (int)*plVar1);
    }
    FUN_0078ce8c(lVar3);
    return;
  }
LAB_0079db28:
  FUN_0079e9b4(param_1,param_2);
  return;
}


// ===== 0079db40  FUN_0079db40 =====

undefined8 FUN_0079db40(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 local_8;
  
  local_8 = param_3;
  FUN_0079ecfc("Require Explicit Policy",*param_2,&local_8);
  FUN_0079ecfc("Inhibit Policy Mapping",param_2[1],&local_8);
  return local_8;
}


// ===== 0079db94  FUN_0079db94 =====

long * FUN_0079db94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  char *__s1;
  
  plVar2 = (long *)FUN_0076e4fc(&DAT_00d36c00);
  if (plVar2 != (long *)0x0) {
    lVar3 = FUN_00795280(param_3);
    if (lVar3 != 0) {
      uVar6 = 0;
      do {
        puVar4 = (undefined8 *)FUN_007952e0(param_3,uVar6);
        __s1 = (char *)puVar4[1];
        iVar1 = strcmp(__s1,"requireExplicitPolicy");
        if (iVar1 == 0) {
          iVar1 = FUN_0079ef30(puVar4,plVar2);
        }
        else {
          iVar1 = strcmp(__s1,"inhibitPolicyMapping");
          if (iVar1 != 0) {
            FUN_00777eb4(0x14,0,0x7b,"../../third_party/boringssl/src/crypto/x509/v3_pcons.cc",0x58)
            ;
            FUN_00777f98(6,"section:",*puVar4,",name:",puVar4[1],",value:",puVar4[2]);
            goto LAB_0079dcc8;
          }
          iVar1 = FUN_0079ef30(puVar4,plVar2 + 1);
        }
        if (iVar1 == 0) goto LAB_0079dcc8;
        uVar6 = uVar6 + 1;
        uVar5 = FUN_00795280(param_3);
      } while (uVar6 < uVar5);
    }
    if ((plVar2[1] == 0) && (*plVar2 == 0)) {
      FUN_00777eb4(0x14,0,0x75,"../../third_party/boringssl/src/crypto/x509/v3_pcons.cc",0x5e);
LAB_0079dcc8:
      FUN_0076e060(plVar2,&DAT_00d36c00);
      plVar2 = (long *)0x0;
    }
  }
  return plVar2;
}


// ===== 0079dcfc  FUN_0079dcfc =====

void FUN_0079dcfc(undefined8 param_1)

{
  FUN_0076e060(param_1,&DAT_00d36c00);
  return;
}


// ===== 0079dd0c  FUN_0079dd0c =====

undefined8 FUN_0079dd0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 local_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_f8 = param_3;
  lVar2 = FUN_00795280(param_2);
  if (lVar2 != 0) {
    uVar5 = 0;
    do {
      puVar3 = (undefined8 *)FUN_007952e0(param_2,uVar5);
      puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
      local_f0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
      local_d0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
      local_b0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_0076c51c(&puStack_a0,0x50,*puVar3);
      FUN_0076c51c(&local_f0,0x50,puVar3[1]);
      FUN_0079e788(&puStack_a0,&local_f0,&local_f8);
      uVar5 = uVar5 + 1;
      uVar4 = FUN_00795280(param_2);
      param_3 = local_f8;
    } while (uVar5 < uVar4);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_3;
}


// ===== 0079ddf8  FUN_0079ddf8 =====

long FUN_0079ddf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  lVar1 = FUN_00795214();
  if ((lVar1 != 0) && (lVar2 = FUN_00795280(param_3), lVar2 != 0)) {
    uVar7 = 0;
    do {
      puVar3 = (undefined8 *)FUN_007952e0(param_3,uVar7);
      if ((puVar3[2] == 0) || (puVar3[1] == 0)) {
        uVar6 = 0x56;
LAB_0079df04:
        FUN_00777eb4(0x14,0,0x81,"../../third_party/boringssl/src/crypto/x509/v3_pmaps.cc",uVar6);
        FUN_00777f98(6,"section:",*puVar3,",name:",puVar3[1],",value:",puVar3[2]);
code_r0x0079df34:
        FUN_00795370(lVar1,FUN_0079df88,FUN_0079df78);
        return 0;
      }
      plVar4 = (long *)FUN_0076e4fc(&DAT_00d36d90);
      if ((plVar4 == (long *)0x0) || (lVar2 = FUN_00795868(lVar1,plVar4), lVar2 == 0)) {
        FUN_0076e060(plVar4,&DAT_00d36d90);
        goto code_r0x0079df34;
      }
      lVar2 = FUN_0078dd14(puVar3[1],0);
      *plVar4 = lVar2;
      lVar2 = FUN_0078dd14(puVar3[2],0);
      plVar4[1] = lVar2;
      if ((*plVar4 == 0) || (lVar2 == 0)) {
        uVar6 = 100;
        goto LAB_0079df04;
      }
      uVar7 = uVar7 + 1;
      uVar5 = FUN_00795280(param_3);
    } while (uVar7 < uVar5);
  }
  return lVar1;
}


// ===== 0079df68  FUN_0079df68 =====

void FUN_0079df68(void)

{
  FUN_0076e4fc(&DAT_00d36d90);
  return;
}


// ===== 0079df78  FUN_0079df78 =====

void FUN_0079df78(undefined8 param_1)

{
  FUN_0076e060(param_1,&DAT_00d36d90);
  return;
}


// ===== 0079df88  FUN_0079df88 =====

void FUN_0079df88(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0079df94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}


// ===== 0079df98  FUN_0079df98 =====

ulong FUN_0079df98(long param_1,undefined8 param_2,uint param_3,ulong param_4)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 **__s;
  size_t sVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  undefined *local_f8;
  undefined *local_f0;
  int local_e4;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (param_4 == 0) {
    if (*(long *)(lVar3 + 0x28) == local_68) {
      uVar13 = FUN_0079e38c(param_1,param_2,param_3);
      return uVar13;
    }
    goto LAB_0079e388;
  }
  uVar16 = param_3;
  if (0 < (int)param_3) {
    do {
      if ((param_1 != 0) && (iVar5 = FUN_0076f9a8(param_1,&DAT_001d5e07,1), iVar5 != 1))
      goto LAB_0079e01c;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  param_3 = param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU);
  uVar18 = 0xffffffff;
  uVar13 = (param_4 & 0xf0000) - 0x10000;
  uVar14 = uVar13 >> 0x10;
  if (uVar14 < 2) {
    if (uVar14 == 0) {
      iVar5 = 1;
      local_f8 = &DAT_001ea264;
      local_f0 = &DAT_001ce25a;
      local_e4 = 1;
      uVar16 = 0;
    }
    else {
      if (uVar14 != 1) goto LAB_0079e34c;
      local_f8 = &DAT_001e1644;
LAB_0079e134:
      local_e4 = 3;
      local_f0 = &DAT_001bffae;
      iVar5 = 2;
      uVar16 = 0;
    }
  }
  else {
    if (uVar14 == 2) {
      local_f8 = &DAT_001a9837;
      goto LAB_0079e134;
    }
    if (uVar14 != 3) goto LAB_0079e34c;
    local_e4 = (int)(uVar13 >> 0x10);
    iVar5 = 1;
    local_f8 = &DAT_001ded1c;
    local_f0 = &DAT_001bffae;
    uVar16 = param_3;
  }
  bVar4 = (param_4 & 0x800000) != 0;
  puVar2 = &DAT_00197a5b;
  if (bVar4) {
    puVar2 = &DAT_0019afbc;
  }
  iVar15 = 3;
  if (!bVar4) {
    iVar15 = 1;
  }
  uVar6 = FUN_007a1530(param_2);
  if ((int)uVar6 < 1) {
    uVar18 = (ulong)param_3;
  }
  else {
    uVar19 = 0;
    iVar8 = -1;
    uVar18 = (ulong)param_3;
    puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = &DAT_aaaaaaaaaaaaaaaa;
    do {
      iVar17 = (int)uVar18;
      uVar1 = uVar19;
      if ((param_4 & 0x100000) != 0) {
        uVar1 = uVar6 + ~uVar19;
      }
      uVar10 = FUN_007a14d4(param_2,uVar1);
      if (iVar8 != -1) {
        iVar7 = FUN_007a68c0(uVar10);
        if (iVar8 == iVar7) {
          if ((param_1 != 0) && (iVar8 = FUN_0076f9a8(param_1,local_f0,local_e4), iVar8 != local_e4)
             ) goto LAB_0079e01c;
          iVar17 = iVar17 + local_e4;
        }
        else {
          uVar1 = uVar16;
          if ((param_1 != 0) && (iVar8 = FUN_0076f9a8(param_1,local_f8,iVar5), iVar8 != iVar5))
          goto LAB_0079e01c;
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            if ((param_1 != 0) && (iVar8 = FUN_0076f9a8(param_1,&DAT_001d5e07,1), iVar8 != 1))
            goto LAB_0079e01c;
          }
          iVar17 = uVar16 + iVar5 + iVar17;
        }
      }
      iVar8 = FUN_007a68c0(uVar10);
      uVar11 = FUN_007a1a6c(uVar10);
      uVar10 = FUN_007a14c0(uVar10);
      iVar7 = FUN_0078d994(uVar11);
      if (iVar7 == 0) {
        __s = &local_c0;
        FUN_0078df88(&local_c0,0x50,uVar11,1);
      }
      else {
        __s = (undefined1 **)FUN_0078de70(iVar7);
      }
      sVar12 = strlen((char *)__s);
      if ((param_1 != 0) &&
         ((iVar9 = FUN_0076f9a8(param_1,__s,sVar12 & 0xffffffff), iVar9 != (int)sVar12 ||
          (iVar9 = FUN_0076f9a8(param_1,puVar2,iVar15), iVar9 != iVar15)))) goto LAB_0079e01c;
      uVar13 = 0;
      if (iVar7 == 0 && (param_4 & 0x1000000) != 0) {
        uVar13 = 0x80;
      }
      iVar7 = FUN_0079d03c(param_1,uVar10,uVar13 | param_4);
      if (iVar7 < 0) goto LAB_0079e01c;
      uVar19 = uVar19 + 1;
      uVar18 = (ulong)(uint)(iVar17 + iVar15 + (int)sVar12 + iVar7);
    } while (uVar19 != uVar6);
  }
  goto LAB_0079e34c;
LAB_0079e01c:
  uVar18 = 0xffffffff;
LAB_0079e34c:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return uVar18;
  }
LAB_0079e388:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079e38c  FUN_0079e38c =====

undefined4 FUN_0079e38c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  byte bVar5;
  undefined4 uVar6;
  byte *pbVar7;
  int iVar8;
  
  pcVar3 = (char *)FUN_007a0dfc(param_2,0,0);
  if (pcVar3 == (char *)0x0) {
    uVar6 = 0;
  }
  else {
    if (*pcVar3 != '\0') {
      pbVar4 = (byte *)(pcVar3 + 1);
      pbVar7 = (byte *)(pcVar3 + 2);
      iVar8 = (int)pcVar3;
      do {
        iVar8 = iVar8 + 1;
        bVar5 = pbVar7[-1];
        if (bVar5 == 0) {
LAB_0079e41c:
          iVar2 = iVar8 - (int)pbVar4;
          iVar1 = FUN_0076f9a8(param_1,pbVar4,iVar2);
          if (iVar2 == iVar1) {
            if (pbVar7[-1] == 0) break;
            iVar2 = FUN_0076f9a8(param_1,&DAT_001e1644,2);
            if (iVar2 == 2) {
              bVar5 = pbVar7[-1];
              pbVar4 = pbVar7;
              goto LAB_0079e3e4;
            }
          }
          FUN_00777eb4(0xb,0,7,"../../third_party/boringssl/src/crypto/x509/t_x509.cc",0x11f);
          uVar6 = 0;
          goto LAB_0079e4ac;
        }
        if (bVar5 == 0x2f) {
          if ((*pbVar7 - 0x41 < 0x1a) &&
             ((pbVar7[1] == 0x3d || ((pbVar7[1] - 0x41 < 0x1a && (pbVar7[2] == 0x3d))))))
          goto LAB_0079e41c;
          bVar5 = 0x2f;
        }
LAB_0079e3e4:
        pbVar7 = pbVar7 + 1;
      } while (bVar5 != 0);
    }
    uVar6 = 1;
LAB_0079e4ac:
    FUN_0078cb3c(pcVar3);
  }
  return uVar6;
}


// ===== 0079e4d0  FUN_0079e4d0 =====

ulong FUN_0079e4d0(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  int *piVar4;
  undefined1 *local_40;
  long local_38;
  undefined4 local_14;
  
  piVar4 = *(int **)(param_2 + 8);
  local_14 = 0xaaaaaaaa;
  if ((piVar4 != (int *)0x0) && (*piVar4 == 0x10)) {
    local_40 = *(undefined1 **)(*(int **)(piVar4 + 2) + 2);
    local_38 = (long)**(int **)(piVar4 + 2);
    iVar1 = FUN_00793c74(&local_40,&local_14,1);
    if ((iVar1 != 0) && (local_38 == 0)) {
      uVar2 = FUN_00793c28(local_14);
      local_40 = &DAT_aaaaaaaaaaaaaaaa;
      uVar3 = FUN_0072af08(param_1,&local_40,uVar2,0,param_3);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      uVar3 = FUN_00789884(local_40,6);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      uVar3 = FUN_00789920(local_40,0xffffffff);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      iVar1 = FUN_007899bc(local_40,uVar2);
      return (ulong)(iVar1 != 0);
    }
  }
  FUN_00777eb4(0xb,0,0x70,"../../third_party/boringssl/src/crypto/x509/rsa_pss.cc",0x81);
  return 0;
}


// ===== 0079e5d8  FUN_0079e5d8 =====

void FUN_0079e5d8(undefined8 param_1,int *param_2)

{
  FUN_0079f3ac(*(undefined8 *)(param_2 + 2),(long)*param_2);
  return;
}


// ===== 0079e5e8  FUN_0079e5e8 =====

long FUN_0079e5e8(undefined8 param_1,int *param_2,char *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 local_8c;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_8c = 0xaaaaaaaa;
  iVar2 = strcmp(param_3,"hash");
  if (iVar2 == 0) {
    lVar6 = FUN_0076e93c();
    if (lVar6 == 0) goto LAB_0079e758;
    if (param_2 == (int *)0x0) {
LAB_0079e730:
      FUN_00777eb4(0x14,0,0x90,"../../third_party/boringssl/src/crypto/x509/v3_skey.cc",0x57);
    }
    else {
      if (*param_2 == 1) goto LAB_0079e758;
      if (*(long **)(param_2 + 6) == (long *)0x0) {
        if (*(long *)(param_2 + 4) == 0) goto LAB_0079e730;
        piVar4 = (int *)FUN_007a0d38();
      }
      else {
        piVar4 = (int *)(*(long *)(**(long **)(param_2 + 6) + 0x20) + 0x10);
      }
      uVar7 = *(undefined8 *)(piVar4 + 2);
      iVar2 = *piVar4;
      uVar5 = FUN_0072aac4();
      iVar2 = FUN_0072a5ac(uVar7,(long)iVar2,&local_80,&local_8c,uVar5,0);
      if ((iVar2 != 0) && (iVar2 = FUN_007962e0(lVar6,&local_80,local_8c), iVar2 != 0))
      goto LAB_0079e758;
    }
    thunk_FUN_007695a4(lVar6);
  }
  else {
    local_88 = &DAT_aaaaaaaaaaaaaaaa;
    lVar3 = FUN_0079f4d8(param_3,&local_88);
    if (lVar3 != 0) {
      if ((ulong)local_88 >> 0x1f == 0) {
        lVar6 = FUN_0076e93c();
        if (lVar6 != 0) {
          FUN_007695e4(lVar6,lVar3,(ulong)local_88 & 0xffffffff);
          goto LAB_0079e758;
        }
      }
      else {
        FUN_00777eb4(0x14,0,0x45,"../../third_party/boringssl/src/crypto/x509/v3_skey.cc",0x2d);
      }
      FUN_0078cb3c(lVar3);
    }
  }
  lVar6 = 0;
LAB_0079e758:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar6;
}


// ===== 0079e788  FUN_0079e788 =====

void FUN_0079e788(undefined8 param_1,char *param_2,undefined8 param_3)

{
  size_t sVar1;
  
  if (param_2 == (char *)0x0) {
    sVar1 = 0;
  }
  else {
    sVar1 = strlen(param_2);
  }
  FUN_0079e7e8(param_1,param_2,sVar1,param_2 == (char *)0x0,param_3);
  return;
}


// ===== 0079e7e8  FUN_0079e7e8 =====

undefined8 FUN_0079e7e8(long param_1,void *param_2,size_t param_3,int param_4,long *param_5)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *param_5;
  if (param_1 == 0) {
    lVar1 = 0;
    if (param_4 != 0) goto LAB_0079e828;
LAB_0079e874:
    if ((param_3 != 0) && (pvVar4 = memchr(param_2,0,param_3), pvVar4 != (void *)0x0)) {
      FUN_00777eb4(0x14,0,0xa3,"../../third_party/boringssl/src/crypto/x509/v3_utl.cc",0x3f);
      goto LAB_0079e8a8;
    }
    lVar5 = FUN_0078d2d8(param_2,param_3);
    if (lVar5 == 0) {
      puVar2 = (undefined8 *)0x0;
      goto joined_r0x0079e90c;
    }
  }
  else {
    lVar1 = FUN_0078ce8c();
    if (lVar1 == 0) {
LAB_0079e8a8:
      puVar2 = (undefined8 *)0x0;
      lVar5 = 0;
      goto joined_r0x0079e90c;
    }
    if (param_4 == 0) goto LAB_0079e874;
LAB_0079e828:
    lVar5 = 0;
  }
  puVar2 = (undefined8 *)FUN_0079cc34();
  if (puVar2 != (undefined8 *)0x0) {
    if (*param_5 == 0) {
      lVar3 = FUN_00795214();
      *param_5 = lVar3;
      if (lVar3 == 0) goto joined_r0x0079e90c;
    }
    *puVar2 = 0;
    puVar2[1] = lVar1;
    puVar2[2] = lVar5;
    lVar3 = FUN_00795868(*param_5,puVar2);
    if (lVar3 != 0) {
      return 1;
    }
  }
joined_r0x0079e90c:
  if (lVar6 == 0) {
    FUN_00795334(*param_5);
    *param_5 = 0;
  }
  FUN_0078cb3c(puVar2);
  FUN_0078cb3c(lVar1);
  FUN_0078cb3c(lVar5);
  return 0;
}


// ===== 0079e914  FUN_0079e914 =====

void FUN_0079e914(undefined8 param_1,int *param_2,undefined8 param_3)

{
  FUN_0079e7e8(param_1,*(undefined8 *)(param_2 + 2),(long)*param_2,0,param_3);
  return;
}


// ===== 0079e934  FUN_0079e934 =====

void FUN_0079e934(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_0078cb3c(param_1[1]);
    FUN_0078cb3c(param_1[2]);
    FUN_0078cb3c(*param_1);
    FUN_0078cb3c(param_1);
    return;
  }
  return;
}


// ===== 0079e980  FUN_0079e980 =====

void FUN_0079e980(undefined8 param_1,int param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_0079e7e8(param_1,&DAT_001c308e,4,0,param_3);
    return;
  }
  FUN_0079e7e8(param_1,"FALSE",5,0,param_3);
  return;
}


// ===== 0079e9b4  FUN_0079e9b4 =====

char * FUN_0079e9b4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  char *local_28;
  
  if (param_2 == 0) {
    pcVar6 = (char *)0x0;
  }
  else {
    lVar5 = FUN_0076d228(param_2,0);
    if (lVar5 == 0) {
      pcVar6 = (char *)0x0;
    }
    else {
      uVar3 = FUN_0071a228(lVar5);
      if (uVar3 < 0x20) {
        pcVar6 = (char *)FUN_007770f0(lVar5);
      }
      else {
        pcVar6 = (char *)FUN_00776cac(lVar5);
        if (pcVar6 != (char *)0x0) {
          puVar1 = &DAT_001b3348;
          local_28 = &DAT_aaaaaaaaaaaaaaaa;
          pcVar2 = pcVar6;
          if (*pcVar6 == '-') {
            pcVar2 = pcVar6 + 1;
            puVar1 = &DAT_001b07f5;
          }
          iVar4 = FUN_0078d258(&local_28,"%s0x%s",puVar1,pcVar2);
          if (iVar4 == -1) {
            local_28 = (char *)0x0;
          }
          FUN_0078cb3c(pcVar6);
          pcVar6 = local_28;
        }
      }
    }
    FUN_0071a024(lVar5);
  }
  return pcVar6;
}


// ===== 0079ea94  FUN_0079ea94 =====

char * FUN_0079ea94(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  char *local_28;
  
  if (param_2 == 0) {
    pcVar6 = (char *)0x0;
  }
  else {
    lVar5 = FUN_0076d180(param_2,0);
    if (lVar5 == 0) {
      pcVar6 = (char *)0x0;
    }
    else {
      uVar3 = FUN_0071a228(lVar5);
      if (uVar3 < 0x20) {
        pcVar6 = (char *)FUN_007770f0(lVar5);
      }
      else {
        pcVar6 = (char *)FUN_00776cac(lVar5);
        if (pcVar6 != (char *)0x0) {
          puVar1 = &DAT_001b3348;
          local_28 = &DAT_aaaaaaaaaaaaaaaa;
          pcVar2 = pcVar6;
          if (*pcVar6 == '-') {
            pcVar2 = pcVar6 + 1;
            puVar1 = &DAT_001b07f5;
          }
          iVar4 = FUN_0078d258(&local_28,"%s0x%s",puVar1,pcVar2);
          if (iVar4 == -1) {
            local_28 = (char *)0x0;
          }
          FUN_0078cb3c(pcVar6);
          pcVar6 = local_28;
        }
      }
    }
    FUN_0071a024(lVar5);
  }
  return pcVar6;
}


// ===== 0079eb74  FUN_0079eb74 =====

long FUN_0079eb74(undefined8 param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  size_t sVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_18;
  
  if (param_2 == (char *)0x0) {
    FUN_00777eb4(0x14,0,0x7e,"../../third_party/boringssl/src/crypto/x509/v3_utl.cc",0xba);
    return 0;
  }
  uVar4 = FUN_00719ff4();
  cVar1 = *param_2;
  if (cVar1 == '-') {
    param_2 = param_2 + 1;
  }
  local_18 = uVar4;
  if ((*param_2 == '0') && ((byte)(param_2[1] | 0x20U) == 0x78)) {
    param_2 = param_2 + 2;
    iVar3 = FUN_00776f20(&local_18,param_2);
  }
  else {
    sVar5 = strlen(param_2);
    if (0x2000 < sVar5) {
      FUN_0071a024(uVar4);
      uVar4 = 0x7f;
      uVar7 = 0xd6;
      goto LAB_0079ec68;
    }
    iVar3 = FUN_007772e0(&local_18,param_2);
  }
  if ((iVar3 != 0) && (param_2[iVar3] == '\0')) {
    if (cVar1 == '-') {
      iVar3 = FUN_007199e0(local_18);
      bVar2 = iVar3 != 0;
    }
    else {
      bVar2 = true;
    }
    lVar6 = FUN_0076d090(local_18,0);
    FUN_0071a024(local_18);
    if (lVar6 != 0) {
      if (bVar2) {
        return lVar6;
      }
      *(uint *)(lVar6 + 4) = *(uint *)(lVar6 + 4) | 0x100;
      return lVar6;
    }
    FUN_00777eb4(0x14,0,0x67,"../../third_party/boringssl/src/crypto/x509/v3_utl.cc",0xe9);
    return 0;
  }
  FUN_0071a024(local_18);
  uVar4 = 0x66;
  uVar7 = 0xde;
LAB_0079ec68:
  FUN_00777eb4(0x14,0,uVar4,"../../third_party/boringssl/src/crypto/x509/v3_utl.cc",uVar7);
  return 0;
}


// ===== 0079ecfc  FUN_0079ecfc =====

char * FUN_0079ecfc(undefined8 param_1,long param_2,undefined8 param_3)

{
  char *__s;
  size_t sVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (param_2 == 0) {
    pcVar3 = (char *)0x1;
  }
  else {
    __s = (char *)FUN_0079ea94();
    pcVar3 = __s;
    if (__s != (char *)0x0) {
      sVar1 = strlen(__s);
      uVar2 = FUN_0079e7e8(param_1,__s,sVar1,0,param_3);
      pcVar3 = (char *)(uVar2 & 0xffffffff);
      FUN_0078cb3c(__s);
    }
  }
  return pcVar3;
}


// ===== 0079ed70  FUN_0079ed70 =====

undefined8 FUN_0079ed70(char *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = strcmp(param_1,"TRUE");
  if ((((iVar2 == 0) || (iVar2 = strcmp(param_1,"true"), iVar2 == 0)) ||
      (((cVar1 = *param_1, cVar1 == 'y' || (cVar1 == 'Y')) && (param_1[1] == '\0')))) ||
     ((iVar2 = strcmp(param_1,"YES"), iVar2 == 0 || (iVar2 = strcmp(param_1,"yes"), iVar2 == 0)))) {
    *param_2 = 0xff;
    return 1;
  }
  iVar2 = strcmp(param_1,"FALSE");
  if ((iVar2 != 0) && (iVar2 = strcmp(param_1,"false"), iVar2 != 0)) {
    if (cVar1 == 'n') {
      if (param_1[1] == '\0') goto LAB_0079eea4;
      if (param_1[1] != 'o') goto LAB_0079ee80;
    }
    else {
      if (cVar1 != 'N') goto LAB_0079ee80;
      if (param_1[1] == '\0') goto LAB_0079eea4;
      if (param_1[1] != 'O') goto LAB_0079ee80;
    }
    if (param_1[2] != '\0') {
LAB_0079ee80:
      FUN_00777eb4(0x14,0,0x78,"../../third_party/boringssl/src/crypto/x509/v3_utl.cc",0x10c);
      return 0;
    }
  }
LAB_0079eea4:
  *param_2 = 0;
  return 1;
}


// ===== 0079eeac  FUN_0079eeac =====

undefined8 FUN_0079eeac(undefined8 *param_1)

{
  int iVar1;
  
  if (param_1[2] == 0) {
    FUN_00777eb4(0x14,0,0x78,"../../third_party/boringssl/src/crypto/x509/v3_utl.cc",0x114);
  }
  else {
    iVar1 = FUN_0079ed70();
    if (iVar1 != 0) {
      return 1;
    }
  }
  FUN_00777f98(6,"section:",*param_1,",name:",param_1[1],",value:",param_1[2]);
  return 0;
}


// ===== 0079ef30  FUN_0079ef30 =====

bool FUN_0079ef30(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = FUN_0079eb74(param_1,param_1[2]);
  if (lVar1 == 0) {
    FUN_00777f98(6,"section:",*param_1,",name:",param_1[1],",value:",param_1[2]);
  }
  else {
    thunk_FUN_007695a4(*param_2);
    *param_2 = lVar1;
  }
  return lVar1 != 0;
}


// ===== 0079efb4  FUN_0079efb4 =====

undefined8 FUN_0079efb4(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  size_t sVar4;
  size_t sVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  byte *__s;
  byte *__s_00;
  byte *pbVar9;
  undefined8 local_48;
  
  local_48 = 0;
  pbVar3 = (byte *)FUN_0078ce8c();
  if (pbVar3 != (byte *)0x0) {
    __s = (byte *)0x0;
    iVar2 = 1;
    __s_00 = pbVar3;
    pbVar9 = pbVar3;
LAB_0079eff4:
    while( true ) {
      uVar8 = (uint)*pbVar9;
      if ((*pbVar9 < 0xe) && ((0x2401U >> (ulong)(uVar8 & 0x1f) & 1) != 0)) {
        bVar1 = *__s_00;
        if (iVar2 != 2) goto joined_r0x0079f24c;
        goto joined_r0x0079f20c;
      }
      if (iVar2 == 1) break;
      if (uVar8 == 0x2c) {
        *pbVar9 = 0;
        if (*__s_00 != 0) {
          while (iVar2 = FUN_0078d08c(), iVar2 != 0) {
            __s_00 = __s_00 + 1;
            if (*__s_00 == 0) goto LAB_0079f1d4;
          }
          if (*__s_00 != 0) {
            sVar4 = strlen((char *)__s_00);
            do {
              sVar5 = sVar4;
              if (sVar5 - 1 == 0) goto LAB_0079f0d4;
              iVar2 = FUN_0078d08c(__s_00[sVar5 - 1]);
              sVar4 = sVar5 - 1;
            } while (iVar2 != 0);
            __s_00[sVar5] = 0;
LAB_0079f0d4:
            if ((*__s_00 != 0) && (__s_00 != (byte *)0x0)) {
              sVar4 = strlen((char *)__s_00);
              FUN_0079e7e8(__s,__s_00,sVar4,0,&local_48);
              __s = (byte *)0x0;
              __s_00 = pbVar9 + 1;
              goto LAB_0079f108;
            }
          }
        }
LAB_0079f1d4:
        uVar6 = 0x7e;
        uVar7 = 0x163;
        goto LAB_0079f368;
      }
      iVar2 = 2;
      pbVar9 = pbVar9 + 1;
    }
    if (uVar8 != 0x2c) {
      if (uVar8 == 0x3a) {
        *pbVar9 = 0;
        bVar1 = *__s_00;
        __s = __s_00;
        while( true ) {
          if (bVar1 == 0) goto LAB_0079f214;
          iVar2 = FUN_0078d08c();
          if (iVar2 == 0) break;
          __s = __s + 1;
          bVar1 = *__s;
        }
        if (*__s == 0) goto LAB_0079f214;
        sVar4 = strlen((char *)__s);
        do {
          sVar5 = sVar4;
          if (sVar5 - 1 == 0) goto LAB_0079f14c;
          iVar2 = FUN_0078d08c(__s[sVar5 - 1]);
          sVar4 = sVar5 - 1;
        } while (iVar2 != 0);
        __s[sVar5] = 0;
LAB_0079f14c:
        if ((*__s == 0) || (__s == (byte *)0x0)) goto LAB_0079f214;
        __s_00 = pbVar9 + 1;
        iVar2 = 2;
        pbVar9 = pbVar9 + 1;
      }
      else {
LAB_0079f108:
        iVar2 = 1;
        pbVar9 = pbVar9 + 1;
      }
      goto LAB_0079eff4;
    }
    *pbVar9 = 0;
    bVar1 = *__s_00;
    __s = __s_00;
    while( true ) {
      if (bVar1 == 0) goto LAB_0079f230;
      iVar2 = FUN_0078d08c();
      if (iVar2 == 0) break;
      __s = __s + 1;
      bVar1 = *__s;
    }
    if (*__s != 0) {
      sVar4 = strlen((char *)__s);
      do {
        sVar5 = sVar4;
        if (sVar5 - 1 == 0) goto LAB_0079f1a0;
        iVar2 = FUN_0078d08c(__s[sVar5 - 1]);
        sVar4 = sVar5 - 1;
      } while (iVar2 != 0);
      __s[sVar5] = 0;
LAB_0079f1a0:
      if ((*__s != 0) && (__s != (byte *)0x0)) {
        __s_00 = pbVar9 + 1;
        iVar2 = 1;
        FUN_0079e7e8(__s,0,0,1,&local_48);
        pbVar9 = pbVar9 + 1;
        goto LAB_0079eff4;
      }
    }
LAB_0079f230:
    uVar6 = 0x7d;
    uVar7 = 0x153;
    goto LAB_0079f368;
  }
  goto LAB_0079f36c;
joined_r0x0079f20c:
  if (bVar1 == 0) goto LAB_0079f2c8;
  iVar2 = FUN_0078d08c();
  if (iVar2 == 0) {
    if (*__s_00 != 0) {
      sVar4 = strlen((char *)__s_00);
      goto LAB_0079f274;
    }
    goto LAB_0079f2c8;
  }
  __s_00 = __s_00 + 1;
  bVar1 = *__s_00;
  goto joined_r0x0079f20c;
  while (iVar2 = FUN_0078d08c(__s_00[sVar5 - 1]), sVar4 = sVar5 - 1, iVar2 != 0) {
LAB_0079f274:
    sVar5 = sVar4;
    if (sVar5 - 1 == 0) goto LAB_0079f29c;
  }
  __s_00[sVar5] = 0;
LAB_0079f29c:
  if ((*__s_00 != 0) && (__s_00 != (byte *)0x0)) {
    sVar4 = strlen((char *)__s_00);
    uVar6 = 0;
    goto LAB_0079f33c;
  }
LAB_0079f2c8:
  uVar6 = 0x7e;
  uVar7 = 0x173;
  goto LAB_0079f368;
joined_r0x0079f24c:
  __s = __s_00;
  if (bVar1 == 0) goto LAB_0079f350;
  iVar2 = FUN_0078d08c();
  if (iVar2 == 0) {
    if (*__s != 0) {
      sVar4 = strlen((char *)__s);
      goto LAB_0079f2f4;
    }
    goto LAB_0079f350;
  }
  bVar1 = __s[1];
  __s_00 = __s + 1;
  goto joined_r0x0079f24c;
LAB_0079f214:
  uVar6 = 0x7d;
  uVar7 = 0x147;
  goto LAB_0079f368;
  while (iVar2 = FUN_0078d08c(__s[sVar5 - 1]), sVar4 = sVar5 - 1, iVar2 != 0) {
LAB_0079f2f4:
    sVar5 = sVar4;
    if (sVar5 - 1 == 0) goto LAB_0079f31c;
  }
  __s[sVar5] = 0;
LAB_0079f31c:
  if ((*__s != 0) && (__s != (byte *)0x0)) {
    __s_00 = (byte *)0x0;
    sVar4 = 0;
    uVar6 = 1;
LAB_0079f33c:
    FUN_0079e7e8(__s,__s_00,sVar4,uVar6,&local_48);
    FUN_0078cb3c(pbVar3);
    return local_48;
  }
LAB_0079f350:
  uVar6 = 0x7d;
  uVar7 = 0x17d;
LAB_0079f368:
  FUN_00777eb4(0x14,0,uVar6,"../../third_party/boringssl/src/crypto/x509/v3_utl.cc",uVar7);
LAB_0079f36c:
  FUN_0078cb3c(pbVar3);
  FUN_00795370(local_48,FUN_00797d20,FUN_0079e934);
  return 0;
}


// ===== 0079f3ac  FUN_0079f3ac =====

undefined1 * FUN_0079f3ac(byte *param_1,long param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_18;
  
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  iVar2 = FUN_00770984(&local_60,param_2 * 3 + 1);
  if (iVar2 == 0) goto LAB_0079f4b4;
  if (param_2 != 0) {
    iVar2 = FUN_00771298(&local_60,"0123456789ABCDEF"[*param_1 >> 4]);
    if (iVar2 == 0) goto LAB_0079f4b4;
    iVar2 = FUN_00771298(&local_60,"0123456789ABCDEF"[(ulong)*param_1 & 0xf]);
    if (iVar2 == 0) goto LAB_0079f4b4;
    pbVar1 = param_1 + 1;
    for (param_2 = param_2 + -1; param_2 != 0; param_2 = param_2 + -1) {
      iVar2 = FUN_00771298(&local_60,0x3a);
      if ((iVar2 == 0) ||
         (iVar2 = FUN_00771298(&local_60,"0123456789ABCDEF"[*pbVar1 >> 4]), iVar2 == 0))
      goto LAB_0079f4b4;
      iVar2 = FUN_00771298(&local_60,"0123456789ABCDEF"[(ulong)*pbVar1 & 0xf]);
      if (iVar2 == 0) goto LAB_0079f4b4;
      pbVar1 = pbVar1 + 1;
    }
  }
  local_18 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  iVar2 = FUN_00771298(&local_60,0);
  if ((iVar2 != 0) && (iVar2 = FUN_00770a30(&local_60,&local_18,&local_68), iVar2 != 0)) {
    return local_18;
  }
LAB_0079f4b4:
  FUN_00770a10(&local_60);
  return (undefined1 *)0x0;
}


// ===== 0079f4d8  FUN_0079f4d8 =====

byte * FUN_0079f4d8(char *param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  byte *pbVar8;
  byte local_28 [4];
  char local_24 [4];
  
  local_24[0] = -0x56;
  local_28[0] = 0xaa;
  if (param_1 == (char *)0x0) {
    uVar5 = 0x7c;
    uVar6 = 0x1c4;
  }
  else {
    sVar3 = strlen(param_1);
    pbVar4 = (byte *)FUN_0078c954(sVar3 >> 1);
    pbVar8 = pbVar4;
    if (pbVar4 == (byte *)0x0) {
      FUN_0078cb3c();
      return (byte *)0x0;
    }
    while( true ) {
      param_1 = param_1 + 1;
      do {
        pcVar7 = param_1;
        if (pcVar7[-1] == '\0') {
          if (param_2 != (long *)0x0) {
            *param_2 = (long)pbVar8 - (long)pbVar4;
            return pbVar4;
          }
          return pbVar4;
        }
        param_1 = pcVar7 + 1;
      } while (pcVar7[-1] == ':');
      cVar1 = *pcVar7;
      if (cVar1 == '\0') {
        FUN_00777eb4(0x14,0,0x92,"../../third_party/boringssl/src/crypto/x509/v3_utl.cc",0x1d2);
        FUN_0078cb3c(pbVar4);
        return (byte *)0x0;
      }
      iVar2 = FUN_0078d000(local_24);
      if ((iVar2 == 0) || (iVar2 = FUN_0078d000(local_28,cVar1), iVar2 == 0)) break;
      *pbVar8 = local_28[0] | local_24[0] << 4;
      pbVar8 = pbVar8 + 1;
    }
    FUN_0078cb3c(pbVar4);
    uVar5 = 0x76;
    uVar6 = 0x1eb;
  }
  FUN_00777eb4(0x14,0,uVar5,"../../third_party/boringssl/src/crypto/x509/v3_utl.cc",uVar6);
  return (byte *)0x0;
}


// ===== 0079f610  FUN_0079f610 =====

bool FUN_0079f610(char *param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  size_t __n;
  
  __n = strlen(param_2);
  iVar2 = strncmp(param_1,param_2,__n);
  if (iVar2 == 0) {
    bVar1 = param_1[__n] == '\0' || param_1[__n] == '.';
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


// ===== 0079f67c  FUN_0079f67c =====

undefined8 FUN_0079f67c(char *param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar3 = param_2 - (ulong)(param_1[param_2 + -1] == '.');
  if (1 < uVar3) {
    if ((*param_1 != '*') || (param_1[1] != '.')) goto LAB_0079f6e0;
    param_1 = param_1 + 2;
    uVar3 = uVar3 - 2;
  }
  if (uVar3 == 0) {
    return 0;
  }
LAB_0079f6e0:
  uVar4 = 0;
  uVar5 = 0;
  do {
    bVar1 = param_1[uVar4];
    uVar2 = FUN_0078d054(bVar1);
    if ((int)uVar2 == 0) {
      if (bVar1 < 0x3a) {
        if (bVar1 == 0x2d) {
          if (uVar4 <= uVar5) {
            return 0;
          }
        }
        else {
          if (bVar1 != 0x2e) {
            return uVar2;
          }
          if (uVar4 <= uVar5) {
            return 0;
          }
          if (uVar3 - 1 <= uVar4) {
            return 0;
          }
          uVar5 = uVar4 + 1;
        }
      }
      else if ((bVar1 != 0x3a) && (bVar1 != 0x5f)) {
        return uVar2;
      }
    }
    uVar4 = uVar4 + 1;
    if (uVar3 == uVar4) {
      return 1;
    }
  } while( true );
}


// ===== 0079f788  FUN_0079f788 =====

undefined8
FUN_0079f788(undefined8 param_1,void *param_2,size_t param_3,undefined4 param_4,undefined8 param_5)

{
  void *pvVar1;
  undefined8 uVar2;
  
  if ((param_2 != (void *)0x0) &&
     ((param_3 == 0 || (pvVar1 = memchr(param_2,0,param_3), pvVar1 == (void *)0x0)))) {
    uVar2 = FUN_0079f81c(param_1,param_2,param_3,param_4,2,param_5);
    return uVar2;
  }
  return 0xfffffffe;
}


// ===== 0079f81c  FUN_0079f81c =====

int FUN_0079f81c(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,int param_5,
                undefined8 param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  bool bVar8;
  code *pcVar9;
  undefined4 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  if (param_5 == 1) {
    uVar10 = 0x30;
    bVar8 = true;
    uVar12 = 0x16;
    pcVar9 = FUN_007a0098;
  }
  else if (param_5 == 2) {
    uVar10 = 0xd;
    pcVar9 = FUN_007a024c;
    if ((param_4 & 2) != 0) {
      pcVar9 = FUN_007a01ac;
    }
    bVar8 = true;
    uVar12 = 0x16;
  }
  else {
    bVar8 = false;
    uVar10 = 0;
    uVar12 = 4;
    pcVar9 = FUN_007a05cc;
  }
  lVar3 = FUN_007a0de4(param_1,0x55,0,0);
  if (lVar3 == 0) {
    if (bVar8 && (param_4 & 0x20) == 0) {
      uVar12 = FUN_007a0bd0(param_1);
      iVar2 = -1;
      do {
        iVar2 = FUN_007a1558(uVar12,uVar10,iVar2);
        if (iVar2 < 0) goto LAB_0079f9cc;
        FUN_007a14d4(uVar12,iVar2);
        uVar7 = FUN_007a14c0();
        iVar1 = FUN_007a061c(uVar7,0xffffffff,pcVar9,param_4,param_5,param_2,param_3,param_6);
      } while (iVar1 == 0);
    }
    else {
LAB_0079f9cc:
      iVar1 = 0;
    }
  }
  else {
    lVar4 = FUN_00795280();
    if (lVar4 != 0) {
      uVar11 = 0;
      do {
        piVar6 = (int *)FUN_007952e0(lVar3,uVar11);
        if ((*piVar6 == param_5) &&
           (iVar1 = FUN_007a061c(*(undefined8 *)(piVar6 + 2),uVar12,pcVar9,param_4,param_5,param_2,
                                 param_3,param_6), iVar1 != 0)) goto LAB_0079f94c;
        uVar11 = uVar11 + 1;
        uVar5 = FUN_00795280(lVar3);
      } while (uVar11 < uVar5);
    }
    iVar1 = 0;
LAB_0079f94c:
    FUN_00796160(lVar3);
  }
  return iVar1;
}


// ===== 0079f9f8  FUN_0079f9f8 =====

undefined8 FUN_0079f9f8(undefined8 param_1,void *param_2,size_t param_3,undefined4 param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  if ((param_2 != (void *)0x0) &&
     ((param_3 == 0 || (pvVar1 = memchr(param_2,0,param_3), pvVar1 == (void *)0x0)))) {
    uVar2 = FUN_0079f81c(param_1,param_2,param_3,param_4,1,0);
    return uVar2;
  }
  return 0xfffffffe;
}


// ===== 0079fa7c  FUN_0079fa7c =====

undefined8 FUN_0079fa7c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_0079f81c();
    return uVar1;
  }
  return 0xfffffffe;
}


// ===== 0079fa98  FUN_0079fa98 =====

void FUN_0079fa98(undefined8 *param_1,char *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  ulong __n;
  long lVar8;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined8 local_50;
  int local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pcVar6 = strchr(param_2,0x3a);
  if (pcVar6 == (char *)0x0) {
    iVar5 = FUN_0079fe08(param_1,param_2);
    uVar7 = 0;
    if (iVar5 != 0) {
      uVar7 = 4;
    }
    goto LAB_0079fbe8;
  }
  local_48 = 0;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = -0x100000000;
  iVar5 = FUN_0079ccac(param_2,0x3a,0,FUN_007a0878,&local_60);
  if (iVar5 != 0) {
    uVar2 = (uint)local_50;
    uVar3 = local_50._4_4_;
    __n = (ulong)local_50._4_4_;
    lVar8 = (long)(int)(uint)local_50;
    if (local_50._4_4_ == 0xffffffff) {
      if ((uint)local_50 == 0x10) {
LAB_0079fb6c:
        uVar7 = 0x10;
        param_1[1] = puStack_58;
        *param_1 = local_60;
        goto LAB_0079fbe8;
      }
    }
    else if (((int)(uint)local_50 < 0x10) && (local_48 < 4)) {
      if (local_48 == 2) {
        if ((local_50._4_4_ == 0) || ((uint)local_50 == local_50._4_4_)) goto LAB_0079fb98;
      }
      else if (local_48 == 3) {
        if ((int)(uint)local_50 < 1) {
LAB_0079fb98:
          if (local_50 < 0) goto LAB_0079fb6c;
          if (local_50._4_4_ == 0) {
            memset(param_1,0,(long)(int)(0x10 - (uint)local_50));
            if (uVar2 != 0) {
              __n = 0;
              goto LAB_0079fc30;
            }
          }
          else {
            memcpy(param_1,&local_60,__n);
            param_1 = (undefined8 *)((long)param_1 + __n);
            memset(param_1,0,(long)(int)(0x10 - uVar2));
            if (uVar2 != uVar3) {
              if (0x10 < uVar3) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(0x5512,0x79fbe4);
                (*pcVar4)();
              }
LAB_0079fc30:
              memcpy((void *)((long)param_1 + (0x10 - lVar8)),(void *)((long)&local_60 + __n),
                     (long)(int)(uVar2 - uVar3));
            }
          }
          uVar7 = 0x10;
          goto LAB_0079fbe8;
        }
      }
      else if ((local_50._4_4_ != 0) && ((uint)local_50 != local_50._4_4_)) goto LAB_0079fb98;
    }
  }
  uVar7 = 0;
LAB_0079fbe8:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


// ===== 0079fc58  FUN_0079fc58 =====

long FUN_0079fc58(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined1 *local_50;
  undefined1 *puStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  iVar2 = FUN_0079fa98(&local_50,param_1);
  if (iVar2 != 0) {
    lVar3 = FUN_0076e93c();
    if ((lVar3 == 0) || (iVar2 = FUN_007962e0(lVar3,&local_50,iVar2), iVar2 != 0))
    goto LAB_0079fcc4;
    thunk_FUN_007695a4(lVar3);
  }
  lVar3 = 0;
LAB_0079fcc4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079fcf4  FUN_0079fcf4 =====

long FUN_0079fcf4(char *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  pcVar5 = strchr(param_1,0x2f);
  if ((pcVar5 != (char *)0x0) && (lVar6 = FUN_0078ce8c(param_1), lVar6 != 0)) {
    pcVar5[lVar6 - (long)param_1] = '\0';
    uVar2 = FUN_0079fa98(&local_70,lVar6);
    if (uVar2 == 0) {
      lVar7 = 0;
    }
    else {
      uVar3 = FUN_0079fa98((long)&local_70 + (ulong)uVar2,pcVar5 + (lVar6 - (long)param_1) + 1);
      FUN_0078cb3c(lVar6);
      if (uVar2 == uVar3) {
        lVar7 = FUN_0076e93c();
        if ((lVar7 != 0) && (iVar4 = FUN_007962e0(lVar7,&local_70,uVar2 << 1), iVar4 != 0))
        goto LAB_0079fdd4;
      }
      else {
        lVar7 = 0;
      }
      lVar6 = 0;
    }
    FUN_0078cb3c(lVar6);
    thunk_FUN_007695a4(lVar7);
  }
  lVar7 = 0;
LAB_0079fdd4:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar7;
}


// ===== 0079fe08  FUN_0079fe08 =====

ulong FUN_0079fe08(undefined1 *param_1,char *param_2)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  uint uVar4;
  
  uVar4 = 0;
  pcVar3 = param_2 + 7;
  cVar1 = *param_2;
  while( true ) {
    uVar2 = FUN_0078cfcc(cVar1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    uVar4 = ((uint)(byte)pcVar3[-7] + uVar4 * 10) - 0x30;
    if (0xff < uVar4) break;
    cVar1 = pcVar3[-6];
    if ((cVar1 == '\0') || (cVar1 == '.')) {
      *param_1 = (char)uVar4;
      if (pcVar3[-6] != '.') {
        return 0;
      }
      cVar1 = pcVar3[-5];
      uVar4 = 0;
      while( true ) {
        uVar2 = FUN_0078cfcc(cVar1);
        if ((int)uVar2 == 0) {
          return uVar2;
        }
        uVar4 = ((uint)(byte)pcVar3[-5] + uVar4 * 10) - 0x30;
        if (0xff < uVar4) break;
        cVar1 = pcVar3[-4];
        if ((cVar1 == '\0') || (cVar1 == '.')) {
          param_1[1] = (char)uVar4;
          if (pcVar3[-4] != '.') {
            return 0;
          }
          cVar1 = pcVar3[-3];
          uVar4 = 0;
          while( true ) {
            uVar2 = FUN_0078cfcc(cVar1);
            if ((int)uVar2 == 0) {
              return uVar2;
            }
            uVar4 = ((uint)(byte)pcVar3[-3] + uVar4 * 10) - 0x30;
            if (0xff < uVar4) break;
            cVar1 = pcVar3[-2];
            if ((cVar1 == '\0') || (cVar1 == '.')) {
              param_1[2] = (char)uVar4;
              if (pcVar3[-2] != '.') {
                return 0;
              }
              cVar1 = pcVar3[-1];
              uVar4 = 0;
              while( true ) {
                uVar2 = FUN_0078cfcc(cVar1);
                if ((int)uVar2 == 0) {
                  return uVar2;
                }
                uVar4 = ((uint)(byte)pcVar3[-1] + uVar4 * 10) - 0x30;
                if (0xff < uVar4) break;
                cVar1 = *pcVar3;
                if ((cVar1 == '\0') || (cVar1 == '.')) {
                  param_1[3] = (char)uVar4;
                  return (ulong)(*pcVar3 == '\0');
                }
                pcVar3 = pcVar3 + 1;
                if (uVar4 == 0) {
                  return 0;
                }
              }
              return 0;
            }
            pcVar3 = pcVar3 + 1;
            if (uVar4 == 0) {
              return 0;
            }
          }
          return 0;
        }
        pcVar3 = pcVar3 + 1;
        if (uVar4 == 0) {
          return 0;
        }
      }
      return 0;
    }
    pcVar3 = pcVar3 + 1;
    if (uVar4 == 0) {
      return 0;
    }
  }
  return 0;
}


// ===== 0079ffa0  FUN_0079ffa0 =====

long FUN_0079ffa0(long param_1,undefined8 param_2,undefined4 param_3)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  
  if (param_1 != 0) {
    lVar3 = FUN_00795280(param_2);
    if (lVar3 != 0) {
      uVar7 = 0;
      do {
        lVar3 = FUN_007952e0(param_2,uVar7);
        pbVar5 = *(byte **)(lVar3 + 8);
        pbVar1 = pbVar5;
        do {
          while( true ) {
            pbVar6 = pbVar1 + 1;
            bVar2 = *pbVar1;
            pbVar1 = pbVar6;
            if (bVar2 < 0x2e) break;
            if ((bVar2 == 0x3a) || (bVar2 == 0x2e)) goto LAB_007a0020;
          }
          if (bVar2 == 0) goto LAB_007a002c;
        } while (bVar2 != 0x2c);
LAB_007a0020:
        if (*pbVar6 != 0) {
          pbVar5 = pbVar6;
        }
LAB_007a002c:
        pbVar1 = pbVar5;
        if (*pbVar5 == 0x2b) {
          pbVar1 = pbVar5 + 1;
        }
        lVar3 = FUN_007a1888(param_1,pbVar1,param_3,*(undefined8 *)(lVar3 + 0x10),0xffffffffffffffff
                             ,0xffffffff,-(uint)(*pbVar5 == 0x2b));
        if ((int)lVar3 == 0) {
          return lVar3;
        }
        uVar7 = uVar7 + 1;
        uVar4 = FUN_00795280(param_2);
      } while (uVar7 < uVar4);
    }
    param_1 = 1;
  }
  return param_1;
}


// ===== 007a0088  FUN_007a0088 =====

void FUN_007a0088(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x007a0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}


// ===== 007a0098  FUN_007a0098 =====

bool FUN_007a0098(void *param_1,size_t param_2,void *param_3,size_t param_4)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  size_t __n;
  long lVar7;
  
  if (param_2 != param_4) {
    return false;
  }
  lVar4 = -1;
  do {
    lVar7 = lVar4;
    if (param_2 + lVar7 == -1) goto LAB_007a0168;
    lVar3 = lVar7;
  } while ((*(char *)((long)param_1 + lVar7 + param_2) != '@') &&
          (lVar4 = lVar7 + -1, *(char *)((long)param_3 + lVar7 + param_2) != '@'));
  for (; lVar3 != 0; lVar3 = lVar3 + 1) {
    cVar1 = *(char *)((long)param_1 + lVar3 + param_2);
    if (cVar1 == '\0') {
      return false;
    }
    cVar2 = *(char *)((long)param_3 + lVar3 + param_2);
    if (cVar1 != cVar2) {
      iVar5 = FUN_0078d074();
      iVar6 = FUN_0078d074(cVar2);
      if (iVar5 != iVar6) {
        return false;
      }
    }
  }
  __n = param_2 + lVar7;
  if (param_2 + lVar7 == 0) {
LAB_007a0168:
    __n = param_2;
    if (param_2 == 0) {
      return true;
    }
  }
  iVar5 = memcmp(param_1,param_3,__n);
  return iVar5 == 0;
}


// ===== 007a01ac  FUN_007a01ac =====

undefined1 FUN_007a01ac(char *param_1,long param_2,char *param_3,long param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != param_4) {
    return 0;
  }
  if (param_2 != 0) {
    do {
      if (*param_1 == '\0') {
        return 0;
      }
      cVar1 = *param_3;
      if (*param_1 != cVar1) {
        iVar2 = FUN_0078d074();
        iVar3 = FUN_0078d074(cVar1);
        if (iVar2 != iVar3) {
          return 0;
        }
      }
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return 1;
}


// ===== 007a024c  FUN_007a024c =====

ulong FUN_007a024c(byte *param_1,byte *param_2,byte *param_3,byte *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  byte bVar10;
  byte bVar11;
  long lVar12;
  
  if ((param_4 < (byte *)0x2) || (*param_3 != 0x2e)) {
    if (param_2 == (byte *)0x0) {
      return (ulong)(param_4 == (byte *)0x0);
    }
    pbVar8 = (byte *)0x0;
    iVar2 = 0;
    bVar11 = 1;
    pbVar5 = param_2;
    pbVar7 = param_1;
    do {
      if (*pbVar7 == 0x2a) {
        if (pbVar5 == (byte *)0x1) {
          bVar1 = true;
        }
        else {
          bVar1 = pbVar7[1] == 0x2e;
        }
        if ((pbVar8 != (byte *)0x0) || ((((bVar11 & 8) == 0 && iVar2 == 0) & bVar11 & bVar1) != 1))
        goto LAB_007a0294;
        iVar2 = 0;
        bVar11 = bVar11 & 0xf6;
        pbVar8 = pbVar7;
      }
      else {
        iVar3 = FUN_0078d054();
        if (iVar3 == 0) {
          if (*pbVar7 == 0x2d) {
            if ((bVar11 & 1) != 0) goto LAB_007a0294;
            bVar11 = bVar11 | 4;
          }
          else {
            if ((*pbVar7 != 0x2e) || ((bVar11 & 5) != 0)) goto LAB_007a0294;
            iVar2 = iVar2 + 1;
            bVar11 = 1;
          }
        }
        else {
          bVar10 = bVar11;
          if (((bVar11 & 1) != 0) && ((byte *)0x3 < pbVar5)) {
            iVar3 = FUN_0078d0a4(pbVar7,&DAT_001c8c19,4);
            bVar10 = 8;
            if (iVar3 != 0) {
              bVar10 = bVar11;
            }
          }
          bVar11 = bVar10 & 0xfa;
        }
      }
      pbVar5 = pbVar5 + -1;
      pbVar7 = pbVar7 + 1;
    } while (pbVar5 != (byte *)0x0);
    if ((((bVar11 & 5) == 0) && (1 < iVar2)) && (pbVar8 != (byte *)0x0)) {
      lVar9 = (long)pbVar8 - (long)param_1;
      pbVar7 = param_1 + (long)param_2 + ~(ulong)pbVar8;
      if (param_4 < pbVar7 + lVar9) {
        return 0;
      }
      if (lVar9 != 0) {
        lVar12 = (long)param_1 - (long)pbVar8;
        pbVar6 = param_3;
        pbVar5 = param_1;
        do {
          bVar11 = *pbVar5;
          if (bVar11 == 0) {
            return (ulong)bVar11;
          }
          bVar10 = *pbVar6;
          if (bVar11 != bVar10) {
            iVar2 = FUN_0078d074();
            iVar3 = FUN_0078d074(bVar10);
            if (iVar2 != iVar3) {
              return 0;
            }
          }
          bVar1 = lVar12 != -1;
          lVar12 = lVar12 + 1;
          pbVar5 = pbVar5 + 1;
          pbVar6 = pbVar6 + 1;
        } while (bVar1);
      }
      if (pbVar7 != (byte *)0x0) {
        pbVar5 = pbVar8 + (1 - (long)(param_2 + (long)param_1));
        pbVar6 = pbVar8 + 1;
        do {
          bVar11 = (param_3 + (long)param_4)[(long)pbVar5];
          if (bVar11 == 0) {
            return (ulong)bVar11;
          }
          bVar10 = *pbVar6;
          if (bVar11 != bVar10) {
            iVar2 = FUN_0078d074();
            iVar3 = FUN_0078d074(bVar10);
            if (iVar2 != iVar3) {
              return 0;
            }
          }
          pbVar5 = pbVar5 + 1;
          pbVar6 = pbVar6 + 1;
        } while (pbVar5 != (byte *)0x0);
      }
      if ((lVar9 == 0) && (pbVar8[1] == 0x2e)) {
        if (param_4 == pbVar7) {
          return 0;
        }
      }
      else if (((byte *)0x3 < param_4) &&
              (uVar4 = FUN_0078d0a4(param_3,&DAT_001c8c19,4), (int)uVar4 == 0)) {
        return uVar4;
      }
      lVar12 = (long)param_4 - (long)pbVar7;
      param_3 = param_3 + lVar9;
      if (lVar12 == lVar9 + 1) {
        if (lVar9 == lVar12) {
          return 1;
        }
        if (*param_3 == 0x2a) {
          return 1;
        }
      }
      else if (lVar9 == lVar12) {
        return 1;
      }
      param_4 = param_4 + (1 - (long)param_2);
      while ((iVar2 = FUN_0078d054(*param_3), iVar2 != 0 || (*param_3 == 0x2d))) {
        param_4 = param_4 + -1;
        param_3 = param_3 + 1;
        if (param_4 == (byte *)0x0) {
          return 1;
        }
      }
      return 0;
    }
  }
LAB_007a0294:
  if (param_2 != param_4) {
    return 0;
  }
  if (param_4 != (byte *)0x0) {
    do {
      bVar11 = *param_1;
      if (bVar11 == 0) {
        return (ulong)bVar11;
      }
      bVar10 = *param_3;
      if (bVar11 != bVar10) {
        iVar2 = FUN_0078d074();
        iVar3 = FUN_0078d074(bVar10);
        if (iVar2 != iVar3) {
          return 0;
        }
      }
      param_4 = param_4 + -1;
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
    } while (param_4 != (byte *)0x0);
  }
  return 1;
}


// ===== 007a05cc  FUN_007a05cc =====

bool FUN_007a05cc(void *param_1,size_t param_2,void *param_3,size_t param_4)

{
  int iVar1;
  
  if (param_2 != param_4) {
    return false;
  }
  if (param_2 != 0) {
    iVar1 = memcmp(param_1,param_3,param_2);
    return iVar1 == 0;
  }
  return true;
}


// ===== 007a061c  FUN_007a061c =====

int FUN_007a061c(int *param_1,int param_2,code *param_3,undefined4 param_4,int param_5,void *param_6
                ,size_t param_7,long *param_8)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  void *__s1;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  ulong local_70;
  char *local_68;
  
  __s1 = *(void **)(param_1 + 2);
  if (__s1 == (void *)0x0) {
    return 0;
  }
  iVar2 = *param_1;
  if (iVar2 == 0) {
    return 0;
  }
  if (0 < param_2) {
    if (param_2 != param_1[1]) {
      return 0;
    }
    if (param_2 == 0x16) {
      iVar2 = (*param_3)(__s1,(long)iVar2,param_6,param_7,param_4);
    }
    else {
      if (iVar2 != (int)param_7) {
        return 0;
      }
      if ((param_7 != 0) && (iVar2 = memcmp(__s1,param_6,param_7), iVar2 != 0)) {
        return 0;
      }
      iVar2 = 1;
    }
    if (param_8 == (long *)0x0) {
      return iVar2;
    }
    if (0 < iVar2) {
      lVar4 = FUN_0078d2d8(*(undefined8 *)(param_1 + 2),(long)*param_1);
      *param_8 = lVar4;
      if (lVar4 == 0) {
        return -1;
      }
      return iVar2;
    }
    return iVar2;
  }
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  uVar3 = FUN_0079d610(&local_68,param_1);
  if ((int)uVar3 < 0) {
    return -1;
  }
  if (param_5 == 2) {
    if (uVar3 == 0) {
LAB_007a07f0:
      iVar2 = 0;
      goto LAB_007a0864;
    }
    uVar7 = (ulong)uVar3 - (ulong)(local_68[(ulong)uVar3 - 1] == '.');
    pcVar6 = local_68;
    if (uVar7 < 2) {
LAB_007a0710:
      if (uVar7 == 0) goto LAB_007a07f0;
    }
    else if ((*local_68 == '*') && (local_68[1] == '.')) {
      pcVar6 = local_68 + 2;
      uVar7 = uVar7 - 2;
      goto LAB_007a0710;
    }
    uVar5 = 0;
    local_70 = 0;
    do {
      bVar1 = pcVar6[uVar5];
      iVar2 = FUN_0078d054(bVar1);
      if (iVar2 == 0) {
        iVar2 = 0;
        if (bVar1 < 0x3a) {
          if (bVar1 == 0x2d) {
            if (uVar5 <= local_70) goto LAB_007a07f0;
          }
          else {
            if (((bVar1 != 0x2e) || (iVar2 = 0, uVar7 - 1 <= uVar5)) || (uVar5 <= local_70))
            goto LAB_007a0864;
            local_70 = uVar5 + 1;
          }
        }
        else if ((bVar1 != 0x3a) && (bVar1 != 0x5f)) goto LAB_007a0864;
      }
      uVar5 = uVar5 + 1;
    } while (uVar7 != uVar5);
  }
  iVar2 = (*param_3)(local_68,uVar3,param_6,param_7,param_4);
  if ((param_8 != (long *)0x0) && (0 < iVar2)) {
    lVar4 = FUN_0078d2d8(local_68,uVar3);
    *param_8 = lVar4;
    if (lVar4 == 0) {
      return -1;
    }
  }
LAB_007a0864:
  FUN_0078cb3c(local_68);
  return iVar2;
}


// ===== 007a0878  FUN_007a0878 =====

undefined8 FUN_007a0878(undefined1 *param_1,ulong param_2,long param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  byte local_44 [4];
  
  uVar2 = *(uint *)(param_3 + 0x10);
  if (uVar2 == 0x10) {
LAB_007a08a0:
    uVar5 = 0;
  }
  else {
    if (param_2 == 0) {
      if (*(uint *)(param_3 + 0x14) == 0xffffffff) {
        *(uint *)(param_3 + 0x14) = uVar2;
      }
      else if (*(uint *)(param_3 + 0x14) != uVar2) goto LAB_007a08a0;
      if (2 < *(int *)(param_3 + 0x18)) goto LAB_007a08a0;
      *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1;
    }
    else {
      if (param_2 < 5) {
        if (0x10 < uVar2) {
LAB_007a0a44:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(0x5512,0x7a0a48);
          (*pcVar4)();
        }
        local_44[0] = 0xaa;
        uVar5 = FUN_0078d000(local_44,*param_1);
        bVar6 = local_44[0];
        if ((int)uVar5 == 0) {
          return uVar5;
        }
        if (param_2 == 1) {
          bVar6 = 0;
          uVar8 = (uint)local_44[0];
        }
        else {
          local_44[0] = 0xaa;
          uVar5 = FUN_0078d000(local_44,param_1[1]);
          if ((int)uVar5 == 0) {
            return uVar5;
          }
          uVar8 = (uint)local_44[0] | (uint)bVar6 << 4;
          if (param_2 == 2) {
            bVar6 = bVar6 >> 4;
          }
          else {
            local_44[0] = 0xaa;
            uVar5 = FUN_0078d000(local_44,param_1[2]);
            if ((int)uVar5 == 0) {
              return uVar5;
            }
            uVar3 = (uint)local_44[0] | uVar8 << 4;
            if (param_2 == 3) {
              bVar6 = (byte)(uVar8 >> 4);
              uVar8 = uVar3;
            }
            else {
              local_44[0] = 0xaa;
              uVar5 = FUN_0078d000(local_44,param_1[3]);
              if ((int)uVar5 == 0) {
                return uVar5;
              }
              if (param_2 != 4) {
                local_44[0] = 0xaa;
                FUN_0078d000(local_44,param_1[4]);
                return 0;
              }
              uVar8 = (uint)local_44[0] | uVar3 << 4;
              bVar6 = (byte)(uVar3 >> 4);
            }
          }
        }
        pbVar1 = (byte *)(param_3 + (ulong)uVar2);
        *pbVar1 = bVar6;
        pbVar1[1] = (byte)uVar8;
        iVar7 = *(int *)(param_3 + 0x10) + 2;
      }
      else {
        if ((0xc < (int)uVar2) || (param_1[param_2] != '\0')) goto LAB_007a08a0;
        if (0x10 < uVar2) goto LAB_007a0a44;
        uVar5 = FUN_0079fe08(param_3 + (ulong)uVar2,param_1);
        if ((int)uVar5 == 0) {
          return uVar5;
        }
        iVar7 = *(int *)(param_3 + 0x10) + 4;
      }
      *(int *)(param_3 + 0x10) = iVar7;
    }
    uVar5 = 1;
  }
  return uVar5;
}


// ===== 007a0a48  FUN_007a0a48 =====

uint FUN_007a0a48(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong __n;
  uint uVar4;
  ulong uVar5;
  
  puVar2 = (undefined8 *)FUN_007a62b4();
  if ((puVar2 == (undefined8 *)0x0) ||
     (puVar3 = (undefined8 *)FUN_007a62b4(param_2), puVar3 == (undefined8 *)0x0)) {
    uVar4 = 0xfffffffe;
  }
  else {
    __n = puVar2[1];
    uVar5 = puVar3[1];
    if (uVar5 <= __n) {
      if (uVar5 <= __n && __n != uVar5) {
        uVar4 = 1;
      }
      else if (__n == 0) {
        uVar4 = 0;
      }
      else {
        iVar1 = memcmp((void *)*puVar2,(void *)*puVar3,__n);
        uVar4 = (uint)(0 < iVar1);
        if (iVar1 < 0) {
          uVar4 = 0xffffffff;
        }
      }
    }
    else {
      uVar4 = 0xffffffff;
    }
  }
  return uVar4;
}


// ===== 007a0ad4  FUN_007a0ad4 =====

undefined4 FUN_007a0ad4(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = (*(ulong *)(param_1 + 0x34) & 0xff00ff00ff00ff00) >> 8 |
          (*(ulong *)(param_1 + 0x34) & 0xff00ff00ff00ff) << 8;
  uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
  uVar2 = uVar3 >> 0x20 | uVar3 << 0x20;
  uVar3 = (*(ulong *)(param_2 + 0x34) & 0xff00ff00ff00ff00) >> 8 |
          (*(ulong *)(param_2 + 0x34) & 0xff00ff00ff00ff) << 8;
  uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
  uVar3 = uVar3 >> 0x20 | uVar3 << 0x20;
  if (uVar2 == uVar3) {
    uVar3 = (*(ulong *)(param_1 + 0x3c) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(param_1 + 0x3c) & 0xff00ff00ff00ff) << 8;
    uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
    uVar2 = uVar3 >> 0x20 | uVar3 << 0x20;
    uVar3 = (*(ulong *)(param_2 + 0x3c) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(param_2 + 0x3c) & 0xff00ff00ff00ff) << 8;
    uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
    uVar3 = uVar3 >> 0x20 | uVar3 << 0x20;
    if (uVar2 == uVar3) {
      uVar3 = (*(ulong *)(param_1 + 0x44) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(param_1 + 0x44) & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar2 = uVar3 >> 0x20 | uVar3 << 0x20;
      uVar3 = (*(ulong *)(param_2 + 0x44) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(param_2 + 0x44) & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar3 = uVar3 >> 0x20 | uVar3 << 0x20;
      if (uVar2 == uVar3) {
        uVar3 = (*(ulong *)(param_1 + 0x4c) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(param_1 + 0x4c) & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        uVar2 = uVar3 >> 0x20 | uVar3 << 0x20;
        uVar3 = (*(ulong *)(param_2 + 0x4c) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(param_2 + 0x4c) & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        uVar3 = uVar3 >> 0x20 | uVar3 << 0x20;
        if (uVar2 == uVar3) {
          return 0;
        }
      }
    }
  }
  uVar1 = 1;
  if (uVar2 < uVar3) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


// ===== 007a0b50  FUN_007a0b50 =====

long FUN_007a0b50(long param_1)

{
  return param_1 + 0x30;
}


// ===== 007a0b5c  FUN_007a0b5c =====

void FUN_007a0b5c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)FUN_007a62b4(param_1 + 0x30);
  if (puVar2 != (undefined8 *)0x0) {
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    local_30 = 0xaaaaaaaa;
    FUN_00794eb8(*puVar2,puVar2[1],&local_40);
    puVar2 = (undefined8 *)((ulong)local_40 & 0xffffffff);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar2);
}


// ===== 007a0bd0  FUN_007a0bd0 =====

long FUN_007a0bd0(long param_1)

{
  return param_1 + 0x70;
}


// ===== 007a0bdc  FUN_007a0bdc =====

long FUN_007a0bdc(long param_1)

{
  return param_1 + 8;
}


// ===== 007a0be8  FUN_007a0be8 =====

long FUN_007a0be8(long param_1)

{
  return param_1 + 8;
}


// ===== 007a0bf4  FUN_007a0bf4 =====

void FUN_007a0bf4(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)FUN_007a62b4(param_1 + 0x70);
  if (puVar2 != (undefined8 *)0x0) {
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    local_30 = 0xaaaaaaaa;
    FUN_00794eb8(*puVar2,puVar2[1],&local_40);
    puVar2 = (undefined8 *)((ulong)local_40 & 0xffffffff);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar2);
}


// ===== 007a0c68  FUN_007a0c68 =====

undefined4 FUN_007a0c68(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  FUN_0079644c();
  FUN_0079644c(param_2);
  uVar3 = (*(ulong *)(param_1 + 0x148) & 0xff00ff00ff00ff00) >> 8 |
          (*(ulong *)(param_1 + 0x148) & 0xff00ff00ff00ff) << 8;
  uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
  uVar2 = uVar3 >> 0x20 | uVar3 << 0x20;
  uVar3 = (*(ulong *)(param_2 + 0x148) & 0xff00ff00ff00ff00) >> 8 |
          (*(ulong *)(param_2 + 0x148) & 0xff00ff00ff00ff) << 8;
  uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
  uVar3 = uVar3 >> 0x20 | uVar3 << 0x20;
  if (uVar2 == uVar3) {
    uVar3 = (*(ulong *)(param_1 + 0x150) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(param_1 + 0x150) & 0xff00ff00ff00ff) << 8;
    uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
    uVar2 = uVar3 >> 0x20 | uVar3 << 0x20;
    uVar3 = (*(ulong *)(param_2 + 0x150) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(param_2 + 0x150) & 0xff00ff00ff00ff) << 8;
    uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
    uVar3 = uVar3 >> 0x20 | uVar3 << 0x20;
    if (uVar2 == uVar3) {
      uVar3 = (*(ulong *)(param_1 + 0x158) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(param_1 + 0x158) & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar2 = uVar3 >> 0x20 | uVar3 << 0x20;
      uVar3 = (*(ulong *)(param_2 + 0x158) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(param_2 + 0x158) & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar3 = uVar3 >> 0x20 | uVar3 << 0x20;
      if (uVar2 == uVar3) {
        uVar3 = (*(ulong *)(param_1 + 0x160) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(param_1 + 0x160) & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        uVar2 = uVar3 >> 0x20 | uVar3 << 0x20;
        uVar3 = (*(ulong *)(param_2 + 0x160) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(param_2 + 0x160) & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        uVar3 = uVar3 >> 0x20 | uVar3 << 0x20;
        if (uVar2 == uVar3) {
          return 0;
        }
      }
    }
  }
  uVar1 = 1;
  if (uVar2 < uVar3) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


// ===== 007a0d10  FUN_007a0d10 =====

void FUN_007a0d10(long param_1)

{
  if (param_1 != 0) {
    FUN_007a6f0c(param_1 + 0x80);
    return;
  }
  return;
}


// ===== 007a0d24  FUN_007a0d24 =====

void FUN_007a0d24(long param_1)

{
  if (param_1 != 0) {
    FUN_007a6f58(param_1 + 0x80);
    return;
  }
  return;
}


// ===== 007a0d38  FUN_007a0d38 =====

long FUN_007a0d38(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + 0x90;
  }
  return lVar1;
}


// ===== 007a0d4c  FUN_007a0d4c =====

long FUN_007a0d4c(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = FUN_00795978();
  if ((lVar1 != 0) && (lVar2 = FUN_00795280(lVar1), lVar2 != 0)) {
    uVar4 = 0;
    do {
      FUN_007952e0(lVar1,uVar4);
      FUN_007a7ae8();
      uVar4 = uVar4 + 1;
      uVar3 = FUN_00795280(lVar1);
    } while (uVar4 < uVar3);
  }
  return lVar1;
}


// ===== 007a0db0  FUN_007a0db0 =====

void FUN_007a0db0(long *param_1)

{
  FUN_007993d8(*(undefined8 *)(*param_1 + 0x30));
  return;
}


// ===== 007a0dc0  FUN_007a0dc0 =====

void FUN_007a0dc0(long param_1)

{
  FUN_007a1388(*(undefined8 *)(param_1 + 0xc0));
  return;
}


// ===== 007a0dcc  FUN_007a0dcc =====

void FUN_007a0dcc(long param_1)

{
  FUN_007a13ac(*(undefined8 *)(param_1 + 0xc0));
  return;
}


// ===== 007a0dd8  FUN_007a0dd8 =====

void FUN_007a0dd8(long param_1)

{
  FUN_007a1458(*(undefined8 *)(param_1 + 0xc0));
  return;
}


// ===== 007a0de4  FUN_007a0de4 =====

void FUN_007a0de4(long param_1)

{
  FUN_007993d8(*(undefined8 *)(param_1 + 0xc0));
  return;
}


// ===== 007a0df0  FUN_007a0df0 =====

void FUN_007a0df0(long param_1)

{
  FUN_007993d8(*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 007a0dfc  FUN_007a0dfc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_007a0dfc(undefined8 *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined1 **__s;
  size_t sVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  undefined1 *__dest;
  long local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  if (param_2 == (undefined1 *)0x0) {
    local_d8 = FUN_00770494();
    if ((local_d8 != 0) && (lVar8 = FUN_007705c4(local_d8,200), lVar8 != 0)) {
      **(undefined1 **)(local_d8 + 8) = 0;
      if (param_1 == (undefined8 *)0x0) {
        param_2 = *(undefined1 **)(local_d8 + 8);
        FUN_0078cb3c();
        param_3 = 200;
        goto LAB_007a1134;
      }
      param_3 = 200;
      goto LAB_007a0e90;
    }
LAB_007a117c:
    FUN_007704c4(local_d8);
  }
  else if (0 < param_3) {
    if (param_1 == (undefined8 *)0x0) {
LAB_007a1134:
      FUN_0078d3e0(param_2,"NO X509_NAME",param_3);
      goto LAB_007a1184;
    }
    local_d8 = 0;
LAB_007a0e90:
    lVar8 = FUN_00795280(*param_1);
    puVar6 = _UNK_001f3be8;
    puVar5 = _DAT_001f3be0;
    if (lVar8 == 0) {
      uVar17 = 0;
    }
    else {
      uVar17 = 0;
      iVar18 = 0;
      do {
        puVar9 = (undefined8 *)FUN_007952e0(*param_1,uVar17);
        iVar7 = FUN_0078d994(*puVar9);
        if ((iVar7 == 0) || (__s = (undefined1 **)FUN_0078de70(), __s == (undefined1 **)0x0)) {
          __s = &puStack_c0;
          FUN_0076c51c(&puStack_c0,0x50,*puVar9);
        }
        sVar10 = strlen((char *)__s);
        uVar2 = *(uint *)(puVar9 + 1);
        uVar16 = (ulong)uVar2;
        if (0x100000 < (int)uVar2) {
          uVar11 = 0x53;
LAB_007a1150:
          FUN_00777eb4(0xb,0,0x87,"../../third_party/boringssl/src/crypto/x509/x509_obj.cc",uVar11);
          goto LAB_007a117c;
        }
        lVar8 = puVar9[2];
        local_d0 = (undefined1 *)0x100000001;
        puStack_c8 = (undefined1 *)0x100000001;
        if ((((uVar2 & 3) == 0) && (*(int *)((long)puVar9 + 0xc) == 0x1b)) &&
           (local_d0 = puVar5, puStack_c8 = puVar6, 0 < (int)uVar2)) {
          uVar15 = 0;
          do {
            if (*(char *)(lVar8 + uVar15) != '\0') {
              *(undefined4 *)((ulong)&local_d0 | (uVar15 & 3) << 2) = 1;
            }
            uVar15 = uVar15 + 1;
          } while (uVar16 != uVar15);
        }
        if ((int)uVar2 < 1) {
          iVar7 = 0;
        }
        else {
          uVar15 = 0;
          iVar7 = 0;
          do {
            iVar1 = iVar7;
            if ((*(int *)((ulong)&local_d0 | (uVar15 & 3) << 2) != 0) &&
               (iVar1 = iVar7 + 4, 0xffffffa0 < *(byte *)(lVar8 + uVar15) - 0x7f)) {
              iVar1 = iVar7 + 1;
            }
            iVar7 = iVar1;
            uVar15 = uVar15 + 1;
          } while (uVar16 != uVar15);
        }
        iVar7 = iVar18 + (int)sVar10 + iVar7;
        iVar1 = iVar7 + 2;
        if (0x100000 < iVar1) {
          uVar11 = 0x77;
          goto LAB_007a1150;
        }
        if (local_d8 == 0) {
          puVar12 = param_2;
          if (param_3 <= iVar1) goto joined_r0x007a1118;
        }
        else {
          lVar8 = FUN_007705c4(local_d8,(long)(iVar7 + 3));
          if (lVar8 == 0) goto LAB_007a117c;
          puVar12 = *(undefined1 **)(local_d8 + 8);
        }
        puVar12 = puVar12 + iVar18;
        __dest = puVar12 + 1;
        *puVar12 = 0x2f;
        if ((sVar10 & 0xffffffff) != 0) {
          memcpy(__dest,__s,sVar10 & 0xffffffff);
        }
        pbVar13 = __dest + (int)sVar10 + 1;
        __dest[(int)sVar10] = 0x3d;
        if (0 < (int)uVar2) {
          lVar8 = puVar9[2];
          uVar15 = 0;
          pbVar14 = pbVar13;
          do {
            pbVar13 = pbVar14;
            if (*(int *)((ulong)&local_d0 | (uVar15 & 3) << 2) != 0) {
              bVar3 = *(byte *)(lVar8 + uVar15);
              if (bVar3 - 0x7f < 0xffffffa1) {
                pbVar14[0] = 0x5c;
                pbVar14[1] = 0x78;
                pbVar14[2] = "0123456789ABCDEF"[bVar3 >> 4];
                pbVar13 = pbVar14 + 4;
                pbVar14[3] = "0123456789ABCDEF"[(ulong)bVar3 & 0xf];
              }
              else {
                pbVar13 = pbVar14 + 1;
                *pbVar14 = bVar3;
              }
            }
            uVar15 = uVar15 + 1;
            pbVar14 = pbVar13;
          } while (uVar16 != uVar15);
        }
        *pbVar13 = 0;
        uVar17 = uVar17 + 1;
        uVar16 = FUN_00795280(*param_1);
        iVar18 = iVar1;
      } while (uVar17 < uVar16);
    }
    if (local_d8 != 0) {
      param_2 = *(undefined1 **)(local_d8 + 8);
      FUN_0078cb3c();
    }
joined_r0x007a1118:
    if (uVar17 == 0) {
      *param_2 = 0;
    }
    goto LAB_007a1184;
  }
  param_2 = (undefined1 *)0x0;
LAB_007a1184:
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a11c0  FUN_007a11c0 =====

undefined8 FUN_007a11c0(long *param_1)

{
  return *(undefined8 *)(*param_1 + 0x18);
}


// ===== 007a11d0  FUN_007a11d0 =====

undefined8
FUN_007a11d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined8 local_28;
  
  puVar1 = &local_28;
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = param_1;
  }
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  _local_70 = CONCAT44(0xaaaaaaaa,param_5);
  local_28 = 0;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  pvVar4 = bsearch(&local_70,&DAT_0020f198,0x13,0x28,FUN_007a130c);
  if (pvVar4 == (void *)0x0) {
    FUN_00795d48(&DAT_00d801e0);
    if (DAT_00d80218 == 0) {
      FUN_00795d90(&DAT_00d801e0);
    }
    else {
      pvVar4 = (void *)FUN_0078e224(DAT_00d80218,&local_70,FUN_007a1328,FUN_007a1338);
      FUN_00795d90(&DAT_00d801e0);
      if (pvVar4 != (void *)0x0) goto LAB_007a1240;
    }
    iVar3 = FUN_0079c73c(puVar1,param_2,param_3,param_4,0x2000);
  }
  else {
LAB_007a1240:
    uVar2 = *(ulong *)((long)pvVar4 + 0x18) & 0x2000;
    if ((*(ulong *)((long)pvVar4 + 0x20) & 2) != 0) {
      uVar2 = *(ulong *)((long)pvVar4 + 0x18);
    }
    iVar3 = FUN_0079c74c(puVar1,param_2,param_3,param_4,uVar2,*(undefined8 *)((long)pvVar4 + 8),
                         *(undefined8 *)((long)pvVar4 + 0x10));
  }
  if (iVar3 < 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar1;
  }
  return uVar5;
}


// ===== 007a130c  FUN_007a130c =====

uint FUN_007a130c(int *param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(*param_2 < *param_1);
  if (*param_1 < *param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


// ===== 007a1328  FUN_007a1328 =====

void FUN_007a1328(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x007a1334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}


// ===== 007a1338  FUN_007a1338 =====

void FUN_007a1338(code *UNRECOVERED_JUMPTABLE,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x007a1348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,param_3);
  return;
}


// ===== 007a134c  FUN_007a134c =====

undefined1 FUN_007a134c(undefined1 *param_1)

{
  return *param_1;
}


// ===== 007a1358  FUN_007a1358 =====

long FUN_007a1358(long param_1)

{
  return param_1 + 0x40;
}


// ===== 007a1364  FUN_007a1364 =====

long FUN_007a1364(long param_1)

{
  return param_1 + 0x40;
}


// ===== 007a1370  FUN_007a1370 =====

long FUN_007a1370(long param_1)

{
  return param_1 + 0x58;
}


// ===== 007a137c  FUN_007a137c =====

long FUN_007a137c(long param_1)

{
  return param_1 + 0x58;
}


// ===== 007a1388  FUN_007a1388 =====

void FUN_007a1388(long param_1)

{
  if (param_1 != 0) {
    FUN_00795280();
  }
  return;
}


// ===== 007a13ac  FUN_007a13ac =====

ulong FUN_007a13ac(long param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  lVar4 = FUN_0078dd74(param_2);
  uVar6 = 0xffffffff;
  if ((param_1 != 0) && (lVar4 != 0)) {
    uVar1 = param_3 + 1U & ((int)(param_3 + 1U) >> 0x1f ^ 0xffffffffU);
    uVar6 = (ulong)uVar1;
    uVar2 = FUN_00795280(param_1);
    if ((int)uVar1 < (int)uVar2) {
      do {
        puVar5 = (undefined8 *)FUN_007952e0(param_1,uVar6);
        iVar3 = FUN_0078d950(*puVar5,lVar4);
        if (iVar3 == 0) goto LAB_007a1428;
        uVar6 = uVar6 + 1;
      } while (uVar2 != uVar6);
    }
    uVar6 = 0xffffffff;
  }
LAB_007a1428:
  return uVar6 & 0xffffffff;
}


// ===== 007a1440  FUN_007a1440 =====

ulong FUN_007a1440(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)(0 < *(int *)(param_1 + 8));
  }
  return param_1;
}


// ===== 007a1458  FUN_007a1458 =====

undefined8 FUN_007a1458(long param_1,uint param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (((param_1 != 0) && (-1 < (int)param_2)) && (uVar1 = FUN_00795280(), param_2 < uVar1)) {
    uVar2 = FUN_007952e0(param_1);
    return uVar2;
  }
  return 0;
}


// ===== 007a14b0  FUN_007a14b0 =====

long * FUN_007a14b0(long *param_1)

{
  if (param_1 != (long *)0x0) {
    param_1 = (long *)*param_1;
  }
  return param_1;
}


// ===== 007a14c0  FUN_007a14c0 =====

long FUN_007a14c0(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


// ===== 007a14d4  FUN_007a14d4 =====

undefined8 FUN_007a14d4(undefined8 *param_1,uint param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (((param_1 != (undefined8 *)0x0) && (-1 < (int)param_2)) &&
     (uVar1 = FUN_00795280(*param_1), param_2 < uVar1)) {
    uVar2 = FUN_007952e0(*param_1);
    return uVar2;
  }
  return 0;
}


// ===== 007a1530  FUN_007a1530 =====

void FUN_007a1530(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_00795280(*param_1);
  }
  return;
}


// ===== 007a1558  FUN_007a1558 =====

int FUN_007a1558(undefined8 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar3 = FUN_0078dd74(param_2);
  if (lVar3 == 0) {
    param_3 = -2;
  }
  else if (param_1 == (undefined8 *)0x0) {
LAB_007a15dc:
    param_3 = -1;
  }
  else {
    uVar5 = *param_1;
    if (param_3 == -1 || param_3 + 1 < 0 != SCARRY4(param_3,1)) {
      param_3 = -1;
    }
    iVar1 = FUN_00795280(uVar5);
    lVar6 = (long)(param_3 + 1);
    do {
      if (iVar1 <= (int)lVar6) goto LAB_007a15dc;
      puVar4 = (undefined8 *)FUN_007952e0(uVar5,lVar6);
      iVar2 = FUN_0078d950(*puVar4,lVar3);
      lVar6 = lVar6 + 1;
      param_3 = param_3 + 1;
    } while (iVar2 != 0);
  }
  return param_3;
}


// ===== 007a1604  FUN_007a1604 =====

long FUN_007a1604(undefined8 *param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  
  lVar3 = 0;
  if ((param_1 != (undefined8 *)0x0) && (uVar6 = (ulong)param_2, -1 < (int)param_2)) {
    uVar1 = FUN_00795280(*param_1);
    if (uVar6 < uVar1) {
      uVar4 = *param_1;
      lVar3 = FUN_007954d8(uVar4,uVar6);
      uVar1 = FUN_00795280(uVar4);
      FUN_007a6534(param_1);
      if (uVar1 != uVar6) {
        if (param_2 == 0) {
          iVar5 = *(int *)(lVar3 + 0x20);
        }
        else {
          lVar2 = FUN_007952e0(uVar4,param_2 - 1);
          iVar5 = *(int *)(lVar2 + 0x20) + 1;
        }
        lVar2 = FUN_007952e0(uVar4,uVar6);
        if ((iVar5 < *(int *)(lVar2 + 0x20)) && (uVar6 < uVar1)) {
          do {
            lVar2 = FUN_007952e0(uVar4,uVar6);
            uVar6 = uVar6 + 1;
            *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + -1;
          } while (uVar1 != uVar6);
        }
      }
    }
    else {
      lVar3 = 0;
    }
  }
  return lVar3;
}


// ===== 007a16fc  FUN_007a16fc =====

long * FUN_007a16fc(long *param_1,undefined8 param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_1 != (long *)0x0) {
    lVar8 = *param_1;
    if (lVar8 == 0) {
      lVar8 = FUN_00795214();
      *param_1 = lVar8;
      if (lVar8 == 0) {
        return (long *)0x0;
      }
    }
    uVar4 = FUN_00795280(lVar8);
    uVar1 = param_3;
    if ((int)uVar4 <= (int)param_3) {
      uVar1 = uVar4;
    }
    uVar2 = uVar4;
    if (-1 < (int)param_3) {
      uVar2 = uVar1;
    }
    bVar3 = param_4 == 0;
    FUN_007a6534(param_1);
    if (param_4 == -1) {
      if (uVar2 == 0) {
        iVar5 = 0;
        bVar3 = true;
      }
      else {
        lVar6 = FUN_007952e0(lVar8,(long)(int)(uVar2 - 1));
        iVar5 = *(int *)(lVar6 + 0x20);
        bVar3 = false;
      }
    }
    else if ((int)uVar2 < (int)uVar4) {
      lVar6 = FUN_007952e0(lVar8,(long)(int)uVar2);
      iVar5 = *(int *)(lVar6 + 0x20);
    }
    else if (uVar2 == 0) {
      iVar5 = 0;
    }
    else {
      lVar6 = FUN_007952e0(lVar8,(long)(int)(uVar2 - 1));
      iVar5 = *(int *)(lVar6 + 0x20) + 1;
    }
    param_1 = (long *)FUN_007a5bbc(param_2);
    if (param_1 != (long *)0x0) {
      *(int *)(param_1 + 4) = iVar5;
      lVar6 = FUN_007953f4(lVar8,param_1,(long)(int)uVar2);
      if (lVar6 == 0) {
        FUN_007a5b74(param_1);
        param_1 = (long *)0x0;
      }
      else {
        if (bVar3) {
          iVar5 = FUN_00795280(lVar8);
          if ((int)(uVar2 + 1) < iVar5) {
            lVar6 = (long)(int)(uVar2 + 1);
            iVar5 = ~uVar2 + iVar5;
            do {
              lVar7 = FUN_007952e0(lVar8,lVar6);
              iVar5 = iVar5 + -1;
              lVar6 = lVar6 + 1;
              *(int *)(lVar7 + 0x20) = *(int *)(lVar7 + 0x20) + 1;
            } while (iVar5 != 0);
          }
        }
        param_1 = (long *)0x1;
      }
    }
  }
  return param_1;
}


// ===== 007a1888  FUN_007a1888 =====

undefined4
FUN_007a1888(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  lVar3 = FUN_0078dd14(param_2,0);
  if (lVar3 == 0) {
    FUN_00777eb4(0xb,0,0x6f,"../../third_party/boringssl/src/crypto/x509/x509name.cc",0x115);
    FUN_00777f98(2,"name=",param_2);
  }
  else {
    plVar4 = (long *)FUN_007a5b1c();
    if (plVar4 != (long *)0x0) {
      FUN_0076c804(*plVar4);
      lVar5 = FUN_0078d840(lVar3);
      *plVar4 = lVar5;
      if ((lVar5 != 0) && (iVar1 = FUN_007a19a4(plVar4,param_3,param_4,param_5), iVar1 != 0)) {
        FUN_0076c804(lVar3);
        uVar2 = FUN_007a16fc(param_1,plVar4,param_6,param_7);
        FUN_007a5b74(plVar4);
        return uVar2;
      }
      FUN_007a5b74(plVar4);
    }
    FUN_0076c804(lVar3);
  }
  return 0;
}


// ===== 007a19a4  FUN_007a19a4 =====

undefined8 * FUN_007a19a4(undefined8 *param_1,uint param_2,char *param_3,size_t param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *local_38;
  
  puVar2 = param_1;
  if (param_1 != (undefined8 *)0x0) {
    if ((param_3 == (char *)0x0) && (param_4 != 0)) {
      puVar2 = (undefined8 *)0x0;
    }
    else if (((int)param_2 < 1) || ((param_2 >> 0xc & 1) == 0)) {
      if ((long)param_4 < 0) {
        param_4 = strlen(param_3);
      }
      puVar2 = (undefined8 *)FUN_007693d8(param_1 + 1,param_3,param_4);
      if ((int)puVar2 != 0) {
        if (param_2 != 0xffffffff) {
          *(uint *)((long)param_1 + 0xc) = param_2;
        }
        puVar2 = (undefined8 *)0x1;
      }
    }
    else {
      local_38 = param_1 + 1;
      uVar1 = FUN_0078d994(*param_1);
      lVar3 = FUN_007a11d0(&local_38,param_3,param_4,param_2,uVar1);
      puVar2 = (undefined8 *)(ulong)(lVar3 != 0);
    }
  }
  return puVar2;
}


// ===== 007a1a6c  FUN_007a1a6c =====

long * FUN_007a1a6c(long *param_1)

{
  if (param_1 != (long *)0x0) {
    param_1 = (long *)*param_1;
  }
  return param_1;
}


// ===== 007a1a7c  FUN_007a1a7c =====

void FUN_007a1a7c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_0078de60();
  *param_1 = uVar1;
  return;
}


// ===== 007a1aac  FUN_007a1aac =====

void FUN_007a1aac(undefined8 *param_1)

{
  FUN_0076c804(*param_1);
  FUN_0076e9e8(param_1[1]);
  return;
}


// ===== 007a1adc  FUN_007a1adc =====

undefined8 FUN_007a1adc(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *local_30;
  undefined1 *puStack_28;
  
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  iVar1 = FUN_00772950(param_1,&local_30,0x20000010);
  if (iVar1 == 0) {
    uVar3 = 0x3e;
  }
  else {
    lVar2 = FUN_0076c688(&local_30,0);
    if (lVar2 == 0) {
      return 0;
    }
    FUN_0076c804(*param_2);
    lVar4 = param_2[1];
    *param_2 = lVar2;
    if (puStack_28 == (undefined1 *)0x0) {
      FUN_0076e9e8(lVar4);
      param_2[1] = 0;
    }
    else {
      if (lVar4 == 0) {
        lVar4 = FUN_0076e9d8();
        param_2[1] = lVar4;
        if (lVar4 == 0) {
          return 0;
        }
      }
      uVar3 = FUN_0076bc8c(&local_30,lVar4);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
    }
    if (puStack_28 == (undefined1 *)0x0) {
      return 1;
    }
    uVar3 = 0x55;
  }
  FUN_00777eb4(0xc,0,0x6d,"../../third_party/boringssl/src/crypto/x509/x_algor.cc",uVar3);
  return 0;
}


// ===== 007a1bbc  FUN_007a1bbc =====

ulong FUN_007a1bbc(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  uVar2 = FUN_00771098(param_1,&local_50,0x20000010);
  if ((((int)uVar2 != 0) && (uVar2 = FUN_0076c49c(&local_50,*param_2,0), (int)uVar2 != 0)) &&
     ((param_2[1] == 0 || (uVar2 = FUN_0076c294(&local_50), (int)uVar2 != 0)))) {
    iVar1 = FUN_00770ae8(param_1);
    uVar2 = (ulong)(iVar1 != 0);
  }
  return uVar2;
}


// ===== 007a1c44  FUN_007a1c44 =====

undefined4 FUN_007a1c44(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00770970(&local_80);
  iVar1 = FUN_00770984(&local_80,0x20);
  if (iVar1 != 0) {
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    iVar1 = FUN_00771098(&local_80,&local_50,0x20000010);
    if ((((iVar1 != 0) && (iVar1 = FUN_0076c49c(&local_50,*param_1,0), iVar1 != 0)) &&
        ((param_1[1] == 0 || (iVar1 = FUN_0076c294(&local_50), iVar1 != 0)))) &&
       (iVar1 = FUN_00770ae8(&local_80), iVar1 != 0)) {
      uVar2 = FUN_007708b4(&local_80,param_2);
      goto LAB_007a1cf4;
    }
  }
  uVar2 = 0xffffffff;
LAB_007a1cf4:
  FUN_00770a10(&local_80);
  return uVar2;
}


// ===== 007a1d14  FUN_007a1d14 =====

undefined8 FUN_007a1d14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0078d950(*param_1,*param_2);
  if ((int)uVar1 == 0) {
    if (param_1[1] != 0 || param_2[1] != 0) {
      uVar1 = FUN_0076bc18();
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 007a1d70  FUN_007a1d70 =====

bool FUN_007a1d70(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_0078c954(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    uVar2 = FUN_0078de60();
    *puVar1 = uVar2;
  }
  *param_1 = puVar1;
  return puVar1 != (undefined8 *)0x0;
}


// ===== 007a1dbc  FUN_007a1dbc =====

void FUN_007a1dbc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_0076c804(*puVar1);
    FUN_0076e9e8(puVar1[1]);
    FUN_0078cb3c(puVar1);
  }
  *param_1 = 0;
  return;
}


// ===== 007a1e04  FUN_007a1e04 =====

undefined8 FUN_007a1e04(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if ((param_4 != 0) && (iVar1 = FUN_00772a7c(param_2,0x20000010), iVar1 == 0)) {
    return 1;
  }
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_0078c954(0x10);
    if (puVar3 == (undefined8 *)0x0) {
      *param_1 = 0;
      return 0;
    }
    *puVar3 = 0;
    puVar3[1] = 0;
    uVar2 = FUN_0078de60();
    *puVar3 = uVar2;
    *param_1 = puVar3;
  }
  uVar2 = FUN_007a1adc(param_2,puVar3);
  return uVar2;
}


// ===== 007a1e9c  FUN_007a1e9c =====

void FUN_007a1e9c(undefined8 *param_1)

{
  FUN_007a1c44(*param_1);
  return;
}


// ===== 007a1ea8  FUN_007a1ea8 =====

undefined4 FUN_007a1ea8(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  iVar1 = FUN_007a1d14(param_1 + 200,param_1 + 0x20);
  if (iVar1 == 0) {
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00770970(&local_60);
    iVar1 = FUN_00770984(&local_60,0x80);
    if ((iVar1 == 0) || (iVar1 = FUN_007a7694(&local_60,param_1), iVar1 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar3 = FUN_00770cd4(&local_60);
      uVar4 = FUN_00770d00(&local_60);
      uVar2 = FUN_007a20fc(param_1 + 200,param_1 + 0xd8,uVar3,uVar4,param_2);
    }
    FUN_00770a10(&local_60);
  }
  else {
    FUN_00777eb4(0xb,0,0x89,"../../third_party/boringssl/src/crypto/x509/x_all.cc",0x28);
    uVar2 = 0;
  }
  return uVar2;
}


// ===== 007a1f8c  FUN_007a1f8c =====

undefined4 FUN_007a1f8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_18;
  
  local_18 = 0;
  iVar1 = FUN_007a79e4(param_1,&local_18);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0072a5ac(local_18,iVar1,param_3,param_4,param_2,0);
    FUN_0078cb3c(local_18);
  }
  return uVar2;
}


// ===== 007a200c  FUN_007a200c =====

void FUN_007a200c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_007a2d3c(PTR_DAT_00d528a8,param_2,param_1,param_3,param_4);
  return;
}


// ===== 007a202c  FUN_007a202c =====

undefined4 FUN_007a202c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_8;
  
  local_8 = 0;
  iVar1 = FUN_007a6fc8(param_2,&local_8);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0076fa54(param_1,local_8,iVar1);
    FUN_0078cb3c(local_8);
  }
  return uVar2;
}


// ===== 007a2094  FUN_007a2094 =====

undefined4 FUN_007a2094(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_8;
  
  local_8 = 0;
  iVar1 = FUN_007a2df4(param_2,&local_8);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0076fa54(param_1,local_8,iVar1);
    FUN_0078cb3c(local_8);
  }
  return uVar2;
}


// ===== 007a20fc  FUN_007a20fc =====

undefined4
FUN_007a20fc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 *puStack_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_5 == 0) {
    uVar3 = 0x43;
    uVar4 = 0x26;
LAB_007a2198:
    FUN_00777eb4(0xb,0,uVar3,"../../third_party/boringssl/src/crypto/x509/a_verify.cc",uVar4);
    uVar5 = 0;
    goto LAB_007a224c;
  }
  local_148 = &DAT_aaaaaaaaaaaaaaaa;
  if (*(int *)(param_2 + 4) == 3) {
    iVar2 = FUN_00769b90(param_2,&local_148);
    if (iVar2 == 0) {
      uVar3 = 0x6d;
      uVar4 = 0x2d;
      goto LAB_007a2198;
    }
  }
  else {
    iVar2 = FUN_00769780(param_2);
    local_148 = (undefined1 *)(long)iVar2;
  }
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
  local_140 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  local_120 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_110 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0072a6c8(&local_140);
  iVar2 = FUN_007a2310(&local_140,param_1,param_5);
  if (iVar2 == 0) {
LAB_007a2240:
    uVar5 = 0;
  }
  else {
    uVar3 = FUN_0076978c(param_2);
    iVar2 = FUN_0072b2ac(&local_140,uVar3,local_148,param_3,param_4);
    if (iVar2 == 0) {
      FUN_00777eb4(0xb,0,6,"../../third_party/boringssl/src/crypto/x509/a_verify.cc",0x3a);
      goto LAB_007a2240;
    }
    uVar5 = 1;
  }
  FUN_0072a770(&local_140);
LAB_007a224c:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a2284  FUN_007a2284 =====

undefined4
FUN_007a2284(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long local_38;
  
  local_38 = 0;
  iVar2 = FUN_0076d2d0(param_4,&local_38,param_1);
  lVar1 = local_38;
  if (iVar2 < 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_007a20fc(param_2,param_3,local_38,iVar2,param_5);
    if (lVar1 != 0) {
      FUN_0078cb3c(lVar1);
    }
  }
  return uVar3;
}


// ===== 007a2310  FUN_007a2310 =====

undefined8 FUN_007a2310(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int local_28;
  int local_24;
  
  uVar4 = FUN_0078d994(*param_2);
  iVar1 = (int)uVar4;
  local_28 = -0x55555556;
  local_24 = -0x55555556;
  iVar2 = FUN_007a2500(uVar4,&local_24,&local_28);
  iVar3 = local_28;
  if (iVar2 == 0) {
    uVar4 = 0xc;
    uVar6 = 0xb8;
    uVar7 = 0x6f;
  }
  else {
    iVar2 = FUN_007789f4(param_3);
    if ((iVar3 == iVar2) || ((iVar1 == 0x390 && (iVar3 = FUN_007789f4(param_3), iVar3 == 0x390)))) {
      if (local_24 == 0) {
        if ((iVar1 - 0x3c7U < 3) || (iVar1 == 0x3b5)) {
          if (param_2[1] == 0) {
            lVar5 = 0;
LAB_007a24d4:
            uVar4 = FUN_0072af08(param_1,0,lVar5,0,param_3);
            return uVar4;
          }
          uVar4 = 0xb;
          uVar6 = 0x88;
          uVar7 = 0x8c;
        }
        else {
          if (iVar1 == 0x390) {
            uVar4 = FUN_0079e4d0(param_1,param_2,param_3);
            return uVar4;
          }
          uVar4 = 0xc;
          uVar6 = 0xb8;
          uVar7 = 0x91;
        }
      }
      else if ((local_24 == 0x101) || (local_24 == 4)) {
        uVar4 = 0xc;
        uVar6 = 0x6f;
        uVar7 = 0x7e;
      }
      else if (((int *)param_2[1] == (int *)0x0) || (*(int *)param_2[1] == 5)) {
        lVar5 = FUN_007755a0();
        if (lVar5 != 0) goto LAB_007a24d4;
        uVar4 = 0xc;
        uVar6 = 0xb7;
        uVar7 = 0xa2;
      }
      else {
        uVar4 = 0xb;
        uVar6 = 0x88;
        uVar7 = 0x9b;
      }
    }
    else {
      uVar4 = 0xc;
      uVar6 = 0xbd;
      uVar7 = 0x78;
    }
  }
  FUN_00777eb4(uVar4,0,uVar6,"../../third_party/boringssl/src/crypto/x509/algorithm.cc",uVar7);
  return 0;
}


// ===== 007a2500  FUN_007a2500 =====

undefined8 FUN_007a2500(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  
  if (param_1 < 0x319) {
    if (param_1 < 0x1a0) {
      if (param_1 < 0x46) {
        if (param_1 == 8) {
          puVar1 = &UNK_0020f49c;
        }
        else {
          if (param_1 != 0x41) {
            return 0;
          }
          puVar1 = &UNK_0020f4a8;
        }
      }
      else if (param_1 == 0x46) {
        puVar1 = &UNK_0020f4f0;
      }
      else if (param_1 == 0x71) {
        puVar1 = &UNK_0020f4e4;
      }
      else {
        if (param_1 != 0x18c) {
          return 0;
        }
        puVar1 = &UNK_0020f490;
      }
    }
    else if (param_1 < 0x29d) {
      if (param_1 == 0x1a0) {
        puVar1 = &UNK_0020f514;
      }
      else {
        if (param_1 != 0x29c) {
          return 0;
        }
        puVar1 = &UNK_0020f4c0;
      }
    }
    else if (param_1 == 0x29d) {
      puVar1 = &UNK_0020f4cc;
    }
    else if (param_1 == 0x29e) {
      puVar1 = &UNK_0020f4d8;
    }
    else {
      if (param_1 != 0x29f) {
        return 0;
      }
      puVar1 = &UNK_0020f4b4;
    }
  }
  else if (param_1 < 0x323) {
    if (param_1 < 0x31b) {
      if (param_1 == 0x319) {
        puVar1 = &UNK_0020f520;
      }
      else {
        if (param_1 != 0x31a) {
          return 0;
        }
        puVar1 = &UNK_0020f52c;
      }
    }
    else if (param_1 == 0x31b) {
      puVar1 = &UNK_0020f538;
    }
    else if (param_1 == 0x31c) {
      puVar1 = &UNK_0020f544;
    }
    else {
      if (param_1 != 0x322) {
        return 0;
      }
      puVar1 = &UNK_0020f4fc;
    }
  }
  else if (param_1 < 0x3c7) {
    if (param_1 == 0x323) {
      puVar1 = &UNK_0020f508;
    }
    else if (param_1 == 0x390) {
      puVar1 = &UNK_0020f550;
    }
    else {
      if (param_1 != 0x3b5) {
        return 0;
      }
      puVar1 = &UNK_0020f55c;
    }
  }
  else if (param_1 == 0x3c7) {
    puVar1 = &UNK_0020f568;
  }
  else if (param_1 == 0x3c8) {
    puVar1 = &UNK_0020f574;
  }
  else {
    if (param_1 != 0x3c9) {
      return 0;
    }
    puVar1 = &UNK_0020f580;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(puVar1 + 4);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(puVar1 + 8);
  }
  return 1;
}


// ===== 007a2704  FUN_007a2704 =====

long * FUN_007a2704(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_0078c9d4(0x50);
  if (plVar1 != (long *)0x0) {
    plVar1[3] = 0;
    plVar1[2] = 0;
    plVar1[5] = 0;
    plVar1[4] = 0;
    plVar1[7] = 0;
    plVar1[6] = 0;
    plVar1[9] = 0;
    plVar1[8] = 0;
    plVar1[1] = 0;
    *plVar1 = 0;
    lVar2 = FUN_0078e114(FUN_007a2788,FUN_007a27b0);
    *plVar1 = lVar2;
    if (lVar2 == 0) {
      FUN_0078cb3c(plVar1);
      plVar1 = (long *)0x0;
    }
    else {
      FUN_00795d20(plVar1 + 1);
      FUN_00793258(plVar1 + 8,0x10);
    }
  }
  return plVar1;
}


// ===== 007a2788  FUN_007a2788 =====

void FUN_007a2788(long *param_1)

{
  FUN_007a2b34(*param_1 + 0x40,param_1[1],param_1[2]);
  return;
}


// ===== 007a27b0  FUN_007a27b0 =====

int FUN_007a27b0(long param_1,long param_2)

{
  int iVar1;
  size_t __n;
  
  __n = *(size_t *)(param_1 + 0x10);
  if (__n != *(size_t *)(param_2 + 0x10)) {
    return 1;
  }
  if (__n != 0) {
    iVar1 = memcmp(*(void **)(param_1 + 8),*(void **)(param_2 + 8),__n);
    return iVar1;
  }
  return 0;
}


// ===== 007a27e4  FUN_007a27e4 =====

void FUN_007a27e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_007a27f4(param_1,param_2,0,param_3);
  return;
}


// ===== 007a27f4  FUN_007a27f4 =====

undefined8 * FUN_007a27f4(undefined8 param_1,long param_2,int param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 local_48;
  
  if (param_4 != (undefined8 *)0x0) {
    local_48 = 0xaaaaaaaa00000000;
    local_60 = param_4;
    uStack_58 = param_1;
    local_50 = param_2;
    FUN_00795d48(param_4 + 1);
    puVar2 = (undefined8 *)FUN_0078e224(*param_4,&local_60,FUN_007a2b10,FUN_007a2b20);
    if ((param_3 == 0) || (puVar2 == (undefined8 *)0x0)) {
      if (puVar2 != (undefined8 *)0x0) goto LAB_007a292c;
    }
    else if (*(int *)((long)puVar2 + 0x1c) != 0) {
LAB_007a292c:
      FUN_00793428(puVar2 + 3);
      FUN_00795d90(param_4 + 1);
      return puVar2;
    }
    FUN_00795d90(param_4 + 1);
  }
  puVar2 = (undefined8 *)FUN_0078c9d4(0x20);
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  if (param_3 == 0) {
    lVar4 = FUN_0078cf30(param_1,param_2);
    puVar2[1] = lVar4;
    if ((param_2 != 0) && (lVar4 == 0)) {
      FUN_0078cb3c(puVar2);
      return (undefined8 *)0x0;
    }
  }
  else {
    puVar2[1] = param_1;
    *(undefined4 *)((long)puVar2 + 0x1c) = 1;
  }
  puVar2[2] = param_2;
  *(undefined4 *)(puVar2 + 3) = 1;
  if (param_4 == (undefined8 *)0x0) {
    return puVar2;
  }
  *puVar2 = param_4;
  FUN_00795d6c(param_4 + 1);
  puVar3 = (undefined8 *)FUN_0078e224(*param_4,puVar2,FUN_007a2b10,FUN_007a2b20);
  if ((param_3 == 0) || (puVar3 == (undefined8 *)0x0)) {
    if (puVar3 == (undefined8 *)0x0) goto LAB_007a28ec;
  }
  else if (*(int *)((long)puVar3 + 0x1c) == 0) {
LAB_007a28ec:
    local_60 = (undefined8 *)0x0;
    iVar1 = FUN_0078e368(*param_4,&local_60,puVar2,FUN_007a2b10,FUN_007a2b20);
    FUN_00795db4(param_4 + 1);
    if (iVar1 != 0) {
      return puVar2;
    }
    puVar3 = (undefined8 *)0x0;
    iVar1 = *(int *)((long)puVar2 + 0x1c);
    goto joined_r0x007a29c4;
  }
  FUN_00793428(puVar3 + 3);
  FUN_00795db4(param_4 + 1);
  iVar1 = *(int *)((long)puVar2 + 0x1c);
joined_r0x007a29c4:
  if (iVar1 == 0) {
    FUN_0078cb3c(puVar2[1]);
  }
  FUN_0078cb3c(puVar2);
  return puVar3;
}


// ===== 007a29cc  FUN_007a29cc =====

void FUN_007a29cc(undefined8 *param_1,undefined8 param_2)

{
  FUN_007a27f4(*param_1,param_1[1],0,param_2);
  return;
}


// ===== 007a29e8  FUN_007a29e8 =====

void FUN_007a29e8(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 == (undefined8 *)0x0) {
    iVar1 = FUN_0079347c(param_1 + 3);
    if (iVar1 == 0) {
      return;
    }
  }
  else {
    FUN_00795d6c(puVar3 + 1);
    iVar1 = FUN_0079347c(param_1 + 3);
    if (iVar1 == 0) {
      FUN_00795db4(*param_1 + 8);
      return;
    }
    plVar2 = (long *)FUN_0078e224(*puVar3,param_1,FUN_007a2b10,FUN_007a2b20);
    if (plVar2 == param_1) {
      FUN_0078e540(*puVar3,param_1,FUN_007a2b10,FUN_007a2b20);
    }
    FUN_00795db4(*param_1 + 8);
  }
  if (*(int *)((long)param_1 + 0x1c) == 0) {
    FUN_0078cb3c(param_1[1]);
  }
  FUN_0078cb3c(param_1);
  return;
}


// ===== 007a2ac4  FUN_007a2ac4 =====

undefined8 FUN_007a2ac4(long param_1)

{
  FUN_00793428(param_1 + 0x18);
  return 1;
}


// ===== 007a2ae8  FUN_007a2ae8 =====

undefined8 FUN_007a2ae8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


// ===== 007a2af4  FUN_007a2af4 =====

undefined8 FUN_007a2af4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 007a2b00  FUN_007a2b00 =====

void FUN_007a2b00(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = *(undefined8 *)(param_1 + 8);
  param_2[1] = uVar1;
  return;
}


// ===== 007a2b10  FUN_007a2b10 =====

void FUN_007a2b10(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x007a2b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}


// ===== 007a2b20  FUN_007a2b20 =====

void FUN_007a2b20(code *UNRECOVERED_JUMPTABLE,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x007a2b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,param_3);
  return;
}


// ===== 007a2b34  FUN_007a2b34 =====

ulong FUN_007a2b34(ulong *param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 local_28;
  
  uVar6 = *param_1 ^ 0x736f6d6570736575;
  uVar4 = param_1[1] ^ 0x646f72616e646f6d;
  uVar5 = *param_1 ^ 0x6c7967656e657261;
  uVar7 = param_1[1] ^ 0x7465646279746573;
  puVar1 = param_2;
  uVar2 = param_3;
  if (7 < param_3) {
    do {
      param_2 = puVar1 + 1;
      uVar6 = uVar6 + uVar4;
      uVar3 = uVar6 ^ (uVar4 >> 0x33 | uVar4 << 0xd);
      uVar2 = uVar2 - 8;
      uVar7 = *puVar1 ^ uVar7;
      uVar4 = uVar7 + uVar5 ^ (uVar7 >> 0x30 | uVar7 << 0x10);
      uVar7 = uVar7 + uVar5 + uVar3;
      uVar5 = uVar7 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
      uVar6 = uVar4 + (uVar6 >> 0x20 | uVar6 << 0x20);
      uVar4 = uVar6 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
      uVar6 = uVar6 + uVar5;
      uVar5 = uVar6 ^ (uVar5 >> 0x33 | uVar5 << 0xd);
      uVar7 = uVar4 + (uVar7 >> 0x20 | uVar7 << 0x20);
      uVar3 = uVar7 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
      uVar7 = uVar7 + uVar5;
      uVar4 = uVar7 ^ (uVar5 >> 0x2f | uVar5 << 0x11);
      uVar5 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar6 = uVar3 + (uVar6 >> 0x20 | uVar6 << 0x20);
      uVar7 = uVar6 ^ (uVar3 >> 0x2b | uVar3 << 0x15);
      uVar6 = uVar6 ^ *puVar1;
      puVar1 = param_2;
    } while (7 < uVar2);
  }
  local_28 = 0;
  if (uVar2 != 0) {
    memcpy(&local_28,param_2,uVar2);
  }
  local_28 = CONCAT17((char)param_3,(undefined7)local_28);
  uVar6 = uVar6 + uVar4;
  uVar3 = uVar6 ^ (uVar4 >> 0x33 | uVar4 << 0xd);
  uVar7 = local_28 ^ uVar7;
  uVar4 = uVar7 + uVar5 ^ (uVar7 >> 0x30 | uVar7 << 0x10);
  uVar2 = uVar7 + uVar5 + uVar3;
  uVar5 = uVar2 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar6 = uVar4 + (uVar6 >> 0x20 | uVar6 << 0x20);
  uVar7 = uVar6 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar6 = uVar6 + uVar5;
  uVar4 = uVar6 ^ (uVar5 >> 0x33 | uVar5 << 0xd);
  uVar2 = uVar7 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar7 = uVar2 ^ (uVar7 >> 0x30 | uVar7 << 0x10);
  uVar2 = uVar2 + uVar4;
  uVar4 = uVar2 ^ (uVar4 >> 0x2f | uVar4 << 0x11);
  uVar6 = uVar7 + (uVar6 >> 0x20 | uVar6 << 0x20);
  uVar7 = uVar6 ^ (uVar7 >> 0x2b | uVar7 << 0x15);
  uVar6 = (uVar6 ^ local_28) + uVar4;
  uVar2 = ((uVar2 >> 0x20 | uVar2 << 0x20) ^ 0xff) + uVar7;
  uVar4 = uVar6 ^ (uVar4 >> 0x33 | uVar4 << 0xd);
  uVar7 = uVar2 ^ (uVar7 >> 0x30 | uVar7 << 0x10);
  uVar2 = uVar4 + uVar2;
  uVar6 = uVar7 + (uVar6 >> 0x20 | uVar6 << 0x20);
  uVar4 = uVar2 ^ (uVar4 >> 0x2f | uVar4 << 0x11);
  uVar7 = uVar6 ^ (uVar7 >> 0x2b | uVar7 << 0x15);
  uVar6 = uVar4 + uVar6;
  uVar2 = (uVar2 >> 0x20 | uVar2 << 0x20) + uVar7;
  uVar4 = uVar6 ^ (uVar4 >> 0x33 | uVar4 << 0xd);
  uVar7 = uVar2 ^ (uVar7 >> 0x30 | uVar7 << 0x10);
  uVar2 = uVar4 + uVar2;
  uVar6 = uVar7 + (uVar6 >> 0x20 | uVar6 << 0x20);
  uVar4 = uVar2 ^ (uVar4 >> 0x2f | uVar4 << 0x11);
  uVar7 = uVar6 ^ (uVar7 >> 0x2b | uVar7 << 0x15);
  uVar6 = uVar4 + uVar6;
  uVar2 = (uVar2 >> 0x20 | uVar2 << 0x20) + uVar7;
  uVar4 = uVar6 ^ (uVar4 >> 0x33 | uVar4 << 0xd);
  uVar7 = uVar2 ^ (uVar7 >> 0x30 | uVar7 << 0x10);
  uVar2 = uVar4 + uVar2;
  uVar6 = uVar7 + (uVar6 >> 0x20 | uVar6 << 0x20);
  uVar4 = uVar2 ^ (uVar4 >> 0x2f | uVar4 << 0x11);
  uVar7 = uVar6 ^ (uVar7 >> 0x2b | uVar7 << 0x15);
  uVar2 = (uVar2 >> 0x20 | uVar2 << 0x20) + uVar7;
  uVar6 = uVar4 + uVar6 ^ (uVar4 >> 0x33 | uVar4 << 0xd);
  uVar7 = uVar2 ^ (uVar7 >> 0x30 | uVar7 << 0x10);
  uVar2 = uVar6 + uVar2;
  return (uVar7 >> 0x2b | uVar7 << 0x15) ^ (uVar6 >> 0x2f | uVar6 << 0x11) ^
         (uVar2 >> 0x20 | uVar2 << 0x20) ^ uVar2;
}


// ===== 007a2d3c  FUN_007a2d3c =====

undefined4
FUN_007a2d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  long local_18;
  
  local_18 = 0;
  iVar1 = FUN_0076d2d0(param_3,&local_18,param_1);
  if (local_18 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0072a5ac(local_18,(long)iVar1,param_4,param_5,param_2,0);
    FUN_0078cb3c(local_18);
  }
  return uVar2;
}


// ===== 007a2dc8  FUN_007a2dc8 =====

bool FUN_007a2dc8(long param_1)

{
  return param_1 - 1U < 100000000;
}


// ===== 007a2de4  FUN_007a2de4 =====

void FUN_007a2de4(void)

{
  FUN_0076a75c();
  return;
}


// ===== 007a2df4  FUN_007a2df4 =====

void FUN_007a2df4(undefined8 param_1,undefined8 param_2)

{
  FUN_0076d2d0(param_1,param_2,&DAT_00d36eb8);
  return;
}


// ===== 007a2e04  FUN_007a2e04 =====

void FUN_007a2e04(undefined8 param_1)

{
  FUN_0076e060(param_1,&DAT_00d36eb8);
  return;
}


// ===== 007a2e14  FUN_007a2e14 =====

long FUN_007a2e14(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 local_30;
  ulong local_28;
  undefined8 local_8;
  
  local_8 = 0;
  uVar1 = FUN_0076d2d0(param_1,&local_8,&DAT_00d36eb8);
  if ((int)uVar1 < 0) {
    lVar2 = 0;
  }
  else {
    local_28 = (ulong)uVar1;
    local_30 = local_8;
    lVar2 = FUN_00779210(&local_30);
    if ((lVar2 == 0) || (local_28 != 0)) {
      FUN_00777eb4(0x13,0,0x68,"../../third_party/boringssl/src/crypto/pkcs8/pkcs8_x509.cc",0x50);
      FUN_00778828(lVar2);
      lVar2 = 0;
    }
    FUN_0078cb3c(local_8);
  }
  return lVar2;
}


// ===== 007a2eb4  FUN_007a2eb4 =====

long FUN_007a2eb4(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  undefined1 *local_8;
  
  local_8 = (undefined1 *)0x0;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  iVar1 = FUN_00770984(&local_50,0);
  if ((((iVar1 != 0) && (iVar1 = FUN_007791c0(&local_50,param_1), iVar1 != 0)) &&
      (iVar1 = FUN_00770a30(&local_50,&local_8,&local_58), iVar1 != 0)) && (-1 < (long)local_58)) {
    local_60 = local_8;
    lVar2 = FUN_0076a75c(0,&local_60,local_58,&DAT_00d36eb8);
    if ((lVar2 == 0) || (local_60 != local_8 + (long)local_58)) {
      FUN_0076e060(lVar2,&DAT_00d36eb8);
      FUN_00777eb4(0x13,0,0x68,"../../third_party/boringssl/src/crypto/pkcs8/pkcs8_x509.cc",0x6a);
      lVar2 = 0;
    }
    FUN_0078cb3c(local_8);
    return lVar2;
  }
  FUN_00770a10(&local_50);
  FUN_00777eb4(0x13,0,0x69,"../../third_party/boringssl/src/crypto/pkcs8/pkcs8_x509.cc",0x61);
  FUN_0078cb3c(local_8);
  return 0;
}


// ===== 007a2fdc  FUN_007a2fdc =====

undefined8 FUN_007a2fdc(undefined8 param_1,char *param_2,int param_3)

{
  uint uVar1;
  size_t sVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_40;
  ulong local_38;
  undefined8 local_18;
  
  if ((param_2 == (char *)0x0) || (param_3 != -1)) {
    sVar2 = (size_t)param_3;
  }
  else {
    sVar2 = strlen(param_2);
  }
  local_18 = 0;
  uVar1 = FUN_007a6fc8(param_1,&local_18);
  if ((int)uVar1 < 0) {
    uVar4 = 0;
    lVar3 = 0;
  }
  else {
    local_38 = (ulong)uVar1;
    local_40 = local_18;
    lVar3 = FUN_007a3c90(&local_40,param_2,sVar2);
    if ((lVar3 == 0) || (local_38 != 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_007a2eb4(lVar3);
    }
  }
  FUN_0078cb3c(local_18);
  FUN_00778828(lVar3);
  return uVar4;
}


// ===== 007a30a8  FUN_007a30a8 =====

long FUN_007a30a8(undefined4 param_1,undefined8 param_2,char *param_3,int param_4,undefined8 param_5
                 ,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  long lVar4;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  
  if ((param_3 == (char *)0x0) || (param_4 != -1)) {
    sVar2 = (size_t)param_4;
  }
  else {
    sVar2 = strlen(param_3);
  }
  lVar3 = FUN_007a2e14(param_8);
  if (lVar3 == 0) {
    return 0;
  }
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = (undefined1 *)0x0;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  iVar1 = FUN_00770984(&local_a0,0x80);
  if (((iVar1 == 0) ||
      (iVar1 = FUN_007a3d80(&local_a0,param_1,param_2,param_3,sVar2,param_5,param_6,param_7,lVar3),
      iVar1 == 0)) || (iVar1 = FUN_00770a30(&local_a0,&local_58,&local_68), iVar1 == 0)) {
    FUN_00770a10(&local_a0);
  }
  else {
    local_60 = local_58;
    lVar4 = FUN_007a6fb8(0,&local_60,local_68);
    if ((lVar4 != 0) && (local_60 == local_58 + (long)local_68)) goto LAB_007a31e4;
    FUN_00777eb4(0x13,0,0x44,"../../third_party/boringssl/src/crypto/pkcs8/pkcs8_x509.cc",0xba);
    FUN_007a6fd8(lVar4);
  }
  lVar4 = 0;
LAB_007a31e4:
  FUN_0078cb3c(local_58);
  FUN_00778828(lVar3);
  return lVar4;
}


// ===== 007a3220  FUN_007a3220 =====

void FUN_007a3220(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x007a322c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}


// ===== 007a3230  FUN_007a3230 =====

undefined4
FUN_007a3230(undefined1 *param_1,undefined1 *param_2,long param_3,ulong param_4,int param_5,
            uint param_6,ulong param_7,void *param_8,undefined8 param_9)

{
  ulong uVar1;
  uint uVar2;
  size_t __n;
  long lVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  ulong __n_00;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  undefined4 uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong local_2c0;
  uint local_2b4;
  ulong local_2b0;
  long local_2a8;
  undefined1 *local_2a0;
  undefined1 *puStack_298;
  undefined1 *local_290;
  undefined1 *puStack_288;
  undefined1 *puStack_280;
  undefined1 *puStack_278;
  undefined1 *local_270;
  undefined1 *puStack_268;
  undefined1 *puStack_260;
  undefined1 *puStack_258;
  undefined1 *local_250;
  undefined1 *puStack_248;
  undefined1 *puStack_240;
  undefined1 *puStack_238;
  undefined1 *local_230;
  undefined1 *puStack_228;
  undefined1 *local_220;
  undefined1 *puStack_218;
  undefined1 *puStack_210;
  undefined1 *puStack_208;
  undefined1 *local_200;
  undefined1 *puStack_1f8;
  undefined1 *puStack_1f0;
  undefined1 *puStack_1e8;
  undefined1 *local_1e0;
  undefined1 *puStack_1d8;
  undefined1 *local_1d0;
  undefined1 *puStack_1c8;
  undefined1 *local_1c0;
  undefined1 *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  undefined1 *local_1a0;
  undefined1 *puStack_198;
  undefined1 *puStack_190;
  undefined1 *puStack_188;
  undefined1 *local_180;
  undefined1 *puStack_178;
  undefined1 *puStack_170;
  undefined1 *puStack_168;
  undefined1 *local_160;
  undefined1 *puStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 *puStack_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  if (param_6 == 0) {
    FUN_00777eb4(0x13,0,0x81,"../../third_party/boringssl/src/crypto/pkcs8/pkcs8.cc",0x46);
    uVar12 = 0;
    goto LAB_007a3434;
  }
  puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
  local_160 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_150 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
  local_140 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  local_120 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_110 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0072a6c8(&local_160);
  local_2b0 = 0;
  local_2a8 = 0;
  if (param_1 == (undefined1 *)0x0) {
LAB_007a3350:
    __n_00 = FUN_0072a6bc();
    puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
    local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
    local_1d0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_1c0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1b0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
    local_1a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_190 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
    local_180 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_170 = &DAT_aaaaaaaaaaaaaaaa;
    if (__n_00 != 0) {
      memset(&local_1e0,param_5,__n_00);
    }
    uVar13 = (param_4 + __n_00) - 1;
    if ((uVar13 < param_4) || (CARRY8(__n_00 - 1,local_2b0))) {
      FUN_00777eb4(0x13,0,0x45,"../../third_party/boringssl/src/crypto/pkcs8/pkcs8.cc",0x6c);
      goto LAB_007a3414;
    }
    uVar14 = 0;
    if (__n_00 != 0) {
      uVar14 = uVar13 / __n_00;
    }
    uVar13 = 0;
    if (__n_00 != 0) {
      uVar13 = ((__n_00 - 1) + local_2b0) / __n_00;
    }
    uVar14 = uVar14 * __n_00;
    uVar13 = uVar13 * __n_00;
    uVar1 = uVar13 + uVar14;
    if (CARRY8(uVar13,uVar14)) {
      FUN_00777eb4(0x13,0,0x45,"../../third_party/boringssl/src/crypto/pkcs8/pkcs8.cc",0x73);
      goto LAB_007a3414;
    }
    lVar15 = FUN_0078c954(uVar1);
    if ((uVar1 != 0) && (lVar15 == 0)) goto LAB_007a3418;
    if (uVar14 != 0) {
      uVar10 = 0;
      lVar9 = 0;
      do {
        *(undefined1 *)(lVar15 + uVar10) = *(undefined1 *)(param_3 + lVar9);
        uVar10 = uVar10 + 1;
        lVar3 = 0;
        if (lVar9 + 1U != param_4) {
          lVar3 = lVar9 + 1;
        }
        lVar9 = lVar3;
      } while (uVar10 < uVar14);
    }
    if (uVar13 != 0) {
      uVar10 = 0;
      do {
        uVar4 = 0;
        if (local_2b0 != 0) {
          uVar4 = uVar10 / local_2b0;
        }
        *(undefined1 *)(lVar15 + uVar14 + uVar10) =
             *(undefined1 *)(local_2a8 + (uVar10 - uVar4 * local_2b0));
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar13);
    }
    if (param_7 != 0) {
      uVar2 = param_6;
      if (param_6 < 3) {
        uVar2 = 2;
      }
      local_2b4 = 0xaaaaaaaa;
      puStack_218 = &DAT_aaaaaaaaaaaaaaaa;
      local_220 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_208 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_210 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1f8 = &DAT_aaaaaaaaaaaaaaaa;
      local_200 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1e8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1f0 = &DAT_aaaaaaaaaaaaaaaa;
      iVar7 = FUN_0072a9e4(&local_160,param_9,0);
      if (iVar7 != 0) {
        local_2c0 = param_7;
        do {
          iVar7 = FUN_0072aa24(&local_160,&local_1e0,__n_00);
          if (((iVar7 == 0) || (iVar7 = FUN_0072aa24(&local_160,lVar15,uVar1), iVar7 == 0)) ||
             (iVar7 = FUN_0072aa4c(&local_160,&local_220,&local_2b4), iVar7 == 0)) break;
          iVar7 = uVar2 - 1;
          if (param_6 != 1) {
            do {
              iVar8 = FUN_0072a9e4(&local_160,param_9,0);
              if (((iVar8 == 0) ||
                  (iVar8 = FUN_0072aa24(&local_160,&local_220,local_2b4), iVar8 == 0)) ||
                 (iVar8 = FUN_0072aa4c(&local_160,&local_220,&local_2b4), iVar8 == 0))
              goto LAB_007a3418;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          uVar13 = (ulong)local_2b4;
          __n = local_2c0;
          if (uVar13 <= local_2c0) {
            __n = uVar13;
          }
          if (local_2b4 != 0) {
            memcpy(param_8,&local_220,__n);
          }
          local_2c0 = local_2c0 - __n;
          if (local_2c0 == 0) goto LAB_007a3720;
          param_8 = (void *)((long)param_8 + __n);
          uVar14 = 0;
          puStack_228 = &DAT_aaaaaaaaaaaaaaaa;
          local_230 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_288 = &DAT_aaaaaaaaaaaaaaaa;
          local_290 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_278 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_280 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_268 = &DAT_aaaaaaaaaaaaaaaa;
          local_270 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_258 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_260 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_248 = &DAT_aaaaaaaaaaaaaaaa;
          local_250 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_238 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_240 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_298 = &DAT_aaaaaaaaaaaaaaaa;
          local_2a0 = &DAT_aaaaaaaaaaaaaaaa;
          uVar10 = 0;
          do {
            if ((0x3f < uVar10) || (0x7f < uVar14)) {
LAB_007a3728:
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(0x5512,0x7a372c);
              (*pcVar6)();
            }
            *(undefined1 *)((long)&local_2a0 + uVar14) = *(undefined1 *)((long)&local_220 + uVar10);
            uVar14 = uVar14 + 1;
            uVar4 = 0;
            if (uVar10 + 1 != uVar13) {
              uVar4 = uVar10 + 1;
            }
            uVar10 = uVar4;
          } while (__n_00 != uVar14);
          if (uVar1 != 0) {
            uVar13 = 0;
            lVar9 = lVar15;
            do {
              uVar11 = 1;
              uVar14 = __n_00 - 1;
              do {
                if (0x7f < uVar14) goto LAB_007a3728;
                uVar11 = uVar11 + *(byte *)(lVar9 + uVar14) +
                         (uint)*(byte *)((long)&local_2a0 + uVar14);
                *(char *)(lVar9 + uVar14) = (char)uVar11;
                uVar14 = uVar14 - 1;
                uVar11 = uVar11 >> 8;
              } while (uVar14 < __n_00);
              uVar13 = uVar13 + __n_00;
              lVar9 = lVar9 + __n_00;
            } while (uVar13 < uVar1);
          }
          local_2b4 = 0xaaaaaaaa;
          puStack_218 = &DAT_aaaaaaaaaaaaaaaa;
          local_220 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_208 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_210 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_1f8 = &DAT_aaaaaaaaaaaaaaaa;
          local_200 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_1e8 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_1f0 = &DAT_aaaaaaaaaaaaaaaa;
          iVar7 = FUN_0072a9e4(&local_160,param_9,0);
        } while (iVar7 != 0);
      }
      goto LAB_007a3418;
    }
LAB_007a3720:
    uVar12 = 1;
  }
  else {
    puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
    local_1d0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_1c0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
    local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00770970(&local_1e0);
    iVar7 = FUN_00770984(&local_1e0,(long)param_2 << 1);
    if (iVar7 != 0) {
      local_2a0 = param_1;
      puStack_298 = param_2;
      if (param_2 != (undefined1 *)0x0) {
        do {
          local_220 = (undefined1 *)CONCAT44(local_220._4_4_,0xaaaaaaaa);
          iVar7 = FUN_00773a1c(&local_2a0,&local_220);
          if ((iVar7 == 0) ||
             (iVar7 = FUN_00773ea0(&local_1e0,(ulong)local_220 & 0xffffffff), iVar7 == 0)) {
            FUN_00777eb4(0x13,0,0x83,"../../third_party/boringssl/src/crypto/pkcs8/pkcs8.cc",0x32);
            goto LAB_007a340c;
          }
        } while (puStack_298 != (undefined1 *)0x0);
      }
      iVar7 = FUN_00773ea0(&local_1e0,0);
      if (iVar7 != 0) {
        iVar7 = FUN_00770a30(&local_1e0,&local_2a8,&local_2b0);
        FUN_00770a10(&local_1e0);
        if (iVar7 != 0) goto LAB_007a3350;
        goto LAB_007a3414;
      }
    }
LAB_007a340c:
    FUN_00770a10(&local_1e0);
LAB_007a3414:
    lVar15 = 0;
LAB_007a3418:
    uVar12 = 0;
  }
  FUN_0078cb3c(lVar15);
  FUN_0078cb3c(local_2a8);
  FUN_0072a770(&local_160);
LAB_007a3434:
  if (*(long *)(lVar5 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
}


// ===== 007a3730  FUN_007a3730 =====

undefined8
FUN_007a3730(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined4 param_5
            ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  
  if (param_3 < 0x92) {
    if (param_3 == -1) {
      uVar1 = FUN_007a4140(param_1,param_2,param_4,param_5,param_6,param_7,param_8,param_9);
      return uVar1;
    }
    if (param_3 != 0x90) {
LAB_007a37ac:
      FUN_00777eb4(0x13,0,0x77,"../../third_party/boringssl/src/crypto/pkcs8/pkcs8.cc",0x12f);
      return 0;
    }
    puVar2 = &DAT_00d36f90;
  }
  else if (param_3 == 0x92) {
    puVar2 = &DAT_00d36fb8;
  }
  else {
    if (param_3 != 0x95) goto LAB_007a37ac;
    puVar2 = &DAT_00d36f68;
  }
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  uVar1 = FUN_00771098(param_1,&puStack_80,0x20000010);
  if (((((int)uVar1 != 0) &&
       (uVar1 = FUN_0077190c(&puStack_80,6,puVar2 + 4,puVar2[0xe]), (int)uVar1 != 0)) &&
      (uVar1 = FUN_00771098(&puStack_80,&local_b0,0x20000010), (int)uVar1 != 0)) &&
     (((uVar1 = FUN_00771b20(&local_b0,param_8,param_9), (int)uVar1 != 0 &&
       (uVar1 = FUN_007719cc(&local_b0,param_5), (int)uVar1 != 0)) &&
      (uVar1 = FUN_00770ae8(param_1), (int)uVar1 != 0)))) {
    uVar1 = FUN_007a38e4(puVar2,param_2,param_5,param_6,param_7,param_8,param_9,1);
  }
  return uVar1;
}


// ===== 007a38e4  FUN_007a38e4 =====

undefined4
FUN_007a38e4(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar4 = (**(code **)(param_1 + 0x10))();
  uVar5 = (**(code **)(param_1 + 0x18))();
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  uVar2 = FUN_00729e00(uVar4);
  iVar3 = FUN_007a3230(param_4,param_5,param_6,param_7,1,param_3,uVar2,&local_b0,uVar5);
  if (iVar3 != 0) {
    uVar2 = FUN_00729e0c(uVar4);
    iVar3 = FUN_007a3230(param_4,param_5,param_6,param_7,2,param_3,uVar2,&local_c0,uVar5);
    if (iVar3 != 0) {
      uVar2 = FUN_00729154(param_2,uVar4,0,&local_b0,&local_c0,param_8);
      FUN_0078cba8(&local_b0,0x40);
      FUN_0078cba8(&local_c0,0x10);
      goto LAB_007a3a20;
    }
  }
  FUN_00777eb4(0x13,0,0x6e,"../../third_party/boringssl/src/crypto/pkcs8/pkcs8.cc",0xcb);
  uVar2 = 0;
LAB_007a3a20:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a3a5c  FUN_007a3a5c =====

undefined4
FUN_007a3a5c(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00728fb4(&local_100);
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  local_110 = &DAT_aaaaaaaaaaaaaaaa;
  iVar2 = FUN_00772950(param_3,&local_110,6);
  if (iVar2 == 0) {
    uVar4 = 0x68;
    uVar5 = 0x14f;
LAB_007a3c1c:
    FUN_00777eb4(0x13,0,uVar4,"../../third_party/boringssl/src/crypto/pkcs8/pkcs8.cc",uVar5);
    lVar3 = 0;
  }
  else {
    puVar7 = &DAT_00d36f68;
    iVar2 = FUN_0077220c(&local_110,&DAT_00d36f6c,10);
    if (iVar2 == 0) {
      puVar7 = &DAT_00d36f90;
      iVar2 = FUN_0077220c(&local_110,&DAT_00d36f94,10);
      if (iVar2 == 0) {
        puVar7 = &DAT_00d36fb8;
        iVar2 = FUN_0077220c(&local_110,&DAT_00d36fbc,10);
        if (iVar2 == 0) {
          puVar7 = &DAT_00d36fe0;
          iVar2 = FUN_0077220c(&local_110,&DAT_00d36fe4,9);
          if (iVar2 == 0) {
            uVar4 = 0x77;
            uVar5 = 0x15a;
            goto LAB_007a3c1c;
          }
        }
      }
    }
    iVar2 = (**(code **)(puVar7 + 0x20))(puVar7,&local_100,param_4,param_5,param_3);
    if (iVar2 == 0) {
      uVar4 = 0x6d;
      uVar5 = 0x15f;
      goto LAB_007a3c1c;
    }
    lVar3 = FUN_0078c954(param_7);
    if (lVar3 != 0) {
      local_120 = &DAT_aaaaaaaaaaaaaaaa;
      local_118 = &DAT_aaaaaaaaaaaaaaaa;
      iVar2 = FUN_0072987c(&local_100,lVar3,&local_118,param_7,param_6,param_7);
      if (iVar2 != 0) {
        iVar2 = FUN_00729a78(&local_100,local_118 + lVar3,&local_120,param_7 - (long)local_118);
        if (iVar2 != 0) {
          *param_1 = lVar3;
          lVar3 = 0;
          *param_2 = local_120 + (long)local_118;
          uVar6 = 1;
          goto LAB_007a3c28;
        }
      }
    }
  }
  uVar6 = 0;
LAB_007a3c28:
  FUN_0078cb3c(lVar3);
  FUN_0072901c(&local_100);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a3c90  FUN_007a3c90 =====

undefined8 FUN_007a3c90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *local_28;
  
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  iVar2 = FUN_00772950(param_1,&puStack_30,0x20000010);
  if ((((iVar2 == 0) || (iVar2 = FUN_00772950(&puStack_30,&local_40,0x20000010), iVar2 == 0)) ||
      (iVar2 = FUN_00772950(&puStack_30,&local_50,4), iVar2 == 0)) ||
     (local_28 != (undefined1 *)0x0)) {
    FUN_00777eb4(0x13,0,0x68,"../../third_party/boringssl/src/crypto/pkcs8/pkcs8.cc",0x180);
  }
  else {
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    iVar2 = FUN_007a3a5c(&puStack_58,&local_60,&local_40,param_2,param_3,local_50,puStack_48);
    puVar1 = puStack_58;
    if (iVar2 != 0) {
      local_70 = puStack_58;
      puStack_68 = local_60;
      uVar3 = FUN_00779210(&local_70);
      FUN_0078cb3c(puVar1);
      return uVar3;
    }
  }
  return 0;
}


// ===== 007a3d80  FUN_007a3d80 =====

bool FUN_007a3d80(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,long param_7,int param_8,undefined8 param_9)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 *local_1c8;
  undefined1 *local_1c0;
  undefined1 *puStack_1b8;
  undefined1 *local_1b0;
  undefined1 *puStack_1a8;
  undefined1 *local_1a0;
  undefined1 *puStack_198;
  undefined1 *puStack_190;
  undefined1 *puStack_188;
  undefined1 *local_180;
  undefined1 *puStack_178;
  undefined1 *local_170;
  undefined1 *puStack_168;
  undefined1 *puStack_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  undefined1 *puStack_128;
  ulong local_120;
  undefined8 local_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  local_118 = 0;
  local_120 = 0;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  local_110 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00728fb4(&local_110);
  if (param_6 == 0) {
    lVar9 = 0x10;
    if (param_7 != 0) {
      lVar9 = param_7;
    }
    lVar8 = FUN_0078c954(lVar9);
    if (lVar8 == 0) {
      bVar3 = false;
      uVar7 = 0;
      goto LAB_007a3ef0;
    }
    iVar5 = FUN_00793258(lVar8,lVar9);
    param_6 = lVar8;
    if (iVar5 == 0) {
      bVar3 = false;
      uVar7 = 0;
      goto LAB_007a3ef0;
    }
  }
  else {
    lVar8 = 0;
    lVar9 = param_7;
  }
  iVar5 = 0x800;
  if (0 < param_8) {
    iVar5 = param_8;
  }
  puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
  local_140 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
  local_150 = &DAT_aaaaaaaaaaaaaaaa;
  iVar4 = FUN_00770984(0x800,&local_150,0x80);
  if (((iVar4 == 0) || (iVar4 = FUN_007791c0(&local_150,param_9), iVar4 == 0)) ||
     (iVar4 = FUN_00770a30(&local_150,&local_118,&local_120), iVar4 == 0)) {
    FUN_00770a10(&local_150);
  }
  else {
    puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
    local_170 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_160 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
    local_180 = &DAT_aaaaaaaaaaaaaaaa;
    iVar4 = FUN_00771098(param_1,&local_180,0x20000010);
    if ((iVar4 != 0) &&
       (iVar5 = FUN_007a3730(&local_180,&local_110,param_2,param_3,iVar5,param_4,param_5,param_6,
                             lVar9), uVar1 = local_120, iVar5 != 0)) {
      uVar6 = FUN_00729dac(&local_110);
      uVar1 = uVar1 + (uVar6 & 0xffffffff);
      if (uVar1 < local_120) {
        FUN_00777eb4(0x13,0,0x76,"../../third_party/boringssl/src/crypto/pkcs8/pkcs8.cc",0x1c2);
      }
      else {
        local_1c0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
        local_1c8 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
        local_1a0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_190 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
        local_1b0 = &DAT_aaaaaaaaaaaaaaaa;
        iVar5 = FUN_00771098(&local_180,&local_1b0,4);
        if (((iVar5 != 0) && (iVar5 = FUN_00771490(&local_1b0,&puStack_1b8,uVar1), iVar5 != 0)) &&
           ((iVar5 = FUN_00729d0c(&local_110,puStack_1b8,&local_1c0,uVar1,local_118,local_120),
            iVar5 != 0 &&
            ((iVar5 = FUN_00729d98(&local_110,puStack_1b8 + (long)local_1c0,&local_1c8,
                                   uVar1 - (long)local_1c0), iVar5 != 0 &&
             (iVar5 = FUN_0077164c(&local_1b0,local_1c8 + (long)local_1c0), iVar5 != 0)))))) {
          iVar5 = FUN_00770ae8(param_1);
          bVar3 = iVar5 != 0;
          uVar7 = local_118;
          goto LAB_007a3ef0;
        }
      }
    }
  }
  bVar3 = false;
  uVar7 = local_118;
LAB_007a3ef0:
  FUN_0078cb3c(uVar7);
  FUN_0078cb3c(lVar8);
  FUN_0072901c(&local_110);
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar3;
}


// ===== 007a402c  FUN_007a402c =====

undefined8
FUN_007a402c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            long param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *local_28;
  
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  iVar1 = FUN_00772950(param_5,&puStack_50,0x20000010);
  if ((((iVar1 == 0) || (iVar1 = FUN_00772950(&puStack_50,&local_60,4), iVar1 == 0)) ||
      (iVar1 = FUN_00772b1c(&puStack_50,&local_28), iVar1 == 0)) ||
     ((local_48 != (undefined1 *)0x0 || (*(long *)(param_5 + 8) != 0)))) {
    uVar2 = 0x68;
    uVar3 = 0xde;
  }
  else {
    iVar1 = FUN_007a2dc8(local_28);
    if (iVar1 != 0) {
      uVar2 = FUN_007a38e4(param_1,param_2,(ulong)local_28 & 0xffffffff,param_3,param_4,local_60,
                           puStack_58,0);
      return uVar2;
    }
    uVar2 = 0x81;
    uVar3 = 0xe3;
  }
  FUN_00777eb4(0x13,0,uVar2,"../../third_party/boringssl/src/crypto/pkcs8/pkcs8.cc",uVar3);
  return 0;
}


// ===== 007a4140  FUN_007a4140 =====

void FUN_007a4140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 *local_1a0;
  undefined1 *puStack_198;
  undefined1 *puStack_190;
  undefined1 *puStack_188;
  undefined1 *local_180;
  undefined1 *puStack_178;
  undefined1 *puStack_170;
  undefined1 *puStack_168;
  undefined1 *local_160;
  undefined1 *puStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 *puStack_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00729df4(param_3);
  if (iVar2 == 0) {
    FUN_00777eb4(0x13,0,0x66,"../../third_party/boringssl/src/crypto/pkcs8/p5_pbev2.cc",0x8a);
    uVar4 = 0;
  }
  else {
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    uVar3 = FUN_00729e0c(param_3);
    uVar4 = FUN_00793258(&local_80,uVar3);
    if ((int)uVar4 != 0) {
      puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
      local_e0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
      local_c0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      local_a0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
      local_1a0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_190 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
      local_180 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_170 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
      local_160 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_150 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
      local_140 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
      local_120 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_110 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
      local_100 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
      uVar4 = FUN_00771098(param_1,&puStack_b0,0x20000010);
      if (((((int)uVar4 != 0) &&
           (uVar4 = FUN_0077190c(&puStack_b0,6,&DAT_0020f58c,9), (int)uVar4 != 0)) &&
          (uVar4 = FUN_00771098(&puStack_b0,&local_e0,0x20000010), (int)uVar4 != 0)) &&
         (((uVar4 = FUN_00771098(&local_e0,&puStack_110,0x20000010), (int)uVar4 != 0 &&
           (uVar4 = FUN_0077190c(&puStack_110,6,&DAT_0020f595,9), (int)uVar4 != 0)) &&
          ((uVar4 = FUN_00771098(&puStack_110,&local_140,0x20000010), (int)uVar4 != 0 &&
           ((uVar4 = FUN_00771b20(&local_140,param_7,param_8), (int)uVar4 != 0 &&
            (uVar4 = FUN_007719cc(&local_140,param_4), (int)uVar4 != 0)))))))) {
        if (iVar2 == 0x25) {
          uVar3 = FUN_00729e00(param_3);
          uVar4 = FUN_007719cc(&local_140,uVar3);
          if ((int)uVar4 == 0) goto LAB_007a43cc;
        }
        uVar4 = FUN_00771098(&local_140,&puStack_170,0x20000010);
        if (((((int)uVar4 != 0) &&
             (uVar4 = FUN_0077190c(&puStack_170,6,&DAT_0020f59e,8), (int)uVar4 != 0)) &&
            (uVar4 = FUN_0077190c(&puStack_170,5,0,0), (int)uVar4 != 0)) &&
           ((uVar4 = FUN_00771098(&local_e0,&local_1a0,0x20000010), (int)uVar4 != 0 &&
            (uVar4 = FUN_007a4404(&local_1a0,iVar2), (int)uVar4 != 0)))) {
          uVar3 = FUN_00729e0c(param_3);
          uVar4 = FUN_00771b20(&local_1a0,&local_80,uVar3);
          if (((int)uVar4 != 0) && (uVar4 = FUN_00770ae8(param_1), (int)uVar4 != 0)) {
            uVar4 = FUN_0072abc4();
            uVar3 = FUN_00729e0c(param_3);
            uVar4 = FUN_007a44b0(param_2,param_3,uVar4,param_4,param_5,param_6,param_7,param_8,
                                 &local_80,uVar3,1);
          }
        }
      }
    }
  }
LAB_007a43cc:
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 007a4404  FUN_007a4404 =====

undefined8 FUN_007a4404(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (param_2 < 0x1a3) {
    if (param_2 == 0x25) {
      puVar2 = &DAT_00d37008;
    }
    else {
      if (param_2 != 0x2c) {
code_r0x007a447c:
        FUN_00777eb4(0x13,0,0x7f,"../../third_party/boringssl/src/crypto/pkcs8/p5_pbev2.cc",0x65);
        return 0;
      }
      puVar2 = &DAT_00d37020;
    }
  }
  else if (param_2 == 0x1a3) {
    puVar2 = &DAT_00d37038;
  }
  else if (param_2 == 0x1a7) {
    puVar2 = &DAT_00d37050;
  }
  else {
    if (param_2 != 0x1ab) goto code_r0x007a447c;
    puVar2 = &DAT_00d37068;
  }
  uVar1 = FUN_0077190c(param_1,6,puVar2,puVar2[9]);
  return uVar1;
}


// ===== 007a44b0  FUN_007a44b0 =====

bool FUN_007a44b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,ulong param_10,undefined4 param_11)

{
  long lVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar5 = FUN_00729e0c(param_2);
  if (param_10 == (uVar5 & 0xffffffff)) {
    puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
    uVar3 = FUN_00729e00(param_2);
    iVar4 = FUN_0078b020(param_5,param_6,param_7,param_8,param_4,param_3,uVar3,&local_b0);
    if (iVar4 == 0) {
      bVar2 = false;
    }
    else {
      iVar4 = FUN_00729154(param_1,param_2,0,&local_b0,param_9,param_11);
      bVar2 = iVar4 != 0;
    }
    FUN_0078cba8(&local_b0,0x40);
  }
  else {
    FUN_00777eb4(0x13,0,0x6b,"../../third_party/boringssl/src/crypto/pkcs8/p5_pbev2.cc",0x78);
    bVar2 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a45e8  FUN_007a45e8 =====

undefined8
FUN_007a45e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            long param_5)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  iVar2 = FUN_00772950(param_5,&puStack_50,0x20000010);
  if (((((iVar2 == 0) || (*(long *)(param_5 + 8) != 0)) ||
       (iVar2 = FUN_00772950(&puStack_50,&local_60,0x20000010), iVar2 == 0)) ||
      ((iVar2 = FUN_00772950(&puStack_50,&local_80,0x20000010), iVar2 == 0 ||
       (local_48 != (undefined1 *)0x0)))) ||
     ((iVar2 = FUN_00772950(&local_60,&puStack_70,6), iVar2 == 0 ||
      (iVar2 = FUN_00772950(&local_80,&local_90,6), iVar2 == 0)))) {
    uVar5 = 0x68;
    uVar6 = 0xc1;
  }
  else {
    iVar2 = FUN_0077220c(&puStack_70,&DAT_0020f595,9);
    if (iVar2 == 0) {
      uVar5 = 0x80;
      uVar6 = 199;
    }
    else {
      lVar3 = FUN_007a49cc(&local_90);
      if (lVar3 == 0) {
        uVar5 = 0x7f;
        uVar6 = 0xce;
      }
      else {
        local_b8 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
        local_a0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
        local_b0 = &DAT_aaaaaaaaaaaaaaaa;
        iVar2 = FUN_00772950(&local_60,&local_a0,0x20000010);
        if (((iVar2 == 0) || (puStack_58 != (undefined1 *)0x0)) ||
           ((iVar2 = FUN_00772950(&local_a0,&local_b0,4), iVar2 == 0 ||
            (iVar2 = FUN_00772b1c(&local_a0,&local_b8), iVar2 == 0)))) {
          uVar5 = 0x68;
          uVar6 = 0xd9;
        }
        else {
          iVar2 = FUN_007a2dc8(local_b8);
          if (iVar2 == 0) {
            uVar5 = 0x81;
            uVar6 = 0xde;
          }
          else {
            iVar2 = FUN_00772a7c(&local_a0,2);
            if (iVar2 != 0) {
              local_d0 = &DAT_aaaaaaaaaaaaaaaa;
              iVar2 = FUN_00772b1c(&local_a0,&local_d0);
              puVar1 = local_d0;
              if (iVar2 == 0) {
                uVar5 = 0x68;
                uVar6 = 0xe7;
                goto LAB_007a465c;
              }
              uVar4 = FUN_00729e00(lVar3);
              if (puVar1 != (undefined1 *)(uVar4 & 0xffffffff)) {
                uVar5 = 0x7d;
                uVar6 = 0xec;
                goto LAB_007a465c;
              }
            }
            uVar5 = FUN_0072aac4();
            if (puStack_98 != (undefined1 *)0x0) {
              puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
              local_e0 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
              local_d0 = &DAT_aaaaaaaaaaaaaaaa;
              iVar2 = FUN_00772950(&local_a0,&local_d0,0x20000010);
              if (((iVar2 == 0) || (iVar2 = FUN_00772950(&local_d0,&local_e0,6), iVar2 == 0)) ||
                 (puStack_98 != (undefined1 *)0x0)) {
                uVar5 = 0x68;
                uVar6 = 0xf7;
                goto LAB_007a465c;
              }
              iVar2 = FUN_0077220c(&local_e0,&DAT_0020f5a6,8);
              if (iVar2 == 0) {
                iVar2 = FUN_0077220c(&local_e0,&DAT_0020f59e,8);
                if (iVar2 == 0) {
                  uVar5 = 0x82;
                  uVar6 = 0x102;
                  goto LAB_007a465c;
                }
                uVar5 = FUN_0072abc4();
              }
              else {
                uVar5 = FUN_0072aac4();
              }
              puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
              local_f0 = &DAT_aaaaaaaaaaaaaaaa;
              iVar2 = FUN_00772950(&local_d0,&local_f0,5);
              if (((iVar2 == 0) || (puStack_e8 != (undefined1 *)0x0)) ||
                 (puStack_c8 != (undefined1 *)0x0)) {
                uVar5 = 0x68;
                uVar6 = 0x10b;
                goto LAB_007a465c;
              }
            }
            puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
            local_d0 = &DAT_aaaaaaaaaaaaaaaa;
            iVar2 = FUN_00772950(&local_80,&local_d0,4);
            if ((iVar2 != 0) && (puStack_78 == (undefined1 *)0x0)) {
              uVar5 = FUN_007a44b0(param_2,lVar3,uVar5,(ulong)local_b8 & 0xffffffff,param_3,param_4,
                                   local_b0,puStack_a8,local_d0,puStack_c8,0);
              return uVar5;
            }
            uVar5 = 0x82;
            uVar6 = 0x117;
          }
        }
      }
    }
  }
LAB_007a465c:
  FUN_00777eb4(0x13,0,uVar5,"../../third_party/boringssl/src/crypto/pkcs8/p5_pbev2.cc",uVar6);
  return 0;
}


// ===== 007a49cc  FUN_007a49cc =====

undefined8 FUN_007a49cc(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = &DAT_00d37008;
  iVar1 = FUN_0077220c(param_1,&DAT_00d37008,8);
  if (iVar1 == 0) {
    puVar3 = &DAT_00d37020;
    iVar1 = FUN_0077220c(param_1,&DAT_00d37020,8);
    if (iVar1 == 0) {
      puVar3 = &DAT_00d37038;
      iVar1 = FUN_0077220c(param_1,&DAT_00d37038,9);
      if (iVar1 == 0) {
        puVar3 = &DAT_00d37050;
        iVar1 = FUN_0077220c(param_1,&DAT_00d37050,9);
        if (iVar1 == 0) {
          puVar3 = &DAT_00d37068;
          iVar1 = FUN_0077220c(param_1,&DAT_00d37068,9);
          if (iVar1 == 0) {
            return 0;
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x007a4a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(puVar3 + 0x10))();
  return uVar2;
}


// ===== 007a4a90  FUN_007a4a90 =====

undefined * FUN_007a4a90(void)

{
  return &DAT_00d37080;
}


// ===== 007a4aa0  FUN_007a4aa0 =====

undefined * FUN_007a4aa0(void)

{
  return &DAT_00d370c8;
}


// ===== 007a4ab0  FUN_007a4ab0 =====

undefined8 FUN_007a4ab0(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  char cVar14;
  long lVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  uint *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar19 = *(uint **)(param_1 + 0x10);
  uVar5 = FUN_00729dbc();
  uVar3 = *puVar19;
  uVar4 = uVar5;
  if (0x7f < (int)uVar5) {
    uVar4 = 0x80;
  }
  uVar10 = (ulong)uVar4;
  puVar6 = puVar19 + 1;
  *(undefined1 *)puVar6 = 0;
  uVar1 = uVar3;
  if (0x3ff < uVar3) {
    uVar1 = 0x400;
  }
  uVar2 = 0x400;
  if (0 < (int)uVar3) {
    uVar2 = uVar1;
  }
  if (0 < (int)uVar5) {
    if (((int)uVar5 < 8) || ((ulong)((long)puVar19 + (4 - (long)param_2)) < 0x20)) {
      uVar11 = 0;
LAB_007a4b24:
      lVar15 = uVar10 - uVar11;
      puVar12 = (undefined1 *)((long)param_2 + uVar11);
      puVar16 = (undefined1 *)((long)puVar19 + uVar11 + 4);
      do {
        lVar15 = lVar15 + -1;
        *puVar16 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar16 = puVar16 + 1;
      } while (lVar15 != 0);
    }
    else if ((int)uVar5 < 0x20) {
      uVar13 = 0;
LAB_007a4c78:
      uVar11 = uVar10 & 0xf8;
      lVar15 = uVar13 - uVar11;
      puVar17 = (undefined8 *)((long)puVar19 + uVar13 + 4);
      puVar18 = (undefined8 *)((long)param_2 + uVar13);
      do {
        lVar15 = lVar15 + 8;
        *puVar17 = *puVar18;
        puVar17 = puVar17 + 1;
        puVar18 = puVar18 + 1;
      } while (lVar15 != 0);
      if (uVar11 != uVar10) goto LAB_007a4b24;
    }
    else {
      uVar20 = *param_2;
      uVar22 = param_2[3];
      uVar21 = param_2[2];
      uVar11 = uVar10 & 0xe0;
      *(undefined8 *)(puVar19 + 3) = param_2[1];
      *(undefined8 *)(puVar19 + 1) = uVar20;
      *(undefined8 *)(puVar19 + 7) = uVar22;
      *(undefined8 *)(puVar19 + 5) = uVar21;
      if (uVar11 != 0x20) {
        uVar20 = param_2[4];
        uVar22 = param_2[7];
        uVar21 = param_2[6];
        *(undefined8 *)(puVar19 + 0xb) = param_2[5];
        *(undefined8 *)(puVar19 + 9) = uVar20;
        *(undefined8 *)(puVar19 + 0xf) = uVar22;
        *(undefined8 *)(puVar19 + 0xd) = uVar21;
        if (uVar11 != 0x40) {
          uVar20 = param_2[8];
          uVar22 = param_2[0xb];
          uVar21 = param_2[10];
          *(undefined8 *)(puVar19 + 0x13) = param_2[9];
          *(undefined8 *)(puVar19 + 0x11) = uVar20;
          *(undefined8 *)(puVar19 + 0x17) = uVar22;
          *(undefined8 *)(puVar19 + 0x15) = uVar21;
          if (uVar11 != 0x60) {
            uVar20 = param_2[0xc];
            uVar22 = param_2[0xf];
            uVar21 = param_2[0xe];
            *(undefined8 *)(puVar19 + 0x1b) = param_2[0xd];
            *(undefined8 *)(puVar19 + 0x19) = uVar20;
            *(undefined8 *)(puVar19 + 0x1f) = uVar22;
            *(undefined8 *)(puVar19 + 0x1d) = uVar21;
          }
        }
      }
      if (uVar11 != uVar10) {
        uVar13 = uVar11;
        if ((uVar4 & 0x18) == 0) goto LAB_007a4b24;
        goto LAB_007a4c78;
      }
    }
    if (0x7f < uVar5) goto LAB_007a4b84;
  }
  lVar15 = 0;
  cVar14 = *(char *)((long)puVar6 + (long)(int)(uVar4 - 1));
  do {
    cVar14 = (&DAT_0020f5ae)[(byte)(*(char *)((long)puVar6 + (long)(int)lVar15) + cVar14)];
    *(char *)((long)puVar19 + lVar15 + (long)(int)uVar5 + 4) = cVar14;
    lVar15 = lVar15 + 1;
  } while (0x80 - uVar4 != (int)lVar15);
LAB_007a4b84:
  uVar4 = uVar2 + 7 >> 3;
  bVar7 = (&DAT_0020f5ae)
          [(ulong)(0xff >> (ulong)(-uVar2 & 7)) &
           (ulong)*(byte *)((long)puVar6 + (0x80 - (ulong)uVar4))];
  *(byte *)((long)puVar6 + (0x80 - (ulong)uVar4)) = bVar7;
  if (uVar4 != 0x80) {
    iVar8 = 0x7f;
    iVar9 = 0x7f - uVar4;
    do {
      lVar15 = (long)iVar8;
      iVar8 = iVar8 + -1;
      bVar7 = (&DAT_0020f5ae)[*(byte *)((long)puVar6 + lVar15) ^ bVar7];
      *(byte *)((long)puVar6 + (long)iVar9) = bVar7;
      iVar9 = iVar9 + -1;
    } while (iVar9 != -1);
  }
  lVar15 = 0;
  do {
    uVar10 = lVar15 + 0x7f;
    lVar15 = lVar15 + -2;
  } while (1 < uVar10);
  return 1;
}


// ===== 007a4cac  FUN_007a4cac =====

undefined8 FUN_007a4cac(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (0xffff < param_4) {
    do {
      FUN_007a4d94(param_3,param_2,0x10000,lVar1 + 4,param_1 + 0x34,*(undefined4 *)(param_1 + 0x1c))
      ;
      param_4 = param_4 - 0x10000;
      param_3 = param_3 + 0x10000;
      param_2 = param_2 + 0x10000;
    } while (param_4 >> 0x10 != 0);
  }
  if (param_4 != 0) {
    FUN_007a4d94(param_3,param_2,param_4,lVar1 + 4,param_1 + 0x34,*(undefined4 *)(param_1 + 0x1c));
  }
  return 1;
}


// ===== 007a4d4c  FUN_007a4d4c =====

undefined8 FUN_007a4d4c(long param_1,int param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (param_2 != 3) {
    if (param_2 != 0) {
      return 0xffffffff;
    }
    param_3 = FUN_00729dbc();
    param_3 = param_3 << 3;
  }
  *piVar1 = param_3;
  return 1;
}


// ===== 007a4d94  FUN_007a4d94 =====

void FUN_007a4d94(uint *param_1,uint *param_2,ulong param_3,undefined8 param_4,uint *param_5,
                 int param_6)

{
  bool bVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  uint *puVar4;
  ulong uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_68;
  uint uStack_64;
  
  uVar10 = *param_5;
  uVar8 = param_5[1];
  if (param_6 == 0) {
    puVar4 = param_2;
    uVar5 = param_3;
    puVar6 = param_1;
    uVar9 = uVar10;
    uVar7 = uVar8;
    if (7 < param_3) {
      do {
        param_1 = puVar6 + 2;
        uVar10 = *puVar6;
        uVar8 = puVar6[1];
        param_3 = uVar5 - 8;
        local_68 = uVar10;
        uStack_64 = uVar8;
        FUN_007a50d4(&local_68,param_4);
        param_2 = puVar4 + 2;
        *puVar4 = local_68 ^ uVar9;
        puVar4[1] = uStack_64 ^ uVar7;
        bVar1 = 0xf < uVar5;
        puVar4 = param_2;
        uVar5 = param_3;
        puVar6 = param_1;
        uVar9 = uVar10;
        uVar7 = uVar8;
      } while (bVar1);
      if (param_3 == 0) goto LAB_007a4f9c;
    }
    uVar9 = *param_1;
    uVar7 = param_1[1];
    local_68 = uVar9;
    uStack_64 = uVar7;
    FUN_007a50d4(&local_68,param_4);
    puVar3 = (undefined1 *)((long)param_2 + param_3);
    local_68 = local_68 ^ uVar10;
    if ((long)param_3 < 4) {
      if (param_3 != 1) {
        if (param_3 != 2) goto LAB_007a4f80;
        goto LAB_007a4f88;
      }
    }
    else {
      uStack_64 = uStack_64 ^ uVar8;
      if ((long)param_3 < 6) {
        if (param_3 != 4) goto LAB_007a4f74;
      }
      else {
        if (param_3 != 6) {
          puVar3 = puVar3 + -1;
          *puVar3 = (char)(uStack_64 >> 0x10);
        }
        puVar3 = puVar3 + -1;
        *puVar3 = (char)(uStack_64 >> 8);
LAB_007a4f74:
        puVar3 = puVar3 + -1;
        *puVar3 = (char)uStack_64;
      }
      puVar3 = puVar3 + -1;
      *puVar3 = (char)(local_68 >> 0x18);
LAB_007a4f80:
      puVar3 = puVar3 + -1;
      *puVar3 = (char)(local_68 >> 0x10);
LAB_007a4f88:
      puVar3 = puVar3 + -1;
      *puVar3 = (char)(local_68 >> 8);
    }
    puVar3[-1] = (char)local_68;
    goto LAB_007a4f9c;
  }
  puVar4 = param_2;
  uVar5 = param_3;
  puVar6 = param_1;
  local_68 = uVar10;
  uStack_64 = uVar8;
  if (7 < param_3) {
    do {
      param_1 = puVar6 + 2;
      param_3 = uVar5 - 8;
      local_68 = *puVar6 ^ local_68;
      uStack_64 = puVar6[1] ^ uStack_64;
      FUN_007a4fc4(&local_68,param_4);
      param_2 = puVar4 + 2;
      *puVar4 = local_68;
      puVar4[1] = uStack_64;
      bVar1 = 0xf < uVar5;
      puVar4 = param_2;
      uVar5 = param_3;
      puVar6 = param_1;
    } while (bVar1);
    uVar9 = local_68;
    uVar7 = uStack_64;
    if (param_3 == 0) goto LAB_007a4f9c;
  }
  uVar10 = 0;
  pbVar2 = (byte *)((long)param_1 + param_3);
  if ((long)param_3 < 4) {
    if (param_3 != 1) {
      if (param_3 != 2) goto LAB_007a4f10;
      goto LAB_007a4f18;
    }
  }
  else {
    if ((long)param_3 < 6) {
      if (param_3 != 4) goto LAB_007a4efc;
    }
    else {
      if (param_3 != 6) {
        pbVar2 = pbVar2 + -1;
        uVar10 = (uint)*pbVar2 << 0x10;
      }
      pbVar2 = pbVar2 + -1;
      uVar10 = uVar10 | (uint)*pbVar2 << 8;
LAB_007a4efc:
      pbVar2 = pbVar2 + -1;
      uStack_64 = (uVar10 | *pbVar2) ^ uStack_64;
    }
    pbVar2 = pbVar2 + -1;
    uVar10 = (uint)*pbVar2 << 0x18;
LAB_007a4f10:
    pbVar2 = pbVar2 + -1;
    uVar10 = uVar10 | (uint)*pbVar2 << 0x10;
LAB_007a4f18:
    pbVar2 = pbVar2 + -1;
    uVar10 = uVar10 | (uint)*pbVar2 << 8;
  }
  local_68 = (uVar10 | pbVar2[-1]) ^ local_68;
  FUN_007a4fc4(&local_68,param_4);
  *param_2 = local_68;
  param_2[1] = uStack_64;
  uVar9 = local_68;
  uVar7 = uStack_64;
LAB_007a4f9c:
  *param_5 = uVar9;
  param_5[1] = uVar7;
  return;
}


// ===== 007a4fc4  FUN_007a4fc4 =====

void FUN_007a4fc4(uint *param_1,ushort *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ushort *puVar15;
  
  uVar12 = *param_1;
  uVar14 = param_1[1];
  iVar11 = 3;
  iVar9 = 5;
  uVar13 = uVar12 >> 0x10;
  uVar10 = uVar14 >> 0x10;
  puVar15 = param_2;
  while( true ) {
    do {
      iVar9 = iVar9 + -1;
      uVar12 = (uint)*puVar15 + (uVar13 & (uVar10 ^ 0xffffffff)) + uVar12 + (uVar10 & uVar14);
      uVar2 = uVar12 >> 0xf & 1;
      uVar6 = (uVar12 & 0xffff) << 1;
      uVar12 = uVar2 | uVar6;
      uVar13 = (uint)puVar15[1] + (uVar12 & uVar10) + (uVar14 & (uVar12 ^ 0xffffffff)) + uVar13;
      uVar3 = uVar13 >> 0xe & 3;
      uVar7 = (uVar13 & 0xffff) << 2;
      uVar13 = uVar3 | uVar7;
      uVar14 = (uint)puVar15[2] + (uVar12 & uVar13) + (uVar10 & (uVar13 ^ 0xffffffff)) + uVar14;
      uVar4 = uVar14 >> 0xd & 7;
      uVar8 = (uVar14 & 0xffff) << 3;
      uVar14 = uVar4 | uVar8;
      uVar10 = (uint)puVar15[3] + (uVar13 & uVar14) + (uVar12 & (uVar14 ^ 0xffffffff)) + uVar10;
      puVar15 = puVar15 + 4;
      uVar5 = uVar10 >> 0xb & 0x1f;
      uVar1 = (uVar10 & 0xffff) << 5;
      uVar10 = uVar5 | uVar1;
    } while (iVar9 != 0);
    iVar11 = iVar11 + -1;
    uVar12 = uVar2 | uVar6 & 0xffff;
    uVar13 = uVar3 | uVar7 & 0xffff;
    uVar14 = uVar4 | uVar8 & 0xffff;
    if (iVar11 == 0) break;
    uVar12 = uVar12 + param_2[uVar5 | uVar1 & 0x3f];
    uVar13 = uVar13 + param_2[uVar12 & 0x3f];
    uVar14 = uVar14 + param_2[uVar13 & 0x3f];
    iVar9 = 5;
    if (iVar11 == 2) {
      iVar9 = 6;
    }
    uVar10 = uVar10 + param_2[uVar14 & 0x3f];
  }
  *param_1 = uVar12 | uVar13 << 0x10;
  param_1[1] = uVar14 | uVar10 << 0x10;
  return;
}


// ===== 007a50d4  FUN_007a50d4 =====

void FUN_007a50d4(uint *param_1,long param_2)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ushort *puVar10;
  uint uVar11;
  
  uVar6 = *param_1;
  uVar8 = param_1[1];
  puVar10 = (ushort *)(param_2 + 0x7e);
  iVar7 = 3;
  iVar5 = 5;
  uVar11 = uVar6 >> 0x10;
  uVar9 = uVar8 >> 0x10;
  while( true ) {
    do {
      uVar2 = (uVar9 >> 5 | uVar9 << 0xb) -
              ((uVar8 & uVar11) + (uVar6 & (uVar8 & 0xffff ^ 0xffffffff)) + (uint)*puVar10);
      uVar3 = (((uVar8 & 0xffff) << 0xd | uVar8 >> 3 & 0x1fff) -
              ((uVar11 & uVar6) + (uint)puVar10[-1])) - (uVar2 & (uVar11 ^ 0xffffffff));
      puVar1 = puVar10 + -3;
      uVar9 = uVar2 & 0xffff;
      uVar4 = ((uVar11 << 0xe | uVar11 >> 2) - ((uVar2 & uVar6) + (uint)puVar10[-2])) -
              (uVar3 & (uVar6 & 0xffff ^ 0xffffffff));
      puVar10 = puVar10 + -4;
      uVar8 = uVar3 & 0xffff;
      iVar5 = iVar5 + -1;
      uVar11 = uVar4 & 0xffff;
      uVar6 = ((uVar6 >> 1 & 0x7fff | (uVar6 & 0xffff) << 0xf) - ((uVar3 & uVar2) + (uint)*puVar1))
              - (uVar4 & (uVar9 ^ 0xffffffff));
    } while (iVar5 != 0);
    iVar7 = iVar7 + -1;
    if (iVar7 == 0) break;
    uVar11 = uVar6 & 0x3f;
    uVar2 = uVar2 - *(ushort *)(param_2 + (ulong)(uVar3 & 0x3f) * 2);
    uVar8 = uVar8 - *(ushort *)(param_2 + (ulong)(uVar4 & 0x3f) * 2);
    iVar5 = 5;
    if (iVar7 == 2) {
      iVar5 = 6;
    }
    uVar9 = uVar2 & 0xffff;
    uVar6 = uVar6 - *(ushort *)(param_2 + (ulong)(uVar2 & 0x3f) * 2);
    uVar11 = uVar4 - *(ushort *)(param_2 + (ulong)uVar11 * 2) & 0xffff;
  }
  *param_1 = uVar6 & 0xffff | uVar11 << 0x10;
  param_1[1] = uVar8 | uVar9 << 0x10;
  return;
}


// ===== 007a51f4  FUN_007a51f4 =====

undefined * FUN_007a51f4(void)

{
  return &DAT_00d37110;
}


// ===== 007a5204  FUN_007a5204 =====

undefined8 FUN_007a5204(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_00729dbc();
  FUN_007a52cc(uVar2,uVar1,param_2);
  return 1;
}


// ===== 007a5244  FUN_007a5244 =====

undefined8 FUN_007a5244(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_007a5274(*(undefined8 *)(param_1 + 0x10),param_4,param_3,param_2);
  return 1;
}


// ===== 007a5274  FUN_007a5274 =====

void FUN_007a5274(uint *param_1,long param_2,byte *param_3,byte *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  if (param_2 != 0) {
    do {
      param_2 = param_2 + -1;
      uVar3 = uVar3 + 1 & 0xff;
      uVar1 = param_1[(ulong)uVar3 + 2];
      uVar4 = uVar1 + uVar4 & 0xff;
      uVar2 = param_1[(ulong)uVar4 + 2];
      param_1[(ulong)uVar3 + 2] = uVar2;
      param_1[(ulong)uVar4 + 2] = uVar1;
      *param_4 = *param_3 ^ (byte)param_1[(ulong)(uVar2 + uVar1 & 0xff) + 2];
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  *param_1 = uVar3;
  param_1[1] = uVar4;
  return;
}


// ===== 007a52cc  FUN_007a52cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007a52cc(undefined8 *param_1,int param_2,long param_3)

{
  byte *pbVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  int iVar9;
  undefined8 uVar8;
  int iVar11;
  undefined8 uVar10;
  
  uVar10 = _UNK_001f3f68;
  uVar8 = _DAT_001f3f60;
  puVar3 = param_1 + 3;
  lVar4 = 0x100;
  *param_1 = 0;
  do {
    iVar9 = (int)((ulong)uVar8 >> 0x20);
    iVar11 = (int)((ulong)uVar10 >> 0x20);
    lVar4 = lVar4 + -8;
    puVar3[-1] = uVar10;
    puVar3[-2] = uVar8;
    puVar3[1] = CONCAT44(iVar11 + 4,(int)uVar10 + 4);
    *puVar3 = CONCAT44(iVar9 + 4,(int)uVar8 + 4);
    uVar8 = CONCAT44(iVar9 + 8,(int)uVar8 + 8);
    uVar10 = CONCAT44(iVar11 + 8,(int)uVar10 + 8);
    puVar3 = puVar3 + 4;
  } while (lVar4 != 0);
  lVar4 = 0;
  uVar6 = 0;
  uVar5 = 0;
  do {
    iVar9 = *(int *)((long)param_1 + lVar4 + 8);
    pbVar1 = (byte *)(param_3 + uVar5);
    uVar2 = 0;
    if ((int)uVar5 + 1 != param_2) {
      uVar2 = (int)uVar5 + 1;
    }
    uVar5 = (ulong)uVar2;
    uVar6 = (uint)*pbVar1 + iVar9 + uVar6;
    uVar7 = (ulong)uVar6 & 0xff;
    uVar6 = uVar6 & 0xff;
    *(undefined4 *)((long)param_1 + lVar4 + 8) = *(undefined4 *)((long)param_1 + uVar7 * 4 + 8);
    lVar4 = lVar4 + 4;
    *(int *)((long)param_1 + uVar7 * 4 + 8) = iVar9;
  } while (lVar4 != 0x400);
  return;
}


// ===== 007a5350  FUN_007a5350 =====

void FUN_007a5350(undefined8 param_1)

{
  FUN_0076e060(param_1,&DAT_00d37408);
  return;
}


// ===== 007a5360  FUN_007a5360 =====

void FUN_007a5360(undefined8 *param_1,undefined8 *param_2)

{
  FUN_007696a8(*(undefined8 *)*param_1,*(undefined8 *)*param_2);
  return;
}


// ===== 007a5378  FUN_007a5378 =====

undefined8 FUN_007a5378(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_007a1d14(param_1[1],*(undefined8 *)(*param_1 + 8));
  if (iVar1 != 0) {
    FUN_00777eb4(0xb,0,0x89,"../../third_party/boringssl/src/crypto/x509/x_crl.cc",0x138);
    return 0;
  }
  uVar2 = FUN_007a2284(&DAT_00d37358,param_1[1],param_1[2],*param_1,param_2);
  return uVar2;
}


// ===== 007a53f8  FUN_007a53f8 =====

undefined8 FUN_007a53f8(long *param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 *local_68;
  undefined8 uStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_60 = param_3;
  FUN_00795d48(&DAT_00d80220);
  iVar2 = FUN_007957c8(*(undefined8 *)(*param_1 + 0x28));
  FUN_00795d90(&DAT_00d80220);
  if (iVar2 == 0) {
    FUN_00795d6c(&DAT_00d80220);
    iVar2 = FUN_007957c8(*(undefined8 *)(*param_1 + 0x28));
    if (iVar2 == 0) {
      FUN_00795a0c(*(undefined8 *)(*param_1 + 0x28),FUN_007a5a54);
    }
    FUN_00795db4(&DAT_00d80220);
  }
  uVar3 = FUN_0079568c(*(undefined8 *)(*param_1 + 0x28),&local_68,&uStack_60,FUN_007a5a54);
  if ((int)uVar3 != 0) {
    lVar6 = *param_1;
    for (; puVar1 = local_68, puVar4 = (undefined1 *)FUN_00795280(*(undefined8 *)(lVar6 + 0x28)),
        puVar1 < puVar4; local_68 = local_68 + 1) {
      puVar5 = (undefined8 *)FUN_007952e0(*(undefined8 *)(*param_1 + 0x28),local_68);
      iVar2 = FUN_0076c88c(*puVar5,param_3);
      if (iVar2 != 0) break;
      if (param_4 == 0) {
LAB_007a5534:
        if (param_2 != (undefined8 *)0x0) {
          *param_2 = puVar5;
        }
        return 1;
      }
      uVar3 = FUN_007a5acc(param_1);
      iVar2 = FUN_007a0a48(param_4,uVar3);
      if (iVar2 == 0) goto LAB_007a5534;
      lVar6 = *param_1;
    }
    uVar3 = 0;
  }
  return uVar3;
}


// ===== 007a555c  FUN_007a555c =====

void FUN_007a555c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_007a0bdc(param_3);
  uVar2 = FUN_007a0b50(param_3);
  FUN_007a53f8(param_1,param_2,uVar1,uVar2);
  return;
}


// ===== 007a55b4  FUN_007a55b4 =====

undefined8 FUN_007a55b4(int param_1,long *param_2)

{
  long lVar1;
  
  if (((*param_2 != 0) && (param_1 == 5)) && (lVar1 = *(long *)(*param_2 + 0x28), lVar1 != 0)) {
    FUN_00795bd8(lVar1,FUN_007a5360);
  }
  return 1;
}


// ===== 007a55f8  FUN_007a55f8 =====

undefined8 FUN_007a55f8(int param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  byte bVar11;
  long *plVar12;
  ulong uVar13;
  int local_24;
  
  plVar12 = (long *)*param_2;
  if (param_1 == 5) {
    if (*(long *)*plVar12 == 0) {
      if (((long *)*plVar12)[6] == 0) {
LAB_007a56d4:
        uVar4 = FUN_0072abc4();
        uVar4 = FUN_007a200c(plVar12,uVar4,(long)plVar12 + 0x34,0);
        if ((int)uVar4 == 0) {
          return uVar4;
        }
        local_24 = -0x55555556;
        puVar6 = (undefined8 *)FUN_007a0db0(plVar12,0x302,&local_24,0);
        plVar12[5] = (long)puVar6;
        if (puVar6 == (undefined8 *)0x0) {
          if (local_24 != -1) {
            return 0;
          }
        }
        else {
          uVar1 = *(uint *)(plVar12 + 6);
          uVar10 = uVar1 | 1;
          *(uint *)(plVar12 + 6) = uVar10;
          bVar11 = 0 < *(int *)(puVar6 + 1);
          if ((bool)bVar11) {
            uVar10 = uVar1 | 5;
            *(uint *)(plVar12 + 6) = uVar10;
          }
          if (0 < *(int *)((long)puVar6 + 0xc)) {
            uVar10 = uVar10 | 8;
            bVar11 = bVar11 + 1;
            *(uint *)(plVar12 + 6) = uVar10;
          }
          if (0 < *(int *)((long)puVar6 + 0x1c)) {
            bVar11 = bVar11 + 1;
            uVar10 = uVar10 | 0x10;
          }
          uVar1 = uVar10 | 2;
          if (bVar11 < 2) {
            uVar1 = uVar10;
          }
          if ((0 < *(int *)((long)puVar6 + 0x1c)) || (1 < bVar11)) {
            *(uint *)(plVar12 + 6) = uVar1;
          }
          if (0 < *(int *)(puVar6 + 3)) {
            uVar1 = uVar1 | 0x20;
            *(uint *)(plVar12 + 6) = uVar1;
          }
          if (puVar6[2] != 0) {
            *(uint *)(plVar12 + 6) = uVar1 | 0x40;
          }
          uVar8 = *puVar6;
          uVar4 = FUN_007a5acc(plVar12);
          uVar4 = FUN_00797770(uVar8,uVar4);
          if ((int)uVar4 == 0) {
            return uVar4;
          }
        }
        lVar5 = FUN_007a0db0(plVar12,0x5a,&local_24,0);
        plVar12[4] = lVar5;
        if ((lVar5 == 0) && (local_24 != -1)) {
          return 0;
        }
        uVar4 = *(undefined8 *)(*plVar12 + 0x30);
        lVar5 = FUN_00795280(uVar4);
        if (lVar5 != 0) {
          uVar13 = 0;
          do {
            uVar8 = FUN_007952e0(uVar4,uVar13);
            FUN_007a14b0();
            iVar2 = FUN_0078d994();
            iVar3 = FUN_007a1440(uVar8);
            if (((iVar3 != 0) && (iVar2 != 0x5a)) && (iVar2 != 0x302)) {
              *(uint *)((long)plVar12 + 0x1c) = *(uint *)((long)plVar12 + 0x1c) | 0x200;
              break;
            }
            uVar13 = uVar13 + 1;
            uVar7 = FUN_00795280(uVar4);
          } while (uVar13 < uVar7);
        }
        uVar4 = FUN_007a58b8(plVar12);
        if ((int)uVar4 == 0) {
          return uVar4;
        }
        goto LAB_007a564c;
      }
      uVar4 = 0xb;
      uVar8 = 0x8b;
      uVar9 = 0xa2;
    }
    else {
      lVar5 = FUN_0076cfe8();
      if (lVar5 == 1) {
        if ((*(long *)(*plVar12 + 0x30) == 0) || (lVar5 = FUN_00795280(), lVar5 != 0))
        goto LAB_007a56d4;
        uVar4 = 0xc;
        uVar8 = 0x6d;
        uVar9 = 0xaa;
      }
      else {
        uVar4 = 0xb;
        uVar8 = 0x8c;
        uVar9 = 0x9b;
      }
    }
    FUN_00777eb4(uVar4,0,uVar8,"../../third_party/boringssl/src/crypto/x509/x_crl.cc",uVar9);
    uVar4 = 0;
  }
  else {
    if (param_1 == 3) {
      FUN_0079ac70(plVar12[4]);
      FUN_00797440(plVar12[5]);
    }
    else if (param_1 == 1) {
      *(undefined8 *)((long)plVar12 + 0x24) = 0;
      *(undefined8 *)((long)plVar12 + 0x1c) = 0;
      *(undefined8 *)((long)plVar12 + 0x2c) = 0;
    }
LAB_007a564c:
    uVar4 = 1;
  }
  return uVar4;
}


// ===== 007a58b8  FUN_007a58b8 =====

undefined8 FUN_007a58b8(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  int local_44;
  
  lVar3 = FUN_0076cfe8(*(undefined8 *)*param_1);
  uVar4 = FUN_007a5adc(param_1);
  lVar5 = FUN_00795280();
  if (lVar5 != 0) {
    uVar10 = 0;
    do {
      lVar5 = FUN_007952e0(uVar4,uVar10);
      lVar11 = *(long *)(lVar5 + 0x10);
      if ((lVar3 == 0) && (lVar11 != 0)) {
        uVar4 = 0xb;
        uVar8 = 0x8c;
        uVar9 = 0x5e;
LAB_007a5a2c:
        FUN_00777eb4(uVar4,0,uVar8,"../../third_party/boringssl/src/crypto/x509/x_crl.cc",uVar9);
        return 0;
      }
      if ((lVar11 != 0) && (lVar6 = FUN_00795280(lVar11), lVar6 == 0)) {
        uVar4 = 0xc;
        uVar8 = 0x6d;
        uVar9 = 0x65;
        goto LAB_007a5a2c;
      }
      local_44 = -0x55555556;
      lVar6 = FUN_007a0df0(lVar5,0x8d,&local_44,0);
      if ((lVar6 == 0) && (local_44 != -1)) {
        *(uint *)((long)param_1 + 0x1c) = *(uint *)((long)param_1 + 0x1c) | 0x80;
        return 1;
      }
      if (lVar6 == 0) {
        *(undefined4 *)(lVar5 + 0x18) = 0xffffffff;
      }
      else {
        uVar1 = FUN_0076d03c(lVar6);
        *(undefined4 *)(lVar5 + 0x18) = uVar1;
        thunk_FUN_007695a4(lVar6);
      }
      lVar5 = FUN_00795280(lVar11);
      if (lVar5 != 0) {
        uVar12 = 0;
        do {
          FUN_007952e0(lVar11,uVar12);
          iVar2 = FUN_007a1440();
          if (iVar2 != 0) {
            *(uint *)((long)param_1 + 0x1c) = *(uint *)((long)param_1 + 0x1c) | 0x200;
            break;
          }
          uVar12 = uVar12 + 1;
          uVar7 = FUN_00795280(lVar11);
        } while (uVar12 < uVar7);
      }
      uVar10 = uVar10 + 1;
      uVar12 = FUN_00795280(uVar4);
    } while (uVar10 < uVar12);
  }
  return 1;
}


// ===== 007a5a54  FUN_007a5a54 =====

void FUN_007a5a54(code *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = param_3;
  uStack_18 = param_2;
  (*param_1)(&uStack_18,&local_20);
  return;
}


// ===== 007a5a88  FUN_007a5a88 =====

undefined8 FUN_007a5a88(long param_1)

{
  FUN_00793428(param_1 + 0x18);
  return 1;
}


// ===== 007a5aac  FUN_007a5aac =====

undefined8 FUN_007a5aac(long *param_1)

{
  return *(undefined8 *)(*param_1 + 0x18);
}


// ===== 007a5abc  FUN_007a5abc =====

undefined8 FUN_007a5abc(long *param_1)

{
  return *(undefined8 *)(*param_1 + 0x20);
}


// ===== 007a5acc  FUN_007a5acc =====

undefined8 FUN_007a5acc(long *param_1)

{
  return *(undefined8 *)(*param_1 + 0x10);
}


// ===== 007a5adc  FUN_007a5adc =====

undefined8 FUN_007a5adc(long *param_1)

{
  return *(undefined8 *)(*param_1 + 0x28);
}


// ===== 007a5aec  FUN_007a5aec =====

void FUN_007a5aec(undefined8 param_1)

{
  FUN_0076e060(param_1,&DAT_00d37498);
  return;
}


// ===== 007a5afc  FUN_007a5afc =====

void FUN_007a5afc(void)

{
  FUN_0076a75c();
  return;
}


// ===== 007a5b0c  FUN_007a5b0c =====

void FUN_007a5b0c(undefined8 param_1,undefined8 param_2)

{
  FUN_0076d2d0(param_1,param_2,&DAT_00d374e8);
  return;
}


// ===== 007a5b1c  FUN_007a5b1c =====

undefined8 * FUN_007a5b1c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_0078c954(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    uVar2 = FUN_0078de60();
    *puVar1 = uVar2;
    FUN_00769664(puVar1 + 1,0xffffffff);
    *(undefined4 *)(puVar1 + 4) = 0;
  }
  return puVar1;
}


// ===== 007a5b74  FUN_007a5b74 =====

void FUN_007a5b74(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_0076c804(*param_1);
    FUN_00769678(param_1 + 1);
    FUN_0078cb3c(param_1);
    return;
  }
  return;
}


// ===== 007a5bbc  FUN_007a5bbc =====

undefined8 * FUN_007a5bbc(undefined8 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00770970(&local_80);
  iVar1 = FUN_00770984(&local_80,0x10);
  if (iVar1 != 0) {
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    iVar1 = FUN_00771098(&local_80,&local_50,0x20000010);
    if ((((iVar1 != 0) && (iVar1 = FUN_0076c49c(&local_50,*param_1,0), iVar1 != 0)) &&
        (iVar1 = FUN_0076c490(&local_50,param_1 + 1), iVar1 != 0)) &&
       (iVar1 = FUN_00770ae8(&local_80), iVar1 != 0)) {
      puVar2 = (undefined1 *)FUN_00770cd4(&local_80);
      puStack_48 = (undefined1 *)FUN_00770d00(&local_80);
      local_50 = puVar2;
      puVar3 = (undefined8 *)FUN_0078c954(0x28);
      if (puVar3 == (undefined8 *)0x0) goto LAB_007a5cc4;
      puVar3[4] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      uVar4 = FUN_0078de60();
      *puVar3 = uVar4;
      FUN_00769664(puVar3 + 1,0xffffffff);
      *(undefined4 *)(puVar3 + 4) = 0;
      iVar1 = FUN_007a5ed8(&local_50,puVar3);
      if (iVar1 != 0) goto LAB_007a5cc4;
      FUN_0076c804(*puVar3);
      FUN_00769678(puVar3 + 1);
      FUN_0078cb3c(puVar3);
    }
  }
  puVar3 = (undefined8 *)0x0;
LAB_007a5cc4:
  FUN_00770a10(&local_80);
  return puVar3;
}


// ===== 007a5ce4  FUN_007a5ce4 =====

void FUN_007a5ce4(undefined8 param_1,undefined8 *param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  uint local_84;
  undefined8 local_80;
  long local_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  iVar4 = FUN_00771098(param_1,&local_c0,0x20000010);
  if (iVar4 == 0) {
    return;
  }
  iVar4 = FUN_0076c49c(&local_c0,*param_2,0);
  if (iVar4 == 0) {
    return;
  }
  if (param_3 == 0) {
LAB_007a5e6c:
    iVar4 = FUN_0076c490(&local_c0,param_2 + 1);
  }
  else {
    uVar1 = *(uint *)((long)param_2 + 0xc);
    if (uVar1 < 0x1f) {
      if ((0x4580000U >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
        if (uVar1 == 0x1c) {
          uVar5 = 0x95;
          pcVar6 = (code *)PTR_FUN_00d526f0;
        }
        else {
          if (uVar1 != 0x1e) goto LAB_007a5e54;
          uVar5 = 0x8e;
          pcVar6 = (code *)PTR_FUN_00d526e8;
        }
      }
      else {
        uVar5 = 0x44;
        pcVar6 = (code *)PTR_FUN_00d52710;
      }
    }
    else {
LAB_007a5e54:
      if (uVar1 != 0xc) goto LAB_007a5e6c;
      uVar5 = 0x96;
      pcVar6 = (code *)PTR_FUN_00d526f8;
    }
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    iVar4 = FUN_00771098(&local_c0,&local_70,0xc);
    if (iVar4 != 0) {
      local_80 = param_2[2];
      local_78 = (long)*(int *)(param_2 + 1);
      if (*(int *)(param_2 + 1) != 0) {
        bVar2 = false;
        bVar3 = 1;
        do {
          local_84 = 0xaaaaaaaa;
          iVar4 = (*pcVar6)(&local_80,&local_84);
          if (iVar4 == 0) {
            FUN_00777eb4(0xc,0,uVar5,"../../third_party/boringssl/src/crypto/x509/x_name.cc",0x180);
            return;
          }
          iVar4 = FUN_0078d08c(local_84);
          if (iVar4 == 0) {
            if ((bVar2) && (iVar4 = FUN_00771298(&local_70,0x20), iVar4 == 0)) {
              return;
            }
            if (local_84 < 0x80) {
              local_84 = FUN_0078d074(local_84);
            }
            iVar4 = FUN_00773d1c(&local_70,local_84);
            if (iVar4 == 0) {
              return;
            }
            bVar3 = 0;
            bVar2 = false;
          }
          else {
            bVar2 = (bool)(bVar3 ^ 1 | bVar2);
          }
        } while (local_78 != 0);
      }
      iVar4 = FUN_00770ae8(&local_c0);
    }
  }
  if (iVar4 != 0) {
    FUN_00770ae8(param_1);
  }
  return;
}


// ===== 007a5ed8  FUN_007a5ed8 =====

undefined8 FUN_007a5ed8(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *local_30;
  undefined1 *puStack_28;
  
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  iVar1 = FUN_00772950(param_1,&local_30,0x20000010);
  if (iVar1 == 0) {
    uVar3 = 0x43;
  }
  else {
    FUN_0076c804(*param_2);
    lVar2 = FUN_0076c688(&local_30,0);
    *param_2 = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0x4b;
    }
    else {
      iVar1 = FUN_0076bf20(&local_30,param_2 + 1);
      uVar3 = 0x4b;
      if ((iVar1 != 0) && (puStack_28 == (undefined1 *)0x0)) {
        return 1;
      }
    }
  }
  FUN_00777eb4(0xc,0,0x6d,"../../third_party/boringssl/src/crypto/x509/x_name.cc",uVar3);
  return 0;
}


// ===== 007a5f88  FUN_007a5f88 =====

void FUN_007a5f88(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 007a5f94  FUN_007a5f94 =====

void FUN_007a5f94(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_00795370(*param_1,FUN_00797d10,FUN_007a5b74);
  puVar1 = (undefined8 *)FUN_00d0f710(0,param_1 + 1);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_0078cb3c(*puVar1);
    FUN_0078cb3c(puVar1[2]);
    FUN_0078cb3c(puVar1);
    return;
  }
  return;
}


// ===== 007a6008  FUN_007a6008 =====

void FUN_007a6008(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_0078cb3c(*param_1);
    FUN_0078cb3c(param_1[2]);
    FUN_0078cb3c(param_1);
    return;
  }
  return;
}


// ===== 007a6048  FUN_007a6048 =====

void FUN_007a6048(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0078c9d4(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  return;
}


// ===== 007a6074  FUN_007a6074 =====

void FUN_007a6074(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    FUN_00795370(*param_1,FUN_00797d10,FUN_007a5b74);
    puVar1 = (undefined8 *)FUN_00d0f710(0,param_1 + 1);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_0078cb3c(*puVar1);
      FUN_0078cb3c(puVar1[2]);
      FUN_0078cb3c(puVar1);
    }
    FUN_0078cb3c(param_1);
    return;
  }
  return;
}


// ===== 007a60f0  FUN_007a60f0 =====

ulong FUN_007a60f0(undefined8 param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *local_38;
  
  FUN_00795370(*param_2,FUN_00797d10,FUN_007a5b74);
  puVar3 = (undefined8 *)FUN_00d0f710(0,param_2 + 1);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_0078cb3c(*puVar3);
    FUN_0078cb3c(puVar3[2]);
    FUN_0078cb3c(puVar3);
  }
  *param_2 = 0;
  param_2[1] = 0;
  uVar4 = FUN_00795214();
  *param_2 = uVar4;
  if (uVar4 != 0) {
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    local_38 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
    iVar1 = FUN_00772950(param_1,&puStack_40,0x20000010);
    if ((iVar1 == 0) || ((undefined1 *)0x100000 < local_38)) {
      uVar5 = 0xa7;
LAB_007a625c:
      FUN_00777eb4(0xc,0,0x6d,"../../third_party/boringssl/src/crypto/x509/x_name.cc",uVar5);
LAB_007a627c:
      uVar4 = 0;
    }
    else {
      if (local_38 != (undefined1 *)0x0) {
        iVar1 = 0;
        do {
          iVar2 = FUN_00772950(&puStack_40,&local_50,0x20000011);
          if ((iVar2 == 0) || (puStack_48 == (undefined1 *)0x0)) {
            uVar5 = 0xae;
            goto LAB_007a625c;
          }
          do {
            puVar3 = (undefined8 *)FUN_0078c954(0x28);
            if (puVar3 == (undefined8 *)0x0) {
              return 0;
            }
            puVar3[4] = 0;
            puVar3[1] = 0;
            *puVar3 = 0;
            puVar3[3] = 0;
            puVar3[2] = 0;
            uVar5 = FUN_0078de60();
            *puVar3 = uVar5;
            FUN_00769664(puVar3 + 1,0xffffffff);
            *(undefined4 *)(puVar3 + 4) = 0;
            iVar2 = FUN_007a5ed8(&local_50,puVar3);
            if (iVar2 == 0) {
LAB_007a6264:
              FUN_0076c804(*puVar3);
              FUN_00769678(puVar3 + 1);
              FUN_0078cb3c(puVar3);
              goto LAB_007a627c;
            }
            *(int *)(puVar3 + 4) = iVar1;
            lVar6 = FUN_00795868(*param_2,puVar3);
            if (lVar6 == 0) goto LAB_007a6264;
          } while (puStack_48 != (undefined1 *)0x0);
          iVar1 = iVar1 + 1;
        } while (local_38 != (undefined1 *)0x0);
      }
      lVar6 = FUN_007a62b4(param_2);
      uVar4 = (ulong)(lVar6 != 0);
    }
  }
  return uVar4;
}


// ===== 007a62b4  FUN_007a62b4 =====

undefined8 * FUN_007a62b4(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_0078c9d4(0x20);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
    }
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00770970(&local_50);
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    iVar1 = FUN_00770984(&local_50,0x10);
    if ((((iVar1 == 0) || (iVar1 = FUN_00771098(&local_50,&local_80,0x20000010), iVar1 == 0)) ||
        (iVar1 = FUN_007a6404(&local_80,param_1,0), iVar1 == 0)) ||
       (((iVar1 = FUN_00770a30(&local_50,puVar3 + 2,puVar3 + 3), iVar1 == 0 ||
         (iVar1 = FUN_00770984(&local_50,0x10), iVar1 == 0)) ||
        ((iVar1 = FUN_007a6404(&local_50,param_1,1), iVar1 == 0 ||
         (iVar1 = FUN_00770a30(&local_50,puVar3,puVar3 + 1), iVar1 == 0)))))) {
      if (puVar3 != (undefined8 *)0x0) {
        FUN_0078cb3c(*puVar3);
        FUN_0078cb3c(puVar3[2]);
        FUN_0078cb3c(puVar3);
        puVar3 = (undefined8 *)0x0;
      }
    }
    else {
      puVar2 = (undefined8 *)FUN_00d0f5e0(0,puVar3,param_1 + 8);
      if (puVar2 != (undefined8 *)0x0) {
        FUN_007a6008(puVar3);
        puVar3 = puVar2;
      }
    }
    FUN_00770a10(&local_50);
  }
  return puVar3;
}


// ===== 007a6404  FUN_007a6404 =====

ulong FUN_007a6404(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  
  lVar2 = FUN_00795280(*param_2);
  if (lVar2 == 0) {
    uVar3 = 1;
  }
  else {
    lVar2 = FUN_007952e0(*param_2,0);
    iVar1 = *(int *)(lVar2 + 0x20);
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    uVar3 = FUN_00771098(param_1,&local_80,0x20000011);
    if ((int)uVar3 != 0) {
      uVar5 = *param_2;
      lVar2 = FUN_00795280(uVar5);
      if (lVar2 != 0) {
        lVar6 = 0;
        do {
          lVar4 = FUN_007952e0(uVar5,lVar6);
          if (*(int *)(lVar4 + 0x20) != iVar1) {
            uVar3 = FUN_00771eec(&local_80);
            if ((int)uVar3 == 0) {
              return uVar3;
            }
            uVar3 = FUN_00771098(param_1,&local_80,0x20000011);
            if ((int)uVar3 == 0) {
              return uVar3;
            }
            iVar1 = *(int *)(lVar4 + 0x20);
          }
          uVar3 = FUN_007a5ce4(&local_80,lVar4,param_3);
          if ((int)uVar3 == 0) {
            return uVar3;
          }
          lVar6 = lVar6 + 1;
        } while (lVar2 != lVar6);
      }
      uVar3 = FUN_00771eec(&local_80);
      if ((int)uVar3 != 0) {
        iVar1 = FUN_00770ae8(param_1);
        uVar3 = (ulong)(iVar1 != 0);
      }
    }
  }
  return uVar3;
}


// ===== 007a6534  FUN_007a6534 =====

void FUN_007a6534(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00d0f710(0,param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_0078cb3c(*puVar1);
    FUN_0078cb3c(puVar1[2]);
    FUN_0078cb3c(puVar1);
    return;
  }
  return;
}


// ===== 007a658c  FUN_007a658c =====

void FUN_007a658c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_007a62b4(param_2);
  if (lVar1 != 0) {
    FUN_007712e0(param_1,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18));
    return;
  }
  return;
}


// ===== 007a65d4  FUN_007a65d4 =====

undefined8 * FUN_007a65d4(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar2 = (undefined8 *)FUN_0078c9d4(0x10);
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  lVar3 = FUN_007a62b4(param_1);
  if (lVar3 != 0) {
    if (puVar2 == param_1) {
      return puVar2;
    }
    local_30 = *(undefined8 *)(lVar3 + 0x10);
    uStack_28 = *(undefined8 *)(lVar3 + 0x18);
    iVar1 = FUN_007a60f0(&local_30,puVar2);
    if (iVar1 != 0) {
      return puVar2;
    }
  }
  FUN_00795370(*puVar2,FUN_00797d10,FUN_007a5b74);
  puVar4 = (undefined8 *)FUN_00d0f710(0,puVar2 + 1);
  if (puVar4 != (undefined8 *)0x0) {
    FUN_0078cb3c(*puVar4);
    FUN_0078cb3c(puVar4[2]);
    FUN_0078cb3c(puVar4);
  }
  FUN_0078cb3c(puVar2);
  return (undefined8 *)0x0;
}


// ===== 007a6698  FUN_007a6698 =====

undefined8 * FUN_007a6698(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_40;
  long lStack_38;
  
  if (param_3 < 0) {
    FUN_00777eb4(0xc,0,0x6b,"../../third_party/boringssl/src/crypto/x509/../bytestring/internal.h",
                 0x53);
  }
  else {
    local_40 = *param_2;
    lStack_38 = param_3;
    puVar2 = (undefined8 *)FUN_0078c9d4(0x10);
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    *puVar2 = 0;
    puVar2[1] = 0;
    iVar1 = FUN_007a60f0(&local_40,puVar2);
    if (iVar1 != 0) {
      if (param_1 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)*param_1;
        *param_1 = puVar2;
        if (puVar4 != (undefined8 *)0x0) {
          FUN_00795370(*puVar4,FUN_00797d10,FUN_007a5b74);
          puVar3 = (undefined8 *)FUN_00d0f710(0,puVar4 + 1);
          if (puVar3 != (undefined8 *)0x0) {
            FUN_0078cb3c(*puVar3);
            FUN_0078cb3c(puVar3[2]);
            FUN_0078cb3c(puVar3);
          }
          FUN_0078cb3c(puVar4);
        }
      }
      *param_2 = local_40;
      return puVar2;
    }
    FUN_00795370(*puVar2,FUN_00797d10,FUN_007a5b74);
    puVar4 = (undefined8 *)FUN_00d0f710(0,puVar2 + 1);
    if (puVar4 != (undefined8 *)0x0) {
      FUN_0078cb3c(*puVar4);
      FUN_0078cb3c(puVar4[2]);
      FUN_0078cb3c(puVar4);
    }
    FUN_0078cb3c(puVar2);
  }
  return (undefined8 *)0x0;
}


// ===== 007a67e4  FUN_007a67e4 =====

ulong FUN_007a67e4(long param_1,long *param_2)

{
  long lVar1;
  void *__dest;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong __n;
  
  if (param_1 == 0) {
    uVar2 = 0x43;
    uVar3 = 0x13d;
LAB_007a684c:
    FUN_00777eb4(0xb,0,uVar2,"../../third_party/boringssl/src/crypto/x509/x_name.cc",uVar3);
  }
  else {
    lVar1 = FUN_007a62b4();
    if (lVar1 != 0) {
      __n = *(ulong *)(lVar1 + 0x18);
      if (__n >> 0x1f == 0) {
        if (param_2 != (long *)0x0) {
          __dest = (void *)*param_2;
          if (__dest == (void *)0x0) {
            lVar1 = FUN_0078cf30(*(undefined8 *)(lVar1 + 0x10),__n);
            *param_2 = lVar1;
            uVar4 = (uint)__n;
            if (lVar1 == 0) {
              uVar4 = 0xffffffff;
            }
            __n = (ulong)uVar4;
          }
          else {
            if (__n == 0) {
              lVar1 = 0;
            }
            else {
              memcpy(__dest,*(void **)(lVar1 + 0x10),__n);
              lVar1 = *(long *)(lVar1 + 0x18);
              __dest = (void *)*param_2;
            }
            *param_2 = (long)__dest + lVar1;
          }
        }
        goto LAB_007a6854;
      }
      uVar2 = 0x45;
      uVar3 = 0x145;
      goto LAB_007a684c;
    }
  }
  __n = 0xffffffff;
LAB_007a6854:
  return __n & 0xffffffff;
}


// ===== 007a68c0  FUN_007a68c0 =====

undefined4 FUN_007a68c0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}


// ===== 007a68cc  FUN_007a68cc =====

bool FUN_007a68cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_0078c954(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    uVar2 = FUN_0078de60();
    *puVar1 = uVar2;
    FUN_00769664(puVar1 + 1,0xffffffff);
    *(undefined4 *)(puVar1 + 4) = 0;
  }
  *param_1 = puVar1;
  return puVar1 != (undefined8 *)0x0;
}


// ===== 007a6930  FUN_007a6930 =====

void FUN_007a6930(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_0076c804(*puVar1);
    FUN_00769678(puVar1 + 1);
    FUN_0078cb3c(puVar1);
  }
  *param_1 = 0;
  return;
}


// ===== 007a6984  FUN_007a6984 =====

undefined8 FUN_007a6984(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if ((param_4 != 0) && (iVar1 = FUN_00772a7c(param_2,0x20000010), iVar1 == 0)) {
    return 1;
  }
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_0078c954(0x28);
    if (puVar3 == (undefined8 *)0x0) {
      *param_1 = 0;
      return 0;
    }
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    uVar2 = FUN_0078de60();
    *puVar3 = uVar2;
    FUN_00769664(puVar3 + 1,0xffffffff);
    *(undefined4 *)(puVar3 + 4) = 0;
    *param_1 = puVar3;
  }
  uVar2 = FUN_007a5ed8(param_2,puVar3);
  return uVar2;
}


// ===== 007a6a34  FUN_007a6a34 =====

undefined4 FUN_007a6a34(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  param_1 = (undefined8 *)*param_1;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00770970(&local_80);
  iVar1 = FUN_00770984(&local_80,0x10);
  if (iVar1 != 0) {
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    iVar1 = FUN_00771098(&local_80,&local_50,0x20000010);
    if ((((iVar1 != 0) && (iVar1 = FUN_0076c49c(&local_50,*param_1,0), iVar1 != 0)) &&
        (iVar1 = FUN_0076c490(&local_50,param_1 + 1), iVar1 != 0)) &&
       (iVar1 = FUN_00770ae8(&local_80), iVar1 != 0)) {
      uVar2 = FUN_007708b4(&local_80,param_2);
      goto LAB_007a6ae0;
    }
  }
  uVar2 = 0xffffffff;
LAB_007a6ae0:
  FUN_00770a10(&local_80);
  return uVar2;
}


// ===== 007a6b00  FUN_007a6b00 =====

bool FUN_007a6b00(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0078c9d4(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  *param_1 = puVar1;
  return puVar1 != (undefined8 *)0x0;
}


// ===== 007a6b44  FUN_007a6b44 =====

void FUN_007a6b44(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00795370(*puVar2,FUN_00797d10,FUN_007a5b74);
    puVar1 = (undefined8 *)FUN_00d0f710(0,puVar2 + 1);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_0078cb3c(*puVar1);
      FUN_0078cb3c(puVar1[2]);
      FUN_0078cb3c(puVar1);
    }
    FUN_0078cb3c(puVar2);
  }
  *param_1 = 0;
  return;
}


// ===== 007a6bcc  FUN_007a6bcc =====

undefined8 FUN_007a6bcc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if ((param_4 != 0) && (iVar1 = FUN_00772a7c(param_2,0x20000010), iVar1 == 0)) {
    return 1;
  }
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_0078c9d4(0x10);
    if (puVar3 == (undefined8 *)0x0) {
      *param_1 = 0;
      return 0;
    }
    *puVar3 = 0;
    puVar3[1] = 0;
    *param_1 = puVar3;
  }
  uVar2 = FUN_007a60f0(param_2,puVar3);
  return uVar2;
}


// ===== 007a6c4c  FUN_007a6c4c =====

void FUN_007a6c4c(undefined8 *param_1)

{
  FUN_007a67e4(*param_1);
  return;
}


// ===== 007a6c58  FUN_007a6c58 =====

void FUN_007a6c58(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_007a1a7c();
  FUN_00769664(param_1 + 2,3);
  return;
}


// ===== 007a6c98  FUN_007a6c98 =====

void FUN_007a6c98(long param_1)

{
  FUN_007a1aac();
  FUN_00769678(param_1 + 0x10);
  FUN_00778828(*(undefined8 *)(param_1 + 0x28));
  return;
}


// ===== 007a6ccc  FUN_007a6ccc =====

undefined8 FUN_007a6ccc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *local_40;
  undefined1 *puStack_38;
  
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  iVar1 = FUN_00772950(param_1,&local_40,0x20000010);
  if ((((iVar1 == 0) || (iVar1 = FUN_007a1adc(&local_40,param_2), iVar1 == 0)) ||
      (iVar1 = FUN_00769f6c(&local_40,param_2 + 0x10,0), iVar1 == 0)) ||
     (puStack_38 != (undefined1 *)0x0)) {
    FUN_00777eb4(0xc,0,0x6d,"../../third_party/boringssl/src/crypto/x509/x_pubkey.cc",0x60);
    uVar2 = 0;
  }
  else {
    FUN_007a6d88(param_2,param_3,param_4);
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 007a6d88  FUN_007a6d88 =====

void FUN_007a6d88(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  FUN_00778828(*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x28) = 0;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00770970(&local_90);
  iVar1 = FUN_00770984(&local_90,0x40);
  if (iVar1 != 0) {
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    iVar1 = FUN_00771098(&local_90,&local_60,0x20000010);
    if ((((iVar1 != 0) && (iVar1 = FUN_007a1bbc(&local_60,param_1), iVar1 != 0)) &&
        (iVar1 = FUN_00769d88(&local_60,param_1 + 0x10,0), iVar1 != 0)) &&
       (iVar1 = FUN_00770ae8(&local_90), iVar1 != 0)) {
      uVar2 = FUN_00770cd4(&local_90);
      uVar3 = FUN_00770d00(&local_90);
      lVar4 = FUN_00778e08(uVar2,uVar3,param_2,param_3);
      if (lVar4 != 0) {
        *(long *)(param_1 + 0x28) = lVar4;
        goto LAB_007a6e68;
      }
    }
  }
  FUN_00777808();
LAB_007a6e68:
  FUN_00770a10(&local_90);
  return;
}


// ===== 007a6e88  FUN_007a6e88 =====

ulong FUN_007a6e88(undefined8 param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  uVar2 = FUN_00771098(param_1,&local_50,0x20000010);
  if ((((int)uVar2 != 0) && (uVar2 = FUN_007a1bbc(&local_50,param_2), (int)uVar2 != 0)) &&
     (uVar2 = FUN_00769d88(&local_50,param_2 + 0x10,0), (int)uVar2 != 0)) {
    iVar1 = FUN_00770ae8(param_1);
    uVar2 = (ulong)(iVar1 != 0);
  }
  return uVar2;
}


// ===== 007a6f0c  FUN_007a6f0c =====

long FUN_007a6f0c(long param_1)

{
  if ((param_1 != 0) && (param_1 = *(long *)(param_1 + 0x28), param_1 == 0)) {
    FUN_00777eb4(0xb,0,0x7d,"../../third_party/boringssl/src/crypto/x509/x_pubkey.cc",0xac);
    return 0;
  }
  return param_1;
}


// ===== 007a6f58  FUN_007a6f58 =====

long FUN_007a6f58(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28);
    if (lVar1 == 0) {
      FUN_00777eb4(0xb,0,0x7d,"../../third_party/boringssl/src/crypto/x509/x_pubkey.cc",0xac);
    }
    else {
      FUN_00778898(lVar1);
    }
  }
  return lVar1;
}


// ===== 007a6fb8  FUN_007a6fb8 =====

void FUN_007a6fb8(void)

{
  FUN_0076a75c();
  return;
}


// ===== 007a6fc8  FUN_007a6fc8 =====

void FUN_007a6fc8(undefined8 param_1,undefined8 param_2)

{
  FUN_0076d2d0(param_1,param_2,&DAT_00d375b8);
  return;
}


// ===== 007a6fd8  FUN_007a6fd8 =====

void FUN_007a6fd8(undefined8 param_1)

{
  FUN_0076e060(param_1,&DAT_00d375b8);
  return;
}


// ===== 007a6fe8  FUN_007a6fe8 =====

undefined8 * FUN_007a6fe8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0078c9d4(0x1a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0x34] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[0x15] = 0;
    puVar1[0x14] = 0;
    puVar1[0x17] = 0;
    puVar1[0x16] = 0;
    puVar1[0x19] = 0;
    puVar1[0x18] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x21] = 0;
    puVar1[0x20] = 0;
    puVar1[0x23] = 0;
    puVar1[0x22] = 0;
    puVar1[0x25] = 0;
    puVar1[0x24] = 0;
    puVar1[0x27] = 0;
    puVar1[0x26] = 0;
    puVar1[0x29] = 0;
    puVar1[0x28] = 0;
    puVar1[0x2b] = 0;
    puVar1[0x2a] = 0;
    puVar1[0x2d] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2f] = 0;
    puVar1[0x2e] = 0;
    puVar1[0x31] = 0;
    puVar1[0x30] = 0;
    puVar1[0x33] = 0;
    puVar1[0x32] = 0;
    puVar1[0x13] = 0;
    puVar1[0x12] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 0x1f) = 1;
    puVar1[0x21] = 0xffffffffffffffff;
    *(undefined1 *)puVar1 = 0;
    FUN_00769664(puVar1 + 1,2);
    FUN_007a1a7c(puVar1 + 4);
    FUN_007a5f88(puVar1 + 6);
    FUN_00769664(puVar1 + 8,0xffffffff);
    FUN_00769664(puVar1 + 0xb,0xffffffff);
    FUN_007a5f88(puVar1 + 0xe);
    FUN_007a6c58(puVar1 + 0x10);
    FUN_007a1a7c(puVar1 + 0x19);
    FUN_00769664(puVar1 + 0x1b,3);
    FUN_0078b418(puVar1 + 0x20);
    FUN_00795d20(puVar1 + 0x2e);
  }
  return puVar1;
}


// ===== 007a7108  FUN_007a7108 =====

int FUN_007a7108(long param_1)

{
  int iVar1;
  
  if ((uint)*(undefined8 *)(param_1 + 0xf8) < 2) {
    FUN_0078b424(&DAT_00d80258,param_1 + 0x100);
    FUN_00769678(param_1 + 8);
    FUN_007a1aac(param_1 + 0x20);
    FUN_007a5f94(param_1 + 0x30);
    FUN_00769678(param_1 + 0x40);
    FUN_00769678(param_1 + 0x58);
    FUN_007a5f94(param_1 + 0x70);
    FUN_007a6c98(param_1 + 0x80);
    thunk_FUN_007695a4(*(undefined8 *)(param_1 + 0xb0));
    thunk_FUN_007695a4(*(undefined8 *)(param_1 + 0xb8));
    FUN_00795370(*(undefined8 *)(param_1 + 0xc0),FUN_0079b7f4,PTR_FUN_00d528a0);
    FUN_007a1aac(param_1 + 200);
    FUN_00769678(param_1 + 0xd8);
    FUN_007a29e8(*(undefined8 *)(param_1 + 0xf0));
    thunk_FUN_007695a4(*(undefined8 *)(param_1 + 0x120));
    FUN_0079ac70(*(undefined8 *)(param_1 + 0x128));
    FUN_00797430(*(undefined8 *)(param_1 + 0x130));
    FUN_00796160(*(undefined8 *)(param_1 + 0x138));
    FUN_00799c50(*(undefined8 *)(param_1 + 0x140));
    FUN_007a7b18(*(undefined8 *)(param_1 + 0x168));
    iVar1 = pthread_rwlock_destroy((pthread_rwlock_t *)(param_1 + 0x170));
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 007a71fc  FUN_007a71fc =====

void FUN_007a71fc(long param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = FUN_0079347c(param_1 + 0xf8), iVar1 != 0)) {
    FUN_007a7108(param_1);
    FUN_0078cb3c(param_1);
    return;
  }
  return;
}


// ===== 007a724c  FUN_007a724c =====

byte * FUN_007a724c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  byte *pbVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *local_38;
  
  pbVar2 = (byte *)FUN_007a6fe8();
  if (pbVar2 == (byte *)0x0) {
    return (byte *)0x0;
  }
  if (param_1 != 0) {
    FUN_007a2ac4(param_1);
  }
  *(long *)(pbVar2 + 0xf0) = param_1;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007a2b00(param_1,&puStack_40);
  iVar1 = FUN_00772950(&puStack_40,&local_50,0x20000010);
  if (((((iVar1 == 0) || (local_38 != (undefined1 *)0x0)) || ((ulong)puStack_48 >> 0x1e != 0)) ||
      ((iVar1 = FUN_00772950(&local_50,&local_60,0x20000010), iVar1 == 0 ||
       (iVar1 = FUN_007a1adc(&local_50,pbVar2 + 200), iVar1 == 0)))) ||
     ((iVar1 = FUN_00769fe8(&local_50,pbVar2 + 0xd8), iVar1 == 0 ||
      (puStack_48 != (undefined1 *)0x0)))) {
    uVar3 = 0xc;
    uVar5 = 0x6d;
    uVar6 = 0x88;
  }
  else {
    iVar1 = FUN_00772a7c(&local_60,0xa0000000);
    if (iVar1 == 0) {
      *pbVar2 = 0;
LAB_007a73fc:
      puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      iVar1 = FUN_0076cb64(&local_60,pbVar2 + 8,0);
      if (((((iVar1 == 0) || (iVar1 = FUN_007a1adc(&local_60,pbVar2 + 0x20), iVar1 == 0)) ||
           (iVar1 = FUN_007a60f0(&local_60,pbVar2 + 0x30), iVar1 == 0)) ||
          ((iVar1 = FUN_00772950(&local_60,&local_70,0x20000010), iVar1 == 0 ||
           (iVar1 = FUN_00768bdc(&local_70,pbVar2 + 0x40,1), iVar1 == 0)))) ||
         (((iVar1 = FUN_00768bdc(&local_70,pbVar2 + 0x58,1), iVar1 == 0 ||
           ((puStack_68 != (undefined1 *)0x0 ||
            (iVar1 = FUN_007a60f0(&local_60,pbVar2 + 0x70), iVar1 == 0)))) ||
          (iVar1 = FUN_007a6ccc(&local_60,pbVar2 + 0x80,param_2,param_3), iVar1 == 0)))) {
        uVar3 = 0xc;
        uVar5 = 0x6d;
        uVar6 = 0xae;
      }
      else {
        if (*pbVar2 != 0) {
          iVar1 = FUN_00772a7c(&local_60,0x80000001);
          if (iVar1 != 0) {
            lVar4 = FUN_0076e960();
            *(long *)(pbVar2 + 0xb0) = lVar4;
            if ((lVar4 == 0) || (iVar1 = FUN_00769f6c(&local_60,lVar4,0x80000001), iVar1 == 0))
            goto LAB_007a73a4;
          }
          if (*pbVar2 != 0) {
            iVar1 = FUN_00772a7c(&local_60,0x80000002);
            if (iVar1 != 0) {
              lVar4 = FUN_0076e960();
              *(long *)(pbVar2 + 0xb8) = lVar4;
              if ((lVar4 == 0) || (iVar1 = FUN_00769f6c(&local_60,lVar4,0x80000002), iVar1 == 0))
              goto LAB_007a73a4;
            }
            if ((1 < *pbVar2) && (iVar1 = FUN_00772a7c(&local_60,0xa0000003), iVar1 != 0)) {
              puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
              local_80 = &DAT_aaaaaaaaaaaaaaaa;
              iVar1 = FUN_00772950(&local_60,&local_80,0xa0000003);
              if (iVar1 == 0) {
                uVar3 = 0xc;
                uVar5 = 0x6d;
                uVar6 = 199;
              }
              else {
                local_88 = local_80;
                lVar4 = FUN_007a5afc(0,&local_88,puStack_78);
                *(long *)(pbVar2 + 0xc0) = lVar4;
                if ((lVar4 != 0) && (local_88 == local_80 + (long)puStack_78)) goto LAB_007a75c0;
                uVar3 = 0xc;
                uVar5 = 0x6d;
                uVar6 = 0xd2;
              }
              goto LAB_007a73a0;
            }
          }
        }
LAB_007a75c0:
        if (puStack_58 == (undefined1 *)0x0) {
          return pbVar2;
        }
        uVar3 = 0xc;
        uVar5 = 0x6d;
        uVar6 = 0xd7;
      }
    }
    else {
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      iVar1 = FUN_00772950(&local_60,&local_70,0xa0000000);
      if (((iVar1 == 0) || (iVar1 = FUN_00772b1c(&local_70,&local_80), iVar1 == 0)) ||
         (puStack_68 != (undefined1 *)0x0)) {
        uVar3 = 0xc;
        uVar5 = 0x6d;
        uVar6 = 0x93;
      }
      else {
        if (local_80 < (undefined1 *)0x3) {
          *pbVar2 = (byte)local_80;
          goto LAB_007a73fc;
        }
        uVar3 = 0xb;
        uVar5 = 0x8c;
        uVar6 = 0x9b;
      }
    }
  }
LAB_007a73a0:
  FUN_00777eb4(uVar3,0,uVar5,"../../third_party/boringssl/src/crypto/x509/x_x509.cc",uVar6);
LAB_007a73a4:
  FUN_007a7108(pbVar2);
  FUN_0078cb3c(pbVar2);
  return (byte *)0x0;
}


// ===== 007a7600  FUN_007a7600 =====

void FUN_007a7600(undefined8 param_1)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_78 = FUN_0077b33c();
  local_70 = FUN_0077b34c();
  local_68 = FUN_0077b35c();
  local_60 = FUN_0077b36c();
  local_58 = FUN_0077d03c();
  local_50 = FUN_00788634();
  local_48 = FUN_00789f70();
  local_40 = FUN_00786980();
  local_38 = FUN_00786990();
  local_30 = FUN_007869a0();
  local_28 = FUN_0077ab84();
  FUN_007a724c(param_1,&local_78,0xb);
  return;
}


// ===== 007a7694  FUN_007a7694 =====

undefined8 FUN_007a7694(undefined8 param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  if (*(long *)(param_2 + 0xf0) == 0) {
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
    local_f0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
    local_d0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
    uVar3 = FUN_00771098(param_1,&local_60,0x20000010);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    if (*param_2 != '\0') {
      uVar3 = FUN_00771098(&local_60,&local_90,0xa0000000);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      uVar3 = FUN_007719cc(&local_90,*param_2);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
    }
    uVar3 = FUN_0076c8f0(&local_60,param_2 + 8,0);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    uVar3 = FUN_007a1bbc(&local_60,param_2 + 0x20);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    uVar3 = FUN_007a658c(&local_60,param_2 + 0x30);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    uVar3 = FUN_00771098(&local_60,&local_c0,0x20000010);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    uVar3 = FUN_00768c4c(&local_c0,param_2 + 0x40);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    uVar3 = FUN_00768c4c(&local_c0,param_2 + 0x58);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    uVar3 = FUN_007a658c(&local_60,param_2 + 0x70);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    uVar3 = FUN_007a6e88(&local_60,param_2 + 0x80);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    if ((*(long *)(param_2 + 0xb0) != 0) &&
       (uVar3 = FUN_00769d88(&local_60,*(long *)(param_2 + 0xb0),0x80000001), (int)uVar3 == 0)) {
      return uVar3;
    }
    if ((*(long *)(param_2 + 0xb8) != 0) &&
       (uVar3 = FUN_00769d88(&local_60,*(long *)(param_2 + 0xb8),0x80000002), (int)uVar3 == 0)) {
      return uVar3;
    }
    if (*(long *)(param_2 + 0xc0) != 0) {
      iVar1 = FUN_007a5b0c(*(long *)(param_2 + 0xc0),0);
      local_f8 = &DAT_aaaaaaaaaaaaaaaa;
      if ((((iVar1 < 1) || (iVar2 = FUN_00771098(&local_60,&local_f0,0xa0000003), iVar2 == 0)) ||
          (iVar2 = FUN_0077133c(&local_f0,&local_f8,iVar1), iVar2 == 0)) ||
         (iVar2 = FUN_007a5b0c(*(undefined8 *)(param_2 + 0xc0),&local_f8), iVar2 != iVar1))
      goto LAB_007a7730;
    }
    uVar3 = FUN_00770ae8(param_1);
  }
  else {
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_007a2b00(*(long *)(param_2 + 0xf0),&local_60);
    iVar1 = FUN_00772950(&local_60,&local_90,0x20000010);
    if ((iVar1 != 0) && (iVar1 = FUN_00772a18(&local_90,&local_c0,0x20000010), iVar1 != 0)) {
      uVar3 = FUN_007712e0(param_1,local_c0,puStack_b8);
      return uVar3;
    }
    FUN_00777eb4(0xb,0,0x44,"../../third_party/boringssl/src/crypto/x509/x_x509.cc",0xfc);
LAB_007a7730:
    uVar3 = 0;
  }
  return uVar3;
}


// ===== 007a78e0  FUN_007a78e0 =====

long FUN_007a78e0(long *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 local_50;
  long lStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  
  if (param_3 < 0) {
    pcVar5 = "../../third_party/boringssl/src/crypto/x509/../bytestring/internal.h";
    uVar4 = 0x6b;
    uVar6 = 0x53;
  }
  else {
    local_50 = *param_2;
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    lStack_48 = param_3;
    iVar1 = FUN_00772a18(&local_50,&local_40,0x20000010);
    if (iVar1 != 0) {
      lVar2 = FUN_007a29cc(&local_40,0);
      if (lVar2 == 0) {
        return 0;
      }
      lVar3 = FUN_007a7600();
      FUN_007a29e8(lVar2);
      if (lVar3 != 0) {
        if (param_1 != (long *)0x0) {
          lVar2 = *param_1;
          *param_1 = lVar3;
          if ((lVar2 != 0) && (iVar1 = FUN_0079347c(lVar2 + 0xf8), iVar1 != 0)) {
            FUN_007a7108(lVar2);
            FUN_0078cb3c(lVar2);
          }
        }
        *param_2 = local_50;
        return lVar3;
      }
      return 0;
    }
    pcVar5 = "../../third_party/boringssl/src/crypto/x509/x_x509.cc";
    uVar4 = 0x6d;
    uVar6 = 0xe6;
  }
  FUN_00777eb4(0xc,0,uVar4,pcVar5,uVar6);
  return 0;
}


// ===== 007a79e4  FUN_007a79e4 =====

undefined4 FUN_007a79e4(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  if (param_1 == 0) {
    FUN_00777eb4(0xc,0,0x9b,"../../third_party/boringssl/src/crypto/x509/x_x509.cc",0x138);
    return 0xffffffff;
  }
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00770970(&local_80);
  iVar1 = FUN_00770984(&local_80,0x100);
  if (iVar1 != 0) {
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    iVar1 = FUN_00771098(&local_80,&local_50,0x20000010);
    if ((((iVar1 != 0) && (iVar1 = FUN_007a7694(&local_50,param_1), iVar1 != 0)) &&
        (iVar1 = FUN_007a1bbc(&local_50,param_1 + 200), iVar1 != 0)) &&
       ((iVar1 = FUN_00769d88(&local_50,param_1 + 0xd8,0), iVar1 != 0 &&
        (iVar1 = FUN_00770ae8(&local_80), iVar1 != 0)))) {
      uVar2 = FUN_007708b4(&local_80,param_2);
      goto LAB_007a7aa4;
    }
  }
  uVar2 = 0xffffffff;
LAB_007a7aa4:
  FUN_00770a10(&local_80);
  return uVar2;
}


// ===== 007a7ae8  FUN_007a7ae8 =====

undefined8 FUN_007a7ae8(long param_1)

{
  FUN_00793428(param_1 + 0xf8);
  return 1;
}


// ===== 007a7b0c  FUN_007a7b0c =====

void FUN_007a7b0c(long param_1)

{
  FUN_0078d994(*(undefined8 *)(param_1 + 200));
  return;
}


// ===== 007a7b18  FUN_007a7b18 =====

void FUN_007a7b18(undefined8 param_1)

{
  FUN_0076e060(param_1,&DAT_00d376a8);
  return;
}


// ===== 007a7b40  FUN_007a7b40 =====

undefined8 FUN_007a7b40(byte *param_1,uint param_2,undefined4 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  char cVar15;
  byte *pbVar16;
  byte *pbVar17;
  int iVar18;
  undefined4 *puVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  byte bVar22;
  byte bVar24;
  byte bVar25;
  undefined4 uVar23;
  byte bVar26;
  byte bVar27;
  byte bVar29;
  byte bVar30;
  undefined4 uVar28;
  byte bVar31;
  undefined4 uVar32;
  byte bVar33;
  byte bVar35;
  byte bVar36;
  undefined4 uVar34;
  byte bVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
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
  byte bVar72;
  byte bVar73;
  undefined8 in_d4;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  undefined1 auVar70 [16];
  byte bVar74;
  byte bVar82;
  undefined1 auVar71 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  byte bVar86;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  byte bVar106;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  
  uVar34 = DAT_00213f0c;
  uVar32 = DAT_00213f08;
  uVar28 = DAT_00213f04;
  uVar23 = DAT_00213f00;
  uVar20 = 0xfffffffffffffffe;
  if (((0x7f < (int)param_2) && ((int)param_2 < 0x101)) && ((param_2 & 0x3f) == 0)) {
    bVar50 = *param_1;
    bVar51 = param_1[1];
    bVar52 = param_1[2];
    bVar53 = param_1[3];
    pbVar17 = param_1 + 4;
    bVar54 = *pbVar17;
    bVar55 = param_1[5];
    bVar56 = param_1[6];
    bVar57 = param_1[7];
    uVar9 = *(undefined4 *)pbVar17;
    uVar21 = *(undefined4 *)pbVar17;
    pbVar17 = param_1 + 8;
    bVar58 = *pbVar17;
    bVar59 = param_1[9];
    bVar60 = param_1[10];
    bVar61 = param_1[0xb];
    uVar10 = *(undefined4 *)pbVar17;
    uVar7 = *(undefined4 *)pbVar17;
    pbVar17 = param_1 + 0xc;
    bVar62 = *pbVar17;
    bVar64 = param_1[0xd];
    bVar66 = param_1[0xe];
    bVar68 = param_1[0xf];
    uVar11 = *(undefined4 *)pbVar17;
    uVar8 = *(undefined4 *)pbVar17;
    iVar18 = 8;
    cVar38 = (char)DAT_00213f10;
    uVar12 = (uint)DAT_00213f10 >> 8;
    uVar13 = (uint)DAT_00213f10 >> 0x10;
    uVar14 = (uint)DAT_00213f10 >> 0x18;
    cVar15 = (char)DAT_00213f14;
    auVar88[4] = (char)DAT_00213f14;
    auVar88._0_4_ = DAT_00213f10;
    auVar85[4] = (char)DAT_00213f14;
    auVar85._0_4_ = DAT_00213f10;
    auVar89[4] = (char)DAT_00213f14;
    auVar89._0_4_ = DAT_00213f10;
    auVar84[4] = (char)DAT_00213f14;
    auVar84._0_4_ = DAT_00213f10;
    cVar39 = (char)((uint)DAT_00213f14 >> 8);
    cVar40 = (char)((uint)DAT_00213f14 >> 0x10);
    cVar41 = (char)((uint)DAT_00213f14 >> 0x18);
    cVar42 = (char)DAT_00213f18;
    cVar43 = (char)((uint)DAT_00213f18 >> 8);
    cVar44 = (char)((uint)DAT_00213f18 >> 0x10);
    cVar45 = (char)((uint)DAT_00213f18 >> 0x18);
    cVar46 = (char)DAT_00213f1c;
    cVar47 = (char)((uint)DAT_00213f1c >> 8);
    cVar48 = (char)((uint)DAT_00213f1c >> 0x10);
    cVar49 = (char)((uint)DAT_00213f1c >> 0x18);
    if ((int)param_2 < 0xc0) {
      do {
        puVar19 = param_3;
        auVar84[5] = cVar39;
        auVar84[6] = cVar40;
        auVar84[7] = cVar41;
        auVar84[8] = cVar42;
        auVar84[9] = cVar43;
        auVar84[10] = cVar44;
        auVar84[0xb] = cVar45;
        auVar84[0xc] = cVar46;
        auVar84[0xd] = cVar47;
        auVar84[0xe] = cVar48;
        auVar84[0xf] = cVar49;
        auVar90[1] = bVar51;
        auVar90[0] = bVar50;
        auVar90[2] = bVar52;
        auVar90[3] = bVar53;
        auVar90[4] = bVar54;
        auVar90[5] = bVar55;
        auVar90[6] = bVar56;
        auVar90[7] = bVar57;
        auVar90[8] = bVar58;
        auVar90[9] = bVar59;
        auVar90[10] = bVar60;
        auVar90[0xb] = bVar61;
        auVar90[0xc] = bVar62;
        auVar90[0xd] = bVar64;
        auVar90[0xe] = bVar66;
        auVar90[0xf] = bVar68;
        auVar90 = a64_TBL(ZEXT816(0),auVar90,auVar84);
        auVar83[1] = bVar51;
        auVar83[0] = bVar50;
        auVar83[2] = bVar52;
        auVar83[3] = bVar53;
        auVar83[4] = bVar54;
        auVar83[5] = bVar55;
        auVar83[6] = bVar56;
        auVar83[7] = bVar57;
        auVar83[8] = bVar58;
        auVar83[9] = bVar59;
        auVar83[10] = bVar60;
        auVar83[0xb] = bVar61;
        auVar83[0xc] = bVar62;
        auVar83[0xd] = bVar64;
        auVar83[0xe] = bVar66;
        auVar83[0xf] = bVar68;
        auVar88 = NEON_ext(ZEXT216(0),auVar83,0xc,1);
        *puVar19 = CONCAT13(bVar53,CONCAT12(bVar52,CONCAT11(bVar51,bVar50)));
        puVar19[1] = CONCAT13(bVar57,CONCAT12(bVar56,CONCAT11(bVar55,bVar54)));
        puVar19[2] = CONCAT13(bVar61,CONCAT12(bVar60,CONCAT11(bVar59,bVar58)));
        puVar19[3] = CONCAT13(bVar68,CONCAT12(bVar66,CONCAT11(bVar64,bVar62)));
        uVar9 = DAT_00213f2c;
        uVar8 = DAT_00213f28;
        uVar7 = DAT_00213f24;
        uVar21 = DAT_00213f20;
        auVar87 = NEON_aese(auVar90,ZEXT216(0));
        iVar18 = iVar18 + -1;
        auVar90 = NEON_ext(ZEXT216(0),auVar88,0xc,1);
        auVar83 = NEON_ext(ZEXT216(0),auVar90,0xc,1);
        bVar22 = (byte)uVar23;
        bVar24 = (byte)((uint)uVar23 >> 8);
        bVar25 = (byte)((uint)uVar23 >> 0x10);
        bVar26 = (byte)((uint)uVar23 >> 0x18);
        bVar27 = (byte)uVar28;
        bVar29 = (byte)((uint)uVar28 >> 8);
        bVar30 = (byte)((uint)uVar28 >> 0x10);
        bVar31 = (byte)((uint)uVar28 >> 0x18);
        bVar63 = (byte)uVar32;
        bVar65 = (byte)((uint)uVar32 >> 8);
        bVar67 = (byte)((uint)uVar32 >> 0x10);
        bVar69 = (byte)((uint)uVar32 >> 0x18);
        bVar33 = (byte)uVar34;
        bVar35 = (byte)((uint)uVar34 >> 8);
        bVar36 = (byte)((uint)uVar34 >> 0x10);
        bVar37 = (byte)((uint)uVar34 >> 0x18);
        uVar23 = CONCAT13(bVar26 << 1,CONCAT12(bVar25 << 1,CONCAT11(bVar24 << 1,bVar22 << 1)));
        uVar28 = CONCAT13(bVar31 << 1,CONCAT12(bVar30 << 1,CONCAT11(bVar29 << 1,bVar27 << 1)));
        uVar32 = CONCAT13(bVar69 << 1,CONCAT12(bVar67 << 1,CONCAT11(bVar65 << 1,bVar63 << 1)));
        uVar34 = CONCAT13(bVar37 << 1,CONCAT12(bVar36 << 1,CONCAT11(bVar35 << 1,bVar33 << 1)));
        bVar50 = bVar50 ^ auVar88[0] ^ auVar90[0] ^ auVar83[0] ^ auVar87[0] ^ bVar22;
        bVar51 = bVar51 ^ auVar88[1] ^ auVar90[1] ^ auVar83[1] ^ auVar87[1] ^ bVar24;
        bVar52 = bVar52 ^ auVar88[2] ^ auVar90[2] ^ auVar83[2] ^ auVar87[2] ^ bVar25;
        bVar53 = bVar53 ^ auVar88[3] ^ auVar90[3] ^ auVar83[3] ^ auVar87[3] ^ bVar26;
        bVar54 = bVar54 ^ auVar88[4] ^ auVar90[4] ^ auVar83[4] ^ auVar87[4] ^ bVar27;
        bVar55 = bVar55 ^ auVar88[5] ^ auVar90[5] ^ auVar83[5] ^ auVar87[5] ^ bVar29;
        bVar56 = bVar56 ^ auVar88[6] ^ auVar90[6] ^ auVar83[6] ^ auVar87[6] ^ bVar30;
        bVar57 = bVar57 ^ auVar88[7] ^ auVar90[7] ^ auVar83[7] ^ auVar87[7] ^ bVar31;
        bVar58 = bVar58 ^ auVar88[8] ^ auVar90[8] ^ auVar83[8] ^ auVar87[8] ^ bVar63;
        bVar59 = bVar59 ^ auVar88[9] ^ auVar90[9] ^ auVar83[9] ^ auVar87[9] ^ bVar65;
        bVar60 = bVar60 ^ auVar88[10] ^ auVar90[10] ^ auVar83[10] ^ auVar87[10] ^ bVar67;
        bVar61 = bVar61 ^ auVar88[0xb] ^ auVar90[0xb] ^ auVar83[0xb] ^ auVar87[0xb] ^ bVar69;
        bVar62 = bVar62 ^ auVar88[0xc] ^ auVar90[0xc] ^ auVar83[0xc] ^ auVar87[0xc] ^ bVar33;
        bVar64 = bVar64 ^ auVar88[0xd] ^ auVar90[0xd] ^ auVar83[0xd] ^ auVar87[0xd] ^ bVar35;
        bVar66 = bVar66 ^ auVar88[0xe] ^ auVar90[0xe] ^ auVar83[0xe] ^ auVar87[0xe] ^ bVar36;
        bVar68 = bVar68 ^ auVar88[0xf] ^ auVar90[0xf] ^ auVar83[0xf] ^ auVar87[0xf] ^ bVar37;
        param_3 = puVar19 + 4;
      } while (iVar18 != 0);
      auVar89[5] = cVar39;
      auVar89[6] = cVar40;
      auVar89[7] = cVar41;
      auVar89[8] = cVar42;
      auVar89[9] = cVar43;
      auVar89[10] = cVar44;
      auVar89[0xb] = cVar45;
      auVar89[0xc] = cVar46;
      auVar89[0xd] = cVar47;
      auVar89[0xe] = cVar48;
      auVar89[0xf] = cVar49;
      auVar87[1] = bVar51;
      auVar87[0] = bVar50;
      auVar87[2] = bVar52;
      auVar87[3] = bVar53;
      auVar87[4] = bVar54;
      auVar87[5] = bVar55;
      auVar87[6] = bVar56;
      auVar87[7] = bVar57;
      auVar87[8] = bVar58;
      auVar87[9] = bVar59;
      auVar87[10] = bVar60;
      auVar87[0xb] = bVar61;
      auVar87[0xc] = bVar62;
      auVar87[0xd] = bVar64;
      auVar87[0xe] = bVar66;
      auVar87[0xf] = bVar68;
      auVar84 = a64_TBL(ZEXT816(0),auVar87,auVar89);
      auVar4[1] = bVar51;
      auVar4[0] = bVar50;
      auVar4[2] = bVar52;
      auVar4[3] = bVar53;
      auVar4[4] = bVar54;
      auVar4[5] = bVar55;
      auVar4[6] = bVar56;
      auVar4[7] = bVar57;
      auVar4[8] = bVar58;
      auVar4[9] = bVar59;
      auVar4[10] = bVar60;
      auVar4[0xb] = bVar61;
      auVar4[0xc] = bVar62;
      auVar4[0xd] = bVar64;
      auVar4[0xe] = bVar66;
      auVar4[0xf] = bVar68;
      auVar88 = NEON_ext(ZEXT216(0),auVar4,0xc,1);
      puVar19[4] = CONCAT13(bVar53,CONCAT12(bVar52,CONCAT11(bVar51,bVar50)));
      puVar19[5] = CONCAT13(bVar57,CONCAT12(bVar56,CONCAT11(bVar55,bVar54)));
      puVar19[6] = CONCAT13(bVar61,CONCAT12(bVar60,CONCAT11(bVar59,bVar58)));
      puVar19[7] = CONCAT13(bVar68,CONCAT12(bVar66,CONCAT11(bVar64,bVar62)));
      auVar90 = NEON_aese(auVar84,ZEXT216(0));
      auVar84 = NEON_ext(ZEXT216(0),auVar88,0xc,1);
      auVar89 = NEON_ext(ZEXT216(0),auVar84,0xc,1);
      bVar22 = (byte)((uint)uVar21 >> 8);
      bVar24 = (byte)((uint)uVar21 >> 0x10);
      bVar25 = (byte)((uint)uVar21 >> 0x18);
      bVar26 = (byte)((uint)uVar7 >> 8);
      bVar27 = (byte)((uint)uVar7 >> 0x10);
      bVar29 = (byte)((uint)uVar7 >> 0x18);
      bVar30 = (byte)((uint)uVar8 >> 8);
      bVar31 = (byte)((uint)uVar8 >> 0x10);
      bVar63 = (byte)((uint)uVar8 >> 0x18);
      bVar65 = (byte)((uint)uVar9 >> 8);
      bVar67 = (byte)((uint)uVar9 >> 0x10);
      bVar69 = (byte)((uint)uVar9 >> 0x18);
      bVar50 = bVar50 ^ auVar88[0] ^ auVar84[0] ^ auVar89[0] ^ auVar90[0] ^ (byte)uVar21;
      bVar51 = bVar51 ^ auVar88[1] ^ auVar84[1] ^ auVar89[1] ^ auVar90[1] ^ bVar22;
      bVar52 = bVar52 ^ auVar88[2] ^ auVar84[2] ^ auVar89[2] ^ auVar90[2] ^ bVar24;
      bVar53 = bVar53 ^ auVar88[3] ^ auVar84[3] ^ auVar89[3] ^ auVar90[3] ^ bVar25;
      bVar54 = bVar54 ^ auVar88[4] ^ auVar84[4] ^ auVar89[4] ^ auVar90[4] ^ (byte)uVar7;
      bVar55 = bVar55 ^ auVar88[5] ^ auVar84[5] ^ auVar89[5] ^ auVar90[5] ^ bVar26;
      bVar56 = bVar56 ^ auVar88[6] ^ auVar84[6] ^ auVar89[6] ^ auVar90[6] ^ bVar27;
      bVar57 = bVar57 ^ auVar88[7] ^ auVar84[7] ^ auVar89[7] ^ auVar90[7] ^ bVar29;
      bVar58 = bVar58 ^ auVar88[8] ^ auVar84[8] ^ auVar89[8] ^ auVar90[8] ^ (byte)uVar8;
      bVar59 = bVar59 ^ auVar88[9] ^ auVar84[9] ^ auVar89[9] ^ auVar90[9] ^ bVar30;
      bVar60 = bVar60 ^ auVar88[10] ^ auVar84[10] ^ auVar89[10] ^ auVar90[10] ^ bVar31;
      bVar61 = bVar61 ^ auVar88[0xb] ^ auVar84[0xb] ^ auVar89[0xb] ^ auVar90[0xb] ^ bVar63;
      bVar62 = bVar62 ^ auVar88[0xc] ^ auVar84[0xc] ^ auVar89[0xc] ^ auVar90[0xc] ^ (byte)uVar9;
      bVar64 = bVar64 ^ auVar88[0xd] ^ auVar84[0xd] ^ auVar89[0xd] ^ auVar90[0xd] ^ bVar65;
      bVar66 = bVar66 ^ auVar88[0xe] ^ auVar84[0xe] ^ auVar89[0xe] ^ auVar90[0xe] ^ bVar67;
      bVar68 = bVar68 ^ auVar88[0xf] ^ auVar84[0xf] ^ auVar89[0xf] ^ auVar90[0xf] ^ bVar69;
      auVar85[5] = cVar39;
      auVar85[6] = cVar40;
      auVar85[7] = cVar41;
      auVar85[8] = cVar42;
      auVar85[9] = cVar43;
      auVar85[10] = cVar44;
      auVar85[0xb] = cVar45;
      auVar85[0xc] = cVar46;
      auVar85[0xd] = cVar47;
      auVar85[0xe] = cVar48;
      auVar85[0xf] = cVar49;
      auVar5[1] = bVar51;
      auVar5[0] = bVar50;
      auVar5[2] = bVar52;
      auVar5[3] = bVar53;
      auVar5[4] = bVar54;
      auVar5[5] = bVar55;
      auVar5[6] = bVar56;
      auVar5[7] = bVar57;
      auVar5[8] = bVar58;
      auVar5[9] = bVar59;
      auVar5[10] = bVar60;
      auVar5[0xb] = bVar61;
      auVar5[0xc] = bVar62;
      auVar5[0xd] = bVar64;
      auVar5[0xe] = bVar66;
      auVar5[0xf] = bVar68;
      auVar84 = a64_TBL(ZEXT816(0),auVar5,auVar85);
      auVar6[1] = bVar51;
      auVar6[0] = bVar50;
      auVar6[2] = bVar52;
      auVar6[3] = bVar53;
      auVar6[4] = bVar54;
      auVar6[5] = bVar55;
      auVar6[6] = bVar56;
      auVar6[7] = bVar57;
      auVar6[8] = bVar58;
      auVar6[9] = bVar59;
      auVar6[10] = bVar60;
      auVar6[0xb] = bVar61;
      auVar6[0xc] = bVar62;
      auVar6[0xd] = bVar64;
      auVar6[0xe] = bVar66;
      auVar6[0xf] = bVar68;
      auVar88 = NEON_ext(ZEXT216(0),auVar6,0xc,1);
      puVar19[8] = CONCAT13(bVar53,CONCAT12(bVar52,CONCAT11(bVar51,bVar50)));
      puVar19[9] = CONCAT13(bVar57,CONCAT12(bVar56,CONCAT11(bVar55,bVar54)));
      puVar19[10] = CONCAT13(bVar61,CONCAT12(bVar60,CONCAT11(bVar59,bVar58)));
      puVar19[0xb] = CONCAT13(bVar68,CONCAT12(bVar66,CONCAT11(bVar64,bVar62)));
      auVar85 = NEON_aese(auVar84,ZEXT216(0));
      auVar84 = NEON_ext(ZEXT216(0),auVar88,0xc,1);
      auVar89 = NEON_ext(ZEXT216(0),auVar84,0xc,1);
      puVar19[0xc] = CONCAT13(bVar53 ^ auVar88[3] ^ auVar84[3] ^ auVar89[3] ^
                              auVar85[3] ^ bVar25 << 1,
                              CONCAT12(bVar52 ^ auVar88[2] ^ auVar84[2] ^ auVar89[2] ^
                                       auVar85[2] ^ bVar24 << 1,
                                       CONCAT11(bVar51 ^ auVar88[1] ^ auVar84[1] ^ auVar89[1] ^
                                                auVar85[1] ^ bVar22 << 1,
                                                bVar50 ^ auVar88[0] ^ auVar84[0] ^ auVar89[0] ^
                                                auVar85[0] ^ (byte)uVar21 << 1)));
      puVar19[0xd] = CONCAT13(bVar57 ^ auVar88[7] ^ auVar84[7] ^ auVar89[7] ^
                              auVar85[7] ^ bVar29 << 1,
                              CONCAT12(bVar56 ^ auVar88[6] ^ auVar84[6] ^ auVar89[6] ^
                                       auVar85[6] ^ bVar27 << 1,
                                       CONCAT11(bVar55 ^ auVar88[5] ^ auVar84[5] ^ auVar89[5] ^
                                                auVar85[5] ^ bVar26 << 1,
                                                bVar54 ^ auVar88[4] ^ auVar84[4] ^ auVar89[4] ^
                                                auVar85[4] ^ (byte)uVar7 << 1)));
      puVar19[0xe] = CONCAT13(bVar61 ^ auVar88[0xb] ^ auVar84[0xb] ^ auVar89[0xb] ^
                              auVar85[0xb] ^ bVar63 << 1,
                              CONCAT12(bVar60 ^ auVar88[10] ^ auVar84[10] ^ auVar89[10] ^
                                       auVar85[10] ^ bVar31 << 1,
                                       CONCAT11(bVar59 ^ auVar88[9] ^ auVar84[9] ^ auVar89[9] ^
                                                auVar85[9] ^ bVar30 << 1,
                                                bVar58 ^ auVar88[8] ^ auVar84[8] ^ auVar89[8] ^
                                                auVar85[8] ^ (byte)uVar8 << 1)));
      puVar19[0xf] = CONCAT13(bVar68 ^ auVar88[0xf] ^ auVar84[0xf] ^ auVar89[0xf] ^
                              auVar85[0xf] ^ bVar69 << 1,
                              CONCAT12(bVar66 ^ auVar88[0xe] ^ auVar84[0xe] ^ auVar89[0xe] ^
                                       auVar85[0xe] ^ bVar67 << 1,
                                       CONCAT11(bVar64 ^ auVar88[0xd] ^ auVar84[0xd] ^ auVar89[0xd]
                                                ^ auVar85[0xd] ^ bVar65 << 1,
                                                bVar62 ^ auVar88[0xc] ^ auVar84[0xc] ^ auVar89[0xc]
                                                ^ auVar85[0xc] ^ (byte)uVar9 << 1)));
      pbVar17 = (byte *)(puVar19 + 0x20);
      uVar21 = 10;
    }
    else if (param_2 == 0xc0) {
      auVar70._8_8_ = in_d4;
      auVar70._0_8_ = *(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x10);
      *param_3 = *(undefined4 *)param_1;
      param_3[1] = uVar21;
      param_3[2] = uVar7;
      param_3[3] = uVar8;
      pbVar16 = (byte *)(param_3 + 4);
      do {
        pbVar17 = pbVar16;
        auVar1[1] = (char)uVar12 + -8;
        auVar1[0] = cVar38 + -8;
        auVar1[2] = (char)uVar13 + -8;
        auVar1[3] = (char)uVar14 + -8;
        auVar1[4] = cVar15 + -8;
        auVar1[5] = cVar39 + -8;
        auVar1[6] = cVar40 + -8;
        auVar1[7] = cVar41 + -8;
        auVar1[8] = cVar42 + -8;
        auVar1[9] = cVar43 + -8;
        auVar1[10] = cVar44 + -8;
        auVar1[0xb] = cVar45 + -8;
        auVar1[0xc] = cVar46 + -8;
        auVar1[0xd] = cVar47 + -8;
        auVar1[0xe] = cVar48 + -8;
        auVar1[0xf] = cVar49 + -8;
        auVar88 = a64_TBL(ZEXT816(0),auVar70,auVar1);
        auVar3[1] = bVar51;
        auVar3[0] = bVar50;
        auVar3[2] = bVar52;
        auVar3[3] = bVar53;
        auVar3[4] = bVar54;
        auVar3[5] = bVar55;
        auVar3[6] = bVar56;
        auVar3[7] = bVar57;
        auVar3[8] = bVar58;
        auVar3[9] = bVar59;
        auVar3[10] = bVar60;
        auVar3[0xb] = bVar61;
        auVar3[0xc] = bVar62;
        auVar3[0xd] = bVar64;
        auVar3[0xe] = bVar66;
        auVar3[0xf] = bVar68;
        auVar84 = NEON_ext(ZEXT216(0),auVar3,0xc,1);
        *pbVar17 = auVar70[0];
        bVar33 = auVar70[1];
        pbVar17[1] = bVar33;
        bVar35 = auVar70[2];
        pbVar17[2] = bVar35;
        bVar36 = auVar70[3];
        pbVar17[3] = bVar36;
        bVar37 = auVar70[4];
        pbVar17[4] = bVar37;
        bVar72 = auVar70[5];
        pbVar17[5] = bVar72;
        bVar73 = auVar70[6];
        pbVar17[6] = bVar73;
        bVar74 = auVar70[7];
        pbVar17[7] = bVar74;
        auVar88 = NEON_aese(auVar88,ZEXT216(0));
        iVar18 = iVar18 + -1;
        auVar89 = NEON_ext(ZEXT216(0),auVar84,0xc,1);
        auVar85 = NEON_ext(ZEXT216(0),auVar89,0xc,1);
        bVar63 = bVar62 ^ auVar84[0xc] ^ auVar89[0xc] ^ auVar85[0xc];
        bVar65 = bVar64 ^ auVar84[0xd] ^ auVar89[0xd] ^ auVar85[0xd];
        bVar67 = bVar66 ^ auVar84[0xe] ^ auVar89[0xe] ^ auVar85[0xe];
        bVar69 = bVar68 ^ auVar84[0xf] ^ auVar89[0xf] ^ auVar85[0xf];
        bVar75 = auVar70[8];
        bVar76 = auVar70[9];
        bVar77 = auVar70[10];
        bVar78 = auVar70[0xb];
        bVar79 = auVar70[0xc];
        bVar80 = auVar70[0xd];
        bVar81 = auVar70[0xe];
        bVar82 = auVar70[0xf];
        bVar86 = auVar88[0] ^ (byte)uVar23;
        bVar62 = (byte)((uint)uVar23 >> 8);
        bVar92 = auVar88[1] ^ bVar62;
        bVar64 = (byte)((uint)uVar23 >> 0x10);
        bVar93 = auVar88[2] ^ bVar64;
        bVar66 = (byte)((uint)uVar23 >> 0x18);
        bVar94 = auVar88[3] ^ bVar66;
        bVar95 = auVar88[4] ^ (byte)uVar28;
        bVar68 = (byte)((uint)uVar28 >> 8);
        bVar96 = auVar88[5] ^ bVar68;
        bVar22 = (byte)((uint)uVar28 >> 0x10);
        bVar97 = auVar88[6] ^ bVar22;
        bVar24 = (byte)((uint)uVar28 >> 0x18);
        bVar98 = auVar88[7] ^ bVar24;
        bVar99 = auVar88[8] ^ (byte)uVar32;
        bVar25 = (byte)((uint)uVar32 >> 8);
        bVar100 = auVar88[9] ^ bVar25;
        bVar26 = (byte)((uint)uVar32 >> 0x10);
        bVar101 = auVar88[10] ^ bVar26;
        bVar27 = (byte)((uint)uVar32 >> 0x18);
        bVar102 = auVar88[0xb] ^ bVar27;
        bVar103 = auVar88[0xc] ^ (byte)uVar34;
        bVar29 = (byte)((uint)uVar34 >> 8);
        bVar104 = auVar88[0xd] ^ bVar29;
        bVar30 = (byte)((uint)uVar34 >> 0x10);
        bVar105 = auVar88[0xe] ^ bVar30;
        bVar31 = (byte)((uint)uVar34 >> 0x18);
        bVar106 = auVar88[0xf] ^ bVar31;
        auVar88 = NEON_ext(ZEXT216(0),auVar70,0xc,1);
        uVar23 = CONCAT13(bVar66 << 1,CONCAT12(bVar64 << 1,CONCAT11(bVar62 << 1,(byte)uVar23 << 1)))
        ;
        uVar28 = CONCAT13(bVar24 << 1,CONCAT12(bVar22 << 1,CONCAT11(bVar68 << 1,(byte)uVar28 << 1)))
        ;
        uVar32 = CONCAT13(bVar27 << 1,CONCAT12(bVar26 << 1,CONCAT11(bVar25 << 1,(byte)uVar32 << 1)))
        ;
        uVar34 = CONCAT13(bVar31 << 1,CONCAT12(bVar30 << 1,CONCAT11(bVar29 << 1,(byte)uVar34 << 1)))
        ;
        bVar50 = bVar50 ^ auVar84[0] ^ auVar89[0] ^ auVar85[0] ^ bVar86;
        bVar51 = bVar51 ^ auVar84[1] ^ auVar89[1] ^ auVar85[1] ^ bVar92;
        bVar52 = bVar52 ^ auVar84[2] ^ auVar89[2] ^ auVar85[2] ^ bVar93;
        bVar53 = bVar53 ^ auVar84[3] ^ auVar89[3] ^ auVar85[3] ^ bVar94;
        bVar54 = bVar54 ^ auVar84[4] ^ auVar89[4] ^ auVar85[4] ^ bVar95;
        bVar55 = bVar55 ^ auVar84[5] ^ auVar89[5] ^ auVar85[5] ^ bVar96;
        bVar56 = bVar56 ^ auVar84[6] ^ auVar89[6] ^ auVar85[6] ^ bVar97;
        bVar57 = bVar57 ^ auVar84[7] ^ auVar89[7] ^ auVar85[7] ^ bVar98;
        bVar58 = bVar58 ^ auVar84[8] ^ auVar89[8] ^ auVar85[8] ^ bVar99;
        bVar59 = bVar59 ^ auVar84[9] ^ auVar89[9] ^ auVar85[9] ^ bVar100;
        bVar60 = bVar60 ^ auVar84[10] ^ auVar89[10] ^ auVar85[10] ^ bVar101;
        bVar61 = bVar61 ^ auVar84[0xb] ^ auVar89[0xb] ^ auVar85[0xb] ^ bVar102;
        bVar62 = bVar63 ^ bVar103;
        bVar64 = bVar65 ^ bVar104;
        bVar66 = bVar67 ^ bVar105;
        bVar68 = bVar69 ^ bVar106;
        auVar70[0] = auVar88[0] ^ bVar63 ^ auVar70[0] ^ bVar86;
        auVar70[1] = auVar88[1] ^ bVar65 ^ bVar33 ^ bVar92;
        auVar70[2] = auVar88[2] ^ bVar67 ^ bVar35 ^ bVar93;
        auVar70[3] = auVar88[3] ^ bVar69 ^ bVar36 ^ bVar94;
        auVar70[4] = auVar88[4] ^ bVar63 ^ bVar37 ^ bVar95;
        auVar70[5] = auVar88[5] ^ bVar65 ^ bVar72 ^ bVar96;
        auVar70[6] = auVar88[6] ^ bVar67 ^ bVar73 ^ bVar97;
        auVar70[7] = auVar88[7] ^ bVar69 ^ bVar74 ^ bVar98;
        auVar70[8] = auVar88[8] ^ bVar63 ^ bVar75 ^ bVar99;
        auVar70[9] = auVar88[9] ^ bVar65 ^ bVar76 ^ bVar100;
        auVar70[10] = auVar88[10] ^ bVar67 ^ bVar77 ^ bVar101;
        auVar70[0xb] = auVar88[0xb] ^ bVar69 ^ bVar78 ^ bVar102;
        auVar70[0xc] = auVar88[0xc] ^ bVar63 ^ bVar79 ^ bVar103;
        auVar70[0xd] = auVar88[0xd] ^ bVar65 ^ bVar80 ^ bVar104;
        auVar70[0xe] = auVar88[0xe] ^ bVar67 ^ bVar81 ^ bVar105;
        auVar70[0xf] = auVar88[0xf] ^ bVar69 ^ bVar82 ^ bVar106;
        *(uint *)(pbVar17 + 8) = CONCAT13(bVar53,CONCAT12(bVar52,CONCAT11(bVar51,bVar50)));
        *(uint *)(pbVar17 + 0xc) = CONCAT13(bVar57,CONCAT12(bVar56,CONCAT11(bVar55,bVar54)));
        *(uint *)(pbVar17 + 0x10) = CONCAT13(bVar61,CONCAT12(bVar60,CONCAT11(bVar59,bVar58)));
        *(uint *)(pbVar17 + 0x14) = CONCAT13(bVar68,CONCAT12(bVar66,CONCAT11(bVar64,bVar62)));
        pbVar16 = pbVar17 + 0x18;
      } while (iVar18 != 0);
      uVar21 = 0xc;
      pbVar17 = pbVar17 + 0x38;
    }
    else {
      auVar71 = *(undefined1 (*) [16])(param_1 + 0x10);
      iVar18 = 7;
      uVar21 = 0xe;
      *param_3 = *(undefined4 *)param_1;
      param_3[1] = uVar9;
      param_3[2] = uVar10;
      param_3[3] = uVar11;
      pbVar17 = (byte *)(param_3 + 4);
      while( true ) {
        auVar88[5] = cVar39;
        auVar88[6] = cVar40;
        auVar88[7] = cVar41;
        auVar88[8] = cVar42;
        auVar88[9] = cVar43;
        auVar88[10] = cVar44;
        auVar88[0xb] = cVar45;
        auVar88[0xc] = cVar46;
        auVar88[0xd] = cVar47;
        auVar88[0xe] = cVar48;
        auVar88[0xf] = cVar49;
        auVar89 = a64_TBL(ZEXT816(0),auVar71,auVar88);
        auVar2[1] = bVar51;
        auVar2[0] = bVar50;
        auVar2[2] = bVar52;
        auVar2[3] = bVar53;
        auVar2[4] = bVar54;
        auVar2[5] = bVar55;
        auVar2[6] = bVar56;
        auVar2[7] = bVar57;
        auVar2[8] = bVar58;
        auVar2[9] = bVar59;
        auVar2[10] = bVar60;
        auVar2[0xb] = bVar61;
        auVar2[0xc] = bVar62;
        auVar2[0xd] = bVar64;
        auVar2[0xe] = bVar66;
        auVar2[0xf] = bVar68;
        auVar84 = NEON_ext(ZEXT216(0),auVar2,0xc,1);
        *(int *)pbVar17 = auVar71._0_4_;
        *(int *)(pbVar17 + 4) = auVar71._4_4_;
        *(int *)(pbVar17 + 8) = auVar71._8_4_;
        *(int *)(pbVar17 + 0xc) = auVar71._12_4_;
        auVar90 = NEON_aese(auVar89,ZEXT216(0));
        iVar18 = iVar18 + -1;
        auVar89 = NEON_ext(ZEXT216(0),auVar84,0xc,1);
        auVar85 = NEON_ext(ZEXT216(0),auVar89,0xc,1);
        bVar22 = (byte)uVar23;
        bVar24 = (byte)((uint)uVar23 >> 8);
        bVar25 = (byte)((uint)uVar23 >> 0x10);
        bVar26 = (byte)((uint)uVar23 >> 0x18);
        bVar27 = (byte)uVar28;
        bVar29 = (byte)((uint)uVar28 >> 8);
        bVar30 = (byte)((uint)uVar28 >> 0x10);
        bVar31 = (byte)((uint)uVar28 >> 0x18);
        bVar63 = (byte)uVar32;
        bVar65 = (byte)((uint)uVar32 >> 8);
        bVar67 = (byte)((uint)uVar32 >> 0x10);
        bVar69 = (byte)((uint)uVar32 >> 0x18);
        bVar33 = (byte)uVar34;
        bVar35 = (byte)((uint)uVar34 >> 8);
        bVar36 = (byte)((uint)uVar34 >> 0x10);
        bVar37 = (byte)((uint)uVar34 >> 0x18);
        uVar23 = CONCAT13(bVar26 << 1,CONCAT12(bVar25 << 1,CONCAT11(bVar24 << 1,bVar22 << 1)));
        uVar28 = CONCAT13(bVar31 << 1,CONCAT12(bVar30 << 1,CONCAT11(bVar29 << 1,bVar27 << 1)));
        uVar32 = CONCAT13(bVar69 << 1,CONCAT12(bVar67 << 1,CONCAT11(bVar65 << 1,bVar63 << 1)));
        uVar34 = CONCAT13(bVar37 << 1,CONCAT12(bVar36 << 1,CONCAT11(bVar35 << 1,bVar33 << 1)));
        bVar50 = bVar50 ^ auVar84[0] ^ auVar89[0] ^ auVar85[0] ^ auVar90[0] ^ bVar22;
        bVar51 = bVar51 ^ auVar84[1] ^ auVar89[1] ^ auVar85[1] ^ auVar90[1] ^ bVar24;
        bVar52 = bVar52 ^ auVar84[2] ^ auVar89[2] ^ auVar85[2] ^ auVar90[2] ^ bVar25;
        bVar53 = bVar53 ^ auVar84[3] ^ auVar89[3] ^ auVar85[3] ^ auVar90[3] ^ bVar26;
        bVar54 = bVar54 ^ auVar84[4] ^ auVar89[4] ^ auVar85[4] ^ auVar90[4] ^ bVar27;
        bVar55 = bVar55 ^ auVar84[5] ^ auVar89[5] ^ auVar85[5] ^ auVar90[5] ^ bVar29;
        bVar56 = bVar56 ^ auVar84[6] ^ auVar89[6] ^ auVar85[6] ^ auVar90[6] ^ bVar30;
        bVar57 = bVar57 ^ auVar84[7] ^ auVar89[7] ^ auVar85[7] ^ auVar90[7] ^ bVar31;
        bVar58 = bVar58 ^ auVar84[8] ^ auVar89[8] ^ auVar85[8] ^ auVar90[8] ^ bVar63;
        bVar59 = bVar59 ^ auVar84[9] ^ auVar89[9] ^ auVar85[9] ^ auVar90[9] ^ bVar65;
        bVar60 = bVar60 ^ auVar84[10] ^ auVar89[10] ^ auVar85[10] ^ auVar90[10] ^ bVar67;
        bVar61 = bVar61 ^ auVar84[0xb] ^ auVar89[0xb] ^ auVar85[0xb] ^ auVar90[0xb] ^ bVar69;
        bVar62 = bVar62 ^ auVar84[0xc] ^ auVar89[0xc] ^ auVar85[0xc] ^ auVar90[0xc] ^ bVar33;
        bVar64 = bVar64 ^ auVar84[0xd] ^ auVar89[0xd] ^ auVar85[0xd] ^ auVar90[0xd] ^ bVar35;
        bVar66 = bVar66 ^ auVar84[0xe] ^ auVar89[0xe] ^ auVar85[0xe] ^ auVar90[0xe] ^ bVar36;
        bVar68 = bVar68 ^ auVar84[0xf] ^ auVar89[0xf] ^ auVar85[0xf] ^ auVar90[0xf] ^ bVar37;
        *(uint *)(pbVar17 + 0x10) = CONCAT13(bVar53,CONCAT12(bVar52,CONCAT11(bVar51,bVar50)));
        *(uint *)(pbVar17 + 0x14) = CONCAT13(bVar57,CONCAT12(bVar56,CONCAT11(bVar55,bVar54)));
        *(uint *)(pbVar17 + 0x18) = CONCAT13(bVar61,CONCAT12(bVar60,CONCAT11(bVar59,bVar58)));
        *(uint *)(pbVar17 + 0x1c) = CONCAT13(bVar68,CONCAT12(bVar66,CONCAT11(bVar64,bVar62)));
        pbVar17 = pbVar17 + 0x20;
        if (iVar18 == 0) break;
        uVar7 = CONCAT13(bVar68,CONCAT12(bVar66,CONCAT11(bVar64,bVar62)));
        auVar91._4_4_ = uVar7;
        auVar91._0_4_ = uVar7;
        auVar91._8_4_ = uVar7;
        auVar91._12_4_ = uVar7;
        auVar84 = NEON_ext(ZEXT216(0),auVar71,0xc,1);
        auVar90 = NEON_aese(auVar91,ZEXT216(0));
        bVar22 = auVar71[1];
        bVar24 = auVar71[2];
        bVar25 = auVar71[3];
        bVar26 = auVar71[4];
        bVar27 = auVar71[5];
        bVar29 = auVar71[6];
        bVar30 = auVar71[7];
        bVar31 = auVar71[8];
        bVar63 = auVar71[9];
        bVar65 = auVar71[10];
        bVar67 = auVar71[0xb];
        bVar69 = auVar71[0xc];
        bVar33 = auVar71[0xd];
        bVar35 = auVar71[0xe];
        bVar36 = auVar71[0xf];
        auVar89 = NEON_ext(ZEXT216(0),auVar84,0xc,1);
        auVar85 = NEON_ext(ZEXT216(0),auVar89,0xc,1);
        auVar71[0] = auVar71[0] ^ auVar84[0] ^ auVar89[0] ^ auVar85[0] ^ auVar90[0];
        auVar71[1] = bVar22 ^ auVar84[1] ^ auVar89[1] ^ auVar85[1] ^ auVar90[1];
        auVar71[2] = bVar24 ^ auVar84[2] ^ auVar89[2] ^ auVar85[2] ^ auVar90[2];
        auVar71[3] = bVar25 ^ auVar84[3] ^ auVar89[3] ^ auVar85[3] ^ auVar90[3];
        auVar71[4] = bVar26 ^ auVar84[4] ^ auVar89[4] ^ auVar85[4] ^ auVar90[4];
        auVar71[5] = bVar27 ^ auVar84[5] ^ auVar89[5] ^ auVar85[5] ^ auVar90[5];
        auVar71[6] = bVar29 ^ auVar84[6] ^ auVar89[6] ^ auVar85[6] ^ auVar90[6];
        auVar71[7] = bVar30 ^ auVar84[7] ^ auVar89[7] ^ auVar85[7] ^ auVar90[7];
        auVar71[8] = bVar31 ^ auVar84[8] ^ auVar89[8] ^ auVar85[8] ^ auVar90[8];
        auVar71[9] = bVar63 ^ auVar84[9] ^ auVar89[9] ^ auVar85[9] ^ auVar90[9];
        auVar71[10] = bVar65 ^ auVar84[10] ^ auVar89[10] ^ auVar85[10] ^ auVar90[10];
        auVar71[0xb] = bVar67 ^ auVar84[0xb] ^ auVar89[0xb] ^ auVar85[0xb] ^ auVar90[0xb];
        auVar71[0xc] = bVar69 ^ auVar84[0xc] ^ auVar89[0xc] ^ auVar85[0xc] ^ auVar90[0xc];
        auVar71[0xd] = bVar33 ^ auVar84[0xd] ^ auVar89[0xd] ^ auVar85[0xd] ^ auVar90[0xd];
        auVar71[0xe] = bVar35 ^ auVar84[0xe] ^ auVar89[0xe] ^ auVar85[0xe] ^ auVar90[0xe];
        auVar71[0xf] = bVar36 ^ auVar84[0xf] ^ auVar89[0xf] ^ auVar85[0xf] ^ auVar90[0xf];
      }
    }
    *(undefined4 *)pbVar17 = uVar21;
    uVar20 = 0;
  }
  return uVar20;
}


// ===== 007a7d40  FUN_007a7d40 =====

long FUN_007a7d40(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 (*pauVar9) [16];
  long lVar10;
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined4 *puVar13;
  long extraout_x12;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  lVar10 = FUN_007a7b40();
  if (lVar10 == 0) {
    puVar13 = (undefined4 *)(param_3 + -0xf0);
    puVar1 = puVar13 + extraout_x12 * 4;
    uVar2 = *(undefined4 *)(param_3 + -0xec);
    uVar3 = *(undefined4 *)(param_3 + -0xe8);
    uVar4 = *(undefined4 *)(param_3 + -0xe4);
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    *puVar1 = *puVar13;
    puVar1[1] = uVar2;
    puVar1[2] = uVar3;
    puVar1[3] = uVar4;
    *puVar13 = uVar5;
    *(undefined4 *)(param_3 + -0xec) = uVar6;
    *(undefined4 *)(param_3 + -0xe8) = uVar7;
    *(undefined4 *)(param_3 + -0xe4) = uVar8;
    pauVar9 = (undefined1 (*) [16])(param_3 + -0xe0);
    pauVar12 = (undefined1 (*) [16])(puVar1 + -4);
    do {
      pauVar11 = pauVar12;
      auVar14 = NEON_aesimc(*pauVar9,*pauVar9);
      auVar15 = NEON_aesimc(*pauVar11,*pauVar11);
      *(int *)*pauVar11 = auVar14._0_4_;
      *(int *)(*pauVar11 + 4) = auVar14._4_4_;
      *(int *)(*pauVar11 + 8) = auVar14._8_4_;
      *(int *)(*pauVar11 + 0xc) = auVar14._12_4_;
      pauVar12 = pauVar11 + -1;
      *(int *)*pauVar9 = auVar15._0_4_;
      *(int *)(*pauVar9 + 4) = auVar15._4_4_;
      *(int *)(*pauVar9 + 8) = auVar15._8_4_;
      *(int *)(*pauVar9 + 0xc) = auVar15._12_4_;
      pauVar9 = pauVar9 + 1;
    } while (pauVar9 < pauVar12);
    auVar14 = NEON_aesimc(*pauVar9,*pauVar9);
    *(int *)*pauVar12 = auVar14._0_4_;
    *(int *)(pauVar11[-1] + 4) = auVar14._4_4_;
    *(int *)(pauVar11[-1] + 8) = auVar14._8_4_;
    *(int *)(pauVar11[-1] + 0xc) = auVar14._12_4_;
    lVar10 = 0;
  }
  return lVar10;
}


