// ===== 0045aa64  FUN_0045aa64 =====

void FUN_0045aa64(long param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) &&
     (iVar1 = *(int *)(param_1 + 8), iVar2 = iVar1 + -1, *(int *)(param_1 + 8) = iVar2,
     iVar2 == 0 || iVar1 < 1)) {
    FUN_003c9d0c(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                 "providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x60);
    FUN_003c86b4(*(undefined8 *)(param_1 + 0x38),
                 "providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x61);
    FUN_0043f550(param_1 + 0x20);
    FUN_003c86b4(param_1,"providers/implementations/keymgmt/mac_legacy_kmgmt.c",100);
    return;
  }
  return;
}


// ===== 0045aad8  FUN_0045aad8 =====

undefined8 FUN_0045aad8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0043eb70();
  if ((int)uVar1 != 0) {
    uVar1 = 1;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return uVar1;
}


// ===== 0045ab0c  FUN_0045ab0c =====

undefined8 * FUN_0045ab0c(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar2 = FUN_0046b880();
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    puVar3 = (undefined8 *)
             FUN_003c8474(0x48,"providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x47);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = uVar2;
      *(undefined4 *)(puVar3 + 1) = 1;
      *(undefined4 *)(puVar3 + 8) = 0;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}


// ===== 0045ab6c  FUN_0045ab6c =====

void FUN_0045ab6c(long param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) &&
     (iVar1 = *(int *)(param_1 + 8), iVar2 = iVar1 + -1, *(int *)(param_1 + 8) = iVar2,
     iVar2 == 0 || iVar1 < 1)) {
    FUN_003c9d0c(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                 "providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x60);
    FUN_003c86b4(*(undefined8 *)(param_1 + 0x38),
                 "providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x61);
    FUN_0043f550(param_1 + 0x20);
    FUN_003c86b4(param_1,"providers/implementations/keymgmt/mac_legacy_kmgmt.c",100);
    return;
  }
  return;
}


// ===== 0045abe0  FUN_0045abe0 =====

long FUN_0045abe0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  if ((param_1 != 0) &&
     ((*(long *)(param_1 + 0x10) == 0 ||
      (lVar1 = FUN_003f4544(0,param_2,&DAT_001be7a9,*(long *)(param_1 + 0x10),
                            *(undefined8 *)(param_1 + 0x18)), (int)lVar1 != 0)))) {
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar2 = FUN_00389880();
      lVar1 = FUN_003f44e8(0,param_2,"cipher",uVar2);
      if ((int)lVar1 == 0) {
        return lVar1;
      }
    }
    lVar1 = 1;
  }
  return lVar1;
}


// ===== 0045ac54  FUN_0045ac54 =====

undefined ** FUN_0045ac54(void)

{
  return &PTR_DAT_0078ab90;
}


// ===== 0045ac60  FUN_0045ac60 =====

long FUN_0045ac60(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_003cb19c(param_2,&DAT_001be7a9);
    if (lVar1 != 0) {
      lVar1 = FUN_0045b5a4(param_1,param_2);
      return lVar1;
    }
    param_1 = 1;
  }
  return param_1;
}


// ===== 0045acb4  FUN_0045acb4 =====

undefined ** FUN_0045acb4(void)

{
  return &PTR_DAT_0078abe0;
}


// ===== 0045acc0  FUN_0045acc0 =====

bool FUN_0045acc0(long param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_0043eb70();
  bVar1 = false;
  if ((param_1 != 0) && (iVar2 != 0)) {
    if ((param_2 & 1) != 0) {
      return *(long *)(param_1 + 0x10) != 0;
    }
    bVar1 = true;
  }
  return bVar1;
}


// ===== 0045ad14  FUN_0045ad14 =====

ulong FUN_0045ad14(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = FUN_0043eb70();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if ((param_3 & 1) == 0) {
    return 1;
  }
  if ((*(long *)(param_2 + 0x10) == 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_2 + 0x18)))
  {
    lVar5 = *(long *)(param_1 + 0x20);
    lVar4 = *(long *)(param_2 + 0x20);
    if (lVar5 == 0) {
      if (lVar4 != 0) goto LAB_0045ad94;
      if (*(long *)(param_1 + 0x10) == 0) {
        return 1;
      }
    }
    else {
      if (lVar4 == 0) goto LAB_0045ad94;
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_0045ada8;
    }
    iVar1 = FUN_003c46d4();
    uVar2 = (ulong)(iVar1 == 0);
    lVar5 = *(long *)(param_1 + 0x20);
  }
  else {
LAB_0045ad94:
    uVar2 = 0;
    lVar5 = *(long *)(param_1 + 0x20);
  }
  if ((lVar5 == 0) || ((int)uVar2 == 0)) {
    return uVar2;
  }
  lVar4 = *(long *)(param_2 + 0x20);
LAB_0045ada8:
  uVar3 = FUN_00389880(lVar4);
  iVar1 = FUN_00388e5c(lVar5,uVar3);
  return (ulong)(iVar1 != 0);
}


// ===== 0045ae10  FUN_0045ae10 =====

undefined8 FUN_0045ae10(long param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043eb70();
  if ((((param_2 & 1) != 0) && (param_1 != 0)) && (iVar1 != 0)) {
    uVar2 = FUN_0045b5a4(param_1,param_3);
    return uVar2;
  }
  return 0;
}


// ===== 0045ae68  FUN_0045ae68 =====

undefined ** FUN_0045ae68(ulong param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)0x0;
  if ((param_1 & 1) != 0) {
    ppuVar1 = &PTR_DAT_0078ac30;
  }
  return ppuVar1;
}


// ===== 0045ae7c  FUN_0045ae7c =====

undefined4 FUN_0045ae7c(long param_1,ulong param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  iVar1 = FUN_0043eb70();
  if ((param_2 & 1) == 0) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  if (iVar1 == 0) {
    return 0;
  }
  lVar3 = FUN_003f1acc(0);
  if (lVar3 == 0) {
    return 0;
  }
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (iVar1 = FUN_003f4544(lVar3,0,&DAT_001be7a9,*(long *)(param_1 + 0x10),
                           *(undefined8 *)(param_1 + 0x18)), iVar1 != 0)) {
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar4 = FUN_00389880();
      iVar1 = FUN_003f44e8(lVar3,0,"cipher",uVar4);
      if (iVar1 == 0) goto LAB_0045af34;
    }
    lVar5 = FUN_003f27c4(lVar3);
    if (lVar5 != 0) {
      uVar2 = (*param_3)(lVar5,param_4);
      FUN_003cf878(lVar5);
      goto LAB_0045af38;
    }
  }
LAB_0045af34:
  uVar2 = 0;
LAB_0045af38:
  FUN_003f1b34(lVar3);
  return uVar2;
}


// ===== 0045af54  FUN_0045af54 =====

undefined8 * FUN_0045af54(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  size_t __n;
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  void *__dest;
  
  uVar2 = FUN_0046b880();
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    puVar3 = (undefined8 *)
             FUN_003c8474(0x38,"providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x17f);
    if (puVar3 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    *puVar3 = uVar2;
    *(undefined4 *)(puVar3 + 1) = param_2;
    lVar4 = FUN_003cb19c(param_3,&DAT_001be7a9);
    if (lVar4 == 0) {
      return puVar3;
    }
    if (*(int *)(lVar4 + 8) == 5) {
      __dest = (void *)FUN_003c8e24(*(undefined8 *)(lVar4 + 0x18),
                                    "providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x1ac);
      puVar3[2] = __dest;
      if (__dest != (void *)0x0) {
        __n = *(size_t *)(lVar4 + 0x18);
        memcpy(__dest,*(void **)(lVar4 + 0x10),__n);
        puVar3[3] = __n;
        return puVar3;
      }
    }
    else {
      FUN_00379868();
      FUN_0037995c("providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x1a9,"mac_gen_set_params"
                  );
      FUN_00379a5c(0x39,0x80106,0);
    }
    FUN_003c86b4(puVar3,"providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x18c);
  }
  return (undefined8 *)0x0;
}


// ===== 0045b078  FUN_0045b078 =====

undefined8 FUN_0045b078(long param_1,undefined8 param_2)

{
  size_t __n;
  long lVar1;
  void *__dest;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = FUN_003cb19c(param_2,&DAT_001be7a9);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 8) != 5) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x1a9,"mac_gen_set_params"
                  );
      FUN_00379a5c(0x39,0x80106,0);
      return 0;
    }
    __dest = (void *)FUN_003c8e24(*(undefined8 *)(lVar1 + 0x18),
                                  "providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x1ac);
    *(void **)(param_1 + 0x10) = __dest;
    if (__dest == (void *)0x0) {
      return 0;
    }
    __n = *(size_t *)(lVar1 + 0x18);
    memcpy(__dest,*(void **)(lVar1 + 0x10),__n);
    *(size_t *)(param_1 + 0x18) = __n;
  }
  return 1;
}


// ===== 0045b128  FUN_0045b128 =====

undefined ** FUN_0045b128(void)

{
  return &PTR_DAT_007a9490;
}


// ===== 0045b134  FUN_0045b134 =====

undefined8 * FUN_0045b134(undefined8 *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  iVar5 = FUN_0043eb70();
  puVar7 = (undefined8 *)0x0;
  if ((param_1 != (undefined8 *)0x0) && (iVar5 != 0)) {
    uVar8 = *param_1;
    iVar5 = FUN_0043eb70(0);
    if ((iVar5 == 0) ||
       (puVar6 = (undefined8 *)
                 FUN_003c8474(0x48,"providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x47),
       puVar6 == (undefined8 *)0x0)) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x1e4,"mac_gen");
      uVar3 = 0x80039;
LAB_0045b20c:
      FUN_00379a5c(0x39,uVar3,0);
      return (undefined8 *)0x0;
    }
    bVar2 = *(byte *)(param_1 + 1);
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = uVar8;
    *(undefined4 *)(puVar6 + 8) = 0;
    if ((bVar2 & 3) == 0) {
      return puVar6;
    }
    if (param_1[2] == 0) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x1ed,"mac_gen");
      FUN_00379a5c(0x39,0x9e,0);
      iVar5 = *(int *)(puVar6 + 1);
      puVar7 = (undefined8 *)0x0;
      iVar4 = iVar5 + -1;
      *(int *)(puVar6 + 1) = iVar4;
      if (iVar4 == 0 || iVar5 < 1) {
        FUN_003c9d0c(puVar6[2],puVar6[3],"providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x60
                    );
        FUN_003c86b4(puVar6[7],"providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x61);
        FUN_0043f550(puVar6 + 4);
        FUN_003c86b4(puVar6,"providers/implementations/keymgmt/mac_legacy_kmgmt.c",100);
        return (undefined8 *)0x0;
      }
    }
    else {
      iVar5 = FUN_0043f57c(puVar6 + 4,param_1 + 4);
      if (iVar5 == 0) {
        iVar5 = *(int *)(puVar6 + 1);
        iVar4 = iVar5 + -1;
        *(int *)(puVar6 + 1) = iVar4;
        if (iVar4 == 0 || iVar5 < 1) {
          FUN_003c9d0c(puVar6[2],puVar6[3],"providers/implementations/keymgmt/mac_legacy_kmgmt.c",
                       0x60);
          FUN_003c86b4(puVar6[7],"providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x61);
          FUN_0043f550(puVar6 + 4);
          FUN_003c86b4(puVar6,"providers/implementations/keymgmt/mac_legacy_kmgmt.c",100);
        }
        FUN_00379868();
        FUN_0037995c("providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x1fa,"mac_gen");
        uVar3 = 0xc0103;
        goto LAB_0045b20c;
      }
      FUN_0043f550(param_1 + 4);
      uVar8 = param_1[2];
      uVar1 = param_1[3];
      param_1[2] = 0;
      param_1[3] = 0;
      puVar6[2] = uVar8;
      puVar6[3] = uVar1;
      puVar7 = puVar6;
    }
  }
  return puVar7;
}


// ===== 0045b34c  FUN_0045b34c =====

void FUN_0045b34c(long param_1)

{
  FUN_003c9d0c(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
               "providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x20a);
  FUN_0043f550(param_1 + 0x20);
  FUN_003c86b4(param_1,"providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x20c);
  return;
}


// ===== 0045b398  FUN_0045b398 =====

undefined8 * FUN_0045b398(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar2 = FUN_0046b880();
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    puVar3 = (undefined8 *)
             FUN_003c8474(0x48,"providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x47);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = uVar2;
      *(undefined4 *)(puVar3 + 1) = 1;
      *(undefined4 *)(puVar3 + 8) = 1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}


// ===== 0045b3f8  FUN_0045b3f8 =====

undefined ** FUN_0045b3f8(void)

{
  return &PTR_DAT_0078aca8;
}


// ===== 0045b404  FUN_0045b404 =====

undefined ** FUN_0045b404(ulong param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)0x0;
  if ((param_1 & 1) != 0) {
    ppuVar1 = &PTR_DAT_0078ad48;
  }
  return ppuVar1;
}


// ===== 0045b418  FUN_0045b418 =====

undefined8 * FUN_0045b418(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar2 = FUN_0046b880();
  iVar1 = FUN_0043eb70();
  if (iVar1 == 0) {
    return (undefined8 *)0x0;
  }
  puVar3 = (undefined8 *)
           FUN_003c8474(0x38,"providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x17f);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = uVar2;
    *(undefined4 *)(puVar3 + 1) = param_2;
    iVar1 = FUN_0045b4ac(puVar3,param_3);
    if (iVar1 == 0) {
      FUN_003c86b4(puVar3,"providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x198);
      return (undefined8 *)0x0;
    }
  }
  return puVar3;
}


// ===== 0045b4ac  FUN_0045b4ac =====

undefined8 FUN_0045b4ac(undefined8 *param_1,undefined8 param_2)

{
  size_t __n;
  int iVar1;
  long lVar2;
  void *__dest;
  undefined8 uVar3;
  char *pcVar4;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  lVar2 = FUN_003cb19c(param_2,&DAT_001be7a9);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 8) != 5) {
      FUN_00379868();
      pcVar4 = "mac_gen_set_params";
      uVar3 = 0x1a9;
      goto LAB_0045b56c;
    }
    __dest = (void *)FUN_003c8e24(*(undefined8 *)(lVar2 + 0x18),
                                  "providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x1ac);
    param_1[2] = __dest;
    if (__dest == (void *)0x0) {
      return 0;
    }
    __n = *(size_t *)(lVar2 + 0x18);
    memcpy(__dest,*(void **)(lVar2 + 0x10),__n);
    param_1[3] = __n;
  }
  iVar1 = FUN_0043f5c8(param_1 + 4,param_2,*param_1);
  if (iVar1 != 0) {
    return 1;
  }
  FUN_00379868();
  pcVar4 = "cmac_gen_set_params";
  uVar3 = 0x1bf;
LAB_0045b56c:
  FUN_0037995c("providers/implementations/keymgmt/mac_legacy_kmgmt.c",uVar3,pcVar4);
  FUN_00379a5c(0x39,0x80106,0);
  return 0;
}


// ===== 0045b598  FUN_0045b598 =====

undefined ** FUN_0045b598(void)

{
  return &PTR_DAT_007a94e0;
}


// ===== 0045b5a4  FUN_0045b5a4 =====

bool FUN_0045b5a4(undefined8 *param_1,undefined8 param_2)

{
  size_t __n;
  int iVar1;
  long lVar2;
  void *__dest;
  undefined8 uVar3;
  ulong uVar4;
  
  lVar2 = FUN_003cb19c(param_2,&DAT_001be7a9);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 8) != 5) {
      FUN_00379868();
      uVar3 = 0xbd;
      goto LAB_0045b708;
    }
    FUN_003c9d0c(param_1[2],param_1[3],"providers/implementations/keymgmt/mac_legacy_kmgmt.c",0xc0);
    uVar4 = *(ulong *)(lVar2 + 0x18);
    if (uVar4 < 2) {
      uVar4 = 1;
    }
    __dest = (void *)FUN_003c8e24(uVar4,"providers/implementations/keymgmt/mac_legacy_kmgmt.c",0xc2)
    ;
    param_1[2] = __dest;
    if (__dest == (void *)0x0) {
      return false;
    }
    __n = *(size_t *)(lVar2 + 0x18);
    memcpy(__dest,*(void **)(lVar2 + 0x10),__n);
    param_1[3] = __n;
  }
  lVar2 = FUN_003cb19c(param_2,"properties");
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 8) != 4) {
      FUN_00379868();
      uVar3 = 0xcc;
      goto LAB_0045b708;
    }
    FUN_003c86b4(param_1[7],"providers/implementations/keymgmt/mac_legacy_kmgmt.c",0xcf);
    lVar2 = FUN_003ca2f4(*(undefined8 *)(lVar2 + 0x10),
                         "providers/implementations/keymgmt/mac_legacy_kmgmt.c",0xd0);
    param_1[7] = lVar2;
    if (lVar2 == 0) {
      return false;
    }
  }
  if ((*(int *)(param_1 + 8) == 0) ||
     (iVar1 = FUN_0043f5c8(param_1 + 4,param_2,*param_1), iVar1 != 0)) {
    return param_1[2] != 0;
  }
  FUN_00379868();
  uVar3 = 0xd7;
LAB_0045b708:
  FUN_0037995c("providers/implementations/keymgmt/mac_legacy_kmgmt.c",uVar3,"mac_key_fromdata");
  FUN_00379a5c(0x39,0x80106,0);
  return false;
}


// ===== 0045b734  FUN_0045b734 =====

long FUN_0045b734(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_0046b880();
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    lVar3 = thunk_FUN_003fa508(uVar2);
    if (lVar3 != 0) {
      FUN_003fb528(lVar3,0xf000);
      FUN_003fb544(lVar3,0);
    }
    return lVar3;
  }
  return 0;
}


// ===== 0045b794  FUN_0045b794 =====

void FUN_0045b794(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0045c20c(param_1,param_2,0,param_3);
  return;
}


// ===== 0045b7a0  FUN_0045b7a0 =====

ulong FUN_0045b7a0(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    return 1;
  }
  lVar2 = FUN_003cb19c(param_2,&DAT_001c97b2);
  if (lVar2 != 0) {
    uVar3 = thunk_FUN_003cc060(lVar2,param_1 + 3);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    if ((ulong)param_1[3] < 0x200) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/keymgmt/rsa_kmgmt.c",0x203,"rsa_gen_set_params");
      FUN_00379a5c(0x39,0xab,0);
      return 0;
    }
  }
  lVar2 = FUN_003cb19c(param_2,"primes");
  if (((lVar2 == 0) || (uVar3 = thunk_FUN_003cc060(lVar2,param_1 + 5), (int)uVar3 != 0)) &&
     ((lVar2 = FUN_003cb19c(param_2,&DAT_001c7561), lVar2 == 0 ||
      (uVar3 = FUN_003ccbf8(lVar2,param_1 + 4), (int)uVar3 != 0)))) {
    if (*(int *)(param_1 + 2) != 0x1000) {
      return 1;
    }
    iVar1 = FUN_003f39ac(param_1 + 6,(long)param_1 + 0x44,param_2,*param_1);
    return (ulong)(iVar1 != 0);
  }
  return uVar3;
}


// ===== 0045b8ac  FUN_0045b8ac =====

undefined ** FUN_0045b8ac(void)

{
  return &PTR_DAT_007a9558;
}


// ===== 0045b8b8  FUN_0045b8b8 =====

long FUN_0045b8b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  iVar1 = FUN_0043eb70();
  if ((param_1 == (undefined8 *)0x0) || (iVar1 == 0)) {
    return 0;
  }
  if (*(int *)(param_1 + 2) != 0x1000) {
    if (*(int *)(param_1 + 2) != 0) {
      return 0;
    }
    iVar1 = FUN_00404a34(param_1 + 6);
    if (iVar1 == 0) {
      lVar6 = 0;
      lVar5 = 0;
      lVar3 = 0;
      goto LAB_0045b9b4;
    }
  }
  lVar2 = thunk_FUN_003fa508(*param_1);
  if (lVar2 == 0) {
    return 0;
  }
  param_1[9] = param_2;
  param_1[10] = param_3;
  lVar3 = FUN_00390918();
  if (lVar3 != 0) {
    FUN_00390964(lVar3,FUN_0045c2e8,param_1);
  }
  iVar1 = FUN_004036c4(lVar2,*(undefined4 *)(param_1 + 3),*(undefined4 *)(param_1 + 5),param_1[4],
                       lVar3);
  if (iVar1 != 0) {
    uVar4 = FUN_003fb520(lVar2);
    iVar1 = FUN_00404a6c(uVar4,param_1 + 6);
    if (iVar1 != 0) {
      FUN_003fb528(lVar2,0xf000);
      FUN_003fb544(lVar2,*(undefined4 *)(param_1 + 2));
      lVar5 = 0;
      lVar6 = lVar2;
      goto LAB_0045b9b4;
    }
  }
  lVar6 = 0;
  lVar5 = lVar2;
LAB_0045b9b4:
  FUN_0039092c(lVar3);
  FUN_003fa6a0(lVar5);
  return lVar6;
}


// ===== 0045b9d8  FUN_0045b9d8 =====

void FUN_0045b9d8(long param_1)

{
  if (param_1 != 0) {
    FUN_0038f458(*(undefined8 *)(param_1 + 0x20));
    FUN_003c86b4(param_1,"providers/implementations/keymgmt/rsa_kmgmt.c",0x28a);
    return;
  }
  return;
}


// ===== 0045ba18  FUN_0045ba18 =====

undefined8 FUN_0045ba18(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043eb70();
  if ((param_2 == 8) && (iVar1 != 0)) {
    uVar2 = *param_1;
    iVar1 = FUN_003fb538(uVar2,0xf000);
    if (iVar1 == 0) {
      *param_1 = 0;
      return uVar2;
    }
  }
  return 0;
}


// ===== 0045ba7c  thunk_FUN_003fa6a0 =====

void thunk_FUN_003fa6a0(long param_1)

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


// ===== 0045ba80  FUN_0045ba80 =====

ulong FUN_0045ba80(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  uVar4 = FUN_003fb520();
  iVar1 = FUN_003fb538(param_1,0xf000);
  lVar5 = FUN_003fb4a8(param_1);
  lVar6 = FUN_003cb140(param_2,&DAT_001c97b2);
  if (lVar6 == 0) {
    lVar6 = FUN_003cb140(param_2,"security-bits");
    if (lVar6 != 0) {
      if (lVar5 == 0) {
        return 0;
      }
      goto LAB_0045bb24;
    }
  }
  else {
    if (lVar5 == 0) {
      return 0;
    }
    uVar2 = FUN_003f990c(param_1);
    uVar7 = thunk_FUN_003cb490(lVar6,uVar2);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    lVar6 = FUN_003cb140(param_2,"security-bits");
    if (lVar6 != 0) {
LAB_0045bb24:
      uVar2 = FUN_003fae24(param_1);
      uVar7 = thunk_FUN_003cb490(lVar6,uVar2);
      if ((int)uVar7 == 0) {
        return uVar7;
      }
    }
  }
  lVar6 = FUN_003cb140(param_2,"max-size");
  if (lVar6 != 0) {
    if (lVar5 == 0) {
      return 0;
    }
    uVar2 = FUN_003f9914(param_1);
    uVar7 = thunk_FUN_003cb490(lVar6,uVar2);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
  }
  lVar5 = FUN_003cb140(param_2,"default-digest");
  if ((lVar5 == 0) ||
     (((iVar1 == 0x1000 && (iVar3 = FUN_00404a34(uVar4), iVar3 == 0)) ||
      (uVar7 = FUN_003cd630(lVar5,"SHA256"), (int)uVar7 != 0)))) {
    lVar5 = FUN_003cb140(param_2,"mandatory-digest");
    if ((lVar5 == 0) || (iVar1 != 0x1000)) {
      if (iVar1 != 0x1000) goto LAB_0045bc54;
    }
    else {
      iVar1 = FUN_00404a34(uVar4);
      if (iVar1 == 0) {
        FUN_00404ac8(uVar4);
        lVar6 = FUN_00404ed0();
        if (lVar6 == 0) {
          return 0;
        }
        uVar7 = FUN_003cd630(lVar5,lVar6);
        if ((int)uVar7 == 0) {
          return uVar7;
        }
      }
    }
    uVar7 = FUN_003f3830(uVar4,0,param_2);
    if ((int)uVar7 != 0) {
LAB_0045bc54:
      iVar1 = FUN_003f36b4(param_1,0,param_2,1);
      return (ulong)(iVar1 != 0);
    }
  }
  return uVar7;
}


// ===== 0045bc84  FUN_0045bc84 =====

undefined ** FUN_0045bc84(void)

{
  return &PTR_DAT_0078b080;
}


// ===== 0045bc90  FUN_0045bc90 =====

ulong FUN_0045bc90(ulong param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar2 = param_1;
  if ((param_1 != 0) && (uVar2 = FUN_0043eb70(), (int)uVar2 != 0)) {
    if ((param_2 & 3) == 0) {
      uVar2 = 1;
    }
    else {
      lVar3 = FUN_003fb4a8(param_1);
      uVar4 = (uint)((param_2 & 2) == 0 && lVar3 != 0);
      if (((param_2 >> 1 & 1) != 0) && (lVar3 != 0)) {
        lVar3 = FUN_003fb4b0(param_1);
        uVar4 = (uint)(lVar3 != 0);
      }
      uVar1 = 0;
      if ((param_2 & 1) == 0) {
        uVar1 = uVar4;
      }
      uVar2 = (ulong)uVar1;
      if (((param_2 & 1) != 0) && (uVar4 != 0)) {
        lVar3 = FUN_003fb4b8(param_1);
        uVar2 = (ulong)(lVar3 != 0);
      }
    }
  }
  return uVar2;
}


// ===== 0045bd18  FUN_0045bd18 =====

ulong FUN_0045bd18(undefined8 param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = FUN_0043eb70();
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  uVar4 = FUN_003fb4b0(param_1);
  uVar5 = FUN_003fb4b0(param_2);
  iVar1 = FUN_00390208(uVar4,uVar5);
  if ((param_3 & 3) == 0) {
    return (ulong)(iVar1 == 0);
  }
  if ((param_3 >> 1 & 1) == 0) {
LAB_0045bd78:
    uVar2 = (uint)(iVar1 == 0);
    if ((param_3 & 1) == 0) {
      uVar8 = 0;
      goto LAB_0045be1c;
    }
    lVar6 = FUN_003fb4b8(param_1);
    lVar7 = FUN_003fb4b8(param_2);
    uVar9 = (uint)(lVar6 == 0 || lVar7 == 0);
    uVar8 = uVar9 ^ 1;
    uVar2 = 0;
    if (iVar1 == 0) {
      uVar2 = uVar9;
    }
    if ((lVar6 == 0 || lVar7 == 0) || (iVar1 != 0)) goto LAB_0045be1c;
  }
  else {
    lVar6 = FUN_003fb4a8(param_1);
    lVar7 = FUN_003fb4a8(param_2);
    if ((lVar6 == 0 || lVar7 == 0) || (iVar1 != 0)) {
      if (lVar6 != 0 && lVar7 != 0) {
        uVar2 = 0;
        uVar8 = 1;
        goto LAB_0045be1c;
      }
      goto LAB_0045bd78;
    }
  }
  iVar1 = FUN_00390208(lVar6,lVar7);
  uVar8 = 1;
  uVar2 = (uint)(iVar1 == 0);
LAB_0045be1c:
  return (ulong)(uVar8 & uVar2);
}


// ===== 0045be34  FUN_0045be34 =====

ulong FUN_0045be34(undefined8 param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_0043eb70();
  if ((int)uVar2 != 0) {
    if ((param_2 & 0x83) != 0) {
      if (((param_2 ^ 0xffffffff) & 3) == 0) {
        iVar1 = FUN_003f47b8(param_1);
        return (ulong)(iVar1 != 0);
      }
      if ((param_2 & 1) != 0) {
        iVar1 = thunk_FUN_00406248(param_1);
        uVar2 = (ulong)((param_2 & 2) == 0 && iVar1 != 0);
        if ((param_2 >> 1 & 1) == 0) {
          return uVar2;
        }
        if (iVar1 == 0) {
          return uVar2;
        }
LAB_0045bebc:
        iVar1 = thunk_FUN_00406024(param_1);
        return (ulong)(iVar1 != 0);
      }
      if ((param_2 >> 1 & 1) != 0) goto LAB_0045bebc;
    }
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 0045bed8  FUN_0045bed8 =====

ulong FUN_0045bed8(long param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_24;
  
  local_24 = 0;
  iVar1 = FUN_0043eb70();
  uVar2 = 0;
  if ((((param_2 & 0x83) != 0) && (param_1 != 0)) && (iVar1 != 0)) {
    iVar1 = FUN_003fb538(param_1,0xf000);
    if ((param_2 >> 7 & 1) != 0) {
      uVar3 = FUN_003fb520(param_1);
      uVar4 = FUN_003fa79c(param_1);
      uVar2 = FUN_003f39ac(uVar3,&local_24,param_3,uVar4);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      if ((iVar1 != 0x1000) && (uVar2 = FUN_00404a34(uVar3), (int)uVar2 == 0)) {
        return uVar2;
      }
    }
    uVar2 = (ulong)((param_2 & 3) == 0);
    if ((param_2 & 3) != 0) {
      iVar1 = FUN_003f33dc(param_1,param_3,param_2 & 1);
      uVar2 = (ulong)(iVar1 != 0);
    }
  }
  return uVar2;
}


// ===== 0045bfa8  FUN_0045bfa8 =====

undefined ** FUN_0045bfa8(ulong param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)0x0;
  if ((param_1 & 3) != 0) {
    ppuVar1 = &PTR_DAT_0078b648;
  }
  return ppuVar1;
}


// ===== 0045bfbc  FUN_0045bfbc =====

undefined4 FUN_0045bfbc(long param_1,uint param_2,code *param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  uVar4 = FUN_003fb520();
  iVar2 = FUN_0043eb70();
  if ((param_2 & 0x83) == 0) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  if (iVar2 == 0) {
    return 0;
  }
  lVar5 = FUN_003f1acc(0);
  if (lVar5 == 0) {
    return 0;
  }
  if (((param_2 >> 7 & 1) == 0) || (iVar2 = FUN_00404a34(uVar4), iVar2 != 0)) {
    bVar1 = true;
    if ((param_2 & 3) != 0) goto LAB_0045c030;
LAB_0045c050:
    if ((bVar1) && (lVar6 = FUN_003f27c4(lVar5), lVar6 != 0)) {
      uVar3 = (*param_3)(lVar6,param_4);
      FUN_003cf878(lVar6);
      goto LAB_0045c080;
    }
  }
  else {
    iVar2 = FUN_003f3830(uVar4,lVar5,0);
    bVar1 = iVar2 != 0;
    if ((param_2 & 3) == 0) goto LAB_0045c050;
LAB_0045c030:
    if (bVar1) {
      iVar2 = FUN_003f36b4(param_1,lVar5,0,param_2 & 1);
      bVar1 = iVar2 != 0;
      goto LAB_0045c050;
    }
  }
  uVar3 = 0;
LAB_0045c080:
  FUN_003f1b34(lVar5);
  return uVar3;
}


// ===== 0045c0c4  FUN_0045c0c4 =====

undefined ** FUN_0045c0c4(ulong param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)0x0;
  if ((param_1 & 3) != 0) {
    ppuVar1 = &PTR_DAT_0078b648;
  }
  return ppuVar1;
}


// ===== 0045c0d8  FUN_0045c0d8 =====

undefined8 FUN_0045c0d8(undefined8 param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043eb70();
  if (((param_2 & 3) != 0) && (iVar1 != 0)) {
    uVar2 = FUN_003f3cb4(param_1,param_2);
    return uVar2;
  }
  return 0;
}


// ===== 0045c120  FUN_0045c120 =====

long FUN_0045c120(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_0046b880();
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    lVar3 = thunk_FUN_003fa508(uVar2);
    if (lVar3 != 0) {
      FUN_003fb528(lVar3,0xf000);
      FUN_003fb544(lVar3,0x1000);
    }
    return lVar3;
  }
  return 0;
}


// ===== 0045c180  FUN_0045c180 =====

void FUN_0045c180(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0045c20c(param_1,param_2,0x1000,param_3);
  return;
}


// ===== 0045c18c  FUN_0045c18c =====

undefined ** FUN_0045c18c(void)

{
  return &PTR_DAT_007a95f8;
}


// ===== 0045c198  FUN_0045c198 =====

undefined8 FUN_0045c198(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043eb70();
  uVar2 = 0;
  if ((param_2 == 8) && (iVar1 != 0)) {
    uVar2 = *param_1;
    iVar1 = FUN_003fb538(uVar2,0xf000);
    if (iVar1 != 0x1000) {
      return 0;
    }
    *param_1 = 0;
  }
  return uVar2;
}


// ===== 0045c200  FUN_0045c200 =====

undefined * FUN_0045c200(void)

{
  return &DAT_001f9542;
}


// ===== 0045c20c  FUN_0045c20c =====

undefined8 * FUN_0045c20c(undefined8 param_1,ulong param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  uVar2 = FUN_0046b880();
  iVar1 = FUN_0043eb70();
  if (((param_2 & 3) != 0) && (iVar1 != 0)) {
    puVar3 = (undefined8 *)FUN_003c8474(0x58,"providers/implementations/keymgmt/rsa_kmgmt.c",0x1ce);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = uVar2;
      lVar4 = FUN_0038f584();
      puVar3[4] = lVar4;
      if ((lVar4 != 0) && (iVar1 = FUN_0038f9ec(lVar4,0x10001), iVar1 != 0)) {
        puVar3[3] = 0x800;
        puVar3[5] = 2;
        *(undefined4 *)(puVar3 + 2) = param_3;
        iVar1 = FUN_0045b7a0(puVar3,param_4);
        if (iVar1 != 0) {
          return puVar3;
        }
      }
      FUN_0038f4f4(puVar3[4]);
    }
    FUN_003c86b4(puVar3,"providers/implementations/keymgmt/rsa_kmgmt.c",0x1e2);
    return (undefined8 *)0x0;
  }
  return (undefined8 *)0x0;
}


// ===== 0045c2e8  FUN_0045c2e8 =====

void FUN_0045c2e8(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_8 = param_2;
  uStack_4 = param_1;
  lVar1 = FUN_00390974(param_3);
  local_30 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  local_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  FUN_003cb668(&local_a0,"potential",&uStack_4);
  FUN_003cb668(&local_c8,"iteration",&local_8);
  local_58 = local_a8;
  local_70 = uStack_c0;
  uStack_78 = local_c8;
  uStack_60 = uStack_b0;
  uStack_68 = local_b8;
  (**(code **)(lVar1 + 0x48))(&local_a0,*(undefined8 *)(lVar1 + 0x50));
  return;
}


// ===== 0045c37c  FUN_0045c37c =====

undefined8 * FUN_0045c37c(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)FUN_003c8474(0x28,"providers/implementations/macs/cmac_prov.c",0x3c);
    if (puVar2 != (undefined8 *)0x0) {
      lVar3 = FUN_0045c898();
      puVar2[1] = lVar3;
      if (lVar3 != 0) {
        *puVar2 = param_1;
        return puVar2;
      }
    }
    FUN_003c86b4(puVar2,"providers/implementations/macs/cmac_prov.c",0x3e);
  }
  return (undefined8 *)0x0;
}


// ===== 0045c3f4  FUN_0045c3f4 =====

undefined8 * FUN_0045c3f4(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 == 0) {
    return (undefined8 *)0x0;
  }
  uVar5 = *param_1;
  iVar1 = FUN_0043eb70();
  if (iVar1 == 0) {
    return (undefined8 *)0x0;
  }
  puVar2 = (undefined8 *)FUN_003c8474(0x28,"providers/implementations/macs/cmac_prov.c",0x3c);
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = FUN_0045c898();
    puVar2[1] = lVar3;
    if (lVar3 != 0) {
      uVar4 = param_1[1];
      *puVar2 = uVar5;
      iVar1 = FUN_0045c9ec(lVar3,uVar4);
      if ((iVar1 != 0) && (iVar1 = FUN_0043f57c(puVar2 + 2,param_1 + 2), iVar1 != 0)) {
        return puVar2;
      }
      FUN_0045c96c(puVar2[1]);
      FUN_0043f550(puVar2 + 2);
      uVar5 = 0x4e;
      goto LAB_0045c4b8;
    }
  }
  uVar5 = 0x3e;
LAB_0045c4b8:
  FUN_003c86b4(puVar2,"providers/implementations/macs/cmac_prov.c",uVar5);
  return (undefined8 *)0x0;
}


// ===== 0045c4d0  FUN_0045c4d0 =====

void FUN_0045c4d0(long param_1)

{
  if (param_1 != 0) {
    FUN_0045c96c(*(undefined8 *)(param_1 + 8));
    FUN_0043f550(param_1 + 0x10);
    FUN_003c86b4(param_1,"providers/implementations/macs/cmac_prov.c",0x4e);
    return;
  }
  return;
}


// ===== 0045c518  FUN_0045c518 =====

ulong FUN_0045c518(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  iVar1 = FUN_0043eb70();
  if ((iVar1 != 0) && (iVar1 = FUN_0045c744(param_1,param_4), iVar1 != 0)) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    if (param_2 != 0) {
      uVar2 = FUN_0043f6f0(param_1 + 0x10);
      uVar3 = FUN_0043f6f8(param_1 + 0x10);
      uVar4 = FUN_0045caac(uVar5,param_2,param_3,uVar2,uVar3);
      FUN_0043f550(param_1 + 0x10);
      return uVar4 & 0xffffffff;
    }
    uVar4 = FUN_0045caac(uVar5,0,0,0,0);
    return uVar4;
  }
  return 0;
}


// ===== 0045c5ec  FUN_0045c5ec =====

void FUN_0045c5ec(long param_1)

{
  FUN_0045cdf4(*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 0045c5f4  FUN_0045c5f4 =====

void FUN_0045c5f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    FUN_0045cfc0(*(undefined8 *)(param_1 + 8),param_2,param_3);
    return;
  }
  return;
}


// ===== 0045c644  FUN_0045c644 =====

undefined ** FUN_0045c644(void)

{
  return &PTR_DAT_0078bc20;
}


// ===== 0045c650  FUN_0045c650 =====

undefined8 FUN_0045c650(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = FUN_003cb140(param_2,&DAT_001f543b);
  if (lVar2 != 0) {
    uVar3 = FUN_0045c964(*(undefined8 *)(param_1 + 8));
    lVar4 = FUN_0038944c();
    if (lVar4 == 0) {
      uVar3 = thunk_FUN_003cc2a4(lVar2,0);
      iVar1 = (int)uVar3;
    }
    else {
      iVar1 = FUN_0038936c(uVar3);
      uVar3 = thunk_FUN_003cc2a4(lVar2,(long)iVar1);
      iVar1 = (int)uVar3;
    }
    if (iVar1 == 0) {
      return uVar3;
    }
  }
  lVar2 = FUN_003cb140(param_2,"block-size");
  if (lVar2 != 0) {
    uVar3 = FUN_0045c964(*(undefined8 *)(param_1 + 8));
    lVar4 = FUN_0038944c();
    if (lVar4 == 0) {
      uVar3 = thunk_FUN_003cc2a4(lVar2,0);
      iVar1 = (int)uVar3;
    }
    else {
      iVar1 = FUN_0038936c(uVar3);
      uVar3 = thunk_FUN_003cc2a4(lVar2,(long)iVar1);
      iVar1 = (int)uVar3;
    }
    if (iVar1 == 0) {
      return uVar3;
    }
  }
  return 1;
}


// ===== 0045c738  FUN_0045c738 =====

undefined ** FUN_0045c738(void)

{
  return &PTR_s_cipher_0078bc98;
}


// ===== 0045c744  FUN_0045c744 =====

ulong FUN_0045c744(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar3 = FUN_0046b880(*param_1);
  if (param_2 == 0) {
    return 1;
  }
  lVar4 = FUN_003cb19c(param_2,"cipher");
  if (lVar4 != 0) {
    uVar5 = FUN_0043f5c8(param_1 + 2,param_2,uVar3);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    FUN_0043f6f0(param_1 + 2);
    iVar2 = FUN_00388e4c();
    if (iVar2 != 2) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/macs/cmac_prov.c",0xd2,"cmac_set_ctx_params");
      FUN_00379a5c(0x39,0x7d,0);
      return 0;
    }
  }
  lVar4 = FUN_003cb19c(param_2,&DAT_001e2b47);
  if (lVar4 == 0) {
    return 1;
  }
  if (*(int *)(lVar4 + 8) != 5) {
    return 0;
  }
  uVar3 = *(undefined8 *)(lVar4 + 0x10);
  uVar1 = *(undefined8 *)(lVar4 + 0x18);
  uVar8 = param_1[1];
  uVar6 = FUN_0043f6f0(param_1 + 2);
  uVar7 = FUN_0043f6f8(param_1 + 2);
  uVar5 = FUN_0045caac(uVar8,uVar3,uVar1,uVar6,uVar7);
  FUN_0043f550(param_1 + 2);
  return uVar5 & 0xffffffff;
}


// ===== 0045c898  FUN_0045c898 =====

long * FUN_0045c898(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_003c83a4(0x90,"crypto/cmac/cmac.c",0x39);
  if (plVar1 != (long *)0x0) {
    lVar2 = FUN_0037fab8();
    *plVar1 = lVar2;
    if (lVar2 == 0) {
      FUN_003c86b4(plVar1,"crypto/cmac/cmac.c",0x3d);
      return (long *)0x0;
    }
    *(undefined4 *)(plVar1 + 0x11) = 0xffffffff;
  }
  return plVar1;
}


// ===== 0045c908  FUN_0045c908 =====

void FUN_0045c908(undefined8 *param_1)

{
  FUN_0037f938(*param_1);
  FUN_003c89b8(param_1 + 9,0x20);
  FUN_003c89b8(param_1 + 1,0x20);
  FUN_003c89b8(param_1 + 5,0x20);
  FUN_003c89b8(param_1 + 0xd,0x20);
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  return;
}


// ===== 0045c964  FUN_0045c964 =====

undefined8 FUN_0045c964(undefined8 *param_1)

{
  return *param_1;
}


// ===== 0045c96c  FUN_0045c96c =====

void FUN_0045c96c(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_0037f938(*param_1);
    FUN_003c89b8(param_1 + 9,0x20);
    FUN_003c89b8(param_1 + 1,0x20);
    FUN_003c89b8(param_1 + 5,0x20);
    FUN_003c89b8(param_1 + 0xd,0x20);
    *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
    FUN_0037fae8(*param_1);
    FUN_003c86b4(param_1,"crypto/cmac/cmac.c",0x59);
    return;
  }
  return;
}


// ===== 0045c9ec  FUN_0045c9ec =====

undefined8 FUN_0045c9ec(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong __n;
  
  if (*(int *)(param_2 + 0x11) == -1) {
    return 0;
  }
  uVar1 = FUN_0038936c(*param_2);
  if (-1 < (int)uVar1) {
    __n = (ulong)uVar1;
    uVar2 = FUN_0038213c(*param_1,*param_2);
    if ((int)uVar2 != 0) {
      memcpy(param_1 + 1,param_2 + 1,__n);
      memcpy(param_1 + 5,param_2 + 5,__n);
      memcpy(param_1 + 9,param_2 + 9,__n);
      memcpy(param_1 + 0xd,param_2 + 0xd,__n);
      uVar2 = 1;
      *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
    }
    return uVar2;
  }
  return 0;
}


// ===== 0045caac  FUN_0045caac =====

ulong FUN_0045caac(undefined8 *param_1,long param_2,ulong param_3,long param_4,long param_5)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  size_t __n;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  unkbyte9 *pVar12;
  uint uVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  char cVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  
  if ((((param_2 == 0) && (param_4 == 0)) && (param_3 == 0)) && (param_5 == 0)) {
    if (*(int *)(param_1 + 0x11) == -1) {
      return 0;
    }
    uVar7 = FUN_00381064(*param_1,0,0,0,&DAT_0020ee88);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    iVar5 = FUN_0038936c(*param_1);
    __n = (size_t)iVar5;
    goto LAB_0045cb18;
  }
  if (param_4 == 0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
    iVar5 = FUN_00381064(*param_1,param_4,param_5,0,0);
    if (param_2 == 0) {
      return (ulong)(iVar5 != 0);
    }
    if (iVar5 == 0) {
      return (ulong)(iVar5 != 0);
    }
  }
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  lVar8 = FUN_0038944c(*param_1);
  if (lVar8 == 0) {
    return 0;
  }
  iVar5 = FUN_003814f4(*param_1,param_3 & 0xffffffff);
  if (iVar5 < 1) {
    return 0;
  }
  uVar7 = FUN_00381064(*param_1,0,0,param_2,&DAT_0020ee88);
  if ((int)uVar7 == 0) {
    return uVar7;
  }
  uVar6 = FUN_0038936c(*param_1);
  if ((int)uVar6 < 0) {
    return 0;
  }
  iVar5 = FUN_00389380(*param_1,param_1 + 9,&DAT_0020ee88,uVar6);
  if (iVar5 < 1) {
    return 0;
  }
  bVar18 = *(byte *)(param_1 + 9);
  uVar7 = (ulong)(uVar6 - 1);
  if (uVar6 < 2) {
    uVar11 = 0;
    uVar13 = (uint)(char)bVar18;
  }
  else {
    if (uVar6 < 0x21) {
      uVar9 = 0;
      uVar11 = (long)(char)bVar18 & 0xffffffff;
LAB_0045cc9c:
      lVar8 = uVar7 - uVar9;
      pbVar14 = (byte *)((long)param_1 + uVar9 + 0x49);
      do {
        bVar34 = *pbVar14;
        lVar8 = lVar8 + -1;
        pbVar14[-0x41] = (byte)((uVar11 << 0x20 | (ulong)bVar34 << 0x18) >> 0x1f);
        pbVar14 = pbVar14 + 1;
        uVar11 = (ulong)bVar34;
      } while (lVar8 != 0);
    }
    else {
      uVar9 = uVar7 & 0x7fffffe0;
      pVar12 = (unkbyte9 *)((long)param_1 + 0x49);
      uVar11 = uVar9;
      bVar17 = bVar18;
      bVar19 = bVar18;
      bVar20 = bVar18;
      bVar21 = bVar18;
      bVar22 = bVar18;
      bVar23 = bVar18;
      bVar24 = bVar18;
      bVar25 = bVar18;
      bVar27 = bVar18;
      bVar28 = bVar18;
      bVar29 = bVar18;
      bVar30 = bVar18;
      bVar31 = bVar18;
      bVar32 = bVar18;
      bVar33 = bVar18;
      bVar34 = bVar18;
      do {
        auVar41[9] = bVar28;
        auVar41[8] = bVar27;
        auVar41[10] = bVar29;
        auVar41[0xb] = bVar30;
        auVar41[0xc] = bVar31;
        auVar41[0xd] = bVar32;
        auVar41[0xe] = bVar33;
        auVar41[0xf] = bVar34;
        auVar41[1] = bVar19;
        auVar41[0] = bVar17;
        auVar41[2] = bVar20;
        auVar41[3] = bVar21;
        auVar41[4] = bVar22;
        auVar41[5] = bVar23;
        auVar41[6] = bVar24;
        auVar41[7] = bVar25;
        uVar4 = *(undefined8 *)((long)pVar12 + 8);
        cVar26 = (char)((ulong)uVar4 >> 8);
        cVar35 = (char)((ulong)uVar4 >> 0x10);
        cVar36 = (char)((ulong)uVar4 >> 0x18);
        cVar37 = (char)((ulong)uVar4 >> 0x20);
        cVar38 = (char)((ulong)uVar4 >> 0x28);
        cVar39 = (char)((ulong)uVar4 >> 0x30);
        cVar40 = (char)((ulong)uVar4 >> 0x38);
        uVar2 = *(undefined8 *)pVar12;
        uVar3 = *(undefined8 *)((long)pVar12 + 0x18);
        bVar27 = (byte)uVar3;
        bVar28 = (byte)((ulong)uVar3 >> 8);
        bVar29 = (byte)((ulong)uVar3 >> 0x10);
        bVar30 = (byte)((ulong)uVar3 >> 0x18);
        bVar31 = (byte)((ulong)uVar3 >> 0x20);
        bVar32 = (byte)((ulong)uVar3 >> 0x28);
        bVar33 = (byte)((ulong)uVar3 >> 0x30);
        bVar34 = (byte)((ulong)uVar3 >> 0x38);
        uVar3 = *(undefined8 *)(pVar12 + 1);
        bVar17 = (byte)uVar3;
        bVar19 = (byte)((ulong)uVar3 >> 8);
        bVar20 = (byte)((ulong)uVar3 >> 0x10);
        bVar21 = (byte)((ulong)uVar3 >> 0x18);
        bVar22 = (byte)((ulong)uVar3 >> 0x20);
        bVar23 = (byte)((ulong)uVar3 >> 0x28);
        bVar24 = (byte)((ulong)uVar3 >> 0x30);
        bVar25 = (byte)((ulong)uVar3 >> 0x38);
        uVar11 = uVar11 - 0x20;
        auVar42[9] = cVar26;
        auVar42._0_9_ = *pVar12;
        auVar42[10] = cVar35;
        auVar42[0xb] = cVar36;
        auVar42[0xc] = cVar37;
        auVar42[0xd] = cVar38;
        auVar42[0xe] = cVar39;
        auVar42[0xf] = cVar40;
        auVar42 = NEON_ext(auVar41,auVar42,0xf,1);
        auVar43[9] = bVar28;
        auVar43._0_9_ = pVar12[1];
        auVar43[10] = bVar29;
        auVar43[0xb] = bVar30;
        auVar43[0xc] = bVar31;
        auVar43[0xd] = bVar32;
        auVar43[0xe] = bVar33;
        auVar43[0xf] = bVar34;
        auVar1[9] = cVar26;
        auVar1._0_9_ = *pVar12;
        auVar1[10] = cVar35;
        auVar1[0xb] = cVar36;
        auVar1[0xc] = cVar37;
        auVar1[0xd] = cVar38;
        auVar1[0xe] = cVar39;
        auVar1[0xf] = cVar40;
        auVar43 = NEON_ext(auVar1,auVar43,0xf,1);
        *(char *)((long)pVar12 + -0x31) = auVar42[8] * '\x02' - ((char)uVar4 >> 7);
        *(char *)(pVar12 + -3) = auVar42[9] * '\x02' - (cVar26 >> 7);
        *(char *)((long)pVar12 + -0x2f) = auVar42[10] * '\x02' - (cVar35 >> 7);
        *(char *)((long)pVar12 + -0x2e) = auVar42[0xb] * '\x02' - (cVar36 >> 7);
        *(char *)((long)pVar12 + -0x2d) = auVar42[0xc] * '\x02' - (cVar37 >> 7);
        *(char *)((long)pVar12 + -0x2c) = auVar42[0xd] * '\x02' - (cVar38 >> 7);
        *(char *)((long)pVar12 + -0x2b) = auVar42[0xe] * '\x02' - (cVar39 >> 7);
        *(char *)((long)pVar12 + -0x2a) = auVar42[0xf] * '\x02' - (cVar40 >> 7);
        *(char *)((long)pVar12 + -0x41) = auVar42[0] * '\x02' - ((char)uVar2 >> 7);
        *(char *)(pVar12 + -4) = auVar42[1] * '\x02' - ((char)((ulong)uVar2 >> 8) >> 7);
        *(char *)((long)pVar12 + -0x3f) = auVar42[2] * '\x02' - ((char)((ulong)uVar2 >> 0x10) >> 7);
        *(char *)((long)pVar12 + -0x3e) = auVar42[3] * '\x02' - ((char)((ulong)uVar2 >> 0x18) >> 7);
        *(char *)((long)pVar12 + -0x3d) = auVar42[4] * '\x02' - ((char)((ulong)uVar2 >> 0x20) >> 7);
        *(char *)((long)pVar12 + -0x3c) = auVar42[5] * '\x02' - ((char)((ulong)uVar2 >> 0x28) >> 7);
        *(char *)((long)pVar12 + -0x3b) = auVar42[6] * '\x02' - ((char)((ulong)uVar2 >> 0x30) >> 7);
        *(char *)((long)pVar12 + -0x3a) = auVar42[7] * '\x02' - (char)((long)uVar2 >> 0x3f);
        *(char *)((long)pVar12 + -0x21) = auVar43[8] * '\x02' - ((char)bVar27 >> 7);
        *(char *)(pVar12 + -2) = auVar43[9] * '\x02' - ((char)bVar28 >> 7);
        *(char *)((long)pVar12 + -0x1f) = auVar43[10] * '\x02' - ((char)bVar29 >> 7);
        *(char *)((long)pVar12 + -0x1e) = auVar43[0xb] * '\x02' - ((char)bVar30 >> 7);
        *(char *)((long)pVar12 + -0x1d) = auVar43[0xc] * '\x02' - ((char)bVar31 >> 7);
        *(char *)((long)pVar12 + -0x1c) = auVar43[0xd] * '\x02' - ((char)bVar32 >> 7);
        *(char *)((long)pVar12 + -0x1b) = auVar43[0xe] * '\x02' - ((char)bVar33 >> 7);
        *(char *)((long)pVar12 + -0x1a) = auVar43[0xf] * '\x02' - ((char)bVar34 >> 7);
        *(char *)((long)pVar12 + -0x31) = auVar43[0] * '\x02' - ((char)bVar17 >> 7);
        *(char *)(pVar12 + -3) = auVar43[1] * '\x02' - ((char)bVar19 >> 7);
        *(char *)((long)pVar12 + -0x2f) = auVar43[2] * '\x02' - ((char)bVar20 >> 7);
        *(char *)((long)pVar12 + -0x2e) = auVar43[3] * '\x02' - ((char)bVar21 >> 7);
        *(char *)((long)pVar12 + -0x2d) = auVar43[4] * '\x02' - ((char)bVar22 >> 7);
        *(char *)((long)pVar12 + -0x2c) = auVar43[5] * '\x02' - ((char)bVar23 >> 7);
        *(char *)((long)pVar12 + -0x2b) = auVar43[6] * '\x02' - ((char)bVar24 >> 7);
        *(char *)((long)pVar12 + -0x2a) = auVar43[7] * '\x02' - ((char)bVar25 >> 7);
        pVar12 = pVar12 + 2;
      } while (uVar11 != 0);
      uVar11 = (ulong)bVar34;
      if (uVar9 != uVar7) goto LAB_0045cc9c;
    }
    uVar13 = (uint)bVar34;
    uVar11 = uVar7;
  }
  bVar34 = 0x87;
  if (uVar6 != 0x10) {
    bVar34 = 0x1b;
  }
  *(byte *)((long)param_1 + uVar11 + 8) =
       bVar34 & (byte)((uint)(int)(char)bVar18 >> 7) ^ (byte)(uVar13 << 1);
  bVar18 = *(byte *)(param_1 + 1);
  uVar10 = (uint)(char)bVar18;
  uVar13 = uVar10;
  if (uVar6 < 2) {
    uVar7 = 0;
  }
  else {
    if (uVar6 == 2) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar7 & 0x7ffffffe;
      uVar11 = uVar9;
      puVar15 = param_1 + 5;
      bVar17 = bVar18;
      cVar26 = (char)bVar18 >> 7;
      do {
        bVar19 = *(byte *)((long)puVar15 + -0x1f);
        bVar20 = *(byte *)((long)puVar15 + -0x1e);
        uVar11 = uVar11 - 2;
        uVar3 = NEON_ext(CONCAT17(cVar26,CONCAT16(cVar26,CONCAT15(cVar26,CONCAT14(bVar17,CONCAT13(
                                                  cVar26,CONCAT12(cVar26,CONCAT11(cVar26,bVar18)))))
                                                 )),(ulong)CONCAT14(bVar20,(uint)bVar19),4,1);
        *(char *)((long)puVar15 + 1) =
             (char)((CONCAT11((char)((ulong)uVar3 >> 0x20),bVar20) & 0x7f80) >> 7);
        *(char *)puVar15 = (char)((CONCAT11((char)uVar3,bVar19) & 0x7f80) >> 7);
        puVar15 = (undefined8 *)((long)puVar15 + 2);
        bVar18 = bVar19;
        bVar17 = bVar20;
        cVar26 = '\0';
      } while (uVar11 != 0);
      uVar13 = (uint)bVar20;
      if (uVar9 == uVar7) goto LAB_0045cd98;
    }
    lVar8 = uVar7 - uVar9;
    puVar16 = (undefined1 *)((long)param_1 + uVar9 + 0x28);
    do {
      uVar11 = (ulong)uVar13;
      uVar13 = (uint)(byte)puVar16[-0x1f];
      lVar8 = lVar8 + -1;
      *puVar16 = (char)((uVar11 << 0x20 | (ulong)(byte)puVar16[-0x1f] << 0x18) >> 0x1f);
      puVar16 = puVar16 + 1;
    } while (lVar8 != 0);
  }
LAB_0045cd98:
  __n = (size_t)uVar6;
  *(byte *)((long)(param_1 + 5) + uVar7) = bVar34 & (byte)(uVar10 >> 7) ^ (byte)(uVar13 << 1);
  FUN_003c89b8(param_1 + 9,__n);
  uVar7 = FUN_00381064(*param_1,0,0,0,&DAT_0020ee88);
  if ((int)uVar7 == 0) {
    return uVar7;
  }
LAB_0045cb18:
  memset(param_1 + 9,0,__n);
  *(undefined4 *)(param_1 + 0x11) = 0;
  return 1;
}


// ===== 0045cdf4  FUN_0045cdf4 =====

undefined8 FUN_0045cdf4(undefined8 *param_1,void *param_2,ulong param_3)

{
  size_t __n;
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong __n_00;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_850 [2048];
  
  if (*(int *)(param_1 + 0x11) == -1) {
    return 0;
  }
  if (param_3 == 0) {
    return 1;
  }
  uVar2 = FUN_0038936c(*param_1);
  if ((int)uVar2 < 0) {
LAB_0045cfa0:
    uVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x11);
    if (0 < (int)uVar1) {
      __n = (long)(int)(uVar2 - uVar1);
      if (param_3 <= (ulong)(long)(int)(uVar2 - uVar1)) {
        __n = param_3;
      }
      memcpy((void *)((long)(param_1 + 0xd) + (ulong)uVar1),param_2,__n);
      param_3 = param_3 - __n;
      *(int *)(param_1 + 0x11) = *(int *)(param_1 + 0x11) + (int)__n;
      if (param_3 == 0) {
        return 1;
      }
      iVar3 = FUN_00389380(*param_1,param_1 + 9,param_1 + 0xd,uVar2);
      if (iVar3 < 1) goto LAB_0045cfa0;
      param_2 = (void *)((long)param_2 + __n);
    }
    __n_00 = (ulong)uVar2;
    if (uVar2 < 0x801) {
      uVar6 = 0;
      if (__n_00 != 0) {
        uVar6 = (param_3 - 1) / __n_00;
      }
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = 0x800 / uVar2;
      }
      uVar7 = (ulong)uVar1;
      if (uVar7 < uVar6) {
        uVar5 = uVar7 * __n_00;
        do {
          iVar3 = FUN_00389380(*param_1,auStack_850,param_2,uVar5 & 0xffffffff);
          if (iVar3 < 1) goto LAB_0045cfa0;
          uVar6 = uVar6 - uVar7;
          param_3 = param_3 - uVar5;
          param_2 = (void *)((long)param_2 + uVar5);
        } while (uVar7 < uVar6);
      }
      if (uVar6 != 0) {
        uVar7 = uVar6 * __n_00;
        iVar3 = FUN_00389380(*param_1,auStack_850,param_2,uVar7 & 0xffffffff);
        if (iVar3 < 1) goto LAB_0045cfa0;
        param_3 = param_3 - uVar7;
        param_2 = (void *)((long)param_2 + uVar7);
        memcpy(param_1 + 9,auStack_850 + (uVar6 - 1) * __n_00,__n_00);
      }
    }
    else {
      for (; __n_00 < param_3; param_3 = param_3 - __n_00) {
        iVar3 = FUN_00389380(*param_1,param_1 + 9,param_2,uVar2);
        if (iVar3 < 1) goto LAB_0045cfa0;
        param_2 = (void *)((long)param_2 + __n_00);
      }
    }
    memcpy(param_1 + 0xd,param_2,param_3);
    *(int *)(param_1 + 0x11) = (int)param_3;
    uVar4 = 1;
  }
  return uVar4;
}


// ===== 0045cfc0  FUN_0045cfc0 =====

undefined8 FUN_0045cfc0(undefined8 *param_1,ulong param_2,ulong *param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  if (*(int *)(param_1 + 0x11) == -1) {
    return 0;
  }
  uVar4 = FUN_0038936c(*param_1);
  if ((int)uVar4 < 0) {
    return 0;
  }
  uVar14 = (ulong)uVar4;
  if (param_3 != (ulong *)0x0) {
    *param_3 = uVar14;
  }
  if (param_2 == 0) {
    return 1;
  }
  uVar3 = *(uint *)(param_1 + 0x11);
  if (uVar4 != uVar3) {
    *(undefined1 *)((long)param_1 + (long)(int)uVar3 + 0x68) = 0x80;
    if (1 < (int)(uVar4 - uVar3)) {
      memset((void *)((long)param_1 + (long)(int)uVar3 + 0x69),0,(ulong)((uVar4 - uVar3) - 1));
    }
    if (uVar4 == 0) goto LAB_0045d108;
    if ((uVar4 < 8) ||
       ((param_2 < (long)param_1 + uVar14 + 0x68 && (param_1 + 5 < (undefined8 *)(param_2 + uVar14))
        ))) {
      uVar6 = 0;
    }
    else {
      if (uVar4 < 0x20) {
        uVar8 = 0;
      }
      else {
        uVar6 = uVar14 & 0x7fffffe0;
        puVar11 = param_1 + 0xf;
        puVar13 = (undefined8 *)(param_2 + 0x10);
        uVar8 = uVar6;
        do {
          uVar17 = puVar11[-9];
          uVar15 = puVar11[-10];
          uVar22 = puVar11[-7];
          uVar21 = puVar11[-8];
          uVar8 = uVar8 - 0x20;
          uVar18 = puVar11[-1];
          uVar16 = puVar11[-2];
          uVar20 = puVar11[1];
          uVar19 = *puVar11;
          puVar11 = puVar11 + 4;
          puVar13[-1] = CONCAT17((byte)((ulong)uVar17 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar17 >> 0x30) ^
                                          (byte)((ulong)uVar18 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar17 >> 0x28) ^
                                                   (byte)((ulong)uVar18 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar17 >> 0x20) ^
                                                            (byte)((ulong)uVar18 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar17 >> 0x18) ^
                                                                     (byte)((ulong)uVar18 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar17
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar18
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar17 >> 8) ^ (byte)((ulong)uVar18 >> 8),
                                                  (byte)uVar17 ^ (byte)uVar18)))))));
          puVar13[-2] = CONCAT17((byte)((ulong)uVar15 >> 0x38) ^ (byte)((ulong)uVar16 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar15 >> 0x30) ^
                                          (byte)((ulong)uVar16 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar15 >> 0x28) ^
                                                   (byte)((ulong)uVar16 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar15 >> 0x20) ^
                                                            (byte)((ulong)uVar16 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar15 >> 0x18) ^
                                                                     (byte)((ulong)uVar16 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar15
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar16
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar15 >> 8) ^ (byte)((ulong)uVar16 >> 8),
                                                  (byte)uVar15 ^ (byte)uVar16)))))));
          puVar13[1] = CONCAT17((byte)((ulong)uVar22 >> 0x38) ^ (byte)((ulong)uVar20 >> 0x38),
                                CONCAT16((byte)((ulong)uVar22 >> 0x30) ^
                                         (byte)((ulong)uVar20 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar22 >> 0x28) ^
                                                  (byte)((ulong)uVar20 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar22 >> 0x20) ^
                                                           (byte)((ulong)uVar20 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar22 >> 0x18) ^
                                                                    (byte)((ulong)uVar20 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar22 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar20 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar22 >> 8) ^ (byte)((ulong)uVar20 >> 8),
                                                  (byte)uVar22 ^ (byte)uVar20)))))));
          *puVar13 = CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                              CONCAT16((byte)((ulong)uVar21 >> 0x30) ^ (byte)((ulong)uVar19 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar21 >> 0x28) ^
                                                 (byte)((ulong)uVar19 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                                          (byte)((ulong)uVar19 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar21 >> 0x18) ^
                                                                   (byte)((ulong)uVar19 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar21 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar19 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar21 >> 8) ^ (byte)((ulong)uVar19 >> 8),
                                                  (byte)uVar21 ^ (byte)uVar19)))))));
          puVar13 = puVar13 + 4;
        } while (uVar8 != 0);
        if (uVar6 == uVar14) goto LAB_0045d108;
        uVar8 = uVar6;
        if ((uVar4 & 0x18) == 0) goto LAB_0045d0dc;
      }
      uVar6 = uVar14 & 0x7ffffff8;
      lVar7 = uVar8 - uVar6;
      puVar11 = (undefined8 *)((long)param_1 + uVar8 + 0x68);
      puVar13 = (undefined8 *)(param_2 + uVar8);
      do {
        uVar15 = *puVar11;
        uVar17 = puVar11[-8];
        lVar7 = lVar7 + 8;
        puVar11 = puVar11 + 1;
        *puVar13 = CONCAT17((byte)((ulong)uVar17 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38),
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
        puVar13 = puVar13 + 1;
      } while (lVar7 != 0);
      if (uVar6 == uVar14) goto LAB_0045d108;
    }
LAB_0045d0dc:
    lVar7 = uVar14 - uVar6;
    pbVar12 = (byte *)((long)param_1 + uVar6 + 0x68);
    pbVar10 = (byte *)(param_2 + uVar6);
    do {
      bVar2 = *pbVar12;
      pbVar1 = pbVar12 + -0x40;
      lVar7 = lVar7 + -1;
      pbVar12 = pbVar12 + 1;
      *pbVar10 = *pbVar1 ^ bVar2;
      pbVar10 = pbVar10 + 1;
    } while (lVar7 != 0);
    goto LAB_0045d108;
  }
  if (uVar4 == 0) goto LAB_0045d108;
  uVar6 = (ulong)uVar4;
  if ((uVar4 < 8) ||
     ((param_2 < (long)param_1 + uVar6 + 0x68 && (param_1 + 1 < (undefined8 *)(param_2 + uVar6)))))
  {
    uVar8 = 0;
  }
  else {
    if (uVar4 < 0x20) {
      uVar9 = 0;
    }
    else {
      uVar8 = uVar6 & 0x7fffffe0;
      puVar11 = param_1 + 0xf;
      puVar13 = (undefined8 *)(param_2 + 0x10);
      uVar9 = uVar8;
      do {
        uVar17 = puVar11[-0xd];
        uVar15 = puVar11[-0xe];
        uVar22 = puVar11[-0xb];
        uVar21 = puVar11[-0xc];
        uVar9 = uVar9 - 0x20;
        uVar18 = puVar11[-1];
        uVar16 = puVar11[-2];
        uVar20 = puVar11[1];
        uVar19 = *puVar11;
        puVar11 = puVar11 + 4;
        puVar13[-1] = CONCAT17((byte)((ulong)uVar17 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                               CONCAT16((byte)((ulong)uVar17 >> 0x30) ^
                                        (byte)((ulong)uVar18 >> 0x30),
                                        CONCAT15((byte)((ulong)uVar17 >> 0x28) ^
                                                 (byte)((ulong)uVar18 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar17 >> 0x20) ^
                                                          (byte)((ulong)uVar18 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar17 >> 0x18) ^
                                                                   (byte)((ulong)uVar18 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar17 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar18 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar17 >> 8) ^ (byte)((ulong)uVar18 >> 8),
                                                  (byte)uVar17 ^ (byte)uVar18)))))));
        puVar13[-2] = CONCAT17((byte)((ulong)uVar15 >> 0x38) ^ (byte)((ulong)uVar16 >> 0x38),
                               CONCAT16((byte)((ulong)uVar15 >> 0x30) ^
                                        (byte)((ulong)uVar16 >> 0x30),
                                        CONCAT15((byte)((ulong)uVar15 >> 0x28) ^
                                                 (byte)((ulong)uVar16 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar15 >> 0x20) ^
                                                          (byte)((ulong)uVar16 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar15 >> 0x18) ^
                                                                   (byte)((ulong)uVar16 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar15 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar16 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar15 >> 8) ^ (byte)((ulong)uVar16 >> 8),
                                                  (byte)uVar15 ^ (byte)uVar16)))))));
        puVar13[1] = CONCAT17((byte)((ulong)uVar22 >> 0x38) ^ (byte)((ulong)uVar20 >> 0x38),
                              CONCAT16((byte)((ulong)uVar22 >> 0x30) ^ (byte)((ulong)uVar20 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar22 >> 0x28) ^
                                                 (byte)((ulong)uVar20 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar22 >> 0x20) ^
                                                          (byte)((ulong)uVar20 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar22 >> 0x18) ^
                                                                   (byte)((ulong)uVar20 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar22 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar20 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar22 >> 8) ^ (byte)((ulong)uVar20 >> 8),
                                                  (byte)uVar22 ^ (byte)uVar20)))))));
        *puVar13 = CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                            CONCAT16((byte)((ulong)uVar21 >> 0x30) ^ (byte)((ulong)uVar19 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar21 >> 0x28) ^
                                              (byte)((ulong)uVar19 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                                       (byte)((ulong)uVar19 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar21 >> 0x18) ^
                                                                (byte)((ulong)uVar19 >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar21 >>
                                                                               0x10) ^
                                                                         (byte)((ulong)uVar19 >>
                                                                               0x10),
                                                                         CONCAT11((byte)((ulong)
                                                  uVar21 >> 8) ^ (byte)((ulong)uVar19 >> 8),
                                                  (byte)uVar21 ^ (byte)uVar19)))))));
        puVar13 = puVar13 + 4;
      } while (uVar9 != 0);
      if (uVar8 == uVar6) goto LAB_0045d108;
      uVar9 = uVar8;
      if ((uVar4 & 0x18) == 0) goto LAB_0045d048;
    }
    uVar8 = uVar6 & 0x7ffffff8;
    lVar7 = uVar9 - uVar8;
    puVar11 = (undefined8 *)((long)param_1 + uVar9 + 0x68);
    puVar13 = (undefined8 *)(param_2 + uVar9);
    do {
      uVar15 = *puVar11;
      uVar17 = puVar11[-0xc];
      lVar7 = lVar7 + 8;
      puVar11 = puVar11 + 1;
      *puVar13 = CONCAT17((byte)((ulong)uVar17 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38),
                          CONCAT16((byte)((ulong)uVar17 >> 0x30) ^ (byte)((ulong)uVar15 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar17 >> 0x28) ^
                                            (byte)((ulong)uVar15 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar17 >> 0x20) ^
                                                     (byte)((ulong)uVar15 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar17 >> 0x18) ^
                                                              (byte)((ulong)uVar15 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar17 >> 0x10)
                                                                       ^ (byte)((ulong)uVar15 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar17
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar15
                                                                                      >> 8),
                                                                                (byte)uVar17 ^
                                                                                (byte)uVar15)))))));
      puVar13 = puVar13 + 1;
    } while (lVar7 != 0);
    if (uVar8 == uVar6) goto LAB_0045d108;
  }
LAB_0045d048:
  lVar7 = uVar6 - uVar8;
  pbVar12 = (byte *)((long)param_1 + uVar8 + 0x68);
  pbVar10 = (byte *)(param_2 + uVar8);
  do {
    bVar2 = *pbVar12;
    pbVar1 = pbVar12 + -0x60;
    lVar7 = lVar7 + -1;
    pbVar12 = pbVar12 + 1;
    *pbVar10 = *pbVar1 ^ bVar2;
    pbVar10 = pbVar10 + 1;
  } while (lVar7 != 0);
LAB_0045d108:
  iVar5 = FUN_00389380(*param_1,param_2,param_2,uVar14);
  if (iVar5 < 1) {
    FUN_003c89b8(param_2,uVar14);
    return 0;
  }
  return 1;
}


// ===== 0045d280  FUN_0045d280 =====

undefined8 FUN_0045d280(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x11) != -1) {
    uVar1 = FUN_00381064(*param_1,0,0,0,param_1 + 9);
    return uVar1;
  }
  return 0;
}


// ===== 0045d2ac  FUN_0045d2ac =====

undefined8 * FUN_0045d2ac(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 == 0) {
    return (undefined8 *)0x0;
  }
  puVar2 = (undefined8 *)FUN_003c8474(0x28,"providers/implementations/macs/gmac_prov.c",0x41);
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = FUN_0037fab8();
    puVar2[1] = lVar3;
    if (lVar3 == 0) {
      FUN_0037fae8(0);
      FUN_0043f550(puVar2 + 2);
      FUN_003c86b4(puVar2,"providers/implementations/macs/gmac_prov.c",0x36);
      return (undefined8 *)0x0;
    }
    *puVar2 = param_1;
  }
  return puVar2;
}


// ===== 0045d34c  FUN_0045d34c =====

undefined8 * FUN_0045d34c(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    uVar5 = *param_1;
    iVar1 = FUN_0043eb70();
    if (iVar1 != 0) {
      puVar2 = (undefined8 *)FUN_003c8474(0x28,"providers/implementations/macs/gmac_prov.c",0x41);
      if (puVar2 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      lVar3 = FUN_0037fab8();
      puVar2[1] = lVar3;
      if (lVar3 != 0) {
        uVar4 = param_1[1];
        *puVar2 = uVar5;
        iVar1 = FUN_0038213c(lVar3,uVar4);
        if ((iVar1 != 0) && (iVar1 = FUN_0043f57c(puVar2 + 2,param_1 + 2), iVar1 != 0)) {
          return puVar2;
        }
        lVar3 = puVar2[1];
      }
      FUN_0037fae8(lVar3);
      FUN_0043f550(puVar2 + 2);
      FUN_003c86b4(puVar2,"providers/implementations/macs/gmac_prov.c",0x36);
    }
  }
  return (undefined8 *)0x0;
}


// ===== 0045d40c  FUN_0045d40c =====

void FUN_0045d40c(long param_1)

{
  if (param_1 != 0) {
    FUN_0037fae8(*(undefined8 *)(param_1 + 8));
    FUN_0043f550(param_1 + 0x10);
    FUN_003c86b4(param_1,"providers/implementations/macs/gmac_prov.c",0x36);
    return;
  }
  return;
}


// ===== 0045d454  FUN_0045d454 =====

ulong FUN_0045d454(long param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_0043eb70();
  if (((int)uVar2 != 0) && (uVar2 = FUN_0045d6b8(param_1,param_4), (int)uVar2 != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    if (param_2 == 0) {
      uVar2 = FUN_00381064(uVar3,0,0,0,0);
      return uVar2;
    }
    iVar1 = FUN_003897ac(uVar3);
    if (iVar1 != param_3) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/macs/gmac_prov.c",0x6a,"gmac_setkey");
      FUN_00379a5c(0x39,0x69,0);
      return 0;
    }
    iVar1 = FUN_00381064(uVar3,0,0,param_2,0);
    uVar2 = (ulong)(iVar1 != 0);
  }
  return uVar2;
}


// ===== 0045d53c  FUN_0045d53c =====

undefined8 FUN_0045d53c(long param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_24 [4];
  
  if (param_3 == 0) {
    return 1;
  }
  uVar2 = param_3 >> 0x1f;
  uVar3 = *(undefined8 *)(param_1 + 8);
  while( true ) {
    if (uVar2 == 0) {
      uVar3 = FUN_003803e0(uVar3,0,auStack_24,param_2,param_3 & 0xffffffff);
      return uVar3;
    }
    uVar1 = FUN_003803e0(uVar3,0,auStack_24,param_2,0x7fffffff);
    if ((int)uVar1 == 0) break;
    param_3 = param_3 - 0x7fffffff;
    param_2 = param_2 + 0x7fffffff;
    uVar2 = param_3 >> 0x1f;
  }
  return uVar1;
}


// ===== 0045d5d0  FUN_0045d5d0 =====

undefined8 FUN_0045d5d0(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
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
  int local_14;
  
  local_14 = 0;
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
  uVar1 = FUN_0043eb70();
  if (((int)uVar1 != 0) &&
     (uVar1 = FUN_0038096c(*(undefined8 *)(param_1 + 8),param_2,&local_14), (int)uVar1 != 0)) {
    local_14 = 0x10;
    FUN_003cd924(&local_80,&DAT_001e2a1d,param_2,0x10);
    uVar1 = FUN_00381ed8(*(undefined8 *)(param_1 + 8),&local_80);
    if ((int)uVar1 != 0) {
      uVar1 = 1;
      *param_3 = (long)local_14;
    }
  }
  return uVar1;
}


// ===== 0045d670  FUN_0045d670 =====

undefined ** FUN_0045d670(void)

{
  return &PTR_DAT_0078bde8;
}


// ===== 0045d67c  FUN_0045d67c =====

undefined8 FUN_0045d67c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_003cb140(param_1,&DAT_001f543b);
  if (lVar1 != 0) {
    uVar2 = thunk_FUN_003cc2a4(lVar1,0x10);
    return uVar2;
  }
  return 1;
}


// ===== 0045d6ac  FUN_0045d6ac =====

undefined ** FUN_0045d6ac(void)

{
  return &PTR_s_cipher_0078be38;
}


// ===== 0045d6b8  FUN_0045d6b8 =====

undefined8 FUN_0045d6b8(undefined8 *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = param_1[1];
  uVar3 = FUN_0046b880(*param_1);
  if (param_2 != 0) {
    if (lVar1 == 0) {
      return 0;
    }
    lVar4 = FUN_003cb19c(param_2,"cipher");
    if (lVar4 != 0) {
      uVar3 = FUN_0043f5c8(param_1 + 2,param_2,uVar3);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      FUN_0043f6f0(param_1 + 2);
      iVar2 = FUN_00388e4c();
      if (iVar2 != 6) {
        FUN_00379868();
        FUN_0037995c("providers/implementations/macs/gmac_prov.c",0xdc,"gmac_set_ctx_params");
        uVar3 = 0x7d;
        goto LAB_0045d868;
      }
      uVar3 = FUN_0043f6f0(param_1 + 2);
      uVar5 = FUN_0043f6f8(param_1 + 2);
      uVar3 = FUN_00381064(lVar1,uVar3,uVar5,0,0);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
    }
    lVar4 = FUN_003cb19c(param_2,&DAT_001e2b47);
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 8) != 5) {
        return 0;
      }
      uVar5 = param_1[1];
      uVar3 = *(undefined8 *)(lVar4 + 0x10);
      lVar4 = *(long *)(lVar4 + 0x18);
      iVar2 = FUN_003897ac(uVar5);
      if (lVar4 != iVar2) {
        FUN_00379868();
        FUN_0037995c("providers/implementations/macs/gmac_prov.c",0x6a,"gmac_setkey");
        uVar3 = 0x69;
LAB_0045d868:
        FUN_00379a5c(0x39,uVar3,0);
        return 0;
      }
      uVar3 = FUN_00381064(uVar5,0,0,uVar3,0);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
    }
    lVar4 = FUN_003cb19c(param_2,&DAT_001d9fca);
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 8) != 5) {
        return 0;
      }
      iVar2 = FUN_00381710(lVar1,9,*(undefined4 *)(lVar4 + 0x18),0);
      if (iVar2 < 1) {
        return 0;
      }
      uVar3 = FUN_00381064(lVar1,0,0,0,*(undefined8 *)(lVar4 + 0x10));
      if ((int)uVar3 == 0) {
        return uVar3;
      }
    }
  }
  return 1;
}


// ===== 0045d888  FUN_0045d888 =====

undefined8 * FUN_0045d888(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)FUN_003c8474(0xa0,"providers/implementations/macs/hmac_prov.c",0x47);
    if (puVar2 != (undefined8 *)0x0) {
      lVar3 = FUN_003ff7b8();
      puVar2[1] = lVar3;
      if (lVar3 != 0) {
        *puVar2 = param_1;
        return puVar2;
      }
    }
    FUN_003c86b4(puVar2,"providers/implementations/macs/hmac_prov.c",0x49);
  }
  return (undefined8 *)0x0;
}


// ===== 0045d900  FUN_0045d900 =====

undefined8 * FUN_0045d900(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  void *__dest;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  iVar1 = FUN_0043eb70();
  if ((iVar1 != 0) && (iVar1 = FUN_0043eb70(), iVar1 != 0)) {
    puVar2 = (undefined8 *)FUN_003c8474(0xa0,"providers/implementations/macs/hmac_prov.c",0x47);
    if (puVar2 != (undefined8 *)0x0) {
      lVar3 = FUN_003ff7b8();
      puVar2[1] = lVar3;
      if (lVar3 != 0) {
        uVar6 = param_1[0xc];
        uVar8 = param_1[0xf];
        uVar7 = param_1[0xe];
        uVar4 = param_1[1];
        puVar2[0xd] = param_1[0xd];
        puVar2[0xc] = uVar6;
        puVar2[0xf] = uVar8;
        puVar2[0xe] = uVar7;
        uVar8 = param_1[0x10];
        uVar7 = param_1[0x13];
        uVar6 = param_1[0x12];
        puVar2[0x11] = param_1[0x11];
        puVar2[0x10] = uVar8;
        puVar2[0x13] = uVar7;
        puVar2[0x12] = uVar6;
        uVar8 = *param_1;
        uVar7 = param_1[3];
        uVar6 = param_1[2];
        puVar2[1] = param_1[1];
        *puVar2 = uVar8;
        puVar2[3] = uVar7;
        puVar2[2] = uVar6;
        uVar7 = param_1[9];
        uVar6 = param_1[8];
        uVar9 = param_1[0xb];
        uVar8 = param_1[10];
        puVar2[1] = lVar3;
        puVar2[9] = uVar7;
        puVar2[8] = uVar6;
        puVar2[0xb] = uVar9;
        puVar2[10] = uVar8;
        uVar8 = param_1[4];
        uVar7 = param_1[7];
        uVar6 = param_1[6];
        puVar2[5] = param_1[5];
        puVar2[4] = uVar8;
        puVar2[7] = uVar7;
        puVar2[6] = uVar6;
        puVar2[3] = 0;
        puVar2[2] = 0;
        puVar2[5] = 0;
        puVar2[4] = 0;
        iVar1 = FUN_003ff8d4(lVar3,uVar4);
        if ((iVar1 != 0) && (iVar1 = FUN_0043f72c(puVar2 + 2,param_1 + 2), iVar1 != 0)) {
          if (param_1[5] != 0) {
            uVar5 = param_1[6];
            if (uVar5 < 2) {
              uVar5 = 1;
            }
            __dest = (void *)FUN_003c8e24(uVar5,"providers/implementations/macs/hmac_prov.c",0x76);
            puVar2[5] = __dest;
            if (__dest == (void *)0x0) goto LAB_0045da08;
            memcpy(__dest,(void *)param_1[5],param_1[6]);
          }
          return puVar2;
        }
LAB_0045da08:
        FUN_003ff868(puVar2[1]);
        FUN_0043f700(puVar2 + 2);
        FUN_003c9d0c(puVar2[5],puVar2[6],"providers/implementations/macs/hmac_prov.c",0x58);
        FUN_003c86b4(puVar2,"providers/implementations/macs/hmac_prov.c",0x59);
        return (undefined8 *)0x0;
      }
    }
    FUN_003c86b4(puVar2,"providers/implementations/macs/hmac_prov.c",0x49);
  }
  return (undefined8 *)0x0;
}


// ===== 0045da54  FUN_0045da54 =====

void FUN_0045da54(long param_1)

{
  if (param_1 != 0) {
    FUN_003ff868(*(undefined8 *)(param_1 + 8));
    FUN_0043f700(param_1 + 0x10);
    FUN_003c9d0c(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                 "providers/implementations/macs/hmac_prov.c",0x58);
    FUN_003c86b4(param_1,"providers/implementations/macs/hmac_prov.c",0x59);
    return;
  }
  return;
}


// ===== 0045dab0  FUN_0045dab0 =====

undefined8 FUN_0045dab0(long param_1,void *param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  int iVar2;
  void *__dest;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar2 = FUN_0043eb70();
  if ((iVar2 != 0) && (iVar2 = FUN_0045ddc4(param_1,param_4), iVar2 != 0)) {
    if (param_2 == (void *)0x0) {
      uVar3 = FUN_003ff340(*(undefined8 *)(param_1 + 8),0,0,0,0);
      return uVar3;
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_003c9d0c(*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                   "providers/implementations/macs/hmac_prov.c",0x94);
    }
    uVar1 = param_3;
    if (param_3 < 2) {
      uVar1 = 1;
    }
    __dest = (void *)FUN_003c8e24(uVar1,"providers/implementations/macs/hmac_prov.c",0x96);
    *(void **)(param_1 + 0x28) = __dest;
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_2,param_3);
      *(ulong *)(param_1 + 0x30) = param_3;
      uVar3 = FUN_0043f900(param_1 + 0x10);
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar4 = FUN_0043f908(param_1 + 0x10);
      uVar3 = FUN_003ff340(uVar5,param_2,param_3 & 0xffffffff,uVar3,uVar4);
      return uVar3;
    }
  }
  return 0;
}


// ===== 0045dbbc  FUN_0045dbbc =====

undefined8 FUN_0045dbbc(long param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 uVar1;
  
  if (*(ulong *)(param_1 + 0x38) == 0) {
    uVar1 = FUN_003ff6e0(*(undefined8 *)(param_1 + 8));
    return uVar1;
  }
  if (*(int *)(param_1 + 0x50) == 0) {
    if (param_3 == 0xd) {
      uVar1 = *param_2;
      *(undefined8 *)(param_1 + 0x45) = *(undefined8 *)((long)param_2 + 5);
      *(undefined8 *)(param_1 + 0x40) = uVar1;
      *(undefined4 *)(param_1 + 0x50) = 1;
      return 1;
    }
  }
  else if (param_3 <= *(ulong *)(param_1 + 0x38)) {
    uVar1 = FUN_0043f900(param_1 + 0x10);
    uVar1 = FUN_0046a5ec(uVar1,param_1 + 0x54,param_1 + 0x98,param_1 + 0x40,param_2,param_3,
                         *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28),
                         *(undefined8 *)(param_1 + 0x30),0);
    return uVar1;
  }
  return 0;
}


// ===== 0045dc70  FUN_0045dc70 =====

undefined8 FUN_0045dc70(long param_1,void *param_2,size_t *param_3)

{
  undefined8 uVar1;
  size_t __n;
  uint local_14;
  
  uVar1 = FUN_0043eb70();
  if ((int)uVar1 != 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
      uVar1 = FUN_003ff6f8(*(undefined8 *)(param_1 + 8),param_2,&local_14);
      if ((int)uVar1 == 0) {
        return uVar1;
      }
      *param_3 = (ulong)local_14;
    }
    else {
      __n = *(size_t *)(param_1 + 0x98);
      if (__n == 0) {
        return 0;
      }
      if (param_3 != (size_t *)0x0) {
        *param_3 = __n;
        __n = *(size_t *)(param_1 + 0x98);
      }
      memcpy(param_2,(void *)(param_1 + 0x54),__n);
    }
    uVar1 = 1;
  }
  return uVar1;
}


// ===== 0045dd04  FUN_0045dd04 =====

undefined ** FUN_0045dd04(void)

{
  return &PTR_DAT_0078bfb0;
}


// ===== 0045dd10  FUN_0045dd10 =====

undefined8 FUN_0045dd10(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = FUN_003cb140(param_2,&DAT_001f543b);
  if (lVar3 != 0) {
    uVar4 = FUN_003ff79c(*(undefined8 *)(param_1 + 8));
    uVar4 = thunk_FUN_003cc2a4(lVar3,uVar4);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
  }
  lVar3 = FUN_003cb140(param_2,"block-size");
  if (lVar3 != 0) {
    lVar5 = FUN_0043f900(param_1 + 0x10);
    if (lVar5 == 0) {
      uVar4 = thunk_FUN_003cb490(lVar3,0);
      iVar2 = (int)uVar4;
    }
    else {
      uVar1 = FUN_003899ec();
      uVar4 = thunk_FUN_003cb490(lVar3,uVar1);
      iVar2 = (int)uVar4;
    }
    if (iVar2 == 0) {
      return uVar4;
    }
  }
  return 1;
}


// ===== 0045ddb8  FUN_0045ddb8 =====

undefined ** FUN_0045ddb8(void)

{
  return &PTR_s_digest_0078c028;
}


// ===== 0045ddc4  FUN_0045ddc4 =====

undefined8 FUN_0045ddc4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  int local_18;
  int local_14;
  
  uVar1 = FUN_0046b880(*param_1);
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = FUN_0043f7c4(param_1 + 2,param_2,uVar1);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  lVar2 = FUN_003cb19c(param_2,"digest-noinit");
  local_18 = 0;
  if (lVar2 == 0) {
    uVar3 = 0;
    lVar2 = FUN_003cb19c(param_2,"digest-oneshot");
    local_14 = 0;
    if (lVar2 != 0) goto LAB_0045de68;
LAB_0045de84:
    if (uVar3 == 0) goto LAB_0045de94;
  }
  else {
    uVar1 = thunk_FUN_003cb238(lVar2,&local_18);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
    uVar3 = (uint)(local_18 != 0) << 8;
    lVar2 = FUN_003cb19c(param_2,"digest-oneshot");
    local_14 = 0;
    if (lVar2 == 0) goto LAB_0045de84;
LAB_0045de68:
    local_14 = 0;
    uVar1 = thunk_FUN_003cb238(lVar2,&local_14);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
    if (local_14 == 0) goto LAB_0045de84;
    uVar3 = uVar3 | 1;
  }
  FUN_003ffa60(param_1[1],uVar3);
LAB_0045de94:
  lVar2 = FUN_003cb19c(param_2,&DAT_001e2b47);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 8) != 5) {
      return 0;
    }
    uVar1 = FUN_0045df0c(param_1,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
    if ((int)uVar1 == 0) {
      return uVar1;
    }
  }
  lVar2 = FUN_003cb19c(param_2,"tls-data-size");
  if ((lVar2 != 0) && (uVar1 = thunk_FUN_003cc060(lVar2,param_1 + 7), (int)uVar1 == 0)) {
    return uVar1;
  }
  return 1;
}


// ===== 0045df0c  FUN_0045df0c =====

void * FUN_0045df0c(long param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_003c9d0c(*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                 "providers/implementations/macs/hmac_prov.c",0x94);
  }
  uVar1 = param_3;
  if (param_3 < 2) {
    uVar1 = 1;
  }
  pvVar2 = (void *)FUN_003c8e24(uVar1,"providers/implementations/macs/hmac_prov.c",0x96);
  *(void **)(param_1 + 0x28) = pvVar2;
  if (pvVar2 != (void *)0x0) {
    memcpy(pvVar2,param_2,param_3);
    *(ulong *)(param_1 + 0x30) = param_3;
    lVar3 = FUN_0043f900(param_1 + 0x10);
    if ((param_2 != (void *)0x0) ||
       ((pvVar2 = (void *)0x1, *(long *)(param_1 + 0x38) == 0 && (lVar3 != 0)))) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar4 = FUN_0043f908(param_1 + 0x10);
      pvVar2 = (void *)FUN_003ff340(uVar5,param_2,param_3 & 0xffffffff,lVar3,uVar4);
      return pvVar2;
    }
  }
  return pvVar2;
}


// ===== 0045dfe0  FUN_0045dfe0 =====

void FUN_0045dfe0(undefined8 param_1)

{
  FUN_0045e870(param_1,&PTR_s_digest_0078c2a0);
  return;
}


// ===== 0045dfec  FUN_0045dfec =====

long FUN_0045dfec(undefined8 *param_1)

{
  size_t __n;
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  size_t __n_00;
  
  iVar2 = FUN_0043eb70();
  if (iVar2 == 0) {
    return 0;
  }
  lVar3 = FUN_0045e92c(*param_1);
  if (lVar3 != 0) {
    iVar2 = FUN_0039e490(*(undefined8 *)(lVar3 + 8),param_1[1]);
    if ((iVar2 == 0) || (iVar2 = FUN_0043f72c(lVar3 + 0x10,param_1 + 2), iVar2 == 0)) {
      FUN_0039d284(*(undefined8 *)(lVar3 + 8));
      FUN_0043f700(lVar3 + 0x10);
      FUN_003c89b8(lVar3 + 0x44,*(undefined8 *)(lVar3 + 0x30));
      FUN_003c89b8(lVar3 + 0x2e4,*(undefined8 *)(lVar3 + 0x38));
      FUN_003c86b4(lVar3,"providers/implementations/macs/kmac_prov.c",0x99);
      return 0;
    }
    __n = param_1[6];
    __n_00 = param_1[7];
    *(undefined8 *)(lVar3 + 0x28) = param_1[5];
    uVar1 = *(undefined4 *)(param_1 + 8);
    *(size_t *)(lVar3 + 0x30) = __n;
    *(size_t *)(lVar3 + 0x38) = __n_00;
    *(undefined4 *)(lVar3 + 0x40) = uVar1;
    memcpy((void *)(lVar3 + 0x44),(void *)((long)param_1 + 0x44),__n);
    memcpy((void *)(lVar3 + 0x2e4),(void *)((long)param_1 + 0x2e4),__n_00);
  }
  return lVar3;
}


// ===== 0045e0ec  FUN_0045e0ec =====

void FUN_0045e0ec(long param_1)

{
  if (param_1 != 0) {
    FUN_0039d284(*(undefined8 *)(param_1 + 8));
    FUN_0043f700(param_1 + 0x10);
    FUN_003c89b8(param_1 + 0x44,*(undefined8 *)(param_1 + 0x30));
    FUN_003c89b8(param_1 + 0x2e4,*(undefined8 *)(param_1 + 0x38));
    FUN_003c86b4(param_1,"providers/implementations/macs/kmac_prov.c",0x99);
    return;
  }
  return;
}


// ===== 0045e14c  FUN_0045e14c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0045e14c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *__dest;
  size_t __n;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar9 = *(undefined8 *)(param_1 + 8);
  uVar4 = FUN_0043eb70();
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  uVar4 = FUN_0045e62c(param_1,param_4);
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  if (param_2 == 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/macs/kmac_prov.c",0x11c,"kmac_init");
      uVar9 = 0x72;
      goto LAB_0045e34c;
    }
  }
  else {
    uVar4 = FUN_0045e9e4(param_1,param_2,param_3);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
  }
  uVar10 = *(undefined8 *)(param_1 + 8);
  uVar5 = FUN_0043f900(param_1 + 0x10);
  uVar4 = FUN_0039d92c(uVar10,uVar5,0);
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  FUN_0043f900(param_1 + 0x10);
  uVar2 = FUN_003899ec();
  if ((int)uVar2 < 1) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/macs/kmac_prov.c",0x125,"kmac_init");
    uVar9 = 0xa6;
LAB_0045e34c:
    FUN_00379a5c(0x39,uVar9,0);
    return 0;
  }
  lVar8 = *(long *)(param_1 + 0x38);
  uVar4 = (ulong)uVar2;
  if (lVar8 == 0) {
    uStack_58 = _UNK_0078c338;
    local_60 = _DAT_0078c330;
    uStack_78 = _UNK_0078c318;
    local_80 = _DAT_0078c310;
    uStack_68 = _UNK_0078c328;
    uStack_70 = _DAT_0078c320;
    uStack_98 = _UNK_0078c2f8;
    local_a0 = PTR_s_custom_0078c2f0;
    uStack_88 = _UNK_0078c308;
    puStack_90 = PTR_DAT_0078c300;
    FUN_0045e62c(param_1,&local_a0);
    lVar8 = *(long *)(param_1 + 0x38);
  }
  uVar1 = 0;
  if (uVar4 != 0) {
    uVar1 = ((uVar4 - 1) + (long)((int)lVar8 + 8)) / uVar4;
  }
  puVar6 = (undefined1 *)
           FUN_003c83a4(uVar1 * uVar4,"providers/implementations/macs/kmac_prov.c",0x138);
  if (puVar6 == (undefined1 *)0x0) {
    return 0;
  }
  if (uVar2 < 0x100) {
    __n = *(size_t *)(param_1 + 0x38);
    puVar6[1] = (char)uVar2;
    __dest = puVar6 + 8;
    *puVar6 = 1;
    *(undefined4 *)(puVar6 + 2) = 0x4d4b2001;
    *(undefined2 *)(puVar6 + 6) = 0x4341;
    if (__n != 0) {
      memcpy(__dest,(void *)(param_1 + 0x2e4),__n);
      __dest = __dest + __n;
    }
    iVar7 = (int)__dest - (int)puVar6;
    iVar3 = 0;
    if (uVar4 != 0) {
      iVar3 = (int)(((uVar4 - 1) + (long)iVar7) / uVar4);
    }
    if (iVar3 * uVar2 != iVar7) {
      memset(__dest,0,(long)(int)(iVar3 * uVar2 - iVar7));
    }
    iVar3 = FUN_0039d938(uVar9,puVar6,uVar1 * uVar4);
    if (iVar3 != 0) {
      iVar3 = FUN_0039d938(uVar9,param_1 + 0x44,*(undefined8 *)(param_1 + 0x30));
      uVar2 = (uint)(iVar3 != 0);
      goto LAB_0045e360;
    }
  }
  uVar2 = 0;
LAB_0045e360:
  FUN_003c86b4(puVar6,"providers/implementations/macs/kmac_prov.c",0x13f);
  return (ulong)uVar2;
}


// ===== 0045e394  FUN_0045e394 =====

void FUN_0045e394(long param_1)

{
  FUN_0039d938(*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 0045e39c  FUN_0045e39c =====

ulong FUN_0045e39c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 auStack_3c [12];
  
  uVar9 = *(undefined8 *)(param_1 + 8);
  uVar4 = FUN_0043eb70();
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    uVar4 = *(long *)(param_1 + 0x28) << 3;
    if (uVar4 == 0) goto LAB_0045e3d4;
    if (uVar4 < 0x100) {
      bVar2 = false;
      uVar6 = 1;
    }
    else if (uVar4 < 0x10000) {
      bVar2 = false;
      uVar6 = 2;
    }
    else if (uVar4 >> 0x18 == 0) {
      bVar2 = false;
      uVar6 = 3;
    }
    else {
      if (uVar4 >> 0x20 == 0) {
        uVar6 = 4;
      }
      else if (uVar4 >> 0x28 == 0) {
        uVar6 = 5;
      }
      else if (uVar4 >> 0x30 == 0) {
        uVar6 = 6;
      }
      else {
        uVar6 = 7;
        if (uVar4 >> 0x38 != 0) {
          uVar6 = 8;
        }
      }
      bVar2 = true;
    }
    if (bVar2) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/macs/kmac_prov.c",0x1da,"right_encode");
      FUN_00379a5c(0x39,0xca,0);
      uVar4 = 0;
      goto LAB_0045e4b0;
    }
    uVar7 = (ulong)uVar6;
    uVar5 = uVar6;
  }
  else {
    uVar4 = 0;
LAB_0045e3d4:
    uVar6 = 0;
    uVar7 = 1;
    uVar5 = 1;
  }
  uVar1 = uVar6;
  if (uVar6 < 2) {
    uVar1 = 1;
  }
  uVar8 = (ulong)uVar1;
  auStack_3c[uVar8 + 7] = (char)uVar4;
  if (1 < uVar6) {
    auStack_3c[uVar8 + 6] = (char)(uVar4 >> 8);
    if (1 < uVar8 - 1) {
      auStack_3c[uVar8 + 5] = (char)(uVar4 >> 0x10);
      if (1 < uVar8 - 2) {
        auStack_3c[uVar8 + 4] = (char)(uVar4 >> 0x18);
        if (1 < uVar8 - 3) {
          auStack_3c[uVar8 + 3] = (char)(uVar4 >> 0x20);
          if (1 < uVar8 - 4) {
            auStack_3c[uVar8 + 2] = (char)(uVar4 >> 0x28);
            if ((1 < uVar8 - 5) && (auStack_3c[uVar8 + 1] = (char)(uVar4 >> 0x30), 1 < uVar8 - 6)) {
              auStack_3c[uVar8] = (char)(uVar4 >> 0x38);
            }
          }
        }
      }
    }
  }
  auStack_3c[uVar7 + 8] = (char)uVar5;
  uVar4 = FUN_0039d938(uVar9,auStack_3c + 8,uVar5 + 1);
  if ((int)uVar4 != 0) {
    iVar3 = FUN_0039dd74(uVar9,param_2,*(undefined8 *)(param_1 + 0x28));
    uVar4 = (ulong)(iVar3 != 0);
  }
LAB_0045e4b0:
  *param_3 = *(undefined8 *)(param_1 + 0x28);
  return uVar4;
}


// ===== 0045e59c  FUN_0045e59c =====

undefined ** FUN_0045e59c(void)

{
  return &PTR_DAT_0078c340;
}


// ===== 0045e5a8  FUN_0045e5a8 =====

undefined8 FUN_0045e5a8(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_003cb140(param_2,&DAT_001f543b);
  if ((lVar2 == 0) ||
     (uVar3 = thunk_FUN_003cc2a4(lVar2,*(undefined8 *)(param_1 + 0x28)), (int)uVar3 != 0)) {
    lVar2 = FUN_003cb140(param_2,"block-size");
    if (lVar2 != 0) {
      FUN_0043f900(param_1 + 0x10);
      uVar1 = FUN_003899ec();
      uVar3 = thunk_FUN_003cb490(lVar2,uVar1);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}


// ===== 0045e620  FUN_0045e620 =====

undefined ** FUN_0045e620(void)

{
  return &PTR_DAT_0078c3b8;
}


// ===== 0045e62c  FUN_0045e62c =====

undefined8 FUN_0045e62c(long param_1,long param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  void *__src;
  ulong __n;
  uint uVar7;
  ulong uVar8;
  ulong local_28;
  
  if (param_2 == 0) {
    return 1;
  }
  lVar5 = FUN_003cb19c(param_2,&DAT_001f95c2);
  if ((lVar5 != 0) && (uVar6 = thunk_FUN_003cb238(lVar5,param_1 + 0x40), (int)uVar6 == 0)) {
    return uVar6;
  }
  lVar5 = FUN_003cb19c(param_2,&DAT_001f543b);
  if (lVar5 != 0) {
    local_28 = 0;
    iVar4 = thunk_FUN_003cc060(lVar5,&local_28);
    if (iVar4 == 0) {
      return 0;
    }
    if (0x1fffff < local_28) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/macs/kmac_prov.c",0x1a6,"kmac_set_ctx_params");
      uVar6 = 0xd9;
      goto LAB_0045e848;
    }
    *(ulong *)(param_1 + 0x28) = local_28;
  }
  lVar5 = FUN_003cb19c(param_2,&DAT_001e2b47);
  if ((lVar5 != 0) &&
     (uVar6 = FUN_0045e9e4(param_1,*(undefined8 *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 0x18)),
     (int)uVar6 == 0)) {
    return uVar6;
  }
  lVar5 = FUN_003cb19c(param_2,"custom");
  if (lVar5 == 0) {
    return 1;
  }
  __n = *(ulong *)(lVar5 + 0x18);
  if (__n < 0x201) {
    __src = *(void **)(lVar5 + 0x10);
    if (__src == (void *)0x0) {
      *(undefined8 *)(param_1 + 0x38) = 0;
      return 1;
    }
    uVar7 = 1;
    if (0x1f < __n) {
      uVar7 = 2;
    }
    uVar3 = 0;
    if (__n != 0) {
      uVar3 = uVar7;
    }
    if (uVar3 < 2) {
      uVar3 = 1;
    }
    uVar8 = (ulong)uVar3;
    uVar1 = __n + uVar8 + 1;
    if (uVar1 < 0x205) {
      puVar2 = (undefined1 *)(param_1 + 0x2e4);
      *puVar2 = (char)uVar3;
      puVar2[uVar8] = (char)((int)__n << 3);
      if (uVar8 - 1 != 0) {
        puVar2[uVar8 - 1] = (char)(__n >> 5);
        if (uVar8 - 2 != 0) {
          puVar2[uVar8 - 2] = 0;
          if (uVar8 - 3 != 0) {
            puVar2[uVar8 - 3] = 0;
            if (uVar8 - 4 != 0) {
              puVar2[uVar8 - 4] = 0;
              if (uVar8 - 5 != 0) {
                puVar2[uVar8 - 5] = 0;
                if (uVar8 - 6 != 0) {
                  puVar2[uVar8 - 6] = 0;
                  if (uVar8 - 7 != 0) {
                    puVar2[uVar8 - 7] = 0;
                  }
                }
              }
            }
          }
        }
      }
      memcpy(puVar2 + uVar8 + 1,__src,__n);
      *(ulong *)(param_1 + 0x38) = uVar1;
      return 1;
    }
    FUN_00379868();
    FUN_0037995c("providers/implementations/macs/kmac_prov.c",0x1ff,"encode_string");
    uVar6 = 0xca;
  }
  else {
    FUN_00379868();
    FUN_0037995c("providers/implementations/macs/kmac_prov.c",0x1b1,"kmac_set_ctx_params");
    uVar6 = 0x6f;
  }
LAB_0045e848:
  FUN_00379a5c(0x39,uVar6,0);
  return 0;
}


// ===== 0045e864  FUN_0045e864 =====

void FUN_0045e864(undefined8 param_1)

{
  FUN_0045e870(param_1,&PTR_s_digest_0078c480);
  return;
}


// ===== 0045e870  FUN_0045e870 =====

long FUN_0045e870(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_0045e92c();
  if (lVar2 != 0) {
    uVar3 = FUN_0046b880(param_1);
    iVar1 = FUN_0043f7c4(lVar2 + 0x10,param_2,uVar3);
    if (iVar1 == 0) {
      FUN_0039d284(*(undefined8 *)(lVar2 + 8));
      FUN_0043f700(lVar2 + 0x10);
      FUN_003c89b8(lVar2 + 0x44,*(undefined8 *)(lVar2 + 0x30));
      FUN_003c89b8(lVar2 + 0x2e4,*(undefined8 *)(lVar2 + 0x38));
      FUN_003c86b4(lVar2,"providers/implementations/macs/kmac_prov.c",0x99);
      return 0;
    }
    FUN_0043f900(lVar2 + 0x10);
    iVar1 = FUN_00389a38();
    *(long *)(lVar2 + 0x28) = (long)iVar1;
  }
  return lVar2;
}


// ===== 0045e92c  FUN_0045e92c =====

undefined8 * FUN_0045e92c(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 == 0) {
    return (undefined8 *)0x0;
  }
  puVar2 = (undefined8 *)FUN_003c8474(0x4e8,"providers/implementations/macs/kmac_prov.c",0xa9);
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = FUN_0039d270();
    puVar2[1] = lVar3;
    if (lVar3 == 0) {
      FUN_0039d284(0);
      FUN_0043f700(puVar2 + 2);
      FUN_003c89b8((long)puVar2 + 0x44,puVar2[6]);
      FUN_003c89b8((long)puVar2 + 0x2e4,puVar2[7]);
      FUN_003c86b4(puVar2,"providers/implementations/macs/kmac_prov.c",0x99);
      return (undefined8 *)0x0;
    }
    *puVar2 = param_1;
  }
  return puVar2;
}


// ===== 0045e9e4  FUN_0045e9e4 =====

undefined8 FUN_0045e9e4(long param_1,void *param_2,ulong param_3)

{
  void *__s;
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong __n;
  ulong uVar7;
  undefined1 auStack_24b [523];
  
  FUN_0043f900(param_1 + 0x10);
  uVar2 = FUN_003899ec();
  if (param_3 - 0x201 < 0xfffffffffffffe03) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/macs/kmac_prov.c",0xf9,"kmac_setkey");
    uVar3 = 0x69;
  }
  else {
    if (0 < (int)uVar2) {
      if (param_2 == (void *)0x0) {
        __n = 0;
      }
      else {
        uVar4 = 2;
        if (param_3 >> 0xd != 0) {
          uVar4 = 3;
        }
        if (param_3 < 0x20) {
          uVar4 = 1;
        }
        uVar6 = (ulong)uVar4;
        __n = param_3 + uVar6 + 1;
        if (0x204 < __n) {
          FUN_00379868();
          FUN_0037995c("providers/implementations/macs/kmac_prov.c",0x1ff,"encode_string");
          uVar3 = 0xca;
          goto LAB_0045ebf8;
        }
        auStack_24b[7] = (undefined1)uVar4;
        auStack_24b[uVar6 + 7] = (char)((int)param_3 << 3);
        if (uVar6 != 1) {
          auStack_24b[uVar6 + 6] = (char)(param_3 >> 5);
          if (uVar6 != 2) {
            auStack_24b[uVar6 + 5] = 0;
            if (uVar6 != 3) {
              auStack_24b[uVar6 + 4] = 0;
              if (uVar6 != 4) {
                auStack_24b[uVar6 + 3] = 0;
                if (uVar6 != 5) {
                  auStack_24b[uVar6 + 2] = 0;
                  if (uVar6 != 6) {
                    auStack_24b[uVar6 + 1] = 0;
                    if (uVar6 != 7) {
                      auStack_24b[uVar6] = 0;
                    }
                  }
                }
              }
            }
          }
        }
        memcpy(auStack_24b + uVar6 + 8,param_2,param_3);
      }
      uVar7 = (ulong)uVar2;
      uVar6 = 0;
      if (uVar7 != 0) {
        uVar6 = (uVar7 + __n + 1) / uVar7;
      }
      *(ulong *)(param_1 + 0x30) = uVar6 * uVar7;
      if (0x2a0 < uVar6 * uVar7) {
        return 0;
      }
      if (0xff < uVar2) {
        return 0;
      }
      *(char *)(param_1 + 0x45) = (char)uVar2;
      *(undefined1 *)(param_1 + 0x44) = 1;
      memcpy((void *)(param_1 + 0x46),auStack_24b + 7,__n);
      __s = (void *)(param_1 + 0x46 + __n);
      iVar5 = (int)__s - ((int)param_1 + 0x44);
      iVar1 = 0;
      if (uVar7 != 0) {
        iVar1 = (int)(((uVar7 + (long)iVar5) - 1) / uVar7);
      }
      if (iVar1 * uVar2 != iVar5) {
        memset(__s,0,(long)(int)(iVar1 * uVar2 - iVar5));
      }
      return 1;
    }
    FUN_00379868();
    FUN_0037995c("providers/implementations/macs/kmac_prov.c",0xfd,"kmac_setkey");
    uVar3 = 0xa6;
  }
LAB_0045ebf8:
  FUN_00379a5c(0x39,uVar3,0);
  return 0;
}


// ===== 0045ec1c  FUN_0045ec1c =====

undefined8 * FUN_0045ec1c(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)FUN_003c8474(0x108,"providers/implementations/macs/poly1305_prov.c",0x32)
    ;
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_1;
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}


// ===== 0045ec6c  FUN_0045ec6c =====

void * FUN_0045ec6c(void *param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = FUN_0043eb70();
  if ((iVar1 != 0) &&
     (pvVar2 = (void *)FUN_003c83a4(0x108,"providers/implementations/macs/poly1305_prov.c",0x44),
     pvVar2 != (void *)0x0)) {
    pvVar2 = memcpy(pvVar2,param_1,0x108);
    return pvVar2;
  }
  return (void *)0x0;
}


// ===== 0045ecc0  FUN_0045ecc0 =====

void FUN_0045ecc0(undefined8 param_1)

{
  FUN_003c86b4(param_1,"providers/implementations/macs/poly1305_prov.c",0x3a);
  return;
}


// ===== 0045ecd0  FUN_0045ecd0 =====

ulong FUN_0045ecd0(long param_1,long param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_0043eb70();
  if ((int)uVar1 != 0) {
    lVar2 = FUN_003cb19c(param_4,&DAT_001e2b47);
    if (lVar2 != 0) {
      if (*(long *)(lVar2 + 0x18) != 0x20) goto LAB_0045ed58;
      FUN_0045ef28(param_1 + 0x10,*(undefined8 *)(lVar2 + 0x10));
      *(undefined4 *)(param_1 + 8) = 0;
    }
    if (param_2 == 0) {
      return (ulong)(*(int *)(param_1 + 8) == 0);
    }
    if (param_3 != 0x20) {
LAB_0045ed58:
      FUN_00379868();
      FUN_0037995c("providers/implementations/macs/poly1305_prov.c",0x55,"poly1305_setkey");
      FUN_00379a5c(0x39,0x69,0);
      return 0;
    }
    FUN_0045ef28(param_1 + 0x10,param_2);
    *(undefined4 *)(param_1 + 8) = 0;
    uVar1 = 1;
  }
  return uVar1;
}


// ===== 0045edb4  FUN_0045edb4 =====

undefined8 FUN_0045edb4(long param_1,undefined8 param_2,long param_3)

{
  *(undefined4 *)(param_1 + 8) = 1;
  if (param_3 != 0) {
    FUN_0045ef88(param_1 + 0x10);
  }
  return 1;
}


// ===== 0045eddc  FUN_0045eddc =====

undefined8 FUN_0045eddc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = 1;
    FUN_0045f1a8(param_1 + 0x10,param_2);
    *param_3 = 0x10;
    return 1;
  }
  return 0;
}


// ===== 0045ee48  FUN_0045ee48 =====

undefined ** FUN_0045ee48(void)

{
  return &PTR_DAT_0078c580;
}


// ===== 0045ee54  FUN_0045ee54 =====

undefined8 FUN_0045ee54(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_003cb140(param_1,&DAT_001f543b);
  if (lVar1 != 0) {
    uVar2 = thunk_FUN_003cc2a4(lVar1,0x10);
    return uVar2;
  }
  return 1;
}


// ===== 0045ee84  FUN_0045ee84 =====

undefined ** FUN_0045ee84(void)

{
  return &PTR_DAT_0078c5d0;
}


// ===== 0045ee90  FUN_0045ee90 =====

undefined8 FUN_0045ee90(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_003cb19c(param_2,&DAT_001e2b47);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x18) != 0x20) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/macs/poly1305_prov.c",0x55,"poly1305_setkey");
      FUN_00379a5c(0x39,0x69,0);
      return 0;
    }
    FUN_0045ef28(param_1 + 0x10,*(undefined8 *)(lVar1 + 0x10));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return 1;
}


// ===== 0045ef20  FUN_0045ef20 =====

undefined8 FUN_0045ef20(void)

{
  return 0xf8;
}


// ===== 0045ef28  FUN_0045ef28 =====

void FUN_0045ef28(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  
  *(uint *)(param_1 + 0x18) = param_2[4];
  *(uint *)((long)param_1 + 0xc4) = param_2[5];
  *(uint *)(param_1 + 0x19) = param_2[6];
  uVar1 = param_2[7];
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(uint *)((long)param_1 + 0xcc) = uVar1;
  *(uint *)((long)param_1 + 0x14) = *param_2 & 0xfffffff;
  *(uint *)(param_1 + 3) = param_2[1] & 0xffffffc;
  *(uint *)((long)param_1 + 0x1c) = param_2[2] & 0xffffffc;
  uVar1 = param_2[3];
  param_1[0x1c] = 0;
  *(uint *)(param_1 + 4) = uVar1 & 0xffffffc;
  return;
}


// ===== 0045ef88  FUN_0045ef88 =====

void FUN_0045ef88(long param_1,void *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0xe0);
  uVar2 = param_3;
  if (lVar4 != 0) {
    lVar1 = param_1 + 0xd0;
    uVar3 = 0x10 - lVar4;
    uVar2 = param_3 - uVar3;
    if (param_3 < uVar3) {
      memcpy((void *)(lVar1 + lVar4),param_2,param_3);
      param_3 = lVar4 + param_3;
      goto LAB_0045efd4;
    }
    memcpy((void *)(lVar1 + lVar4),param_2,uVar3);
    FUN_0045f068(param_1,lVar1,0x10,1);
    param_2 = (void *)((long)param_2 + uVar3);
  }
  uVar3 = uVar2 & 0xfffffffffffffff0;
  param_3 = uVar2 & 0xf;
  if (uVar3 != 0) {
    FUN_0045f068(param_1,param_2,uVar3,1);
    param_2 = (void *)((long)param_2 + uVar3);
  }
  if (param_3 != 0) {
    memcpy((void *)(param_1 + 0xd0),param_2,param_3);
    *(ulong *)(param_1 + 0xe0) = param_3;
    return;
  }
LAB_0045efd4:
  *(ulong *)(param_1 + 0xe0) = param_3;
  return;
}


// ===== 0045f068  FUN_0045f068 =====

void FUN_0045f068(uint *param_1,uint *param_2,ulong param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  
  uVar14 = *param_1;
  uVar15 = param_1[1];
  uVar19 = param_1[2];
  uVar17 = param_1[3];
  uVar21 = param_1[4];
  if (0xf < param_3) {
    uVar9 = param_1[6];
    uVar11 = param_1[7];
    uVar12 = param_1[8];
    uVar13 = param_1[5];
    uVar2 = uVar9 + (uVar9 >> 2);
    uVar3 = uVar11 + (uVar11 >> 2);
    uVar4 = uVar12 + (uVar12 >> 2);
    do {
      param_3 = param_3 - 0x10;
      uVar23 = *param_2 + uVar14;
      uVar16 = (ulong)param_2[1] + (ulong)uVar15 + (ulong)CARRY4(*param_2,uVar14);
      puVar1 = param_2 + 2;
      puVar10 = param_2 + 3;
      uVar18 = uVar16 & 0xffffffff;
      param_2 = param_2 + 4;
      uVar16 = (ulong)*puVar1 + (ulong)uVar19 + (uVar16 >> 0x20);
      uVar6 = (ulong)*puVar10 + (ulong)uVar17 + (uVar16 >> 0x20);
      uVar16 = uVar16 & 0xffffffff;
      uVar20 = uVar6 & 0xffffffff;
      uVar22 = uVar18 * uVar4 + (ulong)uVar13 * (ulong)uVar23 + uVar16 * uVar3 + uVar20 * uVar2;
      iVar5 = uVar21 + param_4 + (int)(uVar6 >> 0x20);
      uVar6 = uVar18 * uVar13 + (ulong)uVar9 * (ulong)uVar23 + uVar16 * uVar4 + uVar20 * uVar3 +
              (uVar22 >> 0x20) + (ulong)(iVar5 * uVar2);
      uVar7 = uVar18 * uVar9 + (ulong)uVar11 * (ulong)uVar23 + uVar16 * uVar13 + uVar20 * uVar4 +
              (ulong)(iVar5 * uVar3) + (uVar6 >> 0x20);
      lVar8 = uVar18 * uVar11 + (ulong)uVar12 * (ulong)uVar23 + uVar16 * uVar9 + uVar20 * uVar13 +
              (ulong)(iVar5 * uVar4) + (uVar7 >> 0x20);
      uVar21 = (int)((ulong)lVar8 >> 0x20) + iVar5 * uVar13;
      uVar15 = (uVar21 & 0xfffffffc) + (uVar21 >> 2);
      uVar17 = (uint)uVar22;
      uVar14 = uVar15 + uVar17;
      uVar19 = (uint)uVar6;
      uVar15 = uVar19 - ((int)((uVar14 ^ uVar15 | uVar15 ^ uVar17) ^ uVar14) >> 0x1f);
      uVar17 = (uint)uVar7;
      uVar19 = uVar17 - ((int)(uVar19 & (uVar15 ^ 0xffffffff)) >> 0x1f);
      uVar23 = (uint)lVar8;
      uVar17 = uVar23 - ((int)(uVar17 & (uVar19 ^ 0xffffffff)) >> 0x1f);
      uVar21 = (uVar21 & 3) - ((int)(uVar23 & (uVar17 ^ 0xffffffff)) >> 0x1f);
    } while (0xf < param_3);
  }
  *param_1 = uVar14;
  param_1[1] = uVar15;
  param_1[2] = uVar19;
  param_1[3] = uVar17;
  param_1[4] = uVar21;
  return;
}


// ===== 0045f1a8  FUN_0045f1a8 =====

void FUN_0045f1a8(uint *param_1,undefined1 *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  
  lVar11 = *(long *)(param_1 + 0x38);
  if (lVar11 != 0) {
    *(undefined1 *)((long)(param_1 + 0x34) + lVar11) = 1;
    if (lVar11 + 1U < 0x10) {
      memset((void *)((long)param_1 + lVar11 + 0xd1),0,0xf - lVar11);
    }
    FUN_0045f068(param_1,param_1 + 0x34,0x10,0);
  }
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  uVar12 = (ulong)*param_1 + 5;
  uVar2 = (ulong)param_1[1] + (uVar12 >> 0x20);
  uVar3 = (ulong)uVar5 + (uVar2 >> 0x20);
  lVar11 = (ulong)uVar6 + (uVar3 >> 0x20);
  uVar8 = param_1[4] + (int)((ulong)lVar11 >> 0x20) >> 2;
  uVar9 = -uVar8;
  uVar8 = uVar8 - 1;
  uVar10 = uVar8 & *param_1 | uVar9 & (uint)uVar12;
  iVar1 = uVar10 + param_1[0x30];
  uVar12 = (ulong)(uVar8 & param_1[1] | uVar9 & (uint)uVar2) + (ulong)param_1[0x31] +
           (ulong)CARRY4(uVar10,param_1[0x30]);
  uVar10 = param_1[0x32];
  uVar7 = param_1[0x33];
  *param_2 = (char)iVar1;
  param_2[1] = (char)((uint)iVar1 >> 8);
  param_2[4] = (char)uVar12;
  param_2[3] = (char)((uint)iVar1 >> 0x18);
  lVar4 = (ulong)(uVar8 & uVar5 | uVar9 & (uint)uVar3) + (ulong)uVar10 + (uVar12 >> 0x20);
  param_2[2] = (char)((uint)iVar1 >> 0x10);
  param_2[8] = (char)lVar4;
  param_2[7] = (char)(uVar12 >> 0x18);
  iVar1 = (uVar8 & uVar6 | uVar9 & (uint)lVar11) + uVar7 + (int)((ulong)lVar4 >> 0x20);
  param_2[9] = (char)((ulong)lVar4 >> 8);
  param_2[0xc] = (char)iVar1;
  param_2[5] = (char)(uVar12 >> 8);
  param_2[6] = (char)(uVar12 >> 0x10);
  param_2[10] = (char)((ulong)lVar4 >> 0x10);
  param_2[0xb] = (char)((ulong)lVar4 >> 0x18);
  param_2[0xd] = (char)((uint)iVar1 >> 8);
  param_2[0xe] = (char)((uint)iVar1 >> 0x10);
  param_2[0xf] = (char)((uint)iVar1 >> 0x18);
  FUN_003c89b8(param_1,0xf8);
  return;
}


// ===== 0045f318  FUN_0045f318 =====

undefined8 * FUN_0045f318(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)FUN_003c8474(0x90,"providers/implementations/macs/siphash_prov.c",0x3e);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_1;
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}


// ===== 0045f368  FUN_0045f368 =====

undefined8 * FUN_0045f368(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  iVar1 = FUN_0043eb70();
  if ((iVar1 != 0) &&
     (puVar2 = (undefined8 *)FUN_003c83a4(0x90,"providers/implementations/macs/siphash_prov.c",0x50)
     , puVar2 != (undefined8 *)0x0)) {
    uVar4 = param_1[0xd];
    uVar3 = param_1[0xc];
    uVar6 = param_1[0xf];
    uVar5 = param_1[0xe];
    uVar7 = param_1[0x10];
    puVar2[0x11] = param_1[0x11];
    puVar2[0x10] = uVar7;
    puVar2[0xd] = uVar4;
    puVar2[0xc] = uVar3;
    puVar2[0xf] = uVar6;
    puVar2[0xe] = uVar5;
    uVar3 = param_1[4];
    uVar5 = param_1[7];
    uVar4 = param_1[6];
    puVar2[5] = param_1[5];
    puVar2[4] = uVar3;
    puVar2[7] = uVar5;
    puVar2[6] = uVar4;
    uVar3 = param_1[8];
    uVar5 = param_1[0xb];
    uVar4 = param_1[10];
    puVar2[9] = param_1[9];
    puVar2[8] = uVar3;
    puVar2[0xb] = uVar5;
    puVar2[10] = uVar4;
    uVar3 = *param_1;
    uVar5 = param_1[3];
    uVar4 = param_1[2];
    puVar2[1] = param_1[1];
    *puVar2 = uVar3;
    puVar2[3] = uVar5;
    puVar2[2] = uVar4;
    return puVar2;
  }
  return (undefined8 *)0x0;
}


// ===== 0045f3dc  FUN_0045f3dc =====

void FUN_0045f3dc(undefined8 param_1)

{
  FUN_003c86b4(param_1,"providers/implementations/macs/siphash_prov.c",0x46);
  return;
}


// ===== 0045f3ec  FUN_0045f3ec =====

undefined8 FUN_0045f3ec(long param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar3 = FUN_0043eb70();
  if (((int)uVar3 != 0) && (uVar3 = FUN_0045f610(param_1,param_4), (int)uVar3 != 0)) {
    if (param_2 == 0) {
      puVar4 = (undefined8 *)(param_1 + 8);
      puVar5 = (undefined8 *)(param_1 + 0x48);
      uVar3 = 1;
    }
    else {
      if (param_3 != 0x10) {
        return 0;
      }
      puVar5 = (undefined8 *)(param_1 + 8);
      iVar1 = 2;
      if (*(int *)(param_1 + 0x88) != 0) {
        iVar1 = *(int *)(param_1 + 0x88);
      }
      iVar2 = 4;
      if (*(int *)(param_1 + 0x8c) != 0) {
        iVar2 = *(int *)(param_1 + 0x8c);
      }
      uVar3 = FUN_0045f7d0(puVar5,param_2,iVar1,iVar2);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      puVar4 = (undefined8 *)(param_1 + 0x48);
    }
    uVar6 = *puVar5;
    uVar8 = puVar5[3];
    uVar7 = puVar5[2];
    puVar4[1] = puVar5[1];
    *puVar4 = uVar6;
    puVar4[3] = uVar8;
    puVar4[2] = uVar7;
    uVar6 = puVar5[4];
    uVar8 = puVar5[7];
    uVar7 = puVar5[6];
    puVar4[5] = puVar5[5];
    puVar4[4] = uVar6;
    puVar4[7] = uVar8;
    puVar4[6] = uVar7;
  }
  return uVar3;
}


// ===== 0045f4a8  FUN_0045f4a8 =====

undefined8 FUN_0045f4a8(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    FUN_0045f87c(param_1 + 8);
  }
  return 1;
}


// ===== 0045f4c8  FUN_0045f4c8 =====

undefined8 FUN_0045f4c8(long param_1,undefined8 param_2,ulong *param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_0045f770(param_1 + 8);
  iVar1 = FUN_0043eb70();
  if ((iVar1 != 0) && (uVar2 <= param_4)) {
    *param_3 = uVar2;
    uVar3 = FUN_0045fa10(param_1 + 8,param_2,uVar2);
    return uVar3;
  }
  return 0;
}


// ===== 0045f544  FUN_0045f544 =====

undefined ** FUN_0045f544(void)

{
  return &PTR_DAT_0078c6d0;
}


// ===== 0045f550  FUN_0045f550 =====

undefined8 FUN_0045f550(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_003cb140(param_2,&DAT_001f543b);
  if (lVar2 != 0) {
    uVar3 = FUN_0045f770(param_1 + 8);
    uVar3 = thunk_FUN_003cc2a4(lVar2,uVar3);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
  }
  lVar2 = FUN_003cb140(param_2,"c-rounds");
  if (lVar2 != 0) {
    iVar1 = 2;
    if (*(int *)(param_1 + 0x88) != 0) {
      iVar1 = *(int *)(param_1 + 0x88);
    }
    uVar3 = thunk_FUN_003cb960(lVar2,iVar1);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
  }
  lVar2 = FUN_003cb140(param_2,"d-rounds");
  if (lVar2 != 0) {
    iVar1 = 4;
    if (*(int *)(param_1 + 0x8c) != 0) {
      iVar1 = *(int *)(param_1 + 0x8c);
    }
    uVar3 = thunk_FUN_003cb960(lVar2,iVar1);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
  }
  return 1;
}


// ===== 0045f604  FUN_0045f604 =====

undefined ** FUN_0045f604(void)

{
  return &PTR_DAT_0078c770;
}


// ===== 0045f610  FUN_0045f610 =====

undefined8 FUN_0045f610(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_28;
  
  if (param_2 == 0) {
    return 1;
  }
  lVar3 = FUN_003cb19c(param_2,&DAT_001f543b);
  if ((((lVar3 == 0) ||
       (((uVar4 = thunk_FUN_003cc060(lVar3,&local_28), (int)uVar4 != 0 &&
         (uVar4 = FUN_0045f778(param_1 + 8,local_28), (int)uVar4 != 0)) &&
        (uVar4 = FUN_0045f778(param_1 + 0x48,local_28), (int)uVar4 != 0)))) &&
      ((lVar3 = FUN_003cb19c(param_2,"c-rounds"), lVar3 == 0 ||
       (uVar4 = thunk_FUN_003cb68c(lVar3,param_1 + 0x88), (int)uVar4 != 0)))) &&
     ((lVar3 = FUN_003cb19c(param_2,"d-rounds"), lVar3 == 0 ||
      (uVar4 = thunk_FUN_003cb68c(lVar3,param_1 + 0x8c), (int)uVar4 != 0)))) {
    lVar3 = FUN_003cb19c(param_2,&DAT_001e2b47);
    if (lVar3 == 0) {
      uVar4 = 1;
    }
    else {
      if ((*(int *)(lVar3 + 8) != 5) || (*(long *)(lVar3 + 0x18) != 0x10)) {
        return 0;
      }
      iVar1 = 2;
      if (*(int *)(param_1 + 0x88) != 0) {
        iVar1 = *(int *)(param_1 + 0x88);
      }
      iVar2 = 4;
      if (*(int *)(param_1 + 0x8c) != 0) {
        iVar2 = *(int *)(param_1 + 0x8c);
      }
      uVar4 = FUN_0045f7d0(param_1 + 8,*(undefined8 *)(lVar3 + 0x10),iVar1,iVar2);
      if ((int)uVar4 != 0) {
        *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x20);
        *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x18);
        *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x30);
        *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x28);
        *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x40);
        *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x38);
        return 1;
      }
    }
  }
  return uVar4;
}


// ===== 0045f768  FUN_0045f768 =====

undefined8 FUN_0045f768(void)

{
  return 0x40;
}


// ===== 0045f770  FUN_0045f770 =====

undefined4 FUN_0045f770(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}


// ===== 0045f778  FUN_0045f778 =====

undefined8 FUN_0045f778(long param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = 0x10;
  if (param_2 != 0) {
    uVar2 = param_2;
  }
  if ((uVar2 != 0x10) && (uVar2 != 8)) {
    return 0;
  }
  uVar1 = 0x10;
  if (*(uint *)(param_1 + 0x2c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x2c);
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  if (uVar2 != uVar1) {
    *(int *)(param_1 + 0x2c) = (int)uVar2;
    *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) ^ 0xee;
  }
  return 1;
}


// ===== 0045f7d0  FUN_0045f7d0 =====

undefined8 FUN_0045f7d0(undefined8 *param_1,ulong *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
  iVar1 = 0x10;
  if (*(int *)((long)param_1 + 0x2c) != 0) {
    iVar1 = *(int *)((long)param_1 + 0x2c);
  }
  iVar2 = 4;
  if (param_4 != 0) {
    iVar2 = param_4;
  }
  iVar3 = 2;
  if (param_3 != 0) {
    iVar3 = param_3;
  }
  uVar4 = *param_2;
  uVar5 = param_2[1];
  *(int *)(param_1 + 6) = iVar3;
  *(int *)((long)param_1 + 0x34) = iVar2;
  *param_1 = 0;
  param_1[1] = uVar4 ^ 0x736f6d6570736575;
  param_1[2] = uVar5 ^ 0x646f72616e646f6d;
  param_1[3] = uVar4 ^ 0x6c7967656e657261;
  *(undefined4 *)(param_1 + 5) = 0;
  *(int *)((long)param_1 + 0x2c) = iVar1;
  param_1[4] = uVar5 ^ 0x7465646279746573;
  if (iVar1 == 0x10) {
    param_1[2] = uVar5 ^ 0x646f72616e646f83;
  }
  return 1;
}


// ===== 0045f87c  FUN_0045f87c =====

void FUN_0045f87c(long *param_1,ulong *param_2,ulong param_3)

{
  void *__dest;
  uint uVar1;
  int iVar2;
  ulong *puVar3;
  ulong *__src;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar8 = param_1[1];
  uVar4 = param_1[2];
  uVar10 = param_1[3];
  uVar1 = *(uint *)(param_1 + 5);
  uVar9 = param_1[4];
  *param_1 = *param_1 + param_3;
  uVar6 = param_3;
  if (uVar1 != 0) {
    uVar7 = (ulong)(8 - uVar1);
    uVar6 = param_3 - uVar7;
    __dest = (void *)((long)param_1 + (ulong)uVar1 + 0x38);
    if (param_3 < uVar7) {
      memcpy(__dest,param_2,param_3);
      *(int *)(param_1 + 5) = (int)param_1[5] + (int)param_3;
      return;
    }
    memcpy(__dest,param_2,uVar7);
    param_2 = (ulong *)((long)param_2 + uVar7);
    uVar9 = param_1[7] ^ uVar9;
    for (iVar2 = (int)param_1[6]; iVar2 != 0; iVar2 = iVar2 + -1) {
      uVar8 = uVar4 + uVar8;
      uVar7 = uVar9 + uVar10 ^ (uVar9 >> 0x30 | uVar9 << 0x10);
      uVar4 = uVar8 ^ (uVar4 >> 0x33 | uVar4 << 0xd);
      uVar8 = uVar7 + (uVar8 >> 0x20 | uVar8 << 0x20);
      uVar10 = uVar9 + uVar10 + uVar4;
      uVar9 = uVar8 ^ (uVar7 >> 0x2b | uVar7 << 0x15);
      uVar4 = uVar10 ^ (uVar4 >> 0x2f | uVar4 << 0x11);
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
    }
    uVar8 = uVar8 ^ param_1[7];
  }
  __src = (ulong *)((long)param_2 + (uVar6 - (uVar6 & 7)));
  if (param_2 != __src) {
    if ((int)param_1[6] == 0) {
      do {
        puVar3 = param_2 + 1;
        uVar9 = *param_2 ^ uVar9;
        uVar8 = uVar8 ^ *param_2;
        param_2 = puVar3;
      } while (puVar3 != __src);
    }
    else {
      do {
        uVar7 = *param_2;
        uVar9 = uVar7 ^ uVar9;
        iVar2 = (int)param_1[6];
        do {
          uVar8 = uVar4 + uVar8;
          iVar2 = iVar2 + -1;
          uVar5 = uVar9 + uVar10 ^ (uVar9 >> 0x30 | uVar9 << 0x10);
          uVar4 = uVar8 ^ (uVar4 >> 0x33 | uVar4 << 0xd);
          uVar8 = uVar5 + (uVar8 >> 0x20 | uVar8 << 0x20);
          uVar10 = uVar9 + uVar10 + uVar4;
          uVar9 = uVar8 ^ (uVar5 >> 0x2b | uVar5 << 0x15);
          uVar4 = uVar10 ^ (uVar4 >> 0x2f | uVar4 << 0x11);
          uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        } while (iVar2 != 0);
        param_2 = param_2 + 1;
        uVar8 = uVar8 ^ uVar7;
      } while (param_2 != __src);
    }
  }
  if ((uVar6 & 7) != 0) {
    memcpy(param_1 + 7,__src,uVar6 & 7);
  }
  *(uint *)(param_1 + 5) = (uint)uVar6 & 7;
  param_1[1] = uVar8;
  param_1[2] = uVar4;
  param_1[3] = uVar10;
  param_1[4] = uVar9;
  return;
}


// ===== 0045fa10  FUN_0045fa10 =====

undefined4 FUN_0045fa10(long *param_1,ulong *param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (param_3 == 0) {
    return 0;
  }
  iVar3 = (int)param_1[6];
  if (iVar3 == 0) {
    return 0;
  }
  if (*(uint *)((long)param_1 + 0x2c) != param_3) {
    return 0;
  }
  uVar4 = param_1[1];
  iVar1 = (int)param_1[5];
  uVar7 = *param_1 << 0x38;
  uVar2 = param_1[2];
  uVar8 = param_1[3];
  if (iVar1 < 4) {
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        if (iVar1 != 3) goto LAB_0045fad0;
        goto LAB_0045fab8;
      }
      goto LAB_0045fac0;
    }
  }
  else {
    if (iVar1 < 6) {
      if (iVar1 != 4) {
        if (iVar1 != 5) goto LAB_0045fad0;
        goto LAB_0045faa8;
      }
    }
    else {
      if (iVar1 != 6) {
        if (iVar1 != 7) goto LAB_0045fad0;
        uVar7 = uVar7 | (ulong)*(byte *)((long)param_1 + 0x3e) << 0x30;
      }
      uVar7 = uVar7 | (ulong)*(byte *)((long)param_1 + 0x3d) << 0x28;
LAB_0045faa8:
      uVar7 = uVar7 | (ulong)*(byte *)((long)param_1 + 0x3c) << 0x20;
    }
    uVar7 = uVar7 | (ulong)*(byte *)((long)param_1 + 0x3b) << 0x18;
LAB_0045fab8:
    uVar7 = uVar7 | (ulong)*(byte *)((long)param_1 + 0x3a) << 0x10;
LAB_0045fac0:
    uVar7 = uVar7 | (ulong)*(byte *)((long)param_1 + 0x39) << 8;
  }
  uVar7 = uVar7 | *(byte *)(param_1 + 7);
LAB_0045fad0:
  uVar5 = uVar7 ^ param_1[4];
  do {
    uVar4 = uVar2 + uVar4;
    iVar3 = iVar3 + -1;
    uVar6 = uVar5 + uVar8 ^ (uVar5 >> 0x30 | uVar5 << 0x10);
    uVar2 = uVar4 ^ (uVar2 >> 0x33 | uVar2 << 0xd);
    uVar4 = uVar6 + (uVar4 >> 0x20 | uVar4 << 0x20);
    uVar8 = uVar5 + uVar8 + uVar2;
    uVar5 = uVar4 ^ (uVar6 >> 0x2b | uVar6 << 0x15);
    uVar2 = uVar8 ^ (uVar2 >> 0x2f | uVar2 << 0x11);
    uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
  } while (iVar3 != 0);
  iVar3 = *(int *)((long)param_1 + 0x34);
  uVar6 = 0xee;
  if (*(uint *)((long)param_1 + 0x2c) != 0x10) {
    uVar6 = 0xff;
  }
  uVar4 = uVar4 ^ uVar7;
  uVar8 = uVar8 ^ uVar6;
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    uVar4 = uVar2 + uVar4;
    uVar7 = uVar5 + uVar8 ^ (uVar5 >> 0x30 | uVar5 << 0x10);
    uVar2 = uVar4 ^ (uVar2 >> 0x33 | uVar2 << 0xd);
    uVar4 = uVar7 + (uVar4 >> 0x20 | uVar4 << 0x20);
    uVar8 = uVar5 + uVar8 + uVar2;
    uVar5 = uVar4 ^ (uVar7 >> 0x2b | uVar7 << 0x15);
    uVar2 = uVar8 ^ (uVar2 >> 0x2f | uVar2 << 0x11);
    uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
  }
  *param_2 = uVar2 ^ uVar5 ^ uVar4 ^ uVar8;
  if (*(int *)((long)param_1 + 0x2c) != 8) {
    uVar2 = uVar2 ^ 0xdd;
    for (iVar3 = *(int *)((long)param_1 + 0x34); iVar3 != 0; iVar3 = iVar3 + -1) {
      uVar4 = uVar2 + uVar4;
      uVar7 = uVar5 + uVar8 ^ (uVar5 >> 0x30 | uVar5 << 0x10);
      uVar2 = uVar4 ^ (uVar2 >> 0x33 | uVar2 << 0xd);
      uVar4 = uVar7 + (uVar4 >> 0x20 | uVar4 << 0x20);
      uVar8 = uVar5 + uVar8 + uVar2;
      uVar5 = uVar4 ^ (uVar7 >> 0x2b | uVar7 << 0x15);
      uVar2 = uVar8 ^ (uVar2 >> 0x2f | uVar2 << 0x11);
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
    }
    param_2[1] = uVar2 ^ uVar5 ^ uVar4 ^ uVar8;
  }
  return 1;
}


// ===== 0045fbcc  FUN_0045fbcc =====

void FUN_0045fbcc(long param_1)

{
  FUN_003d51ac(*(undefined8 *)(param_1 + 0x50));
  FUN_0039d050(*(undefined8 *)(param_1 + 0x40));
  FUN_003c86b4(param_1,"providers/implementations/rands/crngt.c",0x3e);
  return;
}


// ===== 0045fc08  FUN_0045fc08 =====

long FUN_0045fc08(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_003c8474(0x58,"providers/implementations/rands/crngt.c",0x43);
  if (lVar1 == 0) {
    return 0;
  }
  lVar2 = FUN_0039e6f4(param_1,"SHA256",&DAT_001c717f);
  *(long *)(lVar1 + 0x40) = lVar2;
  if (lVar2 == 0) {
    uVar3 = 0x49;
  }
  else {
    lVar2 = FUN_003d5150();
    *(long *)(lVar1 + 0x50) = lVar2;
    if (lVar2 != 0) {
      return lVar1;
    }
    FUN_0039d050(*(undefined8 *)(lVar1 + 0x40));
    uVar3 = 0x4f;
  }
  FUN_003c86b4(lVar1,"providers/implementations/rands/crngt.c",uVar3);
  return 0;
}


// ===== 0045fca8  FUN_0045fca8 =====

ulong FUN_0045fca8(long param_1,undefined8 *param_2,int param_3,ulong param_4,ulong param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 uVar8;
  void *__src;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong __n;
  undefined8 uVar14;
  undefined8 local_d8;
  long local_d0;
  uint local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 *local_a8 [8];
  undefined8 *local_68;
  
  uVar8 = FUN_0046b880(*(undefined8 *)(param_1 + 8));
  __src = (void *)FUN_003b9c48(uVar8,7);
  local_d8 = 0;
  local_d0 = 0;
  if ((__src == (void *)0x0) ||
     (iVar7 = FUN_003d518c(*(undefined8 *)((long)__src + 0x50)), iVar7 == 0)) {
    return 0;
  }
  if (*(int *)((long)__src + 0x48) == 0) {
    uVar14 = *(undefined8 *)(param_1 + 8);
    uVar13 = *(undefined8 *)((long)__src + 0x40);
    lVar10 = FUN_0043f3bc(uVar14,local_a8,0,0x10,0x10);
    if (lVar10 != 0) {
      if (lVar10 == 0x10) {
        iVar7 = FUN_0039e518(local_a8[0],0x10,__src,0,uVar13,0);
        if (iVar7 != 0) {
          uStack_b8 = local_a8[0][1];
          local_c0 = *local_a8[0];
          FUN_0043f42c(uVar14,local_a8[0],0x10);
          *(undefined4 *)((long)__src + 0x48) = 1;
          goto LAB_0045fd10;
        }
        lVar10 = 0x10;
      }
      FUN_0043f42c(uVar14,local_a8[0],lVar10);
    }
    FUN_003c89b8(&local_c0,0x10);
    uVar12 = 0;
    goto LAB_0045ffc0;
  }
LAB_0045fd10:
  uVar2 = param_3 + 0xe;
  if ((int)(param_3 + 7U) < 0 == SCARRY4(param_3,7)) {
    uVar2 = param_3 + 7U;
  }
  uVar5 = (long)((ulong)uVar2 << 0x20) >> 0x23;
  if (uVar5 <= param_4) {
    uVar5 = param_4;
  }
  if ((param_5 < uVar5) ||
     (puVar9 = (undefined8 *)FUN_003c8e24(uVar5,"providers/implementations/rands/crngt.c",0x8d),
     puVar9 == (undefined8 *)0x0)) {
    uVar12 = 0;
    goto LAB_0045ffc0;
  }
  FUN_003d4c3c(uVar8,&local_d0,&local_d8);
  uVar12 = uVar5;
  puVar1 = puVar9;
  if (local_d0 == 0) {
    lVar10 = 0;
joined_r0x0045fd94:
    for (; uVar12 != 0; uVar12 = uVar12 - uVar3) {
      uVar8 = *(undefined8 *)(param_1 + 8);
      uVar14 = *(undefined8 *)((long)__src + 0x40);
      uVar3 = 0x10;
      if (uVar12 < 0x10) {
        uVar3 = uVar12;
      }
      puVar4 = puVar1;
      if (uVar12 < 0x10) {
        puVar4 = &local_c0;
      }
      lVar11 = FUN_0043f3bc(uVar8,&local_68,0,0x10,0x10);
      if (lVar11 != 0x10) {
        if (lVar11 != 0) {
          FUN_0043f42c(uVar8,local_68,lVar11);
        }
        goto LAB_0045ff90;
      }
      iVar7 = FUN_0039e518(local_68,0x10,local_a8,&local_c4,uVar14,0);
      puVar6 = local_68;
      if (iVar7 == 0) {
        FUN_0043f42c(uVar8,local_68,0x10);
        goto LAB_0045ff90;
      }
      uVar14 = *local_68;
      puVar4[1] = local_68[1];
      *puVar4 = uVar14;
      FUN_0043f42c(uVar8,puVar6,0x10);
      if (uVar12 < 0x10) {
        memcpy(puVar1,&local_c0,uVar12);
      }
      iVar7 = FUN_003d4fdc(lVar10,local_a8);
      __n = (ulong)local_c4;
      if (iVar7 != 0) {
        memcpy(local_a8,__src,__n);
      }
      iVar7 = memcmp(__src,local_a8,__n);
      if (iVar7 == 0) {
        FUN_0043eb6c("Continuous_RNG_Test");
        uVar12 = 0;
        uVar8 = 0;
        goto LAB_0045ff98;
      }
      memcpy(__src,local_a8,__n);
      puVar1 = (undefined8 *)((long)puVar1 + uVar3);
    }
    uVar8 = 1;
    *param_2 = puVar9;
    uVar12 = uVar5;
    puVar9 = (undefined8 *)0x0;
  }
  else {
    lVar10 = FUN_003d4c94(local_d0,local_d8);
    if (lVar10 != 0) {
      FUN_003d4dcc(lVar10,"Continuous_RNG_Test",&DAT_001e7834);
      goto joined_r0x0045fd94;
    }
LAB_0045ff90:
    uVar12 = 0;
    uVar8 = 1;
  }
LAB_0045ff98:
  FUN_003d4ec8(lVar10,uVar8);
  FUN_003d4dbc(lVar10);
  FUN_003c9d0c(puVar9,uVar5,"providers/implementations/rands/crngt.c",0xb5);
LAB_0045ffc0:
  FUN_003d519c(*(undefined8 *)((long)__src + 0x50));
  return uVar12;
}


// ===== 00460008  FUN_00460008 =====

void FUN_00460008(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_003c9d0c(param_2,param_3,"providers/implementations/rands/crngt.c",0xbf);
  return;
}


// ===== 00460024  FUN_00460024 =====

undefined8 FUN_00460024(void)

{
  return 1;
}


// ===== 0046002c  FUN_0046002c =====

void FUN_0046002c(void)

{
  return;
}


// ===== 00460030  FUN_00460030 =====

ulong FUN_00460030(long param_1,long *param_2,int param_3,ulong param_4,ulong param_5,
                  undefined4 param_6)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long local_28;
  
  uVar1 = 0;
  if (-1 < param_3) {
    uVar1 = param_3 + 7U >> 3;
  }
  uVar2 = (ulong)uVar1;
  if (uVar1 <= param_4) {
    uVar2 = param_4;
  }
  if (param_5 <= uVar2) {
    uVar2 = param_5;
  }
  local_28 = param_1;
  lVar4 = FUN_003c8e24(uVar2,"providers/implementations/rands/drbg.c",0xa2);
  if (lVar4 != 0) {
    iVar3 = FUN_00460130(param_1,lVar4,uVar2,*(undefined4 *)(param_1 + 0x80),param_6,&local_28,8);
    if (iVar3 != 0) {
      *param_2 = lVar4;
      return uVar2;
    }
    FUN_003c9d0c(lVar4,uVar2,"providers/implementations/rands/drbg.c",0xb2);
    FUN_00379868();
    FUN_0037995c("providers/implementations/rands/drbg.c",0xb3,"ossl_drbg_get_seed");
    FUN_00379a5c(0x39,0xbf,0);
  }
  return 0;
}


// ===== 00460130  FUN_00460130 =====

undefined8
FUN_00460130(long *param_1,undefined8 param_2,ulong param_3,uint param_4,int param_5,
            undefined8 param_6,ulong param_7)

{
  bool bVar1;
  __pid_t _Var2;
  int iVar3;
  undefined8 uVar4;
  time_t tVar5;
  
  uVar4 = FUN_0043eb70();
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  if ((*param_1 != 0) && (uVar4 = FUN_003d518c(), (int)uVar4 == 0)) {
    return uVar4;
  }
  iVar3 = (int)param_1[0x1e];
  if (iVar3 == 1) {
LAB_004601d8:
    if (*(uint *)(param_1 + 0x10) < param_4) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/rands/drbg.c",0x291,"ossl_prov_drbg_generate");
      uVar4 = 0xb5;
    }
    else if ((ulong)param_1[0x11] < param_3) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/rands/drbg.c",0x296,"ossl_prov_drbg_generate");
      uVar4 = 0xc4;
    }
    else if ((ulong)param_1[0x17] < param_7) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/rands/drbg.c",0x29a,"ossl_prov_drbg_generate");
      uVar4 = 0xb8;
    }
    else {
      _Var2 = getpid();
      bVar1 = (int)param_1[0xf] != _Var2;
      if (bVar1) {
        *(__pid_t *)(param_1 + 0xf) = _Var2;
      }
      if (*(uint *)((long)param_1 + 0xc4) != 0) {
        bVar1 = *(uint *)((long)param_1 + 0xc4) <= *(uint *)(param_1 + 0x18) || bVar1;
      }
      if (0 < param_1[0x1a]) {
        tVar5 = time((time_t *)0x0);
        if ((tVar5 < param_1[0x19]) || (param_1[0x1a] <= tVar5 - param_1[0x19])) {
          bVar1 = true;
        }
      }
      if ((param_1[6] != 0) && (iVar3 = FUN_00461074(param_1), iVar3 != (int)param_1[0x1c])) {
        bVar1 = true;
      }
      if (bVar1 || param_5 != 0) {
        iVar3 = FUN_00460d3c(param_1,param_5,0,0,param_6,param_7);
        if (iVar3 == 0) {
          FUN_00379868();
          FUN_0037995c("providers/implementations/rands/drbg.c",0x2b6,"ossl_prov_drbg_generate");
          uVar4 = 0xc5;
          goto LAB_004603f4;
        }
        param_7 = 0;
        param_6 = 0;
      }
      iVar3 = (*(code *)param_1[5])(param_1,param_2,param_3,param_6,param_7);
      if (iVar3 != 0) {
        uVar4 = 1;
        *(int *)(param_1 + 0x18) = (int)param_1[0x18] + 1;
        goto LAB_00460400;
      }
      *(undefined4 *)(param_1 + 0x1e) = 2;
      FUN_00379868();
      FUN_0037995c("providers/implementations/rands/drbg.c",0x2bf,"ossl_prov_drbg_generate");
      uVar4 = 0xbf;
    }
  }
  else {
    if (iVar3 == 2) {
      (*(code *)param_1[3])(param_1);
      iVar3 = (int)param_1[0x1e];
    }
    if (iVar3 == 0) {
      FUN_004604f4(param_1,(int)param_1[0x10],0,0,0);
      iVar3 = (int)param_1[0x1e];
    }
    if (iVar3 == 0) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/rands/drbg.c",0x28c,"ossl_prov_drbg_generate");
      uVar4 = 0xc1;
    }
    else {
      if (iVar3 != 2) goto LAB_004601d8;
      FUN_00379868();
      FUN_0037995c("providers/implementations/rands/drbg.c",0x288,"ossl_prov_drbg_generate");
      uVar4 = 0xc0;
    }
  }
LAB_004603f4:
  FUN_00379a5c(0x39,uVar4,0);
  uVar4 = 0;
LAB_00460400:
  if (*param_1 != 0) {
    FUN_003d519c(*param_1);
  }
  return uVar4;
}


// ===== 00460430  FUN_00460430 =====

void FUN_00460430(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_003c9d0c(param_2,param_3,"providers/implementations/rands/drbg.c",0xbe);
  return;
}


// ===== 0046044c  FUN_0046044c =====

long * FUN_0046044c(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_003c8474(0x10,"providers/implementations/rands/drbg.c",0x116);
  if (plVar1 != (long *)0x0) {
    lVar2 = FUN_003d5150();
    *plVar1 = lVar2;
    if (lVar2 == 0) {
      FUN_003c86b4(plVar1,"providers/implementations/rands/drbg.c",0x11d);
      return (long *)0x0;
    }
  }
  return plVar1;
}


// ===== 004604b4  FUN_004604b4 =====

void FUN_004604b4(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_003d51ac(*param_1);
    FUN_003c86b4(param_1,"providers/implementations/rands/drbg.c",0x12d);
    return;
  }
  return;
}


// ===== 004604f4  FUN_004604f4 =====

bool FUN_004604f4(long param_1,uint param_2,undefined4 param_3,char *param_4,ulong param_5)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  time_t tVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 local_60;
  long local_58;
  
  uVar11 = *(uint *)(param_1 + 0x80);
  local_60 = 0;
  local_58 = 0;
  if (uVar11 < param_2) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/rands/drbg.c",0x16b,"ossl_prov_drbg_instantiate");
    FUN_00379a5c(0x39,0xb5,0);
joined_r0x004606d4:
    uVar10 = 0;
    goto joined_r0x004608e8;
  }
  uVar2 = 0x1d;
  if (param_4 != (char *)0x0) {
    uVar2 = param_5;
  }
  pcVar3 = "OpenSSL NIST SP 800-90A DRBG";
  if (param_4 != (char *)0x0) {
    pcVar3 = param_4;
  }
  if (*(ulong *)(param_1 + 0xb0) < uVar2) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/rands/drbg.c",0x177,"ossl_prov_drbg_instantiate");
    FUN_00379a5c(0x39,0xc3,0);
    uVar10 = 0;
    goto joined_r0x004608e8;
  }
  if (*(int *)(param_1 + 0xf0) != 0) {
    if (*(int *)(param_1 + 0xf0) == 2) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/rands/drbg.c",0x17d,"ossl_prov_drbg_instantiate");
      FUN_00379a5c(0x39,0xc0,0);
    }
    else {
      FUN_00379868();
      FUN_0037995c("providers/implementations/rands/drbg.c",0x17f,"ossl_prov_drbg_instantiate");
      FUN_00379a5c(0x39,0xb9,0);
    }
    goto joined_r0x004606d4;
  }
  uVar12 = *(ulong *)(param_1 + 0x98);
  lVar4 = *(long *)(param_1 + 0xa0);
  uVar13 = *(ulong *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0xf0) = 2;
  if (lVar4 == 0) {
    uVar10 = 0;
LAB_0046072c:
    iVar5 = *(int *)(param_1 + 0xd8);
    iVar6 = 1;
    if (1 < iVar5 + 1U) {
      iVar6 = iVar5 + 1;
    }
    iVar1 = 0;
    if (iVar5 != 0) {
      iVar1 = iVar6;
    }
    *(int *)(param_1 + 0xdc) = iVar1;
    uVar7 = FUN_00460a2c(param_1,&local_60,uVar11,uVar13,uVar12,param_3);
    if ((uVar7 < uVar13) || (uVar12 < uVar7)) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/rands/drbg.c",0x1c1,"ossl_prov_drbg_instantiate");
      uVar9 = 0xbd;
    }
    else {
      iVar6 = (**(code **)(param_1 + 0x10))(param_1,local_60,uVar7,local_58,uVar10,pcVar3,uVar2);
      FUN_00460bdc(param_1,local_60,uVar7);
      if (iVar6 != 0) {
        *(undefined4 *)(param_1 + 0xf0) = 1;
        *(undefined4 *)(param_1 + 0xc0) = 1;
        tVar8 = time((time_t *)0x0);
        *(time_t *)(param_1 + 200) = tVar8;
        *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0xdc);
        goto joined_r0x004608e8;
      }
      FUN_00379868();
      FUN_0037995c("providers/implementations/rands/drbg.c",0x1c8,"ossl_prov_drbg_instantiate");
      uVar9 = 0xbc;
    }
  }
  else {
    if (*(code **)(param_1 + 0x58) == (code *)0x0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar10 = FUN_004608f0(param_1,&local_58,lVar4,*(undefined8 *)(param_1 + 0xa8));
        if ((uVar10 < *(ulong *)(param_1 + 0xa0)) || (*(ulong *)(param_1 + 0xa8) < uVar10)) {
          FUN_00379868();
          uVar9 = 0x1ae;
          goto LAB_004608cc;
        }
      }
      else {
        uVar11 = uVar11 + (uVar11 >> 1);
        uVar10 = 0;
        uVar13 = lVar4 + uVar13;
        uVar12 = *(long *)(param_1 + 0xa8) + uVar12;
      }
      goto LAB_0046072c;
    }
    uVar10 = (**(code **)(param_1 + 0x58))
                       (*(long *)(param_1 + 0x30),0,uVar11,lVar4,*(undefined8 *)(param_1 + 0xa8));
    if (uVar10 == 0) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/rands/drbg.c",0x18b,"ossl_prov_drbg_instantiate");
      FUN_00379a5c(0x39,0xbe,0);
      goto joined_r0x004606d4;
    }
    local_58 = FUN_003c83a4(uVar10,"providers/implementations/rands/drbg.c",0x18e);
    if (local_58 == 0) {
      FUN_00379868();
      uVar9 = 400;
    }
    else {
      uVar7 = (**(code **)(param_1 + 0x58))
                        (*(undefined8 *)(param_1 + 0x30),local_58,*(undefined4 *)(param_1 + 0x80),
                         *(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xa8));
      if (uVar10 == uVar7) goto LAB_0046072c;
      FUN_00379868(uVar10);
      uVar9 = 0x197;
    }
LAB_004608cc:
    FUN_0037995c("providers/implementations/rands/drbg.c",uVar9,"ossl_prov_drbg_instantiate");
    uVar9 = 0xbe;
  }
  FUN_00379a5c(0x39,uVar9,0);
joined_r0x004608e8:
  if (local_58 != 0) {
    FUN_0043f500(*(undefined8 *)(param_1 + 8),local_58,uVar10);
  }
  return *(int *)(param_1 + 0xf0) == 1;
}


// ===== 004608f0  FUN_004608f0 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_004608f0(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long local_60 [2];
  
  uVar2 = FUN_0046b880(*(undefined8 *)(param_1 + 8));
  puVar3 = (undefined8 *)FUN_003b9c48(uVar2,6);
  if (puVar3 != (undefined8 *)0x0) {
    if ((((*(long *)(param_1 + 0x30) != 0) && (*(code **)(param_1 + 0x58) != (code *)0x0)) &&
        (puVar4 = (undefined8 *)
                  (**(code **)(param_1 + 0x58))
                            (*(long *)(param_1 + 0x30),0,0,*(undefined8 *)(param_1 + 0xa0),
                             *(undefined8 *)(param_1 + 0xa8)), puVar4 != (undefined8 *)0x0)) &&
       (lVar5 = FUN_003c83a4(puVar4,"providers/implementations/rands/drbg.c",0x144), lVar5 != 0)) {
      puVar6 = (undefined8 *)
               (**(code **)(param_1 + 0x58))
                         (*(undefined8 *)(param_1 + 0x30),lVar5,0,*(undefined8 *)(param_1 + 0xa0),
                          *(undefined8 *)(param_1 + 0xa8));
      if (puVar6 == puVar4) {
        *param_2 = lVar5;
        return puVar4;
      }
      FUN_003c86b4(puVar6,lVar5,"providers/implementations/rands/drbg.c",0x14b);
    }
    local_60[1] = 0;
    local_60[0] = param_1;
    iVar1 = FUN_003d52bc(puVar3 + 1,1,local_60 + 1,*puVar3);
    if (iVar1 == 0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      puVar3 = (undefined8 *)
               FUN_0043f47c(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4,local_60,0x10);
    }
  }
  return puVar3;
}


// ===== 00460a2c  FUN_00460a2c =====

undefined8
FUN_00460a2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined4 param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint local_44;
  long local_28;
  
  local_28 = param_1;
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar3 = FUN_0043f3bc(*(undefined8 *)(param_1 + 8));
    return uVar3;
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/rands/drbg.c",0xd2,"get_entropy");
    uVar3 = 0xbb;
  }
  else {
    iVar1 = FUN_0046147c(param_1,&local_44);
    if (iVar1 == 0) {
      return 0;
    }
    uVar4 = *(uint *)(param_1 + 0x80);
    if (uVar4 <= local_44) {
      lVar2 = *(long *)(param_1 + 0x30);
      if ((lVar2 != 0) && (*(code **)(param_1 + 0x40) != (code *)0x0)) {
        iVar1 = (**(code **)(param_1 + 0x40))();
        if (iVar1 == 0) {
          FUN_00379868();
          FUN_0037995c("providers/implementations/rands/drbg.c",0x47,"ossl_drbg_lock_parent");
          uVar3 = 0xb6;
          goto LAB_00460af0;
        }
        lVar2 = *(long *)(param_1 + 0x30);
        uVar4 = *(uint *)(param_1 + 0x80);
      }
      uVar3 = (**(code **)(param_1 + 0x60))(lVar2,param_2,uVar4,param_4,param_5,param_6,&local_28,8)
      ;
      if (*(long *)(local_28 + 0x30) == 0) {
        return uVar3;
      }
      if (*(code **)(local_28 + 0x48) == (code *)0x0) {
        return uVar3;
      }
      (**(code **)(local_28 + 0x48))(*(long *)(local_28 + 0x30));
      return uVar3;
    }
    FUN_00379868();
    FUN_0037995c("providers/implementations/rands/drbg.c",0xdc,"get_entropy");
    uVar3 = 0xc2;
  }
LAB_00460af0:
  FUN_00379a5c(0x39,uVar3,0);
  return 0;
}


// ===== 00460bdc  FUN_00460bdc =====

void FUN_00460bdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 == 0) {
    FUN_0043f42c(*(undefined8 *)(param_1 + 8));
    return;
  }
  pcVar3 = *(code **)(param_1 + 0x68);
  if (pcVar3 != (code *)0x0) {
    if (*(code **)(param_1 + 0x40) != (code *)0x0) {
      iVar1 = (**(code **)(param_1 + 0x40))();
      if (iVar1 == 0) {
        FUN_00379868();
        FUN_0037995c("providers/implementations/rands/drbg.c",0x47,"ossl_drbg_lock_parent");
        FUN_00379a5c(0x39,0xb6,0);
        return;
      }
      pcVar3 = *(code **)(param_1 + 0x68);
      lVar2 = *(long *)(param_1 + 0x30);
    }
    (*pcVar3)(lVar2,param_2,param_3);
    if ((*(long *)(param_1 + 0x30) != 0) && (*(code **)(param_1 + 0x48) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00460c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x48))();
      return;
    }
  }
  return;
}


// ===== 00460ca8  FUN_00460ca8 =====

undefined8 FUN_00460ca8(long param_1)

{
  *(undefined4 *)(param_1 + 0xf0) = 0;
  return 1;
}


// ===== 00460cb8  FUN_00460cb8 =====

ulong FUN_00460cb8(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  
  if (*param_1 != 0) {
    param_2 = param_2 & 0xffffffff;
    uVar1 = FUN_003d518c();
    if ((int)uVar1 == 0) {
      return uVar1;
    }
  }
  uVar1 = FUN_00460d3c(param_1,param_2,param_3,param_4,param_5,param_6);
  if (*param_1 != 0) {
    uVar1 = uVar1 & 0xffffffff;
    FUN_003d519c(*param_1);
  }
  return uVar1;
}


// ===== 00460d3c  FUN_00460d3c =====

ulong FUN_00460d3c(long param_1,undefined4 param_2,long param_3,ulong param_4,long param_5,
                  ulong param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  time_t tVar6;
  undefined8 uVar7;
  undefined8 local_48;
  
  local_48 = 0;
  uVar5 = FUN_0043eb70();
  if ((int)uVar5 == 0) {
    return uVar5;
  }
  iVar3 = *(int *)(param_1 + 0xf0);
  if (iVar3 != 1) {
    if (iVar3 == 2) {
      (**(code **)(param_1 + 0x18))(param_1);
      iVar3 = *(int *)(param_1 + 0xf0);
    }
    if (iVar3 == 0) {
      FUN_004604f4(param_1,*(undefined4 *)(param_1 + 0x80),0,0,0);
      iVar3 = *(int *)(param_1 + 0xf0);
    }
    if (iVar3 == 0) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/rands/drbg.c",0x1fd,"ossl_prov_drbg_reseed_unlocked");
      uVar7 = 0xc1;
      goto LAB_00460ff8;
    }
    if (iVar3 == 2) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/rands/drbg.c",0x1f9,"ossl_prov_drbg_reseed_unlocked");
      uVar7 = 0xc0;
      goto LAB_00460ff8;
    }
  }
  if (param_3 != 0) {
    if (param_4 < *(ulong *)(param_1 + 0x90)) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/rands/drbg.c",0x204,"ossl_prov_drbg_reseed_unlocked");
      uVar7 = 0x7c;
LAB_00460e84:
      FUN_00379a5c(0x24,uVar7,0);
      *(undefined4 *)(param_1 + 0xf0) = 2;
      return 0;
    }
    if (*(ulong *)(param_1 + 0x98) < param_4) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/rands/drbg.c",0x209,"ossl_prov_drbg_reseed_unlocked");
      uVar7 = 0x6a;
      goto LAB_00460e84;
    }
  }
  if (param_5 == 0) {
    param_6 = 0;
  }
  else if (*(ulong *)(param_1 + 0xb8) < param_6) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/rands/drbg.c",0x212,"ossl_prov_drbg_reseed_unlocked");
    uVar7 = 0xb8;
    goto LAB_00460ff8;
  }
  *(undefined4 *)(param_1 + 0xf0) = 2;
  iVar2 = *(int *)(param_1 + 0xd8);
  iVar3 = 1;
  if (1 < iVar2 + 1U) {
    iVar3 = iVar2 + 1;
  }
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = iVar3;
  }
  *(int *)(param_1 + 0xdc) = iVar1;
  if (param_3 != 0) {
    iVar3 = (**(code **)(param_1 + 0x20))(param_1,param_3,param_4,param_5,param_6);
    if (iVar3 == 0) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/rands/drbg.c",0x22e,"ossl_prov_drbg_reseed_unlocked");
      uVar7 = 0xcc;
LAB_00460ff8:
      FUN_00379a5c(0x39,uVar7,0);
      return 0;
    }
    param_6 = 0;
    param_5 = 0;
  }
  uVar5 = FUN_00460a2c(param_1,&local_48,*(undefined4 *)(param_1 + 0x80),
                       *(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98),param_2);
  if ((uVar5 < *(ulong *)(param_1 + 0x90)) || (*(ulong *)(param_1 + 0x98) < uVar5)) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/rands/drbg.c",0x23d,"ossl_prov_drbg_reseed_unlocked");
    FUN_00379a5c(0x39,0xbd,0);
  }
  else {
    iVar3 = (**(code **)(param_1 + 0x20))(param_1,local_48,uVar5,param_5,param_6);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0xf0) = 1;
      *(undefined4 *)(param_1 + 0xc0) = 1;
      tVar6 = time((time_t *)0x0);
      *(time_t *)(param_1 + 200) = tVar6;
      *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0xdc);
      if (*(long *)(param_1 + 0x30) != 0) {
        uVar4 = FUN_00461074(param_1);
        *(undefined4 *)(param_1 + 0xe0) = uVar4;
      }
    }
  }
  FUN_00460bdc(param_1,local_48,uVar5);
  return (ulong)(*(int *)(param_1 + 0xf0) == 1);
}


// ===== 00461074  FUN_00461074 =====

int FUN_00461074(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  int local_74;
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
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
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
  FUN_003cbb64(&local_70,"reseed_counter",&local_74);
  if (((*(long *)(param_1 + 0x30) != 0) && (*(code **)(param_1 + 0x40) != (code *)0x0)) &&
     (iVar1 = (**(code **)(param_1 + 0x40))(), iVar1 == 0)) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/rands/drbg.c",0x47,"ossl_drbg_lock_parent");
    FUN_00379a5c(0x39,0xb6,0);
    FUN_00379868();
    FUN_0037995c("providers/implementations/rands/drbg.c",0x76,"get_parent_reseed_count");
    FUN_00379a5c(0x39,0xc9,0);
    iVar1 = *(int *)(param_1 + 0xd8) + -2;
    if (iVar1 == 0) {
      iVar1 = -1;
    }
    return iVar1;
  }
  iVar1 = (**(code **)(param_1 + 0x50))(uVar2,&local_70);
  if (iVar1 == 0) {
    local_74 = 0;
  }
  if ((*(long *)(param_1 + 0x30) != 0) && (*(code **)(param_1 + 0x48) != (code *)0x0)) {
    (**(code **)(param_1 + 0x48))();
  }
  return local_74;
}


// ===== 00461180  FUN_00461180 =====

undefined8 FUN_00461180(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((param_1 == (long *)0x0) || (*param_1 != 0)) {
    return 1;
  }
  if ((code *)param_1[7] != (code *)0x0) {
    iVar1 = (*(code *)param_1[7])(param_1[6]);
    if (iVar1 == 0) {
      uVar3 = 0xb6;
      uVar4 = 0x300;
      goto LAB_004611f8;
    }
  }
  lVar2 = FUN_003d5150();
  *param_1 = lVar2;
  if (lVar2 != 0) {
    return 1;
  }
  uVar3 = 0xb4;
  uVar4 = 0x305;
LAB_004611f8:
  FUN_00379868();
  FUN_0037995c("providers/implementations/rands/drbg.c",uVar4,"ossl_drbg_enable_locking");
  FUN_00379a5c(0x39,uVar3,0);
  return 0;
}


// ===== 00461234  FUN_00461234 =====

undefined8 *
FUN_00461234(undefined8 param_1,long param_2,int *param_3,code *param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  __pid_t _Var2;
  undefined8 *puVar3;
  int *piVar4;
  int iVar5;
  uint local_44;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    puVar3 = (undefined8 *)FUN_003c8474(0x128,"providers/implementations/rands/drbg.c",0x328);
    if (puVar3 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    puVar3[1] = param_1;
    puVar3[2] = param_5;
    puVar3[3] = param_6;
    puVar3[4] = param_7;
    puVar3[5] = param_8;
    _Var2 = getpid();
    puVar3[6] = param_2;
    *(__pid_t *)(puVar3 + 0xf) = _Var2;
    if ((param_3 != (int *)0x0) && (iVar1 = *param_3, iVar1 != 0)) {
      piVar4 = param_3 + 4;
      iVar5 = iVar1;
      do {
        if (iVar5 == 8) {
          puVar3[7] = *(undefined8 *)(piVar4 + -2);
          break;
        }
        iVar5 = *piVar4;
        piVar4 = piVar4 + 4;
      } while (iVar5 != 0);
      piVar4 = param_3 + 4;
      iVar5 = iVar1;
      do {
        if (iVar5 == 9) {
          puVar3[8] = *(undefined8 *)(piVar4 + -2);
          break;
        }
        iVar5 = *piVar4;
        piVar4 = piVar4 + 4;
      } while (iVar5 != 0);
      piVar4 = param_3 + 4;
      iVar5 = iVar1;
      do {
        if (iVar5 == 10) {
          puVar3[9] = *(undefined8 *)(piVar4 + -2);
          break;
        }
        iVar5 = *piVar4;
        piVar4 = piVar4 + 4;
      } while (iVar5 != 0);
      piVar4 = param_3 + 4;
      iVar5 = iVar1;
      do {
        if (iVar5 == 0xf) {
          puVar3[10] = *(undefined8 *)(piVar4 + -2);
          break;
        }
        iVar5 = *piVar4;
        piVar4 = piVar4 + 4;
      } while (iVar5 != 0);
      piVar4 = param_3 + 4;
      iVar5 = iVar1;
      do {
        if (iVar5 == 7) {
          puVar3[0xb] = *(undefined8 *)(piVar4 + -2);
          break;
        }
        iVar5 = *piVar4;
        piVar4 = piVar4 + 4;
      } while (iVar5 != 0);
      piVar4 = param_3 + 4;
      iVar5 = iVar1;
      do {
        if (iVar5 == 0x12) {
          puVar3[0xc] = *(undefined8 *)(piVar4 + -2);
          break;
        }
        iVar5 = *piVar4;
        piVar4 = piVar4 + 4;
      } while (iVar5 != 0);
      piVar4 = param_3 + 4;
      do {
        if (iVar1 == 0x13) {
          puVar3[0xd] = *(undefined8 *)(piVar4 + -2);
          break;
        }
        iVar1 = *piVar4;
        piVar4 = piVar4 + 4;
      } while (iVar1 != 0);
    }
    puVar3[0x13] = 0x7fffffff;
    puVar3[0x17] = 0x7fffffff;
    puVar3[0x16] = 0x7fffffff;
    puVar3[0x15] = 0x7fffffff;
    *(undefined4 *)(puVar3 + 0x1b) = 1;
    *(undefined4 *)(puVar3 + 0x18) = 1;
    *(undefined4 *)((long)puVar3 + 0xc4) = 0x100;
    puVar3[0x1a] = 0xe10;
    iVar1 = (*param_4)(puVar3);
    if (iVar1 != 0) {
      if (param_2 == 0) {
        return puVar3;
      }
      iVar1 = FUN_0046147c(puVar3,&local_44);
      if (iVar1 != 0) {
        if (*(uint *)(puVar3 + 0x10) <= local_44) {
          return puVar3;
        }
        FUN_00379868();
        FUN_0037995c("providers/implementations/rands/drbg.c",0x359,"ossl_rand_drbg_new");
        FUN_00379a5c(0x39,0xc2,0);
      }
    }
    FUN_003d51ac(*puVar3);
    FUN_003c86b4(puVar3,"providers/implementations/rands/drbg.c",0x36e);
  }
  return (undefined8 *)0x0;
}


// ===== 0046147c  FUN_0046147c =====

undefined8 FUN_0046147c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
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
  if (*(long *)(param_1 + 0x50) == 0) {
    FUN_00379868();
    uVar2 = 0x5c;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    FUN_003cbb64(&local_70,"strength");
    if (((*(long *)(param_1 + 0x30) != 0) && (*(code **)(param_1 + 0x40) != (code *)0x0)) &&
       (iVar1 = (**(code **)(param_1 + 0x40))(), iVar1 == 0)) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/rands/drbg.c",0x47,"ossl_drbg_lock_parent");
      FUN_00379a5c(0x39,0xb6,0);
      FUN_00379868();
      FUN_0037995c("providers/implementations/rands/drbg.c",0x62,"get_parent_strength");
      uVar2 = 0xc9;
      goto LAB_00461558;
    }
    iVar1 = (**(code **)(param_1 + 0x50))(uVar2,&local_70);
    if ((*(long *)(param_1 + 0x30) != 0) && (*(code **)(param_1 + 0x48) != (code *)0x0)) {
      (**(code **)(param_1 + 0x48))(*(long *)(param_1 + 0x30));
    }
    if (iVar1 != 0) {
      return 1;
    }
    FUN_00379868();
    uVar2 = 0x68;
  }
  FUN_0037995c("providers/implementations/rands/drbg.c",uVar2,"get_parent_strength");
  uVar2 = 199;
LAB_00461558:
  FUN_00379a5c(0x39,uVar2,0);
  return 0;
}


// ===== 004615c8  FUN_004615c8 =====

void FUN_004615c8(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_003d51ac(*param_1);
    FUN_003c86b4(param_1,"providers/implementations/rands/drbg.c",0x36e);
    return;
  }
  return;
}


// ===== 00461608  FUN_00461608 =====

undefined8 FUN_00461608(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_003cb140(param_2,"state");
  if ((((((lVar1 == 0) ||
         (uVar2 = thunk_FUN_003cb490(lVar1,*(undefined4 *)(param_1 + 0xf0)), (int)uVar2 != 0)) &&
        ((lVar1 = FUN_003cb140(param_2,"strength"), lVar1 == 0 ||
         (uVar2 = thunk_FUN_003cb490(lVar1,*(undefined4 *)(param_1 + 0x80)), (int)uVar2 != 0)))) &&
       ((lVar1 = FUN_003cb140(param_2,"min_entropylen"), lVar1 == 0 ||
        (uVar2 = thunk_FUN_003cc2a4(lVar1,*(undefined8 *)(param_1 + 0x90)), (int)uVar2 != 0)))) &&
      (((lVar1 = FUN_003cb140(param_2,"max_entropylen"), lVar1 == 0 ||
        (uVar2 = thunk_FUN_003cc2a4(lVar1,*(undefined8 *)(param_1 + 0x98)), (int)uVar2 != 0)) &&
       ((((lVar1 = FUN_003cb140(param_2,"min_noncelen"), lVar1 == 0 ||
          (uVar2 = thunk_FUN_003cc2a4(lVar1,*(undefined8 *)(param_1 + 0xa0)), (int)uVar2 != 0)) &&
         ((lVar1 = FUN_003cb140(param_2,"max_noncelen"), lVar1 == 0 ||
          (uVar2 = thunk_FUN_003cc2a4(lVar1,*(undefined8 *)(param_1 + 0xa8)), (int)uVar2 != 0)))) &&
        ((lVar1 = FUN_003cb140(param_2,"max_perslen"), lVar1 == 0 ||
         (uVar2 = thunk_FUN_003cc2a4(lVar1,*(undefined8 *)(param_1 + 0xb0)), (int)uVar2 != 0))))))))
     && (((lVar1 = FUN_003cb140(param_2,"max_adinlen"), lVar1 == 0 ||
          (uVar2 = thunk_FUN_003cc2a4(lVar1,*(undefined8 *)(param_1 + 0xb8)), (int)uVar2 != 0)) &&
         ((((lVar1 = FUN_003cb140(param_2,"reseed_requests"), lVar1 == 0 ||
            (uVar2 = thunk_FUN_003cb960(lVar1,*(undefined4 *)(param_1 + 0xc4)), (int)uVar2 != 0)) &&
           ((lVar1 = FUN_003cb140(param_2,"reseed_time"), lVar1 == 0 ||
            (uVar2 = thunk_FUN_003cbdc4(lVar1,*(undefined8 *)(param_1 + 200)), (int)uVar2 != 0))))
          && ((lVar1 = FUN_003cb140(param_2,"reseed_time_interval"), lVar1 == 0 ||
              (uVar2 = thunk_FUN_003cbdc4(lVar1,*(undefined8 *)(param_1 + 0xd0)), (int)uVar2 != 0)))
          ))))) {
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 0046178c  FUN_0046178c =====

undefined8 FUN_0046178c(long param_1,long param_2,uint *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = FUN_003cb140(param_2,"max_request");
  if (lVar1 == 0) {
    lVar1 = 0;
    lVar3 = FUN_003cb140(param_2,"reseed_counter");
  }
  else {
    uVar2 = thunk_FUN_003cc2a4(lVar1,*(undefined8 *)(param_1 + 0x88));
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    lVar1 = 1;
    lVar3 = FUN_003cb140(param_2,"reseed_counter");
  }
  if (lVar3 != 0) {
    uVar2 = thunk_FUN_003cb960(lVar3,*(undefined4 *)(param_1 + 0xd8));
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    lVar1 = lVar1 + 1;
  }
  *param_3 = (uint)(*(long *)(param_2 + lVar1 * 0x28) == 0);
  return 1;
}


// ===== 00461838  FUN_00461838 =====

undefined8 FUN_00461838(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_003cb19c(param_2,"reseed_requests");
    if (((lVar1 == 0) || (uVar2 = thunk_FUN_003cb68c(lVar1,param_1 + 0xc4), (int)uVar2 != 0)) &&
       ((lVar1 = FUN_003cb19c(param_2,"reseed_time_interval"), lVar1 == 0 ||
        (uVar2 = thunk_FUN_003cbb88(lVar1,param_1 + 0xd0), (int)uVar2 != 0)))) {
      uVar2 = 1;
    }
    return uVar2;
  }
  return 1;
}


// ===== 004618a8  FUN_004618a8 =====

undefined8 FUN_004618a8(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00389a84(param_2);
  if ((uVar1 >> 1 & 1) == 0) {
    return 1;
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/rands/drbg.c",0x3f4,"ossl_drbg_verify_digest");
  FUN_00379a5c(0x39,0xb7,0);
  return 0;
}


// ===== 00461900  FUN_00461900 =====

void FUN_00461900(void)

{
  FUN_00461234();
  return;
}


// ===== 0046192c  FUN_0046192c =====

void FUN_0046192c(long param_1)

{
  undefined8 *puVar1;
  
  if ((param_1 != 0) && (puVar1 = *(undefined8 **)(param_1 + 0xf8), puVar1 != (undefined8 *)0x0)) {
    FUN_0037fae8(*puVar1);
    FUN_0037fae8(puVar1[1]);
    FUN_0037fae8(puVar1[2]);
    FUN_0037fa4c(puVar1[3]);
    FUN_0037fa4c(puVar1[4]);
    FUN_003c9d0c(puVar1,0xb0,"providers/implementations/rands/drbg_ctr.c",0x28b);
  }
  FUN_004615c8(param_1);
  return;
}


// ===== 0046199c  FUN_0046199c =====

ulong FUN_0046199c(long *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  
  if ((*param_1 == 0) || (uVar1 = FUN_003d518c(), (int)uVar1 != 0)) {
    uVar1 = FUN_0043eb70();
    if (((int)uVar1 != 0) && (uVar1 = FUN_00463474(param_1,param_6), (int)uVar1 != 0)) {
      uVar1 = FUN_004604f4(param_1,param_2,param_3,param_4,param_5);
    }
    if (*param_1 != 0) {
      uVar1 = uVar1 & 0xffffffff;
      FUN_003d519c(*param_1);
    }
  }
  return uVar1;
}


// ===== 00461a34  FUN_00461a34 =====

ulong FUN_00461a34(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  if ((*param_1 == 0) || (uVar1 = FUN_003d518c(), (int)uVar1 != 0)) {
    lVar2 = param_1[0x1f];
    FUN_003c89b8(lVar2 + 0x34,0x20);
    FUN_003c89b8(lVar2 + 0x54,0x10);
    FUN_003c89b8(lVar2 + 100,0x10);
    FUN_003c89b8(lVar2 + 0x80,0x30);
    *(undefined8 *)(lVar2 + 0x78) = 0;
    uVar1 = FUN_00460ca8(param_1);
    if (*param_1 != 0) {
      uVar1 = uVar1 & 0xffffffff;
      FUN_003d519c(*param_1);
    }
  }
  return uVar1;
}


// ===== 00461ab8  thunk_FUN_00460130 =====

undefined8
thunk_FUN_00460130(long *param_1,undefined8 param_2,ulong param_3,uint param_4,int param_5,
                  undefined8 param_6,ulong param_7)

{
  bool bVar1;
  __pid_t _Var2;
  int iVar3;
  undefined8 uVar4;
  time_t tVar5;
  
  uVar4 = FUN_0043eb70();
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  if ((*param_1 != 0) && (uVar4 = FUN_003d518c(), (int)uVar4 == 0)) {
    return uVar4;
  }
  iVar3 = (int)param_1[0x1e];
  if (iVar3 == 1) {
LAB_004601d8:
    if (*(uint *)(param_1 + 0x10) < param_4) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/rands/drbg.c",0x291,"ossl_prov_drbg_generate");
      uVar4 = 0xb5;
    }
    else if ((ulong)param_1[0x11] < param_3) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/rands/drbg.c",0x296,"ossl_prov_drbg_generate");
      uVar4 = 0xc4;
    }
    else if ((ulong)param_1[0x17] < param_7) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/rands/drbg.c",0x29a,"ossl_prov_drbg_generate");
      uVar4 = 0xb8;
    }
    else {
      _Var2 = getpid();
      bVar1 = (int)param_1[0xf] != _Var2;
      if (bVar1) {
        *(__pid_t *)(param_1 + 0xf) = _Var2;
      }
      if (*(uint *)((long)param_1 + 0xc4) != 0) {
        bVar1 = *(uint *)((long)param_1 + 0xc4) <= *(uint *)(param_1 + 0x18) || bVar1;
      }
      if (0 < param_1[0x1a]) {
        tVar5 = time((time_t *)0x0);
        if ((tVar5 < param_1[0x19]) || (param_1[0x1a] <= tVar5 - param_1[0x19])) {
          bVar1 = true;
        }
      }
      if ((param_1[6] != 0) && (iVar3 = FUN_00461074(param_1), iVar3 != (int)param_1[0x1c])) {
        bVar1 = true;
      }
      if (bVar1 || param_5 != 0) {
        iVar3 = FUN_00460d3c(param_1,param_5,0,0,param_6,param_7);
        if (iVar3 == 0) {
          FUN_00379868();
          FUN_0037995c("providers/implementations/rands/drbg.c",0x2b6,"ossl_prov_drbg_generate");
          uVar4 = 0xc5;
          goto LAB_004603f4;
        }
        param_7 = 0;
        param_6 = 0;
      }
      iVar3 = (*(code *)param_1[5])(param_1,param_2,param_3,param_6,param_7);
      if (iVar3 != 0) {
        uVar4 = 1;
        *(int *)(param_1 + 0x18) = (int)param_1[0x18] + 1;
        goto LAB_00460400;
      }
      *(undefined4 *)(param_1 + 0x1e) = 2;
      FUN_00379868();
      FUN_0037995c("providers/implementations/rands/drbg.c",0x2bf,"ossl_prov_drbg_generate");
      uVar4 = 0xbf;
    }
  }
  else {
    if (iVar3 == 2) {
      (*(code *)param_1[3])(param_1);
      iVar3 = (int)param_1[0x1e];
    }
    if (iVar3 == 0) {
      FUN_004604f4(param_1,(int)param_1[0x10],0,0,0);
      iVar3 = (int)param_1[0x1e];
    }
    if (iVar3 == 0) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/rands/drbg.c",0x28c,"ossl_prov_drbg_generate");
      uVar4 = 0xc1;
    }
    else {
      if (iVar3 != 2) goto LAB_004601d8;
      FUN_00379868();
      FUN_0037995c("providers/implementations/rands/drbg.c",0x288,"ossl_prov_drbg_generate");
      uVar4 = 0xc0;
    }
  }
LAB_004603f4:
  FUN_00379a5c(0x39,uVar4,0);
  uVar4 = 0;
LAB_00460400:
  if (*param_1 != 0) {
    FUN_003d519c(*param_1);
  }
  return uVar4;
}


// ===== 00461abc  thunk_FUN_00460cb8 =====

ulong thunk_FUN_00460cb8(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                        undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  
  if (*param_1 != 0) {
    param_2 = param_2 & 0xffffffff;
    uVar1 = FUN_003d518c();
    if ((int)uVar1 == 0) {
      return uVar1;
    }
  }
  uVar1 = FUN_00460d3c(param_1,param_2,param_3,param_4,param_5,param_6);
  if (*param_1 != 0) {
    uVar1 = uVar1 & 0xffffffff;
    FUN_003d519c(*param_1);
  }
  return uVar1;
}


// ===== 00461ac0  FUN_00461ac0 =====

undefined ** FUN_00461ac0(void)

{
  return &PTR_s_properties_0078c948;
}


// ===== 00461acc  FUN_00461acc =====

ulong FUN_00461acc(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  if ((*param_1 == 0) || (uVar1 = FUN_003d518c(), (int)uVar1 != 0)) {
    uVar1 = FUN_00463474(param_1,param_2);
    if (*param_1 != 0) {
      uVar1 = uVar1 & 0xffffffff;
      FUN_003d519c(*param_1);
    }
  }
  return uVar1;
}


// ===== 00461b20  FUN_00461b20 =====

undefined ** FUN_00461b20(void)

{
  return &PTR_s_cipher_0078ca38;
}


// ===== 00461b2c  FUN_00461b2c =====

ulong FUN_00461b2c(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int local_14;
  
  lVar4 = param_1[0x1f];
  local_14 = 0;
  uVar1 = FUN_0046178c(param_1,param_2,&local_14);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  if (local_14 != 0) {
    return 1;
  }
  if ((*param_1 != 0) && (uVar1 = FUN_003d517c(), (int)uVar1 == 0)) {
    return uVar1;
  }
  lVar2 = FUN_003cb140(param_2,"use_derivation_function");
  if ((lVar2 == 0) ||
     (uVar1 = thunk_FUN_003cb490(lVar2,*(undefined4 *)(lVar4 + 0x30)), (int)uVar1 != 0)) {
    lVar2 = FUN_003cb140(param_2,"cipher");
    if (lVar2 != 0) {
      lVar4 = *(long *)(lVar4 + 0x20);
      if (lVar4 == 0) {
        uVar1 = 0;
        lVar4 = *param_1;
        if (lVar4 == 0) {
          return 0;
        }
        goto LAB_00461bf0;
      }
      uVar3 = FUN_00389880(lVar4);
      uVar1 = FUN_003cd630(lVar2,uVar3);
      if ((int)uVar1 == 0) goto LAB_00461be8;
    }
    uVar1 = FUN_00461608(param_1,param_2);
  }
LAB_00461be8:
  lVar4 = *param_1;
  if (lVar4 == 0) {
    return uVar1;
  }
LAB_00461bf0:
  FUN_003d519c(lVar4);
  return uVar1 & 0xffffffff;
}


// ===== 00461c20  FUN_00461c20 =====

bool FUN_00461c20(long *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = param_1[0x1f];
  if ((*param_1 == 0) || (iVar2 = FUN_003d517c(), iVar2 != 0)) {
    if (((((((((((*(char *)(lVar3 + 0x34) == '\0') && (*(char *)(lVar3 + 0x35) == '\0')) &&
               (*(char *)(lVar3 + 0x36) == '\0')) &&
              (((*(char *)(lVar3 + 0x37) == '\0' && (*(char *)(lVar3 + 0x38) == '\0')) &&
               ((*(char *)(lVar3 + 0x39) == '\0' &&
                ((*(char *)(lVar3 + 0x3a) == '\0' && (*(char *)(lVar3 + 0x3b) == '\0')))))))) &&
             ((*(char *)(lVar3 + 0x3c) == '\0' &&
              (((*(char *)(lVar3 + 0x3d) == '\0' && (*(char *)(lVar3 + 0x3e) == '\0')) &&
               (*(char *)(lVar3 + 0x3f) == '\0')))))) &&
            (((*(char *)(lVar3 + 0x40) == '\0' && (*(char *)(lVar3 + 0x41) == '\0')) &&
             (((*(char *)(lVar3 + 0x42) == '\0' &&
               ((*(char *)(lVar3 + 0x43) == '\0' && (*(char *)(lVar3 + 0x44) == '\0')))) &&
              (*(char *)(lVar3 + 0x45) == '\0')))))) &&
           (((((*(char *)(lVar3 + 0x46) == '\0' && (*(char *)(lVar3 + 0x47) == '\0')) &&
              (*(char *)(lVar3 + 0x48) == '\0')) &&
             ((*(char *)(lVar3 + 0x49) == '\0' && (*(char *)(lVar3 + 0x4a) == '\0')))) &&
            ((*(char *)(lVar3 + 0x4b) == '\0' &&
             ((*(char *)(lVar3 + 0x4c) == '\0' && (*(char *)(lVar3 + 0x4d) == '\0')))))))) &&
          ((*(char *)(lVar3 + 0x4e) == '\0' &&
           (((((((*(char *)(lVar3 + 0x4f) == '\0' && (*(char *)(lVar3 + 0x50) == '\0')) &&
                (*(char *)(lVar3 + 0x51) == '\0')) &&
               (((*(char *)(lVar3 + 0x52) == '\0' && (*(char *)(lVar3 + 0x53) == '\0')) &&
                ((*(char *)(lVar3 + 0x54) == '\0' &&
                 ((*(char *)(lVar3 + 0x55) == '\0' && (*(char *)(lVar3 + 0x56) == '\0')))))))) &&
              (*(char *)(lVar3 + 0x57) == '\0')) &&
             (((*(char *)(lVar3 + 0x58) == '\0' && (*(char *)(lVar3 + 0x59) == '\0')) &&
              (*(char *)(lVar3 + 0x5a) == '\0')))) &&
            ((*(char *)(lVar3 + 0x5b) == '\0' && (*(char *)(lVar3 + 0x5c) == '\0')))))))) &&
         (((((*(char *)(lVar3 + 0x5d) == '\0' &&
             ((*(char *)(lVar3 + 0x5e) == '\0' && (*(char *)(lVar3 + 0x5f) == '\0')))) &&
            ((*(char *)(lVar3 + 0x60) == '\0' &&
             ((((((*(char *)(lVar3 + 0x61) == '\0' && (*(char *)(lVar3 + 0x62) == '\0')) &&
                 (*(char *)(lVar3 + 99) == '\0')) &&
                ((*(char *)(lVar3 + 100) == '\0' && (*(char *)(lVar3 + 0x65) == '\0')))) &&
               (*(char *)(lVar3 + 0x66) == '\0')) &&
              ((*(char *)(lVar3 + 0x67) == '\0' && (*(char *)(lVar3 + 0x68) == '\0')))))))) &&
           ((*(char *)(lVar3 + 0x69) == '\0' &&
            (((*(char *)(lVar3 + 0x6a) == '\0' && (*(char *)(lVar3 + 0x6b) == '\0')) &&
             (*(char *)(lVar3 + 0x6c) == '\0')))))) &&
          (((((*(char *)(lVar3 + 0x6d) == '\0' && (*(char *)(lVar3 + 0x6e) == '\0')) &&
             (*(char *)(lVar3 + 0x6f) == '\0')) &&
            (((*(char *)(lVar3 + 0x70) == '\0' && (*(char *)(lVar3 + 0x71) == '\0')) &&
             ((((*(char *)(lVar3 + 0x72) == '\0' &&
                (((*(char *)(lVar3 + 0x73) == '\0' && (*(char *)(lVar3 + 0x80) == '\0')) &&
                 (*(char *)(lVar3 + 0x81) == '\0')))) &&
               ((*(char *)(lVar3 + 0x82) == '\0' && (*(char *)(lVar3 + 0x83) == '\0')))) &&
              (*(char *)(lVar3 + 0x84) == '\0')))))) &&
           ((((*(char *)(lVar3 + 0x85) == '\0' && (*(char *)(lVar3 + 0x86) == '\0')) &&
             ((*(char *)(lVar3 + 0x87) == '\0' &&
              ((((*(char *)(lVar3 + 0x88) == '\0' && (*(char *)(lVar3 + 0x89) == '\0')) &&
                (*(char *)(lVar3 + 0x8a) == '\0')) &&
               ((*(char *)(lVar3 + 0x8b) == '\0' && (*(char *)(lVar3 + 0x8c) == '\0')))))))) &&
            (*(char *)(lVar3 + 0x8d) == '\0')))))))) &&
        (((((*(char *)(lVar3 + 0x8e) == '\0' && (*(char *)(lVar3 + 0x8f) == '\0')) &&
           (((*(char *)(lVar3 + 0x90) == '\0' &&
             (((*(char *)(lVar3 + 0x91) == '\0' && (*(char *)(lVar3 + 0x92) == '\0')) &&
              (*(char *)(lVar3 + 0x93) == '\0')))) &&
            ((((*(char *)(lVar3 + 0x94) == '\0' && (*(char *)(lVar3 + 0x95) == '\0')) &&
              (*(char *)(lVar3 + 0x96) == '\0')) &&
             ((*(char *)(lVar3 + 0x97) == '\0' && (*(char *)(lVar3 + 0x98) == '\0')))))))) &&
          ((*(char *)(lVar3 + 0x99) == '\0' &&
           (((*(char *)(lVar3 + 0x9a) == '\0' && (*(char *)(lVar3 + 0x9b) == '\0')) &&
            (*(char *)(lVar3 + 0x9c) == '\0')))))) &&
         (((*(char *)(lVar3 + 0x9d) == '\0' && (*(char *)(lVar3 + 0x9e) == '\0')) &&
          ((*(char *)(lVar3 + 0x9f) == '\0' &&
           (((*(char *)(lVar3 + 0xa0) == '\0' && (*(char *)(lVar3 + 0xa1) == '\0')) &&
            ((*(char *)(lVar3 + 0xa2) == '\0' &&
             ((((*(char *)(lVar3 + 0xa3) == '\0' && (*(char *)(lVar3 + 0xa4) == '\0')) &&
               (*(char *)(lVar3 + 0xa5) == '\0')) &&
              ((*(char *)(lVar3 + 0xa6) == '\0' && (*(char *)(lVar3 + 0xa7) == '\0'))))))))))))))))
       && (((*(char *)(lVar3 + 0xa8) == '\0' &&
            ((*(char *)(lVar3 + 0xa9) == '\0' && (*(char *)(lVar3 + 0xaa) == '\0')))) &&
           (((*(char *)(lVar3 + 0xab) == '\0' &&
             (((*(char *)(lVar3 + 0xac) == '\0' && (*(char *)(lVar3 + 0xad) == '\0')) &&
              (*(char *)(lVar3 + 0xae) == '\0')))) && (*(char *)(lVar3 + 0xaf) == '\0')))))) {
      bVar1 = *(long *)(lVar3 + 0x78) == 0;
      lVar3 = *param_1;
    }
    else {
      bVar1 = false;
      lVar3 = *param_1;
    }
    if (lVar3 != 0) {
      FUN_003d519c();
      return bVar1;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


// ===== 00462010  FUN_00462010 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00462010(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = FUN_003c96b8(0xb0,"providers/implementations/rands/drbg_ctr.c",0x26e);
  if (lVar5 != 0) {
    *(long *)(param_1 + 0xf8) = lVar5;
    uVar4 = _UNK_002007e8;
    uVar3 = _DAT_002007e0;
    uVar2 = _UNK_002001c8;
    uVar1 = _DAT_002001c0;
    *(undefined4 *)(lVar5 + 0x30) = 1;
    uVar6 = *(ulong *)(lVar5 + 0x28);
    *(undefined8 *)(param_1 + 0x90) = uVar4;
    *(undefined8 *)(param_1 + 0x88) = uVar3;
    *(undefined8 *)(param_1 + 0xa0) = uVar2;
    *(undefined8 *)(param_1 + 0x98) = uVar1;
    *(undefined8 *)(param_1 + 0xb0) = 0x7fffffff;
    *(undefined8 *)(param_1 + 0xa8) = 0x7fffffff;
    *(undefined8 *)(param_1 + 0xb8) = 0x7fffffff;
    if (uVar6 != 0) {
      *(ulong *)(param_1 + 0x90) = uVar6;
      *(ulong *)(param_1 + 0xa0) = uVar6 >> 1;
    }
  }
  return;
}


// ===== 00462090  FUN_00462090 =====

undefined8
FUN_00462090(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if (param_2 != 0) {
    puVar5 = *(undefined8 **)(param_1 + 0xf8);
    *(undefined8 *)((long)puVar5 + 0x5c) = 0;
    *(undefined8 *)((long)puVar5 + 0x54) = 0;
    *(undefined8 *)((long)puVar5 + 0x4c) = 0;
    *(undefined8 *)((long)puVar5 + 0x44) = 0;
    *(undefined8 *)((long)puVar5 + 0x3c) = 0;
    *(undefined8 *)((long)puVar5 + 0x34) = 0;
    iVar3 = FUN_003803c8(*puVar5,0,0,(undefined8 *)((long)puVar5 + 0x34),0,0xffffffff);
    if (iVar3 != 0) {
      uVar1 = *(byte *)((long)puVar5 + 99) + 1;
      uVar2 = (uint)*(byte *)((long)puVar5 + 0x62) + (uVar1 >> 8);
      *(char *)((long)puVar5 + 99) = (char)uVar1;
      uVar1 = (uint)*(byte *)((long)puVar5 + 0x61) + (uVar2 >> 8);
      *(char *)((long)puVar5 + 0x62) = (char)uVar2;
      uVar2 = (uint)*(byte *)(puVar5 + 0xc) + (uVar1 >> 8);
      *(char *)((long)puVar5 + 0x61) = (char)uVar1;
      uVar1 = (uint)*(byte *)((long)puVar5 + 0x5f) + (uVar2 >> 8);
      *(char *)(puVar5 + 0xc) = (char)uVar2;
      uVar2 = (uint)*(byte *)((long)puVar5 + 0x5e) + (uVar1 >> 8);
      *(char *)((long)puVar5 + 0x5f) = (char)uVar1;
      uVar1 = (uint)*(byte *)((long)puVar5 + 0x5d) + (uVar2 >> 8);
      *(char *)((long)puVar5 + 0x5e) = (char)uVar2;
      uVar2 = (uint)*(byte *)((long)puVar5 + 0x5c) + (uVar1 >> 8);
      *(char *)((long)puVar5 + 0x5d) = (char)uVar1;
      uVar1 = (uint)*(byte *)((long)puVar5 + 0x5b) + (uVar2 >> 8);
      *(char *)((long)puVar5 + 0x5c) = (char)uVar2;
      uVar2 = (uint)*(byte *)((long)puVar5 + 0x5a) + (uVar1 >> 8);
      *(char *)((long)puVar5 + 0x5b) = (char)uVar1;
      uVar1 = (uint)*(byte *)((long)puVar5 + 0x59) + (uVar2 >> 8);
      *(char *)((long)puVar5 + 0x5a) = (char)uVar2;
      uVar2 = (uint)*(byte *)(puVar5 + 0xb) + (uVar1 >> 8);
      *(char *)((long)puVar5 + 0x59) = (char)uVar1;
      uVar1 = (uint)*(byte *)((long)puVar5 + 0x57) + (uVar2 >> 8);
      *(char *)(puVar5 + 0xb) = (char)uVar2;
      uVar2 = (uint)*(byte *)((long)puVar5 + 0x56) + (uVar1 >> 8);
      *(char *)((long)puVar5 + 0x57) = (char)uVar1;
      iVar3 = (uint)*(byte *)((long)puVar5 + 0x55) + (uVar2 >> 8);
      *(char *)((long)puVar5 + 0x56) = (char)uVar2;
      *(char *)((long)puVar5 + 0x55) = (char)iVar3;
      *(char *)((long)puVar5 + 0x54) = *(char *)((long)puVar5 + 0x54) + (char)((uint)iVar3 >> 8);
      uVar4 = FUN_004627a4(param_1,param_2,param_3,param_6,param_7,param_4,param_5);
      return uVar4;
    }
  }
  return 0;
}


// ===== 0046220c  FUN_0046220c =====

void FUN_0046220c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xf8);
  FUN_003c89b8(lVar1 + 0x34,0x20);
  FUN_003c89b8(lVar1 + 0x54,0x10);
  FUN_003c89b8(lVar1 + 100,0x10);
  FUN_003c89b8(lVar1 + 0x80,0x30);
  *(undefined8 *)(lVar1 + 0x78) = 0;
  FUN_00460ca8(param_1);
  return;
}


// ===== 00462264  FUN_00462264 =====

undefined8 FUN_00462264(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_2 != 0) {
    lVar5 = *(long *)(param_1 + 0xf8);
    uVar1 = *(byte *)(lVar5 + 99) + 1;
    uVar2 = (uint)*(byte *)(lVar5 + 0x62) + (uVar1 >> 8);
    *(char *)(lVar5 + 99) = (char)uVar1;
    uVar1 = (uint)*(byte *)(lVar5 + 0x61) + (uVar2 >> 8);
    *(char *)(lVar5 + 0x62) = (char)uVar2;
    uVar2 = (uint)*(byte *)(lVar5 + 0x60) + (uVar1 >> 8);
    *(char *)(lVar5 + 0x61) = (char)uVar1;
    uVar1 = (uint)*(byte *)(lVar5 + 0x5f) + (uVar2 >> 8);
    *(char *)(lVar5 + 0x60) = (char)uVar2;
    uVar2 = (uint)*(byte *)(lVar5 + 0x5e) + (uVar1 >> 8);
    *(char *)(lVar5 + 0x5f) = (char)uVar1;
    uVar1 = (uint)*(byte *)(lVar5 + 0x5d) + (uVar2 >> 8);
    *(char *)(lVar5 + 0x5e) = (char)uVar2;
    uVar2 = (uint)*(byte *)(lVar5 + 0x5c) + (uVar1 >> 8);
    *(char *)(lVar5 + 0x5d) = (char)uVar1;
    uVar1 = (uint)*(byte *)(lVar5 + 0x5b) + (uVar2 >> 8);
    *(char *)(lVar5 + 0x5c) = (char)uVar2;
    uVar2 = (uint)*(byte *)(lVar5 + 0x5a) + (uVar1 >> 8);
    *(char *)(lVar5 + 0x5b) = (char)uVar1;
    uVar1 = (uint)*(byte *)(lVar5 + 0x59) + (uVar2 >> 8);
    *(char *)(lVar5 + 0x5a) = (char)uVar2;
    uVar2 = (uint)*(byte *)(lVar5 + 0x58) + (uVar1 >> 8);
    *(char *)(lVar5 + 0x59) = (char)uVar1;
    uVar1 = (uint)*(byte *)(lVar5 + 0x57) + (uVar2 >> 8);
    *(char *)(lVar5 + 0x58) = (char)uVar2;
    uVar2 = (uint)*(byte *)(lVar5 + 0x56) + (uVar1 >> 8);
    *(char *)(lVar5 + 0x57) = (char)uVar1;
    iVar3 = (uint)*(byte *)(lVar5 + 0x55) + (uVar2 >> 8);
    *(char *)(lVar5 + 0x56) = (char)uVar2;
    *(char *)(lVar5 + 0x55) = (char)iVar3;
    *(char *)(lVar5 + 0x54) = *(char *)(lVar5 + 0x54) + (char)((uint)iVar3 >> 8);
    uVar4 = FUN_004627a4();
    return uVar4;
  }
  return 0;
}


// ===== 00462340  FUN_00462340 =====

undefined8 FUN_00462340(long param_1,void *param_2,ulong param_3,long param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
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
  char cVar14;
  int iVar15;
  undefined8 uVar16;
  uint uVar17;
  long lVar18;
  char *pcVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  int local_44;
  
  lVar22 = *(long *)(param_1 + 0xf8);
  lVar18 = 0;
  if ((param_4 != 0) && (param_5 != 0)) {
    uVar1 = *(byte *)(lVar22 + 99) + 1;
    uVar17 = (uint)*(byte *)(lVar22 + 0x62) + (uVar1 >> 8);
    uVar20 = (uint)*(byte *)(lVar22 + 0x61) + (uVar17 >> 8);
    *(char *)(lVar22 + 99) = (char)uVar1;
    *(char *)(lVar22 + 0x62) = (char)uVar17;
    uVar1 = (uint)*(byte *)(lVar22 + 0x60) + (uVar20 >> 8);
    *(char *)(lVar22 + 0x61) = (char)uVar20;
    uVar17 = (uint)*(byte *)(lVar22 + 0x5f) + (uVar1 >> 8);
    *(char *)(lVar22 + 0x60) = (char)uVar1;
    uVar1 = (uint)*(byte *)(lVar22 + 0x5e) + (uVar17 >> 8);
    *(char *)(lVar22 + 0x5f) = (char)uVar17;
    uVar17 = (uint)*(byte *)(lVar22 + 0x5d) + (uVar1 >> 8);
    *(char *)(lVar22 + 0x5e) = (char)uVar1;
    uVar1 = (uint)*(byte *)(lVar22 + 0x5c) + (uVar17 >> 8);
    *(char *)(lVar22 + 0x5d) = (char)uVar17;
    uVar17 = (uint)*(byte *)(lVar22 + 0x5b) + (uVar1 >> 8);
    *(char *)(lVar22 + 0x5c) = (char)uVar1;
    uVar1 = (uint)*(byte *)(lVar22 + 0x5a) + (uVar17 >> 8);
    *(char *)(lVar22 + 0x5b) = (char)uVar17;
    uVar17 = (uint)*(byte *)(lVar22 + 0x59) + (uVar1 >> 8);
    *(char *)(lVar22 + 0x5a) = (char)uVar1;
    uVar1 = (uint)*(byte *)(lVar22 + 0x58) + (uVar17 >> 8);
    *(char *)(lVar22 + 0x59) = (char)uVar17;
    uVar17 = (uint)*(byte *)(lVar22 + 0x57) + (uVar1 >> 8);
    *(char *)(lVar22 + 0x58) = (char)uVar1;
    uVar1 = (uint)*(byte *)(lVar22 + 0x56) + (uVar17 >> 8);
    *(char *)(lVar22 + 0x57) = (char)uVar17;
    iVar15 = (uint)*(byte *)(lVar22 + 0x55) + (uVar1 >> 8);
    *(char *)(lVar22 + 0x56) = (char)uVar1;
    *(char *)(lVar22 + 0x55) = (char)iVar15;
    *(char *)(lVar22 + 0x54) = *(char *)(lVar22 + 0x54) + (char)((uint)iVar15 >> 8);
    uVar16 = FUN_004627a4(param_1,param_4,param_5,0,0,0,0);
    if ((int)uVar16 == 0) {
      return uVar16;
    }
    lVar18 = param_5;
    if (*(int *)(lVar22 + 0x30) != 0) {
      param_4 = 0;
      lVar18 = 1;
    }
  }
  uVar1 = *(byte *)(lVar22 + 99) + 1;
  uVar17 = (uint)*(byte *)(lVar22 + 0x62) + (uVar1 >> 8);
  *(char *)(lVar22 + 99) = (char)uVar1;
  uVar20 = (uint)*(byte *)(lVar22 + 0x61) + (uVar17 >> 8);
  pcVar19 = (char *)(lVar22 + 0x54);
  *(char *)(lVar22 + 0x62) = (char)uVar17;
  uVar2 = (uint)*(byte *)(lVar22 + 0x60) + (uVar20 >> 8);
  *(char *)(lVar22 + 0x61) = (char)uVar20;
  uVar3 = (uint)*(byte *)(lVar22 + 0x5f) + (uVar2 >> 8);
  *(char *)(lVar22 + 0x60) = (char)uVar2;
  uVar4 = (uint)*(byte *)(lVar22 + 0x5e) + (uVar3 >> 8);
  *(char *)(lVar22 + 0x5f) = (char)uVar3;
  uVar5 = (uint)*(byte *)(lVar22 + 0x5d) + (uVar4 >> 8);
  *(char *)(lVar22 + 0x5e) = (char)uVar4;
  uVar6 = (uint)*(byte *)(lVar22 + 0x5c) + (uVar5 >> 8);
  *(char *)(lVar22 + 0x5d) = (char)uVar5;
  uVar7 = (uint)*(byte *)(lVar22 + 0x5b) + (uVar6 >> 8);
  *(char *)(lVar22 + 0x5c) = (char)uVar6;
  uVar8 = (uint)*(byte *)(lVar22 + 0x5a) + (uVar7 >> 8);
  *(char *)(lVar22 + 0x5b) = (char)uVar7;
  uVar9 = (uint)*(byte *)(lVar22 + 0x59) + (uVar8 >> 8);
  *(char *)(lVar22 + 0x5a) = (char)uVar8;
  uVar10 = (uint)*(byte *)(lVar22 + 0x58) + (uVar9 >> 8);
  *(char *)(lVar22 + 0x59) = (char)uVar9;
  uVar11 = (uint)*(byte *)(lVar22 + 0x57) + (uVar10 >> 8);
  *(char *)(lVar22 + 0x58) = (char)uVar10;
  uVar12 = (uint)*(byte *)(lVar22 + 0x56) + (uVar11 >> 8);
  *(char *)(lVar22 + 0x57) = (char)uVar11;
  uVar13 = (uint)*(byte *)(lVar22 + 0x55) + (uVar12 >> 8);
  *(char *)(lVar22 + 0x56) = (char)uVar12;
  cVar14 = *pcVar19 + (char)(uVar13 >> 8);
  *(char *)(lVar22 + 0x55) = (char)uVar13;
  *pcVar19 = cVar14;
  if (param_3 == 0) {
    uVar1 = (uVar1 & 0xff) + 1;
    *(char *)(lVar22 + 99) = (char)uVar1;
    uVar1 = (uVar1 >> 8) + (uVar17 & 0xff);
    *(char *)(lVar22 + 0x62) = (char)uVar1;
    uVar1 = (uVar1 >> 8) + (uVar20 & 0xff);
    *(char *)(lVar22 + 0x61) = (char)uVar1;
    uVar1 = (uVar1 >> 8) + (uVar2 & 0xff);
    *(char *)(lVar22 + 0x60) = (char)uVar1;
    uVar1 = (uVar1 >> 8) + (uVar3 & 0xff);
    *(char *)(lVar22 + 0x5f) = (char)uVar1;
    uVar1 = (uVar1 >> 8) + (uVar4 & 0xff);
    *(char *)(lVar22 + 0x5e) = (char)uVar1;
    uVar1 = (uVar1 >> 8) + (uVar5 & 0xff);
    *(char *)(lVar22 + 0x5d) = (char)uVar1;
    uVar1 = (uVar1 >> 8) + (uVar6 & 0xff);
    *(char *)(lVar22 + 0x5c) = (char)uVar1;
    uVar1 = (uVar1 >> 8) + (uVar7 & 0xff);
    *(char *)(lVar22 + 0x5b) = (char)uVar1;
    uVar1 = (uVar1 >> 8) + (uVar8 & 0xff);
    *(char *)(lVar22 + 0x5a) = (char)uVar1;
    uVar1 = (uVar1 >> 8) + (uVar9 & 0xff);
    *(char *)(lVar22 + 0x59) = (char)uVar1;
    uVar1 = (uVar1 >> 8) + (uVar10 & 0xff);
    *(char *)(lVar22 + 0x58) = (char)uVar1;
    uVar1 = (uVar1 >> 8) + (uVar11 & 0xff);
    *(char *)(lVar22 + 0x57) = (char)uVar1;
    uVar1 = (uVar1 >> 8) + (uVar12 & 0xff);
    *(char *)(lVar22 + 0x56) = (char)uVar1;
    iVar15 = (uVar1 >> 8) + (uVar13 & 0xff);
    *(char *)(lVar22 + 0x55) = (char)iVar15;
    *(char *)(lVar22 + 0x54) = cVar14 + (char)((uint)iVar15 >> 8);
    uVar16 = FUN_004627a4(param_1,param_4,lVar18,0,0,0,0);
    return uVar16;
  }
  memset(param_2,0,param_3);
  do {
    uVar16 = FUN_003803c8(*(undefined8 *)(lVar22 + 8),0,0,0,pcVar19,0xffffffff);
    if ((int)uVar16 == 0) {
      return uVar16;
    }
    uVar21 = param_3;
    if (0x3fffffff < param_3) {
      uVar21 = 0x40000000;
    }
    uVar20 = (uint)uVar21;
    uVar1 = (*(uint *)(lVar22 + 0x60) & 0xff00ff00) >> 8 |
            (*(uint *)(lVar22 + 0x60) & 0xff00ff) << 8;
    uVar2 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = uVar20 + 0xf >> 4;
    uVar17 = uVar2 + uVar1;
    if (CARRY4(uVar2,uVar1)) {
      uVar1 = *(byte *)(lVar22 + 0x5f) + 1;
      uVar3 = (uint)*(byte *)(lVar22 + 0x5e) + (uVar1 >> 8);
      *(char *)(lVar22 + 0x5f) = (char)uVar1;
      if (uVar17 != 0) {
        uVar20 = uVar2 * -0x10;
      }
      uVar21 = (ulong)uVar20;
      uVar17 = 0;
      uVar1 = (uint)*(byte *)(lVar22 + 0x5d) + (uVar3 >> 8);
      *(char *)(lVar22 + 0x5e) = (char)uVar3;
      uVar20 = (uint)*(byte *)(lVar22 + 0x5c) + (uVar1 >> 8);
      *(char *)(lVar22 + 0x5d) = (char)uVar1;
      uVar1 = (uint)*(byte *)(lVar22 + 0x5b) + (uVar20 >> 8);
      *(char *)(lVar22 + 0x5c) = (char)uVar20;
      uVar20 = (uint)*(byte *)(lVar22 + 0x5a) + (uVar1 >> 8);
      *(char *)(lVar22 + 0x5b) = (char)uVar1;
      uVar1 = (uint)*(byte *)(lVar22 + 0x59) + (uVar20 >> 8);
      *(char *)(lVar22 + 0x5a) = (char)uVar20;
      uVar20 = (uint)*(byte *)(lVar22 + 0x58) + (uVar1 >> 8);
      *(char *)(lVar22 + 0x59) = (char)uVar1;
      uVar1 = (uint)*(byte *)(lVar22 + 0x57) + (uVar20 >> 8);
      *(char *)(lVar22 + 0x58) = (char)uVar20;
      uVar20 = (uint)*(byte *)(lVar22 + 0x56) + (uVar1 >> 8);
      *(char *)(lVar22 + 0x57) = (char)uVar1;
      iVar15 = (uint)*(byte *)(lVar22 + 0x55) + (uVar20 >> 8);
      *(char *)(lVar22 + 0x56) = (char)uVar20;
      *(char *)(lVar22 + 0x55) = (char)iVar15;
      *(char *)(lVar22 + 0x54) = *(char *)(lVar22 + 0x54) + (char)((uint)iVar15 >> 8);
    }
    uVar1 = (uVar17 & 0xff00ff00) >> 8 | (uVar17 & 0xff00ff) << 8;
    *(uint *)(lVar22 + 0x60) = uVar1 >> 0x10 | uVar1 << 0x10;
    iVar15 = FUN_003803d0(*(undefined8 *)(lVar22 + 8),param_2,&local_44,param_2,uVar21 & 0xffffffff)
    ;
    if (iVar15 == 0) {
      return 0;
    }
    iVar15 = (int)uVar21;
    if (local_44 != iVar15) {
      return 0;
    }
    param_3 = param_3 - (long)iVar15;
    param_2 = (void *)((long)param_2 + (long)iVar15);
  } while (param_3 != 0);
  uVar16 = FUN_004627a4(param_1,param_4,lVar18,0,0,0,0);
  return uVar16;
}


// ===== 004627a4  FUN_004627a4 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_004627a4(long param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,long param_6
                  ,long param_7)

{
  uint uVar1;
  void *__dest;
  uint uVar2;
  uint uVar3;
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
  char cVar16;
  ulong uVar17;
  ulong uVar18;
  bool bVar19;
  int iVar20;
  int iVar21;
  undefined8 *puVar22;
  byte *pbVar23;
  long lVar24;
  ulong uVar25;
  byte *pbVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  long lVar32;
  undefined8 *puVar33;
  ulong uVar34;
  undefined8 extraout_d0;
  undefined8 uVar35;
  undefined8 extraout_var;
  byte bVar36;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  undefined8 uVar37;
  undefined8 uVar38;
  byte bVar44;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  undefined8 uVar45;
  byte bVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 auStack_d0 [6];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  int local_6c;
  int local_68;
  int local_64;
  
  puVar33 = *(undefined8 **)(param_1 + 0xf8);
  uVar1 = *(byte *)((long)puVar33 + 99) + 1;
  uVar2 = (uint)*(byte *)((long)puVar33 + 0x62) + (uVar1 >> 8);
  uStack_98 = *(undefined8 *)((long)puVar33 + 0x5c);
  local_a0 = *(undefined8 *)((long)puVar33 + 0x54);
  uVar3 = (uint)*(byte *)((long)puVar33 + 0x61) + (uVar2 >> 8);
  *(char *)((long)puVar33 + 99) = (char)uVar1;
  *(char *)((long)puVar33 + 0x62) = (char)uVar2;
  uVar4 = (uint)*(byte *)(puVar33 + 0xc) + (uVar3 >> 8);
  *(char *)((long)puVar33 + 0x61) = (char)uVar3;
  puVar30 = (undefined8 *)((long)puVar33 + 0x54);
  local_6c = 0x10;
  uVar5 = (uint)*(byte *)((long)puVar33 + 0x5f) + (uVar4 >> 8);
  *(char *)(puVar33 + 0xc) = (char)uVar4;
  uVar6 = (uint)*(byte *)((long)puVar33 + 0x5e) + (uVar5 >> 8);
  *(char *)((long)puVar33 + 0x5f) = (char)uVar5;
  uVar7 = (uint)*(byte *)((long)puVar33 + 0x5d) + (uVar6 >> 8);
  *(char *)((long)puVar33 + 0x5e) = (char)uVar6;
  uVar8 = (uint)*(byte *)((long)puVar33 + 0x5c) + (uVar7 >> 8);
  *(char *)((long)puVar33 + 0x5d) = (char)uVar7;
  uVar9 = (uint)*(byte *)((long)puVar33 + 0x5b) + (uVar8 >> 8);
  *(char *)((long)puVar33 + 0x5c) = (char)uVar8;
  uVar10 = (uint)*(byte *)((long)puVar33 + 0x5a) + (uVar9 >> 8);
  *(char *)((long)puVar33 + 0x5b) = (char)uVar9;
  uVar11 = (uint)*(byte *)((long)puVar33 + 0x59) + (uVar10 >> 8);
  *(char *)((long)puVar33 + 0x5a) = (char)uVar10;
  uVar12 = (uint)*(byte *)(puVar33 + 0xb) + (uVar11 >> 8);
  *(char *)((long)puVar33 + 0x59) = (char)uVar11;
  uVar13 = (uint)*(byte *)((long)puVar33 + 0x57) + (uVar12 >> 8);
  *(char *)(puVar33 + 0xb) = (char)uVar12;
  uVar14 = (uint)*(byte *)((long)puVar33 + 0x56) + (uVar13 >> 8);
  *(char *)((long)puVar33 + 0x57) = (char)uVar13;
  uVar15 = (uint)*(byte *)((long)puVar33 + 0x55) + (uVar14 >> 8);
  *(char *)((long)puVar33 + 0x56) = (char)uVar14;
  cVar16 = *(char *)((long)puVar33 + 0x54) + (char)(uVar15 >> 8);
  *(char *)((long)puVar33 + 0x55) = (char)uVar15;
  *(char *)((long)puVar33 + 0x54) = cVar16;
  uStack_88 = *(undefined8 *)((long)puVar33 + 0x5c);
  uStack_90 = *(undefined8 *)((long)puVar33 + 0x54);
  if (puVar33[5] == 0x10) {
    iVar21 = 0x20;
  }
  else {
    iVar21 = 0x30;
    uVar1 = (uVar1 & 0xff) + 1;
    *(char *)((long)puVar33 + 99) = (char)uVar1;
    uVar1 = (uVar1 >> 8) + (uVar2 & 0xff);
    *(char *)((long)puVar33 + 0x62) = (char)uVar1;
    uVar1 = (uVar1 >> 8) + (uVar3 & 0xff);
    *(char *)((long)puVar33 + 0x61) = (char)uVar1;
    uVar1 = (uVar1 >> 8) + (uVar4 & 0xff);
    *(char *)(puVar33 + 0xc) = (char)uVar1;
    uVar1 = (uVar1 >> 8) + (uVar5 & 0xff);
    *(char *)((long)puVar33 + 0x5f) = (char)uVar1;
    uVar1 = (uVar1 >> 8) + (uVar6 & 0xff);
    *(char *)((long)puVar33 + 0x5e) = (char)uVar1;
    uVar1 = (uVar1 >> 8) + (uVar7 & 0xff);
    *(char *)((long)puVar33 + 0x5d) = (char)uVar1;
    uVar1 = (uVar1 >> 8) + (uVar8 & 0xff);
    *(char *)((long)puVar33 + 0x5c) = (char)uVar1;
    uVar1 = (uVar1 >> 8) + (uVar9 & 0xff);
    *(char *)((long)puVar33 + 0x5b) = (char)uVar1;
    uVar1 = (uVar1 >> 8) + (uVar10 & 0xff);
    *(char *)((long)puVar33 + 0x5a) = (char)uVar1;
    uVar1 = (uVar1 >> 8) + (uVar11 & 0xff);
    *(char *)((long)puVar33 + 0x59) = (char)uVar1;
    uVar1 = (uVar1 >> 8) + (uVar12 & 0xff);
    *(char *)(puVar33 + 0xb) = (char)uVar1;
    uVar1 = (uVar1 >> 8) + (uVar13 & 0xff);
    *(char *)((long)puVar33 + 0x57) = (char)uVar1;
    uVar1 = (uVar1 >> 8) + (uVar14 & 0xff);
    *(char *)((long)puVar33 + 0x56) = (char)uVar1;
    iVar20 = (uVar1 >> 8) + (uVar15 & 0xff);
    *(char *)((long)puVar33 + 0x55) = (char)iVar20;
    *(char *)((long)puVar33 + 0x54) = cVar16 + (char)((uint)iVar20 >> 8);
    uStack_78 = *(undefined8 *)((long)puVar33 + 0x5c);
    local_80 = *puVar30;
  }
  iVar20 = FUN_003803d0(*puVar33,auStack_d0,&local_6c,&local_a0,iVar21);
  if (iVar20 == 0) {
    return 0;
  }
  if (local_6c != iVar21) {
    return 0;
  }
  uVar34 = puVar33[5];
  __dest = (void *)((long)puVar33 + 0x34);
  memcpy(__dest,auStack_d0,uVar34);
  uVar35 = *(undefined8 *)((long)auStack_d0 + uVar34);
  *(undefined8 *)((long)puVar33 + 0x5c) = *(undefined8 *)((long)auStack_d0 + uVar34 + 8);
  *puVar30 = uVar35;
  uVar38 = _UNK_00200178;
  uVar35 = _DAT_00200170;
  if (*(int *)(puVar33 + 6) == 0) {
    if ((param_2 != 0) && (param_3 != 0)) {
      uVar25 = uVar34;
      if (param_3 <= uVar34) {
        uVar25 = param_3;
      }
      if (uVar34 != 0) {
        if ((uVar25 < 8) ||
           ((__dest < (void *)(param_2 + uVar25) && (param_2 < (long)puVar33 + uVar25 + 0x34)))) {
          uVar34 = 0;
LAB_00462a7c:
          lVar24 = uVar25 - uVar34;
          pbVar23 = (byte *)(param_2 + uVar34);
          pbVar26 = (byte *)((long)puVar33 + uVar34 + 0x34);
          do {
            lVar24 = lVar24 + -1;
            *pbVar26 = *pbVar26 ^ *pbVar23;
            pbVar23 = pbVar23 + 1;
            pbVar26 = pbVar26 + 1;
          } while (lVar24 != 0);
        }
        else if (uVar25 < 0x20) {
          uVar28 = 0;
LAB_0046302c:
          uVar34 = uVar25 & 0xfffffffffffffff8;
          lVar24 = uVar28 - uVar34;
          puVar22 = (undefined8 *)(param_2 + uVar28);
          puVar31 = (undefined8 *)((long)puVar33 + uVar28 + 0x34);
          do {
            uVar35 = *puVar22;
            uVar38 = *puVar31;
            lVar24 = lVar24 + 8;
            *puVar31 = CONCAT17((byte)((ulong)uVar38 >> 0x38) ^ (byte)((ulong)uVar35 >> 0x38),
                                CONCAT16((byte)((ulong)uVar38 >> 0x30) ^
                                         (byte)((ulong)uVar35 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar38 >> 0x28) ^
                                                  (byte)((ulong)uVar35 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar38 >> 0x20) ^
                                                           (byte)((ulong)uVar35 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar38 >> 0x18) ^
                                                                    (byte)((ulong)uVar35 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar38 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar35 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar38 >> 8) ^ (byte)((ulong)uVar35 >> 8),
                                                  (byte)uVar38 ^ (byte)uVar35)))))));
            puVar22 = puVar22 + 1;
            puVar31 = puVar31 + 1;
          } while (lVar24 != 0);
          if (uVar25 != uVar34) goto LAB_00462a7c;
        }
        else {
          uVar34 = uVar25 & 0xffffffffffffffe0;
          puVar22 = (undefined8 *)(param_2 + 0x10);
          puVar31 = (undefined8 *)((long)puVar33 + 0x44);
          uVar28 = uVar34;
          do {
            uVar38 = puVar31[-1];
            uVar35 = puVar31[-2];
            uVar56 = puVar31[1];
            uVar55 = *puVar31;
            uVar28 = uVar28 - 0x20;
            uVar45 = puVar22[-1];
            uVar37 = puVar22[-2];
            uVar54 = puVar22[1];
            uVar53 = *puVar22;
            puVar22 = puVar22 + 4;
            puVar31[-1] = CONCAT17((byte)((ulong)uVar38 >> 0x38) ^ (byte)((ulong)uVar45 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar38 >> 0x30) ^
                                            (byte)((ulong)uVar45 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar38 >> 0x28) ^
                                                     (byte)((ulong)uVar45 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar38 >> 0x20) ^
                                                              (byte)((ulong)uVar45 >> 0x20),
                                                              CONCAT13((byte)((ulong)uVar38 >> 0x18)
                                                                       ^ (byte)((ulong)uVar45 >>
                                                                               0x18),
                                                                       CONCAT12((byte)((ulong)uVar38
                                                                                      >> 0x10) ^
                                                                                (byte)((ulong)uVar45
                                                                                      >> 0x10),
                                                                                CONCAT11((byte)((
                                                  ulong)uVar38 >> 8) ^ (byte)((ulong)uVar45 >> 8),
                                                  (byte)uVar38 ^ (byte)uVar45)))))));
            puVar31[-2] = CONCAT17((byte)((ulong)uVar35 >> 0x38) ^ (byte)((ulong)uVar37 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar35 >> 0x30) ^
                                            (byte)((ulong)uVar37 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar35 >> 0x28) ^
                                                     (byte)((ulong)uVar37 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar35 >> 0x20) ^
                                                              (byte)((ulong)uVar37 >> 0x20),
                                                              CONCAT13((byte)((ulong)uVar35 >> 0x18)
                                                                       ^ (byte)((ulong)uVar37 >>
                                                                               0x18),
                                                                       CONCAT12((byte)((ulong)uVar35
                                                                                      >> 0x10) ^
                                                                                (byte)((ulong)uVar37
                                                                                      >> 0x10),
                                                                                CONCAT11((byte)((
                                                  ulong)uVar35 >> 8) ^ (byte)((ulong)uVar37 >> 8),
                                                  (byte)uVar35 ^ (byte)uVar37)))))));
            puVar31[1] = CONCAT17((byte)((ulong)uVar56 >> 0x38) ^ (byte)((ulong)uVar54 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar56 >> 0x30) ^
                                           (byte)((ulong)uVar54 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar56 >> 0x28) ^
                                                    (byte)((ulong)uVar54 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar56 >> 0x20) ^
                                                             (byte)((ulong)uVar54 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar56 >> 0x18)
                                                                      ^ (byte)((ulong)uVar54 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar56
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar54
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar56 >> 8) ^ (byte)((ulong)uVar54 >> 8),
                                                  (byte)uVar56 ^ (byte)uVar54)))))));
            *puVar31 = CONCAT17((byte)((ulong)uVar55 >> 0x38) ^ (byte)((ulong)uVar53 >> 0x38),
                                CONCAT16((byte)((ulong)uVar55 >> 0x30) ^
                                         (byte)((ulong)uVar53 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar55 >> 0x28) ^
                                                  (byte)((ulong)uVar53 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar55 >> 0x20) ^
                                                           (byte)((ulong)uVar53 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar55 >> 0x18) ^
                                                                    (byte)((ulong)uVar53 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar55 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar53 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar55 >> 8) ^ (byte)((ulong)uVar53 >> 8),
                                                  (byte)uVar55 ^ (byte)uVar53)))))));
            puVar31 = puVar31 + 4;
          } while (uVar28 != 0);
          if (uVar25 != uVar34) {
            uVar28 = uVar34;
            if ((uVar25 & 0x18) == 0) goto LAB_00462a7c;
            goto LAB_0046302c;
          }
        }
        uVar34 = puVar33[5];
      }
      uVar25 = param_3 - uVar34;
      if (uVar34 <= param_3 && uVar25 != 0) {
        uVar28 = uVar25;
        if (0xf < uVar25) {
          uVar28 = 0x10;
        }
        if (uVar28 < 2) {
          uVar28 = 1;
        }
        if ((uVar25 < 8) ||
           ((puVar30 < (undefined8 *)(param_2 + uVar34 + uVar28) &&
            (param_2 + uVar34 < (long)puVar33 + uVar28 + 0x54)))) {
          uVar25 = 0;
        }
        else {
          if (uVar25 < 0x10) {
            uVar29 = 0;
          }
          else {
            uVar25 = uVar28 & 0x10;
            uVar27 = uVar25;
            puVar22 = puVar30;
            uVar29 = param_2;
            do {
              uVar38 = ((undefined8 *)(uVar29 + uVar34))[1];
              uVar35 = *(undefined8 *)(uVar29 + uVar34);
              uVar45 = puVar22[1];
              uVar37 = *puVar22;
              uVar27 = uVar27 - 0x10;
              uVar29 = uVar29 + 0x10;
              puVar22[1] = CONCAT17((byte)((ulong)uVar45 >> 0x38) ^ (byte)((ulong)uVar38 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar45 >> 0x30) ^
                                             (byte)((ulong)uVar38 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar45 >> 0x28) ^
                                                      (byte)((ulong)uVar38 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar45 >> 0x20) ^
                                                               (byte)((ulong)uVar38 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar45 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar38 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar45 >> 0x10) ^
                                                           (byte)((ulong)uVar38 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar45 >> 8) ^
                                                                    (byte)((ulong)uVar38 >> 8),
                                                                    (byte)uVar45 ^ (byte)uVar38)))))
                                            ));
              *puVar22 = CONCAT17((byte)((ulong)uVar37 >> 0x38) ^ (byte)((ulong)uVar35 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar37 >> 0x30) ^
                                           (byte)((ulong)uVar35 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar37 >> 0x28) ^
                                                    (byte)((ulong)uVar35 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar37 >> 0x20) ^
                                                             (byte)((ulong)uVar35 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar37 >> 0x18)
                                                                      ^ (byte)((ulong)uVar35 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar37
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar35
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar37 >> 8) ^ (byte)((ulong)uVar35 >> 8),
                                                  (byte)uVar37 ^ (byte)uVar35)))))));
              puVar22 = puVar22 + 2;
            } while (uVar27 != 0);
            if (uVar28 == uVar25) goto LAB_00462c80;
            uVar29 = uVar25;
            if (((uint)uVar28 >> 3 & 1) == 0) goto LAB_00462af0;
          }
          uVar25 = uVar28 & 0x18;
          lVar32 = param_2 + uVar29;
          lVar24 = uVar29 - uVar25;
          puVar22 = (undefined8 *)((long)puVar33 + uVar29 + 0x54);
          do {
            uVar35 = *(undefined8 *)(lVar32 + uVar34);
            uVar38 = *puVar22;
            lVar24 = lVar24 + 8;
            lVar32 = lVar32 + 8;
            *puVar22 = CONCAT17((byte)((ulong)uVar38 >> 0x38) ^ (byte)((ulong)uVar35 >> 0x38),
                                CONCAT16((byte)((ulong)uVar38 >> 0x30) ^
                                         (byte)((ulong)uVar35 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar38 >> 0x28) ^
                                                  (byte)((ulong)uVar35 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar38 >> 0x20) ^
                                                           (byte)((ulong)uVar35 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar38 >> 0x18) ^
                                                                    (byte)((ulong)uVar35 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar38 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar35 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar38 >> 8) ^ (byte)((ulong)uVar35 >> 8),
                                                  (byte)uVar38 ^ (byte)uVar35)))))));
            puVar22 = puVar22 + 1;
          } while (lVar24 != 0);
          if (uVar28 == uVar25) goto LAB_00462c80;
        }
LAB_00462af0:
        lVar32 = uVar28 - uVar25;
        lVar24 = param_2 + uVar25;
        pbVar23 = (byte *)((long)puVar33 + uVar25 + 0x54);
        do {
          pbVar26 = (byte *)(lVar24 + uVar34);
          lVar32 = lVar32 + -1;
          lVar24 = lVar24 + 1;
          *pbVar23 = *pbVar23 ^ *pbVar26;
          pbVar23 = pbVar23 + 1;
        } while (lVar32 != 0);
      }
    }
LAB_00462c80:
    if ((param_4 == 0) || (param_5 == 0)) goto LAB_00462fa0;
    uVar25 = uVar34;
    if (param_5 <= uVar34) {
      uVar25 = param_5;
    }
    if (uVar34 == 0) {
      uVar34 = 0;
      if (param_5 == 0) goto LAB_00462fa0;
    }
    else {
      if ((uVar25 < 8) ||
         ((__dest < (void *)(param_4 + uVar25) && (param_4 < (long)puVar33 + uVar25 + 0x34)))) {
        uVar34 = 0;
LAB_00462cbc:
        lVar24 = uVar25 - uVar34;
        pbVar23 = (byte *)(param_4 + uVar34);
        pbVar26 = (byte *)((long)puVar33 + uVar34 + 0x34);
        do {
          lVar24 = lVar24 + -1;
          *pbVar26 = *pbVar26 ^ *pbVar23;
          pbVar23 = pbVar23 + 1;
          pbVar26 = pbVar26 + 1;
        } while (lVar24 != 0);
      }
      else if (uVar25 < 0x20) {
        uVar28 = 0;
LAB_004630ac:
        uVar34 = uVar25 & 0xfffffffffffffff8;
        lVar24 = uVar28 - uVar34;
        puVar22 = (undefined8 *)(param_4 + uVar28);
        puVar31 = (undefined8 *)((long)puVar33 + uVar28 + 0x34);
        do {
          uVar35 = *puVar22;
          uVar38 = *puVar31;
          lVar24 = lVar24 + 8;
          *puVar31 = CONCAT17((byte)((ulong)uVar38 >> 0x38) ^ (byte)((ulong)uVar35 >> 0x38),
                              CONCAT16((byte)((ulong)uVar38 >> 0x30) ^ (byte)((ulong)uVar35 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar38 >> 0x28) ^
                                                 (byte)((ulong)uVar35 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar38 >> 0x20) ^
                                                          (byte)((ulong)uVar35 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar38 >> 0x18) ^
                                                                   (byte)((ulong)uVar35 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar38 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar35 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar38 >> 8) ^ (byte)((ulong)uVar35 >> 8),
                                                  (byte)uVar38 ^ (byte)uVar35)))))));
          puVar22 = puVar22 + 1;
          puVar31 = puVar31 + 1;
        } while (lVar24 != 0);
        if (uVar25 != uVar34) goto LAB_00462cbc;
      }
      else {
        uVar34 = uVar25 & 0xffffffffffffffe0;
        puVar22 = (undefined8 *)(param_4 + 0x10);
        puVar31 = (undefined8 *)((long)puVar33 + 0x44);
        uVar28 = uVar34;
        do {
          uVar38 = puVar31[-1];
          uVar35 = puVar31[-2];
          uVar56 = puVar31[1];
          uVar55 = *puVar31;
          uVar28 = uVar28 - 0x20;
          uVar45 = puVar22[-1];
          uVar37 = puVar22[-2];
          uVar54 = puVar22[1];
          uVar53 = *puVar22;
          puVar22 = puVar22 + 4;
          puVar31[-1] = CONCAT17((byte)((ulong)uVar38 >> 0x38) ^ (byte)((ulong)uVar45 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar38 >> 0x30) ^
                                          (byte)((ulong)uVar45 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar38 >> 0x28) ^
                                                   (byte)((ulong)uVar45 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar38 >> 0x20) ^
                                                            (byte)((ulong)uVar45 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar38 >> 0x18) ^
                                                                     (byte)((ulong)uVar45 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar38
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar45
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar38 >> 8) ^ (byte)((ulong)uVar45 >> 8),
                                                  (byte)uVar38 ^ (byte)uVar45)))))));
          puVar31[-2] = CONCAT17((byte)((ulong)uVar35 >> 0x38) ^ (byte)((ulong)uVar37 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar35 >> 0x30) ^
                                          (byte)((ulong)uVar37 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar35 >> 0x28) ^
                                                   (byte)((ulong)uVar37 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar35 >> 0x20) ^
                                                            (byte)((ulong)uVar37 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar35 >> 0x18) ^
                                                                     (byte)((ulong)uVar37 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar35
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar37
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar35 >> 8) ^ (byte)((ulong)uVar37 >> 8),
                                                  (byte)uVar35 ^ (byte)uVar37)))))));
          puVar31[1] = CONCAT17((byte)((ulong)uVar56 >> 0x38) ^ (byte)((ulong)uVar54 >> 0x38),
                                CONCAT16((byte)((ulong)uVar56 >> 0x30) ^
                                         (byte)((ulong)uVar54 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar56 >> 0x28) ^
                                                  (byte)((ulong)uVar54 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar56 >> 0x20) ^
                                                           (byte)((ulong)uVar54 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar56 >> 0x18) ^
                                                                    (byte)((ulong)uVar54 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar56 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar54 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar56 >> 8) ^ (byte)((ulong)uVar54 >> 8),
                                                  (byte)uVar56 ^ (byte)uVar54)))))));
          *puVar31 = CONCAT17((byte)((ulong)uVar55 >> 0x38) ^ (byte)((ulong)uVar53 >> 0x38),
                              CONCAT16((byte)((ulong)uVar55 >> 0x30) ^ (byte)((ulong)uVar53 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar55 >> 0x28) ^
                                                 (byte)((ulong)uVar53 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar55 >> 0x20) ^
                                                          (byte)((ulong)uVar53 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar55 >> 0x18) ^
                                                                   (byte)((ulong)uVar53 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar55 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar53 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar55 >> 8) ^ (byte)((ulong)uVar53 >> 8),
                                                  (byte)uVar55 ^ (byte)uVar53)))))));
          puVar31 = puVar31 + 4;
        } while (uVar28 != 0);
        if (uVar25 != uVar34) {
          uVar28 = uVar34;
          if ((uVar25 & 0x18) == 0) goto LAB_00462cbc;
          goto LAB_004630ac;
        }
      }
      uVar34 = puVar33[5];
      bVar19 = param_5 < uVar34;
      param_5 = param_5 - uVar34;
      if (bVar19 || param_5 == 0) goto LAB_00462fa0;
    }
    uVar25 = param_5;
    if (0xf < param_5) {
      uVar25 = 0x10;
    }
    if (uVar25 < 2) {
      uVar25 = 1;
    }
    if ((param_5 < 8) ||
       ((puVar22 = (undefined8 *)(param_4 + uVar34),
        puVar30 < (undefined8 *)((long)puVar22 + uVar25) &&
        (puVar22 < (undefined8 *)((long)puVar33 + uVar25 + 0x54))))) {
      uVar28 = 0;
    }
    else {
      if (param_5 < 0x10) {
        uVar29 = 0;
      }
      else {
        uVar28 = uVar25 & 0x10;
        uVar29 = uVar28;
        do {
          uVar38 = puVar22[1];
          uVar35 = *puVar22;
          uVar45 = puVar30[1];
          uVar37 = *puVar30;
          uVar29 = uVar29 - 0x10;
          puVar30[1] = CONCAT17((byte)((ulong)uVar45 >> 0x38) ^ (byte)((ulong)uVar38 >> 0x38),
                                CONCAT16((byte)((ulong)uVar45 >> 0x30) ^
                                         (byte)((ulong)uVar38 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar45 >> 0x28) ^
                                                  (byte)((ulong)uVar38 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar45 >> 0x20) ^
                                                           (byte)((ulong)uVar38 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar45 >> 0x18) ^
                                                                    (byte)((ulong)uVar38 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar45 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar38 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar45 >> 8) ^ (byte)((ulong)uVar38 >> 8),
                                                  (byte)uVar45 ^ (byte)uVar38)))))));
          *puVar30 = CONCAT17((byte)((ulong)uVar37 >> 0x38) ^ (byte)((ulong)uVar35 >> 0x38),
                              CONCAT16((byte)((ulong)uVar37 >> 0x30) ^ (byte)((ulong)uVar35 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar37 >> 0x28) ^
                                                 (byte)((ulong)uVar35 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar37 >> 0x20) ^
                                                          (byte)((ulong)uVar35 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar37 >> 0x18) ^
                                                                   (byte)((ulong)uVar35 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar37 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar35 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar37 >> 8) ^ (byte)((ulong)uVar35 >> 8),
                                                  (byte)uVar37 ^ (byte)uVar35)))))));
          puVar22 = puVar22 + 2;
          puVar30 = puVar30 + 2;
        } while (uVar29 != 0);
        if (uVar25 == uVar28) goto LAB_00462fa0;
        uVar29 = uVar28;
        if (((uint)uVar25 >> 3 & 1) == 0) goto LAB_00462d40;
      }
      uVar28 = uVar25 & 0x18;
      lVar24 = uVar29 - uVar28;
      puVar30 = (undefined8 *)(param_4 + uVar34 + uVar29);
      puVar22 = (undefined8 *)((long)puVar33 + uVar29 + 0x54);
      do {
        uVar35 = *puVar30;
        uVar38 = *puVar22;
        lVar24 = lVar24 + 8;
        *puVar22 = CONCAT17((byte)((ulong)uVar38 >> 0x38) ^ (byte)((ulong)uVar35 >> 0x38),
                            CONCAT16((byte)((ulong)uVar38 >> 0x30) ^ (byte)((ulong)uVar35 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar38 >> 0x28) ^
                                              (byte)((ulong)uVar35 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar38 >> 0x20) ^
                                                       (byte)((ulong)uVar35 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar38 >> 0x18) ^
                                                                (byte)((ulong)uVar35 >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar38 >>
                                                                               0x10) ^
                                                                         (byte)((ulong)uVar35 >>
                                                                               0x10),
                                                                         CONCAT11((byte)((ulong)
                                                  uVar38 >> 8) ^ (byte)((ulong)uVar35 >> 8),
                                                  (byte)uVar38 ^ (byte)uVar35)))))));
        puVar30 = puVar30 + 1;
        puVar22 = puVar22 + 1;
      } while (lVar24 != 0);
      if (uVar25 == uVar28) goto LAB_00462fa0;
    }
LAB_00462d40:
    lVar24 = uVar25 - uVar28;
    pbVar23 = (byte *)((long)puVar33 + uVar28 + 0x54);
    pbVar26 = (byte *)(param_4 + uVar28 + uVar34);
    do {
      lVar24 = lVar24 + -1;
      *pbVar23 = *pbVar23 ^ *pbVar26;
      pbVar23 = pbVar23 + 1;
      pbVar26 = pbVar26 + 1;
    } while (lVar24 != 0);
    goto LAB_00462fa0;
  }
  if (((param_4 != 0) || (param_2 != 0)) || (param_6 != 0)) {
    iVar20 = 0x20;
    if (uVar34 != 0x10) {
      iVar20 = 0x30;
    }
    local_68 = 0x10;
    local_64 = 0x10;
    puVar22 = puVar33 + 0x10;
    puVar33[0x11] = 0;
    *puVar22 = 0;
    puVar33[0x13] = 0;
    puVar33[0x12] = 0;
    uVar45 = puVar33[0x13];
    uVar37 = puVar33[0x12];
    puVar33[0x13] =
         CONCAT17((byte)((ulong)uVar45 >> 0x38) ^ (byte)((ulong)uVar38 >> 0x38),
                  CONCAT16((byte)((ulong)uVar45 >> 0x30) ^ (byte)((ulong)uVar38 >> 0x30),
                           CONCAT15((byte)((ulong)uVar45 >> 0x28) ^ (byte)((ulong)uVar38 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar45 >> 0x20) ^
                                             (byte)((ulong)uVar38 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar45 >> 0x18) ^
                                                      (byte)((ulong)uVar38 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar45 >> 0x10) ^
                                                               (byte)((ulong)uVar38 >> 0x10),
                                                               CONCAT11((byte)((ulong)uVar45 >> 8) ^
                                                                        (byte)((ulong)uVar38 >> 8),
                                                                        (byte)uVar45 ^ (byte)uVar38)
                                                              ))))));
    puVar33[0x12] =
         CONCAT17((byte)((ulong)uVar37 >> 0x38) ^ (byte)((ulong)uVar35 >> 0x38),
                  CONCAT16((byte)((ulong)uVar37 >> 0x30) ^ (byte)((ulong)uVar35 >> 0x30),
                           CONCAT15((byte)((ulong)uVar37 >> 0x28) ^ (byte)((ulong)uVar35 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar37 >> 0x20) ^
                                             (byte)((ulong)uVar35 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar37 >> 0x18) ^
                                                      (byte)((ulong)uVar35 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar37 >> 0x10) ^
                                                               (byte)((ulong)uVar35 >> 0x10),
                                                               CONCAT11((byte)((ulong)uVar37 >> 8) ^
                                                                        (byte)((ulong)uVar35 >> 8),
                                                                        (byte)uVar37 ^ (byte)uVar35)
                                                              ))))));
    puVar33[0x15] = 0;
    puVar33[0x14] = 0;
    if (uVar34 != 0x10) {
      uVar38 = puVar33[0x15];
      uVar35 = puVar33[0x14];
      bVar36 = (byte)_DAT_00200920;
      uVar34 = (ulong)_DAT_00200920 >> 8;
      uVar25 = (ulong)_DAT_00200920 >> 0x10;
      uVar28 = (ulong)_DAT_00200920 >> 0x18;
      uVar29 = (ulong)_DAT_00200920 >> 0x20;
      uVar27 = (ulong)_DAT_00200920 >> 0x28;
      uVar17 = (ulong)_DAT_00200920 >> 0x30;
      uVar18 = (ulong)_DAT_00200920 >> 0x38;
      puVar33[0x15] =
           CONCAT17((byte)((ulong)uVar38 >> 0x38) ^ (byte)((ulong)_UNK_00200928 >> 0x38),
                    CONCAT16((byte)((ulong)uVar38 >> 0x30) ^ (byte)((ulong)_UNK_00200928 >> 0x30),
                             CONCAT15((byte)((ulong)uVar38 >> 0x28) ^
                                      (byte)((ulong)_UNK_00200928 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar38 >> 0x20) ^
                                               (byte)((ulong)_UNK_00200928 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar38 >> 0x18) ^
                                                        (byte)((ulong)_UNK_00200928 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar38 >> 0x10) ^
                                                                 (byte)((ulong)_UNK_00200928 >> 0x10
                                                                       ),CONCAT11((byte)((ulong)
                                                  uVar38 >> 8) ^ (byte)((ulong)_UNK_00200928 >> 8),
                                                  (byte)uVar38 ^ (byte)_UNK_00200928)))))));
      puVar33[0x14] =
           CONCAT17((byte)((ulong)uVar35 >> 0x38) ^ (byte)uVar18,
                    CONCAT16((byte)((ulong)uVar35 >> 0x30) ^ (byte)uVar17,
                             CONCAT15((byte)((ulong)uVar35 >> 0x28) ^ (byte)uVar27,
                                      CONCAT14((byte)((ulong)uVar35 >> 0x20) ^ (byte)uVar29,
                                               CONCAT13((byte)((ulong)uVar35 >> 0x18) ^ (byte)uVar28
                                                        ,CONCAT12((byte)((ulong)uVar35 >> 0x10) ^
                                                                  (byte)uVar25,
                                                                  CONCAT11((byte)((ulong)uVar35 >> 8
                                                                                 ) ^ (byte)uVar34,
                                                                           (byte)uVar35 ^ bVar36))))
                                     )));
    }
    iVar21 = FUN_003803d0(puVar33[2],puVar22,&local_64,puVar22,iVar20);
    if ((iVar21 == 0) || (local_64 != iVar20)) {
      return 0;
    }
    *(undefined2 *)(puVar33 + 0xd) = 0;
    uVar34 = 0;
    if (param_2 != 0) {
      uVar34 = param_3;
    }
    lVar24 = 0;
    if (param_6 != 0) {
      lVar24 = param_7;
    }
    *(undefined1 *)((long)puVar33 + 0x6a) = 0;
    uVar25 = 0;
    if (param_4 != 0) {
      uVar25 = param_5;
    }
    *(char *)((long)puVar33 + 0x6b) = *(char *)(puVar33 + 5) + '\x10';
    lVar32 = uVar25 + uVar34 + lVar24;
    *(char *)((long)puVar33 + 0x67) = (char)lVar32;
    *(char *)((long)puVar33 + 100) = (char)((ulong)lVar32 >> 0x18);
    *(char *)((long)puVar33 + 0x65) = (char)((ulong)lVar32 >> 0x10);
    *(char *)((long)puVar33 + 0x66) = (char)((ulong)lVar32 >> 8);
    puVar33[0xf] = 8;
    iVar20 = FUN_004632b0(puVar33,param_2);
    if (iVar20 == 0) {
      return 0;
    }
    iVar20 = FUN_004632b0(puVar33,param_6,lVar24);
    if (iVar20 == 0) {
      return 0;
    }
    iVar20 = FUN_004632b0(puVar33,param_4,uVar25);
    if (iVar20 == 0) {
      return 0;
    }
    iVar20 = FUN_004632b0(puVar33,&DAT_007a9760,1);
    if (iVar20 == 0) {
      return 0;
    }
    lVar24 = puVar33[0xf];
    if (lVar24 != 0) {
      uVar35 = extraout_d0;
      uVar38 = extraout_var;
      memset((void *)((long)puVar33 + 100 + lVar24),0,0x10 - lVar24);
      uVar45 = *(undefined8 *)((long)puVar33 + 0x6c);
      uVar37 = *(undefined8 *)((long)puVar33 + 100);
      if (puVar33[5] == 0x10) {
        iVar20 = 0x20;
      }
      else {
        uVar38 = *(undefined8 *)((long)puVar33 + 0x6c);
        uVar35 = *(undefined8 *)((long)puVar33 + 100);
        iVar20 = 0x30;
      }
      uVar54 = puVar33[0x11];
      uVar53 = puVar33[0x10];
      uVar56 = puVar33[0x13];
      uVar55 = puVar33[0x12];
      local_64 = 0x10;
      bVar36 = (byte)((ulong)uVar37 >> 8);
      bVar39 = (byte)((ulong)uVar37 >> 0x10);
      bVar40 = (byte)((ulong)uVar37 >> 0x18);
      bVar41 = (byte)((ulong)uVar37 >> 0x20);
      bVar42 = (byte)((ulong)uVar37 >> 0x28);
      bVar43 = (byte)((ulong)uVar37 >> 0x30);
      bVar44 = (byte)((ulong)uVar37 >> 0x38);
      bVar46 = (byte)((ulong)uVar45 >> 8);
      bVar47 = (byte)((ulong)uVar45 >> 0x10);
      bVar48 = (byte)((ulong)uVar45 >> 0x18);
      bVar49 = (byte)((ulong)uVar45 >> 0x20);
      bVar50 = (byte)((ulong)uVar45 >> 0x28);
      bVar51 = (byte)((ulong)uVar45 >> 0x30);
      bVar52 = (byte)((ulong)uVar45 >> 0x38);
      puVar33[0x11] =
           CONCAT17((byte)((ulong)uVar54 >> 0x38) ^ bVar52,
                    CONCAT16((byte)((ulong)uVar54 >> 0x30) ^ bVar51,
                             CONCAT15((byte)((ulong)uVar54 >> 0x28) ^ bVar50,
                                      CONCAT14((byte)((ulong)uVar54 >> 0x20) ^ bVar49,
                                               CONCAT13((byte)((ulong)uVar54 >> 0x18) ^ bVar48,
                                                        CONCAT12((byte)((ulong)uVar54 >> 0x10) ^
                                                                 bVar47,CONCAT11((byte)((ulong)
                                                  uVar54 >> 8) ^ bVar46,(byte)uVar54 ^ (byte)uVar45)
                                                  ))))));
      puVar33[0x10] =
           CONCAT17((byte)((ulong)uVar53 >> 0x38) ^ bVar44,
                    CONCAT16((byte)((ulong)uVar53 >> 0x30) ^ bVar43,
                             CONCAT15((byte)((ulong)uVar53 >> 0x28) ^ bVar42,
                                      CONCAT14((byte)((ulong)uVar53 >> 0x20) ^ bVar41,
                                               CONCAT13((byte)((ulong)uVar53 >> 0x18) ^ bVar40,
                                                        CONCAT12((byte)((ulong)uVar53 >> 0x10) ^
                                                                 bVar39,CONCAT11((byte)((ulong)
                                                  uVar53 >> 8) ^ bVar36,(byte)uVar53 ^ (byte)uVar37)
                                                  ))))));
      puVar33[0x13] =
           CONCAT17((byte)((ulong)uVar56 >> 0x38) ^ bVar52,
                    CONCAT16((byte)((ulong)uVar56 >> 0x30) ^ bVar51,
                             CONCAT15((byte)((ulong)uVar56 >> 0x28) ^ bVar50,
                                      CONCAT14((byte)((ulong)uVar56 >> 0x20) ^ bVar49,
                                               CONCAT13((byte)((ulong)uVar56 >> 0x18) ^ bVar48,
                                                        CONCAT12((byte)((ulong)uVar56 >> 0x10) ^
                                                                 bVar47,CONCAT11((byte)((ulong)
                                                  uVar56 >> 8) ^ bVar46,(byte)uVar56 ^ (byte)uVar45)
                                                  ))))));
      puVar33[0x12] =
           CONCAT17((byte)((ulong)uVar55 >> 0x38) ^ bVar44,
                    CONCAT16((byte)((ulong)uVar55 >> 0x30) ^ bVar43,
                             CONCAT15((byte)((ulong)uVar55 >> 0x28) ^ bVar42,
                                      CONCAT14((byte)((ulong)uVar55 >> 0x20) ^ bVar41,
                                               CONCAT13((byte)((ulong)uVar55 >> 0x18) ^ bVar40,
                                                        CONCAT12((byte)((ulong)uVar55 >> 0x10) ^
                                                                 bVar39,CONCAT11((byte)((ulong)
                                                  uVar55 >> 8) ^ bVar36,(byte)uVar55 ^ (byte)uVar37)
                                                  ))))));
      if (puVar33[5] != 0x10) {
        uVar45 = puVar33[0x15];
        uVar37 = puVar33[0x14];
        puVar33[0x15] =
             CONCAT17((byte)((ulong)uVar45 >> 0x38) ^ (byte)((ulong)uVar38 >> 0x38),
                      CONCAT16((byte)((ulong)uVar45 >> 0x30) ^ (byte)((ulong)uVar38 >> 0x30),
                               CONCAT15((byte)((ulong)uVar45 >> 0x28) ^
                                        (byte)((ulong)uVar38 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar45 >> 0x20) ^
                                                 (byte)((ulong)uVar38 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar45 >> 0x18) ^
                                                          (byte)((ulong)uVar38 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar45 >> 0x10) ^
                                                                   (byte)((ulong)uVar38 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar45 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar38 >>
                                                                                  8),(byte)uVar45 ^
                                                                                     (byte)uVar38)))
                                                ))));
        puVar33[0x14] =
             CONCAT17((byte)((ulong)uVar37 >> 0x38) ^ (byte)((ulong)uVar35 >> 0x38),
                      CONCAT16((byte)((ulong)uVar37 >> 0x30) ^ (byte)((ulong)uVar35 >> 0x30),
                               CONCAT15((byte)((ulong)uVar37 >> 0x28) ^
                                        (byte)((ulong)uVar35 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar37 >> 0x20) ^
                                                 (byte)((ulong)uVar35 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar37 >> 0x18) ^
                                                          (byte)((ulong)uVar35 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar37 >> 0x10) ^
                                                                   (byte)((ulong)uVar35 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar37 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar35 >>
                                                                                  8),(byte)uVar37 ^
                                                                                     (byte)uVar35)))
                                                ))));
      }
      iVar21 = FUN_003803d0(puVar33[2],puVar22,&local_64,puVar22,iVar20);
      if (iVar21 == 0) {
        return 0;
      }
      if (local_64 != iVar20) {
        return 0;
      }
    }
    iVar20 = FUN_003803c8(*puVar33,0,0,puVar22,0,0xffffffff);
    if (iVar20 == 0) {
      return 0;
    }
    iVar20 = FUN_003803d0(*puVar33,puVar22,&local_68,(long)puVar22 + puVar33[5],0x10);
    if (iVar20 == 0) {
      return 0;
    }
    if (local_68 != 0x10) {
      return 0;
    }
    iVar20 = FUN_003803d0(*puVar33,puVar33 + 0x12,&local_68,puVar22,0x10);
    if (iVar20 == 0) {
      return 0;
    }
    if (local_68 != 0x10) {
      return 0;
    }
    if (puVar33[5] != 0x10) {
      iVar20 = FUN_003803d0(*puVar33,puVar33 + 0x14,&local_68,puVar33 + 0x12,0x10);
      if (iVar20 == 0) {
        return 0;
      }
      if (local_68 != 0x10) {
        return 0;
      }
    }
  }
  if ((param_3 == 0) || (uVar34 = *(ulong *)(param_1 + 0xe8), uVar34 == 0)) goto LAB_00462fa0;
  uVar28 = puVar33[5];
  puVar22 = puVar33 + 0x10;
  uVar25 = uVar28;
  if (uVar34 <= uVar28) {
    uVar25 = uVar34;
  }
  if (uVar28 == 0) {
    uVar25 = 0;
  }
  else {
    if (uVar25 < 8) {
      uVar29 = 0;
LAB_00462ebc:
      lVar24 = uVar25 - uVar29;
      pbVar23 = (byte *)((long)puVar33 + uVar29 + 0x80);
      do {
        lVar24 = lVar24 + -1;
        pbVar23[-0x4c] = pbVar23[-0x4c] ^ *pbVar23;
        pbVar23 = pbVar23 + 1;
      } while (lVar24 != 0);
    }
    else if (uVar25 < 0x20) {
      uVar28 = 0;
LAB_00462e84:
      uVar29 = uVar25 & 0xfffffffffffffff8;
      lVar24 = uVar28 - uVar29;
      puVar31 = (undefined8 *)((long)puVar33 + uVar28 + 0x80);
      do {
        uVar35 = *puVar31;
        uVar38 = *(undefined8 *)((long)puVar31 + -0x4c);
        lVar24 = lVar24 + 8;
        *(ulong *)((long)puVar31 + -0x4c) =
             CONCAT17((byte)((ulong)uVar38 >> 0x38) ^ (byte)((ulong)uVar35 >> 0x38),
                      CONCAT16((byte)((ulong)uVar38 >> 0x30) ^ (byte)((ulong)uVar35 >> 0x30),
                               CONCAT15((byte)((ulong)uVar38 >> 0x28) ^
                                        (byte)((ulong)uVar35 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar38 >> 0x20) ^
                                                 (byte)((ulong)uVar35 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar38 >> 0x18) ^
                                                          (byte)((ulong)uVar35 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar38 >> 0x10) ^
                                                                   (byte)((ulong)uVar35 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar38 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar35 >>
                                                                                  8),(byte)uVar38 ^
                                                                                     (byte)uVar35)))
                                                ))));
        puVar31 = puVar31 + 1;
      } while (lVar24 != 0);
      if (uVar25 != uVar29) goto LAB_00462ebc;
    }
    else {
      uVar29 = uVar25 & 0xffffffffffffffe0;
      uVar28 = uVar29;
      puVar31 = puVar22;
      do {
        uVar45 = puVar31[1];
        uVar37 = *puVar31;
        uVar54 = puVar31[3];
        uVar53 = puVar31[2];
        uVar28 = uVar28 - 0x20;
        uVar38 = *(undefined8 *)((long)puVar31 + -0x44);
        uVar35 = *(undefined8 *)((long)puVar31 + -0x4c);
        uVar56 = *(undefined8 *)((long)puVar31 + -0x34);
        uVar55 = *(undefined8 *)((long)puVar31 + -0x3c);
        *(ulong *)((long)puVar31 + -0x44) =
             CONCAT17((byte)((ulong)uVar38 >> 0x38) ^ (byte)((ulong)uVar45 >> 0x38),
                      CONCAT16((byte)((ulong)uVar38 >> 0x30) ^ (byte)((ulong)uVar45 >> 0x30),
                               CONCAT15((byte)((ulong)uVar38 >> 0x28) ^
                                        (byte)((ulong)uVar45 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar38 >> 0x20) ^
                                                 (byte)((ulong)uVar45 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar38 >> 0x18) ^
                                                          (byte)((ulong)uVar45 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar38 >> 0x10) ^
                                                                   (byte)((ulong)uVar45 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar38 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar45 >>
                                                                                  8),(byte)uVar38 ^
                                                                                     (byte)uVar45)))
                                                ))));
        *(ulong *)((long)puVar31 + -0x4c) =
             CONCAT17((byte)((ulong)uVar35 >> 0x38) ^ (byte)((ulong)uVar37 >> 0x38),
                      CONCAT16((byte)((ulong)uVar35 >> 0x30) ^ (byte)((ulong)uVar37 >> 0x30),
                               CONCAT15((byte)((ulong)uVar35 >> 0x28) ^
                                        (byte)((ulong)uVar37 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar35 >> 0x20) ^
                                                 (byte)((ulong)uVar37 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar35 >> 0x18) ^
                                                          (byte)((ulong)uVar37 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar35 >> 0x10) ^
                                                                   (byte)((ulong)uVar37 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar35 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar37 >>
                                                                                  8),(byte)uVar35 ^
                                                                                     (byte)uVar37)))
                                                ))));
        *(ulong *)((long)puVar31 + -0x34) =
             CONCAT17((byte)((ulong)uVar56 >> 0x38) ^ (byte)((ulong)uVar54 >> 0x38),
                      CONCAT16((byte)((ulong)uVar56 >> 0x30) ^ (byte)((ulong)uVar54 >> 0x30),
                               CONCAT15((byte)((ulong)uVar56 >> 0x28) ^
                                        (byte)((ulong)uVar54 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar56 >> 0x20) ^
                                                 (byte)((ulong)uVar54 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar56 >> 0x18) ^
                                                          (byte)((ulong)uVar54 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar56 >> 0x10) ^
                                                                   (byte)((ulong)uVar54 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar56 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar54 >>
                                                                                  8),(byte)uVar56 ^
                                                                                     (byte)uVar54)))
                                                ))));
        *(ulong *)((long)puVar31 + -0x3c) =
             CONCAT17((byte)((ulong)uVar55 >> 0x38) ^ (byte)((ulong)uVar53 >> 0x38),
                      CONCAT16((byte)((ulong)uVar55 >> 0x30) ^ (byte)((ulong)uVar53 >> 0x30),
                               CONCAT15((byte)((ulong)uVar55 >> 0x28) ^
                                        (byte)((ulong)uVar53 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar55 >> 0x20) ^
                                                 (byte)((ulong)uVar53 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar55 >> 0x18) ^
                                                          (byte)((ulong)uVar53 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar55 >> 0x10) ^
                                                                   (byte)((ulong)uVar53 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar55 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar53 >>
                                                                                  8),(byte)uVar55 ^
                                                                                     (byte)uVar53)))
                                                ))));
        puVar31 = puVar31 + 4;
      } while (uVar28 != 0);
      if (uVar25 != uVar29) {
        uVar28 = uVar29;
        if ((uVar25 & 0x18) == 0) goto LAB_00462ebc;
        goto LAB_00462e84;
      }
    }
    uVar25 = puVar33[5];
  }
  uVar28 = uVar34 - uVar25;
  if (uVar34 < uVar25 || uVar28 == 0) goto LAB_00462fa0;
  uVar34 = uVar28;
  if (0xf < uVar28) {
    uVar34 = 0x10;
  }
  if (uVar34 < 2) {
    uVar34 = 1;
  }
  if ((uVar28 < 8) ||
     (puVar30 < (undefined8 *)((long)puVar33 + uVar25 + uVar34 + 0x80) &&
      (long)puVar22 + uVar25 < (long)puVar33 + uVar34 + 0x54)) {
    uVar28 = 0;
  }
  else {
    if (uVar28 < 0x10) {
      uVar29 = 0;
    }
    else {
      uVar28 = uVar34 & 0x10;
      uVar29 = uVar28;
      do {
        uVar38 = ((undefined8 *)((long)puVar22 + uVar25))[1];
        uVar35 = *(undefined8 *)((long)puVar22 + uVar25);
        uVar45 = *(undefined8 *)((long)puVar22 + -0x24);
        uVar37 = *(undefined8 *)((long)puVar22 + -0x2c);
        uVar29 = uVar29 - 0x10;
        *(ulong *)((long)puVar22 + -0x24) =
             CONCAT17((byte)((ulong)uVar45 >> 0x38) ^ (byte)((ulong)uVar38 >> 0x38),
                      CONCAT16((byte)((ulong)uVar45 >> 0x30) ^ (byte)((ulong)uVar38 >> 0x30),
                               CONCAT15((byte)((ulong)uVar45 >> 0x28) ^
                                        (byte)((ulong)uVar38 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar45 >> 0x20) ^
                                                 (byte)((ulong)uVar38 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar45 >> 0x18) ^
                                                          (byte)((ulong)uVar38 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar45 >> 0x10) ^
                                                                   (byte)((ulong)uVar38 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar45 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar38 >>
                                                                                  8),(byte)uVar45 ^
                                                                                     (byte)uVar38)))
                                                ))));
        *(ulong *)((long)puVar22 + -0x2c) =
             CONCAT17((byte)((ulong)uVar37 >> 0x38) ^ (byte)((ulong)uVar35 >> 0x38),
                      CONCAT16((byte)((ulong)uVar37 >> 0x30) ^ (byte)((ulong)uVar35 >> 0x30),
                               CONCAT15((byte)((ulong)uVar37 >> 0x28) ^
                                        (byte)((ulong)uVar35 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar37 >> 0x20) ^
                                                 (byte)((ulong)uVar35 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar37 >> 0x18) ^
                                                          (byte)((ulong)uVar35 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar37 >> 0x10) ^
                                                                   (byte)((ulong)uVar35 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar37 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar35 >>
                                                                                  8),(byte)uVar37 ^
                                                                                     (byte)uVar35)))
                                                ))));
        puVar22 = puVar22 + 2;
      } while (uVar29 != 0);
      if (uVar34 == uVar28) goto LAB_00462fa0;
      uVar29 = uVar28;
      if (((uint)uVar34 >> 3 & 1) == 0) goto LAB_00462f78;
    }
    uVar28 = uVar34 & 0x18;
    lVar32 = uVar29 - uVar28;
    lVar24 = (long)puVar33 + uVar29 + 0x80;
    do {
      uVar35 = *(undefined8 *)(lVar24 + uVar25);
      uVar38 = *(undefined8 *)(lVar24 + -0x2c);
      lVar32 = lVar32 + 8;
      *(ulong *)(lVar24 + -0x2c) =
           CONCAT17((byte)((ulong)uVar38 >> 0x38) ^ (byte)((ulong)uVar35 >> 0x38),
                    CONCAT16((byte)((ulong)uVar38 >> 0x30) ^ (byte)((ulong)uVar35 >> 0x30),
                             CONCAT15((byte)((ulong)uVar38 >> 0x28) ^ (byte)((ulong)uVar35 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar38 >> 0x20) ^
                                               (byte)((ulong)uVar35 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar38 >> 0x18) ^
                                                        (byte)((ulong)uVar35 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar38 >> 0x10) ^
                                                                 (byte)((ulong)uVar35 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar38 >> 8)
                                                                          ^ (byte)((ulong)uVar35 >>
                                                                                  8),
                                                                          (byte)uVar38 ^
                                                                          (byte)uVar35)))))));
      lVar24 = lVar24 + 8;
    } while (lVar32 != 0);
    if (uVar34 == uVar28) goto LAB_00462fa0;
  }
LAB_00462f78:
  lVar32 = uVar34 - uVar28;
  lVar24 = (long)puVar33 + uVar28 + 0x80;
  do {
    lVar32 = lVar32 + -1;
    *(byte *)(lVar24 + -0x2c) = *(byte *)(lVar24 + -0x2c) ^ *(byte *)(lVar24 + uVar25);
    lVar24 = lVar24 + 1;
  } while (lVar32 != 0);
LAB_00462fa0:
  uVar34 = FUN_003803c8(*puVar33,0,0,__dest,0,0xffffffff);
  if ((int)uVar34 != 0) {
    iVar20 = FUN_003803c8(puVar33[1],0,0,__dest,0,0xffffffff);
    uVar34 = (ulong)(iVar20 != 0);
  }
  return uVar34;
}


// ===== 004632b0  FUN_004632b0 =====

undefined8 FUN_004632b0(undefined1 param_1 [16],long param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  ulong __n;
  undefined8 uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  undefined8 uVar13;
  byte bVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 local_50;
  undefined8 uStack_48;
  int local_28;
  int local_24;
  
  uVar13 = param_1._8_8_;
  uVar5 = param_1._0_8_;
  if ((param_3 != (undefined8 *)0x0) && (param_4 != 0)) {
    lVar3 = *(long *)(param_2 + 0x78);
    if (lVar3 != 0) {
      __n = 0x10 - lVar3;
      if (__n <= param_4) {
        memcpy((void *)(param_2 + 100 + lVar3),param_3,__n);
        uVar22 = *(undefined8 *)(param_2 + 0x6c);
        uVar21 = *(undefined8 *)(param_2 + 100);
        if (*(long *)(param_2 + 0x28) == 0x10) {
          iVar4 = 0x20;
        }
        else {
          uVar13 = *(undefined8 *)(param_2 + 0x6c);
          uVar5 = *(undefined8 *)(param_2 + 100);
          iVar4 = 0x30;
        }
        puVar2 = (undefined8 *)(param_2 + 0x80);
        uVar24 = *(undefined8 *)(param_2 + 0x88);
        uVar23 = *puVar2;
        uVar26 = *(undefined8 *)(param_2 + 0x98);
        uVar25 = *(undefined8 *)(param_2 + 0x90);
        local_28 = 0x10;
        bVar6 = (byte)((ulong)uVar21 >> 8);
        bVar7 = (byte)((ulong)uVar21 >> 0x10);
        bVar8 = (byte)((ulong)uVar21 >> 0x18);
        bVar9 = (byte)((ulong)uVar21 >> 0x20);
        bVar10 = (byte)((ulong)uVar21 >> 0x28);
        bVar11 = (byte)((ulong)uVar21 >> 0x30);
        bVar12 = (byte)((ulong)uVar21 >> 0x38);
        bVar14 = (byte)((ulong)uVar22 >> 8);
        bVar15 = (byte)((ulong)uVar22 >> 0x10);
        bVar16 = (byte)((ulong)uVar22 >> 0x18);
        bVar17 = (byte)((ulong)uVar22 >> 0x20);
        bVar18 = (byte)((ulong)uVar22 >> 0x28);
        bVar19 = (byte)((ulong)uVar22 >> 0x30);
        bVar20 = (byte)((ulong)uVar22 >> 0x38);
        *(ulong *)(param_2 + 0x88) =
             CONCAT17((byte)((ulong)uVar24 >> 0x38) ^ bVar20,
                      CONCAT16((byte)((ulong)uVar24 >> 0x30) ^ bVar19,
                               CONCAT15((byte)((ulong)uVar24 >> 0x28) ^ bVar18,
                                        CONCAT14((byte)((ulong)uVar24 >> 0x20) ^ bVar17,
                                                 CONCAT13((byte)((ulong)uVar24 >> 0x18) ^ bVar16,
                                                          CONCAT12((byte)((ulong)uVar24 >> 0x10) ^
                                                                   bVar15,CONCAT11((byte)((ulong)
                                                  uVar24 >> 8) ^ bVar14,(byte)uVar24 ^ (byte)uVar22)
                                                  ))))));
        *puVar2 = CONCAT17((byte)((ulong)uVar23 >> 0x38) ^ bVar12,
                           CONCAT16((byte)((ulong)uVar23 >> 0x30) ^ bVar11,
                                    CONCAT15((byte)((ulong)uVar23 >> 0x28) ^ bVar10,
                                             CONCAT14((byte)((ulong)uVar23 >> 0x20) ^ bVar9,
                                                      CONCAT13((byte)((ulong)uVar23 >> 0x18) ^ bVar8
                                                               ,CONCAT12((byte)((ulong)uVar23 >>
                                                                               0x10) ^ bVar7,
                                                                         CONCAT11((byte)((ulong)
                                                  uVar23 >> 8) ^ bVar6,(byte)uVar23 ^ (byte)uVar21))
                                                  )))));
        *(ulong *)(param_2 + 0x98) =
             CONCAT17((byte)((ulong)uVar26 >> 0x38) ^ bVar20,
                      CONCAT16((byte)((ulong)uVar26 >> 0x30) ^ bVar19,
                               CONCAT15((byte)((ulong)uVar26 >> 0x28) ^ bVar18,
                                        CONCAT14((byte)((ulong)uVar26 >> 0x20) ^ bVar17,
                                                 CONCAT13((byte)((ulong)uVar26 >> 0x18) ^ bVar16,
                                                          CONCAT12((byte)((ulong)uVar26 >> 0x10) ^
                                                                   bVar15,CONCAT11((byte)((ulong)
                                                  uVar26 >> 8) ^ bVar14,(byte)uVar26 ^ (byte)uVar22)
                                                  ))))));
        *(ulong *)(param_2 + 0x90) =
             CONCAT17((byte)((ulong)uVar25 >> 0x38) ^ bVar12,
                      CONCAT16((byte)((ulong)uVar25 >> 0x30) ^ bVar11,
                               CONCAT15((byte)((ulong)uVar25 >> 0x28) ^ bVar10,
                                        CONCAT14((byte)((ulong)uVar25 >> 0x20) ^ bVar9,
                                                 CONCAT13((byte)((ulong)uVar25 >> 0x18) ^ bVar8,
                                                          CONCAT12((byte)((ulong)uVar25 >> 0x10) ^
                                                                   bVar7,CONCAT11((byte)((ulong)
                                                  uVar25 >> 8) ^ bVar6,(byte)uVar25 ^ (byte)uVar21))
                                                  )))));
        if (*(long *)(param_2 + 0x28) != 0x10) {
          uVar22 = *(undefined8 *)(param_2 + 0xa8);
          uVar21 = *(undefined8 *)(param_2 + 0xa0);
          *(ulong *)(param_2 + 0xa8) =
               CONCAT17((byte)((ulong)uVar22 >> 0x38) ^ (byte)((ulong)uVar13 >> 0x38),
                        CONCAT16((byte)((ulong)uVar22 >> 0x30) ^ (byte)((ulong)uVar13 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar22 >> 0x28) ^
                                          (byte)((ulong)uVar13 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar22 >> 0x20) ^
                                                   (byte)((ulong)uVar13 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar22 >> 0x18) ^
                                                            (byte)((ulong)uVar13 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar22 >> 0x10) ^
                                                                     (byte)((ulong)uVar13 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar22
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar13
                                                                                    >> 8),
                                                                              (byte)uVar22 ^
                                                                              (byte)uVar13)))))));
          *(ulong *)(param_2 + 0xa0) =
               CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ (byte)((ulong)uVar5 >> 0x38),
                        CONCAT16((byte)((ulong)uVar21 >> 0x30) ^ (byte)((ulong)uVar5 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar21 >> 0x28) ^
                                          (byte)((ulong)uVar5 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                                   (byte)((ulong)uVar5 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar21 >> 0x18) ^
                                                            (byte)((ulong)uVar5 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar21 >> 0x10) ^
                                                                     (byte)((ulong)uVar5 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar21
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar5 >>
                                                                                    8),(byte)uVar21
                                                                                       ^ (byte)uVar5
                                                                             )))))));
        }
        iVar1 = FUN_003803d0(*(undefined8 *)(param_2 + 0x10),puVar2,&local_28,puVar2,iVar4);
        if (iVar1 == 0) {
          return 0;
        }
        if (local_28 != iVar4) {
          return 0;
        }
        param_3 = (undefined8 *)((long)param_3 + __n);
        *(undefined8 *)(param_2 + 0x78) = 0;
        param_4 = param_4 - __n;
      }
    }
    for (; 0xf < param_4; param_4 = param_4 - 0x10) {
      if (*(long *)(param_2 + 0x28) == 0x10) {
        iVar4 = 0x20;
      }
      else {
        uStack_48 = param_3[1];
        local_50 = *param_3;
        iVar4 = 0x30;
      }
      uVar22 = *(undefined8 *)(param_2 + 0x88);
      uVar21 = *(undefined8 *)(param_2 + 0x80);
      uVar24 = *(undefined8 *)(param_2 + 0x98);
      uVar23 = *(undefined8 *)(param_2 + 0x90);
      uVar13 = param_3[1];
      uVar5 = *param_3;
      local_24 = 0x10;
      bVar6 = (byte)((ulong)uVar5 >> 8);
      bVar7 = (byte)((ulong)uVar5 >> 0x10);
      bVar8 = (byte)((ulong)uVar5 >> 0x18);
      bVar9 = (byte)((ulong)uVar5 >> 0x20);
      bVar10 = (byte)((ulong)uVar5 >> 0x28);
      bVar11 = (byte)((ulong)uVar5 >> 0x30);
      bVar12 = (byte)((ulong)uVar5 >> 0x38);
      bVar14 = (byte)((ulong)uVar13 >> 8);
      bVar15 = (byte)((ulong)uVar13 >> 0x10);
      bVar16 = (byte)((ulong)uVar13 >> 0x18);
      bVar17 = (byte)((ulong)uVar13 >> 0x20);
      bVar18 = (byte)((ulong)uVar13 >> 0x28);
      bVar19 = (byte)((ulong)uVar13 >> 0x30);
      bVar20 = (byte)((ulong)uVar13 >> 0x38);
      *(ulong *)(param_2 + 0x88) =
           CONCAT17((byte)((ulong)uVar22 >> 0x38) ^ bVar20,
                    CONCAT16((byte)((ulong)uVar22 >> 0x30) ^ bVar19,
                             CONCAT15((byte)((ulong)uVar22 >> 0x28) ^ bVar18,
                                      CONCAT14((byte)((ulong)uVar22 >> 0x20) ^ bVar17,
                                               CONCAT13((byte)((ulong)uVar22 >> 0x18) ^ bVar16,
                                                        CONCAT12((byte)((ulong)uVar22 >> 0x10) ^
                                                                 bVar15,CONCAT11((byte)((ulong)
                                                  uVar22 >> 8) ^ bVar14,(byte)uVar22 ^ (byte)uVar13)
                                                  ))))));
      *(ulong *)(param_2 + 0x80) =
           CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ bVar12,
                    CONCAT16((byte)((ulong)uVar21 >> 0x30) ^ bVar11,
                             CONCAT15((byte)((ulong)uVar21 >> 0x28) ^ bVar10,
                                      CONCAT14((byte)((ulong)uVar21 >> 0x20) ^ bVar9,
                                               CONCAT13((byte)((ulong)uVar21 >> 0x18) ^ bVar8,
                                                        CONCAT12((byte)((ulong)uVar21 >> 0x10) ^
                                                                 bVar7,CONCAT11((byte)((ulong)uVar21
                                                                                      >> 8) ^ bVar6,
                                                                                (byte)uVar21 ^
                                                                                (byte)uVar5)))))));
      *(ulong *)(param_2 + 0x98) =
           CONCAT17((byte)((ulong)uVar24 >> 0x38) ^ bVar20,
                    CONCAT16((byte)((ulong)uVar24 >> 0x30) ^ bVar19,
                             CONCAT15((byte)((ulong)uVar24 >> 0x28) ^ bVar18,
                                      CONCAT14((byte)((ulong)uVar24 >> 0x20) ^ bVar17,
                                               CONCAT13((byte)((ulong)uVar24 >> 0x18) ^ bVar16,
                                                        CONCAT12((byte)((ulong)uVar24 >> 0x10) ^
                                                                 bVar15,CONCAT11((byte)((ulong)
                                                  uVar24 >> 8) ^ bVar14,(byte)uVar24 ^ (byte)uVar13)
                                                  ))))));
      *(ulong *)(param_2 + 0x90) =
           CONCAT17((byte)((ulong)uVar23 >> 0x38) ^ bVar12,
                    CONCAT16((byte)((ulong)uVar23 >> 0x30) ^ bVar11,
                             CONCAT15((byte)((ulong)uVar23 >> 0x28) ^ bVar10,
                                      CONCAT14((byte)((ulong)uVar23 >> 0x20) ^ bVar9,
                                               CONCAT13((byte)((ulong)uVar23 >> 0x18) ^ bVar8,
                                                        CONCAT12((byte)((ulong)uVar23 >> 0x10) ^
                                                                 bVar7,CONCAT11((byte)((ulong)uVar23
                                                                                      >> 8) ^ bVar6,
                                                                                (byte)uVar23 ^
                                                                                (byte)uVar5)))))));
      if (*(long *)(param_2 + 0x28) != 0x10) {
        uVar13 = *(undefined8 *)(param_2 + 0xa8);
        uVar5 = *(undefined8 *)(param_2 + 0xa0);
        *(ulong *)(param_2 + 0xa8) =
             CONCAT17((byte)((ulong)uVar13 >> 0x38) ^ (byte)((ulong)uStack_48 >> 0x38),
                      CONCAT16((byte)((ulong)uVar13 >> 0x30) ^ (byte)((ulong)uStack_48 >> 0x30),
                               CONCAT15((byte)((ulong)uVar13 >> 0x28) ^
                                        (byte)((ulong)uStack_48 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar13 >> 0x20) ^
                                                 (byte)((ulong)uStack_48 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar13 >> 0x18) ^
                                                          (byte)((ulong)uStack_48 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar13 >> 0x10) ^
                                                                   (byte)((ulong)uStack_48 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar13 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uStack_48
                                                                                  >> 8),
                                                                            (byte)uVar13 ^
                                                                            (byte)uStack_48)))))));
        *(ulong *)(param_2 + 0xa0) =
             CONCAT17((byte)((ulong)uVar5 >> 0x38) ^ (byte)((ulong)local_50 >> 0x38),
                      CONCAT16((byte)((ulong)uVar5 >> 0x30) ^ (byte)((ulong)local_50 >> 0x30),
                               CONCAT15((byte)((ulong)uVar5 >> 0x28) ^
                                        (byte)((ulong)local_50 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar5 >> 0x20) ^
                                                 (byte)((ulong)local_50 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar5 >> 0x18) ^
                                                          (byte)((ulong)local_50 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar5 >> 0x10) ^
                                                                   (byte)((ulong)local_50 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar5 >> 8
                                                                                  ) ^ (byte)((ulong)
                                                  local_50 >> 8),(byte)uVar5 ^ (byte)local_50)))))))
        ;
      }
      iVar1 = FUN_003803d0(*(undefined8 *)(param_2 + 0x10),param_2 + 0x80,&local_24,param_2 + 0x80,
                           iVar4);
      if (iVar1 == 0) {
        return 0;
      }
      if (local_24 != iVar4) {
        return 0;
      }
      param_3 = param_3 + 2;
    }
    if (param_4 != 0) {
      memcpy((void *)(param_2 + *(long *)(param_2 + 0x78) + 100),param_3,param_4);
      *(ulong *)(param_2 + 0x78) = *(long *)(param_2 + 0x78) + param_4;
    }
  }
  return 1;
}


// ===== 00463474  FUN_00463474 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00463474(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  int local_34;
  
  lVar14 = *(long *)(param_1 + 0xf8);
  uVar5 = FUN_0046b880(*(undefined8 *)(param_1 + 8));
  lVar6 = FUN_003cb19c(param_2,"use_derivation_function");
  if ((lVar6 == 0) || (iVar3 = thunk_FUN_003cb238(lVar6,&local_34), iVar3 == 0)) {
    bVar2 = true;
    lVar6 = FUN_003cb19c(param_2,"properties");
    if (lVar6 == 0) goto LAB_004634ec;
LAB_0046357c:
    if (*(int *)(lVar6 + 8) != 4) {
      return 0;
    }
    uVar11 = *(undefined8 *)(lVar6 + 0x10);
    lVar6 = FUN_003cb19c(param_2,"cipher");
    if (lVar6 != 0) goto LAB_00463504;
LAB_004635a0:
    if (bVar2) goto LAB_004635a4;
  }
  else {
    bVar2 = false;
    *(uint *)(lVar14 + 0x30) = (uint)(local_34 != 0);
    lVar6 = FUN_003cb19c(param_2,"properties");
    if (lVar6 != 0) goto LAB_0046357c;
LAB_004634ec:
    uVar11 = 0;
    lVar6 = FUN_003cb19c(param_2,"cipher");
    if (lVar6 == 0) goto LAB_004635a0;
LAB_00463504:
    if (*(int *)(lVar6 + 8) != 4) {
      return 0;
    }
    if (*(ulong *)(lVar6 + 0x18) < 3) {
      return 0;
    }
    lVar12 = *(long *)(lVar6 + 0x10);
    iVar3 = FUN_003cab04(&DAT_001e7838,lVar12 + *(ulong *)(lVar6 + 0x18) + -3);
    if (iVar3 != 0) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/rands/drbg_ctr.c",0x2e1,
                   "drbg_ctr_set_ctx_params_locked");
      uVar5 = 0xce;
      goto LAB_0046383c;
    }
    lVar7 = FUN_003ca354(lVar12,*(undefined8 *)(lVar6 + 0x18),
                         "providers/implementations/rands/drbg_ctr.c",0x2e4);
    if (lVar7 == 0) {
      return 0;
    }
    *(undefined4 *)(lVar7 + *(long *)(lVar6 + 0x18) + -3) = 0x424345;
    FUN_0037fa4c(*(undefined8 *)(lVar14 + 0x18));
    FUN_0037fa4c(*(undefined8 *)(lVar14 + 0x20));
    uVar8 = FUN_003823dc(uVar5,lVar12,uVar11);
    *(undefined8 *)(lVar14 + 0x20) = uVar8;
    uVar5 = FUN_003823dc(uVar5,lVar7,uVar11);
    *(undefined8 *)(lVar14 + 0x18) = uVar5;
    FUN_003c86b4(lVar7,"providers/implementations/rands/drbg_ctr.c",0x2eb);
    if ((*(long *)(lVar14 + 0x20) == 0) || (*(long *)(lVar14 + 0x18) == 0)) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/rands/drbg_ctr.c",0x2ed,
                   "drbg_ctr_set_ctx_params_locked");
      uVar5 = 0xcf;
      goto LAB_0046383c;
    }
  }
  plVar13 = *(long **)(param_1 + 0xf8);
  if (plVar13[4] == 0) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/rands/drbg_ctr.c",0x233,"drbg_ctr_init");
    uVar5 = 0x9b;
LAB_0046383c:
    FUN_00379a5c(0x39,uVar5,0);
    return 0;
  }
  iVar3 = FUN_003897a4();
  lVar6 = *plVar13;
  plVar13[5] = (long)iVar3;
  if (lVar6 == 0) {
    lVar6 = FUN_0037fab8();
    *plVar13 = lVar6;
  }
  uVar1 = 0x80006;
  uVar10 = uVar1;
  if (plVar13[1] == 0) {
    lVar14 = FUN_0037fab8();
    lVar6 = *plVar13;
    uVar5 = 0x23c;
    plVar13[1] = lVar14;
    if ((lVar6 == 0) || (uVar10 = 0x80006, lVar14 == 0)) goto LAB_004637bc;
  }
  else if (lVar6 == 0) {
    uVar5 = 0x23c;
    goto LAB_004637bc;
  }
  iVar4 = FUN_003803c8(lVar6,plVar13[3],0,0,0,1);
  if ((iVar4 == 0) || (iVar4 = FUN_003803c8(plVar13[1],plVar13[4],0,0,0,1), iVar4 == 0)) {
    uVar5 = 0x244;
    uVar10 = 0xd0;
LAB_004637bc:
    FUN_00379868();
    FUN_0037995c("providers/implementations/rands/drbg_ctr.c",uVar5,"drbg_ctr_init");
    FUN_00379a5c(0x39,uVar10,0);
    FUN_0037fae8(*plVar13);
    FUN_0037fae8(plVar13[1]);
    *plVar13 = 0;
    plVar13[1] = 0;
    return 0;
  }
  lVar6 = plVar13[6];
  *(long *)(param_1 + 0xe8) = (long)iVar3 + 0x10;
  *(int *)(param_1 + 0x80) = iVar3 << 3;
  if ((int)lVar6 != 0) {
    lVar6 = plVar13[2];
    if (lVar6 == 0) {
      lVar6 = FUN_0037fab8();
      plVar13[2] = lVar6;
      if (lVar6 == 0) {
        uVar5 = 599;
        uVar10 = uVar1;
        goto LAB_004637bc;
      }
    }
    iVar3 = FUN_003803c8(lVar6,plVar13[3],0,&DAT_0020eec5,0,1);
    if (iVar3 == 0) {
      uVar5 = 0x25d;
      uVar10 = 0xcd;
      goto LAB_004637bc;
    }
  }
  lVar6 = *(long *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0x88) = 0x10000;
  uVar11 = _UNK_002005c8;
  uVar5 = _DAT_002005c0;
  if (*(int *)(lVar6 + 0x30) == 0) {
    if (*(long *)(lVar6 + 0x28) == 0) {
      uVar5 = 0x7fffffff;
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0xe8);
    }
    *(undefined8 *)(param_1 + 0x90) = uVar5;
    *(undefined8 *)(param_1 + 0x98) = uVar5;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = uVar5;
    *(undefined8 *)(param_1 + 0xb8) = uVar5;
  }
  else {
    *(undefined8 *)(param_1 + 0x98) = _UNK_002005c8;
    *(undefined8 *)(param_1 + 0x90) = uVar5;
    *(undefined8 *)(param_1 + 0xa8) = uVar11;
    *(undefined8 *)(param_1 + 0xa0) = uVar5;
    *(undefined8 *)(param_1 + 0xb8) = 0x7fffffff;
    *(undefined8 *)(param_1 + 0xb0) = 0x7fffffff;
    uVar9 = *(ulong *)(lVar6 + 0x28);
    if (uVar9 != 0) {
      *(ulong *)(param_1 + 0x90) = uVar9;
      *(ulong *)(param_1 + 0xa0) = uVar9 >> 1;
    }
  }
LAB_004635a4:
  uVar5 = FUN_00461838(param_1,param_2);
  return uVar5;
}


// ===== 00463898  FUN_00463898 =====

void FUN_00463898(void)

{
  FUN_00461234();
  return;
}


// ===== 004638c4  FUN_004638c4 =====

void FUN_004638c4(long param_1)

{
  long lVar1;
  
  if ((param_1 != 0) && (lVar1 = *(long *)(param_1 + 0xf8), lVar1 != 0)) {
    FUN_0039d284(*(undefined8 *)(lVar1 + 0x18));
    FUN_0043f700(lVar1);
    FUN_003c9d0c(lVar1,0x178,"providers/implementations/rands/drbg_hash.c",0x1c7);
  }
  FUN_004615c8(param_1);
  return;
}


// ===== 0046391c  FUN_0046391c =====

ulong FUN_0046391c(long *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  
  if ((*param_1 == 0) || (uVar1 = FUN_003d518c(), (int)uVar1 != 0)) {
    uVar1 = FUN_0043eb70();
    if (((int)uVar1 != 0) && (uVar1 = FUN_004645ec(param_1,param_6), (int)uVar1 != 0)) {
      uVar1 = FUN_004604f4(param_1,param_2,param_3,param_4,param_5);
    }
    if (*param_1 != 0) {
      uVar1 = uVar1 & 0xffffffff;
      FUN_003d519c(*param_1);
    }
  }
  return uVar1;
}


// ===== 004639b4  FUN_004639b4 =====

ulong FUN_004639b4(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  if ((*param_1 == 0) || (uVar1 = FUN_003d518c(), (int)uVar1 != 0)) {
    lVar2 = param_1[0x1f];
    FUN_003c89b8(lVar2 + 0x28,0x6f);
    FUN_003c89b8(lVar2 + 0x97,0x6f);
    FUN_003c89b8(lVar2 + 0x106,0x6f);
    uVar1 = FUN_00460ca8(param_1);
    if (*param_1 != 0) {
      uVar1 = uVar1 & 0xffffffff;
      FUN_003d519c(*param_1);
    }
  }
  return uVar1;
}


// ===== 00463a28  thunk_FUN_00460130 =====

undefined8
thunk_FUN_00460130(long *param_1,undefined8 param_2,ulong param_3,uint param_4,int param_5,
                  undefined8 param_6,ulong param_7)

{
  bool bVar1;
  __pid_t _Var2;
  int iVar3;
  undefined8 uVar4;
  time_t tVar5;
  
  uVar4 = FUN_0043eb70();
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  if ((*param_1 != 0) && (uVar4 = FUN_003d518c(), (int)uVar4 == 0)) {
    return uVar4;
  }
  iVar3 = (int)param_1[0x1e];
  if (iVar3 == 1) {
LAB_004601d8:
    if (*(uint *)(param_1 + 0x10) < param_4) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/rands/drbg.c",0x291,"ossl_prov_drbg_generate");
      uVar4 = 0xb5;
    }
    else if ((ulong)param_1[0x11] < param_3) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/rands/drbg.c",0x296,"ossl_prov_drbg_generate");
      uVar4 = 0xc4;
    }
    else if ((ulong)param_1[0x17] < param_7) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/rands/drbg.c",0x29a,"ossl_prov_drbg_generate");
      uVar4 = 0xb8;
    }
    else {
      _Var2 = getpid();
      bVar1 = (int)param_1[0xf] != _Var2;
      if (bVar1) {
        *(__pid_t *)(param_1 + 0xf) = _Var2;
      }
      if (*(uint *)((long)param_1 + 0xc4) != 0) {
        bVar1 = *(uint *)((long)param_1 + 0xc4) <= *(uint *)(param_1 + 0x18) || bVar1;
      }
      if (0 < param_1[0x1a]) {
        tVar5 = time((time_t *)0x0);
        if ((tVar5 < param_1[0x19]) || (param_1[0x1a] <= tVar5 - param_1[0x19])) {
          bVar1 = true;
        }
      }
      if ((param_1[6] != 0) && (iVar3 = FUN_00461074(param_1), iVar3 != (int)param_1[0x1c])) {
        bVar1 = true;
      }
      if (bVar1 || param_5 != 0) {
        iVar3 = FUN_00460d3c(param_1,param_5,0,0,param_6,param_7);
        if (iVar3 == 0) {
          FUN_00379868();
          FUN_0037995c("providers/implementations/rands/drbg.c",0x2b6,"ossl_prov_drbg_generate");
          uVar4 = 0xc5;
          goto LAB_004603f4;
        }
        param_7 = 0;
        param_6 = 0;
      }
      iVar3 = (*(code *)param_1[5])(param_1,param_2,param_3,param_6,param_7);
      if (iVar3 != 0) {
        uVar4 = 1;
        *(int *)(param_1 + 0x18) = (int)param_1[0x18] + 1;
        goto LAB_00460400;
      }
      *(undefined4 *)(param_1 + 0x1e) = 2;
      FUN_00379868();
      FUN_0037995c("providers/implementations/rands/drbg.c",0x2bf,"ossl_prov_drbg_generate");
      uVar4 = 0xbf;
    }
  }
  else {
    if (iVar3 == 2) {
      (*(code *)param_1[3])(param_1);
      iVar3 = (int)param_1[0x1e];
    }
    if (iVar3 == 0) {
      FUN_004604f4(param_1,(int)param_1[0x10],0,0,0);
      iVar3 = (int)param_1[0x1e];
    }
    if (iVar3 == 0) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/rands/drbg.c",0x28c,"ossl_prov_drbg_generate");
      uVar4 = 0xc1;
    }
    else {
      if (iVar3 != 2) goto LAB_004601d8;
      FUN_00379868();
      FUN_0037995c("providers/implementations/rands/drbg.c",0x288,"ossl_prov_drbg_generate");
      uVar4 = 0xc0;
    }
  }
LAB_004603f4:
  FUN_00379a5c(0x39,uVar4,0);
  uVar4 = 0;
LAB_00460400:
  if (*param_1 != 0) {
    FUN_003d519c(*param_1);
  }
  return uVar4;
}


// ===== 00463a2c  thunk_FUN_00460cb8 =====

ulong thunk_FUN_00460cb8(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                        undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  
  if (*param_1 != 0) {
    param_2 = param_2 & 0xffffffff;
    uVar1 = FUN_003d518c();
    if ((int)uVar1 == 0) {
      return uVar1;
    }
  }
  uVar1 = FUN_00460d3c(param_1,param_2,param_3,param_4,param_5,param_6);
  if (*param_1 != 0) {
    uVar1 = uVar1 & 0xffffffff;
    FUN_003d519c(*param_1);
  }
  return uVar1;
}


// ===== 00463a30  FUN_00463a30 =====

undefined ** FUN_00463a30(void)

{
  return &PTR_s_properties_0078cdc8;
}


// ===== 00463a3c  FUN_00463a3c =====

ulong FUN_00463a3c(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  if ((*param_1 == 0) || (uVar1 = FUN_003d518c(), (int)uVar1 != 0)) {
    uVar1 = FUN_004645ec(param_1,param_2);
    if (*param_1 != 0) {
      uVar1 = uVar1 & 0xffffffff;
      FUN_003d519c(*param_1);
    }
  }
  return uVar1;
}


// ===== 00463a90  FUN_00463a90 =====

undefined ** FUN_00463a90(void)

{
  return &PTR_s_digest_0078ce90;
}


// ===== 00463a9c  FUN_00463a9c =====

ulong FUN_00463a9c(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int local_34;
  
  lVar4 = param_1[0x1f];
  local_34 = 0;
  uVar1 = FUN_0046178c(param_1,param_2,&local_34);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  if (local_34 != 0) {
    return 1;
  }
  if ((*param_1 != 0) && (uVar1 = FUN_003d517c(), (int)uVar1 == 0)) {
    return uVar1;
  }
  lVar2 = FUN_003cb140(param_2,"digest");
  if (lVar2 != 0) {
    uVar1 = FUN_0043f900(lVar4);
    if (uVar1 == 0) goto LAB_00463b40;
    uVar3 = FUN_0038996c();
    uVar1 = FUN_003cd630(lVar2,uVar3);
    if ((int)uVar1 == 0) goto LAB_00463b40;
  }
  uVar1 = FUN_00461608(param_1,param_2);
LAB_00463b40:
  if (*param_1 == 0) {
    return uVar1;
  }
  FUN_003d519c(*param_1);
  return uVar1 & 0xffffffff;
}


// ===== 00463b6c  FUN_00463b6c =====

undefined8 FUN_00463b6c(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = param_1[0x1f];
  if ((*param_1 != 0) && (iVar1 = FUN_003d517c(), iVar1 == 0)) {
    return 0;
  }
  lVar2 = 0;
  do {
    if (*(char *)(lVar3 + 0x28 + lVar2) != '\0') goto LAB_00463c00;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x6f);
  lVar2 = 0;
  do {
    if (*(char *)(lVar3 + 0x97 + lVar2) != '\0') goto LAB_00463c00;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x6f);
  lVar2 = 0;
  do {
    if (*(char *)(lVar3 + 0x106 + lVar2) != '\0') goto LAB_00463c00;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x6f);
  uVar4 = 1;
  lVar3 = *param_1;
joined_r0x00463c08:
  if (lVar3 == 0) {
    return uVar4;
  }
  FUN_003d519c();
  return uVar4;
LAB_00463c00:
  uVar4 = 0;
  lVar3 = *param_1;
  goto joined_r0x00463c08;
}


// ===== 00463c34  FUN_00463c34 =====

long FUN_00463c34(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_003c96b8(0x178,"providers/implementations/rands/drbg_hash.c",0x1a7);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0xf8) = lVar1;
    *(undefined8 *)(param_1 + 0xe8) = 0x6f;
    lVar1 = 1;
    *(undefined8 *)(param_1 + 0x98) = 0x7fffffff;
    *(undefined8 *)(param_1 + 0xb8) = 0x7fffffff;
    *(undefined8 *)(param_1 + 0xb0) = 0x7fffffff;
    *(undefined8 *)(param_1 + 0xa8) = 0x7fffffff;
    *(undefined8 *)(param_1 + 0x88) = 0x10000;
  }
  return lVar1;
}


// ===== 00463c94  FUN_00463c94 =====

undefined8
FUN_00463c94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0xf8);
  FUN_0039d284(*(undefined8 *)(lVar4 + 0x18));
  lVar2 = FUN_0039d270();
  *(long *)(lVar4 + 0x18) = lVar2;
  if ((lVar2 != 0) &&
     (iVar1 = FUN_00464110(*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf8),
                           lVar4 + 0x28,0xff,param_2,param_3,param_4,param_5,param_6,param_7),
     iVar1 != 0)) {
    uVar3 = FUN_00464110(*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf8),
                         lVar4 + 0x97,0,lVar4 + 0x28,*(undefined8 *)(param_1 + 0xe8),0,0,0,0);
    return uVar3;
  }
  return 0;
}


// ===== 00463d5c  FUN_00463d5c =====

void FUN_00463d5c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xf8);
  FUN_003c89b8(lVar1 + 0x28,0x6f);
  FUN_003c89b8(lVar1 + 0x97,0x6f);
  FUN_003c89b8(lVar1 + 0x106,0x6f);
  FUN_00460ca8(param_1);
  return;
}


// ===== 00463da4  FUN_00463da4 =====

void FUN_00463da4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xf8);
  iVar1 = FUN_00464110(*(undefined8 *)(param_1 + 0xe8),lVar2,lVar2 + 0x97,1,lVar2 + 0x28,
                       *(undefined8 *)(param_1 + 0xe8),param_2,param_3,param_4,param_5);
  if (iVar1 != 0) {
    memcpy((void *)(lVar2 + 0x28),(void *)(lVar2 + 0x97),*(size_t *)(param_1 + 0xe8));
    FUN_00464110(*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf8),lVar2 + 0x97,0,
                 lVar2 + 0x28,*(undefined8 *)(param_1 + 0xe8),0,0,0,0);
    return;
  }
  return;
}


// ===== 00463e48  FUN_00463e48 =====

undefined8 FUN_00463e48(long param_1,void *param_2,ulong param_3,long param_4,long param_5)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  
  lVar14 = *(long *)(param_1 + 0xf8);
  if (*(long *)(lVar14 + 0x18) == 0) {
    uVar6 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xc0);
    lVar12 = lVar14;
    if ((param_4 != 0) && (param_5 != 0)) {
      uVar6 = FUN_0046448c(param_1,2,param_4,param_5);
      if ((int)uVar6 == 0) {
        return uVar6;
      }
      lVar12 = *(long *)(param_1 + 0xf8);
    }
    if (param_3 == 0) {
LAB_00463fbc:
      uVar6 = FUN_0046448c(param_1,3,0,0);
      if ((int)uVar6 != 0) {
        lVar12 = *(long *)(param_1 + 0xe8);
        if (lVar12 == 0) {
          lVar7 = 0;
        }
        else {
          uVar11 = 0;
          lVar7 = lVar12;
          do {
            pbVar2 = (byte *)(lVar14 + 0x27 + lVar7);
            lVar7 = lVar7 + -1;
            uVar1 = uVar11 + *pbVar2 + (uint)pbVar2[0x6f];
            uVar11 = uVar1 >> 8;
            *pbVar2 = (byte)uVar1;
          } while (lVar7 != 0);
          lVar7 = *(long *)(param_1 + 0xe8);
          if ((uVar1 & 0xff00) != 0 && lVar7 != lVar12) {
            lVar9 = 0;
            do {
              pcVar8 = (char *)(lVar14 + 0x27 + lVar9);
              cVar4 = *pcVar8 + '\x01';
              *pcVar8 = cVar4;
              bVar5 = (lVar12 - lVar7) + 1 != lVar9;
              lVar9 = lVar9 + -1;
            } while (cVar4 == '\0' && bVar5);
            lVar7 = *(long *)(param_1 + 0xe8);
          }
        }
        lVar7 = lVar14 + 0x28 + lVar7;
        uVar11 = (uint)*(byte *)(lVar7 + -1) + (uVar3 & 0xff);
        *(char *)(lVar7 + -1) = (char)uVar11;
        uVar11 = (uint)*(byte *)(lVar7 + -2) + (uVar11 >> 8) + (uVar3 >> 8 & 0xff);
        *(char *)(lVar7 + -2) = (char)uVar11;
        uVar11 = (uint)*(byte *)(lVar7 + -3) + (uVar11 >> 8) + (uVar3 >> 0x10 & 0xff);
        *(char *)(lVar7 + -3) = (char)uVar11;
        uVar3 = (uint)*(byte *)(lVar7 + -4) + (uVar11 >> 8) + (uVar3 >> 0x18);
        *(char *)(lVar7 + -4) = (char)uVar3;
        if (((uVar3 & 0xff00) != 0) && (*(long *)(param_1 + 0xe8) != 4)) {
          lVar14 = *(long *)(param_1 + 0xe8) + -5;
          pcVar8 = (char *)(lVar7 + -5);
          do {
            cVar4 = *pcVar8;
            *pcVar8 = cVar4 + '\x01';
            bVar5 = lVar14 != 0;
            lVar14 = lVar14 + -1;
            pcVar8 = pcVar8 + -1;
          } while ((char)(cVar4 + '\x01') == '\0' && bVar5);
        }
        uVar6 = 1;
      }
    }
    else {
      memcpy((void *)(lVar12 + 0x106),(void *)(lVar12 + 0x28),*(size_t *)(param_1 + 0xe8));
      uVar13 = *(undefined8 *)(lVar12 + 0x18);
      uVar6 = FUN_0043f900(lVar12);
      uVar6 = FUN_0039d92c(uVar13,uVar6,0);
      if ((int)uVar6 != 0) {
        do {
          uVar6 = FUN_0039d938(*(undefined8 *)(lVar12 + 0x18),lVar12 + 0x106,
                               *(undefined8 *)(param_1 + 0xe8));
          if ((int)uVar6 == 0) {
            return uVar6;
          }
          if (param_3 < *(ulong *)(lVar12 + 0x20)) {
            uVar6 = FUN_0039da64(*(undefined8 *)(lVar12 + 0x18),lVar12 + 0x106,0);
            if ((int)uVar6 == 0) {
              return uVar6;
            }
            memcpy(param_2,(void *)(lVar12 + 0x106),param_3);
            goto LAB_00463fbc;
          }
          uVar6 = FUN_0039da64(*(undefined8 *)(lVar12 + 0x18),param_2,0);
          if ((int)uVar6 == 0) {
            return uVar6;
          }
          lVar7 = *(long *)(lVar12 + 0x20);
          param_3 = param_3 - lVar7;
          if (param_3 == 0) goto LAB_00463fbc;
          lVar9 = *(long *)(param_1 + 0xe8);
          uVar11 = *(byte *)(lVar12 + 0x105 + lVar9) + 1;
          *(char *)(lVar12 + 0x105 + lVar9) = (char)uVar11;
          if ((uVar11 >> 8 != 0) && (*(long *)(param_1 + 0xe8) != 1)) {
            lVar10 = *(long *)(param_1 + 0xe8) + -2;
            pcVar8 = (char *)(lVar12 + 0x104 + lVar9);
            do {
              cVar4 = *pcVar8;
              *pcVar8 = cVar4 + '\x01';
              bVar5 = lVar10 != 0;
              lVar10 = lVar10 + -1;
              pcVar8 = pcVar8 + -1;
            } while ((char)(cVar4 + '\x01') == '\0' && bVar5);
          }
          uVar13 = *(undefined8 *)(lVar12 + 0x18);
          param_2 = (void *)((long)param_2 + lVar7);
          uVar6 = FUN_0043f900(lVar12);
          uVar6 = FUN_0039d92c(uVar13,uVar6,0);
        } while ((int)uVar6 != 0);
      }
    }
  }
  return uVar6;
}


// ===== 00464110  FUN_00464110 =====

undefined8
FUN_00464110(ulong param_1,long param_2,void *param_3,char param_4,undefined8 param_5,
            undefined8 param_6,long param_7,undefined8 param_8,long param_9,undefined8 param_10)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  char local_63;
  
  local_68 = '\x01';
  local_67 = (undefined1)(param_1 >> 0x15);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  local_66 = (undefined1)(param_1 >> 0xd);
  local_65 = (undefined1)(param_1 >> 5);
  local_64 = (undefined1)((int)param_1 << 3);
  if (param_4 == -1) {
    uVar4 = 5;
  }
  else {
    uVar4 = 6;
    local_63 = param_4;
  }
  uVar2 = FUN_0043f900(param_2);
  uVar2 = FUN_0039d92c(uVar3,uVar2,0);
  if ((int)uVar2 != 0) {
    if (param_7 == 0) {
      if (param_9 == 0) {
        do {
          uVar2 = FUN_0039d938(uVar3,&local_68,uVar4);
          if ((int)uVar2 == 0) {
            return uVar2;
          }
          uVar2 = FUN_0039d938(uVar3,param_5,param_6);
          if ((int)uVar2 == 0) {
            return uVar2;
          }
          if (param_1 < *(ulong *)(param_2 + 0x20)) goto LAB_00464438;
          uVar2 = FUN_0039da64(uVar3,param_3,0);
          if ((int)uVar2 == 0) {
            return uVar2;
          }
          param_1 = param_1 - *(long *)(param_2 + 0x20);
          if (param_1 == 0) {
            return 1;
          }
          param_3 = (void *)((long)param_3 + *(long *)(param_2 + 0x20));
          local_68 = local_68 + '\x01';
          uVar2 = FUN_0043f900(param_2);
          iVar1 = FUN_0039d92c(uVar3,uVar2,0);
          uVar2 = 0;
        } while (iVar1 != 0);
      }
      else {
        do {
          uVar2 = FUN_0039d938(uVar3,&local_68,uVar4);
          if ((int)uVar2 == 0) {
            return uVar2;
          }
          uVar2 = FUN_0039d938(uVar3,param_5,param_6);
          if ((int)uVar2 == 0) {
            return uVar2;
          }
          uVar2 = FUN_0039d938(uVar3,param_9,param_10);
          if ((int)uVar2 == 0) {
            return uVar2;
          }
          if (param_1 < *(ulong *)(param_2 + 0x20)) goto LAB_00464438;
          uVar2 = FUN_0039da64(uVar3,param_3,0);
          if ((int)uVar2 == 0) {
            return uVar2;
          }
          param_1 = param_1 - *(long *)(param_2 + 0x20);
          if (param_1 == 0) {
            return 1;
          }
          param_3 = (void *)((long)param_3 + *(long *)(param_2 + 0x20));
          local_68 = local_68 + '\x01';
          uVar2 = FUN_0043f900(param_2);
          iVar1 = FUN_0039d92c(uVar3,uVar2,0);
          uVar2 = 0;
        } while (iVar1 != 0);
      }
    }
    else if (param_9 == 0) {
      do {
        uVar2 = FUN_0039d938(uVar3,&local_68,uVar4);
        if ((int)uVar2 == 0) {
          return uVar2;
        }
        uVar2 = FUN_0039d938(uVar3,param_5,param_6);
        if ((int)uVar2 == 0) {
          return uVar2;
        }
        uVar2 = FUN_0039d938(uVar3,param_7,param_8);
        if ((int)uVar2 == 0) {
          return uVar2;
        }
        if (param_1 < *(ulong *)(param_2 + 0x20)) goto LAB_00464438;
        uVar2 = FUN_0039da64(uVar3,param_3,0);
        if ((int)uVar2 == 0) {
          return uVar2;
        }
        param_1 = param_1 - *(long *)(param_2 + 0x20);
        if (param_1 == 0) {
          return 1;
        }
        param_3 = (void *)((long)param_3 + *(long *)(param_2 + 0x20));
        local_68 = local_68 + '\x01';
        uVar2 = FUN_0043f900(param_2);
        iVar1 = FUN_0039d92c(uVar3,uVar2,0);
        uVar2 = 0;
      } while (iVar1 != 0);
    }
    else {
      do {
        uVar2 = FUN_0039d938(uVar3,&local_68,uVar4);
        if ((int)uVar2 == 0) {
          return uVar2;
        }
        uVar2 = FUN_0039d938(uVar3,param_5,param_6);
        if ((int)uVar2 == 0) {
          return uVar2;
        }
        uVar2 = FUN_0039d938(uVar3,param_7,param_8);
        if ((int)uVar2 == 0) {
          return uVar2;
        }
        uVar2 = FUN_0039d938(uVar3,param_9,param_10);
        if ((int)uVar2 == 0) {
          return uVar2;
        }
        if (param_1 < *(ulong *)(param_2 + 0x20)) {
LAB_00464438:
          uVar3 = FUN_0039da64(uVar3,param_2 + 0x106,0);
          if ((int)uVar3 != 0) {
            memcpy(param_3,(void *)(param_2 + 0x106),param_1);
            FUN_003c89b8(param_2 + 0x106,*(undefined8 *)(param_2 + 0x20));
            return 1;
          }
          return uVar3;
        }
        uVar2 = FUN_0039da64(uVar3,param_3,0);
        if ((int)uVar2 == 0) {
          return uVar2;
        }
        param_1 = param_1 - *(long *)(param_2 + 0x20);
        if (param_1 == 0) {
          return 1;
        }
        param_3 = (void *)((long)param_3 + *(long *)(param_2 + 0x20));
        local_68 = local_68 + '\x01';
        uVar2 = FUN_0043f900(param_2);
        uVar2 = FUN_0039d92c(uVar3,uVar2,0);
      } while ((int)uVar2 != 0);
    }
  }
  return uVar2;
}


// ===== 0046448c  FUN_0046448c =====

undefined8 FUN_0046448c(long param_1,undefined1 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 local_44 [4];
  
  lVar10 = *(long *)(param_1 + 0xf8);
  uVar11 = *(undefined8 *)(lVar10 + 0x18);
  local_44[0] = param_2;
  uVar4 = FUN_0043f900(lVar10);
  uVar4 = FUN_0039d92c(uVar11,uVar4,0);
  if (((int)uVar4 != 0) && (uVar4 = FUN_0039d938(uVar11,local_44,1), (int)uVar4 != 0)) {
    uVar4 = FUN_0039d938(uVar11,lVar10 + 0x28,*(undefined8 *)(param_1 + 0xe8));
    if (((int)uVar4 != 0) &&
       (((param_3 == 0 || (uVar4 = FUN_0039d938(uVar11,param_3,param_4), (int)uVar4 != 0)) &&
        (uVar4 = FUN_0039da64(uVar11,lVar10 + 0x106,0), (int)uVar4 != 0)))) {
      lVar7 = *(long *)(lVar10 + 0x20);
      if (lVar7 != 0) {
        uVar8 = 0;
        pbVar5 = (byte *)(lVar10 + 0x28 + *(long *)(param_1 + 0xe8) + -1);
        lVar9 = lVar7;
        do {
          pbVar6 = (byte *)(lVar10 + 0x105 + lVar9);
          lVar9 = lVar9 + -1;
          uVar1 = uVar8 + *pbVar5 + (uint)*pbVar6;
          uVar8 = uVar1 >> 8;
          pbVar6 = pbVar5 + -1;
          *pbVar5 = (byte)uVar1;
          pbVar5 = pbVar6;
        } while (lVar9 != 0);
        if (((uVar1 & 0xff00) != 0) && (lVar10 = *(long *)(param_1 + 0xe8), lVar10 != lVar7)) {
          lVar9 = 0;
          do {
            bVar2 = pbVar6[lVar9];
            pbVar6[lVar9] = bVar2 + 1;
            bVar3 = (lVar7 - lVar10) + 1 != lVar9;
            lVar9 = lVar9 + -1;
          } while ((byte)(bVar2 + 1) == 0 && bVar3);
          return 1;
        }
      }
      return 1;
    }
  }
  return uVar4;
}


// ===== 004645ec  FUN_004645ec =====

undefined8 FUN_004645ec(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0xf8);
  uVar4 = FUN_0046b880(*(undefined8 *)(param_1 + 8));
  iVar2 = FUN_0043f7c4(lVar6,param_2,uVar4);
  if (iVar2 == 0) {
    return 0;
  }
  lVar5 = FUN_0043f900(lVar6);
  if (lVar5 != 0) {
    iVar2 = FUN_004618a8(uVar4,lVar5);
    if (iVar2 == 0) {
      return 0;
    }
    uVar3 = FUN_00389a38(lVar5);
    uVar1 = uVar3 << 3 & 0xffffffc0;
    *(long *)(lVar6 + 0x20) = (long)(int)uVar3;
    if ((uVar3 << 3 & 0xffffff00) != 0) {
      uVar1 = 0x100;
    }
    *(uint *)(param_1 + 0x80) = uVar1;
    uVar4 = 0x6f;
    if (uVar3 < 0x21) {
      uVar4 = 0x37;
    }
    *(undefined8 *)(param_1 + 0xe8) = uVar4;
    *(ulong *)(param_1 + 0x90) = (ulong)(uVar1 >> 3);
    *(ulong *)(param_1 + 0xa0) = (ulong)(uVar1 >> 4);
  }
  uVar4 = FUN_00461838(param_1,param_2);
  return uVar4;
}


// ===== 004646cc  FUN_004646cc =====

undefined8
FUN_004646cc(long *param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
            undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  size_t __n;
  
  if (*param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/rands/drbg_hmac.c",0x78,"ossl_drbg_hmac_init");
    FUN_00379a5c(0x39,0x96,0);
    uVar1 = 0;
  }
  else {
    __n = param_1[4];
    memset(param_1 + 5,0,__n);
    memset(param_1 + 0xd,1,__n);
    uVar1 = FUN_0046515c(param_1,0,param_2,param_3,param_4,param_5,param_6,param_7);
    if ((int)uVar1 != 0) {
      if ((param_5 != 0 || param_3 != 0) || param_7 != 0) {
        uVar1 = FUN_0046515c(param_1,1,param_2,param_3,param_4,param_5,param_6,param_7);
        return uVar1;
      }
      return 1;
    }
  }
  return uVar1;
}


// ===== 004647fc  FUN_004647fc =====

undefined8
FUN_004647fc(undefined8 *param_1,undefined8 *param_2,ulong param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *__src;
  undefined8 uVar5;
  
  __src = param_1 + 0xd;
  uVar5 = *param_1;
  if (((param_4 == 0) || (param_5 == 0)) ||
     ((uVar3 = FUN_0046515c(param_1,0,param_4,param_5,0,0,0,0), (int)uVar3 != 0 &&
      (uVar3 = FUN_0046515c(param_1,1,param_4,param_5,0,0,0,0), (int)uVar3 != 0)))) {
    uVar3 = FUN_003ffe28(uVar5,param_1 + 5,param_1[4],0);
    iVar2 = (int)uVar3;
    puVar1 = __src;
    while( true ) {
      if (iVar2 == 0) {
        return uVar3;
      }
      uVar3 = FUN_003ffe34(uVar5,puVar1,param_1[4]);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      if (param_3 <= (ulong)param_1[4]) break;
      uVar3 = FUN_003ffe40(uVar5,param_2,0,param_3);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      lVar4 = param_1[4];
      param_3 = param_3 - lVar4;
      uVar3 = FUN_003ffe28(uVar5,param_1 + 5,lVar4,0);
      iVar2 = (int)uVar3;
      puVar1 = param_2;
      param_2 = (undefined8 *)((long)param_2 + lVar4);
    }
    uVar3 = FUN_003ffe40(uVar5,__src,0,0x40);
    if ((int)uVar3 != 0) {
      memcpy(param_2,__src,param_3);
      iVar2 = FUN_0046515c(param_1,0,param_4,param_5,0,0,0,0);
      if (iVar2 != 0) {
        if (param_5 == 0) {
          return 1;
        }
        iVar2 = FUN_0046515c(param_1,1,param_4,param_5,0,0,0,0);
        if (iVar2 != 0) {
          return 1;
        }
      }
      return 0;
    }
  }
  return uVar3;
}


// ===== 004649d4  FUN_004649d4 =====

void FUN_004649d4(void)

{
  FUN_00461234();
  return;
}


// ===== 00464a00  FUN_00464a00 =====

void FUN_00464a00(long param_1)

{
  undefined8 *puVar1;
  
  if ((param_1 != 0) && (puVar1 = *(undefined8 **)(param_1 + 0xf8), puVar1 != (undefined8 *)0x0)) {
    FUN_003ffb7c(*puVar1);
    FUN_0043f700(puVar1 + 1);
    FUN_003c9d0c(puVar1,0xa8,"providers/implementations/rands/drbg_hmac.c",0x15b);
  }
  FUN_004615c8(param_1);
  return;
}


// ===== 00464a64  FUN_00464a64 =====

ulong FUN_00464a64(long *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  
  if ((*param_1 == 0) || (uVar1 = FUN_003d518c(), (int)uVar1 != 0)) {
    uVar1 = FUN_0043eb70();
    if (((int)uVar1 != 0) && (uVar1 = FUN_004653f4(param_1,param_6), (int)uVar1 != 0)) {
      uVar1 = FUN_004604f4(param_1,param_2,param_3,param_4,param_5);
    }
    if (*param_1 != 0) {
      uVar1 = uVar1 & 0xffffffff;
      FUN_003d519c(*param_1);
    }
  }
  return uVar1;
}


// ===== 00464afc  FUN_00464afc =====

ulong FUN_00464afc(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  if ((*param_1 == 0) || (uVar1 = FUN_003d518c(), (int)uVar1 != 0)) {
    lVar2 = param_1[0x1f];
    FUN_003c89b8(lVar2 + 0x28,0x40);
    FUN_003c89b8(lVar2 + 0x68,0x40);
    uVar1 = FUN_00460ca8(param_1);
    if (*param_1 != 0) {
      uVar1 = uVar1 & 0xffffffff;
      FUN_003d519c(*param_1);
    }
  }
  return uVar1;
}


// ===== 00464b64  thunk_FUN_00460130 =====

undefined8
thunk_FUN_00460130(long *param_1,undefined8 param_2,ulong param_3,uint param_4,int param_5,
                  undefined8 param_6,ulong param_7)

{
  bool bVar1;
  __pid_t _Var2;
  int iVar3;
  undefined8 uVar4;
  time_t tVar5;
  
  uVar4 = FUN_0043eb70();
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  if ((*param_1 != 0) && (uVar4 = FUN_003d518c(), (int)uVar4 == 0)) {
    return uVar4;
  }
  iVar3 = (int)param_1[0x1e];
  if (iVar3 == 1) {
LAB_004601d8:
    if (*(uint *)(param_1 + 0x10) < param_4) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/rands/drbg.c",0x291,"ossl_prov_drbg_generate");
      uVar4 = 0xb5;
    }
    else if ((ulong)param_1[0x11] < param_3) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/rands/drbg.c",0x296,"ossl_prov_drbg_generate");
      uVar4 = 0xc4;
    }
    else if ((ulong)param_1[0x17] < param_7) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/rands/drbg.c",0x29a,"ossl_prov_drbg_generate");
      uVar4 = 0xb8;
    }
    else {
      _Var2 = getpid();
      bVar1 = (int)param_1[0xf] != _Var2;
      if (bVar1) {
        *(__pid_t *)(param_1 + 0xf) = _Var2;
      }
      if (*(uint *)((long)param_1 + 0xc4) != 0) {
        bVar1 = *(uint *)((long)param_1 + 0xc4) <= *(uint *)(param_1 + 0x18) || bVar1;
      }
      if (0 < param_1[0x1a]) {
        tVar5 = time((time_t *)0x0);
        if ((tVar5 < param_1[0x19]) || (param_1[0x1a] <= tVar5 - param_1[0x19])) {
          bVar1 = true;
        }
      }
      if ((param_1[6] != 0) && (iVar3 = FUN_00461074(param_1), iVar3 != (int)param_1[0x1c])) {
        bVar1 = true;
      }
      if (bVar1 || param_5 != 0) {
        iVar3 = FUN_00460d3c(param_1,param_5,0,0,param_6,param_7);
        if (iVar3 == 0) {
          FUN_00379868();
          FUN_0037995c("providers/implementations/rands/drbg.c",0x2b6,"ossl_prov_drbg_generate");
          uVar4 = 0xc5;
          goto LAB_004603f4;
        }
        param_7 = 0;
        param_6 = 0;
      }
      iVar3 = (*(code *)param_1[5])(param_1,param_2,param_3,param_6,param_7);
      if (iVar3 != 0) {
        uVar4 = 1;
        *(int *)(param_1 + 0x18) = (int)param_1[0x18] + 1;
        goto LAB_00460400;
      }
      *(undefined4 *)(param_1 + 0x1e) = 2;
      FUN_00379868();
      FUN_0037995c("providers/implementations/rands/drbg.c",0x2bf,"ossl_prov_drbg_generate");
      uVar4 = 0xbf;
    }
  }
  else {
    if (iVar3 == 2) {
      (*(code *)param_1[3])(param_1);
      iVar3 = (int)param_1[0x1e];
    }
    if (iVar3 == 0) {
      FUN_004604f4(param_1,(int)param_1[0x10],0,0,0);
      iVar3 = (int)param_1[0x1e];
    }
    if (iVar3 == 0) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/rands/drbg.c",0x28c,"ossl_prov_drbg_generate");
      uVar4 = 0xc1;
    }
    else {
      if (iVar3 != 2) goto LAB_004601d8;
      FUN_00379868();
      FUN_0037995c("providers/implementations/rands/drbg.c",0x288,"ossl_prov_drbg_generate");
      uVar4 = 0xc0;
    }
  }
LAB_004603f4:
  FUN_00379a5c(0x39,uVar4,0);
  uVar4 = 0;
LAB_00460400:
  if (*param_1 != 0) {
    FUN_003d519c(*param_1);
  }
  return uVar4;
}


// ===== 00464b68  thunk_FUN_00460cb8 =====

ulong thunk_FUN_00460cb8(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                        undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  
  if (*param_1 != 0) {
    param_2 = param_2 & 0xffffffff;
    uVar1 = FUN_003d518c();
    if ((int)uVar1 == 0) {
      return uVar1;
    }
  }
  uVar1 = FUN_00460d3c(param_1,param_2,param_3,param_4,param_5,param_6);
  if (*param_1 != 0) {
    uVar1 = uVar1 & 0xffffffff;
    FUN_003d519c(*param_1);
  }
  return uVar1;
}


// ===== 00464b6c  FUN_00464b6c =====

undefined ** FUN_00464b6c(void)

{
  return &PTR_s_properties_0078d1f8;
}


// ===== 00464b78  FUN_00464b78 =====

ulong FUN_00464b78(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  if ((*param_1 == 0) || (uVar1 = FUN_003d518c(), (int)uVar1 != 0)) {
    uVar1 = FUN_004653f4(param_1,param_2);
    if (*param_1 != 0) {
      uVar1 = uVar1 & 0xffffffff;
      FUN_003d519c(*param_1);
    }
  }
  return uVar1;
}


// ===== 00464bcc  FUN_00464bcc =====

undefined ** FUN_00464bcc(void)

{
  return &PTR_DAT_0078d2e8;
}


// ===== 00464bd8  FUN_00464bd8 =====

ulong FUN_00464bd8(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  int local_34;
  
  plVar5 = (long *)param_1[0x1f];
  local_34 = 0;
  uVar1 = FUN_0046178c(param_1,param_2,&local_34);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  if (local_34 != 0) {
    return 1;
  }
  if ((*param_1 != 0) && (uVar1 = FUN_003d517c(), (int)uVar1 == 0)) {
    return uVar1;
  }
  lVar2 = FUN_003cb140(param_2,&DAT_001f1681);
  if (lVar2 == 0) {
LAB_00464c74:
    lVar2 = FUN_003cb140(param_2,"digest");
    if (lVar2 == 0) {
LAB_00464cac:
      uVar1 = FUN_00461608(param_1,param_2);
    }
    else {
      uVar1 = FUN_0043f900(plVar5 + 1);
      if (uVar1 != 0) {
        uVar3 = FUN_0038996c();
        uVar1 = FUN_003cd630(lVar2,uVar3);
        if ((int)uVar1 != 0) goto LAB_00464cac;
      }
    }
  }
  else {
    lVar4 = *plVar5;
    if (lVar4 == 0) {
      uVar1 = 0;
      lVar2 = *param_1;
      if (lVar2 == 0) {
        return 0;
      }
      goto LAB_00464cc0;
    }
    FUN_003ffcc0(lVar4);
    uVar3 = FUN_00400160();
    uVar1 = FUN_003cd630(lVar2,uVar3);
    if ((int)uVar1 != 0) goto LAB_00464c74;
  }
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return uVar1;
  }
LAB_00464cc0:
  FUN_003d519c(lVar2);
  return uVar1 & 0xffffffff;
}


// ===== 00464cf4  FUN_00464cf4 =====

bool FUN_00464cf4(long *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = param_1[0x1f];
  if ((*param_1 == 0) || (iVar2 = FUN_003d517c(), iVar2 != 0)) {
    if (((((((*(char *)(lVar3 + 0x28) == '\0') && (*(char *)(lVar3 + 0x29) == '\0')) &&
           (*(char *)(lVar3 + 0x2a) == '\0')) &&
          ((*(char *)(lVar3 + 0x2b) == '\0' && (*(char *)(lVar3 + 0x2c) == '\0')))) &&
         ((((*(char *)(lVar3 + 0x2d) == '\0' &&
            ((*(char *)(lVar3 + 0x2e) == '\0' && (*(char *)(lVar3 + 0x2f) == '\0')))) &&
           ((*(char *)(lVar3 + 0x30) == '\0' &&
            (((*(char *)(lVar3 + 0x31) == '\0' && (*(char *)(lVar3 + 0x32) == '\0')) &&
             (*(char *)(lVar3 + 0x33) == '\0')))))) &&
          ((((*(char *)(lVar3 + 0x34) == '\0' && (*(char *)(lVar3 + 0x35) == '\0')) &&
            ((*(char *)(lVar3 + 0x36) == '\0' &&
             ((*(char *)(lVar3 + 0x37) == '\0' && (*(char *)(lVar3 + 0x38) == '\0')))))) &&
           (*(char *)(lVar3 + 0x39) == '\0')))))) &&
        (((((*(char *)(lVar3 + 0x3a) == '\0' && (*(char *)(lVar3 + 0x3b) == '\0')) &&
           (*(char *)(lVar3 + 0x3c) == '\0')) &&
          ((*(char *)(lVar3 + 0x3d) == '\0' && (*(char *)(lVar3 + 0x3e) == '\0')))) &&
         ((((*(char *)(lVar3 + 0x3f) == '\0' &&
            ((*(char *)(lVar3 + 0x40) == '\0' && (*(char *)(lVar3 + 0x41) == '\0')))) &&
           (*(char *)(lVar3 + 0x42) == '\0')) &&
          ((((((*(char *)(lVar3 + 0x43) == '\0' && (*(char *)(lVar3 + 0x44) == '\0')) &&
              (*(char *)(lVar3 + 0x45) == '\0')) &&
             ((*(char *)(lVar3 + 0x46) == '\0' && (*(char *)(lVar3 + 0x47) == '\0')))) &&
            (*(char *)(lVar3 + 0x48) == '\0')) &&
           (((*(char *)(lVar3 + 0x49) == '\0' && (*(char *)(lVar3 + 0x4a) == '\0')) &&
            ((*(char *)(lVar3 + 0x4b) == '\0' &&
             (((*(char *)(lVar3 + 0x4c) == '\0' && (*(char *)(lVar3 + 0x4d) == '\0')) &&
              (*(char *)(lVar3 + 0x4e) == '\0')))))))))))))) &&
       ((((((((*(char *)(lVar3 + 0x4f) == '\0' && (*(char *)(lVar3 + 0x50) == '\0')) &&
             (*(char *)(lVar3 + 0x51) == '\0')) &&
            (((*(char *)(lVar3 + 0x52) == '\0' && (*(char *)(lVar3 + 0x53) == '\0')) &&
             ((*(char *)(lVar3 + 0x54) == '\0' &&
              (((*(char *)(lVar3 + 0x55) == '\0' && (*(char *)(lVar3 + 0x56) == '\0')) &&
               (*(char *)(lVar3 + 0x57) == '\0')))))))) &&
           (((*(char *)(lVar3 + 0x58) == '\0' && (*(char *)(lVar3 + 0x59) == '\0')) &&
            ((*(char *)(lVar3 + 0x5a) == '\0' &&
             (((*(char *)(lVar3 + 0x5b) == '\0' && (*(char *)(lVar3 + 0x5c) == '\0')) &&
              ((*(char *)(lVar3 + 0x5d) == '\0' &&
               ((((*(char *)(lVar3 + 0x5e) == '\0' && (*(char *)(lVar3 + 0x5f) == '\0')) &&
                 (*(char *)(lVar3 + 0x60) == '\0')) &&
                ((*(char *)(lVar3 + 0x61) == '\0' && (*(char *)(lVar3 + 0x62) == '\0'))))))))))))))
          && ((*(char *)(lVar3 + 99) == '\0' &&
              ((*(char *)(lVar3 + 100) == '\0' && (*(char *)(lVar3 + 0x65) == '\0')))))) &&
         (((*(char *)(lVar3 + 0x66) == '\0' &&
           (((*(char *)(lVar3 + 0x67) == '\0' && (*(char *)(lVar3 + 0x68) == '\0')) &&
            (*(char *)(lVar3 + 0x69) == '\0')))) &&
          (((((((((((*(char *)(lVar3 + 0x6a) == '\0' && (*(char *)(lVar3 + 0x6b) == '\0')) &&
                   (*(char *)(lVar3 + 0x6c) == '\0')) &&
                  ((*(char *)(lVar3 + 0x6d) == '\0' && (*(char *)(lVar3 + 0x6e) == '\0')))) &&
                 ((*(char *)(lVar3 + 0x6f) == '\0' &&
                  (((*(char *)(lVar3 + 0x70) == '\0' && (*(char *)(lVar3 + 0x71) == '\0')) &&
                   (*(char *)(lVar3 + 0x72) == '\0')))))) &&
                ((*(char *)(lVar3 + 0x73) == '\0' && (*(char *)(lVar3 + 0x74) == '\0')))) &&
               ((*(char *)(lVar3 + 0x75) == '\0' &&
                (((*(char *)(lVar3 + 0x76) == '\0' && (*(char *)(lVar3 + 0x77) == '\0')) &&
                 ((*(char *)(lVar3 + 0x78) == '\0' &&
                  ((((*(char *)(lVar3 + 0x79) == '\0' && (*(char *)(lVar3 + 0x7a) == '\0')) &&
                    (*(char *)(lVar3 + 0x7b) == '\0')) &&
                   ((*(char *)(lVar3 + 0x7c) == '\0' && (*(char *)(lVar3 + 0x7d) == '\0'))))))))))))
              && (*(char *)(lVar3 + 0x7e) == '\0')) &&
             (((*(char *)(lVar3 + 0x7f) == '\0' && (*(char *)(lVar3 + 0x80) == '\0')) &&
              (((*(char *)(lVar3 + 0x81) == '\0' &&
                (((*(char *)(lVar3 + 0x82) == '\0' && (*(char *)(lVar3 + 0x83) == '\0')) &&
                 (*(char *)(lVar3 + 0x84) == '\0')))) &&
               (((*(char *)(lVar3 + 0x85) == '\0' && (*(char *)(lVar3 + 0x86) == '\0')) &&
                (*(char *)(lVar3 + 0x87) == '\0')))))))) &&
            ((*(char *)(lVar3 + 0x88) == '\0' && (*(char *)(lVar3 + 0x89) == '\0')))) &&
           ((((*(char *)(lVar3 + 0x8a) == '\0' &&
              (((*(char *)(lVar3 + 0x8b) == '\0' && (*(char *)(lVar3 + 0x8c) == '\0')) &&
               (*(char *)(lVar3 + 0x8d) == '\0')))) &&
             (((*(char *)(lVar3 + 0x8e) == '\0' && (*(char *)(lVar3 + 0x8f) == '\0')) &&
              ((*(char *)(lVar3 + 0x90) == '\0' &&
               (((*(char *)(lVar3 + 0x91) == '\0' && (*(char *)(lVar3 + 0x92) == '\0')) &&
                ((*(char *)(lVar3 + 0x93) == '\0' &&
                 (((((*(char *)(lVar3 + 0x94) == '\0' && (*(char *)(lVar3 + 0x95) == '\0')) &&
                    (*(char *)(lVar3 + 0x96) == '\0')) &&
                   ((*(char *)(lVar3 + 0x97) == '\0' && (*(char *)(lVar3 + 0x98) == '\0')))) &&
                  (*(char *)(lVar3 + 0x99) == '\0')))))))))))) &&
            (((*(char *)(lVar3 + 0x9a) == '\0' && (*(char *)(lVar3 + 0x9b) == '\0')) &&
             (*(char *)(lVar3 + 0x9c) == '\0')))))))))) &&
        (((((*(char *)(lVar3 + 0x9d) == '\0' && (*(char *)(lVar3 + 0x9e) == '\0')) &&
           (*(char *)(lVar3 + 0x9f) == '\0')) &&
          ((((*(char *)(lVar3 + 0xa0) == '\0' && (*(char *)(lVar3 + 0xa1) == '\0')) &&
            ((*(char *)(lVar3 + 0xa2) == '\0' &&
             ((*(char *)(lVar3 + 0xa3) == '\0' && (*(char *)(lVar3 + 0xa4) == '\0')))))) &&
           (*(char *)(lVar3 + 0xa5) == '\0')))) && (*(char *)(lVar3 + 0xa6) == '\0')))))) {
      bVar1 = *(char *)(lVar3 + 0xa7) == '\0';
      lVar3 = *param_1;
    }
    else {
      bVar1 = false;
      lVar3 = *param_1;
    }
    if (lVar3 != 0) {
      FUN_003d519c();
      return bVar1;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


// ===== 0046515c  FUN_0046515c =====

ulong FUN_0046515c(undefined8 *param_1,undefined1 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 local_54 [4];
  
  uVar3 = *param_1;
  local_54[0] = param_2;
  uVar2 = FUN_003ffe28(uVar3,param_1 + 5,param_1[4],0);
  if ((((((int)uVar2 != 0) &&
        (uVar2 = FUN_003ffe34(uVar3,param_1 + 0xd,param_1[4]), (int)uVar2 != 0)) &&
       (uVar2 = FUN_003ffe34(uVar3,local_54,1), (int)uVar2 != 0)) &&
      (((param_3 == 0 || (param_4 == 0)) ||
       (uVar2 = FUN_003ffe34(uVar3,param_3,param_4), (int)uVar2 != 0)))) &&
     ((((param_5 == 0 || (param_6 == 0)) ||
       (uVar2 = FUN_003ffe34(uVar3,param_5,param_6), (int)uVar2 != 0)) &&
      (((((param_7 == 0 || (param_8 == 0)) ||
         (uVar2 = FUN_003ffe34(uVar3,param_7,param_8), (int)uVar2 != 0)) &&
        ((uVar2 = FUN_003ffe40(uVar3,param_1 + 5,0,0x40), (int)uVar2 != 0 &&
         (uVar2 = FUN_003ffe28(uVar3,param_1 + 5,param_1[4],0), (int)uVar2 != 0)))) &&
       (uVar2 = FUN_003ffe34(uVar3,param_1 + 0xd,param_1[4]), (int)uVar2 != 0)))))) {
    iVar1 = FUN_003ffe40(uVar3,param_1 + 0xd,0,0x40);
    uVar2 = (ulong)(iVar1 != 0);
  }
  return uVar2;
}


// ===== 004652ac  FUN_004652ac =====

long FUN_004652ac(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_003c96b8(0xa8,"providers/implementations/rands/drbg_hmac.c",0x13b);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0xf8) = lVar1;
    lVar1 = 1;
    *(undefined8 *)(param_1 + 0x98) = 0x7fffffff;
    *(undefined8 *)(param_1 + 0xb8) = 0x7fffffff;
    *(undefined8 *)(param_1 + 0x88) = 0x10000;
    *(undefined8 *)(param_1 + 0xb0) = 0x7fffffff;
    *(undefined8 *)(param_1 + 0xa8) = 0x7fffffff;
  }
  return lVar1;
}


// ===== 00465304  FUN_00465304 =====

void FUN_00465304(long param_1)

{
  FUN_004646cc(*(undefined8 *)(param_1 + 0xf8));
  return;
}


// ===== 0046530c  FUN_0046530c =====

void FUN_0046530c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xf8);
  FUN_003c89b8(lVar1 + 0x28,0x40);
  FUN_003c89b8(lVar1 + 0x68,0x40);
  FUN_00460ca8(param_1);
  return;
}


// ===== 00465348  FUN_00465348 =====

undefined8
FUN_00465348(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0xf8);
  uVar1 = FUN_0046515c(uVar2,0,param_2,param_3,param_4,param_5,0,0);
  if ((int)uVar1 != 0) {
    if (param_5 != 0 || param_3 != 0) {
      uVar1 = FUN_0046515c(uVar2,1,param_2,param_3,param_4,param_5,0,0);
      return uVar1;
    }
    uVar1 = 1;
  }
  return uVar1;
}


// ===== 004653ec  FUN_004653ec =====

void FUN_004653ec(long param_1)

{
  FUN_004647fc(*(undefined8 *)(param_1 + 0xf8));
  return;
}


// ===== 004653f4  FUN_004653f4 =====

undefined8 FUN_004653f4(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0xf8);
  uVar3 = FUN_0046b880(*(undefined8 *)(param_1 + 8));
  iVar2 = FUN_0043f7c4(plVar5 + 1,param_2,uVar3);
  if (iVar2 == 0) {
    return 0;
  }
  lVar4 = FUN_0043f900(plVar5 + 1);
  if (lVar4 == 0) {
    iVar2 = FUN_0043fb50(plVar5,param_2,0,0,0,uVar3);
    if (iVar2 == 0) {
      return 0;
    }
  }
  else {
    iVar2 = FUN_004618a8(uVar3,lVar4);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = FUN_0043fb50(plVar5,param_2,0,0,0,uVar3);
    if (iVar2 == 0) {
      return 0;
    }
    if (*plVar5 != 0) {
      iVar2 = FUN_00389a38(lVar4);
      uVar1 = iVar2 << 3 & 0xffffffc0;
      plVar5[4] = (long)iVar2;
      if ((iVar2 << 3 & 0xffffff00U) != 0) {
        uVar1 = 0x100;
      }
      *(long *)(param_1 + 0xe8) = (long)iVar2;
      *(uint *)(param_1 + 0x80) = uVar1;
      *(ulong *)(param_1 + 0x90) = (ulong)(uVar1 >> 3);
      *(ulong *)(param_1 + 0xa0) = (ulong)(uVar1 >> 4);
    }
  }
  uVar3 = FUN_00461838(param_1,param_2);
  return uVar3;
}


// ===== 00465510  FUN_00465510 =====

undefined8 * FUN_00465510(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == 0) {
    puVar1 = (undefined8 *)FUN_003c8474(0x10,"providers/implementations/rands/seed_src.c",0x37);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = param_1;
      *(undefined4 *)(puVar1 + 1) = 0;
      return puVar1;
    }
  }
  else {
    FUN_00379868();
    FUN_0037995c("providers/implementations/rands/seed_src.c",0x33,"seed_src_new");
    FUN_00379a5c(0x39,0xe5,0);
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}


// ===== 0046558c  FUN_0046558c =====

void FUN_0046558c(undefined8 param_1)

{
  FUN_003c86b4(param_1,"providers/implementations/rands/seed_src.c",0x42);
  return;
}


// ===== 0046559c  FUN_0046559c =====

undefined8 FUN_0046559c(long param_1)

{
  *(undefined4 *)(param_1 + 8) = 1;
  return 1;
}


// ===== 004655b0  FUN_004655b0 =====

undefined8 FUN_004655b0(long param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  return 1;
}


// ===== 004655c0  FUN_004655c0 =====

bool FUN_004655c0(long param_1,void *param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  void *__src;
  size_t __n;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 8) == 1) {
    lVar1 = FUN_003eec24(param_4,1,param_3,param_3);
    if (lVar1 != 0) {
      lVar2 = FUN_00466108();
      if (lVar2 != 0) {
        __src = (void *)FUN_003eede8(lVar1);
        __n = FUN_003eedf8(lVar1);
        memcpy(param_2,__src,__n);
      }
      FUN_003eed6c(lVar1);
      return lVar2 != 0;
    }
    FUN_00379868();
    FUN_0037995c("providers/implementations/rands/seed_src.c",0x6b,"seed_src_generate");
    uVar3 = 0x80024;
  }
  else {
    FUN_00379868();
    FUN_0037995c("providers/implementations/rands/seed_src.c",0x65,"seed_src_generate");
    uVar3 = 0xc0;
    if (*(int *)(param_1 + 8) != 2) {
      uVar3 = 0xc1;
    }
  }
  FUN_00379a5c(0x39,uVar3,0);
  return false;
}


// ===== 004656c8  FUN_004656c8 =====

undefined8 FUN_004656c8(long param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) == 1) {
    return 1;
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/rands/seed_src.c",0x85,"seed_src_reseed");
  uVar1 = 0xc0;
  if (*(int *)(param_1 + 8) != 2) {
    uVar1 = 0xc1;
  }
  FUN_00379a5c(0x39,uVar1,0);
  return 0;
}


// ===== 00465734  FUN_00465734 =====

undefined8 FUN_00465734(void)

{
  return 1;
}


// ===== 0046573c  FUN_0046573c =====

undefined8 FUN_0046573c(void)

{
  return 1;
}


// ===== 00465744  FUN_00465744 =====

void FUN_00465744(void)

{
  return;
}


// ===== 00465748  FUN_00465748 =====

undefined ** FUN_00465748(void)

{
  return &PTR_s_state_0078d658;
}


// ===== 00465754  FUN_00465754 =====

undefined8 FUN_00465754(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_003cb140(param_2,"state");
  if ((((lVar1 == 0) ||
       (uVar2 = thunk_FUN_003cb490(lVar1,*(undefined4 *)(param_1 + 8)), (int)uVar2 != 0)) &&
      ((lVar1 = FUN_003cb140(param_2,"strength"), lVar1 == 0 ||
       (uVar2 = thunk_FUN_003cb490(lVar1,0x400), (int)uVar2 != 0)))) &&
     ((lVar1 = FUN_003cb140(param_2,"max_request"), lVar1 == 0 ||
      (uVar2 = thunk_FUN_003cc2a4(lVar1,0x80), (int)uVar2 != 0)))) {
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 004657d8  FUN_004657d8 =====

undefined8 FUN_004657d8(void)

{
  return 1;
}


// ===== 004657e0  FUN_004657e0 =====

ulong FUN_004657e0(undefined8 param_1,long *param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,ulong param_8)

{
  byte *pbVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar3 = FUN_003eec24(param_3,1,param_4,param_5);
  if (lVar3 == 0) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/rands/seed_src.c",0xbb,"seed_get_seed");
    FUN_00379a5c(0x39,0x80024,0);
    return 0;
  }
  lVar4 = FUN_00466108();
  if (lVar4 == 0) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/rands/seed_src.c",0xca,"seed_get_seed");
    FUN_00379a5c(0x39,0xba,0);
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_003eedf8(lVar3);
    lVar4 = FUN_003eee00(lVar3);
    *param_2 = lVar4;
    if (param_8 != 0) {
      uVar6 = 0;
      do {
        uVar2 = 0;
        if (uVar5 != 0) {
          uVar2 = uVar6 / uVar5;
        }
        pbVar1 = (byte *)(param_7 + uVar6);
        lVar4 = uVar6 - uVar2 * uVar5;
        uVar6 = uVar6 + 1;
        *(byte *)(*param_2 + lVar4) = *(byte *)(*param_2 + lVar4) ^ *pbVar1;
      } while (param_8 != uVar6);
    }
  }
  FUN_003eed6c(lVar3);
  return uVar5;
}


// ===== 00465910  FUN_00465910 =====

void FUN_00465910(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_003c9d0c(param_2,param_3,"providers/implementations/rands/seed_src.c",0xd3);
  return;
}


// ===== 0046592c  FUN_0046592c =====

void FUN_0046592c(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_003c8474(0x58,"providers/implementations/rands/test_rng.c",0x3a);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[3] = 0x7fffffff;
    *(undefined4 *)((long)puVar1 + 0xc) = 0;
  }
  return;
}


// ===== 00465970  FUN_00465970 =====

void FUN_00465970(long param_1)

{
  if (param_1 != 0) {
    FUN_003c86b4(*(undefined8 *)(param_1 + 0x20),"providers/implementations/rands/test_rng.c",0x4a);
    FUN_003c86b4(*(undefined8 *)(param_1 + 0x28),"providers/implementations/rands/test_rng.c",0x4b);
    FUN_003d51ac(*(undefined8 *)(param_1 + 0x48));
    FUN_003c86b4(param_1,"providers/implementations/rands/test_rng.c",0x4d);
    return;
  }
  return;
}


// ===== 004659d4  FUN_004659d4 =====

undefined8 FUN_004659d4(long param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 in_x5;
  
  uVar1 = FUN_00465c54(param_1,in_x5);
  if ((int)uVar1 != 0) {
    if (param_2 <= *(uint *)(param_1 + 0x10)) {
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0xc) = 1;
      *(undefined4 *)(param_1 + 0x50) = 0xd3abc8e;
      return 1;
    }
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 00465a34  FUN_00465a34 =====

undefined8 FUN_00465a34(long param_1)

{
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return 1;
}


// ===== 00465a48  FUN_00465a48 =====

undefined8 FUN_00465a48(long param_1,undefined1 *param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  
  if (*(uint *)(param_1 + 0x10) < param_4) {
    return 0;
  }
  if (*(int *)(param_1 + 8) != 0) {
    if (param_3 != 0) {
      do {
        param_3 = param_3 - 1;
        uVar1 = *(uint *)(param_1 + 0x50) ^ *(uint *)(param_1 + 0x50) << 0xd;
        uVar1 = uVar1 ^ uVar1 >> 0x11;
        uVar1 = uVar1 ^ uVar1 << 5;
        *(uint *)(param_1 + 0x50) = uVar1;
        *param_2 = (char)uVar1;
        param_2 = param_2 + 1;
      } while (param_3 != 0);
    }
    return 1;
  }
  if ((ulong)(*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x38)) < param_3) {
    return 0;
  }
  memcpy(param_2,(void *)(*(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x38)),param_3);
  *(ulong *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + param_3;
  return 1;
}


// ===== 00465b04  FUN_00465b04 =====

undefined8 FUN_00465b04(void)

{
  return 1;
}


// ===== 00465b0c  FUN_00465b0c =====

long FUN_00465b0c(long param_1,void *param_2,uint param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  
  if (param_3 <= *(uint *)(param_1 + 0x10)) {
    if (*(int *)(param_1 + 8) != 0) {
      if (param_4 != 0) {
        lVar2 = 0;
        do {
          uVar1 = *(uint *)(param_1 + 0x50) ^ *(uint *)(param_1 + 0x50) << 0xd;
          uVar1 = uVar1 ^ uVar1 >> 0x11;
          uVar1 = uVar1 ^ uVar1 << 5;
          *(uint *)(param_1 + 0x50) = uVar1;
          *(char *)((long)param_2 + lVar2) = (char)uVar1;
          lVar2 = lVar2 + 1;
        } while (param_4 != lVar2);
      }
      return param_4;
    }
    if (*(void **)(param_1 + 0x28) != (void *)0x0) {
      if (param_2 != (void *)0x0) {
        memcpy(param_2,*(void **)(param_1 + 0x28),*(size_t *)(param_1 + 0x40));
      }
      return *(long *)(param_1 + 0x40);
    }
  }
  return 0;
}


// ===== 00465ba0  FUN_00465ba0 =====

undefined8 FUN_00465ba0(long param_1)

{
  long lVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x48) == 0)) {
    lVar1 = FUN_003d5150();
    *(long *)(param_1 + 0x48) = lVar1;
    if (lVar1 != 0) {
      return 1;
    }
    FUN_00379868();
    FUN_0037995c("providers/implementations/rands/test_rng.c",299,"test_rng_enable_locking");
    FUN_00379a5c(0x39,0x7e,0);
    return 0;
  }
  return 1;
}


// ===== 00465c1c  FUN_00465c1c =====

undefined8 FUN_00465c1c(long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x48) != 0)) {
    uVar1 = FUN_003d518c();
    return uVar1;
  }
  return 1;
}


// ===== 00465c34  FUN_00465c34 =====

void FUN_00465c34(long param_1)

{
  if ((param_1 != 0) && (*(long *)(param_1 + 0x48) != 0)) {
    FUN_003d519c();
    return;
  }
  return;
}


// ===== 00465c48  FUN_00465c48 =====

undefined ** FUN_00465c48(void)

{
  return &PTR_s_test_entropy_0078d808;
}


// ===== 00465c54  FUN_00465c54 =====

undefined8 FUN_00465c54(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 local_28;
  
  local_30 = 0;
  local_28 = 0;
  if (param_2 != 0) {
    lVar1 = FUN_003cb19c(param_2,"strength");
    if ((lVar1 != 0) && (uVar2 = thunk_FUN_003cb68c(lVar1,param_1 + 0x10), (int)uVar2 == 0)) {
      return uVar2;
    }
    lVar1 = FUN_003cb19c(param_2,"test_entropy");
    if (lVar1 != 0) {
      uVar2 = FUN_003cd608(lVar1,&local_28,0,&local_30);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      FUN_003c86b4(*(undefined8 *)(param_1 + 0x20),"providers/implementations/rands/test_rng.c",0xeb
                  );
      uVar2 = local_28;
      local_28 = 0;
      *(undefined8 *)(param_1 + 0x20) = uVar2;
      *(undefined8 *)(param_1 + 0x30) = local_30;
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    lVar1 = FUN_003cb19c(param_2,"test_nonce");
    if (lVar1 != 0) {
      uVar2 = FUN_003cd608(lVar1,&local_28,0,&local_30);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      FUN_003c86b4(*(undefined8 *)(param_1 + 0x28),"providers/implementations/rands/test_rng.c",0xf6
                  );
      *(undefined8 *)(param_1 + 0x28) = local_28;
      *(undefined8 *)(param_1 + 0x40) = local_30;
    }
    lVar1 = FUN_003cb19c(param_2,"max_request");
    if ((lVar1 != 0) && (uVar2 = thunk_FUN_003cc060(lVar1,param_1 + 0x18), (int)uVar2 == 0)) {
      return uVar2;
    }
    lVar1 = FUN_003cb19c(param_2,"generate");
    if ((lVar1 != 0) && (uVar2 = thunk_FUN_003cb68c(lVar1,param_1 + 8), (int)uVar2 == 0)) {
      return uVar2;
    }
  }
  return 1;
}


// ===== 00465d7c  FUN_00465d7c =====

undefined ** FUN_00465d7c(void)

{
  return &PTR_s_state_0078d8f8;
}


// ===== 00465d88  FUN_00465d88 =====

undefined8 FUN_00465d88(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_003cb140(param_2,"state");
  if ((((lVar2 == 0) ||
       (uVar3 = thunk_FUN_003cb490(lVar2,*(undefined4 *)(param_1 + 0xc)), (int)uVar3 != 0)) &&
      ((lVar2 = FUN_003cb140(param_2,"strength"), lVar2 == 0 ||
       (uVar3 = thunk_FUN_003cb490(lVar2,*(undefined4 *)(param_1 + 0x10)), (int)uVar3 != 0)))) &&
     ((lVar2 = FUN_003cb140(param_2,"max_request"), lVar2 == 0 ||
      (uVar3 = thunk_FUN_003cc2a4(lVar2,*(undefined8 *)(param_1 + 0x18)), (int)uVar3 != 0)))) {
    lVar2 = FUN_003cb140(param_2,"generate");
    if ((lVar2 == 0) || (iVar1 = thunk_FUN_003cb960(lVar2,*(undefined4 *)(param_1 + 8)), iVar1 == 0)
       ) {
      return 1;
    }
    uVar3 = 0;
  }
  return uVar3;
}


// ===== 00465e3c  FUN_00465e3c =====

undefined8 FUN_00465e3c(void)

{
  return 1;
}


// ===== 00465e44  FUN_00465e44 =====

ulong FUN_00465e44(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  *param_2 = *(undefined8 *)(param_1 + 0x20);
  if (param_5 <= uVar1) {
    uVar1 = param_5;
  }
  return uVar1;
}


// ===== 00465e5c  FUN_00465e5c =====

undefined8 FUN_00465e5c(void)

{
  DAT_007ad070 = 0xffffffff;
  DAT_007ad098 = 0xffffffff;
  DAT_007ad0c0 = 0xffffffff;
  DAT_007ad0e8 = 0xffffffff;
  return 1;
}


// ===== 00465e80  FUN_00465e80 =====

int FUN_00465e80(void)

{
  int iVar1;
  __dev_t local_a0;
  __ino_t local_98;
  uint local_90;
  long local_80;
  
  if ((((DAT_007ad070 != -1) && (iVar1 = fstat(DAT_007ad070,(stat *)&local_a0), iVar1 != -1)) &&
      (DAT_007ad078 == local_a0)) &&
     (((DAT_007ad080 == local_98 && ((local_90 ^ DAT_007ad088) < 0x200)) &&
      (DAT_007ad090 == local_80)))) {
    close(DAT_007ad070);
  }
  DAT_007ad070 = 0xffffffff;
  if (((DAT_007ad098 != -1) && (iVar1 = fstat(DAT_007ad098,(stat *)&local_a0), iVar1 != -1)) &&
     ((DAT_007ad0a0 == local_a0 &&
      (((DAT_007ad0a8 == local_98 && ((local_90 ^ DAT_007ad0b0) < 0x200)) &&
       (DAT_007ad0b8 == local_80)))))) {
    close(DAT_007ad098);
  }
  DAT_007ad098 = 0xffffffff;
  if (((DAT_007ad0c0 != -1) && (iVar1 = fstat(DAT_007ad0c0,(stat *)&local_a0), iVar1 != -1)) &&
     (((DAT_007ad0c8 == local_a0 &&
       ((DAT_007ad0d0 == local_98 && ((local_90 ^ DAT_007ad0d8) < 0x200)))) &&
      (DAT_007ad0e0 == local_80)))) {
    close(DAT_007ad0c0);
  }
  DAT_007ad0c0 = 0xffffffff;
  iVar1 = DAT_007ad0e8;
  if (DAT_007ad0e8 != -1) {
    iVar1 = fstat(DAT_007ad0e8,(stat *)&local_a0);
    if ((((iVar1 != -1) && (DAT_007ad0f0 == local_a0)) && (DAT_007ad0f8 == local_98)) &&
       (((local_90 ^ DAT_007ad100) < 0x200 && (DAT_007ad108 == local_80)))) {
      iVar1 = close(DAT_007ad0e8);
    }
  }
  DAT_007ad0e8 = 0xffffffff;
  return iVar1;
}


// ===== 004660c8  FUN_004660c8 =====

void FUN_004660c8(int param_1)

{
  if (param_1 != 0) {
    DAT_007a9764 = param_1;
    return;
  }
  FUN_00465e80();
  DAT_007a9764 = param_1;
  return;
}


// ===== 00466108  FUN_00466108 =====

void FUN_00466108(undefined8 param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  long lVar7;
  size_t __nbytes;
  void *__buf;
  ssize_t sVar8;
  int *piVar9;
  ulong uVar10;
  int iVar11;
  stat local_170;
  long local_e0;
  uint local_d8;
  long local_c8;
  
  lVar4 = FUN_003eee80(param_1,1);
  puVar1 = PTR_getentropy_007a1d50;
  if (lVar4 != 0) {
    iVar3 = 3;
    do {
      iVar11 = iVar3 + -1;
      if (iVar3 < 1) break;
      uVar5 = FUN_003ef254(param_1,lVar4);
      if (puVar1 == (undefined *)0x0) {
LAB_004661a8:
        lVar7 = syscall(0x116,uVar5,lVar4,0);
LAB_004661c0:
        if (lVar7 < 1) {
          if (lVar7 < 0) {
            piVar6 = (int *)__errno();
            iVar3 = *piVar6;
            goto LAB_004661d4;
          }
        }
        else {
          FUN_003ef324(param_1,lVar7,lVar7 << 3);
          lVar4 = lVar4 - lVar7;
          iVar11 = 3;
        }
      }
      else {
        iVar3 = getentropy(uVar5,lVar4);
        lVar7 = lVar4;
        if (iVar3 == 0) goto LAB_004661c0;
        piVar6 = (int *)__errno();
        iVar3 = *piVar6;
        if (iVar3 == 0x26) goto LAB_004661a8;
LAB_004661d4:
        if (iVar3 != 4) break;
      }
      iVar3 = iVar11;
    } while (lVar4 != 0);
  }
  lVar4 = FUN_003eee48(param_1);
  if (lVar4 == 0) {
    __nbytes = FUN_003eee80(param_1,1);
    if (__nbytes != 0) {
      uVar10 = 0;
      do {
        piVar6 = &DAT_007ad070 + uVar10 * 10;
        if (((((*piVar6 == -1) ||
              (iVar3 = fstat(*piVar6,(stat *)(local_170.__unused + 2)), iVar3 == -1)) ||
             ((&DAT_007ad078)[uVar10 * 5] != local_170.__unused[2])) ||
            (((&DAT_007ad080)[uVar10 * 5] != local_e0 ||
             (0x1ff < (local_d8 ^ (&DAT_007ad088)[uVar10 * 10]))))) ||
           ((&DAT_007ad090)[uVar10 * 5] != local_c8)) {
          iVar3 = open((char *)((long)&DAT_0020eee8 + (long)(int)(&DAT_0020eee8)[uVar10]),0);
          *piVar6 = iVar3;
          if (iVar3 != -1) {
            iVar3 = fstat(iVar3,&local_170);
            if (iVar3 != -1) {
              (&DAT_007ad080)[uVar10 * 5] = local_170.st_ino;
              (&DAT_007ad078)[uVar10 * 5] = local_170.st_dev;
              (&DAT_007ad088)[uVar10 * 10] = (undefined4)local_170.st_nlink;
              (&DAT_007ad090)[uVar10 * 5] = local_170._32_8_;
              goto LAB_004662bc;
            }
            close(*piVar6);
            *piVar6 = -1;
          }
        }
        else {
LAB_004662bc:
          iVar3 = *piVar6;
          if (iVar3 != -1) {
            iVar11 = 2;
            do {
              __buf = (void *)FUN_003ef254(param_1,__nbytes);
              sVar8 = read(iVar3,__buf,__nbytes);
              if (sVar8 < 1) {
                if ((sVar8 < 0) && (piVar9 = (int *)__errno(), *piVar9 != 4)) goto LAB_00466344;
              }
              else {
                FUN_003ef324(param_1,sVar8,sVar8 << 3);
                __nbytes = __nbytes - sVar8;
                iVar11 = 3;
              }
            } while ((__nbytes != 0) && (bVar2 = 0 < iVar11, iVar11 = iVar11 + -1, bVar2));
            if ((sVar8 < 0) || (DAT_007a9764 == 0)) {
LAB_00466344:
              if ((((*piVar6 != -1) &&
                   (iVar3 = fstat(*piVar6,(stat *)(local_170.__unused + 2)), iVar3 != -1)) &&
                  ((&DAT_007ad078)[uVar10 * 5] == local_170.__unused[2])) &&
                 ((((&DAT_007ad080)[uVar10 * 5] == local_e0 &&
                   ((local_d8 ^ (&DAT_007ad088)[uVar10 * 10]) < 0x200)) &&
                  ((&DAT_007ad090)[uVar10 * 5] == local_c8)))) {
                close(*piVar6);
              }
              *piVar6 = -1;
            }
            __nbytes = FUN_003eee80(param_1,1);
          }
        }
      } while ((__nbytes != 0) && (bVar2 = uVar10 < 3, uVar10 = uVar10 + 1, bVar2));
    }
    lVar4 = FUN_003eee48(param_1);
    if (lVar4 == 0) {
      FUN_003eee48(param_1);
      return;
    }
  }
  return;
}


// ===== 0046643c  FUN_0046643c =====

void FUN_0046643c(undefined8 param_1)

{
  int iVar1;
  __pid_t local_40;
  undefined4 local_3c;
  long local_38;
  timespec local_30;
  
  local_40 = getpid();
  local_3c = FUN_003d52a8();
  iVar1 = clock_gettime(0,&local_30);
  if ((iVar1 == 0) || (iVar1 = gettimeofday((timeval *)&local_30,(__timezone_ptr_t)0x0), iVar1 == 0)
     ) {
    local_38 = local_30.tv_nsec + (local_30.tv_sec << 0x20);
  }
  else {
    local_38 = time((time_t *)0x0);
  }
  FUN_003ef124(param_1,&local_40,0x10,0);
  return;
}


// ===== 004664bc  FUN_004664bc =====

void FUN_004664bc(undefined8 param_1,undefined8 param_2)

{
  FUN_00466944(param_1,param_2,&DAT_001e0e65);
  return;
}


// ===== 004664c8  FUN_004664c8 =====

ulong FUN_004664c8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  iVar1 = FUN_0043eb70();
  if (param_1 == 0) {
    return 0;
  }
  if (iVar1 == 0) {
    return 0;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  if (param_3 == 0 && lVar5 == 0) {
    FUN_00379868(0);
    FUN_0037995c("providers/implementations/signature/mac_legacy_sig.c",0x6b,"mac_digest_sign_init")
    ;
    FUN_00379a5c(0x39,0x72,0);
    return 0;
  }
  if (param_3 == 0) {
    lVar3 = *(long *)(lVar5 + 0x20);
    param_3 = lVar5;
  }
  else {
    uVar2 = FUN_0045aad8(param_3);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    FUN_0045aa64(*(undefined8 *)(param_1 + 0x10));
    *(long *)(param_1 + 0x10) = param_3;
    lVar3 = *(long *)(param_3 + 0x20);
  }
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00389880();
    param_3 = *(long *)(param_1 + 0x10);
  }
  uVar2 = FUN_0043f910(*(undefined8 *)(param_1 + 0x18),0,uVar4,param_2,0,
                       *(undefined8 *)(param_3 + 0x38),0,0);
  if ((int)uVar2 != 0) {
    iVar1 = FUN_003ffe28(*(undefined8 *)(param_1 + 0x18),
                         *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),
                         *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18),param_4);
    return (ulong)(iVar1 != 0);
  }
  return uVar2;
}


// ===== 004665d8  FUN_004665d8 =====

undefined8 FUN_004665d8(long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
    uVar1 = FUN_003ffe34();
    return uVar1;
  }
  return 0;
}


// ===== 004665f0  FUN_004665f0 =====

undefined8 FUN_004665f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043eb70();
  if (((param_1 != 0) && (iVar1 != 0)) && (*(long *)(param_1 + 0x18) != 0)) {
    uVar2 = FUN_003ffe40(*(long *)(param_1 + 0x18),param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}


// ===== 00466654  FUN_00466654 =====

void FUN_00466654(long param_1)

{
  FUN_003c86b4(*(undefined8 *)(param_1 + 8),"providers/implementations/signature/mac_legacy_sig.c",
               0xa6);
  FUN_003ffb7c(*(undefined8 *)(param_1 + 0x18));
  FUN_0045aa64(*(undefined8 *)(param_1 + 0x10));
  FUN_003c86b4(param_1,"providers/implementations/signature/mac_legacy_sig.c",0xa9);
  return;
}


// ===== 004666a4  FUN_004666a4 =====

undefined8 * FUN_004666a4(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 == 0) {
    return (undefined8 *)0x0;
  }
  puVar2 = (undefined8 *)
           FUN_003c8474(0x20,"providers/implementations/signature/mac_legacy_sig.c",0xb4);
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar5 = *param_1;
  lVar3 = param_1[1];
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = uVar5;
  if (lVar3 == 0) {
    lVar3 = 0;
    if (param_1[2] != 0) goto LAB_00466718;
LAB_0046674c:
    uVar5 = 0;
    lVar4 = param_1[3];
    puVar2[2] = 0;
  }
  else {
    lVar3 = FUN_003ca2f4(lVar3,"providers/implementations/signature/mac_legacy_sig.c",0xbd);
    puVar2[1] = lVar3;
    if (lVar3 == 0) goto LAB_00466768;
    if (param_1[2] == 0) goto LAB_0046674c;
LAB_00466718:
    iVar1 = FUN_0045aad8();
    if (iVar1 == 0) goto LAB_00466768;
    uVar5 = param_1[2];
    lVar4 = param_1[3];
    puVar2[2] = uVar5;
  }
  if (lVar4 == 0) {
    return puVar2;
  }
  lVar4 = FUN_003ffbcc(uVar5);
  puVar2[3] = lVar4;
  if (lVar4 != 0) {
    return puVar2;
  }
LAB_00466768:
  FUN_003c86b4(lVar3,"providers/implementations/signature/mac_legacy_sig.c",0xa6);
  FUN_003ffb7c(puVar2[3]);
  FUN_0045aa64(puVar2[2]);
  FUN_003c86b4(puVar2,"providers/implementations/signature/mac_legacy_sig.c",0xa9);
  return (undefined8 *)0x0;
}


// ===== 004667b8  FUN_004667b8 =====

void FUN_004667b8(long param_1)

{
  FUN_0040013c(*(undefined8 *)(param_1 + 0x18));
  return;
}


// ===== 004667c0  FUN_004667c0 =====

undefined8 FUN_004667c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_0046b880(param_2);
  lVar2 = FUN_00400424(uVar1,&DAT_001e0e65,0);
  if (lVar2 != 0) {
    uVar1 = FUN_004008b0();
    FUN_004007c8(lVar2);
    return uVar1;
  }
  return 0;
}


// ===== 00466818  FUN_00466818 =====

void FUN_00466818(undefined8 param_1,undefined8 param_2)

{
  FUN_00466944(param_1,param_2,"SIPHASH");
  return;
}


// ===== 00466824  FUN_00466824 =====

undefined8 FUN_00466824(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_0046b880(param_2);
  lVar2 = FUN_00400424(uVar1,"SIPHASH",0);
  if (lVar2 != 0) {
    uVar1 = FUN_004008b0();
    FUN_004007c8(lVar2);
    return uVar1;
  }
  return 0;
}


// ===== 0046687c  FUN_0046687c =====

void FUN_0046687c(undefined8 param_1,undefined8 param_2)

{
  FUN_00466944(param_1,param_2,"POLY1305");
  return;
}


// ===== 00466888  FUN_00466888 =====

undefined8 FUN_00466888(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_0046b880(param_2);
  lVar2 = FUN_00400424(uVar1,"POLY1305",0);
  if (lVar2 != 0) {
    uVar1 = FUN_004008b0();
    FUN_004007c8(lVar2);
    return uVar1;
  }
  return 0;
}


// ===== 004668e0  FUN_004668e0 =====

void FUN_004668e0(undefined8 param_1,undefined8 param_2)

{
  FUN_00466944(param_1,param_2,&DAT_001da05c);
  return;
}


// ===== 004668ec  FUN_004668ec =====

undefined8 FUN_004668ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_0046b880(param_2);
  lVar2 = FUN_00400424(uVar1,&DAT_001da05c,0);
  if (lVar2 != 0) {
    uVar1 = FUN_004008b0();
    FUN_004007c8(lVar2);
    return uVar1;
  }
  return 0;
}


// ===== 00466944  FUN_00466944 =====

undefined8 * FUN_00466944(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 == 0) {
    return (undefined8 *)0x0;
  }
  puVar2 = (undefined8 *)
           FUN_003c8474(0x20,"providers/implementations/signature/mac_legacy_sig.c",0x3a);
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar3 = FUN_0046b880(param_1);
  *puVar2 = uVar3;
  if (param_2 != 0) {
    lVar4 = FUN_003ca2f4(param_2,"providers/implementations/signature/mac_legacy_sig.c",0x3f);
    puVar2[1] = lVar4;
    if (lVar4 == 0) {
      lVar4 = 0;
      goto LAB_00466a00;
    }
  }
  lVar4 = FUN_00400424(uVar3,param_3,param_2);
  if (lVar4 != 0) {
    lVar5 = FUN_003ffaa4(lVar4);
    puVar2[3] = lVar5;
    if (lVar5 != 0) {
      FUN_004007c8(lVar4);
      return puVar2;
    }
  }
LAB_00466a00:
  FUN_003c86b4(puVar2[1],"providers/implementations/signature/mac_legacy_sig.c",0x4f);
  FUN_003c86b4(puVar2,"providers/implementations/signature/mac_legacy_sig.c",0x50);
  FUN_004007c8(lVar4);
  return (undefined8 *)0x0;
}


// ===== 00466a48  FUN_00466a48 =====

undefined8 * FUN_00466a48(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  iVar2 = FUN_0043eb70();
  if (iVar2 == 0) {
    return (undefined8 *)0x0;
  }
  puVar3 = (undefined8 *)FUN_003c8474(0xc0,"providers/implementations/signature/rsa_sig.c",0xb5);
  if ((puVar3 != (undefined8 *)0x0) &&
     ((param_2 == 0 ||
      (param_2 = FUN_003ca2f4(param_2,"providers/implementations/signature/rsa_sig.c",0xb7),
      param_2 != 0)))) {
    uVar4 = FUN_0046b880(param_1);
    uVar1 = DAT_001b6ff0;
    *puVar3 = uVar4;
    puVar3[1] = param_2;
    *(byte *)((long)puVar3 + 0x1c) = *(byte *)((long)puVar3 + 0x1c) | 1;
    puVar3[0x16] = uVar1;
    return puVar3;
  }
  FUN_003c86b4(puVar3,"providers/implementations/signature/rsa_sig.c",0xb8);
  return (undefined8 *)0x0;
}


// ===== 00466b20  FUN_00466b20 =====

void FUN_00466b20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    FUN_00468674(param_1,param_2,param_3,0x10);
    return;
  }
  return;
}


// ===== 00466b74  FUN_00466b74 =====

undefined8
FUN_00466b74(long param_1,long param_2,ulong *param_3,ulong param_4,void *param_5,ulong param_6)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  uint local_58;
  uint local_54;
  
  iVar3 = FUN_003f9914(*(undefined8 *)(param_1 + 0x10));
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar12 = 0;
    uVar7 = FUN_0043eb70();
    iVar4 = (int)uVar7;
  }
  else {
    iVar4 = FUN_00389a38(*(long *)(param_1 + 0x20));
    uVar12 = (ulong)iVar4;
    uVar7 = FUN_0043eb70();
    iVar4 = (int)uVar7;
  }
  if (iVar4 == 0) {
    return uVar7;
  }
  uVar11 = (ulong)iVar3;
  if (param_2 == 0) {
    *param_3 = uVar11;
    return 1;
  }
  if (param_4 < uVar11) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/signature/rsa_sig.c",0x21e,"rsa_sign");
    FUN_00379a5c(0x39,0xb3,"is %zu, should be at least %zu",param_4,uVar11);
    return 0;
  }
  if (uVar12 == 0) {
    local_58 = FUN_003f9948(param_6 & 0xffffffff,param_5,param_2,*(undefined8 *)(param_1 + 0x10),
                            *(undefined4 *)(param_1 + 0x68));
LAB_00466ca8:
    if (0 < (int)local_58) {
      *param_3 = (ulong)local_58;
      return 1;
    }
    FUN_00379868();
    uVar7 = 0x297;
LAB_00466cfc:
    FUN_0037995c("providers/implementations/signature/rsa_sig.c",uVar7,"rsa_sign");
    uVar7 = 0x80004;
  }
  else {
    if (uVar12 == param_6) {
      iVar3 = FUN_003898e4(*(undefined8 *)(param_1 + 0x20),&DAT_001c7766);
      if (iVar3 == 0) {
        iVar3 = *(int *)(param_1 + 0x68);
        if (iVar3 != 1) {
          if (iVar3 == 6) {
            iVar3 = *(int *)(param_1 + 0xb4);
            if (iVar3 != -1) {
              iVar4 = *(int *)(param_1 + 0xb0);
              if (iVar4 == -1) {
                iVar4 = FUN_00389a38(*(undefined8 *)(param_1 + 0x20));
                if (iVar4 < iVar3) {
                  FUN_00379868();
                  FUN_0037995c("providers/implementations/signature/rsa_sig.c",0x264,"rsa_sign");
                  uVar1 = *(undefined4 *)(param_1 + 0xb4);
                  uVar5 = FUN_00389a38(*(undefined8 *)(param_1 + 0x20));
                  pcVar8 = "minimum salt length set to %d, but the digest only gives %d";
                  goto LAB_00466f88;
                }
                iVar4 = *(int *)(param_1 + 0xb0);
              }
              if ((-1 < iVar4) && (iVar4 < *(int *)(param_1 + 0xb4))) {
                FUN_00379868();
                FUN_0037995c("providers/implementations/signature/rsa_sig.c",0x270,"rsa_sign");
                uVar5 = *(undefined4 *)(param_1 + 0xb0);
                uVar1 = *(undefined4 *)(param_1 + 0xb4);
                pcVar8 = 
                "minimum salt length set to %d, but theactual salt length is only set to %d";
LAB_00466f88:
                FUN_00379a5c(0x39,0xac,pcVar8,uVar1,uVar5);
                return 0;
              }
            }
            uVar7 = FUN_00468ee4(param_1);
            if ((int)uVar7 == 0) {
              return uVar7;
            }
            iVar3 = FUN_004045c4(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0xb8),
                                 param_5,*(undefined8 *)(param_1 + 0x20),
                                 *(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0xb0));
            if (iVar3 == 0) {
              FUN_00379868();
              uVar7 = 0x281;
              goto LAB_00466cfc;
            }
            uVar12 = FUN_003f9914(*(undefined8 *)(param_1 + 0x10));
            uVar7 = *(undefined8 *)(param_1 + 0xb8);
            uVar9 = *(undefined8 *)(param_1 + 0x10);
            uVar10 = 3;
          }
          else {
            if (iVar3 != 5) {
              FUN_00379868();
              FUN_0037995c("providers/implementations/signature/rsa_sig.c",0x28a,"rsa_sign");
              pcVar8 = "Only X.931, PKCS#1 v1.5 or PSS padding allowed";
              goto LAB_00466ea8;
            }
            iVar3 = FUN_003f9914(*(undefined8 *)(param_1 + 0x10));
            uVar12 = param_6 + 1;
            if ((ulong)(long)iVar3 < uVar12) {
              FUN_00379868();
              FUN_0037995c("providers/implementations/signature/rsa_sig.c",0x240,"rsa_sign");
              uVar5 = FUN_003f9914(*(undefined8 *)(param_1 + 0x10));
              FUN_00379a5c(0x39,0xab,"RSA key size = %d, expected minimum = %d",uVar5,uVar12);
              return 0;
            }
            iVar3 = FUN_00468ee4(param_1);
            if (iVar3 == 0) {
              FUN_00379868();
              FUN_0037995c("providers/implementations/signature/rsa_sig.c",0x246,"rsa_sign");
              uVar7 = 0x80039;
              goto LAB_00466d0c;
            }
            memcpy(*(void **)(param_1 + 0xb8),param_5,param_6);
            uVar2 = FUN_004076b0(*(undefined4 *)(param_1 + 0x30));
            uVar10 = 5;
            *(undefined1 *)(*(long *)(param_1 + 0xb8) + param_6) = uVar2;
            uVar12 = uVar12 & 0xffffffff;
            uVar7 = *(undefined8 *)(param_1 + 0xb8);
            uVar9 = *(undefined8 *)(param_1 + 0x10);
          }
          uVar6 = FUN_003f9948(uVar12,uVar7,param_2,uVar9,uVar10);
          FUN_00468f3c(param_1);
          local_58 = uVar6;
          goto LAB_00466ca8;
        }
        iVar3 = FUN_004050ac(*(undefined4 *)(param_1 + 0x30),param_5,param_6 & 0xffffffff,param_2,
                             &local_58,*(undefined8 *)(param_1 + 0x10));
        if (0 < iVar3) goto LAB_00466ca8;
        FUN_00379868();
        uVar7 = 599;
      }
      else {
        if (*(int *)(param_1 + 0x68) != 1) {
          FUN_00379868();
          FUN_0037995c("providers/implementations/signature/rsa_sig.c",0x22e,"rsa_sign");
          pcVar8 = "only PKCS#1 padding supported with MDC2";
LAB_00466ea8:
          uVar7 = 0xa8;
          goto LAB_00466d10;
        }
        iVar3 = FUN_00404b2c(0,param_5,param_6 & 0xffffffff,param_2,&local_54,
                             *(undefined8 *)(param_1 + 0x10));
        local_58 = local_54;
        if (0 < iVar3) goto LAB_00466ca8;
        FUN_00379868();
        uVar7 = 0x236;
      }
      goto LAB_00466cfc;
    }
    FUN_00379868();
    FUN_0037995c("providers/implementations/signature/rsa_sig.c",0x225,"rsa_sign");
    uVar7 = 0xa6;
  }
LAB_00466d0c:
  pcVar8 = (char *)0x0;
LAB_00466d10:
  FUN_00379a5c(0x39,uVar7,pcVar8);
  return 0;
}


// ===== 00467008  FUN_00467008 =====

void FUN_00467008(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    FUN_00468674(param_1,param_2,param_3,0x20);
    return;
  }
  return;
}


// ===== 0046705c  FUN_0046705c =====

ulong FUN_0046705c(long param_1,undefined8 param_2,ulong param_3,void *param_4,ulong param_5)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulong local_48;
  
  uVar3 = FUN_0043eb70();
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar4 = *(long *)(param_1 + 0xb8);
    if (lVar4 == 0) {
      iVar1 = FUN_003f9914(*(undefined8 *)(param_1 + 0x10));
      lVar4 = FUN_003c83a4((long)iVar1,"providers/implementations/signature/rsa_sig.c",500);
      *(long *)(param_1 + 0xb8) = lVar4;
      if (lVar4 == 0) {
        return 0;
      }
    }
    uVar2 = FUN_003f9960(param_3 & 0xffffffff,param_2,lVar4,*(undefined8 *)(param_1 + 0x10),
                         *(undefined4 *)(param_1 + 0x68));
    if (0 < (int)uVar2) {
      if (uVar2 != param_5) {
        return 0;
      }
LAB_00467190:
      iVar1 = memcmp(param_4,*(void **)(param_1 + 0xb8),param_5);
      return (ulong)(iVar1 == 0);
    }
    FUN_00379868();
    uVar5 = 0x34c;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x68);
    if (iVar1 == 6) {
      iVar1 = FUN_00389a38();
      if ((long)iVar1 != param_5) {
        FUN_00379868();
        FUN_0037995c("providers/implementations/signature/rsa_sig.c",0x327,"rsa_verify");
        FUN_00379a5c(0x39,0xa6,"Should be %d, but got %d",(long)iVar1,param_5);
        return 0;
      }
      lVar4 = *(long *)(param_1 + 0xb8);
      if (lVar4 == 0) {
        iVar1 = FUN_003f9914(*(undefined8 *)(param_1 + 0x10));
        lVar4 = FUN_003c83a4((long)iVar1,"providers/implementations/signature/rsa_sig.c",500);
        *(long *)(param_1 + 0xb8) = lVar4;
        if (lVar4 == 0) {
          return 0;
        }
      }
      iVar1 = FUN_003f9960(param_3 & 0xffffffff,param_2,lVar4,*(undefined8 *)(param_1 + 0x10),3);
      if (iVar1 < 1) {
        FUN_00379868();
        uVar5 = 0x332;
      }
      else {
        iVar1 = FUN_004040e0(*(undefined8 *)(param_1 + 0x10),param_4,*(undefined8 *)(param_1 + 0x20)
                             ,*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0xb8),
                             *(undefined4 *)(param_1 + 0xb0));
        if (0 < iVar1) {
          return 1;
        }
        FUN_00379868();
        uVar5 = 0x33a;
      }
    }
    else {
      if (iVar1 == 5) {
        lVar4 = *(long *)(param_1 + 0xb8);
        if (lVar4 == 0) {
          iVar1 = FUN_003f9914(*(undefined8 *)(param_1 + 0x10));
          lVar4 = FUN_003c83a4((long)iVar1,"providers/implementations/signature/rsa_sig.c",500);
          *(long *)(param_1 + 0xb8) = lVar4;
          if (lVar4 == 0) {
            return 0;
          }
        }
        uVar3 = FUN_004673d4(param_1,lVar4,&local_48,0,param_2,param_3);
        if ((int)uVar3 == 0) {
          return uVar3;
        }
        if (local_48 != param_5) {
          return 0;
        }
        goto LAB_00467190;
      }
      if (iVar1 != 1) {
        FUN_00379868();
        FUN_0037995c("providers/implementations/signature/rsa_sig.c",0x340,"rsa_verify");
        pcVar6 = "Only X.931, PKCS#1 v1.5 or PSS padding allowed";
        uVar5 = 0xa8;
        goto LAB_00467360;
      }
      iVar1 = FUN_00405894(*(undefined4 *)(param_1 + 0x30),param_4,param_5 & 0xffffffff,param_2,
                           param_3 & 0xffffffff,*(undefined8 *)(param_1 + 0x10));
      if (iVar1 != 0) {
        return 1;
      }
      FUN_00379868();
      uVar5 = 0x311;
    }
  }
  FUN_0037995c("providers/implementations/signature/rsa_sig.c",uVar5,"rsa_verify");
  pcVar6 = (char *)0x0;
  uVar5 = 0x80004;
LAB_00467360:
  FUN_00379a5c(0x39,uVar5,pcVar6);
  return 0;
}


// ===== 00467380  FUN_00467380 =====

void FUN_00467380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    FUN_00468674(param_1,param_2,param_3,0x40);
    return;
  }
  return;
}


// ===== 004673d4  FUN_004673d4 =====

undefined8
FUN_004673d4(long param_1,void *param_2,ulong *param_3,ulong param_4,undefined8 param_5,
            ulong param_6)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  void *__src;
  long lVar7;
  char *pcVar8;
  ulong __n;
  uint local_48 [2];
  
  uVar6 = FUN_0043eb70();
  if ((int)uVar6 == 0) {
    return uVar6;
  }
  if (param_2 == (void *)0x0) {
    iVar3 = FUN_003f9914(*(undefined8 *)(param_1 + 0x10));
    *param_3 = (long)iVar3;
    return 1;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    local_48[0] = FUN_003f9960(param_6 & 0xffffffff,param_5,param_2,*(undefined8 *)(param_1 + 0x10),
                               *(undefined4 *)(param_1 + 0x68));
    if (-1 < (int)local_48[0]) {
LAB_00467594:
      *param_3 = (long)(int)local_48[0];
      return 1;
    }
    FUN_00379868();
    uVar6 = 0x2f4;
LAB_0046761c:
    FUN_0037995c("providers/implementations/signature/rsa_sig.c",uVar6,"rsa_verify_recover");
    uVar6 = 0x80004;
  }
  else {
    if (*(int *)(param_1 + 0x68) == 1) {
      iVar3 = FUN_00405450(*(undefined4 *)(param_1 + 0x30),0,0,param_2,local_48,param_5,param_6,
                           *(undefined8 *)(param_1 + 0x10));
      if (0 < iVar3) goto LAB_00467594;
      FUN_00379868();
      uVar6 = 0x2e4;
      goto LAB_0046761c;
    }
    if (*(int *)(param_1 + 0x68) != 5) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/signature/rsa_sig.c",0x2ec,"rsa_verify_recover");
      pcVar8 = "Only X.931 or PKCS#1 v1.5 padding allowed";
      uVar6 = 0xa8;
      goto LAB_00467630;
    }
    lVar7 = *(long *)(param_1 + 0xb8);
    if (lVar7 == 0) {
      iVar3 = FUN_003f9914(*(undefined8 *)(param_1 + 0x10));
      lVar7 = FUN_003c83a4((long)iVar3,"providers/implementations/signature/rsa_sig.c",500);
      *(long *)(param_1 + 0xb8) = lVar7;
      if (lVar7 == 0) {
        return 0;
      }
    }
    iVar3 = FUN_003f9960(param_6 & 0xffffffff,param_5,lVar7,*(undefined8 *)(param_1 + 0x10),5);
    if (iVar3 < 1) {
      FUN_00379868();
      uVar6 = 0x2c2;
      goto LAB_0046761c;
    }
    uVar2 = iVar3 - 1;
    __n = (ulong)uVar2;
    bVar1 = *(byte *)(*(long *)(param_1 + 0xb8) + __n);
    uVar4 = FUN_004076b0(*(undefined4 *)(param_1 + 0x30));
    if (uVar4 == bVar1) {
      uVar4 = FUN_00389a38(*(undefined8 *)(param_1 + 0x20));
      if (uVar2 != uVar4) {
        FUN_00379868();
        FUN_0037995c("providers/implementations/signature/rsa_sig.c",0x2cb,"rsa_verify_recover");
        uVar5 = FUN_00389a38(*(undefined8 *)(param_1 + 0x20));
        FUN_00379a5c(0x39,0xa6,"Should be %d, but got %d",uVar5,uVar2);
        return 0;
      }
      __src = *(void **)(param_1 + 0xb8);
      *param_3 = __n;
      local_48[0] = uVar2;
      if (__src != param_2) {
        if (param_4 < __n) {
          FUN_00379868();
          FUN_0037995c("providers/implementations/signature/rsa_sig.c",0x2d4,"rsa_verify_recover");
          FUN_00379a5c(0x39,0x6a,"buffer size is %d, should be %d",param_4,__n);
          return 0;
        }
        memcpy(param_2,__src,__n);
      }
      goto LAB_00467594;
    }
    FUN_00379868();
    FUN_0037995c("providers/implementations/signature/rsa_sig.c",0x2c7,"rsa_verify_recover");
    uVar6 = 0xad;
  }
  pcVar8 = (char *)0x0;
LAB_00467630:
  FUN_00379a5c(0x39,uVar6,pcVar8);
  return 0;
}


// ===== 004676cc  FUN_004676cc =====

void FUN_004676cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    FUN_00468f7c(param_1,param_2,param_3,param_4,0x10);
    return;
  }
  return;
}


// ===== 00467728  FUN_00467728 =====

undefined8 FUN_00467728(long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    uVar1 = FUN_0039d938();
    return uVar1;
  }
  return 0;
}


// ===== 00467740  FUN_00467740 =====

long FUN_00467740(long param_1,long param_2,long *param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined4 local_74;
  undefined1 auStack_70 [64];
  
  local_74 = 0;
  iVar1 = FUN_0043eb70();
  lVar2 = 0;
  if ((param_1 != 0) && (iVar1 != 0)) {
    lVar2 = *(long *)(param_1 + 0x28);
    *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) | 1;
    if (lVar2 != 0) {
      if (param_2 == 0) {
        iVar1 = FUN_003f9914(*(undefined8 *)(param_1 + 0x10));
        if (*(long *)(param_1 + 0x20) != 0) {
          FUN_00389a38(*(long *)(param_1 + 0x20));
        }
        lVar2 = FUN_0043eb70();
        if ((int)lVar2 != 0) {
          *param_3 = (long)iVar1;
          return 1;
        }
      }
      else {
        lVar2 = FUN_0039dac8(lVar2,auStack_70,&local_74);
        if ((int)lVar2 != 0) {
          lVar2 = FUN_00466b74(param_1,param_2,param_3,param_4,auStack_70,local_74);
        }
      }
    }
  }
  return lVar2;
}


// ===== 00467818  FUN_00467818 =====

void FUN_00467818(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 != 0) {
    FUN_00468f7c(param_1,param_2,param_3,param_4,0x20);
    return;
  }
  return;
}


// ===== 00467874  FUN_00467874 =====

long FUN_00467874(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_70 [64];
  undefined4 local_14;
  
  local_14 = 0;
  iVar1 = FUN_0043eb70();
  lVar2 = 0;
  if ((param_1 != 0) && (iVar1 != 0)) {
    lVar2 = *(long *)(param_1 + 0x28);
    *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) | 1;
    if ((lVar2 != 0) && (lVar2 = FUN_0039dac8(lVar2,auStack_70,&local_14), (int)lVar2 != 0)) {
      lVar2 = FUN_0046705c(param_1,param_2,param_3,auStack_70,local_14);
    }
  }
  return lVar2;
}


// ===== 004678fc  FUN_004678fc =====

void FUN_004678fc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_1 != 0) {
    FUN_0039d284(*(undefined8 *)(param_1 + 0x28));
    FUN_0039d050(*(undefined8 *)(param_1 + 0x20));
    FUN_0039d050(*(undefined8 *)(param_1 + 0x70));
    FUN_003c86b4(*(undefined8 *)(param_1 + 8),"providers/implementations/signature/rsa_sig.c",0x3db)
    ;
    lVar3 = *(long *)(param_1 + 0xb8);
    if (lVar3 == 0) {
      uVar2 = 0;
    }
    else {
      iVar1 = FUN_003f9914(*(undefined8 *)(param_1 + 0x10));
      FUN_003c89b8(lVar3,(long)iVar1);
      uVar2 = *(undefined8 *)(param_1 + 0xb8);
    }
    FUN_003c86b4(uVar2,"providers/implementations/signature/rsa_sig.c",0x202);
    *(undefined8 *)(param_1 + 0xb8) = 0;
    FUN_003fa6a0(*(undefined8 *)(param_1 + 0x10));
    FUN_003c893c(param_1,0xc0,"providers/implementations/signature/rsa_sig.c",0x3df);
    return;
  }
  return;
}


// ===== 004679a4  FUN_004679a4 =====

undefined8 * FUN_004679a4(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 == 0) {
    return (undefined8 *)0x0;
  }
  puVar2 = (undefined8 *)FUN_003c8474(0xc0,"providers/implementations/signature/rsa_sig.c",0x3ea);
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar5 = param_1[0x10];
  uVar7 = param_1[0x13];
  uVar6 = param_1[0x12];
  uVar10 = param_1[0x15];
  uVar9 = param_1[0x14];
  uVar4 = param_1[0x16];
  lVar3 = param_1[2];
  puVar2[0x11] = param_1[0x11];
  puVar2[0x10] = uVar5;
  puVar2[0x13] = uVar7;
  puVar2[0x12] = uVar6;
  uVar6 = param_1[9];
  uVar5 = param_1[8];
  uVar8 = param_1[0xb];
  uVar7 = param_1[10];
  puVar2[0x15] = uVar10;
  puVar2[0x14] = uVar9;
  puVar2[0x16] = uVar4;
  puVar2[9] = uVar6;
  puVar2[8] = uVar5;
  puVar2[0xb] = uVar8;
  puVar2[10] = uVar7;
  uVar6 = param_1[0xc];
  uVar5 = param_1[0xf];
  uVar4 = param_1[0xe];
  puVar2[0xd] = param_1[0xd];
  puVar2[0xc] = uVar6;
  puVar2[0xf] = uVar5;
  puVar2[0xe] = uVar4;
  uVar7 = param_1[1];
  uVar6 = *param_1;
  uVar5 = param_1[3];
  uVar4 = param_1[2];
  puVar2[0xe] = 0;
  puVar2[1] = uVar7;
  *puVar2 = uVar6;
  puVar2[3] = uVar5;
  puVar2[2] = uVar4;
  uVar7 = param_1[5];
  uVar6 = param_1[4];
  uVar5 = param_1[7];
  uVar4 = param_1[6];
  puVar2[2] = 0;
  puVar2[5] = uVar7;
  puVar2[4] = uVar6;
  puVar2[7] = uVar5;
  puVar2[6] = uVar4;
  puVar2[1] = 0;
  puVar2[0x17] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  if (lVar3 == 0) {
    uVar4 = 0;
    lVar3 = param_1[4];
    puVar2[2] = 0;
    if (lVar3 != 0) goto LAB_00467a50;
LAB_00467a94:
    uVar4 = 0;
    lVar3 = param_1[0xe];
    puVar2[4] = 0;
    if (lVar3 == 0) goto LAB_00467aa4;
LAB_00467a68:
    iVar1 = FUN_0039e4f4(uVar4);
    if (iVar1 == 0) goto LAB_00467aec;
    uVar4 = param_1[0xe];
    lVar3 = param_1[5];
    puVar2[0xe] = uVar4;
  }
  else {
    iVar1 = FUN_003fa780();
    if (iVar1 == 0) goto LAB_00467aec;
    uVar4 = param_1[2];
    lVar3 = param_1[4];
    puVar2[2] = uVar4;
    if (lVar3 == 0) goto LAB_00467a94;
LAB_00467a50:
    iVar1 = FUN_0039e4f4(uVar4);
    if (iVar1 == 0) goto LAB_00467aec;
    uVar4 = param_1[4];
    lVar3 = param_1[0xe];
    puVar2[4] = uVar4;
    if (lVar3 != 0) goto LAB_00467a68;
LAB_00467aa4:
    uVar4 = 0;
    lVar3 = param_1[5];
    puVar2[0xe] = 0;
  }
  if (lVar3 != 0) {
    lVar3 = FUN_0039d270(uVar4);
    puVar2[5] = lVar3;
    if ((lVar3 == 0) || (iVar1 = FUN_0039e0a8(lVar3,param_1[5]), iVar1 == 0)) goto LAB_00467aec;
  }
  if (param_1[1] == 0) {
    return puVar2;
  }
  lVar3 = FUN_003ca2f4(param_1[1],"providers/implementations/signature/rsa_sig.c",0x40a);
  puVar2[1] = lVar3;
  if (lVar3 != 0) {
    return puVar2;
  }
LAB_00467aec:
  FUN_004678fc(puVar2);
  return (undefined8 *)0x0;
}


// ===== 00467b0c  FUN_00467b0c =====

undefined8 FUN_00467b0c(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 local_118;
  undefined1 auStack_10c [128];
  undefined1 auStack_8c [20];
  undefined1 auStack_78 [56];
  
  if (param_1 == 0) {
    return 0;
  }
  lVar7 = FUN_003cb140(param_2,"algorithm-id");
  if (lVar7 != 0) {
    iVar2 = FUN_003ce940(auStack_78,auStack_10c,0x80);
    if (iVar2 == 0) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/signature/rsa_sig.c",0xf6,"rsa_generate_signature_aid"
                  );
      FUN_00379a5c(0x39,0x8000f,0);
      return 0;
    }
    if (*(int *)(param_1 + 0x68) == 6) {
      iVar2 = *(int *)(param_1 + 0xb0);
      if (iVar2 == -4) {
        iVar5 = FUN_00389a38(*(undefined8 *)(param_1 + 0x20));
LAB_00467dec:
        iVar3 = FUN_003f9914(*(undefined8 *)(param_1 + 0x10));
        iVar4 = FUN_00389a38(*(undefined8 *)(param_1 + 0x20));
        uVar6 = FUN_003f990c(*(undefined8 *)(param_1 + 0x10));
        iVar2 = -3;
        if ((uVar6 & 7) != 1) {
          iVar2 = -2;
        }
        iVar2 = iVar2 + (iVar3 - iVar4);
        iVar3 = iVar2;
        if (iVar5 <= iVar2) {
          iVar3 = iVar5;
        }
        if (-1 < iVar5) {
          iVar2 = iVar3;
        }
      }
      else {
        if (iVar2 == -1) {
          iVar2 = FUN_00389a38(*(undefined8 *)(param_1 + 0x20));
        }
        if (iVar2 + 3U < 2) {
          iVar5 = -1;
          goto LAB_00467dec;
        }
      }
      if (iVar2 < 0) {
        FUN_00379868();
        pcVar10 = "rsa_pss_compute_saltlen";
        uVar9 = 0xdf;
      }
      else {
        if (iVar2 < *(int *)(param_1 + 0xb4)) {
          FUN_00379868();
          FUN_0037995c("providers/implementations/signature/rsa_sig.c",0xe2,
                       "rsa_pss_compute_saltlen");
          FUN_00379a5c(0x39,0xac,"minimum salt length: %d, actual salt length: %d",
                       *(undefined4 *)(param_1 + 0xb4),iVar2);
          goto LAB_00467f58;
        }
        iVar5 = FUN_00404a10(auStack_8c);
        if ((((iVar5 != 0) &&
             (iVar5 = FUN_00404a88(auStack_8c,*(undefined4 *)(param_1 + 0x30)), iVar5 != 0)) &&
            (iVar5 = FUN_00404a98(auStack_8c,*(undefined4 *)(param_1 + 0x78)), iVar5 != 0)) &&
           ((iVar2 = FUN_00404aa8(auStack_8c,iVar2), iVar2 != 0 &&
            (iVar2 = FUN_0046b700(auStack_78,0xffffffff,0x1000,auStack_8c), iVar2 != 0))))
        goto LAB_00467b88;
        FUN_00379868();
        pcVar10 = "rsa_generate_signature_aid";
        uVar9 = 0x115;
      }
    }
    else {
      if (*(int *)(param_1 + 0x68) != 1) {
        FUN_00379868();
        FUN_0037995c("providers/implementations/signature/rsa_sig.c",0x11a,
                     "rsa_generate_signature_aid");
        uVar1 = *(undefined4 *)(param_1 + 0x68);
        pcVar10 = "Algorithm ID generation - pad mode: %d";
LAB_00467ccc:
        FUN_00379a5c(0x39,0x8010c,pcVar10,uVar1);
        goto LAB_00467f58;
      }
      iVar2 = FUN_00469060(auStack_78,0xffffffff,*(undefined4 *)(param_1 + 0x30));
      if (0 < iVar2) {
LAB_00467b88:
        iVar2 = FUN_003ceec8(auStack_78);
        if (iVar2 == 0) goto LAB_00467f58;
        FUN_003cf2bc(auStack_78,&local_118);
        lVar8 = FUN_003ce6d8(auStack_78);
        FUN_003cf324(auStack_78);
        if (lVar8 == 0) {
          return 0;
        }
        iVar2 = FUN_003cd7b8(lVar7,lVar8,local_118);
        if (iVar2 == 0) {
          return 0;
        }
        goto LAB_00467bcc;
      }
      FUN_00379868();
      pcVar10 = "rsa_generate_signature_aid";
      if (iVar2 != 0) {
        FUN_0037995c("providers/implementations/signature/rsa_sig.c",0x105,
                     "rsa_generate_signature_aid");
        uVar1 = *(undefined4 *)(param_1 + 0x30);
        pcVar10 = "Algorithm ID generation - md NID: %d";
        goto LAB_00467ccc;
      }
      uVar9 = 0x102;
    }
    FUN_0037995c("providers/implementations/signature/rsa_sig.c",uVar9,pcVar10);
    FUN_00379a5c(0x39,0xc0103,0);
LAB_00467f58:
    FUN_003cf324(auStack_78);
    return 0;
  }
LAB_00467bcc:
  lVar7 = FUN_003cb140(param_2,"pad-mode");
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 8) == 1) {
      uVar9 = thunk_FUN_003cb490(lVar7,*(undefined4 *)(param_1 + 0x68));
      iVar2 = (int)uVar9;
    }
    else {
      if (*(int *)(lVar7 + 8) != 4) {
        return 0;
      }
      uVar6 = *(int *)(param_1 + 0x68) - 1;
      if (((5 < uVar6) || ((0x35U >> (ulong)(uVar6 & 0x1f) & 1) == 0)) ||
         (*(long *)(&DAT_0020ef00 + *(int *)(&DAT_0020eef8 + (ulong)uVar6 * 4)) == 0)) {
        FUN_00379868();
        FUN_0037995c("providers/implementations/signature/rsa_sig.c",0x441,"rsa_get_ctx_params");
        FUN_00379a5c(0x39,0xc0103,0);
        lVar7 = FUN_003cb140(param_2,"digest");
        goto joined_r0x00467cfc;
      }
      uVar9 = FUN_003cd630();
      iVar2 = (int)uVar9;
    }
    if (iVar2 == 0) {
      return uVar9;
    }
  }
  lVar7 = FUN_003cb140(param_2,"digest");
joined_r0x00467cfc:
  if ((lVar7 != 0) && (uVar9 = FUN_003cd630(lVar7,param_1 + 0x34), (int)uVar9 == 0)) {
    return uVar9;
  }
  lVar7 = FUN_003cb140(param_2,"mgf1-digest");
  if ((lVar7 != 0) && (uVar9 = FUN_003cd630(lVar7,param_1 + 0x7c), (int)uVar9 == 0)) {
    return uVar9;
  }
  lVar7 = FUN_003cb140(param_2,"saltlen");
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 8) == 4) {
      if (*(uint *)(param_1 + 0xb0) < 0xfffffffc) {
        uVar6 = FUN_0037cd5c(*(undefined8 *)(lVar7 + 0x10),*(undefined8 *)(lVar7 + 0x18),
                             &DAT_001e4c38);
        if (0 < (int)uVar6) {
          *(ulong *)(lVar7 + 0x20) = (ulong)uVar6;
          return 1;
        }
        return 0;
      }
      uVar9 = FUN_003cd630(lVar7,&DAT_0020ef10 +
                                 *(int *)(&DAT_0020ef10 + (ulong)(*(uint *)(param_1 + 0xb0) + 4) * 4
                                         ));
      iVar2 = (int)uVar9;
    }
    else {
      if (*(int *)(lVar7 + 8) != 1) {
        return 1;
      }
      uVar9 = thunk_FUN_003cb490(lVar7,*(undefined4 *)(param_1 + 0xb0));
      iVar2 = (int)uVar9;
    }
    if (iVar2 == 0) {
      return uVar9;
    }
  }
  return 1;
}


// ===== 00467fb4  FUN_00467fb4 =====

undefined ** FUN_00467fb4(void)

{
  return &PTR_s_algorithm_id_0078ddd0;
}


// ===== 00467fc0  FUN_00467fc0 =====

undefined8 FUN_00467fc0(long param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 *local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined2 local_1a0;
  undefined8 *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined2 local_50;
  uint local_48;
  uint local_44;
  
  local_50 = 0;
  local_88 = (undefined8 *)0x0;
  local_198 = (undefined8 *)0x0;
  local_1a0 = 0;
  uStack_258 = 0;
  local_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  local_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  local_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  local_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  local_1d8 = (undefined8 *)0x0;
  uStack_2d8 = 0;
  local_2e0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  local_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  local_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  local_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  local_2e8 = (undefined8 *)0x0;
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 1;
  }
  local_44 = *(uint *)(param_1 + 0x68);
  local_48 = *(uint *)(param_1 + 0xb0);
  lVar5 = FUN_003cb19c(param_2,"digest");
  if (lVar5 != 0) {
    lVar6 = FUN_003cb19c(param_2,"properties");
    local_88 = &local_80;
    uVar7 = FUN_003cd3d4(lVar5,&local_88,0x32);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    if (lVar6 != 0) {
      local_198 = &local_190;
      uVar7 = FUN_003cd3d4(lVar6,&local_198,0x100);
      if ((int)uVar7 == 0) {
        return uVar7;
      }
    }
  }
  lVar5 = FUN_003cb19c(param_2,"pad-mode");
  if (lVar5 == 0) {
LAB_00468258:
    lVar5 = FUN_003cb19c(param_2,"saltlen");
    if (lVar5 != 0) {
      if (local_44 != 6) {
        FUN_00379868();
        FUN_0037995c("providers/implementations/signature/rsa_sig.c",0x4f7,"rsa_set_ctx_params");
        pcVar8 = "PSS saltlen can only be specified if PSS padding has been specified first";
        uVar7 = 0x88;
        goto LAB_00468558;
      }
      if (*(int *)(lVar5 + 8) == 4) {
        pcVar8 = *(char **)(lVar5 + 0x10);
        iVar2 = strcmp(pcVar8,"digest");
        if (iVar2 == 0) {
          local_48 = 0xffffffff;
        }
        else {
          iVar2 = strcmp(pcVar8,"max");
          if (iVar2 == 0) {
            local_48 = 0xfffffffd;
          }
          else {
            iVar2 = strcmp(pcVar8,"auto");
            if (iVar2 == 0) {
              local_48 = 0xfffffffe;
            }
            else {
              iVar2 = strcmp(pcVar8,"auto-digestmax");
              if (iVar2 == 0) {
                local_48 = 0xfffffffc;
              }
              else {
                local_48 = atoi(pcVar8);
                if (local_48 == 0xfffffffb || (int)(local_48 + 5) < 0 != SCARRY4(local_48,5))
                goto LAB_004682a8;
              }
            }
          }
        }
      }
      else {
        if (*(int *)(lVar5 + 8) != 1) {
          return 0;
        }
        uVar7 = thunk_FUN_003cb238(lVar5,&local_48);
        if ((int)uVar7 == 0) {
          return uVar7;
        }
        if (local_48 == 0xfffffffb || (int)(local_48 + 5) < 0 != SCARRY4(local_48,5)) {
LAB_004682a8:
          FUN_00379868();
          FUN_0037995c("providers/implementations/signature/rsa_sig.c",0x518,"rsa_set_ctx_params");
          uVar7 = 0x70;
          goto LAB_00468554;
        }
      }
      iVar2 = *(int *)(param_1 + 0xb4);
      if (iVar2 != -1) {
        if (local_48 == 0xfffffffc) {
LAB_004683e4:
          if (*(int *)(param_1 + 0x18) == 0x20) {
            FUN_00379868();
            FUN_0037995c("providers/implementations/signature/rsa_sig.c",0x521,"rsa_set_ctx_params")
            ;
            pcVar8 = "Cannot use autodetected salt length";
            uVar7 = 0x70;
            goto LAB_00468558;
          }
        }
        else if (local_48 == 0xffffffff) {
          iVar3 = FUN_00389a38(*(undefined8 *)(param_1 + 0x20));
          if (iVar3 < iVar2) {
            FUN_00379868();
            FUN_0037995c("providers/implementations/signature/rsa_sig.c",0x528,"rsa_set_ctx_params")
            ;
            uVar1 = *(undefined4 *)(param_1 + 0xb4);
            uVar4 = FUN_00389a38(*(undefined8 *)(param_1 + 0x20));
            pcVar8 = "Should be more than %d, but would be set to match digest size (%d)";
LAB_004684b4:
            FUN_00379a5c(0x39,0xac,pcVar8,uVar1,uVar4);
            return 0;
          }
        }
        else {
          if (local_48 == 0xfffffffe) goto LAB_004683e4;
          if ((-1 < (int)local_48) && ((int)local_48 < iVar2)) {
            FUN_00379868();
            FUN_0037995c("providers/implementations/signature/rsa_sig.c",0x533,"rsa_set_ctx_params")
            ;
            uVar1 = *(undefined4 *)(param_1 + 0xb4);
            pcVar8 = "Should be more than %d, but would be set to %d";
            uVar4 = local_48;
            goto LAB_004684b4;
          }
        }
      }
    }
    lVar5 = FUN_003cb19c(param_2,"mgf1-digest");
    if (lVar5 == 0) {
LAB_0046857c:
      *(uint *)(param_1 + 0x68) = local_44;
      *(uint *)(param_1 + 0xb0) = local_48;
      if (((*(long *)(param_1 + 0x20) == 0) && (local_88 == (undefined8 *)0x0)) && (local_44 == 6))
      {
        local_88 = (undefined8 *)&DAT_001eef82;
      }
      if ((local_1d8 == (undefined8 *)0x0) ||
         (uVar7 = FUN_0046892c(param_1,local_1d8,local_2e8), (int)uVar7 != 0)) {
        if (local_88 == (undefined8 *)0x0) {
          uVar7 = FUN_00468dd4(param_1,0,0,*(undefined4 *)(param_1 + 0x30));
          iVar2 = (int)uVar7;
        }
        else {
          uVar7 = FUN_00468ab0(param_1,local_88,local_198);
          iVar2 = (int)uVar7;
        }
        if (iVar2 != 0) {
          return 1;
        }
      }
      return uVar7;
    }
    lVar6 = FUN_003cb19c(param_2,"mgf1-properties");
    local_1d8 = &local_1d0;
    uVar7 = FUN_003cd3d4(lVar5,&local_1d8,0x32);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    if (lVar6 != 0) {
      local_2e8 = &local_2e0;
      uVar7 = FUN_003cd3d4(lVar6,&local_2e8,0x100);
      if ((int)uVar7 == 0) {
        return uVar7;
      }
    }
    if (local_44 == 6) goto LAB_0046857c;
    FUN_00379868();
    FUN_0037995c("providers/implementations/signature/rsa_sig.c",0x550,"rsa_set_ctx_params");
    uVar7 = 0xa7;
LAB_00468554:
    pcVar8 = (char *)0x0;
  }
  else {
    if (*(int *)(lVar5 + 8) == 4) {
      pcVar8 = *(char **)(lVar5 + 0x10);
      if (pcVar8 == (char *)0x0) {
        return 0;
      }
      iVar2 = strcmp(pcVar8,"pkcs1");
      if (iVar2 == 0) {
        local_44 = 1;
      }
      else {
        iVar2 = strcmp(pcVar8,"none");
        if (iVar2 == 0) {
          local_44 = 3;
        }
        else {
          iVar2 = strcmp(pcVar8,"x931");
          if (iVar2 == 0) {
            local_44 = 5;
          }
          else {
            iVar2 = strcmp(pcVar8,"pss");
            if (iVar2 != 0) goto LAB_00468100;
            local_44 = 6;
          }
        }
      }
      if (3 < local_44) goto LAB_00468110;
LAB_004681f8:
      if (local_44 != 1) {
        if (local_44 == 3) {
          pcVar8 = "No padding not allowed with RSA-PSS";
          goto LAB_0046821c;
        }
LAB_00468370:
        FUN_00379868();
        FUN_0037995c("providers/implementations/signature/rsa_sig.c",0x4eb,"rsa_set_ctx_params");
        uVar7 = 0xa5;
        goto LAB_00468554;
      }
      pcVar8 = "PKCS#1 padding not allowed with RSA-PSS";
LAB_0046821c:
      iVar2 = FUN_003fb538(*(undefined8 *)(param_1 + 0x10),0xf000);
      if (iVar2 == 0) goto LAB_00468258;
    }
    else {
      if (*(int *)(lVar5 + 8) != 1) {
        return 0;
      }
      uVar7 = thunk_FUN_003cb238(lVar5,&local_44);
      if ((int)uVar7 == 0) {
        return uVar7;
      }
LAB_00468100:
      if ((int)local_44 < 4) goto LAB_004681f8;
LAB_00468110:
      if (local_44 != 4) {
        if (local_44 != 5) {
          if (local_44 == 6) {
            if ((*(byte *)(param_1 + 0x18) & 0x30) != 0) goto LAB_00468258;
            pcVar8 = "PSS padding only allowed for sign and verify operations";
            goto LAB_0046822c;
          }
          goto LAB_00468370;
        }
        pcVar8 = "X.931 padding not allowed with RSA-PSS";
        goto LAB_0046821c;
      }
      pcVar8 = "OAEP padding not allowed for signing / verifying";
    }
LAB_0046822c:
    FUN_00379868();
    FUN_0037995c("providers/implementations/signature/rsa_sig.c",0x4ed,"rsa_set_ctx_params");
    uVar7 = 0xa5;
  }
LAB_00468558:
  FUN_00379a5c(0x39,uVar7,pcVar8);
  return 0;
}


// ===== 00468610  FUN_00468610 =====

undefined ** FUN_00468610(long param_1)

{
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x1c) & 1) == 0)) {
    return &PTR_s_pad_mode_0078dec0;
  }
  return &PTR_s_digest_0078df88;
}


// ===== 00468634  FUN_00468634 =====

void FUN_00468634(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_0039dd1c();
    return;
  }
  return;
}


// ===== 00468644  FUN_00468644 =====

void FUN_00468644(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_0039e844();
    return;
  }
  return;
}


// ===== 00468654  FUN_00468654 =====

void FUN_00468654(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_0039dfa4();
    return;
  }
  return;
}


// ===== 00468664  FUN_00468664 =====

void FUN_00468664(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_0039e774();
    return;
  }
  return;
}


// ===== 00468674  FUN_00468674 =====

undefined8 FUN_00468674(undefined8 *param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  char *pcVar10;
  
  iVar1 = FUN_0043eb70();
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    param_2 = param_1[2];
    if (param_2 == 0) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/signature/rsa_sig.c",0x198,"rsa_signverify_init");
      uVar5 = 0x39;
      uVar9 = 0x72;
      goto LAB_00468798;
    }
  }
  else {
    iVar1 = FUN_00440b0c(*param_1,param_2,param_4);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_003fa780(param_2);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_003fa6a0(param_1[2]);
    param_1[2] = param_2;
  }
  uVar5 = DAT_001b6ff0;
  *(undefined4 *)(param_1 + 3) = param_4;
  param_1[0x16] = uVar5;
  iVar1 = FUN_003fb538(param_2,0xf000);
  if (iVar1 == 0x1000) {
    *(undefined4 *)(param_1 + 0xd) = 6;
    uVar5 = FUN_003fb520(param_1[2]);
    iVar1 = FUN_00404a34();
    if (iVar1 == 0) {
      uVar2 = FUN_00404ac8(uVar5);
      uVar3 = FUN_00404af0(uVar5);
      uVar4 = FUN_00404b04(uVar5);
      lVar6 = FUN_00404ed0(uVar2);
      lVar7 = FUN_00404ed0(uVar3);
      if (lVar6 == 0) {
        FUN_00379868();
        FUN_0037995c("providers/implementations/signature/rsa_sig.c",0x1c2,"rsa_signverify_init");
        pcVar10 = "PSS restrictions lack hash algorithm";
      }
      else if (lVar7 == 0) {
        FUN_00379868();
        FUN_0037995c("providers/implementations/signature/rsa_sig.c",0x1c7,"rsa_signverify_init");
        pcVar10 = "PSS restrictions lack MGF1 hash algorithm";
      }
      else {
        uVar8 = FUN_003ca460((long)param_1 + 0x34,lVar6,0x32);
        if (uVar8 < 0x32) {
          uVar8 = FUN_003ca460((long)param_1 + 0x7c,lVar7,0x32);
          if (uVar8 < 0x32) {
            *(undefined4 *)(param_1 + 0x16) = uVar4;
            iVar1 = FUN_0046892c(param_1,lVar7,param_1[1]);
            if (iVar1 == 0) {
              return 0;
            }
            iVar1 = FUN_00468ab0(param_1,lVar6,param_1[1]);
            if (iVar1 == 0) {
              return 0;
            }
            iVar1 = FUN_00468d08(param_1,uVar4);
            if (iVar1 == 0) {
              return 0;
            }
            goto LAB_00468730;
          }
          FUN_00379868();
          FUN_0037995c("providers/implementations/signature/rsa_sig.c",0x1d6,"rsa_signverify_init");
          pcVar10 = "MGF1 hash algorithm name too long";
        }
        else {
          FUN_00379868();
          FUN_0037995c("providers/implementations/signature/rsa_sig.c",0x1cf,"rsa_signverify_init");
          pcVar10 = "hash algorithm name too long";
        }
      }
      FUN_00379a5c(0x39,0x7a,pcVar10);
      return 0;
    }
  }
  else {
    if (iVar1 != 0) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/signature/rsa_sig.c",0x1e6,"rsa_signverify_init");
      uVar5 = 4;
      uVar9 = 0xb2;
LAB_00468798:
      FUN_00379a5c(uVar5,uVar9,0);
      return 0;
    }
    *(undefined4 *)(param_1 + 0xd) = 1;
  }
LAB_00468730:
  uVar5 = FUN_00467fc0(param_1,param_3);
  return uVar5;
}


// ===== 0046892c  FUN_0046892c =====

undefined8 FUN_0046892c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  if (param_3 == 0) {
    lVar3 = FUN_0039e6f4(*param_1,param_2,param_1[1]);
  }
  else {
    lVar3 = FUN_0039e6f4(*param_1,param_2);
  }
  if (lVar3 == 0) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/signature/rsa_sig.c",0x173,"rsa_setup_mgf1_md");
    FUN_00379a5c(0x39,0x7a,"%s could not be fetched",param_2);
    return 0;
  }
  iVar1 = FUN_00458a98(*param_1,lVar3,1);
  if (iVar1 < 1) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/signature/rsa_sig.c",0x17b,"rsa_setup_mgf1_md");
    pcVar6 = "digest=%s";
    uVar5 = 0xae;
  }
  else {
    iVar2 = FUN_00468dd4(param_1,0,param_2,iVar1);
    if (iVar2 == 0) goto LAB_00468a64;
    uVar4 = FUN_003ca460((long)param_1 + 0x7c,param_2,0x32);
    if (uVar4 < 0x32) {
      FUN_0039d050(param_1[0xe]);
      param_1[0xe] = lVar3;
      *(int *)(param_1 + 0xf) = iVar1;
      *(byte *)((long)param_1 + 0x1c) = *(byte *)((long)param_1 + 0x1c) | 2;
      return 1;
    }
    FUN_00379868();
    FUN_0037995c("providers/implementations/signature/rsa_sig.c",0x182,"rsa_setup_mgf1_md");
    pcVar6 = "%s exceeds name buffer length";
    uVar5 = 0x7a;
  }
  FUN_00379a5c(0x39,uVar5,pcVar6,param_2);
LAB_00468a64:
  FUN_0039d050(lVar3);
  return 0;
}


// ===== 00468ab0  FUN_00468ab0 =====

undefined8 FUN_00468ab0(undefined8 *param_1,char *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  size_t sVar4;
  char *pcVar5;
  
  if (param_3 == 0) {
    param_3 = param_1[1];
  }
  lVar3 = FUN_0039e6f4(*param_1,param_2,param_3);
  iVar1 = FUN_00458a98(*param_1,lVar3,*(int *)(param_1 + 3) != 0x10);
  sVar4 = strlen(param_2);
  if ((lVar3 == 0) || (iVar1 < 1)) {
    if (lVar3 == 0) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/signature/rsa_sig.c",0x13a,"rsa_setup_md");
      FUN_00379a5c(0x39,0x7a,"%s could not be fetched",param_2);
    }
    if (iVar1 < 1) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/signature/rsa_sig.c",0x13d,"rsa_setup_md");
      FUN_00379a5c(0x39,0xae,"digest=%s",param_2);
    }
  }
  else {
    iVar2 = FUN_00468dd4(param_1,param_2,0,iVar1);
    if ((iVar2 != 0) && (sVar4 < 0x32)) {
      if ((*(byte *)((long)param_1 + 0x1c) & 1) != 0) {
        if ((*(byte *)((long)param_1 + 0x1c) >> 1 & 1) == 0) {
          iVar2 = FUN_0039e4f4(lVar3);
          if (iVar2 == 0) goto LAB_00468bc0;
          FUN_0039d050(param_1[0xe]);
          param_1[0xe] = lVar3;
          *(int *)(param_1 + 0xf) = iVar1;
          FUN_003ca460((long)param_1 + 0x7c,param_2,0x32);
        }
        FUN_0039d284(param_1[5]);
        FUN_0039d050(param_1[4]);
        param_1[4] = lVar3;
        param_1[5] = 0;
        *(int *)(param_1 + 6) = iVar1;
        FUN_003ca460((long)param_1 + 0x34,param_2,0x32);
        return 1;
      }
      pcVar5 = (char *)((long)param_1 + 0x34);
      if ((*pcVar5 == '\0') || (iVar1 = FUN_003898e4(lVar3,pcVar5), iVar1 != 0)) {
        FUN_0039d050(lVar3);
        return 1;
      }
      FUN_00379868();
      FUN_0037995c("providers/implementations/signature/rsa_sig.c",0x148,"rsa_setup_md");
      FUN_00379a5c(0x39,0xae,"digest %s != %s",param_2,pcVar5);
      goto LAB_00468bc0;
    }
  }
  if (0x31 < sVar4) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/signature/rsa_sig.c",0x140,"rsa_setup_md");
    FUN_00379a5c(0x39,0x7a,"%s exceeds name buffer length",param_2);
  }
LAB_00468bc0:
  FUN_0039d050(lVar3);
  return 0;
}


// ===== 00468d08  FUN_00468d08 =====

undefined8 FUN_00468d08(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x68) != 6) {
    return 1;
  }
  iVar1 = FUN_003f9914(*(undefined8 *)(param_1 + 0x10));
  iVar2 = FUN_00389a38(*(undefined8 *)(param_1 + 0x20));
  uVar3 = FUN_003f990c(*(undefined8 *)(param_1 + 0x10));
  if (-1 < param_2) {
    if (param_2 <= (int)((iVar1 - iVar2) - (uint)((uVar3 & 7) == 1))) {
      *(int *)(param_1 + 0xb4) = param_2;
      return 1;
    }
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/signature/rsa_sig.c",0xa5,"rsa_check_parameters");
  FUN_00379a5c(0x39,0x70,0);
  return 0;
}


// ===== 00468dd4  FUN_00468dd4 =====

undefined8 FUN_00468dd4(long param_1,long param_2,long param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 == 6) {
    if (*(int *)(param_1 + 0xb4) == -1) {
      return 1;
    }
    if (((param_2 == 0) || (iVar1 = FUN_003898e4(*(undefined8 *)(param_1 + 0x20)), iVar1 != 0)) &&
       ((param_3 == 0 || (iVar1 = FUN_003898e4(*(undefined8 *)(param_1 + 0x70),param_3), iVar1 != 0)
        ))) {
      return 1;
    }
    uVar2 = 0xae;
    uVar3 = 0x90;
  }
  else if (iVar1 == 5) {
    iVar1 = FUN_004076b0(param_4);
    if (iVar1 != -1) {
      return 1;
    }
    uVar2 = 0xaa;
    uVar3 = 0x87;
  }
  else {
    if (iVar1 != 3) {
      return 1;
    }
    uVar2 = 0xa8;
    uVar3 = 0x81;
    if ((param_2 == 0) && (param_4 == 0)) {
      return 1;
    }
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/signature/rsa_sig.c",uVar3,"rsa_check_padding");
  FUN_00379a5c(0x39,uVar2,0);
  return 0;
}


// ===== 00468ee4  FUN_00468ee4 =====

bool FUN_00468ee4(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0xb8) != 0) {
    return true;
  }
  iVar1 = FUN_003f9914(*(undefined8 *)(param_1 + 0x10));
  lVar2 = FUN_003c83a4((long)iVar1,"providers/implementations/signature/rsa_sig.c",500);
  *(long *)(param_1 + 0xb8) = lVar2;
  return lVar2 != 0;
}


// ===== 00468f3c  FUN_00468f3c =====

void FUN_00468f3c(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xb8);
  if (lVar2 != 0) {
    iVar1 = FUN_003f9914(*(undefined8 *)(param_1 + 0x10));
    FUN_003c89b8(lVar2,(long)iVar1);
    return;
  }
  return;
}


// ===== 00468f7c  FUN_00468f7c =====

undefined8
FUN_00468f7c(long param_1,char *param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_0043eb70();
  if ((((int)uVar2 != 0) && (uVar2 = FUN_00468674(param_1,param_3,param_4,param_5), (int)uVar2 != 0)
      ) && ((param_2 == (char *)0x0 ||
            (((*param_2 != '\0' && (iVar1 = FUN_003cab04(param_1 + 0x34,param_2), iVar1 == 0)) ||
             (uVar2 = FUN_00468ab0(param_1,param_2,*(undefined8 *)(param_1 + 8)), (int)uVar2 != 0)))
            ))) {
    lVar3 = *(long *)(param_1 + 0x28);
    *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfe;
    if (lVar3 == 0) {
      lVar3 = FUN_0039d270();
      *(long *)(param_1 + 0x28) = lVar3;
      if (lVar3 == 0) goto LAB_00469040;
    }
    iVar1 = FUN_0039d378(lVar3,*(undefined8 *)(param_1 + 0x20),param_4);
    if (iVar1 == 0) {
      lVar3 = *(long *)(param_1 + 0x28);
LAB_00469040:
      FUN_0039d284(lVar3);
      *(undefined8 *)(param_1 + 0x28) = 0;
      return 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 00469060  FUN_00469060 =====

ulong FUN_00469060(undefined8 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if (param_3 < 0x2a2) {
    if (param_3 < 0x75) {
      if (param_3 < 0x40) {
        if (param_3 == 3) {
          puVar3 = &DAT_0020ef5a;
        }
        else {
          if (param_3 != 4) {
            return 0xffffffff;
          }
          puVar3 = &DAT_0020ef65;
        }
      }
      else {
        if (param_3 != 0x40) {
          if (param_3 != 0x5f) {
            return 0xffffffff;
          }
          uVar4 = 7;
          puVar3 = PTR_DAT_007a1d78;
          goto LAB_004691fc;
        }
        puVar3 = &DAT_0020ef70;
      }
    }
    else if (param_3 < 0x2a0) {
      if (param_3 == 0x75) {
        uVar4 = 8;
        puVar3 = PTR_DAT_007a1da8;
        goto LAB_004691fc;
      }
      if (param_3 != 0x101) {
        return 0xffffffff;
      }
      puVar3 = &DAT_0020eff4;
    }
    else if (param_3 == 0x2a0) {
      puVar3 = &DAT_0020ef86;
    }
    else {
      if (param_3 != 0x2a1) {
        return 0xffffffff;
      }
      puVar3 = &DAT_0020ef91;
    }
  }
  else if (param_3 < 0x448) {
    if (param_3 < 0x446) {
      if (param_3 == 0x2a2) {
        puVar3 = &DAT_0020ef9c;
      }
      else {
        if (param_3 != 0x2a3) {
          return 0xffffffff;
        }
        puVar3 = &DAT_0020ef7b;
      }
    }
    else if (param_3 == 0x446) {
      puVar3 = &DAT_0020efa7;
    }
    else {
      if (param_3 != 0x447) {
        return 0xffffffff;
      }
      puVar3 = &DAT_0020efb2;
    }
  }
  else if (param_3 < 0x44a) {
    if (param_3 == 0x448) {
      puVar3 = &DAT_0020efc8;
    }
    else {
      if (param_3 != 0x449) {
        return 0xffffffff;
      }
      puVar3 = &DAT_0020efd3;
    }
  }
  else if (param_3 == 0x44a) {
    puVar3 = &DAT_0020efde;
  }
  else {
    if (param_3 != 1099) {
      return 0xffffffff;
    }
    puVar3 = &DAT_0020efe9;
  }
  uVar4 = 0xb;
LAB_004691fc:
  uVar2 = FUN_0045a1dc(param_1,param_2);
  if ((((int)uVar2 != 0) && (uVar2 = FUN_0045a0f0(param_1,0xffffffff), (int)uVar2 != 0)) &&
     (uVar2 = FUN_00459a60(param_1,0xffffffff,puVar3,uVar4), (int)uVar2 != 0)) {
    iVar1 = FUN_0045a230(param_1,param_2);
    uVar2 = (ulong)(iVar1 != 0);
  }
  return uVar2;
}


// ===== 00469258  FUN_00469258 =====

long FUN_00469258(undefined8 param_1,char *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  char **ppcVar10;
  char *pcVar11;
  char *local_d0;
  byte local_c8;
  char *local_c0;
  byte local_b8;
  uint local_a0;
  
  ppcVar10 = &local_d0;
  FUN_0037f6d4();
  local_c8 = 0;
  local_d0 = param_2;
  iVar4 = FUN_003cab60(param_2,"file:",5);
  bVar2 = false;
  pcVar11 = local_d0;
  if (iVar4 == 0) {
    pcVar11 = param_2 + 5;
    iVar4 = FUN_003cab60(pcVar11,&DAT_001f62d0,2);
    bVar2 = iVar4 != 0;
    if (iVar4 == 0) {
      iVar4 = FUN_003cab60(param_2 + 7,"localhost/",10);
      if (iVar4 == 0) {
        lVar6 = 0x11;
      }
      else {
        iVar4 = FUN_003cab60(param_2 + 7,&DAT_001c55aa,1);
        if (iVar4 != 0) {
          FUN_0037f8c4();
          FUN_00379868();
          FUN_0037995c("providers/implementations/storemgmt/file_store.c",0xe4,"file_open");
          uVar9 = 0xdf;
          goto LAB_004695a4;
        }
        lVar6 = 8;
      }
      pcVar11 = param_2 + lVar6 + -1;
    }
    else {
      ppcVar10 = &local_c0;
    }
    *ppcVar10 = pcVar11;
    *(byte *)(ppcVar10 + 1) = *(byte *)(ppcVar10 + 1) | 1;
    pcVar11 = local_d0;
  }
  local_d0 = pcVar11;
  if (((local_c8 & 1) != 0) && (*pcVar11 != '/')) goto LAB_004694e8;
  iVar4 = stat(pcVar11,(stat *)&stack0xffffffffffffff50);
  if (iVar4 < 0) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/storemgmt/file_store.c",0x107,"file_open");
    puVar5 = (undefined4 *)__errno();
    FUN_00379a5c(2,*puVar5,"calling stat(%s)",pcVar11);
    pcVar11 = (char *)0x0;
    bVar3 = true;
    if (bVar2) goto LAB_0046940c;
LAB_0046939c:
    if (bVar3) {
LAB_004693a0:
      FUN_0037f8c4();
      return 0;
    }
  }
  else {
    bVar3 = pcVar11 == (char *)0x0;
    bVar1 = false;
    if (bVar3) {
      bVar1 = bVar2;
    }
    if (!bVar1) goto LAB_0046939c;
LAB_0046940c:
    if (((local_b8 & 1) != 0) && (pcVar11 = local_c0, *local_c0 != '/')) {
LAB_004694e8:
      FUN_0037f8c4();
      FUN_00379868();
      FUN_0037995c("providers/implementations/storemgmt/file_store.c",0x101,"file_open");
      FUN_00379a5c(0x39,0xdb,"Given path=%s",pcVar11);
      return 0;
    }
    iVar4 = stat(local_c0,(stat *)&stack0xffffffffffffff50);
    if (iVar4 < 0) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/storemgmt/file_store.c",0x107,"file_open");
      puVar5 = (undefined4 *)__errno();
      FUN_00379a5c(2,*puVar5,"calling stat(%s)",local_c0);
      local_c0 = (char *)0x0;
    }
    pcVar11 = local_c0;
    if (local_c0 == (char *)0x0) goto LAB_004693a0;
  }
  FUN_0037f71c();
  if ((local_a0 & 0xf000) != 0x4000) {
    lVar6 = FUN_00388570(pcVar11,&DAT_001d80ae);
    if (lVar6 != 0) {
      lVar7 = FUN_00469f5c(0,param_2,param_1);
      if (lVar7 != 0) {
        *(long *)(lVar7 + 0x18) = lVar6;
        return lVar7;
      }
      FUN_00379868();
      FUN_0037995c("providers/implementations/storemgmt/file_store.c",0x9c,"file_open_stream");
      FUN_00379a5c(0x39,0x80039,0);
    }
    FUN_0037ef60(lVar6);
    return 0;
  }
  lVar6 = FUN_00469f5c(1,param_2,param_1);
  if (lVar6 != 0) {
    lVar7 = FUN_003ca178(lVar6 + 0x18,pcVar11);
    *(long *)(lVar6 + 0x30) = lVar7;
    piVar8 = (int *)__errno();
    iVar4 = *piVar8;
    *(int *)(lVar6 + 0x38) = iVar4;
    if (lVar7 != 0) {
      return lVar6;
    }
    if (iVar4 != 0) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/storemgmt/file_store.c",0xb5,"file_open_dir");
      FUN_00379a5c(2,*(undefined4 *)(lVar6 + 0x38),"Calling OPENSSL_DIR_read(\"%s\")",pcVar11);
      FUN_00469ea4(lVar6);
      return 0;
    }
    *(undefined4 *)(lVar6 + 0x20) = 1;
    return lVar6;
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/storemgmt/file_store.c",0xad,"file_open_dir");
  uVar9 = 0x80039;
LAB_004695a4:
  FUN_00379a5c(0x39,uVar9,0);
  return 0;
}


// ===== 0046968c  FUN_0046968c =====

undefined8 * FUN_0046968c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_0043f154();
  puVar2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)
             FUN_003c8474(0x48,"providers/implementations/storemgmt/file_store.c",0x7f);
    if (puVar2 == (undefined8 *)0x0) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/storemgmt/file_store.c",0x9c,"file_open_stream");
      FUN_00379a5c(0x39,0x80039,0);
      FUN_0037db50(puVar1);
      return (undefined8 *)0x0;
    }
    *(undefined4 *)(puVar2 + 2) = 0;
    *puVar2 = param_1;
    puVar2[3] = puVar1;
  }
  return puVar2;
}


// ===== 00469720  FUN_00469720 =====

undefined ** FUN_00469720(void)

{
  return &PTR_s_properties_0078e120;
}


// ===== 0046972c  FUN_0046972c =====

undefined8 FUN_0046972c(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  
  if (param_2 == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 2) != 1) {
    lVar2 = FUN_003cb19c(param_2,"properties");
    if (lVar2 != 0) {
      puVar4 = param_1 + 6;
      FUN_003c86b4(*puVar4,"providers/implementations/storemgmt/file_store.c",0x14a);
      *puVar4 = 0;
      uVar3 = FUN_003cd3d4(lVar2,puVar4,0);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
    }
    lVar2 = FUN_003cb19c(param_2,"input-type");
    if (lVar2 != 0) {
      puVar4 = param_1 + 5;
      FUN_003c86b4(*puVar4,"providers/implementations/storemgmt/file_store.c",0x151);
      *puVar4 = 0;
      uVar3 = FUN_003cd3d4(lVar2,puVar4,0);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
    }
  }
  lVar2 = FUN_003cb19c(param_2,"expect");
  if ((lVar2 == 0) || (uVar3 = thunk_FUN_003cb238(lVar2,param_1 + 8), (int)uVar3 != 0)) {
    lVar2 = FUN_003cb19c(param_2,"subject");
    if (lVar2 != 0) {
      local_38 = 0;
      local_40 = 0;
      if (*(int *)(param_1 + 2) != 1) {
        FUN_00379868();
        FUN_0037995c("providers/implementations/storemgmt/file_store.c",0x164,"file_set_ctx_params")
        ;
        FUN_00379a5c(0x39,0xde,0);
        return 0;
      }
      iVar1 = FUN_003ce0c0(lVar2,&local_38,&local_40);
      if (iVar1 == 0) {
        return 0;
      }
      lVar2 = FUN_0043b53c(0,&local_38,local_40);
      if (lVar2 == 0) {
        return 0;
      }
      uVar3 = FUN_0046b880(*param_1);
      uVar3 = FUN_00426b24(lVar2,uVar3,0,&local_44);
      FUN_0037cd5c((long)param_1 + 0x24,9,"%08lx",uVar3);
      FUN_0043b560(lVar2);
      if (local_44 == 0) {
        return 0;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}


// ===== 00469900  FUN_00469900 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00469900(undefined8 *param_1,code *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  size_t sVar5;
  size_t sVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  char *pcVar11;
  char *pcVar12;
  uint uVar13;
  undefined **ppuVar14;
  code *local_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  char *local_a8;
  size_t local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if (*(int *)(param_1 + 2) == 1) {
    pcVar11 = (char *)param_1[6];
    uStack_78 = _UNK_0078e250;
    local_80 = _DAT_0078e248;
    uStack_98 = _UNK_0078e230;
    local_a0 = _DAT_0078e228;
    uStack_88 = _UNK_0078e240;
    uStack_90 = _DAT_0078e238;
    local_70 = DAT_0078e258;
    uStack_d8 = _UNK_0078e1f0;
    local_e0 = (code *)PTR_DAT_0078e1e8;
    uStack_c8 = _UNK_0078e200;
    puStack_d0 = PTR_DAT_0078e1f8;
    uStack_b8 = _UNK_0078e210;
    local_c0 = _DAT_0078e208;
    local_a8 = (char *)_UNK_0078e220;
    uStack_b0 = _DAT_0078e218;
    while (pcVar11 != (char *)0x0) {
      if (*pcVar11 == '.') goto LAB_00469ac8;
      sVar5 = strlen((char *)((long)param_1 + 0x24));
      if (*(char *)((long)param_1 + 0x24) == '\0') {
LAB_00469ad4:
        pcVar12 = (char *)param_1[1];
        if (*pcVar12 == '\0') {
          uVar13 = 0;
        }
        else {
          sVar5 = strlen(pcVar12);
          uVar13 = (uint)(pcVar12[sVar5 - 1] == '/');
        }
        sVar5 = strlen(pcVar12);
        sVar6 = strlen(pcVar11);
        lVar9 = sVar5 + (uVar13 ^ 1) + sVar6;
        pcVar12 = (char *)FUN_003c8474(lVar9 + 1,"providers/implementations/storemgmt/file_store.c",
                                       0x22e);
        if (pcVar12 == (char *)0x0) {
          return 0;
        }
        puVar1 = &DAT_001c55aa;
        if (uVar13 != 0) {
          puVar1 = &DAT_001c717f;
        }
        FUN_003ca4e8(pcVar12,param_1[1],lVar9 + 1);
        FUN_003ca4e8(pcVar12,puVar1,lVar9 + 1);
        FUN_003ca4e8(pcVar12,pcVar11,lVar9 + 1);
      }
      else {
        pcVar12 = (char *)0x0;
        if ((*(uint *)(param_1 + 8) < 7) &&
           ((1 << (ulong)(*(uint *)(param_1 + 8) & 0x1f) & 0x61U) != 0)) {
          iVar3 = FUN_003cab60(pcVar11,(long)param_1 + 0x24,sVar5);
          if ((iVar3 == 0) && (pcVar11 = pcVar11 + sVar5, *pcVar11 == '.')) {
            pbVar10 = (byte *)(pcVar11 + 1);
            if (*pbVar10 == 0x72) {
              pbVar10 = (byte *)(pcVar11 + 2);
              if ((*(int *)(param_1 + 8) == 0) || (*(int *)(param_1 + 8) == 6)) {
LAB_00469aa0:
                if (0xfffffff5 < *pbVar10 - 0x3a) {
                  do {
                    pbVar10 = pbVar10 + 1;
                  } while (0xfffffff5 < *pbVar10 - 0x3a);
                  if (*pbVar10 == 0) {
                    pcVar11 = (char *)param_1[6];
                    goto LAB_00469ad4;
                  }
                }
              }
            }
            else if (*(int *)(param_1 + 8) != 6) goto LAB_00469aa0;
          }
LAB_00469ac8:
          pcVar12 = (char *)0x0;
        }
      }
      pcVar11 = (char *)FUN_003ca178(param_1 + 3,param_1[1]);
      param_1[6] = pcVar11;
      piVar7 = (int *)__errno();
      iVar3 = *piVar7;
      *(int *)(param_1 + 7) = iVar3;
      if ((pcVar11 == (char *)0x0) && (iVar3 == 0)) {
        *(undefined4 *)(param_1 + 4) = 1;
      }
      if (pcVar12 != (char *)0x0) {
        local_a8 = pcVar12;
        local_a0 = strlen(pcVar12);
        uVar2 = (*param_2)(&local_e0,param_3);
        FUN_003c86b4(pcVar12,"providers/implementations/storemgmt/file_store.c",0x2a9);
        return uVar2;
      }
    }
    if (*(int *)(param_1 + 4) != 0) {
      return 0;
    }
    FUN_00379868();
    FUN_0037995c("providers/implementations/storemgmt/file_store.c",0x28a,"file_load_dir_entry");
    uVar2 = *(undefined4 *)(param_1 + 7);
    uVar4 = 2;
    goto LAB_00469cc0;
  }
  if (*(int *)(param_1 + 2) != 0) {
    return 0;
  }
  uVar4 = FUN_0046b880(*param_1);
  lVar9 = param_1[4];
  if (lVar9 != 0) goto LAB_00469954;
  lVar9 = FUN_00385440();
  param_1[4] = lVar9;
  if (lVar9 == 0) {
    FUN_00379868();
    uVar4 = 0x1a7;
  }
  else {
    iVar3 = FUN_003860d8(lVar9,param_1[5]);
    if (iVar3 == 0) {
      FUN_00379868();
      uVar4 = 0x1ae;
    }
    else if (*(int *)(param_1 + 8) == 6) {
      iVar3 = FUN_0038612c(param_1[4],"CertificateList");
      if (iVar3 != 0) goto LAB_00469d00;
      FUN_00379868();
      uVar4 = 0x1c3;
    }
    else if ((*(int *)(param_1 + 8) == 5) &&
            (iVar3 = FUN_0038612c(param_1[4],"Certificate"), iVar3 == 0)) {
      FUN_00379868();
      uVar4 = 0x1bc;
    }
    else {
LAB_00469d00:
      if (PTR_DAT_0078e320 != (undefined *)0x0) {
        ppuVar14 = &PTR_DAT_0078e320;
        do {
          lVar9 = FUN_00384a28(0,ppuVar14,0);
          if (lVar9 == 0) {
            FUN_003849bc();
            return 0;
          }
          lVar8 = FUN_00386180(lVar9,*param_1);
          FUN_003849bc(lVar9);
          if (lVar8 == 0) {
            return 0;
          }
          iVar3 = FUN_00386524(param_1[4],lVar8);
          if (iVar3 == 0) {
            FUN_003863b8(lVar8);
            FUN_00379868();
            uVar4 = 0x1e1;
            goto LAB_00469cb0;
          }
          ppuVar14 = ppuVar14 + 4;
        } while (*ppuVar14 != (undefined *)0x0);
      }
      iVar3 = FUN_00386718(param_1[4],uVar4,param_1[6]);
      if (iVar3 == 0) {
        FUN_00379868();
        uVar4 = 0x1e8;
      }
      else {
        iVar3 = FUN_00386b1c(param_1[4],FUN_0046a050);
        if ((iVar3 != 0) && (iVar3 = FUN_00386bc4(param_1[4],FUN_0046a05c), iVar3 != 0)) {
          lVar9 = param_1[4];
LAB_00469954:
          local_e0 = param_2;
          uStack_d8 = param_3;
          FUN_00386b70(lVar9,&local_e0);
          FUN_0038392c(param_1[4],param_4,param_5);
          FUN_0037f6d4();
          uVar2 = FUN_00385994(param_1[4],param_1[3]);
          iVar3 = FUN_0037e4bc(param_1[3],2,0,0);
          if ((iVar3 != 0) && (iVar3 = FUN_0037a744(), iVar3 == 0x1e08010c)) {
            FUN_0037f71c();
            return uVar2;
          }
          FUN_0037f8c4();
          return uVar2;
        }
        FUN_00379868();
        uVar4 = 500;
      }
    }
  }
LAB_00469cb0:
  FUN_0037995c("providers/implementations/storemgmt/file_store.c",uVar4,"file_setup_decoders");
  uVar4 = 0x39;
  uVar2 = 0x8003c;
LAB_00469cc0:
  FUN_00379a5c(uVar4,uVar2,0);
  return 0;
}


// ===== 00469e24  FUN_00469e24 =====

uint FUN_00469e24(long param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar1 = FUN_0037e4bc(*(undefined8 *)(param_1 + 0x18),10,0,0);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = FUN_0037e4bc(*(undefined8 *)(param_1 + 0x18),2,0,0);
    return (uint)(iVar1 != 0);
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    return *(uint *)(param_1 + 0x20);
  }
  return 1;
}


// ===== 00469ea4  FUN_00469ea4 =====

undefined8 FUN_00469ea4(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_0037db50(*(undefined8 *)(param_1 + 0x18));
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 1) {
      return 1;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_003ca274();
    }
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  FUN_003c86b4(uVar1,"providers/implementations/storemgmt/file_store.c",0x71);
  if (*(int *)(param_1 + 0x10) != 1) {
    FUN_00385540(*(undefined8 *)(param_1 + 0x20));
    FUN_003c86b4(*(undefined8 *)(param_1 + 0x30),"providers/implementations/storemgmt/file_store.c",
                 0x74);
    FUN_003c86b4(*(undefined8 *)(param_1 + 0x28),"providers/implementations/storemgmt/file_store.c",
                 0x75);
  }
  FUN_003c86b4(param_1,"providers/implementations/storemgmt/file_store.c",0x77);
  return 1;
}


// ===== 00469f5c  FUN_00469f5c =====

undefined8 * FUN_00469f5c(undefined4 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)FUN_003c8474(0x48,"providers/implementations/storemgmt/file_store.c",0x7f);
  if (puVar1 != (undefined8 *)0x0) {
    if (param_2 != 0) {
      lVar2 = FUN_003ca2f4(param_2,"providers/implementations/storemgmt/file_store.c",0x80);
      puVar1[1] = lVar2;
      if (lVar2 == 0) {
        FUN_003c86b4(0,"providers/implementations/storemgmt/file_store.c",0x71);
        if (*(int *)(puVar1 + 2) != 1) {
          FUN_00385540(puVar1[4]);
          FUN_003c86b4(puVar1[6],"providers/implementations/storemgmt/file_store.c",0x74);
          FUN_003c86b4(puVar1[5],"providers/implementations/storemgmt/file_store.c",0x75);
        }
        FUN_003c86b4(puVar1,"providers/implementations/storemgmt/file_store.c",0x77);
        return (undefined8 *)0x0;
      }
    }
    *(undefined4 *)(puVar1 + 2) = param_1;
    *puVar1 = param_3;
  }
  return puVar1;
}


// ===== 0046a050  FUN_0046a050 =====

void FUN_0046a050(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0046a058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_3)(param_2,param_3[1]);
  return;
}


// ===== 0046a05c  FUN_0046a05c =====

void FUN_0046a05c(void)

{
  return;
}


// ===== 0046a060  FUN_0046a060 =====

void FUN_0046a060(void)

{
  return;
}


// ===== 0046a064  FUN_0046a064 =====

void FUN_0046a064(void)

{
  return;
}


// ===== 0046a068  FUN_0046a068 =====

ulong FUN_0046a068(void)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  code *in_x3;
  undefined8 in_x4;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [40];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_34;
  
  uVar3 = FUN_0043f154();
  local_e0 = (undefined8 *)0x0;
  if (uVar3 != 0) {
    FUN_0037f6d4();
    iVar2 = FUN_003e04f8(uVar3,&local_e0);
    FUN_0037f71c();
    if ((iVar2 < 0) && (local_e0 != (undefined8 *)0x0)) {
      FUN_00387e64();
      local_e0 = (undefined8 *)0x0;
    }
    FUN_0037db50(uVar3);
    puVar1 = local_e0;
    local_34 = 0;
    if (local_e0 == (undefined8 *)0x0) {
      return 1;
    }
    FUN_003cb668(auStack_b0,&DAT_001eccc2,&local_34);
    FUN_003cd924(&local_d8,&DAT_001eef54,puVar1[1],*puVar1);
    local_68 = local_b8;
    uStack_80 = uStack_d0;
    local_88 = local_d8;
    uStack_70 = uStack_c0;
    local_78 = local_c8;
    FUN_003cdfcc(&local_d8);
    uStack_58 = uStack_d0;
    local_60 = local_d8;
    uStack_48 = uStack_c0;
    uStack_50 = local_c8;
    local_40 = local_b8;
    uVar3 = (*in_x3)(auStack_b0,in_x4);
    uVar3 = uVar3 & 0xffffffff;
    FUN_00387e64(puVar1);
  }
  return uVar3;
}


// ===== 0046a178  FUN_0046a178 =====

undefined4 FUN_0046a178(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  code *in_x3;
  undefined8 in_x4;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined1 auStack_f8 [4];
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [40];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_44;
  
  lVar5 = FUN_0043f154();
  local_100 = 0xffffffff;
  uStack_fc = 0xffffffff;
  if (lVar5 == 0) {
    puVar6 = (undefined8 *)0x0;
    goto LAB_0046a348;
  }
  puVar6 = (undefined8 *)FUN_00387e50();
  if ((puVar6 != (undefined8 *)0x0) && (lVar7 = FUN_00387ed0(puVar6,0x10), lVar7 != 0)) {
    FUN_0037f6d4();
    iVar1 = FUN_0037dd7c(lVar5,puVar6[1],0x10);
    FUN_0037f71c();
    if (iVar1 == 0x10) {
      FUN_0037f6d4();
      local_f0 = puVar6[1];
      iVar1 = FUN_0044a9e8(&local_f0,0x10,auStack_f8,&local_f4,&uStack_fc,&local_100);
      FUN_0037f71c();
      if (0 < iVar1) {
        uVar2 = FUN_0044ad04(local_f4,uStack_fc,local_100);
        lVar7 = FUN_00387ed0(puVar6,(ulong)uVar2 + 0x10);
        if (lVar7 != 0) {
          FUN_0037f6d4();
          uVar3 = FUN_0037dd7c(lVar5,puVar6[1] + 0x10,uVar2);
          FUN_0037f71c();
          FUN_0037db50(lVar5);
          if (uVar3 == uVar2) {
            local_44 = 2;
            FUN_003cb668(auStack_c0,&DAT_001eccc2,&local_44);
            FUN_003cd924(&local_e8,&DAT_001eef54,puVar6[1],*puVar6);
            local_78 = local_c8;
            uStack_90 = uStack_e0;
            local_98 = local_e8;
            uStack_80 = uStack_d0;
            local_88 = local_d8;
            FUN_003cdfcc(&local_e8);
            uStack_68 = uStack_e0;
            local_70 = local_e8;
            uStack_58 = uStack_d0;
            uStack_60 = local_d8;
            local_50 = local_c8;
            uVar4 = (*in_x3)(auStack_c0,in_x4);
            FUN_00387e64(puVar6);
            return uVar4;
          }
          goto LAB_0046a37c;
        }
        FUN_00379868();
        uVar8 = 0x96;
        goto LAB_0046a328;
      }
    }
    FUN_0037db50(lVar5);
LAB_0046a37c:
    FUN_00387e64(puVar6);
    return 1;
  }
  FUN_00379868();
  uVar8 = 0x80;
LAB_0046a328:
  FUN_0037995c("providers/implementations/storemgmt/file_store_any2obj.c",uVar8,"msblob2obj_decode")
  ;
  FUN_00379a5c(9,0x80007,0);
LAB_0046a348:
  FUN_0037db50(lVar5);
  FUN_00387e64(puVar6);
  return 0;
}


// ===== 0046a3bc  FUN_0046a3bc =====

undefined4 FUN_0046a3bc(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  code *in_x3;
  undefined8 in_x4;
  int local_f8;
  int iStack_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [40];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_44;
  
  lVar5 = FUN_0043f154();
  if (lVar5 == 0) {
    puVar6 = (undefined8 *)0x0;
    goto LAB_0046a578;
  }
  puVar6 = (undefined8 *)FUN_00387e50();
  if ((puVar6 != (undefined8 *)0x0) && (lVar7 = FUN_00387ed0(puVar6,0x18), lVar7 != 0)) {
    FUN_0037f6d4();
    iVar2 = FUN_0037dd7c(lVar5,puVar6[1],0x18);
    FUN_0037f71c();
    if (iVar2 == 0x18) {
      FUN_0037f6d4();
      local_f0 = puVar6[1];
      iVar2 = FUN_0044b6fc(&local_f0,0x18,0,&iStack_f4,&local_f8);
      FUN_0037f71c();
      if (0 < iVar2) {
        uVar1 = local_f8 + iStack_f4;
        lVar7 = FUN_00387ed0(puVar6,(ulong)uVar1 + 0x18);
        if (lVar7 != 0) {
          FUN_0037f6d4();
          uVar3 = FUN_0037dd7c(lVar5,puVar6[1] + 0x18,(ulong)uVar1);
          FUN_0037f71c();
          FUN_0037db50(lVar5);
          if (uVar3 == uVar1) {
            local_44 = 2;
            FUN_003cb668(auStack_c0,&DAT_001eccc2,&local_44);
            FUN_003cd924(&local_e8,&DAT_001eef54,puVar6[1],*puVar6);
            local_78 = local_c8;
            uStack_90 = uStack_e0;
            local_98 = local_e8;
            uStack_80 = uStack_d0;
            local_88 = local_d8;
            FUN_003cdfcc(&local_e8);
            uStack_68 = uStack_e0;
            local_70 = local_e8;
            uStack_58 = uStack_d0;
            uStack_60 = local_d8;
            local_50 = local_c8;
            uVar4 = (*in_x3)(auStack_c0,in_x4);
            FUN_00387e64(puVar6);
            return uVar4;
          }
          goto LAB_0046a5ac;
        }
        FUN_00379868();
        uVar8 = 0xd9;
        goto LAB_0046a558;
      }
    }
    FUN_0037db50(lVar5);
LAB_0046a5ac:
    FUN_00387e64(puVar6);
    return 1;
  }
  FUN_00379868();
  uVar8 = 0xc3;
LAB_0046a558:
  FUN_0037995c("providers/implementations/storemgmt/file_store_any2obj.c",uVar8,"pvk2obj_decode");
  FUN_00379a5c(9,0x80007,0);
LAB_0046a578:
  FUN_0037db50(lVar5);
  FUN_00387e64(puVar6);
  return 0;
}


// ===== 0046a5ec  FUN_0046a5ec =====

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_0046a5ec(undefined8 param_1,undefined8 param_2,ulong *param_3,undefined8 *param_4,void *param_5,
            long param_6,ulong param_7,void *param_8,ulong param_9,char param_10)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  byte bVar4;
  size_t __n;
  ulong uVar5;
  uint uVar6;
  byte bVar7;
  bool bVar8;
  byte bVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *puVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  byte *pbVar21;
  ulong uVar22;
  ulong uVar23;
  byte *pbVar24;
  size_t __n_00;
  ulong uVar25;
  ulong uVar26;
  byte bVar27;
  ulong uVar28;
  long lVar29;
  size_t __n_01;
  uint uVar30;
  ulong __n_02;
  code *pcVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  code *local_358;
  ulong local_320 [16];
  undefined5 local_2a0 [8];
  undefined5 local_260;
  undefined3 uStack_25b;
  undefined1 auStack_258 [5];
  undefined1 auStack_253 [115];
  ulong local_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong local_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong local_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong local_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  byte abStack_160 [24];
  undefined1 auStack_148 [220];
  uint local_6c;
  
  if (param_7 >> 0x14 != 0) {
    return 0;
  }
  iVar11 = FUN_003898e4(param_1,&DAT_001f35df);
  if (iVar11 == 0) {
    iVar12 = FUN_003898e4(param_1,&DAT_001eef82);
    if (iVar12 != 0) {
      iVar12 = FUN_00408928(auStack_148);
      if (iVar12 < 1) {
        return 0;
      }
      local_358 = FUN_0046afb8;
      uVar26 = 0x14;
      pcVar31 = (code *)PTR_FUN_007a1c18;
LAB_0046a714:
      __n_01 = 0x28;
      goto LAB_0046a720;
    }
    iVar12 = FUN_003898e4(param_1,"SHA2-224");
    if (iVar12 != 0) {
      iVar12 = FUN_00408c94(auStack_148);
      if (iVar12 < 1) {
        return 0;
      }
      local_358 = FUN_0046b070;
      uVar26 = 0x1c;
      pcVar31 = (code *)PTR_FUN_007a1c20;
      goto LAB_0046a714;
    }
    iVar12 = FUN_003898e4(param_1,"SHA2-256");
    if (iVar12 == 0) {
      iVar12 = FUN_003898e4(param_1,"SHA2-384");
      if (iVar12 == 0) {
        iVar12 = FUN_003898e4(param_1,"SHA2-512");
        if (iVar12 == 0) {
          if (param_3 == (ulong *)0x0) {
            return 0;
          }
          *param_3 = 0;
          return 0;
        }
        iVar12 = FUN_0040a840(auStack_148);
        if (iVar12 < 1) {
          return 0;
        }
        uVar26 = 0x40;
      }
      else {
        iVar12 = FUN_0040a7fc(auStack_148);
        if (iVar12 < 1) {
          return 0;
        }
        uVar26 = 0x30;
      }
      bVar10 = false;
      local_358 = FUN_0046b194;
      __n_02 = 0x80;
      __n_00 = 0x10;
      pcVar31 = (code *)PTR_FUN_007a1c28;
    }
    else {
      iVar12 = FUN_00408cd0(auStack_148);
      if (iVar12 < 1) {
        return 0;
      }
      bVar10 = true;
      local_358 = FUN_0046b070;
      uVar26 = 0x20;
      __n_02 = 0x40;
      __n_00 = 8;
      pcVar31 = (code *)PTR_FUN_007a1c20;
    }
    bVar8 = false;
    __n_01 = 0x28;
  }
  else {
    iVar12 = FUN_003d63f0(auStack_148);
    if (iVar12 < 1) {
      return 0;
    }
    local_358 = FUN_0046af24;
    uVar26 = 0x10;
    __n_01 = 0x30;
    pcVar31 = (code *)PTR_FUN_007a1ba0;
LAB_0046a720:
    __n_02 = 0x40;
    bVar10 = true;
    __n_00 = 8;
    bVar8 = true;
  }
  uVar1 = param_9 + __n_01 + 0xb;
  uVar3 = 0xd;
  uVar30 = (uint)__n_02;
  if (param_10 == '\0') {
    uVar6 = 0;
    if (uVar30 != 0) {
      uVar6 = ((int)uVar26 + uVar30 + 0xff) / uVar30;
    }
    uVar25 = (ulong)uVar6 + 1;
  }
  else {
    uVar25 = 2;
    uVar3 = uVar1;
  }
  uVar28 = uVar3 + param_6;
  uVar5 = 0;
  if (__n_02 != 0) {
    uVar5 = ((((__n_00 - 1) + __n_02) - uVar26) + uVar3 + param_7) / __n_02;
  }
  uVar18 = uVar5 - uVar25;
  uVar14 = uVar25;
  if (param_10 != '\0') {
    uVar14 = uVar25 + 1;
  }
  uVar22 = uVar18 * __n_02;
  if (uVar5 <= uVar14) {
    uVar18 = 0;
    uVar22 = 0;
  }
  if (param_10 == '\0') {
    memset(&local_1e0,0,__n_02);
    if (0x80 < param_9) {
      return 0;
    }
    memcpy(&local_1e0,param_8,param_9);
    local_1e0 = local_1e0 ^ 0x3636363636363636;
    uStack_1d8 = uStack_1d8 ^ 0x3636363636363636;
    uStack_1d0 = uStack_1d0 ^ 0x3636363636363636;
    uStack_1c8 = uStack_1c8 ^ 0x3636363636363636;
    local_1c0 = local_1c0 ^ 0x3636363636363636;
    uStack_1b8 = uStack_1b8 ^ 0x3636363636363636;
    uStack_1b0 = uStack_1b0 ^ 0x3636363636363636;
    uStack_1a8 = uStack_1a8 ^ 0x3636363636363636;
    if (!bVar10) {
      local_1a0 = local_1a0 ^ 0x3636363636363636;
      uStack_198 = uStack_198 ^ 0x3636363636363636;
      uStack_190 = uStack_190 ^ 0x3636363636363636;
      uStack_188 = uStack_188 ^ 0x3636363636363636;
      local_180 = local_180 ^ 0x3636363636363636;
      uStack_178 = uStack_178 ^ 0x3636363636363636;
      uStack_170 = uStack_170 ^ 0x3636363636363636;
      uStack_168 = uStack_168 ^ 0x3636363636363636;
    }
    (*pcVar31)(auStack_148,&local_1e0);
    iVar12 = ((int)uVar28 + uVar30) * 8;
    if (iVar11 != 0) goto LAB_0046a7d4;
LAB_0046a8bc:
    memset(abStack_160 + 8,0,__n_00 - 4);
    abStack_160[__n_00 + 4] = (byte)((uint)iVar12 >> 0x18);
    abStack_160[__n_00 + 5] = (byte)((uint)iVar12 >> 0x10);
    abStack_160[__n_00 + 6] = (byte)((uint)iVar12 >> 8);
    abStack_160[__n_00 + 7] = (byte)iVar12;
  }
  else {
    iVar12 = (int)uVar28 * 8;
    if (iVar11 == 0) goto LAB_0046a8bc;
LAB_0046a7d4:
    memset(abStack_160 + 8,0,__n_00);
    abStack_160[__n_00 + 2] = (byte)((uint)iVar12 >> 0x10);
    abStack_160[__n_00 + 3] = (byte)((uint)iVar12 >> 0x18);
    abStack_160[__n_00 + 1] = (byte)((uint)iVar12 >> 8);
    abStack_160[__n_00] = (byte)iVar12;
  }
  if (uVar22 != 0) {
    if (param_10 == '\0') {
      local_260 = (undefined5)*param_4;
      uStack_25b = (undefined3)*(undefined8 *)((long)param_4 + 5);
      auStack_258 = SUB85((ulong)*(undefined8 *)((long)param_4 + 5) >> 0x18,0);
      memcpy(auStack_253,param_5,__n_02 - 0xd);
      (*pcVar31)(auStack_148,&stack0xfffffffffffffda0);
      uVar1 = 0;
      if (__n_02 != 0) {
        uVar1 = uVar22 / __n_02;
      }
      if (1 < uVar1) {
        lVar29 = uVar1 - 1;
        lVar13 = (long)param_5 + (__n_02 - 0xd);
        do {
          (*pcVar31)(auStack_148,lVar13);
          lVar29 = lVar29 + -1;
          lVar13 = lVar13 + __n_02;
        } while (lVar29 != 0);
      }
    }
    else {
      __n = uVar1 - __n_02;
      if (uVar1 < __n_02 || __n == 0) {
        return 0;
      }
      (*pcVar31)(auStack_148);
      memcpy(&stack0xfffffffffffffda0,(void *)((long)param_4 + __n_02),__n);
      memcpy(auStack_258 + (__n - 8),param_5,__n_02 - __n);
      (*pcVar31)(auStack_148,&stack0xfffffffffffffda0);
      uVar1 = 0;
      if (__n_02 != 0) {
        uVar1 = uVar22 / __n_02;
      }
      if (1 < uVar1 - 1) {
        lVar29 = uVar1 - 2;
        lVar13 = (long)param_5 + ((__n_02 * 2 - __n_01) - param_9) + -0xb;
        do {
          (*pcVar31)(auStack_148,lVar13);
          lVar29 = lVar29 + -1;
          lVar13 = lVar13 + __n_02;
        } while (lVar29 != 0);
      }
    }
  }
  uVar1 = uVar18 + uVar25;
  local_2a0[1]._0_8_ = 0;
  local_2a0[0]._0_8_ = 0;
  local_2a0[3]._0_8_ = 0;
  local_2a0[2]._0_8_ = 0;
  local_2a0[5]._0_8_ = 0;
  local_2a0[4]._0_8_ = 0;
  local_2a0[7]._0_8_ = 0;
  local_2a0[6]._0_8_ = 0;
  if (!CARRY8(uVar18,uVar25)) {
    uVar25 = 0;
    if (__n_02 != 0) {
      uVar25 = uVar28 / __n_02;
    }
    uVar5 = 0;
    if (__n_02 != 0) {
      uVar5 = (uVar28 + __n_00) / __n_02;
    }
    uVar28 = uVar28 & __n_02 - 1;
    uVar19 = uVar26 & 0x60;
    uVar14 = uVar26 & 0x78;
    do {
      uVar15 = 0;
      uVar23 = (uVar18 ^ uVar5) - 1 & (uVar18 ^ uVar5 ^ 0xffffffffffffffff);
      uVar6 = (uint)((uVar18 ^ uVar25) - 1 >> 0x20) &
              ((uint)((uVar18 ^ uVar25) >> 0x20) ^ 0xffffffff);
      bVar9 = (byte)((int)uVar6 >> 0x1f);
      bVar7 = (byte)((long)uVar23 >> 0x3f);
      uVar30 = ~((uint)((long)uVar23 >> 0x3f) & 0xff);
      do {
        if (uVar22 < uVar3) {
          pbVar21 = (byte *)((long)param_4 + uVar22);
LAB_0046abc4:
          bVar27 = *pbVar21;
        }
        else {
          if (uVar22 < uVar3 + param_7) {
            pbVar21 = (byte *)((long)param_5 + (uVar22 - uVar3));
            goto LAB_0046abc4;
          }
          bVar27 = 0;
        }
        uVar2 = (int)uVar6 >> 0x1f & 0xffU &
                ((int)((uint)(uVar15 - uVar28 >> 0x20) | (uint)(uVar28 >> 0x20)) >> 0x1f ^
                0xffffffffU);
        local_6c = ~uVar2;
        bVar4 = ~bVar9;
        if ((long)(uVar15 - (uVar28 + 1) | uVar28 + 1) < 0) {
          bVar4 = 0xff;
        }
        bVar27 = bVar4 & (bVar9 | bVar7 ^ 0xff) & ((byte)local_6c & bVar27 | (byte)uVar2 & 0x80);
        if (__n_02 - __n_00 <= uVar15) {
          bVar27 = (byte)uVar30 & bVar27 | bVar7 & abStack_160[(uVar15 - (__n_02 - __n_00)) + 8];
          local_6c = uVar30;
        }
        *(byte *)((long)local_320 + uVar15) = bVar27;
        uVar15 = uVar15 + 1;
        uVar22 = uVar22 + 1;
      } while (uVar15 != __n_02);
      (*pcVar31)(auStack_148,local_320);
      (*local_358)(auStack_148,local_320);
      uVar15 = uVar19;
      puVar20 = (undefined8 *)(local_2a0 + 2);
      puVar16 = local_320 + 2;
      if (bVar8) {
        uVar15 = 0;
LAB_0046acd8:
        lVar13 = uVar15 - uVar14;
        puVar16 = (ulong *)((long)local_320 + uVar15);
        puVar20 = (undefined8 *)((long)local_2a0 + uVar15);
        do {
          uVar17 = *puVar20;
          lVar13 = lVar13 + 8;
          uVar15 = *puVar16 &
                   CONCAT17(bVar7,CONCAT16(bVar7,CONCAT15(bVar7,CONCAT14(bVar7,CONCAT13(bVar7,
                                                  CONCAT12(bVar7,CONCAT11(bVar7,bVar7)))))));
          *puVar20 = CONCAT17((byte)((ulong)uVar17 >> 0x38) | (byte)(uVar15 >> 0x38),
                              CONCAT16((byte)((ulong)uVar17 >> 0x30) | (byte)(uVar15 >> 0x30),
                                       CONCAT15((byte)((ulong)uVar17 >> 0x28) |
                                                (byte)(uVar15 >> 0x28),
                                                CONCAT14((byte)((ulong)uVar17 >> 0x20) |
                                                         (byte)(uVar15 >> 0x20),
                                                         CONCAT13((byte)((ulong)uVar17 >> 0x18) |
                                                                  (byte)(uVar15 >> 0x18),
                                                                  CONCAT12((byte)((ulong)uVar17 >>
                                                                                 0x10) |
                                                                           (byte)(uVar15 >> 0x10),
                                                                           CONCAT11((byte)((ulong)
                                                  uVar17 >> 8) | (byte)(uVar15 >> 8),
                                                  (byte)uVar17 | (byte)uVar15)))))));
          puVar16 = puVar16 + 1;
          puVar20 = puVar20 + 1;
        } while (lVar13 != 0);
        uVar15 = uVar14;
        if (uVar26 != uVar14) {
LAB_0046ad18:
          lVar13 = uVar26 - uVar15;
          pbVar21 = (byte *)((long)local_2a0 + uVar15);
          pbVar24 = (byte *)((long)local_320 + uVar15);
          do {
            lVar13 = lVar13 + -1;
            *pbVar21 = *pbVar21 | *pbVar24 & bVar7;
            pbVar21 = pbVar21 + 1;
            pbVar24 = pbVar24 + 1;
          } while (lVar13 != 0);
        }
      }
      else {
        do {
          uVar32 = puVar16[-1];
          uVar23 = puVar16[-2];
          uVar34 = puVar16[1];
          uVar33 = *puVar16;
          uVar15 = uVar15 - 0x20;
          uVar35 = puVar20[-1];
          uVar17 = puVar20[-2];
          uVar37 = puVar20[1];
          uVar36 = *puVar20;
          puVar20[-1] = CONCAT17((byte)((ulong)uVar35 >> 0x38) | (byte)(uVar32 >> 0x38) & bVar7,
                                 CONCAT16((byte)((ulong)uVar35 >> 0x30) |
                                          (byte)(uVar32 >> 0x30) & bVar7,
                                          CONCAT15((byte)((ulong)uVar35 >> 0x28) |
                                                   (byte)(uVar32 >> 0x28) & bVar7,
                                                   CONCAT14((byte)((ulong)uVar35 >> 0x20) |
                                                            (byte)(uVar32 >> 0x20) & bVar7,
                                                            CONCAT13((byte)((ulong)uVar35 >> 0x18) |
                                                                     (byte)(uVar32 >> 0x18) & bVar7,
                                                                     CONCAT12((byte)((ulong)uVar35
                                                                                    >> 0x10) |
                                                                              (byte)(uVar32 >> 0x10)
                                                                              & bVar7,CONCAT11((byte
                                                  )((ulong)uVar35 >> 8) |
                                                  (byte)(uVar32 >> 8) & bVar7,
                                                  (byte)uVar35 | (byte)uVar32 & bVar7)))))));
          puVar20[-2] = CONCAT17((byte)((ulong)uVar17 >> 0x38) | (byte)(uVar23 >> 0x38) & bVar7,
                                 CONCAT16((byte)((ulong)uVar17 >> 0x30) |
                                          (byte)(uVar23 >> 0x30) & bVar7,
                                          CONCAT15((byte)((ulong)uVar17 >> 0x28) |
                                                   (byte)(uVar23 >> 0x28) & bVar7,
                                                   CONCAT14((byte)((ulong)uVar17 >> 0x20) |
                                                            (byte)(uVar23 >> 0x20) & bVar7,
                                                            CONCAT13((byte)((ulong)uVar17 >> 0x18) |
                                                                     (byte)(uVar23 >> 0x18) & bVar7,
                                                                     CONCAT12((byte)((ulong)uVar17
                                                                                    >> 0x10) |
                                                                              (byte)(uVar23 >> 0x10)
                                                                              & bVar7,CONCAT11((byte
                                                  )((ulong)uVar17 >> 8) |
                                                  (byte)(uVar23 >> 8) & bVar7,
                                                  (byte)uVar17 | (byte)uVar23 & bVar7)))))));
          puVar20[1] = CONCAT17((byte)((ulong)uVar37 >> 0x38) | (byte)(uVar34 >> 0x38) & bVar7,
                                CONCAT16((byte)((ulong)uVar37 >> 0x30) |
                                         (byte)(uVar34 >> 0x30) & bVar7,
                                         CONCAT15((byte)((ulong)uVar37 >> 0x28) |
                                                  (byte)(uVar34 >> 0x28) & bVar7,
                                                  CONCAT14((byte)((ulong)uVar37 >> 0x20) |
                                                           (byte)(uVar34 >> 0x20) & bVar7,
                                                           CONCAT13((byte)((ulong)uVar37 >> 0x18) |
                                                                    (byte)(uVar34 >> 0x18) & bVar7,
                                                                    CONCAT12((byte)((ulong)uVar37 >>
                                                                                   0x10) |
                                                                             (byte)(uVar34 >> 0x10)
                                                                             & bVar7,CONCAT11((byte)
                                                  ((ulong)uVar37 >> 8) | (byte)(uVar34 >> 8) & bVar7
                                                  ,(byte)uVar37 | (byte)uVar34 & bVar7)))))));
          *puVar20 = CONCAT17((byte)((ulong)uVar36 >> 0x38) | (byte)(uVar33 >> 0x38) & bVar7,
                              CONCAT16((byte)((ulong)uVar36 >> 0x30) |
                                       (byte)(uVar33 >> 0x30) & bVar7,
                                       CONCAT15((byte)((ulong)uVar36 >> 0x28) |
                                                (byte)(uVar33 >> 0x28) & bVar7,
                                                CONCAT14((byte)((ulong)uVar36 >> 0x20) |
                                                         (byte)(uVar33 >> 0x20) & bVar7,
                                                         CONCAT13((byte)((ulong)uVar36 >> 0x18) |
                                                                  (byte)(uVar33 >> 0x18) & bVar7,
                                                                  CONCAT12((byte)((ulong)uVar36 >>
                                                                                 0x10) |
                                                                           (byte)(uVar33 >> 0x10) &
                                                                           bVar7,CONCAT11((byte)((
                                                  ulong)uVar36 >> 8) | (byte)(uVar33 >> 8) & bVar7,
                                                  (byte)uVar36 | (byte)uVar33 & bVar7)))))));
          puVar20 = puVar20 + 4;
          puVar16 = puVar16 + 4;
        } while (uVar15 != 0);
        if (uVar26 != uVar19) {
          uVar15 = uVar19;
          if ((uVar26 & 0x18) != 0) goto LAB_0046acd8;
          goto LAB_0046ad18;
        }
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 <= uVar1);
  }
  lVar13 = FUN_0039d270();
  if ((lVar13 != 0) && (iVar11 = FUN_0039d92c(lVar13,param_1,0), 0 < iVar11)) {
    if (param_10 == '\0') {
      local_1e0 = local_1e0 ^ 0x6a6a6a6a6a6a6a6a;
      uStack_1d8 = uStack_1d8 ^ 0x6a6a6a6a6a6a6a6a;
      uStack_1d0 = uStack_1d0 ^ 0x6a6a6a6a6a6a6a6a;
      uStack_1c8 = uStack_1c8 ^ 0x6a6a6a6a6a6a6a6a;
      local_1c0 = local_1c0 ^ 0x6a6a6a6a6a6a6a6a;
      uStack_1b8 = uStack_1b8 ^ 0x6a6a6a6a6a6a6a6a;
      uStack_1b0 = uStack_1b0 ^ 0x6a6a6a6a6a6a6a6a;
      uStack_1a8 = uStack_1a8 ^ 0x6a6a6a6a6a6a6a6a;
      if (!bVar10) {
        local_1a0 = local_1a0 ^ 0x6a6a6a6a6a6a6a6a;
        uStack_198 = uStack_198 ^ 0x6a6a6a6a6a6a6a6a;
        uStack_190 = uStack_190 ^ 0x6a6a6a6a6a6a6a6a;
        uStack_188 = uStack_188 ^ 0x6a6a6a6a6a6a6a6a;
        local_180 = local_180 ^ 0x6a6a6a6a6a6a6a6a;
        uStack_178 = uStack_178 ^ 0x6a6a6a6a6a6a6a6a;
        uStack_170 = uStack_170 ^ 0x6a6a6a6a6a6a6a6a;
        uStack_168 = uStack_168 ^ 0x6a6a6a6a6a6a6a6a;
      }
      iVar11 = FUN_0039d938(lVar13,&local_1e0,__n_02);
      if (0 < iVar11) {
        iVar11 = FUN_0039d938(lVar13,local_2a0,uVar26);
joined_r0x0046aac8:
        if (0 < iVar11) {
          iVar11 = FUN_0039da64(lVar13,param_2,local_320);
          uVar17 = 1;
          if ((param_3 != (ulong *)0x0) && (iVar11 != 0)) {
            *param_3 = (ulong)(uint)local_320[0];
            uVar17 = 1;
          }
          goto LAB_0046adf8;
        }
      }
    }
    else {
      memset(&local_1e0,0x5c,__n_01);
      iVar11 = FUN_0039d938(lVar13,param_8,param_9);
      if ((0 < iVar11) && (iVar11 = FUN_0039d938(lVar13,&local_1e0,__n_01), 0 < iVar11)) {
        iVar11 = FUN_0039d938(lVar13,local_2a0,uVar26);
        goto joined_r0x0046aac8;
      }
    }
  }
  uVar17 = 0;
LAB_0046adf8:
  FUN_0039d284(uVar17,lVar13);
  return uVar17;
}


// ===== 0046af24  FUN_0046af24 =====

void FUN_0046af24(undefined4 *param_1,undefined1 *param_2)

{
  *param_2 = (char)*param_1;
  param_2[1] = (char)((uint)*param_1 >> 8);
  param_2[2] = (char)*(undefined2 *)((long)param_1 + 2);
  param_2[3] = *(undefined1 *)((long)param_1 + 3);
  param_2[4] = (char)param_1[1];
  param_2[5] = (char)((uint)param_1[1] >> 8);
  param_2[6] = (char)*(undefined2 *)((long)param_1 + 6);
  param_2[7] = *(undefined1 *)((long)param_1 + 7);
  param_2[8] = (char)param_1[2];
  param_2[9] = (char)((uint)param_1[2] >> 8);
  param_2[10] = (char)*(undefined2 *)((long)param_1 + 10);
  param_2[0xb] = *(undefined1 *)((long)param_1 + 0xb);
  param_2[0xc] = (char)param_1[3];
  param_2[0xd] = (char)((uint)param_1[3] >> 8);
  param_2[0xe] = (char)*(undefined2 *)((long)param_1 + 0xe);
  param_2[0xf] = *(undefined1 *)((long)param_1 + 0xf);
  return;
}


// ===== 0046afb8  FUN_0046afb8 =====

void FUN_0046afb8(undefined4 *param_1,undefined1 *param_2)

{
  *param_2 = *(undefined1 *)((long)param_1 + 3);
  param_2[1] = (char)*(undefined2 *)((long)param_1 + 2);
  param_2[2] = (char)((uint)*param_1 >> 8);
  param_2[3] = (char)*param_1;
  param_2[4] = *(undefined1 *)((long)param_1 + 7);
  param_2[5] = (char)*(undefined2 *)((long)param_1 + 6);
  param_2[6] = (char)((uint)param_1[1] >> 8);
  param_2[7] = (char)param_1[1];
  param_2[8] = *(undefined1 *)((long)param_1 + 0xb);
  param_2[9] = (char)*(undefined2 *)((long)param_1 + 10);
  param_2[10] = (char)((uint)param_1[2] >> 8);
  param_2[0xb] = (char)param_1[2];
  param_2[0xc] = *(undefined1 *)((long)param_1 + 0xf);
  param_2[0xd] = (char)*(undefined2 *)((long)param_1 + 0xe);
  param_2[0xe] = (char)((uint)param_1[3] >> 8);
  param_2[0xf] = (char)param_1[3];
  param_2[0x10] = *(undefined1 *)((long)param_1 + 0x13);
  param_2[0x11] = (char)*(undefined2 *)((long)param_1 + 0x12);
  param_2[0x12] = (char)((uint)param_1[4] >> 8);
  param_2[0x13] = (char)param_1[4];
  return;
}


// ===== 0046b070  FUN_0046b070 =====

void FUN_0046b070(undefined4 *param_1,undefined1 *param_2)

{
  *param_2 = *(undefined1 *)((long)param_1 + 3);
  param_2[1] = (char)*(undefined2 *)((long)param_1 + 2);
  param_2[2] = (char)((uint)*param_1 >> 8);
  param_2[3] = (char)*param_1;
  param_2[4] = *(undefined1 *)((long)param_1 + 7);
  param_2[5] = (char)*(undefined2 *)((long)param_1 + 6);
  param_2[6] = (char)((uint)param_1[1] >> 8);
  param_2[7] = (char)param_1[1];
  param_2[8] = *(undefined1 *)((long)param_1 + 0xb);
  param_2[9] = (char)*(undefined2 *)((long)param_1 + 10);
  param_2[10] = (char)((uint)param_1[2] >> 8);
  param_2[0xb] = (char)param_1[2];
  param_2[0xc] = *(undefined1 *)((long)param_1 + 0xf);
  param_2[0xd] = (char)*(undefined2 *)((long)param_1 + 0xe);
  param_2[0xe] = (char)((uint)param_1[3] >> 8);
  param_2[0xf] = (char)param_1[3];
  param_2[0x10] = *(undefined1 *)((long)param_1 + 0x13);
  param_2[0x11] = (char)*(undefined2 *)((long)param_1 + 0x12);
  param_2[0x12] = (char)((uint)param_1[4] >> 8);
  param_2[0x13] = (char)param_1[4];
  param_2[0x14] = *(undefined1 *)((long)param_1 + 0x17);
  param_2[0x15] = (char)*(undefined2 *)((long)param_1 + 0x16);
  param_2[0x16] = (char)((uint)param_1[5] >> 8);
  param_2[0x17] = (char)param_1[5];
  param_2[0x18] = *(undefined1 *)((long)param_1 + 0x1b);
  param_2[0x19] = (char)*(undefined2 *)((long)param_1 + 0x1a);
  param_2[0x1a] = (char)((uint)param_1[6] >> 8);
  param_2[0x1b] = (char)param_1[6];
  param_2[0x1c] = *(undefined1 *)((long)param_1 + 0x1f);
  param_2[0x1d] = (char)*(undefined2 *)((long)param_1 + 0x1e);
  param_2[0x1e] = (char)((uint)param_1[7] >> 8);
  param_2[0x1f] = (char)param_1[7];
  return;
}


// ===== 0046b194  FUN_0046b194 =====

void FUN_0046b194(undefined8 *param_1,undefined1 *param_2)

{
  *param_2 = *(undefined1 *)((long)param_1 + 7);
  param_2[1] = (char)*(undefined2 *)((long)param_1 + 6);
  param_2[2] = (char)((ulong)*param_1 >> 0x28);
  param_2[3] = (char)*(undefined4 *)((long)param_1 + 4);
  param_2[4] = (char)((ulong)*param_1 >> 0x18);
  param_2[5] = (char)((ulong)*param_1 >> 0x10);
  param_2[6] = (char)((ulong)*param_1 >> 8);
  param_2[7] = (char)*param_1;
  param_2[8] = *(undefined1 *)((long)param_1 + 0xf);
  param_2[9] = (char)*(undefined2 *)((long)param_1 + 0xe);
  param_2[10] = (char)((ulong)param_1[1] >> 0x28);
  param_2[0xb] = (char)*(undefined4 *)((long)param_1 + 0xc);
  param_2[0xc] = (char)((ulong)param_1[1] >> 0x18);
  param_2[0xd] = (char)((ulong)param_1[1] >> 0x10);
  param_2[0xe] = (char)((ulong)param_1[1] >> 8);
  param_2[0xf] = (char)param_1[1];
  param_2[0x10] = *(undefined1 *)((long)param_1 + 0x17);
  param_2[0x11] = (char)*(undefined2 *)((long)param_1 + 0x16);
  param_2[0x12] = (char)((ulong)param_1[2] >> 0x28);
  param_2[0x13] = (char)*(undefined4 *)((long)param_1 + 0x14);
  param_2[0x14] = (char)((ulong)param_1[2] >> 0x18);
  param_2[0x15] = (char)((ulong)param_1[2] >> 0x10);
  param_2[0x16] = (char)((ulong)param_1[2] >> 8);
  param_2[0x17] = (char)param_1[2];
  param_2[0x18] = *(undefined1 *)((long)param_1 + 0x1f);
  param_2[0x19] = (char)*(undefined2 *)((long)param_1 + 0x1e);
  param_2[0x1a] = (char)((ulong)param_1[3] >> 0x28);
  param_2[0x1b] = (char)*(undefined4 *)((long)param_1 + 0x1c);
  param_2[0x1c] = (char)((ulong)param_1[3] >> 0x18);
  param_2[0x1d] = (char)((ulong)param_1[3] >> 0x10);
  param_2[0x1e] = (char)((ulong)param_1[3] >> 8);
  param_2[0x1f] = (char)param_1[3];
  param_2[0x20] = *(undefined1 *)((long)param_1 + 0x27);
  param_2[0x21] = (char)*(undefined2 *)((long)param_1 + 0x26);
  param_2[0x22] = (char)((ulong)param_1[4] >> 0x28);
  param_2[0x23] = (char)*(undefined4 *)((long)param_1 + 0x24);
  param_2[0x24] = (char)((ulong)param_1[4] >> 0x18);
  param_2[0x25] = (char)((ulong)param_1[4] >> 0x10);
  param_2[0x26] = (char)((ulong)param_1[4] >> 8);
  param_2[0x27] = (char)param_1[4];
  param_2[0x28] = *(undefined1 *)((long)param_1 + 0x2f);
  param_2[0x29] = (char)*(undefined2 *)((long)param_1 + 0x2e);
  param_2[0x2a] = (char)((ulong)param_1[5] >> 0x28);
  param_2[0x2b] = (char)*(undefined4 *)((long)param_1 + 0x2c);
  param_2[0x2c] = (char)((ulong)param_1[5] >> 0x18);
  param_2[0x2d] = (char)((ulong)param_1[5] >> 0x10);
  param_2[0x2e] = (char)((ulong)param_1[5] >> 8);
  param_2[0x2f] = (char)param_1[5];
  param_2[0x30] = *(undefined1 *)((long)param_1 + 0x37);
  param_2[0x31] = (char)*(undefined2 *)((long)param_1 + 0x36);
  param_2[0x32] = (char)((ulong)param_1[6] >> 0x28);
  param_2[0x33] = (char)*(undefined4 *)((long)param_1 + 0x34);
  param_2[0x34] = (char)((ulong)param_1[6] >> 0x18);
  param_2[0x35] = (char)((ulong)param_1[6] >> 0x10);
  param_2[0x36] = (char)((ulong)param_1[6] >> 8);
  param_2[0x37] = (char)param_1[6];
  param_2[0x38] = *(undefined1 *)((long)param_1 + 0x3f);
  param_2[0x39] = (char)*(undefined2 *)((long)param_1 + 0x3e);
  param_2[0x3a] = (char)((ulong)param_1[7] >> 0x28);
  param_2[0x3b] = (char)*(undefined4 *)((long)param_1 + 0x3c);
  param_2[0x3c] = (char)((ulong)param_1[7] >> 0x18);
  param_2[0x3d] = (char)((ulong)param_1[7] >> 0x10);
  param_2[0x3e] = (char)((ulong)param_1[7] >> 8);
  param_2[0x3f] = (char)param_1[7];
  return;
}


// ===== 0046b418  FUN_0046b418 =====

ulong FUN_0046b418(undefined8 param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  if (param_3 == 0) {
    return 0;
  }
  iVar1 = FUN_00404a34(param_3);
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = FUN_00404ac8(param_3);
  iVar2 = FUN_00404b04(param_3);
  iVar3 = FUN_00404b18(param_3);
  if (iVar2 < 0) {
    FUN_00379868();
    FUN_0037995c("providers/common/der/der_rsa_key.c",0x135,"ossl_DER_w_RSASSA_PSS_params");
    uVar9 = 0x96;
LAB_0046b524:
    FUN_00379a5c(4,uVar9,0);
    return 0;
  }
  if (iVar3 != 1) {
    FUN_00379868();
    FUN_0037995c("providers/common/der/der_rsa_key.c",0x139,"ossl_DER_w_RSASSA_PSS_params");
    uVar9 = 0x8b;
    goto LAB_0046b524;
  }
  iVar3 = FUN_00404ac8(0);
  iVar4 = FUN_00404b04(0);
  iVar5 = FUN_00404b18(0);
  if (iVar1 < 0x2a2) {
    if (iVar1 != 0x40) {
      if (iVar1 == 0x2a0) {
        puVar8 = &DAT_0020f028;
      }
      else {
        if (iVar1 != 0x2a1) {
          return 0;
        }
        puVar8 = &DAT_0020f037;
      }
      goto LAB_0046b5bc;
    }
    uVar9 = 0xb;
    puVar8 = PTR_DAT_007a1e08;
  }
  else {
    if (iVar1 < 0x446) {
      if (iVar1 == 0x2a2) {
        puVar8 = &DAT_0020f046;
      }
      else {
        if (iVar1 != 0x2a3) {
          return 0;
        }
        puVar8 = &DAT_0020f019;
      }
    }
    else if (iVar1 == 0x446) {
      puVar8 = &DAT_0020f055;
    }
    else {
      if (iVar1 != 0x447) {
        return 0;
      }
      puVar8 = &DAT_0020f064;
    }
LAB_0046b5bc:
    uVar9 = 0xf;
  }
  uVar6 = FUN_0045a1dc(param_1,param_2);
  if ((int)uVar6 == 0) {
    return uVar6;
  }
  if ((iVar5 != 1) && (uVar6 = FUN_00459e08(param_1,3,1), (int)uVar6 == 0)) {
    return uVar6;
  }
  if ((iVar2 != iVar4) && (uVar6 = FUN_00459e08(param_1,2,iVar2), (int)uVar6 == 0)) {
    return uVar6;
  }
  iVar2 = FUN_00404adc(param_3);
  if (iVar2 != 0x38f) {
    return 0;
  }
  iVar2 = FUN_00404af0(param_3);
  if (iVar2 < 0x2a2) {
    if (iVar2 == 0x40) goto LAB_0046b6c8;
    if (iVar2 == 0x2a0) {
      puVar7 = &DAT_0020f08f;
    }
    else {
      if (iVar2 != 0x2a1) {
        return 0;
      }
      puVar7 = &DAT_0020f0ab;
    }
  }
  else if (iVar2 < 0x446) {
    if (iVar2 == 0x2a2) {
      puVar7 = &DAT_0020f0c7;
    }
    else {
      if (iVar2 != 0x2a3) {
        return 0;
      }
      puVar7 = &DAT_0020f073;
    }
  }
  else if (iVar2 == 0x446) {
    puVar7 = &DAT_0020f0e3;
  }
  else {
    if (iVar2 != 0x447) {
      return 0;
    }
    puVar7 = &DAT_0020f0ff;
  }
  uVar6 = FUN_00459a60(param_1,1,puVar7,0x1c);
  if ((int)uVar6 == 0) {
    return uVar6;
  }
LAB_0046b6c8:
  if ((iVar1 != iVar3) && (uVar6 = FUN_00459a60(param_1,0,puVar8,uVar9), (int)uVar6 == 0)) {
    return uVar6;
  }
  iVar1 = FUN_0045a230(param_1,param_2);
  return (ulong)(iVar1 != 0);
}


// ===== 0046b700  FUN_0046b700 =====

ulong FUN_0046b700(undefined8 param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  
  if (param_3 == 0) {
    uVar2 = FUN_0045a1dc(param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    uVar2 = FUN_00459a60(param_1,0xffffffff,&DAT_0020ef2e,0xb);
    iVar1 = (int)uVar2;
  }
  else {
    if (param_3 != 0x1000) {
      return 0;
    }
    uVar2 = FUN_0045a1dc(param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    iVar1 = FUN_00404a34(param_4);
    if ((iVar1 == 0) && (uVar2 = FUN_0046b418(param_1,0xffffffff,param_4), (int)uVar2 == 0)) {
      return uVar2;
    }
    uVar2 = FUN_00459a60(param_1,0xffffffff,&DAT_0020ef4f,0xb);
    iVar1 = (int)uVar2;
  }
  if (iVar1 == 0) {
    return uVar2;
  }
  iVar1 = FUN_0045a230(param_1,param_2);
  return (ulong)(iVar1 != 0);
}


// ===== 0046b7e4  FUN_0046b7e4 =====

void FUN_0046b7e4(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_003fb538(param_3,0xf000);
  uVar2 = FUN_003fb520(param_3);
  FUN_0046b700(param_1,param_2,uVar1,uVar2);
  return;
}


// ===== 0046b838  FUN_0046b838 =====

void FUN_0046b838(void)

{
  FUN_003c8474(0x18,"providers/common/provider_ctx.c",0x10);
  return;
}


// ===== 0046b84c  FUN_0046b84c =====

void FUN_0046b84c(undefined8 param_1)

{
  FUN_003c86b4(param_1,"providers/common/provider_ctx.c",0x15);
  return;
}


// ===== 0046b85c  FUN_0046b85c =====

void FUN_0046b85c(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 8) = param_2;
  }
  return;
}


// ===== 0046b868  FUN_0046b868 =====

void FUN_0046b868(undefined8 *param_1,undefined8 param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = param_2;
  }
  return;
}


// ===== 0046b874  FUN_0046b874 =====

void FUN_0046b874(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x10) = param_2;
  }
  return;
}


// ===== 0046b880  FUN_0046b880 =====

long FUN_0046b880(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 8);
  }
  return param_1;
}


// ===== 0046b88c  FUN_0046b88c =====

long * FUN_0046b88c(long *param_1)

{
  if (param_1 != (long *)0x0) {
    param_1 = (long *)*param_1;
  }
  return param_1;
}


// ===== 0046b898  FUN_0046b898 =====

long FUN_0046b898(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x10);
  }
  return param_1;
}


// ===== 0046b8a4  FUN_0046b8a4 =====

undefined8 FUN_0046b8a4(void)

{
  long lVar1;
  
  lVar1 = FUN_0037aa50(0x1c8000b8);
  if (lVar1 != 0) {
    return 1;
  }
  FUN_00379fc4(&DAT_0078e3a0);
  return 1;
}


// ===== 0046b8e0  FUN_0046b8e0 =====

undefined ** FUN_0046b8e0(void)

{
  return &PTR_DAT_0078ebb0;
}


// ===== 0046b8ec  FUN_0046b8ec =====

undefined8
FUN_0046b8ec(undefined8 param_1,undefined4 param_2,uint param_3,ulong param_4,ulong param_5,
            ulong param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_003cb140(param_1,&DAT_001f5635);
  if ((lVar2 == 0) || (iVar1 = thunk_FUN_003cb960(lVar2,param_2), iVar1 != 0)) {
    lVar2 = FUN_003cb140(param_1,&DAT_001e6a66);
    if ((lVar2 == 0) || (iVar1 = thunk_FUN_003cb490(lVar2,param_3 & 1), iVar1 != 0)) {
      lVar2 = FUN_003cb140(param_1,"custom-iv");
      if ((lVar2 == 0) || (iVar1 = thunk_FUN_003cb490(lVar2,param_3 >> 1 & 1), iVar1 != 0)) {
        lVar2 = FUN_003cb140(param_1,&DAT_001e2a7c);
        if ((lVar2 == 0) || (iVar1 = thunk_FUN_003cb490(lVar2,param_3 >> 2 & 1), iVar1 != 0)) {
          lVar2 = FUN_003cb140(param_1,"tls-multi");
          if ((lVar2 == 0) || (iVar1 = thunk_FUN_003cb490(lVar2,param_3 >> 3 & 1), iVar1 != 0)) {
            lVar2 = FUN_003cb140(param_1,"has-randkey");
            if ((lVar2 == 0) || (iVar1 = thunk_FUN_003cb490(lVar2,param_3 >> 4 & 1), iVar1 != 0)) {
              lVar2 = FUN_003cb140(param_1,"keylen");
              if ((lVar2 == 0) || (iVar1 = thunk_FUN_003cc2a4(lVar2,param_4 >> 3), iVar1 != 0)) {
                lVar2 = FUN_003cb140(param_1,"blocksize");
                if ((lVar2 == 0) || (iVar1 = thunk_FUN_003cc2a4(lVar2,param_5 >> 3), iVar1 != 0)) {
                  lVar2 = FUN_003cb140(param_1,"ivlen");
                  if ((lVar2 == 0) || (iVar1 = thunk_FUN_003cc2a4(lVar2,param_6 >> 3), iVar1 != 0))
                  {
                    return 1;
                  }
                  uVar3 = 0x5e;
                }
                else {
                  uVar3 = 0x59;
                }
              }
              else {
                uVar3 = 0x54;
              }
            }
            else {
              uVar3 = 0x4f;
            }
          }
          else {
            uVar3 = 0x49;
          }
        }
        else {
          uVar3 = 0x43;
        }
      }
      else {
        uVar3 = 0x3d;
      }
    }
    else {
      uVar3 = 0x37;
    }
  }
  else {
    uVar3 = 0x31;
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/ciphers/ciphercommon.c",uVar3,
               "ossl_cipher_generic_get_params");
  FUN_00379a5c(0x39,0x68,0);
  return 0;
}


// ===== 0046bad4  FUN_0046bad4 =====

undefined ** FUN_0046bad4(void)

{
  return &PTR_s_keylen_0078ed40;
}


// ===== 0046bae0  FUN_0046bae0 =====

undefined ** FUN_0046bae0(void)

{
  return &PTR_s_padding_0078ee80;
}


// ===== 0046baec  FUN_0046baec =====

undefined8 FUN_0046baec(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_28;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar2 = FUN_0046bbc0();
  if ((int)uVar2 != 0) {
    lVar3 = FUN_003cb19c(param_2,"keylen");
    if (lVar3 == 0) {
      return 1;
    }
    iVar1 = thunk_FUN_003cc060(lVar3,&local_28);
    if (iVar1 == 0) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/ciphers/ciphercommon.c",0x80,
                   "ossl_cipher_var_keylen_set_ctx_params");
      FUN_00379a5c(0x39,0x67,0);
      return 0;
    }
    if (*(long *)(param_1 + 0x48) != local_28) {
      *(long *)(param_1 + 0x48) = local_28;
      *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xf7;
    }
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 0046bbc0  FUN_0046bbc0 =====

undefined8 FUN_0046bbc0(long param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_2c;
  int local_28;
  int local_24;
  
  if (param_2 == 0) {
    return 1;
  }
  lVar3 = FUN_003cb19c(param_2,"padding");
  if (lVar3 != 0) {
    iVar2 = thunk_FUN_003cb68c(lVar3,&local_24);
    if (iVar2 == 0) {
      FUN_00379868();
      uVar4 = 0x27b;
      goto LAB_0046bd58;
    }
    bVar1 = *(byte *)(param_1 + 0x6c) & 0xfe;
    if (local_24 != 0) {
      bVar1 = bVar1 + 1;
    }
    *(byte *)(param_1 + 0x6c) = bVar1;
  }
  lVar3 = FUN_003cb19c(param_2,"use-bits");
  if (lVar3 != 0) {
    iVar2 = thunk_FUN_003cb68c(lVar3,&local_28);
    if (iVar2 == 0) {
      FUN_00379868();
      uVar4 = 0x285;
      goto LAB_0046bd58;
    }
    *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0x7f | (local_28 != 0) << 7;
  }
  lVar3 = FUN_003cb19c(param_2,"tls-version");
  if ((lVar3 == 0) || (iVar2 = thunk_FUN_003cb68c(lVar3,param_1 + 0x70), iVar2 != 0)) {
    lVar3 = FUN_003cb19c(param_2,"tls-mac-size");
    if ((lVar3 == 0) || (iVar2 = thunk_FUN_003cc060(lVar3,param_1 + 0x88), iVar2 != 0)) {
      lVar3 = FUN_003cb19c(param_2,&DAT_001c547d);
      if (lVar3 != 0) {
        iVar2 = thunk_FUN_003cb68c(lVar3,&local_2c);
        if (iVar2 == 0) {
          FUN_00379868();
          uVar4 = 0x29d;
          goto LAB_0046bd58;
        }
        *(undefined4 *)(param_1 + 0xa0) = local_2c;
      }
      return 1;
    }
    FUN_00379868();
    uVar4 = 0x294;
  }
  else {
    FUN_00379868();
    uVar4 = 0x28d;
  }
LAB_0046bd58:
  FUN_0037995c("providers/implementations/ciphers/ciphercommon.c",uVar4,
               "ossl_cipher_generic_set_ctx_params");
  FUN_00379a5c(0x39,0x67,0);
  return 0;
}


// ===== 0046bd80  FUN_0046bd80 =====

undefined ** FUN_0046bd80(void)

{
  return &PTR_s_padding_0078ef70;
}


// ===== 0046bd8c  FUN_0046bd8c =====

undefined ** FUN_0046bd8c(void)

{
  return &PTR_s_keylen_0078f010;
}


// ===== 0046bd98  FUN_0046bd98 =====

undefined ** FUN_0046bd98(void)

{
  return &PTR_s_ivlen_0078f178;
}


// ===== 0046bda4  FUN_0046bda4 =====

void FUN_0046bda4(long param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x80) != 0)) {
    FUN_003c86b4(*(undefined8 *)(param_1 + 0x78),"providers/implementations/ciphers/ciphercommon.c",
                 0xb6);
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  return;
}


// ===== 0046bdec  FUN_0046bdec =====

void FUN_0046bdec(void)

{
  FUN_0046bdf4();
  return;
}


// ===== 0046bdf4  FUN_0046bdf4 =====

undefined8
FUN_0046bdf4(void *param_1,long param_2,long param_3,void *param_4,size_t param_5,undefined8 param_6
            ,int param_7)

{
  int iVar1;
  void *__dest;
  undefined8 uVar2;
  
  *(undefined4 *)((long)param_1 + 0xa0) = 0;
  *(undefined8 *)((long)param_1 + 0x60) = 0;
  *(byte *)((long)param_1 + 0x6c) = *(byte *)((long)param_1 + 0x6c) & 0xed | (param_7 != 0) << 1;
  iVar1 = FUN_0043eb70();
  if (iVar1 == 0) {
    return 0;
  }
  if (param_4 == (void *)0x0) {
    if (((*(byte *)((long)param_1 + 0x6c) >> 2 & 1) != 0) &&
       (*(int *)((long)param_1 + 0x40) - 2U < 3)) {
      param_5 = *(size_t *)((long)param_1 + 0x50);
      __dest = (void *)((long)param_1 + 0x20);
      param_4 = param_1;
LAB_0046bec0:
      memcpy(__dest,param_4,param_5);
    }
LAB_0046bec4:
    if (param_2 == 0) goto LAB_0046bf30;
    if ((*(byte *)((long)param_1 + 0x6c) >> 5 & 1) == 0) {
      if (*(long *)((long)param_1 + 0x48) != param_3) {
        FUN_00379868();
        FUN_0037995c("providers/implementations/ciphers/ciphercommon.c",0xd7,
                     "cipher_generic_init_internal");
        uVar2 = 0x69;
        goto LAB_0046bf70;
      }
    }
    else {
      *(long *)((long)param_1 + 0x48) = param_3;
    }
    iVar1 = (*(code *)**(undefined8 **)((long)param_1 + 0xa8))(param_1,param_2,param_3);
    if (iVar1 != 0) {
      *(byte *)((long)param_1 + 0x6c) = *(byte *)((long)param_1 + 0x6c) | 8;
LAB_0046bf30:
      uVar2 = FUN_0046bbc0(param_1,param_6);
      return uVar2;
    }
  }
  else {
    if (*(int *)((long)param_1 + 0x40) == 1) goto LAB_0046bec4;
    if ((param_5 < 0x11) && (*(ulong *)((long)param_1 + 0x50) == param_5)) {
      *(byte *)((long)param_1 + 0x6c) = *(byte *)((long)param_1 + 0x6c) | 4;
      memcpy((void *)((long)param_1 + 0x20),param_4,param_5);
      __dest = param_1;
      goto LAB_0046bec0;
    }
    FUN_00379868();
    FUN_0037995c("providers/implementations/ciphers/ciphercommon.c",0x2aa,
                 "ossl_cipher_generic_initiv");
    uVar2 = 0x6d;
LAB_0046bf70:
    FUN_00379a5c(0x39,uVar2,0);
  }
  return 0;
}


// ===== 0046bf90  FUN_0046bf90 =====

void FUN_0046bf90(void)

{
  FUN_0046bdf4();
  return;
}


// ===== 0046bf98  FUN_0046bf98 =====

ulong FUN_0046bf98(long param_1,long param_2,ulong *param_3,ulong param_4,long param_5,ulong param_6
                  )

{
  undefined8 *puVar1;
  byte bVar2;
  undefined1 uVar3;
  ulong uVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong local_60;
  long local_58;
  
  bVar2 = *(byte *)(param_1 + 0x6c);
  local_60 = param_6;
  local_58 = param_5;
  if ((bVar2 >> 3 & 1) == 0) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/ciphers/ciphercommon.c",0x101,
                 "ossl_cipher_generic_block_update");
    uVar7 = 0x72;
    goto LAB_0046c1d4;
  }
  uVar10 = *(ulong *)(param_1 + 0x58);
  if (*(int *)(param_1 + 0x70) == 0) {
    plVar12 = (long *)(param_1 + 0x60);
    if (*plVar12 == 0) {
      param_6 = -uVar10 & param_6;
      if (uVar10 == 0) goto LAB_0046c094;
LAB_0046c134:
      uVar11 = 0;
joined_r0x0046c13c:
      if (param_6 == 0) goto LAB_0046c34c;
      if ((((*(byte *)(param_1 + 0x6c) & 3) == 1) && (param_6 == local_60)) &&
         (bVar5 = param_6 < uVar10, param_6 = param_6 - uVar10, bVar5)) {
        FUN_00379868();
        uVar7 = 0x16c;
      }
      else {
        uVar11 = param_6 + uVar11;
        if (uVar11 <= param_4) {
          if (param_6 == 0) {
LAB_0046c34c:
            if (local_60 == 0) {
              uVar10 = 1;
            }
            else {
              uVar10 = FUN_0046ce00(param_1 + 0x10,plVar12,uVar10,&local_58,&local_60);
              if ((int)uVar10 == 0) {
                return uVar10;
              }
              uVar10 = (ulong)(local_60 == 0);
            }
            *param_3 = uVar11;
            return uVar10;
          }
          iVar6 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,local_58,param_6);
          if (iVar6 != 0) {
            local_58 = local_58 + param_6;
            local_60 = local_60 - param_6;
            goto LAB_0046c34c;
          }
          FUN_00379868();
          uVar7 = 0x179;
          goto LAB_0046c0d4;
        }
        FUN_00379868();
        uVar7 = 0x173;
      }
    }
    else {
      param_6 = FUN_0046cd78(param_1 + 0x10,plVar12,uVar10,&local_58,&local_60);
      if (*(ulong *)(param_1 + 0x60) != uVar10) goto LAB_0046c134;
LAB_0046c094:
      if (((*(byte *)(param_1 + 0x6c) & 3) == 1) && (local_60 == 0)) {
        uVar11 = 0;
        goto joined_r0x0046c13c;
      }
      if (uVar10 <= param_4) {
        iVar6 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,param_1 + 0x10,uVar10);
        if (iVar6 == 0) {
          FUN_00379868();
          uVar7 = 0x162;
          goto LAB_0046c0d4;
        }
        param_2 = param_2 + uVar10;
        *plVar12 = 0;
        uVar11 = uVar10;
        goto joined_r0x0046c13c;
      }
      FUN_00379868();
      uVar7 = 0x15e;
    }
    FUN_0037995c("providers/implementations/ciphers/ciphercommon.c",uVar7,
                 "ossl_cipher_generic_block_update");
    uVar7 = 0x6a;
  }
  else {
    if (((param_5 == 0) || (param_5 != param_2)) || ((param_4 < param_6 || ((bVar2 & 1) == 0)))) {
      FUN_00379868();
      uVar7 = 0x110;
    }
    else {
      uVar11 = param_6;
      if ((bVar2 >> 1 & 1) == 0) goto LAB_0046c018;
      uVar11 = 0;
      if (uVar10 != 0) {
        uVar11 = param_6 / uVar10;
      }
      uVar4 = uVar10 + (uVar11 * uVar10 - param_6);
      uVar11 = uVar4 + param_6;
      if (param_4 < uVar11) {
        FUN_00379868();
        uVar7 = 0x11d;
      }
      else if (uVar4 < 0x101) {
        uVar3 = (undefined1)(uVar4 - 1);
        if (*(int *)(param_1 + 0x70) == 0x300) {
          if (1 < uVar4) {
            memset((void *)(param_5 + param_6),0,uVar4 - 1);
          }
          *(undefined1 *)(param_5 + param_6 + uVar4 + -1) = uVar3;
        }
        else if (param_6 < uVar11) {
          if (7 < uVar4) {
            if (uVar4 < 0x20) {
              uVar8 = 0;
            }
            else {
              uVar7 = CONCAT17(uVar3,CONCAT16(uVar3,CONCAT15(uVar3,CONCAT14(uVar3,CONCAT13(uVar3,
                                                  CONCAT12(uVar3,CONCAT11(uVar3,uVar3)))))));
              uVar9 = 0;
              uVar8 = uVar4 & 0x1e0;
              do {
                puVar1 = (undefined8 *)(param_5 + param_6 + uVar9);
                uVar9 = uVar9 + 0x20;
                puVar1[1] = uVar7;
                *puVar1 = CONCAT17(uVar3,CONCAT16(uVar3,CONCAT15(uVar3,CONCAT14(uVar3,CONCAT13(uVar3
                                                  ,CONCAT12(uVar3,CONCAT11(uVar3,uVar3)))))));
                puVar1[3] = uVar7;
                puVar1[2] = CONCAT17(uVar3,CONCAT16(uVar3,CONCAT15(uVar3,CONCAT14(uVar3,CONCAT13(
                                                  uVar3,CONCAT12(uVar3,CONCAT11(uVar3,uVar3)))))));
              } while (uVar8 != uVar9);
              if (uVar4 == uVar8) goto LAB_0046c018;
              if ((uVar4 & 0x18) == 0) {
                param_6 = uVar8 + param_6;
                goto LAB_0046c4e0;
              }
            }
            uVar9 = uVar4 & 0x1f8;
            do {
              *(ulong *)(param_5 + param_6 + uVar8) =
                   CONCAT17(uVar3,CONCAT16(uVar3,CONCAT15(uVar3,CONCAT14(uVar3,CONCAT13(uVar3,
                                                  CONCAT12(uVar3,CONCAT11(uVar3,uVar3)))))));
              uVar8 = uVar8 + 8;
            } while (uVar9 != uVar8);
            param_6 = uVar9 + param_6;
            if (uVar4 == uVar9) goto LAB_0046c018;
          }
LAB_0046c4e0:
          do {
            *(undefined1 *)(param_5 + param_6) = uVar3;
            param_6 = param_6 + 1;
          } while (param_6 < uVar11);
        }
LAB_0046c018:
        uVar4 = 0;
        if (uVar10 != 0) {
          uVar4 = uVar11 / uVar10;
        }
        if (uVar11 == uVar4 * uVar10) {
          iVar6 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_5,param_5,uVar11);
          if (iVar6 == 0) {
            FUN_00379868();
            uVar7 = 0x13a;
          }
          else {
            if (*(int *)(param_1 + 0x80) != 0) {
              FUN_003c86b4(*(undefined8 *)(param_1 + 0x78),
                           "providers/implementations/ciphers/ciphercommon.c",0x13f);
              *(undefined4 *)(param_1 + 0x80) = 0;
              *(undefined8 *)(param_1 + 0x78) = 0;
            }
            *param_3 = uVar11;
            if (((*(byte *)(param_1 + 0x6c) >> 1 & 1) != 0) ||
               (iVar6 = FUN_0046cfa8(*(undefined8 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0x70)
                                     ,param_5,param_3,uVar10,param_1 + 0x78,(int *)(param_1 + 0x80),
                                     *(undefined8 *)(param_1 + 0x88),0), iVar6 != 0)) {
              return 1;
            }
            FUN_00379868();
            uVar7 = 0x14b;
          }
        }
        else {
          FUN_00379868();
          uVar7 = 0x133;
        }
      }
      else {
        FUN_00379868();
        uVar7 = 0x122;
      }
    }
LAB_0046c0d4:
    FUN_0037995c("providers/implementations/ciphers/ciphercommon.c",uVar7,
                 "ossl_cipher_generic_block_update");
    uVar7 = 0x66;
  }
LAB_0046c1d4:
  FUN_00379a5c(0x39,uVar7,0);
  return 0;
}


// ===== 0046c4f4  FUN_0046c4f4 =====

undefined8 FUN_0046c4f4(long param_1,void *param_2,size_t *param_3,ulong param_4)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  size_t *psVar5;
  
  uVar4 = *(ulong *)(param_1 + 0x58);
  uVar3 = FUN_0043eb70();
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  bVar1 = *(byte *)(param_1 + 0x6c);
  if ((bVar1 >> 3 & 1) == 0) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/ciphers/ciphercommon.c",0x193,
                 "ossl_cipher_generic_block_final");
    uVar3 = 0x72;
    goto LAB_0046c580;
  }
  if (*(int *)(param_1 + 0x70) == 0) {
    if ((bVar1 >> 1 & 1) == 0) {
      psVar5 = (size_t *)(param_1 + 0x60);
      if (*psVar5 != uVar4) {
        if (((bVar1 & 1) == 0) && (*psVar5 == 0)) {
LAB_0046c650:
          *param_3 = 0;
          return 1;
        }
        FUN_00379868();
        uVar3 = 0x1bb;
LAB_0046c704:
        FUN_0037995c("providers/implementations/ciphers/ciphercommon.c",uVar3,
                     "ossl_cipher_generic_block_final");
        uVar3 = 0x6b;
        goto LAB_0046c580;
      }
      iVar2 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))
                        (param_1,param_1 + 0x10,param_1 + 0x10,uVar4);
      if (iVar2 != 0) {
        if (((*(byte *)(param_1 + 0x6c) & 1) != 0) &&
           (uVar3 = FUN_0046cec8(param_1 + 0x10,psVar5,uVar4), (int)uVar3 == 0)) {
          return uVar3;
        }
        if (*psVar5 <= param_4) {
          memcpy(param_2,(void *)(param_1 + 0x10),*psVar5);
          *param_3 = *psVar5;
          *psVar5 = 0;
          return 1;
        }
        FUN_00379868();
        uVar3 = 0x1ca;
        goto LAB_0046c69c;
      }
      FUN_00379868();
      uVar3 = 0x1c0;
    }
    else {
      if ((bVar1 & 1) == 0) {
        if (*(ulong *)(param_1 + 0x60) == 0) goto LAB_0046c650;
        if (*(ulong *)(param_1 + 0x60) != uVar4) {
          FUN_00379868();
          uVar3 = 0x1a4;
          goto LAB_0046c704;
        }
      }
      else {
        FUN_0046ceac(param_1 + 0x10,param_1 + 0x60,uVar4);
      }
      if (param_4 < uVar4) {
        FUN_00379868();
        uVar3 = 0x1a9;
LAB_0046c69c:
        FUN_0037995c("providers/implementations/ciphers/ciphercommon.c",uVar3,
                     "ossl_cipher_generic_block_final");
        uVar3 = 0x6a;
        goto LAB_0046c580;
      }
      iVar2 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,param_1 + 0x10,uVar4);
      if (iVar2 != 0) {
        *(undefined8 *)(param_1 + 0x60) = 0;
        *param_3 = uVar4;
        return 1;
      }
      FUN_00379868();
      uVar3 = 0x1ad;
    }
  }
  else {
    FUN_00379868();
    uVar3 = 0x199;
  }
  FUN_0037995c("providers/implementations/ciphers/ciphercommon.c",uVar3,
               "ossl_cipher_generic_block_final");
  uVar3 = 0x66;
LAB_0046c580:
  FUN_00379a5c(0x39,uVar3,0);
  return 0;
}


// ===== 0046c77c  FUN_0046c77c =====

undefined8
FUN_0046c77c(long param_1,long param_2,ulong *param_3,ulong param_4,undefined8 param_5,ulong param_6
            )

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((*(byte *)(param_1 + 0x6c) >> 3 & 1) == 0) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/ciphers/ciphercommon.c",0x1da,
                 "ossl_cipher_generic_stream_update");
    uVar2 = 0x72;
  }
  else {
    if (param_6 == 0) {
      *param_3 = 0;
      return 1;
    }
    if (param_4 < param_6) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/ciphers/ciphercommon.c",0x1e4,
                   "ossl_cipher_generic_stream_update");
      uVar2 = 0x6a;
    }
    else {
      iVar1 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,param_5,param_6);
      if (iVar1 != 0) {
        *param_3 = param_6;
        if (((*(byte *)(param_1 + 0x6c) >> 1 & 1) == 0) && (*(int *)(param_1 + 0x70) != 0)) {
          if (*(int *)(param_1 + 0x90) != 0) {
            uVar3 = (ulong)*(byte *)(param_2 + param_6 + -1);
            if (param_6 <= uVar3) {
              return 0;
            }
            param_6 = ~uVar3 + param_6;
            *param_3 = param_6;
          }
          uVar3 = param_6 - *(ulong *)(param_1 + 0x98);
          if (param_6 < *(ulong *)(param_1 + 0x98)) {
            return 0;
          }
          *param_3 = uVar3;
          uVar4 = *(ulong *)(param_1 + 0x88);
          if (uVar4 != 0) {
            if (uVar3 < uVar4) {
              return 0;
            }
            *param_3 = uVar3 - uVar4;
            *(ulong *)(param_1 + 0x78) = (param_2 + uVar3) - uVar4;
          }
        }
        return 1;
      }
      FUN_00379868();
      FUN_0037995c("providers/implementations/ciphers/ciphercommon.c",0x1e9,
                   "ossl_cipher_generic_stream_update");
      uVar2 = 0x66;
    }
  }
  FUN_00379a5c(0x39,uVar2,0);
  return 0;
}


// ===== 0046c918  FUN_0046c918 =====

undefined8 FUN_0046c918(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0043eb70();
  if ((int)uVar1 != 0) {
    if ((*(byte *)(param_1 + 0x6c) >> 3 & 1) != 0) {
      *param_3 = 0;
      return 1;
    }
    FUN_00379868();
    FUN_0037995c("providers/implementations/ciphers/ciphercommon.c",0x21a,
                 "ossl_cipher_generic_stream_final");
    FUN_00379a5c(0x39,0x72,0);
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 0046c98c  FUN_0046c98c =====

undefined8
FUN_0046c98c(long param_1,undefined8 param_2,ulong *param_3,ulong param_4,undefined8 param_5,
            ulong param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0043eb70();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if ((*(byte *)(param_1 + 0x6c) >> 3 & 1) == 0) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/ciphers/ciphercommon.c",0x22c,
                 "ossl_cipher_generic_cipher");
    uVar2 = 0x72;
  }
  else if (param_4 < param_6) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/ciphers/ciphercommon.c",0x231,
                 "ossl_cipher_generic_cipher");
    uVar2 = 0x6a;
  }
  else {
    iVar1 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,param_5,param_6);
    if (iVar1 != 0) {
      *param_3 = param_6;
      return 1;
    }
    FUN_00379868();
    FUN_0037995c("providers/implementations/ciphers/ciphercommon.c",0x236,
                 "ossl_cipher_generic_cipher");
    uVar2 = 0x66;
  }
  FUN_00379a5c(0x39,uVar2,0);
  return 0;
}


// ===== 0046caa0  FUN_0046caa0 =====

undefined8 FUN_0046caa0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_003cb140(param_2,"ivlen");
  if ((lVar2 == 0) ||
     (iVar1 = thunk_FUN_003cc2a4(lVar2,*(undefined8 *)(param_1 + 0x50)), iVar1 != 0)) {
    lVar2 = FUN_003cb140(param_2,"padding");
    if ((lVar2 == 0) ||
       (iVar1 = thunk_FUN_003cb960(lVar2,*(byte *)(param_1 + 0x6c) & 1), iVar1 != 0)) {
      lVar2 = FUN_003cb140(param_2,&DAT_001d9fca);
      if (((lVar2 == 0) ||
          (iVar1 = FUN_003cdb94(lVar2,param_1,*(undefined8 *)(param_1 + 0x50)), iVar1 != 0)) ||
         (iVar1 = FUN_003cd7b8(lVar2,param_1,*(undefined8 *)(param_1 + 0x50)), iVar1 != 0)) {
        lVar2 = FUN_003cb140(param_2,"updated-iv");
        if (((lVar2 == 0) ||
            (iVar1 = FUN_003cdb94(lVar2,param_1 + 0x20,*(undefined8 *)(param_1 + 0x50)), iVar1 != 0)
            ) || (iVar1 = FUN_003cd7b8(lVar2,param_1 + 0x20,*(undefined8 *)(param_1 + 0x50)),
                 iVar1 != 0)) {
          lVar2 = FUN_003cb140(param_2,&DAT_001c547d);
          if ((lVar2 == 0) ||
             (iVar1 = thunk_FUN_003cb960(lVar2,*(undefined4 *)(param_1 + 0xa0)), iVar1 != 0)) {
            lVar2 = FUN_003cb140(param_2,"keylen");
            if ((lVar2 == 0) ||
               (iVar1 = thunk_FUN_003cc2a4(lVar2,*(undefined8 *)(param_1 + 0x48)), iVar1 != 0)) {
              lVar2 = FUN_003cb140(param_2,"tls-mac");
              if ((lVar2 == 0) ||
                 (iVar1 = FUN_003cdb94(lVar2,*(undefined8 *)(param_1 + 0x78),
                                       *(undefined8 *)(param_1 + 0x88)), iVar1 != 0)) {
                return 1;
              }
              uVar3 = 0x268;
            }
            else {
              uVar3 = 0x262;
            }
          }
          else {
            uVar3 = 0x25d;
          }
        }
        else {
          uVar3 = 600;
        }
      }
      else {
        uVar3 = 0x251;
      }
    }
    else {
      uVar3 = 0x24a;
    }
  }
  else {
    uVar3 = 0x245;
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/ciphers/ciphercommon.c",uVar3,
               "ossl_cipher_generic_get_ctx_params");
  FUN_00379a5c(0x39,0x68,0);
  return 0;
}


// ===== 0046cc60  FUN_0046cc60 =====

undefined8 FUN_0046cc60(void *param_1,void *param_2,size_t param_3)

{
  if ((param_3 < 0x11) && (*(size_t *)((long)param_1 + 0x50) == param_3)) {
    *(byte *)((long)param_1 + 0x6c) = *(byte *)((long)param_1 + 0x6c) | 4;
    memcpy((void *)((long)param_1 + 0x20),param_2,param_3);
    memcpy(param_1,param_2,param_3);
    return 1;
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/ciphers/ciphercommon.c",0x2aa,"ossl_cipher_generic_initiv"
              );
  FUN_00379a5c(0x39,0x6d,0);
  return 0;
}


// ===== 0046cd08  FUN_0046cd08 =====

void FUN_0046cd08(long param_1,ulong param_2,ulong param_3,ulong param_4,undefined4 param_5,
                 uint param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  
  if ((param_6 >> 9 & 1) != 0) {
    *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) | 0x40;
  }
  *(undefined8 *)(param_1 + 0xa8) = param_7;
  *(undefined4 *)(param_1 + 0x40) = param_5;
  *(ulong *)(param_1 + 0x48) = param_2 >> 3;
  *(ulong *)(param_1 + 0x50) = param_4 >> 3;
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) | (byte)(param_6 >> 3) & 0x20 | 1;
  *(ulong *)(param_1 + 0x58) = param_3 >> 3;
  if (param_8 != 0) {
    uVar1 = FUN_0046b880(param_8);
    *(undefined8 *)(param_1 + 0xb8) = uVar1;
  }
  return;
}


// ===== 0046cd78  FUN_0046cd78 =====

ulong FUN_0046cd78(long param_1,long *param_2,long param_3,long *param_4,ulong *param_5)

{
  size_t __n;
  ulong uVar1;
  
  uVar1 = param_3 - *param_2;
  __n = *param_5;
  if (uVar1 <= *param_5) {
    __n = uVar1;
  }
  memcpy((void *)(param_1 + *param_2),(void *)*param_4,__n);
  *param_5 = *param_5 - __n;
  *param_2 = *param_2 + __n;
  uVar1 = *param_5;
  *param_4 = *param_4 + __n;
  return uVar1 & -param_3;
}


// ===== 0046ce00  FUN_0046ce00 =====

undefined8
FUN_0046ce00(long param_1,long *param_2,ulong param_3,undefined8 *param_4,size_t *param_5)

{
  size_t __n;
  
  __n = *param_5;
  if (__n == 0) {
    return 1;
  }
  if (param_3 < *param_2 + __n) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/ciphers/ciphercommon_block.c",0x46,
                 "ossl_cipher_trailingdata");
    FUN_00379a5c(0x39,0xc0103,0);
    return 0;
  }
  memcpy((void *)(param_1 + *param_2),(void *)*param_4,__n);
  *param_2 = *param_2 + *param_5;
  *param_5 = 0;
  return 1;
}


// ===== 0046ceac  FUN_0046ceac =====

void FUN_0046ceac(long param_1,ulong *param_2,ulong param_3)

{
  size_t __n;
  ulong uVar1;
  
  uVar1 = *param_2;
  __n = param_3 - uVar1;
  if (uVar1 <= param_3 && __n != 0) {
    memset((void *)(param_1 + uVar1),(int)__n,__n);
    return;
  }
  return;
}


// ===== 0046cec8  FUN_0046cec8 =====

undefined8 FUN_0046cec8(long param_1,ulong *param_2,ulong param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  ulong uVar5;
  
  if (*param_2 != param_3) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/ciphers/ciphercommon_block.c",0x61,
                 "ossl_cipher_unpadblock");
    FUN_00379a5c(0x39,0xc0103,0);
    return 0;
  }
  pbVar4 = (byte *)(param_1 + param_3 + -1);
  bVar1 = *pbVar4;
  uVar5 = (ulong)bVar1;
  if ((bVar1 == 0) || (uVar2 = param_3 - uVar5, param_3 < uVar5)) {
    FUN_00379868();
    uVar3 = 0x6b;
  }
  else {
    while (*pbVar4 == bVar1) {
      uVar5 = uVar5 - 1;
      pbVar4 = pbVar4 + -1;
      if (uVar5 == 0) {
        *param_2 = uVar2;
        return 1;
      }
    }
    FUN_00379868();
    uVar3 = 0x70;
  }
  FUN_0037995c("providers/implementations/ciphers/ciphercommon_block.c",uVar3,
               "ossl_cipher_unpadblock");
  FUN_00379a5c(0x39,100,0);
  return 0;
}


// ===== 0046cfa8  FUN_0046cfa8 =====

undefined8
FUN_0046cfa8(undefined8 param_1,int param_2,long param_3,long *param_4,long param_5,
            undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined4 param_9)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_2 < 0x302) {
    if (param_2 != 0x100) {
      if (param_2 == 0x300) {
        uVar1 = FUN_00472d2c(param_4,*param_4,param_3,param_6,param_7,param_5,param_8,param_1);
        return uVar1;
      }
      if (param_2 != 0x301) {
        return 0;
      }
      lVar2 = *param_4;
      goto LAB_0046d014;
    }
  }
  else if (((1 < param_2 - 0x302U) && (param_2 != 0xfefd)) && (param_2 != 0xfeff)) {
    return 0;
  }
  param_3 = param_3 + param_5;
  lVar2 = *param_4 - param_5;
  *param_4 = lVar2;
LAB_0046d014:
  uVar1 = FUN_00473024(param_4,lVar2,param_3,param_6,param_7,param_5,param_8,param_9);
  return uVar1;
}


// ===== 0046d05c  FUN_0046d05c =====

undefined8 FUN_0046d05c(byte *param_1,long param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  uint uVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  size_t __n;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long local_38;
  
  if (param_2 == 0) {
    return 1;
  }
  lVar7 = FUN_003cb19c(param_2,&DAT_001e2a1d);
  if (lVar7 == 0) {
LAB_0046d0dc:
    lVar7 = FUN_003cb19c(param_2,"ivlen");
    if (lVar7 == 0) {
LAB_0046d1c0:
      lVar7 = FUN_003cb19c(param_2,"tlsaad");
      if (lVar7 == 0) {
LAB_0046d2c0:
        lVar7 = FUN_003cb19c(param_2,"tlsivfixed");
        if (lVar7 == 0) {
          return 1;
        }
        if (*(int *)(lVar7 + 8) == 5) {
          if (*(long *)(lVar7 + 0x18) == 4) {
            *(undefined4 *)(param_1 + 0x30) = **(undefined4 **)(lVar7 + 0x10);
            return 1;
          }
          FUN_00379868();
          uVar8 = 0x8b;
          goto LAB_0046d124;
        }
        FUN_00379868();
        uVar8 = 0x87;
      }
      else {
        if (*(int *)(lVar7 + 8) == 5) {
          puVar1 = *(undefined8 **)(lVar7 + 0x10);
          lVar7 = *(long *)(lVar7 + 0x18);
          iVar6 = FUN_0043eb70();
          if ((lVar7 == 0xd) && (iVar6 != 0)) {
            uVar8 = *(undefined8 *)((long)puVar1 + 5);
            uVar11 = *puVar1;
            *(undefined8 *)(param_1 + 0x45) = uVar8;
            *(undefined8 *)(param_1 + 0x40) = uVar11;
            uVar4 = (ushort)((ulong)uVar8 >> 0x30);
            uVar3 = (uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8;
            param_1[0x20] = 0xd;
            param_1[0x21] = 0;
            param_1[0x22] = 0;
            param_1[0x23] = 0;
            param_1[0x24] = 0;
            param_1[0x25] = 0;
            param_1[0x26] = 0;
            param_1[0x27] = 0;
            if (uVar3 < 8) goto LAB_0046d21c;
            uVar9 = *(ulong *)(param_1 + 0x10);
            uVar10 = (ulong)uVar3 - 8;
            if (((*param_1 & 1) == 0) && (bVar5 = uVar10 < uVar9, uVar10 = uVar10 - uVar9, bVar5))
            goto LAB_0046d21c;
            local_38 = (long)(int)uVar9;
            *(ushort *)(param_1 + 0x4b) =
                 (ushort)(uVar10 >> 8) & 0xff | (ushort)(((uint)uVar10 & 0xff00ff) << 8);
            if ((int)uVar9 != 0) {
              *(long *)(param_1 + 0x28) = local_38;
              goto LAB_0046d2c0;
            }
          }
          else {
LAB_0046d21c:
            local_38 = 0;
          }
          FUN_00379868();
          FUN_0037995c("providers/implementations/ciphers/ciphercommon_ccm.c",0x7e,
                       "ossl_ccm_set_ctx_params");
          uVar8 = 0x73;
          goto LAB_0046d334;
        }
        FUN_00379868();
        uVar8 = 0x79;
      }
    }
    else {
      iVar6 = thunk_FUN_003cc060(lVar7,&local_38);
      if (iVar6 != 0) {
        if (0xfffffffffffffff8 < local_38 - 0xeU) {
          if (*(long *)(param_1 + 8) != 0xf - local_38) {
            *(long *)(param_1 + 8) = 0xf - local_38;
            *param_1 = *param_1 & 0xfb;
          }
          goto LAB_0046d1c0;
        }
        FUN_00379868();
        uVar8 = 0x6d;
LAB_0046d124:
        FUN_0037995c("providers/implementations/ciphers/ciphercommon_ccm.c",uVar8,
                     "ossl_ccm_set_ctx_params");
        uVar8 = 0x6d;
        goto LAB_0046d334;
      }
      FUN_00379868();
      uVar8 = 0x68;
    }
  }
  else {
    if (*(int *)(lVar7 + 8) == 5) {
      __n = *(size_t *)(lVar7 + 0x18);
      if (((__n & 1) != 0) || (__n - 0x11 < 0xfffffffffffffff3)) {
        FUN_00379868();
        FUN_0037995c("providers/implementations/ciphers/ciphercommon_ccm.c",0x54,
                     "ossl_ccm_set_ctx_params");
        uVar8 = 0x76;
        goto LAB_0046d334;
      }
      if (*(void **)(lVar7 + 0x10) != (void *)0x0) {
        bVar2 = *param_1;
        if ((bVar2 & 1) != 0) {
          FUN_00379868();
          FUN_0037995c("providers/implementations/ciphers/ciphercommon_ccm.c",0x5a,
                       "ossl_ccm_set_ctx_params");
          uVar8 = 0x78;
          goto LAB_0046d334;
        }
        memcpy(param_1 + 0x40,*(void **)(lVar7 + 0x10),__n);
        *param_1 = bVar2 | 8;
        __n = *(size_t *)(lVar7 + 0x18);
      }
      *(size_t *)(param_1 + 0x10) = __n;
      goto LAB_0046d0dc;
    }
    FUN_00379868();
    uVar8 = 0x50;
  }
  FUN_0037995c("providers/implementations/ciphers/ciphercommon_ccm.c",uVar8,
               "ossl_ccm_set_ctx_params");
  uVar8 = 0x67;
LAB_0046d334:
  FUN_00379a5c(0x39,uVar8,0);
  return 0;
}


// ===== 0046d370  FUN_0046d370 =====

undefined8 FUN_0046d370(byte *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_003cb140(param_2,"ivlen");
  if ((lVar2 == 0) || (iVar1 = thunk_FUN_003cc2a4(lVar2,0xf - *(long *)(param_1 + 8)), iVar1 != 0))
  {
    lVar2 = FUN_003cb140(param_2,"taglen");
    if ((lVar2 == 0) ||
       (iVar1 = thunk_FUN_003cc2a4(lVar2,*(undefined8 *)(param_1 + 0x10)), iVar1 != 0)) {
      lVar2 = FUN_003cb140(param_2,&DAT_001d9fca);
      if (lVar2 != 0) {
        if (0xfU - *(long *)(param_1 + 8) <= *(ulong *)(lVar2 + 0x18)) {
          iVar1 = FUN_003cd7b8(lVar2,param_1 + 0x30);
          if ((iVar1 == 0) &&
             (iVar1 = FUN_003cdb94(0,lVar2,param_1 + 0x30,*(undefined8 *)(lVar2 + 0x18)), iVar1 == 0
             )) {
            FUN_00379868();
            uVar3 = 0xb0;
            goto LAB_0046d64c;
          }
          goto LAB_0046d45c;
        }
        FUN_00379868();
        uVar3 = 0xab;
LAB_0046d4a0:
        FUN_0037995c("providers/implementations/ciphers/ciphercommon_ccm.c",uVar3,
                     "ossl_ccm_get_ctx_params");
        uVar3 = 0x6d;
        goto LAB_0046d658;
      }
LAB_0046d45c:
      lVar2 = FUN_003cb140(param_2,"updated-iv");
      if (lVar2 != 0) {
        if (*(ulong *)(lVar2 + 0x18) < 0xfU - *(long *)(param_1 + 8)) {
          FUN_00379868();
          uVar3 = 0xb8;
          goto LAB_0046d4a0;
        }
        iVar1 = FUN_003cd7b8(lVar2,param_1 + 0x30);
        if ((iVar1 == 0) &&
           (iVar1 = FUN_003cdb94(0,lVar2,param_1 + 0x30,*(undefined8 *)(lVar2 + 0x18)), iVar1 == 0))
        {
          FUN_00379868();
          uVar3 = 0xbd;
          goto LAB_0046d64c;
        }
      }
      lVar2 = FUN_003cb140(param_2,"keylen");
      if ((lVar2 == 0) ||
         (iVar1 = thunk_FUN_003cc2a4(lVar2,*(undefined8 *)(param_1 + 0x18)), iVar1 != 0)) {
        lVar2 = FUN_003cb140(param_2,"tlsaadpad");
        if ((lVar2 == 0) ||
           (iVar1 = thunk_FUN_003cc2a4(lVar2,*(undefined8 *)(param_1 + 0x28)), iVar1 != 0)) {
          lVar2 = FUN_003cb140(param_2,&DAT_001e2a1d);
          if (lVar2 == 0) {
            return 1;
          }
          if (((*param_1 ^ 0xff) & 9) != 0) {
            FUN_00379868();
            FUN_0037995c("providers/implementations/ciphers/ciphercommon_ccm.c",0xd1,
                         "ossl_ccm_get_ctx_params");
            uVar3 = 0x77;
            goto LAB_0046d658;
          }
          if (*(int *)(lVar2 + 8) == 5) {
            uVar3 = (**(code **)(*(long *)(param_1 + 0x90) + 0x28))
                              (param_1,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
            if ((int)uVar3 != 0) {
              *param_1 = *param_1 & 0xe3;
              return 1;
            }
            return uVar3;
          }
          FUN_00379868();
          uVar3 = 0xd5;
        }
        else {
          FUN_00379868();
          uVar3 = 0xca;
        }
      }
      else {
        FUN_00379868();
        uVar3 = 0xc4;
      }
    }
    else {
      FUN_00379868();
      uVar3 = 0xa3;
    }
  }
  else {
    FUN_00379868();
    uVar3 = 0x9a;
  }
LAB_0046d64c:
  FUN_0037995c("providers/implementations/ciphers/ciphercommon_ccm.c",uVar3,
               "ossl_ccm_get_ctx_params");
  uVar3 = 0x68;
LAB_0046d658:
  FUN_00379a5c(0x39,uVar3,0);
  return 0;
}


// ===== 0046d674  FUN_0046d674 =====

void FUN_0046d674(void)

{
  FUN_0046d67c();
  return;
}


// ===== 0046d67c  FUN_0046d67c =====

undefined8
FUN_0046d67c(byte *param_1,long param_2,long param_3,void *param_4,size_t param_5,undefined8 param_6
            ,byte param_7)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_0043eb70();
  if (iVar2 == 0) {
    return 0;
  }
  bVar1 = *param_1 & 0xfe | param_7 & 1;
  *param_1 = bVar1;
  if (param_4 != (void *)0x0) {
    if (0xfU - *(long *)(param_1 + 8) != param_5) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/ciphers/ciphercommon_ccm.c",0xee,"ccm_init");
      uVar3 = 0x6d;
      goto LAB_0046d78c;
    }
    memcpy(param_1 + 0x30,param_4,param_5);
    *param_1 = bVar1 | 4;
  }
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0x18) != param_3) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/ciphers/ciphercommon_ccm.c",0xf6,"ccm_init");
      uVar3 = 0x69;
LAB_0046d78c:
      FUN_00379a5c(0x39,uVar3,0);
      return 0;
    }
    iVar2 = (*(code *)**(undefined8 **)(param_1 + 0x90))(param_1,param_2,param_3);
    if (iVar2 == 0) {
      return 0;
    }
  }
  uVar3 = FUN_0046d05c(param_1,param_6);
  return uVar3;
}


// ===== 0046d7b0  FUN_0046d7b0 =====

void FUN_0046d7b0(void)

{
  FUN_0046d67c();
  return;
}


// ===== 0046d7b8  FUN_0046d7b8 =====

undefined8 FUN_0046d7b8(void)

{
  int iVar1;
  ulong in_x3;
  ulong in_x5;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (in_x3 < in_x5) {
    uVar2 = 0x6a;
    uVar3 = 0x114;
  }
  else {
    iVar1 = FUN_0046d83c();
    if (iVar1 != 0) {
      return 1;
    }
    uVar2 = 0x66;
    uVar3 = 0x119;
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/ciphers/ciphercommon_ccm.c",uVar3,"ossl_ccm_stream_update"
              );
  FUN_00379a5c(0x39,uVar2,0);
  return 0;
}


// ===== 0046d83c  FUN_0046d83c =====

ulong FUN_0046d83c(byte *param_1,undefined8 *param_2,ulong *param_3,undefined8 *param_4,
                  ulong param_5)

{
  int iVar1;
  ulong uVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  bVar3 = *param_1;
  uVar4 = (uint)bVar3;
  if ((bVar3 >> 1 & 1) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x20) != -1) {
    iVar1 = FUN_0043eb70();
    uVar2 = 0;
    if (((param_2 == param_4) && (param_4 != (undefined8 *)0x0)) && (iVar1 != 0)) {
      lVar5 = *(long *)(param_1 + 0x10);
      if (lVar5 + 8U <= param_5) {
        if ((*param_1 & 1) == 0) {
          uVar6 = *param_4;
        }
        else {
          uVar6 = *(undefined8 *)(param_1 + 0x40);
          *param_4 = uVar6;
          lVar5 = *(long *)(param_1 + 0x10);
        }
        *(undefined8 *)(param_1 + 0x34) = uVar6;
        uVar7 = (param_5 - lVar5) - 8;
        uVar2 = (**(code **)(*(long *)(param_1 + 0x90) + 8))
                          (param_1,param_1 + 0x30,0xf - *(long *)(param_1 + 8),uVar7);
        if ((int)uVar2 != 0) {
          *param_1 = *param_1 | 0x10;
          uVar2 = (**(code **)(*(long *)(param_1 + 0x90) + 0x10))
                            (param_1,param_1 + 0x40,*(undefined8 *)(param_1 + 0x20));
          if ((int)uVar2 != 0) {
            param_4 = param_4 + 1;
            if ((*param_1 & 1) == 0) {
              iVar1 = (**(code **)(*(long *)(param_1 + 0x90) + 0x20))
                                (param_1,param_4,param_4,uVar7,(long)param_4 + uVar7);
              if (iVar1 == 0) {
                uVar7 = 0;
              }
              *param_3 = uVar7;
              return (ulong)(iVar1 != 0);
            }
            uVar2 = (**(code **)(*(long *)(param_1 + 0x90) + 0x18))
                              (param_1,param_4,param_4,uVar7,(long)param_4 + uVar7,
                               *(undefined8 *)(param_1 + 0x10));
            if ((int)uVar2 != 0) {
              *param_3 = uVar7 + *(long *)(param_1 + 0x10) + 8;
              return 1;
            }
          }
        }
        goto LAB_0046db58;
      }
      goto LAB_0046d8f8;
    }
LAB_0046d8dc:
    *param_3 = 0;
    return uVar2;
  }
  lVar5 = *(long *)(param_1 + 0x90);
  if ((param_2 != (undefined8 *)0x0) && (param_4 == (undefined8 *)0x0)) {
    uVar2 = 1;
    goto LAB_0046d8dc;
  }
  if ((bVar3 >> 2 & 1) == 0) {
LAB_0046d8f8:
    *param_3 = 0;
    return 0;
  }
  if (param_2 != (undefined8 *)0x0) {
    if ((bVar3 >> 4 & 1) == 0) {
      uVar2 = (**(code **)(lVar5 + 8))(param_1,param_1 + 0x30,0xf - *(long *)(param_1 + 8),param_5);
      if ((int)uVar2 == 0) goto LAB_0046db58;
      uVar4 = *param_1 | 0x10;
      *param_1 = (byte)uVar4;
    }
    if ((uVar4 & 1) == 0) {
      if ((uVar4 >> 3 & 1) == 0) goto LAB_0046d8f8;
      uVar2 = (**(code **)(lVar5 + 0x20))
                        (param_1,param_4,param_2,param_5,param_1 + 0x40,
                         *(undefined8 *)(param_1 + 0x10));
      if ((int)uVar2 != 0) {
        bVar3 = *param_1 & 0xe3;
        goto LAB_0046db38;
      }
    }
    else {
      uVar2 = (**(code **)(lVar5 + 0x18))(param_1,param_4,param_2,param_5,0,0);
      if ((int)uVar2 != 0) {
        bVar3 = *param_1 | 8;
        goto LAB_0046db38;
      }
    }
LAB_0046db58:
    *param_3 = 0;
    return uVar2;
  }
  if (param_4 != (undefined8 *)0x0) {
    if ((param_5 == 0) || ((bVar3 >> 4 & 1) != 0)) {
      iVar1 = (**(code **)(lVar5 + 0x10))(param_1,param_4,param_5);
      if (iVar1 == 0) {
        param_5 = 0;
      }
      *param_3 = param_5;
      return (ulong)(iVar1 != 0);
    }
    goto LAB_0046d8f8;
  }
  uVar2 = (**(code **)(lVar5 + 8))(param_1,param_1 + 0x30,0xf - *(long *)(param_1 + 8),param_5);
  if ((int)uVar2 == 0) goto LAB_0046db58;
  bVar3 = *param_1 | 0x10;
LAB_0046db38:
  *param_1 = bVar3;
  *param_3 = param_5;
  return 1;
}


// ===== 0046db70  FUN_0046db70 =====

undefined8 FUN_0046db70(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0043eb70();
  if (((int)uVar1 != 0) && (uVar1 = FUN_0046d83c(param_1,param_2,param_3,0,0), (int)uVar1 != 0)) {
    uVar1 = 1;
    *param_3 = 0;
  }
  return uVar1;
}


// ===== 0046dbc8  FUN_0046dbc8 =====

undefined8
FUN_0046dbc8(undefined8 param_1,undefined8 param_2,ulong *param_3,ulong param_4,undefined8 param_5,
            ulong param_6)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0043eb70();
  if ((int)uVar1 != 0) {
    if (param_4 < param_6) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/ciphers/ciphercommon_ccm.c",0x139,"ossl_ccm_cipher");
      FUN_00379a5c(0x39,0x6a,0);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_0046d83c(param_1,param_2,param_3,param_5,param_6);
      if ((int)uVar1 != 0) {
        *param_3 = param_6;
        return 1;
      }
    }
  }
  return uVar1;
}


// ===== 0046dc80  FUN_0046dc80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046dc80(byte *param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_002005d8;
  uVar1 = _DAT_002005d0;
  *(undefined8 *)(param_1 + 0x90) = param_3;
  *(ulong *)(param_1 + 0x18) = param_2 >> 3;
  param_1[0x20] = 0xff;
  param_1[0x21] = 0xff;
  param_1[0x22] = 0xff;
  param_1[0x23] = 0xff;
  param_1[0x24] = 0xff;
  param_1[0x25] = 0xff;
  param_1[0x26] = 0xff;
  param_1[0x27] = 0xff;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  *param_1 = *param_1 & 0xe1;
  return;
}


// ===== 0046dcac  FUN_0046dcac =====

bool FUN_0046dcac(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_003d6bdc(param_1 + 0x50);
  return iVar1 == 0;
}


// ===== 0046dccc  FUN_0046dccc =====

undefined8 FUN_0046dccc(long param_1)

{
  FUN_003d6c58(param_1 + 0x50);
  return 1;
}


// ===== 0046dce8  FUN_0046dce8 =====

bool FUN_0046dce8(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_003d7c48(param_1 + 0x50);
  return lVar1 != 0;
}


// ===== 0046dd08  FUN_0046dd08 =====

bool FUN_0046dd08(long param_1)

{
  int iVar1;
  long lVar2;
  long in_x4;
  undefined8 in_x5;
  
  if (*(long *)(param_1 + 0x88) == 0) {
    iVar1 = FUN_003d6ea4(param_1 + 0x50);
  }
  else {
    iVar1 = FUN_003d75c4(param_1 + 0x50);
  }
  if ((in_x4 != 0) && (iVar1 == 0)) {
    lVar2 = FUN_003d7c48(param_1 + 0x50,in_x4,in_x5);
    return lVar2 != 0;
  }
  return iVar1 == 0;
}


// ===== 0046dd98  FUN_0046dd98 =====

undefined8
FUN_0046dd98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_50 [16];
  
  if (*(long *)(param_1 + 0x88) == 0) {
    iVar1 = FUN_003d7274(param_1 + 0x50,param_2,param_3,param_4);
  }
  else {
    iVar1 = FUN_003d79b0(param_1 + 0x50,param_2,param_3,param_4);
  }
  if (((iVar1 == 0) && (lVar2 = FUN_003d7c48(param_1 + 0x50,auStack_50,param_6), lVar2 != 0)) &&
     (iVar1 = FUN_003c46d4(auStack_50,param_5,param_6), iVar1 == 0)) {
    return 1;
  }
  FUN_003c89b8(param_3,param_4);
  return 0;
}


// ===== 0046de64  FUN_0046de64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046de64(undefined8 param_1,undefined4 *param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = 6;
  uVar1 = _UNK_002002c8;
  uVar2 = _DAT_002002c0;
  *(undefined8 *)(param_2 + 0x3c) = param_4;
  *(undefined8 *)(param_2 + 10) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 6) = uVar1;
  *(undefined8 *)(param_2 + 4) = uVar2;
  *(byte *)(param_2 + 0x15) = *(byte *)(param_2 + 0x15) | 2;
  *(ulong *)(param_2 + 2) = param_3 >> 3;
  uVar2 = FUN_0046b880();
  *(undefined8 *)(param_2 + 0x3a) = uVar2;
  return;
}


// ===== 0046debc  FUN_0046debc =====

void FUN_0046debc(void)

{
  FUN_0046dec4();
  return;
}


// ===== 0046dec4  FUN_0046dec4 =====

undefined8
FUN_0046dec4(long param_1,long param_2,long param_3,void *param_4,size_t param_5,undefined8 param_6,
            byte param_7)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043eb70();
  if (iVar1 == 0) {
    return 0;
  }
  *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) & 0xfe | param_7 & 1;
  if (param_4 != (void *)0x0) {
    if (param_5 - 0x81 < 0xffffffffffffff80) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/ciphers/ciphercommon_gcm.c",0x3e,"gcm_init");
      uVar2 = 0x6d;
      goto LAB_0046dfd4;
    }
    *(size_t *)(param_1 + 0x10) = param_5;
    memcpy((void *)(param_1 + 0x55),param_4,param_5);
    *(undefined4 *)(param_1 + 0x50) = 1;
  }
  if (param_2 != 0) {
    if (*(long *)(param_1 + 8) != param_3) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/ciphers/ciphercommon_gcm.c",0x48,"gcm_init");
      uVar2 = 0x69;
LAB_0046dfd4:
      FUN_00379a5c(0x39,uVar2,0);
      return 0;
    }
    iVar1 = (*(code *)**(undefined8 **)(param_1 + 0xf0))(param_1,param_2,param_3);
    if (iVar1 == 0) {
      return 0;
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  uVar2 = FUN_0046e370(param_1,param_6);
  return uVar2;
}


// ===== 0046dff8  FUN_0046dff8 =====

void FUN_0046dff8(void)

{
  FUN_0046dec4();
  return;
}


// ===== 0046e000  FUN_0046e000 =====

undefined8 FUN_0046e000(long param_1,long *param_2)

{
  long lVar1;
  char *pcVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *__dest;
  size_t __n;
  
  lVar5 = *param_2;
  if (lVar5 == 0) {
    return 1;
  }
  lVar1 = param_1 + 0x55;
  do {
    iVar4 = FUN_0046ebe4(lVar5);
    if (iVar4 < 0x2e) {
      if (iVar4 < 0x24) {
        if (iVar4 == 0x21) {
          if (((param_2[3] - 0x11U < 0xfffffffffffffff0) || ((*(byte *)(param_1 + 0x54) & 1) == 0))
             || (*(long *)(param_1 + 0x18) == -1)) {
            uVar7 = 0x6e;
            uVar8 = 0xe0;
            goto LAB_0046e324;
          }
          iVar4 = FUN_003cd7b8(param_2,param_1 + 0xd5);
          if (iVar4 == 0) {
            uVar7 = 0x68;
            uVar8 = 0xe4;
            goto LAB_0046e324;
          }
        }
        else if (iVar4 == 0x22) {
          lVar5 = 0x10;
          if (*(long *)(param_1 + 0x18) != -1) {
            lVar5 = *(long *)(param_1 + 0x18);
          }
          iVar4 = thunk_FUN_003cc2a4(param_2,lVar5);
          if (iVar4 == 0) {
            uVar7 = 0x68;
            uVar8 = 0xb1;
            goto LAB_0046e324;
          }
        }
      }
      else if (iVar4 == 0x24) {
        iVar4 = thunk_FUN_003cc2a4(param_2,*(undefined8 *)(param_1 + 0x20));
        if (iVar4 == 0) {
          uVar7 = 0x68;
          uVar8 = 0xd5;
          goto LAB_0046e324;
        }
      }
      else if (iVar4 == 0x25) {
        __dest = (void *)param_2[2];
        if (__dest == (void *)0x0) {
          return 0;
        }
        if ((int)param_2[1] != 5) {
          return 0;
        }
        if (((*(byte *)(param_1 + 0x54) ^ 0xff) & 0x14) != 0) {
          return 0;
        }
        __n = param_2[3];
        uVar7 = (**(code **)(*(long *)(param_1 + 0xf0) + 8))
                          (param_1,lVar1,*(undefined8 *)(param_1 + 0x10));
        if ((int)uVar7 == 0) {
          return uVar7;
        }
        uVar6 = *(ulong *)(param_1 + 0x10);
        if (uVar6 <= __n - 1) {
          __n = uVar6;
        }
        memcpy(__dest,(void *)((lVar1 + uVar6) - __n),__n);
        pcVar2 = (char *)(param_1 + 0x4d + *(long *)(param_1 + 0x10));
        bVar3 = pcVar2[7];
        pcVar2[7] = (char)(bVar3 + 1);
        if (((((bVar3 + 1 >> 8 != 0) &&
              (bVar3 = pcVar2[6], pcVar2[6] = (char)(bVar3 + 1), bVar3 + 1 >> 8 != 0)) &&
             ((bVar3 = pcVar2[5], pcVar2[5] = (char)(bVar3 + 1), bVar3 + 1 >> 8 != 0 &&
              ((bVar3 = pcVar2[4], pcVar2[4] = (char)(bVar3 + 1), bVar3 + 1 >> 8 != 0 &&
               (bVar3 = pcVar2[3], pcVar2[3] = (char)(bVar3 + 1), bVar3 + 1 >> 8 != 0)))))) &&
            (bVar3 = pcVar2[2], pcVar2[2] = (char)(bVar3 + 1), bVar3 + 1 >> 8 != 0)) &&
           (bVar3 = pcVar2[1], pcVar2[1] = (char)(bVar3 + 1), bVar3 + 1 >> 8 != 0)) {
          *pcVar2 = *pcVar2 + '\x01';
        }
        *(undefined4 *)(param_1 + 0x50) = 2;
      }
    }
    else if (iVar4 < 0x30) {
      if (iVar4 == 0x2e) {
        if (*(int *)(param_1 + 0x50) == 0) {
          return 0;
        }
        if ((ulong)param_2[3] < *(ulong *)(param_1 + 0x10)) {
          uVar7 = 0x6d;
          uVar8 = 0xbb;
LAB_0046e324:
          FUN_00379868();
          FUN_0037995c("providers/implementations/ciphers/ciphercommon_gcm.c",uVar8,
                       "ossl_gcm_get_ctx_params");
          FUN_00379a5c(0x39,uVar7,0);
          return 0;
        }
        iVar4 = FUN_003cd7b8(param_2,lVar1);
        if ((iVar4 == 0) &&
           (iVar4 = FUN_003cdb94(param_2,lVar1,*(undefined8 *)(param_1 + 0x10)), iVar4 == 0)) {
          uVar7 = 0x68;
          uVar8 = 0xc0;
          goto LAB_0046e324;
        }
      }
      else if ((iVar4 == 0x2f) &&
              (iVar4 = thunk_FUN_003cc2a4(param_2,*(undefined8 *)(param_1 + 0x10)), iVar4 == 0)) {
        uVar7 = 0x68;
        uVar8 = 0x9f;
        goto LAB_0046e324;
      }
    }
    else if (iVar4 == 0x30) {
      iVar4 = thunk_FUN_003cc2a4(param_2,*(undefined8 *)(param_1 + 8));
      if (iVar4 == 0) {
        uVar7 = 0x68;
        uVar8 = 0xa6;
        goto LAB_0046e324;
      }
    }
    else if (iVar4 == 0x44) {
      if (*(int *)(param_1 + 0x50) == 0) {
        return 0;
      }
      if ((ulong)param_2[3] < *(ulong *)(param_1 + 0x10)) {
        uVar7 = 0x6d;
        uVar8 = 0xc9;
        goto LAB_0046e324;
      }
      iVar4 = FUN_003cd7b8(param_2,lVar1);
      if ((iVar4 == 0) &&
         (iVar4 = FUN_003cdb94(param_2,lVar1,*(undefined8 *)(param_1 + 0x10)), iVar4 == 0)) {
        uVar7 = 0x68;
        uVar8 = 0xce;
        goto LAB_0046e324;
      }
    }
    param_2 = param_2 + 5;
    lVar5 = *param_2;
    if (lVar5 == 0) {
      return 1;
    }
  } while( true );
}


// ===== 0046e370  FUN_0046e370 =====

undefined4 FUN_0046e370(long param_1,long *param_2)

{
  void *__dest;
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *local_70;
  long local_68;
  
  if (param_2 != (long *)0x0) {
    if (*param_2 == 0) {
      return 1;
    }
    __dest = (void *)(param_1 + 0x55);
    do {
      iVar3 = FUN_0046ebe4();
      if (iVar3 < 0x26) {
        if (iVar3 == 0x21) {
          local_70 = (undefined8 *)(param_1 + 0xd5);
          iVar3 = FUN_003cd608(param_2,&local_70,0x10,&local_68);
          if (iVar3 == 0) {
            uVar6 = 0x67;
            uVar7 = 0x108;
            goto LAB_0046e634;
          }
          if ((local_68 == 0) || ((*(byte *)(param_1 + 0x54) & 1) != 0)) {
            uVar6 = 0x6e;
            uVar7 = 0x10c;
            goto LAB_0046e634;
          }
          *(long *)(param_1 + 0x18) = local_68;
        }
        else if (iVar3 == 0x23) {
          if ((int)param_2[1] != 5) {
            uVar6 = 0x67;
            uVar7 = 0x125;
            goto LAB_0046e634;
          }
          puVar1 = (undefined8 *)param_2[2];
          lVar8 = param_2[3];
          iVar3 = FUN_0043eb70();
          if ((lVar8 == 0xd) && (iVar3 != 0)) {
            uVar6 = *(undefined8 *)((long)puVar1 + 5);
            uVar7 = *puVar1;
            *(undefined8 *)(param_1 + 0x28) = 0xd;
            *(undefined8 *)(param_1 + 0xda) = uVar6;
            *(undefined8 *)(param_1 + 0xd5) = uVar7;
            uVar2 = (uint)(*(ushort *)(param_1 + 0xe0) >> 8) |
                    (*(ushort *)(param_1 + 0xe0) & 0xff00ff) << 8;
            if (7 < uVar2) {
              uVar5 = (ulong)uVar2 - 8;
              if ((*(byte *)(param_1 + 0x54) & 1) == 0) {
                if (uVar5 < 0x10) goto LAB_0046e5d4;
                uVar5 = (ulong)uVar2 - 0x18;
              }
              local_68 = 0x10;
              *(undefined8 *)(param_1 + 0x20) = 0x10;
              *(ushort *)(param_1 + 0xe0) =
                   (ushort)(uVar5 >> 8) & 0xff | (ushort)(((uint)uVar5 & 0xff00ff) << 8);
              goto LAB_0046e3d8;
            }
          }
LAB_0046e5d4:
          uVar6 = 0x6c;
          uVar7 = 0x12a;
          local_68 = 0;
          goto LAB_0046e634;
        }
      }
      else if (iVar3 == 0x26) {
        if ((int)param_2[1] != 5) {
          uVar6 = 0x67;
          uVar7 = 0x132;
          goto LAB_0046e634;
        }
        uVar5 = param_2[3];
        if (uVar5 != 0xffffffffffffffff) {
          if ((3 < uVar5) && (lVar8 = *(long *)(param_1 + 0x10), 7 < (ulong)(lVar8 - (int)uVar5))) {
            memcpy(__dest,(void *)param_2[2],uVar5);
            bVar4 = *(byte *)(param_1 + 0x54);
            if ((bVar4 & 1) == 0) goto LAB_0046e5bc;
            iVar3 = FUN_003edc30(*(undefined8 *)(param_1 + 0xe8),(long)__dest + uVar5,lVar8 - uVar5,
                                 0);
            if (0 < iVar3) goto LAB_0046e5b8;
          }
          uVar6 = 0x67;
          uVar7 = 0x136;
LAB_0046e634:
          FUN_00379868();
          FUN_0037995c("providers/implementations/ciphers/ciphercommon_gcm.c",uVar7,
                       "ossl_gcm_set_ctx_params");
          FUN_00379a5c(0x39,uVar6,0);
          return 0;
        }
        memcpy(__dest,(void *)param_2[2],*(size_t *)(param_1 + 0x10));
LAB_0046e5b8:
        bVar4 = *(byte *)(param_1 + 0x54);
LAB_0046e5bc:
        *(undefined4 *)(param_1 + 0x50) = 1;
        *(byte *)(param_1 + 0x54) = bVar4 | 0x10;
      }
      else if (iVar3 == 0x27) {
        if ((void *)param_2[2] == (void *)0x0) {
          return 0;
        }
        if ((int)param_2[1] != 5) {
          return 0;
        }
        if ((*(byte *)(param_1 + 0x54) & 0x15) != 0x14) {
          return 0;
        }
        memcpy((void *)((long)__dest + (*(long *)(param_1 + 0x10) - param_2[3])),(void *)param_2[2],
               param_2[3]);
        iVar3 = (**(code **)(*(long *)(param_1 + 0xf0) + 8))
                          (param_1,__dest,*(undefined8 *)(param_1 + 0x10));
        if (iVar3 == 0) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x50) = 2;
      }
      else if (iVar3 == 0x2f) {
        iVar3 = thunk_FUN_003cc060(param_2,&local_68);
        if (iVar3 == 0) {
          uVar6 = 0x67;
          uVar7 = 0x114;
          goto LAB_0046e634;
        }
        if (local_68 - 0x81U < 0xffffffffffffff80) {
          uVar6 = 0x6d;
          uVar7 = 0x118;
          goto LAB_0046e634;
        }
        if (*(long *)(param_1 + 0x10) != local_68) {
          if (*(int *)(param_1 + 0x50) != 0) {
            *(undefined4 *)(param_1 + 0x50) = 3;
          }
          *(long *)(param_1 + 0x10) = local_68;
        }
      }
LAB_0046e3d8:
      param_2 = param_2 + 5;
    } while (*param_2 != 0);
  }
  return 1;
}


// ===== 0046e688  FUN_0046e688 =====

undefined8
FUN_0046e688(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong param_4,
            undefined8 param_5,ulong param_6)

{
  int iVar1;
  
  if (param_6 == 0) {
    *param_3 = 0;
    return 1;
  }
  if (param_4 < param_6) {
    FUN_00379868();
    FUN_0037995c("providers/implementations/ciphers/ciphercommon_gcm.c",0x152,
                 "ossl_gcm_stream_update");
    FUN_00379a5c(0x39,0x6a,0);
    return 0;
  }
  iVar1 = FUN_0046e734();
  if (iVar1 != 0) {
    return 1;
  }
  FUN_00379868();
  FUN_0037995c("providers/implementations/ciphers/ciphercommon_gcm.c",0x157,"ossl_gcm_stream_update"
              );
  FUN_00379a5c(0x39,0x66,0);
  return 0;
}


// ===== 0046e734  FUN_0046e734 =====

undefined8
FUN_0046e734(long param_1,undefined8 *param_2,ulong *param_3,undefined8 *param_4,ulong param_5)

{
  uint uVar1;
  size_t __n;
  byte bVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  
  if (*(long *)(param_1 + 0x28) != -1) {
    uVar5 = FUN_0043eb70();
    if ((int)uVar5 == 0) goto LAB_0046e77c;
    bVar2 = *(byte *)(param_1 + 0x54);
    if ((bVar2 >> 2 & 1) == 0) goto LAB_0046e778;
    uVar5 = 0;
    uVar8 = 0;
    if ((param_2 != param_4) || (uVar3 = param_5 - 0x18, param_5 < 0x18)) goto LAB_0046e780;
    if ((bVar2 & 1) == 0) {
      if (((bVar2 ^ 0xff) & 0x14) != 0) goto LAB_0046e778;
      *(undefined8 *)(param_1 + 0x55 + *(long *)(param_1 + 0x10) + -8) = *param_2;
      uVar5 = (**(code **)(*(long *)(param_1 + 0xf0) + 8))
                        (param_1,param_1 + 0x55,*(undefined8 *)(param_1 + 0x10));
      if ((int)uVar5 != 0) {
LAB_0046e824:
        param_2 = param_2 + 1;
        pcVar6 = *(code **)(*(long *)(param_1 + 0xf0) + 0x28);
        *(undefined4 *)(param_1 + 0x50) = 2;
        iVar4 = (*pcVar6)(param_1,param_1 + 0xd5,*(undefined8 *)(param_1 + 0x28),param_2,uVar3,
                          param_2,(long)param_2 + uVar3,0x10);
        if (iVar4 != 0) {
          uVar5 = 1;
          uVar8 = uVar3;
          if ((*(byte *)(param_1 + 0x54) & 1) != 0) {
            uVar8 = param_5;
          }
          goto LAB_0046e780;
        }
        if ((*(byte *)(param_1 + 0x54) & 1) == 0) {
          FUN_003c89b8(param_2,uVar3);
        }
        goto LAB_0046e778;
      }
    }
    else {
      lVar7 = *(long *)(param_1 + 0x30);
      *(long *)(param_1 + 0x30) = lVar7 + 1;
      if (lVar7 == -1) {
        FUN_00379868(0);
        FUN_0037995c("providers/implementations/ciphers/ciphercommon_gcm.c",0x228,"gcm_tls_cipher");
        FUN_00379a5c(0x39,0x7e,0);
      }
      else if (((bVar2 ^ 0xff) & 0x14) == 0) {
        lVar7 = param_1 + 0x55;
        uVar5 = (**(code **)(*(long *)(param_1 + 0xf0) + 8))
                          (param_1,lVar7,*(undefined8 *)(param_1 + 0x10));
        if ((int)uVar5 != 0) {
          uVar8 = *(ulong *)(param_1 + 0x10);
          __n = uVar8;
          if (7 < uVar8) {
            __n = 8;
          }
          memcpy(param_2,(void *)((lVar7 + uVar8) - __n),__n);
          lVar7 = lVar7 + *(long *)(param_1 + 0x10);
          uVar1 = *(byte *)(lVar7 + -1) + 1;
          *(char *)(lVar7 + -1) = (char)uVar1;
          if ((((uVar1 >> 8 != 0) &&
               (uVar1 = *(byte *)(lVar7 + -2) + 1, *(char *)(lVar7 + -2) = (char)uVar1,
               uVar1 >> 8 != 0)) &&
              (uVar1 = *(byte *)(lVar7 + -3) + 1, *(char *)(lVar7 + -3) = (char)uVar1,
              uVar1 >> 8 != 0)) &&
             (((uVar1 = *(byte *)(lVar7 + -4) + 1, *(char *)(lVar7 + -4) = (char)uVar1,
               uVar1 >> 8 != 0 &&
               (uVar1 = *(byte *)(lVar7 + -5) + 1, *(char *)(lVar7 + -5) = (char)uVar1,
               uVar1 >> 8 != 0)) &&
              ((uVar1 = *(byte *)(lVar7 + -6) + 1, *(char *)(lVar7 + -6) = (char)uVar1,
               uVar1 >> 8 != 0 &&
               (uVar1 = *(byte *)(lVar7 + -7) + 1, *(char *)(lVar7 + -7) = (char)uVar1,
               uVar1 >> 8 != 0)))))) {
            *(char *)(lVar7 + -8) = *(char *)(lVar7 + -8) + '\x01';
          }
          goto LAB_0046e824;
        }
        goto LAB_0046e77c;
      }
LAB_0046e778:
      uVar5 = 0;
    }
LAB_0046e77c:
    uVar8 = 0;
LAB_0046e780:
    *(undefined4 *)(param_1 + 0x50) = 3;
    *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
    *param_3 = uVar8;
    return uVar5;
  }
  if (((*(byte *)(param_1 + 0x54) >> 2 & 1) == 0) || (iVar4 = *(int *)(param_1 + 0x50), iVar4 == 3))
  goto LAB_0046e7b8;
  lVar7 = *(long *)(param_1 + 0xf0);
  if (iVar4 == 1) {
LAB_0046e8e0:
    uVar5 = (**(code **)(lVar7 + 8))(param_1,param_1 + 0x55,*(undefined8 *)(param_1 + 0x10));
    if ((int)uVar5 == 0) goto LAB_0046eaa8;
    *(undefined4 *)(param_1 + 0x50) = 2;
  }
  else if (iVar4 == 0) {
    if (((((*(byte *)(param_1 + 0x54) & 1) == 0) ||
         (uVar8 = *(ulong *)(param_1 + 0x10), uVar8 < 0xc)) || ((int)uVar8 < 1)) ||
       (iVar4 = FUN_003edc30(*(undefined8 *)(param_1 + 0xe8),param_1 + 0x55,uVar8 & 0x7fffffff,0),
       iVar4 < 1)) goto LAB_0046e7b8;
    *(undefined4 *)(param_1 + 0x50) = 1;
    *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 8;
    goto LAB_0046e8e0;
  }
  if (param_4 == (undefined8 *)0x0) {
    if (((*(byte *)(param_1 + 0x54) & 1) == 0) && (*(long *)(param_1 + 0x18) == -1)) {
LAB_0046e7b8:
      *param_3 = 0;
      return 0;
    }
    uVar5 = (**(code **)(lVar7 + 0x20))(param_1,param_1 + 0xd5);
    if ((int)uVar5 != 0) {
      param_5 = 0;
      *(undefined4 *)(param_1 + 0x50) = 3;
LAB_0046ea8c:
      *param_3 = param_5;
      return 1;
    }
  }
  else {
    if (param_2 == (undefined8 *)0x0) {
      uVar5 = (**(code **)(lVar7 + 0x10))(param_1,param_4,param_5);
      iVar4 = (int)uVar5;
    }
    else {
      uVar5 = (**(code **)(lVar7 + 0x18))(param_1,param_4,param_5,param_2);
      iVar4 = (int)uVar5;
    }
    if (iVar4 != 0) goto LAB_0046ea8c;
  }
LAB_0046eaa8:
  *param_3 = 0;
  return uVar5;
}


// ===== 0046ead4  FUN_0046ead4 =====

undefined8 FUN_0046ead4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0043eb70();
  if (((int)uVar1 != 0) && (uVar1 = FUN_0046e734(param_1,param_2,param_3,0,0), (int)uVar1 != 0)) {
    uVar1 = 1;
    *param_3 = 0;
  }
  return uVar1;
}


// ===== 0046eb2c  FUN_0046eb2c =====

undefined8
FUN_0046eb2c(undefined8 param_1,undefined8 param_2,ulong *param_3,ulong param_4,undefined8 param_5,
            ulong param_6)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0043eb70();
  if ((int)uVar1 != 0) {
    if (param_4 < param_6) {
      FUN_00379868();
      FUN_0037995c("providers/implementations/ciphers/ciphercommon_gcm.c",0x178,"ossl_gcm_cipher");
      FUN_00379a5c(0x39,0x6a,0);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_0046e734(param_1,param_2,param_3,param_5,param_6);
      if ((int)uVar1 != 0) {
        *param_3 = param_6;
        return 1;
      }
    }
  }
  return uVar1;
}


// ===== 0046ebe4  FUN_0046ebe4 =====

undefined4 FUN_0046ebe4(undefined1 *param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  
  switch(*param_1) {
  case 0x61:
    bVar1 = param_1[1];
    if (bVar1 < 100) {
      if (bVar1 == 0) {
        return 0xad;
      }
      if ((bVar1 == 99) && (iVar4 = strcmp("vp-info",param_1 + 2), iVar4 == 0)) {
        return 0x8a;
      }
    }
    else if (bVar1 == 100) {
      if (param_1[2] == '\0') {
        return 0x69;
      }
    }
    else if (bVar1 == 0x65) {
      iVar4 = strcmp("ad",param_1 + 2);
      if (iVar4 == 0) {
        return 0x1f;
      }
    }
    else if (bVar1 == 0x6c) {
      if (param_1[2] == 'i') {
        iVar4 = strcmp("as",param_1 + 3);
        if (iVar4 == 0) {
          return 0x11c;
        }
      }
      else if (param_1[2] == 'g') {
        cVar2 = param_1[3];
        if (cVar2 == 'o') {
          iVar4 = strcmp("rithm-id",param_1 + 4);
          if (iVar4 == 0) {
            return 0x117;
          }
        }
        else if (cVar2 == 'i') {
          iVar4 = strcmp("d-absent",param_1 + 4);
          if (iVar4 == 0) {
            return 0x47;
          }
        }
        else if ((cVar2 == '_') && (iVar4 = strcmp("id_param",param_1 + 4), iVar4 == 0)) {
          return 0x28;
        }
      }
    }
    break;
  case 0x62:
    bVar1 = param_1[1];
    if (bVar1 < 0x69) {
      if (bVar1 == 0) {
        return 0xae;
      }
      if ((bVar1 == 0x61) && (iVar4 = strcmp("sis-type",param_1 + 2), iVar4 == 0)) {
        return 0xb4;
      }
    }
    else if (bVar1 == 0x69) {
      iVar4 = strcmp("ts",param_1 + 2);
      if (iVar4 == 0) {
        return 0xa6;
      }
    }
    else if (bVar1 == 0x6c) {
      if (((param_1[2] == 'o') && (param_1[3] == 'c')) && (param_1[4] == 'k')) {
        cVar2 = param_1[5];
        if (cVar2 == 's') {
          iVar4 = strcmp("ize",param_1 + 6);
          if (iVar4 == 0) {
            return 0x29;
          }
        }
        else if (cVar2 == '_') {
          iVar4 = strcmp("padding",param_1 + 6);
          if (iVar4 == 0) {
            return 0x92;
          }
        }
        else if ((cVar2 == '-') && (iVar4 = strcmp("size",param_1 + 6), iVar4 == 0)) {
          return 0x9b;
        }
      }
    }
    else if ((bVar1 == 0x75) && (iVar4 = strcmp("ildinfo",param_1 + 2), iVar4 == 0)) {
      return 0x105;
    }
    break;
  case 99:
    bVar1 = param_1[1];
    if (bVar1 < 0x6f) {
      if (bVar1 == 0x2d) {
        iVar4 = strcmp("rounds",param_1 + 2);
        if (iVar4 == 0) {
          return 0x9d;
        }
      }
      else if (bVar1 == 0x65) {
        iVar4 = strcmp("kalg",param_1 + 2);
        if (iVar4 == 0) {
          return 0x6d;
        }
      }
      else if ((bVar1 == 0x69) && (iVar4 = strcmp("pher",param_1 + 2), iVar4 == 0)) {
        return 0;
      }
    }
    else if (bVar1 == 0x6f) {
      if (param_1[2] == 'n') {
        if (param_1[3] == 't') {
          iVar4 = strcmp("ext-string",param_1 + 4);
          if (iVar4 == 0) {
            return 0x118;
          }
        }
        else if ((param_1[3] == 's') && (iVar4 = strcmp("tant",param_1 + 4), iVar4 == 0)) {
          return 0x6e;
        }
      }
      else if ((param_1[2] == 'f') && (iVar4 = strcmp("actor",param_1 + 3), iVar4 == 0)) {
        return 0xb5;
      }
    }
    else if (bVar1 == 0x74) {
      if (param_1[2] == 's') {
        if (param_1[3] == '\0') {
          return 0x2a;
        }
        if ((param_1[3] == '_') && (iVar4 = strcmp("mode",param_1 + 4), iVar4 == 0)) {
          return 0x2b;
        }
      }
    }
    else if ((((bVar1 == 0x75) && (param_1[2] == 's')) && (param_1[3] == 't')) &&
            ((param_1[4] == 'o' && (param_1[5] == 'm')))) {
      if (param_1[6] == '\0') {
        return 0x9c;
      }
      if ((param_1[6] == '-') && (iVar4 = strcmp("iv",param_1 + 7), iVar4 == 0)) {
        return 0x2c;
      }
    }
    break;
  case 100:
    bVar1 = param_1[1];
    if (bVar1 < 0x65) {
      if (bVar1 == 0) {
        return 0xdf;
      }
      if (bVar1 == 0x2d) {
        iVar4 = strcmp("rounds",param_1 + 2);
        if (iVar4 == 0) {
          return 0xa0;
        }
      }
      else if (((bVar1 == 0x61) && (param_1[2] == 't')) && (param_1[3] == 'a')) {
        if (param_1[4] == '\0') {
          return 0x6f;
        }
        if (param_1[4] == '-') {
          if (param_1[5] == 't') {
            iVar4 = strcmp("ype",param_1 + 6);
            if (iVar4 == 0) {
              return 0xa3;
            }
          }
          else if ((param_1[5] == 's') && (iVar4 = strcmp("tructure",param_1 + 6), iVar4 == 0)) {
            return 0xa2;
          }
        }
      }
    }
    else if (bVar1 < 0x69) {
      if (bVar1 == 0x65) {
        cVar2 = param_1[2];
        if (cVar2 == 's') {
          iVar4 = strcmp("c",param_1 + 3);
          if (iVar4 == 0) {
            return 0xa4;
          }
        }
        else if (cVar2 == 'f') {
          iVar4 = strcmp("ault-digest",param_1 + 3);
          if (iVar4 == 0) {
            return 0xa7;
          }
        }
        else if ((cVar2 == 'c') && (iVar4 = strcmp("oded-from-explicit",param_1 + 3), iVar4 == 0)) {
          return 0xb6;
        }
      }
      else if ((bVar1 == 0x68) && (iVar4 = strcmp("kem-ikm",param_1 + 2), iVar4 == 0)) {
        return 0xa8;
      }
    }
    else if (bVar1 == 0x69) {
      if (param_1[2] == 's') {
        iVar4 = strcmp("tid",param_1 + 3);
        if (iVar4 == 0) {
          return 0xac;
        }
      }
      else if (((param_1[2] == 'g') && (param_1[3] == 'e')) &&
              ((param_1[4] == 's' && (param_1[5] == 't')))) {
        if (param_1[6] == '\0') {
          return 1;
        }
        if (param_1[6] == '-') {
          bVar1 = param_1[7];
          if (bVar1 < 0x70) {
            if (bVar1 == 0x6e) {
              iVar4 = strcmp("oinit",param_1 + 8);
              if (iVar4 == 0) {
                return 0x9e;
              }
            }
            else if ((bVar1 == 0x6f) && (iVar4 = strcmp("neshot",param_1 + 8), iVar4 == 0)) {
              return 0x9f;
            }
          }
          else if (bVar1 == 0x70) {
            iVar4 = strcmp("rops",param_1 + 8);
            if (iVar4 == 0) {
              return 6;
            }
          }
          else if ((bVar1 == 0x73) && (iVar4 = strcmp("ize",param_1 + 8), iVar4 == 0)) {
            return 0xab;
          }
        }
      }
    }
    else if ((bVar1 == 0x72) && (iVar4 = strcmp("bg-no-trunc-md",param_1 + 2), iVar4 == 0)) {
      return 0x109;
    }
    break;
  case 0x65:
    bVar1 = param_1[1];
    if (bVar1 < 99) {
      if (bVar1 == 0) {
        return 0xe0;
      }
      if ((bVar1 == 0x61) && (iVar4 = strcmp("rly_clean",param_1 + 2), iVar4 == 0)) {
        return 0x70;
      }
    }
    else if (bVar1 == 99) {
      iVar4 = strcmp("dh-cofactor-mode",param_1 + 2);
      if (iVar4 == 0) {
        return 0x60;
      }
    }
    else if (bVar1 == 0x6e) {
      cVar2 = param_1[2];
      if (cVar2 == 't') {
        if ((((param_1[3] == 'r') && (param_1[4] == 'o')) && (param_1[5] == 'p')) &&
           (param_1[6] == 'y')) {
          if (param_1[7] == '\0') {
            return 0x71;
          }
          if ((param_1[7] == '_') && (iVar4 = strcmp("required",param_1 + 8), iVar4 == 0)) {
            return 0x4e;
          }
        }
      }
      else if (cVar2 == 'g') {
        iVar4 = strcmp("ine",param_1 + 3);
        if (iVar4 == 0) {
          return 2;
        }
      }
      else if (cVar2 == 'c') {
        if (param_1[3] == 'r') {
          iVar4 = strcmp("ypt-level",param_1 + 4);
          if (iVar4 == 0) {
            return 0x5e;
          }
        }
        else if ((param_1[3] == 'o') && (param_1[4] == 'd')) {
          if (param_1[5] == 'i') {
            iVar4 = strcmp("ng",param_1 + 6);
            if (iVar4 == 0) {
              return 0xb7;
            }
          }
          else if ((param_1[5] == 'e') && (iVar4 = strcmp("d-pub-key",param_1 + 6), iVar4 == 0)) {
            return 0xc0;
          }
        }
      }
    }
    else if ((bVar1 == 0x78) && (iVar4 = strcmp("pect",param_1 + 2), iVar4 == 0)) {
      return 0x11d;
    }
    break;
  case 0x66:
    if (param_1[1] == 'i') {
      if (param_1[2] == 'n') {
        iVar4 = strcmp("gerprint",param_1 + 3);
        if (iVar4 == 0) {
          return 0x11e;
        }
      }
      else if ((param_1[2] == 'e') && (iVar4 = strcmp("ld-type",param_1 + 3), iVar4 == 0)) {
        return 0xb8;
      }
    }
    break;
  case 0x67:
    bVar1 = param_1[1];
    if (bVar1 < 0x69) {
      if (bVar1 == 0) {
        return 0xc2;
      }
      if (((bVar1 == 0x65) && (param_1[2] == 'n')) &&
         ((param_1[3] == 'e' &&
          (((param_1[4] == 'r' && (param_1[5] == 'a')) && (param_1[6] == 't')))))) {
        if (param_1[7] == 'o') {
          iVar4 = strcmp("r",param_1 + 8);
          if (iVar4 == 0) {
            return 0xb9;
          }
        }
        else if ((param_1[7] == 'e') && (param_1[8] == '\0')) {
          return 0x111;
        }
      }
    }
    else if (bVar1 == 0x69) {
      iVar4 = strcmp("ndex",param_1 + 2);
      if (iVar4 == 0) {
        return 0xc3;
      }
    }
    else if ((((bVar1 == 0x72) && (param_1[2] == 'o')) && (param_1[3] == 'u')) &&
            (param_1[4] == 'p')) {
      if (param_1[5] == '\0') {
        return 0xcc;
      }
      if ((param_1[5] == '-') && (iVar4 = strcmp("check",param_1 + 6), iVar4 == 0)) {
        return 0xba;
      }
    }
    break;
  case 0x68:
    if (param_1[1] == 'i') {
      iVar4 = strcmp("ndex",param_1 + 2);
      if (iVar4 == 0) {
        return 0xc4;
      }
    }
    else if ((param_1[1] == 'a') && (iVar4 = strcmp("s-randkey",param_1 + 2), iVar4 == 0)) {
      return 0x2d;
    }
    break;
  case 0x69:
    bVar1 = param_1[1];
    if (bVar1 < 0x6e) {
      if (bVar1 == 100) {
        if (param_1[2] == '\0') {
          return 0x7c;
        }
      }
      else if (bVar1 == 0x6b) {
        iVar4 = strcmp("me",param_1 + 2);
        if (iVar4 == 0) {
          return 0x90;
        }
      }
      else if ((bVar1 == 0x6d) && (iVar4 = strcmp("plicit-rejection",param_1 + 2), iVar4 == 0)) {
        return 5;
      }
    }
    else if (bVar1 == 0x6e) {
      bVar1 = param_1[2];
      if (bVar1 < 0x70) {
        if (bVar1 == 99) {
          iVar4 = strcmp("lude-public",param_1 + 3);
          if (iVar4 == 0) {
            return 0xbb;
          }
        }
        else if ((bVar1 == 0x66) && (iVar4 = strcmp("o",param_1 + 3), iVar4 == 0)) {
          return 0x73;
        }
      }
      else if (bVar1 == 0x70) {
        iVar4 = strcmp("ut-type",param_1 + 3);
        if (iVar4 == 0) {
          return 0x11f;
        }
      }
      else if ((bVar1 == 0x73) && (iVar4 = strcmp("tance",param_1 + 3), iVar4 == 0)) {
        return 0x119;
      }
    }
    else if (bVar1 == 0x74) {
      if ((param_1[2] == 'e') && (param_1[3] == 'r')) {
        if (param_1[4] == '\0') {
          return 0x74;
        }
        if ((param_1[4] == 'a') && (iVar4 = strcmp("tion",param_1 + 5), iVar4 == 0)) {
          return 0x67;
        }
      }
    }
    else if (bVar1 == 0x76) {
      if (param_1[2] == '\0') {
        return 0x2e;
      }
      if ((param_1[2] == 'l') && (iVar4 = strcmp("en",param_1 + 3), iVar4 == 0)) {
        return 0x2f;
      }
    }
    break;
  case 0x6a:
    if (param_1[1] == '\0') {
      return 0xc1;
    }
    break;
  case 0x6b:
    bVar1 = param_1[1];
    if (bVar1 < 0x61) {
      if (bVar1 == 0x31) {
        if (param_1[2] == '\0') {
          return 0xb0;
        }
      }
      else if (bVar1 == 0x32) {
        if (param_1[2] == '\0') {
          return 0xb1;
        }
      }
      else if ((bVar1 == 0x33) && (param_1[2] == '\0')) {
        return 0xb2;
      }
    }
    else if (bVar1 == 0x61) {
      iVar4 = strcmp("t",param_1 + 2);
      if (iVar4 == 0) {
        return 0x11a;
      }
    }
    else if (bVar1 == 100) {
      if ((param_1[2] == 'f') && (param_1[3] == '-')) {
        bVar1 = param_1[4];
        if (bVar1 < 0x74) {
          if (bVar1 == 100) {
            if ((((param_1[5] == 'i') && (param_1[6] == 'g')) && (param_1[7] == 'e')) &&
               ((param_1[8] == 's' && (param_1[9] == 't')))) {
              if (param_1[10] == '\0') {
                return 0x61;
              }
              if ((param_1[10] == '-') && (iVar4 = strcmp("props",param_1 + 0xb), iVar4 == 0)) {
                return 0x62;
              }
            }
          }
          else if ((bVar1 == 0x6f) && (iVar4 = strcmp("utlen",param_1 + 5), iVar4 == 0)) {
            return 99;
          }
        }
        else if (bVar1 == 0x74) {
          iVar4 = strcmp("ype",param_1 + 5);
          if (iVar4 == 0) {
            return 100;
          }
        }
        else if ((bVar1 == 0x75) && (iVar4 = strcmp("km",param_1 + 5), iVar4 == 0)) {
          return 0x65;
        }
      }
    }
    else if ((bVar1 == 0x65) && (param_1[2] == 'y')) {
      cVar2 = param_1[3];
      if (cVar2 == '\0') {
        return 0x78;
      }
      if (cVar2 == 'l') {
        iVar4 = strcmp("en",param_1 + 4);
        if (iVar4 == 0) {
          return 0x30;
        }
      }
      else if ((cVar2 == 'b') && (iVar4 = strcmp("its",param_1 + 4), iVar4 == 0)) {
        return 0x35;
      }
    }
    break;
  case 0x6c:
    if (param_1[1] == 'a') {
      if (param_1[2] == 'n') {
        iVar4 = strcmp("es",param_1 + 3);
        if (iVar4 == 0) {
          return 0x6a;
        }
      }
      else if ((param_1[2] == 'b') && (iVar4 = strcmp("el",param_1 + 3), iVar4 == 0)) {
        return 0x79;
      }
    }
    break;
  case 0x6d:
    bVar1 = param_1[1];
    if (bVar1 < 0x67) {
      if (bVar1 == 0) {
        return 0xaf;
      }
      if (bVar1 == 0x61) {
        cVar2 = param_1[2];
        if (cVar2 == 'x') {
          bVar1 = param_1[3];
          if (bVar1 < 0x69) {
            if (bVar1 == 0x2d) {
              iVar4 = strcmp("size",param_1 + 4);
              if (iVar4 == 0) {
                return 0xcf;
              }
            }
            else if (bVar1 == 0x5f) {
              bVar1 = param_1[4];
              if (bVar1 < 0x6e) {
                if (bVar1 == 0x61) {
                  iVar4 = strcmp("dinlen",param_1 + 5);
                  if (iVar4 == 0) {
                    return 0x4f;
                  }
                }
                else if (bVar1 == 0x65) {
                  if (param_1[5] == 'n') {
                    iVar4 = strcmp("tropylen",param_1 + 6);
                    if (iVar4 == 0) {
                      return 0x50;
                    }
                  }
                  else if ((param_1[5] == 'a') &&
                          (iVar4 = strcmp("rly_data",param_1 + 6), iVar4 == 0)) {
                    return 0x93;
                  }
                }
                else if ((bVar1 == 0x66) && (iVar4 = strcmp("rag_len",param_1 + 5), iVar4 == 0)) {
                  return 0x94;
                }
              }
              else if (bVar1 == 0x6e) {
                iVar4 = strcmp("oncelen",param_1 + 5);
                if (iVar4 == 0) {
                  return 0x52;
                }
              }
              else if (bVar1 == 0x70) {
                iVar4 = strcmp("erslen",param_1 + 5);
                if (iVar4 == 0) {
                  return 0x53;
                }
              }
              else if ((bVar1 == 0x72) && (iVar4 = strcmp("equest",param_1 + 5), iVar4 == 0)) {
                return 0x112;
              }
            }
          }
          else if (bVar1 == 0x69) {
            iVar4 = strcmp("um_length",param_1 + 4);
            if (iVar4 == 0) {
              return 0x51;
            }
          }
          else if ((bVar1 == 0x6d) && (iVar4 = strcmp("em_bytes",param_1 + 4), iVar4 == 0)) {
            return 0x80;
          }
        }
        else if (cVar2 == 'n') {
          iVar4 = strcmp("datory-digest",param_1 + 3);
          if (iVar4 == 0) {
            return 0xcd;
          }
        }
        else if (cVar2 == 'c') {
          cVar2 = param_1[3];
          if (cVar2 == '\0') {
            return 3;
          }
          if (cVar2 == 'l') {
            iVar4 = strcmp("en",param_1 + 4);
            if (iVar4 == 0) {
              return 0x7a;
            }
          }
          else if ((cVar2 == 'k') && (iVar4 = strcmp("ey",param_1 + 4), iVar4 == 0)) {
            return 0x20;
          }
        }
      }
      else if ((bVar1 == 0x65) && (iVar4 = strcmp("mcost",param_1 + 2), iVar4 == 0)) {
        return 0x6b;
      }
    }
    else if (bVar1 == 0x67) {
      if (param_1[2] == 'f') {
        if (param_1[3] == '\0') {
          return 0xce;
        }
        if ((param_1[3] == '1') && (param_1[4] == '-')) {
          if (param_1[5] == 'p') {
            iVar4 = strcmp("roperties",param_1 + 6);
            if (iVar4 == 0) {
              return 0xd1;
            }
          }
          else if ((param_1[5] == 'd') && (iVar4 = strcmp("igest",param_1 + 6), iVar4 == 0)) {
            return 0xd0;
          }
        }
      }
    }
    else if (bVar1 == 0x69) {
      if (param_1[2] == 'n') {
        if (param_1[3] == 'i') {
          iVar4 = strcmp("um_length",param_1 + 4);
          if (iVar4 == 0) {
            return 0x55;
          }
        }
        else if (param_1[3] == '_') {
          if (param_1[4] == 'n') {
            iVar4 = strcmp("oncelen",param_1 + 5);
            if (iVar4 == 0) {
              return 0x56;
            }
          }
          else if ((param_1[4] == 'e') && (iVar4 = strcmp("ntropylen",param_1 + 5), iVar4 == 0)) {
            return 0x54;
          }
        }
      }
      else if ((param_1[2] == 'c') && (iVar4 = strcmp("alg",param_1 + 3), iVar4 == 0)) {
        return 0x48;
      }
    }
    else if ((bVar1 == 0x6f) && (param_1[2] == 'd')) {
      if (param_1[3] == 'u') {
        iVar4 = strcmp("le-filename",param_1 + 4);
        if (iVar4 == 0) {
          return 0x106;
        }
      }
      else if ((param_1[3] == 'e') && (param_1[4] == '\0')) {
        return 0x31;
      }
    }
    break;
  case 0x6e:
    bVar1 = param_1[1];
    if (bVar1 < 0x6f) {
      if (bVar1 == 0) {
        return 0x81;
      }
      if ((bVar1 == 0x61) && (iVar4 = strcmp("me",param_1 + 2), iVar4 == 0)) {
        return 0x10a;
      }
    }
    else if (bVar1 == 0x6f) {
      if (((param_1[2] == 'n') && (param_1[3] == 'c')) && (param_1[4] == 'e')) {
        if (param_1[5] == '\0') {
          return 0x72;
        }
        if ((param_1[5] == '-') && (iVar4 = strcmp("type",param_1 + 6), iVar4 == 0)) {
          return 0x11b;
        }
      }
    }
    else if ((bVar1 == 0x75) && (iVar4 = strcmp("m",param_1 + 2), iVar4 == 0)) {
      return 0x32;
    }
    break;
  case 0x6f:
    cVar2 = param_1[1];
    if (cVar2 == 'r') {
      iVar4 = strcmp("der",param_1 + 2);
      if (iVar4 == 0) {
        return 0xbc;
      }
    }
    else if (cVar2 == 'p') {
      if (param_1[2] == 't') {
        iVar4 = strcmp("ions",param_1 + 3);
        if (iVar4 == 0) {
          return 0x95;
        }
      }
      else if (param_1[2] == 'e') {
        if (param_1[3] == 'r') {
          iVar4 = strcmp("ation",param_1 + 4);
          if (iVar4 == 0) {
            return 0x91;
          }
        }
        else if ((param_1[3] == 'n') && (iVar4 = strcmp("ssl-version",param_1 + 4), iVar4 == 0)) {
          return 0x108;
        }
      }
    }
    else if ((cVar2 == 'a') && (iVar4 = strcmp("ep-label",param_1 + 2), iVar4 == 0)) {
      return 7;
    }
    break;
  case 0x70:
    bVar1 = param_1[1];
    if (bVar1 < 99) {
      if (bVar1 < 0x32) {
        if (bVar1 == 0) {
          return 0x82;
        }
        if ((bVar1 == 0x31) && (param_1[2] == '\0')) {
          return 0xf9;
        }
      }
      else if (bVar1 == 0x32) {
        if (param_1[2] == '\0') {
          return 0xfa;
        }
      }
      else if (bVar1 == 0x61) {
        cVar2 = param_1[2];
        if (cVar2 == 's') {
          iVar4 = strcmp("s",param_1 + 3);
          if (iVar4 == 0) {
            return 0x7b;
          }
        }
        else if (cVar2 == 'r') {
          if ((param_1[3] == 't') && (param_1[4] == 'y')) {
            if (param_1[5] == 'v') {
              iVar4 = strcmp("-info",param_1 + 6);
              if (iVar4 == 0) {
                return 0x8c;
              }
            }
            else if ((param_1[5] == 'u') && (iVar4 = strcmp("-info",param_1 + 6), iVar4 == 0)) {
              return 0x8b;
            }
          }
        }
        else if (cVar2 == 'd') {
          cVar2 = param_1[3];
          if (cVar2 == '\0') {
            return 0x66;
          }
          if (cVar2 == 'd') {
            iVar4 = strcmp("ing",param_1 + 4);
            if (iVar4 == 0) {
              return 0x33;
            }
          }
          else if (cVar2 == '-') {
            if (param_1[4] == 't') {
              iVar4 = strcmp("ype",param_1 + 5);
              if (iVar4 == 0) {
                return 0x49;
              }
            }
            else if ((param_1[4] == 'm') && (iVar4 = strcmp("ode",param_1 + 5), iVar4 == 0)) {
              return 0xd2;
            }
          }
        }
      }
      else if ((bVar1 == 0x62) && (iVar4 = strcmp("its",param_1 + 2), iVar4 == 0)) {
        return 0xc5;
      }
    }
    else if (bVar1 < 0x6f) {
      if (bVar1 == 99) {
        iVar4 = strcmp("ounter",param_1 + 2);
        if (iVar4 == 0) {
          return 0xc6;
        }
      }
      else if ((bVar1 == 0x6b) && (iVar4 = strcmp("cs5",param_1 + 2), iVar4 == 0)) {
        return 0x7d;
      }
    }
    else if (bVar1 == 0x6f) {
      if (param_1[2] == 't') {
        iVar4 = strcmp("ential",param_1 + 3);
        if (iVar4 == 0) {
          return 0x68;
        }
      }
      else if ((param_1[2] == 'i') && (iVar4 = strcmp("nt-format",param_1 + 3), iVar4 == 0)) {
        return 0xbd;
      }
    }
    else if (bVar1 == 0x72) {
      cVar2 = param_1[2];
      if (cVar2 == 'o') {
        if (param_1[3] == 'v') {
          iVar4 = strcmp("ider-name",param_1 + 4);
          if (iVar4 == 0) {
            return 0x107;
          }
        }
        else if ((param_1[3] == 'p') && (iVar4 = strcmp("erties",param_1 + 4), iVar4 == 0)) {
          return 4;
        }
      }
      else if (cVar2 == 'i') {
        if (param_1[3] == 'v') {
          if (param_1[4] == '\0') {
            return 0xd3;
          }
          if ((param_1[4] == '_') && (iVar4 = strcmp("len",param_1 + 5), iVar4 == 0)) {
            return 0xaa;
          }
        }
        else if ((param_1[3] == 'm') && (iVar4 = strcmp("es",param_1 + 4), iVar4 == 0)) {
          return 0xf7;
        }
      }
      else if (cVar2 == 'e') {
        if (param_1[3] == 'f') {
          iVar4 = strcmp("ix",param_1 + 4);
          if (iVar4 == 0) {
            return 0x7e;
          }
        }
        else if ((param_1[3] == 'd') &&
                (iVar4 = strcmp("iction_resistance",param_1 + 4), iVar4 == 0)) {
          return 0x57;
        }
      }
    }
    else if ((bVar1 == 0x75) && (iVar4 = strcmp("b",param_1 + 2), iVar4 == 0)) {
      return 0xd4;
    }
    break;
  case 0x71:
    bVar1 = param_1[1];
    if (bVar1 < 0x62) {
      if (bVar1 == 0) {
        return 199;
      }
      if (bVar1 == 0x31) {
        if (param_1[2] == '\0') {
          return 0xfb;
        }
      }
      else if ((bVar1 == 0x32) && (param_1[2] == '\0')) {
        return 0xfc;
      }
    }
    else if (bVar1 == 0x62) {
      iVar4 = strcmp("its",param_1 + 2);
      if (iVar4 == 0) {
        return 200;
      }
    }
    else if (bVar1 == 0x78) {
      if (param_1[2] == '\0') {
        return 0xbe;
      }
    }
    else if ((bVar1 == 0x79) && (param_1[2] == '\0')) {
      return 0xbf;
    }
    break;
  case 0x72:
    bVar1 = param_1[1];
    if (bVar1 < 0x65) {
      if (bVar1 == 0) {
        return 0x75;
      }
      if (((bVar1 == 0x61) && (param_1[2] == 'n')) && (param_1[3] == 'd')) {
        if (param_1[4] == 'o') {
          iVar4 = strcmp("m_data",param_1 + 5);
          if (iVar4 == 0) {
            return 0x58;
          }
        }
        else if ((param_1[4] == 'k') && (iVar4 = strcmp("ey",param_1 + 5), iVar4 == 0)) {
          return 0x34;
        }
      }
    }
    else if (bVar1 == 0x65) {
      cVar2 = param_1[2];
      if (cVar2 == 's') {
        if (((param_1[3] == 'e') && (param_1[4] == 'e')) &&
           ((param_1[5] == 'd' && (param_1[6] == '_')))) {
          cVar2 = param_1[7];
          if (cVar2 == 't') {
            if (((param_1[8] == 'i') && (param_1[9] == 'm')) && (param_1[10] == 'e')) {
              if (param_1[0xb] == '\0') {
                return 0x5b;
              }
              if ((param_1[0xb] == '_') && (iVar4 = strcmp("interval",param_1 + 0xc), iVar4 == 0)) {
                return 0x5c;
              }
            }
          }
          else if (cVar2 == 'r') {
            iVar4 = strcmp("equests",param_1 + 8);
            if (iVar4 == 0) {
              return 0x5a;
            }
          }
          else if ((cVar2 == 'c') && (iVar4 = strcmp("ounter",param_1 + 8), iVar4 == 0)) {
            return 0x59;
          }
        }
      }
      else if (cVar2 == 'f') {
        iVar4 = strcmp("erence",param_1 + 3);
        if (iVar4 == 0) {
          return 0xa5;
        }
      }
      else if (((cVar2 == 'a') && (param_1[3] == 'd')) && (param_1[4] == '_')) {
        if (param_1[5] == 'b') {
          iVar4 = strcmp("uffer_len",param_1 + 6);
          if (iVar4 == 0) {
            return 0x9a;
          }
        }
        else if ((param_1[5] == 'a') && (iVar4 = strcmp("head",param_1 + 6), iVar4 == 0)) {
          return 0x96;
        }
      }
    }
    else if (bVar1 == 0x6f) {
      iVar4 = strcmp("unds",param_1 + 2);
      if (iVar4 == 0) {
        return 0x36;
      }
    }
    else if (((bVar1 == 0x73) && (param_1[2] == 'a')) && (param_1[3] == '-')) {
      cVar2 = param_1[4];
      if (cVar2 == 'f') {
        if ((((param_1[5] == 'a') && (param_1[6] == 'c')) && (param_1[7] == 't')) &&
           ((param_1[8] == 'o' && (param_1[9] == 'r')))) {
          bVar1 = param_1[10];
          if (bVar1 < 0x35) {
            if (bVar1 < 0x32) {
              if (bVar1 == 0) {
                return 0xec;
              }
              if (bVar1 == 0x31) {
                if (param_1[0xb] == '\0') {
                  return 0xed;
                }
                if ((param_1[0xb] == '0') && (param_1[0xc] == '\0')) {
                  return 0xee;
                }
              }
            }
            else if (bVar1 == 0x32) {
              if (param_1[0xb] == '\0') {
                return 0xef;
              }
            }
            else if (bVar1 == 0x33) {
              if (param_1[0xb] == '\0') {
                return 0xf0;
              }
            }
            else if ((bVar1 == 0x34) && (param_1[0xb] == '\0')) {
              return 0xf1;
            }
          }
          else if (bVar1 < 0x37) {
            if (bVar1 == 0x35) {
              if (param_1[0xb] == '\0') {
                return 0xf2;
              }
            }
            else if ((bVar1 == 0x36) && (param_1[0xb] == '\0')) {
              return 0xf3;
            }
          }
          else if (bVar1 == 0x37) {
            if (param_1[0xb] == '\0') {
              return 0xf4;
            }
          }
          else if (bVar1 == 0x38) {
            if (param_1[0xb] == '\0') {
              return 0xf5;
            }
          }
          else if ((bVar1 == 0x39) && (param_1[0xb] == '\0')) {
            return 0xf6;
          }
        }
      }
      else if (cVar2 == 'e') {
        if ((((param_1[5] == 'x') && (param_1[6] == 'p')) && (param_1[7] == 'o')) &&
           (((param_1[8] == 'n' && (param_1[9] == 'e')) &&
            ((param_1[10] == 'n' && (param_1[0xb] == 't')))))) {
          bVar1 = param_1[0xc];
          if (bVar1 < 0x35) {
            if (bVar1 < 0x32) {
              if (bVar1 == 0) {
                return 0xe1;
              }
              if (bVar1 == 0x31) {
                if (param_1[0xd] == '\0') {
                  return 0xe2;
                }
                if ((param_1[0xd] == '0') && (param_1[0xe] == '\0')) {
                  return 0xe3;
                }
              }
            }
            else if (bVar1 == 0x32) {
              if (param_1[0xd] == '\0') {
                return 0xe4;
              }
            }
            else if (bVar1 == 0x33) {
              if (param_1[0xd] == '\0') {
                return 0xe5;
              }
            }
            else if ((bVar1 == 0x34) && (param_1[0xd] == '\0')) {
              return 0xe6;
            }
          }
          else if (bVar1 < 0x37) {
            if (bVar1 == 0x35) {
              if (param_1[0xd] == '\0') {
                return 0xe7;
              }
            }
            else if ((bVar1 == 0x36) && (param_1[0xd] == '\0')) {
              return 0xe8;
            }
          }
          else if (bVar1 == 0x37) {
            if (param_1[0xd] == '\0') {
              return 0xe9;
            }
          }
          else if (bVar1 == 0x38) {
            if (param_1[0xd] == '\0') {
              return 0xea;
            }
          }
          else if ((bVar1 == 0x39) && (param_1[0xd] == '\0')) {
            return 0xeb;
          }
        }
      }
      else if ((((cVar2 == 'c') && (param_1[5] == 'o')) && (param_1[6] == 'e')) &&
              (((((param_1[7] == 'f' && (param_1[8] == 'f')) &&
                 ((param_1[9] == 'i' && ((param_1[10] == 'c' && (param_1[0xb] == 'i')))))) &&
                (param_1[0xc] == 'e')) && ((param_1[0xd] == 'n' && (param_1[0xe] == 't')))))) {
        bVar1 = param_1[0xf];
        if (bVar1 < 0x35) {
          if (bVar1 < 0x32) {
            if (bVar1 == 0) {
              return 0xd5;
            }
            if ((bVar1 == 0x31) && (param_1[0x10] == '\0')) {
              return 0xd6;
            }
          }
          else if (bVar1 == 0x32) {
            if (param_1[0x10] == '\0') {
              return 0xd7;
            }
          }
          else if (bVar1 == 0x33) {
            if (param_1[0x10] == '\0') {
              return 0xd8;
            }
          }
          else if ((bVar1 == 0x34) && (param_1[0x10] == '\0')) {
            return 0xd9;
          }
        }
        else if (bVar1 < 0x37) {
          if (bVar1 == 0x35) {
            if (param_1[0x10] == '\0') {
              return 0xda;
            }
          }
          else if ((bVar1 == 0x36) && (param_1[0x10] == '\0')) {
            return 0xdb;
          }
        }
        else if (bVar1 == 0x37) {
          if (param_1[0x10] == '\0') {
            return 0xdc;
          }
        }
        else if (bVar1 == 0x38) {
          if (param_1[0x10] == '\0') {
            return 0xdd;
          }
        }
        else if ((bVar1 == 0x39) && (param_1[0x10] == '\0')) {
          return 0xde;
        }
      }
    }
    break;
  case 0x73:
    bVar1 = param_1[1];
    if (bVar1 < 0x70) {
      if (bVar1 == 0x61) {
        cVar2 = param_1[2];
        if (cVar2 == 'v') {
          iVar4 = strcmp("e-parameters",param_1 + 3);
          if (iVar4 == 0) {
            return 0x5f;
          }
        }
        else if (cVar2 == 'l') {
          if (param_1[3] == 't') {
            if (param_1[4] == '\0') {
              return 0x7f;
            }
            if ((param_1[4] == 'l') && (iVar4 = strcmp("en",param_1 + 5), iVar4 == 0)) {
              return 0xf8;
            }
          }
        }
        else if ((cVar2 == 'f') && (iVar4 = strcmp("eprime-generator",param_1 + 3), iVar4 == 0)) {
          return 0xa9;
        }
      }
      else if (bVar1 == 0x65) {
        bVar1 = param_1[2];
        if (bVar1 < 0x72) {
          if (bVar1 == 99) {
            if (param_1[3] == 'u') {
              if ((((param_1[4] == 'r') && (param_1[5] == 'i')) && (param_1[6] == 't')) &&
                 ((param_1[7] == 'y' && (param_1[8] == '-')))) {
                if (param_1[9] == 'c') {
                  iVar4 = strcmp("hecks",param_1 + 10);
                  if (iVar4 == 0) {
                    return 0x10b;
                  }
                }
                else if ((param_1[9] == 'b') && (iVar4 = strcmp("its",param_1 + 10), iVar4 == 0)) {
                  return 0x103;
                }
              }
            }
            else if ((param_1[3] == 'r') && (iVar4 = strcmp("et",param_1 + 4), iVar4 == 0)) {
              return 0x83;
            }
          }
          else if ((bVar1 == 0x65) && (iVar4 = strcmp("d",param_1 + 3), iVar4 == 0)) {
            return 0x84;
          }
        }
        else if (bVar1 == 0x72) {
          iVar4 = strcmp("ial",param_1 + 3);
          if (iVar4 == 0) {
            return 0x120;
          }
        }
        else if ((bVar1 == 0x73) && (iVar4 = strcmp("sion_id",param_1 + 3), iVar4 == 0)) {
          return 0x85;
        }
      }
      else if ((bVar1 == 0x69) && (iVar4 = strcmp("ze",param_1 + 2), iVar4 == 0)) {
        return 0x4a;
      }
    }
    else if (bVar1 < 0x74) {
      if (bVar1 == 0x70) {
        iVar4 = strcmp("eed",param_1 + 2);
        if (iVar4 == 0) {
          return 0x37;
        }
      }
      else if ((bVar1 == 0x73) && (iVar4 = strcmp("l3-ms",param_1 + 2), iVar4 == 0)) {
        return 0x4b;
      }
    }
    else if (bVar1 == 0x74) {
      cVar2 = param_1[2];
      if (cVar2 == 'r') {
        if (param_1[3] == 'e') {
          if (param_1[4] == 'n') {
            iVar4 = strcmp("gth",param_1 + 5);
            if (iVar4 == 0) {
              return 0x114;
            }
          }
          else if ((param_1[4] == 'a') && (iVar4 = strcmp("m_mac",param_1 + 5), iVar4 == 0)) {
            return 0x97;
          }
        }
      }
      else if (cVar2 == 'a') {
        if (param_1[3] == 't') {
          if (param_1[4] == 'u') {
            iVar4 = strcmp("s",param_1 + 5);
            if (iVar4 == 0) {
              return 0x10f;
            }
          }
          else if ((param_1[4] == 'e') && (param_1[5] == '\0')) {
            return 0x113;
          }
        }
      }
      else if (cVar2 == '-') {
        cVar2 = param_1[3];
        if (cVar2 == 't') {
          iVar4 = strcmp("ype",param_1 + 4);
          if (iVar4 == 0) {
            return 0x10e;
          }
        }
        else if (cVar2 == 'p') {
          iVar4 = strcmp("hase",param_1 + 4);
          if (iVar4 == 0) {
            return 0x10d;
          }
        }
        else if ((cVar2 == 'd') && (iVar4 = strcmp("esc",param_1 + 4), iVar4 == 0)) {
          return 0x10c;
        }
      }
    }
    else if (bVar1 == 0x75) {
      if (param_1[2] == 'p') {
        if (((param_1[3] == 'p') && (param_1[4] == '-')) && (param_1[5] == 'p')) {
          if (param_1[6] == 'u') {
            iVar4 = strcmp("binfo",param_1 + 7);
            if (iVar4 == 0) {
              return 0x8e;
            }
          }
          else if ((param_1[6] == 'r') && (iVar4 = strcmp("ivinfo",param_1 + 7), iVar4 == 0)) {
            return 0x8d;
          }
        }
      }
      else if ((param_1[2] == 'b') && (iVar4 = strcmp("ject",param_1 + 3), iVar4 == 0)) {
        return 0x121;
      }
    }
    break;
  case 0x74:
    bVar1 = param_1[1];
    if (bVar1 < 0x6c) {
      if (bVar1 == 0x61) {
        if (param_1[2] == 'g') {
          if (param_1[3] == '\0') {
            return 0x21;
          }
          if ((param_1[3] == 'l') && (iVar4 = strcmp("en",param_1 + 4), iVar4 == 0)) {
            return 0x22;
          }
        }
      }
      else if (bVar1 == 0x65) {
        if (((param_1[2] == 's') && (param_1[3] == 't')) && (param_1[4] == '_')) {
          if (param_1[5] == 'n') {
            iVar4 = strcmp("once",param_1 + 6);
            if (iVar4 == 0) {
              return 0x116;
            }
          }
          else if ((param_1[5] == 'e') && (iVar4 = strcmp("ntropy",param_1 + 6), iVar4 == 0)) {
            return 0x115;
          }
        }
      }
      else if ((bVar1 == 0x68) && (iVar4 = strcmp("reads",param_1 + 2), iVar4 == 0)) {
        return 0x88;
      }
    }
    else if (bVar1 == 0x6c) {
      if (param_1[2] == 's') {
        bVar1 = param_1[3];
        if (bVar1 < 0x61) {
          if (bVar1 == 0x2d) {
            bVar1 = param_1[4];
            if (bVar1 < 0x6d) {
              if (bVar1 == 99) {
                iVar4 = strcmp("lient-version",param_1 + 5);
                if (iVar4 == 0) {
                  return 8;
                }
              }
              else if (bVar1 == 100) {
                iVar4 = strcmp("ata-size",param_1 + 5);
                if (iVar4 == 0) {
                  return 0xa1;
                }
              }
              else if ((((bVar1 == 0x67) && (param_1[5] == 'r')) && (param_1[6] == 'o')) &&
                      (((param_1[7] == 'u' && (param_1[8] == 'p')) && (param_1[9] == '-')))) {
                bVar1 = param_1[10];
                if (bVar1 < 0x6e) {
                  if (bVar1 == 0x61) {
                    iVar4 = strcmp("lg",param_1 + 0xb);
                    if (iVar4 == 0) {
                      return 10;
                    }
                  }
                  else if (bVar1 == 0x69) {
                    if (param_1[0xb] == 's') {
                      iVar4 = strcmp("-kem",param_1 + 0xc);
                      if (iVar4 == 0) {
                        return 0xc;
                      }
                    }
                    else if ((param_1[0xb] == 'd') && (param_1[0xc] == '\0')) {
                      return 0xb;
                    }
                  }
                }
                else if (bVar1 == 0x6e) {
                  if (((param_1[0xb] == 'a') && (param_1[0xc] == 'm')) && (param_1[0xd] == 'e')) {
                    if (param_1[0xe] == '\0') {
                      return 0x11;
                    }
                    if ((param_1[0xe] == '-') &&
                       (iVar4 = strcmp("internal",param_1 + 0xf), iVar4 == 0)) {
                      return 0x12;
                    }
                  }
                }
                else if ((bVar1 == 0x73) && (iVar4 = strcmp("ec-bits",param_1 + 0xb), iVar4 == 0)) {
                  return 0x13;
                }
              }
            }
            else if (bVar1 < 0x73) {
              if (bVar1 == 0x6d) {
                cVar2 = param_1[5];
                if (cVar2 == 'u') {
                  iVar4 = strcmp("lti",param_1 + 6);
                  if (iVar4 == 0) {
                    return 0x38;
                  }
                }
                else if (cVar2 == 'i') {
                  if ((param_1[6] == 'n') && (param_1[7] == '-')) {
                    if (param_1[8] == 't') {
                      iVar4 = strcmp("ls",param_1 + 9);
                      if (iVar4 == 0) {
                        return 0x10;
                      }
                    }
                    else if ((param_1[8] == 'd') && (iVar4 = strcmp("tls",param_1 + 9), iVar4 == 0))
                    {
                      return 0xf;
                    }
                  }
                }
                else if (cVar2 == 'a') {
                  if (param_1[6] == 'x') {
                    if (param_1[7] == '-') {
                      if (param_1[8] == 't') {
                        iVar4 = strcmp("ls",param_1 + 9);
                        if (iVar4 == 0) {
                          return 0xe;
                        }
                      }
                      else if ((param_1[8] == 'd') &&
                              (iVar4 = strcmp("tls",param_1 + 9), iVar4 == 0)) {
                        return 0xd;
                      }
                    }
                  }
                  else if (param_1[6] == 'c') {
                    if (param_1[7] == '\0') {
                      return 0x41;
                    }
                    if ((param_1[7] == '-') && (iVar4 = strcmp("size",param_1 + 8), iVar4 == 0)) {
                      return 0x42;
                    }
                  }
                }
              }
              else if ((bVar1 == 0x6e) &&
                      (iVar4 = strcmp("egotiated-version",param_1 + 5), iVar4 == 0)) {
                return 9;
              }
            }
            else if (bVar1 == 0x73) {
              if ((((param_1[5] == 'i') && (param_1[6] == 'g')) && (param_1[7] == 'a')) &&
                 (((param_1[8] == 'l' && (param_1[9] == 'g')) && (param_1[10] == '-')))) {
                bVar1 = param_1[0xb];
                if (bVar1 < 0x6b) {
                  if (bVar1 == 99) {
                    iVar4 = strcmp("ode-point",param_1 + 0xc);
                    if (iVar4 == 0) {
                      return 0x14;
                    }
                  }
                  else if (bVar1 == 0x68) {
                    if (((param_1[0xc] == 'a') && (param_1[0xd] == 's')) &&
                       ((param_1[0xe] == 'h' && (param_1[0xf] == '-')))) {
                      if (param_1[0x10] == 'o') {
                        iVar4 = strcmp("id",param_1 + 0x11);
                        if (iVar4 == 0) {
                          return 0x16;
                        }
                      }
                      else if ((param_1[0x10] == 'n') &&
                              (iVar4 = strcmp("ame",param_1 + 0x11), iVar4 == 0)) {
                        return 0x15;
                      }
                    }
                  }
                  else if ((bVar1 == 0x69) && (iVar4 = strcmp("ana-name",param_1 + 0xc), iVar4 == 0)
                          ) {
                    return 0x17;
                  }
                }
                else if (bVar1 < 0x6f) {
                  if (bVar1 == 0x6b) {
                    if (((((param_1[0xc] == 'e') && (param_1[0xd] == 'y')) && (param_1[0xe] == 't'))
                        && ((param_1[0xf] == 'y' && (param_1[0x10] == 'p')))) &&
                       (param_1[0x11] == 'e')) {
                      if (param_1[0x12] == '\0') {
                        return 0x18;
                      }
                      if ((param_1[0x12] == '-') &&
                         (iVar4 = strcmp("oid",param_1 + 0x13), iVar4 == 0)) {
                        return 0x19;
                      }
                    }
                  }
                  else if ((bVar1 == 0x6e) && (iVar4 = strcmp("ame",param_1 + 0xc), iVar4 == 0)) {
                    return 0x1a;
                  }
                }
                else if (bVar1 == 0x6f) {
                  iVar4 = strcmp("id",param_1 + 0xc);
                  if (iVar4 == 0) {
                    return 0x1b;
                  }
                }
                else if (bVar1 == 0x73) {
                  if (param_1[0xc] == 'i') {
                    if ((param_1[0xd] == 'g') && (param_1[0xe] == '-')) {
                      if (param_1[0xf] == 'o') {
                        iVar4 = strcmp("id",param_1 + 0x10);
                        if (iVar4 == 0) {
                          return 0x1e;
                        }
                      }
                      else if ((param_1[0xf] == 'n') &&
                              (iVar4 = strcmp("ame",param_1 + 0x10), iVar4 == 0)) {
                        return 0x1d;
                      }
                    }
                  }
                  else if ((param_1[0xc] == 'e') &&
                          (iVar4 = strcmp("c-bits",param_1 + 0xd), iVar4 == 0)) {
                    return 0x1c;
                  }
                }
              }
            }
            else if ((bVar1 == 0x76) && (iVar4 = strcmp("ersion",param_1 + 5), iVar4 == 0)) {
              return 0x43;
            }
          }
          else if (bVar1 == 0x31) {
            if (param_1[4] == 'm') {
              if ((((param_1[5] == 'u') && (param_1[6] == 'l')) && (param_1[7] == 't')) &&
                 ((param_1[8] == 'i' && (param_1[9] == '_')))) {
                uVar3 = (byte)param_1[10] - 0x61 >> 2 | ((byte)param_1[10] - 0x61) * 0x40000000;
                if ((int)uVar3 < 2) {
                  if (uVar3 == 0) {
                    if ((param_1[0xb] == 'a') && (param_1[0xc] == 'd')) {
                      if (param_1[0xd] == '\0') {
                        return 0x39;
                      }
                      if ((param_1[0xd] == 'p') &&
                         (iVar4 = strcmp("acklen",param_1 + 0xe), iVar4 == 0)) {
                        return 0x3a;
                      }
                    }
                  }
                  else if (((uVar3 == 1) && (param_1[0xb] == 'n')) && (param_1[0xc] == 'c')) {
                    cVar2 = param_1[0xd];
                    if (cVar2 == '\0') {
                      return 0x3b;
                    }
                    if (cVar2 == 'l') {
                      iVar4 = strcmp("en",param_1 + 0xe);
                      if (iVar4 == 0) {
                        return 0x3d;
                      }
                    }
                    else if ((cVar2 == 'i') && (iVar4 = strcmp("n",param_1 + 0xe), iVar4 == 0)) {
                      return 0x3c;
                    }
                  }
                }
                else if (uVar3 == 2) {
                  iVar4 = strcmp("nterleave",param_1 + 0xb);
                  if (iVar4 == 0) {
                    return 0x3e;
                  }
                }
                else if (((uVar3 == 3) && (param_1[0xb] == 'a')) && (param_1[0xc] == 'x')) {
                  if (param_1[0xd] == 's') {
                    iVar4 = strcmp("ndfrag",param_1 + 0xe);
                    if (iVar4 == 0) {
                      return 0x40;
                    }
                  }
                  else if ((param_1[0xd] == 'b') &&
                          (iVar4 = strcmp("ufsz",param_1 + 0xe), iVar4 == 0)) {
                    return 0x3f;
                  }
                }
              }
            }
            else if ((param_1[4] == '-') &&
                    (iVar4 = strcmp("prf-ems-check",param_1 + 5), iVar4 == 0)) {
              return 0x110;
            }
          }
        }
        else if (bVar1 == 0x61) {
          if ((param_1[4] == 'a') && (param_1[5] == 'd')) {
            if (param_1[6] == '\0') {
              return 0x23;
            }
            if ((param_1[6] == 'p') && (iVar4 = strcmp("ad",param_1 + 7), iVar4 == 0)) {
              return 0x24;
            }
          }
        }
        else if (bVar1 == 0x69) {
          if (param_1[4] == 'v') {
            cVar2 = param_1[5];
            if (cVar2 == 'i') {
              iVar4 = strcmp("nv",param_1 + 6);
              if (iVar4 == 0) {
                return 0x27;
              }
            }
            else if (cVar2 == 'g') {
              iVar4 = strcmp("en",param_1 + 6);
              if (iVar4 == 0) {
                return 0x25;
              }
            }
            else if ((cVar2 == 'f') && (iVar4 = strcmp("ixed",param_1 + 6), iVar4 == 0)) {
              return 0x26;
            }
          }
        }
        else if ((bVar1 == 0x74) && (iVar4 = strcmp("ree",param_1 + 4), iVar4 == 0)) {
          return 0x98;
        }
      }
    }
    else if (bVar1 == 0x70) {
      if (param_1[2] == '\0') {
        return 0xb3;
      }
    }
    else if ((bVar1 == 0x79) && (iVar4 = strcmp("pe",param_1 + 2), iVar4 == 0)) {
      return 0x86;
    }
    break;
  case 0x75:
    cVar2 = param_1[1];
    if (cVar2 == 's') {
      if (param_1[2] == 'e') {
        if (param_1[3] == '_') {
          if (param_1[4] == 'e') {
            iVar4 = strcmp("tm",param_1 + 5);
            if (iVar4 == 0) {
              return 0x99;
            }
          }
          else if ((param_1[4] == 'd') &&
                  (iVar4 = strcmp("erivation_function",param_1 + 5), iVar4 == 0)) {
            return 0x5d;
          }
        }
        else if (param_1[3] == '-') {
          bVar1 = param_1[4];
          if (bVar1 < 0x6b) {
            if (bVar1 == 0x62) {
              iVar4 = strcmp("its",param_1 + 5);
              if (iVar4 == 0) {
                return 0x45;
              }
            }
            else if ((bVar1 == 99) && (iVar4 = strcmp("ofactor-flag",param_1 + 5), iVar4 == 0)) {
              return 0x104;
            }
          }
          else if (bVar1 == 0x6b) {
            iVar4 = strcmp("eybits",param_1 + 5);
            if (iVar4 == 0) {
              return 0x8f;
            }
          }
          else if (bVar1 == 0x6c) {
            if (param_1[5] == '\0') {
              return 0x76;
            }
          }
          else if ((bVar1 == 0x73) && (iVar4 = strcmp("eparator",param_1 + 5), iVar4 == 0)) {
            return 0x77;
          }
        }
      }
    }
    else if (cVar2 == 'p') {
      iVar4 = strcmp("dated-iv",param_1 + 2);
      if (iVar4 == 0) {
        return 0x44;
      }
    }
    else if ((cVar2 == 'k') && (iVar4 = strcmp("m",param_1 + 2), iVar4 == 0)) {
      return 0x89;
    }
    break;
  case 0x76:
    if (param_1[1] == 'e') {
      iVar4 = strcmp("rsion",param_1 + 2);
      if (iVar4 == 0) {
        return 0x6c;
      }
    }
    else if ((((((param_1[1] == 'a') && (param_1[2] == 'l')) && (param_1[3] == 'i')) &&
              ((param_1[4] == 'd' && (param_1[5] == 'a')))) && (param_1[6] == 't')) &&
            ((param_1[7] == 'e' && (param_1[8] == '-')))) {
      cVar2 = param_1[9];
      if (cVar2 == 'p') {
        iVar4 = strcmp("q",param_1 + 10);
        if (iVar4 == 0) {
          return 0xcb;
        }
      }
      else if (cVar2 == 'l') {
        iVar4 = strcmp("egacy",param_1 + 10);
        if (iVar4 == 0) {
          return 0xca;
        }
      }
      else if ((cVar2 == 'g') && (param_1[10] == '\0')) {
        return 0xc9;
      }
    }
    break;
  case 0x78:
    bVar1 = param_1[1];
    if (bVar1 < 0x70) {
      if (bVar1 == 99) {
        iVar4 = strcmp("ghash",param_1 + 2);
        if (iVar4 == 0) {
          return 0x87;
        }
      }
      else if ((bVar1 == 0x6f) && (param_1[2] == 'f')) {
        if (param_1[3] == '\0') {
          return 0x4c;
        }
        if ((param_1[3] == 'l') && (iVar4 = strcmp("en",param_1 + 4), iVar4 == 0)) {
          return 0x4d;
        }
      }
    }
    else if (bVar1 == 0x70) {
      cVar2 = param_1[2];
      if (cVar2 == '\0') {
        return 0xfd;
      }
      if (cVar2 == '2') {
        if (param_1[3] == '\0') {
          return 0xff;
        }
      }
      else if ((cVar2 == '1') && (param_1[3] == '\0')) {
        return 0xfe;
      }
    }
    else if (bVar1 == 0x71) {
      cVar2 = param_1[2];
      if (cVar2 == '\0') {
        return 0x100;
      }
      if (cVar2 == '2') {
        if (param_1[3] == '\0') {
          return 0x102;
        }
      }
      else if ((cVar2 == '1') && (param_1[3] == '\0')) {
        return 0x101;
      }
    }
    else if ((bVar1 == 0x74) && (iVar4 = strcmp("s_standard",param_1 + 2), iVar4 == 0)) {
      return 0x46;
    }
  }
  return 0xffffffff;
}


// ===== 004723a8  FUN_004723a8 =====

undefined8 FUN_004723a8(long param_1)

{
  FUN_003d8960(param_1 + 0xf8);
  return 1;
}


// ===== 004723c4  FUN_004723c4 =====

bool FUN_004723c4(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_003d8c28(param_1 + 0xf8);
  return iVar1 == 0;
}


// ===== 004723e4  FUN_004723e4 =====

undefined8 FUN_004723e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x54) & 1) == 0) {
    iVar1 = FUN_003d91cc(param_1 + 0xf8,param_2,param_4);
    if (iVar1 != 0) {
      return 0;
    }
  }
  else {
    iVar1 = FUN_003d8e4c(param_1 + 0xf8,param_2,param_4,param_3);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}


// ===== 00472440  FUN_00472440 =====

undefined8 FUN_00472440(long param_1,undefined8 param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x54) & 1) == 0) {
    iVar1 = FUN_003d9bfc(param_1 + 0xf8,param_2,*(undefined8 *)(param_1 + 0x18));
    if (iVar1 != 0) {
      return 0;
    }
  }
  else {
    FUN_003d9dc0(param_1 + 0xf8,param_2,0x10);
    *(undefined8 *)(param_1 + 0x18) = 0x10;
  }
  return 1;
}


// ===== 0047249c  FUN_0047249c =====

ulong FUN_0047249c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = (**(code **)(*(long *)(param_1 + 0xf0) + 0x10))();
  if (((int)uVar2 != 0) &&
     (uVar2 = (**(code **)(*(long *)(param_1 + 0xf0) + 0x18))(param_1,param_4,param_5,param_6),
     (int)uVar2 != 0)) {
    *(undefined8 *)(param_1 + 0x18) = 0x10;
    iVar1 = (**(code **)(*(long *)(param_1 + 0xf0) + 0x20))(param_1,param_7);
    uVar2 = (ulong)(iVar1 != 0);
  }
  return uVar2;
}


// ===== 0047252c  FUN_0047252c =====

undefined8 FUN_0047252c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    (**(code **)(param_1 + 0x38))
              (param_3,param_2,param_4,*(undefined8 *)(param_1 + 0xb0),param_1 + 0x20,
               *(byte *)(param_1 + 0x6c) >> 1 & 1);
    return 1;
  }
  if ((*(byte *)(param_1 + 0x6c) >> 1 & 1) == 0) {
    FUN_003d685c();
    return 1;
  }
  FUN_003d666c(param_3,param_2,param_4,*(undefined8 *)(param_1 + 0xb0),param_1 + 0x20,
               *(undefined8 *)(param_1 + 0x30));
  return 1;
}


// ===== 004725a4  FUN_004725a4 =====

undefined8 FUN_004725a4(long param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x58);
  if (uVar1 <= param_4) {
    if (*(code **)(param_1 + 0x38) != (code *)0x0) {
      (**(code **)(param_1 + 0x38))
                (param_3,param_2,param_4,*(undefined8 *)(param_1 + 0xb0),
                 *(byte *)(param_1 + 0x6c) >> 1 & 1);
      return 1;
    }
    uVar2 = 0;
    do {
      (**(code **)(param_1 + 0x30))(param_3 + uVar2,param_2 + uVar2,*(undefined8 *)(param_1 + 0xb0))
      ;
      uVar2 = uVar2 + uVar1;
    } while (uVar2 <= param_4 - uVar1);
  }
  return 1;
}


// ===== 0047264c  FUN_0047264c =====

undefined8 FUN_0047264c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(param_1 + 0xa0);
  FUN_003db200(param_3,param_2,param_4,*(undefined8 *)(param_1 + 0xb0),param_1 + 0x20,&local_4,
               *(undefined8 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0xa0) = local_4;
  return 1;
}


// ===== 0047269c  FUN_0047269c =====

undefined8 FUN_0047269c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(param_1 + 0xa0);
  FUN_003d7ca4(param_3,param_2,param_4,*(undefined8 *)(param_1 + 0xb0),param_1 + 0x20,&local_4,
               *(byte *)(param_1 + 0x6c) >> 1 & 1,*(undefined8 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0xa0) = local_4;
  return 1;
}


// ===== 004726f4  FUN_004726f4 =====

undefined8 FUN_004726f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(param_1 + 0xa0);
  FUN_003d8080(param_3,param_2,param_4,*(undefined8 *)(param_1 + 0xb0),param_1 + 0x20,&local_4,
               *(byte *)(param_1 + 0x6c) >> 1 & 1,*(undefined8 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0xa0) = local_4;
  return 1;
}


// ===== 0047274c  FUN_0047274c =====

undefined8 FUN_0047274c(long param_1,long param_2,long param_3,ulong param_4)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 local_44;
  
  local_44 = *(undefined4 *)(param_1 + 0xa0);
  bVar1 = *(byte *)(param_1 + 0x6c);
  if ((char)bVar1 < '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0xb0);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  else {
    uVar4 = param_4 >> 0x3c;
    while (uVar4 != 0) {
      FUN_003d7f84(param_3,param_2,0x8000000000000000,*(undefined8 *)(param_1 + 0xb0),param_1 + 0x20
                   ,&local_44,*(byte *)(param_1 + 0x6c) >> 1 & 1,*(undefined8 *)(param_1 + 0x30));
      param_4 = param_4 + 0xf000000000000000;
      param_2 = param_2 + 0x1000000000000000;
      param_3 = param_3 + 0x1000000000000000;
      uVar4 = param_4 >> 0x3c;
    }
    if (param_4 == 0) goto LAB_00472820;
    bVar1 = *(byte *)(param_1 + 0x6c);
    param_4 = param_4 << 3;
    uVar2 = *(undefined8 *)(param_1 + 0xb0);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  FUN_003d7f84(param_3,param_2,param_4,uVar2,param_1 + 0x20,&local_44,bVar1 >> 1 & 1,uVar3);
LAB_00472820:
  *(undefined4 *)(param_1 + 0xa0) = local_44;
  return 1;
}


// ===== 00472844  FUN_00472844 =====

undefined8 FUN_00472844(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(param_1 + 0xa0);
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_003d8404(param_3,param_2,param_4,*(undefined8 *)(param_1 + 0xb0),param_1 + 0x20,
                 param_1 + 0x10,&local_4);
    *(undefined4 *)(param_1 + 0xa0) = local_4;
    return 1;
  }
  FUN_003d816c(param_3,param_2,param_4,*(undefined8 *)(param_1 + 0xb0),param_1 + 0x20,param_1 + 0x10
               ,&local_4,*(undefined8 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0xa0) = local_4;
  return 1;
}


// ===== 004728d0  FUN_004728d0 =====

undefined8 FUN_004728d0(long param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  
  uVar1 = param_4 >> 0x1e;
  while (uVar1 != 0) {
    if (*(code **)(param_1 + 0x38) == (code *)0x0) {
      if ((*(byte *)(param_1 + 0x6c) >> 1 & 1) == 0) {
        FUN_003d685c();
      }
      else {
        FUN_003d666c(param_3,param_2,0x40000000,*(undefined8 *)(param_1 + 0xb0),param_1 + 0x20,
                     *(undefined8 *)(param_1 + 0x30));
      }
    }
    else {
      (**(code **)(param_1 + 0x38))
                (param_3,param_2,0x40000000,*(undefined8 *)(param_1 + 0xb0),param_1 + 0x20,
                 *(byte *)(param_1 + 0x6c) >> 1 & 1);
    }
    param_4 = param_4 - 0x40000000;
    param_3 = param_3 + 0x40000000;
    param_2 = param_2 + 0x40000000;
    uVar1 = param_4 >> 0x1e;
  }
  if (param_4 != 0) {
    if (*(code **)(param_1 + 0x38) == (code *)0x0) {
      if ((*(byte *)(param_1 + 0x6c) >> 1 & 1) == 0) {
        FUN_003d685c();
        return 1;
      }
      FUN_003d666c(param_3,param_2,param_4,*(undefined8 *)(param_1 + 0xb0),param_1 + 0x20,
                   *(undefined8 *)(param_1 + 0x30));
      return 1;
    }
    (**(code **)(param_1 + 0x38))
              (param_3,param_2,param_4,*(undefined8 *)(param_1 + 0xb0),param_1 + 0x20,
               *(byte *)(param_1 + 0x6c) >> 1 & 1);
  }
  return 1;
}


// ===== 00472a10  FUN_00472a10 =====

undefined8 FUN_00472a10(long param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 local_24;
  
  if (param_4 != 0) {
    local_24 = *(undefined4 *)(param_1 + 0xa0);
    uVar2 = param_4;
    if (0x3fffffff < param_4) {
      uVar2 = 0x40000000;
    }
    do {
      FUN_003d8080(param_3,param_2,param_4,*(undefined8 *)(param_1 + 0xb0),param_1 + 0x20,&local_24,
                   *(byte *)(param_1 + 0x6c) >> 1 & 1,*(undefined8 *)(param_1 + 0x30));
      param_4 = param_4 - uVar2;
      param_3 = param_3 + uVar2;
      param_2 = param_2 + uVar2;
      uVar1 = param_4;
      if (uVar2 <= param_4) {
        uVar1 = uVar2;
      }
      *(undefined4 *)(param_1 + 0xa0) = local_24;
      uVar2 = uVar1;
    } while (param_4 != 0);
  }
  return 1;
}


// ===== 00472aac  FUN_00472aac =====

undefined8 FUN_00472aac(long param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 local_24;
  
  if (param_4 != 0) {
    local_24 = *(undefined4 *)(param_1 + 0xa0);
    uVar2 = param_4;
    if (0x3fffffff < param_4) {
      uVar2 = 0x40000000;
    }
    do {
      FUN_003d7ca4(param_3,param_2,param_4,*(undefined8 *)(param_1 + 0xb0),param_1 + 0x20,&local_24,
                   *(byte *)(param_1 + 0x6c) >> 1 & 1,*(undefined8 *)(param_1 + 0x30));
      param_4 = param_4 - uVar2;
      param_3 = param_3 + uVar2;
      param_2 = param_2 + uVar2;
      uVar1 = param_4;
      if (uVar2 <= param_4) {
        uVar1 = uVar2;
      }
      *(undefined4 *)(param_1 + 0xa0) = local_24;
      uVar2 = uVar1;
    } while (param_4 != 0);
  }
  return 1;
}


