// ===== 004155ec  FUN_004155ec =====

void FUN_004155ec(void)

{
  FUN_0041531c();
  return;
}


// ===== 004155fc  FUN_004155fc =====

/* WARNING: Removing unreachable block (ram,0x00415630) */

undefined4 FUN_004155fc(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0041531c();
  FUN_0040ca6c(0,PTR_FUN_007a1c58);
  return uVar1;
}


// ===== 00415668  FUN_00415668 =====

undefined8 FUN_00415668(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (((*(long *)(param_1 + 0x30) != 0) && (*(undefined8 **)(param_1 + 0x28) != (undefined8 *)0x0))
     && (UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(param_1 + 0x28),
        UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00415684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/v3_conf.c",0x192,"X509V3_get_string");
  FUN_00379a5c(0x22,0x94,0);
  return 0;
}


// ===== 004156c8  FUN_004156c8 =====

undefined8 FUN_004156c8(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (((*(long *)(param_1 + 0x30) != 0) && (*(long *)(param_1 + 0x28) != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x28) + 8),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x004156e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/v3_conf.c",0x19d,"X509V3_get_section");
  FUN_00379a5c(0x22,0x94,0);
  return 0;
}


// ===== 00415728  FUN_00415728 =====

void FUN_00415728(long param_1,long param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x28) + 0x10);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041573c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_1 + 0x30));
      return;
    }
  }
  return;
}


// ===== 00415744  FUN_00415744 =====

void FUN_00415744(long param_1,long param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x28) + 0x18);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00415758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_1 + 0x30));
      return;
    }
  }
  return;
}


// ===== 00415760  FUN_00415760 =====

void FUN_00415760(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined ***)(param_1 + 0x28) = &PTR_thunk_FUN_003bb970_007a8cc0;
    *(undefined8 *)(param_1 + 0x30) = param_2;
    return;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/v3_conf.c",0x1c9,"X509V3_set_nconf");
  FUN_00379a5c(0x22,0xc0102,0);
  return;
}


// ===== 004157b0  FUN_004157b0 =====

void FUN_004157b0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_6;
    *(undefined8 *)(param_1 + 2) = param_2;
    *(undefined8 *)(param_1 + 4) = param_3;
    *(undefined8 *)(param_1 + 6) = param_4;
    *(undefined8 *)(param_1 + 8) = param_5;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    return;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/v3_conf.c",0x1d4,"X509V3_set_ctx");
  FUN_00379a5c(0x22,0xc0102,0);
  return;
}


// ===== 00415808  FUN_00415808 =====

undefined8 FUN_00415808(long param_1,long param_2)

{
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_conf.c",0x1e5,"X509V3_set_issuer_pkey");
    FUN_00379a5c(0x22,0xc0102,0);
    return 0;
  }
  if ((param_2 != 0) && (*(long *)(param_1 + 0x10) == 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_conf.c",0x1e9,"X509V3_set_issuer_pkey");
    FUN_00379a5c(0x22,0x80106,0);
    return 0;
  }
  *(long *)(param_1 + 0x38) = param_2;
  return 1;
}


// ===== 004158a8  FUN_004158a8 =====

undefined8 FUN_004158a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_003bbedc(0);
  if (lVar1 != 0) {
    FUN_003bb500(lVar1,param_1);
    uVar2 = FUN_00414950(lVar1,param_2,0,param_3,param_4);
    FUN_003bb500(lVar1,0);
    FUN_003bbf5c(lVar1);
    return uVar2;
  }
  return 0;
}


// ===== 00415940  FUN_00415940 =====

undefined8 FUN_00415940(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_003bbedc(0);
  if (lVar1 != 0) {
    FUN_003bb500(lVar1,param_1);
    uVar2 = FUN_00414afc(lVar1,param_2,param_3,param_4);
    FUN_003bb500(lVar1,0);
    FUN_003bbf5c(lVar1);
    return uVar2;
  }
  return 0;
}


// ===== 004159d4  FUN_004159d4 =====

void FUN_004159d4(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined ***)(param_1 + 0x28) = &PTR_thunk_FUN_003bb858_007a8ce0;
    *(undefined8 *)(param_1 + 0x30) = param_2;
    return;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/v3_conf.c",0x224,"X509V3_set_conf_lhash");
  FUN_00379a5c(0x22,0xc0102,0);
  return;
}


// ===== 00415a24  FUN_00415a24 =====

undefined4 FUN_00415a24(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = FUN_003bbedc(0);
  if (lVar3 != 0) {
    FUN_003bb500(lVar3,param_1);
    lVar1 = 0;
    if (param_4 != 0) {
      lVar1 = param_4 + 0x68;
    }
    uVar2 = FUN_0041531c(lVar3,param_2,param_3,lVar1);
    FUN_003bb500(lVar3,0);
    FUN_003bbf5c(lVar3);
    return uVar2;
  }
  return 0;
}


// ===== 00415ac0  FUN_00415ac0 =====

undefined4 FUN_00415ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = FUN_003bbedc(0);
  if (lVar3 != 0) {
    FUN_003bb500(lVar3,param_1);
    lVar1 = 0;
    if (param_4 != 0) {
      lVar1 = param_4 + 0x38;
    }
    uVar2 = FUN_0041531c(lVar3,param_2,param_3,lVar1);
    FUN_003bb500(lVar3,0);
    FUN_003bbf5c(lVar3);
    return uVar2;
  }
  return 0;
}


// ===== 00415b5c  FUN_00415b5c =====

ulong FUN_00415b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long local_28;
  
  uVar2 = FUN_003bbedc(0);
  uVar3 = uVar2;
  if (uVar2 != 0) {
    FUN_003bb500(uVar2,param_1);
    local_28 = 0;
    uVar1 = FUN_0041531c(uVar2,param_2,param_3,&local_28);
    if (((param_4 != 0) && (uVar1 != 0)) && (local_28 != 0)) {
      uVar1 = FUN_00429860(param_4,local_28);
    }
    uVar3 = (ulong)uVar1;
    FUN_0040ca6c(local_28,PTR_FUN_007a1c58);
    FUN_003bb500(uVar2,0);
    FUN_003bbf5c(uVar2);
  }
  return uVar3;
}


// ===== 00415c10  thunk_FUN_003bb970 =====

long thunk_FUN_003bb970(long param_1,undefined8 param_2,undefined8 param_3)

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


// ===== 00415c14  thunk_FUN_003bb7d0 =====

undefined8 thunk_FUN_003bb7d0(long param_1,long param_2)

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


// ===== 00415c18  thunk_FUN_003bb858 =====

long thunk_FUN_003bb858(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_60 [16];
  long lStack_50;
  
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
    lStack_50 = param_1;
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


// ===== 00415c1c  thunk_FUN_003bb720 =====

long thunk_FUN_003bb720(long param_1,long param_2)

{
  undefined1 auStack_60 [16];
  long lStack_50;
  
  if (param_1 != 0) {
    if (DAT_007ab970 == 0) {
      DAT_007ab970 = FUN_003bc108();
      (**(code **)(DAT_007ab970 + 0x10))(auStack_60);
    }
    else {
      (**(code **)(DAT_007ab970 + 0x10))(auStack_60);
    }
    lStack_50 = param_1;
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


// ===== 00415c20  FUN_00415c20 =====

undefined8 FUN_00415c20(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (DAT_007ac840 == 0) {
    DAT_007ac840 = FUN_0040bfd0(FUN_00415cc0);
    if (DAT_007ac840 == 0) {
      uVar2 = 0x1d;
      goto LAB_00415c80;
    }
  }
  iVar1 = FUN_0040c89c(DAT_007ac840,param_1);
  if (iVar1 != 0) {
    return 1;
  }
  uVar2 = 0x21;
LAB_00415c80:
  FUN_00379868();
  FUN_0037995c("crypto/x509/v3_lib.c",uVar2,"X509V3_EXT_add");
  FUN_00379a5c(0x22,0x8000f,0);
  return 0;
}


// ===== 00415cc0  FUN_00415cc0 =====

int FUN_00415cc0(undefined8 *param_1,undefined8 *param_2)

{
  return *(int *)*param_1 - *(int *)*param_2;
}


// ===== 00415cd8  FUN_00415cd8 =====

long FUN_00415cd8(int param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  int local_88 [26];
  int *local_8;
  
  local_8 = local_88;
  if (param_1 < 0) {
    return 0;
  }
  local_88[0] = param_1;
  plVar2 = (long *)FUN_003dd608(&local_8,&PTR_DAT_007a8d00,0x2a,8,FUN_004165b4);
  if (plVar2 == (long *)0x0) {
    lVar3 = DAT_007ac840;
    if (DAT_007ac840 != 0) {
      FUN_0040cc10();
      uVar1 = FUN_0040c48c(DAT_007ac840,local_88);
      lVar3 = FUN_0040cb0c(DAT_007ac840,uVar1);
      return lVar3;
    }
  }
  else {
    lVar3 = *plVar2;
  }
  return lVar3;
}


// ===== 00415d80  FUN_00415d80 =====

long FUN_00415d80(void)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  int local_88 [26];
  int *local_8;
  
  FUN_0042a760();
  local_88[0] = FUN_003dd5b4();
  if (local_88[0] != 0) {
    local_8 = local_88;
    if (-1 < local_88[0]) {
      plVar2 = (long *)FUN_003dd608(&local_8,&PTR_DAT_007a8d00,0x2a,8,FUN_004165b4);
      if (plVar2 == (long *)0x0) {
        lVar3 = DAT_007ac840;
        if (DAT_007ac840 != 0) {
          FUN_0040cc10();
          uVar1 = FUN_0040c48c(DAT_007ac840,local_88);
          lVar3 = FUN_0040cb0c(DAT_007ac840,uVar1);
          return lVar3;
        }
      }
      else {
        lVar3 = *plVar2;
      }
      return lVar3;
    }
  }
  return 0;
}


// ===== 00415e34  FUN_00415e34 =====

undefined8 FUN_00415e34(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*param_1 == -1) {
    return 1;
  }
  while ((DAT_007ac840 != 0 || (DAT_007ac840 = FUN_0040bfd0(FUN_00415cc0), DAT_007ac840 != 0))) {
    iVar1 = FUN_0040c89c(DAT_007ac840,param_1);
    if (iVar1 == 0) {
      uVar2 = 0x21;
      goto LAB_00415eb8;
    }
    param_1 = param_1 + 0x1a;
    if (*param_1 == -1) {
      return 1;
    }
  }
  uVar2 = 0x1d;
LAB_00415eb8:
  FUN_00379868();
  FUN_0037995c("crypto/x509/v3_lib.c",uVar2,"X509V3_EXT_add");
  FUN_00379a5c(0x22,0x8000f,0);
  return 0;
}


// ===== 00415efc  FUN_00415efc =====

undefined8 FUN_00415efc(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int local_98 [26];
  int *local_18;
  
  local_18 = local_98;
  if (-1 < param_2) {
    local_98[0] = param_2;
    plVar3 = (long *)FUN_003dd608(&local_18,&PTR_DAT_007a8d00,0x2a,8,FUN_004165b4);
    if (plVar3 == (long *)0x0) {
      if (DAT_007ac840 == 0) goto LAB_0041601c;
      FUN_0040cc10();
      uVar1 = FUN_0040c48c(DAT_007ac840,local_98);
      puVar7 = (undefined8 *)FUN_0040cb0c(DAT_007ac840,uVar1);
    }
    else {
      puVar7 = (undefined8 *)*plVar3;
    }
    if (puVar7 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_003c83a4(0x68,"crypto/x509/v3_lib.c",0x62);
      if (puVar4 == (undefined8 *)0x0) {
        return 0;
      }
      uVar11 = puVar7[2];
      uVar8 = puVar7[5];
      uVar6 = puVar7[4];
      uVar10 = puVar7[1];
      uVar9 = *puVar7;
      puVar4[3] = puVar7[3];
      puVar4[2] = uVar11;
      puVar4[5] = uVar8;
      puVar4[4] = uVar6;
      puVar4[1] = uVar10;
      *puVar4 = uVar9;
      uVar12 = puVar7[9];
      uVar11 = puVar7[8];
      uVar8 = puVar7[0xb];
      uVar6 = puVar7[10];
      uVar10 = puVar7[7];
      uVar9 = puVar7[6];
      puVar4[0xc] = puVar7[0xc];
      puVar4[0xb] = uVar8;
      puVar4[10] = uVar6;
      *(undefined4 *)puVar4 = param_1;
      *(uint *)((long)puVar4 + 4) = *(uint *)((long)puVar4 + 4) | 1;
      lVar5 = DAT_007ac840;
      puVar4[7] = uVar10;
      puVar4[6] = uVar9;
      puVar4[9] = uVar12;
      puVar4[8] = uVar11;
      if ((lVar5 == 0) && (lVar5 = FUN_0040bfd0(FUN_00415cc0), DAT_007ac840 = lVar5, lVar5 == 0)) {
        uVar6 = 0x1d;
      }
      else {
        iVar2 = FUN_0040c89c(lVar5,puVar4);
        if (iVar2 != 0) {
          return 1;
        }
        uVar6 = 0x21;
      }
      FUN_00379868();
      FUN_0037995c("crypto/x509/v3_lib.c",uVar6,"X509V3_EXT_add");
      uVar6 = 0x8000f;
      goto LAB_0041603c;
    }
  }
LAB_0041601c:
  FUN_00379868();
  FUN_0037995c("crypto/x509/v3_lib.c",0x5f,"X509V3_EXT_add_alias");
  uVar6 = 0x66;
LAB_0041603c:
  FUN_00379a5c(0x22,uVar6,0);
  return 0;
}


// ===== 00416094  FUN_00416094 =====

void FUN_00416094(void)

{
  FUN_0040ca6c(DAT_007ac840,FUN_004160c4);
  DAT_007ac840 = 0;
  return;
}


// ===== 004160c4  FUN_004160c4 =====

void FUN_004160c4(long param_1)

{
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    return;
  }
  FUN_003c86b4(param_1,"crypto/x509/v3_lib.c",0x73);
  return;
}


// ===== 004160e0  FUN_004160e0 =====

undefined8 FUN_004160e0(void)

{
  return 1;
}


// ===== 004160e8  FUN_004160e8 =====

void FUN_004160e8(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_28;
  
  lVar2 = FUN_00415d80();
  if (lVar2 != 0) {
    uVar3 = FUN_0042a76c(param_1);
    local_28 = FUN_0038f014();
    iVar1 = FUN_0038f004(uVar3);
    if (*(code **)(lVar2 + 8) == (code *)0x0) {
      (**(code **)(lVar2 + 0x20))(0,&local_28,(long)iVar1);
      return;
    }
    uVar3 = (**(code **)(lVar2 + 8))();
    FUN_0038a93c(0,&local_28,(long)iVar1,uVar3);
  }
  return;
}


// ===== 0041617c  FUN_0041617c =====

undefined8 FUN_0041617c(long param_1,int param_2,undefined4 *param_3,uint *param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 local_38;
  
  if (param_1 == 0) {
    if (param_4 != (uint *)0x0) {
      *param_4 = 0xffffffff;
    }
    if (param_3 == (undefined4 *)0x0) {
      return 0;
    }
    goto LAB_00416338;
  }
  if (param_4 == (uint *)0x0) {
    uVar7 = 0;
    iVar2 = FUN_0040caf8(param_1);
    if (0 < iVar2) goto LAB_0041620c;
  }
  else {
    uVar7 = *param_4 + 1 & ((int)(*param_4 + 1) >> 0x1f ^ 0xffffffffU);
    iVar2 = FUN_0040caf8(param_1);
    if ((int)uVar7 < iVar2) {
LAB_0041620c:
      if (param_4 == (uint *)0x0) {
        lVar4 = 0;
        do {
          lVar5 = FUN_0040cb0c(param_1,uVar7);
          FUN_0042a760();
          iVar2 = FUN_003dd5b4();
          if ((iVar2 == param_2) && (bVar1 = lVar4 != 0, lVar4 = lVar5, bVar1)) {
            if (param_3 == (undefined4 *)0x0) {
              return 0;
            }
            uVar3 = 0xfffffffe;
            goto LAB_00416340;
          }
          uVar7 = uVar7 + 1;
          iVar2 = FUN_0040caf8(param_1);
        } while ((int)uVar7 < iVar2);
        if (lVar4 != 0) {
LAB_004162b0:
          if (param_3 != (undefined4 *)0x0) {
            uVar3 = FUN_0042a77c(lVar4);
            *param_3 = uVar3;
          }
          lVar5 = FUN_00415d80(lVar4);
          if (lVar5 == 0) {
            return 0;
          }
          uVar6 = FUN_0042a76c(lVar4);
          local_38 = FUN_0038f014();
          iVar2 = FUN_0038f004(uVar6);
          if (*(code **)(lVar5 + 8) != (code *)0x0) {
            uVar6 = (**(code **)(lVar5 + 8))();
            uVar6 = FUN_0038a93c(0,&local_38,(long)iVar2,uVar6);
            return uVar6;
          }
          uVar6 = (**(code **)(lVar5 + 0x20))(0,&local_38,(long)iVar2);
          return uVar6;
        }
      }
      else {
        do {
          lVar4 = FUN_0040cb0c(param_1,uVar7);
          FUN_0042a760();
          iVar2 = FUN_003dd5b4();
          if (iVar2 == param_2) {
            *param_4 = uVar7;
            if (lVar4 != 0) goto LAB_004162b0;
            goto LAB_0041632c;
          }
          uVar7 = uVar7 + 1;
          iVar2 = FUN_0040caf8(param_1);
        } while ((int)uVar7 < iVar2);
      }
    }
  }
  if (param_4 != (uint *)0x0) {
LAB_0041632c:
    *param_4 = 0xffffffff;
  }
  if (param_3 == (undefined4 *)0x0) {
    return 0;
  }
LAB_00416338:
  uVar3 = 0xffffffff;
LAB_00416340:
  *param_3 = uVar3;
  return 0;
}


// ===== 004163a4  FUN_004163a4 =====

undefined4
FUN_004163a4(long *param_1,ulong param_2,undefined8 param_3,undefined4 param_4,uint param_5)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  
  uVar6 = param_5 & 0xf;
  if (uVar6 == 1) {
    lVar3 = FUN_004150ac(param_2 & 0xffffffff,param_4);
joined_r0x004163dc:
    if (lVar3 != 0) {
LAB_004163e0:
      lVar5 = *param_1;
      if (((lVar5 != 0) || (lVar5 = FUN_0040bf0c(), lVar5 != 0)) &&
         (iVar2 = FUN_0040c89c(lVar5,lVar3), iVar2 != 0)) {
        *param_1 = lVar5;
        return 1;
      }
      if (lVar5 != *param_1) {
        FUN_0040bd78(lVar5);
      }
      FUN_0043b4b0(lVar3);
      return 0xffffffff;
    }
LAB_0041656c:
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_lib.c",0x10f,"X509V3_add1_i2d");
    uVar4 = 0x90;
  }
  else {
    iVar2 = FUN_0042a100(*param_1,param_2,0xffffffff);
    if (iVar2 < 0) {
      uVar4 = 0x66;
      if ((uVar6 != 3) && (uVar6 != 5)) {
        lVar3 = FUN_004150ac(param_2 & 0xffffffff,param_4,param_3);
        goto joined_r0x004163dc;
      }
    }
    else {
      if (uVar6 != 0) {
        if (uVar6 == 4) {
          return 1;
        }
        if (uVar6 == 5) {
          lVar3 = FUN_0040c404(*param_1,iVar2);
          if (lVar3 != 0) {
            FUN_0043b4b0();
            return 1;
          }
          return 0xffffffff;
        }
        lVar3 = FUN_004150ac(param_2 & 0xffffffff,param_4,param_3);
        if (lVar3 != 0) {
          if (-1 < iVar2) {
            FUN_0040cb0c(*param_1,iVar2);
            FUN_0043b4b0();
            lVar3 = FUN_0040cb3c(*param_1,iVar2,lVar3);
            uVar1 = 1;
            if (lVar3 == 0) {
              uVar1 = 0xffffffff;
            }
            return uVar1;
          }
          goto LAB_004163e0;
        }
        goto LAB_0041656c;
      }
      uVar4 = 0x91;
    }
    if ((param_5 >> 4 & 1) != 0) {
      return 0;
    }
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_lib.c",0x12f,"X509V3_add1_i2d");
  }
  FUN_00379a5c(0x22,uVar4,0);
  return 0;
}


// ===== 004165b4  FUN_004165b4 =====

int FUN_004165b4(undefined8 *param_1,undefined8 *param_2)

{
  return *(int *)*param_1 - *(int *)*param_2;
}


// ===== 004165cc  FUN_004165cc =====

undefined8 FUN_004165cc(long param_1,undefined8 param_2,undefined8 param_3)

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
    iVar2 = FUN_0039c5ac(param_2,*puVar4);
    if (iVar2 != 0) {
      FUN_00422a24(*(undefined8 *)(puVar4 + 2),0,&local_28);
    }
    plVar1 = (long *)(puVar4 + 8);
    puVar4 = puVar4 + 6;
    lVar3 = *plVar1;
  }
  return local_28;
}


// ===== 0041663c  FUN_0041663c =====

long FUN_0041663c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char *__s2;
  char *__s1;
  undefined8 *puVar5;
  
  lVar3 = FUN_0038a3e8();
  if (lVar3 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_bitst.c",0x43,"v2i_ASN1_BIT_STRING");
    FUN_00379a5c(0x22,0x8000d,0);
  }
  else {
    iVar1 = FUN_0040caf8(param_3);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        lVar4 = FUN_0040cb0c(param_3,iVar1);
        __s1 = *(char **)(*(long *)(param_1 + 0x60) + 8);
        if (__s1 == (char *)0x0) {
LAB_00416738:
          FUN_00379868();
          FUN_0037995c("crypto/x509/v3_bitst.c",0x54,"v2i_ASN1_BIT_STRING");
          FUN_00379a5c(0x22,0x6f,&DAT_001d3a58,*(undefined8 *)(lVar4 + 8));
LAB_0041676c:
          thunk_FUN_0038eddc(lVar3);
          return 0;
        }
        __s2 = *(char **)(lVar4 + 8);
        puVar5 = (undefined8 *)(*(long *)(param_1 + 0x60) + 0x10);
        while ((iVar2 = strcmp((char *)*puVar5,__s2), iVar2 != 0 &&
               (iVar2 = strcmp(__s1,__s2), iVar2 != 0))) {
          __s1 = (char *)puVar5[2];
          puVar5 = puVar5 + 3;
          if (__s1 == (char *)0x0) goto LAB_00416738;
        }
        iVar2 = FUN_0039c49c(lVar3,*(undefined4 *)(puVar5 + -2),1);
        if (iVar2 == 0) {
          FUN_00379868();
          FUN_0037995c("crypto/x509/v3_bitst.c",0x4c,"v2i_ASN1_BIT_STRING");
          FUN_00379a5c(0x22,0x8000d,0);
          goto LAB_0041676c;
        }
        if (puVar5[-1] == 0) goto LAB_00416738;
        iVar1 = iVar1 + 1;
        iVar2 = FUN_0040caf8(param_3);
      } while (iVar1 < iVar2);
    }
  }
  return lVar3;
}


// ===== 004167c8  FUN_004167c8 =====

void * FUN_004167c8(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  void *__dest;
  
  if ((param_2 != (uint *)0x0) && (0 < (int)*param_2)) {
    __dest = (void *)FUN_003c83a4((ulong)*param_2 + 1,"crypto/x509/v3_ia5.c",0x22);
    if (__dest != (void *)0x0) {
      uVar1 = *param_2;
      memcpy(__dest,*(void **)(param_2 + 2),(long)(int)uVar1);
      *(undefined1 *)((long)__dest + (long)(int)uVar1) = 0;
    }
    return __dest;
  }
  return (void *)0x0;
}


// ===== 00416830  FUN_00416830 =====

long FUN_00416830(undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  long lVar2;
  size_t sVar3;
  
  if (param_3 == (char *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_ia5.c",0x2e,"s2i_ASN1_IA5STRING");
    FUN_00379a5c(0x22,0x6b,0);
    return 0;
  }
  lVar2 = FUN_0038a4a8();
  if (lVar2 != 0) {
    sVar3 = strlen(param_3);
    iVar1 = FUN_0038ebe0(lVar2,param_3,sVar3);
    if (iVar1 != 0) {
      return lVar2;
    }
    thunk_FUN_0038eddc(lVar2);
    return 0;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/v3_ia5.c",0x32,"s2i_ASN1_IA5STRING");
  FUN_00379a5c(0x22,0x8000d,0);
  return 0;
}


// ===== 00416918  FUN_00416918 =====

undefined * FUN_00416918(void)

{
  return &DAT_0077c518;
}


// ===== 00416924  FUN_00416924 =====

undefined8 FUN_00416924(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 local_8;
  
  local_8 = param_3;
  FUN_00422ce8(&DAT_001eb581,*param_2,&local_8);
  FUN_0042315c("pathlen",*(undefined8 *)(param_2 + 2),&local_8);
  return local_8;
}


// ===== 00416970  FUN_00416970 =====

long FUN_00416970(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char *__s1;
  
  lVar3 = FUN_0039a5f4(&DAT_0077c518);
  if (lVar3 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_bcons.c",0x40,"v2i_BASIC_CONSTRAINTS");
    FUN_00379a5c(0x22,0x8000d,0);
  }
  else {
    iVar1 = FUN_0040caf8(param_3);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        lVar4 = FUN_0040cb0c(param_3,iVar1);
        __s1 = *(char **)(lVar4 + 8);
        iVar2 = strcmp(__s1,"CA");
        if (iVar2 == 0) {
          iVar2 = FUN_00423270(lVar4,lVar3);
        }
        else {
          iVar2 = strcmp(__s1,"pathlen");
          if (iVar2 != 0) {
            FUN_00379868();
            FUN_0037995c("crypto/x509/v3_bcons.c",0x4c,"v2i_BASIC_CONSTRAINTS");
            FUN_00379a5c(0x22,0x6a,0);
            FUN_0037aeac(4,"name=",*(undefined8 *)(lVar4 + 8),", value=",
                         *(undefined8 *)(lVar4 + 0x10));
            goto LAB_00416ab0;
          }
          iVar2 = FUN_00423410(lVar4,lVar3 + 8);
        }
        if (iVar2 == 0) {
LAB_00416ab0:
          FUN_0038c75c(lVar3,&DAT_0077c518);
          return 0;
        }
        iVar1 = iVar1 + 1;
        iVar2 = FUN_0040caf8(param_3);
      } while (iVar1 < iVar2);
    }
  }
  return lVar3;
}


// ===== 00416ae0  FUN_00416ae0 =====

void FUN_00416ae0(void)

{
  FUN_0038a93c();
  return;
}


// ===== 00416aec  FUN_00416aec =====

void FUN_00416aec(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077c518);
  return;
}


// ===== 00416af8  FUN_00416af8 =====

void FUN_00416af8(void)

{
  FUN_0039a5f4(&DAT_0077c518);
  return;
}


// ===== 00416b04  FUN_00416b04 =====

void FUN_00416b04(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077c518);
  return;
}


// ===== 00416b10  FUN_00416b10 =====

void FUN_00416b10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00422fb4(param_1,param_3);
  return;
}


// ===== 00416b18  FUN_00416b18 =====

undefined * FUN_00416b18(void)

{
  return &DAT_0077c740;
}


// ===== 00416b24  FUN_00416b24 =====

undefined8 FUN_00416b24(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  
  iVar1 = FUN_0040caf8(param_2);
  if (0 < iVar1) {
    puVar3 = (undefined8 *)FUN_0040cb0c(param_2,0);
    FUN_0037b9f8(param_3,"%*sPolicy: ",param_4,&DAT_001c717f);
    FUN_00399b60(param_3,*puVar3);
    if (puVar3[1] != 0) {
      FUN_0037e608(param_3,&DAT_001e2980);
      FUN_00417bb8(param_3,puVar3[1],param_4 + 2);
    }
    iVar1 = FUN_0040caf8(param_2);
    if (1 < iVar1) {
      iVar1 = 1;
      do {
        FUN_0037e608(param_3,&DAT_001e2980);
        puVar3 = (undefined8 *)FUN_0040cb0c(param_2,iVar1);
        FUN_0037b9f8(param_3,"%*sPolicy: ",param_4,&DAT_001c717f);
        FUN_00399b60(param_3,*puVar3);
        if (puVar3[1] != 0) {
          FUN_0037e608(param_3,&DAT_001e2980);
          FUN_00417bb8(param_3,puVar3[1],param_4 + 2);
        }
        iVar1 = iVar1 + 1;
        iVar2 = FUN_0040caf8(param_2);
      } while (iVar1 < iVar2);
    }
  }
  return 1;
}


// ===== 00416c7c  FUN_00416c7c =====

/* WARNING: Type propagation algorithm not settling */

long FUN_00416c7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  size_t sVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  char *pcVar21;
  long lVar22;
  char *__s;
  int iVar23;
  undefined8 uVar24;
  
  lVar7 = FUN_00423474(param_3);
  iVar2 = FUN_0040caf8();
  if (lVar7 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_cpols.c",0x66,"r2i_certpol");
    FUN_00379a5c(0x22,0x80022,0);
  }
  else {
    lVar8 = FUN_0040bf38(0,iVar2);
    if (lVar8 != 0) {
      if (0 < iVar2) {
        bVar1 = false;
        iVar23 = 0;
        do {
          lVar9 = FUN_0040cb0c(lVar7,iVar23);
          if ((*(long *)(lVar9 + 0x10) != 0) ||
             (pcVar21 = *(char **)(lVar9 + 8), pcVar21 == (char *)0x0)) {
            FUN_00379868();
            FUN_0037995c("crypto/x509/v3_cpols.c",0x74,"r2i_certpol");
            FUN_00379a5c(0x22,0x86,0);
            FUN_0037aeac(4,"name=",*(undefined8 *)(lVar9 + 8),", value=",
                         *(undefined8 *)(lVar9 + 0x10));
            goto LAB_00417974;
          }
          iVar3 = strcmp(pcVar21,"ia5org");
          if (iVar3 != 0) {
            if (*pcVar21 == '@') {
              lVar10 = FUN_004156c8(param_2,pcVar21 + 1);
              if (lVar10 != 0) {
                plVar11 = (long *)FUN_0039a5f4(&DAT_0077c7a0);
                if (plVar11 == (long *)0x0) {
                  FUN_00379868();
                  uVar24 = 0xaf;
LAB_00417854:
                  FUN_0037995c("crypto/x509/v3_cpols.c",uVar24,"policy_section");
                  uVar24 = 0x8000d;
                }
                else {
                  iVar3 = FUN_0040caf8(lVar10);
                  if (0 < iVar3) {
                    iVar3 = 0;
                    uVar20 = 0x1a;
                    if (bVar1) {
                      uVar20 = 0x16;
                    }
                    do {
                      puVar12 = (undefined8 *)FUN_0040cb0c(lVar10,iVar3);
                      pcVar21 = (char *)puVar12[1];
                      iVar4 = strcmp(pcVar21,"policyIdentifier");
                      if (iVar4 == 0) {
                        lVar9 = FUN_003dce7c(puVar12[2],0);
                        if (lVar9 == 0) {
                          FUN_00379868();
                          FUN_0037995c("crypto/x509/v3_cpols.c",0xb8,"policy_section");
                          uVar24 = 0x6e;
                          goto LAB_00417614;
                        }
                        *plVar11 = lVar9;
                      }
                      else {
                        iVar4 = FUN_00423878(pcVar21,&DAT_001ded3d);
                        if (iVar4 != 0) {
                          iVar4 = FUN_00423878(puVar12[1],"userNotice");
                          if (iVar4 == 0) {
                            if (*(char *)puVar12[2] == '@') {
                              lVar9 = FUN_004156c8(param_2,(char *)puVar12[2] + 1);
                              if (lVar9 != 0) {
                                plVar13 = (long *)FUN_0039a5f4(&DAT_0077c828);
                                if (plVar13 == (long *)0x0) {
                                  FUN_00379868();
                                  FUN_0037995c("crypto/x509/v3_cpols.c",300,"notice_section");
                                  uVar20 = 0x8000d;
LAB_0041769c:
                                  FUN_00379a5c(0x22,uVar20,0);
                                }
                                else {
                                  lVar14 = FUN_003dcce8(0xa5);
                                  *plVar13 = lVar14;
                                  if (lVar14 == 0) {
                                    FUN_00379868();
                                    FUN_0037995c("crypto/x509/v3_cpols.c",0x130,"notice_section");
                                    uVar20 = 0xc0103;
                                    goto LAB_0041769c;
                                  }
                                  plVar15 = (long *)FUN_0039a5f4(&DAT_0077c8b0);
                                  if (plVar15 == (long *)0x0) {
                                    FUN_00379868();
                                    FUN_0037995c("crypto/x509/v3_cpols.c",0x134,"notice_section");
                                    FUN_00379a5c(0x22,0x8000d,0);
                                  }
                                  else {
                                    plVar13[1] = (long)plVar15;
                                    iVar4 = FUN_0040caf8(lVar9);
                                    if (0 < iVar4) {
                                      iVar4 = 0;
                                      do {
                                        lVar14 = FUN_0040cb0c(lVar9,iVar4);
                                        pcVar21 = *(char **)(lVar14 + 8);
                                        __s = *(char **)(lVar14 + 0x10);
                                        iVar5 = strcmp(pcVar21,"explicitText");
                                        if (iVar5 == 0) {
                                          pcVar21 = strchr(__s,0x3a);
                                          if ((pcVar21 == (char *)0x0) ||
                                             (iVar5 = (int)pcVar21 - (int)__s, iVar5 == -1))
                                          goto LAB_00417210;
                                          if (iVar5 < 9) {
                                            if (iVar5 == 3) {
                                              iVar5 = strncmp(__s,"BMP",3);
                                              if (iVar5 != 0) goto LAB_00417210;
                                              lVar14 = 4;
                                              lVar22 = FUN_0038ee84(0x1e);
                                              plVar15[1] = lVar22;
                                            }
                                            else if (iVar5 == 4) {
                                              iVar5 = strncmp(__s,"UTF8",4);
                                              if (iVar5 != 0) goto LAB_00417210;
                                              lVar14 = 5;
                                              lVar22 = FUN_0038ee84(0xc);
                                              plVar15[1] = lVar22;
                                            }
                                            else {
                                              if ((iVar5 != 7) ||
                                                 (iVar5 = strncmp(__s,"VISIBLE",7), iVar5 != 0))
                                              goto LAB_00417210;
                                              lVar14 = 8;
                                              lVar22 = FUN_0038ee84(0x1a);
                                              plVar15[1] = lVar22;
                                            }
                                          }
                                          else if (iVar5 == 9) {
                                            iVar5 = strncmp(__s,"BMPSTRING",9);
                                            if (iVar5 != 0) goto LAB_00417210;
                                            lVar14 = 10;
                                            lVar22 = FUN_0038ee84(0x1e);
                                            plVar15[1] = lVar22;
                                          }
                                          else if (iVar5 == 10) {
                                            iVar5 = strncmp(__s,"UTF8String",10);
                                            if (iVar5 != 0) goto LAB_00417210;
                                            lVar14 = 0xb;
                                            lVar22 = FUN_0038ee84(0xc);
                                            plVar15[1] = lVar22;
                                          }
                                          else if ((iVar5 == 0xd) &&
                                                  (iVar5 = strncmp(__s,"VISIBLESTRING",0xd),
                                                  iVar5 == 0)) {
                                            lVar14 = 0xe;
                                            lVar22 = FUN_0038ee84(0x1a);
                                            plVar15[1] = lVar22;
                                          }
                                          else {
LAB_00417210:
                                            lVar14 = 0;
                                            lVar22 = FUN_0038ee84(0x1a);
                                            plVar15[1] = lVar22;
                                          }
                                          if (lVar22 == 0) {
                                            FUN_00379868();
                                            FUN_0037995c("crypto/x509/v3_cpols.c",0x13f,
                                                         "notice_section");
                                            FUN_00379a5c(0x22,0x8000d,0);
                                            goto LAB_0041793c;
                                          }
                                          sVar18 = strlen(__s + lVar14);
                                          iVar5 = FUN_0038ebe0(lVar22,__s + lVar14,sVar18);
                                          if (iVar5 == 0) {
                                            FUN_00379868();
                                            uVar24 = 0x146;
                                            goto LAB_00417918;
                                          }
                                        }
                                        else {
                                          iVar5 = strcmp(pcVar21,"organization");
                                          if (iVar5 == 0) {
                                            plVar17 = (long *)*plVar15;
                                            if (plVar17 == (long *)0x0) {
                                              plVar17 = (long *)FUN_0039a5f4(&DAT_0077c938);
                                              if (plVar17 == (long *)0x0) {
                                                FUN_00379868();
                                                uVar24 = 0x14e;
                                                goto LAB_00417918;
                                              }
                                              __s = *(char **)(lVar14 + 0x10);
                                              *plVar15 = (long)plVar17;
                                            }
                                            lVar14 = *plVar17;
                                            *(undefined4 *)(lVar14 + 4) = uVar20;
                                            sVar18 = strlen(__s);
                                            iVar5 = FUN_0038ebe0(lVar14,__s,sVar18);
                                            if (iVar5 == 0) {
                                              FUN_00379868();
                                              uVar24 = 0x15a;
LAB_00417918:
                                              FUN_0037995c("crypto/x509/v3_cpols.c",uVar24,
                                                           "notice_section");
                                              uVar24 = 0x8000d;
                                              goto LAB_00417928;
                                            }
                                          }
                                          else {
                                            iVar5 = strcmp(pcVar21,"noticeNumbers");
                                            if (iVar5 != 0) {
                                              FUN_00379868();
                                              FUN_0037995c("crypto/x509/v3_cpols.c",0x175,
                                                           "notice_section");
                                              FUN_00379a5c(0x22,0x8a,0);
                                              FUN_0037aeac(4,"name=",*(undefined8 *)(lVar14 + 8),
                                                           ", value=",*(undefined8 *)(lVar14 + 0x10)
                                                          );
                                              goto LAB_0041793c;
                                            }
                                            lVar22 = *plVar15;
                                            if (lVar22 == 0) {
                                              lVar22 = FUN_0039a5f4(&DAT_0077c938);
                                              if (lVar22 == 0) {
                                                FUN_00379868();
                                                uVar24 = 0x163;
                                                goto LAB_00417918;
                                              }
                                              __s = *(char **)(lVar14 + 0x10);
                                              *plVar15 = lVar22;
                                            }
                                            lVar16 = FUN_00423474(__s);
                                            if ((lVar16 == 0) ||
                                               (iVar5 = FUN_0040caf8(lVar16), iVar5 == 0)) {
                                              FUN_00379868();
                                              FUN_0037995c("crypto/x509/v3_cpols.c",0x16b,
                                                           "notice_section");
                                              FUN_00379a5c(0x22,0x8d,0);
                                              FUN_0037aeac(4,"name=",*(undefined8 *)(lVar14 + 8),
                                                           ", value=",*(undefined8 *)(lVar14 + 0x10)
                                                          );
                                              FUN_0040ca6c(lVar16,PTR_FUN_007a1b70);
                                              goto LAB_0041793c;
                                            }
                                            uVar24 = *(undefined8 *)(lVar22 + 8);
                                            iVar5 = FUN_0040caf8(lVar16);
                                            if (0 < iVar5) {
                                              iVar5 = 0;
                                              do {
                                                lVar14 = FUN_0040cb0c(lVar16,iVar5);
                                                lVar14 = FUN_00422fb4(0,*(undefined8 *)(lVar14 + 8))
                                                ;
                                                if (lVar14 == 0) {
                                                  uVar20 = 0x8c;
                                                  uVar24 = 0x192;
LAB_00417414:
                                                  FUN_00379868();
                                                  FUN_0037995c("crypto/x509/v3_cpols.c",uVar24,
                                                               "nref_nos");
                                                  FUN_00379a5c(0x22,uVar20,0);
                                                  FUN_0040ca6c(lVar16,PTR_FUN_007a1b70);
                                                  goto LAB_0041793c;
                                                }
                                                iVar6 = FUN_0040c89c(uVar24,lVar14);
                                                if (iVar6 == 0) {
                                                  thunk_FUN_0038eddc(lVar14);
                                                  uVar24 = 0x197;
                                                  uVar20 = 0x8000f;
                                                  goto LAB_00417414;
                                                }
                                                iVar5 = iVar5 + 1;
                                                iVar6 = FUN_0040caf8(lVar16);
                                              } while (iVar5 < iVar6);
                                            }
                                            FUN_0040ca6c(lVar16,PTR_FUN_007a1b70);
                                          }
                                        }
                                        iVar4 = iVar4 + 1;
                                        iVar5 = FUN_0040caf8(lVar9);
                                      } while (iVar4 < iVar5);
                                    }
                                    plVar15 = (long *)*plVar15;
                                    if ((plVar15 == (long *)0x0) ||
                                       ((plVar15[1] != 0 && (*plVar15 != 0)))) {
                                      FUN_00415744(param_2,lVar9);
                                      lVar9 = plVar11[1];
                                      if (lVar9 == 0) {
                                        lVar9 = FUN_0040bf0c();
                                        plVar11[1] = lVar9;
                                      }
                                      iVar4 = FUN_0040c89c(lVar9,plVar13);
                                      if (iVar4 == 0) {
                                        FUN_00379868();
                                        uVar24 = 0xeb;
                                        goto LAB_004178c4;
                                      }
                                      goto LAB_004172a8;
                                    }
                                    FUN_00379868();
                                    FUN_0037995c("crypto/x509/v3_cpols.c",0x17d,"notice_section");
                                    uVar24 = 0x8e;
LAB_00417928:
                                    FUN_00379a5c(0x22,uVar24,0);
                                  }
                                }
LAB_0041793c:
                                FUN_0038c75c(plVar13,&DAT_0077c828);
                                FUN_00415744(param_2,lVar9);
                                goto LAB_00417958;
                              }
                              FUN_00379868();
                              FUN_0037995c("crypto/x509/v3_cpols.c",0xdf,"policy_section");
                              uVar24 = 0x87;
                            }
                            else {
                              FUN_00379868();
                              FUN_0037995c("crypto/x509/v3_cpols.c",0xd9,"policy_section");
                              uVar24 = 0x89;
                            }
                          }
                          else {
                            FUN_00379868();
                            FUN_0037995c("crypto/x509/v3_cpols.c",0xef,"policy_section");
                            uVar24 = 0x8a;
                          }
LAB_00417614:
                          FUN_00379a5c(0x22,uVar24,0);
                          FUN_0037aeac(6,"section:",*puVar12,",name:",puVar12[1],",value:",
                                       puVar12[2]);
                          goto LAB_00417958;
                        }
                        if (plVar11[1] == 0) {
                          lVar9 = FUN_0040bf0c();
                          plVar11[1] = lVar9;
                        }
                        plVar13 = (long *)FUN_0039a5f4(&DAT_0077c828);
                        if (plVar13 == (long *)0x0) {
                          FUN_00379868();
                          uVar24 = 0xc2;
                          goto LAB_00417854;
                        }
                        iVar4 = FUN_0040c89c(plVar11[1],plVar13);
                        if (iVar4 == 0) {
                          FUN_00379868();
                          uVar24 = 0xc6;
LAB_004178c4:
                          FUN_0037995c("crypto/x509/v3_cpols.c",uVar24,"policy_section");
                          uVar24 = 0x8000f;
                          goto LAB_004178d8;
                        }
                        lVar9 = FUN_003dcce8(0xa4);
                        *plVar13 = lVar9;
                        if (lVar9 == 0) {
                          FUN_00379868();
                          FUN_0037995c("crypto/x509/v3_cpols.c",0xca,"policy_section");
                          uVar24 = 0xc0103;
                          goto LAB_004178d8;
                        }
                        lVar9 = FUN_0038a4a8();
                        plVar13[1] = lVar9;
                        if (lVar9 == 0) {
                          FUN_00379868();
                          FUN_0037995c("crypto/x509/v3_cpols.c",0xce,"policy_section");
                          FUN_00379a5c(0x22,0x8000d,0);
                          goto LAB_00417958;
                        }
                        pcVar21 = (char *)puVar12[2];
                        sVar18 = strlen(pcVar21);
                        iVar4 = FUN_0038ebe0(lVar9,pcVar21,sVar18);
                        if (iVar4 == 0) {
                          FUN_00379868();
                          uVar24 = 0xd3;
                          goto LAB_00417854;
                        }
                      }
LAB_004172a8:
                      iVar3 = iVar3 + 1;
                      iVar4 = FUN_0040caf8(lVar10);
                    } while (iVar3 < iVar4);
                  }
                  if (*plVar11 != 0) {
                    FUN_00415744(param_2,lVar10);
                    iVar3 = FUN_0040c89c(lVar8,plVar11);
                    if (iVar3 == 0) goto LAB_0041732c;
                    goto LAB_00416d24;
                  }
                  FUN_00379868();
                  FUN_0037995c("crypto/x509/v3_cpols.c",0xf5,"policy_section");
                  uVar24 = 0x8b;
                }
LAB_004178d8:
                FUN_00379a5c(0x22,uVar24,0);
LAB_00417958:
                FUN_0038c75c(plVar11,&DAT_0077c7a0);
                FUN_00415744(param_2,lVar10);
                goto LAB_00417974;
              }
              FUN_00379868();
              FUN_0037995c("crypto/x509/v3_cpols.c",0x81,"r2i_certpol");
              uVar19 = *(undefined8 *)(lVar9 + 8);
              uVar24 = 0x87;
            }
            else {
              lVar10 = FUN_003dce7c(pcVar21,0);
              if (lVar10 != 0) {
                plVar11 = (long *)FUN_0039a5f4(&DAT_0077c7a0);
                if (plVar11 != (long *)0x0) {
                  *plVar11 = lVar10;
                  iVar3 = FUN_0040c89c(lVar8,plVar11);
                  if (iVar3 != 0) goto LAB_00416d24;
LAB_0041732c:
                  FUN_0038c75c(plVar11,&DAT_0077c7a0);
                  FUN_00379868();
                  uVar24 = 0x9a;
                  goto LAB_00417370;
                }
                FUN_0039a0f4(lVar10);
                FUN_00379868();
                FUN_0037995c("crypto/x509/v3_cpols.c",0x93,"r2i_certpol");
                uVar20 = 0x8000d;
                goto LAB_00417384;
              }
              FUN_00379868();
              FUN_0037995c("crypto/x509/v3_cpols.c",0x8b,"r2i_certpol");
              uVar19 = *(undefined8 *)(lVar9 + 8);
              uVar24 = 0x6e;
            }
            FUN_00379a5c(0x22,uVar24,&DAT_001d3a58,uVar19);
            goto LAB_00417974;
          }
          bVar1 = true;
LAB_00416d24:
          iVar23 = iVar23 + 1;
        } while (iVar23 != iVar2);
      }
      FUN_0040ca6c(lVar7,PTR_FUN_007a1b70);
      return lVar8;
    }
    FUN_00379868();
    uVar24 = 0x6c;
LAB_00417370:
    FUN_0037995c("crypto/x509/v3_cpols.c",uVar24,"r2i_certpol");
    uVar20 = 0x8000f;
LAB_00417384:
    FUN_00379a5c(0x22,uVar20,0);
LAB_00417974:
    FUN_0040ca6c(lVar7,PTR_FUN_007a1b70);
    FUN_0040ca6c(lVar8,PTR_FUN_007a1c60);
  }
  return 0;
}


// ===== 004179bc  FUN_004179bc =====

void FUN_004179bc(void)

{
  FUN_0038a93c();
  return;
}


// ===== 004179c8  FUN_004179c8 =====

void FUN_004179c8(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077c740);
  return;
}


// ===== 004179d4  FUN_004179d4 =====

void FUN_004179d4(void)

{
  FUN_0039a5f4(&DAT_0077c740);
  return;
}


// ===== 004179e0  FUN_004179e0 =====

void FUN_004179e0(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077c740);
  return;
}


// ===== 004179ec  FUN_004179ec =====

undefined * FUN_004179ec(void)

{
  return &DAT_0077c7a0;
}


// ===== 004179f8  FUN_004179f8 =====

void FUN_004179f8(void)

{
  FUN_0038a93c();
  return;
}


// ===== 00417a04  FUN_00417a04 =====

void FUN_00417a04(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077c7a0);
  return;
}


// ===== 00417a10  FUN_00417a10 =====

void FUN_00417a10(void)

{
  FUN_0039a5f4(&DAT_0077c7a0);
  return;
}


// ===== 00417a1c  FUN_00417a1c =====

void FUN_00417a1c(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077c7a0);
  return;
}


// ===== 00417a28  FUN_00417a28 =====

undefined * FUN_00417a28(void)

{
  return &DAT_0077c828;
}


// ===== 00417a34  FUN_00417a34 =====

void FUN_00417a34(void)

{
  FUN_0038a93c();
  return;
}


// ===== 00417a40  FUN_00417a40 =====

void FUN_00417a40(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077c828);
  return;
}


// ===== 00417a4c  FUN_00417a4c =====

void FUN_00417a4c(void)

{
  FUN_0039a5f4(&DAT_0077c828);
  return;
}


// ===== 00417a58  FUN_00417a58 =====

void FUN_00417a58(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077c828);
  return;
}


// ===== 00417a64  FUN_00417a64 =====

undefined * FUN_00417a64(void)

{
  return &DAT_0077c8b0;
}


// ===== 00417a70  FUN_00417a70 =====

void FUN_00417a70(void)

{
  FUN_0038a93c();
  return;
}


// ===== 00417a7c  FUN_00417a7c =====

void FUN_00417a7c(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077c8b0);
  return;
}


// ===== 00417a88  FUN_00417a88 =====

void FUN_00417a88(void)

{
  FUN_0039a5f4(&DAT_0077c8b0);
  return;
}


// ===== 00417a94  FUN_00417a94 =====

void FUN_00417a94(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077c8b0);
  return;
}


// ===== 00417aa0  FUN_00417aa0 =====

undefined * FUN_00417aa0(void)

{
  return &DAT_0077c938;
}


// ===== 00417aac  FUN_00417aac =====

void FUN_00417aac(void)

{
  FUN_0038a93c();
  return;
}


// ===== 00417ab8  FUN_00417ab8 =====

void FUN_00417ab8(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077c938);
  return;
}


// ===== 00417ac4  FUN_00417ac4 =====

void FUN_00417ac4(void)

{
  FUN_0039a5f4(&DAT_0077c938);
  return;
}


// ===== 00417ad0  FUN_00417ad0 =====

void FUN_00417ad0(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077c938);
  return;
}


// ===== 00417adc  FUN_00417adc =====

void FUN_00417adc(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = (uint *)*param_2;
  iVar2 = (int)param_3;
  FUN_0037b9f8(param_1,"%*sPolicy: ",param_3,&DAT_001c717f);
  FUN_00399b60(param_1,*(undefined8 *)(puVar3 + 2));
  FUN_0037e608(param_1,&DAT_001e2980);
  pcVar1 = "Non Critical";
  if ((*puVar3 & 0x10) != 0) {
    pcVar1 = "Critical";
  }
  FUN_0037b9f8(param_1,"%*s%s\n",iVar2 + 2,&DAT_001c717f,pcVar1);
  if (*(long *)(puVar3 + 4) != 0) {
    FUN_00417bb8(param_1,*(long *)(puVar3 + 4),iVar2 + 2);
    FUN_0037e608(param_1,&DAT_001e2980);
    return;
  }
  FUN_0037b9f8(param_1,"%*sNo Qualifiers\n",iVar2 + 2,&DAT_001c717f);
  return;
}


// ===== 00417bb8  FUN_00417bb8 =====

void FUN_00417bb8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  
  iVar3 = FUN_0040caf8(param_2);
  if (0 < iVar3) {
    iVar3 = 0;
    do {
      if (iVar3 != 0) {
        FUN_0037e608(param_1,&DAT_001e2980);
      }
      puVar6 = (undefined8 *)FUN_0040cb0c(param_2,iVar3);
      iVar4 = FUN_003dd5b4(*puVar6);
      if (iVar4 == 0xa5) {
        FUN_0037b9f8(param_1,"%*sUser Notice:\n",param_3,&DAT_001c717f);
        puVar6 = (undefined8 *)puVar6[1];
        puVar11 = (undefined8 *)*puVar6;
        if (puVar11 != (undefined8 *)0x0) {
          FUN_0037b9f8(param_1,"%*sOrganization: %.*s\n",param_3 + 2,&DAT_001c717f,
                       *(undefined4 *)*puVar11,*(undefined8 *)((undefined4 *)*puVar11 + 2));
          iVar4 = FUN_0040caf8(puVar11[1]);
          puVar1 = &DAT_001cc673;
          if (iVar4 < 2) {
            puVar1 = &DAT_001c717f;
          }
          FUN_0037b9f8(param_1,"%*sNumber%s: ",param_3 + 2,&DAT_001c717f,puVar1);
          iVar4 = FUN_0040caf8(puVar11[1]);
          if (0 < iVar4) {
            lVar7 = FUN_0040cb0c(puVar11[1],0);
            if (lVar7 == 0) {
              FUN_0037e608(param_1,"(null)");
              iVar4 = FUN_0040caf8(puVar11[1]);
            }
            else {
              lVar7 = FUN_00422f00(0,lVar7);
              if (lVar7 == 0) goto LAB_00417c2c;
              FUN_0037e608(param_1,lVar7);
              FUN_003c86b4(lVar7,"crypto/x509/v3_cpols.c",0x1e8);
              iVar4 = FUN_0040caf8(puVar11[1]);
            }
            if (1 < iVar4) {
              iVar4 = 1;
              do {
                while( true ) {
                  lVar7 = FUN_0040cb0c(puVar11[1],iVar4);
                  FUN_0037e608(param_1,&DAT_001c2f11);
                  if (lVar7 == 0) break;
                  lVar7 = FUN_00422f00(0,lVar7);
                  if (lVar7 == 0) goto LAB_00417c2c;
                  FUN_0037e608(param_1,lVar7);
                  FUN_003c86b4(lVar7,"crypto/x509/v3_cpols.c",0x1e8);
                  iVar4 = iVar4 + 1;
                  iVar5 = FUN_0040caf8(puVar11[1]);
                  if (iVar5 <= iVar4) goto LAB_00417e30;
                }
                FUN_0037e608(param_1,"(null)");
                iVar4 = iVar4 + 1;
                iVar5 = FUN_0040caf8(puVar11[1]);
              } while (iVar4 < iVar5);
            }
          }
LAB_00417e30:
          if (puVar6[1] != 0) {
            FUN_0037e608(param_1,&DAT_001e2980);
          }
        }
        puVar10 = (undefined4 *)puVar6[1];
        if (puVar10 != (undefined4 *)0x0) {
          uVar2 = *puVar10;
          uVar9 = *(undefined8 *)(puVar10 + 2);
          iVar4 = param_3 + 2;
          pcVar8 = "%*sExplicit Text: %.*s";
          goto LAB_00417e68;
        }
      }
      else if (iVar4 == 0xa4) {
        pcVar8 = "%*sCPS: %.*s";
        uVar2 = *(undefined4 *)puVar6[1];
        uVar9 = *(undefined8 *)((undefined4 *)puVar6[1] + 2);
        iVar4 = param_3;
LAB_00417e68:
        FUN_0037b9f8(param_1,pcVar8,iVar4,&DAT_001c717f,uVar2,uVar9);
      }
      else {
        FUN_0037b9f8(param_1,"%*sUnknown Qualifier: ",param_3 + 2,&DAT_001c717f);
        FUN_00399b60(param_1,*puVar6);
      }
LAB_00417c2c:
      iVar3 = iVar3 + 1;
      iVar4 = FUN_0040caf8(param_2);
    } while (iVar3 < iVar4);
  }
  return;
}


// ===== 00417e90  FUN_00417e90 =====

undefined * FUN_00417e90(void)

{
  return &DAT_0077c9c0;
}


// ===== 00417e9c  FUN_00417e9c =====

long FUN_00417e9c(undefined8 param_1,long *param_2,long param_3)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long local_18;
  
  local_18 = param_3;
  if (*param_2 == 0) {
LAB_00417f04:
    lVar3 = local_18;
    if ((param_2[1] == 0) || (lVar3 = FUN_004203b4(0,param_2[1],local_18), lVar3 != 0)) {
      local_18 = lVar3;
      if (param_2[2] == 0) {
        return local_18;
      }
      lVar3 = FUN_00421874(0);
      if (lVar3 == 0) {
        FUN_00379868();
        FUN_0037995c("crypto/x509/v3_akid.c",0x47,"i2v_AUTHORITY_KEYID");
        FUN_00379a5c(0x22,0x8000d,0);
      }
      else {
        iVar2 = FUN_00422a24("serial",lVar3,&local_18);
        if (iVar2 != 0) {
          FUN_003c86b4(lVar3,"crypto/x509/v3_akid.c",0x4e);
          return local_18;
        }
        FUN_003c86b4(lVar3,"crypto/x509/v3_akid.c",0x4b);
      }
      goto joined_r0x00418078;
    }
    FUN_00379868();
    uVar4 = 0x3f;
  }
  else {
    lVar3 = FUN_00421874(0);
    if (lVar3 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/x509/v3_akid.c",0x31,"i2v_AUTHORITY_KEYID");
      FUN_00379a5c(0x22,0x8000d,0);
      return 0;
    }
    if (param_2[1] == 0) {
      pcVar1 = (char *)0x0;
      if (param_2[2] != 0) {
        pcVar1 = "keyid";
      }
      iVar2 = FUN_00422a24(pcVar1,lVar3,&local_18);
    }
    else {
      iVar2 = FUN_00422a24("keyid",lVar3,&local_18);
    }
    if (iVar2 != 0) {
      FUN_003c86b4(lVar3,"crypto/x509/v3_akid.c",0x3a);
      goto LAB_00417f04;
    }
    FUN_003c86b4(lVar3,"crypto/x509/v3_akid.c",0x36);
    FUN_00379868();
    uVar4 = 0x37;
  }
  FUN_0037995c("crypto/x509/v3_akid.c",uVar4,"i2v_AUTHORITY_KEYID");
  FUN_00379a5c(0x22,0x8000b,0);
joined_r0x00418078:
  if (param_3 == 0) {
    FUN_0040ca6c(local_18,PTR_FUN_007a1b70);
    return 0;
  }
  return 0;
}


// ===== 004180c4  FUN_004180c4 =====

long * FUN_004180c4(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  int iVar11;
  char *__s1;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  char *__s1_00;
  undefined8 local_68;
  
  iVar3 = FUN_0040caf8(param_3);
  plVar7 = (long *)FUN_0041868c();
  if (plVar7 == (long *)0x0) {
    lVar8 = 0;
LAB_00418138:
    lVar15 = 0;
    lVar12 = 0;
    puVar9 = (undefined4 *)0x0;
    param_2 = (byte *)0x0;
  }
  else {
    if (iVar3 == 1) {
      lVar8 = FUN_0040cb0c(param_3,0);
      iVar4 = strcmp(*(char **)(lVar8 + 8),"none");
      if (iVar4 == 0) {
        return plVar7;
      }
LAB_0041814c:
      iVar11 = 0;
      iVar4 = 0;
      iVar14 = 0;
      do {
        while( true ) {
          lVar8 = FUN_0040cb0c(param_3,iVar14);
          __s1_00 = *(char **)(lVar8 + 0x10);
          if ((__s1_00 != (char *)0x0) && (iVar5 = strcmp(__s1_00,"always"), iVar5 != 0)) {
            FUN_00379868();
            FUN_0037995c("crypto/x509/v3_akid.c",0x7b,"v2i_AUTHORITY_KEYID");
            FUN_00379a5c(0x22,0x78,"name=%s option=%s",*(undefined8 *)(lVar8 + 8),
                         *(undefined8 *)(lVar8 + 0x10));
            goto LAB_00418440;
          }
          __s1 = *(char **)(lVar8 + 8);
          iVar5 = strcmp(__s1,"keyid");
          if (iVar5 != 0 || iVar11 != 0) break;
          iVar11 = 1;
          if (__s1_00 != (char *)0x0) {
            iVar11 = 2;
          }
          iVar14 = iVar14 + 1;
          if (iVar3 == iVar14) goto LAB_00418224;
        }
        iVar6 = strcmp(__s1,"issuer");
        if ((iVar6 != 0) || (iVar4 != 0)) {
          iVar3 = strcmp(__s1,"none");
          FUN_00379868();
          if ((iVar6 == 0) || ((iVar5 == 0 || (iVar3 == 0)))) {
            FUN_0037995c("crypto/x509/v3_akid.c",0x8a,"v2i_AUTHORITY_KEYID");
            uVar10 = 0xab;
          }
          else {
            FUN_0037995c("crypto/x509/v3_akid.c",0x8e,"v2i_AUTHORITY_KEYID");
            uVar10 = 0xac;
          }
          FUN_00379a5c(0x22,uVar10,"name=%s",*(undefined8 *)(lVar8 + 8));
          goto LAB_00418440;
        }
        iVar4 = 1;
        if (__s1_00 != (char *)0x0) {
          iVar4 = 2;
        }
        iVar14 = iVar14 + 1;
      } while (iVar3 != iVar14);
LAB_00418224:
      if (param_2 != (byte *)0x0) goto LAB_0041822c;
LAB_0041835c:
      FUN_00379868();
      FUN_0037995c("crypto/x509/v3_akid.c",0x98,"v2i_AUTHORITY_KEYID");
      FUN_00379a5c(0x22,0xc0102,0);
    }
    else {
      if (0 < iVar3) goto LAB_0041814c;
      iVar4 = 0;
      iVar11 = 0;
      if (param_2 == (byte *)0x0) goto LAB_0041835c;
LAB_0041822c:
      if ((*param_2 & 1) != 0) {
        return plVar7;
      }
      lVar13 = *(long *)(param_2 + 8);
      if (lVar13 != 0) {
        lVar12 = *(long *)(param_2 + 0x10);
        bVar2 = lVar12 == lVar13;
        FUN_0037f6d4();
        if (*(long *)(param_2 + 0x38) != 0) {
          iVar3 = FUN_00427370(*(undefined8 *)(param_2 + 0x10));
          bVar2 = iVar3 != 0;
        }
        FUN_0037f71c();
        bVar1 = bVar2;
        if (iVar11 != 1) {
          bVar1 = true;
        }
        if ((iVar11 == 2) || (!bVar1)) {
          iVar3 = FUN_00427660(lVar13,0x52,0xffffffff);
          if (iVar3 < 0) {
LAB_00418524:
            lVar8 = 0;
          }
          else {
            lVar15 = FUN_00427678(lVar13,iVar3);
            lVar8 = 0;
            bVar1 = bVar2;
            if (lVar12 != lVar13) {
              bVar1 = true;
            }
            if ((lVar15 != 0) && (bVar1)) {
              lVar8 = FUN_004160e8();
              iVar3 = FUN_0038f004();
              if (iVar3 == 0) {
                thunk_FUN_0038eddc(lVar8);
                goto LAB_00418524;
              }
            }
          }
          if ((lVar8 == 0) && (lVar12 == lVar13)) {
            if (*(long *)(param_2 + 0x38) == 0) {
              lVar8 = 0;
            }
            else {
              local_68 = 0;
              iVar3 = FUN_0043c740(&local_68);
              if (iVar3 == 0) {
                lVar8 = 0;
              }
              else {
                lVar8 = FUN_00421a98(local_68);
              }
              FUN_0043c2c8(local_68);
            }
          }
          if ((iVar11 == 2) && (lVar8 == 0)) {
            FUN_00379868();
            FUN_0037995c("crypto/x509/v3_akid.c",0xbf,"v2i_AUTHORITY_KEYID");
            FUN_00379a5c(0x22,0x7b,0);
            goto LAB_00418138;
          }
        }
        else {
          lVar8 = 0;
        }
        if (iVar4 != 2) {
          param_2 = (byte *)0x0;
          lVar15 = 0;
          if (iVar4 != 1) {
            bVar2 = true;
          }
          if ((bVar2) || (lVar8 != 0)) goto LAB_00418304;
        }
        FUN_00426a88(lVar13);
        lVar12 = FUN_0043b56c();
        FUN_00426cb0(lVar13);
        param_2 = (byte *)thunk_FUN_0038ed00();
        if ((lVar12 == 0) || (param_2 == (byte *)0x0)) {
          FUN_00379868();
          FUN_0037995c("crypto/x509/v3_akid.c",200,"v2i_AUTHORITY_KEYID");
          FUN_00379a5c(0x22,0x7a,0);
          lVar15 = 0;
          puVar9 = (undefined4 *)0x0;
        }
        else {
          lVar15 = FUN_0040bf0c();
          if ((lVar15 == 0) || (puVar9 = (undefined4 *)FUN_00418740(), puVar9 == (undefined4 *)0x0))
          {
            FUN_00379868();
            FUN_0037995c("crypto/x509/v3_akid.c",0xd0,"v2i_AUTHORITY_KEYID");
            FUN_00379a5c(0x22,0x8000d,0);
            puVar9 = (undefined4 *)0x0;
          }
          else {
            iVar3 = FUN_0040c89c(lVar15,puVar9);
            if (iVar3 != 0) {
              *(long *)(puVar9 + 2) = lVar12;
              *puVar9 = 4;
LAB_00418304:
              plVar7[1] = lVar15;
              plVar7[2] = (long)param_2;
              *plVar7 = lVar8;
              return plVar7;
            }
            FUN_00379868();
            FUN_0037995c("crypto/x509/v3_akid.c",0xd4,"v2i_AUTHORITY_KEYID");
            FUN_00379a5c(0x22,0x8000f,0);
          }
        }
        goto LAB_00418448;
      }
      FUN_00379868();
      FUN_0037995c("crypto/x509/v3_akid.c",0x9c,"v2i_AUTHORITY_KEYID");
      FUN_00379a5c(0x22,0x79,0);
LAB_00418440:
      param_2 = (byte *)0x0;
    }
    puVar9 = (undefined4 *)0x0;
    lVar12 = 0;
    lVar8 = 0;
    lVar15 = 0;
  }
LAB_00418448:
  FUN_0040bd78(lVar15);
  FUN_0041874c(puVar9);
  FUN_0043b560(lVar12);
  thunk_FUN_0038eddc(param_2);
  thunk_FUN_0038eddc(lVar8);
  FUN_00418698(plVar7);
  return (long *)0x0;
}


// ===== 00418668  FUN_00418668 =====

undefined * FUN_00418668(void)

{
  return &DAT_0077cae8;
}


// ===== 00418674  FUN_00418674 =====

void FUN_00418674(void)

{
  FUN_0038a93c();
  return;
}


// ===== 00418680  FUN_00418680 =====

void FUN_00418680(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077cae8);
  return;
}


// ===== 0041868c  FUN_0041868c =====

void FUN_0041868c(void)

{
  FUN_0039a5f4(&DAT_0077cae8);
  return;
}


// ===== 00418698  FUN_00418698 =====

void FUN_00418698(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077cae8);
  return;
}


// ===== 004186a4  FUN_004186a4 =====

undefined * FUN_004186a4(void)

{
  return &DAT_0077cb98;
}


// ===== 004186b0  FUN_004186b0 =====

void FUN_004186b0(void)

{
  FUN_0038a93c();
  return;
}


// ===== 004186bc  FUN_004186bc =====

void FUN_004186bc(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077cb98);
  return;
}


// ===== 004186c8  FUN_004186c8 =====

void FUN_004186c8(void)

{
  FUN_0039a5f4(&DAT_0077cb98);
  return;
}


// ===== 004186d4  FUN_004186d4 =====

void FUN_004186d4(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077cb98);
  return;
}


// ===== 004186e0  FUN_004186e0 =====

undefined * FUN_004186e0(void)

{
  return &DAT_0077cc20;
}


// ===== 004186ec  FUN_004186ec =====

void FUN_004186ec(void)

{
  FUN_0038a93c();
  return;
}


// ===== 004186f8  FUN_004186f8 =====

void FUN_004186f8(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077cc20);
  return;
}


// ===== 00418704  FUN_00418704 =====

void FUN_00418704(void)

{
  FUN_0039a5f4(&DAT_0077cc20);
  return;
}


// ===== 00418710  FUN_00418710 =====

void FUN_00418710(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077cc20);
  return;
}


// ===== 0041871c  FUN_0041871c =====

undefined * FUN_0041871c(void)

{
  return &DAT_0077cca8;
}


// ===== 00418728  FUN_00418728 =====

void FUN_00418728(void)

{
  FUN_0038a93c();
  return;
}


// ===== 00418734  FUN_00418734 =====

void FUN_00418734(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077cca8);
  return;
}


// ===== 00418740  FUN_00418740 =====

void FUN_00418740(void)

{
  FUN_0039a5f4(&DAT_0077cca8);
  return;
}


// ===== 0041874c  FUN_0041874c =====

void FUN_0041874c(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077cca8);
  return;
}


// ===== 00418758  FUN_00418758 =====

undefined * FUN_00418758(void)

{
  return &DAT_0077ce48;
}


// ===== 00418764  FUN_00418764 =====

void FUN_00418764(void)

{
  FUN_0038a93c();
  return;
}


// ===== 00418770  FUN_00418770 =====

void FUN_00418770(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077ce48);
  return;
}


// ===== 0041877c  FUN_0041877c =====

void FUN_0041877c(void)

{
  FUN_0039a5f4(&DAT_0077ce48);
  return;
}


// ===== 00418788  FUN_00418788 =====

void FUN_00418788(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077ce48);
  return;
}


// ===== 00418794  FUN_00418794 =====

void FUN_00418794(undefined8 param_1)

{
  FUN_003a3fd0(PTR_FUN_007a1c80,PTR_FUN_007a1c78,param_1);
  return;
}


// ===== 004187b0  FUN_004187b0 =====

undefined8 FUN_004187b0(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  if (((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) || (iVar1 = *param_1, iVar1 != *param_2))
  {
    return 0xffffffff;
  }
  if (iVar1 < 5) {
    if (iVar1 < 3) {
      if (1 < iVar1 - 1U) {
        if (iVar1 != 0) {
          return 0xffffffff;
        }
        puVar3 = *(undefined8 **)(param_1 + 2);
        if (puVar3 == (undefined8 *)0x0) {
          return 0xffffffff;
        }
        puVar5 = *(undefined8 **)(param_2 + 2);
        if (puVar5 == (undefined8 *)0x0) {
          return 0xffffffff;
        }
        uVar2 = FUN_003de61c(*puVar3,*puVar5);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = FUN_0039afb8(puVar3[1],puVar5[1]);
        return uVar2;
      }
    }
    else if (iVar1 != 3) {
      if (iVar1 != 4) {
        return 0xffffffff;
      }
      uVar2 = FUN_004267c8(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      return uVar2;
    }
  }
  else {
    if (6 < iVar1) {
      if (iVar1 == 7) {
        uVar2 = thunk_FUN_0038ef94(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
        return uVar2;
      }
      if (iVar1 != 8) {
        return 0xffffffff;
      }
      uVar2 = FUN_003de61c(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      return uVar2;
    }
    if (iVar1 == 5) {
      plVar4 = *(long **)(param_1 + 2);
      if (plVar4 == (long *)0x0) {
        return 0xffffffff;
      }
      plVar6 = *(long **)(param_2 + 2);
      if (plVar6 == (long *)0x0) {
        return 0xffffffff;
      }
      if (*plVar4 == 0) {
        if (*plVar6 != 0) {
          return 0xffffffff;
        }
      }
      else {
        if (*plVar6 == 0) {
          return 1;
        }
        uVar2 = FUN_0038ef94();
        if ((int)uVar2 != 0) {
          return uVar2;
        }
      }
      if ((plVar4[1] != 0) && (plVar6[1] != 0)) {
        uVar2 = FUN_0038ef94();
        return uVar2;
      }
      return 0xffffffff;
    }
    if (iVar1 != 6) {
      return 0xffffffff;
    }
  }
  uVar2 = FUN_0038ef94(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
  return uVar2;
}


// ===== 00418928  FUN_00418928 =====

undefined8 FUN_00418928(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if (((param_1 != (undefined8 *)0x0) && (param_2 != (undefined8 *)0x0)) &&
     (uVar1 = FUN_003de61c(*param_1,*param_2), (int)uVar1 == 0)) {
    uVar1 = FUN_0039afb8(param_1[1],param_2[1]);
    return uVar1;
  }
  return uVar1;
}


// ===== 00418978  FUN_00418978 =====

void FUN_00418978(uint *param_1,uint param_2,undefined8 param_3)

{
  if (param_2 < 9) {
    *(undefined8 *)(param_1 + 2) = param_3;
  }
  *param_1 = param_2;
  return;
}


// ===== 0041898c  FUN_0041898c =====

undefined8 FUN_0041898c(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar1;
  }
  if (uVar1 < 9) {
    return *(undefined8 *)(param_1 + 2);
  }
  return 0;
}


// ===== 004189b0  FUN_004189b0 =====

undefined8 * FUN_004189b0(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_0039a5f4(&DAT_0077cb98);
  puVar2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_0038a658(puVar1[1]);
    puVar2 = (undefined8 *)0x1;
    *puVar1 = param_2;
    puVar1[1] = param_3;
    *(undefined8 **)(param_1 + 2) = puVar1;
    *param_1 = 0;
  }
  return puVar2;
}


// ===== 00418a0c  FUN_00418a0c =====

undefined8 FUN_00418a0c(int *param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (*param_1 != 0) {
    return 0;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = **(undefined8 **)(param_1 + 2);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(*(long *)(param_1 + 2) + 8);
    return 1;
  }
  return 1;
}


// ===== 00418a4c  FUN_00418a4c =====

undefined * FUN_00418a4c(void)

{
  return &DAT_0077d0e0;
}


// ===== 00418a58  FUN_00418a58 =====

long FUN_00418a58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  char *__s1;
  int iVar11;
  
  iVar2 = FUN_0040caf8(param_3);
  lVar5 = FUN_0040bf38(0,iVar2);
  if (lVar5 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_crld.c",0xfd,"v2i_crld");
    FUN_00379a5c(0x22,0x8000f,0);
LAB_00418cb0:
    lVar7 = 0;
LAB_00418cb4:
    lVar6 = 0;
LAB_00418cb8:
    FUN_0041874c(lVar7);
    FUN_00418788(lVar6);
    FUN_0040ca6c(lVar5,PTR_FUN_007a1c70);
    lVar5 = 0;
  }
  else if (0 < iVar2) {
    iVar11 = 0;
LAB_00418b00:
    while (lVar6 = FUN_0040cb0c(param_3,iVar11), *(long *)(lVar6 + 0x10) == 0) {
      lVar6 = FUN_004156c8(param_2,*(undefined8 *)(lVar6 + 8));
      if (lVar6 == 0) {
LAB_00418db0:
        lVar7 = 0;
        goto LAB_00418cb8;
      }
      lVar7 = FUN_0039a5f4(&DAT_0077d030);
      if (lVar7 == 0) {
LAB_00418c68:
        FUN_0038c75c(lVar7,&DAT_0077d030);
        FUN_00415744(param_2,lVar6);
        goto LAB_00418cb0;
      }
      iVar3 = FUN_0040caf8(lVar6);
      if (0 < iVar3) {
        iVar3 = 0;
        do {
          lVar9 = FUN_0040cb0c(lVar6,iVar3);
          iVar4 = FUN_00419618(lVar7,param_2,lVar9);
          if (iVar4 < 1) {
            if (iVar4 < 0) goto LAB_00418c68;
            __s1 = *(char **)(lVar9 + 8);
            iVar4 = strcmp(__s1,"reasons");
            if (iVar4 == 0) {
              iVar4 = FUN_00419868(lVar7 + 8,*(undefined8 *)(lVar9 + 0x10));
              if (iVar4 == 0) goto LAB_00418c68;
            }
            else {
              iVar4 = strcmp(__s1,"CRLissuer");
              if (iVar4 == 0) {
                lVar9 = FUN_00419a78(param_2,*(undefined8 *)(lVar9 + 0x10));
                *(long *)(lVar7 + 0x10) = lVar9;
                if (lVar9 == 0) goto LAB_00418c68;
              }
            }
          }
          iVar3 = iVar3 + 1;
          iVar4 = FUN_0040caf8(lVar6);
        } while (iVar3 < iVar4);
      }
      FUN_00415744(param_2,lVar6);
      FUN_0040c89c(lVar5,lVar7);
      iVar11 = iVar11 + 1;
      if (iVar11 == iVar2) {
        return lVar5;
      }
    }
    lVar7 = FUN_00421084(param_1,param_2);
    if (lVar7 == 0) goto LAB_00418cb4;
    lVar6 = FUN_0041877c();
    if (lVar6 == 0) {
      FUN_00379868();
      uVar10 = 0x112;
LAB_00418d64:
      FUN_0037995c("crypto/x509/v3_crld.c",uVar10,"v2i_crld");
      uVar1 = 0x8000d;
    }
    else {
      iVar3 = FUN_0040c89c(lVar6,lVar7);
      if (iVar3 != 0) {
        plVar8 = (long *)FUN_0039a5f4(&DAT_0077d030);
        if (plVar8 == (long *)0x0) {
          FUN_00379868();
          uVar10 = 0x11b;
          lVar7 = 0;
          goto LAB_00418d64;
        }
        FUN_0040c89c(lVar5,plVar8);
        lVar7 = FUN_0039a5f4(&DAT_0077cf78);
        *plVar8 = lVar7;
        if (lVar7 == 0) {
          FUN_00379868();
          FUN_0037995c("crypto/x509/v3_crld.c",0x120,"v2i_crld");
          FUN_00379a5c(0x22,0x8000d,0);
          goto LAB_00418db0;
        }
        *(long *)(lVar7 + 8) = lVar6;
        *(undefined4 *)*plVar8 = 0;
        iVar11 = iVar11 + 1;
        if (iVar11 == iVar2) {
          return lVar5;
        }
        goto LAB_00418b00;
      }
      FUN_00379868();
      FUN_0037995c("crypto/x509/v3_crld.c",0x116,"v2i_crld");
      uVar1 = 0x8000f;
    }
    FUN_00379a5c(0x22,uVar1,0);
    goto LAB_00418cb8;
  }
  return lVar5;
}


// ===== 00418dc4  FUN_00418dc4 =====

undefined8 FUN_00418dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 local_88 [5];
  
  iVar1 = FUN_0040caf8(param_2);
  if (iVar1 < 1) {
    return 1;
  }
  puVar3 = (undefined8 *)FUN_0040cb0c(param_2,0);
  piVar5 = (int *)*puVar3;
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 0) {
      FUN_0037b9f8(param_3,"%*sFull Name:\n",param_4,&DAT_001c717f);
      FUN_00419e30(param_3,*(undefined8 *)(piVar5 + 2),param_4);
      lVar4 = puVar3[1];
      goto joined_r0x00418e78;
    }
    local_88[0] = *(undefined8 *)(piVar5 + 2);
    FUN_0037b9f8(param_3,"%*sRelative Name:\n%*s",param_4,&DAT_001c717f,param_4 + 2,&DAT_001c717f);
    FUN_003e26a0(param_3,local_88,0,0x82031f);
    FUN_0037e608(param_3,&DAT_001e2980);
  }
  lVar4 = puVar3[1];
joined_r0x00418e78:
  if (lVar4 != 0) {
    FUN_00419ba4(param_3,"Reasons",lVar4,param_4);
  }
  if (puVar3[2] != 0) {
    FUN_0037b9f8(param_3,"%*sCRL Issuer:\n",param_4,&DAT_001c717f);
    FUN_00419e30(param_3,puVar3[2],param_4);
  }
  iVar1 = FUN_0040caf8(param_2);
  if (1 < iVar1) {
    iVar1 = 1;
    do {
      FUN_0037e608(param_3,&DAT_001e2980);
      puVar3 = (undefined8 *)FUN_0040cb0c(param_2,iVar1);
      piVar5 = (int *)*puVar3;
      if (piVar5 == (int *)0x0) {
LAB_00418f88:
        lVar4 = puVar3[1];
      }
      else {
        if (*piVar5 != 0) {
          local_88[0] = *(undefined8 *)(piVar5 + 2);
          FUN_0037b9f8(param_3,"%*sRelative Name:\n%*s",param_4,&DAT_001c717f,param_4 + 2,
                       &DAT_001c717f);
          FUN_003e26a0(param_3,local_88,0,0x82031f);
          FUN_0037e608(param_3,&DAT_001e2980);
          goto LAB_00418f88;
        }
        FUN_0037b9f8(param_3,"%*sFull Name:\n",param_4,&DAT_001c717f);
        FUN_00419e30(param_3,*(undefined8 *)(piVar5 + 2),param_4);
        lVar4 = puVar3[1];
      }
      if (lVar4 != 0) {
        FUN_00419ba4(param_3,"Reasons",lVar4,param_4);
      }
      if (puVar3[2] != 0) {
        FUN_0037b9f8(param_3,"%*sCRL Issuer:\n",param_4,&DAT_001c717f);
        FUN_00419e30(param_3,puVar3[2],param_4);
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0040caf8(param_2);
    } while (iVar1 < iVar2);
  }
  return 1;
}


// ===== 00419060  FUN_00419060 =====

undefined * FUN_00419060(void)

{
  return &DAT_0077cf78;
}


// ===== 0041906c  FUN_0041906c =====

void FUN_0041906c(void)

{
  FUN_0038a93c();
  return;
}


// ===== 00419078  FUN_00419078 =====

void FUN_00419078(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077cf78);
  return;
}


// ===== 00419084  FUN_00419084 =====

void FUN_00419084(void)

{
  FUN_0039a5f4(&DAT_0077cf78);
  return;
}


// ===== 00419090  FUN_00419090 =====

void FUN_00419090(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077cf78);
  return;
}


// ===== 0041909c  FUN_0041909c =====

undefined * FUN_0041909c(void)

{
  return &DAT_0077d030;
}


// ===== 004190a8  FUN_004190a8 =====

void FUN_004190a8(void)

{
  FUN_0038a93c();
  return;
}


// ===== 004190b4  FUN_004190b4 =====

void FUN_004190b4(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077d030);
  return;
}


// ===== 004190c0  FUN_004190c0 =====

void FUN_004190c0(void)

{
  FUN_0039a5f4(&DAT_0077d030);
  return;
}


// ===== 004190cc  FUN_004190cc =====

void FUN_004190cc(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077d030);
  return;
}


// ===== 004190d8  FUN_004190d8 =====

void FUN_004190d8(void)

{
  FUN_0038a93c();
  return;
}


// ===== 004190e4  FUN_004190e4 =====

void FUN_004190e4(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077d0e0);
  return;
}


// ===== 004190f0  FUN_004190f0 =====

void FUN_004190f0(void)

{
  FUN_0039a5f4(&DAT_0077d0e0);
  return;
}


// ===== 004190fc  FUN_004190fc =====

void FUN_004190fc(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077d0e0);
  return;
}


// ===== 00419108  FUN_00419108 =====

undefined * FUN_00419108(void)

{
  return &DAT_0077d140;
}


// ===== 00419114  FUN_00419114 =====

void FUN_00419114(void)

{
  FUN_0038a93c();
  return;
}


// ===== 00419120  FUN_00419120 =====

void FUN_00419120(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077d140);
  return;
}


// ===== 0041912c  FUN_0041912c =====

void FUN_0041912c(void)

{
  FUN_0039a5f4(&DAT_0077d140);
  return;
}


// ===== 00419138  FUN_00419138 =====

void FUN_00419138(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077d140);
  return;
}


// ===== 00419144  FUN_00419144 =====

long FUN_00419144(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *__s1;
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = FUN_0039a5f4(&DAT_0077d140);
  if (lVar4 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_crld.c",0x17d,"v2i_idp");
    FUN_00379a5c(0x22,0x8000d,0);
LAB_004192b4:
    FUN_0038c75c(lVar4,&DAT_0077d140);
    lVar4 = 0;
  }
  else {
    iVar2 = FUN_0040caf8(param_3);
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        lVar5 = FUN_0040cb0c(param_3,iVar2);
        __s1 = *(char **)(lVar5 + 8);
        uVar1 = *(undefined8 *)(lVar5 + 0x10);
        iVar3 = FUN_00419618(lVar4,param_2,lVar5);
        if (iVar3 < 1) {
          if (iVar3 < 0) goto LAB_004192b4;
          iVar3 = strcmp(__s1,"onlyuser");
          if (iVar3 == 0) {
            lVar6 = lVar4 + 8;
          }
          else {
            iVar3 = strcmp(__s1,"onlyCA");
            if (iVar3 == 0) {
              lVar6 = lVar4 + 0xc;
            }
            else {
              iVar3 = strcmp(__s1,"onlyAA");
              if (iVar3 == 0) {
                lVar6 = lVar4 + 0x1c;
              }
              else {
                iVar3 = strcmp(__s1,"indirectCRL");
                if (iVar3 != 0) {
                  iVar3 = strcmp(__s1,"onlysomereasons");
                  if (iVar3 == 0) {
                    iVar3 = FUN_00419868(lVar4 + 0x10,uVar1);
                    if (iVar3 != 0) goto LAB_004191bc;
                  }
                  else {
                    FUN_00379868();
                    FUN_0037995c("crypto/x509/v3_crld.c",0x199,"v2i_idp");
                    FUN_00379a5c(0x22,0x6a,0);
                    FUN_0037aeac(4,"name=",*(undefined8 *)(lVar5 + 8),", value=",
                                 *(undefined8 *)(lVar5 + 0x10));
                  }
                  goto LAB_004192b4;
                }
                lVar6 = lVar4 + 0x18;
              }
            }
          }
          iVar3 = FUN_00423270(lVar5,lVar6);
          if (iVar3 == 0) goto LAB_004192b4;
        }
LAB_004191bc:
        iVar2 = iVar2 + 1;
        iVar3 = FUN_0040caf8(param_3);
      } while (iVar2 < iVar3);
    }
  }
  return lVar4;
}


// ===== 00419334  FUN_00419334 =====

undefined8 FUN_00419334(undefined8 param_1,long *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  undefined8 local_58 [5];
  
  piVar2 = (int *)*param_2;
  if (piVar2 != (int *)0x0) {
    if (*piVar2 == 0) {
      FUN_0037b9f8(param_3,"%*sFull Name:\n",param_4,&DAT_001c717f);
      FUN_00419e30(param_3,*(undefined8 *)(piVar2 + 2),param_4);
      iVar1 = (int)param_2[1];
      goto joined_r0x004193c0;
    }
    local_58[0] = *(undefined8 *)(piVar2 + 2);
    FUN_0037b9f8(param_3,"%*sRelative Name:\n%*s",param_4,&DAT_001c717f,param_4 + 2,&DAT_001c717f);
    FUN_003e26a0(param_3,local_58,0,0x82031f);
    FUN_0037e608(param_3,&DAT_001e2980);
  }
  iVar1 = (int)param_2[1];
joined_r0x004193c0:
  if (0 < iVar1) {
    FUN_0037b9f8(param_3,"%*sOnly User Certificates\n",param_4,&DAT_001c717f);
  }
  if (0 < *(int *)((long)param_2 + 0xc)) {
    FUN_0037b9f8(param_3,"%*sOnly CA Certificates\n",param_4,&DAT_001c717f);
  }
  if (0 < (int)param_2[3]) {
    FUN_0037b9f8(param_3,"%*sIndirect CRL\n",param_4,&DAT_001c717f);
  }
  if (param_2[2] != 0) {
    FUN_00419ba4(param_3,"Only Some Reasons",param_2[2],param_4);
  }
  if (0 < *(int *)((long)param_2 + 0x1c)) {
    FUN_0037b9f8(param_3,"%*sOnly Attribute Certificates\n",param_4,&DAT_001c717f);
  }
  if ((((*param_2 == 0) && ((int)param_2[1] < 1)) && (*(int *)((long)param_2 + 0xc) < 1)) &&
     ((((int)param_2[3] < 1 && (param_2[2] == 0)) && (*(int *)((long)param_2 + 0x1c) < 1)))) {
    FUN_0037b9f8(param_3,"%*s<EMPTY>\n",param_4,&DAT_001c717f);
    return 1;
  }
  return 1;
}


// ===== 0041953c  FUN_0041953c =====

undefined8 FUN_0041953c(int *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_1 == (int *)0x0) {
    return 1;
  }
  if (*param_1 == 1) {
    uVar1 = *(undefined8 *)(param_1 + 2);
    FUN_0043b560(*(undefined8 *)(param_1 + 4));
    lVar4 = FUN_0043b56c(param_2);
    *(long *)(param_1 + 4) = lVar4;
    if (lVar4 == 0) {
      return 0;
    }
    iVar2 = FUN_0040caf8(uVar1);
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        uVar5 = FUN_0040cb0c(uVar1,iVar2);
        iVar3 = FUN_0043314c(*(undefined8 *)(param_1 + 4),uVar5,0xffffffff,iVar2 == 0);
        if (iVar3 == 0) goto LAB_004195f8;
        iVar2 = iVar2 + 1;
        iVar3 = FUN_0040caf8(uVar1);
      } while (iVar2 < iVar3);
    }
    iVar2 = FUN_0043b548(*(undefined8 *)(param_1 + 4),0);
    if (iVar2 < 0) {
LAB_004195f8:
      FUN_0043b560(*(undefined8 *)(param_1 + 4));
      param_1[4] = 0;
      param_1[5] = 0;
      return 0;
    }
  }
  return 1;
}


// ===== 00419618  FUN_00419618 =====

undefined8 FUN_00419618(long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  char *__s1;
  undefined8 uVar10;
  
  lVar8 = *(long *)(param_3 + 0x10);
  if (lVar8 == 0) {
    uVar6 = 0;
    uVar7 = 0x7c;
    uVar10 = 0x4a;
    plVar9 = (long *)0x0;
  }
  else {
    __s1 = *(char **)(param_3 + 8);
    iVar1 = strncmp(__s1,"fullname",8);
    if (iVar1 == 0) {
      plVar2 = (long *)FUN_00419a78(param_2,lVar8);
      uVar6 = 0;
      plVar4 = (long *)0x0;
      plVar9 = plVar4;
      if (plVar2 == (long *)0x0) goto code_r0x004196f8;
    }
    else {
      iVar1 = strcmp(__s1,"relativename");
      if (iVar1 != 0) {
        return 0;
      }
      puVar3 = (undefined8 *)FUN_0043b554();
      if (puVar3 == (undefined8 *)0x0) {
        return 0xffffffff;
      }
      lVar8 = FUN_004156c8(param_2,*(undefined8 *)(param_3 + 0x10));
      if (lVar8 == 0) {
        FUN_0043b560(puVar3);
        FUN_00379868();
        FUN_0037995c("crypto/x509/v3_crld.c",0x5c,"set_dist_point_name");
        FUN_00379a5c(0x22,0x96,0);
        return 0xffffffff;
      }
      iVar1 = FUN_00424920(puVar3,lVar8,0x1001);
      FUN_00415744(param_2,lVar8);
      uVar6 = *puVar3;
      *puVar3 = 0;
      FUN_0043b560(puVar3);
      if ((iVar1 == 0) || (iVar1 = FUN_0040caf8(uVar6), iVar1 < 1)) {
        plVar9 = (long *)0x0;
        goto code_r0x004196f8;
      }
      iVar1 = FUN_0040caf8(uVar6);
      plVar4 = (long *)FUN_0040cb0c(uVar6,iVar1 + -1);
      plVar9 = (long *)0x0;
      plVar2 = plVar9;
      if ((int)plVar4[2] != 0) {
        uVar7 = 0xa1;
        uVar10 = 0x6b;
        param_1 = plVar4;
        goto LAB_004196c4;
      }
    }
    plVar9 = plVar2;
    if (*param_1 == 0) {
      puVar5 = (undefined4 *)FUN_0039a5f4(&DAT_0077cf78);
      *param_1 = (long)puVar5;
      if (puVar5 != (undefined4 *)0x0) {
        if (plVar9 != (long *)0x0) {
          *puVar5 = 0;
          *(long **)(puVar5 + 2) = plVar9;
          return 1;
        }
        *(undefined8 *)(puVar5 + 2) = uVar6;
        *puVar5 = 1;
        return 1;
      }
      goto code_r0x004196f8;
    }
    uVar7 = 0xa0;
    uVar10 = 0x72;
    param_1 = plVar4;
  }
LAB_004196c4:
  FUN_00379868(param_1);
  FUN_0037995c("crypto/x509/v3_crld.c",uVar10,"set_dist_point_name");
  FUN_00379a5c(0x22,uVar7,0);
code_r0x004196f8:
  FUN_0040ca6c(plVar9,FUN_0041874c);
  FUN_0040ca6c(uVar6,PTR_FUN_007a1ca0);
  return 0xffffffff;
}


// ===== 00419868  FUN_00419868 =====

undefined4 FUN_00419868(long *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  char *__s2;
  long lVar7;
  
  lVar3 = FUN_00423474(param_2);
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    if (*param_1 == 0) {
      iVar1 = FUN_0040caf8(lVar3);
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          lVar4 = FUN_0040cb0c(lVar3,iVar1);
          lVar7 = *param_1;
          __s2 = *(char **)(lVar4 + 8);
          if (lVar7 == 0) {
            lVar7 = FUN_0038a3e8();
            *param_1 = lVar7;
            if (lVar7 == 0) goto LAB_004198a0;
          }
          iVar2 = strcmp("unused",__s2);
          if (iVar2 == 0) {
            puVar5 = &DAT_0077d2d0;
          }
          else {
            iVar2 = strcmp("keyCompromise",__s2);
            if (iVar2 == 0) {
              puVar5 = &DAT_0077d2e8;
            }
            else {
              iVar2 = strcmp("CACompromise",__s2);
              if (iVar2 == 0) {
                puVar5 = &DAT_0077d300;
              }
              else {
                iVar2 = strcmp("affiliationChanged",__s2);
                if (iVar2 == 0) {
                  puVar5 = &DAT_0077d318;
                }
                else {
                  iVar2 = strcmp("superseded",__s2);
                  if (iVar2 == 0) {
                    puVar5 = &DAT_0077d330;
                  }
                  else {
                    iVar2 = strcmp("cessationOfOperation",__s2);
                    if (iVar2 == 0) {
                      puVar5 = &DAT_0077d348;
                    }
                    else {
                      iVar2 = strcmp("certificateHold",__s2);
                      if (iVar2 == 0) {
                        puVar5 = &DAT_0077d360;
                      }
                      else {
                        iVar2 = strcmp("privilegeWithdrawn",__s2);
                        if (iVar2 == 0) {
                          puVar5 = &DAT_0077d378;
                        }
                        else {
                          iVar2 = strcmp("AACompromise",__s2);
                          puVar5 = &DAT_0077d390;
                          if (iVar2 != 0) goto LAB_004198a0;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          iVar2 = FUN_0039c49c(lVar7,*puVar5,1);
          if (iVar2 == 0) goto LAB_004198a0;
          iVar1 = iVar1 + 1;
          iVar2 = FUN_0040caf8(lVar3);
        } while (iVar1 < iVar2);
      }
      uVar6 = 1;
    }
    else {
LAB_004198a0:
      uVar6 = 0;
    }
    FUN_0040ca6c(lVar3,PTR_FUN_007a1b70);
  }
  return uVar6;
}


// ===== 00419a78  FUN_00419a78 =====

undefined8 FUN_00419a78(undefined8 param_1,char *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*param_2 == '@') {
    lVar1 = FUN_004156c8(param_1,param_2 + 1);
  }
  else {
    lVar1 = FUN_00423474(param_2);
  }
  if (lVar1 != 0) {
    uVar2 = FUN_00420f64(0,param_1,lVar1);
    if (*param_2 != '@') {
      FUN_0040ca6c(lVar1,PTR_FUN_007a1b70);
      return uVar2;
    }
    FUN_00415744(param_1,lVar1);
    return uVar2;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/v3_crld.c",0x38,"gnames_from_sectname");
  FUN_00379a5c(0x22,0x96,0);
  return 0;
}


// ===== 00419b68  FUN_00419b68 =====

undefined8 FUN_00419b68(int param_1,long *param_2)

{
  if (param_1 == 3) {
    FUN_0043b560(*(undefined8 *)(*param_2 + 0x10));
  }
  else if (param_1 == 1) {
    *(undefined8 *)(*param_2 + 0x10) = 0;
    return 1;
  }
  return 1;
}


// ===== 00419ba4  FUN_00419ba4 =====

void FUN_00419ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  
  FUN_0037b9f8(param_1,"%*s%s:\n%*s",param_4,&DAT_001c717f,param_2,param_4 + 2);
  iVar1 = FUN_0039c5ac(param_3,0);
  if (iVar1 == 0) {
    iVar1 = FUN_0039c5ac(param_3,1);
    if (iVar1 != 0) goto LAB_00419c30;
    iVar1 = FUN_0039c5ac(param_3,2);
    if (iVar1 != 0) goto LAB_00419c60;
    iVar1 = FUN_0039c5ac(param_3,3);
    if (iVar1 != 0) goto LAB_00419c90;
    iVar1 = FUN_0039c5ac(param_3,4);
    if (iVar1 != 0) goto LAB_00419cc0;
    iVar1 = FUN_0039c5ac(param_3,5);
    if (iVar1 != 0) goto LAB_00419cf0;
    iVar1 = FUN_0039c5ac(param_3,6);
    if (iVar1 != 0) goto LAB_00419d20;
    iVar1 = FUN_0039c5ac(param_3,7);
    if (iVar1 != 0) goto LAB_00419d50;
    iVar1 = FUN_0039c5ac(param_3,8);
    if (iVar1 == 0) {
      FUN_0037e608(param_1,"<EMPTY>\n");
      return;
    }
  }
  else {
    FUN_0037e608(param_1,"Unused");
    iVar1 = FUN_0039c5ac(param_3,1);
    if (iVar1 != 0) {
      FUN_0037e608(param_1,&DAT_001c2f11);
LAB_00419c30:
      FUN_0037e608(param_1,"Key Compromise");
    }
    iVar1 = FUN_0039c5ac(param_3,2);
    if (iVar1 != 0) {
      FUN_0037e608(param_1,&DAT_001c2f11);
LAB_00419c60:
      FUN_0037e608(param_1,"CA Compromise");
    }
    iVar1 = FUN_0039c5ac(param_3,3);
    if (iVar1 != 0) {
      FUN_0037e608(param_1,&DAT_001c2f11);
LAB_00419c90:
      FUN_0037e608(param_1,"Affiliation Changed");
    }
    iVar1 = FUN_0039c5ac(param_3,4);
    if (iVar1 != 0) {
      FUN_0037e608(param_1,&DAT_001c2f11);
LAB_00419cc0:
      FUN_0037e608(param_1,"Superseded");
    }
    iVar1 = FUN_0039c5ac(param_3,5);
    if (iVar1 != 0) {
      FUN_0037e608(param_1,&DAT_001c2f11);
LAB_00419cf0:
      FUN_0037e608(param_1,"Cessation Of Operation");
    }
    iVar1 = FUN_0039c5ac(param_3,6);
    if (iVar1 != 0) {
      FUN_0037e608(param_1,&DAT_001c2f11);
LAB_00419d20:
      FUN_0037e608(param_1,"Certificate Hold");
    }
    iVar1 = FUN_0039c5ac(param_3,7);
    if (iVar1 != 0) {
      FUN_0037e608(param_1,&DAT_001c2f11);
LAB_00419d50:
      FUN_0037e608(param_1,"Privilege Withdrawn");
    }
    iVar1 = FUN_0039c5ac(param_3,8);
    if (iVar1 == 0) goto LAB_00419d90;
    FUN_0037e608(param_1,&DAT_001c2f11);
  }
  FUN_0037e608(param_1,"AA Compromise");
LAB_00419d90:
  FUN_0037e608(param_1,&DAT_001e2980);
  return;
}


// ===== 00419e30  FUN_00419e30 =====

void FUN_00419e30(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0040caf8(param_2);
  if (0 < iVar1) {
    FUN_0037b9f8(param_1,&DAT_001d8020,param_3 + 2,&DAT_001c717f);
    uVar3 = FUN_0040cb0c(param_2,0);
    FUN_00420d30(param_1,uVar3);
    iVar1 = FUN_0040caf8(param_2);
    if (1 < iVar1) {
      iVar1 = 1;
      do {
        FUN_0037e608(param_1,&DAT_001e2980);
        FUN_0037b9f8(param_1,&DAT_001d8020,param_3 + 2,&DAT_001c717f);
        uVar3 = FUN_0040cb0c(param_2,iVar1);
        FUN_00420d30(param_1,uVar3);
        iVar1 = iVar1 + 1;
        iVar2 = FUN_0040caf8(param_2);
      } while (iVar1 < iVar2);
    }
  }
  return;
}


// ===== 00419f28  FUN_00419f28 =====

undefined * FUN_00419f28(void)

{
  return &DAT_0077d490;
}


// ===== 00419f34  FUN_00419f34 =====

undefined8 FUN_00419f34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [80];
  undefined8 local_28;
  
  local_28 = param_3;
  iVar1 = FUN_0040caf8(param_2);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      uVar3 = FUN_0040cb0c(param_2,iVar1);
      FUN_00399b58(auStack_78,0x50,uVar3);
      FUN_00422a24(0,auStack_78,&local_28);
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0040caf8(param_2);
      param_3 = local_28;
    } while (iVar1 < iVar2);
  }
  return param_3;
}


// ===== 00419fbc  FUN_00419fbc =====

long FUN_00419fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  iVar1 = FUN_0040caf8(param_3);
  lVar2 = FUN_0040bf38(0,iVar1);
  if (lVar2 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_extku.c",0x52,"v2i_EXTENDED_KEY_USAGE");
    FUN_00379a5c(0x22,0x8000f,0);
    FUN_0040bd78(0);
    return 0;
  }
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      lVar3 = FUN_0040cb0c(param_3,iVar4);
      lVar5 = *(long *)(lVar3 + 0x10);
      if (lVar5 == 0) {
        lVar5 = *(long *)(lVar3 + 8);
      }
      lVar3 = FUN_003dce7c(lVar5,0);
      if (lVar3 == 0) {
        FUN_0040ca6c(lVar2,PTR_FUN_007a19a8);
        FUN_00379868();
        FUN_0037995c("crypto/x509/v3_extku.c",0x5f,"v2i_EXTENDED_KEY_USAGE");
        FUN_00379a5c(0x22,0x6e,&DAT_001d3a58,lVar5);
        return 0;
      }
      FUN_0040c89c(lVar2,lVar3);
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  return lVar2;
}


// ===== 0041a108  FUN_0041a108 =====

void FUN_0041a108(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0041a114  FUN_0041a114 =====

void FUN_0041a114(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077d490);
  return;
}


// ===== 0041a120  FUN_0041a120 =====

void FUN_0041a120(void)

{
  FUN_0039a5f4(&DAT_0077d490);
  return;
}


// ===== 0041a12c  FUN_0041a12c =====

void FUN_0041a12c(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077d490);
  return;
}


// ===== 0041a138  FUN_0041a138 =====

void FUN_0041a138(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  long *plVar5;
  
  lVar2 = FUN_0038e238(param_2);
  piVar4 = *(int **)(param_1 + 0x60);
  lVar3 = *(long *)(piVar4 + 2);
  if (lVar3 != 0) {
    if (lVar2 != *piVar4) {
      plVar5 = (long *)(piVar4 + 8);
      do {
        lVar3 = *plVar5;
        if (lVar3 == 0) goto LAB_0041a1a4;
        plVar1 = plVar5 + -1;
        plVar5 = plVar5 + 3;
      } while (lVar2 != (int)*plVar1);
    }
    FUN_003ca2f4(lVar3,"crypto/x509/v3_enum.c",0x32);
    return;
  }
LAB_0041a1a4:
  FUN_00422d30(param_1,param_2);
  return;
}


// ===== 0041a1b8  FUN_0041a1b8 =====

undefined * FUN_0041a1b8(void)

{
  return &DAT_0077d6b0;
}


// ===== 0041a1c4  FUN_0041a1c4 =====

long FUN_0041a1c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  size_t sVar6;
  size_t sVar7;
  long lVar8;
  long lVar9;
  char acStack_b0 [80];
  
  iVar1 = FUN_0040caf8(param_2);
  if (iVar1 < 1) {
    lVar4 = param_3;
    if (param_3 == 0) {
      lVar4 = FUN_0040bf0c();
      return lVar4;
    }
  }
  else {
    iVar1 = 0;
    lVar5 = param_3;
    do {
      puVar3 = (undefined8 *)FUN_0040cb0c(param_2,iVar1);
      lVar4 = FUN_004208cc(param_1,puVar3[1],lVar5);
      if (lVar4 == 0) {
        FUN_00379868();
        FUN_0037995c("crypto/x509/v3_info.c",0x4d,"i2v_AUTHORITY_INFO_ACCESS");
        FUN_00379a5c(0x22,0x8000d,0);
        lVar4 = lVar5;
joined_r0x0041a338:
        if (param_3 != 0) {
          return 0;
        }
        if (lVar4 == 0) {
          return 0;
        }
        FUN_0040ca6c(lVar4,PTR_FUN_007a1b70);
        return 0;
      }
      lVar5 = FUN_0040cb0c(lVar4,iVar1);
      FUN_00399b58(acStack_b0,0x50,*puVar3);
      sVar6 = strlen(acStack_b0);
      sVar7 = strlen(*(char **)(lVar5 + 8));
      lVar9 = (long)((int)sVar6 + (int)sVar7 + 4);
      lVar8 = FUN_003c83a4(lVar9,"crypto/x509/v3_info.c",0x54);
      if (lVar8 == 0) goto joined_r0x0041a338;
      FUN_0037cd5c(lVar8,lVar9,"%s - %s",acStack_b0,*(undefined8 *)(lVar5 + 8));
      FUN_003c86b4(*(undefined8 *)(lVar5 + 8),"crypto/x509/v3_info.c",0x58);
      *(long *)(lVar5 + 8) = lVar8;
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0040caf8(param_2);
      lVar5 = lVar4;
    } while (iVar1 < iVar2);
  }
  return lVar4;
}


// ===== 0041a388  FUN_0041a388 =====

long FUN_0041a388(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  char *pcVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_78 [8];
  char *local_70;
  undefined8 uStack_68;
  
  iVar1 = FUN_0040caf8(param_3);
  lVar2 = FUN_0040bf38(0,iVar1);
  if (lVar2 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_info.c",0x73,"v2i_AUTHORITY_INFO_ACCESS");
    FUN_00379a5c(0x22,0x8000f,0);
  }
  else if (0 < iVar1) {
    iVar8 = 0;
    do {
      lVar3 = FUN_0040cb0c(param_3,iVar8);
      plVar4 = (long *)FUN_0039a5f4(&DAT_0077d628);
      if (plVar4 == (long *)0x0) {
        FUN_00379868();
        FUN_0037995c("crypto/x509/v3_info.c",0x79,"v2i_AUTHORITY_INFO_ACCESS");
        uVar7 = 0x8000d;
LAB_0041a528:
        FUN_00379a5c(0x22,uVar7,0);
LAB_0041a57c:
        FUN_0040ca6c(lVar2,PTR_FUN_007a1c98);
        return 0;
      }
      FUN_0040c89c(lVar2,plVar4);
      pcVar5 = strchr(*(char **)(lVar3 + 8),0x3b);
      if (pcVar5 == (char *)0x0) {
        FUN_00379868();
        FUN_0037995c("crypto/x509/v3_info.c",0x7f,"v2i_AUTHORITY_INFO_ACCESS");
        uVar7 = 0x8f;
        goto LAB_0041a528;
      }
      local_70 = pcVar5 + 1;
      uStack_68 = *(undefined8 *)(lVar3 + 0x10);
      lVar6 = FUN_004210a0(plVar4[1],param_1,param_2,auStack_78,0);
      if ((lVar6 == 0) ||
         (lVar3 = FUN_003ca354(*(long *)(lVar3 + 8),(long)pcVar5 - *(long *)(lVar3 + 8),
                               "crypto/x509/v3_info.c",0x86), lVar3 == 0)) goto LAB_0041a57c;
      lVar6 = FUN_003dce7c(lVar3,0);
      *plVar4 = lVar6;
      if (lVar6 == 0) {
        FUN_00379868();
        FUN_0037995c("crypto/x509/v3_info.c",0x8a,"v2i_AUTHORITY_INFO_ACCESS");
        FUN_00379a5c(0x22,0x77,"value=%s",lVar3);
        FUN_003c86b4(lVar3,"crypto/x509/v3_info.c",0x8c);
        goto LAB_0041a57c;
      }
      FUN_003c86b4(lVar3,"crypto/x509/v3_info.c",0x8f);
      iVar8 = iVar8 + 1;
    } while (iVar1 != iVar8);
  }
  return lVar2;
}


// ===== 0041a5b4  FUN_0041a5b4 =====

undefined * FUN_0041a5b4(void)

{
  return &DAT_0077d628;
}


// ===== 0041a5c0  FUN_0041a5c0 =====

void FUN_0041a5c0(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0041a5cc  FUN_0041a5cc =====

void FUN_0041a5cc(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077d628);
  return;
}


// ===== 0041a5d8  FUN_0041a5d8 =====

void FUN_0041a5d8(void)

{
  FUN_0039a5f4(&DAT_0077d628);
  return;
}


// ===== 0041a5e4  FUN_0041a5e4 =====

void FUN_0041a5e4(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077d628);
  return;
}


// ===== 0041a5f0  FUN_0041a5f0 =====

void FUN_0041a5f0(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0041a5fc  FUN_0041a5fc =====

void FUN_0041a5fc(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077d6b0);
  return;
}


// ===== 0041a608  FUN_0041a608 =====

void FUN_0041a608(void)

{
  FUN_0039a5f4(&DAT_0077d6b0);
  return;
}


// ===== 0041a614  FUN_0041a614 =====

void FUN_0041a614(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077d6b0);
  return;
}


// ===== 0041a620  FUN_0041a620 =====

undefined8 FUN_0041a620(undefined8 param_1,undefined8 *param_2)

{
  FUN_00399b60(param_1,*param_2);
  return 2;
}


// ===== 0041a63c  FUN_0041a63c =====

undefined * FUN_0041a63c(void)

{
  return &DAT_0077d710;
}


// ===== 0041a648  FUN_0041a648 =====

void FUN_0041a648(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0041a654  FUN_0041a654 =====

void FUN_0041a654(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077d710);
  return;
}


// ===== 0041a660  FUN_0041a660 =====

void FUN_0041a660(void)

{
  FUN_0039a5f4(&DAT_0077d710);
  return;
}


// ===== 0041a66c  FUN_0041a66c =====

void FUN_0041a66c(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077d710);
  return;
}


// ===== 0041a678  FUN_0041a678 =====

long * FUN_0041a678(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  size_t sVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  
  plVar3 = (long *)FUN_0039a5f4(&DAT_0077d710);
  if (plVar3 == (long *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_ist.c",0x2a,"v2i_issuer_sign_tool");
    FUN_00379a5c(0x22,0x8000d,0);
  }
  else {
    iVar1 = FUN_0040caf8(param_3);
    if (0 < iVar1) {
      iVar1 = 0;
      uVar7 = 0x8000d;
      do {
        lVar4 = FUN_0040cb0c(param_3,iVar1);
        if (lVar4 != 0) {
          pcVar9 = *(char **)(lVar4 + 8);
          iVar2 = strcmp(pcVar9,"signTool");
          if (iVar2 != 0) {
            iVar2 = strcmp(pcVar9,"cATool");
            if (iVar2 != 0) {
              iVar2 = strcmp(pcVar9,"signToolCert");
              if (iVar2 != 0) {
                iVar2 = strcmp(pcVar9,"cAToolCert");
                if (iVar2 != 0) {
                  uVar8 = 0x54;
                  uVar7 = 0x80106;
                  goto LAB_0041a890;
                }
                lVar5 = FUN_0038a418();
                plVar3[3] = lVar5;
                if ((lVar5 != 0) && (pcVar9 = *(char **)(lVar4 + 0x10), pcVar9 != (char *)0x0)) {
                  sVar6 = strlen(pcVar9);
                  iVar2 = FUN_0038ebe0(lVar5,pcVar9,sVar6);
                  if (iVar2 != 0) goto LAB_0041a6ec;
                }
                uVar8 = 0x50;
                uVar7 = 0x8000d;
                goto LAB_0041a890;
              }
              lVar5 = FUN_0038a418();
              plVar3[2] = lVar5;
              if ((lVar5 != 0) && (pcVar9 = *(char **)(lVar4 + 0x10), pcVar9 != (char *)0x0)) {
                sVar6 = strlen(pcVar9);
                iVar2 = FUN_0038ebe0(lVar5,pcVar9,sVar6);
                if (iVar2 != 0) goto LAB_0041a6ec;
              }
              uVar8 = 0x48;
              uVar7 = 0x8000d;
              goto LAB_0041a890;
            }
            lVar5 = FUN_0038a418();
            plVar3[1] = lVar5;
            if ((lVar5 != 0) && (pcVar9 = *(char **)(lVar4 + 0x10), pcVar9 != (char *)0x0)) {
              sVar6 = strlen(pcVar9);
              iVar2 = FUN_0038ebe0(lVar5,pcVar9,sVar6);
              if (iVar2 != 0) goto LAB_0041a6ec;
            }
            uVar8 = 0x40;
            goto LAB_0041a890;
          }
          lVar5 = FUN_0038a418();
          *plVar3 = lVar5;
          if ((lVar5 != 0) && (pcVar9 = *(char **)(lVar4 + 0x10), pcVar9 != (char *)0x0)) {
            sVar6 = strlen(pcVar9);
            iVar2 = FUN_0038ebe0(lVar5,pcVar9,sVar6);
            if (iVar2 != 0) goto LAB_0041a6ec;
          }
          uVar8 = 0x38;
LAB_0041a890:
          FUN_00379868();
          FUN_0037995c("crypto/x509/v3_ist.c",uVar8,"v2i_issuer_sign_tool");
          FUN_00379a5c(0x22,uVar7,0);
          FUN_0038c75c(plVar3,&DAT_0077d710);
          return (long *)0x0;
        }
LAB_0041a6ec:
        iVar1 = iVar1 + 1;
        iVar2 = FUN_0040caf8(param_3);
      } while (iVar1 < iVar2);
    }
  }
  return plVar3;
}


// ===== 0041a8f0  FUN_0041a8f0 =====

undefined8 FUN_0041a8f0(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  if (param_2 == (long *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_ist.c",0x66,"i2r_issuer_sign_tool");
    FUN_00379a5c(0x22,0x80106,0);
    return 0;
  }
  if (*param_2 == 0) {
    if (param_2[1] != 0) goto LAB_0041a9bc;
    if (param_2[2] == 0) {
      if (param_2[3] == 0) {
        return 1;
      }
      goto LAB_0041aa58;
    }
LAB_0041aa0c:
    FUN_0037b9f8(param_3,"%*ssignToolCert: ",param_4,&DAT_001c717f);
    FUN_0037df4c(param_3,*(undefined8 *)((undefined4 *)param_2[2] + 2),*(undefined4 *)param_2[2]);
  }
  else {
    FUN_0037b9f8(param_3,"%*ssignTool    : ",param_4,&DAT_001c717f);
    FUN_0037df4c(param_3,*(undefined8 *)((undefined4 *)*param_2 + 2),*(undefined4 *)*param_2);
    if (param_2[1] != 0) {
      FUN_0037df4c(param_3,&DAT_001e2980,1);
LAB_0041a9bc:
      FUN_0037b9f8(param_3,"%*scATool      : ",param_4,&DAT_001c717f);
      FUN_0037df4c(param_3,*(undefined8 *)((undefined4 *)param_2[1] + 2),*(undefined4 *)param_2[1]);
    }
    if (param_2[2] != 0) {
      FUN_0037df4c(param_3,&DAT_001e2980,1);
      goto LAB_0041aa0c;
    }
  }
  if (param_2[3] == 0) {
    return 1;
  }
  FUN_0037df4c(param_3,&DAT_001e2980,1);
LAB_0041aa58:
  FUN_0037b9f8(param_3,"%*scAToolCert  : ",param_4,&DAT_001c717f);
  FUN_0037df4c(param_3,*(undefined8 *)((undefined4 *)param_2[3] + 2),*(undefined4 *)param_2[3]);
  return 1;
}


// ===== 0041aab4  FUN_0041aab4 =====

undefined * FUN_0041aab4(void)

{
  return &DAT_0077d850;
}


// ===== 0041aac0  FUN_0041aac0 =====

undefined * FUN_0041aac0(void)

{
  return &DAT_0077d900;
}


// ===== 0041aacc  FUN_0041aacc =====

undefined * FUN_0041aacc(void)

{
  return &DAT_0077da00;
}


// ===== 0041aad8  FUN_0041aad8 =====

undefined * FUN_0041aad8(void)

{
  return &DAT_0077dab0;
}


// ===== 0041aae4  FUN_0041aae4 =====

void FUN_0041aae4(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0041aaf0  FUN_0041aaf0 =====

void FUN_0041aaf0(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077d850);
  return;
}


// ===== 0041aafc  FUN_0041aafc =====

void FUN_0041aafc(void)

{
  FUN_0039a5f4(&DAT_0077d850);
  return;
}


// ===== 0041ab08  FUN_0041ab08 =====

void FUN_0041ab08(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077d850);
  return;
}


// ===== 0041ab14  FUN_0041ab14 =====

void FUN_0041ab14(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0041ab20  FUN_0041ab20 =====

void FUN_0041ab20(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077d900);
  return;
}


// ===== 0041ab2c  FUN_0041ab2c =====

void FUN_0041ab2c(void)

{
  FUN_0039a5f4(&DAT_0077d900);
  return;
}


// ===== 0041ab38  FUN_0041ab38 =====

void FUN_0041ab38(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077d900);
  return;
}


// ===== 0041ab44  FUN_0041ab44 =====

void FUN_0041ab44(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0041ab50  FUN_0041ab50 =====

void FUN_0041ab50(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077da00);
  return;
}


// ===== 0041ab5c  FUN_0041ab5c =====

void FUN_0041ab5c(void)

{
  FUN_0039a5f4(&DAT_0077da00);
  return;
}


// ===== 0041ab68  FUN_0041ab68 =====

void FUN_0041ab68(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077da00);
  return;
}


// ===== 0041ab74  FUN_0041ab74 =====

void FUN_0041ab74(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0041ab80  FUN_0041ab80 =====

void FUN_0041ab80(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077dab0);
  return;
}


// ===== 0041ab8c  FUN_0041ab8c =====

void FUN_0041ab8c(void)

{
  FUN_0039a5f4(&DAT_0077dab0);
  return;
}


// ===== 0041ab98  FUN_0041ab98 =====

void FUN_0041ab98(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077dab0);
  return;
}


// ===== 0041aba4  FUN_0041aba4 =====

undefined8 FUN_0041aba4(undefined8 param_1,long *param_2,undefined8 param_3,int param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined1 auStack_e0 [128];
  
  if ((*param_2 == 0) ||
     ((((iVar4 = FUN_0037b9f8(param_3,"%*sadmissionAuthority:\n",param_4,&DAT_001c717f), 0 < iVar4
        && (iVar4 = FUN_0037b9f8(param_3,"%*s  ",param_4,&DAT_001c717f), 0 < iVar4)) &&
       (iVar4 = FUN_00420d30(param_3,*param_2), 0 < iVar4)) &&
      (iVar4 = FUN_0037b9f8(param_3,&DAT_001e2980), 0 < iVar4)))) {
    iVar4 = FUN_0040caf8(param_2[1]);
    if (iVar4 < 1) {
      uVar10 = 1;
    }
    else {
      iVar4 = 0;
      do {
        plVar8 = (long *)FUN_0040cb0c(param_2[1],iVar4);
        iVar4 = iVar4 + 1;
        iVar5 = FUN_0037b9f8(param_3,"%*sEntry %0d:\n",param_4,&DAT_001c717f,iVar4);
        if ((iVar5 < 1) ||
           (((*plVar8 != 0 &&
             (((iVar5 = FUN_0037b9f8(param_3,"%*s  admissionAuthority:\n",param_4,&DAT_001c717f),
               iVar5 < 1 ||
               (iVar5 = FUN_0037b9f8(param_3,"%*s    ",param_4,&DAT_001c717f), iVar5 < 1)) ||
              ((iVar5 = FUN_00420d30(param_3,*plVar8), iVar5 < 1 ||
               (iVar5 = FUN_0037b9f8(param_3,&DAT_001e2980), iVar5 < 1)))))) ||
            ((plVar8[1] != 0 && (iVar5 = FUN_0041b2b0(plVar8[1],param_3,param_4), iVar5 < 1))))))
        goto LAB_0041afb0;
        iVar5 = FUN_0040caf8(plVar8[2]);
        if (0 < iVar5) {
          iVar5 = 0;
          do {
            plVar9 = (long *)FUN_0040cb0c(plVar8[2],iVar5);
            iVar5 = iVar5 + 1;
            iVar6 = FUN_0037b9f8(param_3,"%*s  Profession Info Entry %0d:\n",param_4,&DAT_001c717f,
                                 iVar5);
            if (((iVar6 < 1) ||
                ((plVar9[3] != 0 &&
                 (((iVar6 = FUN_0037b9f8(param_3,"%*s    registrationNumber: ",param_4,&DAT_001c717f
                                        ), iVar6 < 1 ||
                   (iVar6 = FUN_0041b6bc(param_3,plVar9[3]), iVar6 < 1)) ||
                  (iVar6 = FUN_0037b9f8(param_3,&DAT_001e2980), iVar6 < 1)))))) ||
               ((*plVar9 != 0 && (iVar6 = FUN_0041b2b0(*plVar9,param_3,param_4 + 2), iVar6 < 1))))
            goto LAB_0041afb0;
            if (plVar9[1] != 0) {
              iVar6 = FUN_0037b9f8(param_3,"%*s    Info Entries:\n",param_4,&DAT_001c717f);
              if (iVar6 < 1) goto LAB_0041afb0;
              iVar6 = FUN_0040caf8(plVar9[1]);
              if (0 < iVar6) {
                iVar6 = 0;
                do {
                  uVar10 = FUN_0040cb0c(plVar9[1],iVar6);
                  iVar7 = FUN_0037b9f8(param_3,"%*s      ",param_4,&DAT_001c717f);
                  if (((iVar7 < 1) || (iVar7 = FUN_0041b6bc(param_3,uVar10), iVar7 < 1)) ||
                     (iVar7 = FUN_0037b9f8(param_3,&DAT_001e2980), iVar7 < 1)) goto LAB_0041afb0;
                  iVar6 = iVar6 + 1;
                  iVar7 = FUN_0040caf8(plVar9[1]);
                } while (iVar6 < iVar7);
              }
            }
            if (plVar9[2] != 0) {
              iVar6 = FUN_0037b9f8(param_3,"%*s    Profession OIDs:\n",param_4,&DAT_001c717f);
              if (iVar6 < 1) goto LAB_0041afb0;
              iVar6 = FUN_0040caf8(plVar9[2]);
              if (0 < iVar6) {
                iVar6 = 0;
                do {
                  uVar10 = FUN_0040cb0c(plVar9[2],iVar6);
                  FUN_003dd5b4();
                  puVar11 = (undefined1 *)FUN_003dce60();
                  FUN_003dd260(auStack_e0,0x80,uVar10,1);
                  puVar1 = &DAT_001c717f;
                  if (puVar11 != (undefined1 *)0x0) {
                    puVar1 = &DAT_001d4331;
                  }
                  puVar2 = &DAT_001c717f;
                  puVar3 = &DAT_001c717f;
                  if (puVar11 != (undefined1 *)0x0) {
                    puVar2 = &DAT_001d047f;
                    puVar3 = puVar11;
                  }
                  iVar7 = FUN_0037b9f8(param_3,"%*s      %s%s%s%s\n",param_4,&DAT_001c717f,puVar3,
                                       puVar1,auStack_e0,puVar2);
                  if (iVar7 < 1) goto LAB_0041afb0;
                  iVar6 = iVar6 + 1;
                  iVar7 = FUN_0040caf8(plVar9[2]);
                } while (iVar6 < iVar7);
              }
            }
            iVar6 = FUN_0040caf8(plVar8[2]);
          } while (iVar5 < iVar6);
        }
        iVar5 = FUN_0040caf8(param_2[1]);
        uVar10 = 1;
      } while (iVar4 < iVar5);
    }
  }
  else {
LAB_0041afb0:
    uVar10 = 0;
  }
  return uVar10;
}


// ===== 0041afdc  FUN_0041afdc =====

undefined8 FUN_0041afdc(undefined8 *param_1)

{
  return *param_1;
}


// ===== 0041afe4  FUN_0041afe4 =====

void FUN_0041afe4(undefined8 *param_1,undefined8 param_2)

{
  FUN_0039a0f4(*param_1);
  *param_1 = param_2;
  return;
}


// ===== 0041b010  FUN_0041b010 =====

undefined8 FUN_0041b010(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


// ===== 0041b018  FUN_0041b018 =====

void FUN_0041b018(long param_1,undefined8 param_2)

{
  thunk_FUN_0038eddc(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}


// ===== 0041b044  FUN_0041b044 =====

undefined8 FUN_0041b044(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 0041b04c  FUN_0041b04c =====

void FUN_0041b04c(long param_1,undefined8 param_2)

{
  thunk_FUN_0038eddc(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}


// ===== 0041b078  FUN_0041b078 =====

undefined8 FUN_0041b078(undefined8 *param_1)

{
  return *param_1;
}


// ===== 0041b080  FUN_0041b080 =====

void FUN_0041b080(undefined8 *param_1,undefined8 param_2)

{
  FUN_0041874c(*param_1);
  *param_1 = param_2;
  return;
}


// ===== 0041b0ac  FUN_0041b0ac =====

undefined8 FUN_0041b0ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


// ===== 0041b0b4  FUN_0041b0b4 =====

void FUN_0041b0b4(long param_1,undefined8 param_2)

{
  FUN_0040ca6c(*(undefined8 *)(param_1 + 8),PTR_FUN_007a1c50);
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}


// ===== 0041b0e8  FUN_0041b0e8 =====

undefined8 FUN_0041b0e8(undefined8 *param_1)

{
  return *param_1;
}


// ===== 0041b0f0  FUN_0041b0f0 =====

void FUN_0041b0f0(undefined8 *param_1,undefined8 param_2)

{
  FUN_0041874c(*param_1);
  *param_1 = param_2;
  return;
}


// ===== 0041b11c  FUN_0041b11c =====

undefined8 FUN_0041b11c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


// ===== 0041b124  FUN_0041b124 =====

void FUN_0041b124(long param_1,undefined8 param_2)

{
  FUN_0038c75c(*(undefined8 *)(param_1 + 8),&DAT_0077d850);
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}


// ===== 0041b158  FUN_0041b158 =====

undefined8 FUN_0041b158(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 0041b160  FUN_0041b160 =====

void FUN_0041b160(long param_1,undefined8 param_2)

{
  FUN_0040ca6c(*(undefined8 *)(param_1 + 0x10),PTR_FUN_007a1c48);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}


// ===== 0041b194  FUN_0041b194 =====

undefined8 FUN_0041b194(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


// ===== 0041b19c  FUN_0041b19c =====

void FUN_0041b19c(long param_1,undefined8 param_2)

{
  thunk_FUN_0038eddc(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}


// ===== 0041b1c8  FUN_0041b1c8 =====

undefined8 FUN_0041b1c8(undefined8 *param_1)

{
  return *param_1;
}


// ===== 0041b1d0  FUN_0041b1d0 =====

void FUN_0041b1d0(undefined8 *param_1,undefined8 param_2)

{
  FUN_0038c75c(*param_1,&DAT_0077d850);
  *param_1 = param_2;
  return;
}


// ===== 0041b204  FUN_0041b204 =====

undefined8 FUN_0041b204(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


// ===== 0041b20c  FUN_0041b20c =====

void FUN_0041b20c(long param_1,undefined8 param_2)

{
  FUN_0040ca6c(*(undefined8 *)(param_1 + 8),PTR_FUN_007a19b0);
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}


// ===== 0041b240  FUN_0041b240 =====

undefined8 FUN_0041b240(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 0041b248  FUN_0041b248 =====

void FUN_0041b248(long param_1,undefined8 param_2)

{
  FUN_0040ca6c(*(undefined8 *)(param_1 + 0x10),PTR_FUN_007a19a8);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}


// ===== 0041b27c  FUN_0041b27c =====

undefined8 FUN_0041b27c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 0041b284  FUN_0041b284 =====

void FUN_0041b284(long param_1,undefined8 param_2)

{
  thunk_FUN_0038eddc(*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}


// ===== 0041b2b0  FUN_0041b2b0 =====

undefined8 FUN_0041b2b0(long *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 auStack_c0 [128];
  
  if (((*param_1 == 0) && (param_1[2] == 0)) && (param_1[1] == 0)) {
    return 0;
  }
  iVar4 = FUN_0037b9f8(param_2,"%*snamingAuthority: ",param_3,&DAT_001c717f);
  if (iVar4 < 1) {
    return 0;
  }
  if (*param_1 != 0) {
    FUN_003dd5b4();
    puVar5 = (undefined1 *)FUN_003dce60();
    iVar4 = FUN_0037b9f8(param_2,"%*s  admissionAuthorityId: ",param_3,&DAT_001c717f);
    if (iVar4 < 1) {
      return 0;
    }
    FUN_003dd260(auStack_c0,0x80,*param_1,1);
    puVar1 = &DAT_001c717f;
    if (puVar5 != (undefined1 *)0x0) {
      puVar1 = &DAT_001d4331;
    }
    puVar2 = &DAT_001c717f;
    puVar3 = &DAT_001c717f;
    if (puVar5 != (undefined1 *)0x0) {
      puVar2 = &DAT_001d047f;
      puVar3 = puVar5;
    }
    iVar4 = FUN_0037b9f8(param_2,"%s%s%s%s\n",puVar3,puVar1,auStack_c0,puVar2);
    if (iVar4 < 1) {
      return 0;
    }
  }
  if (((param_1[2] == 0) ||
      (((iVar4 = FUN_0037b9f8(param_2,"%*s  namingAuthorityText: ",param_3,&DAT_001c717f), 0 < iVar4
        && (iVar4 = FUN_0041b6bc(param_2,param_1[2]), 0 < iVar4)) &&
       (iVar4 = FUN_0037b9f8(param_2,&DAT_001e2980), 0 < iVar4)))) &&
     ((param_1[1] == 0 ||
      (((iVar4 = FUN_0037b9f8(param_2,"%*s  namingAuthorityUrl: ",param_3,&DAT_001c717f), 0 < iVar4
        && (iVar4 = FUN_0041b6bc(param_2,param_1[1]), 0 < iVar4)) &&
       (iVar4 = FUN_0037b9f8(param_2,&DAT_001e2980), 0 < iVar4)))))) {
    return 1;
  }
  return 0;
}


// ===== 0041b484  FUN_0041b484 =====

undefined4 FUN_0041b484(char *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  undefined4 uVar6;
  uint uVar7;
  
  if (param_1 == (char *)0x0) {
    return 0x13;
  }
  if (param_2 < 0) {
    sVar5 = strlen(param_1);
    param_2 = (int)sVar5;
    if (param_2 < 1) {
      return 0x13;
    }
  }
  else if (param_2 < 1) {
    return 0x13;
  }
  bVar3 = false;
  bVar2 = false;
  uVar7 = param_2 + 1;
  do {
    cVar1 = *param_1;
    iVar4 = FUN_003c475c(cVar1,0x800);
    uVar7 = uVar7 - 1;
    if (iVar4 == 0) {
      bVar2 = true;
    }
    if (cVar1 < '\0') {
      bVar3 = true;
    }
    param_1 = param_1 + 1;
  } while (1 < uVar7);
  uVar6 = 0x13;
  if (bVar2) {
    uVar6 = 0x16;
  }
  if (bVar3) {
    uVar6 = 0x14;
  }
  return uVar6;
}


// ===== 0041b548  FUN_0041b548 =====

undefined8 FUN_0041b548(uint *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  size_t sVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  char *pcVar12;
  
  if ((param_1[1] != 0x1c) || (uVar8 = *param_1, (uVar8 & 3) != 0)) {
    return 0;
  }
  puVar9 = *(undefined1 **)(param_1 + 2);
  if (0 < (int)uVar8) {
    lVar11 = 0;
    do {
      pcVar12 = puVar9 + lVar11;
      if (((*pcVar12 != '\0') || (pcVar12[1] != '\0')) || (pcVar12[2] != '\0')) {
        return 0;
      }
      lVar11 = lVar11 + 4;
    } while ((int)lVar11 < (int)uVar8);
    if (3 < (int)uVar8) {
      lVar11 = 3;
      puVar10 = puVar9;
      do {
        puVar1 = (undefined1 *)(*(long *)(param_1 + 2) + lVar11);
        lVar11 = lVar11 + 4;
        puVar9 = puVar10 + 1;
        *puVar10 = *puVar1;
        puVar10 = puVar9;
      } while (lVar11 < (int)*param_1);
    }
  }
  *puVar9 = 0;
  uVar2 = *param_1;
  pcVar12 = *(char **)(param_1 + 2);
  uVar8 = uVar2 + 3;
  if (-1 < (int)uVar2) {
    uVar8 = uVar2;
  }
  uVar8 = (int)uVar8 >> 2;
  *param_1 = uVar8;
  if (pcVar12 != (char *)0x0) {
    if (uVar2 == 0xfffffffc || (int)(uVar2 + 4) < 0 != SCARRY4(uVar2,4)) {
      sVar7 = strlen(pcVar12);
      uVar8 = (uint)sVar7;
    }
    if (0 < (int)uVar8) {
      bVar5 = false;
      bVar4 = false;
      uVar8 = uVar8 + 1;
      do {
        cVar3 = *pcVar12;
        iVar6 = FUN_003c475c(cVar3,0x800);
        uVar8 = uVar8 - 1;
        if (iVar6 == 0) {
          bVar4 = true;
        }
        if (cVar3 < '\0') {
          bVar5 = true;
        }
        pcVar12 = pcVar12 + 1;
      } while (1 < uVar8);
      uVar8 = 0x13;
      if (bVar4) {
        uVar8 = 0x16;
      }
      if (bVar5) {
        uVar8 = 0x14;
      }
      goto LAB_0041b6a0;
    }
  }
  uVar8 = 0x13;
LAB_0041b6a0:
  param_1[1] = uVar8;
  return 1;
}


// ===== 0041b6bc  FUN_0041b6bc =====

undefined8 FUN_0041b6bc(undefined8 param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  byte local_90 [80];
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  iVar4 = *param_2;
  if (0 < iVar4) {
    lVar7 = *(long *)(param_2 + 2);
    lVar6 = 0;
    iVar5 = 0;
    do {
      bVar2 = *(byte *)(lVar7 + lVar6);
      if (bVar2 < 0x7f) {
        bVar8 = bVar2;
        if (bVar2 != 10) {
          bVar8 = 0x2e;
        }
        bVar1 = bVar2;
        if (bVar2 != 0xd) {
          bVar1 = bVar8;
        }
        if (bVar2 < 0x20) {
          bVar2 = bVar1;
        }
        local_90[iVar5] = bVar2;
      }
      else {
        local_90[iVar5] = 0x2e;
      }
      bVar3 = 0x4e < iVar5;
      iVar5 = iVar5 + 1;
      if (bVar3) {
        iVar4 = FUN_0037df4c(param_1,local_90);
        if (iVar4 < 1) {
          return 0;
        }
        iVar4 = *param_2;
        iVar5 = 0;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar4);
    if ((0 < iVar5) && (iVar4 = FUN_0037df4c(param_1,local_90), iVar4 < 1)) {
      return 0;
    }
  }
  return 1;
}


// ===== 0041b7dc  FUN_0041b7dc =====

void FUN_0041b7dc(void)

{
  FUN_003ca2f4(&DAT_001b77b8,"crypto/x509/v3_ind_iss.c",0x20);
  return;
}


// ===== 0041b7f4  thunk_FUN_0038a5f8 =====

void thunk_FUN_0038a5f8(void)

{
  FUN_0039a5f4(&DAT_00765390);
  return;
}


// ===== 0041b7f8  FUN_0041b7f8 =====

undefined8 FUN_0041b7f8(void)

{
  return 1;
}


// ===== 0041b800  thunk_FUN_0038a5f8 =====

void thunk_FUN_0038a5f8(void)

{
  FUN_0039a5f4(&DAT_00765390);
  return;
}


// ===== 0041b804  FUN_0041b804 =====

void FUN_0041b804(void)

{
  FUN_003ca2f4(&DAT_001b77b8,"crypto/x509/v3_group_ac.c",0x20);
  return;
}


// ===== 0041b81c  thunk_FUN_0038a5f8 =====

void thunk_FUN_0038a5f8(void)

{
  FUN_0039a5f4(&DAT_00765390);
  return;
}


// ===== 0041b820  FUN_0041b820 =====

undefined8 FUN_0041b820(void)

{
  return 1;
}


// ===== 0041b828  thunk_FUN_0038a5f8 =====

void thunk_FUN_0038a5f8(void)

{
  FUN_0039a5f4(&DAT_00765390);
  return;
}


// ===== 0041b82c  FUN_0041b82c =====

undefined * FUN_0041b82c(void)

{
  return &DAT_0077dd88;
}


// ===== 0041b838  FUN_0041b838 =====

long * FUN_0041b838(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  char *__s1;
  undefined1 auStack_78 [8];
  char *local_70;
  undefined8 uStack_68;
  
  plVar4 = (long *)FUN_0039a5f4(&DAT_0077dd88);
  if (plVar4 == (long *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_ncons.c",0x8b,"v2i_NAME_CONSTRAINTS");
    uVar7 = 0x8000d;
LAB_0041b9c0:
    FUN_00379a5c(0x22,uVar7,0);
    puVar6 = (undefined8 *)0x0;
LAB_0041ba5c:
    FUN_0038c75c(plVar4,&DAT_0077dd88);
    FUN_0038c75c(puVar6,&DAT_0077dcd8);
    plVar4 = (long *)0x0;
  }
  else {
    iVar2 = FUN_0040caf8(param_3);
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        lVar5 = FUN_0040cb0c(param_3,iVar2);
        __s1 = *(char **)(lVar5 + 8);
        iVar3 = strncmp(__s1,"permitted",9);
        if ((iVar3 == 0) && (__s1[9] != '\0')) {
          lVar8 = 10;
          plVar9 = plVar4;
        }
        else {
          iVar3 = strncmp(__s1,"excluded",8);
          if ((iVar3 != 0) || (__s1[8] == '\0')) {
            FUN_00379868();
            FUN_0037995c("crypto/x509/v3_ncons.c",0x97,"v2i_NAME_CONSTRAINTS");
            uVar7 = 0x8f;
            goto LAB_0041b9c0;
          }
          lVar8 = 9;
          plVar9 = plVar4 + 1;
        }
        uStack_68 = *(undefined8 *)(lVar5 + 0x10);
        local_70 = __s1 + lVar8;
        puVar6 = (undefined8 *)FUN_0039a5f4(&DAT_0077dcd8);
        if (puVar6 == (undefined8 *)0x0) {
          FUN_00379868();
          FUN_0037995c("crypto/x509/v3_ncons.c",0x9d,"v2i_NAME_CONSTRAINTS");
          uVar1 = 0x8000d;
LAB_0041ba54:
          FUN_00379a5c(0x22,uVar1,0);
          goto LAB_0041ba5c;
        }
        lVar5 = FUN_004210a0(*puVar6,param_1,param_2,auStack_78,1);
        if (lVar5 == 0) {
          FUN_00379868();
          FUN_0037995c("crypto/x509/v3_ncons.c",0xa1,"v2i_NAME_CONSTRAINTS");
          uVar1 = 0x80022;
          goto LAB_0041ba54;
        }
        lVar5 = *plVar9;
        if (lVar5 == 0) {
          lVar5 = FUN_0040bf0c();
          *plVar9 = lVar5;
          if (lVar5 != 0) goto LAB_0041b94c;
LAB_0041b9d0:
          FUN_00379868();
          FUN_0037995c("crypto/x509/v3_ncons.c",0xa7,"v2i_NAME_CONSTRAINTS");
          uVar1 = 0x8000f;
          goto LAB_0041ba54;
        }
LAB_0041b94c:
        iVar3 = FUN_0040c89c(lVar5,puVar6);
        if (iVar3 == 0) goto LAB_0041b9d0;
        iVar2 = iVar2 + 1;
        iVar3 = FUN_0040caf8(param_3);
      } while (iVar2 < iVar3);
    }
  }
  return plVar4;
}


// ===== 0041baa4  FUN_0041baa4 =====

undefined8 FUN_0041baa4(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_0041c324(*param_2,param_3,param_4,"Permitted");
  if ((*param_2 != 0) && (param_2[1] != 0)) {
    FUN_0037e608(param_3,&DAT_001e2980);
  }
  FUN_0041c324(param_2[1],param_3,param_4,"Excluded");
  return 1;
}


// ===== 0041bb24  FUN_0041bb24 =====

undefined * FUN_0041bb24(void)

{
  return &DAT_0077dcd8;
}


// ===== 0041bb30  FUN_0041bb30 =====

void FUN_0041bb30(void)

{
  FUN_0039a5f4(&DAT_0077dcd8);
  return;
}


// ===== 0041bb3c  FUN_0041bb3c =====

void FUN_0041bb3c(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077dcd8);
  return;
}


// ===== 0041bb48  FUN_0041bb48 =====

void FUN_0041bb48(void)

{
  FUN_0039a5f4(&DAT_0077dd88);
  return;
}


// ===== 0041bb54  FUN_0041bb54 =====

void FUN_0041bb54(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077dd88);
  return;
}


// ===== 0041bb60  FUN_0041bb60 =====

undefined8 FUN_0041bb60(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 local_50 [2];
  long local_48;
  
  lVar7 = FUN_00426ca0();
  uVar3 = FUN_00432df4();
  uVar4 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x118));
  uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
  uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
  uVar1 = uVar3 + uVar4;
  if (SCARRY4(uVar3,uVar4)) {
    uVar8 = 1;
  }
  else {
    uVar3 = FUN_0040caf8(*param_2);
    uVar4 = FUN_0040caf8(param_2[1]);
    uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
    uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
    if (SCARRY4(uVar3,uVar4)) {
      return 1;
    }
    if (0 < (int)uVar1) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = 0x100000 / uVar1;
      }
      if ((int)uVar2 < (int)(uVar3 + uVar4)) {
        return 1;
      }
    }
    iVar5 = FUN_00432df4(lVar7);
    if (iVar5 < 1) {
LAB_0041bcac:
      iVar5 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x118));
      if (iVar5 < 1) {
        return 0;
      }
      iVar5 = 0;
      do {
        uVar8 = FUN_0040cb0c(*(undefined8 *)(param_1 + 0x118),iVar5);
        uVar8 = FUN_0041bd2c(uVar8,param_2);
        if ((int)uVar8 != 0) {
          return uVar8;
        }
        iVar5 = iVar5 + 1;
        iVar6 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x118));
        uVar8 = 0;
      } while (iVar5 < iVar6);
    }
    else {
      local_50[0] = 4;
      local_48 = lVar7;
      uVar8 = FUN_0041bd2c(local_50,param_2);
      if ((int)uVar8 == 0) {
        iVar5 = -1;
        local_50[0] = 1;
        do {
          iVar5 = FUN_00432e14(lVar7,0x30,iVar5);
          if (iVar5 == -1) goto LAB_0041bcac;
          FUN_00432da4(lVar7,iVar5);
          local_48 = FUN_00432d98();
          if (*(int *)(local_48 + 4) != 0x16) {
            return 0x35;
          }
          uVar8 = FUN_0041bd2c(local_50,param_2);
        } while ((int)uVar8 == 0);
      }
    }
  }
  return uVar8;
}


// ===== 0041bd2c  FUN_0041bd2c =====

undefined8 FUN_0041bd2c(uint *param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = *param_1;
  if (uVar7 == 0) {
    iVar2 = FUN_003dd5b4(**(undefined8 **)(param_1 + 2));
    uVar7 = (uint)(iVar2 == 0x4b8);
    iVar2 = FUN_0040caf8(*param_2);
  }
  else {
    iVar2 = FUN_0040caf8(*param_2);
  }
  if (0 < iVar2) {
    uVar8 = 0;
    iVar2 = 0;
    if (uVar7 == 0) {
      do {
        puVar4 = (undefined8 *)FUN_0040cb0c(*param_2,iVar2);
        if ((*(int *)*puVar4 == 0) &&
           (iVar3 = FUN_003de61c(**(undefined8 **)(param_1 + 2),
                                 **(undefined8 **)((int *)*puVar4 + 2)), iVar3 == 0)) {
          bVar1 = puVar4[2] == 0;
          if (puVar4[1] != 0) {
            lVar5 = FUN_0038e040(puVar4[1],0);
            if ((lVar5 == 0) || (iVar3 = FUN_0038f448(), iVar3 == 0)) {
              bVar1 = false;
            }
            FUN_0038f4f4(lVar5);
          }
          if (!bVar1) {
            return 0x31;
          }
          if (uVar8 != 2) {
            uVar6 = FUN_0041c5d8(0,param_1,*puVar4);
            if ((int)uVar6 == 0) {
              uVar8 = 2;
            }
            else {
              if (uVar8 < 2) {
                uVar8 = 1;
              }
              if ((int)uVar6 != 0x2f) {
                return uVar6;
              }
            }
          }
        }
        iVar2 = iVar2 + 1;
        iVar3 = FUN_0040caf8(*param_2);
      } while (iVar2 < iVar3);
    }
    else {
      do {
        puVar4 = (undefined8 *)FUN_0040cb0c(*param_2,iVar2);
        if (uVar7 == *(uint *)*puVar4) {
          bVar1 = puVar4[2] == 0;
          if (puVar4[1] != 0) {
            lVar5 = FUN_0038e040(puVar4[1],0);
            if ((lVar5 == 0) || (iVar3 = FUN_0038f448(), iVar3 == 0)) {
              bVar1 = false;
            }
            FUN_0038f4f4(lVar5);
          }
          if (!bVar1) {
            return 0x31;
          }
          if (uVar8 != 2) {
            uVar6 = FUN_0041c5d8(uVar7,param_1,*puVar4);
            if ((int)uVar6 == 0) {
              uVar8 = 2;
            }
            else {
              if (uVar8 < 2) {
                uVar8 = 1;
              }
              if ((int)uVar6 != 0x2f) {
                return uVar6;
              }
            }
          }
        }
        iVar2 = iVar2 + 1;
        iVar3 = FUN_0040caf8(*param_2);
      } while (iVar2 < iVar3);
    }
    if (uVar8 == 1) {
      return 0x2f;
    }
  }
  iVar2 = FUN_0040caf8(param_2[1]);
  if (0 < iVar2) {
    if (uVar7 == 0) {
      do {
        puVar4 = (undefined8 *)FUN_0040cb0c(param_2[1],uVar7);
        if ((*(int *)*puVar4 == 0) &&
           (iVar2 = FUN_003de61c(**(undefined8 **)(param_1 + 2),
                                 **(undefined8 **)((int *)*puVar4 + 2)), iVar2 == 0)) {
          bVar1 = puVar4[2] == 0;
          if (puVar4[1] != 0) {
            lVar5 = FUN_0038e040(puVar4[1],0);
            if ((lVar5 == 0) || (iVar2 = FUN_0038f448(), iVar2 == 0)) {
              bVar1 = false;
            }
            FUN_0038f4f4(lVar5);
          }
          if (!bVar1) {
            return 0x31;
          }
          uVar6 = FUN_0041c5d8(0,param_1,*puVar4);
          if ((int)uVar6 != 0x2f) goto LAB_0041c074;
        }
        uVar7 = uVar7 + 1;
        iVar2 = FUN_0040caf8(param_2[1]);
      } while ((int)uVar7 < iVar2);
    }
    else {
      iVar2 = 0;
      do {
        puVar4 = (undefined8 *)FUN_0040cb0c(param_2[1],iVar2);
        if (uVar7 == *(uint *)*puVar4) {
          bVar1 = puVar4[2] == 0;
          if (puVar4[1] != 0) {
            lVar5 = FUN_0038e040(puVar4[1],0);
            if ((lVar5 == 0) || (iVar3 = FUN_0038f448(), iVar3 == 0)) {
              bVar1 = false;
            }
            FUN_0038f4f4(lVar5);
          }
          if (!bVar1) {
            return 0x31;
          }
          uVar6 = FUN_0041c5d8(uVar7,param_1,*puVar4);
          if ((int)uVar6 != 0x2f) {
LAB_0041c074:
            if ((int)uVar6 != 0) {
              return uVar6;
            }
            return 0x30;
          }
        }
        iVar2 = iVar2 + 1;
        iVar3 = FUN_0040caf8(param_2[1]);
      } while (iVar2 < iVar3);
    }
  }
  return 0;
}


// ===== 0041c0e4  FUN_0041c0e4 =====

/* WARNING: Type propagation algorithm not settling */

int FUN_0041c0e4(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  bool bVar2;
  ulong __n;
  byte *pbVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  void *pvVar10;
  ulong uVar11;
  uint uVar12;
  undefined4 local_78 [2];
  uint *local_70;
  uint local_68;
  undefined4 local_64;
  byte *local_60;
  undefined8 local_58;
  byte *local_38;
  
  uVar8 = FUN_00426ca0();
  local_64 = 0x16;
  local_70 = &local_68;
  local_58 = 0;
  local_78[0] = 2;
  iVar5 = FUN_00432e14(uVar8,0xd,0xffffffff);
  do {
    if (iVar5 == -1) {
      return 0;
    }
    FUN_00432da4(uVar8,iVar5);
    uVar9 = FUN_00432d98();
    uVar6 = FUN_003e2e2c(&local_38,uVar9);
    pbVar3 = local_38;
    if ((int)uVar6 < 0) {
      return 0x11;
    }
    while ((__n = (ulong)uVar6, uVar6 != 0 && (local_38[__n - 1] == 0))) {
      uVar6 = uVar6 - 1;
    }
    pvVar10 = memchr(local_38,0,__n);
    if (pvVar10 != (void *)0x0) {
      FUN_003c86b4(pbVar3,"crypto/x509/v3_ncons.c",0x16b);
      return 0x35;
    }
    if ((int)uVar6 < 1) {
LAB_0041c27c:
      FUN_003c86b4(pbVar3,"crypto/x509/v3_ncons.c",0x19b);
    }
    else {
      bVar1 = *pbVar3;
      if (0x19 < (bVar1 & 0xffffffdf) - 0x41) {
        if ((uVar6 != 1) && (bVar1 == 0x5f || 0xfffffff5 < bVar1 - 0x3a)) goto LAB_0041c1e4;
        goto LAB_0041c27c;
      }
      if (uVar6 == 1) goto LAB_0041c27c;
LAB_0041c1e4:
      uVar11 = 1;
      bVar2 = true;
      do {
        while( true ) {
          bVar1 = pbVar3[uVar11];
          if (((0x19 < (bVar1 & 0xffffffdf) - 0x41) && (bVar1 != 0x5f)) &&
             (uVar12 = (uint)bVar1, 9 < uVar12 - 0x30)) break;
LAB_0041c1f4:
          uVar11 = uVar11 + 1;
          if (__n == uVar11) {
            if (bVar2) goto LAB_0041c27c;
            goto LAB_0041c2ac;
          }
        }
        if ((long)(ulong)(uVar6 - 1) <= (long)uVar11) goto LAB_0041c27c;
        if (uVar12 == 0x2d) goto LAB_0041c1f4;
        if (((uVar12 != 0x2e) || (pbVar3[uVar11 + 1] == 0x2e)) ||
           ((pbVar3[uVar11 + 1] == 0x2d || (pbVar3[uVar11 - 1] == 0x2d)))) goto LAB_0041c27c;
        bVar2 = false;
        bVar4 = __n - 1 != uVar11;
        uVar11 = uVar11 + 1;
      } while (bVar4);
LAB_0041c2ac:
      local_60 = pbVar3;
      local_68 = uVar6;
      iVar7 = FUN_0041bd2c(local_78,param_2);
      FUN_003c86b4(pbVar3,"crypto/x509/v3_ncons.c",0x1c5);
      if (iVar7 != 0) {
        return iVar7;
      }
    }
    iVar5 = FUN_00432e14(uVar8,0xd,iVar5);
  } while( true );
}


// ===== 0041c324  FUN_0041c324 =====

void FUN_0041c324(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  
  iVar2 = FUN_0040caf8();
  if (0 < iVar2) {
    FUN_0037b9f8(param_2,"%*s%s:\n",param_3,&DAT_001c717f,param_4);
  }
  iVar2 = FUN_0040caf8(param_1);
  if (0 < iVar2) {
    puVar4 = (undefined8 *)FUN_0040cb0c(param_1,0);
    FUN_0037b9f8(param_2,&DAT_001d8020,param_3 + 2,&DAT_001c717f);
    if (*(int *)*puVar4 == 7) {
      piVar7 = *(int **)((int *)*puVar4 + 2);
      iVar3 = *piVar7;
      iVar2 = iVar3;
      if (3 < iVar3) {
        iVar2 = 4;
      }
      if (0xf < iVar3) {
        iVar2 = 0x10;
      }
      lVar5 = FUN_004244fc(*(undefined8 *)(piVar7 + 2),iVar2);
      lVar6 = FUN_004244fc(*(long *)(piVar7 + 2) + (long)iVar2,iVar3 - iVar2);
      if ((lVar5 != 0) && (lVar6 != 0)) {
        FUN_0037b9f8(param_2,"IP:%s/%s",lVar5,lVar6);
      }
      FUN_003c86b4(lVar5,"crypto/x509/v3_ncons.c",0xe2);
      FUN_003c86b4(lVar6,"crypto/x509/v3_ncons.c",0xe3);
      iVar2 = FUN_0040caf8(param_1);
    }
    else {
      FUN_00420d30(param_2);
      iVar2 = FUN_0040caf8(param_1);
    }
    if (1 < iVar2) {
      iVar2 = 1;
      do {
        while( true ) {
          FUN_0037e608(param_2,&DAT_001e2980);
          puVar4 = (undefined8 *)FUN_0040cb0c(param_1,iVar2);
          FUN_0037b9f8(param_2,&DAT_001d8020,param_3 + 2,&DAT_001c717f);
          if (*(int *)*puVar4 != 7) break;
          piVar7 = *(int **)((int *)*puVar4 + 2);
          iVar1 = *piVar7;
          iVar3 = iVar1;
          if (3 < iVar1) {
            iVar3 = 4;
          }
          if (0xf < iVar1) {
            iVar3 = 0x10;
          }
          lVar5 = FUN_004244fc(*(undefined8 *)(piVar7 + 2),iVar3);
          lVar6 = FUN_004244fc(*(long *)(piVar7 + 2) + (long)iVar3,iVar1 - iVar3);
          if ((lVar5 != 0) && (lVar6 != 0)) {
            FUN_0037b9f8(param_2,"IP:%s/%s",lVar5,lVar6);
          }
          FUN_003c86b4(lVar5,"crypto/x509/v3_ncons.c",0xe2);
          FUN_003c86b4(lVar6,"crypto/x509/v3_ncons.c",0xe3);
          iVar2 = iVar2 + 1;
          iVar3 = FUN_0040caf8(param_1);
          if (iVar3 <= iVar2) {
            return;
          }
        }
        FUN_00420d30(param_2);
        iVar2 = iVar2 + 1;
        iVar3 = FUN_0040caf8(param_1);
      } while (iVar2 < iVar3);
    }
  }
  return;
}


// ===== 0041c5d8  FUN_0041c5d8 =====

/* WARNING: Type propagation algorithm not settling */

ulong FUN_0041c5d8(int param_1,int *param_2,long param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  void *pvVar9;
  void *pvVar10;
  size_t sVar11;
  size_t sVar12;
  uint uVar13;
  long lVar14;
  uint *puVar15;
  uint uVar16;
  byte *pbVar17;
  byte *pbVar18;
  long lVar19;
  char *pcVar20;
  int *piVar21;
  ulong uVar22;
  byte *pbVar23;
  char local_160 [256];
  
  iVar8 = *param_2;
  if (3 < iVar8) {
    if (iVar8 == 4) {
      lVar14 = *(long *)(param_2 + 2);
      lVar19 = *(long *)(param_3 + 8);
      if (((*(int *)(lVar14 + 8) != 0) && (iVar8 = FUN_0043b548(lVar14,0), iVar8 < 0)) ||
         ((*(int *)(lVar19 + 8) != 0 && (iVar8 = FUN_0043b548(lVar19,0), iVar8 < 0)))) {
        return 0x11;
      }
      if (*(int *)(lVar14 + 0x20) < *(int *)(lVar19 + 0x20)) {
        return 0x2f;
      }
      iVar8 = memcmp(*(void **)(lVar19 + 0x18),*(void **)(lVar14 + 0x18),
                     (long)*(int *)(lVar19 + 0x20));
    }
    else {
      if (iVar8 != 6) {
        if (iVar8 != 7) {
          return 0x33;
        }
        uVar7 = **(uint **)(param_2 + 2);
        iVar8 = **(int **)(param_3 + 8);
        lVar14 = *(long *)(*(int **)(param_3 + 8) + 2);
        if ((uVar7 != 0x10) && (uVar7 != 4)) {
          return 0x35;
        }
        if ((iVar8 != 0x20) && (iVar8 != 8)) {
          return 0x35;
        }
        if (iVar8 != uVar7 * 2) {
          return 0x2f;
        }
        uVar22 = 0;
        do {
          if (((*(byte *)(lVar14 + uVar22) ^
               *(byte *)(*(long *)(*(uint **)(param_2 + 2) + 2) + uVar22)) &
              *(byte *)(lVar14 + (ulong)uVar7 + uVar22)) != 0) {
            return 0x2f;
          }
          uVar22 = uVar22 + 1;
        } while (uVar7 != uVar22);
        return 0;
      }
      puVar15 = *(uint **)(param_3 + 8);
      iVar8 = **(int **)(param_2 + 2);
      sVar11 = (size_t)iVar8;
      pvVar9 = *(void **)(*(int **)(param_2 + 2) + 2);
      pcVar20 = *(char **)(puVar15 + 2);
      pvVar10 = memchr(pvVar9,0x3a,sVar11);
      if (pvVar10 == (void *)0x0) {
        return 0x35;
      }
      if ((long)((long)pvVar9 + (sVar11 - (long)pvVar10)) < 3) {
        return 0x35;
      }
      if (*(char *)((long)pvVar10 + 1) != '/') {
        return 0x35;
      }
      if (*(char *)((long)pvVar10 + 2) != '/') {
        return 0x35;
      }
      pvVar10 = (void *)((long)pvVar10 + 3);
      lVar14 = (long)pvVar9 - (long)pvVar10;
      pvVar9 = memchr(pvVar10,0x3a,lVar14 + sVar11);
      if ((pvVar9 == (void *)0x0) &&
         (pvVar9 = memchr(pvVar10,0x2f,lVar14 + sVar11), pvVar9 == (void *)0x0)) {
        uVar7 = iVar8 + (int)lVar14;
      }
      else {
        uVar7 = (int)pvVar9 - (int)pvVar10;
      }
      if (uVar7 == 0) {
        return 0x35;
      }
      uVar16 = *puVar15;
      if ((0 < (int)uVar16) && (*pcVar20 == '.')) {
        if ((int)uVar7 <= (int)uVar16) {
          return 0x2f;
        }
        uVar22 = FUN_0041cc54((long)pvVar10 + ((ulong)uVar7 - (ulong)uVar16),pcVar20);
        if ((int)uVar22 == 0) {
          return uVar22;
        }
        return 0x2f;
      }
      if (uVar16 != uVar7) {
        return 0x2f;
      }
      iVar8 = FUN_0041cc54(pvVar10,pcVar20,(long)(int)uVar7);
    }
    uVar7 = 0;
    if (iVar8 != 0) {
      uVar7 = 0x2f;
    }
    return (ulong)uVar7;
  }
  if (iVar8 == 0) {
    if (param_1 != 1) {
      return 0x33;
    }
    uVar7 = **(uint **)(param_3 + 8);
    piVar21 = *(int **)(*(long *)(param_2 + 2) + 8);
    pvVar10 = *(void **)(*(uint **)(param_3 + 8) + 2);
    if ((0 < (int)uVar7) && (pvVar9 = memchr(pvVar10,0,(ulong)uVar7), pvVar9 != (void *)0x0)) {
      return 0x35;
    }
    pcVar20 = (char *)FUN_003ca354(pvVar10,(long)(int)uVar7,"crypto/x509/v3_ncons.c",0x295);
    if (pcVar20 == (char *)0x0) {
      return 0x11;
    }
    if (*piVar21 == 0xc) {
      puVar15 = *(uint **)(piVar21 + 2);
      uVar7 = *puVar15;
      lVar14 = *(long *)(puVar15 + 2);
      if ((int)uVar7 < 1) {
        if (uVar7 != 0) {
LAB_0041cb08:
          lVar19 = lVar14 + (int)uVar7;
          if (lVar19 != 1) {
            if (*pcVar20 == '.') {
              local_160[0] = *pcVar20;
              iVar8 = FUN_0041cf50(pcVar20,(ulong)local_160 | 1,0xff);
              if (iVar8 < 1) {
                uVar22 = 1;
              }
              else {
                uVar7 = *puVar15;
                sVar11 = strlen(local_160);
                lVar19 = (long)(int)uVar7 - sVar11;
                if (((ulong)(long)(int)uVar7 < sVar11 || lVar19 == 0) ||
                   (iVar8 = FUN_0041cc54(local_160,lVar14 + lVar19,sVar11), iVar8 != 0)) {
                  uVar22 = 0x2f;
                }
                else {
                  uVar22 = 0;
                }
              }
            }
            else {
              iVar8 = FUN_0041cf50(pcVar20,local_160,0x100);
              if (iVar8 < 1) {
                uVar22 = 1;
              }
              else {
                sVar11 = (*(long *)(puVar15 + 2) - lVar19) + (long)(int)*puVar15;
                sVar12 = strlen(local_160);
                if ((sVar11 == sVar12) &&
                   (iVar8 = FUN_0041cc54(local_160,lVar19,sVar11), iVar8 == 0)) {
                  uVar22 = 0;
                }
                else {
                  uVar22 = 0x2f;
                }
              }
            }
            goto LAB_0041cb74;
          }
        }
      }
      else {
        do {
          if (*(char *)(lVar14 + -1 + (ulong)uVar7) == '@') goto LAB_0041cb08;
          uVar16 = uVar7 - 1;
          bVar1 = 0 < (int)uVar7;
          uVar7 = uVar16;
        } while (uVar16 != 0 && bVar1);
      }
    }
    uVar22 = 0x35;
LAB_0041cb74:
    FUN_003c86b4(pcVar20,"crypto/x509/v3_ncons.c",0x2c7);
    return uVar22;
  }
  if (iVar8 != 1) {
    if (iVar8 != 2) {
      return 0x33;
    }
    iVar8 = **(int **)(param_3 + 8);
    lVar14 = (long)iVar8;
    if (iVar8 == 0) {
      return 0;
    }
    iVar3 = **(int **)(param_2 + 2);
    if (iVar3 < iVar8) {
      return 0x2f;
    }
    pbVar17 = *(byte **)(*(int **)(param_3 + 8) + 2);
    pbVar18 = *(byte **)(*(int **)(param_2 + 2) + 2);
    if (((iVar8 < iVar3) && (pbVar18 = pbVar18 + (iVar3 - iVar8), *pbVar17 != 0x2e)) &&
       (pbVar18[-1] != 0x2e)) {
      return 0x2f;
    }
    do {
      bVar4 = *pbVar17;
      bVar5 = *pbVar18;
      if ((uint)bVar4 != (uint)bVar5) {
        bVar2 = bVar4 | 0x20;
        if (0x19 < bVar4 - 0x41) {
          bVar2 = bVar4;
        }
        bVar4 = bVar5 | 0x20;
        if (0x19 < bVar5 - 0x41) {
          bVar4 = bVar5;
        }
        if (bVar2 != bVar4) {
          return 0x2f;
        }
      }
      lVar14 = lVar14 + -1;
      pbVar17 = pbVar17 + 1;
      pbVar18 = pbVar18 + 1;
      if (lVar14 == 0) {
        return 0;
      }
    } while( true );
  }
  puVar15 = *(uint **)(param_2 + 2);
  uVar7 = **(uint **)(param_3 + 8);
  uVar22 = (ulong)uVar7;
  pbVar18 = *(byte **)(*(uint **)(param_3 + 8) + 2);
  uVar16 = uVar7;
  if ((int)uVar7 < 1) {
    if (uVar7 != 0) {
LAB_0041c950:
      pbVar17 = pbVar18 + (long)(int)uVar16 + -1;
      uVar16 = *puVar15;
      pcVar20 = *(char **)(puVar15 + 2);
      goto joined_r0x0041c964;
    }
  }
  else {
    do {
      if (pbVar18[(ulong)uVar16 - 1] == 0x40) goto LAB_0041c950;
      uVar13 = uVar16 - 1;
      bVar1 = 0 < (int)uVar16;
      uVar16 = uVar13;
    } while (uVar13 != 0 && bVar1);
  }
  pbVar17 = (byte *)0x0;
  uVar16 = *puVar15;
  pcVar20 = *(char **)(puVar15 + 2);
joined_r0x0041c964:
  uVar13 = uVar16;
  if ((int)uVar16 < 1) {
    if (uVar16 != 0) {
LAB_0041c9a4:
      pbVar23 = (byte *)(pcVar20 + (int)uVar13);
      if (pbVar23 + -1 != (byte *)0x0) {
        if (pbVar17 == (byte *)0x0) {
          pbVar17 = pbVar18;
          if ((0 < (int)uVar7) && (*pbVar18 == 0x2e)) {
            if (uVar16 - uVar7 == 0 || (int)uVar16 < (int)uVar7) {
              return 0x2f;
            }
            pbVar17 = (byte *)(pcVar20 + (int)(uVar16 - uVar7));
            do {
              bVar4 = *pbVar18;
              bVar5 = *pbVar17;
              if ((uint)bVar4 != (uint)bVar5) {
                bVar2 = bVar4 | 0x20;
                if (0x19 < bVar4 - 0x41) {
                  bVar2 = bVar4;
                }
                bVar4 = bVar5 | 0x20;
                if (0x19 < bVar5 - 0x41) {
                  bVar4 = bVar5;
                }
                if (bVar2 != bVar4) {
                  return 0x2f;
                }
              }
              uVar22 = uVar22 - 1;
              pbVar18 = pbVar18 + 1;
              pbVar17 = pbVar17 + 1;
              if (uVar22 == 0) {
                return 0;
              }
            } while( true );
          }
        }
        else {
          sVar11 = (long)pbVar17 - (long)pbVar18;
          if (sVar11 != 0) {
            if (sVar11 != (long)(pbVar23 + -1) - (long)pcVar20) {
              return 0x2f;
            }
            pvVar10 = memchr(pbVar18,0,sVar11);
            if (pvVar10 != (void *)0x0) {
              return 0x35;
            }
            pvVar10 = memchr(pcVar20,0,sVar11);
            if (pvVar10 != (void *)0x0) {
              return 0x35;
            }
            iVar8 = strncmp((char *)pbVar18,pcVar20,sVar11);
            if (iVar8 != 0) {
              return 0x2f;
            }
          }
          pbVar17 = pbVar17 + 1;
        }
        pbVar18 = pbVar18 + ((long)(int)uVar7 - (long)pbVar17);
        if (pbVar18 != (byte *)((long)(int)uVar16 - (long)(int)uVar13)) {
          return 0x2f;
        }
        if (pbVar18 == (byte *)0x0) {
          return 0;
        }
        do {
          bVar4 = *pbVar17;
          bVar5 = *pbVar23;
          if ((uint)bVar4 != (uint)bVar5) {
            bVar2 = bVar4 | 0x20;
            if (0x19 < bVar4 - 0x41) {
              bVar2 = bVar4;
            }
            bVar4 = bVar5 | 0x20;
            if (0x19 < bVar5 - 0x41) {
              bVar4 = bVar5;
            }
            if (bVar2 != bVar4) {
              return 0x2f;
            }
          }
          pbVar18 = pbVar18 + -1;
          pbVar17 = pbVar17 + 1;
          pbVar23 = pbVar23 + 1;
          if (pbVar18 == (byte *)0x0) {
            return 0;
          }
        } while( true );
      }
    }
  }
  else {
    do {
      if (pcVar20[(ulong)uVar13 - 1] == '@') goto LAB_0041c9a4;
      uVar6 = uVar13 - 1;
      bVar1 = 0 < (int)uVar13;
      uVar13 = uVar6;
    } while (uVar6 != 0 && bVar1);
  }
  return 0x35;
}


// ===== 0041cc54  FUN_0041cc54 =====

undefined4 FUN_0041cc54(byte *param_1,byte *param_2,long param_3)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  if (param_3 != 0) {
    do {
      bVar3 = *param_1;
      bVar4 = *param_2;
      if ((uint)bVar3 != (uint)bVar4) {
        bVar2 = bVar3 | 0x20;
        if (0x19 < bVar3 - 0x41) {
          bVar2 = bVar3;
        }
        bVar3 = bVar4 | 0x20;
        if (0x19 < bVar4 - 0x41) {
          bVar3 = bVar4;
        }
        if (bVar2 != bVar3) {
          uVar1 = 1;
          if (bVar2 < bVar3) {
            uVar1 = 0xffffffff;
          }
          return uVar1;
        }
      }
      param_3 = param_3 + -1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return 0;
}


// ===== 0041ccb4  FUN_0041ccb4 =====

undefined8 FUN_0041ccb4(char *param_1,ulong param_2,int *param_3,uint *param_4)

{
  uint *__src;
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  int *piVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  
  uVar1 = *param_4;
  if (param_2 == 0) {
LAB_0041cd10:
    uVar16 = 0;
    uVar6 = 0;
    if (param_2 == 0) goto LAB_0041cf28;
  }
  else {
    uVar9 = 0;
    uVar6 = 0;
    do {
      uVar16 = (uint)uVar9;
      if (param_1[uVar9] != '-') {
        uVar16 = (uint)uVar6;
      }
      uVar6 = (ulong)uVar16;
      uVar9 = uVar9 + 1;
    } while ((uVar9 & 0xffffffff) < param_2);
    if (uVar16 == 0) goto LAB_0041cd10;
    uVar9 = uVar6;
    piVar10 = param_3;
    pcVar12 = param_1;
    if (uVar1 < uVar16) {
      return 0;
    }
    do {
      if (*pcVar12 < 0) {
        return 0;
      }
      uVar9 = uVar9 - 1;
      *piVar10 = (int)*pcVar12;
      piVar10 = piVar10 + 1;
      pcVar12 = pcVar12 + 1;
    } while (uVar9 != 0);
    uVar16 = uVar16 + 1;
    if (param_2 <= uVar16) goto LAB_0041cf28;
  }
  uVar7 = 0;
  uVar11 = 0x48;
  uVar17 = 0x80;
  uVar9 = uVar6;
  do {
    uVar6 = (ulong)uVar16;
    if (param_2 <= uVar6) {
      return 0;
    }
    uVar13 = 1;
    uVar14 = 0x24;
    uVar3 = uVar7;
    while( true ) {
      uVar16 = uVar16 + 1;
      bVar2 = param_1[uVar6];
      uVar15 = bVar2 - 0x41;
      if ((0x19 < uVar15) && (uVar15 = bVar2 - 0x61, 0x19 < uVar15)) {
        if (9 < bVar2 - 0x30) {
          return 0;
        }
        uVar15 = bVar2 - 0x16;
      }
      if ((int)uVar15 < 0) {
        return 0;
      }
      uVar4 = 0;
      if (uVar13 != 0) {
        uVar4 = ~uVar3 / uVar13;
      }
      if (uVar4 < uVar15) {
        return 0;
      }
      uVar4 = uVar14 - uVar11;
      uVar3 = uVar3 + uVar15 * uVar13;
      if (uVar11 + 0x1a <= uVar14) {
        uVar4 = 0x1a;
      }
      if (uVar14 <= uVar11) {
        uVar4 = 1;
      }
      if (uVar15 < uVar4) break;
      if (((ulong)(0x24 - uVar4) * (ulong)uVar13 & 0xffffffff00000000) != 0) {
        return 0;
      }
      uVar13 = (0x24 - uVar4) * uVar13;
      uVar6 = (ulong)uVar16;
      uVar14 = uVar14 + 0x24;
      if (param_2 <= uVar6) {
        return 0;
      }
    }
    uVar11 = uVar3 - uVar7 >> 1;
    uVar6 = uVar9 + 1;
    if (uVar7 == 0) {
      uVar11 = uVar3 / 700;
    }
    uVar7 = 0;
    if ((uint)uVar6 != 0) {
      uVar7 = uVar11 / (uint)uVar6;
    }
    uVar7 = uVar7 + uVar11;
    if (uVar7 < 0x1c8) {
      iVar8 = 0;
    }
    else {
      iVar8 = 0;
      do {
        iVar8 = iVar8 + 0x24;
        uVar11 = uVar7 >> 3;
        uVar7 = uVar7 / 0x23;
      } while (0x7ca < uVar11);
    }
    uVar5 = 0;
    if (uVar6 != 0) {
      uVar5 = uVar3 / uVar6;
    }
    if (~uVar17 < uVar5 || uVar1 <= uVar9) {
      return 0;
    }
    lVar18 = (ulong)uVar3 - uVar5 * uVar6;
    uVar14 = uVar7 + 0x26 & 0xffff;
    uVar17 = uVar17 + (int)uVar5;
    uVar11 = 0;
    if (uVar14 != 0) {
      uVar11 = ((uVar7 * 9 & 0x3fff) << 2) / uVar14;
    }
    __src = (uint *)(param_3 + lVar18);
    uVar11 = iVar8 + uVar11;
    memmove(__src + 1,__src,(uVar9 - lVar18) * 4);
    uVar7 = (int)lVar18 + 1;
    *__src = uVar17;
    uVar9 = uVar6;
  } while (uVar16 < param_2);
LAB_0041cf28:
  *param_4 = (uint)uVar6;
  return 1;
}


// ===== 0041cf50  FUN_0041cf50 =====

undefined4 FUN_0041cf50(char *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  size_t sVar7;
  uint *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte local_894 [8];
  uint local_88c;
  undefined1 auStack_888 [56];
  uint auStack_850 [512];
  
  if ((param_2 == 0) || (iVar3 = FUN_003ce85c(auStack_888,param_2,param_3,0), iVar3 == 0)) {
    return 0xffffffff;
  }
  uVar10 = 1;
  pcVar4 = strchr(param_1,0x2e);
  if (pcVar4 == (char *)0x0) goto LAB_0041d010;
LAB_0041cfac:
  sVar7 = (long)pcVar4 - (long)param_1;
  iVar3 = strncmp(param_1,"xn--",4);
  if (iVar3 == 0) goto LAB_0041d030;
  do {
    iVar3 = FUN_003cf164(auStack_888,param_1,sVar7);
    uVar9 = 0;
    if (iVar3 != 0) {
      uVar9 = uVar10;
    }
LAB_0041cfdc:
    if (pcVar4 == (char *)0x0) {
      iVar3 = FUN_003cef94(auStack_888,0,1);
      uVar10 = 0;
      if (iVar3 != 0) {
        uVar10 = uVar9;
      }
LAB_0041d154:
      FUN_003cf324(auStack_888);
      return uVar10;
    }
    iVar3 = FUN_003cef94(auStack_888,0x2e,1);
    param_1 = pcVar4 + 1;
    uVar10 = 0;
    if (iVar3 != 0) {
      uVar10 = uVar9;
    }
    pcVar4 = strchr(param_1,0x2e);
    if (pcVar4 != (char *)0x0) goto LAB_0041cfac;
LAB_0041d010:
    sVar7 = strlen(param_1);
    iVar3 = strncmp(param_1,"xn--",4);
  } while (iVar3 != 0);
LAB_0041d030:
  local_88c = 0x200;
  iVar3 = FUN_0041ccb4(param_1 + 4,sVar7 - 4,auStack_850,&local_88c);
  if (iVar3 < 1) {
LAB_0041d138:
    uVar10 = 0xffffffff;
    goto LAB_0041d154;
  }
  uVar6 = (ulong)local_88c;
  uVar9 = uVar10;
  if (local_88c != 0) {
    puVar8 = auStack_850;
    do {
      uVar1 = *puVar8;
      bVar2 = (byte)uVar1;
      if (uVar1 < 0x80) {
        lVar5 = 1;
        local_894[0] = bVar2;
      }
      else if (uVar1 < 0x800) {
        lVar5 = 2;
        local_894[1] = bVar2 & 0x3f | 0x80;
        local_894[0] = (byte)(uVar1 >> 6) | 0xc0;
      }
      else if (uVar1 >> 0x10 == 0) {
        local_894[1] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
        local_894[2] = bVar2 & 0x3f | 0x80;
        lVar5 = 3;
        local_894[0] = (byte)(uVar1 >> 0xc) | 0xe0;
      }
      else {
        if (0x10 < uVar1 >> 0x10) goto LAB_0041d138;
        local_894[1] = (byte)(uVar1 >> 0xc) & 0x3f | 0x80;
        local_894[2] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
        local_894[3] = bVar2 & 0x3f | 0x80;
        lVar5 = 4;
        local_894[0] = (byte)(uVar1 >> 0x12) | 0xf0;
      }
      local_894[lVar5] = 0;
      iVar3 = FUN_003cf164(auStack_888,local_894);
      uVar9 = 0;
      if (iVar3 != 0) {
        uVar9 = uVar10;
      }
      uVar6 = uVar6 - 1;
      puVar8 = puVar8 + 1;
      uVar10 = uVar9;
    } while (uVar6 != 0);
  }
  goto LAB_0041cfdc;
}


// ===== 0041d17c  FUN_0041d17c =====

void FUN_0041d17c(void)

{
  FUN_003ca2f4(&DAT_001b77b8,"crypto/x509/v3_no_ass.c",0x20);
  return;
}


// ===== 0041d194  thunk_FUN_0038a5f8 =====

void thunk_FUN_0038a5f8(void)

{
  FUN_0039a5f4(&DAT_00765390);
  return;
}


// ===== 0041d198  FUN_0041d198 =====

undefined8 FUN_0041d198(void)

{
  return 1;
}


// ===== 0041d1a0  thunk_FUN_0038a5f8 =====

void thunk_FUN_0038a5f8(void)

{
  FUN_0039a5f4(&DAT_00765390);
  return;
}


// ===== 0041d1a4  FUN_0041d1a4 =====

void FUN_0041d1a4(void)

{
  FUN_003ca2f4(&DAT_001b77b8,"crypto/x509/v3_no_rev_avail.c",0x20);
  return;
}


// ===== 0041d1bc  thunk_FUN_0038a5f8 =====

void thunk_FUN_0038a5f8(void)

{
  FUN_0039a5f4(&DAT_00765390);
  return;
}


// ===== 0041d1c0  FUN_0041d1c0 =====

undefined8 FUN_0041d1c0(void)

{
  return 1;
}


// ===== 0041d1c8  thunk_FUN_0038a5f8 =====

void thunk_FUN_0038a5f8(void)

{
  FUN_0039a5f4(&DAT_00765390);
  return;
}


// ===== 0041d1cc  FUN_0041d1cc =====

undefined8 FUN_0041d1cc(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  FUN_0037b9f8(param_3,"%*sPath Length Constraint: ",param_4,&DAT_001c717f);
  if (*param_2 == 0) {
    FUN_0037b9f8(param_3,"infinite");
  }
  else {
    FUN_003f1608(param_3);
  }
  FUN_0037e608(param_3,&DAT_001e2980);
  FUN_0037b9f8(param_3,"%*sPolicy Language: ",param_4,&DAT_001c717f);
  FUN_00399b60(param_3,*(undefined8 *)param_2[1]);
  puVar1 = *(undefined4 **)(param_2[1] + 8);
  if ((puVar1 != (undefined4 *)0x0) && (*(long *)(puVar1 + 2) != 0)) {
    FUN_0037b9f8(param_3,"\n%*sPolicy Text: %.*s",param_4,&DAT_001c717f,*puVar1);
  }
  return 1;
}


// ===== 0041d2ac  FUN_0041d2ac =====

undefined8 * FUN_0041d2ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  char *pcVar10;
  long *plVar11;
  long local_50;
  undefined8 local_48;
  long local_28;
  
  local_28 = 0;
  local_50 = 0;
  local_48 = 0;
  uVar6 = FUN_00423474(param_3);
  iVar2 = FUN_0040caf8();
  if (iVar2 < 1) {
LAB_0041d414:
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_pci.c",0x11c,"r2i_pci");
    uVar9 = 0x9a;
  }
  else {
    iVar2 = 0;
LAB_0041d2ec:
    do {
      puVar7 = (undefined8 *)FUN_0040cb0c(uVar6,iVar2);
      pcVar10 = (char *)puVar7[1];
      if (pcVar10 == (char *)0x0) {
LAB_0041d444:
        FUN_00379868();
        FUN_0037995c("crypto/x509/v3_pci.c",0xfb,"r2i_pci");
        uVar9 = 0x99;
LAB_0041d490:
        FUN_00379a5c(0x22,uVar9,0);
LAB_0041d498:
        FUN_0037aeac(6,"section:",*puVar7,",name:",puVar7[1],",value:",puVar7[2]);
        goto LAB_0041d4c0;
      }
      if (*pcVar10 != '@') {
        if (puVar7[2] == 0) goto LAB_0041d444;
        iVar4 = FUN_0041d564(puVar7,&local_28,&local_48,&local_50);
        if (iVar4 == 0) goto LAB_0041d498;
        iVar2 = iVar2 + 1;
        iVar4 = FUN_0040caf8(uVar6);
        if (iVar4 <= iVar2) break;
        goto LAB_0041d2ec;
      }
      lVar8 = FUN_004156c8(param_2,pcVar10 + 1);
      if (lVar8 == 0) {
        FUN_00379868();
        FUN_0037995c("crypto/x509/v3_pci.c",0x105,"r2i_pci");
        uVar9 = 0x87;
        goto LAB_0041d490;
      }
      iVar4 = 0;
      while (iVar3 = FUN_0040caf8(lVar8), iVar4 < iVar3) {
        uVar9 = FUN_0040cb0c(lVar8,iVar4);
        iVar3 = FUN_0041d564(uVar9,&local_28,&local_48,&local_50);
        iVar4 = iVar4 + 1;
        if (iVar3 == 0) {
          FUN_00415744(param_2,lVar8);
          goto LAB_0041d4c0;
        }
      }
      FUN_00415744(param_2,lVar8);
      iVar2 = iVar2 + 1;
      iVar4 = FUN_0040caf8(uVar6);
    } while (iVar2 < iVar4);
    lVar8 = local_28;
    if (local_28 == 0) goto LAB_0041d414;
    uVar5 = FUN_003dd5b4(local_28);
    lVar1 = local_50;
    if (((uVar5 & 0xfffffffd) == 0x299) && (local_50 != 0)) {
      FUN_00379868();
      FUN_0037995c("crypto/x509/v3_pci.c",0x122,"r2i_pci");
      uVar9 = 0x9f;
    }
    else {
      puVar7 = (undefined8 *)FUN_0041db48();
      if (puVar7 != (undefined8 *)0x0) {
        plVar11 = (long *)puVar7[1];
        *plVar11 = lVar8;
        plVar11[1] = lVar1;
        *puVar7 = local_48;
        local_48 = 0;
        goto LAB_0041d4e8;
      }
      FUN_00379868();
      FUN_0037995c("crypto/x509/v3_pci.c",0x128,"r2i_pci");
      uVar9 = 0x8000d;
    }
  }
  FUN_00379a5c(0x22,uVar9,0);
LAB_0041d4c0:
  FUN_0039a0f4(local_28);
  thunk_FUN_0038eddc(local_48);
  local_48 = 0;
  thunk_FUN_0038eddc(local_50);
  FUN_0041db54(0);
  puVar7 = (undefined8 *)0x0;
LAB_0041d4e8:
  FUN_0040ca6c(uVar6,PTR_FUN_007a1b70);
  return puVar7;
}


// ===== 0041d564  FUN_0041d564 =====

undefined8 FUN_0041d564(undefined8 *param_1,long *param_2,long *param_3,long *param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  void *__src;
  long lVar5;
  size_t __n;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  int *piVar11;
  undefined1 auStack_858 [2048];
  int local_58;
  undefined4 uStack_54;
  
  pcVar10 = (char *)param_1[1];
  iVar2 = strcmp(pcVar10,"language");
  if (iVar2 == 0) {
    if (*param_2 == 0) {
      lVar6 = FUN_003dce7c(param_1[2],0);
      *param_2 = lVar6;
      if (lVar6 != 0) {
        return 1;
      }
      FUN_00379868();
      FUN_0037995c("crypto/x509/v3_pci.c",0x62,"process_pci_value");
      uVar7 = 0x6e;
    }
    else {
      FUN_00379868();
      FUN_0037995c("crypto/x509/v3_pci.c",0x5d,"process_pci_value");
      uVar7 = 0x9b;
    }
LAB_0041d8c4:
    FUN_00379a5c(0x22,uVar7,0);
    FUN_0037aeac(6,"section:",*param_1,",name:",param_1[1],",value:",param_1[2]);
    return 0;
  }
  iVar2 = strcmp(pcVar10,"pathlen");
  if (iVar2 == 0) {
    if (*param_3 == 0) {
      iVar2 = FUN_00423410(param_1,param_3);
      if (iVar2 != 0) {
        return 1;
      }
      FUN_00379868();
      FUN_0037995c("crypto/x509/v3_pci.c",0x6e,"process_pci_value");
      uVar7 = 0x9c;
    }
    else {
      FUN_00379868();
      FUN_0037995c("crypto/x509/v3_pci.c",0x69,"process_pci_value");
      uVar7 = 0x9d;
    }
    goto LAB_0041d8c4;
  }
  iVar2 = strcmp(pcVar10,"policy");
  if (iVar2 != 0) {
    return 1;
  }
  piVar11 = (int *)*param_4;
  pcVar10 = (char *)param_1[2];
  piVar4 = piVar11;
  if (piVar11 == (int *)0x0) {
    piVar4 = (int *)FUN_0038a358();
    *param_4 = (long)piVar4;
    if (piVar4 == (int *)0x0) {
      FUN_00379868();
      FUN_0037995c("crypto/x509/v3_pci.c",0x7a,"process_pci_value");
      uVar7 = 0x8000d;
      goto LAB_0041d8c4;
    }
  }
  iVar2 = strncmp(pcVar10,"hex:",4);
  if (iVar2 == 0) {
    __src = (void *)FUN_003ca840(pcVar10 + 4,&local_58);
    if (__src != (void *)0x0) {
      lVar6 = FUN_003c8558(*(undefined8 *)((int *)*param_4 + 2),
                           (long)*(int *)*param_4 + CONCAT44(uStack_54,local_58) + 1,
                           "crypto/x509/v3_pci.c",0x8a);
      if (lVar6 != 0) {
        *(long *)(*param_4 + 8) = lVar6;
        memcpy((void *)(*(long *)((int *)*param_4 + 2) + (long)*(int *)*param_4),__src,
               CONCAT44(uStack_54,local_58));
        piVar4 = (int *)*param_4;
        iVar2 = *piVar4;
        *piVar4 = iVar2 + local_58;
        *(undefined1 *)(*(long *)(piVar4 + 2) + (long)(iVar2 + local_58)) = 0;
        FUN_003c86b4(__src,"crypto/x509/v3_pci.c",0x9d);
        return 1;
      }
      FUN_003c86b4(__src,"crypto/x509/v3_pci.c",0x92);
      uVar8 = 0x97;
      uVar7 = *(undefined8 *)(*param_4 + 8);
LAB_0041da6c:
      FUN_003c86b4(uVar7,"crypto/x509/v3_pci.c",uVar8);
      uVar7 = *param_1;
      uVar8 = param_1[1];
      uVar9 = param_1[2];
      *(undefined8 *)(*param_4 + 8) = 0;
      *(undefined4 *)*param_4 = 0;
      goto LAB_0041da14;
    }
  }
  else {
    iVar2 = strncmp(pcVar10,"file:",5);
    if (iVar2 == 0) {
      lVar6 = FUN_00388570(pcVar10 + 5,&DAT_001e6b9d);
      if (lVar6 != 0) {
        bVar1 = true;
        do {
          while (uVar3 = FUN_0037dd7c(lVar6,auStack_858,0x800), 0 < (int)uVar3) {
            lVar5 = FUN_003c8558(*(undefined8 *)((int *)*param_4 + 2),
                                 (long)(int)(uVar3 + *(int *)*param_4 + 1),"crypto/x509/v3_pci.c",
                                 0xad);
            if (lVar5 == 0) {
              FUN_003c86b4(*(undefined8 *)(*param_4 + 8),"crypto/x509/v3_pci.c",0xb0);
              uVar7 = *param_1;
              uVar8 = param_1[1];
              uVar9 = param_1[2];
              *(undefined8 *)(*param_4 + 8) = 0;
              *(undefined4 *)*param_4 = 0;
              FUN_0037aeac(6,"section:",uVar7,",name:",uVar8,",value:",uVar9);
              FUN_0037ef60(lVar6);
              goto joined_r0x0041dae0;
            }
            *(long *)(*param_4 + 8) = lVar5;
            memcpy((void *)(*(long *)((int *)*param_4 + 2) + (long)*(int *)*param_4),auStack_858,
                   (ulong)uVar3);
            piVar4 = (int *)*param_4;
            bVar1 = false;
            iVar2 = *piVar4;
            *piVar4 = (int)((long)iVar2 + (long)(int)uVar3);
            *(undefined1 *)(*(long *)(piVar4 + 2) + (long)iVar2 + (long)(int)uVar3) = 0;
          }
          if (uVar3 != 0) {
            FUN_0037ef60(lVar6);
            FUN_00379868();
            uVar7 = 0xc0;
            goto LAB_0041d9f4;
          }
          iVar2 = FUN_0037dd28(lVar6,8);
        } while (iVar2 != 0);
        FUN_0037ef60(lVar6);
        if (!bVar1) {
          return 1;
        }
        goto LAB_0041da0c;
      }
      FUN_00379868();
      uVar7 = 0xa3;
LAB_0041d9f4:
      FUN_0037995c("crypto/x509/v3_pci.c",uVar7,"process_pci_value");
      uVar7 = 0x80020;
    }
    else {
      iVar2 = strncmp(pcVar10,"text:",5);
      if (iVar2 == 0) {
        __n = strlen(pcVar10 + 5);
        lVar6 = FUN_003c8558(*(undefined8 *)(piVar4 + 2),__n + (long)*piVar4 + 1,
                             "crypto/x509/v3_pci.c",199);
        if (lVar6 != 0) {
          *(long *)(*param_4 + 8) = lVar6;
          memcpy((void *)(*(long *)((int *)*param_4 + 2) + (long)*(int *)*param_4),
                 (void *)(param_1[2] + 5),__n);
          piVar4 = (int *)*param_4;
          iVar2 = *piVar4 + (int)__n;
          *piVar4 = iVar2;
          *(undefined1 *)(*(long *)(piVar4 + 2) + (long)iVar2) = 0;
          return 1;
        }
        uVar7 = *(undefined8 *)(*param_4 + 8);
        uVar8 = 0xd3;
        goto LAB_0041da6c;
      }
      FUN_00379868();
      FUN_0037995c("crypto/x509/v3_pci.c",0xda,"process_pci_value");
      uVar7 = 0x98;
    }
    FUN_00379a5c(0x22,uVar7,0);
  }
LAB_0041da0c:
  uVar7 = *param_1;
  uVar8 = param_1[1];
  uVar9 = param_1[2];
LAB_0041da14:
  FUN_0037aeac(6,"section:",uVar7,",name:",uVar8,",value:",uVar9);
joined_r0x0041dae0:
  if (piVar11 != (int *)0x0) {
    return 0;
  }
  thunk_FUN_0038eddc(*param_4);
  *param_4 = 0;
  return 0;
}


// ===== 0041dae8  FUN_0041dae8 =====

undefined * FUN_0041dae8(void)

{
  return &DAT_0077df48;
}


// ===== 0041daf4  FUN_0041daf4 =====

void FUN_0041daf4(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0041db00  FUN_0041db00 =====

void FUN_0041db00(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077df48);
  return;
}


// ===== 0041db0c  FUN_0041db0c =====

void FUN_0041db0c(void)

{
  FUN_0039a5f4(&DAT_0077df48);
  return;
}


// ===== 0041db18  FUN_0041db18 =====

void FUN_0041db18(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077df48);
  return;
}


// ===== 0041db24  FUN_0041db24 =====

undefined * FUN_0041db24(void)

{
  return &DAT_0077dfd0;
}


// ===== 0041db30  FUN_0041db30 =====

void FUN_0041db30(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0041db3c  FUN_0041db3c =====

void FUN_0041db3c(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077dfd0);
  return;
}


// ===== 0041db48  FUN_0041db48 =====

void FUN_0041db48(void)

{
  FUN_0039a5f4(&DAT_0077dfd0);
  return;
}


// ===== 0041db54  FUN_0041db54 =====

void FUN_0041db54(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077dfd0);
  return;
}


// ===== 0041db60  FUN_0041db60 =====

undefined * FUN_0041db60(void)

{
  return &DAT_0077e0c0;
}


// ===== 0041db6c  FUN_0041db6c =====

undefined8 FUN_0041db6c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 local_8;
  
  local_8 = param_3;
  FUN_0042315c("Require Explicit Policy",*param_2,&local_8);
  FUN_0042315c("Inhibit Policy Mapping",param_2[1],&local_8);
  return local_8;
}


// ===== 0041dbb8  FUN_0041dbb8 =====

long * FUN_0041dbb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  char *__s1;
  
  plVar3 = (long *)FUN_0039a5f4(&DAT_0077e0c0);
  if (plVar3 == (long *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_pcons.c",0x40,"v2i_POLICY_CONSTRAINTS");
    FUN_00379a5c(0x22,0x8000d,0);
  }
  else {
    iVar1 = FUN_0040caf8(param_3);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        lVar4 = FUN_0040cb0c(param_3,iVar1);
        __s1 = *(char **)(lVar4 + 8);
        iVar2 = strcmp(__s1,"requireExplicitPolicy");
        if (iVar2 == 0) {
          iVar2 = FUN_00423410(lVar4,plVar3);
        }
        else {
          iVar2 = strcmp(__s1,"inhibitPolicyMapping");
          if (iVar2 != 0) {
            FUN_00379868();
            FUN_0037995c("crypto/x509/v3_pcons.c",0x4c,"v2i_POLICY_CONSTRAINTS");
            FUN_00379a5c(0x22,0x6a,&DAT_001d3a58,*(undefined8 *)(lVar4 + 8));
            goto LAB_0041dd20;
          }
          iVar2 = FUN_00423410(lVar4,plVar3 + 1);
        }
        if (iVar2 == 0) goto LAB_0041dd20;
        iVar1 = iVar1 + 1;
        iVar2 = FUN_0040caf8(param_3);
      } while (iVar1 < iVar2);
    }
    if ((plVar3[1] == 0) && (*plVar3 == 0)) {
      FUN_00379868();
      FUN_0037995c("crypto/x509/v3_pcons.c",0x53,"v2i_POLICY_CONSTRAINTS");
      FUN_00379a5c(0x22,0x97,0);
LAB_0041dd20:
      FUN_0038c75c(plVar3,&DAT_0077e0c0);
      plVar3 = (long *)0x0;
    }
  }
  return plVar3;
}


// ===== 0041dd50  FUN_0041dd50 =====

void FUN_0041dd50(void)

{
  FUN_0039a5f4(&DAT_0077e0c0);
  return;
}


// ===== 0041dd5c  FUN_0041dd5c =====

void FUN_0041dd5c(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077e0c0);
  return;
}


// ===== 0041dd68  FUN_0041dd68 =====

undefined * FUN_0041dd68(void)

{
  return &DAT_0077e1b0;
}


// ===== 0041dd74  FUN_0041dd74 =====

undefined8 FUN_0041dd74(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_0037b9f8(param_3,&DAT_001d8020,param_4,&DAT_001c717f);
  if (*param_2 != 0) {
    FUN_0037df4c(param_3,"Not Before: ",0xc);
    FUN_003c1a40(param_3,*param_2);
    if (param_2[1] != 0) {
      FUN_0037df4c(param_3,&DAT_001c2f11,2);
    }
  }
  if (param_2[1] != 0) {
    FUN_0037df4c(param_3,"Not After: ",0xb);
    FUN_003c1a40(param_3,param_2[1]);
  }
  return 1;
}


// ===== 0041de24  FUN_0041de24 =====

void FUN_0041de24(void)

{
  FUN_0038a93c();
  return;
}


// ===== 0041de30  FUN_0041de30 =====

void FUN_0041de30(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077e1b0);
  return;
}


// ===== 0041de3c  FUN_0041de3c =====

void FUN_0041de3c(void)

{
  FUN_0039a5f4(&DAT_0077e1b0);
  return;
}


// ===== 0041de48  FUN_0041de48 =====

void FUN_0041de48(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077e1b0);
  return;
}


// ===== 0041de54  FUN_0041de54 =====

undefined * FUN_0041de54(void)

{
  return &DAT_0077e328;
}


// ===== 0041de60  FUN_0041de60 =====

undefined8 FUN_0041de60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStack_d0 [80];
  undefined1 auStack_80 [80];
  undefined8 local_18;
  
  local_18 = param_3;
  iVar1 = FUN_0040caf8(param_2);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      puVar3 = (undefined8 *)FUN_0040cb0c(param_2,iVar1);
      FUN_00399b58(auStack_80,0x50,*puVar3);
      FUN_00399b58(auStack_d0,0x50,puVar3[1]);
      FUN_00422a24(auStack_80,auStack_d0,&local_18);
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0040caf8(param_2);
      param_3 = local_18;
    } while (iVar1 < iVar2);
  }
  return param_3;
}


// ===== 0041df04  FUN_0041df04 =====

long FUN_0041df04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  
  iVar1 = FUN_0040caf8(param_3);
  lVar2 = FUN_0040bf38(0,iVar1);
  if (lVar2 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_pmaps.c",0x4c,"v2i_POLICY_MAPPINGS");
    FUN_00379a5c(0x22,0x8000f,0);
  }
  else if (0 < iVar1) {
    iVar7 = 0;
    do {
      lVar3 = FUN_0040cb0c(param_3,iVar7);
      if ((*(long *)(lVar3 + 0x10) == 0) || (*(long *)(lVar3 + 8) == 0)) {
        FUN_00379868();
        FUN_0037995c("crypto/x509/v3_pmaps.c",0x53,"v2i_POLICY_MAPPINGS");
        FUN_00379a5c(0x22,0x6e,&DAT_001d3a58,*(undefined8 *)(lVar3 + 8));
        lVar5 = 0;
        lVar4 = 0;
LAB_0041e0a8:
        FUN_0039a0f4(lVar4);
        FUN_0039a0f4(lVar5);
        FUN_0040ca6c(lVar2,PTR_FUN_007a1ca8);
        return 0;
      }
      lVar4 = FUN_003dce7c(*(long *)(lVar3 + 8),0);
      lVar5 = FUN_003dce7c(*(undefined8 *)(lVar3 + 0x10),0);
      if ((lVar4 == 0) || (lVar5 == 0)) {
        FUN_00379868();
        FUN_0037995c("crypto/x509/v3_pmaps.c",0x5a,"v2i_POLICY_MAPPINGS");
        FUN_00379a5c(0x22,0x6e,&DAT_001d3a58,*(undefined8 *)(lVar3 + 8));
        goto LAB_0041e0a8;
      }
      plVar6 = (long *)FUN_0039a5f4(&DAT_0077e2a0);
      if (plVar6 == (long *)0x0) {
        FUN_00379868();
        FUN_0037995c("crypto/x509/v3_pmaps.c",0x60,"v2i_POLICY_MAPPINGS");
        FUN_00379a5c(0x22,0x8000d,0);
        goto LAB_0041e0a8;
      }
      *plVar6 = lVar4;
      plVar6[1] = lVar5;
      FUN_0040c89c(lVar2,plVar6);
      iVar7 = iVar7 + 1;
    } while (iVar1 != iVar7);
  }
  return lVar2;
}


// ===== 0041e0e8  FUN_0041e0e8 =====

undefined * FUN_0041e0e8(void)

{
  return &DAT_0077e2a0;
}


// ===== 0041e0f4  FUN_0041e0f4 =====

void FUN_0041e0f4(void)

{
  FUN_0039a5f4(&DAT_0077e2a0);
  return;
}


// ===== 0041e100  FUN_0041e100 =====

void FUN_0041e100(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077e2a0);
  return;
}


// ===== 0041e10c  FUN_0041e10c =====

void FUN_0041e10c(undefined8 param_1,long param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 == 0) {
    return;
  }
  if ((param_4 == 0) || (iVar1 = FUN_0040caf8(param_2), iVar1 == 0)) {
    FUN_0037b9f8(param_1,&DAT_001d8020,param_3,&DAT_001c717f);
    iVar1 = FUN_0040caf8(param_2);
    if (iVar1 == 0) {
      FUN_0037e608(param_1,"<EMPTY>\n");
    }
    iVar1 = FUN_0040caf8(param_2);
    if (iVar1 < 1) {
      return;
    }
    if (param_4 == 0) {
      lVar4 = FUN_0040cb0c(param_2,0);
      lVar3 = *(long *)(lVar4 + 0x10);
      if ((*(long *)(lVar4 + 8) == 0) ||
         (lVar3 = *(long *)(lVar4 + 8), *(long *)(lVar4 + 0x10) == 0)) {
        FUN_0037e608(param_1,lVar3);
      }
      else {
        FUN_0037b9f8(param_1,"%s:%s");
      }
      iVar1 = FUN_0040caf8(param_2);
      if (iVar1 < 2) {
        return;
      }
      iVar1 = 1;
      do {
        while( true ) {
          while( true ) {
            FUN_0037b9f8(param_1,&DAT_001c2f11);
            lVar3 = FUN_0040cb0c(param_2,iVar1);
            if (*(long *)(lVar3 + 8) != 0) break;
            FUN_0037e608(param_1,*(long *)(lVar3 + 0x10));
            iVar1 = iVar1 + 1;
            iVar2 = FUN_0040caf8(param_2);
            if (iVar2 <= iVar1) {
              return;
            }
          }
          if (*(long *)(lVar3 + 0x10) == 0) break;
          FUN_0037b9f8(param_1,"%s:%s");
          iVar1 = iVar1 + 1;
          iVar2 = FUN_0040caf8(param_2);
          if (iVar2 <= iVar1) {
            return;
          }
        }
        FUN_0037e608(param_1,*(long *)(lVar3 + 8));
        iVar1 = iVar1 + 1;
        iVar2 = FUN_0040caf8(param_2);
      } while (iVar1 < iVar2);
      return;
    }
  }
  else {
    iVar1 = FUN_0040caf8(param_2);
    if (iVar1 < 1) {
      return;
    }
  }
  FUN_0037b9f8(param_1,&DAT_001d8020,param_3,&DAT_001c717f);
  lVar3 = FUN_0040cb0c(param_2,0);
  if (*(long *)(lVar3 + 8) == 0) {
    FUN_0037e608(param_1,*(long *)(lVar3 + 0x10));
    iVar1 = FUN_0040caf8(param_2);
  }
  else if (*(long *)(lVar3 + 0x10) == 0) {
    FUN_0037e608(param_1,*(long *)(lVar3 + 8));
    iVar1 = FUN_0040caf8(param_2);
  }
  else {
    FUN_0037b9f8(param_1,"%s:%s");
    iVar1 = FUN_0040caf8(param_2);
  }
  if (1 < iVar1) {
    iVar1 = 1;
    do {
      while( true ) {
        FUN_0037b9f8(param_1,&DAT_001e2980);
        FUN_0037b9f8(param_1,&DAT_001d8020,param_3,&DAT_001c717f);
        lVar4 = FUN_0040cb0c(param_2,iVar1);
        lVar3 = *(long *)(lVar4 + 0x10);
        if ((*(long *)(lVar4 + 8) != 0) &&
           (lVar3 = *(long *)(lVar4 + 8), *(long *)(lVar4 + 0x10) != 0)) break;
        FUN_0037e608(param_1,lVar3);
        iVar1 = iVar1 + 1;
        iVar2 = FUN_0040caf8(param_2);
        if (iVar2 <= iVar1) {
          return;
        }
      }
      FUN_0037b9f8(param_1,"%s:%s");
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0040caf8(param_2);
    } while (iVar1 < iVar2);
  }
  return;
}


// ===== 0041e3e8  FUN_0041e3e8 =====

ulong FUN_0041e3e8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  undefined8 local_48;
  
  uVar2 = FUN_0042a76c(param_2);
  uVar3 = FUN_0038f014();
  local_48 = uVar3;
  iVar1 = FUN_0038f004(uVar2);
  lVar4 = FUN_00415d80(param_2);
  if (lVar4 == 0) {
    uVar8 = param_3 >> 0x10 & 0xf;
    if (uVar8 < 2) {
      if (uVar8 == 0) {
LAB_0041e5b8:
        uVar9 = 0;
        goto LAB_0041e6cc;
      }
      if (uVar8 == 1) {
        pcVar7 = "%*s<Not Supported>";
LAB_0041e51c:
        FUN_0037b9f8(param_1,pcVar7,param_4,&DAT_001c717f);
        uVar9 = 1;
        goto LAB_0041e6cc;
      }
    }
    else {
      if (uVar8 == 2) {
        uVar8 = FUN_003e2634(param_1,uVar3,(long)iVar1,param_4,0xffffffff);
        return uVar8;
      }
      if (uVar8 == 3) {
        uVar8 = FUN_0039a47c(param_1,uVar3,iVar1,param_4);
        return uVar8;
      }
    }
  }
  else {
    if (*(code **)(lVar4 + 8) == (code *)0x0) {
      lVar5 = (**(code **)(lVar4 + 0x20))(0,&local_48,(long)iVar1);
    }
    else {
      uVar2 = (**(code **)(lVar4 + 8))();
      lVar5 = FUN_0038a93c(0,&local_48,(long)iVar1,uVar2);
    }
    if (lVar5 != 0) {
      if (*(code **)(lVar4 + 0x30) == (code *)0x0) {
        if (*(code **)(lVar4 + 0x40) == (code *)0x0) {
          if (*(code **)(lVar4 + 0x50) == (code *)0x0) {
            lVar10 = 0;
            lVar6 = 0;
            goto LAB_0041e680;
          }
          iVar1 = (**(code **)(lVar4 + 0x50))(lVar4,lVar5,param_1,param_4);
          lVar10 = 0;
          lVar6 = 0;
          uVar9 = (uint)(iVar1 != 0);
        }
        else {
          lVar6 = (**(code **)(lVar4 + 0x40))(lVar4,lVar5,0);
          if (lVar6 == 0) {
            lVar10 = 0;
LAB_0041e680:
            uVar9 = 0;
          }
          else {
            FUN_0041e10c(param_1,lVar6,param_4,*(uint *)(lVar4 + 4) & 4);
            lVar10 = 0;
            uVar9 = 1;
          }
        }
      }
      else {
        lVar6 = (**(code **)(lVar4 + 0x30))(lVar4,lVar5);
        lVar10 = lVar6;
        if (lVar6 == 0) goto LAB_0041e680;
        FUN_0037b9f8(param_1,"%*s%s",param_4,&DAT_001c717f,lVar6);
        uVar9 = 1;
        lVar6 = 0;
      }
      FUN_0040ca6c(lVar6,FUN_00422c7c);
      FUN_003c86b4(lVar10,"crypto/x509/v3_prn.c",0x83);
      if (*(code **)(lVar4 + 8) == (code *)0x0) {
        (**(code **)(lVar4 + 0x18))(lVar5);
      }
      else {
        uVar2 = (**(code **)(lVar4 + 8))();
        FUN_0038c75c(lVar5,uVar2);
      }
      goto LAB_0041e6cc;
    }
    uVar8 = param_3 >> 0x10 & 0xf;
    if (uVar8 < 2) {
      if (uVar8 == 0) goto LAB_0041e5b8;
      if (uVar8 == 1) {
        pcVar7 = "%*s<Parse Error>";
        goto LAB_0041e51c;
      }
    }
    else {
      if (uVar8 == 2) {
        uVar9 = FUN_003e2634(param_1,local_48,(long)iVar1,param_4,0xffffffff);
        goto LAB_0041e6cc;
      }
      if (uVar8 == 3) {
        uVar9 = FUN_0039a47c(param_1,local_48,iVar1,param_4);
        goto LAB_0041e6cc;
      }
    }
  }
  uVar9 = 1;
LAB_0041e6cc:
  return (ulong)uVar9;
}


// ===== 0041e6e8  FUN_0041e6e8 =====

undefined8
FUN_0041e6e8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar2 = FUN_0040caf8(param_3);
  if (0 < iVar2) {
    if (param_2 != 0) {
      FUN_0037b9f8(param_1,"%*s%s:\n",param_5,&DAT_001c717f,param_2);
      param_5 = param_5 + 4;
    }
    iVar2 = FUN_0040caf8(param_3);
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        uVar4 = FUN_0040cb0c(param_3,iVar2);
        uVar5 = FUN_0042a760();
        if (((((uint)param_4 >> 0xd & 1) == 0) || (iVar3 = FUN_003dd5b4(uVar5), iVar3 == 0x52)) ||
           (iVar3 = FUN_003dd5b4(uVar5), iVar3 == 0x5a)) {
          if ((param_5 != 0) &&
             (iVar3 = FUN_0037b9f8(param_1,&DAT_001d8020,param_5,&DAT_001c717f), iVar3 < 1)) {
            return 0;
          }
          FUN_00399b60(param_1,uVar5);
          iVar3 = FUN_0042a77c(uVar4);
          pcVar1 = "";
          if (iVar3 != 0) {
            pcVar1 = "critical";
          }
          iVar3 = FUN_0037b9f8(param_1,": %s\n",pcVar1);
          if (iVar3 < 1) {
            return 0;
          }
          iVar3 = FUN_0041e3e8(param_1,uVar4,param_4,param_5 + 4);
          if (iVar3 == 0) {
            FUN_0037b9f8(param_1,&DAT_001d8020,param_5 + 4,&DAT_001c717f);
            uVar4 = FUN_0042a76c(uVar4);
            FUN_0041b6bc(param_1,uVar4);
          }
          iVar3 = FUN_0037df4c(param_1,&DAT_001e2980,1);
          if (iVar3 < 1) {
            return 0;
          }
        }
        iVar2 = iVar2 + 1;
        iVar3 = FUN_0040caf8(param_3);
      } while (iVar2 < iVar3);
    }
  }
  return 1;
}


// ===== 0041e8a8  FUN_0041e8a8 =====

undefined8 FUN_0041e8a8(undefined8 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int local_60 [12];
  
  iVar1 = FUN_0041e984();
  if (iVar1 != 0) {
    if (param_2 == -1) {
      return 1;
    }
    if (param_2 - 1U < 10) {
      puVar2 = &DAT_007a9120 + (ulong)(param_2 - 1U) * 0x30;
LAB_0041e8f4:
      uVar3 = (**(code **)(puVar2 + 0x10))(puVar2,param_1,param_3);
      return uVar3;
    }
    if (DAT_007ac848 != 0) {
      local_60[0] = param_2;
      iVar1 = FUN_0040c48c(DAT_007ac848,local_60);
      if (-1 < iVar1) {
        if (iVar1 + 10 < 0) {
          puVar2 = (undefined *)0x0;
        }
        else {
          puVar2 = (undefined *)FUN_0040cb0c(DAT_007ac848,iVar1);
        }
        goto LAB_0041e8f4;
      }
    }
  }
  return 0xffffffff;
}


// ===== 0041e984  FUN_0041e984 =====

ulong FUN_0041e984(long param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  uint uVar11;
  byte *pbVar12;
  int local_54;
  int local_38;
  int local_34;
  
  if ((int)*(undefined8 *)(param_1 + 0x150) != 0) {
LAB_0041e9b0:
    return (ulong)((*(uint *)(param_1 + 0xe8) >> 7 ^ 0xffffffff) & 1);
  }
  uVar5 = FUN_003d518c(*(undefined8 *)(param_1 + 0x148));
  if ((int)uVar5 == 0) {
    return uVar5;
  }
  if ((*(byte *)(param_1 + 0xe9) & 1) != 0) {
    FUN_003d519c(*(undefined8 *)(param_1 + 0x148));
    goto LAB_0041e9b0;
  }
  FUN_0037f6d4();
  uVar6 = FUN_003a4268();
  iVar3 = FUN_004341d4(param_1,uVar6,param_1 + 0x128,0);
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x100000;
  }
  lVar7 = FUN_00429b7c(param_1);
  if (lVar7 == 0) {
    *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x40;
  }
  *(undefined8 *)(param_1 + 0xd8) = 0xffffffffffffffff;
  piVar8 = (int *)FUN_004276a8(param_1,0x57,&local_54,0);
  if (piVar8 == (int *)0x0) {
    if (local_54 != -1) {
      uVar11 = 0x80;
      goto LAB_0041eaf0;
    }
  }
  else {
    if (*piVar8 != 0) {
      *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x10;
    }
    lVar7 = *(long *)(piVar8 + 2);
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 4) == 0x102) {
        FUN_00379868();
        FUN_0037995c("crypto/x509/v3_purp.c",0x1bc,"ossl_x509v3_cache_extensions");
        FUN_00379a5c(0x22,0xa8,0);
        *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x80;
      }
      else {
        uVar6 = FUN_0038dea4(lVar7);
        *(undefined8 *)(param_1 + 0xd8) = uVar6;
      }
    }
    FUN_00416b04(piVar8);
    uVar11 = 1;
LAB_0041eaf0:
    *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | uVar11;
  }
  plVar9 = (long *)FUN_004276a8(param_1,0x297,&local_54,0);
  if (plVar9 == (long *)0x0) {
    if (local_54 != -1) {
      uVar11 = 0x80;
      goto LAB_0041eb8c;
    }
  }
  else {
    if ((((*(byte *)(param_1 + 0xe8) >> 4 & 1) != 0) ||
        (iVar3 = FUN_00427660(param_1,0x55,0xffffffff), -1 < iVar3)) ||
       (iVar3 = FUN_00427660(param_1,0x56,0xffffffff), -1 < iVar3)) {
      *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x80;
    }
    if (*plVar9 == 0) {
      uVar6 = 0xffffffffffffffff;
    }
    else {
      uVar6 = FUN_0038dea4();
    }
    *(undefined8 *)(param_1 + 0xe0) = uVar6;
    FUN_0041db54(plVar9);
    uVar11 = 0x400;
LAB_0041eb8c:
    *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | uVar11;
  }
  piVar8 = (int *)FUN_004276a8(param_1,0x53,&local_54,0);
  if (piVar8 == (int *)0x0) {
    if (local_54 == -1) goto LAB_0041ec40;
  }
  else {
    iVar3 = *piVar8;
    *(undefined4 *)(param_1 + 0xec) = 0;
    if (0 < iVar3) {
      pbVar12 = *(byte **)(piVar8 + 2);
      bVar2 = *pbVar12;
      *(uint *)(param_1 + 0xec) = (uint)bVar2;
      if (iVar3 != 1) {
        *(uint *)(param_1 + 0xec) = (uint)CONCAT11(pbVar12[1],bVar2);
      }
    }
    *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 2;
    thunk_FUN_0038eddc();
    if (*(int *)(param_1 + 0xec) != 0) goto LAB_0041ec40;
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_purp.c",0x1e5,"ossl_x509v3_cache_extensions");
    FUN_00379a5c(0x22,0xa9,0);
  }
  *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x80;
LAB_0041ec40:
  *(undefined4 *)(param_1 + 0xf0) = 0;
  lVar7 = FUN_004276a8(param_1,0x7e,&local_54,0);
  if (lVar7 == 0) {
    if (local_54 != -1) {
      *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x80;
    }
  }
  else {
    local_54 = 0;
    *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 4;
    iVar3 = FUN_0040caf8();
    if (0 < iVar3) {
      do {
        FUN_0040cb0c(lVar7,local_54);
        iVar3 = FUN_003dd5b4();
        if (iVar3 < 0x89) {
          if (iVar3 < 0x83) {
            if (iVar3 == 0x81) {
              uVar11 = 1;
            }
            else {
              if (iVar3 != 0x82) goto LAB_0041ed44;
              uVar11 = 2;
            }
          }
          else if (iVar3 == 0x83) {
            uVar11 = 8;
          }
          else if (iVar3 == 0x84) {
            uVar11 = 4;
          }
          else {
            if (iVar3 != 0x85) goto LAB_0041ed44;
            uVar11 = 0x40;
          }
LAB_0041ed38:
          *(uint *)(param_1 + 0xf0) = *(uint *)(param_1 + 0xf0) | uVar11;
        }
        else {
          if (0xb3 < iVar3) {
            if (iVar3 == 0xb4) {
              uVar11 = 0x20;
            }
            else if (iVar3 == 0x129) {
              uVar11 = 0x80;
            }
            else {
              if (iVar3 != 0x38e) goto LAB_0041ed44;
              uVar11 = 0x100;
            }
            goto LAB_0041ed38;
          }
          if ((iVar3 == 0x89) || (iVar3 == 0x8b)) {
            uVar11 = 0x10;
            goto LAB_0041ed38;
          }
        }
LAB_0041ed44:
        iVar3 = local_54 + 1;
        local_54 = iVar3;
        iVar4 = FUN_0040caf8(lVar7);
      } while (iVar3 < iVar4);
    }
    FUN_0040ca6c(lVar7,PTR_FUN_007a19a8);
  }
  piVar8 = (int *)FUN_004276a8(param_1,0x47,&local_54,0);
  if (piVar8 == (int *)0x0) {
    if (local_54 != -1) {
      *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x80;
    }
  }
  else {
    if (*piVar8 < 1) {
      uVar11 = 0;
    }
    else {
      uVar11 = (uint)**(byte **)(piVar8 + 2);
    }
    *(uint *)(param_1 + 0xf4) = uVar11;
    *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 8;
    thunk_FUN_0038eddc();
  }
  lVar7 = FUN_004276a8(param_1,0x52,&local_54,0);
  *(long *)(param_1 + 0xf8) = lVar7;
  if ((lVar7 == 0) && (local_54 != -1)) {
    *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x80;
  }
  lVar7 = FUN_004276a8(param_1,0x5a,&local_54,0);
  *(long *)(param_1 + 0x100) = lVar7;
  if ((lVar7 == 0) && (local_54 != -1)) {
    *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x80;
  }
  uVar6 = FUN_00426ca0(param_1);
  uVar10 = FUN_00426a88(param_1);
  iVar3 = FUN_004267c8(uVar6,uVar10);
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x20;
    iVar3 = FUN_0041f780(param_1,*(undefined8 *)(param_1 + 0x100));
    if (iVar3 == 0) {
      uVar6 = FUN_00427350(param_1);
      iVar3 = FUN_0041f894(uVar6,param_1);
      if (iVar3 == 0) {
        *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x2000;
      }
    }
  }
  lVar7 = FUN_004276a8(param_1,0x55,&local_54,0);
  *(long *)(param_1 + 0x118) = lVar7;
  if ((lVar7 == 0) && (local_54 != -1)) {
    *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x80;
  }
  lVar7 = FUN_004276a8(param_1,0x29a,&local_54,0);
  *(long *)(param_1 + 0x120) = lVar7;
  if ((lVar7 == 0) && (local_54 != -1)) {
    *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x80;
  }
  lVar7 = FUN_004276a8(param_1,0x67,&local_38,0);
  *(long *)(param_1 + 0x110) = lVar7;
  if ((lVar7 == 0) && (local_38 != -1)) {
LAB_0041ef48:
    *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x80;
  }
  else {
    local_38 = 0;
    iVar3 = FUN_0040caf8();
    if (0 < iVar3) {
      do {
        plVar9 = (long *)FUN_0040cb0c(*(undefined8 *)(param_1 + 0x110),local_38);
        if ((*plVar9 == 0) && (iVar3 = FUN_0040caf8(plVar9[2]), iVar3 < 1)) {
          FUN_00379868();
          FUN_0037995c("crypto/x509/v3_purp.c",0x13c,"setup_dp");
          FUN_00379a5c(0xb,0x8f,0);
          goto LAB_0041ef48;
        }
        piVar8 = (int *)plVar9[1];
        if (piVar8 == (int *)0x0) {
          *(undefined4 *)(plVar9 + 3) = 0x807f;
          piVar8 = (int *)*plVar9;
        }
        else {
          iVar3 = *piVar8;
          if (iVar3 < 1) {
            uVar11 = *(uint *)(plVar9 + 3);
          }
          else {
            pbVar12 = *(byte **)(piVar8 + 2);
            bVar2 = *pbVar12;
            uVar11 = (uint)bVar2;
            *(uint *)(plVar9 + 3) = (uint)bVar2;
            if (iVar3 != 1) {
              uVar11 = (uint)CONCAT11(pbVar12[1],bVar2);
            }
          }
          *(uint *)(plVar9 + 3) = uVar11 & 0x807f;
          piVar8 = (int *)*plVar9;
        }
        if ((piVar8 != (int *)0x0) && (*piVar8 == 1)) {
          iVar3 = FUN_0040caf8(plVar9[2]);
          if (0 < iVar3) {
            iVar3 = 0;
            do {
              piVar8 = (int *)FUN_0040cb0c(plVar9[2],iVar3);
              if (*piVar8 == 4) {
                lVar7 = *(long *)(piVar8 + 2);
                if (lVar7 != 0) goto LAB_0041ef7c;
                break;
              }
              iVar3 = iVar3 + 1;
              iVar4 = FUN_0040caf8(plVar9[2]);
            } while (iVar3 < iVar4);
          }
          lVar7 = FUN_00426a88(param_1);
LAB_0041ef7c:
          iVar3 = FUN_0041953c(*plVar9,lVar7);
          if (iVar3 == 0) break;
        }
        iVar3 = local_38 + 1;
        local_38 = iVar3;
        iVar4 = FUN_0040caf8(*(undefined8 *)(param_1 + 0x110));
      } while (iVar3 < iVar4);
    }
  }
  local_54 = 0;
  iVar3 = FUN_00427658(param_1);
  if (0 < iVar3) {
    do {
      uVar6 = FUN_00427678(param_1,local_54);
      FUN_0042a760();
      iVar3 = FUN_003dd5b4();
      if (iVar3 == 0x359) {
        *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x1000;
      }
      iVar4 = FUN_0042a77c(uVar6);
      if (iVar4 != 0) {
        FUN_0042a760(uVar6);
        local_34 = FUN_003dd5b4();
        if ((local_34 == 0) ||
           (lVar7 = FUN_003dd608(&local_34,&DAT_0020eb80,0xd,4,FUN_004203a4), lVar7 == 0)) {
          *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x200;
          break;
        }
        uVar11 = iVar3 - 0x52;
        if ((uVar11 < 9) && ((0x129U >> (ulong)(uVar11 & 0x1f) & 1) != 0)) {
          *(uint *)(param_1 + 0xe8) =
               *(uint *)(param_1 + 0xe8) | *(uint *)(&DAT_0020ebb4 + (ulong)uVar11 * 4);
        }
      }
      iVar3 = local_54 + 1;
      local_54 = iVar3;
      iVar4 = FUN_00427658(param_1);
    } while (iVar3 < iVar4);
  }
  FUN_00429ed8(param_1);
  *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x100;
  *(undefined4 *)(param_1 + 0x150) = 1;
  FUN_0037f71c();
  uVar11 = *(uint *)(param_1 + 0xe8);
  FUN_003d519c(*(undefined8 *)(param_1 + 0x148));
  bVar1 = (uVar11 >> 7 & 1) != 0;
  if (bVar1) {
    FUN_00379868(1);
    FUN_0037995c("crypto/x509/v3_purp.c",0x27d,"ossl_x509v3_cache_extensions");
    FUN_00379a5c(0x22,0x9e,0);
  }
  return (ulong)!bVar1;
}


// ===== 0041f20c  FUN_0041f20c =====

uint FUN_0041f20c(int param_1)

{
  uint uVar1;
  int iVar2;
  int local_40 [12];
  
  uVar1 = param_1 - 1;
  if (9 < uVar1) {
    if (DAT_007ac848 == 0) {
      return 0xffffffff;
    }
    local_40[0] = param_1;
    iVar2 = FUN_0040c48c(DAT_007ac848,local_40);
    uVar1 = iVar2 + 10;
    if (iVar2 < 0) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}


// ===== 0041f260  FUN_0041f260 =====

undefined * FUN_0041f260(uint param_1)

{
  undefined *puVar1;
  
  if ((int)param_1 < 0) {
    return (undefined *)0x0;
  }
  if (param_1 < 10) {
    return &DAT_007a9120 + (ulong)param_1 * 0x30;
  }
  puVar1 = (undefined *)FUN_0040cb0c(DAT_007ac848,param_1 - 10);
  return puVar1;
}


// ===== 0041f29c  FUN_0041f29c =====

undefined8 FUN_0041f29c(int *param_1,int param_2)

{
  int iVar1;
  int local_50 [12];
  
  if (9 < param_2 - 1U) {
    if (DAT_007ac848 != 0) {
      local_50[0] = param_2;
      iVar1 = FUN_0040c48c(DAT_007ac848,local_50);
      if (-1 < iVar1) goto LAB_0041f2ec;
    }
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_purp.c",0x6a,"X509_PURPOSE_set");
    FUN_00379a5c(0x22,0x92,0);
    return 0;
  }
LAB_0041f2ec:
  *param_1 = param_2;
  return 1;
}


// ===== 0041f344  FUN_0041f344 =====

int FUN_0041f344(void)

{
  int iVar1;
  
  if (DAT_007ac848 != 0) {
    iVar1 = FUN_0040caf8();
    return iVar1 + 10;
  }
  return 10;
}


// ===== 0041f370  FUN_0041f370 =====

ulong FUN_0041f370(char *param_1)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  
  uVar3 = 0;
  puVar4 = &DAT_007a9120;
  if (DAT_007ac848 == 0) goto LAB_0041f3b0;
  while (iVar1 = FUN_0040caf8(), (long)uVar3 < (long)(iVar1 + 10)) {
    while( true ) {
      puVar2 = puVar4;
      if (9 < uVar3) {
        puVar2 = (undefined *)FUN_0040cb0c(DAT_007ac848,(int)uVar3 + -10);
      }
      iVar1 = strcmp(*(char **)(puVar2 + 0x20),param_1);
      if (iVar1 == 0) goto LAB_0041f3fc;
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 0x30;
      if (DAT_007ac848 != 0) break;
LAB_0041f3b0:
      if (9 < (long)uVar3) goto LAB_0041f3f8;
    }
  }
LAB_0041f3f8:
  uVar3 = 0xffffffff;
LAB_0041f3fc:
  return uVar3 & 0xffffffff;
}


// ===== 0041f410  FUN_0041f410 =====

/* WARNING: Type propagation algorithm not settling */

int * FUN_0041f410(int param_1,int param_2,uint param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  int local_90 [12];
  
  if (param_1 - 1U < 10) {
    lVar5 = (ulong)(param_1 - 1U) * 0x30;
    piVar6 = (int *)(&DAT_007a9120 + lVar5);
    bVar1 = (&DAT_007a9128)[lVar5];
  }
  else {
    if ((DAT_007ac848 == 0) ||
       (local_90[0] = param_1, iVar3 = FUN_0040c48c(DAT_007ac848,local_90), iVar3 < 0)) {
      piVar6 = (int *)FUN_003c83a4(0x30,"crypto/x509/v3_purp.c",0xae);
      if (piVar6 == (int *)0x0) {
        return (int *)0x0;
      }
      bVar2 = true;
      piVar6[2] = 1;
      bVar1 = *(byte *)(piVar6 + 2);
      goto joined_r0x0041f570;
    }
    if (-1 < iVar3 + 10) {
      piVar6 = (int *)FUN_0040cb0c(DAT_007ac848,iVar3);
      bVar2 = false;
      bVar1 = *(byte *)(piVar6 + 2);
      goto joined_r0x0041f570;
    }
    piVar6 = (int *)0x0;
    bVar1 = DAT_00000008;
  }
  bVar2 = false;
joined_r0x0041f570:
  if ((bVar1 >> 1 & 1) != 0) {
    FUN_003c86b4(*(undefined8 *)(piVar6 + 6),"crypto/x509/v3_purp.c",0xb7);
    FUN_003c86b4(*(undefined8 *)(piVar6 + 8),"crypto/x509/v3_purp.c",0xb8);
  }
  uVar4 = FUN_003ca2f4(param_5,"crypto/x509/v3_purp.c",0xbb);
  *(undefined8 *)(piVar6 + 6) = uVar4;
  lVar5 = FUN_003ca2f4(param_6,"crypto/x509/v3_purp.c",0xbc);
  *(long *)(piVar6 + 8) = lVar5;
  if ((*(long *)(piVar6 + 6) == 0) || (lVar5 == 0)) {
    if (!bVar2) {
      return (int *)0x0;
    }
  }
  else {
    *piVar6 = param_1;
    piVar6[1] = param_2;
    *(undefined8 *)(piVar6 + 4) = param_4;
    *(undefined8 *)(piVar6 + 10) = param_7;
    piVar6[2] = param_3 & 0xfffffffc | piVar6[2] & 1U | 2;
    if (!bVar2) {
      return (int *)0x1;
    }
    if ((DAT_007ac848 == 0) && (DAT_007ac848 = FUN_0040bfd0(FUN_0041f65c), DAT_007ac848 == 0)) {
      uVar4 = 0xcd;
    }
    else {
      iVar3 = FUN_0040c89c(DAT_007ac848,piVar6);
      if (iVar3 != 0) {
        return (int *)0x1;
      }
      uVar4 = 0xd1;
    }
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_purp.c",uVar4,"X509_PURPOSE_add");
    FUN_00379a5c(0x22,0x8000f,0);
  }
  FUN_003c86b4(*(undefined8 *)(piVar6 + 6),"crypto/x509/v3_purp.c",0xd8);
  FUN_003c86b4(*(undefined8 *)(piVar6 + 8),"crypto/x509/v3_purp.c",0xd9);
  FUN_003c86b4(piVar6,"crypto/x509/v3_purp.c",0xda);
  return (int *)0x0;
}


// ===== 0041f65c  FUN_0041f65c =====

int FUN_0041f65c(undefined8 *param_1,undefined8 *param_2)

{
  return *(int *)*param_1 - *(int *)*param_2;
}


// ===== 0041f674  FUN_0041f674 =====

void FUN_0041f674(void)

{
  FUN_0040ca6c(DAT_007ac848,FUN_0041f6a4);
  DAT_007ac848 = 0;
  return;
}


// ===== 0041f6a4  FUN_0041f6a4 =====

void FUN_0041f6a4(long param_1)

{
  if (param_1 != 0) {
    if ((*(uint *)(param_1 + 8) & 1) != 0) {
      if ((*(uint *)(param_1 + 8) >> 1 & 1) != 0) {
        FUN_003c86b4(*(undefined8 *)(param_1 + 0x18),"crypto/x509/v3_purp.c",0xe5);
        FUN_003c86b4(*(undefined8 *)(param_1 + 0x20),"crypto/x509/v3_purp.c",0xe6);
      }
      FUN_003c86b4(param_1,"crypto/x509/v3_purp.c",0xe8);
      return;
    }
  }
  return;
}


// ===== 0041f710  FUN_0041f710 =====

undefined4 FUN_0041f710(undefined4 *param_1)

{
  return *param_1;
}


// ===== 0041f718  FUN_0041f718 =====

undefined8 FUN_0041f718(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 0041f720  FUN_0041f720 =====

undefined8 FUN_0041f720(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


// ===== 0041f728  FUN_0041f728 =====

undefined4 FUN_0041f728(long param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


// ===== 0041f730  FUN_0041f730 =====

ulong FUN_0041f730(void)

{
  ulong uVar1;
  long lVar2;
  int local_14;
  
  FUN_0042a760();
  uVar1 = FUN_003dd5b4();
  local_14 = (int)uVar1;
  if (local_14 != 0) {
    lVar2 = FUN_003dd608(&local_14,&DAT_0020eb80,0xd,4,FUN_004203a4);
    uVar1 = (ulong)(lVar2 != 0);
  }
  return uVar1;
}


// ===== 0041f780  FUN_0041f780 =====

undefined8 FUN_0041f780(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  long lVar5;
  
  if (param_2 == (long *)0x0) {
    return 0;
  }
  if (((*param_2 != 0) && (*(long *)(param_1 + 0xf8) != 0)) &&
     (iVar1 = thunk_FUN_0038ef94(), iVar1 != 0)) {
    return 0x1e;
  }
  if (param_2[2] != 0) {
    uVar3 = FUN_00426cb0(param_1);
    iVar1 = FUN_0038d110(uVar3,param_2[2]);
    if (iVar1 != 0) {
      return 0x1f;
    }
  }
  lVar5 = param_2[1];
  if ((lVar5 != 0) && (iVar1 = FUN_0040caf8(lVar5), 0 < iVar1)) {
    iVar1 = 0;
    do {
      piVar4 = (int *)FUN_0040cb0c(lVar5,iVar1);
      if (*piVar4 == 4) {
        lVar5 = *(long *)(piVar4 + 2);
        if (lVar5 == 0) {
          return 0;
        }
        uVar3 = FUN_00426a88(param_1);
        iVar1 = FUN_004267c8(lVar5,uVar3);
        if (iVar1 == 0) {
          return 0;
        }
        return 0x1f;
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0040caf8(lVar5);
    } while (iVar1 < iVar2);
  }
  return 0;
}


// ===== 0041f894  FUN_0041f894 =====

undefined4 FUN_0041f894(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int local_4;
  
  if (param_1 == 0) {
    return 0x18;
  }
  uVar2 = FUN_003dd5b4(*(undefined8 *)(param_2 + 0x20));
  iVar1 = FUN_003de640(uVar2,0,&local_4);
  if (iVar1 != 0) {
    uVar2 = FUN_003dce44(local_4);
    iVar1 = FUN_003a8020(param_1,uVar2);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = FUN_003a8020(param_1,&DAT_001f9542);
    uVar3 = 0;
    if (local_4 != 0x390 || iVar1 == 0) {
      uVar3 = 0x4d;
    }
    return uVar3;
  }
  return 0x4c;
}


// ===== 0041f930  FUN_0041f930 =====

void FUN_0041f930(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_003d518c(*(undefined8 *)(param_1 + 0x148));
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x400;
    FUN_003d519c(*(undefined8 *)(param_1 + 0x148));
    return;
  }
  return;
}


// ===== 0041f974  FUN_0041f974 =====

void FUN_0041f974(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xe0) = param_2;
  return;
}


// ===== 0041f97c  FUN_0041f97c =====

ulong FUN_0041f97c(long param_1)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar3 = FUN_0041e984();
  if ((int)uVar3 != 0) {
    uVar1 = *(uint *)(param_1 + 0xe8);
    if (((uVar1 >> 1 & 1) != 0) && ((*(byte *)(param_1 + 0xec) >> 2 & 1) == 0)) {
      return 0;
    }
    if ((uVar1 & 1) != 0) {
      return (ulong)(uVar1 >> 4 & 1);
    }
    bVar2 = (uVar1 & 0x2040) != 0x2040;
    uVar4 = 3;
    if (bVar2) {
      uVar4 = 4;
    }
    uVar3 = (ulong)uVar4;
    if ((bVar2) && ((uVar1 >> 1 & 1) == 0)) {
      if ((uVar1 >> 3 & 1) == 0) {
        return 0;
      }
      if ((*(byte *)(param_1 + 0xf4) & 7) == 0) {
        return 0;
      }
      uVar3 = 5;
    }
  }
  return uVar3;
}


// ===== 0041fa04  FUN_0041fa04 =====

undefined8 FUN_0041fa04(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0041fa80();
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if ((*(byte *)(param_2 + 0xe9) >> 2 & 1) == 0) {
    if (((*(uint *)(param_1 + 0xe8) >> 1 & 1) != 0) && ((*(byte *)(param_1 + 0xec) >> 2 & 1) == 0))
    {
      return 0x20;
    }
  }
  else if (((*(uint *)(param_1 + 0xe8) >> 1 & 1) != 0) && (-1 < *(char *)(param_1 + 0xec))) {
    return 0x27;
  }
  return 0;
}


// ===== 0041fa80  FUN_0041fa80 =====

ulong FUN_0041fa80(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  int local_14;
  
  uVar2 = FUN_00426ca0();
  uVar3 = FUN_00426a88(param_2);
  iVar1 = FUN_004267c8(uVar2,uVar3);
  if (iVar1 == 0) {
    iVar1 = FUN_0041e984(param_1);
    if ((iVar1 == 0) || (iVar1 = FUN_0041e984(param_2), iVar1 == 0)) {
      return 1;
    }
    uVar4 = FUN_0041f780(param_1,*(undefined8 *)(param_2 + 0x100));
    if ((int)uVar4 == 0) {
      lVar5 = FUN_00427350(param_1);
      if (lVar5 == 0) {
        return 0x18;
      }
      uVar2 = FUN_003dd5b4(*(undefined8 *)(param_2 + 0x20));
      iVar1 = FUN_003de640(uVar2,0,&local_14);
      if (iVar1 != 0) {
        uVar2 = FUN_003dce44(local_14);
        iVar1 = FUN_003a8020(lVar5,uVar2);
        if (iVar1 != 0) {
          return 0;
        }
        iVar1 = FUN_003a8020(lVar5,&DAT_001f9542);
        uVar6 = 0;
        if (local_14 != 0x390 || iVar1 == 0) {
          uVar6 = 0x4d;
        }
        return (ulong)uVar6;
      }
      return 0x4c;
    }
  }
  else {
    uVar4 = 0x1d;
  }
  return uVar4;
}


// ===== 0041fbb8  FUN_0041fbb8 =====

undefined8 FUN_0041fbb8(long param_1,long param_2)

{
  if ((*(byte *)(param_2 + 0xe9) >> 2 & 1) == 0) {
    if (((*(uint *)(param_1 + 0xe8) >> 1 & 1) != 0) && ((*(byte *)(param_1 + 0xec) >> 2 & 1) == 0))
    {
      return 0x20;
    }
  }
  else if (((*(uint *)(param_1 + 0xe8) >> 1 & 1) != 0) && (-1 < *(char *)(param_1 + 0xec))) {
    return 0x27;
  }
  return 0;
}


// ===== 0041fbf4  FUN_0041fbf4 =====

undefined4 FUN_0041fbf4(long param_1)

{
  FUN_0041e984();
  return *(undefined4 *)(param_1 + 0xe8);
}


// ===== 0041fc18  FUN_0041fc18 =====

ulong FUN_0041fc18(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0041e984();
  if ((int)uVar1 != 0) {
    if ((*(byte *)(param_1 + 0xe8) >> 1 & 1) != 0) {
      return (ulong)*(uint *)(param_1 + 0xec);
    }
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


// ===== 0041fc58  FUN_0041fc58 =====

ulong FUN_0041fc58(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0041e984();
  if ((int)uVar1 != 0) {
    if ((*(byte *)(param_1 + 0xe8) >> 2 & 1) != 0) {
      return (ulong)*(uint *)(param_1 + 0xf0);
    }
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


// ===== 0041fc98  FUN_0041fc98 =====

undefined8 FUN_0041fc98(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041e984();
  if (iVar1 != 0) {
    return *(undefined8 *)(param_1 + 0xf8);
  }
  return 0;
}


// ===== 0041fcd0  FUN_0041fcd0 =====

undefined8 FUN_0041fcd0(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041e984();
  if ((iVar1 != 0) && (*(undefined8 **)(param_1 + 0x100) != (undefined8 *)0x0)) {
    return **(undefined8 **)(param_1 + 0x100);
  }
  return 0;
}


// ===== 0041fd10  FUN_0041fd10 =====

undefined8 FUN_0041fd10(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041e984();
  if ((iVar1 != 0) && (*(long *)(param_1 + 0x100) != 0)) {
    return *(undefined8 *)(*(long *)(param_1 + 0x100) + 8);
  }
  return 0;
}


// ===== 0041fd50  FUN_0041fd50 =====

undefined8 FUN_0041fd50(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041e984();
  if ((iVar1 != 0) && (*(long *)(param_1 + 0x100) != 0)) {
    return *(undefined8 *)(*(long *)(param_1 + 0x100) + 0x10);
  }
  return 0;
}


// ===== 0041fd90  FUN_0041fd90 =====

undefined8 FUN_0041fd90(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041e984();
  if ((iVar1 != 0) && ((*(byte *)(param_1 + 0xe8) & 1) != 0)) {
    return *(undefined8 *)(param_1 + 0xd8);
  }
  return 0xffffffffffffffff;
}


// ===== 0041fdd0  FUN_0041fdd0 =====

undefined8 FUN_0041fdd0(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041e984();
  if ((iVar1 != 0) && ((*(byte *)(param_1 + 0xe9) >> 2 & 1) != 0)) {
    return *(undefined8 *)(param_1 + 0xe0);
  }
  return 0xffffffffffffffff;
}


// ===== 0041fe10  FUN_0041fe10 =====

uint FUN_0041fe10(undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0xe8);
  if (((uVar1 >> 2 & 1) == 0) || ((*(byte *)(param_2 + 0xf0) >> 1 & 1) != 0)) {
    if (param_3 == 0) {
      if ((((uVar1 >> 1 & 1) == 0) || ((*(byte *)(param_2 + 0xec) & 0x88) != 0)) &&
         (((uVar1 >> 3 & 1) == 0 || (*(char *)(param_2 + 0xf4) < '\0')))) {
        return 1;
      }
    }
    else if (((uVar1 >> 1 & 1) == 0) || ((*(byte *)(param_2 + 0xec) >> 2 & 1) != 0)) {
      if ((uVar1 & 1) != 0) {
        return uVar1 >> 4 & 1;
      }
      if (((uVar1 ^ 0xffffffff) & 0x2040) == 0) {
        return 1;
      }
      if ((uVar1 >> 1 & 1) != 0) {
        return 1;
      }
      if (((uVar1 >> 3 & 1) != 0) && ((*(uint *)(param_2 + 0xf4) & 7) != 0)) {
        return *(uint *)(param_2 + 0xf4) >> 2 & 1;
      }
    }
  }
  return 0;
}


// ===== 0041fe94  FUN_0041fe94 =====

uint FUN_0041fe94(undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0xe8);
  if (((uVar1 >> 2 & 1) == 0) || ((*(byte *)(param_2 + 0xf0) & 0x11) != 0)) {
    if (param_3 == 0) {
      if ((((uVar1 >> 3 & 1) == 0) || ((*(byte *)(param_2 + 0xf4) >> 6 & 1) != 0)) &&
         (((uVar1 >> 1 & 1) == 0 || ((*(byte *)(param_2 + 0xec) & 0xa8) != 0)))) {
        return 1;
      }
    }
    else if (((uVar1 >> 1 & 1) == 0) || ((*(byte *)(param_2 + 0xec) >> 2 & 1) != 0)) {
      if ((uVar1 & 1) != 0) {
        return uVar1 >> 4 & 1;
      }
      if (((uVar1 ^ 0xffffffff) & 0x2040) == 0) {
        return 1;
      }
      if ((uVar1 >> 1 & 1) != 0) {
        return 1;
      }
      if (((uVar1 >> 3 & 1) != 0) && ((*(uint *)(param_2 + 0xf4) & 7) != 0)) {
        return *(uint *)(param_2 + 0xf4) >> 2 & 1;
      }
    }
  }
  return 0;
}


// ===== 0041ff20  FUN_0041ff20 =====

uint FUN_0041ff20(undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0xe8);
  if (((uVar1 >> 2 & 1) == 0) || ((*(byte *)(param_2 + 0xf0) & 0x11) != 0)) {
    if (param_3 == 0) {
      if ((((uVar1 >> 3 & 1) == 0) || ((*(byte *)(param_2 + 0xf4) >> 6 & 1) != 0)) &&
         (((uVar1 >> 1 & 1) == 0 ||
          (((*(byte *)(param_2 + 0xec) & 0xa8) != 0 && ((*(byte *)(param_2 + 0xec) >> 5 & 1) != 0)))
          ))) {
        return 1;
      }
    }
    else if (((uVar1 >> 1 & 1) == 0) || ((*(byte *)(param_2 + 0xec) >> 2 & 1) != 0)) {
      if ((uVar1 & 1) != 0) {
        return uVar1 >> 4 & 1;
      }
      if (((uVar1 ^ 0xffffffff) & 0x2040) == 0) {
        return 1;
      }
      if ((uVar1 >> 1 & 1) != 0) {
        return 1;
      }
      if (((uVar1 >> 3 & 1) != 0) && ((*(uint *)(param_2 + 0xf4) & 7) != 0)) {
        return *(uint *)(param_2 + 0xf4) >> 2 & 1;
      }
    }
  }
  return 0;
}


// ===== 0041ffb4  FUN_0041ffb4 =====

uint FUN_0041ffb4(undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_2 + 0xe8);
  if (((uVar1 >> 2 & 1) == 0) || ((*(byte *)(param_2 + 0xf0) >> 2 & 1) != 0)) {
    if (param_3 == 0) {
      if (((uVar1 >> 3 & 1) == 0) || (uVar2 = *(uint *)(param_2 + 0xf4), (uVar2 >> 5 & 1) != 0)) {
        uVar2 = 1;
      }
      else {
        if ((uVar2 >> 7 & 1) == 0) {
          return 0;
        }
        uVar2 = uVar2 >> 6 & 2;
      }
      if (((uVar1 >> 1 & 1) == 0) || ((*(byte *)(param_2 + 0xec) & 0xc0) != 0)) {
        return uVar2;
      }
    }
    else if (((uVar1 >> 1 & 1) == 0) || ((*(byte *)(param_2 + 0xec) >> 2 & 1) != 0)) {
      if ((uVar1 & 1) == 0) {
        if ((uVar1 & 0x2040) == 0x2040) {
          return 3;
        }
        if ((uVar1 >> 1 & 1) != 0) {
          return 4;
        }
        if (((uVar1 >> 3 & 1) != 0) && ((*(byte *)(param_2 + 0xf4) >> 1 & 1) != 0)) {
          return 5;
        }
      }
      else if ((uVar1 >> 4 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}


// ===== 00420054  FUN_00420054 =====

uint FUN_00420054(undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_2 + 0xe8);
  if (((uVar1 >> 2 & 1) == 0) || ((*(byte *)(param_2 + 0xf0) >> 2 & 1) != 0)) {
    if (param_3 == 0) {
      if (((uVar1 >> 3 & 1) == 0) || (uVar2 = *(uint *)(param_2 + 0xf4), (uVar2 >> 5 & 1) != 0)) {
        uVar2 = 1;
      }
      else {
        if ((uVar2 >> 7 & 1) == 0) {
          return 0;
        }
        uVar2 = uVar2 >> 6 & 2;
      }
      if (((uVar1 >> 1 & 1) == 0) || ((*(byte *)(param_2 + 0xec) >> 5 & 1) != 0)) {
        return uVar2;
      }
    }
    else if (((uVar1 >> 1 & 1) == 0) || ((*(byte *)(param_2 + 0xec) >> 2 & 1) != 0)) {
      if ((uVar1 & 1) == 0) {
        if ((uVar1 & 0x2040) == 0x2040) {
          return 3;
        }
        if ((uVar1 >> 1 & 1) != 0) {
          return 4;
        }
        if (((uVar1 >> 3 & 1) != 0) && ((*(byte *)(param_2 + 0xf4) >> 1 & 1) != 0)) {
          return 5;
        }
      }
      else if ((uVar1 >> 4 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}


// ===== 004200ec  FUN_004200ec =====

uint FUN_004200ec(undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0xe8);
  if (param_3 == 0) {
    if ((uVar1 >> 1 & 1) != 0) {
      return *(uint *)(param_2 + 0xec) >> 1 & 1;
    }
    return 1;
  }
  if (((uVar1 >> 1 & 1) == 0) || ((*(byte *)(param_2 + 0xec) >> 2 & 1) != 0)) {
    if ((uVar1 & 1) != 0) {
      return uVar1 >> 4 & 1;
    }
    if ((uVar1 & 0x2040) == 0x2040) {
      return 3;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      return 4;
    }
    if (((uVar1 >> 3 & 1) != 0) && ((*(byte *)(param_2 + 0xf4) & 7) != 0)) {
      return 5;
    }
  }
  return 0;
}


// ===== 00420160  FUN_00420160 =====

undefined8 FUN_00420160(void)

{
  return 1;
}


// ===== 00420168  FUN_00420168 =====

uint FUN_00420168(undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 == 0) {
    return 1;
  }
  uVar1 = *(uint *)(param_2 + 0xe8);
  if (((uVar1 >> 1 & 1) == 0) || ((*(byte *)(param_2 + 0xec) >> 2 & 1) != 0)) {
    if ((uVar1 & 1) != 0) {
      return uVar1 >> 4 & 1;
    }
    if ((uVar1 & 0x2040) == 0x2040) {
      return 3;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      return 4;
    }
    if (((uVar1 >> 3 & 1) != 0) && ((*(byte *)(param_2 + 0xf4) & 7) != 0)) {
      return 5;
    }
  }
  return 0;
}


// ===== 004201cc  FUN_004201cc =====

ulong FUN_004201cc(undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar1 = *(uint *)(param_2 + 0xe8);
  if (param_3 == 0) {
    if ((uVar1 >> 1 & 1) == 0) {
      if ((uVar1 >> 2 & 1) == 0) {
        return 0;
      }
    }
    else {
      if ((uVar1 >> 2 & 1) == 0) {
        return 0;
      }
      if (*(uint *)(param_2 + 0xec) == 0) {
        return 0;
      }
      if ((*(uint *)(param_2 + 0xec) & 0xffffff3f) != 0) {
        return 0;
      }
    }
    if (*(int *)(param_2 + 0xf0) == 0x40) {
      iVar3 = FUN_00427660(param_2,0x7e,0xffffffff);
      if (-1 < iVar3) {
        FUN_00427678(param_2,iVar3);
        uVar4 = FUN_0042a77c();
        if ((int)uVar4 == 0) {
          return uVar4;
        }
      }
      return 1;
    }
  }
  else if (((uVar1 >> 1 & 1) == 0) || ((*(byte *)(param_2 + 0xec) >> 2 & 1) != 0)) {
    if ((uVar1 & 1) != 0) {
      return (ulong)(uVar1 >> 4 & 1);
    }
    bVar2 = (uVar1 & 0x2040) == 0x2040;
    uVar5 = 3;
    if (!bVar2) {
      uVar5 = 4;
    }
    if (bVar2) {
      return (ulong)uVar5;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      return (ulong)uVar5;
    }
    if (((uVar1 >> 3 & 1) != 0) && ((*(byte *)(param_2 + 0xf4) & 7) != 0)) {
      return 5;
    }
  }
  return 0;
}


// ===== 004202a0  FUN_004202a0 =====

ulong FUN_004202a0(undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar1 = *(uint *)(param_2 + 0xe8);
  if (param_3 == 0) {
    if (((uVar1 >> 1 & 1) != 0) && ((*(uint *)(param_2 + 0xec) & 0x86) == 0x80)) {
      iVar3 = FUN_00427660(param_2,0x53,0xffffffff);
      if (iVar3 < 0) {
        uVar4 = 0;
      }
      else {
        FUN_00427678(param_2,iVar3);
        uVar4 = FUN_0042a77c();
        if ((int)uVar4 != 0) {
          if ((*(byte *)(param_2 + 0xe8) >> 2 & 1) == 0) {
            return 0;
          }
          if ((*(uint *)(param_2 + 0xf0) >> 3 & 1) != 0) {
            return (ulong)((*(uint *)(param_2 + 0xf0) & 0x101) == 0);
          }
          return 0;
        }
      }
      return uVar4;
    }
  }
  else if (((uVar1 >> 1 & 1) == 0) || ((*(byte *)(param_2 + 0xec) >> 2 & 1) != 0)) {
    if ((uVar1 & 1) != 0) {
      return (ulong)(uVar1 >> 4 & 1);
    }
    bVar2 = (uVar1 & 0x2040) == 0x2040;
    uVar5 = 3;
    if (!bVar2) {
      uVar5 = 4;
    }
    if (bVar2) {
      return (ulong)uVar5;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      return (ulong)uVar5;
    }
    if (((uVar1 >> 3 & 1) != 0) && ((*(byte *)(param_2 + 0xf4) & 7) != 0)) {
      return 5;
    }
  }
  return 0;
}


// ===== 004203a4  FUN_004203a4 =====

int FUN_004203a4(int *param_1,int *param_2)

{
  return *param_1 - *param_2;
}


// ===== 004203b4  FUN_004203b4 =====

long FUN_004203b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  iVar1 = FUN_0040caf8(param_2);
  if (iVar1 < 1) {
    lVar4 = param_3;
    if (param_3 == 0) {
      lVar4 = FUN_0040bf0c();
      return lVar4;
    }
  }
  else {
    iVar1 = 0;
    lVar5 = param_3;
    do {
      uVar3 = FUN_0040cb0c(param_2,iVar1);
      lVar4 = FUN_004208cc(uVar3,uVar3,lVar5);
      if (lVar4 == 0) {
        if (param_3 == 0) {
          FUN_0040ca6c(lVar5,PTR_FUN_007a1b70);
        }
        return 0;
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0040caf8(param_2);
      lVar5 = lVar4;
    } while (iVar1 < iVar2);
  }
  return lVar4;
}


// ===== 00420484  FUN_00420484 =====

long FUN_00420484(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  iVar1 = FUN_0040caf8(param_3);
  lVar3 = FUN_0040bf38(0,iVar1);
  if (lVar3 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_san.c",0x185,"v2i_subject_alt");
    FUN_00379a5c(0x22,0x8000f,0);
    FUN_0040bd78(0);
  }
  else if (0 < iVar1) {
    iVar5 = 0;
    do {
      lVar4 = FUN_0040cb0c(param_3,iVar5);
      iVar2 = FUN_00423878(*(undefined8 *)(lVar4 + 8),"email");
      if (((iVar2 == 0) && (*(char **)(lVar4 + 0x10) != (char *)0x0)) &&
         (iVar2 = strcmp(*(char **)(lVar4 + 0x10),"copy"), iVar2 == 0)) {
        iVar2 = FUN_00421644(param_2,lVar3,0);
joined_r0x004205b0:
        if (iVar2 == 0) {
LAB_004205b4:
          FUN_0040ca6c(lVar3,PTR_FUN_007a1c88);
          return 0;
        }
      }
      else {
        iVar2 = FUN_00423878(*(undefined8 *)(lVar4 + 8),"email");
        if (((iVar2 == 0) && (*(char **)(lVar4 + 0x10) != (char *)0x0)) &&
           (iVar2 = strcmp(*(char **)(lVar4 + 0x10),"move"), iVar2 == 0)) {
          iVar2 = FUN_00421644(param_2,lVar3,1);
          goto joined_r0x004205b0;
        }
        lVar4 = FUN_004210a0(0,param_1,param_2,lVar4,0);
        if (lVar4 == 0) goto LAB_004205b4;
        FUN_0040c89c(lVar3,lVar4);
      }
      iVar5 = iVar5 + 1;
    } while (iVar1 != iVar5);
  }
  return lVar3;
}


// ===== 00420624  FUN_00420624 =====

long FUN_00420624(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int iVar8;
  
  iVar1 = FUN_0040caf8(param_3);
  lVar4 = FUN_0040bf38(0,iVar1);
  if (lVar4 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_san.c",0x136,"v2i_issuer_alt");
    FUN_00379a5c(0x22,0x8000f,0);
    FUN_0040bd78(0);
  }
  else if (0 < iVar1) {
    if (param_2 == (byte *)0x0) {
      iVar8 = 0;
      do {
        lVar5 = FUN_0040cb0c(param_3,iVar8);
        iVar2 = FUN_00423878(*(undefined8 *)(lVar5 + 8),"issuer");
        if (((iVar2 == 0) && (*(char **)(lVar5 + 0x10) != (char *)0x0)) &&
           (iVar2 = strcmp(*(char **)(lVar5 + 0x10),"copy"), iVar2 == 0)) goto LAB_00420848;
        lVar5 = FUN_004210a0(0,param_1,0,lVar5,0);
        if (lVar5 == 0) goto LAB_00420898;
        FUN_0040c89c(lVar4,lVar5);
        iVar8 = iVar8 + 1;
      } while (iVar1 != iVar8);
    }
    else {
      iVar8 = 0;
      do {
        lVar5 = FUN_0040cb0c(param_3,iVar8);
        iVar2 = FUN_00423878(*(undefined8 *)(lVar5 + 8),"issuer");
        if (((iVar2 == 0) && (*(char **)(lVar5 + 0x10) != (char *)0x0)) &&
           (iVar2 = strcmp(*(char **)(lVar5 + 0x10),"copy"), iVar2 == 0)) {
          if ((*param_2 & 1) == 0) {
            if (*(long *)(param_2 + 8) == 0) goto LAB_00420848;
            iVar2 = FUN_00427660(*(long *)(param_2 + 8),0x55,0xffffffff);
            if (-1 < iVar2) {
              lVar5 = FUN_00427678(*(undefined8 *)(param_2 + 8),iVar2);
              if ((lVar5 == 0) || (lVar5 = FUN_004160e8(), lVar5 == 0)) {
                uVar7 = 0x7e;
                uVar6 = 0x163;
                goto LAB_0042086c;
              }
              iVar2 = FUN_0040caf8();
              iVar3 = FUN_0040c1e8(lVar4,iVar2);
              if (iVar3 == 0) {
                uVar6 = 0x169;
                uVar7 = 0x8000f;
                goto LAB_0042086c;
              }
              if (0 < iVar2) {
                iVar3 = 0;
                do {
                  uVar6 = FUN_0040cb0c(lVar5,iVar3);
                  FUN_0040c89c(lVar4,uVar6);
                  iVar3 = iVar3 + 1;
                } while (iVar2 != iVar3);
              }
              FUN_0040bd78(lVar5);
            }
          }
        }
        else {
          lVar5 = FUN_004210a0(0,param_1,param_2,lVar5,0);
          if (lVar5 == 0) goto LAB_00420898;
          FUN_0040c89c(lVar4,lVar5);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 != iVar1);
    }
  }
  return lVar4;
LAB_00420848:
  uVar7 = 0x7f;
  uVar6 = 0x15b;
LAB_0042086c:
  FUN_00379868();
  FUN_0037995c("crypto/x509/v3_san.c",uVar6,"copy_issuer");
  FUN_00379a5c(0x22,uVar7,0);
LAB_00420898:
  FUN_0040ca6c(lVar4,PTR_FUN_007a1c88);
  return 0;
}


// ===== 004208cc  FUN_004208cc =====

/* WARNING: Type propagation algorithm not settling */

long FUN_004208cc(undefined8 param_1,int *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined1 auStack_264 [256];
  undefined1 auStack_164 [300];
  long local_38;
  
  iVar1 = *param_2;
  local_38 = param_3;
  if (iVar1 < 4) {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        iVar1 = FUN_003dd5b4(**(undefined8 **)(param_2 + 2));
        puVar3 = *(undefined8 **)(param_2 + 2);
        if (iVar1 < 0x4b9) {
          if (iVar1 == 0x289) {
            if (*(int *)puVar3[1] != 0xc) {
              return 0;
            }
            piVar4 = *(int **)((int *)puVar3[1] + 2);
            iVar1 = thunk_FUN_00422a84("othername: UPN:",*(undefined8 *)(piVar4 + 2),(long)*piVar4,
                                       &local_38);
            goto joined_r0x00420c14;
          }
          if (iVar1 == 0x4b8) {
            if (*(int *)puVar3[1] != 0xc) {
              return 0;
            }
            piVar4 = *(int **)((int *)puVar3[1] + 2);
            iVar1 = thunk_FUN_00422a84("othername: SmtpUTF8Mailbox:",*(undefined8 *)(piVar4 + 2),
                                       (long)*piVar4,&local_38);
            goto joined_r0x00420c14;
          }
        }
        else {
          if (iVar1 == 0x4b9) {
            if (*(int *)puVar3[1] != 0xc) {
              return 0;
            }
            piVar4 = *(int **)((int *)puVar3[1] + 2);
            iVar1 = thunk_FUN_00422a84("othername: XmppAddr:",*(undefined8 *)(piVar4 + 2),
                                       (long)*piVar4,&local_38);
            if (iVar1 == 0) {
              return 0;
            }
            return local_38;
          }
          if (iVar1 == 0x4ba) {
            if (*(int *)puVar3[1] != 0x16) {
              return 0;
            }
            piVar4 = *(int **)((int *)puVar3[1] + 2);
            iVar1 = thunk_FUN_00422a84("othername: SRVName:",*(undefined8 *)(piVar4 + 2),
                                       (long)*piVar4,&local_38);
            goto joined_r0x00420c14;
          }
          if (iVar1 == 0x4bb) {
            if (*(int *)puVar3[1] != 0xc) {
              return 0;
            }
            piVar4 = *(int **)((int *)puVar3[1] + 2);
            iVar1 = thunk_FUN_00422a84("othername: NAIRealm:",*(undefined8 *)(piVar4 + 2),
                                       (long)*piVar4,&local_38);
            goto joined_r0x00420c14;
          }
        }
        iVar1 = FUN_003dd260(auStack_264,0x100,*puVar3,0);
        if (iVar1 < 1) {
          FUN_003ca460(auStack_164,"othername:",300);
        }
        else {
          FUN_0037cd5c(auStack_164,300,"othername: %s:",auStack_264);
        }
        piVar4 = *(int **)(*(long *)(param_2 + 2) + 8);
        iVar1 = *piVar4;
        if (iVar1 == 0x16) {
          iVar1 = thunk_FUN_00422a84(auStack_164,*(undefined8 *)(*(int **)(piVar4 + 2) + 2),
                                     (long)**(int **)(piVar4 + 2),&local_38);
          if (iVar1 != 0) {
            return local_38;
          }
          piVar4 = *(int **)(*(long *)(param_2 + 2) + 8);
          iVar1 = *piVar4;
        }
        if ((iVar1 == 0xc) &&
           (iVar1 = thunk_FUN_00422a84(auStack_164,*(undefined8 *)(*(int **)(piVar4 + 2) + 2),
                                       (long)**(int **)(piVar4 + 2),&local_38), iVar1 != 0)) {
          return local_38;
        }
        iVar1 = FUN_00422a24(auStack_164,"<unsupported>",&local_38);
      }
      else {
        if (iVar1 != 1) {
          return param_3;
        }
        iVar1 = thunk_FUN_00422a84("email",*(undefined8 *)(*(int **)(param_2 + 2) + 2),
                                   (long)**(int **)(param_2 + 2),&local_38);
      }
    }
    else {
      if (iVar1 != 2) {
        if (iVar1 != 3) {
          return param_3;
        }
        iVar1 = FUN_00422a24("X400Name","<unsupported>",&local_38);
        if (iVar1 != 0) {
          return local_38;
        }
        return 0;
      }
      iVar1 = thunk_FUN_00422a84(&DAT_001b8201,*(undefined8 *)(*(int **)(param_2 + 2) + 2),
                                 (long)**(int **)(param_2 + 2),&local_38);
    }
  }
  else if (iVar1 < 6) {
    if (iVar1 != 4) {
      if (iVar1 != 5) {
        return param_3;
      }
      iVar1 = FUN_00422a24("EdiPartyName","<unsupported>",&local_38);
      if (iVar1 != 0) {
        return local_38;
      }
      return 0;
    }
    lVar2 = FUN_00428ff8(*(undefined8 *)(param_2 + 2),auStack_264,0x100);
    if (lVar2 == 0) {
      return 0;
    }
    iVar1 = FUN_00422a24("DirName",auStack_264,&local_38);
  }
  else {
    if (iVar1 != 6) {
      if (iVar1 == 7) {
        lVar2 = FUN_004244fc(*(undefined8 *)(*(undefined4 **)(param_2 + 2) + 2),
                             **(undefined4 **)(param_2 + 2));
        if ((lVar2 == 0) || (iVar1 = FUN_00422a24("IP Address",lVar2,&local_38), iVar1 == 0)) {
          local_38 = 0;
        }
        FUN_003c86b4(lVar2,"crypto/x509/v3_san.c",0xc3);
        return local_38;
      }
      if (iVar1 != 8) {
        return param_3;
      }
      FUN_00399b58(auStack_264,0x100,*(undefined8 *)(param_2 + 2));
      iVar1 = FUN_00422a24("Registered ID",auStack_264,&local_38);
      if (iVar1 != 0) {
        return local_38;
      }
      return 0;
    }
    iVar1 = thunk_FUN_00422a84(&DAT_001ba7d2,*(undefined8 *)(*(int **)(param_2 + 2) + 2),
                               (long)**(int **)(param_2 + 2),&local_38);
  }
joined_r0x00420c14:
  if (iVar1 != 0) {
    return local_38;
  }
  return 0;
}


// ===== 00420d30  FUN_00420d30 =====

undefined8 FUN_00420d30(undefined8 param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  iVar1 = *param_2;
  if (3 < iVar1) {
    if (5 < iVar1) {
      if (iVar1 != 6) {
        if (iVar1 == 7) {
          lVar2 = FUN_004244fc(*(undefined8 *)(*(undefined4 **)(param_2 + 2) + 2),
                               **(undefined4 **)(param_2 + 2));
          if (lVar2 != 0) {
            FUN_0037b9f8(param_1,"IP Address:%s",lVar2);
            FUN_003c86b4(lVar2,"crypto/x509/v3_san.c",0x122);
            return 1;
          }
          return 0;
        }
        if (iVar1 == 8) {
          FUN_0037b9f8(param_1,"Registered ID:");
          FUN_00399b60(param_1,*(undefined8 *)(param_2 + 2));
          return 1;
        }
        return 1;
      }
      pcVar3 = "URI:";
      goto LAB_00420e48;
    }
    if (iVar1 == 4) {
      FUN_0037b9f8(param_1,"DirName:");
      FUN_003e26a0(param_1,*(undefined8 *)(param_2 + 2),0,0x82031f);
      return 1;
    }
    if (iVar1 != 5) {
      return 1;
    }
    pcVar3 = "EdiPartyName:<unsupported>";
LAB_00420f2c:
    FUN_0037b9f8(param_1,pcVar3);
    return 1;
  }
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      iVar1 = FUN_003dd5b4(**(undefined8 **)(param_2 + 2));
      piVar5 = *(int **)(*(long *)(param_2 + 2) + 8);
      if (iVar1 == 0x4ba) {
        if (*piVar5 == 0x16) {
          puVar4 = *(undefined4 **)(piVar5 + 2);
          pcVar3 = "othername:SRVName:%.*s";
          goto LAB_00420e20;
        }
      }
      else if (*piVar5 == 0xc) {
        if (iVar1 < 0x4b9) {
          if (iVar1 == 0x289) {
            puVar4 = *(undefined4 **)(piVar5 + 2);
            pcVar3 = "othername:UPN:%.*s";
LAB_00420e20:
            FUN_0037b9f8(param_1,pcVar3,*puVar4,*(undefined8 *)(puVar4 + 2));
            return 1;
          }
          if (iVar1 == 0x4b8) {
            puVar4 = *(undefined4 **)(piVar5 + 2);
            pcVar3 = "othername:SmtpUTF8Mailbox:%.*s";
            goto LAB_00420e20;
          }
        }
        else {
          if (iVar1 == 0x4b9) {
            puVar4 = *(undefined4 **)(piVar5 + 2);
            pcVar3 = "othername:XmppAddr:%.*s";
            goto LAB_00420e20;
          }
          if (iVar1 == 0x4bb) {
            puVar4 = *(undefined4 **)(piVar5 + 2);
            pcVar3 = "othername:NAIRealm:%.*s";
            goto LAB_00420e20;
          }
        }
      }
      pcVar3 = "othername:<unsupported>";
      goto LAB_00420f2c;
    }
    if (iVar1 != 1) {
      return 1;
    }
    pcVar3 = "email:";
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return 1;
      }
      pcVar3 = "X400Name:<unsupported>";
      goto LAB_00420f2c;
    }
    pcVar3 = "DNS:";
  }
LAB_00420e48:
  FUN_0037b9f8(param_1,pcVar3);
  FUN_0041b6bc(param_1,*(undefined8 *)(param_2 + 2));
  return 1;
}


// ===== 00420f64  FUN_00420f64 =====

long FUN_00420f64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  
  iVar1 = FUN_0040caf8(param_3);
  lVar2 = FUN_0040bf38(0,iVar1);
  if (lVar2 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_san.c",0x1e5,"v2i_GENERAL_NAMES");
    FUN_00379a5c(0x22,0x8000f,0);
    FUN_0040bd78(0);
    return 0;
  }
  if (0 < iVar1) {
    iVar5 = 0;
    do {
      uVar3 = FUN_0040cb0c(param_3,iVar5);
      lVar4 = FUN_004210a0(0,param_1,param_2,uVar3,0);
      if (lVar4 == 0) {
        FUN_0040ca6c(lVar2,PTR_FUN_007a1c88);
        return 0;
      }
      FUN_0040c89c(lVar2,lVar4);
      iVar5 = iVar5 + 1;
    } while (iVar1 != iVar5);
  }
  return lVar2;
}


// ===== 00421084  FUN_00421084 =====

void FUN_00421084(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_004210a0(0,param_1,param_2,param_3,0);
  return;
}


// ===== 004210a0  FUN_004210a0 =====

undefined8
FUN_004210a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_4 + 0x10);
  if (lVar3 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_san.c",0x265,"v2i_GENERAL_NAME_ex");
    FUN_00379a5c(0x22,0x7c,0);
    return 0;
  }
  uVar4 = *(undefined8 *)(param_4 + 8);
  iVar1 = FUN_00423878(uVar4,"email");
  if (iVar1 == 0) {
    uVar2 = 1;
    uVar4 = extraout_x1;
  }
  else {
    iVar1 = FUN_00423878(uVar4,&DAT_001ba7d2);
    if (iVar1 == 0) {
      uVar2 = 6;
      uVar4 = extraout_x1_00;
    }
    else {
      iVar1 = FUN_00423878(uVar4,&DAT_001b8201);
      if (iVar1 == 0) {
        uVar2 = 2;
        uVar4 = extraout_x1_01;
      }
      else {
        iVar1 = FUN_00423878(uVar4,&DAT_001d4353);
        if (iVar1 == 0) {
          uVar2 = 8;
          uVar4 = extraout_x1_02;
        }
        else {
          iVar1 = FUN_00423878(uVar4,&DAT_001da90b);
          if (iVar1 == 0) {
            uVar2 = 7;
            uVar4 = extraout_x1_03;
          }
          else {
            iVar1 = FUN_00423878(uVar4,"dirName");
            if (iVar1 == 0) {
              uVar2 = 4;
              uVar4 = extraout_x1_04;
            }
            else {
              iVar1 = FUN_00423878(uVar4,"otherName");
              if (iVar1 != 0) {
                FUN_00379868();
                FUN_0037995c("crypto/x509/v3_san.c",0x278,"v2i_GENERAL_NAME_ex");
                FUN_00379a5c(0x22,0x75,"name=%s",uVar4);
                return 0;
              }
              uVar2 = 0;
              uVar4 = extraout_x1_05;
            }
          }
        }
      }
    }
  }
  uVar4 = FUN_00421240(param_1,uVar4,param_3,uVar2,lVar3,param_5);
  return uVar4;
}


// ===== 00421240  FUN_00421240 =====

int * FUN_00421240(int *param_1,undefined8 param_2,undefined8 param_3,int param_4,char *param_5,
                  int param_6)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  if (param_5 == (char *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_san.c",0x205,"a2i_GENERAL_NAME");
    FUN_00379a5c(0x22,0x7c,0);
    return (int *)0x0;
  }
  piVar2 = param_1;
  if ((param_1 == (int *)0x0) && (piVar2 = (int *)FUN_00418740(), piVar2 == (int *)0x0)) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_san.c",0x20e,"a2i_GENERAL_NAME");
    FUN_00379a5c(0x22,0x8000d,0);
    return (int *)0x0;
  }
  if (param_4 < 6) {
    if (1 < param_4 - 1U) {
      if (param_4 == 0) {
        pcVar6 = strchr(param_5,0x3b);
        if (pcVar6 != (char *)0x0) {
          lVar3 = FUN_004186c8();
          *(long *)(piVar2 + 2) = lVar3;
          if (lVar3 != 0) {
            FUN_0038a658(*(undefined8 *)(lVar3 + 8));
            lVar3 = FUN_003bf254(pcVar6 + 1,param_3);
            *(long *)(*(long *)(piVar2 + 2) + 8) = lVar3;
            if ((lVar3 != 0) &&
               (lVar3 = FUN_003ca354(param_5,(long)((int)pcVar6 - (int)param_5),
                                     "crypto/x509/v3_san.c",0x292), lVar3 != 0)) {
              uVar7 = FUN_003dce7c(lVar3,0);
              **(undefined8 **)(piVar2 + 2) = uVar7;
              FUN_003c86b4(lVar3,"crypto/x509/v3_san.c",0x296);
              if (**(long **)(piVar2 + 2) != 0) goto LAB_0042151c;
            }
            FUN_004186d4(*(undefined8 *)(piVar2 + 2));
            piVar2[2] = 0;
            piVar2[3] = 0;
          }
        }
        FUN_00379868();
        FUN_0037995c("crypto/x509/v3_san.c",0x23b,"a2i_GENERAL_NAME");
        FUN_00379a5c(0x22,0x93,0);
        goto joined_r0x00421420;
      }
      if (param_4 == 4) {
        lVar3 = FUN_0043b554();
        if (lVar3 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = FUN_004156c8(param_3,param_5);
          if (lVar4 == 0) {
            FUN_00379868();
            FUN_0037995c("crypto/x509/v3_san.c",0x2ab,"do_dirname");
            FUN_00379a5c(0x22,0x96,"section=%s",param_5);
          }
          else {
            iVar1 = FUN_00424920(lVar3,lVar4,0x1001);
            if (iVar1 != 0) {
              *(long *)(piVar2 + 2) = lVar3;
              FUN_00415744(param_3,lVar4);
              goto LAB_0042151c;
            }
          }
        }
        FUN_0043b560(lVar3);
        FUN_00415744(param_3,lVar4);
        FUN_00379868();
        FUN_0037995c("crypto/x509/v3_san.c",0x234,"a2i_GENERAL_NAME");
        FUN_00379a5c(0x22,0x95,0);
        goto joined_r0x00421420;
      }
LAB_004213f4:
      FUN_00379868();
      FUN_0037995c("crypto/x509/v3_san.c",0x240,"a2i_GENERAL_NAME");
      FUN_00379a5c(0x22,0xa7,0);
      goto joined_r0x00421420;
    }
  }
  else if (param_4 != 6) {
    if (param_4 == 7) {
      if (param_6 == 0) {
        lVar3 = FUN_004246c4(param_5);
        *(long *)(piVar2 + 2) = lVar3;
      }
      else {
        lVar3 = FUN_00424734();
        *(long *)(piVar2 + 2) = lVar3;
      }
      if (lVar3 == 0) {
        FUN_00379868();
        FUN_0037995c("crypto/x509/v3_san.c",0x22c,"a2i_GENERAL_NAME");
        FUN_00379a5c(0x22,0x76,"value=%s",param_5);
        goto joined_r0x00421420;
      }
      goto LAB_0042151c;
    }
    if (param_4 == 8) {
      lVar3 = FUN_003dce7c(param_5,0);
      if (lVar3 != 0) {
        *(long *)(piVar2 + 2) = lVar3;
        goto LAB_0042151c;
      }
      FUN_00379868();
      FUN_0037995c("crypto/x509/v3_san.c",0x21e,"a2i_GENERAL_NAME");
      FUN_00379a5c(0x22,0x77,"value=%s",param_5);
      goto joined_r0x00421420;
    }
    goto LAB_004213f4;
  }
  lVar3 = FUN_0038a4a8();
  *(long *)(piVar2 + 2) = lVar3;
  if (lVar3 != 0) {
    sVar5 = strlen(param_5);
    iVar1 = FUN_0038ebe0(lVar3,param_5,sVar5);
    if (iVar1 != 0) {
LAB_0042151c:
      *piVar2 = param_4;
      return piVar2;
    }
    lVar3 = *(long *)(piVar2 + 2);
  }
  thunk_FUN_0038eddc(lVar3);
  piVar2[2] = 0;
  piVar2[3] = 0;
  FUN_00379868();
  FUN_0037995c("crypto/x509/v3_san.c",0x24a,"a2i_GENERAL_NAME");
  FUN_00379a5c(0x22,0x8000d,0);
joined_r0x00421420:
  if (param_1 == (int *)0x0) {
    FUN_0041874c(piVar2);
  }
  return (int *)0x0;
}


// ===== 00421644  FUN_00421644 =====

undefined8 FUN_00421644(byte *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  
  if (param_1 == (byte *)0x0) {
LAB_004217a0:
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_san.c",0x1b1,"copy_email");
    FUN_00379a5c(0x22,0x7d,0);
    return 0;
  }
  if ((*param_1 & 1) != 0) {
    return 1;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_004217a0;
    uVar3 = FUN_00429a50();
    if (param_3 == 0) goto LAB_00421730;
LAB_00421690:
    iVar1 = -1;
    do {
      iVar1 = FUN_00432e14(uVar3,0x30,iVar1);
      if (iVar1 < 0) {
        return 1;
      }
      uVar4 = FUN_00432da4(uVar3,iVar1);
      FUN_00432d98();
      lVar5 = FUN_0038ed00();
      FUN_00432ec4(uVar3,iVar1);
      FUN_0043b514(uVar4);
      if (lVar5 == 0) goto LAB_004217ec;
      puVar6 = (undefined4 *)FUN_00418740();
      if (puVar6 == (undefined4 *)0x0) goto LAB_004217f0;
      *(long *)(puVar6 + 2) = lVar5;
      iVar1 = iVar1 + -1;
      *puVar6 = 1;
      iVar2 = FUN_0040c89c(param_2,puVar6);
    } while (iVar2 != 0);
  }
  else {
    uVar3 = FUN_00426ca0(*(long *)(param_1 + 0x10));
    if (param_3 != 0) goto LAB_00421690;
LAB_00421730:
    iVar1 = -1;
    do {
      iVar1 = FUN_00432e14(uVar3,0x30,iVar1);
      if (iVar1 < 0) {
        return 1;
      }
      FUN_00432da4(uVar3,iVar1);
      FUN_00432d98();
      lVar5 = FUN_0038ed00();
      if (lVar5 == 0) goto LAB_004217ec;
      puVar6 = (undefined4 *)FUN_00418740();
      if (puVar6 == (undefined4 *)0x0) goto LAB_004217f0;
      *(long *)(puVar6 + 2) = lVar5;
      *puVar6 = 1;
      iVar2 = FUN_0040c89c(param_2,puVar6);
    } while (iVar2 != 0);
  }
  lVar5 = 0;
  uVar7 = 0x8000f;
  uVar3 = 0x1cb;
LAB_004217f4:
  FUN_00379868();
  FUN_0037995c("crypto/x509/v3_san.c",uVar3,"copy_email");
  FUN_00379a5c(0x22,uVar7,0);
  FUN_0041874c(puVar6);
  thunk_FUN_0038eddc(lVar5);
  return 0;
LAB_004217ec:
  puVar6 = (undefined4 *)0x0;
LAB_004217f0:
  uVar7 = 0x8000d;
  uVar3 = 0x1c4;
  goto LAB_004217f4;
}


// ===== 0042184c  FUN_0042184c =====

void FUN_0042184c(void)

{
  FUN_003ca2f4(&DAT_001b77b8,"crypto/x509/v3_single_use.c",0x20);
  return;
}


// ===== 00421864  thunk_FUN_0038a5f8 =====

void thunk_FUN_0038a5f8(void)

{
  FUN_0039a5f4(&DAT_00765390);
  return;
}


// ===== 00421868  FUN_00421868 =====

undefined8 FUN_00421868(void)

{
  return 1;
}


// ===== 00421870  thunk_FUN_0038a5f8 =====

void thunk_FUN_0038a5f8(void)

{
  FUN_0039a5f4(&DAT_00765390);
  return;
}


// ===== 00421874  FUN_00421874 =====

void FUN_00421874(undefined8 param_1,int *param_2)

{
  FUN_003caa1c(*(undefined8 *)(param_2 + 2),(long)*param_2);
  return;
}


// ===== 00421880  FUN_00421880 =====

undefined4 * FUN_00421880(undefined8 param_1,byte *param_2,char *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_28 [2];
  
  iVar1 = strcmp(param_3,"none");
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)FUN_0038a358();
    return puVar2;
  }
  iVar1 = strcmp(param_3,"hash");
  if (iVar1 == 0) {
    if (param_2 != (byte *)0x0) {
      if ((*param_2 & 1) != 0) {
        puVar2 = (undefined4 *)FUN_0038a358();
        return puVar2;
      }
      if (*(long *)(param_2 + 0x10) != 0) {
        puVar2 = (undefined4 *)FUN_00421a98(*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x50));
        return puVar2;
      }
      if (*(long *)(param_2 + 0x18) != 0) {
        puVar2 = (undefined4 *)FUN_00421a98(*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x28));
        return puVar2;
      }
    }
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_skid.c",0x68,"s2i_skey_id");
    uVar4 = 0x7d;
  }
  else {
    puVar2 = (undefined4 *)FUN_0038a358();
    if (puVar2 != (undefined4 *)0x0) {
      lVar3 = FUN_003ca840(param_3,local_28);
      *(long *)(puVar2 + 2) = lVar3;
      if (lVar3 != 0) {
        *puVar2 = local_28[0];
        return puVar2;
      }
      thunk_FUN_0038eddc();
      return (undefined4 *)0x0;
    }
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_skid.c",0x28,"s2i_ASN1_OCTET_STRING");
    uVar4 = 0x8000d;
  }
  FUN_00379a5c(0x22,uVar4,0);
  return (undefined4 *)0x0;
}


// ===== 004219e8  FUN_004219e8 =====

undefined4 * FUN_004219e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 local_28 [2];
  
  puVar1 = (undefined4 *)FUN_0038a358();
  if (puVar1 == (undefined4 *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_skid.c",0x28,"s2i_ASN1_OCTET_STRING");
    FUN_00379a5c(0x22,0x8000d,0);
    return (undefined4 *)0x0;
  }
  lVar2 = FUN_003ca840(param_3,local_28);
  *(long *)(puVar1 + 2) = lVar2;
  if (lVar2 != 0) {
    *puVar1 = local_28[0];
    return puVar1;
  }
  thunk_FUN_0038eddc();
  return (undefined4 *)0x0;
}


// ===== 00421a98  FUN_00421a98 =====

long FUN_00421a98(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined1 auStack_74 [64];
  int local_34;
  undefined8 local_18;
  
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_skid.c",0x43,"ossl_x509_pubkey_hash");
    FUN_00379a5c(0x22,0x72,0);
  }
  else {
    iVar1 = FUN_0043d20c(&local_88,&uStack_80,param_1);
    if (iVar1 != 0) {
      lVar2 = FUN_0039e6f4(local_88,&DAT_001eef82,uStack_80);
      lVar3 = lVar2;
      if (lVar2 != 0) {
        lVar3 = FUN_0038a358();
        if (lVar3 == 0) {
          FUN_0039d050(lVar2);
          return 0;
        }
        FUN_0043d100(0,&local_18,&local_34,0,param_1);
        iVar1 = FUN_0039e518(local_18,(long)local_34,auStack_74,&local_78,lVar2,0);
        if ((iVar1 == 0) || (iVar1 = thunk_FUN_0038ebe0(lVar3,auStack_74,local_78), iVar1 == 0)) {
          FUN_0039d050(lVar2);
          thunk_FUN_0038eddc(lVar3);
          return 0;
        }
        FUN_0039d050(lVar2);
      }
      return lVar3;
    }
  }
  return 0;
}


// ===== 00421be4  FUN_00421be4 =====

void FUN_00421be4(void)

{
  FUN_003ca2f4(&DAT_001b77b8,"crypto/x509/v3_soa_id.c",0x20);
  return;
}


// ===== 00421bfc  thunk_FUN_0038a5f8 =====

void thunk_FUN_0038a5f8(void)

{
  FUN_0039a5f4(&DAT_00765390);
  return;
}


// ===== 00421c00  FUN_00421c00 =====

undefined8 FUN_00421c00(void)

{
  return 1;
}


// ===== 00421c08  thunk_FUN_0038a5f8 =====

void thunk_FUN_0038a5f8(void)

{
  FUN_0039a5f4(&DAT_00765390);
  return;
}


// ===== 00421c0c  FUN_00421c0c =====

undefined * FUN_00421c0c(void)

{
  return &DAT_0077e6e8;
}


// ===== 00421c18  FUN_00421c18 =====

undefined8 FUN_00421c18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 local_38;
  
  local_38 = 0;
  iVar2 = FUN_0040caf8(param_3);
  if (iVar2 < 1) {
    return 0;
  }
  iVar2 = 0;
  do {
    lVar4 = FUN_0040cb0c(param_3,iVar2);
    uVar1 = *(undefined8 *)(lVar4 + 0x10);
    lVar4 = FUN_00422fb4(0,*(undefined8 *)(lVar4 + 8));
    if (lVar4 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/x509/v3_sxnet.c",0x7d,"SXNET_add_id_asc");
      FUN_00379a5c(0x22,0x83,0);
LAB_00421cfc:
      FUN_0038c75c(local_38,&DAT_0077e6e8);
      return 0;
    }
    iVar3 = FUN_00421f94(&local_38,lVar4,uVar1,0xffffffff);
    if (iVar3 == 0) {
      thunk_FUN_0038eddc(lVar4);
      goto LAB_00421cfc;
    }
    iVar2 = iVar2 + 1;
    iVar3 = FUN_0040caf8(param_3);
    if (iVar3 <= iVar2) {
      return local_38;
    }
  } while( true );
}


// ===== 00421d24  FUN_00421d24 =====

undefined8
FUN_00421d24(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long local_48;
  
  iVar1 = FUN_0038d9b8(&local_48,*param_2);
  if ((iVar1 == 0) || (local_48 == 0x7fffffffffffffff)) {
    FUN_0037b9f8(param_3,"%*sVersion: <unsupported>",param_4,&DAT_001c717f);
    iVar1 = FUN_0040caf8(param_2[1]);
  }
  else {
    FUN_0037b9f8(param_3,"%*sVersion: %ld (0x%lX)",param_4,&DAT_001c717f,local_48 + 1);
    iVar1 = FUN_0040caf8(param_2[1]);
  }
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      puVar3 = (undefined8 *)FUN_0040cb0c(param_2[1],iVar1);
      lVar4 = FUN_00422f00(0,*puVar3);
      if (lVar4 == 0) {
        return 0;
      }
      FUN_0037b9f8(param_3,"\n%*sZone: %s, User: ",param_4,&DAT_001c717f,lVar4);
      FUN_003c86b4(lVar4,"crypto/x509/v3_sxnet.c",0x54);
      FUN_0041b6bc(param_3,puVar3[1]);
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0040caf8(param_2[1]);
    } while (iVar1 < iVar2);
  }
  return 1;
}


// ===== 00421e74  FUN_00421e74 =====

undefined * FUN_00421e74(void)

{
  return &DAT_0077e660;
}


// ===== 00421e80  FUN_00421e80 =====

void FUN_00421e80(void)

{
  FUN_0038a93c();
  return;
}


// ===== 00421e8c  FUN_00421e8c =====

void FUN_00421e8c(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077e660);
  return;
}


// ===== 00421e98  FUN_00421e98 =====

void FUN_00421e98(void)

{
  FUN_0039a5f4(&DAT_0077e660);
  return;
}


// ===== 00421ea4  FUN_00421ea4 =====

void FUN_00421ea4(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077e660);
  return;
}


// ===== 00421eb0  FUN_00421eb0 =====

void FUN_00421eb0(void)

{
  FUN_0038a93c();
  return;
}


// ===== 00421ebc  FUN_00421ebc =====

void FUN_00421ebc(undefined8 param_1,undefined8 param_2)

{
  FUN_0039b478(param_1,param_2,&DAT_0077e6e8);
  return;
}


// ===== 00421ec8  FUN_00421ec8 =====

void FUN_00421ec8(void)

{
  FUN_0039a5f4(&DAT_0077e6e8);
  return;
}


// ===== 00421ed4  FUN_00421ed4 =====

void FUN_00421ed4(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077e6e8);
  return;
}


// ===== 00421ee0  FUN_00421ee0 =====

undefined8 FUN_00421ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_00422fb4(0);
  if (lVar2 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_sxnet.c",0x7d,"SXNET_add_id_asc");
    FUN_00379a5c(0x22,0x83,0);
    return 0;
  }
  iVar1 = FUN_00421f94(param_1,lVar2,param_3,param_4);
  if (iVar1 != 0) {
    return 1;
  }
  thunk_FUN_0038eddc(lVar2);
  return 0;
}


// ===== 00421f94  FUN_00421f94 =====

undefined8 FUN_00421f94(long *param_1,long param_2,char *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  size_t sVar8;
  undefined4 uVar9;
  
  if (((param_1 == (long *)0x0) || (param_2 == 0)) || (param_3 == (char *)0x0)) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_sxnet.c",0xa7,"SXNET_add_id_INTEGER");
    uVar5 = 0x6b;
    goto LAB_00422020;
  }
  sVar8 = (size_t)param_4;
  if (param_4 == 0xffffffff) {
    sVar8 = strlen(param_3);
    if ((int)sVar8 < 0x41) goto LAB_00422060;
  }
  else if ((int)param_4 < 0x41) {
LAB_00422060:
    puVar7 = (undefined8 *)*param_1;
    if (puVar7 == (undefined8 *)0x0) {
      uVar9 = 0x8000d;
      puVar7 = (undefined8 *)FUN_0039a5f4(&DAT_0077e6e8);
      if (puVar7 == (undefined8 *)0x0) {
        plVar4 = (long *)0x0;
        uVar5 = 0xb2;
        goto LAB_004221c0;
      }
      iVar1 = FUN_0038de18(*puVar7,0);
      if (iVar1 == 0) {
        plVar4 = (long *)0x0;
        uVar5 = 0xb6;
        goto LAB_004221c0;
      }
    }
    iVar1 = FUN_0040caf8(puVar7[1]);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        puVar3 = (undefined8 *)FUN_0040cb0c(puVar7[1],iVar1);
        iVar2 = FUN_0038d110(*puVar3,param_2);
        if (iVar2 == 0) {
          if (puVar3[1] != 0) {
            FUN_00379868();
            FUN_0037995c("crypto/x509/v3_sxnet.c",0xbc,"SXNET_add_id_INTEGER");
            FUN_00379a5c(0x22,0x85,0);
            lVar6 = *param_1;
            goto joined_r0x00422128;
          }
          break;
        }
        iVar1 = iVar1 + 1;
        iVar2 = FUN_0040caf8(puVar7[1]);
      } while (iVar1 < iVar2);
    }
    uVar9 = 0x8000d;
    plVar4 = (long *)FUN_0039a5f4(&DAT_0077e660);
    if (plVar4 == (long *)0x0) {
      uVar5 = 0xc3;
    }
    else {
      iVar1 = thunk_FUN_0038ebe0(plVar4[1],param_3,sVar8 & 0xffffffff);
      if (iVar1 == 0) {
        uVar5 = 200;
      }
      else {
        iVar1 = FUN_0040c89c(puVar7[1],plVar4);
        if (iVar1 != 0) {
          thunk_FUN_0038eddc(*plVar4);
          *plVar4 = param_2;
          *param_1 = (long)puVar7;
          return 1;
        }
        uVar9 = 0x8000f;
        uVar5 = 0xcc;
      }
    }
LAB_004221c0:
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_sxnet.c",uVar5,"SXNET_add_id_INTEGER");
    FUN_00379a5c(0x22,uVar9,0);
    FUN_0038c75c(plVar4,&DAT_0077e660);
    lVar6 = *param_1;
joined_r0x00422128:
    if (lVar6 != 0) {
      return 0;
    }
    FUN_0038c75c(puVar7,&DAT_0077e6e8);
    return 0;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/v3_sxnet.c",0xad,"SXNET_add_id_INTEGER");
  uVar5 = 0x84;
LAB_00422020:
  FUN_00379a5c(0x22,uVar5,0);
  return 0;
}


// ===== 00422218  FUN_00422218 =====

undefined8 FUN_00422218(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_0038a388();
  if ((lVar2 == 0) || (iVar1 = FUN_0038de18(lVar2,param_2), iVar1 == 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_sxnet.c",0x90,"SXNET_add_id_ulong");
    FUN_00379a5c(0x22,0x8000d,0);
  }
  else {
    iVar1 = FUN_00421f94(param_1,lVar2,param_3,param_4);
    if (iVar1 != 0) {
      return 1;
    }
  }
  thunk_FUN_0038eddc(lVar2);
  return 0;
}


// ===== 004222d8  FUN_004222d8 =====

undefined8 FUN_004222d8(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  
  iVar1 = FUN_0040caf8(*(undefined8 *)(param_1 + 8));
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      puVar3 = (undefined8 *)FUN_0040cb0c(*(undefined8 *)(param_1 + 8),iVar1);
      iVar2 = FUN_0038d110(*puVar3,param_2);
      if (iVar2 == 0) {
        return puVar3[1];
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0040caf8(*(undefined8 *)(param_1 + 8));
    } while (iVar1 < iVar2);
  }
  return 0;
}


// ===== 00422360  FUN_00422360 =====

undefined8 FUN_00422360(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_00422fb4(0);
  if (lVar3 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_sxnet.c",0xe1,"SXNET_get_id_asc");
    FUN_00379a5c(0x22,0x83,0);
    return 0;
  }
  iVar1 = FUN_0040caf8(*(undefined8 *)(param_1 + 8));
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      puVar4 = (undefined8 *)FUN_0040cb0c(*(undefined8 *)(param_1 + 8),iVar1);
      iVar2 = FUN_0038d110(*puVar4,lVar3);
      if (iVar2 == 0) {
        uVar5 = puVar4[1];
        goto LAB_0042241c;
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0040caf8(*(undefined8 *)(param_1 + 8));
    } while (iVar1 < iVar2);
  }
  uVar5 = 0;
LAB_0042241c:
  thunk_FUN_0038eddc(lVar3);
  return uVar5;
}


// ===== 00422438  FUN_00422438 =====

undefined8 FUN_00422438(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_0038a388();
  if ((lVar3 == 0) || (iVar1 = FUN_0038de18(lVar3,param_2), iVar1 == 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_sxnet.c",0xf0,"SXNET_get_id_ulong");
    FUN_00379a5c(0x22,0x8000d,0);
    thunk_FUN_0038eddc(lVar3);
    return 0;
  }
  iVar1 = FUN_0040caf8(*(undefined8 *)(param_1 + 8));
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      puVar4 = (undefined8 *)FUN_0040cb0c(*(undefined8 *)(param_1 + 8),iVar1);
      iVar2 = FUN_0038d110(*puVar4,lVar3);
      if (iVar2 == 0) {
        uVar5 = puVar4[1];
        goto LAB_00422510;
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0040caf8(*(undefined8 *)(param_1 + 8));
    } while (iVar1 < iVar2);
  }
  uVar5 = 0;
LAB_00422510:
  thunk_FUN_0038eddc(lVar3);
  return uVar5;
}


// ===== 0042252c  FUN_0042252c =====

void FUN_0042252c(void)

{
  FUN_0039a5f4(&DAT_0077e7d8);
  return;
}


// ===== 00422538  FUN_00422538 =====

undefined * FUN_00422538(void)

{
  return &DAT_0077e7d8;
}


// ===== 00422544  FUN_00422544 =====

void FUN_00422544(undefined8 param_1)

{
  FUN_0038c75c(param_1,&DAT_0077e7d8);
  return;
}


// ===== 00422550  FUN_00422550 =====

undefined8 FUN_00422550(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_38;
  
  local_38 = param_3;
  iVar1 = FUN_0040caf8(param_2);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      while( true ) {
        uVar3 = FUN_0040cb0c(param_2,iVar1);
        lVar4 = FUN_0038dea4();
        if (lVar4 != 5) break;
        lVar4 = 0;
LAB_00422594:
        FUN_00422a24(0,(&PTR_s_status_request_0077e840)[lVar4 * 2],&local_38);
        iVar1 = iVar1 + 1;
        iVar2 = FUN_0040caf8(param_2);
        if (iVar2 <= iVar1) {
          return local_38;
        }
      }
      if (lVar4 == 0x11) {
        lVar4 = 1;
        goto LAB_00422594;
      }
      FUN_0042315c(0,uVar3,&local_38);
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0040caf8(param_2);
      param_3 = local_38;
    } while (iVar1 < iVar2);
  }
  return param_3;
}


// ===== 00422628  FUN_00422628 =====

long FUN_00422628(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char *__nptr;
  char *local_48;
  
  lVar3 = FUN_0040bf0c();
  if (lVar3 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_tlsf.c",99,"v2i_TLS_FEATURE");
    FUN_00379a5c(0x22,0x8000f,0);
  }
  else {
    iVar1 = FUN_0040caf8(param_3);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        lVar4 = FUN_0040cb0c(param_3,iVar1);
        __nptr = *(char **)(lVar4 + 0x10);
        if (__nptr != (char *)0x0) {
          iVar2 = FUN_003cab04(__nptr,"status_request");
          if (iVar2 == 0) goto LAB_00422710;
LAB_004226a8:
          iVar2 = FUN_003cab04(__nptr,"status_request_v2");
          lVar5 = DAT_0077e848;
          if (iVar2 != 0) {
            lVar5 = strtol(__nptr,&local_48,10);
            if ((((*local_48 != '\0') || (__nptr == local_48)) || (lVar5 < 0)) || (0xffff < lVar5))
            {
              FUN_00379868();
              FUN_0037995c("crypto/x509/v3_tlsf.c",0x77,"v2i_TLS_FEATURE");
              FUN_00379a5c(0x22,0x8f,0);
              FUN_0037aeac(4,"name=",*(undefined8 *)(lVar4 + 8),", value=",
                           *(undefined8 *)(lVar4 + 0x10));
              lVar4 = 0;
              goto LAB_00422834;
            }
            lVar4 = FUN_0038a388();
            goto joined_r0x00422720;
          }
          lVar4 = FUN_0038a388();
          if (lVar4 != 0) goto LAB_00422740;
LAB_004227b4:
          FUN_00379868();
          FUN_0037995c("crypto/x509/v3_tlsf.c",0x80,"v2i_TLS_FEATURE");
          FUN_00379a5c(0x22,0x8000d,0);
LAB_00422834:
          FUN_0040ca6c(lVar3,PTR_thunk_FUN_0038eddc_007a19f8);
          thunk_FUN_0038eddc(lVar4);
          return 0;
        }
        __nptr = *(char **)(lVar4 + 8);
        iVar2 = FUN_003cab04(__nptr,"status_request");
        if (iVar2 != 0) goto LAB_004226a8;
LAB_00422710:
        lVar5 = DAT_0077e838;
        lVar4 = FUN_0038a388();
joined_r0x00422720:
        if (lVar4 == 0) goto LAB_004227b4;
LAB_00422740:
        iVar2 = FUN_0038de18(lVar4,lVar5);
        if ((iVar2 == 0) || (iVar2 = FUN_0040c89c(lVar3,lVar4), iVar2 < 1)) goto LAB_004227b4;
        iVar1 = iVar1 + 1;
        iVar2 = FUN_0040caf8(param_3);
      } while (iVar1 < iVar2);
    }
  }
  return lVar3;
}


// ===== 00422870  FUN_00422870 =====

void * FUN_00422870(undefined8 param_1,int *param_2)

{
  int iVar1;
  void *__dest;
  
  if ((param_2 != (int *)0x0) && (*param_2 != 0)) {
    __dest = (void *)FUN_003c83a4((long)*param_2 + 1,"crypto/x509/v3_utf8.c",0x26);
    if (__dest != (void *)0x0) {
      iVar1 = *param_2;
      memcpy(__dest,*(void **)(param_2 + 2),(long)iVar1);
      *(undefined1 *)((long)__dest + (long)iVar1) = 0;
    }
    return __dest;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/v3_utf8.c",0x23,"i2s_ASN1_UTF8STRING");
  FUN_00379a5c(0x22,0xc0102,0);
  return (void *)0x0;
}


// ===== 0042290c  FUN_0042290c =====

long FUN_0042290c(undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  long lVar2;
  size_t sVar3;
  
  if (param_3 == (char *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_utf8.c",0x32,"s2i_ASN1_UTF8STRING");
    FUN_00379a5c(0x22,0x6b,0);
    return 0;
  }
  lVar2 = FUN_0038a418();
  if (lVar2 != 0) {
    sVar3 = strlen(param_3);
    iVar1 = FUN_0038ebe0(lVar2,param_3,sVar3);
    if (iVar1 != 0) {
      return lVar2;
    }
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_utf8.c",0x3a,"s2i_ASN1_UTF8STRING");
    FUN_00379a5c(0x22,0x8000d,0);
    thunk_FUN_0038eddc(lVar2);
    return 0;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/v3_utf8.c",0x36,"s2i_ASN1_UTF8STRING");
  FUN_00379a5c(0x22,0x8000d,0);
  return 0;
}


// ===== 00422a24  FUN_00422a24 =====

void FUN_00422a24(undefined8 param_1,char *param_2,undefined8 param_3)

{
  size_t sVar1;
  
  if (param_2 != (char *)0x0) {
    sVar1 = strlen(param_2);
    FUN_00422a84(param_1,param_2,sVar1,param_3);
    return;
  }
  FUN_00422a84(param_1,0,0,param_3);
  return;
}


// ===== 00422a84  FUN_00422a84 =====

undefined8 FUN_00422a84(long param_1,void *param_2,size_t param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  lVar7 = *param_4;
  if (param_1 == 0) {
    lVar2 = 0;
    if (param_2 != (void *)0x0) goto LAB_00422ac8;
LAB_00422af0:
    lVar5 = 0;
LAB_00422b18:
    puVar6 = (undefined8 *)FUN_003c83a4(0x18,"crypto/x509/v3_utl.c",0x39);
    if (puVar6 == (undefined8 *)0x0) goto joined_r0x00422b78;
    if (lVar7 != 0) {
      lVar4 = *param_4;
LAB_00422b4c:
      *puVar6 = 0;
      puVar6[1] = lVar2;
      puVar6[2] = lVar5;
      iVar1 = FUN_0040c89c(lVar4,puVar6);
      if (iVar1 != 0) {
        return 1;
      }
      goto joined_r0x00422b78;
    }
    lVar4 = FUN_0040bf0c();
    *param_4 = lVar4;
    if (lVar4 != 0) goto LAB_00422b4c;
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_utl.c",0x3c,"x509v3_add_len_value");
    FUN_00379a5c(0x22,0x8000f,0);
  }
  else {
    lVar2 = FUN_003ca2f4(param_1,"crypto/x509/v3_utl.c",0x2f);
    if (lVar2 != 0) {
      if (param_2 == (void *)0x0) goto LAB_00422af0;
LAB_00422ac8:
      pvVar3 = memchr(param_2,0,param_3);
      if (pvVar3 == (void *)0x0) {
        lVar5 = FUN_003ca354(param_2,param_3,"crypto/x509/v3_utl.c",0x35);
        if (lVar5 != 0) goto LAB_00422b18;
        puVar6 = (undefined8 *)0x0;
        goto joined_r0x00422b78;
      }
    }
    puVar6 = (undefined8 *)0x0;
    lVar5 = 0;
joined_r0x00422b78:
    if (lVar7 != 0) goto LAB_00422b88;
  }
  FUN_0040bd78(*param_4);
  *param_4 = 0;
LAB_00422b88:
  FUN_003c86b4(puVar6,"crypto/x509/v3_utl.c",0x4a);
  FUN_003c86b4(lVar2,"crypto/x509/v3_utl.c",0x4b);
  FUN_003c86b4(lVar5,"crypto/x509/v3_utl.c",0x4c);
  return 0;
}


// ===== 00422c18  FUN_00422c18 =====

void FUN_00422c18(undefined8 param_1,char *param_2,undefined8 param_3)

{
  size_t sVar1;
  
  if (param_2 != (char *)0x0) {
    sVar1 = strlen(param_2);
    FUN_00422a84(param_1,param_2,sVar1,param_3);
    return;
  }
  FUN_00422a84(param_1,0,0,param_3);
  return;
}


// ===== 00422c78  thunk_FUN_00422a84 =====

undefined8 thunk_FUN_00422a84(long param_1,void *param_2,size_t param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  lVar7 = *param_4;
  if (param_1 == 0) {
    lVar2 = 0;
    if (param_2 != (void *)0x0) goto LAB_00422ac8;
LAB_00422af0:
    lVar5 = 0;
LAB_00422b18:
    puVar6 = (undefined8 *)FUN_003c83a4(0x18,"crypto/x509/v3_utl.c",0x39);
    if (puVar6 == (undefined8 *)0x0) goto joined_r0x00422b78;
    if (lVar7 != 0) {
      lVar4 = *param_4;
LAB_00422b4c:
      *puVar6 = 0;
      puVar6[1] = lVar2;
      puVar6[2] = lVar5;
      iVar1 = FUN_0040c89c(lVar4,puVar6);
      if (iVar1 != 0) {
        return 1;
      }
      goto joined_r0x00422b78;
    }
    lVar4 = FUN_0040bf0c();
    *param_4 = lVar4;
    if (lVar4 != 0) goto LAB_00422b4c;
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_utl.c",0x3c,"x509v3_add_len_value");
    FUN_00379a5c(0x22,0x8000f,0);
  }
  else {
    lVar2 = FUN_003ca2f4(param_1,"crypto/x509/v3_utl.c",0x2f);
    if (lVar2 != 0) {
      if (param_2 == (void *)0x0) goto LAB_00422af0;
LAB_00422ac8:
      pvVar3 = memchr(param_2,0,param_3);
      if (pvVar3 == (void *)0x0) {
        lVar5 = FUN_003ca354(param_2,param_3,"crypto/x509/v3_utl.c",0x35);
        if (lVar5 != 0) goto LAB_00422b18;
        puVar6 = (undefined8 *)0x0;
        goto joined_r0x00422b78;
      }
    }
    puVar6 = (undefined8 *)0x0;
    lVar5 = 0;
joined_r0x00422b78:
    if (lVar7 != 0) goto LAB_00422b88;
  }
  FUN_0040bd78(*param_4);
  *param_4 = 0;
LAB_00422b88:
  FUN_003c86b4(puVar6,"crypto/x509/v3_utl.c",0x4a);
  FUN_003c86b4(lVar2,"crypto/x509/v3_utl.c",0x4b);
  FUN_003c86b4(lVar5,"crypto/x509/v3_utl.c",0x4c);
  return 0;
}


// ===== 00422c7c  FUN_00422c7c =====

void FUN_00422c7c(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_003c86b4(param_1[1],"crypto/x509/v3_utl.c",0x6c);
    FUN_003c86b4(param_1[2],"crypto/x509/v3_utl.c",0x6d);
    FUN_003c86b4(*param_1,"crypto/x509/v3_utl.c",0x6e);
    FUN_003c86b4(param_1,"crypto/x509/v3_utl.c",0x6f);
    return;
  }
  return;
}


// ===== 00422ce8  FUN_00422ce8 =====

void FUN_00422ce8(undefined8 param_1,int param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00422a84(param_1,&DAT_001e7304,4,param_3);
    return;
  }
  FUN_00422a84(param_1,"FALSE",5,param_3);
  return;
}


// ===== 00422d10  FUN_00422d10 =====

undefined8 FUN_00422d10(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_00422a84(param_1,&DAT_001e7304,4,param_3);
    return uVar1;
  }
  return 1;
}


// ===== 00422d30  FUN_00422d30 =====

long FUN_00422d30(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar3 = 0x8000d;
  lVar1 = FUN_0038e2a4(param_2,0);
  if (lVar1 == 0) {
    uVar4 = 0xae;
  }
  else {
    lVar2 = FUN_00422de4(lVar1);
    if (lVar2 != 0) goto LAB_00422dc8;
    uVar3 = 0x80022;
    uVar4 = 0xb0;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/v3_utl.c",uVar4,"i2s_ASN1_ENUMERATED");
  FUN_00379a5c(0x22,uVar3,0);
  lVar2 = 0;
LAB_00422dc8:
  FUN_0038f4f4(lVar1);
  return lVar2;
}


// ===== 00422de4  FUN_00422de4 =====

long FUN_00422de4(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  char *__s;
  size_t sVar3;
  char *pcVar4;
  
  iVar1 = FUN_0038f2c0();
  if (iVar1 < 0x80) {
    lVar2 = FUN_003cff6c(param_1);
    return lVar2;
  }
  __s = (char *)FUN_003cfce4(param_1);
  if (__s != (char *)0x0) {
    sVar3 = strlen(__s);
    lVar2 = FUN_003c83a4(sVar3 + 3,"crypto/x509/v3_utl.c",0x94);
    if (lVar2 != 0) {
      if (*__s == '-') {
        FUN_003ca460(lVar2,&DAT_001c5dde,sVar3 + 3);
        pcVar4 = __s + 1;
      }
      else {
        FUN_003ca460(lVar2,&DAT_001d5cf9,sVar3 + 3);
        pcVar4 = __s;
      }
      FUN_003ca4e8(lVar2,pcVar4,sVar3 + 3);
      FUN_003c86b4(__s,"crypto/x509/v3_utl.c",0xa2);
      return lVar2;
    }
    FUN_003c86b4(__s,"crypto/x509/v3_utl.c",0x96);
    return 0;
  }
  return 0;
}


// ===== 00422f00  FUN_00422f00 =====

long FUN_00422f00(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar3 = 0x8000d;
  lVar1 = FUN_0038e040(param_2,0);
  if (lVar1 == 0) {
    uVar4 = 0xbd;
  }
  else {
    lVar2 = FUN_00422de4(lVar1);
    if (lVar2 != 0) goto LAB_00422f98;
    uVar3 = 0x80022;
    uVar4 = 0xbf;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/v3_utl.c",uVar4,"i2s_ASN1_INTEGER");
  FUN_00379a5c(0x22,uVar3,0);
  lVar2 = 0;
LAB_00422f98:
  FUN_0038f4f4(lVar1);
  return lVar2;
}


// ===== 00422fb4  FUN_00422fb4 =====

long FUN_00422fb4(undefined8 param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long local_28;
  
  if (param_2 == (char *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/x509/v3_utl.c",0xcc,"s2i_ASN1_INTEGER");
    uVar5 = 0x6d;
  }
  else {
    local_28 = FUN_0038f584();
    if (local_28 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/x509/v3_utl.c",0xd1,"s2i_ASN1_INTEGER");
      uVar5 = 0x80003;
    }
    else {
      cVar1 = *param_2;
      if (cVar1 == '-') {
        param_2 = param_2 + 1;
      }
      if ((*param_2 == '0') && ((byte)(param_2[1] | 0x20U) == 0x78)) {
        param_2 = param_2 + 2;
        iVar3 = FUN_003d0198(&local_28,param_2);
      }
      else {
        iVar3 = FUN_003d0368(&local_28,param_2);
      }
      if ((iVar3 == 0) || (param_2[iVar3] != '\0')) {
        FUN_0038f4f4(local_28);
        FUN_00379868();
        FUN_0037995c("crypto/x509/v3_utl.c",0xe9,"s2i_ASN1_INTEGER");
        uVar5 = 100;
      }
      else {
        if (cVar1 == '-') {
          iVar3 = FUN_0038f448(local_28);
          bVar2 = iVar3 != 0;
        }
        else {
          bVar2 = true;
        }
        lVar4 = FUN_0038dedc(local_28,0);
        FUN_0038f4f4(local_28);
        if (lVar4 != 0) {
          if (bVar2) {
            return lVar4;
          }
          *(uint *)(lVar4 + 4) = *(uint *)(lVar4 + 4) | 0x100;
          return lVar4;
        }
        FUN_00379868();
        FUN_0037995c("crypto/x509/v3_utl.c",0xf3,"s2i_ASN1_INTEGER");
        uVar5 = 0x65;
      }
    }
  }
  FUN_00379a5c(0x22,uVar5,0);
  return 0;
}


// ===== 0042315c  FUN_0042315c =====

undefined4 FUN_0042315c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  char *__s;
  size_t sVar3;
  undefined8 uVar4;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = 0x8000d;
  lVar2 = FUN_0038e040(param_2,0);
  if (lVar2 == 0) {
    uVar4 = 0xbd;
  }
  else {
    __s = (char *)FUN_00422de4(lVar2);
    if (__s != (char *)0x0) {
      FUN_0038f4f4(lVar2);
      sVar3 = strlen(__s);
      uVar1 = FUN_00422a84(param_1,__s,sVar3,param_3);
      FUN_003c86b4(__s,"crypto/x509/v3_utl.c",0x106);
      return uVar1;
    }
    uVar1 = 0x80022;
    uVar4 = 0xbf;
  }
  FUN_00379868();
  FUN_0037995c("crypto/x509/v3_utl.c",uVar4,"i2s_ASN1_INTEGER");
  FUN_00379a5c(0x22,uVar1,0);
  FUN_0038f4f4(lVar2);
  return 0;
}


// ===== 00423270  FUN_00423270 =====

undefined8 FUN_00423270(long param_1,undefined4 *param_2)

{
  int iVar1;
  char *__s1;
  
  __s1 = *(char **)(param_1 + 0x10);
  if (__s1 != (char *)0x0) {
    iVar1 = strcmp(__s1,"TRUE");
    if (((((iVar1 == 0) || (iVar1 = strcmp(__s1,"true"), iVar1 == 0)) ||
         (iVar1 = strcmp(__s1,"Y"), iVar1 == 0)) ||
        ((iVar1 = strcmp(__s1,"y"), iVar1 == 0 || (iVar1 = strcmp(__s1,"YES"), iVar1 == 0)))) ||
       (iVar1 = strcmp(__s1,"yes"), iVar1 == 0)) {
      *param_2 = 0xff;
      return 1;
    }
    iVar1 = strcmp(__s1,"FALSE");
    if (((iVar1 != 0) && (iVar1 = strcmp(__s1,"false"), iVar1 != 0)) &&
       ((iVar1 = strcmp(__s1,"N"), iVar1 != 0 &&
        ((iVar1 = strcmp(__s1,"n"), iVar1 != 0 && (iVar1 = strcmp(__s1,"NO"), iVar1 != 0)))))) {
      iVar1 = strcmp(__s1,"no");
      if (iVar1 != 0) goto LAB_00423380;
    }
    *param_2 = 0;
    return 1;
  }
LAB_00423380:
  FUN_00379868();
  FUN_0037995c("crypto/x509/v3_utl.c",0x123,"X509V3_get_value_bool");
  FUN_00379a5c(0x22,0x68,0);
  FUN_0037aeac(4,"name=",*(undefined8 *)(param_1 + 8),", value=",*(undefined8 *)(param_1 + 0x10));
  return 0;
}


// ===== 00423410  FUN_00423410 =====

undefined8 FUN_00423410(long param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = FUN_00422fb4(param_1,*(undefined8 *)(param_1 + 0x10));
  if (lVar1 != 0) {
    *param_2 = lVar1;
    return 1;
  }
  FUN_0037aeac(4,"name=",*(undefined8 *)(param_1 + 8),", value=",*(undefined8 *)(param_1 + 0x10));
  return 0;
}


// ===== 00423474  FUN_00423474 =====

undefined8 FUN_00423474(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  size_t sVar4;
  size_t sVar5;
  byte *__s;
  byte *__s_00;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  undefined8 local_38;
  
  local_38 = 0;
  pbVar3 = (byte *)FUN_003ca2f4(param_1,"crypto/x509/v3_utl.c",0x144);
  if (pbVar3 == (byte *)0x0) goto LAB_00423838;
  __s = (byte *)0x0;
  iVar2 = 1;
  __s_00 = pbVar3;
  pbVar8 = pbVar3;
  while (bVar1 = *pbVar8, 0xd < bVar1 || (1 << (ulong)(bVar1 & 0x1f) & 0x2401U) == 0) {
    if (iVar2 == 1) {
      if (bVar1 == 0x2c) {
        *pbVar8 = 0;
        bVar1 = *__s_00;
        if (bVar1 != 0) {
          while (iVar2 = FUN_003c475c(bVar1,8), iVar2 != 0) {
            __s_00 = __s_00 + 1;
            bVar1 = *__s_00;
            if (bVar1 == 0) goto LAB_004236e4;
          }
          if (*__s_00 != 0) {
            sVar4 = strlen((char *)__s_00);
            do {
              sVar5 = sVar4;
              if (sVar5 - 1 == 0) goto LAB_00423674;
              iVar2 = FUN_003c475c(__s_00[sVar5 - 1],8);
              sVar4 = sVar5 - 1;
            } while (iVar2 != 0);
            __s_00[sVar5] = 0;
LAB_00423674:
            if (*__s_00 != 0) {
              iVar2 = FUN_00422a84(__s_00,0,0,&local_38);
              if (iVar2 != 0) goto LAB_00423694;
              goto LAB_00423838;
            }
          }
        }
LAB_004236e4:
        uVar6 = 0x6c;
        uVar7 = 0x15d;
        goto LAB_0042380c;
      }
      if (bVar1 == 0x3a) {
        *pbVar8 = 0;
        bVar1 = *__s_00;
        __s = __s_00;
        while( true ) {
          if (bVar1 == 0) goto LAB_004236d8;
          iVar2 = FUN_003c475c(bVar1,8);
          if (iVar2 == 0) break;
          __s = __s + 1;
          bVar1 = *__s;
        }
        if (*__s == 0) {
LAB_004236d8:
          uVar6 = 0x6c;
          uVar7 = 0x154;
          goto LAB_0042380c;
        }
        sVar4 = strlen((char *)__s);
        do {
          sVar5 = sVar4;
          if (sVar5 - 1 == 0) goto LAB_00423620;
          iVar2 = FUN_003c475c(__s[sVar5 - 1],8);
          sVar4 = sVar5 - 1;
        } while (iVar2 != 0);
        __s[sVar5] = 0;
LAB_00423620:
        if (*__s == 0) goto LAB_004236d8;
        __s_00 = pbVar8 + 1;
        iVar2 = 2;
        pbVar8 = pbVar8 + 1;
      }
      else {
LAB_00423698:
        iVar2 = 1;
        pbVar8 = pbVar8 + 1;
      }
    }
    else {
      if (bVar1 == 0x2c) {
        *pbVar8 = 0;
        bVar1 = *__s_00;
        if (bVar1 != 0) {
          while (iVar2 = FUN_003c475c(bVar1,8), iVar2 != 0) {
            __s_00 = __s_00 + 1;
            bVar1 = *__s_00;
            if (bVar1 == 0) goto LAB_004236a4;
          }
          if (*__s_00 != 0) {
            sVar4 = strlen((char *)__s_00);
            do {
              sVar5 = sVar4;
              if (sVar5 - 1 == 0) goto LAB_004235b4;
              iVar2 = FUN_003c475c(__s_00[sVar5 - 1],8);
              sVar4 = sVar5 - 1;
            } while (iVar2 != 0);
            __s_00[sVar5] = 0;
LAB_004235b4:
            if (*__s_00 != 0) {
              sVar4 = strlen((char *)__s_00);
              iVar2 = FUN_00422a84(__s,__s_00,sVar4,&local_38);
              if (iVar2 != 0) {
                __s_00 = (byte *)0x0;
LAB_00423694:
                __s = __s_00;
                __s_00 = pbVar8 + 1;
                goto LAB_00423698;
              }
              goto LAB_00423838;
            }
          }
        }
LAB_004236a4:
        uVar6 = 0x6d;
        uVar7 = 0x16c;
        goto LAB_0042380c;
      }
      iVar2 = 2;
      pbVar8 = pbVar8 + 1;
    }
  }
  bVar1 = *__s_00;
  if (iVar2 != 2) {
    while (__s = __s_00, bVar1 != 0) {
      iVar2 = FUN_003c475c(bVar1,8);
      if (iVar2 == 0) {
        if (*__s != 0) {
          sVar4 = strlen((char *)__s);
          goto LAB_00423788;
        }
        break;
      }
      __s_00 = __s + 1;
      bVar1 = __s[1];
    }
    goto LAB_00423804;
  }
  while (bVar1 != 0) {
    iVar2 = FUN_003c475c(bVar1,8);
    if (iVar2 == 0) {
      if (*__s_00 != 0) {
        sVar4 = strlen((char *)__s_00);
        goto LAB_0042371c;
      }
      break;
    }
    __s_00 = __s_00 + 1;
    bVar1 = *__s_00;
  }
  goto LAB_0042376c;
  while (iVar2 = FUN_003c475c(__s[sVar5 - 1],8), sVar4 = sVar5 - 1, iVar2 != 0) {
LAB_00423788:
    sVar5 = sVar4;
    if (sVar5 - 1 == 0) goto LAB_004237b4;
  }
  __s[sVar5] = 0;
LAB_004237b4:
  if (*__s != 0) {
    __s_00 = (byte *)0x0;
    sVar4 = 0;
    goto LAB_004237cc;
  }
LAB_00423804:
  uVar6 = 0x6c;
  uVar7 = 0x185;
  goto LAB_0042380c;
  while (iVar2 = FUN_003c475c(__s_00[sVar5 - 1],8), sVar4 = sVar5 - 1, iVar2 != 0) {
LAB_0042371c:
    sVar5 = sVar4;
    if (sVar5 - 1 == 0) goto LAB_00423748;
  }
  __s_00[sVar5] = 0;
LAB_00423748:
  if (*__s_00 != 0) {
    sVar4 = strlen((char *)__s_00);
LAB_004237cc:
    iVar2 = FUN_00422a84(__s,__s_00,sVar4,&local_38);
    if (iVar2 != 0) {
      FUN_003c86b4(pbVar3,"crypto/x509/v3_utl.c",0x18c);
      return local_38;
    }
    goto LAB_00423838;
  }
LAB_0042376c:
  uVar6 = 0x6d;
  uVar7 = 0x17c;
LAB_0042380c:
  FUN_00379868();
  FUN_0037995c("crypto/x509/v3_utl.c",uVar7,"X509V3_parse_list");
  FUN_00379a5c(0x22,uVar6,0);
LAB_00423838:
  FUN_003c86b4(pbVar3,"crypto/x509/v3_utl.c",400);
  FUN_0040ca6c(local_38,PTR_FUN_007a1b70);
  return 0;
}


// ===== 00423878  FUN_00423878 =====

uint FUN_00423878(char *param_1,char *param_2)

{
  uint uVar1;
  size_t sVar2;
  
  sVar2 = strlen(param_2);
  uVar1 = strncmp(param_1,param_2,(long)(int)sVar2);
  if (uVar1 != 0) {
    return uVar1;
  }
  return (uint)(param_1[(int)sVar2] != '.' && param_1[(int)sVar2] != '\0');
}


// ===== 004238e0  FUN_004238e0 =====

undefined8 FUN_004238e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_004276a8(param_1,0x55,0,0);
  uVar2 = FUN_00426ca0(param_1);
  uVar2 = FUN_00423938(uVar2,uVar1);
  FUN_0040ca6c(uVar1,PTR_FUN_007a1c88);
  return uVar2;
}


// ===== 00423938  FUN_00423938 =====

undefined8 FUN_00423938(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 local_18;
  
  iVar1 = -1;
  local_18 = 0;
  while (iVar1 = FUN_00432e14(param_1,0x30,iVar1), -1 < iVar1) {
    FUN_00432da4(param_1,iVar1);
    uVar3 = FUN_00432d98();
    iVar2 = FUN_00423af4(&local_18,uVar3);
    if (iVar2 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_0040caf8(param_2);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      piVar4 = (int *)FUN_0040cb0c(param_2,iVar1);
      if ((*piVar4 == 1) &&
         (iVar2 = FUN_00423af4(&local_18,*(undefined8 *)(piVar4 + 2)), iVar2 == 0)) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0040caf8(param_2);
    } while (iVar1 < iVar2);
  }
  return local_18;
}


// ===== 00423a20  FUN_00423a20 =====

undefined8 FUN_00423a20(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 local_18;
  
  local_18 = 0;
  lVar3 = FUN_004276a8(param_1,0xb1,0,0);
  if (lVar3 == 0) {
    return 0;
  }
  iVar1 = FUN_0040caf8();
  if (iVar1 < 1) {
    uVar5 = 0;
  }
  else {
    iVar1 = 0;
    do {
      puVar4 = (undefined8 *)FUN_0040cb0c(lVar3,iVar1);
      iVar2 = FUN_003dd5b4(*puVar4);
      if (((iVar2 == 0xb2) && (*(int *)puVar4[1] == 6)) &&
         (iVar2 = FUN_00423af4(&local_18,*(undefined8 *)((int *)puVar4[1] + 2)), uVar5 = local_18,
         iVar2 == 0)) break;
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0040caf8(lVar3);
      uVar5 = local_18;
    } while (iVar1 < iVar2);
  }
  FUN_0041a614(lVar3);
  return uVar5;
}


// ===== 00423af4  FUN_00423af4 =====

undefined8 FUN_00423af4(long *param_1,int *param_2)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  void *__s;
  size_t __n;
  
  if (param_2[1] != 0x16) {
    return 1;
  }
  __s = *(void **)(param_2 + 2);
  if (((__s != (void *)0x0) && (__n = (size_t)*param_2, *param_2 != 0)) &&
     (pvVar2 = memchr(__s,0,__n), pvVar2 == (void *)0x0)) {
    plVar5 = (long *)*param_1;
    if ((long *)*param_1 == (long *)0x0) {
      lVar3 = FUN_0040bfd0(FUN_00424a00);
      *param_1 = lVar3;
      if (lVar3 == 0) {
        return 0;
      }
      __s = *(void **)(param_2 + 2);
      __n = (size_t)*param_2;
      plVar5 = param_1;
    }
    lVar3 = FUN_003ca354(plVar5,__s,__n,"crypto/x509/v3_utl.c",0x225);
    lVar4 = *param_1;
    if (lVar3 == 0) {
LAB_00423bf4:
      FUN_0040ca6c(lVar4,FUN_00423c9c);
      *param_1 = 0;
      return 0;
    }
    iVar1 = FUN_0040c48c(lVar4,lVar3);
    if (iVar1 == -1) {
      iVar1 = FUN_0040c89c(*param_1,lVar3);
      if (iVar1 == 0) {
        FUN_003c86b4(lVar3,"crypto/x509/v3_utl.c",0x232);
        lVar4 = *param_1;
        goto LAB_00423bf4;
      }
    }
    else {
      FUN_003c86b4(lVar3,"crypto/x509/v3_utl.c",0x22e);
    }
  }
  return 1;
}


// ===== 00423c18  FUN_00423c18 =====

undefined8 FUN_00423c18(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00429604();
  uVar2 = FUN_0041617c(uVar1,0x55,0,0);
  uVar3 = FUN_00429a50(param_1);
  uVar3 = FUN_00423938(uVar3,uVar2);
  FUN_0040ca6c(uVar2,PTR_FUN_007a1c88);
  FUN_0040ca6c(uVar1,PTR_FUN_007a1c58);
  return uVar3;
}


// ===== 00423c90  FUN_00423c90 =====

void FUN_00423c90(undefined8 param_1)

{
  FUN_0040ca6c(param_1,FUN_00423c9c);
  return;
}


// ===== 00423c9c  FUN_00423c9c =====

void FUN_00423c9c(undefined8 param_1)

{
  FUN_003c86b4(param_1,"crypto/x509/v3_utl.c",0x211);
  return;
}


// ===== 00423cac  FUN_00423cac =====

undefined8
FUN_00423cac(undefined8 param_1,char *param_2,size_t param_3,undefined4 param_4,undefined8 param_5)

{
  size_t __n;
  void *pvVar1;
  undefined8 uVar2;
  
  if (param_2 == (char *)0x0) {
    return 0xfffffffe;
  }
  if (param_3 == 0) {
    param_3 = strlen(param_2);
  }
  else {
    __n = param_3 - 1;
    if (__n == 0) {
      __n = 1;
    }
    pvVar1 = memchr(param_2,0,__n);
    if (pvVar1 != (void *)0x0) {
      return 0xfffffffe;
    }
  }
  if (1 < param_3) {
    param_3 = param_3 - (param_2[param_3 - 1] == '\0');
  }
  uVar2 = FUN_00423d64(param_1,param_2,param_3,param_4,2,param_5);
  return uVar2;
}


// ===== 00423d64  FUN_00423d64 =====

/* WARNING: Removing unreachable block (ram,0x004241b0) */
/* WARNING: Type propagation algorithm not settling */

int FUN_00423d64(undefined8 param_1,char *param_2,size_t param_3,uint param_4,int param_5,
                long *param_6)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined4 local_6c;
  undefined8 local_68;
  
  param_4 = param_4 & 0xffff7fff;
  if (param_5 == 1) {
    pcVar1 = FUN_00424a0c;
    uVar11 = 0x16;
    local_6c = 0x30;
    bVar3 = 1;
  }
  else if (param_5 == 2) {
    if (1 < param_3) {
      param_4 = param_4 | (uint)(*param_2 == '.') << 0xf;
    }
    uVar11 = 0x16;
    pcVar1 = FUN_00424bb8;
    if ((param_4 & 2) != 0) {
      pcVar1 = FUN_00424adc;
    }
    local_6c = 0xd;
    bVar3 = 1;
  }
  else {
    bVar3 = 0;
    uVar11 = 4;
    pcVar1 = FUN_00425014;
    local_6c = 0;
  }
  if (param_3 == 0) {
    param_3 = strlen(param_2);
    lVar7 = FUN_004276a8(param_1,0x55,0,0);
  }
  else {
    lVar7 = FUN_004276a8(param_1,0x55,0,0);
  }
  if (lVar7 != 0) {
    iVar4 = FUN_0040caf8();
    if (iVar4 < 1) {
      bVar2 = false;
    }
    else if (param_5 == 1) {
      bVar2 = false;
      iVar4 = 0;
      do {
        piVar8 = (int *)FUN_0040cb0c(lVar7,iVar4);
        if (*piVar8 == 1) {
LAB_00423f60:
          iVar6 = FUN_004250d0(*(undefined8 *)(piVar8 + 2),uVar11,pcVar1,param_4,param_2,param_3,
                               param_6);
          if (iVar6 != 0) goto LAB_004240fc;
          bVar2 = true;
        }
        else if ((*piVar8 == 0) &&
                (iVar5 = FUN_003dd5b4(**(undefined8 **)(piVar8 + 2)), iVar5 == 0x4b8)) {
          if ((**(int **)(*(long *)(piVar8 + 2) + 8) != 0xc) ||
             ((piVar10 = *(int **)(*(int **)(*(long *)(piVar8 + 2) + 8) + 2),
              *(long *)(piVar10 + 2) == 0 || (*piVar10 == 0)))) goto LAB_00423f60;
          iVar5 = FUN_003e2e2c(&local_68);
          if (-1 < iVar5) {
            iVar6 = (*pcVar1)(local_68,iVar5,param_2,param_3,param_4);
            if ((param_6 == (long *)0x0) || (iVar6 < 1)) {
              FUN_003c86b4(local_68,"crypto/x509/v3_utl.c",0x367);
              if (iVar6 == 0) goto LAB_00423f60;
              goto LAB_004240fc;
            }
            lVar9 = FUN_003ca354(local_68,iVar5,"crypto/x509/v3_utl.c",0x361);
            *param_6 = lVar9;
            if (lVar9 != 0) {
              FUN_003c86b4(local_68,"crypto/x509/v3_utl.c",0x367);
              goto LAB_004240fc;
            }
            FUN_003c86b4(local_68,"crypto/x509/v3_utl.c",0x363);
          }
          iVar6 = -1;
          goto LAB_004240fc;
        }
        iVar4 = iVar4 + 1;
        iVar5 = FUN_0040caf8(lVar7);
      } while (iVar4 < iVar5);
    }
    else {
      bVar2 = false;
      iVar4 = 0;
      do {
        piVar8 = (int *)FUN_0040cb0c(lVar7,iVar4);
        if ((*piVar8 == param_5) || (*piVar8 == 0)) {
          iVar6 = FUN_004250d0(*(undefined8 *)(piVar8 + 2),uVar11,pcVar1,param_4,param_2,param_3,
                               param_6);
          if (iVar6 != 0) {
LAB_004240fc:
            FUN_00418788(lVar7);
            return iVar6;
          }
          bVar2 = true;
        }
        iVar4 = iVar4 + 1;
        iVar5 = FUN_0040caf8(lVar7);
      } while (iVar4 < iVar5);
    }
    FUN_00418788(lVar7);
    if (((param_4 & 1) == 0) && (bVar2)) {
      return 0;
    }
  }
  if (!(bool)(bVar3 ^ 1) && (param_4 & 0x20) == 0) {
    uVar11 = FUN_00426ca0(param_1);
    if (param_6 == (long *)0x0) {
      iVar4 = -1;
      while (iVar4 = FUN_00432e14(uVar11,local_6c,iVar4), -1 < iVar4) {
        FUN_00432da4(uVar11,iVar4);
        piVar8 = (int *)FUN_00432d98();
        if ((*(long *)(piVar8 + 2) != 0) && (*piVar8 != 0)) {
          iVar5 = FUN_003e2e2c(&local_68,piVar8);
          if (iVar5 < 0) {
            return -1;
          }
          iVar5 = (*pcVar1)(local_68,iVar5,param_2,param_3,param_4);
          FUN_003c86b4(local_68,"crypto/x509/v3_utl.c",0x367);
          if (iVar5 != 0) {
            return iVar5;
          }
        }
      }
    }
    else {
      iVar4 = -1;
      while (iVar4 = FUN_00432e14(uVar11,local_6c,iVar4), -1 < iVar4) {
        FUN_00432da4(uVar11,iVar4);
        piVar8 = (int *)FUN_00432d98();
        if ((*(long *)(piVar8 + 2) != 0) && (*piVar8 != 0)) {
          iVar5 = FUN_003e2e2c(&local_68,piVar8);
          if (iVar5 < 0) {
            return -1;
          }
          iVar6 = (*pcVar1)(local_68,iVar5,param_2,param_3,param_4);
          if (0 < iVar6) {
            lVar7 = FUN_003ca354(local_68,iVar5,"crypto/x509/v3_utl.c",0x361);
            *param_6 = lVar7;
            if (lVar7 == 0) {
              FUN_003c86b4(local_68,"crypto/x509/v3_utl.c",0x363);
              return -1;
            }
          }
          FUN_003c86b4(local_68,"crypto/x509/v3_utl.c",0x367);
          if (iVar6 != 0) {
            return iVar6;
          }
        }
      }
    }
  }
  return 0;
}


// ===== 00424244  FUN_00424244 =====

undefined8 FUN_00424244(undefined8 param_1,char *param_2,size_t param_3,undefined4 param_4)

{
  size_t __n;
  void *pvVar1;
  undefined8 uVar2;
  
  if (param_2 == (char *)0x0) {
    return 0xfffffffe;
  }
  if (param_3 == 0) {
    param_3 = strlen(param_2);
  }
  else {
    __n = param_3 - 1;
    if (__n == 0) {
      __n = 1;
    }
    pvVar1 = memchr(param_2,0,__n);
    if (pvVar1 != (void *)0x0) {
      return 0xfffffffe;
    }
  }
  if (1 < param_3) {
    param_3 = param_3 - (param_2[param_3 - 1] == '\0');
  }
  uVar2 = FUN_00423d64(param_1,param_2,param_3,param_4,1,0);
  return uVar2;
}


