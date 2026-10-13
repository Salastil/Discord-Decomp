// ===== 003561bc  FUN_003561bc =====

void FUN_003561bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x003561c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 003561c8  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 003561cc  FUN_003561cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003561cc(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  ulong local_50;
  undefined8 uStack_48;
  char *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  plVar8 = (long *)*param_2;
  if (plVar8 == (long *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  FUN_00356744(param_1,uVar7);
  lVar9 = *param_2;
  lVar2 = param_2[1];
  puVar1 = PTR_DAT_007a14d8 + 0x10;
  param_1[0x10] = lVar9;
  *param_1 = (long)puVar1;
  param_1[0x11] = lVar2;
  if (lVar2 != 0) {
    FUN_00755c20(1,lVar2 + 8);
    lVar9 = *param_2;
  }
  if (lVar9 == 0) {
                    /* try { // try from 00356258 to 0035625f has its CatchHandler @ 00356304 */
    local_40 = (char *)FUN_00759c3c(0x60);
    uVar5 = s_GruLayerNormExecutableNetwork__G_001cda89._56_8_;
    uVar4 = s_GruLayerNormExecutableNetwork__G_001cda89._48_8_;
    uVar7 = s_GruLayerNormExecutableNetwork__G_001cda89._32_8_;
    uStack_48 = _UNK_00200558;
    local_50 = _DAT_00200550;
    *(undefined8 *)(local_40 + 0x28) = s_GruLayerNormExecutableNetwork__G_001cda89._40_8_;
    *(undefined8 *)(local_40 + 0x20) = uVar7;
    *(undefined8 *)(local_40 + 0x38) = uVar5;
    *(undefined8 *)(local_40 + 0x30) = uVar4;
    uVar6 = s_GruLayerNormExecutableNetwork__G_001cda89._82_8_;
    uVar5 = s_GruLayerNormExecutableNetwork__G_001cda89._64_8_;
    uVar7 = CONCAT62(s_GruLayerNormExecutableNetwork__G_001cda89._74_6_,
                     s_GruLayerNormExecutableNetwork__G_001cda89._72_2_);
    uVar4 = CONCAT26(s_GruLayerNormExecutableNetwork__G_001cda89._80_2_,
                     s_GruLayerNormExecutableNetwork__G_001cda89._74_6_);
    local_40[0x5a] = '\0';
    *(undefined8 *)(local_40 + 0x48) = uVar7;
    *(undefined8 *)(local_40 + 0x40) = uVar5;
    *(undefined8 *)(local_40 + 0x52) = uVar6;
    *(undefined8 *)(local_40 + 0x4a) = uVar4;
    uVar5 = s_GruLayerNormExecutableNetwork__G_001cda89._24_8_;
    uVar4 = s_GruLayerNormExecutableNetwork__G_001cda89._16_8_;
    uVar7 = s_GruLayerNormExecutableNetwork__G_001cda89._0_8_;
    *(undefined8 *)(local_40 + 8) = s_GruLayerNormExecutableNetwork__G_001cda89._8_8_;
    *(undefined8 *)local_40 = uVar7;
    *(undefined8 *)(local_40 + 0x18) = uVar5;
    *(undefined8 *)(local_40 + 0x10) = uVar4;
                    /* try { // try from 0035629c to 003562b7 has its CatchHandler @ 003562ec */
    FUN_00372794(&local_50,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/native/src/executable-networks/src/gru/krisp_gru_layer_norm_executable_network.cpp"
                 ,0x10,"GruLayerNormExecutableNetwork");
    if ((local_50 & 1) != 0) {
      free(local_40);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00356334  FUN_00356334 =====

void FUN_00356334(long *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar2 = (void *)param_1[0xd];
  *param_1 = (long)(PTR_DAT_007a14d0 + 0x10);
  if (pvVar2 != (void *)0x0) {
    pvVar3 = (void *)param_1[0xe];
    pvVar1 = pvVar2;
    if (pvVar3 != pvVar2) {
      do {
        pvVar1 = *(void **)((long)pvVar3 + -0x20);
        if (pvVar1 != (void *)0x0) {
          *(void **)((long)pvVar3 + -0x18) = pvVar1;
          free(pvVar1);
        }
        if ((*(byte *)((long)pvVar3 + -0x38) & 1) != 0) {
          free(*(void **)((long)pvVar3 + -0x28));
        }
        pvVar3 = (void *)((long)pvVar3 + -0x40);
      } while (pvVar3 != pvVar2);
      pvVar1 = (void *)param_1[0xd];
    }
    param_1[0xe] = (long)pvVar2;
    free(pvVar1);
  }
  pvVar2 = (void *)param_1[10];
  if (pvVar2 != (void *)0x0) {
    pvVar3 = (void *)param_1[0xb];
    pvVar1 = pvVar2;
    if (pvVar3 != pvVar2) {
      do {
        pvVar1 = *(void **)((long)pvVar3 + -0x20);
        if (pvVar1 != (void *)0x0) {
          *(void **)((long)pvVar3 + -0x18) = pvVar1;
          free(pvVar1);
        }
        if ((*(byte *)((long)pvVar3 + -0x38) & 1) != 0) {
          free(*(void **)((long)pvVar3 + -0x28));
        }
        pvVar3 = (void *)((long)pvVar3 + -0x40);
      } while (pvVar3 != pvVar2);
      pvVar1 = (void *)param_1[10];
    }
    param_1[0xb] = (long)pvVar2;
    free(pvVar1);
  }
  pvVar2 = (void *)param_1[7];
  if (pvVar2 != (void *)0x0) {
    param_1[8] = (long)pvVar2;
    free(pvVar2);
  }
  pvVar2 = (void *)param_1[4];
  if (pvVar2 != (void *)0x0) {
    param_1[5] = (long)pvVar2;
    free(pvVar2);
  }
  pvVar2 = (void *)param_1[1];
  if (pvVar2 == (void *)0x0) {
    return;
  }
  param_1[2] = (long)pvVar2;
  free(pvVar2);
  return;
}


// ===== 00356454  FUN_00356454 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00356454(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *__dest;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *local_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  (**(code **)(*(long *)param_1[0x10] + 0x18))
            ((long *)param_1[0x10],param_1 + 1,param_1 + 7,param_1 + 4);
  lVar8 = param_1[1];
  lVar1 = param_1[2];
  lVar6 = param_1[0xd];
  local_60 = (undefined8 *)FUN_00759c3c(0x10);
  lVar5 = *param_1;
  puStack_58 = local_60 + 2;
  *local_60 = 1;
  local_60[1] = lVar1 - lVar8 >> 2;
  puStack_50 = puStack_58;
                    /* try { // try from 003564cc to 003564db has its CatchHandler @ 00356620 */
  (**(code **)(lVar5 + 0x20))(param_1,lVar6,&local_60);
  if (local_60 != (undefined8 *)0x0) {
    puStack_58 = local_60;
    free(local_60);
  }
  lVar8 = param_1[10];
  uVar3 = *(ulong *)(lVar8 + 0x30);
  puVar7 = (undefined8 *)(lVar8 + 0x20);
  __dest = (undefined8 *)*puVar7;
  puStack_58 = (undefined8 *)_UNK_00200988;
  local_60 = _DAT_00200980;
  if (uVar3 - (long)__dest < 0x10) {
    if (__dest != (undefined8 *)0x0) {
      *(undefined8 **)(lVar8 + 0x28) = __dest;
      free(__dest);
      uVar3 = 0;
      *puVar7 = 0;
      *(undefined8 *)(lVar8 + 0x28) = 0;
      *(undefined8 *)(lVar8 + 0x30) = 0;
    }
    uVar4 = (long)uVar3 >> 2;
    if (uVar4 < 3) {
      uVar4 = 2;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar4 = 0x1fffffffffffffff;
    }
    if (uVar4 >> 0x3d != 0) {
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_0034e528(puVar7);
      }
      goto LAB_00356650;
    }
    __dest = (undefined8 *)FUN_00759c3c(uVar4 * 8);
    *(undefined8 **)(lVar8 + 0x20) = __dest;
    *(undefined8 **)(lVar8 + 0x30) = __dest + uVar4;
LAB_003565c4:
    puVar7 = __dest + 2;
    __dest[1] = puStack_58;
    *__dest = local_60;
  }
  else {
    uVar3 = (long)*(undefined8 **)(lVar8 + 0x28) - (long)__dest;
    if (0xf < uVar3) goto LAB_003565c4;
    if (*(undefined8 **)(lVar8 + 0x28) != __dest) {
      memcpy(__dest,&local_60,uVar3);
      __dest = *(undefined8 **)(lVar8 + 0x28);
    }
    memcpy(__dest,(void *)((long)&local_60 + uVar3),0x10 - uVar3);
    puVar7 = (undefined8 *)((long)__dest + (0x10 - uVar3));
  }
  *(undefined8 **)(lVar8 + 0x28) = puVar7;
  (**(code **)(*param_1 + 0x38))(param_1);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_00356650:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00356654  FUN_00356654 =====

void FUN_00356654(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[0x11];
  *param_1 = (long)(PTR_DAT_007a14d8 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    FUN_00356334(param_1);
    return;
  }
  FUN_00356334(param_1);
  return;
}


// ===== 003566c4  FUN_003566c4 =====

void FUN_003566c4(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[0x11];
  *param_1 = (long)(PTR_DAT_007a14d8 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    FUN_00356334(param_1);
    free(param_1);
    return;
  }
  FUN_00356334(param_1);
  free(param_1);
  return;
}


// ===== 00356744  FUN_00356744 =====

/* WARNING: Removing unreachable block (ram,0x00356980) */
/* WARNING: Removing unreachable block (ram,0x00356ad0) */

void FUN_00356744(long *param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  size_t __n;
  long lVar7;
  long *plVar8;
  long *local_a8;
  byte local_a0;
  undefined1 uStack_9f;
  undefined6 uStack_9e;
  undefined8 uStack_98;
  void *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *param_1 = (long)(PTR_DAT_007a14d0 + 0x10);
  plVar8 = param_1 + 1;
  param_1[2] = 0;
  *plVar8 = 0;
  plVar6 = param_1 + 7;
  param_1[8] = 0;
  *plVar6 = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[9] = 0;
  if (param_2 != 0) {
    if (param_2 >> 0x3e != 0) {
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 00356b28 to 00356b2f has its CatchHandler @ 00356bec */
        uVar5 = FUN_002febf0(plVar6);
                    /* catch() { ... } // from try @ 00356a48 with catch @ 00356b30 */
                    /* catch() { ... } // from try @ 0035685c with catch @ 00356b3c */
        FUN_00356c04();
        FUN_00356c04(param_2);
        pvVar3 = (void *)*plVar6;
        if (pvVar3 != (void *)0x0) {
          param_1[8] = (long)pvVar3;
          free(pvVar3);
        }
        pvVar3 = (void *)param_1[4];
        if (pvVar3 == (void *)0x0) {
          pvVar3 = (void *)*plVar8;
        }
        else {
          param_1[5] = (long)pvVar3;
          free(pvVar3);
          pvVar3 = (void *)*plVar8;
        }
        if (pvVar3 == (void *)0x0) {
          if (*(long *)(lVar1 + 0x28) == local_68) {
LAB_00356bb8:
                    /* WARNING: Subroutine does not return */
            FUN_00755eac(uVar5);
          }
        }
        else {
          param_1[2] = (long)pvVar3;
          free(pvVar3);
          if (*(long *)(lVar1 + 0x28) == local_68) goto LAB_00356bb8;
        }
      }
      goto LAB_00356be8;
    }
    __n = param_2 * 4;
                    /* try { // try from 003567b8 to 003567bf has its CatchHandler @ 00356bec */
    pvVar3 = (void *)FUN_00759c3c(__n);
    param_1[7] = (long)pvVar3;
    param_1[9] = (long)((long)pvVar3 + param_2 * 4);
    memset(pvVar3,0,__n);
    param_1[8] = (long)((long)pvVar3 + __n);
  }
  local_a0 = 0;
  plVar6 = param_1 + 10;
  *plVar6 = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  local_a8 = plVar6;
                    /* try { // try from 003567f8 to 003567ff has its CatchHandler @ 00356b7c */
  puVar4 = (undefined8 *)FUN_00759c3c(0x80);
  param_1[0xb] = (long)(puVar4 + 0x10);
  param_1[0xc] = (long)(puVar4 + 0x10);
  param_1[10] = (long)puVar4;
  plVar8 = param_1 + 0xd;
  *plVar8 = 0;
  param_1[0xe] = 0;
  puVar4[1] = 0;
  *puVar4 = 0;
  puVar4[3] = 0;
  puVar4[2] = 0;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[0xf] = 0;
  puVar4[0xe] = 0;
  param_1[0xf] = 0;
  local_a0 = 0;
  local_a8 = plVar8;
                    /* try { // try from 00356834 to 0035683b has its CatchHandler @ 00356b5c */
  puVar4 = (undefined8 *)FUN_00759c3c(0x80);
  param_1[0xd] = (long)puVar4;
  param_1[0xe] = (long)(puVar4 + 0x10);
  param_1[0xf] = (long)(puVar4 + 0x10);
  puVar4[1] = 0;
  *puVar4 = 0;
  puVar4[3] = 0;
  puVar4[2] = 0;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[0xf] = 0;
  puVar4[0xe] = 0;
                    /* try { // try from 0035685c to 00356867 has its CatchHandler @ 00356b3c */
  FUN_003571f8(&local_a8);
  puVar4 = (undefined8 *)*plVar6;
  *puVar4 = local_a8;
  if ((*(byte *)(puVar4 + 1) & 1) != 0) {
    free((void *)puVar4[3]);
  }
  pvVar3 = (void *)puVar4[4];
  puVar4[3] = local_90;
  puVar4[2] = uStack_98;
  puVar4[1] = CONCAT62(uStack_9e,CONCAT11(uStack_9f,local_a0));
  local_a0 = 0;
  uStack_9f = 0;
  if (pvVar3 != (void *)0x0) {
    puVar4[5] = pvVar3;
    free(pvVar3);
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
  }
  puVar4[5] = uStack_80;
  puVar4[4] = local_88;
  local_88 = 0;
  uStack_80 = 0;
  puVar4[6] = local_78;
  local_78 = 0;
  puVar4[7] = local_70;
  if ((local_a0 & 1) != 0) {
    free(local_90);
  }
                    /* try { // try from 003568f8 to 00356907 has its CatchHandler @ 00356b38 */
  (**(code **)(*param_1 + 0x50))(&local_a8,param_1);
  lVar7 = param_1[0xb];
  *(long **)(lVar7 + -0x40) = local_a8;
  if ((*(byte *)(lVar7 + -0x38) & 1) != 0) {
    free(*(void **)(lVar7 + -0x28));
  }
  *(void **)(lVar7 + -0x28) = local_90;
  *(undefined8 *)(lVar7 + -0x30) = uStack_98;
  *(ulong *)(lVar7 + -0x38) = CONCAT62(uStack_9e,CONCAT11(uStack_9f,local_a0));
  local_a0 = 0;
  uStack_9f = 0;
  pvVar3 = *(void **)(lVar7 + -0x20);
  if (pvVar3 != (void *)0x0) {
    *(void **)(lVar7 + -0x18) = pvVar3;
    free(pvVar3);
    *(undefined8 *)(lVar7 + -0x20) = 0;
    *(undefined8 *)(lVar7 + -0x18) = 0;
    *(undefined8 *)(lVar7 + -0x10) = 0;
  }
  *(undefined8 *)(lVar7 + -0x18) = uStack_80;
  *(undefined8 *)(lVar7 + -0x20) = local_88;
  *(undefined8 *)(lVar7 + -0x10) = local_78;
  *(undefined8 *)(lVar7 + -8) = local_70;
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  if ((local_a0 & 1) != 0) {
    free(local_90);
  }
                    /* try { // try from 003569a0 to 003569af has its CatchHandler @ 00356b34 */
  (**(code **)(*param_1 + 0x48))(&local_a8,param_1);
  puVar4 = (undefined8 *)*plVar8;
  *puVar4 = local_a8;
  if ((*(byte *)(puVar4 + 1) & 1) != 0) {
    free((void *)puVar4[3]);
  }
  pvVar3 = (void *)puVar4[4];
  puVar4[3] = local_90;
  puVar4[2] = uStack_98;
  puVar4[1] = CONCAT62(uStack_9e,CONCAT11(uStack_9f,local_a0));
  local_a0 = 0;
  uStack_9f = 0;
  if (pvVar3 == (void *)0x0) {
    bVar2 = true;
  }
  else {
    puVar4[5] = pvVar3;
    free(pvVar3);
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    bVar2 = (local_a0 & 1) == 0;
  }
  puVar4[5] = uStack_80;
  puVar4[4] = local_88;
  local_88 = 0;
  uStack_80 = 0;
  puVar4[6] = local_78;
  local_78 = 0;
  puVar4[7] = local_70;
  if (!bVar2) {
    free(local_90);
  }
                    /* try { // try from 00356a48 to 00356a57 has its CatchHandler @ 00356b30 */
  (**(code **)(*param_1 + 0x50))(&local_a8,param_1);
  lVar7 = param_1[0xe];
  *(long **)(lVar7 + -0x40) = local_a8;
  if ((*(byte *)(lVar7 + -0x38) & 1) != 0) {
    free(*(void **)(lVar7 + -0x28));
  }
  *(void **)(lVar7 + -0x28) = local_90;
  *(undefined8 *)(lVar7 + -0x30) = uStack_98;
  *(ulong *)(lVar7 + -0x38) = CONCAT62(uStack_9e,CONCAT11(uStack_9f,local_a0));
  local_a0 = 0;
  uStack_9f = 0;
  pvVar3 = *(void **)(lVar7 + -0x20);
  if (pvVar3 != (void *)0x0) {
    *(void **)(lVar7 + -0x18) = pvVar3;
    free(pvVar3);
    *(undefined8 *)(lVar7 + -0x20) = 0;
    *(undefined8 *)(lVar7 + -0x18) = 0;
    *(undefined8 *)(lVar7 + -0x10) = 0;
  }
  *(undefined8 *)(lVar7 + -0x18) = uStack_80;
  *(undefined8 *)(lVar7 + -0x20) = local_88;
  *(undefined8 *)(lVar7 + -0x10) = local_78;
  *(undefined8 *)(lVar7 + -8) = local_70;
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  if ((local_a0 & 1) != 0) {
    free(local_90);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
LAB_00356be8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00356c04  FUN_00356c04 =====

void FUN_00356c04(undefined8 *param_1)

{
  void *__ptr;
  void *__ptr_00;
  void *pvVar1;
  
  __ptr_00 = (void *)*param_1;
  if (__ptr_00 == (void *)0x0) {
    return;
  }
  pvVar1 = (void *)param_1[1];
  if (pvVar1 == __ptr_00) {
    param_1[1] = __ptr_00;
    free(__ptr_00);
    return;
  }
  do {
    __ptr = *(void **)((long)pvVar1 + -0x20);
    if (__ptr != (void *)0x0) {
      *(void **)((long)pvVar1 + -0x18) = __ptr;
      free(__ptr);
    }
    if ((*(byte *)((long)pvVar1 + -0x38) & 1) != 0) {
      free(*(void **)((long)pvVar1 + -0x28));
    }
    pvVar1 = (void *)((long)pvVar1 + -0x40);
  } while (pvVar1 != __ptr_00);
  param_1[1] = __ptr_00;
  free((void *)*param_1);
  return;
}


// ===== 00356c9c  FUN_00356c9c =====

long FUN_00356c9c(long param_1)

{
  return param_1 + 0x50;
}


// ===== 00356ca4  FUN_00356ca4 =====

long FUN_00356ca4(long param_1)

{
  return param_1 + 0x68;
}


// ===== 00356cac  FUN_00356cac =====

void FUN_00356cac(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *__dest;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 local_58;
  long lStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar9 = *(long **)(param_1 + 0x68);
  **(undefined8 **)(param_1 + 0x50) = *(undefined8 *)(param_1 + 8);
  lVar7 = *(long *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  uVar3 = plVar9[6];
  plVar8 = plVar9 + 4;
  __dest = (undefined8 *)*plVar8;
  *plVar9 = lVar7;
  lStack_50 = lVar1 - lVar7 >> 2;
  local_58 = 1;
  if (uVar3 - (long)__dest < 0x10) {
    if (__dest != (undefined8 *)0x0) {
      plVar9[5] = (long)__dest;
      free(__dest);
      uVar3 = 0;
      *plVar8 = 0;
      plVar9[5] = 0;
      plVar9[6] = 0;
    }
    uVar6 = (long)uVar3 >> 2;
    if (uVar6 < 3) {
      uVar6 = 2;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 >> 0x3d != 0) {
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_0034e528(plVar8);
      }
      goto LAB_00356e24;
    }
    __dest = (undefined8 *)FUN_00759c3c(uVar6 * 8);
    plVar9[4] = (long)__dest;
    plVar9[6] = (long)(__dest + uVar6);
LAB_00356dc4:
    puVar4 = __dest + 2;
    __dest[1] = lStack_50;
    *__dest = local_58;
  }
  else {
    uVar3 = plVar9[5] - (long)__dest;
    if (0xf < uVar3) goto LAB_00356dc4;
    if ((undefined8 *)plVar9[5] != __dest) {
      memcpy(__dest,&local_58,uVar3);
      __dest = (undefined8 *)plVar9[5];
    }
    memcpy(__dest,(void *)((long)&local_58 + uVar3),0x10 - uVar3);
    puVar4 = (undefined8 *)((long)__dest + (0x10 - uVar3));
  }
  plVar9[5] = (long)puVar4;
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  lVar7 = *(long *)(param_1 + 0x70);
  *(undefined8 *)(*(long *)(param_1 + 0x58) + -0x40) = uVar5;
  *(undefined8 *)(lVar7 + -0x40) = uVar5;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_00356e24:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00356e28  FUN_00356e28 =====

void FUN_00356e28(long param_1,long param_2,long *param_3)

{
  long lVar1;
  int *piVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  ushort uVar6;
  ulong uVar7;
  ushort uVar8;
  long *plVar9;
  ulong uVar10;
  undefined1 auStack_78 [24];
  byte local_60;
  int iStack_5f;
  ulong local_58;
  int *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_0034ce18(&local_60,param_2);
  piVar2 = local_50;
  if ((local_60 & 1) == 0) {
    local_58 = (ulong)(local_60 >> 1);
    piVar2 = &iStack_5f;
  }
  if (local_58 == 5) {
    uVar8 = (ushort)*(byte *)(piVar2 + 1);
    bVar3 = *piVar2 == 0x75706e49;
    uVar6 = 0x74;
LAB_00356ec4:
    if (bVar3 && uVar8 == uVar6) {
      plVar9 = (long *)*param_3;
      if (param_3[1] - (long)plVar9 == 0x10) {
        uVar10 = plVar9[1] * *plVar9;
        if ((long)uVar10 < 0) {
          uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 0035710c to 0035711b has its CatchHandler @ 00357180 */
          FUN_002fd2b0(auStack_78,
                       "GruExecutableNetworkBase::reshapeTensor: Invalid reshape dimensions.");
                    /* try { // try from 00357120 to 00357157 has its CatchHandler @ 00357170 */
          FUN_00374ee0(uVar4,auStack_78);
          if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
            FUN_00753c5c(uVar4,PTR_PTR_007a1338,PTR_FUN_007a11f8);
          }
        }
        else {
          if ((local_58 == 5) && (*piVar2 == 0x75706e49 && (char)piVar2[1] == 't')) {
            lVar5 = *(long *)(param_1 + 0x50);
          }
          else {
            lVar5 = *(long *)(param_1 + 0x68);
          }
          if (lVar5 == param_2) {
            if ((long *)(param_2 + 0x20) != param_3) {
                    /* try { // try from 00356f30 to 00356f33 has its CatchHandler @ 003571a4 */
              FUN_0034ef8c();
            }
            plVar9 = (long *)(param_1 + 8);
            lVar5 = *plVar9;
            uVar7 = *(long *)(param_1 + 0x10) - lVar5 >> 2;
            if (uVar7 <= uVar10 && uVar10 - uVar7 != 0) {
                    /* try { // try from 00356f4c to 00356f53 has its CatchHandler @ 00357158 */
              FUN_002feac4(plVar9,uVar10 - uVar7);
              **(long **)(param_1 + 0x50) = *plVar9;
            }
            else if (uVar7 <= uVar10) {
              **(long **)(param_1 + 0x50) = lVar5;
            }
            else {
              *(ulong *)(param_1 + 0x10) = lVar5 + uVar10 * 4;
              **(long **)(param_1 + 0x50) = lVar5;
            }
            if ((local_60 & 1) == 0) {
              if (*(long *)(lVar1 + 0x28) == local_48) {
                return;
              }
            }
            else {
              free(local_50);
              if (*(long *)(lVar1 + 0x28) == local_48) {
                return;
              }
            }
          }
          else {
            uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 00356ff8 to 00357007 has its CatchHandler @ 0035716c */
            FUN_002fd2b0(auStack_78,
                         "GruExecutableNetworkBase::reshapeTensor: Invalid tensor to reshape.");
                    /* try { // try from 0035700c to 00357043 has its CatchHandler @ 0035715c */
            FUN_00374ee0(uVar4,auStack_78);
            if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
              FUN_00753c5c(uVar4,PTR_PTR_007a1338,PTR_FUN_007a11f8);
            }
          }
        }
      }
      else {
        uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 003570b0 to 003570bf has its CatchHandler @ 003571a0 */
        FUN_002fd2b0(auStack_78,
                     "GruExecutableNetworkBase::reshapeTensor: Invalid reshape dimensions.");
                    /* try { // try from 003570c4 to 003570fb has its CatchHandler @ 00357184 */
        FUN_00374ee0(uVar4,auStack_78);
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar4,PTR_PTR_007a1338,PTR_FUN_007a11f8);
        }
      }
      goto LAB_003571f4;
    }
  }
  else if (local_58 == 6) {
    uVar8 = *(ushort *)(piVar2 + 1);
    bVar3 = *piVar2 == 0x7074754f;
    uVar6 = 0x7475;
    goto LAB_00356ec4;
  }
  uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 00357054 to 00357063 has its CatchHandler @ 003571c0 */
  FUN_002fd2b0(auStack_78,
               "GruExecutableNetworkBase::reshapeTensor: Only input and output tensors may be reshaped."
              );
                    /* try { // try from 00357068 to 0035709f has its CatchHandler @ 003571ac */
  FUN_00374ee0(uVar4,auStack_78);
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar4,PTR_PTR_007a1338,PTR_FUN_007a11f8);
  }
LAB_003571f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003571f8  FUN_003571f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003571f8(long param_1)

{
  long lVar1;
  undefined8 *__dest;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
                    /* try { // try from 00357230 to 0035723f has its CatchHandler @ 0035736c */
  FUN_00712d54((undefined8 *)(param_1 + 8),"Input",5);
  puVar4 = (undefined8 *)(param_1 + 0x20);
  __dest = (undefined8 *)*puVar4;
  uVar2 = *(ulong *)(param_1 + 0x30);
  uStack_58 = _UNK_00200988;
  local_60 = _DAT_00200980;
  if (uVar2 - (long)__dest < 0x10) {
    if (__dest != (undefined8 *)0x0) {
      *(undefined8 **)(param_1 + 0x28) = __dest;
      free(__dest);
      uVar2 = 0;
      *puVar4 = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    uVar3 = (long)uVar2 >> 2;
    if (uVar3 < 3) {
      uVar3 = 2;
    }
    if (0x7ffffffffffffff7 < uVar2) {
      uVar3 = 0x1fffffffffffffff;
    }
    if (uVar3 >> 0x3d != 0) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00357360 to 00357367 has its CatchHandler @ 00357368 */
                    /* WARNING: Subroutine does not return */
        FUN_0034e528(puVar4);
      }
      goto LAB_00357390;
    }
                    /* try { // try from 003572a8 to 003572ab has its CatchHandler @ 00357368 */
    __dest = (undefined8 *)FUN_00759c3c(uVar3 << 3);
    *(undefined8 **)(param_1 + 0x20) = __dest;
    *(undefined8 **)(param_1 + 0x30) = __dest + uVar3;
LAB_00357310:
    puVar4 = __dest + 2;
    __dest[1] = uStack_58;
    *__dest = local_60;
  }
  else {
    uVar2 = (long)*(undefined8 **)(param_1 + 0x28) - (long)__dest;
    if (0xf < uVar2) goto LAB_00357310;
    if (*(undefined8 **)(param_1 + 0x28) != __dest) {
      memcpy(__dest,&local_60,uVar2);
      __dest = *(undefined8 **)(param_1 + 0x28);
    }
    memcpy(__dest,(void *)((long)&local_60 + uVar2),0x10 - uVar2);
    puVar4 = (undefined8 *)((long)__dest + (0x10 - uVar2));
  }
  *(undefined8 **)(param_1 + 0x28) = puVar4;
  *(undefined8 *)(param_1 + 0x38) = DAT_001b70d8;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00357390:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00357394  FUN_00357394 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00357394(long param_1)

{
  long lVar1;
  undefined8 *__dest;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
                    /* try { // try from 003573cc to 003573db has its CatchHandler @ 00357508 */
  FUN_00712d54((undefined8 *)(param_1 + 8),"Output",6);
  puVar4 = (undefined8 *)(param_1 + 0x20);
  __dest = (undefined8 *)*puVar4;
  uVar2 = *(ulong *)(param_1 + 0x30);
  uStack_58 = _UNK_00200988;
  local_60 = _DAT_00200980;
  if (uVar2 - (long)__dest < 0x10) {
    if (__dest != (undefined8 *)0x0) {
      *(undefined8 **)(param_1 + 0x28) = __dest;
      free(__dest);
      uVar2 = 0;
      *puVar4 = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    uVar3 = (long)uVar2 >> 2;
    if (uVar3 < 3) {
      uVar3 = 2;
    }
    if (0x7ffffffffffffff7 < uVar2) {
      uVar3 = 0x1fffffffffffffff;
    }
    if (uVar3 >> 0x3d != 0) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 003574fc to 00357503 has its CatchHandler @ 00357504 */
                    /* WARNING: Subroutine does not return */
        FUN_0034e528(puVar4);
      }
      goto LAB_0035752c;
    }
                    /* try { // try from 00357444 to 00357447 has its CatchHandler @ 00357504 */
    __dest = (undefined8 *)FUN_00759c3c(uVar3 << 3);
    *(undefined8 **)(param_1 + 0x20) = __dest;
    *(undefined8 **)(param_1 + 0x30) = __dest + uVar3;
LAB_003574ac:
    puVar4 = __dest + 2;
    __dest[1] = uStack_58;
    *__dest = local_60;
  }
  else {
    uVar2 = (long)*(undefined8 **)(param_1 + 0x28) - (long)__dest;
    if (0xf < uVar2) goto LAB_003574ac;
    if (*(undefined8 **)(param_1 + 0x28) != __dest) {
      memcpy(__dest,&local_60,uVar2);
      __dest = *(undefined8 **)(param_1 + 0x28);
    }
    memcpy(__dest,(void *)((long)&local_60 + uVar2),0x10 - uVar2);
    puVar4 = (undefined8 *)((long)__dest + (0x10 - uVar2));
  }
  *(undefined8 **)(param_1 + 0x28) = puVar4;
  *(undefined8 *)(param_1 + 0x38) = DAT_001b70d8;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_0035752c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00357530  FUN_00357530 =====

void FUN_00357530(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 *__dest;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 local_58;
  long lStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = uVar2;
                    /* try { // try from 00357578 to 00357587 has its CatchHandler @ 003576bc */
  FUN_00712d54(param_1 + 1,"State",5);
  puVar4 = param_1 + 4;
  __dest = (undefined8 *)*puVar4;
  uVar3 = param_1[6];
  lStack_50 = *(long *)(param_2 + 0x40) - *(long *)(param_2 + 0x38) >> 2;
  local_58 = 1;
  if (uVar3 - (long)__dest < 0x10) {
    if (__dest != (undefined8 *)0x0) {
      param_1[5] = __dest;
      free(__dest);
      uVar3 = 0;
      *puVar4 = 0;
      param_1[5] = 0;
      param_1[6] = 0;
    }
    uVar5 = (long)uVar3 >> 2;
    if (uVar5 < 3) {
      uVar5 = 2;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar5 = 0x1fffffffffffffff;
    }
    if (uVar5 >> 0x3d != 0) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 003576b0 to 003576b7 has its CatchHandler @ 003576b8 */
                    /* WARNING: Subroutine does not return */
        FUN_0034e528(puVar4);
      }
      goto LAB_003576e0;
    }
                    /* try { // try from 003575f8 to 003575fb has its CatchHandler @ 003576b8 */
    __dest = (undefined8 *)FUN_00759c3c(uVar5 << 3);
    param_1[4] = __dest;
    param_1[6] = __dest + uVar5;
LAB_00357660:
    puVar4 = __dest + 2;
    __dest[1] = lStack_50;
    *__dest = local_58;
  }
  else {
    uVar3 = (long)param_1[5] - (long)__dest;
    if (0xf < uVar3) goto LAB_00357660;
    if ((undefined8 *)param_1[5] != __dest) {
      memcpy(__dest,&local_58,uVar3);
      __dest = (undefined8 *)param_1[5];
    }
    memcpy(__dest,(void *)((long)&local_58 + uVar3),0x10 - uVar3);
    puVar4 = (undefined8 *)((long)__dest + (0x10 - uVar3));
  }
  param_1[5] = puVar4;
  param_1[7] = DAT_001b70d8;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_003576e0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003576e4  FUN_003576e4 =====

void FUN_003576e4(long param_1)

{
  size_t sVar1;
  
  sVar1 = *(long *)(param_1 + 0x10) - (long)*(void **)(param_1 + 8);
  if (0 < (long)sVar1) {
    memset(*(void **)(param_1 + 8),0,sVar1);
  }
  sVar1 = *(long *)(param_1 + 0x28) - (long)*(void **)(param_1 + 0x20);
  if (0 < (long)sVar1) {
    memset(*(void **)(param_1 + 0x20),0,sVar1);
  }
  sVar1 = *(long *)(param_1 + 0x40) - (long)*(void **)(param_1 + 0x38);
  if (0 < (long)sVar1) {
    memset(*(void **)(param_1 + 0x38),0,sVar1);
    return;
  }
  return;
}


// ===== 00357754  FUN_00357754 =====

void FUN_00357754(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x357758);
  (*pcVar1)();
}


// ===== 00357758  FUN_00357758 =====

void FUN_00357758(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  void *__ptr_00;
  void *pvVar2;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    puVar1 = (undefined8 *)*param_1;
    __ptr_00 = (void *)*puVar1;
    if (__ptr_00 != (void *)0x0) {
      pvVar2 = (void *)puVar1[1];
      if (pvVar2 == __ptr_00) {
        puVar1[1] = __ptr_00;
        free(__ptr_00);
        return;
      }
      do {
        __ptr = *(void **)((long)pvVar2 + -0x20);
        if (__ptr != (void *)0x0) {
          *(void **)((long)pvVar2 + -0x18) = __ptr;
          free(__ptr);
        }
        if ((*(byte *)((long)pvVar2 + -0x38) & 1) != 0) {
          free(*(void **)((long)pvVar2 + -0x28));
        }
        pvVar2 = (void *)((long)pvVar2 + -0x40);
      } while (pvVar2 != __ptr_00);
      pvVar2 = *(void **)*param_1;
      puVar1[1] = __ptr_00;
      free(pvVar2);
      return;
    }
  }
  return;
}


// ===== 00357800  FUN_00357800 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00357800(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  ulong local_50;
  undefined8 uStack_48;
  char *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  plVar10 = (long *)*param_2;
  if (plVar10 == (long *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  FUN_00356744(param_1,uVar9);
  lVar11 = *param_2;
  lVar2 = param_2[1];
  puVar1 = PTR_DAT_007a14f8 + 0x10;
  param_1[0x10] = lVar11;
  *param_1 = (long)puVar1;
  param_1[0x11] = lVar2;
  if (lVar2 != 0) {
    FUN_00755c20(1,lVar2 + 8);
    lVar11 = *param_2;
  }
  if (lVar11 == 0) {
                    /* try { // try from 0035788c to 00357893 has its CatchHandler @ 0035793c */
    local_40 = (char *)FUN_00759c3c(0x58);
    uVar8 = s_GruModifyExecutableNetwork__GruM_001b76e4._72_8_;
    uVar7 = s_GruModifyExecutableNetwork__GruM_001b76e4._64_8_;
    uVar6 = s_GruModifyExecutableNetwork__GruM_001b76e4._56_8_;
    uVar5 = s_GruModifyExecutableNetwork__GruM_001b76e4._48_8_;
    uVar4 = s_GruModifyExecutableNetwork__GruM_001b76e4._40_8_;
    uVar9 = s_GruModifyExecutableNetwork__GruM_001b76e4._32_8_;
    uStack_48 = _UNK_002008e8;
    local_50 = _DAT_002008e0;
    local_40[0x50] = 'l';
    local_40[0x51] = 'p';
    local_40[0x52] = 't';
    local_40[0x53] = 'r';
    *(undefined8 *)(local_40 + 0x28) = uVar4;
    *(undefined8 *)(local_40 + 0x20) = uVar9;
    *(undefined8 *)(local_40 + 0x38) = uVar6;
    *(undefined8 *)(local_40 + 0x30) = uVar5;
    *(undefined8 *)(local_40 + 0x48) = uVar8;
    *(undefined8 *)(local_40 + 0x40) = uVar7;
    uVar6 = s_GruModifyExecutableNetwork__GruM_001b76e4._24_8_;
    uVar5 = s_GruModifyExecutableNetwork__GruM_001b76e4._16_8_;
    uVar4 = s_GruModifyExecutableNetwork__GruM_001b76e4._8_8_;
    uVar9 = s_GruModifyExecutableNetwork__GruM_001b76e4._0_8_;
    local_40[0x54] = '\0';
    *(undefined8 *)(local_40 + 8) = uVar4;
    *(undefined8 *)local_40 = uVar9;
    *(undefined8 *)(local_40 + 0x18) = uVar6;
    *(undefined8 *)(local_40 + 0x10) = uVar5;
                    /* try { // try from 003578d4 to 003578ef has its CatchHandler @ 00357924 */
    FUN_00372794(&local_50,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/native/src/executable-networks/src/gru/krisp_gru_modify_executable_network.cpp"
                 ,0x10,"GruModifyExecutableNetwork");
    if ((local_50 & 1) != 0) {
      free(local_40);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035796c  FUN_0035796c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0035796c(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *__dest;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *local_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  (**(code **)(*(long *)param_1[0x10] + 0x18))
            ((long *)param_1[0x10],param_1 + 1,param_1 + 7,param_1 + 4);
  lVar8 = param_1[1];
  lVar1 = param_1[2];
  lVar6 = param_1[0xd];
  local_60 = (undefined8 *)FUN_00759c3c(0x10);
  lVar5 = *param_1;
  puStack_58 = local_60 + 2;
  *local_60 = 1;
  local_60[1] = lVar1 - lVar8 >> 2;
  puStack_50 = puStack_58;
                    /* try { // try from 003579e4 to 003579f3 has its CatchHandler @ 00357b38 */
  (**(code **)(lVar5 + 0x20))(param_1,lVar6,&local_60);
  if (local_60 != (undefined8 *)0x0) {
    puStack_58 = local_60;
    free(local_60);
  }
  lVar8 = param_1[10];
  uVar3 = *(ulong *)(lVar8 + 0x30);
  puVar7 = (undefined8 *)(lVar8 + 0x20);
  __dest = (undefined8 *)*puVar7;
  puStack_58 = (undefined8 *)_UNK_00200988;
  local_60 = _DAT_00200980;
  if (uVar3 - (long)__dest < 0x10) {
    if (__dest != (undefined8 *)0x0) {
      *(undefined8 **)(lVar8 + 0x28) = __dest;
      free(__dest);
      uVar3 = 0;
      *puVar7 = 0;
      *(undefined8 *)(lVar8 + 0x28) = 0;
      *(undefined8 *)(lVar8 + 0x30) = 0;
    }
    uVar4 = (long)uVar3 >> 2;
    if (uVar4 < 3) {
      uVar4 = 2;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar4 = 0x1fffffffffffffff;
    }
    if (uVar4 >> 0x3d != 0) {
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_0034e528(puVar7);
      }
      goto LAB_00357b68;
    }
    __dest = (undefined8 *)FUN_00759c3c(uVar4 * 8);
    *(undefined8 **)(lVar8 + 0x20) = __dest;
    *(undefined8 **)(lVar8 + 0x30) = __dest + uVar4;
LAB_00357adc:
    puVar7 = __dest + 2;
    __dest[1] = puStack_58;
    *__dest = local_60;
  }
  else {
    uVar3 = (long)*(undefined8 **)(lVar8 + 0x28) - (long)__dest;
    if (0xf < uVar3) goto LAB_00357adc;
    if (*(undefined8 **)(lVar8 + 0x28) != __dest) {
      memcpy(__dest,&local_60,uVar3);
      __dest = *(undefined8 **)(lVar8 + 0x28);
    }
    memcpy(__dest,(void *)((long)&local_60 + uVar3),0x10 - uVar3);
    puVar7 = (undefined8 *)((long)__dest + (0x10 - uVar3));
  }
  *(undefined8 **)(lVar8 + 0x28) = puVar7;
  (**(code **)(*param_1 + 0x38))(param_1);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_00357b68:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00357b6c  FUN_00357b6c =====

void FUN_00357b6c(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[0x11];
  *param_1 = (long)(PTR_DAT_007a14f8 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    FUN_00356334(param_1);
    return;
  }
  FUN_00356334(param_1);
  return;
}


// ===== 00357bdc  FUN_00357bdc =====

void FUN_00357bdc(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[0x11];
  *param_1 = (long)(PTR_DAT_007a14f8 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    FUN_00356334(param_1);
    free(param_1);
    return;
  }
  FUN_00356334(param_1);
  free(param_1);
  return;
}


// ===== 00357c5c  FUN_00357c5c =====

/* WARNING: Removing unreachable block (ram,0x00357ec0) */
/* WARNING: Removing unreachable block (ram,0x00358008) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00357c5c(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 uVar6;
  void *pvVar7;
  byte bVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong local_90;
  ulong uStack_88;
  char *local_80;
  void *local_78;
  ulong local_70;
  ulong uStack_68;
  ulong local_60;
  ulong local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar9 = (long *)*param_2;
  if (plVar9 == (long *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  FUN_00356744(param_1,uVar6);
  *param_1 = (long)(PTR_DAT_007a1500 + 0x10);
  lVar10 = *param_2;
  param_1[0x10] = lVar10;
  lVar11 = param_2[1];
  param_1[0x11] = lVar11;
  if (lVar11 != 0) {
    FUN_00755c20(1,lVar11 + 8);
    lVar10 = *param_2;
  }
  if (lVar10 == 0) {
                    /* try { // try from 00357cf0 to 00357cf7 has its CatchHandler @ 00358060 */
    local_80 = (char *)FUN_00759c3c(0x60);
    uVar3 = s_GruModifyVadExecutableNetwork__G_001be5ac._56_8_;
    uVar2 = s_GruModifyVadExecutableNetwork__G_001be5ac._48_8_;
    uVar6 = s_GruModifyVadExecutableNetwork__G_001be5ac._32_8_;
    uStack_88 = _UNK_002007a8;
    local_90 = _DAT_002007a0;
    *(undefined8 *)(local_80 + 0x28) = s_GruModifyVadExecutableNetwork__G_001be5ac._40_8_;
    *(undefined8 *)(local_80 + 0x20) = uVar6;
    *(undefined8 *)(local_80 + 0x38) = uVar3;
    *(undefined8 *)(local_80 + 0x30) = uVar2;
    uVar4 = s_GruModifyVadExecutableNetwork__G_001be5ac._83_8_;
    uVar3 = s_GruModifyVadExecutableNetwork__G_001be5ac._64_8_;
    uVar6 = CONCAT53(s_GruModifyVadExecutableNetwork__G_001be5ac._75_5_,
                     s_GruModifyVadExecutableNetwork__G_001be5ac._72_3_);
    uVar2 = CONCAT35(s_GruModifyVadExecutableNetwork__G_001be5ac._80_3_,
                     s_GruModifyVadExecutableNetwork__G_001be5ac._75_5_);
    local_80[0x5b] = '\0';
    *(undefined8 *)(local_80 + 0x48) = uVar6;
    *(undefined8 *)(local_80 + 0x40) = uVar3;
    *(undefined8 *)(local_80 + 0x53) = uVar4;
    *(undefined8 *)(local_80 + 0x4b) = uVar2;
    uVar3 = s_GruModifyVadExecutableNetwork__G_001be5ac._24_8_;
    uVar2 = s_GruModifyVadExecutableNetwork__G_001be5ac._16_8_;
    uVar6 = s_GruModifyVadExecutableNetwork__G_001be5ac._0_8_;
    *(undefined8 *)(local_80 + 8) = s_GruModifyVadExecutableNetwork__G_001be5ac._8_8_;
    *(undefined8 *)local_80 = uVar6;
    *(undefined8 *)(local_80 + 0x18) = uVar3;
    *(undefined8 *)(local_80 + 0x10) = uVar2;
                    /* try { // try from 00357d34 to 00357d4f has its CatchHandler @ 00358048 */
    FUN_00372794(&local_90,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/native/src/executable-networks/src/gru/krisp_gru_modify_vad_executable_network.cpp"
                 ,0x10,"GruModifyVadExecutableNetwork");
    if ((local_90 & 1) != 0) {
      free(local_80);
    }
  }
  lVar10 = param_1[1];
  lVar11 = param_1[2] - lVar10;
  uVar12 = lVar11 >> 2;
  if (uVar12 < 0xf4) {
                    /* try { // try from 00357d80 to 00357d83 has its CatchHandler @ 00358064 */
    FUN_002feac4(param_1 + 1,0xf4 - uVar12);
  }
  else if (lVar11 != 0x3d0) {
    param_1[2] = lVar10 + 0x3d0;
  }
                    /* try { // try from 00357d98 to 00357da7 has its CatchHandler @ 00358074 */
  FUN_003580a4(&local_90,param_1);
  puVar13 = (ulong *)param_1[10];
  *puVar13 = local_90;
  if ((puVar13[1] & 1) != 0) {
    free((void *)puVar13[3]);
  }
  pvVar7 = (void *)puVar13[4];
  puVar13[3] = (ulong)local_78;
  puVar13[2] = (ulong)local_80;
  puVar13[1] = uStack_88;
  uStack_88 = uStack_88 & 0xffffffffffff0000;
  if (pvVar7 == (void *)0x0) {
    bVar8 = 0;
  }
  else {
    puVar13[5] = (ulong)pvVar7;
    free(pvVar7);
    puVar13[4] = 0;
    puVar13[5] = 0;
    puVar13[6] = 0;
    bVar8 = (byte)uStack_88;
  }
  puVar13[5] = uStack_68;
  puVar13[4] = local_70;
  local_70 = 0;
  uStack_68 = 0;
  puVar13[6] = local_60;
  local_60 = 0;
  puVar13[7] = local_58;
  if ((bVar8 & 1) != 0) {
    free(local_78);
  }
                    /* try { // try from 00357e38 to 00357e47 has its CatchHandler @ 00358070 */
  (**(code **)(*param_1 + 0x50))(&local_90,param_1);
  lVar10 = param_1[0xb];
  *(ulong *)(lVar10 + -0x40) = local_90;
  if ((*(byte *)(lVar10 + -0x38) & 1) != 0) {
    free(*(void **)(lVar10 + -0x28));
  }
  *(void **)(lVar10 + -0x28) = local_78;
  *(char **)(lVar10 + -0x30) = local_80;
  *(ulong *)(lVar10 + -0x38) = uStack_88;
  uStack_88 = uStack_88 & 0xffffffffffff0000;
  pvVar7 = *(void **)(lVar10 + -0x20);
  if (pvVar7 != (void *)0x0) {
    *(void **)(lVar10 + -0x18) = pvVar7;
    free(pvVar7);
    *(undefined8 *)(lVar10 + -0x20) = 0;
    *(undefined8 *)(lVar10 + -0x18) = 0;
    *(undefined8 *)(lVar10 + -0x10) = 0;
  }
  *(ulong *)(lVar10 + -0x18) = uStack_68;
  *(ulong *)(lVar10 + -0x20) = local_70;
  *(ulong *)(lVar10 + -0x10) = local_60;
  *(ulong *)(lVar10 + -8) = local_58;
  local_60 = 0;
  uStack_68 = 0;
  local_70 = 0;
  if ((uStack_88 & 1) != 0) {
    free(local_78);
  }
                    /* try { // try from 00357ed8 to 00357ee7 has its CatchHandler @ 0035806c */
  FUN_00358258(&local_90,param_1);
  puVar13 = (ulong *)param_1[0xd];
  *puVar13 = local_90;
  if ((puVar13[1] & 1) != 0) {
    free((void *)puVar13[3]);
  }
  pvVar7 = (void *)puVar13[4];
  puVar13[3] = (ulong)local_78;
  puVar13[2] = (ulong)local_80;
  puVar13[1] = uStack_88;
  uStack_88 = uStack_88 & 0xffffffffffff0000;
  if (pvVar7 == (void *)0x0) {
    bVar5 = true;
  }
  else {
    puVar13[5] = (ulong)pvVar7;
    free(pvVar7);
    puVar13[4] = 0;
    puVar13[5] = 0;
    puVar13[6] = 0;
    bVar5 = (uStack_88 & 1) == 0;
  }
  puVar13[5] = uStack_68;
  puVar13[4] = local_70;
  local_70 = 0;
  uStack_68 = 0;
  puVar13[6] = local_60;
  local_60 = 0;
  puVar13[7] = local_58;
  if (!bVar5) {
    free(local_78);
  }
                    /* try { // try from 00357f80 to 00357f8f has its CatchHandler @ 00358068 */
  (**(code **)(*param_1 + 0x50))(&local_90,param_1);
  lVar10 = param_1[0xe];
  *(ulong *)(lVar10 + -0x40) = local_90;
  if ((*(byte *)(lVar10 + -0x38) & 1) != 0) {
    free(*(void **)(lVar10 + -0x28));
  }
  *(void **)(lVar10 + -0x28) = local_78;
  *(char **)(lVar10 + -0x30) = local_80;
  *(ulong *)(lVar10 + -0x38) = uStack_88;
  uStack_88 = uStack_88 & 0xffffffffffff0000;
  pvVar7 = *(void **)(lVar10 + -0x20);
  if (pvVar7 != (void *)0x0) {
    *(void **)(lVar10 + -0x18) = pvVar7;
    free(pvVar7);
    *(undefined8 *)(lVar10 + -0x20) = 0;
    *(undefined8 *)(lVar10 + -0x18) = 0;
    *(undefined8 *)(lVar10 + -0x10) = 0;
  }
  *(ulong *)(lVar10 + -0x18) = uStack_68;
  *(ulong *)(lVar10 + -0x20) = local_70;
  *(ulong *)(lVar10 + -0x10) = local_60;
  *(ulong *)(lVar10 + -8) = local_58;
  local_60 = 0;
  uStack_68 = 0;
  local_70 = 0;
  if ((uStack_88 & 1) != 0) {
    free(local_78);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 003580a4  FUN_003580a4 =====

void FUN_003580a4(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 *__dest;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 local_58;
  long lStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 8);
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = uVar2;
                    /* try { // try from 003580ec to 003580fb has its CatchHandler @ 00358230 */
  FUN_00712d54(param_1 + 1,"Input",5);
  puVar4 = param_1 + 4;
  __dest = (undefined8 *)*puVar4;
  uVar3 = param_1[6];
  lStack_50 = *(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 2;
  local_58 = 1;
  if (uVar3 - (long)__dest < 0x10) {
    if (__dest != (undefined8 *)0x0) {
      param_1[5] = __dest;
      free(__dest);
      uVar3 = 0;
      *puVar4 = 0;
      param_1[5] = 0;
      param_1[6] = 0;
    }
    uVar5 = (long)uVar3 >> 2;
    if (uVar5 < 3) {
      uVar5 = 2;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar5 = 0x1fffffffffffffff;
    }
    if (uVar5 >> 0x3d != 0) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00358224 to 0035822b has its CatchHandler @ 0035822c */
                    /* WARNING: Subroutine does not return */
        FUN_0034e528(puVar4);
      }
      goto LAB_00358254;
    }
                    /* try { // try from 0035816c to 0035816f has its CatchHandler @ 0035822c */
    __dest = (undefined8 *)FUN_00759c3c(uVar5 << 3);
    param_1[4] = __dest;
    param_1[6] = __dest + uVar5;
LAB_003581d4:
    puVar4 = __dest + 2;
    __dest[1] = lStack_50;
    *__dest = local_58;
  }
  else {
    uVar3 = (long)param_1[5] - (long)__dest;
    if (0xf < uVar3) goto LAB_003581d4;
    if ((undefined8 *)param_1[5] != __dest) {
      memcpy(__dest,&local_58,uVar3);
      __dest = (undefined8 *)param_1[5];
    }
    memcpy(__dest,(void *)((long)&local_58 + uVar3),0x10 - uVar3);
    puVar4 = (undefined8 *)((long)__dest + (0x10 - uVar3));
  }
  param_1[5] = puVar4;
  param_1[7] = DAT_001b70d8;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00358254:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00358258  FUN_00358258 =====

void FUN_00358258(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = *(undefined8 *)(param_2 + 8);
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
                    /* try { // try from 00358280 to 00358293 has its CatchHandler @ 00358324 */
  FUN_00712d54(param_1 + 1,"Output",6);
  puVar2 = (undefined8 *)param_1[4];
  puVar1 = (undefined8 *)param_1[6];
  if (puVar1 != puVar2) {
    *puVar2 = 1;
    param_1[5] = puVar2 + 1;
    param_1[7] = DAT_001b7140;
    return;
  }
  if (puVar1 != (undefined8 *)0x0) {
    param_1[5] = puVar1;
    free(puVar1);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
                    /* try { // try from 003582e0 to 003582e7 has its CatchHandler @ 00358310 */
  puVar1 = (undefined8 *)FUN_00759c3c(8);
  param_1[4] = puVar1;
  *puVar1 = 1;
  param_1[5] = puVar1 + 1;
  param_1[6] = puVar1 + 1;
  param_1[7] = DAT_001b7140;
  return;
}


// ===== 00358338  FUN_00358338 =====

void FUN_00358338(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  (**(code **)(*(long *)param_1[0x10] + 0x18))
            ((long *)param_1[0x10],param_1 + 1,param_1 + 7,param_1 + 4);
  lVar2 = param_1[2] - param_1[1];
  uVar1 = lVar2 >> 2;
  if (uVar1 < 0xf4) {
    FUN_002feac4(param_1 + 1,0xf4 - uVar1);
  }
  else if (lVar2 != 0x3d0) {
    param_1[2] = param_1[1] + 0x3d0;
                    /* WARNING: Could not recover jumptable at 0x003583c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x38))(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0035839c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1);
  return;
}


// ===== 003583c8  FUN_003583c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003583c8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = FUN_00753a74(0x20);
                    /* try { // try from 003583f4 to 003583fb has its CatchHandler @ 00358490 */
  local_40 = (char *)FUN_00759c3c(0x38);
  uVar4 = s_GruModifyVadExecutableNetwork__r_001e8a92._24_8_;
  uVar3 = s_GruModifyVadExecutableNetwork__r_001e8a92._16_8_;
  uVar2 = s_GruModifyVadExecutableNetwork__r_001e8a92._0_8_;
  uStack_48 = _UNK_00200998;
  local_50 = _DAT_00200990;
  *(undefined8 *)(local_40 + 8) = s_GruModifyVadExecutableNetwork__r_001e8a92._8_8_;
  *(undefined8 *)local_40 = uVar2;
  *(undefined8 *)(local_40 + 0x18) = uVar4;
  *(undefined8 *)(local_40 + 0x10) = uVar3;
  uVar4 = s_GruModifyVadExecutableNetwork__r_001e8a92._32_8_;
  uVar2 = CONCAT35(s_GruModifyVadExecutableNetwork__r_001e8a92._45_3_,
                   s_GruModifyVadExecutableNetwork__r_001e8a92._40_5_);
  uVar3 = CONCAT53(s_GruModifyVadExecutableNetwork__r_001e8a92._48_5_,
                   s_GruModifyVadExecutableNetwork__r_001e8a92._45_3_);
  local_40[0x35] = '\0';
  *(undefined8 *)(local_40 + 0x28) = uVar2;
  *(undefined8 *)(local_40 + 0x20) = uVar4;
  *(undefined8 *)(local_40 + 0x2d) = uVar3;
                    /* try { // try from 00358434 to 0035846b has its CatchHandler @ 0035846c */
  FUN_00374fd0(uVar5,&local_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar5,PTR_PTR_007a1350,PTR_FUN_007a11f8);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003584b8  FUN_003584b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003584b8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = FUN_00753a74(0x20);
                    /* try { // try from 003584e4 to 003584eb has its CatchHandler @ 00358580 */
  local_40 = (char *)FUN_00759c3c(0x50);
  uVar4 = s_GruModifyVadExecutableNetwork__r_001d9e79._48_8_;
  uVar3 = s_GruModifyVadExecutableNetwork__r_001d9e79._32_8_;
  uVar2 = CONCAT53(s_GruModifyVadExecutableNetwork__r_001d9e79._59_5_,
                   s_GruModifyVadExecutableNetwork__r_001d9e79._56_3_);
  uStack_48 = _UNK_00200828;
  local_50 = _DAT_00200820;
  *(undefined8 *)(local_40 + 0x28) = s_GruModifyVadExecutableNetwork__r_001d9e79._40_8_;
  *(undefined8 *)(local_40 + 0x20) = uVar3;
  *(undefined8 *)(local_40 + 0x38) = uVar2;
  *(undefined8 *)(local_40 + 0x30) = uVar4;
  uVar3 = s_GruModifyVadExecutableNetwork__r_001d9e79._67_8_;
  uVar2 = CONCAT35(s_GruModifyVadExecutableNetwork__r_001d9e79._64_3_,
                   s_GruModifyVadExecutableNetwork__r_001d9e79._59_5_);
  local_40[0x4b] = '\0';
  *(undefined8 *)(local_40 + 0x43) = uVar3;
  *(undefined8 *)(local_40 + 0x3b) = uVar2;
  uVar4 = s_GruModifyVadExecutableNetwork__r_001d9e79._24_8_;
  uVar3 = s_GruModifyVadExecutableNetwork__r_001d9e79._16_8_;
  uVar2 = s_GruModifyVadExecutableNetwork__r_001d9e79._0_8_;
  *(undefined8 *)(local_40 + 8) = s_GruModifyVadExecutableNetwork__r_001d9e79._8_8_;
  *(undefined8 *)local_40 = uVar2;
  *(undefined8 *)(local_40 + 0x18) = uVar4;
  *(undefined8 *)(local_40 + 0x10) = uVar3;
                    /* try { // try from 00358524 to 0035855b has its CatchHandler @ 0035855c */
  FUN_00374ee0(uVar5,&local_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar5,PTR_PTR_007a1338,PTR_FUN_007a11f8);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003585a8  FUN_003585a8 =====

void FUN_003585a8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar4 = *(undefined8 **)(param_1 + 0x68);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  **(undefined8 **)(param_1 + 0x50) = uVar2;
  lVar3 = *(long *)(param_1 + 0x70);
  *puVar4 = uVar2;
  *(undefined8 *)(lVar1 + -0x40) = uVar5;
  *(undefined8 *)(lVar3 + -0x40) = uVar5;
  return;
}


// ===== 003585d0  FUN_003585d0 =====

void FUN_003585d0(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[0x11];
  *param_1 = (long)(PTR_DAT_007a1500 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    FUN_00356334(param_1);
    return;
  }
  FUN_00356334(param_1);
  return;
}


// ===== 00358640  FUN_00358640 =====

void FUN_00358640(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[0x11];
  *param_1 = (long)(PTR_DAT_007a1500 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    FUN_00356334(param_1);
    free(param_1);
    return;
  }
  FUN_00356334(param_1);
  free(param_1);
  return;
}


// ===== 003586c0  FUN_003586c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003586c0(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  long *local_80;
  long *plStack_78;
  long *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *param_1 = (long)(PTR_DAT_007a14e0 + 0x10);
  plVar10 = param_1 + 1;
  *plVar10 = *param_2;
  lVar7 = param_2[1];
  param_1[2] = lVar7;
  if (lVar7 != 0) {
    FUN_00755c20(1,lVar7 + 8);
  }
                    /* try { // try from 0035872c to 00358733 has its CatchHandler @ 00358bb0 */
  FUN_0036dfcc(param_1 + 3);
                    /* try { // try from 00358734 to 0035873b has its CatchHandler @ 00358ba8 */
  FUN_0036dfcc(param_1 + 0xc);
  plStack_78 = (long *)((ulong)plStack_78 & 0xffffffffffffff00);
  plVar12 = param_1 + 0x15;
  *plVar12 = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  local_80 = plVar12;
                    /* try { // try from 00358750 to 00358757 has its CatchHandler @ 00358b98 */
  puVar5 = (undefined8 *)FUN_00759c3c(0x40);
  param_1[0x16] = (long)(puVar5 + 8);
  param_1[0x17] = (long)(puVar5 + 8);
  param_1[0x15] = (long)puVar5;
  plVar11 = param_1 + 0x18;
  *plVar11 = 0;
  param_1[0x19] = 0;
  puVar5[1] = 0;
  *puVar5 = 0;
  puVar5[3] = 0;
  puVar5[2] = 0;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  param_1[0x1a] = 0;
  plStack_78 = (long *)((ulong)plStack_78 & 0xffffffffffffff00);
  local_80 = plVar11;
                    /* try { // try from 00358784 to 0035878b has its CatchHandler @ 00358b88 */
  puVar5 = (undefined8 *)FUN_00759c3c(0x40);
  param_1[0x18] = (long)puVar5;
  param_1[0x19] = (long)(puVar5 + 8);
  param_1[0x1a] = (long)(puVar5 + 8);
  lVar7 = *param_2;
  puVar5[1] = 0;
  *puVar5 = 0;
  puVar5[3] = 0;
  puVar5[2] = 0;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  if (lVar7 == 0) {
                    /* try { // try from 003587ac to 003587b3 has its CatchHandler @ 00358b54 */
    local_70 = (long *)FUN_00759c3c(0x58);
    uVar4 = s_GruMiniExecutableNetwork__GruMin_001e8ac8._56_8_;
    uVar3 = s_GruMiniExecutableNetwork__GruMin_001e8ac8._48_8_;
    uVar2 = s_GruMiniExecutableNetwork__GruMin_001e8ac8._32_8_;
    plStack_78 = (long *)_UNK_00200878;
    local_80 = _DAT_00200870;
    *(undefined8 *)((long)local_70 + 0x28) = s_GruMiniExecutableNetwork__GruMin_001e8ac8._40_8_;
    *(undefined8 *)((long)local_70 + 0x20) = uVar2;
    *(undefined8 *)((long)local_70 + 0x38) = uVar4;
    *(undefined8 *)((long)local_70 + 0x30) = uVar3;
    uVar3 = s_GruMiniExecutableNetwork__GruMin_001e8ac8._72_8_;
    uVar2 = s_GruMiniExecutableNetwork__GruMin_001e8ac8._64_8_;
    *(char *)((long)local_70 + 0x50) = '\0';
    *(undefined8 *)((long)local_70 + 0x48) = uVar3;
    *(undefined8 *)((long)local_70 + 0x40) = uVar2;
    uVar4 = s_GruMiniExecutableNetwork__GruMin_001e8ac8._24_8_;
    uVar3 = s_GruMiniExecutableNetwork__GruMin_001e8ac8._16_8_;
    uVar2 = s_GruMiniExecutableNetwork__GruMin_001e8ac8._0_8_;
    *(undefined8 *)((long)local_70 + 8) = s_GruMiniExecutableNetwork__GruMin_001e8ac8._8_8_;
    *local_70 = uVar2;
    *(undefined8 *)((long)local_70 + 0x18) = uVar4;
    *(undefined8 *)((long)local_70 + 0x10) = uVar3;
                    /* try { // try from 003587e8 to 00358803 has its CatchHandler @ 00358b3c */
    FUN_00372794(&local_80,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/native/src/executable-networks/src/gru/krisp_gru_mini_executable_network.cpp"
                 ,0x19,"GruMiniExecutableNetwork");
    if (((ulong)local_80 & 1) != 0) {
      free(local_70);
    }
  }
                    /* try { // try from 00358818 to 0035881b has its CatchHandler @ 00358b84 */
  lVar7 = FUN_0035de40(*plVar10);
                    /* try { // try from 0035881c to 00358827 has its CatchHandler @ 00358b80 */
  local_80 = (long *)FUN_00759c3c(8);
  plStack_78 = local_80 + 1;
  *local_80 = lVar7;
                    /* try { // try from 00358834 to 0035883f has its CatchHandler @ 00358b64 */
  local_70 = plStack_78;
  FUN_0036e09c(param_1 + 3,&local_80);
  if (local_80 != (long *)0x0) {
    plStack_78 = local_80;
    free(local_80);
  }
                    /* try { // try from 00358854 to 00358857 has its CatchHandler @ 00358b60 */
  lVar7 = FUN_0035de68(*plVar10);
                    /* try { // try from 00358858 to 00358863 has its CatchHandler @ 00358b5c */
  local_80 = (long *)FUN_00759c3c(8);
  plStack_78 = local_80 + 1;
  *local_80 = lVar7;
                    /* try { // try from 00358870 to 0035887b has its CatchHandler @ 00358b58 */
  local_70 = plStack_78;
  FUN_0036e09c(param_1 + 0xc,&local_80);
  if (local_80 != (long *)0x0) {
    plStack_78 = local_80;
    free(local_80);
  }
  plVar6 = (long *)FUN_0036e624(param_1 + 3);
  lVar13 = *plVar6;
                    /* try { // try from 0035889c to 003588bf has its CatchHandler @ 00358bc0 */
  lVar7 = FUN_0035de60(*plVar10);
  plVar6 = (long *)*plVar12;
  *plVar6 = lVar13 + lVar7 * 4;
  FUN_00712d54(plVar6 + 1,"Input",5);
  local_80 = (long *)0x1;
                    /* try { // try from 003588cc to 0035893b has its CatchHandler @ 00358bbc */
  plStack_78 = (long *)FUN_0035de40(*plVar10);
  lVar7 = *plVar12;
  uVar9 = *(ulong *)(lVar7 + 0x30);
  puVar14 = (undefined8 *)(lVar7 + 0x20);
  puVar5 = (undefined8 *)*puVar14;
  if (uVar9 - (long)puVar5 < 0x10) {
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined8 **)(lVar7 + 0x28) = puVar5;
      free(puVar5);
      uVar9 = 0;
      *puVar14 = 0;
      *(undefined8 *)(lVar7 + 0x28) = 0;
      *(undefined8 *)(lVar7 + 0x30) = 0;
    }
    uVar8 = (long)uVar9 >> 2;
    if (uVar8 < 3) {
      uVar8 = 2;
    }
    if (0x7ffffffffffffff7 < uVar9) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 >> 0x3d != 0) {
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 00358b1c to 00358b23 has its CatchHandler @ 00358bbc */
                    /* WARNING: Subroutine does not return */
        FUN_0034e528(puVar14);
      }
      goto LAB_00358c04;
    }
    puVar5 = (undefined8 *)FUN_00759c3c(uVar8 << 3);
    *(undefined8 **)(lVar7 + 0x20) = puVar5;
    *(undefined8 **)(lVar7 + 0x30) = puVar5 + uVar8;
LAB_003589a0:
    puVar14 = puVar5 + 2;
    puVar5[1] = plStack_78;
    *puVar5 = local_80;
  }
  else {
    uVar9 = (long)*(undefined8 **)(lVar7 + 0x28) - (long)puVar5;
    if (0xf < uVar9) goto LAB_003589a0;
    if (*(undefined8 **)(lVar7 + 0x28) != puVar5) {
      memcpy(puVar5,&local_80,uVar9);
      puVar5 = *(undefined8 **)(lVar7 + 0x28);
    }
    memcpy(puVar5,(void *)((long)&local_80 + uVar9),0x10 - uVar9);
    puVar14 = (undefined8 *)((long)puVar5 + (0x10 - uVar9));
  }
  *(undefined8 **)(lVar7 + 0x28) = puVar14;
  uVar2 = DAT_001b70d8;
  *(undefined8 *)(*plVar12 + 0x38) = DAT_001b70d8;
  puVar5 = (undefined8 *)FUN_0036e624(param_1 + 3);
  puVar14 = (undefined8 *)*plVar11;
  *puVar14 = *puVar5;
                    /* try { // try from 003589d0 to 003589e3 has its CatchHandler @ 00358bc0 */
  FUN_00712d54(puVar14 + 1,"Output",6);
  local_80 = (long *)0x1;
                    /* try { // try from 003589f0 to 00358a5f has its CatchHandler @ 00358bb8 */
  plStack_78 = (long *)FUN_0035de68(*plVar10);
  lVar7 = *plVar11;
  uVar9 = *(ulong *)(lVar7 + 0x30);
  puVar14 = (undefined8 *)(lVar7 + 0x20);
  puVar5 = (undefined8 *)*puVar14;
  if (uVar9 - (long)puVar5 < 0x10) {
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined8 **)(lVar7 + 0x28) = puVar5;
      free(puVar5);
      uVar9 = 0;
      *puVar14 = 0;
      *(undefined8 *)(lVar7 + 0x28) = 0;
      *(undefined8 *)(lVar7 + 0x30) = 0;
    }
    uVar8 = (long)uVar9 >> 2;
    if (uVar8 < 3) {
      uVar8 = 2;
    }
    if (0x7ffffffffffffff7 < uVar9) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 >> 0x3d != 0) {
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 00358b34 to 00358b3b has its CatchHandler @ 00358bb8 */
                    /* WARNING: Subroutine does not return */
        FUN_0034e528(puVar14);
      }
      goto LAB_00358c04;
    }
    puVar5 = (undefined8 *)FUN_00759c3c(uVar8 << 3);
    *(undefined8 **)(lVar7 + 0x20) = puVar5;
    *(undefined8 **)(lVar7 + 0x30) = puVar5 + uVar8;
LAB_00358ac4:
    puVar14 = puVar5 + 2;
    puVar5[1] = plStack_78;
    *puVar5 = local_80;
  }
  else {
    uVar9 = (long)*(undefined8 **)(lVar7 + 0x28) - (long)puVar5;
    if (0xf < uVar9) goto LAB_00358ac4;
    if (*(undefined8 **)(lVar7 + 0x28) != puVar5) {
      memcpy(puVar5,&local_80,uVar9);
      puVar5 = *(undefined8 **)(lVar7 + 0x28);
    }
    memcpy(puVar5,(void *)((long)&local_80 + uVar9),0x10 - uVar9);
    puVar14 = (undefined8 *)((long)puVar5 + (0x10 - uVar9));
  }
  *(undefined8 **)(lVar7 + 0x28) = puVar14;
  *(undefined8 *)(*plVar11 + 0x38) = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
LAB_00358c04:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00358c08  FUN_00358c08 =====

void FUN_00358c08(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 auStack_70 [72];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_0035de90(auStack_70,*(undefined8 *)(param_1 + 8),param_1 + 0x18);
                    /* try { // try from 00358c38 to 00358c43 has its CatchHandler @ 00358c80 */
  FUN_0036e450(param_1 + 0x60,auStack_70);
  puVar2 = (undefined8 *)FUN_0036e624(param_1 + 0x60);
  **(undefined8 **)(param_1 + 0xc0) = *puVar2;
  FUN_0036e048(auStack_70);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00358ca8  FUN_00358ca8 =====

long FUN_00358ca8(long param_1)

{
  return param_1 + 0xa8;
}


// ===== 00358cb0  FUN_00358cb0 =====

long FUN_00358cb0(long param_1)

{
  return param_1 + 0xc0;
}


// ===== 00358cb8  FUN_00358cb8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00358cb8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = FUN_00753a74(0x20);
                    /* try { // try from 00358ce4 to 00358ceb has its CatchHandler @ 00358d78 */
  local_40 = (char *)FUN_00759c3c(0x38);
  uVar4 = s_GruMiniExecutableNetwork__reset__001c732a._24_8_;
  uVar3 = s_GruMiniExecutableNetwork__reset__001c732a._16_8_;
  uVar2 = s_GruMiniExecutableNetwork__reset__001c732a._0_8_;
  uStack_48 = _UNK_00200b18;
  local_50 = _DAT_00200b10;
  *(undefined8 *)(local_40 + 8) = s_GruMiniExecutableNetwork__reset__001c732a._8_8_;
  *(undefined8 *)local_40 = uVar2;
  *(undefined8 *)(local_40 + 0x18) = uVar4;
  *(undefined8 *)(local_40 + 0x10) = uVar3;
  uVar3 = s_GruMiniExecutableNetwork__reset__001c732a._40_8_;
  uVar2 = s_GruMiniExecutableNetwork__reset__001c732a._32_8_;
  local_40[0x30] = '\0';
  *(undefined8 *)(local_40 + 0x28) = uVar3;
  *(undefined8 *)(local_40 + 0x20) = uVar2;
                    /* try { // try from 00358d1c to 00358d53 has its CatchHandler @ 00358d54 */
  FUN_00374fd0(uVar5,&local_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar5,PTR_PTR_007a1350,PTR_FUN_007a11f8);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00358da0  FUN_00358da0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00358da0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar6 = FUN_00753a74(0x20);
                    /* try { // try from 00358dcc to 00358dd3 has its CatchHandler @ 00358e70 */
  local_40 = (char *)FUN_00759c3c(0x60);
  uVar4 = s_GruMiniExecutableNetwork__reshap_001b9a67._56_8_;
  uVar3 = s_GruMiniExecutableNetwork__reshap_001b9a67._48_8_;
  uVar2 = s_GruMiniExecutableNetwork__reshap_001b9a67._32_8_;
  uStack_48 = _UNK_00200758;
  local_50 = _DAT_00200750;
  *(undefined8 *)(local_40 + 0x28) = s_GruMiniExecutableNetwork__reshap_001b9a67._40_8_;
  *(undefined8 *)(local_40 + 0x20) = uVar2;
  *(undefined8 *)(local_40 + 0x38) = uVar4;
  *(undefined8 *)(local_40 + 0x30) = uVar3;
  uVar5 = s_GruMiniExecutableNetwork__reshap_001b9a67._81_8_;
  uVar4 = s_GruMiniExecutableNetwork__reshap_001b9a67._64_8_;
  uVar2 = CONCAT71(s_GruMiniExecutableNetwork__reshap_001b9a67._73_7_,
                   s_GruMiniExecutableNetwork__reshap_001b9a67[0x48]);
  uVar3 = CONCAT17(s_GruMiniExecutableNetwork__reshap_001b9a67[0x50],
                   s_GruMiniExecutableNetwork__reshap_001b9a67._73_7_);
  local_40[0x59] = '\0';
  *(undefined8 *)(local_40 + 0x48) = uVar2;
  *(undefined8 *)(local_40 + 0x40) = uVar4;
  *(undefined8 *)(local_40 + 0x51) = uVar5;
  *(undefined8 *)(local_40 + 0x49) = uVar3;
  uVar4 = s_GruMiniExecutableNetwork__reshap_001b9a67._24_8_;
  uVar3 = s_GruMiniExecutableNetwork__reshap_001b9a67._16_8_;
  uVar2 = s_GruMiniExecutableNetwork__reshap_001b9a67._0_8_;
  *(undefined8 *)(local_40 + 8) = s_GruMiniExecutableNetwork__reshap_001b9a67._8_8_;
  *(undefined8 *)local_40 = uVar2;
  *(undefined8 *)(local_40 + 0x18) = uVar4;
  *(undefined8 *)(local_40 + 0x10) = uVar3;
                    /* try { // try from 00358e14 to 00358e4b has its CatchHandler @ 00358e4c */
  FUN_00374e68(uVar6,&local_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar6,PTR_PTR_007a14e8,PTR_FUN_007a11f8);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00358e98  FUN_00358e98 =====

void FUN_00358e98(long *param_1)

{
  void *pvVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x18];
  *param_1 = (long)(PTR_DAT_007a14e0 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x19];
    pvVar1 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        pvVar1 = *(void **)((long)pvVar5 + -0x20);
        if (pvVar1 != (void *)0x0) {
          *(void **)((long)pvVar5 + -0x18) = pvVar1;
          free(pvVar1);
        }
        if ((*(byte *)((long)pvVar5 + -0x38) & 1) != 0) {
          free(*(void **)((long)pvVar5 + -0x28));
        }
        pvVar5 = (void *)((long)pvVar5 + -0x40);
      } while (pvVar5 != pvVar4);
      pvVar1 = (void *)param_1[0x18];
    }
    param_1[0x19] = (long)pvVar4;
    free(pvVar1);
  }
  pvVar4 = (void *)param_1[0x15];
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x16];
    pvVar1 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        pvVar1 = *(void **)((long)pvVar5 + -0x20);
        if (pvVar1 != (void *)0x0) {
          *(void **)((long)pvVar5 + -0x18) = pvVar1;
          free(pvVar1);
        }
        if ((*(byte *)((long)pvVar5 + -0x38) & 1) != 0) {
          free(*(void **)((long)pvVar5 + -0x28));
        }
        pvVar5 = (void *)((long)pvVar5 + -0x40);
      } while (pvVar5 != pvVar4);
      pvVar1 = (void *)param_1[0x15];
    }
    param_1[0x16] = (long)pvVar4;
    free(pvVar1);
  }
  FUN_0036e048(param_1 + 0xc);
  FUN_0036e048(param_1 + 3);
  plVar3 = (long *)param_1[2];
  if ((plVar3 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
    return;
  }
  return;
}


// ===== 00358fc8  FUN_00358fc8 =====

void FUN_00358fc8(void *param_1)

{
  FUN_00358e98();
  free(param_1);
  return;
}


// ===== 00358fec  FUN_00358fec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00358fec(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  long *local_80;
  long *plStack_78;
  long *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *param_1 = (long)(PTR_DAT_007a14f0 + 0x10);
  plVar11 = param_1 + 1;
  *plVar11 = *param_2;
  lVar8 = param_2[1];
  param_1[2] = lVar8;
  if (lVar8 != 0) {
    FUN_00755c20(1,lVar8 + 8);
  }
                    /* try { // try from 00359058 to 0035905f has its CatchHandler @ 003594e4 */
  FUN_0036dfcc(param_1 + 3);
                    /* try { // try from 00359060 to 00359067 has its CatchHandler @ 003594dc */
  FUN_0036dfcc(param_1 + 0xc);
  plStack_78 = (long *)((ulong)plStack_78 & 0xffffffffffffff00);
  plVar13 = param_1 + 0x15;
  *plVar13 = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  local_80 = plVar13;
                    /* try { // try from 0035907c to 00359083 has its CatchHandler @ 003594cc */
  puVar6 = (undefined8 *)FUN_00759c3c(0x40);
  param_1[0x16] = (long)(puVar6 + 8);
  param_1[0x17] = (long)(puVar6 + 8);
  param_1[0x15] = (long)puVar6;
  plVar12 = param_1 + 0x18;
  *plVar12 = 0;
  param_1[0x19] = 0;
  puVar6[1] = 0;
  *puVar6 = 0;
  puVar6[3] = 0;
  puVar6[2] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  param_1[0x1a] = 0;
  plStack_78 = (long *)((ulong)plStack_78 & 0xffffffffffffff00);
  local_80 = plVar12;
                    /* try { // try from 003590b0 to 003590b7 has its CatchHandler @ 003594bc */
  puVar6 = (undefined8 *)FUN_00759c3c(0x40);
  param_1[0x18] = (long)puVar6;
  param_1[0x19] = (long)(puVar6 + 8);
  param_1[0x1a] = (long)(puVar6 + 8);
  lVar8 = *param_2;
  puVar6[1] = 0;
  *puVar6 = 0;
  puVar6[3] = 0;
  puVar6[2] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  if (lVar8 == 0) {
                    /* try { // try from 003590d8 to 003590df has its CatchHandler @ 00359488 */
    local_70 = (long *)FUN_00759c3c(0x60);
    uVar5 = s_GruMiniLoraExecutableNetwork__Gr_001d5ac1._80_8_;
    uVar4 = s_GruMiniLoraExecutableNetwork__Gr_001d5ac1._56_8_;
    uVar3 = s_GruMiniLoraExecutableNetwork__Gr_001d5ac1._48_8_;
    uVar2 = s_GruMiniLoraExecutableNetwork__Gr_001d5ac1._32_8_;
    plStack_78 = (long *)_UNK_00200568;
    local_80 = _DAT_00200560;
    *(undefined8 *)((long)local_70 + 0x28) = s_GruMiniLoraExecutableNetwork__Gr_001d5ac1._40_8_;
    *(undefined8 *)((long)local_70 + 0x20) = uVar2;
    *(undefined8 *)((long)local_70 + 0x38) = uVar4;
    *(undefined8 *)((long)local_70 + 0x30) = uVar3;
    uVar3 = s_GruMiniLoraExecutableNetwork__Gr_001d5ac1._72_8_;
    uVar2 = s_GruMiniLoraExecutableNetwork__Gr_001d5ac1._64_8_;
    *(undefined8 *)((long)local_70 + 0x50) = uVar5;
    *(undefined8 *)((long)local_70 + 0x48) = uVar3;
    *(undefined8 *)((long)local_70 + 0x40) = uVar2;
    uVar5 = s_GruMiniLoraExecutableNetwork__Gr_001d5ac1._24_8_;
    uVar4 = s_GruMiniLoraExecutableNetwork__Gr_001d5ac1._16_8_;
    uVar3 = s_GruMiniLoraExecutableNetwork__Gr_001d5ac1._8_8_;
    uVar2 = s_GruMiniLoraExecutableNetwork__Gr_001d5ac1._0_8_;
    *(char *)((long)local_70 + 0x58) = '\0';
    *(undefined8 *)((long)local_70 + 8) = uVar3;
    *local_70 = uVar2;
    *(undefined8 *)((long)local_70 + 0x18) = uVar5;
    *(undefined8 *)((long)local_70 + 0x10) = uVar4;
                    /* try { // try from 0035911c to 00359137 has its CatchHandler @ 00359470 */
    FUN_00372794(&local_80,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/native/src/executable-networks/src/gru/krisp_gru_mini_lora_executable_network.cpp"
                 ,0x19,"GruMiniLoraExecutableNetwork");
    if (((ulong)local_80 & 1) != 0) {
      free(local_70);
    }
  }
                    /* try { // try from 0035914c to 0035914f has its CatchHandler @ 003594b8 */
  lVar8 = FUN_0035df38(*plVar11);
                    /* try { // try from 00359150 to 0035915b has its CatchHandler @ 003594b4 */
  local_80 = (long *)FUN_00759c3c(8);
  plStack_78 = local_80 + 1;
  *local_80 = lVar8;
                    /* try { // try from 00359168 to 00359173 has its CatchHandler @ 00359498 */
  local_70 = plStack_78;
  FUN_0036e09c(param_1 + 3,&local_80);
  if (local_80 != (long *)0x0) {
    plStack_78 = local_80;
    free(local_80);
  }
                    /* try { // try from 00359188 to 0035918b has its CatchHandler @ 00359494 */
  lVar8 = FUN_0035df64(*plVar11);
                    /* try { // try from 0035918c to 00359197 has its CatchHandler @ 00359490 */
  local_80 = (long *)FUN_00759c3c(8);
  plStack_78 = local_80 + 1;
  *local_80 = lVar8;
                    /* try { // try from 003591a4 to 003591af has its CatchHandler @ 0035948c */
  local_70 = plStack_78;
  FUN_0036e09c(param_1 + 0xc,&local_80);
  if (local_80 != (long *)0x0) {
    plStack_78 = local_80;
    free(local_80);
  }
  plVar7 = (long *)FUN_0036e624(param_1 + 3);
  lVar14 = *plVar7;
                    /* try { // try from 003591d0 to 003591f3 has its CatchHandler @ 003594f4 */
  lVar8 = FUN_0035df5c(*plVar11);
  plVar7 = (long *)*plVar13;
  *plVar7 = lVar14 + lVar8 * 4;
  FUN_00712d54(plVar7 + 1,"Input",5);
  local_80 = (long *)0x1;
                    /* try { // try from 00359200 to 0035926f has its CatchHandler @ 003594f0 */
  plStack_78 = (long *)FUN_0035df38(*plVar11);
  lVar8 = *plVar13;
  uVar10 = *(ulong *)(lVar8 + 0x30);
  puVar15 = (undefined8 *)(lVar8 + 0x20);
  puVar6 = (undefined8 *)*puVar15;
  if (uVar10 - (long)puVar6 < 0x10) {
    if (puVar6 != (undefined8 *)0x0) {
      *(undefined8 **)(lVar8 + 0x28) = puVar6;
      free(puVar6);
      uVar10 = 0;
      *puVar15 = 0;
      *(undefined8 *)(lVar8 + 0x28) = 0;
      *(undefined8 *)(lVar8 + 0x30) = 0;
    }
    uVar9 = (long)uVar10 >> 2;
    if (uVar9 < 3) {
      uVar9 = 2;
    }
    if (0x7ffffffffffffff7 < uVar10) {
      uVar9 = 0x1fffffffffffffff;
    }
    if (uVar9 >> 0x3d != 0) {
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 00359450 to 00359457 has its CatchHandler @ 003594f0 */
                    /* WARNING: Subroutine does not return */
        FUN_0034e528(puVar15);
      }
      goto LAB_00359538;
    }
    puVar6 = (undefined8 *)FUN_00759c3c(uVar9 << 3);
    *(undefined8 **)(lVar8 + 0x20) = puVar6;
    *(undefined8 **)(lVar8 + 0x30) = puVar6 + uVar9;
LAB_003592d4:
    puVar15 = puVar6 + 2;
    puVar6[1] = plStack_78;
    *puVar6 = local_80;
  }
  else {
    uVar10 = (long)*(undefined8 **)(lVar8 + 0x28) - (long)puVar6;
    if (0xf < uVar10) goto LAB_003592d4;
    if (*(undefined8 **)(lVar8 + 0x28) != puVar6) {
      memcpy(puVar6,&local_80,uVar10);
      puVar6 = *(undefined8 **)(lVar8 + 0x28);
    }
    memcpy(puVar6,(void *)((long)&local_80 + uVar10),0x10 - uVar10);
    puVar15 = (undefined8 *)((long)puVar6 + (0x10 - uVar10));
  }
  *(undefined8 **)(lVar8 + 0x28) = puVar15;
  uVar2 = DAT_001b70d8;
  *(undefined8 *)(*plVar13 + 0x38) = DAT_001b70d8;
  puVar6 = (undefined8 *)FUN_0036e624(param_1 + 3);
  puVar15 = (undefined8 *)*plVar12;
  *puVar15 = *puVar6;
                    /* try { // try from 00359304 to 00359317 has its CatchHandler @ 003594f4 */
  FUN_00712d54(puVar15 + 1,"Output",6);
  local_80 = (long *)0x1;
                    /* try { // try from 00359324 to 00359393 has its CatchHandler @ 003594ec */
  plStack_78 = (long *)FUN_0035df64(*plVar11);
  lVar8 = *plVar12;
  uVar10 = *(ulong *)(lVar8 + 0x30);
  puVar15 = (undefined8 *)(lVar8 + 0x20);
  puVar6 = (undefined8 *)*puVar15;
  if (uVar10 - (long)puVar6 < 0x10) {
    if (puVar6 != (undefined8 *)0x0) {
      *(undefined8 **)(lVar8 + 0x28) = puVar6;
      free(puVar6);
      uVar10 = 0;
      *puVar15 = 0;
      *(undefined8 *)(lVar8 + 0x28) = 0;
      *(undefined8 *)(lVar8 + 0x30) = 0;
    }
    uVar9 = (long)uVar10 >> 2;
    if (uVar9 < 3) {
      uVar9 = 2;
    }
    if (0x7ffffffffffffff7 < uVar10) {
      uVar9 = 0x1fffffffffffffff;
    }
    if (uVar9 >> 0x3d != 0) {
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 00359468 to 0035946f has its CatchHandler @ 003594ec */
                    /* WARNING: Subroutine does not return */
        FUN_0034e528(puVar15);
      }
      goto LAB_00359538;
    }
    puVar6 = (undefined8 *)FUN_00759c3c(uVar9 << 3);
    *(undefined8 **)(lVar8 + 0x20) = puVar6;
    *(undefined8 **)(lVar8 + 0x30) = puVar6 + uVar9;
LAB_003593f8:
    puVar15 = puVar6 + 2;
    puVar6[1] = plStack_78;
    *puVar6 = local_80;
  }
  else {
    uVar10 = (long)*(undefined8 **)(lVar8 + 0x28) - (long)puVar6;
    if (0xf < uVar10) goto LAB_003593f8;
    if (*(undefined8 **)(lVar8 + 0x28) != puVar6) {
      memcpy(puVar6,&local_80,uVar10);
      puVar6 = *(undefined8 **)(lVar8 + 0x28);
    }
    memcpy(puVar6,(void *)((long)&local_80 + uVar10),0x10 - uVar10);
    puVar15 = (undefined8 *)((long)puVar6 + (0x10 - uVar10));
  }
  *(undefined8 **)(lVar8 + 0x28) = puVar15;
  *(undefined8 *)(*plVar12 + 0x38) = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
LAB_00359538:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035953c  FUN_0035953c =====

void FUN_0035953c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 auStack_70 [72];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_0035df8c(auStack_70,*(undefined8 *)(param_1 + 8),param_1 + 0x18);
                    /* try { // try from 0035956c to 00359577 has its CatchHandler @ 003595b4 */
  FUN_0036e450(param_1 + 0x60,auStack_70);
  puVar2 = (undefined8 *)FUN_0036e624(param_1 + 0x60);
  **(undefined8 **)(param_1 + 0xc0) = *puVar2;
  FUN_0036e048(auStack_70);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003595dc  FUN_003595dc =====

long FUN_003595dc(long param_1)

{
  return param_1 + 0xa8;
}


// ===== 003595e4  FUN_003595e4 =====

long FUN_003595e4(long param_1)

{
  return param_1 + 0xc0;
}


// ===== 003595ec  FUN_003595ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003595ec(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar6 = FUN_00753a74(0x20);
                    /* try { // try from 00359618 to 0035961f has its CatchHandler @ 003596b8 */
  local_40 = (char *)FUN_00759c3c(0x38);
  uVar5 = s_GruMiniLoraExecutableNetwork__re_001b9ac1._24_8_;
  uVar4 = s_GruMiniLoraExecutableNetwork__re_001b9ac1._16_8_;
  uVar3 = s_GruMiniLoraExecutableNetwork__re_001b9ac1._8_8_;
  uVar2 = s_GruMiniLoraExecutableNetwork__re_001b9ac1._0_8_;
  local_40[0x34] = '\0';
  *(undefined8 *)(local_40 + 8) = uVar3;
  *(undefined8 *)local_40 = uVar2;
  *(undefined8 *)(local_40 + 0x18) = uVar5;
  *(undefined8 *)(local_40 + 0x10) = uVar4;
  uVar3 = s_GruMiniLoraExecutableNetwork__re_001b9ac1._40_8_;
  uVar2 = s_GruMiniLoraExecutableNetwork__re_001b9ac1._32_8_;
  uStack_48 = _UNK_002000b8;
  local_50 = _DAT_002000b0;
  local_40[0x30] = 'n';
  local_40[0x31] = 't';
  local_40[0x32] = 'e';
  local_40[0x33] = 'd';
  *(undefined8 *)(local_40 + 0x28) = uVar3;
  *(undefined8 *)(local_40 + 0x20) = uVar2;
                    /* try { // try from 0035965c to 00359693 has its CatchHandler @ 00359694 */
  FUN_00374fd0(uVar6,&local_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar6,PTR_PTR_007a1350,PTR_FUN_007a11f8);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003596e0  FUN_003596e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003596e0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar6 = FUN_00753a74(0x20);
                    /* try { // try from 0035970c to 00359713 has its CatchHandler @ 003597b0 */
  local_40 = (char *)FUN_00759c3c(0x60);
  uVar4 = s_GruMiniLoraExecutableNetwork__re_001e8b19._56_8_;
  uVar3 = s_GruMiniLoraExecutableNetwork__re_001e8b19._48_8_;
  uVar2 = s_GruMiniLoraExecutableNetwork__re_001e8b19._32_8_;
  uStack_48 = _UNK_00200a08;
  local_50 = _DAT_00200a00;
  *(undefined8 *)(local_40 + 0x28) = s_GruMiniLoraExecutableNetwork__re_001e8b19._40_8_;
  *(undefined8 *)(local_40 + 0x20) = uVar2;
  *(undefined8 *)(local_40 + 0x38) = uVar4;
  *(undefined8 *)(local_40 + 0x30) = uVar3;
  uVar5 = s_GruMiniLoraExecutableNetwork__re_001e8b19._85_8_;
  uVar4 = s_GruMiniLoraExecutableNetwork__re_001e8b19._64_8_;
  uVar2 = CONCAT35(s_GruMiniLoraExecutableNetwork__re_001e8b19._77_3_,
                   s_GruMiniLoraExecutableNetwork__re_001e8b19._72_5_);
  uVar3 = CONCAT53(s_GruMiniLoraExecutableNetwork__re_001e8b19._80_5_,
                   s_GruMiniLoraExecutableNetwork__re_001e8b19._77_3_);
  local_40[0x5d] = '\0';
  *(undefined8 *)(local_40 + 0x48) = uVar2;
  *(undefined8 *)(local_40 + 0x40) = uVar4;
  *(undefined8 *)(local_40 + 0x55) = uVar5;
  *(undefined8 *)(local_40 + 0x4d) = uVar3;
  uVar4 = s_GruMiniLoraExecutableNetwork__re_001e8b19._24_8_;
  uVar3 = s_GruMiniLoraExecutableNetwork__re_001e8b19._16_8_;
  uVar2 = s_GruMiniLoraExecutableNetwork__re_001e8b19._0_8_;
  *(undefined8 *)(local_40 + 8) = s_GruMiniLoraExecutableNetwork__re_001e8b19._8_8_;
  *(undefined8 *)local_40 = uVar2;
  *(undefined8 *)(local_40 + 0x18) = uVar4;
  *(undefined8 *)(local_40 + 0x10) = uVar3;
                    /* try { // try from 00359754 to 0035978b has its CatchHandler @ 0035978c */
  FUN_00374e68(uVar6,&local_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar6,PTR_PTR_007a14e8,PTR_FUN_007a11f8);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003597d8  FUN_003597d8 =====

void FUN_003597d8(long *param_1)

{
  void *pvVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x18];
  *param_1 = (long)(PTR_DAT_007a14f0 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x19];
    pvVar1 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        pvVar1 = *(void **)((long)pvVar5 + -0x20);
        if (pvVar1 != (void *)0x0) {
          *(void **)((long)pvVar5 + -0x18) = pvVar1;
          free(pvVar1);
        }
        if ((*(byte *)((long)pvVar5 + -0x38) & 1) != 0) {
          free(*(void **)((long)pvVar5 + -0x28));
        }
        pvVar5 = (void *)((long)pvVar5 + -0x40);
      } while (pvVar5 != pvVar4);
      pvVar1 = (void *)param_1[0x18];
    }
    param_1[0x19] = (long)pvVar4;
    free(pvVar1);
  }
  pvVar4 = (void *)param_1[0x15];
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x16];
    pvVar1 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        pvVar1 = *(void **)((long)pvVar5 + -0x20);
        if (pvVar1 != (void *)0x0) {
          *(void **)((long)pvVar5 + -0x18) = pvVar1;
          free(pvVar1);
        }
        if ((*(byte *)((long)pvVar5 + -0x38) & 1) != 0) {
          free(*(void **)((long)pvVar5 + -0x28));
        }
        pvVar5 = (void *)((long)pvVar5 + -0x40);
      } while (pvVar5 != pvVar4);
      pvVar1 = (void *)param_1[0x15];
    }
    param_1[0x16] = (long)pvVar4;
    free(pvVar1);
  }
  FUN_0036e048(param_1 + 0xc);
  FUN_0036e048(param_1 + 3);
  plVar3 = (long *)param_1[2];
  if ((plVar3 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
    return;
  }
  return;
}


// ===== 00359908  FUN_00359908 =====

void FUN_00359908(void *param_1)

{
  FUN_003597d8();
  free(param_1);
  return;
}


// ===== 0035992c  FUN_0035992c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0035992c(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  ulong local_50;
  undefined8 uStack_48;
  char *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  plVar8 = (long *)*param_2;
  if (plVar8 == (long *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  FUN_00356744(param_1,uVar7);
  lVar9 = *param_2;
  lVar2 = param_2[1];
  puVar1 = PTR_DAT_007a1508 + 0x10;
  param_1[0x10] = lVar9;
  *param_1 = (long)puVar1;
  param_1[0x11] = lVar2;
  if (lVar2 != 0) {
    FUN_00755c20(1,lVar2 + 8);
    lVar9 = *param_2;
  }
  if (lVar9 == 0) {
                    /* try { // try from 003599b8 to 003599bf has its CatchHandler @ 00359a64 */
    local_40 = (char *)FUN_00759c3c(0x60);
    uVar6 = s_GruSepDenseExecutableNetwork__Gr_001cfbe8._80_8_;
    uVar5 = s_GruSepDenseExecutableNetwork__Gr_001cfbe8._56_8_;
    uVar4 = s_GruSepDenseExecutableNetwork__Gr_001cfbe8._48_8_;
    uVar7 = s_GruSepDenseExecutableNetwork__Gr_001cfbe8._32_8_;
    uStack_48 = _UNK_00200568;
    local_50 = _DAT_00200560;
    *(undefined8 *)(local_40 + 0x28) = s_GruSepDenseExecutableNetwork__Gr_001cfbe8._40_8_;
    *(undefined8 *)(local_40 + 0x20) = uVar7;
    *(undefined8 *)(local_40 + 0x38) = uVar5;
    *(undefined8 *)(local_40 + 0x30) = uVar4;
    uVar4 = s_GruSepDenseExecutableNetwork__Gr_001cfbe8._72_8_;
    uVar7 = s_GruSepDenseExecutableNetwork__Gr_001cfbe8._64_8_;
    *(undefined8 *)(local_40 + 0x50) = uVar6;
    *(undefined8 *)(local_40 + 0x48) = uVar4;
    *(undefined8 *)(local_40 + 0x40) = uVar7;
    uVar6 = s_GruSepDenseExecutableNetwork__Gr_001cfbe8._24_8_;
    uVar5 = s_GruSepDenseExecutableNetwork__Gr_001cfbe8._16_8_;
    uVar4 = s_GruSepDenseExecutableNetwork__Gr_001cfbe8._8_8_;
    uVar7 = s_GruSepDenseExecutableNetwork__Gr_001cfbe8._0_8_;
    local_40[0x58] = '\0';
    *(undefined8 *)(local_40 + 8) = uVar4;
    *(undefined8 *)local_40 = uVar7;
    *(undefined8 *)(local_40 + 0x18) = uVar6;
    *(undefined8 *)(local_40 + 0x10) = uVar5;
                    /* try { // try from 003599fc to 00359a17 has its CatchHandler @ 00359a4c */
    FUN_00372794(&local_50,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/native/src/executable-networks/src/gru/krisp_gru_sep_dense_executable_network.cpp"
                 ,0x10,"GruSepDenseExecutableNetwork");
    if ((local_50 & 1) != 0) {
      free(local_40);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00359a94  FUN_00359a94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00359a94(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *__dest;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *local_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  (**(code **)(*(long *)param_1[0x10] + 0x18))
            ((long *)param_1[0x10],param_1 + 1,param_1 + 7,param_1 + 4);
  lVar8 = param_1[4];
  lVar1 = param_1[5];
  lVar6 = param_1[0xd];
  local_60 = (undefined8 *)FUN_00759c3c(0x10);
  lVar5 = *param_1;
  puStack_58 = local_60 + 2;
  *local_60 = 1;
  local_60[1] = lVar1 - lVar8 >> 2;
  puStack_50 = puStack_58;
                    /* try { // try from 00359b0c to 00359b1b has its CatchHandler @ 00359c60 */
  (**(code **)(lVar5 + 0x20))(param_1,lVar6,&local_60);
  if (local_60 != (undefined8 *)0x0) {
    puStack_58 = local_60;
    free(local_60);
  }
  lVar8 = param_1[10];
  uVar3 = *(ulong *)(lVar8 + 0x30);
  puVar7 = (undefined8 *)(lVar8 + 0x20);
  __dest = (undefined8 *)*puVar7;
  puStack_58 = (undefined8 *)_UNK_00200988;
  local_60 = _DAT_00200980;
  if (uVar3 - (long)__dest < 0x10) {
    if (__dest != (undefined8 *)0x0) {
      *(undefined8 **)(lVar8 + 0x28) = __dest;
      free(__dest);
      uVar3 = 0;
      *puVar7 = 0;
      *(undefined8 *)(lVar8 + 0x28) = 0;
      *(undefined8 *)(lVar8 + 0x30) = 0;
    }
    uVar4 = (long)uVar3 >> 2;
    if (uVar4 < 3) {
      uVar4 = 2;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar4 = 0x1fffffffffffffff;
    }
    if (uVar4 >> 0x3d != 0) {
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_0034e528(puVar7);
      }
      goto LAB_00359c90;
    }
    __dest = (undefined8 *)FUN_00759c3c(uVar4 * 8);
    *(undefined8 **)(lVar8 + 0x20) = __dest;
    *(undefined8 **)(lVar8 + 0x30) = __dest + uVar4;
LAB_00359c04:
    puVar7 = __dest + 2;
    __dest[1] = puStack_58;
    *__dest = local_60;
  }
  else {
    uVar3 = (long)*(undefined8 **)(lVar8 + 0x28) - (long)__dest;
    if (0xf < uVar3) goto LAB_00359c04;
    if (*(undefined8 **)(lVar8 + 0x28) != __dest) {
      memcpy(__dest,&local_60,uVar3);
      __dest = *(undefined8 **)(lVar8 + 0x28);
    }
    memcpy(__dest,(void *)((long)&local_60 + uVar3),0x10 - uVar3);
    puVar7 = (undefined8 *)((long)__dest + (0x10 - uVar3));
  }
  *(undefined8 **)(lVar8 + 0x28) = puVar7;
  (**(code **)(*param_1 + 0x38))(param_1);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_00359c90:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00359c94  FUN_00359c94 =====

void FUN_00359c94(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[0x11];
  *param_1 = (long)(PTR_DAT_007a1508 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    FUN_00356334(param_1);
    return;
  }
  FUN_00356334(param_1);
  return;
}


// ===== 00359d04  FUN_00359d04 =====

void FUN_00359d04(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[0x11];
  *param_1 = (long)(PTR_DAT_007a1508 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    FUN_00356334(param_1);
    free(param_1);
    return;
  }
  FUN_00356334(param_1);
  free(param_1);
  return;
}


// ===== 00359d84  FUN_00359d84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00359d84(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  FUN_0035af2c();
  *param_1 = (long)(PTR_DAT_007a1630 + 0x10);
                    /* try { // try from 00359dd0 to 00359ddf has its CatchHandler @ 0035a094 */
  FUN_00361828(param_1 + 4,param_2);
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  plVar8 = (long *)param_1[4];
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
  if ((ulong)((plVar8[1] - *plVar8 >> 3) * -0x3333333333333333) <
      (((long *)param_1[6])[1] - *(long *)param_1[6] >> 3) * -0x3333333333333333 - 1U) {
                    /* try { // try from 00359e48 to 00359e4f has its CatchHandler @ 0035a060 */
    local_70 = (char *)FUN_00759c3c(0x68);
    uStack_78 = _UNK_00200888;
    local_80 = _DAT_00200880;
    uVar6 = s_GruLayerNormExecutableNetworkRun_001f3081._56_8_;
    uVar5 = s_GruLayerNormExecutableNetworkRun_001f3081._48_8_;
    uVar4 = s_GruLayerNormExecutableNetworkRun_001f3081._40_8_;
    uVar3 = s_GruLayerNormExecutableNetworkRun_001f3081._32_8_;
    local_70[0x60] = '.';
    local_70[0x61] = '\0';
    *(undefined8 *)(local_70 + 0x28) = uVar4;
    *(undefined8 *)(local_70 + 0x20) = uVar3;
    *(undefined8 *)(local_70 + 0x38) = uVar6;
    *(undefined8 *)(local_70 + 0x30) = uVar5;
    uVar5 = s_GruLayerNormExecutableNetworkRun_001f3081._88_8_;
    uVar4 = s_GruLayerNormExecutableNetworkRun_001f3081._80_8_;
    uVar3 = s_GruLayerNormExecutableNetworkRun_001f3081._64_8_;
    *(undefined8 *)(local_70 + 0x48) = s_GruLayerNormExecutableNetworkRun_001f3081._72_8_;
    *(undefined8 *)(local_70 + 0x40) = uVar3;
    *(undefined8 *)(local_70 + 0x58) = uVar5;
    *(undefined8 *)(local_70 + 0x50) = uVar4;
    uVar5 = s_GruLayerNormExecutableNetworkRun_001f3081._24_8_;
    uVar4 = s_GruLayerNormExecutableNetworkRun_001f3081._16_8_;
    uVar3 = s_GruLayerNormExecutableNetworkRun_001f3081._0_8_;
    *(undefined8 *)(local_70 + 8) = s_GruLayerNormExecutableNetworkRun_001f3081._8_8_;
    *(undefined8 *)local_70 = uVar3;
    *(undefined8 *)(local_70 + 0x18) = uVar5;
    *(undefined8 *)(local_70 + 0x10) = uVar4;
                    /* try { // try from 00359e88 to 00359ea3 has its CatchHandler @ 0035a048 */
    FUN_00372794(&local_80,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/native/src/networks/src/gru/gru_layer_norm_executable_network_runtime.cpp"
                 ,0x11,"GruLayerNormExecutableNetworkRuntime");
    if ((local_80 & 1) != 0) {
      free(local_70);
    }
    plVar8 = (long *)param_1[4];
  }
                    /* try { // try from 00359ebc to 00359ecf has its CatchHandler @ 0035a09c */
  FUN_0035af5c(plVar8,param_1[5],param_1 + 0x1e);
  FUN_0035af5c(param_1[6],param_1[7],param_1 + 0x21);
  lVar9 = param_1[8];
  lVar1 = param_1[9];
                    /* try { // try from 00359ed4 to 00359edb has its CatchHandler @ 0035a090 */
  plVar8 = (long *)FUN_00759c3c(0x40);
  puVar7 = PTR_DAT_007a1628;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)(puVar7 + 0x10);
                    /* try { // try from 00359ef8 to 00359f07 has its CatchHandler @ 0035a074 */
  FUN_0036bdc8(plVar8 + 3,lVar9,lVar1);
  plVar10 = (long *)param_1[0x25];
  param_1[0x24] = (long)(plVar8 + 3);
  param_1[0x25] = (long)plVar8;
  if ((plVar10 != (long *)0x0) && (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar10 + 1), lVar9 == 0)
     ) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    FUN_0071245c(plVar10);
  }
  lVar9 = param_1[0x1c];
  lVar1 = param_1[0x1d];
                    /* try { // try from 00359f40 to 00359f47 has its CatchHandler @ 0035a070 */
  plVar8 = (long *)FUN_00759c3c(0x40);
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)(puVar7 + 0x10);
                    /* try { // try from 00359f5c to 00359f6b has its CatchHandler @ 0035a06c */
  FUN_0036bdc8(plVar8 + 3,lVar9,lVar1);
  plVar10 = (long *)param_1[0x27];
  param_1[0x26] = (long)(plVar8 + 3);
  param_1[0x27] = (long)plVar8;
  if ((plVar10 != (long *)0x0) && (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar10 + 1), lVar9 == 0)
     ) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    FUN_0071245c(plVar10);
  }
                    /* try { // try from 00359fa0 to 00359fa7 has its CatchHandler @ 0035a068 */
  plVar8 = (long *)FUN_00759c3c(0x30);
  puVar7 = PTR_DAT_007a1638;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)(puVar7 + 0x10);
                    /* try { // try from 00359fc4 to 00359fcb has its CatchHandler @ 0035a064 */
  FUN_0036ae80(plVar8 + 3);
  plVar10 = (long *)param_1[0x29];
  param_1[0x28] = (long)(plVar8 + 3);
  param_1[0x29] = (long)plVar8;
  if ((plVar10 != (long *)0x0) && (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar10 + 1), lVar9 == 0)
     ) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    FUN_0071245c(plVar10);
  }
  lVar9 = FUN_003747d4(*(long *)(param_1[4] + 8) + -0x28);
  param_1[1] = lVar9;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035a0f8  FUN_0035a0f8 =====

void FUN_0035a0f8(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 0035a148  FUN_0035a148 =====

void FUN_0035a148(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  void *__ptr;
  void *pvVar3;
  
  __ptr = (void *)*param_1;
  if (__ptr == (void *)0x0) {
    return;
  }
  pvVar3 = (void *)param_1[1];
  if (pvVar3 == __ptr) {
    param_1[1] = __ptr;
    free(__ptr);
    return;
  }
  do {
    plVar2 = *(long **)((long)pvVar3 + -8);
    if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0)
       ) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_0071245c(plVar2);
    }
    pvVar3 = (void *)((long)pvVar3 + -0x10);
  } while (pvVar3 != __ptr);
  param_1[1] = __ptr;
  free((void *)*param_1);
  return;
}


// ===== 0035a1f0  FUN_0035a1f0 =====

void FUN_0035a1f0(long param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  pvVar1 = *(void **)(param_1 + 0x88);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x90) = pvVar1;
    free(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x60);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x68) = pvVar1;
    free(pvVar1);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x48);
  if (puVar4 != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x50);
    puVar2 = puVar4;
    if (puVar3 != puVar4) {
      do {
        puVar2 = puVar3 + -3;
        pvVar1 = (void *)*puVar2;
        if (pvVar1 != (void *)0x0) {
          puVar3[-2] = pvVar1;
          free(pvVar1);
        }
        puVar3 = puVar2;
      } while (puVar2 != puVar4);
      puVar2 = *(undefined8 **)(param_1 + 0x48);
    }
    *(undefined8 **)(param_1 + 0x50) = puVar4;
    free(puVar2);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x30);
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x38);
  puVar2 = puVar4;
  if (puVar3 != puVar4) {
    do {
      puVar2 = puVar3 + -5;
      pvVar1 = (void *)*puVar2;
      if (pvVar1 != (void *)0x0) {
        puVar3[-4] = pvVar1;
        free(pvVar1);
      }
      puVar3 = puVar2;
    } while (puVar2 != puVar4);
    puVar2 = *(undefined8 **)(param_1 + 0x30);
  }
  *(undefined8 **)(param_1 + 0x38) = puVar4;
  free(puVar2);
  return;
}


// ===== 0035a2d8  FUN_0035a2d8 =====

void FUN_0035a2d8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[3];
  *param_1 = &PTR_FUN_00761568;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 0035a338  FUN_0035a338 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0035a338(long param_1,void **param_2,void **param_3,undefined8 param_4)

{
  size_t __n;
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *pvVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  void *pvVar13;
  long *plVar14;
  void *pvVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  ulong uVar22;
  long lVar23;
  float fVar24;
  void *pvVar25;
  void *pvVar26;
  long local_138;
  ulong local_110;
  undefined8 uStack_108;
  char *local_100;
  void *local_f0;
  void *pvStack_e8;
  char *local_e0;
  void *local_d0;
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  void *local_b0;
  undefined8 local_a8;
  void *local_a0;
  void *pvStack_98;
  void *pvStack_90;
  long local_80;
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  local_a0 = (void *)0x0;
  pvStack_98 = (void *)0x0;
  pvStack_90 = (void *)0x0;
  if (&local_a0 != param_3) {
                    /* try { // try from 0035a398 to 0035a39f has its CatchHandler @ 0035ab7c */
    FUN_0031e170(&local_a0,*param_3,param_3[1],(long)param_3[1] - (long)*param_3 >> 2);
  }
                    /* try { // try from 0035a3b8 to 0035a3bf has its CatchHandler @ 0035ab94 */
  FUN_003338b8(&local_a0,pvStack_98,*param_2,param_2[1],(long)param_2[1] - (long)*param_2 >> 2);
  local_b8 = (void *)0x0;
  local_b0 = (void *)0x0;
  local_a8 = 0;
  local_d0 = (void *)0x0;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  lVar9 = FUN_003747d4(*(undefined8 *)(param_1 + 0x40));
  if (lVar9 != (long)pvStack_98 - (long)local_a0 >> 2) {
                    /* try { // try from 0035a3e8 to 0035a3ef has its CatchHandler @ 0035ab74 */
    local_e0 = (char *)FUN_00759c3c(0x50);
    uVar21 = s_GruLayerNormExecutableNetworkRun_001e8b9c._48_8_;
    uVar2 = s_GruLayerNormExecutableNetworkRun_001e8b9c._32_8_;
    uVar12 = CONCAT26(s_GruLayerNormExecutableNetworkRun_001e8b9c._62_2_,
                      s_GruLayerNormExecutableNetworkRun_001e8b9c._56_6_);
    pvStack_e8 = (void *)_UNK_002007b8;
    local_f0 = _DAT_002007b0;
    *(undefined8 *)(local_e0 + 0x28) = s_GruLayerNormExecutableNetworkRun_001e8b9c._40_8_;
    *(undefined8 *)(local_e0 + 0x20) = uVar2;
    *(undefined8 *)(local_e0 + 0x38) = uVar12;
    *(undefined8 *)(local_e0 + 0x30) = uVar21;
    uVar2 = s_GruLayerNormExecutableNetworkRun_001e8b9c._70_8_;
    uVar12 = CONCAT62(s_GruLayerNormExecutableNetworkRun_001e8b9c._64_6_,
                      s_GruLayerNormExecutableNetworkRun_001e8b9c._62_2_);
    local_e0[0x4e] = '\0';
    *(undefined8 *)(local_e0 + 0x46) = uVar2;
    *(undefined8 *)(local_e0 + 0x3e) = uVar12;
    uVar21 = s_GruLayerNormExecutableNetworkRun_001e8b9c._24_8_;
    uVar2 = s_GruLayerNormExecutableNetworkRun_001e8b9c._16_8_;
    uVar12 = s_GruLayerNormExecutableNetworkRun_001e8b9c._0_8_;
    *(undefined8 *)(local_e0 + 8) = s_GruLayerNormExecutableNetworkRun_001e8b9c._8_8_;
    *(undefined8 *)local_e0 = uVar12;
    *(undefined8 *)(local_e0 + 0x18) = uVar21;
    *(undefined8 *)(local_e0 + 0x10) = uVar2;
                    /* try { // try from 0035a424 to 0035a43f has its CatchHandler @ 0035ab60 */
    FUN_00372794(&local_f0,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/native/src/networks/src/gru/gru_layer_norm_executable_network_runtime.cpp"
                 ,0x29,&DAT_001d7ee2);
    if (((ulong)local_f0 & 1) != 0) {
      free(local_e0);
    }
  }
  pvStack_e8 = (void *)0x0;
  local_e0 = (char *)0x0;
  local_f0 = (void *)0x0;
  __n = (*(long **)(param_1 + 0x48))[1] - **(long **)(param_1 + 0x48);
  if (__n != 0) {
    if ((long)__n < 0) {
      if (*(long *)(lVar1 + 0x28) == local_80) {
                    /* try { // try from 0035ab40 to 0035ab47 has its CatchHandler @ 0035aba4 */
        uVar12 = FUN_002febf0(&local_f0);
                    /* catch() { ... } // from try @ 0035aa0c with catch @ 0035ab48 */
                    /* catch() { ... } // from try @ 0035a6e4 with catch @ 0035abd0 */
        if ((local_110 & 1) != 0) {
          free(local_100);
        }
        if (local_f0 != (void *)0x0) {
          pvStack_e8 = local_f0;
          free(local_f0);
        }
        if (local_d0 != (void *)0x0) {
          local_c8 = local_d0;
          free(local_d0);
        }
        if (local_b8 != (void *)0x0) {
          local_b0 = local_b8;
          free(local_b8);
        }
        if (local_a0 == (void *)0x0) {
          if (*(long *)(local_138 + 0x28) == local_80) {
LAB_0035ac2c:
                    /* WARNING: Subroutine does not return */
            FUN_00755eac(uVar12);
          }
        }
        else {
          pvStack_98 = local_a0;
          free(local_a0);
          if (*(long *)(local_138 + 0x28) == local_80) goto LAB_0035ac2c;
        }
      }
      goto LAB_0035ac6c;
    }
                    /* try { // try from 0035a46c to 0035a473 has its CatchHandler @ 0035aba4 */
    local_f0 = (void *)FUN_00759c3c(__n);
    pvVar15 = (void *)((long)local_f0 + __n);
    local_e0 = (char *)pvVar15;
    memset(local_f0,0,__n);
    pvStack_e8 = pvVar15;
  }
                    /* try { // try from 0035a49c to 0035a4bf has its CatchHandler @ 0035abc0 */
  (**(code **)(**(long **)(param_1 + 0x120) + 0x10))
            (*(long **)(param_1 + 0x120),&local_a0,&local_f0);
  (**(code **)(**(long **)(param_1 + 0x140) + 0x10))
            (*(long **)(param_1 + 0x140),&local_f0,&local_b8);
  lVar9 = FUN_003747d4(*(undefined8 *)(param_1 + 0xe0));
  if (lVar9 != (long)pvStack_98 - (long)local_a0 >> 2) {
                    /* try { // try from 0035a4d8 to 0035a4df has its CatchHandler @ 0035ab58 */
    local_100 = (char *)FUN_00759c3c(0x58);
    uStack_108 = _UNK_00200258;
    local_110 = _DAT_00200250;
    uVar3 = s_GruLayerNormExecutableNetworkRun_001eaaa5._56_8_;
    uVar21 = s_GruLayerNormExecutableNetworkRun_001eaaa5._48_8_;
    uVar2 = s_GruLayerNormExecutableNetworkRun_001eaaa5._40_8_;
    uVar12 = s_GruLayerNormExecutableNetworkRun_001eaaa5._32_8_;
    local_100[0x50] = 'e';
    uVar5 = s_GruLayerNormExecutableNetworkRun_001eaaa5._72_8_;
    uVar4 = s_GruLayerNormExecutableNetworkRun_001eaaa5._64_8_;
    local_100[0x51] = 't';
    local_100[0x52] = '\0';
    *(undefined8 *)(local_100 + 0x28) = uVar2;
    *(undefined8 *)(local_100 + 0x20) = uVar12;
    *(undefined8 *)(local_100 + 0x38) = uVar3;
    *(undefined8 *)(local_100 + 0x30) = uVar21;
    *(undefined8 *)(local_100 + 0x48) = uVar5;
    *(undefined8 *)(local_100 + 0x40) = uVar4;
    uVar21 = s_GruLayerNormExecutableNetworkRun_001eaaa5._24_8_;
    uVar2 = s_GruLayerNormExecutableNetworkRun_001eaaa5._16_8_;
    uVar12 = s_GruLayerNormExecutableNetworkRun_001eaaa5._0_8_;
    *(undefined8 *)(local_100 + 8) = s_GruLayerNormExecutableNetworkRun_001eaaa5._8_8_;
    *(undefined8 *)local_100 = uVar12;
    *(undefined8 *)(local_100 + 0x18) = uVar21;
    *(undefined8 *)(local_100 + 0x10) = uVar2;
                    /* try { // try from 0035a51c to 0035a537 has its CatchHandler @ 0035ab50 */
    FUN_00372794(&local_110,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/native/src/networks/src/gru/gru_layer_norm_executable_network_runtime.cpp"
                 ,0x31,&DAT_001d7ee2);
    if ((local_110 & 1) != 0) {
      free(local_100);
    }
  }
                    /* try { // try from 0035a554 to 0035a58b has its CatchHandler @ 0035abc0 */
  (**(code **)(**(long **)(param_1 + 0x130) + 0x10))
            (*(long **)(param_1 + 0x130),&local_a0,&local_f0);
  (**(code **)(**(long **)(param_1 + 0x140) + 0x10))
            (*(long **)(param_1 + 0x140),&local_f0,&local_a0);
  FUN_0036cee8(*(undefined8 *)(param_1 + 0x10),param_3,&local_a0,&local_f0);
                    /* try { // try from 0035a59c to 0035a5a3 has its CatchHandler @ 0035ab8c */
  FUN_003338b8(&local_f0,pvStack_e8,*param_2,param_2[1],(long)param_2[1] - (long)*param_2 >> 2);
  pvVar26 = param_2[1];
  pvVar25 = *param_2;
  pvVar15 = param_2[2];
  param_2[1] = pvStack_e8;
  *param_2 = local_f0;
  param_2[2] = local_e0;
  uVar2 = _UNK_00200b28;
  uVar19 = _DAT_00200b20;
  uVar12 = _UNK_00200578;
  uVar17 = _DAT_00200570;
  local_f0 = pvVar25;
  pvStack_e8 = pvVar26;
  local_e0 = (char *)pvVar15;
  if ((*(long **)(param_1 + 0x30))[1] - **(long **)(param_1 + 0x30) == 0x28) {
    uVar22 = 0;
  }
  else {
    lVar23 = 0;
    lVar20 = 0;
    lVar9 = 0;
    uVar22 = 0;
    do {
      lVar10 = FUN_003747dc(**(long **)(param_1 + 0x20) + lVar9);
      lVar11 = FUN_003747dc(**(long **)(param_1 + 0x30) + lVar9);
      if (lVar10 == lVar11) {
        lVar10 = FUN_003747d4(**(long **)(param_1 + 0x20) + lVar9);
        lVar11 = FUN_003747d4(**(long **)(param_1 + 0x30) + lVar9);
        if (lVar10 != lVar11) goto LAB_0035a6b4;
      }
      else {
LAB_0035a6b4:
                    /* try { // try from 0035a6b4 to 0035a6bb has its CatchHandler @ 0035abe8 */
        local_100 = (char *)FUN_00759c3c(0x50);
        uVar7 = s_GruLayerNormExecutableNetworkRun_001c52c8._65_8_;
        uVar3 = CONCAT17(s_GruLayerNormExecutableNetworkRun_001c52c8[0x40],
                         s_GruLayerNormExecutableNetworkRun_001c52c8._57_7_);
        local_100[0x49] = '\0';
        uVar5 = s_GruLayerNormExecutableNetworkRun_001c52c8._48_8_;
        uVar4 = s_GruLayerNormExecutableNetworkRun_001c52c8._32_8_;
        uStack_108 = uVar2;
        local_110 = uVar19;
        uVar21 = CONCAT71(s_GruLayerNormExecutableNetworkRun_001c52c8._57_7_,
                          s_GruLayerNormExecutableNetworkRun_001c52c8[0x38]);
        *(undefined8 *)(local_100 + 0x28) = s_GruLayerNormExecutableNetworkRun_001c52c8._40_8_;
        *(undefined8 *)(local_100 + 0x20) = uVar4;
        *(undefined8 *)(local_100 + 0x38) = uVar21;
        *(undefined8 *)(local_100 + 0x30) = uVar5;
        uVar6 = s_GruLayerNormExecutableNetworkRun_001c52c8._24_8_;
        uVar5 = s_GruLayerNormExecutableNetworkRun_001c52c8._16_8_;
        uVar4 = s_GruLayerNormExecutableNetworkRun_001c52c8._8_8_;
        uVar21 = s_GruLayerNormExecutableNetworkRun_001c52c8._0_8_;
        *(undefined8 *)(local_100 + 0x41) = uVar7;
        *(undefined8 *)(local_100 + 0x39) = uVar3;
        *(undefined8 *)(local_100 + 8) = uVar4;
        *(undefined8 *)local_100 = uVar21;
        *(undefined8 *)(local_100 + 0x18) = uVar6;
        *(undefined8 *)(local_100 + 0x10) = uVar5;
                    /* try { // try from 0035a6e4 to 0035a6ff has its CatchHandler @ 0035abd0 */
        FUN_00372794(&local_110,
                     "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/native/src/networks/src/gru/gru_layer_norm_executable_network_runtime.cpp"
                     ,0x40,&DAT_001d7ee2);
        if ((local_110 & 1) != 0) {
          free(local_100);
        }
      }
      pvVar15 = *param_2;
      pvVar25 = param_2[1];
      lVar10 = FUN_003747d4(**(long **)(param_1 + 0x20) + lVar9);
      if (lVar10 != (long)pvVar25 - (long)pvVar15 >> 2) {
                    /* try { // try from 0035a730 to 0035a737 has its CatchHandler @ 0035abcc */
        local_100 = (char *)FUN_00759c3c(0x48);
        local_100[0x40] = 's';
        uVar5 = s_GruLayerNormExecutableNetworkRun_001e4905._24_8_;
        uVar4 = s_GruLayerNormExecutableNetworkRun_001e4905._16_8_;
        uVar3 = s_GruLayerNormExecutableNetworkRun_001e4905._8_8_;
        uVar21 = s_GruLayerNormExecutableNetworkRun_001e4905._0_8_;
        local_100[0x41] = '.';
        uStack_108 = uVar12;
        local_110 = uVar17;
        local_100[0x42] = '\0';
        *(undefined8 *)(local_100 + 8) = uVar3;
        *(undefined8 *)local_100 = uVar21;
        *(undefined8 *)(local_100 + 0x18) = uVar5;
        *(undefined8 *)(local_100 + 0x10) = uVar4;
        uVar4 = s_GruLayerNormExecutableNetworkRun_001e4905._56_8_;
        uVar3 = s_GruLayerNormExecutableNetworkRun_001e4905._48_8_;
        uVar21 = s_GruLayerNormExecutableNetworkRun_001e4905._32_8_;
        *(undefined8 *)(local_100 + 0x28) = s_GruLayerNormExecutableNetworkRun_001e4905._40_8_;
        *(undefined8 *)(local_100 + 0x20) = uVar21;
        *(undefined8 *)(local_100 + 0x38) = uVar4;
        *(undefined8 *)(local_100 + 0x30) = uVar3;
                    /* try { // try from 0035a760 to 0035a77b has its CatchHandler @ 0035abc8 */
        FUN_00372794(&local_110,
                     "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/native/src/networks/src/gru/gru_layer_norm_executable_network_runtime.cpp"
                     ,0x44,&DAT_001d7ee2);
        if ((local_110 & 1) != 0) {
          free(local_100);
        }
      }
      plVar14 = (long *)(**(long **)(param_1 + 0x38) + lVar20);
      lVar10 = plVar14[1] - *plVar14;
      uVar18 = lVar10 >> 2;
      uVar16 = (long)pvStack_e8 - (long)local_f0 >> 2;
      if (uVar18 < uVar16 || uVar18 - uVar16 == 0) {
        if (uVar18 < uVar16) {
          pvStack_e8 = (void *)((long)local_f0 + lVar10);
        }
      }
      else {
                    /* try { // try from 0035a7b8 to 0035a9b7 has its CatchHandler @ 0035abec */
        FUN_002feac4(&local_f0,uVar18 - uVar16);
      }
      plVar14 = *(long **)(*(long *)(param_1 + 0x108) + lVar23);
      (**(code **)(*plVar14 + 0x10))(plVar14,param_2,&local_f0);
      plVar14 = (long *)(**(long **)(param_1 + 0x28) + lVar20);
      lVar10 = plVar14[1] - *plVar14;
      uVar18 = lVar10 >> 2;
      uVar16 = (long)pvStack_98 - (long)local_a0 >> 2;
      if (uVar18 < uVar16 || uVar18 - uVar16 == 0) {
        if (uVar18 < uVar16) {
          pvStack_98 = (void *)((long)local_a0 + lVar10);
        }
      }
      else {
        FUN_002feac4(&local_a0,uVar18 - uVar16);
      }
      plVar14 = *(long **)(*(long *)(param_1 + 0xf0) + lVar23);
      (**(code **)(*plVar14 + 0x10))(plVar14,param_2,&local_a0);
      uVar21 = *(undefined8 *)(param_1 + 0x10);
      fVar24 = (float)FUN_0036c640(uVar21,&local_a0);
      FUN_0036ca54(-fVar24,uVar21,&local_a0,&local_a0);
      uVar21 = *(undefined8 *)(param_1 + 0x10);
      fVar24 = (float)FUN_0036c750(uVar21,&local_a0);
      FUN_0036cb04(1.0 / fVar24,uVar21,&local_a0,&local_a0);
      FUN_0036cee8(*(undefined8 *)(param_1 + 0x10),&local_a0,**(long **)(param_1 + 0xd0) + lVar20,
                   &local_d0);
      FUN_0036cd50(*(undefined8 *)(param_1 + 0x10),&local_d0,**(long **)(param_1 + 0xc0) + lVar20,
                   &local_a0);
      uVar21 = *(undefined8 *)(param_1 + 0x10);
      fVar24 = (float)FUN_0036c640(uVar21,&local_f0);
      FUN_0036ca54(-fVar24,uVar21,&local_f0,&local_f0);
      uVar21 = *(undefined8 *)(param_1 + 0x10);
      fVar24 = (float)FUN_0036c750(uVar21,&local_f0);
      FUN_0036cb04(1.0 / fVar24,uVar21,&local_f0,&local_f0);
      FUN_0036cee8(*(undefined8 *)(param_1 + 0x10),&local_f0,**(long **)(param_1 + 0xd8) + lVar20,
                   &local_d0);
      FUN_0036cd50(*(undefined8 *)(param_1 + 0x10),&local_d0,**(long **)(param_1 + 200) + lVar20,
                   &local_f0);
      FUN_0036db0c(*(undefined8 *)(param_1 + 0x10),&local_f0,&local_a0,param_2);
      pvVar15 = local_a0;
      pvVar25 = pvStack_98;
      if (uVar22 == 0) {
        FUN_0036d21c(*(undefined8 *)(param_1 + 0x10),param_3,&local_b8,param_2,&local_a0);
        pvVar8 = pvStack_98;
        pvVar26 = local_a0;
        pvVar25 = param_3[1];
        pvVar15 = *param_3;
        pvVar13 = param_3[2];
        *param_3 = local_a0;
        param_3[2] = pvStack_90;
        param_3[1] = pvStack_98;
        pvStack_90 = pvVar13;
        if (param_2 != param_3) {
          lVar10 = (long)pvStack_98 - (long)local_a0;
          local_a0 = pvVar15;
          pvStack_98 = pvVar25;
          FUN_0031e170(param_2,pvVar26,pvVar8,lVar10 >> 2);
          pvVar15 = local_a0;
          pvVar25 = pvStack_98;
        }
      }
      pvStack_98 = pvVar25;
      local_a0 = pvVar15;
      uVar22 = uVar22 + 1;
      lVar9 = lVar9 + 0x28;
      lVar20 = lVar20 + 0x18;
      lVar23 = lVar23 + 0x10;
      uVar16 = ((*(long **)(param_1 + 0x30))[1] - **(long **)(param_1 + 0x30) >> 3) *
               -0x3333333333333333 - 1;
    } while (uVar22 < uVar16);
    if (uVar22 != uVar16) {
                    /* try { // try from 0035a9c8 to 0035a9d3 has its CatchHandler @ 0035ab4c */
      local_100 = (char *)FUN_00759c3c(0x40);
      uVar21 = s_GruLayerNormExecutableNetworkRun_001bbe71._24_8_;
      uVar2 = s_GruLayerNormExecutableNetworkRun_001bbe71._16_8_;
      uVar12 = s_GruLayerNormExecutableNetworkRun_001bbe71._0_8_;
      uStack_108 = _UNK_00200148;
      local_110 = _DAT_00200140;
      *(undefined8 *)(local_100 + 8) = s_GruLayerNormExecutableNetworkRun_001bbe71._8_8_;
      *(undefined8 *)local_100 = uVar12;
      *(undefined8 *)(local_100 + 0x18) = uVar21;
      *(undefined8 *)(local_100 + 0x10) = uVar2;
      uVar3 = s_GruLayerNormExecutableNetworkRun_001bbe71._50_8_;
      uVar21 = s_GruLayerNormExecutableNetworkRun_001bbe71._32_8_;
      uVar12 = CONCAT62(s_GruLayerNormExecutableNetworkRun_001bbe71._42_6_,
                        s_GruLayerNormExecutableNetworkRun_001bbe71._40_2_);
      uVar2 = CONCAT26(s_GruLayerNormExecutableNetworkRun_001bbe71._48_2_,
                       s_GruLayerNormExecutableNetworkRun_001bbe71._42_6_);
      local_100[0x3a] = '\0';
      *(undefined8 *)(local_100 + 0x28) = uVar12;
      *(undefined8 *)(local_100 + 0x20) = uVar21;
      *(undefined8 *)(local_100 + 0x32) = uVar3;
      *(undefined8 *)(local_100 + 0x2a) = uVar2;
                    /* try { // try from 0035aa0c to 0035aa27 has its CatchHandler @ 0035ab48 */
      FUN_00372794(&local_110,
                   "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/native/src/networks/src/gru/gru_layer_norm_executable_network_runtime.cpp"
                   ,0x62,&DAT_001d7ee2);
      if ((local_110 & 1) != 0) {
        free(local_100);
      }
    }
  }
  plVar14 = (long *)(**(long **)(param_1 + 0x38) + uVar22 * 0x18);
  lVar9 = plVar14[1] - *plVar14;
  uVar19 = lVar9 >> 2;
  uVar17 = (long)pvStack_e8 - (long)local_f0 >> 2;
  if (uVar19 < uVar17 || uVar19 - uVar17 == 0) {
    if (uVar19 < uVar17) {
      pvStack_e8 = (void *)((long)local_f0 + lVar9);
    }
  }
  else {
                    /* try { // try from 0035aa6c to 0035aabb has its CatchHandler @ 0035abb8 */
    FUN_002feac4(&local_f0,uVar19 - uVar17);
  }
  plVar14 = *(long **)(*(long *)(param_1 + 0x108) + uVar22 * 0x10);
  (**(code **)(*plVar14 + 0x10))(plVar14,param_2,&local_f0);
  (**(code **)(**(long **)(param_1 + 0x140) + 0x10))(*(long **)(param_1 + 0x140),&local_f0,param_4);
  if (local_f0 != (void *)0x0) {
    pvStack_e8 = local_f0;
    free(local_f0);
  }
  if (local_d0 != (void *)0x0) {
    local_c8 = local_d0;
    free(local_d0);
  }
  if (local_b8 != (void *)0x0) {
    local_b0 = local_b8;
    free(local_b8);
  }
  if (local_a0 != (void *)0x0) {
    pvStack_98 = local_a0;
    free(local_a0);
  }
  if (*(long *)(lVar1 + 0x28) == local_80) {
    return;
  }
LAB_0035ac6c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035ac70  FUN_0035ac70 =====

void FUN_0035ac70(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  plVar3 = (long *)param_1[0x29];
  *param_1 = (long)(PTR_DAT_007a1630 + 0x10);
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
  }
  plVar3 = (long *)param_1[0x27];
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
  }
  plVar3 = (long *)param_1[0x25];
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
  }
  pvVar4 = (void *)param_1[0x21];
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x22];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          FUN_0071245c(plVar3);
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x21];
    }
    param_1[0x22] = (long)pvVar4;
    free(pvVar2);
  }
  pvVar4 = (void *)param_1[0x1e];
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x1f];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          FUN_0071245c(plVar3);
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x1e];
    }
    param_1[0x1f] = (long)pvVar4;
    free(pvVar2);
  }
  FUN_0035a1f0(param_1 + 4);
  plVar3 = (long *)param_1[3];
  *param_1 = (long)&PTR_FUN_00761568;
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
    return;
  }
  return;
}


// ===== 0035ae58  FUN_0035ae58 =====

void FUN_0035ae58(void *param_1)

{
  FUN_0035ac70();
  free(param_1);
  return;
}


// ===== 0035ae7c  FUN_0035ae7c =====

void FUN_0035ae7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_007614c8;
  FUN_00712454();
  return;
}


// ===== 0035ae90  FUN_0035ae90 =====

void FUN_0035ae90(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1628 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 0035aec4  FUN_0035aec4 =====

void FUN_0035aec4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0035aecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0035aed0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0035aed4  FUN_0035aed4 =====

void FUN_0035aed4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00761518;
  FUN_00712454();
  return;
}


// ===== 0035aee8  FUN_0035aee8 =====

void FUN_0035aee8(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1638 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 0035af1c  FUN_0035af1c =====

void FUN_0035af1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0035af24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0035af28  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0035af2c  FUN_0035af2c =====

void FUN_0035af2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00761568;
  FUN_0036c290(param_1 + 2);
  return;
}


// ===== 0035af54  FUN_0035af54 =====

undefined8 FUN_0035af54(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


// ===== 0035af5c  FUN_0035af5c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0035af5c(long *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long *local_80;
  long *plStack_78;
  char *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar10 = *param_1;
  lVar13 = param_1[1];
  if ((lVar13 - lVar10 >> 3) * -0x3333333333333333 +
      (param_2[1] - *param_2 >> 3) * 0x5555555555555555 != 0) {
    local_70 = (char *)FUN_00759c3c(0x60);
    uVar6 = s_GruExecutableNetworkRuntime__ini_001e4948._56_8_;
    uVar5 = s_GruExecutableNetworkRuntime__ini_001e4948._48_8_;
    uVar9 = s_GruExecutableNetworkRuntime__ini_001e4948._32_8_;
    plStack_78 = _UNK_00200758;
    local_80 = _DAT_00200750;
    *(undefined8 *)(local_70 + 0x28) = s_GruExecutableNetworkRuntime__ini_001e4948._40_8_;
    *(undefined8 *)(local_70 + 0x20) = uVar9;
    *(undefined8 *)(local_70 + 0x38) = uVar6;
    *(undefined8 *)(local_70 + 0x30) = uVar5;
    uVar7 = s_GruExecutableNetworkRuntime__ini_001e4948._81_8_;
    uVar6 = s_GruExecutableNetworkRuntime__ini_001e4948._64_8_;
    uVar9 = CONCAT71(s_GruExecutableNetworkRuntime__ini_001e4948._73_7_,
                     s_GruExecutableNetworkRuntime__ini_001e4948[0x48]);
    uVar5 = CONCAT17(s_GruExecutableNetworkRuntime__ini_001e4948[0x50],
                     s_GruExecutableNetworkRuntime__ini_001e4948._73_7_);
    local_70[0x59] = '\0';
    *(undefined8 *)(local_70 + 0x48) = uVar9;
    *(undefined8 *)(local_70 + 0x40) = uVar6;
    *(undefined8 *)(local_70 + 0x51) = uVar7;
    *(undefined8 *)(local_70 + 0x49) = uVar5;
    uVar6 = s_GruExecutableNetworkRuntime__ini_001e4948._24_8_;
    uVar5 = s_GruExecutableNetworkRuntime__ini_001e4948._16_8_;
    uVar9 = s_GruExecutableNetworkRuntime__ini_001e4948._0_8_;
    *(undefined8 *)(local_70 + 8) = s_GruExecutableNetworkRuntime__ini_001e4948._8_8_;
    *(undefined8 *)local_70 = uVar9;
    *(undefined8 *)(local_70 + 0x18) = uVar6;
    *(undefined8 *)(local_70 + 0x10) = uVar5;
                    /* try { // try from 0035b010 to 0035b02b has its CatchHandler @ 0035b150 */
    FUN_00372794(&local_80,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/native/src/networks/src/gru/gru_executable_network_runtime.cpp"
                 ,0x1b,"initOperators");
    if (((ulong)local_80 & 1) != 0) {
      free(local_70);
    }
    lVar10 = *param_1;
    lVar13 = param_1[1];
  }
  if (lVar13 != lVar10) {
    lVar12 = 0;
    lVar13 = 0;
    uVar14 = 0;
    puVar1 = PTR_DAT_007a1628 + 0x10;
    do {
      lVar11 = *param_2;
      plVar8 = (long *)FUN_00759c3c(0x40);
      plVar2 = plVar8 + 3;
      plVar8[1] = 0;
      plVar8[2] = 0;
      *plVar8 = (long)puVar1;
                    /* try { // try from 0035b0b8 to 0035b0c7 has its CatchHandler @ 0035b174 */
      FUN_0036bdc8(plVar2,lVar10 + lVar13,lVar11 + lVar12);
      puVar3 = *(undefined8 **)(param_3 + 8);
      local_80 = plVar2;
      plStack_78 = plVar8;
      if (puVar3 < *(undefined8 **)(param_3 + 0x10)) {
        *puVar3 = plVar2;
        puVar3[1] = plVar8;
        *(undefined8 **)(param_3 + 8) = puVar3 + 2;
      }
      else {
                    /* try { // try from 0035b0d8 to 0035b0e3 has its CatchHandler @ 0035b164 */
        uVar9 = FUN_0035b1fc(param_3,&local_80);
        plVar2 = plStack_78;
        *(undefined8 *)(param_3 + 8) = uVar9;
        if ((plStack_78 != (long *)0x0) &&
           (lVar10 = FUN_00755c50(0xffffffffffffffff,plStack_78 + 1), lVar10 == 0)) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          FUN_0071245c(plVar2);
        }
      }
      lVar10 = *param_1;
      uVar14 = uVar14 + 1;
      lVar13 = lVar13 + 0x28;
      lVar12 = lVar12 + 0x18;
    } while (uVar14 < (ulong)((param_1[1] - lVar10 >> 3) * -0x3333333333333333));
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035b1a8  FUN_0035b1a8 =====

void FUN_0035b1a8(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 0035b1f8  FUN_0035b1f8 =====

void FUN_0035b1f8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x35b1fc);
  (*pcVar1)();
}


// ===== 0035b1fc  FUN_0035b1fc =====

undefined8 * FUN_0035b1fc(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *__ptr;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar10 = param_1[1] - *param_1 >> 4;
  uVar1 = lVar10 + 1;
  if (uVar1 >> 0x3c != 0) {
    FUN_0035b33c(param_1);
LAB_0035b338:
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  uVar6 = param_1[2] - *param_1;
  uVar9 = (long)uVar6 >> 3;
  if (uVar9 <= uVar1) {
    uVar9 = uVar1;
  }
  if (0x7fffffffffffffef < uVar6) {
    uVar9 = 0xfffffffffffffff;
  }
  if (uVar9 == 0) {
    lVar4 = 0;
  }
  else {
    if (uVar9 >> 0x3c != 0) goto LAB_0035b338;
    lVar4 = FUN_00759c3c(uVar9 << 4);
  }
  uVar14 = param_2[1];
  uVar13 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  puVar2 = (undefined8 *)(lVar4 + lVar10 * 0x10);
  puVar12 = (undefined8 *)*param_1;
  __ptr = (undefined8 *)param_1[1];
  puVar2[1] = uVar14;
  *puVar2 = uVar13;
  puVar3 = (undefined8 *)((long)puVar2 + ((long)puVar12 - (long)__ptr));
  puVar5 = puVar3;
  puVar7 = puVar12;
  if ((long)puVar12 - (long)__ptr != 0) {
    do {
      uVar13 = *puVar7;
      puVar5[1] = puVar7[1];
      *puVar5 = uVar13;
      puVar8 = puVar7 + 2;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar5 = puVar5 + 2;
      puVar7 = puVar8;
    } while (puVar8 != __ptr);
    do {
      plVar11 = (long *)puVar12[1];
      if ((plVar11 != (long *)0x0) &&
         (lVar10 = FUN_00755c50(0xffffffffffffffff,plVar11 + 1), lVar10 == 0)) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        FUN_0071245c(plVar11);
      }
      puVar12 = puVar12 + 2;
    } while (puVar12 != __ptr);
    __ptr = (undefined8 *)*param_1;
  }
  *param_1 = (long)puVar3;
  param_1[1] = (long)(puVar2 + 2);
  param_1[2] = lVar4 + uVar9 * 0x10;
  if (__ptr != (undefined8 *)0x0) {
    free(__ptr);
  }
  return puVar2 + 2;
}


// ===== 0035b33c  FUN_0035b33c =====

void FUN_0035b33c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 0035b350  FUN_0035b350 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0035b350(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  FUN_0035af2c();
  *param_1 = (long)(PTR_DAT_007a1640 + 0x10);
                    /* try { // try from 0035b39c to 0035b3a7 has its CatchHandler @ 0035b5e4 */
  FUN_00361828(param_1 + 4,param_2);
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  plVar8 = (long *)param_1[4];
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  if ((ulong)((plVar8[1] - *plVar8 >> 3) * -0x3333333333333333) <
      (((long *)param_1[6])[1] - *(long *)param_1[6] >> 3) * -0x3333333333333333 - 1U) {
                    /* try { // try from 0035b404 to 0035b40b has its CatchHandler @ 0035b5b8 */
    local_70 = (char *)FUN_00759c3c(0x60);
    uVar5 = s_GruModifyExecutableNetworkRuntim_001de339._56_8_;
    uVar4 = s_GruModifyExecutableNetworkRuntim_001de339._48_8_;
    uVar3 = s_GruModifyExecutableNetworkRuntim_001de339._32_8_;
    uStack_78 = _UNK_002007a8;
    local_80 = _DAT_002007a0;
    *(undefined8 *)(local_70 + 0x28) = s_GruModifyExecutableNetworkRuntim_001de339._40_8_;
    *(undefined8 *)(local_70 + 0x20) = uVar3;
    *(undefined8 *)(local_70 + 0x38) = uVar5;
    *(undefined8 *)(local_70 + 0x30) = uVar4;
    uVar6 = s_GruModifyExecutableNetworkRuntim_001de339._83_8_;
    uVar5 = s_GruModifyExecutableNetworkRuntim_001de339._64_8_;
    uVar3 = CONCAT53(s_GruModifyExecutableNetworkRuntim_001de339._75_5_,
                     s_GruModifyExecutableNetworkRuntim_001de339._72_3_);
    uVar4 = CONCAT35(s_GruModifyExecutableNetworkRuntim_001de339._80_3_,
                     s_GruModifyExecutableNetworkRuntim_001de339._75_5_);
    local_70[0x5b] = '\0';
    *(undefined8 *)(local_70 + 0x48) = uVar3;
    *(undefined8 *)(local_70 + 0x40) = uVar5;
    *(undefined8 *)(local_70 + 0x53) = uVar6;
    *(undefined8 *)(local_70 + 0x4b) = uVar4;
    uVar5 = s_GruModifyExecutableNetworkRuntim_001de339._24_8_;
    uVar4 = s_GruModifyExecutableNetworkRuntim_001de339._16_8_;
    uVar3 = s_GruModifyExecutableNetworkRuntim_001de339._0_8_;
    *(undefined8 *)(local_70 + 8) = s_GruModifyExecutableNetworkRuntim_001de339._8_8_;
    *(undefined8 *)local_70 = uVar3;
    *(undefined8 *)(local_70 + 0x18) = uVar5;
    *(undefined8 *)(local_70 + 0x10) = uVar4;
                    /* try { // try from 0035b448 to 0035b463 has its CatchHandler @ 0035b5a0 */
    FUN_00372794(&local_80,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/native/src/networks/src/gru/gru_modify_executable_network_runtime.cpp"
                 ,0x10,"GruModifyExecutableNetworkRuntime");
    if ((local_80 & 1) != 0) {
      free(local_70);
    }
    plVar8 = (long *)param_1[4];
  }
                    /* try { // try from 0035b47c to 0035b48f has its CatchHandler @ 0035b5ec */
  FUN_0035af5c(plVar8,param_1[5],param_1 + 0x1e);
  FUN_0035af5c(param_1[6],param_1[7],param_1 + 0x21);
  lVar9 = param_1[8];
  lVar1 = param_1[9];
                    /* try { // try from 0035b494 to 0035b49b has its CatchHandler @ 0035b5e0 */
  plVar8 = (long *)FUN_00759c3c(0x40);
  puVar7 = PTR_DAT_007a1628;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)(puVar7 + 0x10);
                    /* try { // try from 0035b4b8 to 0035b4c7 has its CatchHandler @ 0035b5c4 */
  FUN_0036bdc8(plVar8 + 3,lVar9,lVar1);
  plVar10 = (long *)param_1[0x25];
  param_1[0x24] = (long)(plVar8 + 3);
  param_1[0x25] = (long)plVar8;
  if ((plVar10 != (long *)0x0) && (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar10 + 1), lVar9 == 0)
     ) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    FUN_0071245c(plVar10);
  }
                    /* try { // try from 0035b4fc to 0035b503 has its CatchHandler @ 0035b5c0 */
  plVar8 = (long *)FUN_00759c3c(0x30);
  puVar7 = PTR_DAT_007a1638;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)(puVar7 + 0x10);
                    /* try { // try from 0035b520 to 0035b527 has its CatchHandler @ 0035b5bc */
  FUN_0036ae80(plVar8 + 3);
  plVar10 = (long *)param_1[0x27];
  param_1[0x26] = (long)(plVar8 + 3);
  param_1[0x27] = (long)plVar8;
  if ((plVar10 != (long *)0x0) && (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar10 + 1), lVar9 == 0)
     ) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    FUN_0071245c(plVar10);
  }
  lVar9 = FUN_003747d4(*(long *)(param_1[4] + 8) + -0x28);
  param_1[1] = lVar9;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035b63c  FUN_0035b63c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0035b63c(long param_1,long *param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  void *pvVar21;
  void *pvVar22;
  ulong local_d0;
  undefined8 uStack_c8;
  char *local_c0;
  void *local_b0;
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  void *pvStack_78;
  long local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_80 = (void *)0x0;
  pvStack_78 = (void *)0x0;
  local_70 = 0;
  local_98 = (void *)0x0;
  local_90 = (void *)0x0;
  local_88 = 0;
                    /* try { // try from 0035b698 to 0035b6a3 has its CatchHandler @ 0035bc2c */
  FUN_003338b8(&local_80,0,*param_3,param_3[1],param_3[1] - *param_3 >> 2);
                    /* try { // try from 0035b6b4 to 0035b6bb has its CatchHandler @ 0035bc28 */
  FUN_003338b8(&local_80,pvStack_78,*param_2,param_2[1],param_2[1] - *param_2 >> 2);
  pvVar22 = (void *)param_2[1];
  pvVar21 = (void *)*param_2;
  lVar13 = param_2[2];
  local_b0 = (void *)0x0;
  local_a8 = (void *)0x0;
  param_2[1] = (long)pvStack_78;
  *param_2 = (long)local_80;
  param_2[2] = local_70;
  local_a0 = 0;
  local_80 = pvVar21;
  pvStack_78 = pvVar22;
  local_70 = lVar13;
  lVar13 = FUN_003747d4(*(undefined8 *)(param_1 + 0x40));
  if (lVar13 != param_2[1] - *param_2 >> 2) {
                    /* try { // try from 0035b6fc to 0035b703 has its CatchHandler @ 0035bc20 */
    local_c0 = (char *)FUN_00759c3c(0x48);
    uVar5 = s_GruModifyExecutableNetworkRuntim_001e49a2._24_8_;
    uVar4 = s_GruModifyExecutableNetworkRuntim_001e49a2._16_8_;
    uVar3 = s_GruModifyExecutableNetworkRuntim_001e49a2._8_8_;
    uVar2 = s_GruModifyExecutableNetworkRuntim_001e49a2._0_8_;
    uStack_c8 = _UNK_002002f8;
    local_d0 = _DAT_002002f0;
    local_c0[0x3f] = 'o';
    local_c0[0x40] = 'n';
    local_c0[0x41] = 's';
    local_c0[0x42] = '.';
    *(undefined8 *)(local_c0 + 8) = uVar3;
    *(undefined8 *)local_c0 = uVar2;
    *(undefined8 *)(local_c0 + 0x18) = uVar5;
    *(undefined8 *)(local_c0 + 0x10) = uVar4;
    uVar5 = s_GruModifyExecutableNetworkRuntim_001e49a2._56_8_;
    uVar4 = s_GruModifyExecutableNetworkRuntim_001e49a2._48_8_;
    uVar3 = s_GruModifyExecutableNetworkRuntim_001e49a2._40_8_;
    uVar2 = s_GruModifyExecutableNetworkRuntim_001e49a2._32_8_;
    local_c0[0x43] = '\0';
    *(undefined8 *)(local_c0 + 0x28) = uVar3;
    *(undefined8 *)(local_c0 + 0x20) = uVar2;
    *(undefined8 *)(local_c0 + 0x38) = uVar5;
    *(undefined8 *)(local_c0 + 0x30) = uVar4;
                    /* try { // try from 0035b73c to 0035b757 has its CatchHandler @ 0035bc18 */
    FUN_00372794(&local_d0,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/native/src/networks/src/gru/gru_modify_executable_network_runtime.cpp"
                 ,0x28,&DAT_001d7ee2);
    if ((local_d0 & 1) != 0) {
      free(local_c0);
    }
  }
  lVar13 = (*(long **)(param_1 + 0x48))[1] - **(long **)(param_1 + 0x48);
  uVar16 = lVar13 >> 2;
  uVar14 = (long)pvStack_78 - (long)local_80 >> 2;
  if (uVar16 < uVar14 || uVar16 - uVar14 == 0) {
    if (uVar16 < uVar14) {
      pvStack_78 = (void *)((long)local_80 + lVar13);
    }
  }
  else {
                    /* try { // try from 0035b78c to 0035b7d3 has its CatchHandler @ 0035bc48 */
    FUN_002feac4(&local_80,uVar16 - uVar14);
  }
  (**(code **)(**(long **)(param_1 + 0x120) + 0x10))(*(long **)(param_1 + 0x120),param_2,&local_80);
  (**(code **)(**(long **)(param_1 + 0x130) + 0x10))
            (*(long **)(param_1 + 0x130),&local_80,&local_b0);
  uVar3 = _UNK_00200aa8;
  uVar16 = _DAT_00200aa0;
  uVar2 = _UNK_00200898;
  uVar14 = _DAT_00200890;
  if ((*(long **)(param_1 + 0x30))[1] - **(long **)(param_1 + 0x30) == 0x28) {
    uVar19 = 0;
  }
  else {
    lVar20 = 0;
    lVar18 = 0;
    lVar13 = 0;
    uVar19 = 0;
    do {
      lVar9 = FUN_003747dc(**(long **)(param_1 + 0x20) + lVar13);
      lVar10 = FUN_003747dc(**(long **)(param_1 + 0x30) + lVar13);
      if (lVar9 == lVar10) {
        lVar9 = FUN_003747d4(**(long **)(param_1 + 0x20) + lVar13);
        lVar10 = FUN_003747d4(**(long **)(param_1 + 0x30) + lVar13);
        if (lVar9 != lVar10) goto LAB_0035b8e0;
      }
      else {
LAB_0035b8e0:
                    /* try { // try from 0035b8e0 to 0035b8e7 has its CatchHandler @ 0035bcac */
        local_c0 = (char *)FUN_00759c3c(0x48);
        uVar5 = CONCAT62(s_GruModifyExecutableNetworkRuntim_001e68a9._64_6_,
                         s_GruModifyExecutableNetworkRuntim_001e68a9._62_2_);
        local_c0[0x46] = '\0';
        uVar7 = s_GruModifyExecutableNetworkRuntim_001e68a9._48_8_;
        uVar6 = s_GruModifyExecutableNetworkRuntim_001e68a9._32_8_;
        uStack_c8 = uVar2;
        local_d0 = uVar14;
        uVar4 = CONCAT26(s_GruModifyExecutableNetworkRuntim_001e68a9._62_2_,
                         s_GruModifyExecutableNetworkRuntim_001e68a9._56_6_);
        *(undefined8 *)(local_c0 + 0x28) = s_GruModifyExecutableNetworkRuntim_001e68a9._40_8_;
        *(undefined8 *)(local_c0 + 0x20) = uVar6;
        *(undefined8 *)(local_c0 + 0x38) = uVar4;
        *(undefined8 *)(local_c0 + 0x30) = uVar7;
        uVar8 = s_GruModifyExecutableNetworkRuntim_001e68a9._24_8_;
        uVar7 = s_GruModifyExecutableNetworkRuntim_001e68a9._16_8_;
        uVar6 = s_GruModifyExecutableNetworkRuntim_001e68a9._8_8_;
        uVar4 = s_GruModifyExecutableNetworkRuntim_001e68a9._0_8_;
        *(undefined8 *)(local_c0 + 0x3e) = uVar5;
        *(undefined8 *)(local_c0 + 8) = uVar6;
        *(undefined8 *)local_c0 = uVar4;
        *(undefined8 *)(local_c0 + 0x18) = uVar8;
        *(undefined8 *)(local_c0 + 0x10) = uVar7;
                    /* try { // try from 0035b910 to 0035b92b has its CatchHandler @ 0035bc58 */
        FUN_00372794(&local_d0,
                     "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/native/src/networks/src/gru/gru_modify_executable_network_runtime.cpp"
                     ,0x34,&DAT_001d7ee2);
        if ((local_d0 & 1) != 0) {
          free(local_c0);
        }
      }
      lVar9 = *param_2;
      lVar10 = param_2[1];
      lVar11 = FUN_003747d4(**(long **)(param_1 + 0x20) + lVar13);
      if (lVar11 != lVar10 - lVar9 >> 2) {
                    /* try { // try from 0035b95c to 0035b963 has its CatchHandler @ 0035bc54 */
        local_c0 = (char *)FUN_00759c3c(0x48);
        local_c0[0x44] = '\0';
        uVar7 = s_GruModifyExecutableNetworkRuntim_001e28b8._24_8_;
        uVar6 = s_GruModifyExecutableNetworkRuntim_001e28b8._16_8_;
        uVar5 = s_GruModifyExecutableNetworkRuntim_001e28b8._8_8_;
        uVar4 = s_GruModifyExecutableNetworkRuntim_001e28b8._0_8_;
        uStack_c8 = uVar3;
        local_d0 = uVar16;
        local_c0[0x40] = 'o';
        local_c0[0x41] = 'n';
        local_c0[0x42] = 's';
        local_c0[0x43] = '.';
        *(undefined8 *)(local_c0 + 8) = uVar5;
        *(undefined8 *)local_c0 = uVar4;
        *(undefined8 *)(local_c0 + 0x18) = uVar7;
        *(undefined8 *)(local_c0 + 0x10) = uVar6;
        uVar6 = s_GruModifyExecutableNetworkRuntim_001e28b8._56_8_;
        uVar5 = s_GruModifyExecutableNetworkRuntim_001e28b8._48_8_;
        uVar4 = s_GruModifyExecutableNetworkRuntim_001e28b8._32_8_;
        *(undefined8 *)(local_c0 + 0x28) = s_GruModifyExecutableNetworkRuntim_001e28b8._40_8_;
        *(undefined8 *)(local_c0 + 0x20) = uVar4;
        *(undefined8 *)(local_c0 + 0x38) = uVar6;
        *(undefined8 *)(local_c0 + 0x30) = uVar5;
                    /* try { // try from 0035b990 to 0035b9ab has its CatchHandler @ 0035bc50 */
        FUN_00372794(&local_d0,
                     "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/native/src/networks/src/gru/gru_modify_executable_network_runtime.cpp"
                     ,0x38,&DAT_001d7ee2);
        if ((local_d0 & 1) != 0) {
          free(local_c0);
        }
      }
      plVar12 = (long *)(**(long **)(param_1 + 0x38) + lVar18);
      lVar9 = plVar12[1] - *plVar12;
      uVar17 = lVar9 >> 2;
      uVar15 = (long)local_90 - (long)local_98 >> 2;
      if (uVar17 < uVar15 || uVar17 - uVar15 == 0) {
        if (uVar17 < uVar15) {
          local_90 = (void *)((long)local_98 + lVar9);
        }
      }
      else {
                    /* try { // try from 0035b9e8 to 0035baab has its CatchHandler @ 0035bcb0 */
        FUN_002feac4(&local_98,uVar17 - uVar15);
      }
      plVar12 = *(long **)(*(long *)(param_1 + 0x108) + lVar20);
      (**(code **)(*plVar12 + 0x10))(plVar12,param_2,&local_98);
      plVar12 = (long *)(**(long **)(param_1 + 0x28) + lVar18);
      lVar9 = plVar12[1] - *plVar12;
      uVar17 = lVar9 >> 2;
      uVar15 = (long)pvStack_78 - (long)local_80 >> 2;
      if (uVar17 < uVar15 || uVar17 - uVar15 == 0) {
        if (uVar17 < uVar15) {
          pvStack_78 = (void *)((long)local_80 + lVar9);
        }
      }
      else {
        FUN_002feac4(&local_80,uVar17 - uVar15);
      }
      plVar12 = *(long **)(*(long *)(param_1 + 0xf0) + lVar20);
      (**(code **)(*plVar12 + 0x10))(plVar12,param_2,&local_80);
      FUN_0036db0c(*(undefined8 *)(param_1 + 0x10),&local_98,&local_80,param_2);
      if (uVar19 == 0) {
        FUN_0036d21c(*(undefined8 *)(param_1 + 0x10),param_2,&local_b0,param_3,&local_80);
        pvVar22 = (void *)param_3[1];
        pvVar21 = (void *)*param_3;
        lVar9 = param_3[2];
        param_3[1] = (long)pvStack_78;
        *param_3 = (long)local_80;
        param_3[2] = local_70;
        local_80 = pvVar21;
        pvStack_78 = pvVar22;
        local_70 = lVar9;
      }
      uVar19 = uVar19 + 1;
      lVar13 = lVar13 + 0x28;
      lVar18 = lVar18 + 0x18;
      lVar20 = lVar20 + 0x10;
      uVar15 = ((*(long **)(param_1 + 0x30))[1] - **(long **)(param_1 + 0x30) >> 3) *
               -0x3333333333333333 - 1;
    } while (uVar19 < uVar15);
    if (uVar19 != uVar15) {
                    /* try { // try from 0035bac0 to 0035bacb has its CatchHandler @ 0035bc14 */
      local_c0 = (char *)FUN_00759c3c(0x38);
      uVar4 = s_GruModifyExecutableNetworkRuntim_001d5b1a._24_8_;
      uVar3 = s_GruModifyExecutableNetworkRuntim_001d5b1a._16_8_;
      uVar2 = s_GruModifyExecutableNetworkRuntim_001d5b1a._0_8_;
      uStack_c8 = _UNK_002008a8;
      local_d0 = _DAT_002008a0;
      *(undefined8 *)(local_c0 + 8) = s_GruModifyExecutableNetworkRuntim_001d5b1a._8_8_;
      *(undefined8 *)local_c0 = uVar2;
      *(undefined8 *)(local_c0 + 0x18) = uVar4;
      *(undefined8 *)(local_c0 + 0x10) = uVar3;
      uVar4 = s_GruModifyExecutableNetworkRuntim_001d5b1a._32_8_;
      uVar2 = CONCAT17(s_GruModifyExecutableNetworkRuntim_001d5b1a[0x2f],
                       s_GruModifyExecutableNetworkRuntim_001d5b1a._40_7_);
      uVar3 = CONCAT71(s_GruModifyExecutableNetworkRuntim_001d5b1a._48_7_,
                       s_GruModifyExecutableNetworkRuntim_001d5b1a[0x2f]);
      local_c0[0x37] = '\0';
      *(undefined8 *)(local_c0 + 0x28) = uVar2;
      *(undefined8 *)(local_c0 + 0x20) = uVar4;
      *(undefined8 *)(local_c0 + 0x2f) = uVar3;
                    /* try { // try from 0035bb00 to 0035bb1b has its CatchHandler @ 0035bc10 */
      FUN_00372794(&local_d0,
                   "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/native/src/networks/src/gru/gru_modify_executable_network_runtime.cpp"
                   ,0x4a,&DAT_001d7ee2);
      if ((local_d0 & 1) != 0) {
        free(local_c0);
      }
    }
  }
  plVar12 = (long *)(**(long **)(param_1 + 0x38) + uVar19 * 0x18);
  lVar13 = plVar12[1] - *plVar12;
  uVar16 = lVar13 >> 2;
  uVar14 = (long)local_90 - (long)local_98 >> 2;
  if (uVar16 < uVar14 || uVar16 - uVar14 == 0) {
    if (uVar16 < uVar14) {
      local_90 = (void *)((long)local_98 + lVar13);
    }
  }
  else {
                    /* try { // try from 0035bb60 to 0035bbaf has its CatchHandler @ 0035bc40 */
    FUN_002feac4(&local_98,uVar16 - uVar14);
  }
  plVar12 = *(long **)(*(long *)(param_1 + 0x108) + uVar19 * 0x10);
  (**(code **)(*plVar12 + 0x10))(plVar12,param_2,&local_98);
  (**(code **)(**(long **)(param_1 + 0x130) + 0x10))(*(long **)(param_1 + 0x130),&local_98,param_4);
  if (local_b0 != (void *)0x0) {
    local_a8 = local_b0;
    free(local_b0);
  }
  if (local_98 != (void *)0x0) {
    local_90 = local_98;
    free(local_98);
  }
  if (local_80 != (void *)0x0) {
    pvStack_78 = local_80;
    free(local_80);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0035bcfc  FUN_0035bcfc =====

void FUN_0035bcfc(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  plVar3 = (long *)param_1[0x27];
  *param_1 = (long)(PTR_DAT_007a1640 + 0x10);
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
  }
  plVar3 = (long *)param_1[0x25];
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
  }
  pvVar4 = (void *)param_1[0x21];
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x22];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          FUN_0071245c(plVar3);
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x21];
    }
    param_1[0x22] = (long)pvVar4;
    free(pvVar2);
  }
  pvVar4 = (void *)param_1[0x1e];
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x1f];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          FUN_0071245c(plVar3);
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x1e];
    }
    param_1[0x1f] = (long)pvVar4;
    free(pvVar2);
  }
  FUN_0035a1f0(param_1 + 4);
  plVar3 = (long *)param_1[3];
  *param_1 = (long)&PTR_FUN_00761568;
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
    return;
  }
  return;
}


// ===== 0035beb4  FUN_0035beb4 =====

void FUN_0035beb4(void *param_1)

{
  FUN_0035bcfc();
  free(param_1);
  return;
}


// ===== 0035bed8  FUN_0035bed8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0035bed8(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  FUN_0035af2c();
  *param_1 = (long)(PTR_DAT_007a1648 + 0x10);
                    /* try { // try from 0035bf24 to 0035bf2f has its CatchHandler @ 0035c168 */
  FUN_00361d68(param_1 + 4,param_2);
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  plVar8 = (long *)param_1[4];
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  if ((ulong)((plVar8[1] - *plVar8 >> 3) * -0x3333333333333333) <
      (((long *)param_1[6])[1] - *(long *)param_1[6] >> 3) * -0x3333333333333333 - 1U) {
                    /* try { // try from 0035bf8c to 0035bf93 has its CatchHandler @ 0035c13c */
    local_70 = (char *)FUN_00759c3c(0x68);
    uStack_78 = _UNK_00200888;
    local_80 = _DAT_00200880;
    uVar6 = s_GruModifyVadExecutableNetworkRun_001d5b52._56_8_;
    uVar5 = s_GruModifyVadExecutableNetworkRun_001d5b52._48_8_;
    uVar4 = s_GruModifyVadExecutableNetworkRun_001d5b52._40_8_;
    uVar3 = s_GruModifyVadExecutableNetworkRun_001d5b52._32_8_;
    local_70[0x60] = '.';
    local_70[0x61] = '\0';
    *(undefined8 *)(local_70 + 0x28) = uVar4;
    *(undefined8 *)(local_70 + 0x20) = uVar3;
    *(undefined8 *)(local_70 + 0x38) = uVar6;
    *(undefined8 *)(local_70 + 0x30) = uVar5;
    uVar5 = s_GruModifyVadExecutableNetworkRun_001d5b52._88_8_;
    uVar4 = s_GruModifyVadExecutableNetworkRun_001d5b52._80_8_;
    uVar3 = s_GruModifyVadExecutableNetworkRun_001d5b52._64_8_;
    *(undefined8 *)(local_70 + 0x48) = s_GruModifyVadExecutableNetworkRun_001d5b52._72_8_;
    *(undefined8 *)(local_70 + 0x40) = uVar3;
    *(undefined8 *)(local_70 + 0x58) = uVar5;
    *(undefined8 *)(local_70 + 0x50) = uVar4;
    uVar5 = s_GruModifyVadExecutableNetworkRun_001d5b52._24_8_;
    uVar4 = s_GruModifyVadExecutableNetworkRun_001d5b52._16_8_;
    uVar3 = s_GruModifyVadExecutableNetworkRun_001d5b52._0_8_;
    *(undefined8 *)(local_70 + 8) = s_GruModifyVadExecutableNetworkRun_001d5b52._8_8_;
    *(undefined8 *)local_70 = uVar3;
    *(undefined8 *)(local_70 + 0x18) = uVar5;
    *(undefined8 *)(local_70 + 0x10) = uVar4;
                    /* try { // try from 0035bfcc to 0035bfe7 has its CatchHandler @ 0035c124 */
    FUN_00372794(&local_80,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/native/src/networks/src/gru/gru_modify_vad_executable_network_runtime.cpp"
                 ,0xf,"GruModifyVadExecutableNetworkRuntime");
    if ((local_80 & 1) != 0) {
      free(local_70);
    }
    plVar8 = (long *)param_1[4];
  }
                    /* try { // try from 0035c000 to 0035c013 has its CatchHandler @ 0035c170 */
  FUN_0035af5c(plVar8,param_1[5],param_1 + 0x18);
  FUN_0035af5c(param_1[6],param_1[7],param_1 + 0x1b);
  lVar9 = param_1[8];
  lVar1 = param_1[9];
                    /* try { // try from 0035c018 to 0035c01f has its CatchHandler @ 0035c164 */
  plVar8 = (long *)FUN_00759c3c(0x40);
  puVar7 = PTR_DAT_007a1628;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)(puVar7 + 0x10);
                    /* try { // try from 0035c03c to 0035c04b has its CatchHandler @ 0035c148 */
  FUN_0036bdc8(plVar8 + 3,lVar9,lVar1);
  plVar10 = (long *)param_1[0x1f];
  param_1[0x1e] = (long)(plVar8 + 3);
  param_1[0x1f] = (long)plVar8;
  if ((plVar10 != (long *)0x0) && (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar10 + 1), lVar9 == 0)
     ) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    FUN_0071245c(plVar10);
  }
                    /* try { // try from 0035c080 to 0035c087 has its CatchHandler @ 0035c144 */
  plVar8 = (long *)FUN_00759c3c(0x30);
  puVar7 = PTR_DAT_007a1638;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)(puVar7 + 0x10);
                    /* try { // try from 0035c0a4 to 0035c0ab has its CatchHandler @ 0035c140 */
  FUN_0036ae80(plVar8 + 3);
  plVar10 = (long *)param_1[0x21];
  param_1[0x20] = (long)(plVar8 + 3);
  param_1[0x21] = (long)plVar8;
  if ((plVar10 != (long *)0x0) && (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar10 + 1), lVar9 == 0)
     ) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    FUN_0071245c(plVar10);
  }
  lVar9 = FUN_003747d4(*(long *)(param_1[6] + 8) + -0x28);
  param_1[1] = lVar9;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035c1c0  FUN_0035c1c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0035c1c0(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  void *pvVar22;
  void *pvVar23;
  ulong local_d0;
  undefined8 uStack_c8;
  char *local_c0;
  void *local_b8;
  void *local_b0;
  undefined8 local_a8;
  void *local_a0;
  void *pvStack_98;
  long lStack_90;
  void *local_80;
  void *pvStack_78;
  long local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_80 = (void *)0x0;
  pvStack_78 = (void *)0x0;
  local_70 = 0;
  local_a0 = (void *)0x0;
  pvStack_98 = (void *)0x0;
  lStack_90 = 0;
                    /* try { // try from 0035c218 to 0035c223 has its CatchHandler @ 0035c838 */
  FUN_003338b8(&local_80,0,*param_3,param_3[1],param_3[1] - *param_3 >> 2);
                    /* try { // try from 0035c234 to 0035c23b has its CatchHandler @ 0035c834 */
  FUN_003338b8(&local_80,pvStack_78,*param_2,param_2[1],param_2[1] - *param_2 >> 2);
  pvVar23 = (void *)param_2[1];
  pvVar22 = (void *)*param_2;
  lVar13 = param_2[2];
  local_b8 = (void *)0x0;
  local_b0 = (void *)0x0;
  param_2[1] = (long)pvStack_78;
  *param_2 = (long)local_80;
  param_2[2] = local_70;
  local_a8 = 0;
  local_80 = pvVar22;
  pvStack_78 = pvVar23;
  local_70 = lVar13;
  lVar13 = FUN_003747d4(*(undefined8 *)(param_1 + 0x40));
  if (lVar13 != param_2[1] - *param_2 >> 2) {
                    /* try { // try from 0035c27c to 0035c283 has its CatchHandler @ 0035c82c */
    local_c0 = (char *)FUN_00759c3c(0x48);
    uVar3 = s_GruModifyVadExecutableNetworkRun_001eaaf8._48_8_;
    uVar2 = s_GruModifyVadExecutableNetworkRun_001eaaf8._32_8_;
    uVar4 = CONCAT26(s_GruModifyVadExecutableNetworkRun_001eaaf8._62_2_,
                     s_GruModifyVadExecutableNetworkRun_001eaaf8._56_6_);
    uVar5 = CONCAT62(s_GruModifyVadExecutableNetworkRun_001eaaf8._64_6_,
                     s_GruModifyVadExecutableNetworkRun_001eaaf8._62_2_);
    uStack_c8 = _UNK_00200898;
    local_d0 = _DAT_00200890;
    *(undefined8 *)(local_c0 + 0x28) = s_GruModifyVadExecutableNetworkRun_001eaaf8._40_8_;
    *(undefined8 *)(local_c0 + 0x20) = uVar2;
    *(undefined8 *)(local_c0 + 0x38) = uVar4;
    *(undefined8 *)(local_c0 + 0x30) = uVar3;
    uVar6 = s_GruModifyVadExecutableNetworkRun_001eaaf8._24_8_;
    uVar3 = s_GruModifyVadExecutableNetworkRun_001eaaf8._16_8_;
    uVar2 = s_GruModifyVadExecutableNetworkRun_001eaaf8._8_8_;
    uVar4 = s_GruModifyVadExecutableNetworkRun_001eaaf8._0_8_;
    *(undefined8 *)(local_c0 + 0x3e) = uVar5;
    local_c0[0x46] = '\0';
    *(undefined8 *)(local_c0 + 8) = uVar2;
    *(undefined8 *)local_c0 = uVar4;
    *(undefined8 *)(local_c0 + 0x18) = uVar6;
    *(undefined8 *)(local_c0 + 0x10) = uVar3;
                    /* try { // try from 0035c2b8 to 0035c2d3 has its CatchHandler @ 0035c824 */
    FUN_00372794(&local_d0,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/native/src/networks/src/gru/gru_modify_vad_executable_network_runtime.cpp"
                 ,0x27,&DAT_001d7ee2);
    if ((local_d0 & 1) != 0) {
      free(local_c0);
    }
  }
  lVar13 = (*(long **)(param_1 + 0x48))[1] - **(long **)(param_1 + 0x48);
  uVar16 = lVar13 >> 2;
  uVar14 = (long)pvStack_78 - (long)local_80 >> 2;
  if (uVar16 < uVar14 || uVar16 - uVar14 == 0) {
    if (uVar16 < uVar14) {
      pvStack_78 = (void *)((long)local_80 + lVar13);
    }
  }
  else {
                    /* try { // try from 0035c308 to 0035c34f has its CatchHandler @ 0035c854 */
    FUN_002feac4(&local_80,uVar16 - uVar14);
  }
  (**(code **)(**(long **)(param_1 + 0xf0) + 0x10))(*(long **)(param_1 + 0xf0),param_2,&local_80);
  (**(code **)(**(long **)(param_1 + 0x100) + 0x10))
            (*(long **)(param_1 + 0x100),&local_80,&local_b8);
  uVar5 = _UNK_00200b88;
  uVar16 = _DAT_00200b80;
  uVar4 = _UNK_00200b28;
  uVar14 = _DAT_00200b20;
  lVar13 = **(long **)(param_1 + 0x20);
  if ((*(long **)(param_1 + 0x20))[1] - lVar13 == 0x28) {
    uVar19 = 0;
  }
  else {
    lVar20 = 0;
    lVar21 = 0;
    lVar18 = 0;
    uVar19 = 0;
    do {
      lVar13 = FUN_003747dc(lVar13 + lVar18);
      lVar10 = FUN_003747dc(**(long **)(param_1 + 0x30) + lVar18);
      if (lVar13 == lVar10) {
        lVar13 = FUN_003747d4(**(long **)(param_1 + 0x20) + lVar18);
        lVar10 = FUN_003747d4(**(long **)(param_1 + 0x30) + lVar18);
        if (lVar13 != lVar10) goto LAB_0035c454;
      }
      else {
LAB_0035c454:
                    /* try { // try from 0035c454 to 0035c45b has its CatchHandler @ 0035c8b8 */
        local_c0 = (char *)FUN_00759c3c(0x50);
        uVar9 = s_GruModifyVadExecutableNetworkRun_001f54a7._65_8_;
        uVar3 = CONCAT17(s_GruModifyVadExecutableNetworkRun_001f54a7[0x40],
                         s_GruModifyVadExecutableNetworkRun_001f54a7._57_7_);
        local_c0[0x49] = '\0';
        uVar7 = s_GruModifyVadExecutableNetworkRun_001f54a7._48_8_;
        uVar6 = s_GruModifyVadExecutableNetworkRun_001f54a7._32_8_;
        uStack_c8 = uVar4;
        local_d0 = uVar14;
        uVar2 = CONCAT71(s_GruModifyVadExecutableNetworkRun_001f54a7._57_7_,
                         s_GruModifyVadExecutableNetworkRun_001f54a7[0x38]);
        *(undefined8 *)(local_c0 + 0x28) = s_GruModifyVadExecutableNetworkRun_001f54a7._40_8_;
        *(undefined8 *)(local_c0 + 0x20) = uVar6;
        *(undefined8 *)(local_c0 + 0x38) = uVar2;
        *(undefined8 *)(local_c0 + 0x30) = uVar7;
        uVar8 = s_GruModifyVadExecutableNetworkRun_001f54a7._24_8_;
        uVar7 = s_GruModifyVadExecutableNetworkRun_001f54a7._16_8_;
        uVar6 = s_GruModifyVadExecutableNetworkRun_001f54a7._8_8_;
        uVar2 = s_GruModifyVadExecutableNetworkRun_001f54a7._0_8_;
        *(undefined8 *)(local_c0 + 0x41) = uVar9;
        *(undefined8 *)(local_c0 + 0x39) = uVar3;
        *(undefined8 *)(local_c0 + 8) = uVar6;
        *(undefined8 *)local_c0 = uVar2;
        *(undefined8 *)(local_c0 + 0x18) = uVar8;
        *(undefined8 *)(local_c0 + 0x10) = uVar7;
                    /* try { // try from 0035c484 to 0035c49f has its CatchHandler @ 0035c864 */
        FUN_00372794(&local_d0,
                     "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/native/src/networks/src/gru/gru_modify_vad_executable_network_runtime.cpp"
                     ,0x33,&DAT_001d7ee2);
        if ((local_d0 & 1) != 0) {
          free(local_c0);
        }
      }
      lVar13 = *param_2;
      lVar10 = param_2[1];
      lVar11 = FUN_003747d4(**(long **)(param_1 + 0x20) + lVar18);
      if (lVar11 != lVar10 - lVar13 >> 2) {
                    /* try { // try from 0035c4d0 to 0035c4d7 has its CatchHandler @ 0035c860 */
        local_c0 = (char *)FUN_00759c3c(0x48);
        uVar3 = CONCAT71(s_GruModifyVadExecutableNetworkRun_001dc36e._64_7_,
                         s_GruModifyVadExecutableNetworkRun_001dc36e[0x3f]);
        local_c0[0x47] = '\0';
        uVar7 = s_GruModifyVadExecutableNetworkRun_001dc36e._48_8_;
        uVar6 = s_GruModifyVadExecutableNetworkRun_001dc36e._32_8_;
        uStack_c8 = uVar5;
        local_d0 = uVar16;
        uVar2 = CONCAT17(s_GruModifyVadExecutableNetworkRun_001dc36e[0x3f],
                         s_GruModifyVadExecutableNetworkRun_001dc36e._56_7_);
        *(undefined8 *)(local_c0 + 0x28) = s_GruModifyVadExecutableNetworkRun_001dc36e._40_8_;
        *(undefined8 *)(local_c0 + 0x20) = uVar6;
        *(undefined8 *)(local_c0 + 0x38) = uVar2;
        *(undefined8 *)(local_c0 + 0x30) = uVar7;
        uVar8 = s_GruModifyVadExecutableNetworkRun_001dc36e._24_8_;
        uVar7 = s_GruModifyVadExecutableNetworkRun_001dc36e._16_8_;
        uVar6 = s_GruModifyVadExecutableNetworkRun_001dc36e._8_8_;
        uVar2 = s_GruModifyVadExecutableNetworkRun_001dc36e._0_8_;
        *(undefined8 *)(local_c0 + 0x3f) = uVar3;
        *(undefined8 *)(local_c0 + 8) = uVar6;
        *(undefined8 *)local_c0 = uVar2;
        *(undefined8 *)(local_c0 + 0x18) = uVar8;
        *(undefined8 *)(local_c0 + 0x10) = uVar7;
                    /* try { // try from 0035c500 to 0035c51b has its CatchHandler @ 0035c85c */
        FUN_00372794(&local_d0,
                     "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/native/src/networks/src/gru/gru_modify_vad_executable_network_runtime.cpp"
                     ,0x37,&DAT_001d7ee2);
        if ((local_d0 & 1) != 0) {
          free(local_c0);
        }
      }
      plVar12 = (long *)(**(long **)(param_1 + 0x38) + lVar21);
      lVar13 = plVar12[1] - *plVar12;
      uVar17 = lVar13 >> 2;
      uVar15 = (long)pvStack_98 - (long)local_a0 >> 2;
      if (uVar17 < uVar15 || uVar17 - uVar15 == 0) {
        if (uVar17 < uVar15) {
          pvStack_98 = (void *)((long)local_a0 + lVar13);
        }
      }
      else {
                    /* try { // try from 0035c558 to 0035c61b has its CatchHandler @ 0035c8bc */
        FUN_002feac4(&local_a0,uVar17 - uVar15);
      }
      plVar12 = *(long **)(*(long *)(param_1 + 0xd8) + lVar20);
      (**(code **)(*plVar12 + 0x10))(plVar12,param_2,&local_a0);
      plVar12 = (long *)(**(long **)(param_1 + 0x28) + lVar21);
      lVar13 = plVar12[1] - *plVar12;
      uVar17 = lVar13 >> 2;
      uVar15 = (long)pvStack_78 - (long)local_80 >> 2;
      if (uVar17 < uVar15 || uVar17 - uVar15 == 0) {
        if (uVar17 < uVar15) {
          pvStack_78 = (void *)((long)local_80 + lVar13);
        }
      }
      else {
        FUN_002feac4(&local_80,uVar17 - uVar15);
      }
      plVar12 = *(long **)(*(long *)(param_1 + 0xc0) + lVar20);
      (**(code **)(*plVar12 + 0x10))(plVar12,param_2,&local_80);
      FUN_0036db0c(*(undefined8 *)(param_1 + 0x10),&local_a0,&local_80,param_2);
      if (uVar19 == 0) {
        FUN_0036d21c(*(undefined8 *)(param_1 + 0x10),param_2,&local_b8,param_3,&local_80);
        pvVar23 = (void *)param_3[1];
        pvVar22 = (void *)*param_3;
        lVar13 = param_3[2];
        param_3[1] = (long)pvStack_78;
        *param_3 = (long)local_80;
        param_3[2] = local_70;
        local_80 = pvVar22;
        pvStack_78 = pvVar23;
        local_70 = lVar13;
      }
      uVar19 = uVar19 + 1;
      lVar18 = lVar18 + 0x28;
      lVar13 = **(long **)(param_1 + 0x20);
      lVar21 = lVar21 + 0x18;
      lVar20 = lVar20 + 0x10;
      uVar15 = ((*(long **)(param_1 + 0x20))[1] - lVar13 >> 3) * -0x3333333333333333 - 1;
    } while (uVar19 < uVar15);
    if (uVar19 != uVar15) {
                    /* try { // try from 0035c62c to 0035c637 has its CatchHandler @ 0035c814 */
      local_c0 = (char *)FUN_00759c3c(0x50);
      uVar2 = s_GruModifyVadExecutableNetworkRun_001eab3f._48_8_;
      uVar5 = s_GruModifyVadExecutableNetworkRun_001eab3f._32_8_;
      uVar4 = CONCAT62(s_GruModifyVadExecutableNetworkRun_001eab3f._58_6_,
                       s_GruModifyVadExecutableNetworkRun_001eab3f._56_2_);
      uStack_c8 = _UNK_00200628;
      local_d0 = _DAT_00200620;
      *(undefined8 *)(local_c0 + 0x28) = s_GruModifyVadExecutableNetworkRun_001eab3f._40_8_;
      *(undefined8 *)(local_c0 + 0x20) = uVar5;
      *(undefined8 *)(local_c0 + 0x38) = uVar4;
      *(undefined8 *)(local_c0 + 0x30) = uVar2;
      uVar5 = s_GruModifyVadExecutableNetworkRun_001eab3f._66_8_;
      uVar4 = CONCAT26(s_GruModifyVadExecutableNetworkRun_001eab3f._64_2_,
                       s_GruModifyVadExecutableNetworkRun_001eab3f._58_6_);
      local_c0[0x4a] = '\0';
      *(undefined8 *)(local_c0 + 0x42) = uVar5;
      *(undefined8 *)(local_c0 + 0x3a) = uVar4;
      uVar2 = s_GruModifyVadExecutableNetworkRun_001eab3f._24_8_;
      uVar5 = s_GruModifyVadExecutableNetworkRun_001eab3f._16_8_;
      uVar4 = s_GruModifyVadExecutableNetworkRun_001eab3f._0_8_;
      *(undefined8 *)(local_c0 + 8) = s_GruModifyVadExecutableNetworkRun_001eab3f._8_8_;
      *(undefined8 *)local_c0 = uVar4;
      *(undefined8 *)(local_c0 + 0x18) = uVar2;
      *(undefined8 *)(local_c0 + 0x10) = uVar5;
                    /* try { // try from 0035c66c to 0035c687 has its CatchHandler @ 0035c810 */
      FUN_00372794(&local_d0,
                   "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/native/src/networks/src/gru/gru_modify_vad_executable_network_runtime.cpp"
                   ,0x4a,&DAT_001d7ee2);
      if ((local_d0 & 1) != 0) {
        free(local_c0);
      }
    }
  }
  plVar12 = (long *)(**(long **)(param_1 + 0x28) + uVar19 * 0x18);
  lVar13 = plVar12[1] - *plVar12;
  uVar16 = lVar13 >> 2;
  uVar14 = (long)pvStack_98 - (long)local_a0 >> 2;
  if (uVar16 < uVar14 || uVar16 - uVar14 == 0) {
    if (uVar16 < uVar14) {
      pvStack_98 = (void *)((long)local_a0 + lVar13);
    }
  }
  else {
                    /* try { // try from 0035c6cc to 0035c703 has its CatchHandler @ 0035c84c */
    FUN_002feac4(&local_a0,uVar16 - uVar14);
  }
  plVar12 = *(long **)(*(long *)(param_1 + 0xc0) + uVar19 * 0x10);
  (**(code **)(*plVar12 + 0x10))(plVar12,param_2,&local_a0);
  pvVar23 = (void *)param_2[1];
  pvVar22 = (void *)*param_2;
  lVar13 = param_2[2];
  *param_2 = (long)local_a0;
  param_2[2] = lStack_90;
  param_2[1] = (long)pvStack_98;
  lStack_90 = lVar13;
  if ((*(long *)(param_1 + 8) != param_3[1] - *param_3 >> 2) ||
     (lVar13 = (long)pvStack_98 - (long)local_a0, local_a0 = pvVar22, pvStack_98 = pvVar23,
     lVar13 != 4)) {
    local_a0 = pvVar22;
    pvStack_98 = pvVar23;
                    /* try { // try from 0035c748 to 0035c74f has its CatchHandler @ 0035c81c */
    local_c0 = (char *)FUN_00759c3c(0x40);
    uVar2 = s_GruModifyVadExecutableNetworkRun_001e0630._24_8_;
    uVar5 = s_GruModifyVadExecutableNetworkRun_001e0630._16_8_;
    uVar4 = s_GruModifyVadExecutableNetworkRun_001e0630._0_8_;
    uStack_c8 = _UNK_00200148;
    local_d0 = _DAT_00200140;
    *(undefined8 *)(local_c0 + 8) = s_GruModifyVadExecutableNetworkRun_001e0630._8_8_;
    *(undefined8 *)local_c0 = uVar4;
    *(undefined8 *)(local_c0 + 0x18) = uVar2;
    *(undefined8 *)(local_c0 + 0x10) = uVar5;
    uVar3 = s_GruModifyVadExecutableNetworkRun_001e0630._50_8_;
    uVar2 = s_GruModifyVadExecutableNetworkRun_001e0630._32_8_;
    uVar4 = CONCAT62(s_GruModifyVadExecutableNetworkRun_001e0630._42_6_,
                     s_GruModifyVadExecutableNetworkRun_001e0630._40_2_);
    uVar5 = CONCAT26(s_GruModifyVadExecutableNetworkRun_001e0630._48_2_,
                     s_GruModifyVadExecutableNetworkRun_001e0630._42_6_);
    local_c0[0x3a] = '\0';
    *(undefined8 *)(local_c0 + 0x28) = uVar4;
    *(undefined8 *)(local_c0 + 0x20) = uVar2;
    *(undefined8 *)(local_c0 + 0x32) = uVar3;
    *(undefined8 *)(local_c0 + 0x2a) = uVar5;
                    /* try { // try from 0035c784 to 0035c79f has its CatchHandler @ 0035c818 */
    FUN_00372794(&local_d0,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/native/src/networks/src/gru/gru_modify_vad_executable_network_runtime.cpp"
                 ,0x52,&DAT_001d7ee2);
    if ((local_d0 & 1) != 0) {
      free(local_c0);
    }
  }
  if (local_b8 != (void *)0x0) {
    local_b0 = local_b8;
    free(local_b8);
  }
  if (local_a0 != (void *)0x0) {
    pvStack_98 = local_a0;
    free(local_a0);
  }
  if (local_80 != (void *)0x0) {
    pvStack_78 = local_80;
    free(local_80);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0035c908  FUN_0035c908 =====

void FUN_0035c908(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  plVar3 = (long *)param_1[0x21];
  *param_1 = (long)(PTR_DAT_007a1648 + 0x10);
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
  }
  plVar3 = (long *)param_1[0x1f];
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
  }
  pvVar4 = (void *)param_1[0x1b];
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x1c];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          FUN_0071245c(plVar3);
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x1b];
    }
    param_1[0x1c] = (long)pvVar4;
    free(pvVar2);
  }
  pvVar4 = (void *)param_1[0x18];
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x19];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          FUN_0071245c(plVar3);
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x18];
    }
    param_1[0x19] = (long)pvVar4;
    free(pvVar2);
  }
  FUN_0035a1f0(param_1 + 4);
  plVar3 = (long *)param_1[3];
  *param_1 = (long)&PTR_FUN_00761568;
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
    return;
  }
  return;
}


// ===== 0035cac0  FUN_0035cac0 =====

void FUN_0035cac0(void *param_1)

{
  FUN_0035c908();
  free(param_1);
  return;
}


// ===== 0035cae4  FUN_0035cae4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0035cae4(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong local_70;
  undefined8 uStack_68;
  char *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_0035af2c();
  *param_1 = (long)(PTR_DAT_007a1650 + 0x10);
                    /* try { // try from 0035cb2c to 0035cb37 has its CatchHandler @ 0035cf40 */
  FUN_00362c5c(param_1 + 4,param_2);
  plVar8 = (long *)param_1[4];
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  if ((ulong)((plVar8[1] - *plVar8 >> 3) * -0x3333333333333333) <
      (((long *)param_1[6])[1] - *(long *)param_1[6] >> 3) * -0x3333333333333333 - 1U) {
                    /* try { // try from 0035cb90 to 0035cb97 has its CatchHandler @ 0035cef4 */
    local_60 = (char *)FUN_00759c3c(0x60);
    uVar5 = s_GruSepDenseExecutableNetworkRunt_001e49e6._56_8_;
    uVar4 = s_GruSepDenseExecutableNetworkRunt_001e49e6._48_8_;
    uVar3 = s_GruSepDenseExecutableNetworkRunt_001e49e6._32_8_;
    uStack_68 = _UNK_00200a58;
    local_70 = _DAT_00200a50;
    *(undefined8 *)(local_60 + 0x28) = s_GruSepDenseExecutableNetworkRunt_001e49e6._40_8_;
    *(undefined8 *)(local_60 + 0x20) = uVar3;
    *(undefined8 *)(local_60 + 0x38) = uVar5;
    *(undefined8 *)(local_60 + 0x30) = uVar4;
    uVar6 = s_GruSepDenseExecutableNetworkRunt_001e49e6._87_8_;
    uVar5 = s_GruSepDenseExecutableNetworkRunt_001e49e6._64_8_;
    uVar3 = CONCAT17(s_GruSepDenseExecutableNetworkRunt_001e49e6[0x4f],
                     s_GruSepDenseExecutableNetworkRunt_001e49e6._72_7_);
    uVar4 = CONCAT71(s_GruSepDenseExecutableNetworkRunt_001e49e6._80_7_,
                     s_GruSepDenseExecutableNetworkRunt_001e49e6[0x4f]);
    local_60[0x5f] = '\0';
    *(undefined8 *)(local_60 + 0x48) = uVar3;
    *(undefined8 *)(local_60 + 0x40) = uVar5;
    *(undefined8 *)(local_60 + 0x57) = uVar6;
    *(undefined8 *)(local_60 + 0x4f) = uVar4;
    uVar5 = s_GruSepDenseExecutableNetworkRunt_001e49e6._24_8_;
    uVar4 = s_GruSepDenseExecutableNetworkRunt_001e49e6._16_8_;
    uVar3 = s_GruSepDenseExecutableNetworkRunt_001e49e6._0_8_;
    *(undefined8 *)(local_60 + 8) = s_GruSepDenseExecutableNetworkRunt_001e49e6._8_8_;
    *(undefined8 *)local_60 = uVar3;
    *(undefined8 *)(local_60 + 0x18) = uVar5;
    *(undefined8 *)(local_60 + 0x10) = uVar4;
                    /* try { // try from 0035cbd4 to 0035cbef has its CatchHandler @ 0035cedc */
    FUN_00372794(&local_70,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/native/src/networks/src/gru/gru_sep_dense_executable_network_runtime.cpp"
                 ,0x11,"GruSepDenseExecutableNetworkRuntime");
    if ((local_70 & 1) != 0) {
      free(local_60);
    }
    plVar8 = (long *)param_1[4];
  }
                    /* try { // try from 0035cc08 to 0035cc1b has its CatchHandler @ 0035cf48 */
  FUN_0035af5c(plVar8,param_1[5],param_1 + 0x36);
  FUN_0035af5c(param_1[6],param_1[7],param_1 + 0x39);
  lVar9 = param_1[8];
  lVar1 = param_1[9];
                    /* try { // try from 0035cc20 to 0035cc27 has its CatchHandler @ 0035cf3c */
  plVar8 = (long *)FUN_00759c3c(0x40);
  puVar7 = PTR_DAT_007a1628;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)(puVar7 + 0x10);
                    /* try { // try from 0035cc44 to 0035cc53 has its CatchHandler @ 0035cf20 */
  FUN_0036bdc8(plVar8 + 3,lVar9,lVar1);
  plVar10 = (long *)param_1[0x3d];
  param_1[0x3c] = (long)(plVar8 + 3);
  param_1[0x3d] = (long)plVar8;
  if ((plVar10 != (long *)0x0) && (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar10 + 1), lVar9 == 0)
     ) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    FUN_0071245c(plVar10);
  }
                    /* try { // try from 0035cc8c to 0035cc9f has its CatchHandler @ 0035cf48 */
  FUN_0035af5c(param_1[0x18],param_1[0x19],param_1 + 0x3e);
  FUN_0035af5c(param_1[0x1a],param_1[0x1b],param_1 + 0x41);
  lVar9 = param_1[0x1c];
  lVar1 = param_1[0x1d];
                    /* try { // try from 0035cca4 to 0035ccab has its CatchHandler @ 0035cf1c */
  plVar8 = (long *)FUN_00759c3c(0x40);
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)(puVar7 + 0x10);
                    /* try { // try from 0035ccc0 to 0035cccf has its CatchHandler @ 0035cf18 */
  FUN_0036bdc8(plVar8 + 3,lVar9,lVar1);
  plVar10 = (long *)param_1[0x45];
  param_1[0x44] = (long)(plVar8 + 3);
  param_1[0x45] = (long)plVar8;
  if ((plVar10 != (long *)0x0) && (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar10 + 1), lVar9 == 0)
     ) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    FUN_0071245c(plVar10);
  }
  lVar9 = param_1[0x30];
  lVar1 = param_1[0x31];
                    /* try { // try from 0035cd0c to 0035cd13 has its CatchHandler @ 0035cf14 */
  plVar8 = (long *)FUN_00759c3c(0x40);
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)(puVar7 + 0x10);
                    /* try { // try from 0035cd28 to 0035cd37 has its CatchHandler @ 0035cf10 */
  FUN_0036bdc8(plVar8 + 3,lVar9,lVar1);
  plVar10 = (long *)param_1[0x47];
  param_1[0x46] = (long)(plVar8 + 3);
  param_1[0x47] = (long)plVar8;
  if ((plVar10 != (long *)0x0) && (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar10 + 1), lVar9 == 0)
     ) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    FUN_0071245c(plVar10);
  }
  lVar9 = param_1[0x32];
  lVar1 = param_1[0x33];
                    /* try { // try from 0035cd74 to 0035cd7b has its CatchHandler @ 0035cf0c */
  plVar8 = (long *)FUN_00759c3c(0x40);
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)(puVar7 + 0x10);
                    /* try { // try from 0035cd90 to 0035cd9f has its CatchHandler @ 0035cf08 */
  FUN_0036bdc8(plVar8 + 3,lVar9,lVar1);
  plVar10 = (long *)param_1[0x49];
  param_1[0x48] = (long)(plVar8 + 3);
  param_1[0x49] = (long)plVar8;
  if ((plVar10 != (long *)0x0) && (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar10 + 1), lVar9 == 0)
     ) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    FUN_0071245c(plVar10);
  }
  lVar9 = param_1[0x34];
  lVar1 = param_1[0x35];
                    /* try { // try from 0035cddc to 0035cde3 has its CatchHandler @ 0035cf04 */
  plVar8 = (long *)FUN_00759c3c(0x40);
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)(puVar7 + 0x10);
                    /* try { // try from 0035cdf8 to 0035ce07 has its CatchHandler @ 0035cf00 */
  FUN_0036bdc8(plVar8 + 3,lVar9,lVar1);
  plVar10 = (long *)param_1[0x4b];
  param_1[0x4a] = (long)(plVar8 + 3);
  param_1[0x4b] = (long)plVar8;
  if ((plVar10 != (long *)0x0) && (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar10 + 1), lVar9 == 0)
     ) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    FUN_0071245c(plVar10);
  }
                    /* try { // try from 0035ce40 to 0035ce47 has its CatchHandler @ 0035cefc */
  plVar8 = (long *)FUN_00759c3c(0x30);
  puVar7 = PTR_DAT_007a1638;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)(puVar7 + 0x10);
                    /* try { // try from 0035ce64 to 0035ce6b has its CatchHandler @ 0035cef8 */
  FUN_0036ae80(plVar8 + 3);
  plVar10 = (long *)param_1[0x4d];
  param_1[0x4c] = (long)(plVar8 + 3);
  param_1[0x4d] = (long)plVar8;
  if ((plVar10 != (long *)0x0) && (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar10 + 1), lVar9 == 0)
     ) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    FUN_0071245c(plVar10);
  }
  lVar9 = FUN_003747d4(param_1[0x34]);
  param_1[1] = lVar9;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035cfd0  FUN_0035cfd0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0035cfd0(long param_1,void **param_2,void **param_3,undefined8 param_4)

{
  long *plVar1;
  size_t sVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *pvVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 uVar16;
  void *pvVar17;
  void *pvVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  ulong uVar24;
  float fVar25;
  void *pvVar26;
  void *pvVar27;
  ulong local_110;
  undefined8 uStack_108;
  char *local_100;
  void *local_f0;
  void *pvStack_e8;
  void *local_e0;
  void *local_d0;
  void *pvStack_c8;
  char *local_c0;
  void *local_b8;
  void *local_b0;
  undefined8 local_a8;
  void *local_a0;
  void *pvStack_98;
  void *pvStack_90;
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  local_a0 = (void *)0x0;
  pvStack_98 = (void *)0x0;
  pvStack_90 = (void *)0x0;
  if (&local_a0 != param_3) {
                    /* try { // try from 0035d030 to 0035d037 has its CatchHandler @ 0035d85c */
    FUN_0031e170(&local_a0,*param_3,param_3[1],(long)param_3[1] - (long)*param_3 >> 2);
  }
                    /* try { // try from 0035d050 to 0035d057 has its CatchHandler @ 0035d87c */
  FUN_003338b8(&local_a0,pvStack_98,*param_2,param_2[1],(long)param_2[1] - (long)*param_2 >> 2);
  local_b8 = (void *)0x0;
  local_b0 = (void *)0x0;
  local_a8 = 0;
  lVar10 = FUN_003747d4(*(undefined8 *)(param_1 + 0x40));
  if (lVar10 != (long)pvStack_98 - (long)local_a0 >> 2) {
                    /* try { // try from 0035d078 to 0035d07f has its CatchHandler @ 0035d854 */
    local_c0 = (char *)FUN_00759c3c(0x48);
    uVar4 = s_GruSepDenseExecutableNetworkRunt_001e066b._48_8_;
    uVar22 = s_GruSepDenseExecutableNetworkRunt_001e066b._32_8_;
    uVar16 = CONCAT35(s_GruSepDenseExecutableNetworkRunt_001e066b._61_3_,
                      s_GruSepDenseExecutableNetworkRunt_001e066b._56_5_);
    uVar5 = CONCAT53(s_GruSepDenseExecutableNetworkRunt_001e066b._64_5_,
                     s_GruSepDenseExecutableNetworkRunt_001e066b._61_3_);
    pvStack_c8 = (void *)_UNK_00200268;
    local_d0 = _DAT_00200260;
    *(undefined8 *)(local_c0 + 0x28) = s_GruSepDenseExecutableNetworkRunt_001e066b._40_8_;
    *(undefined8 *)(local_c0 + 0x20) = uVar22;
    *(undefined8 *)(local_c0 + 0x38) = uVar16;
    *(undefined8 *)(local_c0 + 0x30) = uVar4;
    uVar6 = s_GruSepDenseExecutableNetworkRunt_001e066b._24_8_;
    uVar4 = s_GruSepDenseExecutableNetworkRunt_001e066b._16_8_;
    uVar22 = s_GruSepDenseExecutableNetworkRunt_001e066b._8_8_;
    uVar16 = s_GruSepDenseExecutableNetworkRunt_001e066b._0_8_;
    *(undefined8 *)(local_c0 + 0x3d) = uVar5;
    local_c0[0x45] = '\0';
    *(undefined8 *)(local_c0 + 8) = uVar22;
    *(undefined8 *)local_c0 = uVar16;
    *(undefined8 *)(local_c0 + 0x18) = uVar6;
    *(undefined8 *)(local_c0 + 0x10) = uVar4;
                    /* try { // try from 0035d0b4 to 0035d0cf has its CatchHandler @ 0035d840 */
    FUN_00372794(&local_d0,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/native/src/networks/src/gru/gru_sep_dense_executable_network_runtime.cpp"
                 ,0x35,&DAT_001d7ee2);
    if (((ulong)local_d0 & 1) != 0) {
      free(local_c0);
    }
  }
  pvStack_c8 = (void *)0x0;
  local_c0 = (char *)0x0;
  local_d0 = (void *)0x0;
  sVar2 = (*(long **)(param_1 + 0x48))[1] - **(long **)(param_1 + 0x48);
  if (sVar2 == 0) {
LAB_0035d120:
                    /* try { // try from 0035d12c to 0035d137 has its CatchHandler @ 0035d874 */
    (**(code **)(**(long **)(param_1 + 0x1e0) + 0x10))
              (*(long **)(param_1 + 0x1e0),&local_a0,&local_d0);
    pvStack_e8 = (void *)0x0;
    local_e0 = (void *)0x0;
    local_f0 = (void *)0x0;
    sVar2 = (*(long **)(param_1 + 0xe8))[1] - **(long **)(param_1 + 0xe8);
    if (sVar2 != 0) {
      if ((long)sVar2 < 0) goto LAB_0035d818;
                    /* try { // try from 0035d154 to 0035d15b has its CatchHandler @ 0035d88c */
      local_f0 = (void *)FUN_00759c3c(sVar2);
      pvVar18 = (void *)((long)local_f0 + sVar2);
      local_e0 = pvVar18;
      memset(local_f0,0,sVar2);
      pvStack_e8 = pvVar18;
    }
                    /* try { // try from 0035d184 to 0035d203 has its CatchHandler @ 0035d8bc */
    (**(code **)(**(long **)(param_1 + 0x220) + 0x10))
              (*(long **)(param_1 + 0x220),&local_d0,&local_f0);
    (**(code **)(**(long **)(param_1 + 0x260) + 0x10))
              (*(long **)(param_1 + 0x260),&local_f0,&local_b8);
    (**(code **)(**(long **)(param_1 + 0x230) + 0x10))
              (*(long **)(param_1 + 0x230),&local_a0,&local_d0);
    (**(code **)(**(long **)(param_1 + 0x240) + 0x10))
              (*(long **)(param_1 + 0x240),&local_d0,&local_f0);
    (**(code **)(**(long **)(param_1 + 0x260) + 0x10))
              (*(long **)(param_1 + 0x260),&local_f0,&local_a0);
    FUN_0036cee8(*(undefined8 *)(param_1 + 0x10),param_3,&local_a0,&local_f0);
                    /* try { // try from 0035d214 to 0035d21b has its CatchHandler @ 0035d86c */
    FUN_003338b8(&local_f0,pvStack_e8,*param_2,param_2[1],(long)param_2[1] - (long)*param_2 >> 2);
    pvVar27 = param_2[1];
    pvVar26 = *param_2;
    pvVar18 = param_2[2];
    param_2[1] = pvStack_e8;
    *param_2 = local_f0;
    param_2[2] = local_e0;
    uVar5 = _UNK_00200898;
    uVar20 = _DAT_00200890;
    uVar16 = _UNK_00200688;
    uVar15 = _DAT_00200680;
    local_f0 = pvVar26;
    local_e0 = pvVar18;
    if ((*(long **)(param_1 + 0x30))[1] != **(long **)(param_1 + 0x30)) {
      lVar21 = 0;
      lVar23 = 0;
      lVar10 = 0;
      uVar24 = 0;
      pvStack_e8 = pvVar27;
      do {
        lVar11 = FUN_003747dc(**(long **)(param_1 + 0xc0) + lVar10);
        lVar12 = FUN_003747dc(**(long **)(param_1 + 0xd0) + lVar10);
        if (lVar11 == lVar12) {
          lVar11 = FUN_003747d4(**(long **)(param_1 + 0x20) + lVar10);
          lVar12 = FUN_003747d4(**(long **)(param_1 + 0x30) + lVar10);
          if (lVar11 != lVar12) goto LAB_0035d324;
        }
        else {
LAB_0035d324:
                    /* try { // try from 0035d324 to 0035d32b has its CatchHandler @ 0035d8e4 */
          local_100 = (char *)FUN_00759c3c(0x50);
          uVar8 = s_GruSepDenseExecutableNetworkRunt_001c2d86._64_8_;
          local_100[0x48] = '\0';
          uVar7 = s_GruSepDenseExecutableNetworkRunt_001c2d86._56_8_;
          uVar6 = s_GruSepDenseExecutableNetworkRunt_001c2d86._48_8_;
          uVar4 = s_GruSepDenseExecutableNetworkRunt_001c2d86._40_8_;
          uVar22 = s_GruSepDenseExecutableNetworkRunt_001c2d86._32_8_;
          uStack_108 = uVar16;
          local_110 = uVar15;
          *(undefined8 *)(local_100 + 0x40) = uVar8;
          *(undefined8 *)(local_100 + 0x28) = uVar4;
          *(undefined8 *)(local_100 + 0x20) = uVar22;
          *(undefined8 *)(local_100 + 0x38) = uVar7;
          *(undefined8 *)(local_100 + 0x30) = uVar6;
          uVar6 = s_GruSepDenseExecutableNetworkRunt_001c2d86._24_8_;
          uVar4 = s_GruSepDenseExecutableNetworkRunt_001c2d86._16_8_;
          uVar22 = s_GruSepDenseExecutableNetworkRunt_001c2d86._0_8_;
          *(undefined8 *)(local_100 + 8) = s_GruSepDenseExecutableNetworkRunt_001c2d86._8_8_;
          *(undefined8 *)local_100 = uVar22;
          *(undefined8 *)(local_100 + 0x18) = uVar6;
          *(undefined8 *)(local_100 + 0x10) = uVar4;
                    /* try { // try from 0035d354 to 0035d36f has its CatchHandler @ 0035d8cc */
          FUN_00372794(&local_110,
                       "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/native/src/networks/src/gru/gru_sep_dense_executable_network_runtime.cpp"
                       ,0x4f,&DAT_001d7ee2);
          if ((local_110 & 1) != 0) {
            free(local_100);
          }
        }
        plVar14 = (long *)(**(long **)(param_1 + 200) + lVar23);
        plVar1 = (long *)(**(long **)(param_1 + 0xd8) + lVar23);
        if ((plVar14[1] - *plVar14 != plVar1[1] - *plVar1) ||
           (pvVar18 = *param_2, pvVar26 = param_2[1],
           lVar11 = FUN_003747d4(**(long **)(param_1 + 0x20) + lVar10),
           lVar11 != (long)pvVar26 - (long)pvVar18 >> 2)) {
                    /* try { // try from 0035d3d0 to 0035d3d7 has its CatchHandler @ 0035d8c8 */
          local_100 = (char *)FUN_00759c3c(0x48);
          uVar4 = CONCAT62(s_GruSepDenseExecutableNetworkRunt_001bbeac._64_6_,
                           s_GruSepDenseExecutableNetworkRunt_001bbeac._62_2_);
          local_100[0x46] = '\0';
          uVar7 = s_GruSepDenseExecutableNetworkRunt_001bbeac._48_8_;
          uVar6 = s_GruSepDenseExecutableNetworkRunt_001bbeac._32_8_;
          uStack_108 = uVar5;
          local_110 = uVar20;
          uVar22 = CONCAT26(s_GruSepDenseExecutableNetworkRunt_001bbeac._62_2_,
                            s_GruSepDenseExecutableNetworkRunt_001bbeac._56_6_);
          *(undefined8 *)(local_100 + 0x28) = s_GruSepDenseExecutableNetworkRunt_001bbeac._40_8_;
          *(undefined8 *)(local_100 + 0x20) = uVar6;
          *(undefined8 *)(local_100 + 0x38) = uVar22;
          *(undefined8 *)(local_100 + 0x30) = uVar7;
          uVar8 = s_GruSepDenseExecutableNetworkRunt_001bbeac._24_8_;
          uVar7 = s_GruSepDenseExecutableNetworkRunt_001bbeac._16_8_;
          uVar6 = s_GruSepDenseExecutableNetworkRunt_001bbeac._8_8_;
          uVar22 = s_GruSepDenseExecutableNetworkRunt_001bbeac._0_8_;
          *(undefined8 *)(local_100 + 0x3e) = uVar4;
          *(undefined8 *)(local_100 + 8) = uVar6;
          *(undefined8 *)local_100 = uVar22;
          *(undefined8 *)(local_100 + 0x18) = uVar8;
          *(undefined8 *)(local_100 + 0x10) = uVar7;
                    /* try { // try from 0035d400 to 0035d41b has its CatchHandler @ 0035d8c4 */
          FUN_00372794(&local_110,
                       "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/native/src/networks/src/gru/gru_sep_dense_executable_network_runtime.cpp"
                       ,0x54,&DAT_001d7ee2);
          if ((local_110 & 1) != 0) {
            free(local_100);
          }
        }
        pvStack_c8 = local_d0;
        uVar13 = FUN_003747dc(**(long **)(param_1 + 0x30) + lVar10);
        uVar19 = (long)pvStack_c8 - (long)local_d0 >> 2;
        if (uVar13 < uVar19 || uVar13 - uVar19 == 0) {
          if (uVar13 < uVar19) {
            pvStack_c8 = (void *)((long)local_d0 + uVar13 * 4);
          }
        }
        else {
                    /* try { // try from 0035d458 to 0035d68f has its CatchHandler @ 0035d8e8 */
          FUN_002feac4(&local_d0,uVar13 - uVar19);
        }
        plVar14 = *(long **)(*(long *)(param_1 + 0x1c8) + lVar21);
        (**(code **)(*plVar14 + 0x10))(plVar14,param_2,&local_d0);
        pvStack_e8 = local_f0;
        uVar13 = FUN_003747dc(**(long **)(param_1 + 0xd0) + lVar10);
        uVar19 = (long)pvStack_e8 - (long)local_f0 >> 2;
        if (uVar13 < uVar19 || uVar13 - uVar19 == 0) {
          if (uVar13 < uVar19) {
            pvStack_e8 = (void *)((long)local_f0 + uVar13 * 4);
          }
        }
        else {
          FUN_002feac4(&local_f0,uVar13 - uVar19);
        }
        plVar14 = *(long **)(*(long *)(param_1 + 0x208) + lVar21);
        (**(code **)(*plVar14 + 0x10))(plVar14,&local_d0,&local_f0);
        plVar14 = *(long **)(*(long *)(param_1 + 0x1b0) + lVar21);
        (**(code **)(*plVar14 + 0x10))(plVar14,param_2,&local_d0);
        plVar14 = *(long **)(*(long *)(param_1 + 0x1f0) + lVar21);
        (**(code **)(*plVar14 + 0x10))(plVar14,&local_d0,&local_a0);
        uVar22 = *(undefined8 *)(param_1 + 0x10);
        fVar25 = (float)FUN_0036c640(uVar22,&local_a0);
        FUN_0036ca54(-fVar25,uVar22,&local_a0,&local_a0);
        uVar22 = *(undefined8 *)(param_1 + 0x10);
        fVar25 = (float)FUN_0036c750(uVar22,&local_a0);
        FUN_0036cb04(1.0 / fVar25,uVar22,&local_a0,&local_a0);
        FUN_0036cee8(*(undefined8 *)(param_1 + 0x10),&local_a0,**(long **)(param_1 + 0x170) + lVar23
                     ,&local_d0);
        FUN_0036cd50(*(undefined8 *)(param_1 + 0x10),&local_d0,**(long **)(param_1 + 0x160) + lVar23
                     ,&local_a0);
        uVar22 = *(undefined8 *)(param_1 + 0x10);
        fVar25 = (float)FUN_0036c640(uVar22,&local_f0);
        FUN_0036ca54(-fVar25,uVar22,&local_f0,&local_f0);
        uVar22 = *(undefined8 *)(param_1 + 0x10);
        fVar25 = (float)FUN_0036c750(uVar22,&local_f0);
        FUN_0036cb04(1.0 / fVar25,uVar22,&local_f0,&local_f0);
        FUN_0036cee8(*(undefined8 *)(param_1 + 0x10),&local_f0,**(long **)(param_1 + 0x178) + lVar23
                     ,&local_d0);
        FUN_0036cd50(*(undefined8 *)(param_1 + 0x10),&local_d0,**(long **)(param_1 + 0x168) + lVar23
                     ,&local_f0);
        FUN_0036db0c(*(undefined8 *)(param_1 + 0x10),&local_f0,&local_a0,param_2);
        pvVar18 = local_a0;
        pvVar26 = pvStack_98;
        if (uVar24 == 0) {
          FUN_0036d21c(*(undefined8 *)(param_1 + 0x10),param_3,&local_b8,param_2,&local_a0);
          pvVar9 = pvStack_98;
          pvVar27 = local_a0;
          pvVar26 = param_3[1];
          pvVar18 = *param_3;
          pvVar17 = param_3[2];
          *param_3 = local_a0;
          param_3[2] = pvStack_90;
          param_3[1] = pvStack_98;
          pvStack_90 = pvVar17;
          if (param_2 != param_3) {
            lVar11 = (long)pvStack_98 - (long)local_a0;
            local_a0 = pvVar18;
            pvStack_98 = pvVar26;
            FUN_0031e170(param_2,pvVar27,pvVar9,lVar11 >> 2);
            pvVar18 = local_a0;
            pvVar26 = pvStack_98;
          }
        }
        pvStack_98 = pvVar26;
        local_a0 = pvVar18;
        uVar24 = uVar24 + 1;
        lVar10 = lVar10 + 0x28;
        lVar23 = lVar23 + 0x18;
        lVar21 = lVar21 + 0x10;
        uVar13 = ((*(long **)(param_1 + 0x30))[1] - **(long **)(param_1 + 0x30) >> 3) *
                 -0x3333333333333333;
      } while (uVar24 < uVar13);
      if (uVar24 != uVar13) {
                    /* try { // try from 0035d6b8 to 0035d6bf has its CatchHandler @ 0035d838 */
        local_100 = (char *)FUN_00759c3c(0x48);
        uStack_108 = _UNK_00200578;
        local_110 = _DAT_00200570;
        uVar4 = s_GruSepDenseExecutableNetworkRunt_001f30e3._24_8_;
        uVar22 = s_GruSepDenseExecutableNetworkRunt_001f30e3._16_8_;
        uVar5 = s_GruSepDenseExecutableNetworkRunt_001f30e3._8_8_;
        uVar16 = s_GruSepDenseExecutableNetworkRunt_001f30e3._0_8_;
        local_100[0x40] = 'e';
        local_100[0x41] = '.';
        local_100[0x42] = '\0';
        *(undefined8 *)(local_100 + 8) = uVar5;
        *(undefined8 *)local_100 = uVar16;
        *(undefined8 *)(local_100 + 0x18) = uVar4;
        *(undefined8 *)(local_100 + 0x10) = uVar22;
        uVar22 = s_GruSepDenseExecutableNetworkRunt_001f30e3._56_8_;
        uVar5 = s_GruSepDenseExecutableNetworkRunt_001f30e3._48_8_;
        uVar16 = s_GruSepDenseExecutableNetworkRunt_001f30e3._32_8_;
        *(undefined8 *)(local_100 + 0x28) = s_GruSepDenseExecutableNetworkRunt_001f30e3._40_8_;
        *(undefined8 *)(local_100 + 0x20) = uVar16;
        *(undefined8 *)(local_100 + 0x38) = uVar22;
        *(undefined8 *)(local_100 + 0x30) = uVar5;
                    /* try { // try from 0035d6f4 to 0035d70f has its CatchHandler @ 0035d830 */
        FUN_00372794(&local_110,
                     "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/native/src/networks/src/gru/gru_sep_dense_executable_network_runtime.cpp"
                     ,0x7a,&DAT_001d7ee2);
        if ((local_110 & 1) != 0) {
          free(local_100);
        }
      }
    }
    pvStack_e8 = local_f0;
    uVar15 = FUN_003747dc(*(undefined8 *)(param_1 + 0x1a0));
    uVar20 = (long)pvStack_e8 - (long)local_f0 >> 2;
    if (uVar15 < uVar20 || uVar15 - uVar20 == 0) {
      if (uVar15 < uVar20) {
        pvStack_e8 = (void *)((long)local_f0 + uVar15 * 4);
      }
    }
    else {
                    /* try { // try from 0035d744 to 0035d78b has its CatchHandler @ 0035d8b4 */
      FUN_002feac4(&local_f0,uVar15 - uVar20);
    }
    (**(code **)(**(long **)(param_1 + 0x250) + 0x10))
              (*(long **)(param_1 + 0x250),param_2,&local_f0);
    (**(code **)(**(long **)(param_1 + 0x260) + 0x10))
              (*(long **)(param_1 + 0x260),&local_f0,param_4);
    if (local_f0 != (void *)0x0) {
      pvStack_e8 = local_f0;
      free(local_f0);
    }
    if (local_d0 != (void *)0x0) {
      pvStack_c8 = local_d0;
      free(local_d0);
    }
    if (local_b8 != (void *)0x0) {
      local_b0 = local_b8;
      free(local_b8);
    }
    if (local_a0 != (void *)0x0) {
      pvStack_98 = local_a0;
      free(local_a0);
    }
    if (*(long *)(lVar3 + 0x28) == local_80) {
      return;
    }
  }
  else {
    if (-1 < (long)sVar2) {
                    /* try { // try from 0035d0fc to 0035d103 has its CatchHandler @ 0035d8a0 */
      local_d0 = (void *)FUN_00759c3c(sVar2);
      pvVar18 = (void *)((long)local_d0 + sVar2);
      local_c0 = (char *)pvVar18;
      memset(local_d0,0,sVar2);
      pvStack_c8 = pvVar18;
      goto LAB_0035d120;
    }
    if (*(long *)(lVar3 + 0x28) != local_80) goto LAB_0035d960;
                    /* try { // try from 0035d810 to 0035d817 has its CatchHandler @ 0035d8a0 */
    FUN_002febf0(&local_d0);
LAB_0035d818:
    if (*(long *)(lVar3 + 0x28) == local_80) {
                    /* try { // try from 0035d828 to 0035d82f has its CatchHandler @ 0035d88c */
      uVar16 = FUN_002febf0(&local_f0);
                    /* catch() { ... } // from try @ 0035d6f4 with catch @ 0035d830 */
                    /* catch() { ... } // from try @ 0035d354 with catch @ 0035d8cc */
      if ((local_110 & 1) != 0) {
        free(local_100);
      }
      if (local_f0 != (void *)0x0) {
        pvStack_e8 = local_f0;
        free(local_f0);
      }
      if (local_d0 != (void *)0x0) {
        pvStack_c8 = local_d0;
        free(local_d0);
      }
      if (local_b8 != (void *)0x0) {
        local_b0 = local_b8;
        free(local_b8);
      }
      if (local_a0 == (void *)0x0) {
        if (*(long *)(lVar3 + 0x28) == local_80) {
LAB_0035d930:
                    /* WARNING: Subroutine does not return */
          FUN_00755eac(uVar16);
        }
      }
      else {
        pvStack_98 = local_a0;
        free(local_a0);
        if (*(long *)(lVar3 + 0x28) == local_80) goto LAB_0035d930;
      }
    }
  }
LAB_0035d960:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035d964  FUN_0035d964 =====

void FUN_0035d964(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  plVar3 = (long *)param_1[0x4d];
  *param_1 = (long)(PTR_DAT_007a1650 + 0x10);
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
  }
  plVar3 = (long *)param_1[0x4b];
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
  }
  plVar3 = (long *)param_1[0x49];
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
  }
  plVar3 = (long *)param_1[0x47];
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
  }
  plVar3 = (long *)param_1[0x45];
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
  }
  pvVar4 = (void *)param_1[0x41];
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x42];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          FUN_0071245c(plVar3);
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x41];
    }
    param_1[0x42] = (long)pvVar4;
    free(pvVar2);
  }
  pvVar4 = (void *)param_1[0x3e];
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x3f];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          FUN_0071245c(plVar3);
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x3e];
    }
    param_1[0x3f] = (long)pvVar4;
    free(pvVar2);
  }
  plVar3 = (long *)param_1[0x3d];
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
  }
  pvVar4 = (void *)param_1[0x39];
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x3a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          FUN_0071245c(plVar3);
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x39];
    }
    param_1[0x3a] = (long)pvVar4;
    free(pvVar2);
  }
  pvVar4 = (void *)param_1[0x36];
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x37];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          FUN_0071245c(plVar3);
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x36];
    }
    param_1[0x37] = (long)pvVar4;
    free(pvVar2);
  }
  FUN_0035a1f0(param_1 + 0x18);
  FUN_0035a1f0(param_1 + 4);
  plVar3 = (long *)param_1[3];
  *param_1 = (long)&PTR_FUN_00761568;
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
    return;
  }
  return;
}


// ===== 0035dcb4  FUN_0035dcb4 =====

void FUN_0035dcb4(void *param_1)

{
  FUN_0035d964();
  free(param_1);
  return;
}


// ===== 0035dcd8  FUN_0035dcd8 =====

void FUN_0035dcd8(long *param_1)

{
  long *plVar1;
  
  *param_1 = (long)(PTR_DAT_007a1658 + 0x10);
  FUN_00361444(param_1 + 1);
  FUN_0035fda4(param_1 + 5,param_1 + 1);
  plVar1 = (long *)FUN_0036ebac(*(long *)(param_1[1] + 8) + -0x48);
  param_1[0x11] = *(long *)(*plVar1 + 8);
  return;
}


// ===== 0035dd30  FUN_0035dd30 =====

void FUN_0035dd30(long *param_1)

{
  void *__ptr;
  long lVar1;
  long *plVar2;
  
  __ptr = (void *)param_1[9];
  *param_1 = (long)(PTR_DAT_007a1660 + 0x10);
  if (__ptr != (void *)0x0) {
    param_1[10] = (long)__ptr;
    free(__ptr);
  }
  plVar2 = (long *)param_1[8];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  plVar2 = (long *)param_1[6];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  plVar2 = (long *)param_1[4];
  if ((plVar2 == (long *)0x0) || (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 != 0))
  {
    plVar2 = (long *)param_1[2];
  }
  else {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    plVar2 = (long *)param_1[2];
  }
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 0035de40  FUN_0035de40 =====

undefined8 FUN_0035de40(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_0036ebac(*(undefined8 *)(param_1 + 0x18));
  return *(undefined8 *)(*plVar1 + 8);
}


// ===== 0035de60  FUN_0035de60 =====

undefined8 FUN_0035de60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}


// ===== 0035de68  FUN_0035de68 =====

undefined8 FUN_0035de68(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0036ebac(*(long *)(*(long *)(param_1 + 8) + 8) + -0x48);
  return *(undefined8 *)*puVar1;
}


// ===== 0035de90  FUN_0035de90 =====

void FUN_0035de90(long param_1)

{
  FUN_00360ab4(param_1 + 0x28);
  return;
}


// ===== 0035de98  FUN_0035de98 =====

void FUN_0035de98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00761688;
  FUN_0035dd30(param_1 + 5);
  return;
}


// ===== 0035deac  FUN_0035deac =====

void FUN_0035deac(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1658 + 0x10);
  FUN_0035dd30(param_1 + 5);
  free(param_1);
  return;
}


// ===== 0035dee0  FUN_0035dee0 =====

void FUN_0035dee0(long *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = (long)(PTR_DAT_007a1668 + 0x10);
  FUN_00360f38(param_1 + 1);
  FUN_0035e0ec(param_1 + 5,param_1 + 1);
  puVar1 = (undefined8 *)FUN_0036ebac(*(long *)param_1[3] + 0x48);
  param_1[0x11] = *(long *)*puVar1;
  return;
}


// ===== 0035df38  FUN_0035df38 =====

undefined8 FUN_0035df38(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_0036ebac(**(undefined8 **)(param_1 + 0x18));
  return *(undefined8 *)(*plVar1 + 8);
}


// ===== 0035df5c  FUN_0035df5c =====

undefined8 FUN_0035df5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}


// ===== 0035df64  FUN_0035df64 =====

undefined8 FUN_0035df64(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0036ebac(*(long *)(*(long *)(param_1 + 8) + 8) + -0x48);
  return *(undefined8 *)*puVar1;
}


// ===== 0035df8c  FUN_0035df8c =====

void FUN_0035df8c(long param_1)

{
  FUN_0035f6a0(param_1 + 0x28);
  return;
}


// ===== 0035df94  FUN_0035df94 =====

void FUN_0035df94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_007616a8;
  FUN_0035dfdc(param_1 + 5);
  return;
}


// ===== 0035dfa8  FUN_0035dfa8 =====

void FUN_0035dfa8(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1668 + 0x10);
  FUN_0035dfdc(param_1 + 5);
  free(param_1);
  return;
}


// ===== 0035dfdc  FUN_0035dfdc =====

void FUN_0035dfdc(long *param_1)

{
  void *__ptr;
  long lVar1;
  long *plVar2;
  
  __ptr = (void *)param_1[9];
  *param_1 = (long)(PTR_DAT_007a1670 + 0x10);
  if (__ptr != (void *)0x0) {
    param_1[10] = (long)__ptr;
    free(__ptr);
  }
  plVar2 = (long *)param_1[8];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  plVar2 = (long *)param_1[6];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  plVar2 = (long *)param_1[4];
  if ((plVar2 == (long *)0x0) || (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 != 0))
  {
    plVar2 = (long *)param_1[2];
  }
  else {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    plVar2 = (long *)param_1[2];
  }
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 0035e0ec  FUN_0035e0ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0035e0ec(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *__ptr;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  long *local_188;
  long *local_180;
  long *local_178;
  long *local_170;
  long *local_168;
  long *local_160;
  long *local_158;
  long *local_150;
  long *local_148;
  long *local_140;
  long *local_138;
  long *local_130;
  long *local_128;
  long **local_120;
  undefined1 local_118;
  long *local_110;
  long *plStack_108;
  long *local_100;
  long *local_f8;
  long *local_f0;
  long *local_e8;
  long *local_e0;
  long *local_d8;
  long *local_d0;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  *param_1 = (long)(PTR_DAT_007a1670 + 0x10);
  FUN_0036c290(param_1 + 1);
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[0xb] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  if (((long *)param_2[2])[1] - *(long *)param_2[2] != 0x90) {
                    /* try { // try from 0035e190 to 0035e197 has its CatchHandler @ 0035f268 */
    local_100 = (long *)FUN_00759c3c(0x30);
    uVar4 = s_GRU_weights_must_contain_2_weigh_001f7699._16_8_;
    uVar3 = s_GRU_weights_must_contain_2_weigh_001f7699._0_8_;
    uVar20 = CONCAT71(s_GRU_weights_must_contain_2_weigh_001f7699._25_7_,
                      s_GRU_weights_must_contain_2_weigh_001f7699[0x18]);
    plStack_108 = (long *)_UNK_002003b8;
    local_110 = _DAT_002003b0;
    *(undefined8 *)((long)local_100 + 8) = s_GRU_weights_must_contain_2_weigh_001f7699._8_8_;
    *local_100 = uVar3;
    *(undefined8 *)((long)local_100 + 0x18) = uVar20;
    *(undefined8 *)((long)local_100 + 0x10) = uVar4;
    uVar3 = s_GRU_weights_must_contain_2_weigh_001f7699._33_8_;
    uVar20 = CONCAT17(s_GRU_weights_must_contain_2_weigh_001f7699[0x20],
                      s_GRU_weights_must_contain_2_weigh_001f7699._25_7_);
    *(char *)((long)local_100 + 0x29) = '\0';
    *(undefined8 *)((long)local_100 + 0x21) = uVar3;
    *(undefined8 *)((long)local_100 + 0x19) = uVar20;
                    /* try { // try from 0035e1c4 to 0035e1df has its CatchHandler @ 0035f250 */
    FUN_00372794(&local_110,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/native/src/networks/src/gru/mini/gru_mini_lora_module.cpp"
                 ,0x12,"GruMiniLoraModule");
    if (((ulong)local_110 & 1) != 0) {
      free(local_100);
    }
  }
  if (((long *)*param_2)[1] - *(long *)*param_2 != 0x240) {
                    /* try { // try from 0035e204 to 0035e20b has its CatchHandler @ 0035f248 */
    local_100 = (long *)FUN_00759c3c(0x30);
    uVar4 = s_Learner_weights_must_contain_8_w_001f76c3._16_8_;
    uVar3 = s_Learner_weights_must_contain_8_w_001f76c3._0_8_;
    uVar20 = CONCAT35(s_Learner_weights_must_contain_8_w_001f76c3._29_3_,
                      s_Learner_weights_must_contain_8_w_001f76c3._24_5_);
    plStack_108 = (long *)_UNK_00200978;
    local_110 = _DAT_00200970;
    *(undefined8 *)((long)local_100 + 8) = s_Learner_weights_must_contain_8_w_001f76c3._8_8_;
    *local_100 = uVar3;
    *(undefined8 *)((long)local_100 + 0x18) = uVar20;
    *(undefined8 *)((long)local_100 + 0x10) = uVar4;
    uVar3 = s_Learner_weights_must_contain_8_w_001f76c3._37_8_;
    uVar20 = CONCAT53(s_Learner_weights_must_contain_8_w_001f76c3._32_5_,
                      s_Learner_weights_must_contain_8_w_001f76c3._29_3_);
    *(char *)((long)local_100 + 0x2d) = '\0';
    *(undefined8 *)((long)local_100 + 0x25) = uVar3;
    *(undefined8 *)((long)local_100 + 0x1d) = uVar20;
                    /* try { // try from 0035e238 to 0035e253 has its CatchHandler @ 0035f244 */
    FUN_00372794(&local_110,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/native/src/networks/src/gru/mini/gru_mini_lora_module.cpp"
                 ,0x13,"GruMiniLoraModule");
    if (((ulong)local_110 & 1) != 0) {
      free(local_100);
    }
  }
  if (((long *)param_2[3])[1] - *(long *)param_2[3] != 0x48) {
                    /* try { // try from 0035e278 to 0035e27f has its CatchHandler @ 0035f23c */
    local_100 = (long *)FUN_00759c3c(0x28);
    uVar5 = s_GRU_biases_must_contain_1_bias_t_001cdae4._16_8_;
    uVar4 = s_GRU_biases_must_contain_1_bias_t_001cdae4._0_8_;
    uVar20 = CONCAT35(s_GRU_biases_must_contain_1_bias_t_001cdae4._29_3_,
                      s_GRU_biases_must_contain_1_bias_t_001cdae4._24_5_);
    uVar3 = CONCAT53(s_GRU_biases_must_contain_1_bias_t_001cdae4._32_5_,
                     s_GRU_biases_must_contain_1_bias_t_001cdae4._29_3_);
    plStack_108 = (long *)_UNK_002008b8;
    local_110 = _DAT_002008b0;
    *(undefined8 *)((long)local_100 + 8) = s_GRU_biases_must_contain_1_bias_t_001cdae4._8_8_;
    *local_100 = uVar4;
    *(undefined8 *)((long)local_100 + 0x18) = uVar20;
    *(undefined8 *)((long)local_100 + 0x10) = uVar5;
    *(undefined8 *)((long)local_100 + 0x1d) = uVar3;
    *(char *)((long)local_100 + 0x25) = '\0';
                    /* try { // try from 0035e2ac to 0035e2c7 has its CatchHandler @ 0035f238 */
    FUN_00372794(&local_110,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/native/src/networks/src/gru/mini/gru_mini_lora_module.cpp"
                 ,0x14,"GruMiniLoraModule");
    if (((ulong)local_110 & 1) != 0) {
      free(local_100);
    }
  }
  if (((long *)param_2[1])[1] - *(long *)param_2[1] != 0x120) {
                    /* try { // try from 0035e2ec to 0035e2f3 has its CatchHandler @ 0035f230 */
    local_100 = (long *)FUN_00759c3c(0x30);
    uVar4 = s_Learner_biases_must_contain_4_bi_001c961f._16_8_;
    uVar3 = s_Learner_biases_must_contain_4_bi_001c961f._0_8_;
    uVar20 = CONCAT62(s_Learner_biases_must_contain_4_bi_001c961f._26_6_,
                      s_Learner_biases_must_contain_4_bi_001c961f._24_2_);
    plStack_108 = (long *)_UNK_00200118;
    local_110 = _DAT_00200110;
    *(undefined8 *)((long)local_100 + 8) = s_Learner_biases_must_contain_4_bi_001c961f._8_8_;
    *local_100 = uVar3;
    *(undefined8 *)((long)local_100 + 0x18) = uVar20;
    *(undefined8 *)((long)local_100 + 0x10) = uVar4;
    uVar3 = s_Learner_biases_must_contain_4_bi_001c961f._34_8_;
    uVar20 = CONCAT26(s_Learner_biases_must_contain_4_bi_001c961f._32_2_,
                      s_Learner_biases_must_contain_4_bi_001c961f._26_6_);
    *(char *)((long)local_100 + 0x2a) = '\0';
    *(undefined8 *)((long)local_100 + 0x22) = uVar3;
    *(undefined8 *)((long)local_100 + 0x1a) = uVar20;
                    /* try { // try from 0035e320 to 0035e33b has its CatchHandler @ 0035f22c */
    FUN_00372794(&local_110,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/native/src/networks/src/gru/mini/gru_mini_lora_module.cpp"
                 ,0x15,"GruMiniLoraModule");
    if (((ulong)local_110 & 1) != 0) {
      free(local_100);
    }
  }
  puVar8 = (undefined8 *)FUN_0036ebac(*(long *)param_2[2] + 0x48);
  __ptr = (undefined8 *)param_1[0xb];
  puVar19 = (undefined8 *)param_1[9];
  uVar20 = *(undefined8 *)*puVar8;
  if (__ptr == puVar19) {
    if (__ptr != (undefined8 *)0x0) {
      param_1[10] = (long)__ptr;
      free(__ptr);
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
    }
                    /* try { // try from 0035e3a8 to 0035e3af has its CatchHandler @ 0035f224 */
    puVar8 = (undefined8 *)FUN_00759c3c(8);
    param_1[9] = (long)puVar8;
    *puVar8 = uVar20;
    param_1[10] = (long)(puVar8 + 1);
    param_1[0xb] = (long)(puVar8 + 1);
  }
  else {
    *puVar19 = uVar20;
    param_1[10] = (long)(puVar19 + 1);
  }
  if (((DAT_007ab298 & 1) == 0) && (iVar7 = FUN_00739c1c(&DAT_007ab298), iVar7 != 0)) {
                    /* try { // try from 0035f1dc to 0035f1e7 has its CatchHandler @ 0035f210 */
    FUN_0036dfcc(&DAT_007ab2a0);
    __cxa_atexit(PTR_FUN_007a1618,&DAT_007ab2a0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ab298);
  }
  uVar20 = *(undefined8 *)param_2[2];
                    /* try { // try from 0035e3d4 to 0035e3db has its CatchHandler @ 0035f5a0 */
  plVar9 = (long *)FUN_00759c3c(0x40);
  puVar1 = PTR_DAT_007a1678;
  plVar13 = plVar9 + 3;
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)(puVar1 + 0x10);
                    /* try { // try from 0035e3f8 to 0035e40b has its CatchHandler @ 0035f588 */
  FUN_0036af60(plVar13,uVar20,&DAT_007ab2a0);
  lVar23 = *(long *)param_2[2];
  uVar20 = *(undefined8 *)param_2[3];
  local_130 = plVar13;
  local_128 = plVar9;
                    /* try { // try from 0035e41c to 0035e423 has its CatchHandler @ 0035f580 */
  plVar10 = (long *)FUN_00759c3c(0x40);
  plVar21 = plVar10 + 3;
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)(puVar1 + 0x10);
                    /* try { // try from 0035e438 to 0035e447 has its CatchHandler @ 0035f568 */
  FUN_0036af60(plVar21,lVar23 + 0x48,uVar20);
  local_140 = plVar21;
  local_138 = plVar10;
                    /* try { // try from 0035e44c to 0035e453 has its CatchHandler @ 0035f560 */
  plVar11 = (long *)FUN_00759c3c(0x20);
  puVar6 = PTR_DAT_007a1680;
  plVar11[2] = 0;
  puVar1 = PTR_DAT_007a1688 + 0x10;
  *plVar11 = (long)(puVar6 + 0x10);
  plVar11[1] = 0;
  plVar14 = plVar11 + 3;
  *plVar14 = (long)puVar1;
  local_150 = plVar14;
  local_148 = plVar11;
                    /* try { // try from 0035e484 to 0035e48b has its CatchHandler @ 0035f558 */
  local_158 = (long *)FUN_00759c3c(0x20);
  puVar6 = PTR_DAT_007a1690;
  local_158[2] = 0;
  puVar1 = PTR_DAT_007a1698 + 0x10;
  *local_158 = (long)(puVar6 + 0x10);
  local_158[1] = 0;
  local_160 = local_158 + 3;
  *local_160 = (long)puVar1;
                    /* try { // try from 0035e4b8 to 0035e4bf has its CatchHandler @ 0035f550 */
  local_168 = (long *)FUN_00759c3c(0x20);
  puVar6 = PTR_DAT_007a16a0;
  local_168[2] = 0;
  puVar1 = PTR_DAT_007a16a8 + 0x10;
  *local_168 = (long)(puVar6 + 0x10);
  local_168[1] = 0;
  local_170 = local_168 + 3;
  *local_170 = (long)puVar1;
  local_110 = plVar13;
  plStack_108 = plVar9;
  FUN_00755c20(1,plVar9 + 1);
  local_100 = plVar21;
  local_f8 = plVar10;
  FUN_00755c20(1,plVar10 + 1);
  local_f0 = plVar14;
  local_e8 = plVar11;
  FUN_00755c20(1,plVar11 + 1);
  local_120 = &local_188;
  local_188 = (long *)0x0;
  local_180 = (long *)0x0;
  local_178 = (long *)0x0;
  local_118 = 0;
                    /* try { // try from 0035e530 to 0035e537 has its CatchHandler @ 0035f528 */
  plVar12 = (long *)FUN_00759c3c(0x30);
  *plVar12 = (long)plVar13;
  plVar12[1] = (long)plVar9;
  local_188 = plVar12;
  local_178 = plVar12 + 6;
  FUN_00755c20(1,plVar9 + 1);
  plVar12[2] = (long)plVar21;
  plVar12[3] = (long)plVar10;
  FUN_00755c20(1,plVar10 + 1);
  plVar12[4] = (long)plVar14;
  plVar12[5] = (long)plVar11;
  FUN_00755c20(1,plVar11 + 1);
  local_180 = plVar12 + 6;
                    /* try { // try from 0035e57c to 0035e583 has its CatchHandler @ 0035f518 */
  plVar13 = (long *)FUN_00759c3c(0x38);
  puVar1 = PTR_DAT_007a16b0;
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)(puVar1 + 0x10);
                    /* try { // try from 0035e5a0 to 0035e5ab has its CatchHandler @ 0035f500 */
  FUN_0036b564(plVar13 + 3,&local_188);
  plVar21 = (long *)param_1[4];
  param_1[3] = (long)(plVar13 + 3);
  param_1[4] = (long)plVar13;
  puVar1 = PTR_DAT_007a1678;
  if ((plVar21 != (long *)0x0) &&
     (lVar23 = FUN_00755c50(0xffffffffffffffff,plVar21 + 1), lVar23 == 0)) {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    FUN_0071245c(plVar21);
  }
  plVar21 = local_188;
  plVar13 = local_180;
  if (local_188 != (long *)0x0) {
    for (; plVar13 != plVar21; plVar13 = plVar13 + -2) {
      plVar9 = (long *)plVar13[-1];
      if ((plVar9 != (long *)0x0) &&
         (lVar23 = FUN_00755c50(0xffffffffffffffff,plVar9 + 1), lVar23 == 0)) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        FUN_0071245c(plVar9);
      }
    }
    local_180 = plVar21;
    free(local_188);
  }
  plVar13 = local_e8;
  if ((local_e8 != (long *)0x0) &&
     (lVar23 = FUN_00755c50(0xffffffffffffffff,local_e8 + 1), lVar23 == 0)) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    FUN_0071245c(plVar13);
  }
  plVar13 = local_f8;
  if ((local_f8 != (long *)0x0) &&
     (lVar23 = FUN_00755c50(0xffffffffffffffff,local_f8 + 1), lVar23 == 0)) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    FUN_0071245c(plVar13);
  }
  plVar13 = plStack_108;
  if ((plStack_108 != (long *)0x0) &&
     (lVar23 = FUN_00755c50(0xffffffffffffffff,plStack_108 + 1), lVar23 == 0)) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    FUN_0071245c(plVar13);
  }
  uVar20 = *(undefined8 *)*param_2;
                    /* try { // try from 0035e6e8 to 0035e6ef has its CatchHandler @ 0035f4f8 */
  plVar11 = (long *)FUN_00759c3c(0x40);
  plVar13 = plVar11 + 3;
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)(puVar1 + 0x10);
                    /* try { // try from 0035e704 to 0035e717 has its CatchHandler @ 0035f4e0 */
  FUN_0036af60(plVar13,uVar20,&DAT_007ab2a0);
  lVar23 = *(long *)*param_2;
  uVar20 = *(undefined8 *)param_2[1];
                    /* try { // try from 0035e728 to 0035e72f has its CatchHandler @ 0035f4d8 */
  plVar12 = (long *)FUN_00759c3c(0x40);
  plVar12[2] = 0;
  plVar21 = plVar12 + 3;
  *plVar12 = (long)(PTR_DAT_007a1678 + 0x10);
  plVar12[1] = 0;
                    /* try { // try from 0035e74c to 0035e75b has its CatchHandler @ 0035f4c0 */
  FUN_0036af60(plVar21,lVar23 + 0x48,uVar20);
  local_110 = plVar13;
  plStack_108 = plVar11;
  FUN_00755c20(1,plVar11 + 1);
  local_100 = plVar21;
  local_f8 = plVar12;
  FUN_00755c20(1,plVar12 + 1);
  plVar10 = local_168;
  plVar9 = local_170;
  local_f0 = local_170;
  local_e8 = local_168;
  if (local_168 != (long *)0x0) {
    FUN_00755c20(1,local_168 + 1);
  }
  local_120 = &local_188;
  local_188 = (long *)0x0;
  local_180 = (long *)0x0;
  local_178 = (long *)0x0;
  local_118 = 0;
                    /* try { // try from 0035e7ac to 0035e7b3 has its CatchHandler @ 0035f498 */
  plVar14 = (long *)FUN_00759c3c(0x30);
  *plVar14 = (long)plVar13;
  plVar14[1] = (long)plVar11;
  local_188 = plVar14;
  local_180 = plVar14;
  local_178 = plVar14 + 6;
  FUN_00755c20(1,plVar11 + 1);
  plVar14[2] = (long)plVar21;
  plVar14[3] = (long)plVar12;
  FUN_00755c20(1,plVar12 + 1);
  plVar14[4] = (long)plVar9;
  plVar14[5] = (long)plVar10;
  if (plVar10 != (long *)0x0) {
    FUN_00755c20(1,plVar10 + 1);
  }
  local_180 = plVar14 + 6;
                    /* try { // try from 0035e7fc to 0035e803 has its CatchHandler @ 0035f488 */
  plVar13 = (long *)FUN_00759c3c(0x38);
  puVar1 = PTR_DAT_007a1678;
  plVar13[2] = 0;
  *plVar13 = (long)(PTR_DAT_007a16b0 + 0x10);
  plVar13[1] = 0;
                    /* try { // try from 0035e828 to 0035e833 has its CatchHandler @ 0035f470 */
  FUN_0036b564(plVar13 + 3,&local_188);
  plVar21 = (long *)param_1[6];
  param_1[5] = (long)(plVar13 + 3);
  param_1[6] = (long)plVar13;
  if ((plVar21 != (long *)0x0) &&
     (lVar23 = FUN_00755c50(0xffffffffffffffff,plVar21 + 1), lVar23 == 0)) {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    FUN_0071245c(plVar21);
  }
  plVar21 = local_188;
  plVar13 = local_180;
  if (local_188 != (long *)0x0) {
    for (; plVar13 != plVar21; plVar13 = plVar13 + -2) {
      plVar9 = (long *)plVar13[-1];
      if ((plVar9 != (long *)0x0) &&
         (lVar23 = FUN_00755c50(0xffffffffffffffff,plVar9 + 1), lVar23 == 0)) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        FUN_0071245c(plVar9);
      }
    }
    local_180 = plVar21;
    free(local_188);
  }
  plVar13 = local_e8;
  if ((local_e8 != (long *)0x0) &&
     (lVar23 = FUN_00755c50(0xffffffffffffffff,local_e8 + 1), lVar23 == 0)) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    FUN_0071245c(plVar13);
  }
  plVar13 = local_f8;
  if ((local_f8 != (long *)0x0) &&
     (lVar23 = FUN_00755c50(0xffffffffffffffff,local_f8 + 1), lVar23 == 0)) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    FUN_0071245c(plVar13);
  }
  plVar13 = plStack_108;
  if ((plStack_108 != (long *)0x0) &&
     (lVar23 = FUN_00755c50(0xffffffffffffffff,plStack_108 + 1), lVar23 == 0)) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    FUN_0071245c(plVar13);
  }
  lVar23 = *(long *)*param_2;
                    /* try { // try from 0035e968 to 0035e96f has its CatchHandler @ 0035f468 */
  plVar10 = (long *)FUN_00759c3c(0x40);
  plVar13 = plVar10 + 3;
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)(puVar1 + 0x10);
                    /* try { // try from 0035e984 to 0035e997 has its CatchHandler @ 0035f450 */
  FUN_0036af60(plVar13,lVar23 + 0x90,&DAT_007ab2a0);
  lVar23 = *(long *)*param_2;
  lVar22 = *(long *)param_2[1];
                    /* try { // try from 0035e9a8 to 0035e9af has its CatchHandler @ 0035f448 */
  plVar14 = (long *)FUN_00759c3c(0x40);
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)(puVar1 + 0x10);
                    /* try { // try from 0035e9c4 to 0035e9d3 has its CatchHandler @ 0035f430 */
  FUN_0036af60(plVar14 + 3,lVar23 + 0xd8,lVar22 + 0x48);
  lVar23 = *(long *)*param_2;
                    /* try { // try from 0035e9e0 to 0035e9e7 has its CatchHandler @ 0035f428 */
  plVar15 = (long *)FUN_00759c3c(0x40);
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)(puVar1 + 0x10);
                    /* try { // try from 0035ea00 to 0035ea13 has its CatchHandler @ 0035f410 */
  FUN_0036af60(plVar15 + 3,lVar23 + 0x120,&DAT_007ab2a0);
  lVar23 = *(long *)*param_2;
  lVar22 = *(long *)param_2[1];
                    /* try { // try from 0035ea24 to 0035ea2b has its CatchHandler @ 0035f408 */
  plVar16 = (long *)FUN_00759c3c(0x40);
  plVar16[1] = 0;
  plVar16[2] = 0;
  *plVar16 = (long)(puVar1 + 0x10);
                    /* try { // try from 0035ea40 to 0035ea53 has its CatchHandler @ 0035f3f0 */
  FUN_0036af60(plVar16 + 3,lVar23 + 0x168,lVar22 + 0x90);
  lVar23 = *(long *)*param_2;
                    /* try { // try from 0035ea68 to 0035ea6f has its CatchHandler @ 0035f3e8 */
  plVar17 = (long *)FUN_00759c3c(0x40);
  plVar17[1] = 0;
  plVar17[2] = 0;
  *plVar17 = (long)(puVar1 + 0x10);
                    /* try { // try from 0035ea88 to 0035ea9b has its CatchHandler @ 0035f3d0 */
  FUN_0036af60(plVar17 + 3,lVar23 + 0x1b0,&DAT_007ab2a0);
  lVar22 = *(long *)*param_2;
  lVar23 = *(long *)param_2[1];
                    /* try { // try from 0035eaac to 0035eab3 has its CatchHandler @ 0035f314 */
  plVar18 = (long *)FUN_00759c3c(0x40);
  plVar18[2] = 0;
  *plVar18 = (long)(PTR_DAT_007a1678 + 0x10);
  plVar18[1] = 0;
                    /* try { // try from 0035ead0 to 0035eadf has its CatchHandler @ 0035f2fc */
  FUN_0036af60(plVar18 + 3,lVar22 + 0x1f8,lVar23 + 0xd8);
  local_110 = plVar13;
  plStack_108 = plVar10;
  FUN_00755c20(1,plVar10 + 1);
  local_100 = plVar14 + 3;
  local_f8 = plVar14;
  FUN_00755c20(1,plVar14 + 1);
  plVar9 = local_158;
  plVar21 = local_160;
  local_f0 = local_160;
  local_e8 = local_158;
  if (local_158 != (long *)0x0) {
    FUN_00755c20(1,local_158 + 1);
  }
  local_e0 = plVar15 + 3;
  local_d8 = plVar15;
  FUN_00755c20(1,plVar15 + 1);
  local_d0 = plVar16 + 3;
  local_c8 = plVar16;
  FUN_00755c20(1,plVar16 + 1);
  local_c0 = plVar21;
  local_b8 = plVar9;
  if (plVar9 != (long *)0x0) {
    FUN_00755c20(1,plVar9 + 1);
  }
  local_b0 = plVar17 + 3;
  local_a8 = plVar17;
  FUN_00755c20(1,plVar17 + 1);
  local_a0 = plVar18 + 3;
  local_98 = plVar18;
  FUN_00755c20(1,plVar18 + 1);
  local_90 = local_150;
  local_88 = local_148;
  if (local_148 != (long *)0x0) {
    FUN_00755c20(1,local_148 + 1);
  }
  local_120 = &local_188;
  local_188 = (long *)0x0;
  local_180 = (long *)0x0;
  local_178 = (long *)0x0;
  local_118 = 0;
                    /* try { // try from 0035ebb0 to 0035ebb7 has its CatchHandler @ 0035f298 */
  plVar9 = (long *)FUN_00759c3c(0x90);
  plVar21 = plVar9 + 0x12;
  *plVar9 = (long)plVar13;
  plVar9[1] = (long)plStack_108;
  local_188 = plVar9;
  local_180 = plVar9;
  local_178 = plVar21;
  if (plStack_108 != (long *)0x0) {
    FUN_00755c20(1,plStack_108 + 1);
  }
  plVar9[2] = (long)local_100;
  plVar9[3] = (long)local_f8;
  if (local_f8 != (long *)0x0) {
    FUN_00755c20(1,local_f8 + 1);
  }
  plVar9[4] = (long)local_f0;
  plVar9[5] = (long)local_e8;
  if (local_e8 != (long *)0x0) {
    FUN_00755c20(1,local_e8 + 1);
  }
  plVar9[6] = (long)local_e0;
  plVar9[7] = (long)local_d8;
  if (local_d8 != (long *)0x0) {
    FUN_00755c20(1,local_d8 + 1);
  }
  plVar9[8] = (long)local_d0;
  plVar9[9] = (long)local_c8;
  if (local_c8 != (long *)0x0) {
    FUN_00755c20(1,local_c8 + 1);
  }
  plVar9[10] = (long)local_c0;
  plVar9[0xb] = (long)local_b8;
  if (local_b8 != (long *)0x0) {
    FUN_00755c20(1,local_b8 + 1);
  }
  plVar9[0xc] = (long)local_b0;
  plVar9[0xd] = (long)local_a8;
  if (local_a8 != (long *)0x0) {
    FUN_00755c20(1,local_a8 + 1);
  }
  plVar9[0xe] = (long)local_a0;
  plVar9[0xf] = (long)local_98;
  if (local_98 != (long *)0x0) {
    FUN_00755c20(1,local_98 + 1);
  }
  plVar9[0x10] = (long)local_90;
  plVar9[0x11] = (long)local_88;
  if (local_88 != (long *)0x0) {
    FUN_00755c20(1,local_88 + 1);
  }
  local_180 = plVar21;
                    /* try { // try from 0035eca8 to 0035ecaf has its CatchHandler @ 0035f288 */
  plVar13 = (long *)FUN_00759c3c(0x38);
  plVar13[2] = 0;
  *plVar13 = (long)(PTR_DAT_007a16b0 + 0x10);
  plVar13[1] = 0;
                    /* try { // try from 0035eccc to 0035ecd7 has its CatchHandler @ 0035f270 */
  FUN_0036b564(plVar13 + 3,&local_188);
  plVar21 = (long *)param_1[8];
  param_1[7] = (long)(plVar13 + 3);
  param_1[8] = (long)plVar13;
  if ((plVar21 != (long *)0x0) &&
     (lVar23 = FUN_00755c50(0xffffffffffffffff,plVar21 + 1), lVar23 == 0)) {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    FUN_0071245c(plVar21);
  }
  plVar21 = local_188;
  plVar13 = local_180;
  if (local_188 != (long *)0x0) {
    for (; plVar13 != plVar21; plVar13 = plVar13 + -2) {
      plVar9 = (long *)plVar13[-1];
      if ((plVar9 != (long *)0x0) &&
         (lVar23 = FUN_00755c50(0xffffffffffffffff,plVar9 + 1), lVar23 == 0)) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        FUN_0071245c(plVar9);
      }
    }
    local_180 = plVar21;
    free(local_188);
  }
  plVar13 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar23 = FUN_00755c50(0xffffffffffffffff,local_88 + 1), lVar23 == 0)) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    FUN_0071245c(plVar13);
  }
  plVar13 = local_98;
  if ((local_98 != (long *)0x0) &&
     (lVar23 = FUN_00755c50(0xffffffffffffffff,local_98 + 1), lVar23 == 0)) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    FUN_0071245c(plVar13);
  }
  plVar13 = local_a8;
  if ((local_a8 != (long *)0x0) &&
     (lVar23 = FUN_00755c50(0xffffffffffffffff,local_a8 + 1), lVar23 == 0)) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    FUN_0071245c(plVar13);
  }
  plVar13 = local_b8;
  if ((local_b8 != (long *)0x0) &&
     (lVar23 = FUN_00755c50(0xffffffffffffffff,local_b8 + 1), lVar23 == 0)) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    FUN_0071245c(plVar13);
  }
  plVar13 = local_c8;
  if ((local_c8 != (long *)0x0) &&
     (lVar23 = FUN_00755c50(0xffffffffffffffff,local_c8 + 1), lVar23 == 0)) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    FUN_0071245c(plVar13);
  }
  plVar13 = local_d8;
  if ((local_d8 != (long *)0x0) &&
     (lVar23 = FUN_00755c50(0xffffffffffffffff,local_d8 + 1), lVar23 == 0)) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    FUN_0071245c(plVar13);
  }
  plVar13 = local_e8;
  if ((local_e8 != (long *)0x0) &&
     (lVar23 = FUN_00755c50(0xffffffffffffffff,local_e8 + 1), lVar23 == 0)) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    FUN_0071245c(plVar13);
  }
  plVar13 = local_f8;
  if ((local_f8 != (long *)0x0) &&
     (lVar23 = FUN_00755c50(0xffffffffffffffff,local_f8 + 1), lVar23 == 0)) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    FUN_0071245c(plVar13);
  }
  plVar13 = plStack_108;
  if ((plStack_108 != (long *)0x0) &&
     (lVar23 = FUN_00755c50(0xffffffffffffffff,plStack_108 + 1), lVar23 == 0)) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    FUN_0071245c(plVar13);
  }
  if ((plVar18 != (long *)0x0) &&
     (lVar23 = FUN_00755c50(0xffffffffffffffff,plVar18 + 1), lVar23 == 0)) {
    (**(code **)(*plVar18 + 0x10))(plVar18);
    FUN_0071245c(plVar18);
  }
  if ((plVar17 != (long *)0x0) &&
     (lVar23 = FUN_00755c50(0xffffffffffffffff,plVar17 + 1), lVar23 == 0)) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
    FUN_0071245c(plVar17);
  }
  if ((plVar16 != (long *)0x0) &&
     (lVar23 = FUN_00755c50(0xffffffffffffffff,plVar16 + 1), lVar23 == 0)) {
    (**(code **)(*plVar16 + 0x10))(plVar16);
    FUN_0071245c(plVar16);
  }
  if ((plVar15 != (long *)0x0) &&
     (lVar23 = FUN_00755c50(0xffffffffffffffff,plVar15 + 1), lVar23 == 0)) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    FUN_0071245c(plVar15);
  }
  if ((plVar14 != (long *)0x0) &&
     (lVar23 = FUN_00755c50(0xffffffffffffffff,plVar14 + 1), lVar23 == 0)) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    FUN_0071245c(plVar14);
  }
  if ((plVar10 != (long *)0x0) &&
     (lVar23 = FUN_00755c50(0xffffffffffffffff,plVar10 + 1), lVar23 == 0)) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    FUN_0071245c(plVar10);
  }
  if ((plVar12 != (long *)0x0) &&
     (lVar23 = FUN_00755c50(0xffffffffffffffff,plVar12 + 1), lVar23 == 0)) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_0071245c(plVar12);
  }
  if ((plVar11 != (long *)0x0) &&
     (lVar23 = FUN_00755c50(0xffffffffffffffff,plVar11 + 1), lVar23 == 0)) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    FUN_0071245c(plVar11);
  }
  plVar13 = local_168;
  if ((local_168 != (long *)0x0) &&
     (lVar23 = FUN_00755c50(0xffffffffffffffff,local_168 + 1), lVar23 == 0)) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    FUN_0071245c(plVar13);
  }
  plVar13 = local_158;
  if ((local_158 != (long *)0x0) &&
     (lVar23 = FUN_00755c50(0xffffffffffffffff,local_158 + 1), lVar23 == 0)) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    FUN_0071245c(plVar13);
  }
  plVar13 = local_148;
  if ((local_148 != (long *)0x0) &&
     (lVar23 = FUN_00755c50(0xffffffffffffffff,local_148 + 1), lVar23 == 0)) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    FUN_0071245c(plVar13);
  }
  plVar13 = local_138;
  if ((local_138 != (long *)0x0) &&
     (lVar23 = FUN_00755c50(0xffffffffffffffff,local_138 + 1), lVar23 == 0)) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    FUN_0071245c(plVar13);
  }
  plVar13 = local_128;
  if ((local_128 != (long *)0x0) &&
     (lVar23 = FUN_00755c50(0xffffffffffffffff,local_128 + 1), lVar23 == 0)) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    FUN_0071245c(plVar13);
  }
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0035f5a8  FUN_0035f5a8 =====

void FUN_0035f5a8(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 0035f5f8  FUN_0035f5f8 =====

void FUN_0035f5f8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  void *__ptr;
  void *pvVar3;
  
  __ptr = (void *)*param_1;
  if (__ptr == (void *)0x0) {
    return;
  }
  pvVar3 = (void *)param_1[1];
  if (pvVar3 == __ptr) {
    param_1[1] = __ptr;
    free(__ptr);
    return;
  }
  do {
    plVar2 = *(long **)((long)pvVar3 + -8);
    if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0)
       ) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_0071245c(plVar2);
    }
    pvVar3 = (void *)((long)pvVar3 + -0x10);
  } while (pvVar3 != __ptr);
  param_1[1] = __ptr;
  free((void *)*param_1);
  return;
}


// ===== 0035f6a0  FUN_0035f6a0 =====

void FUN_0035f6a0(undefined8 param_1,long param_2,undefined8 param_3)

{
  void *pvVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  void *unaff_x19;
  undefined8 uVar9;
  undefined8 *puVar10;
  size_t sVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  undefined8 *puStack_198;
  void *local_190;
  void *local_188;
  undefined8 local_180;
  long *local_178;
  long *local_170;
  long *plStack_168;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined8 *puStack_120;
  void *local_e8;
  void *local_e0;
  void *local_d8;
  void *local_d0;
  void *local_c8;
  void *local_c0;
  undefined1 auStack_b8 [72];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  (**(code **)(**(long **)(param_2 + 0x18) + 0x18))(auStack_b8);
  plVar4 = (long *)FUN_0036e624(auStack_b8);
  local_c8 = (void *)0x0;
  local_c0 = (void *)0x0;
  local_d0 = (void *)0x0;
  sVar11 = plVar4[1] - *plVar4;
  if (sVar11 == 0) {
    unaff_x19 = (void *)0x0;
LAB_0035f744:
    pvVar1 = local_c8;
    uVar12 = *(undefined8 *)(param_2 + 8);
                    /* try { // try from 0035f748 to 0035f74f has its CatchHandler @ 0035fa28 */
    local_130 = (undefined8 *)FUN_00759c3c(8);
    local_128 = local_130 + 1;
    *local_130 = 0;
                    /* try { // try from 0035f760 to 0035f7c3 has its CatchHandler @ 0035fa98 */
    puStack_120 = local_128;
    uVar5 = FUN_0036e5c8(param_3,&local_130);
    puVar10 = (undefined8 *)(param_2 + 0x48);
    uVar13 = *(undefined8 *)*puVar10;
    puVar6 = (undefined8 *)FUN_0036e624(auStack_b8);
    uVar9 = *puVar6;
    plVar4 = (long *)FUN_0036e624(auStack_b8);
    sVar11 = (long)pvVar1 - (long)unaff_x19;
    FUN_0036d4a8(uVar12,uVar5,uVar13,uVar9,plVar4[1] - *plVar4 >> 2,unaff_x19,(long)sVar11 >> 2);
    if (local_130 != (undefined8 *)0x0) {
      local_128 = local_130;
      free(local_130);
    }
    local_e8 = (void *)0x0;
    local_e0 = (void *)0x0;
    local_d8 = (void *)0x0;
    if (pvVar1 != unaff_x19) {
      if ((long)sVar11 < 0) goto LAB_0035f9e0;
                    /* try { // try from 0035f7e8 to 0035f7ef has its CatchHandler @ 0035fa30 */
      local_e8 = (void *)FUN_00759c3c(sVar11);
      pvVar1 = (void *)((long)local_e8 + sVar11);
      local_d8 = pvVar1;
      memcpy(local_e8,unaff_x19,sVar11);
      local_e0 = pvVar1;
    }
                    /* try { // try from 0035f814 to 0035f847 has its CatchHandler @ 0035faac */
    pvVar1 = local_e0;
    lVar7 = FUN_0036e5f0(param_3,puVar10);
    lVar8 = FUN_0036e614(param_3);
    FUN_003338b8(&local_e8,pvVar1,lVar7,lVar8,lVar8 - lVar7 >> 2);
    pvVar3 = local_e0;
    pvVar1 = local_e8;
                    /* try { // try from 0035f84c to 0035f853 has its CatchHandler @ 0035fa24 */
    local_178 = (long *)FUN_00759c3c(8);
    local_170 = local_178 + 1;
    *local_178 = (long)pvVar3 - (long)pvVar1 >> 2;
                    /* try { // try from 0035f868 to 0035f877 has its CatchHandler @ 0035fa08 */
    plStack_168 = local_170;
    FUN_0036e160(&local_130,&local_e8,&local_178);
    if (local_178 != (long *)0x0) {
      local_170 = local_178;
      free(local_178);
    }
                    /* try { // try from 0035f894 to 0035f89f has its CatchHandler @ 0035fa00 */
    (**(code **)(**(long **)(param_2 + 0x28) + 0x18))
              (&local_178,*(long **)(param_2 + 0x28),&local_130);
    uVar12 = *(undefined8 *)(param_2 + 8);
    local_190 = (void *)0x0;
    local_188 = (void *)0x0;
    local_180 = 0;
    uVar5 = FUN_0036e624(&local_178);
    uVar9 = FUN_0036e624(auStack_b8);
                    /* try { // try from 0035f8c4 to 0035f8d3 has its CatchHandler @ 0035fa70 */
    FUN_0036cee8(uVar12,uVar5,uVar9,&local_190);
    pvVar3 = local_188;
    pvVar1 = local_190;
    uVar9 = *(undefined8 *)(param_2 + 8);
                    /* try { // try from 0035f8dc to 0035f8e3 has its CatchHandler @ 0035f9fc */
    local_1a8 = (undefined8 *)FUN_00759c3c(8);
    local_1a0 = local_1a8 + 1;
    *local_1a8 = 0;
                    /* try { // try from 0035f8f0 to 0035f923 has its CatchHandler @ 0035fa54 */
    puStack_198 = local_1a0;
    uVar5 = FUN_0036e5c8(param_3,&local_1a8);
    FUN_0036cbb4(uVar9,pvVar1,(long)pvVar3 - (long)pvVar1 >> 2,unaff_x19,(long)sVar11 >> 2,uVar5,
                 *(undefined8 *)*puVar10);
    if (local_1a8 != (undefined8 *)0x0) {
      local_1a0 = local_1a8;
      free(local_1a8);
    }
                    /* try { // try from 0035f940 to 0035f94b has its CatchHandler @ 0035fa70 */
    (**(code **)(**(long **)(param_2 + 0x38) + 0x10))(param_1,*(long **)(param_2 + 0x38),&local_178)
    ;
    if (local_190 != (void *)0x0) {
      local_188 = local_190;
      free(local_190);
    }
    FUN_0036e048(&local_178);
    FUN_0036e048(&local_130);
    if (local_e8 != (void *)0x0) {
      local_e0 = local_e8;
      free(local_e8);
    }
    if (unaff_x19 != (void *)0x0) {
      free(unaff_x19);
    }
    FUN_0036e048(auStack_b8);
    if (*(long *)(lVar2 + 0x28) == local_70) {
      return;
    }
  }
  else {
    if (-1 < (long)sVar11) {
                    /* try { // try from 0035f710 to 0035f717 has its CatchHandler @ 0035fa40 */
      unaff_x19 = (void *)FUN_00759c3c(sVar11);
      local_d0 = unaff_x19;
      local_c0 = (void *)((long)unaff_x19 + sVar11);
      memset(unaff_x19,0,sVar11);
      local_c8 = (void *)((long)unaff_x19 + sVar11);
      goto LAB_0035f744;
    }
    if (*(long *)(lVar2 + 0x28) != local_70) goto LAB_0035faf4;
                    /* try { // try from 0035f9d8 to 0035f9df has its CatchHandler @ 0035fa40 */
    FUN_002febf0(&local_d0);
LAB_0035f9e0:
    if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* try { // try from 0035f9f4 to 0035f9fb has its CatchHandler @ 0035fa30 */
      uVar5 = FUN_002febf0(&local_e8);
                    /* catch() { ... } // from try @ 0035f8dc with catch @ 0035f9fc */
                    /* catch() { ... } // from try @ 0035f8c4 with catch @ 0035fa70
                       catch() { ... } // from try @ 0035f940 with catch @ 0035fa70 */
      if (local_190 != (void *)0x0) {
        local_188 = local_190;
        free(local_190);
      }
      FUN_0036e048(&local_178);
      FUN_0036e048(&local_130);
      if (local_e8 != (void *)0x0) {
        local_e0 = local_e8;
        free(local_e8);
      }
      if (unaff_x19 != (void *)0x0) {
        free(unaff_x19);
      }
      FUN_0036e048(auStack_b8);
      if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
        FUN_00755eac(uVar5);
      }
    }
  }
LAB_0035faf4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035faf8  FUN_0035faf8 =====

void FUN_0035faf8(undefined8 param_1)

{
  FUN_0036dfcc(param_1);
  return;
}


// ===== 0035fb00  FUN_0035fb00 =====

void FUN_0035fb00(void *param_1)

{
  FUN_0035dfdc();
  free(param_1);
  return;
}


// ===== 0035fb24  FUN_0035fb24 =====

void FUN_0035fb24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00761720;
  FUN_00712454();
  return;
}


// ===== 0035fb38  FUN_0035fb38 =====

void FUN_0035fb38(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1678 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 0035fb6c  FUN_0035fb6c =====

void FUN_0035fb6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0035fb74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0035fb78  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0035fb7c  FUN_0035fb7c =====

void FUN_0035fb7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00761770;
  FUN_00712454();
  return;
}


// ===== 0035fb90  FUN_0035fb90 =====

void FUN_0035fb90(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1680 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 0035fbc4  FUN_0035fbc4 =====

void FUN_0035fbc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0035fbcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0035fbd0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0035fbd4  FUN_0035fbd4 =====

void FUN_0035fbd4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_007617c0;
  FUN_00712454();
  return;
}


// ===== 0035fbe8  FUN_0035fbe8 =====

void FUN_0035fbe8(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1690 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 0035fc1c  FUN_0035fc1c =====

void FUN_0035fc1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0035fc24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0035fc28  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0035fc2c  FUN_0035fc2c =====

void FUN_0035fc2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00761810;
  FUN_00712454();
  return;
}


// ===== 0035fc40  FUN_0035fc40 =====

void FUN_0035fc40(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a16a0 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 0035fc74  FUN_0035fc74 =====

void FUN_0035fc74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0035fc7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0035fc80  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0035fc84  FUN_0035fc84 =====

void FUN_0035fc84(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  void *__ptr;
  void *pvVar4;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    puVar3 = (undefined8 *)*param_1;
    __ptr = (void *)*puVar3;
    if (__ptr != (void *)0x0) {
      pvVar4 = (void *)puVar3[1];
      if (pvVar4 == __ptr) {
        puVar3[1] = __ptr;
        free(__ptr);
        return;
      }
      do {
        plVar2 = *(long **)((long)pvVar4 + -8);
        if ((plVar2 != (long *)0x0) &&
           (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0)) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          FUN_0071245c(plVar2);
        }
        pvVar4 = (void *)((long)pvVar4 + -0x10);
      } while (pvVar4 != __ptr);
      pvVar4 = *(void **)*param_1;
      puVar3[1] = __ptr;
      free(pvVar4);
      return;
    }
  }
  return;
}


// ===== 0035fd4c  FUN_0035fd4c =====

void FUN_0035fd4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00761860;
  FUN_00712454();
  return;
}


// ===== 0035fd60  FUN_0035fd60 =====

void FUN_0035fd60(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a16b0 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 0035fd94  FUN_0035fd94 =====

void FUN_0035fd94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0035fd9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0035fda0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0035fda4  FUN_0035fda4 =====

void FUN_0035fda4(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  long *local_138;
  long *local_130;
  long *local_128;
  long *local_120;
  long *local_118;
  long *local_110;
  long *local_108;
  long *local_100;
  long *local_f8;
  long *local_f0;
  long *local_e8;
  long **local_e0;
  undefined1 local_d8;
  long *local_d0;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  *param_1 = (long)(PTR_DAT_007a1660 + 0x10);
  FUN_0036c290(param_1 + 1);
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  plVar8 = (long *)FUN_0036ebac(*(long *)(*param_2 + 8) + -0x48);
  uVar19 = *(undefined8 *)(*plVar8 + 8);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
                    /* try { // try from 0035fe38 to 0035fe47 has its CatchHandler @ 00360aac */
  puVar9 = (undefined8 *)FUN_00759c3c(8);
  param_1[9] = (long)puVar9;
  *puVar9 = uVar19;
  param_1[10] = (long)(puVar9 + 1);
  param_1[0xb] = (long)(puVar9 + 1);
  lVar13 = param_2[2];
  lVar20 = param_2[3];
                    /* try { // try from 0035fe60 to 0035fe67 has its CatchHandler @ 00360aa4 */
  plVar10 = (long *)FUN_00759c3c(0x40);
  puVar3 = PTR_DAT_007a1678;
  plVar8 = plVar10 + 3;
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)(puVar3 + 0x10);
                    /* try { // try from 0035fe84 to 0035fe93 has its CatchHandler @ 00360a8c */
  FUN_0036af60(plVar8,lVar13,lVar20);
  local_f0 = plVar8;
  local_e8 = plVar10;
                    /* try { // try from 0035fe98 to 0035fe9f has its CatchHandler @ 00360a84 */
  plVar11 = (long *)FUN_00759c3c(0x20);
  puVar4 = PTR_DAT_007a1680;
  plVar11[2] = 0;
  puVar1 = PTR_DAT_007a1688 + 0x10;
  *plVar11 = (long)(puVar4 + 0x10);
  plVar11[1] = 0;
  plVar14 = plVar11 + 3;
  *plVar14 = (long)puVar1;
  local_100 = plVar14;
  local_f8 = plVar11;
                    /* try { // try from 0035fed0 to 0035fed7 has its CatchHandler @ 00360a7c */
  local_108 = (long *)FUN_00759c3c(0x20);
  puVar4 = PTR_DAT_007a1690;
  local_108[2] = 0;
  puVar1 = PTR_DAT_007a1698 + 0x10;
  *local_108 = (long)(puVar4 + 0x10);
  local_108[1] = 0;
  local_110 = local_108 + 3;
  *local_110 = (long)puVar1;
                    /* try { // try from 0035ff04 to 0035ff0b has its CatchHandler @ 00360a74 */
  local_118 = (long *)FUN_00759c3c(0x20);
  puVar4 = PTR_DAT_007a16a0;
  local_118[2] = 0;
  puVar1 = PTR_DAT_007a16a8 + 0x10;
  *local_118 = (long)(puVar4 + 0x10);
  local_118[1] = 0;
  local_120 = local_118 + 3;
  *local_120 = (long)puVar1;
  local_d0 = plVar8;
  local_c8 = plVar10;
  FUN_00755c20(1,plVar10 + 1);
  local_c0 = plVar14;
  local_b8 = plVar11;
  FUN_00755c20(1,plVar11 + 1);
  local_e0 = &local_138;
  local_138 = (long *)0x0;
  local_130 = (long *)0x0;
  local_128 = (long *)0x0;
  local_d8 = 0;
                    /* try { // try from 0035ff6c to 0035ff73 has its CatchHandler @ 003609dc */
  plVar12 = (long *)FUN_00759c3c(0x20);
  *plVar12 = (long)plVar8;
  plVar12[1] = (long)plVar10;
  local_138 = plVar12;
  local_128 = plVar12 + 4;
  FUN_00755c20(1,plVar10 + 1);
  plVar12[2] = (long)plVar14;
  plVar12[3] = (long)plVar11;
  FUN_00755c20(1,plVar11 + 1);
  local_130 = plVar12 + 4;
                    /* try { // try from 0035ffa8 to 0035ffaf has its CatchHandler @ 003609cc */
  plVar8 = (long *)FUN_00759c3c(0x38);
  puVar1 = PTR_DAT_007a16b0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)(puVar1 + 0x10);
                    /* try { // try from 0035ffcc to 0035ffdb has its CatchHandler @ 003609b4 */
  FUN_0036b564(plVar8 + 3,&local_138);
  plVar10 = (long *)param_1[4];
  param_1[3] = (long)(plVar8 + 3);
  param_1[4] = (long)plVar8;
  if ((plVar10 != (long *)0x0) &&
     (lVar13 = FUN_00755c50(0xffffffffffffffff,plVar10 + 1), lVar13 == 0)) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    FUN_0071245c(plVar10);
  }
  plVar10 = local_138;
  plVar8 = local_130;
  if (local_138 != (long *)0x0) {
    for (; plVar8 != plVar10; plVar8 = plVar8 + -2) {
      plVar11 = (long *)plVar8[-1];
      if ((plVar11 != (long *)0x0) &&
         (lVar13 = FUN_00755c50(0xffffffffffffffff,plVar11 + 1), lVar13 == 0)) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        FUN_0071245c(plVar11);
      }
    }
    local_130 = plVar10;
    free(local_138);
  }
  plVar8 = local_b8;
  if ((local_b8 != (long *)0x0) &&
     (lVar13 = FUN_00755c50(0xffffffffffffffff,local_b8 + 1), lVar13 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0071245c(plVar8);
  }
  plVar8 = local_c8;
  if ((local_c8 != (long *)0x0) &&
     (lVar13 = FUN_00755c50(0xffffffffffffffff,local_c8 + 1), lVar13 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0071245c(plVar8);
  }
  uVar19 = *(undefined8 *)*param_2;
  uVar21 = *(undefined8 *)param_2[1];
                    /* try { // try from 003600e4 to 003600eb has its CatchHandler @ 003609ac */
  plVar12 = (long *)FUN_00759c3c(0x40);
  plVar8 = plVar12 + 3;
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = (long)(puVar3 + 0x10);
                    /* try { // try from 00360100 to 0036010f has its CatchHandler @ 00360994 */
  FUN_0036af60(plVar8,uVar19,uVar21);
  local_d0 = plVar8;
  local_c8 = plVar12;
  FUN_00755c20(1,plVar12 + 1);
  plVar11 = local_118;
  plVar10 = local_120;
  local_c0 = local_120;
  local_b8 = local_118;
  if (local_118 != (long *)0x0) {
    FUN_00755c20(1,local_118 + 1);
  }
  local_e0 = &local_138;
  local_138 = (long *)0x0;
  local_130 = (long *)0x0;
  local_128 = (long *)0x0;
  local_d8 = 0;
                    /* try { // try from 00360150 to 00360157 has its CatchHandler @ 0036096c */
  plVar14 = (long *)FUN_00759c3c(0x20);
  *plVar14 = (long)plVar8;
  plVar14[1] = (long)plVar12;
  local_138 = plVar14;
  local_130 = plVar14;
  local_128 = plVar14 + 4;
  FUN_00755c20(1,plVar12 + 1);
  plVar14[2] = (long)plVar10;
  plVar14[3] = (long)plVar11;
  if (plVar11 != (long *)0x0) {
    FUN_00755c20(1,plVar11 + 1);
  }
  local_130 = plVar14 + 4;
                    /* try { // try from 00360190 to 00360197 has its CatchHandler @ 0036095c */
  plVar8 = (long *)FUN_00759c3c(0x38);
  plVar8[2] = 0;
  *plVar8 = (long)(PTR_DAT_007a16b0 + 0x10);
  plVar8[1] = 0;
                    /* try { // try from 003601b4 to 003601c3 has its CatchHandler @ 00360944 */
  FUN_0036b564(plVar8 + 3,&local_138);
  plVar10 = (long *)param_1[6];
  param_1[5] = (long)(plVar8 + 3);
  param_1[6] = (long)plVar8;
  if ((plVar10 != (long *)0x0) &&
     (lVar13 = FUN_00755c50(0xffffffffffffffff,plVar10 + 1), lVar13 == 0)) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    FUN_0071245c(plVar10);
  }
  plVar10 = local_138;
  plVar8 = local_130;
  if (local_138 != (long *)0x0) {
    for (; plVar8 != plVar10; plVar8 = plVar8 + -2) {
      plVar11 = (long *)plVar8[-1];
      if ((plVar11 != (long *)0x0) &&
         (lVar13 = FUN_00755c50(0xffffffffffffffff,plVar11 + 1), lVar13 == 0)) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        FUN_0071245c(plVar11);
      }
    }
    local_130 = plVar10;
    free(local_138);
  }
  plVar8 = local_b8;
  if ((local_b8 != (long *)0x0) &&
     (lVar13 = FUN_00755c50(0xffffffffffffffff,local_b8 + 1), lVar13 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0071245c(plVar8);
  }
  plVar8 = local_c8;
  if ((local_c8 != (long *)0x0) &&
     (lVar13 = FUN_00755c50(0xffffffffffffffff,local_c8 + 1), lVar13 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0071245c(plVar8);
  }
  lVar13 = *(long *)*param_2;
  lVar20 = *(long *)param_2[1];
                    /* try { // try from 003602cc to 003602d3 has its CatchHandler @ 0036093c */
  plVar15 = (long *)FUN_00759c3c(0x40);
  plVar8 = plVar15 + 3;
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)(puVar3 + 0x10);
                    /* try { // try from 003602e8 to 003602f7 has its CatchHandler @ 00360924 */
  FUN_0036af60(plVar8,lVar13 + 0x48,lVar20 + 0x48);
  lVar13 = *(long *)*param_2;
  lVar20 = *(long *)param_2[1];
                    /* try { // try from 00360308 to 0036030f has its CatchHandler @ 0036091c */
  plVar16 = (long *)FUN_00759c3c(0x40);
  plVar10 = plVar16 + 3;
  plVar16[1] = 0;
  plVar16[2] = 0;
  *plVar16 = (long)(puVar3 + 0x10);
                    /* try { // try from 00360324 to 00360333 has its CatchHandler @ 00360904 */
  FUN_0036af60(plVar10,lVar13 + 0x90,lVar20 + 0x90);
  lVar13 = *(long *)*param_2;
  lVar20 = *(long *)param_2[1];
                    /* try { // try from 00360344 to 0036034b has its CatchHandler @ 003608f0 */
  plVar17 = (long *)FUN_00759c3c(0x40);
  plVar11 = plVar17 + 3;
  plVar17[1] = 0;
  plVar17[2] = 0;
  *plVar17 = (long)(puVar3 + 0x10);
                    /* try { // try from 00360360 to 0036036f has its CatchHandler @ 003608d4 */
  FUN_0036af60(plVar11,lVar13 + 0xd8,lVar20 + 0xd8);
  local_d0 = plVar8;
  local_c8 = plVar15;
  FUN_00755c20(1,plVar15 + 1);
  plVar5 = local_108;
  plVar14 = local_110;
  local_c0 = local_110;
  local_b8 = local_108;
  local_b0 = plVar10;
  local_a8 = plVar16;
  if (local_108 == (long *)0x0) {
    FUN_00755c20(1,plVar16 + 1);
    local_a0 = plVar14;
    local_98 = plVar5;
  }
  else {
    FUN_00755c20(1,local_108 + 1);
    FUN_00755c20(1,plVar16 + 1);
    local_a0 = plVar14;
    local_98 = plVar5;
    FUN_00755c20(1,plVar5 + 1);
  }
  local_90 = plVar11;
  local_88 = plVar17;
  FUN_00755c20(1,plVar17 + 1);
  plVar7 = local_f8;
  plVar6 = local_100;
  local_80 = local_100;
  local_78 = local_f8;
  if (local_f8 != (long *)0x0) {
    FUN_00755c20(1,local_f8 + 1);
  }
  local_e0 = &local_138;
  local_138 = (long *)0x0;
  local_130 = (long *)0x0;
  local_128 = (long *)0x0;
  local_d8 = 0;
                    /* try { // try from 00360418 to 0036041f has its CatchHandler @ 00360888 */
  plVar18 = (long *)FUN_00759c3c(0x60);
  *plVar18 = (long)plVar8;
  plVar18[1] = (long)plVar15;
  local_138 = plVar18;
  local_130 = plVar18;
  local_128 = plVar18 + 0xc;
  FUN_00755c20(1,plVar15 + 1);
  plVar18[2] = (long)plVar14;
  plVar18[3] = (long)plVar5;
  if (plVar5 == (long *)0x0) {
    plVar18[4] = (long)plVar10;
    plVar18[5] = (long)plVar16;
    FUN_00755c20(1,plVar16 + 1);
    plVar18[6] = (long)plVar14;
    plVar18[7] = 0;
  }
  else {
    FUN_00755c20(1,plVar5 + 1);
    plVar18[4] = (long)plVar10;
    plVar18[5] = (long)plVar16;
    FUN_00755c20(1,plVar16 + 1);
    plVar18[6] = (long)plVar14;
    plVar18[7] = (long)plVar5;
    FUN_00755c20(1,plVar5 + 1);
  }
  plVar18[8] = (long)plVar11;
  plVar18[9] = (long)plVar17;
  FUN_00755c20(1,plVar17 + 1);
  plVar18[10] = (long)plVar6;
  plVar18[0xb] = (long)plVar7;
  if (plVar7 != (long *)0x0) {
    FUN_00755c20(1,plVar7 + 1);
  }
  local_130 = plVar18 + 0xc;
                    /* try { // try from 003604c0 to 003604c7 has its CatchHandler @ 00360878 */
  plVar8 = (long *)FUN_00759c3c(0x38);
  plVar8[2] = 0;
  *plVar8 = (long)(PTR_DAT_007a16b0 + 0x10);
  plVar8[1] = 0;
                    /* try { // try from 003604e4 to 003604ef has its CatchHandler @ 00360860 */
  FUN_0036b564(plVar8 + 3,&local_138);
  plVar10 = (long *)param_1[8];
  param_1[7] = (long)(plVar8 + 3);
  param_1[8] = (long)plVar8;
  if ((plVar10 != (long *)0x0) &&
     (lVar13 = FUN_00755c50(0xffffffffffffffff,plVar10 + 1), lVar13 == 0)) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    FUN_0071245c(plVar10);
  }
  plVar10 = local_138;
  plVar8 = local_130;
  if (local_138 != (long *)0x0) {
    for (; plVar8 != plVar10; plVar8 = plVar8 + -2) {
      plVar11 = (long *)plVar8[-1];
      if ((plVar11 != (long *)0x0) &&
         (lVar13 = FUN_00755c50(0xffffffffffffffff,plVar11 + 1), lVar13 == 0)) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        FUN_0071245c(plVar11);
      }
    }
    local_130 = plVar10;
    free(local_138);
  }
  plVar8 = local_78;
  if ((local_78 != (long *)0x0) &&
     (lVar13 = FUN_00755c50(0xffffffffffffffff,local_78 + 1), lVar13 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0071245c(plVar8);
  }
  plVar8 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar13 = FUN_00755c50(0xffffffffffffffff,local_88 + 1), lVar13 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0071245c(plVar8);
  }
  plVar8 = local_98;
  if ((local_98 != (long *)0x0) &&
     (lVar13 = FUN_00755c50(0xffffffffffffffff,local_98 + 1), lVar13 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0071245c(plVar8);
  }
  plVar8 = local_a8;
  if ((local_a8 != (long *)0x0) &&
     (lVar13 = FUN_00755c50(0xffffffffffffffff,local_a8 + 1), lVar13 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0071245c(plVar8);
  }
  plVar8 = local_b8;
  if ((local_b8 != (long *)0x0) &&
     (lVar13 = FUN_00755c50(0xffffffffffffffff,local_b8 + 1), lVar13 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0071245c(plVar8);
  }
  plVar8 = local_c8;
  if ((local_c8 != (long *)0x0) &&
     (lVar13 = FUN_00755c50(0xffffffffffffffff,local_c8 + 1), lVar13 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0071245c(plVar8);
  }
  if ((plVar17 != (long *)0x0) &&
     (lVar13 = FUN_00755c50(0xffffffffffffffff,plVar17 + 1), lVar13 == 0)) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
    FUN_0071245c(plVar17);
  }
  if ((plVar16 != (long *)0x0) &&
     (lVar13 = FUN_00755c50(0xffffffffffffffff,plVar16 + 1), lVar13 == 0)) {
    (**(code **)(*plVar16 + 0x10))(plVar16);
    FUN_0071245c(plVar16);
  }
  if ((plVar15 != (long *)0x0) &&
     (lVar13 = FUN_00755c50(0xffffffffffffffff,plVar15 + 1), lVar13 == 0)) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    FUN_0071245c(plVar15);
  }
  if ((plVar12 != (long *)0x0) &&
     (lVar13 = FUN_00755c50(0xffffffffffffffff,plVar12 + 1), lVar13 == 0)) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_0071245c(plVar12);
  }
  plVar8 = local_118;
  if ((local_118 != (long *)0x0) &&
     (lVar13 = FUN_00755c50(0xffffffffffffffff,local_118 + 1), lVar13 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0071245c(plVar8);
  }
  plVar8 = local_108;
  if ((local_108 != (long *)0x0) &&
     (lVar13 = FUN_00755c50(0xffffffffffffffff,local_108 + 1), lVar13 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0071245c(plVar8);
  }
  plVar8 = local_f8;
  if ((local_f8 != (long *)0x0) &&
     (lVar13 = FUN_00755c50(0xffffffffffffffff,local_f8 + 1), lVar13 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0071245c(plVar8);
  }
  plVar8 = local_e8;
  if ((local_e8 != (long *)0x0) &&
     (lVar13 = FUN_00755c50(0xffffffffffffffff,local_e8 + 1), lVar13 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0071245c(plVar8);
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00360ab4  FUN_00360ab4 =====

void FUN_00360ab4(undefined8 param_1,long param_2,undefined8 param_3)

{
  void *pvVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  void *unaff_x19;
  undefined8 uVar9;
  undefined8 *puVar10;
  size_t sVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  undefined8 *puStack_198;
  void *local_190;
  void *local_188;
  undefined8 local_180;
  long *local_178;
  long *local_170;
  long *plStack_168;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined8 *puStack_120;
  void *local_e8;
  void *local_e0;
  void *local_d8;
  void *local_d0;
  void *local_c8;
  void *local_c0;
  undefined1 auStack_b8 [72];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  (**(code **)(**(long **)(param_2 + 0x18) + 0x18))(auStack_b8);
  plVar4 = (long *)FUN_0036e624(auStack_b8);
  local_c8 = (void *)0x0;
  local_c0 = (void *)0x0;
  local_d0 = (void *)0x0;
  sVar11 = plVar4[1] - *plVar4;
  if (sVar11 == 0) {
    unaff_x19 = (void *)0x0;
LAB_00360b58:
    pvVar1 = local_c8;
    uVar12 = *(undefined8 *)(param_2 + 8);
                    /* try { // try from 00360b5c to 00360b63 has its CatchHandler @ 00360e3c */
    local_130 = (undefined8 *)FUN_00759c3c(8);
    local_128 = local_130 + 1;
    *local_130 = 0;
                    /* try { // try from 00360b74 to 00360bd7 has its CatchHandler @ 00360eac */
    puStack_120 = local_128;
    uVar5 = FUN_0036e5c8(param_3,&local_130);
    puVar10 = (undefined8 *)(param_2 + 0x48);
    uVar13 = *(undefined8 *)*puVar10;
    puVar6 = (undefined8 *)FUN_0036e624(auStack_b8);
    uVar9 = *puVar6;
    plVar4 = (long *)FUN_0036e624(auStack_b8);
    sVar11 = (long)pvVar1 - (long)unaff_x19;
    FUN_0036d4a8(uVar12,uVar5,uVar13,uVar9,plVar4[1] - *plVar4 >> 2,unaff_x19,(long)sVar11 >> 2);
    if (local_130 != (undefined8 *)0x0) {
      local_128 = local_130;
      free(local_130);
    }
    local_e8 = (void *)0x0;
    local_e0 = (void *)0x0;
    local_d8 = (void *)0x0;
    if (pvVar1 != unaff_x19) {
      if ((long)sVar11 < 0) goto LAB_00360df4;
                    /* try { // try from 00360bfc to 00360c03 has its CatchHandler @ 00360e44 */
      local_e8 = (void *)FUN_00759c3c(sVar11);
      pvVar1 = (void *)((long)local_e8 + sVar11);
      local_d8 = pvVar1;
      memcpy(local_e8,unaff_x19,sVar11);
      local_e0 = pvVar1;
    }
                    /* try { // try from 00360c28 to 00360c5b has its CatchHandler @ 00360ec0 */
    pvVar1 = local_e0;
    lVar7 = FUN_0036e5f0(param_3,puVar10);
    lVar8 = FUN_0036e614(param_3);
    FUN_003338b8(&local_e8,pvVar1,lVar7,lVar8,lVar8 - lVar7 >> 2);
    pvVar3 = local_e0;
    pvVar1 = local_e8;
                    /* try { // try from 00360c60 to 00360c67 has its CatchHandler @ 00360e38 */
    local_178 = (long *)FUN_00759c3c(8);
    local_170 = local_178 + 1;
    *local_178 = (long)pvVar3 - (long)pvVar1 >> 2;
                    /* try { // try from 00360c7c to 00360c8b has its CatchHandler @ 00360e1c */
    plStack_168 = local_170;
    FUN_0036e160(&local_130,&local_e8,&local_178);
    if (local_178 != (long *)0x0) {
      local_170 = local_178;
      free(local_178);
    }
                    /* try { // try from 00360ca8 to 00360cb3 has its CatchHandler @ 00360e14 */
    (**(code **)(**(long **)(param_2 + 0x28) + 0x18))
              (&local_178,*(long **)(param_2 + 0x28),&local_130);
    uVar12 = *(undefined8 *)(param_2 + 8);
    local_190 = (void *)0x0;
    local_188 = (void *)0x0;
    local_180 = 0;
    uVar5 = FUN_0036e624(&local_178);
    uVar9 = FUN_0036e624(auStack_b8);
                    /* try { // try from 00360cd8 to 00360ce7 has its CatchHandler @ 00360e84 */
    FUN_0036cee8(uVar12,uVar5,uVar9,&local_190);
    pvVar3 = local_188;
    pvVar1 = local_190;
    uVar9 = *(undefined8 *)(param_2 + 8);
                    /* try { // try from 00360cf0 to 00360cf7 has its CatchHandler @ 00360e10 */
    local_1a8 = (undefined8 *)FUN_00759c3c(8);
    local_1a0 = local_1a8 + 1;
    *local_1a8 = 0;
                    /* try { // try from 00360d04 to 00360d37 has its CatchHandler @ 00360e68 */
    puStack_198 = local_1a0;
    uVar5 = FUN_0036e5c8(param_3,&local_1a8);
    FUN_0036cbb4(uVar9,pvVar1,(long)pvVar3 - (long)pvVar1 >> 2,unaff_x19,(long)sVar11 >> 2,uVar5,
                 *(undefined8 *)*puVar10);
    if (local_1a8 != (undefined8 *)0x0) {
      local_1a0 = local_1a8;
      free(local_1a8);
    }
                    /* try { // try from 00360d54 to 00360d5f has its CatchHandler @ 00360e84 */
    (**(code **)(**(long **)(param_2 + 0x38) + 0x10))(param_1,*(long **)(param_2 + 0x38),&local_178)
    ;
    if (local_190 != (void *)0x0) {
      local_188 = local_190;
      free(local_190);
    }
    FUN_0036e048(&local_178);
    FUN_0036e048(&local_130);
    if (local_e8 != (void *)0x0) {
      local_e0 = local_e8;
      free(local_e8);
    }
    if (unaff_x19 != (void *)0x0) {
      free(unaff_x19);
    }
    FUN_0036e048(auStack_b8);
    if (*(long *)(lVar2 + 0x28) == local_70) {
      return;
    }
  }
  else {
    if (-1 < (long)sVar11) {
                    /* try { // try from 00360b24 to 00360b2b has its CatchHandler @ 00360e54 */
      unaff_x19 = (void *)FUN_00759c3c(sVar11);
      local_d0 = unaff_x19;
      local_c0 = (void *)((long)unaff_x19 + sVar11);
      memset(unaff_x19,0,sVar11);
      local_c8 = (void *)((long)unaff_x19 + sVar11);
      goto LAB_00360b58;
    }
    if (*(long *)(lVar2 + 0x28) != local_70) goto LAB_00360f08;
                    /* try { // try from 00360dec to 00360df3 has its CatchHandler @ 00360e54 */
    FUN_002febf0(&local_d0);
LAB_00360df4:
    if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* try { // try from 00360e08 to 00360e0f has its CatchHandler @ 00360e44 */
      uVar5 = FUN_002febf0(&local_e8);
                    /* catch() { ... } // from try @ 00360cf0 with catch @ 00360e10 */
                    /* catch() { ... } // from try @ 00360cd8 with catch @ 00360e84
                       catch() { ... } // from try @ 00360d54 with catch @ 00360e84 */
      if (local_190 != (void *)0x0) {
        local_188 = local_190;
        free(local_190);
      }
      FUN_0036e048(&local_178);
      FUN_0036e048(&local_130);
      if (local_e8 != (void *)0x0) {
        local_e0 = local_e8;
        free(local_e8);
      }
      if (unaff_x19 != (void *)0x0) {
        free(unaff_x19);
      }
      FUN_0036e048(auStack_b8);
      if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
        FUN_00755eac(uVar5);
      }
    }
  }
LAB_00360f08:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00360f0c  FUN_00360f0c =====

void FUN_00360f0c(undefined8 param_1)

{
  FUN_0036dfcc(param_1);
  return;
}


// ===== 00360f14  FUN_00360f14 =====

void FUN_00360f14(void *param_1)

{
  FUN_0035dd30();
  free(param_1);
  return;
}


// ===== 00360f38  FUN_00360f38 =====

void FUN_00360f38(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00360fa8(param_2,&DAT_007ab2e8);
  *param_1 = uVar1;
  uVar1 = FUN_00360fa8(param_2,&DAT_007ab300);
  param_1[1] = uVar1;
  uVar1 = FUN_00360fa8(param_2,&DAT_007ab318);
  param_1[2] = uVar1;
  uVar1 = FUN_00360fa8(param_2,&DAT_007ab330);
  param_1[3] = uVar1;
  return;
}


// ===== 00360fa8  FUN_00360fa8 =====

long FUN_00360fa8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00361218();
  if (((param_1 + 8 == lVar2) || (*(long *)(lVar2 + 0x38) == 0)) ||
     (lVar3 = FUN_0073a738(*(long *)(lVar2 + 0x38),PTR_PTR_007a16b8,PTR_PTR_007a16c0,0), lVar3 == 0)
     ) {
    local_48 = 0;
    local_40 = (long *)0x0;
  }
  else {
    plVar6 = *(long **)(lVar2 + 0x40);
    if (plVar6 != (long *)0x0) {
      FUN_00755c20(1,plVar6 + 1);
    }
    local_48 = *(long *)(lVar3 + 8);
    local_40 = *(long **)(lVar3 + 0x10);
    if (local_40 != (long *)0x0) {
      FUN_00755c20(1,local_40 + 1);
    }
    if ((plVar6 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar6 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_0071245c(plVar6);
    }
    plVar6 = local_40;
    lVar2 = local_48;
    if (local_48 != 0) {
      if ((local_40 != (long *)0x0) &&
         (lVar3 = FUN_00755c50(0xffffffffffffffff,local_40 + 1), lVar3 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0071245c(plVar6);
      }
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return lVar2;
      }
      goto LAB_003611c4;
    }
  }
  uVar4 = FUN_00753a74(0x10);
                    /* try { // try from 003610d8 to 003610e7 has its CatchHandler @ 00361198 */
  FUN_00714534(auStack_78,"ERROR DATA With Key: ",param_2);
                    /* try { // try from 003610e8 to 003610f7 has its CatchHandler @ 00361180 */
  puVar5 = (undefined8 *)FUN_00713bdc(auStack_78,"doesn\'t exists");
  local_50 = puVar5[2];
  uStack_58 = puVar5[1];
  local_60 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
                    /* try { // try from 00361114 to 0036114b has its CatchHandler @ 0036114c */
  FUN_0071259c(uVar4,&local_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar4,PTR_PTR_007a0f38,PTR_FUN_007a0f40);
  }
LAB_003611c4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003611c8  FUN_003611c8 =====

void FUN_003611c8(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 00361218  FUN_00361218 =====

long * FUN_00361218(long param_1,byte *param_2)

{
  size_t sVar1;
  ulong uVar2;
  byte *__s2;
  byte bVar3;
  bool bVar4;
  void *__s2_00;
  int iVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  
  plVar8 = (long *)(param_1 + 8);
  plVar10 = (long *)*plVar8;
  if (plVar10 != (long *)0x0) {
    uVar2 = *(ulong *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    plVar9 = plVar8;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      uVar2 = (ulong)(*param_2 >> 1);
    }
    do {
      bVar3 = *(byte *)(plVar10 + 4);
      if ((bVar3 & 1) == 0) {
        uVar11 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) goto LAB_00361270;
LAB_003612a4:
        sVar1 = uVar2;
        if (uVar11 <= uVar2) {
          sVar1 = uVar11;
        }
        iVar5 = memcmp((void *)((long)plVar10 + 0x21),__s2,sVar1);
        if (iVar5 != 0) goto LAB_00361288;
LAB_003612bc:
        uVar6 = (uint)(uVar11 < uVar2);
        if (uVar6 != 0) goto LAB_00361290;
LAB_003612c8:
        lVar7 = 0;
      }
      else {
        uVar11 = plVar10[5];
        if ((bVar3 & 1) == 0) goto LAB_003612a4;
LAB_00361270:
        sVar1 = uVar2;
        if (uVar11 <= uVar2) {
          sVar1 = uVar11;
        }
        iVar5 = memcmp((void *)plVar10[6],__s2,sVar1);
        if (iVar5 == 0) goto LAB_003612bc;
LAB_00361288:
        uVar6 = -(iVar5 >> 0x1f);
        if (uVar6 == 0) goto LAB_003612c8;
LAB_00361290:
        lVar7 = 8;
      }
      if (uVar6 == 0) {
        plVar9 = plVar10;
      }
      plVar10 = *(long **)((long)plVar10 + lVar7);
    } while (plVar10 != (long *)0x0);
    if (plVar9 != plVar8) {
      uVar11 = (ulong)(*(byte *)(plVar9 + 4) >> 1);
      __s2_00 = (void *)((long)plVar9 + 0x21);
      if ((*(byte *)(plVar9 + 4) & 1) != 0) {
        uVar11 = plVar9[5];
        __s2_00 = (void *)plVar9[6];
      }
      sVar1 = uVar11;
      if (uVar2 <= uVar11) {
        sVar1 = uVar2;
      }
      iVar5 = memcmp(__s2,__s2_00,sVar1);
      bVar4 = uVar2 < uVar11;
      if (iVar5 != 0) {
        bVar4 = iVar5 < 0;
      }
      if (!bVar4) {
        plVar8 = plVar9;
      }
    }
  }
  return plVar8;
}


// ===== 00361340  _INIT_17 =====

void _INIT_17(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_FUN_007a13a0;
  DAT_007ab2e8 = 0x18;
  DAT_007ab2f5 = 0;
  DAT_007ab2f1 = 0x7261656e;
  DAT_007ab2e9 = s_WeightLinear_001e28fd._0_8_;
  __cxa_atexit(PTR_FUN_007a13a0,&DAT_007ab2e8,&PTR_LOOP_0075ec90);
  DAT_007ab300 = 0x14;
  DAT_007ab309 = 0x7261;
  DAT_007ab30b = 0;
  DAT_007ab301._0_1_ = s_BaesLinear_001e8beb[0];
  DAT_007ab301._1_1_ = s_BaesLinear_001e8beb[1];
  DAT_007ab301._2_1_ = s_BaesLinear_001e8beb[2];
  DAT_007ab301._3_1_ = s_BaesLinear_001e8beb[3];
  DAT_007ab301._4_1_ = s_BaesLinear_001e8beb[4];
  DAT_007ab301._5_1_ = s_BaesLinear_001e8beb[5];
  DAT_007ab301._6_1_ = s_BaesLinear_001e8beb[6];
  DAT_007ab301._7_1_ = s_BaesLinear_001e8beb[7];
  __cxa_atexit(puVar1,&DAT_007ab300,&PTR_LOOP_0075ec90);
  DAT_007ab318 = 0x12;
  DAT_007ab321 = 0x55;
  DAT_007ab319._0_1_ = s_WeightGRU_001f94aa[0];
  DAT_007ab319._1_1_ = s_WeightGRU_001f94aa[1];
  DAT_007ab319._2_1_ = s_WeightGRU_001f94aa[2];
  DAT_007ab319._3_1_ = s_WeightGRU_001f94aa[3];
  DAT_007ab319._4_1_ = s_WeightGRU_001f94aa[4];
  DAT_007ab319._5_1_ = s_WeightGRU_001f94aa[5];
  DAT_007ab319._6_1_ = s_WeightGRU_001f94aa[6];
  DAT_007ab319._7_1_ = s_WeightGRU_001f94aa[7];
  __cxa_atexit(puVar1,&DAT_007ab318,&PTR_LOOP_0075ec90);
  DAT_007ab330 = 0xe;
  DAT_007ab331 = 0x73656142;
  uRam00000000007ab335 = 0x555247;
  DAT_007ab338 = 0;
  __cxa_atexit(puVar1,&DAT_007ab330,&PTR_LOOP_0075ec90);
  return;
}


// ===== 00361444  FUN_00361444 =====

void FUN_00361444(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00360fa8(param_2,&DAT_007ab348);
  *param_1 = uVar1;
  uVar1 = FUN_00360fa8(param_2,&DAT_007ab360);
  param_1[1] = uVar1;
  uVar1 = FUN_003614b4(param_2,&DAT_007ab378);
  param_1[2] = uVar1;
  uVar1 = FUN_003614b4(param_2,&DAT_007ab390);
  param_1[3] = uVar1;
  return;
}


// ===== 003614b4  FUN_003614b4 =====

long FUN_003614b4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00361218();
  if (((param_1 + 8 == lVar2) || (*(long *)(lVar2 + 0x38) == 0)) ||
     (lVar3 = FUN_0073a738(*(long *)(lVar2 + 0x38),PTR_PTR_007a16b8,PTR_PTR_007a16c8,0), lVar3 == 0)
     ) {
    local_48 = 0;
    local_40 = (long *)0x0;
  }
  else {
    plVar6 = *(long **)(lVar2 + 0x40);
    if (plVar6 != (long *)0x0) {
      FUN_00755c20(1,plVar6 + 1);
    }
    local_48 = *(long *)(lVar3 + 8);
    local_40 = *(long **)(lVar3 + 0x10);
    if (local_40 != (long *)0x0) {
      FUN_00755c20(1,local_40 + 1);
    }
    if ((plVar6 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar6 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_0071245c(plVar6);
    }
    plVar6 = local_40;
    lVar2 = local_48;
    if (local_48 != 0) {
      if ((local_40 != (long *)0x0) &&
         (lVar3 = FUN_00755c50(0xffffffffffffffff,local_40 + 1), lVar3 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0071245c(plVar6);
      }
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return lVar2;
      }
      goto LAB_003616d0;
    }
  }
  uVar4 = FUN_00753a74(0x10);
                    /* try { // try from 003615e4 to 003615f3 has its CatchHandler @ 003616a4 */
  FUN_00714534(auStack_78,"ERROR DATA With Key: ",param_2);
                    /* try { // try from 003615f4 to 00361603 has its CatchHandler @ 0036168c */
  puVar5 = (undefined8 *)FUN_00713bdc(auStack_78,"doesn\'t exists");
  local_50 = puVar5[2];
  uStack_58 = puVar5[1];
  local_60 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
                    /* try { // try from 00361620 to 00361657 has its CatchHandler @ 00361658 */
  FUN_0071259c(uVar4,&local_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar4,PTR_PTR_007a0f38,PTR_FUN_007a0f40);
  }
LAB_003616d0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003616d4  FUN_003616d4 =====

void FUN_003616d4(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 00361724  _INIT_18 =====

void _INIT_18(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_FUN_007a13a0;
  DAT_007ab348 = 0x18;
  DAT_007ab355 = 0;
  DAT_007ab351 = 0x7261656e;
  DAT_007ab349 = s_WeightLinear_001e28fd._0_8_;
  __cxa_atexit(PTR_FUN_007a13a0,&DAT_007ab348,&PTR_LOOP_0075ec90);
  DAT_007ab360 = 0x14;
  DAT_007ab369 = 0x7261;
  DAT_007ab36b = 0;
  DAT_007ab361._0_1_ = s_BaesLinear_001e8beb[0];
  DAT_007ab361._1_1_ = s_BaesLinear_001e8beb[1];
  DAT_007ab361._2_1_ = s_BaesLinear_001e8beb[2];
  DAT_007ab361._3_1_ = s_BaesLinear_001e8beb[3];
  DAT_007ab361._4_1_ = s_BaesLinear_001e8beb[4];
  DAT_007ab361._5_1_ = s_BaesLinear_001e8beb[5];
  DAT_007ab361._6_1_ = s_BaesLinear_001e8beb[6];
  DAT_007ab361._7_1_ = s_BaesLinear_001e8beb[7];
  __cxa_atexit(puVar1,&DAT_007ab360,&PTR_LOOP_0075ec90);
  DAT_007ab378 = 0x12;
  DAT_007ab381 = 0x55;
  DAT_007ab379._0_1_ = s_WeightGRU_001f94aa[0];
  DAT_007ab379._1_1_ = s_WeightGRU_001f94aa[1];
  DAT_007ab379._2_1_ = s_WeightGRU_001f94aa[2];
  DAT_007ab379._3_1_ = s_WeightGRU_001f94aa[3];
  DAT_007ab379._4_1_ = s_WeightGRU_001f94aa[4];
  DAT_007ab379._5_1_ = s_WeightGRU_001f94aa[5];
  DAT_007ab379._6_1_ = s_WeightGRU_001f94aa[6];
  DAT_007ab379._7_1_ = s_WeightGRU_001f94aa[7];
  __cxa_atexit(puVar1,&DAT_007ab378,&PTR_LOOP_0075ec90);
  DAT_007ab390 = 0xe;
  DAT_007ab391 = 0x73656142;
  uRam00000000007ab395 = 0x555247;
  DAT_007ab398 = 0;
  __cxa_atexit(puVar1,&DAT_007ab390,&PTR_LOOP_0075ec90);
  return;
}


// ===== 00361828  FUN_00361828 =====

void FUN_00361828(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_00361d68();
                    /* try { // try from 00361840 to 003618cb has its CatchHandler @ 003618dc */
  uVar1 = FUN_003618f0(param_2,&DAT_007ab3a8,param_1 + 0x48);
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  uVar1 = FUN_003618f0(param_2,&DAT_007ab3c0,param_1 + 0x48);
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  uVar1 = FUN_003618f0(param_2,&DAT_007ab3d8,param_1 + 0x48);
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  uVar1 = FUN_003618f0(param_2,&DAT_007ab3f0,param_1 + 0x48);
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  uVar1 = FUN_003619f8(param_2,&DAT_007ab408,param_1 + 0x60);
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  uVar1 = FUN_00361b00(param_2,&DAT_007ab420,param_1 + 0x88);
  *(undefined8 *)(param_1 + 200) = uVar1;
  return;
}


// ===== 003618f0  FUN_003618f0 =====

long FUN_003618f0(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar2 = FUN_00361218();
  if (((param_1 + 8 != lVar2) && (*(long *)(lVar2 + 0x38) != 0)) &&
     (lVar3 = FUN_0073a738(*(long *)(lVar2 + 0x38),PTR_PTR_007a16b8,PTR_PTR_007a16d0,0), lVar3 != 0)
     ) {
    plVar4 = *(long **)(lVar2 + 0x40);
    if (plVar4 != (long *)0x0) {
      FUN_00755c20(1,plVar4 + 1);
    }
    lVar2 = *(long *)(lVar3 + 8);
    plVar1 = *(long **)(lVar3 + 0x10);
    if (plVar1 != (long *)0x0) {
      FUN_00755c20(1,plVar1 + 1);
    }
    if ((plVar4 != (long *)0x0) && (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar3 == 0)
       ) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0071245c(plVar4);
    }
    if (lVar2 != 0) {
      param_3 = lVar2;
    }
    if ((plVar1 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar1 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      FUN_0071245c(plVar1);
      return param_3;
    }
  }
  return param_3;
}


// ===== 003619f8  FUN_003619f8 =====

long FUN_003619f8(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar2 = FUN_00361218();
  if (((param_1 + 8 != lVar2) && (*(long *)(lVar2 + 0x38) != 0)) &&
     (lVar3 = FUN_0073a738(*(long *)(lVar2 + 0x38),PTR_PTR_007a16b8,PTR_PTR_007a16d8,0), lVar3 != 0)
     ) {
    plVar4 = *(long **)(lVar2 + 0x40);
    if (plVar4 != (long *)0x0) {
      FUN_00755c20(1,plVar4 + 1);
    }
    lVar2 = *(long *)(lVar3 + 8);
    plVar1 = *(long **)(lVar3 + 0x10);
    if (plVar1 != (long *)0x0) {
      FUN_00755c20(1,plVar1 + 1);
    }
    if ((plVar4 != (long *)0x0) && (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar3 == 0)
       ) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0071245c(plVar4);
    }
    if (lVar2 != 0) {
      param_3 = lVar2;
    }
    if ((plVar1 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar1 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      FUN_0071245c(plVar1);
      return param_3;
    }
  }
  return param_3;
}


// ===== 00361b00  FUN_00361b00 =====

long FUN_00361b00(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar2 = FUN_00361218();
  if (((param_1 + 8 != lVar2) && (*(long *)(lVar2 + 0x38) != 0)) &&
     (lVar3 = FUN_0073a738(*(long *)(lVar2 + 0x38),PTR_PTR_007a16b8,PTR_PTR_007a16e0,0), lVar3 != 0)
     ) {
    plVar4 = *(long **)(lVar2 + 0x40);
    if (plVar4 != (long *)0x0) {
      FUN_00755c20(1,plVar4 + 1);
    }
    lVar2 = *(long *)(lVar3 + 8);
    plVar1 = *(long **)(lVar3 + 0x10);
    if (plVar1 != (long *)0x0) {
      FUN_00755c20(1,plVar1 + 1);
    }
    if ((plVar4 != (long *)0x0) && (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar3 == 0)
       ) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0071245c(plVar4);
    }
    if (lVar2 != 0) {
      param_3 = lVar2;
    }
    if ((plVar1 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar1 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      FUN_0071245c(plVar1);
      return param_3;
    }
  }
  return param_3;
}


// ===== 00361c08  _INIT_19 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_19(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_FUN_007a13a0;
  DAT_007ab3b7 = 0;
  DAT_007ab3a8 = 0x1c;
  DAT_007ab3a9._0_6_ = s_BiasLinearNorm_001e8c0c._0_6_;
  DAT_007ab3a9._6_2_ = s_BiasLinearNorm_001e8c0c._6_2_;
  uRam00000000007ab3b1 = s_BiasLinearNorm_001e8c0c._8_6_;
  __cxa_atexit(PTR_FUN_007a13a0,&DAT_007ab3a8,&PTR_LOOP_0075ec90);
  DAT_007ab3d1 = 0x6d;
  DAT_007ab3c0 = 0x22;
  uRam00000000007ab3c9._0_1_ = s_BiasNonLinearNorm_001eab8a[8];
  uRam00000000007ab3c9._1_1_ = s_BiasNonLinearNorm_001eab8a[9];
  uRam00000000007ab3c9._2_1_ = s_BiasNonLinearNorm_001eab8a[10];
  uRam00000000007ab3c9._3_1_ = s_BiasNonLinearNorm_001eab8a[0xb];
  uRam00000000007ab3c9._4_1_ = s_BiasNonLinearNorm_001eab8a[0xc];
  uRam00000000007ab3c9._5_1_ = s_BiasNonLinearNorm_001eab8a[0xd];
  uRam00000000007ab3c9._6_1_ = s_BiasNonLinearNorm_001eab8a[0xe];
  uRam00000000007ab3c9._7_1_ = s_BiasNonLinearNorm_001eab8a[0xf];
  DAT_007ab3c1 = s_BiasNonLinearNorm_001eab8a[0];
  DAT_007ab3c1_1._0_1_ = s_BiasNonLinearNorm_001eab8a[1];
  DAT_007ab3c1_1._1_1_ = s_BiasNonLinearNorm_001eab8a[2];
  DAT_007ab3c1_1._2_1_ = s_BiasNonLinearNorm_001eab8a[3];
  DAT_007ab3c1_1._3_1_ = s_BiasNonLinearNorm_001eab8a[4];
  DAT_007ab3c1_1._4_1_ = s_BiasNonLinearNorm_001eab8a[5];
  DAT_007ab3c1_1._5_1_ = s_BiasNonLinearNorm_001eab8a[6];
  DAT_007ab3c1_1._6_1_ = s_BiasNonLinearNorm_001eab8a[7];
  __cxa_atexit(puVar1,&DAT_007ab3c0,&PTR_LOOP_0075ec90);
  DAT_007ab3d8 = 0x1c;
  DAT_007ab3d9._0_1_ = s_GainLinearNorm_001f5500[0];
  DAT_007ab3d9._1_1_ = s_GainLinearNorm_001f5500[1];
  DAT_007ab3d9._2_1_ = s_GainLinearNorm_001f5500[2];
  DAT_007ab3d9._3_1_ = s_GainLinearNorm_001f5500[3];
  DAT_007ab3d9._4_1_ = s_GainLinearNorm_001f5500[4];
  DAT_007ab3d9._5_1_ = s_GainLinearNorm_001f5500[5];
  DAT_007ab3d9._6_1_ = s_GainLinearNorm_001f5500[6];
  DAT_007ab3d9._7_1_ = s_GainLinearNorm_001f5500[7];
  uRam00000000007ab3e1._0_1_ = s_GainLinearNorm_001f5500[8];
  uRam00000000007ab3e1._1_1_ = s_GainLinearNorm_001f5500[9];
  uRam00000000007ab3e1._2_1_ = s_GainLinearNorm_001f5500[10];
  uRam00000000007ab3e1._3_1_ = s_GainLinearNorm_001f5500[0xb];
  uRam00000000007ab3e1._4_1_ = s_GainLinearNorm_001f5500[0xc];
  uRam00000000007ab3e1._5_1_ = s_GainLinearNorm_001f5500[0xd];
  DAT_007ab3e7 = 0;
  __cxa_atexit(puVar1,&DAT_007ab3d8,&PTR_LOOP_0075ec90);
  DAT_007ab3f0 = 0x22;
  DAT_007ab401 = 0x6d;
  uRam00000000007ab3f9._0_1_ = s_GainNonLinearNorm_001c7378[8];
  uRam00000000007ab3f9._1_1_ = s_GainNonLinearNorm_001c7378[9];
  uRam00000000007ab3f9._2_1_ = s_GainNonLinearNorm_001c7378[10];
  uRam00000000007ab3f9._3_1_ = s_GainNonLinearNorm_001c7378[0xb];
  uRam00000000007ab3f9._4_1_ = s_GainNonLinearNorm_001c7378[0xc];
  uRam00000000007ab3f9._5_1_ = s_GainNonLinearNorm_001c7378[0xd];
  uRam00000000007ab3f9._6_1_ = s_GainNonLinearNorm_001c7378[0xe];
  uRam00000000007ab3f9._7_1_ = s_GainNonLinearNorm_001c7378[0xf];
  DAT_007ab3f1 = s_GainNonLinearNorm_001c7378[0];
  DAT_007ab3f1_1._0_1_ = s_GainNonLinearNorm_001c7378[1];
  DAT_007ab3f1_1._1_1_ = s_GainNonLinearNorm_001c7378[2];
  DAT_007ab3f1_1._2_1_ = s_GainNonLinearNorm_001c7378[3];
  DAT_007ab3f1_1._3_1_ = s_GainNonLinearNorm_001c7378[4];
  DAT_007ab3f1_1._4_1_ = s_GainNonLinearNorm_001c7378[5];
  DAT_007ab3f1_1._5_1_ = s_GainNonLinearNorm_001c7378[6];
  DAT_007ab3f1_1._6_1_ = s_GainNonLinearNorm_001c7378[7];
  __cxa_atexit(puVar1,&DAT_007ab3f0,&PTR_LOOP_0075ec90);
  DAT_007ab408 = 0x1e;
  DAT_007ab418 = 0;
  DAT_007ab409._0_1_ = s_WeightGRU_reset_001c0bab[0];
  DAT_007ab409._1_1_ = s_WeightGRU_reset_001c0bab[1];
  DAT_007ab409._2_1_ = s_WeightGRU_reset_001c0bab[2];
  DAT_007ab409._3_1_ = s_WeightGRU_reset_001c0bab[3];
  DAT_007ab409._4_1_ = s_WeightGRU_reset_001c0bab[4];
  DAT_007ab409._5_1_ = s_WeightGRU_reset_001c0bab[5];
  DAT_007ab409._6_1_ = s_WeightGRU_reset_001c0bab[6];
  DAT_007ab409._7_1_ = s_WeightGRU_reset_001c0bab[7];
  uRam00000000007ab411._0_1_ = s_WeightGRU_reset_001c0bab[8];
  uRam00000000007ab411._1_1_ = s_WeightGRU_reset_001c0bab[9];
  uRam00000000007ab411._2_1_ = s_WeightGRU_reset_001c0bab[10];
  uRam00000000007ab411._3_1_ = s_WeightGRU_reset_001c0bab[0xb];
  uRam00000000007ab411._4_1_ = s_WeightGRU_reset_001c0bab[0xc];
  uRam00000000007ab411._5_1_ = s_WeightGRU_reset_001c0bab[0xd];
  uRam00000000007ab411._6_1_ = s_WeightGRU_reset_001c0bab[0xe];
  __cxa_atexit(puVar1,&DAT_007ab408,&PTR_LOOP_0075ec90);
  DAT_007ab420 = 0x1a;
  DAT_007ab421._0_1_ = s_BiasGRU_reset_001f550f[0];
  DAT_007ab421._1_1_ = s_BiasGRU_reset_001f550f[1];
  DAT_007ab421._2_1_ = s_BiasGRU_reset_001f550f[2];
  DAT_007ab421._3_1_ = s_BiasGRU_reset_001f550f[3];
  DAT_007ab421._4_1_ = s_BiasGRU_reset_001f550f[4];
  DAT_007ab421._5_1_ = s_BiasGRU_reset_001f550f[5];
  DAT_007ab421._6_1_ = s_BiasGRU_reset_001f550f[6];
  DAT_007ab421._7_1_ = s_BiasGRU_reset_001f550f[7];
  uRam00000000007ab429._0_1_ = s_BiasGRU_reset_001f550f[8];
  uRam00000000007ab429._1_1_ = s_BiasGRU_reset_001f550f[9];
  uRam00000000007ab429._2_1_ = s_BiasGRU_reset_001f550f[10];
  uRam00000000007ab429._3_1_ = s_BiasGRU_reset_001f550f[0xb];
  uRam00000000007ab429._4_1_ = s_BiasGRU_reset_001f550f[0xc];
  DAT_007ab42e = 0;
  __cxa_atexit(puVar1,&DAT_007ab420,&PTR_LOOP_0075ec90);
  return;
}


// ===== 00361d68  FUN_00361d68 =====

void FUN_00361d68(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00362028(param_2,&DAT_007ab438,param_1 + 6);
  *param_1 = uVar1;
  uVar1 = FUN_003618f0(param_2,&DAT_007ab450,param_1 + 9);
  param_1[1] = uVar1;
  uVar1 = FUN_00362028(param_2,&DAT_007ab468,param_1 + 6);
  param_1[2] = uVar1;
  uVar1 = FUN_003618f0(param_2,&DAT_007ab480,param_1 + 9);
  param_1[3] = uVar1;
  uVar1 = FUN_003619f8(param_2,&DAT_007ab498,param_1 + 0xc);
  param_1[4] = uVar1;
  uVar1 = FUN_00361b00(param_2,&DAT_007ab4b0,param_1 + 0x11);
  param_1[5] = uVar1;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
                    /* try { // try from 00361e0c to 00361e13 has its CatchHandler @ 00361e2c */
  FUN_00374600(param_1 + 0xc);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return;
}


// ===== 00361e48  FUN_00361e48 =====

void FUN_00361e48(undefined8 *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = puVar3;
  if (puVar2 != puVar3) {
    do {
      puVar1 = puVar2 + -3;
      __ptr = (void *)*puVar1;
      if (__ptr != (void *)0x0) {
        puVar2[-2] = __ptr;
        free(__ptr);
      }
      puVar2 = puVar1;
    } while (puVar1 != puVar3);
    puVar1 = (undefined8 *)*param_1;
  }
  param_1[1] = puVar3;
  free(puVar1);
  return;
}


// ===== 00361ec4  FUN_00361ec4 =====

void FUN_00361ec4(undefined8 *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = puVar3;
  if (puVar2 != puVar3) {
    do {
      puVar1 = puVar2 + -5;
      __ptr = (void *)*puVar1;
      if (__ptr != (void *)0x0) {
        puVar2[-4] = __ptr;
        free(__ptr);
      }
      puVar2 = puVar1;
    } while (puVar1 != puVar3);
    puVar1 = (undefined8 *)*param_1;
  }
  param_1[1] = puVar3;
  free(puVar1);
  return;
}


// ===== 00361f40  FUN_00361f40 =====

void FUN_00361f40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00362270(param_2,param_3);
  *param_1 = uVar1;
  uVar1 = FUN_00362490(param_2,param_4);
  param_1[1] = uVar1;
  uVar1 = FUN_00362270(param_2,param_5);
  param_1[2] = uVar1;
  uVar1 = FUN_00362490(param_2,param_6);
  param_1[3] = uVar1;
  uVar1 = FUN_003626b0(param_2,param_7);
  param_1[4] = uVar1;
  uVar1 = FUN_003628d0(param_2,param_8);
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = uVar1;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
                    /* try { // try from 00361fe4 to 00361feb has its CatchHandler @ 0036200c */
  FUN_00374600(param_1 + 0xc);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return;
}


// ===== 00362028  FUN_00362028 =====

long FUN_00362028(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar2 = FUN_00361218();
  if (((param_1 + 8 != lVar2) && (*(long *)(lVar2 + 0x38) != 0)) &&
     (lVar3 = FUN_0073a738(*(long *)(lVar2 + 0x38),PTR_PTR_007a16b8,PTR_PTR_007a16e8,0), lVar3 != 0)
     ) {
    plVar4 = *(long **)(lVar2 + 0x40);
    if (plVar4 != (long *)0x0) {
      FUN_00755c20(1,plVar4 + 1);
    }
    lVar2 = *(long *)(lVar3 + 8);
    plVar1 = *(long **)(lVar3 + 0x10);
    if (plVar1 != (long *)0x0) {
      FUN_00755c20(1,plVar1 + 1);
    }
    if ((plVar4 != (long *)0x0) && (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar3 == 0)
       ) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0071245c(plVar4);
    }
    if (lVar2 != 0) {
      param_3 = lVar2;
    }
    if ((plVar1 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar1 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      FUN_0071245c(plVar1);
      return param_3;
    }
  }
  return param_3;
}


// ===== 00362130  FUN_00362130 =====

void FUN_00362130(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 00362180  FUN_00362180 =====

void FUN_00362180(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 003621d0  FUN_003621d0 =====

void FUN_003621d0(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 00362220  FUN_00362220 =====

void FUN_00362220(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 00362270  FUN_00362270 =====

long FUN_00362270(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00361218();
  if (((param_1 + 8 == lVar2) || (*(long *)(lVar2 + 0x38) == 0)) ||
     (lVar3 = FUN_0073a738(*(long *)(lVar2 + 0x38),PTR_PTR_007a16b8,PTR_PTR_007a16e8,0), lVar3 == 0)
     ) {
    local_48 = 0;
    local_40 = (long *)0x0;
  }
  else {
    plVar6 = *(long **)(lVar2 + 0x40);
    if (plVar6 != (long *)0x0) {
      FUN_00755c20(1,plVar6 + 1);
    }
    local_48 = *(long *)(lVar3 + 8);
    local_40 = *(long **)(lVar3 + 0x10);
    if (local_40 != (long *)0x0) {
      FUN_00755c20(1,local_40 + 1);
    }
    if ((plVar6 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar6 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_0071245c(plVar6);
    }
    plVar6 = local_40;
    lVar2 = local_48;
    if (local_48 != 0) {
      if ((local_40 != (long *)0x0) &&
         (lVar3 = FUN_00755c50(0xffffffffffffffff,local_40 + 1), lVar3 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0071245c(plVar6);
      }
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return lVar2;
      }
      goto LAB_0036248c;
    }
  }
  uVar4 = FUN_00753a74(0x10);
                    /* try { // try from 003623a0 to 003623af has its CatchHandler @ 00362460 */
  FUN_00714534(auStack_78,"ERROR DATA With Key: ",param_2);
                    /* try { // try from 003623b0 to 003623bf has its CatchHandler @ 00362448 */
  puVar5 = (undefined8 *)FUN_00713bdc(auStack_78,"doesn\'t exists");
  local_50 = puVar5[2];
  uStack_58 = puVar5[1];
  local_60 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
                    /* try { // try from 003623dc to 00362413 has its CatchHandler @ 00362414 */
  FUN_0071259c(uVar4,&local_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar4,PTR_PTR_007a0f38,PTR_FUN_007a0f40);
  }
LAB_0036248c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00362490  FUN_00362490 =====

long FUN_00362490(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00361218();
  if (((param_1 + 8 == lVar2) || (*(long *)(lVar2 + 0x38) == 0)) ||
     (lVar3 = FUN_0073a738(*(long *)(lVar2 + 0x38),PTR_PTR_007a16b8,PTR_PTR_007a16d0,0), lVar3 == 0)
     ) {
    local_48 = 0;
    local_40 = (long *)0x0;
  }
  else {
    plVar6 = *(long **)(lVar2 + 0x40);
    if (plVar6 != (long *)0x0) {
      FUN_00755c20(1,plVar6 + 1);
    }
    local_48 = *(long *)(lVar3 + 8);
    local_40 = *(long **)(lVar3 + 0x10);
    if (local_40 != (long *)0x0) {
      FUN_00755c20(1,local_40 + 1);
    }
    if ((plVar6 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar6 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_0071245c(plVar6);
    }
    plVar6 = local_40;
    lVar2 = local_48;
    if (local_48 != 0) {
      if ((local_40 != (long *)0x0) &&
         (lVar3 = FUN_00755c50(0xffffffffffffffff,local_40 + 1), lVar3 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0071245c(plVar6);
      }
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return lVar2;
      }
      goto LAB_003626ac;
    }
  }
  uVar4 = FUN_00753a74(0x10);
                    /* try { // try from 003625c0 to 003625cf has its CatchHandler @ 00362680 */
  FUN_00714534(auStack_78,"ERROR DATA With Key: ",param_2);
                    /* try { // try from 003625d0 to 003625df has its CatchHandler @ 00362668 */
  puVar5 = (undefined8 *)FUN_00713bdc(auStack_78,"doesn\'t exists");
  local_50 = puVar5[2];
  uStack_58 = puVar5[1];
  local_60 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
                    /* try { // try from 003625fc to 00362633 has its CatchHandler @ 00362634 */
  FUN_0071259c(uVar4,&local_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar4,PTR_PTR_007a0f38,PTR_FUN_007a0f40);
  }
LAB_003626ac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003626b0  FUN_003626b0 =====

long FUN_003626b0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00361218();
  if (((param_1 + 8 == lVar2) || (*(long *)(lVar2 + 0x38) == 0)) ||
     (lVar3 = FUN_0073a738(*(long *)(lVar2 + 0x38),PTR_PTR_007a16b8,PTR_PTR_007a16d8,0), lVar3 == 0)
     ) {
    local_48 = 0;
    local_40 = (long *)0x0;
  }
  else {
    plVar6 = *(long **)(lVar2 + 0x40);
    if (plVar6 != (long *)0x0) {
      FUN_00755c20(1,plVar6 + 1);
    }
    local_48 = *(long *)(lVar3 + 8);
    local_40 = *(long **)(lVar3 + 0x10);
    if (local_40 != (long *)0x0) {
      FUN_00755c20(1,local_40 + 1);
    }
    if ((plVar6 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar6 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_0071245c(plVar6);
    }
    plVar6 = local_40;
    lVar2 = local_48;
    if (local_48 != 0) {
      if ((local_40 != (long *)0x0) &&
         (lVar3 = FUN_00755c50(0xffffffffffffffff,local_40 + 1), lVar3 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0071245c(plVar6);
      }
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return lVar2;
      }
      goto LAB_003628cc;
    }
  }
  uVar4 = FUN_00753a74(0x10);
                    /* try { // try from 003627e0 to 003627ef has its CatchHandler @ 003628a0 */
  FUN_00714534(auStack_78,"ERROR DATA With Key: ",param_2);
                    /* try { // try from 003627f0 to 003627ff has its CatchHandler @ 00362888 */
  puVar5 = (undefined8 *)FUN_00713bdc(auStack_78,"doesn\'t exists");
  local_50 = puVar5[2];
  uStack_58 = puVar5[1];
  local_60 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
                    /* try { // try from 0036281c to 00362853 has its CatchHandler @ 00362854 */
  FUN_0071259c(uVar4,&local_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar4,PTR_PTR_007a0f38,PTR_FUN_007a0f40);
  }
LAB_003628cc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003628d0  FUN_003628d0 =====

long FUN_003628d0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00361218();
  if (((param_1 + 8 == lVar2) || (*(long *)(lVar2 + 0x38) == 0)) ||
     (lVar3 = FUN_0073a738(*(long *)(lVar2 + 0x38),PTR_PTR_007a16b8,PTR_PTR_007a16e0,0), lVar3 == 0)
     ) {
    local_48 = 0;
    local_40 = (long *)0x0;
  }
  else {
    plVar6 = *(long **)(lVar2 + 0x40);
    if (plVar6 != (long *)0x0) {
      FUN_00755c20(1,plVar6 + 1);
    }
    local_48 = *(long *)(lVar3 + 8);
    local_40 = *(long **)(lVar3 + 0x10);
    if (local_40 != (long *)0x0) {
      FUN_00755c20(1,local_40 + 1);
    }
    if ((plVar6 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar6 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_0071245c(plVar6);
    }
    plVar6 = local_40;
    lVar2 = local_48;
    if (local_48 != 0) {
      if ((local_40 != (long *)0x0) &&
         (lVar3 = FUN_00755c50(0xffffffffffffffff,local_40 + 1), lVar3 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0071245c(plVar6);
      }
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return lVar2;
      }
      goto LAB_00362aec;
    }
  }
  uVar4 = FUN_00753a74(0x10);
                    /* try { // try from 00362a00 to 00362a0f has its CatchHandler @ 00362ac0 */
  FUN_00714534(auStack_78,"ERROR DATA With Key: ",param_2);
                    /* try { // try from 00362a10 to 00362a1f has its CatchHandler @ 00362aa8 */
  puVar5 = (undefined8 *)FUN_00713bdc(auStack_78,"doesn\'t exists");
  local_50 = puVar5[2];
  uStack_58 = puVar5[1];
  local_60 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
                    /* try { // try from 00362a3c to 00362a73 has its CatchHandler @ 00362a74 */
  FUN_0071259c(uVar4,&local_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar4,PTR_PTR_007a0f38,PTR_FUN_007a0f40);
  }
LAB_00362aec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00362af0  _INIT_20 =====

void _INIT_20(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_FUN_007a13a0;
  DAT_007ab438 = 0x18;
  DAT_007ab445 = 0;
  DAT_007ab441 = 0x7261656e;
  DAT_007ab439 = s_WeightLinear_001e28fd._0_8_;
  __cxa_atexit(PTR_FUN_007a13a0,&DAT_007ab438,&PTR_LOOP_0075ec90);
  DAT_007ab450 = 0x14;
  DAT_007ab459 = 0x7261;
  DAT_007ab45b = 0;
  DAT_007ab451._0_1_ = s_BaesLinear_001e8beb[0];
  DAT_007ab451._1_1_ = s_BaesLinear_001e8beb[1];
  DAT_007ab451._2_1_ = s_BaesLinear_001e8beb[2];
  DAT_007ab451._3_1_ = s_BaesLinear_001e8beb[3];
  DAT_007ab451._4_1_ = s_BaesLinear_001e8beb[4];
  DAT_007ab451._5_1_ = s_BaesLinear_001e8beb[5];
  DAT_007ab451._6_1_ = s_BaesLinear_001e8beb[6];
  DAT_007ab451._7_1_ = s_BaesLinear_001e8beb[7];
  __cxa_atexit(puVar1,&DAT_007ab450,&PTR_LOOP_0075ec90);
  DAT_007ab468 = 0x1e;
  DAT_007ab478 = 0;
  DAT_007ab469._0_1_ = s_WeightNonLinear_001eedc5[0];
  DAT_007ab469._1_1_ = s_WeightNonLinear_001eedc5[1];
  DAT_007ab469._2_1_ = s_WeightNonLinear_001eedc5[2];
  DAT_007ab469._3_1_ = s_WeightNonLinear_001eedc5[3];
  DAT_007ab469._4_1_ = s_WeightNonLinear_001eedc5[4];
  DAT_007ab469._5_1_ = s_WeightNonLinear_001eedc5[5];
  DAT_007ab469._6_1_ = s_WeightNonLinear_001eedc5[6];
  DAT_007ab469._7_1_ = s_WeightNonLinear_001eedc5[7];
  uRam00000000007ab471._0_1_ = s_WeightNonLinear_001eedc5[8];
  uRam00000000007ab471._1_1_ = s_WeightNonLinear_001eedc5[9];
  uRam00000000007ab471._2_1_ = s_WeightNonLinear_001eedc5[10];
  uRam00000000007ab471._3_1_ = s_WeightNonLinear_001eedc5[0xb];
  uRam00000000007ab471._4_1_ = s_WeightNonLinear_001eedc5[0xc];
  uRam00000000007ab471._5_1_ = s_WeightNonLinear_001eedc5[0xd];
  uRam00000000007ab471._6_1_ = s_WeightNonLinear_001eedc5[0xe];
  __cxa_atexit(puVar1,&DAT_007ab468,&PTR_LOOP_0075ec90);
  DAT_007ab480 = 0x1a;
  DAT_007ab48e = 0;
  DAT_007ab481._0_1_ = s_BaesNonLinear_001c738a[0];
  DAT_007ab481._1_1_ = s_BaesNonLinear_001c738a[1];
  DAT_007ab481._2_1_ = s_BaesNonLinear_001c738a[2];
  DAT_007ab481._3_1_ = s_BaesNonLinear_001c738a[3];
  DAT_007ab481._4_1_ = s_BaesNonLinear_001c738a[4];
  DAT_007ab481._5_1_ = s_BaesNonLinear_001c738a[5];
  DAT_007ab481._6_1_ = s_BaesNonLinear_001c738a[6];
  DAT_007ab481._7_1_ = s_BaesNonLinear_001c738a[7];
  uRam00000000007ab489._0_1_ = s_BaesNonLinear_001c738a[8];
  uRam00000000007ab489._1_1_ = s_BaesNonLinear_001c738a[9];
  uRam00000000007ab489._2_1_ = s_BaesNonLinear_001c738a[10];
  uRam00000000007ab489._3_1_ = s_BaesNonLinear_001c738a[0xb];
  uRam00000000007ab489._4_1_ = s_BaesNonLinear_001c738a[0xc];
  __cxa_atexit(puVar1,&DAT_007ab480,&PTR_LOOP_0075ec90);
  DAT_007ab498 = 0x12;
  DAT_007ab4a1 = 0x55;
  DAT_007ab499._0_1_ = s_WeightGRU_001f94aa[0];
  DAT_007ab499._1_1_ = s_WeightGRU_001f94aa[1];
  DAT_007ab499._2_1_ = s_WeightGRU_001f94aa[2];
  DAT_007ab499._3_1_ = s_WeightGRU_001f94aa[3];
  DAT_007ab499._4_1_ = s_WeightGRU_001f94aa[4];
  DAT_007ab499._5_1_ = s_WeightGRU_001f94aa[5];
  DAT_007ab499._6_1_ = s_WeightGRU_001f94aa[6];
  DAT_007ab499._7_1_ = s_WeightGRU_001f94aa[7];
  __cxa_atexit(puVar1,&DAT_007ab498,&PTR_LOOP_0075ec90);
  DAT_007ab4b0 = 0xe;
  DAT_007ab4b1 = 0x73656142;
  uRam00000000007ab4b5 = 0x555247;
  DAT_007ab4b8 = 0;
  __cxa_atexit(puVar1,&DAT_007ab4b0,&PTR_LOOP_0075ec90);
  return;
}


// ===== 00362c5c  FUN_00362c5c =====

/* WARNING: Removing unreachable block (ram,0x00362d4c) */
/* WARNING: Removing unreachable block (ram,0x00362ff8) */
/* WARNING: Removing unreachable block (ram,0x00363044) */
/* WARNING: Removing unreachable block (ram,0x00363090) */
/* WARNING: Removing unreachable block (ram,0x00363b1c) */
/* WARNING: Removing unreachable block (ram,0x00363b60) */
/* WARNING: Removing unreachable block (ram,0x00363ba4) */
/* WARNING: Removing unreachable block (ram,0x00363be8) */
/* WARNING: Removing unreachable block (ram,0x00363c34) */
/* WARNING: Removing unreachable block (ram,0x00363c80) */
/* WARNING: Removing unreachable block (ram,0x00363d20) */
/* WARNING: Removing unreachable block (ram,0x00363d6c) */
/* WARNING: Removing unreachable block (ram,0x00363db0) */
/* WARNING: Removing unreachable block (ram,0x00363df4) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00362c5c(long param_1,undefined8 param_2)

{
  void *pvVar1;
  ulong uVar2;
  void *pvVar3;
  undefined *puVar4;
  size_t sVar5;
  size_t sVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  byte bVar10;
  byte bVar11;
  undefined8 uVar12;
  void *pvVar13;
  uint uVar14;
  undefined8 local_100;
  ulong local_f8;
  void *local_f0;
  undefined8 local_e8;
  ulong local_e0;
  void *local_d8;
  undefined8 local_d0;
  ulong local_c8;
  void *local_c0;
  undefined8 local_b8;
  ulong local_b0;
  void *local_a8;
  undefined8 local_a0;
  ulong local_98;
  void *local_90;
  undefined8 local_88;
  ulong local_80;
  void *local_78;
  long local_70;
  
  bVar11 = (byte)DAT_007ab618;
  bVar10 = DAT_007ab4c8;
  lVar9 = tpidr_el0;
  local_70 = *(long *)(lVar9 + 0x28);
  sVar5 = (ulong)(DAT_007ab4c8 >> 1);
  if ((DAT_007ab4c8 & 1) != 0) {
    sVar5 = ram0x007ab4d0;
  }
  sVar6 = (ulong)((byte)DAT_007ab618 >> 1);
  if (((byte)DAT_007ab618 & 1) != 0) {
    sVar6 = DAT_007ab620;
  }
  uVar2 = sVar6 + sVar5;
  if (uVar2 < 0xfffffffffffffff8) {
    if (uVar2 < 0x17) {
      local_80 = 0;
      local_78 = (void *)0x0;
      local_88 = (ulong)(byte)(((uint)uVar2 & 0xff) << 1);
      pvVar13 = (void *)((long)&local_88 + 1);
    }
    else {
      uVar8 = (uVar2 & 0xfffffffffffffff8) + 8;
      if ((uVar2 | 7) != 0x17) {
        uVar8 = uVar2 | 7;
      }
      pvVar13 = (void *)FUN_00759c3c(uVar8 + 1);
      local_88 = uVar8 + 1 | 1;
      local_80 = uVar2;
      local_78 = pvVar13;
    }
    if (sVar5 != 0) {
      puVar7 = &DAT_007ab4c9;
      if ((bVar10 & 1) != 0) {
        puVar7 = DAT_007ab4d8;
      }
      memmove(pvVar13,puVar7,sVar5);
    }
    pvVar1 = (void *)((long)&DAT_007ab618 + 1);
    if (sVar6 != 0) {
      pvVar3 = pvVar1;
      if ((bVar11 & 1) != 0) {
        pvVar3 = DAT_007ab628;
      }
      memmove((void *)((long)pvVar13 + sVar5),pvVar3,sVar6);
    }
    bVar10 = DAT_007ab5d0;
    *(undefined1 *)((long)((long)pvVar13 + sVar5) + sVar6) = 0;
    sVar5 = (ulong)(DAT_007ab5d0 >> 1);
    if ((DAT_007ab5d0 & 1) != 0) {
      sVar5 = ram0x007ab5d8;
    }
    uVar2 = sVar5 + sVar6;
    if (uVar2 < 0xfffffffffffffff8) {
      if (uVar2 < 0x17) {
        local_98 = 0;
        local_90 = (void *)0x0;
        local_a0 = (ulong)(byte)(((uint)uVar2 & 0xff) << 1);
        pvVar13 = (void *)((long)&local_a0 + 1);
      }
      else {
        uVar8 = (uVar2 & 0xfffffffffffffff8) + 8;
        if ((uVar2 | 7) != 0x17) {
          uVar8 = uVar2 | 7;
        }
                    /* try { // try from 00362fd0 to 00362fd7 has its CatchHandler @ 003641f4 */
        pvVar13 = (void *)FUN_00759c3c(uVar8 + 1);
        local_a0 = uVar8 + 1 | 1;
        local_98 = uVar2;
        local_90 = pvVar13;
      }
      if (sVar5 != 0) {
        puVar7 = &DAT_007ab5d1;
        if ((bVar10 & 1) != 0) {
          puVar7 = DAT_007ab5e0;
        }
        memmove(pvVar13,puVar7,sVar5);
      }
      if (sVar6 != 0) {
        pvVar3 = pvVar1;
        if ((bVar11 & 1) != 0) {
          pvVar3 = DAT_007ab628;
        }
        memmove((void *)((long)pvVar13 + sVar5),pvVar3,sVar6);
      }
      bVar10 = DAT_007ab4e0;
      *(undefined1 *)((long)((long)pvVar13 + sVar5) + sVar6) = 0;
      sVar5 = (ulong)(DAT_007ab4e0 >> 1);
      if ((DAT_007ab4e0 & 1) != 0) {
        sVar5 = DAT_007ab4e8;
      }
      uVar2 = sVar5 + sVar6;
      if (uVar2 < 0xfffffffffffffff8) {
        if (uVar2 < 0x17) {
          local_b0 = 0;
          local_a8 = (void *)0x0;
          local_b8 = (ulong)(byte)(((uint)uVar2 & 0xff) << 1);
          pvVar13 = (void *)((long)&local_b8 + 1);
        }
        else {
          uVar8 = (uVar2 & 0xfffffffffffffff8) + 8;
          if ((uVar2 | 7) != 0x17) {
            uVar8 = uVar2 | 7;
          }
                    /* try { // try from 0036301c to 00363023 has its CatchHandler @ 003641e4 */
          pvVar13 = (void *)FUN_00759c3c(uVar8 + 1);
          local_b8 = uVar8 + 1 | 1;
          local_b0 = uVar2;
          local_a8 = pvVar13;
        }
        if (sVar5 != 0) {
          puVar4 = &DAT_007ab4e1;
          if ((bVar10 & 1) != 0) {
            puVar4 = DAT_007ab4f0;
          }
          memmove(pvVar13,puVar4,sVar5);
        }
        if (sVar6 != 0) {
          pvVar3 = pvVar1;
          if ((bVar11 & 1) != 0) {
            pvVar3 = DAT_007ab628;
          }
          memmove((void *)((long)pvVar13 + sVar5),pvVar3,sVar6);
        }
        bVar10 = DAT_007ab5e8;
        *(undefined1 *)((long)((long)pvVar13 + sVar5) + sVar6) = 0;
        sVar5 = (ulong)(DAT_007ab5e8 >> 1);
        if ((DAT_007ab5e8 & 1) != 0) {
          sVar5 = ram0x007ab5f0;
        }
        uVar2 = sVar5 + sVar6;
        if (uVar2 < 0xfffffffffffffff8) {
          if (uVar2 < 0x17) {
            local_c8 = 0;
            local_c0 = (void *)0x0;
            local_d0 = (ulong)(byte)(((uint)uVar2 & 0xff) << 1);
            pvVar13 = (void *)((long)&local_d0 + 1);
          }
          else {
            uVar8 = (uVar2 & 0xfffffffffffffff8) + 8;
            if ((uVar2 | 7) != 0x17) {
              uVar8 = uVar2 | 7;
            }
                    /* try { // try from 00363068 to 0036306f has its CatchHandler @ 003641d4 */
            pvVar13 = (void *)FUN_00759c3c(uVar8 + 1);
            local_d0 = uVar8 + 1 | 1;
            local_c8 = uVar2;
            local_c0 = pvVar13;
          }
          if (sVar5 != 0) {
            puVar7 = &DAT_007ab5e9;
            if ((bVar10 & 1) != 0) {
              puVar7 = DAT_007ab5f8;
            }
            memmove(pvVar13,puVar7,sVar5);
          }
          if (sVar6 != 0) {
            if ((bVar11 & 1) != 0) {
              pvVar1 = DAT_007ab628;
            }
            memmove((void *)((long)pvVar13 + sVar5),pvVar1,sVar6);
          }
          bVar10 = DAT_007ab4f8;
          *(undefined1 *)((long)((long)pvVar13 + sVar5) + sVar6) = 0;
          sVar5 = (ulong)(DAT_007ab4f8 >> 1);
          if ((DAT_007ab4f8 & 1) != 0) {
            sVar5 = ram0x007ab500;
          }
          uVar2 = sVar5 + sVar6;
          if (uVar2 < 0xfffffffffffffff8) {
            if (uVar2 < 0x17) {
              local_e0 = 0;
              uVar14 = ((uint)uVar2 & 0xff) << 1;
              local_d8 = (void *)0x0;
              local_e8 = (ulong)(byte)uVar14;
            }
            else {
              uVar8 = (uVar2 & 0xfffffffffffffff8) + 8;
              if ((uVar2 | 7) != 0x17) {
                uVar8 = uVar2 | 7;
              }
                    /* try { // try from 003630b4 to 003630bb has its CatchHandler @ 00364178 */
              local_d8 = (void *)FUN_00759c3c(uVar8 + 1);
              local_e8 = uVar8 + 1 | 1;
              uVar14 = (uint)local_e8 & 0xff;
              local_e0 = uVar2;
            }
            pvVar13 = local_d8;
            if ((uVar14 & 1) == 0) {
              pvVar13 = (void *)((long)&local_e8 + 1);
            }
            if (sVar5 != 0) {
              puVar7 = &DAT_007ab4f9;
              if ((bVar10 & 1) != 0) {
                puVar7 = DAT_007ab508;
              }
              memmove(pvVar13,puVar7,sVar5);
            }
            if (sVar6 != 0) {
              pvVar1 = (void *)((long)&DAT_007ab618 + 1);
              if ((bVar11 & 1) != 0) {
                pvVar1 = DAT_007ab628;
              }
              memmove((void *)((long)pvVar13 + sVar5),pvVar1,sVar6);
            }
            bVar10 = DAT_007ab600;
            *(undefined1 *)((long)((long)pvVar13 + sVar5) + sVar6) = 0;
            sVar5 = (ulong)(DAT_007ab600 >> 1);
            if ((DAT_007ab600 & 1) != 0) {
              sVar5 = ram0x007ab608;
            }
            uVar2 = sVar5 + sVar6;
            if (uVar2 < 0xfffffffffffffff8) {
              if (uVar2 < 0x17) {
                local_f8 = 0;
                uVar14 = ((uint)uVar2 & 0xff) << 1;
                local_f0 = (void *)0x0;
                local_100 = (ulong)(byte)uVar14;
              }
              else {
                uVar8 = (uVar2 & 0xfffffffffffffff8) + 8;
                if ((uVar2 | 7) != 0x17) {
                  uVar8 = uVar2 | 7;
                }
                    /* try { // try from 00363190 to 00363197 has its CatchHandler @ 00364158 */
                local_f0 = (void *)FUN_00759c3c(uVar8 + 1);
                local_100 = uVar8 + 1 | 1;
                uVar14 = (uint)local_100 & 0xff;
                local_f8 = uVar2;
              }
              pvVar13 = local_f0;
              if ((uVar14 & 1) == 0) {
                pvVar13 = (void *)((long)&local_100 + 1);
              }
              if (sVar5 != 0) {
                puVar7 = &DAT_007ab601;
                if ((bVar10 & 1) != 0) {
                  puVar7 = DAT_007ab610;
                }
                memmove(pvVar13,puVar7,sVar5);
              }
              if (sVar6 != 0) {
                pvVar1 = (void *)((long)&DAT_007ab618 + 1);
                if ((bVar11 & 1) != 0) {
                  pvVar1 = DAT_007ab628;
                }
                memmove((void *)((long)pvVar13 + sVar5),pvVar1,sVar6);
              }
              *(undefined1 *)((long)((long)pvVar13 + sVar5) + sVar6) = 0;
                    /* try { // try from 00363208 to 0036322b has its CatchHandler @ 00364030 */
              FUN_00361f40(param_1,param_2,&local_88,&local_a0,&local_b8,&local_d0,&local_e8,
                           &local_100);
              if ((local_100 & 1) != 0) {
                free(local_f0);
              }
              if ((local_e8 & 1) != 0) {
                free(local_d8);
              }
              if ((local_d0 & 1) != 0) {
                free(local_c0);
              }
              if ((local_b8 & 1) != 0) {
                free(local_a8);
              }
              if ((local_a0 & 1) != 0) {
                free(local_90);
              }
              if ((local_88 & 1) != 0) {
                free(local_78);
              }
              bVar11 = (byte)DAT_007ab630;
              bVar10 = DAT_007ab4c8;
              sVar5 = (ulong)(DAT_007ab4c8 >> 1);
              if ((DAT_007ab4c8 & 1) != 0) {
                sVar5 = ram0x007ab4d0;
              }
              sVar6 = (ulong)((byte)DAT_007ab630 >> 1);
              if (((byte)DAT_007ab630 & 1) != 0) {
                sVar6 = DAT_007ab638;
              }
              uVar2 = sVar6 + sVar5;
              if (uVar2 < 0xfffffffffffffff8) {
                if (uVar2 < 0x17) {
                  local_80 = 0;
                  local_78 = (void *)0x0;
                  local_88 = (ulong)(byte)(((uint)uVar2 & 0xff) << 1);
                  pvVar13 = (void *)((long)&local_88 + 1);
                }
                else {
                  uVar8 = (uVar2 & 0xfffffffffffffff8) + 8;
                  if ((uVar2 | 7) != 0x17) {
                    uVar8 = uVar2 | 7;
                  }
                    /* try { // try from 00363afc to 00363b03 has its CatchHandler @ 00364150 */
                  pvVar13 = (void *)FUN_00759c3c(uVar8 + 1);
                  local_88 = uVar8 + 1 | 1;
                  local_80 = uVar2;
                  local_78 = pvVar13;
                }
                if (sVar5 != 0) {
                  puVar7 = &DAT_007ab4c9;
                  if ((bVar10 & 1) != 0) {
                    puVar7 = DAT_007ab4d8;
                  }
                  memmove(pvVar13,puVar7,sVar5);
                }
                if (sVar6 != 0) {
                  pvVar1 = (void *)((long)&DAT_007ab630 + 1);
                  if ((bVar11 & 1) != 0) {
                    pvVar1 = DAT_007ab640;
                  }
                  memmove((void *)((long)pvVar13 + sVar5),pvVar1,sVar6);
                }
                bVar10 = DAT_007ab5d0;
                *(undefined1 *)((long)((long)pvVar13 + sVar5) + sVar6) = 0;
                sVar5 = (ulong)(DAT_007ab5d0 >> 1);
                if ((DAT_007ab5d0 & 1) != 0) {
                  sVar5 = ram0x007ab5d8;
                }
                uVar2 = sVar5 + sVar6;
                if (uVar2 < 0xfffffffffffffff8) {
                  if (uVar2 < 0x17) {
                    local_98 = 0;
                    local_90 = (void *)0x0;
                    local_a0 = (ulong)(byte)(((uint)uVar2 & 0xff) << 1);
                    pvVar13 = (void *)((long)&local_a0 + 1);
                  }
                  else {
                    uVar8 = (uVar2 & 0xfffffffffffffff8) + 8;
                    if ((uVar2 | 7) != 0x17) {
                      uVar8 = uVar2 | 7;
                    }
                    /* try { // try from 00363b40 to 00363b47 has its CatchHandler @ 00364138 */
                    pvVar13 = (void *)FUN_00759c3c(uVar8 + 1);
                    local_a0 = uVar8 + 1 | 1;
                    local_98 = uVar2;
                    local_90 = pvVar13;
                  }
                  if (sVar5 != 0) {
                    puVar7 = &DAT_007ab5d1;
                    if ((bVar10 & 1) != 0) {
                      puVar7 = DAT_007ab5e0;
                    }
                    memmove(pvVar13,puVar7,sVar5);
                  }
                  if (sVar6 != 0) {
                    pvVar1 = (void *)((long)&DAT_007ab630 + 1);
                    if ((bVar11 & 1) != 0) {
                      pvVar1 = DAT_007ab640;
                    }
                    memmove((void *)((long)pvVar13 + sVar5),pvVar1,sVar6);
                  }
                  bVar10 = DAT_007ab4e0;
                  *(undefined1 *)((long)((long)pvVar13 + sVar5) + sVar6) = 0;
                  sVar5 = (ulong)(DAT_007ab4e0 >> 1);
                  if ((DAT_007ab4e0 & 1) != 0) {
                    sVar5 = DAT_007ab4e8;
                  }
                  uVar2 = sVar5 + sVar6;
                  if (uVar2 < 0xfffffffffffffff8) {
                    if (uVar2 < 0x17) {
                      local_b0 = 0;
                      local_a8 = (void *)0x0;
                      local_b8 = (ulong)(byte)(((uint)uVar2 & 0xff) << 1);
                      pvVar13 = (void *)((long)&local_b8 + 1);
                    }
                    else {
                      uVar8 = (uVar2 & 0xfffffffffffffff8) + 8;
                      if ((uVar2 | 7) != 0x17) {
                        uVar8 = uVar2 | 7;
                      }
                    /* try { // try from 00363b84 to 00363b8b has its CatchHandler @ 00364128 */
                      pvVar13 = (void *)FUN_00759c3c(uVar8 + 1);
                      local_b8 = uVar8 + 1 | 1;
                      local_b0 = uVar2;
                      local_a8 = pvVar13;
                    }
                    if (sVar5 != 0) {
                      puVar4 = &DAT_007ab4e1;
                      if ((bVar10 & 1) != 0) {
                        puVar4 = DAT_007ab4f0;
                      }
                      memmove(pvVar13,puVar4,sVar5);
                    }
                    if (sVar6 != 0) {
                      pvVar1 = (void *)((long)&DAT_007ab630 + 1);
                      if ((bVar11 & 1) != 0) {
                        pvVar1 = DAT_007ab640;
                      }
                      memmove((void *)((long)pvVar13 + sVar5),pvVar1,sVar6);
                    }
                    bVar10 = DAT_007ab5e8;
                    *(undefined1 *)((long)((long)pvVar13 + sVar5) + sVar6) = 0;
                    sVar5 = (ulong)(DAT_007ab5e8 >> 1);
                    if ((DAT_007ab5e8 & 1) != 0) {
                      sVar5 = ram0x007ab5f0;
                    }
                    uVar2 = sVar5 + sVar6;
                    if (uVar2 < 0xfffffffffffffff8) {
                      if (uVar2 < 0x17) {
                        local_c8 = 0;
                        local_c0 = (void *)0x0;
                        local_d0 = (ulong)(byte)(((uint)uVar2 & 0xff) << 1);
                        pvVar13 = (void *)((long)&local_d0 + 1);
                      }
                      else {
                        uVar8 = (uVar2 & 0xfffffffffffffff8) + 8;
                        if ((uVar2 | 7) != 0x17) {
                          uVar8 = uVar2 | 7;
                        }
                    /* try { // try from 00363bc8 to 00363bcf has its CatchHandler @ 00364118 */
                        pvVar13 = (void *)FUN_00759c3c(uVar8 + 1);
                        local_d0 = uVar8 + 1 | 1;
                        local_c8 = uVar2;
                        local_c0 = pvVar13;
                      }
                      if (sVar5 != 0) {
                        puVar7 = &DAT_007ab5e9;
                        if ((bVar10 & 1) != 0) {
                          puVar7 = DAT_007ab5f8;
                        }
                        memmove(pvVar13,puVar7,sVar5);
                      }
                      if (sVar6 != 0) {
                        pvVar1 = (void *)((long)&DAT_007ab630 + 1);
                        if ((bVar11 & 1) != 0) {
                          pvVar1 = DAT_007ab640;
                        }
                        memmove((void *)((long)pvVar13 + sVar5),pvVar1,sVar6);
                      }
                      bVar10 = DAT_007ab4f8;
                      *(undefined1 *)((long)((long)pvVar13 + sVar5) + sVar6) = 0;
                      sVar5 = (ulong)(DAT_007ab4f8 >> 1);
                      if ((DAT_007ab4f8 & 1) != 0) {
                        sVar5 = ram0x007ab500;
                      }
                      uVar2 = sVar5 + sVar6;
                      if (uVar2 < 0xfffffffffffffff8) {
                        if (uVar2 < 0x17) {
                          local_e0 = 0;
                          local_d8 = (void *)0x0;
                          local_e8 = (ulong)(byte)(((uint)uVar2 & 0xff) << 1);
                          pvVar13 = (void *)((long)&local_e8 + 1);
                        }
                        else {
                          uVar8 = (uVar2 & 0xfffffffffffffff8) + 8;
                          if ((uVar2 | 7) != 0x17) {
                            uVar8 = uVar2 | 7;
                          }
                    /* try { // try from 00363c0c to 00363c13 has its CatchHandler @ 003640d8 */
                          pvVar13 = (void *)FUN_00759c3c(uVar8 + 1);
                          local_e8 = uVar8 + 1 | 1;
                          local_e0 = uVar2;
                          local_d8 = pvVar13;
                        }
                        if (sVar5 != 0) {
                          puVar7 = &DAT_007ab4f9;
                          if ((bVar10 & 1) != 0) {
                            puVar7 = DAT_007ab508;
                          }
                          memmove(pvVar13,puVar7,sVar5);
                        }
                        if (sVar6 != 0) {
                          pvVar1 = (void *)((long)&DAT_007ab630 + 1);
                          if ((bVar11 & 1) != 0) {
                            pvVar1 = DAT_007ab640;
                          }
                          memmove((void *)((long)pvVar13 + sVar5),pvVar1,sVar6);
                        }
                        bVar10 = DAT_007ab600;
                        *(undefined1 *)((long)((long)pvVar13 + sVar5) + sVar6) = 0;
                        sVar5 = (ulong)(DAT_007ab600 >> 1);
                        if ((DAT_007ab600 & 1) != 0) {
                          sVar5 = ram0x007ab608;
                        }
                        uVar2 = sVar5 + sVar6;
                        if (uVar2 < 0xfffffffffffffff8) {
                          if (uVar2 < 0x17) {
                            local_f8 = 0;
                            local_f0 = (void *)0x0;
                            local_100 = (ulong)(byte)(((uint)uVar2 & 0xff) << 1);
                            pvVar13 = (void *)((long)&local_100 + 1);
                          }
                          else {
                            uVar8 = (uVar2 & 0xfffffffffffffff8) + 8;
                            if ((uVar2 | 7) != 0x17) {
                              uVar8 = uVar2 | 7;
                            }
                    /* try { // try from 00363c58 to 00363c5f has its CatchHandler @ 003640b8 */
                            pvVar13 = (void *)FUN_00759c3c(uVar8 + 1);
                            local_100 = uVar8 + 1 | 1;
                            local_f8 = uVar2;
                            local_f0 = pvVar13;
                          }
                          if (sVar5 != 0) {
                            puVar7 = &DAT_007ab601;
                            if ((bVar10 & 1) != 0) {
                              puVar7 = DAT_007ab610;
                            }
                            memmove(pvVar13,puVar7,sVar5);
                          }
                          if (sVar6 != 0) {
                            pvVar1 = (void *)((long)&DAT_007ab630 + 1);
                            if ((bVar11 & 1) != 0) {
                              pvVar1 = DAT_007ab640;
                            }
                            memmove((void *)((long)pvVar13 + sVar5),pvVar1,sVar6);
                          }
                          *(undefined1 *)((long)((long)pvVar13 + sVar5) + sVar6) = 0;
                    /* try { // try from 00363638 to 0036365b has its CatchHandler @ 00363fe4 */
                          FUN_00361f40(param_1 + 0xa0,param_2,&local_88,&local_a0,&local_b8,
                                       &local_d0,&local_e8,&local_100);
                          if ((local_100 & 1) != 0) {
                            free(local_f0);
                          }
                          if ((local_e8 & 1) != 0) {
                            free(local_d8);
                          }
                          if ((local_d0 & 1) != 0) {
                            free(local_c0);
                          }
                          if ((local_b8 & 1) != 0) {
                            free(local_a8);
                          }
                          if ((local_a0 & 1) != 0) {
                            free(local_90);
                          }
                          if ((local_88 & 1) != 0) {
                            free(local_78);
                          }
                    /* try { // try from 00363694 to 003636df has its CatchHandler @ 00364204 */
                          uVar12 = FUN_00362490(param_2,&DAT_007ab510);
                          *(undefined8 *)(param_1 + 0x140) = uVar12;
                          uVar12 = FUN_00362490(param_2,&DAT_007ab528);
                          *(undefined8 *)(param_1 + 0x148) = uVar12;
                          uVar12 = FUN_00362490(param_2,&DAT_007ab540);
                          *(undefined8 *)(param_1 + 0x150) = uVar12;
                          uVar12 = FUN_00362490(param_2,&DAT_007ab558);
                          *(undefined8 *)(param_1 + 0x158) = uVar12;
                          bVar11 = (byte)DAT_007ab618;
                          bVar10 = DAT_007ab570;
                          sVar5 = (ulong)(DAT_007ab570 >> 1);
                          if ((DAT_007ab570 & 1) != 0) {
                            sVar5 = DAT_007ab578;
                          }
                          sVar6 = (ulong)((byte)DAT_007ab618 >> 1);
                          if (((byte)DAT_007ab618 & 1) != 0) {
                            sVar6 = DAT_007ab620;
                          }
                          uVar2 = sVar6 + sVar5;
                          if (uVar2 < 0xfffffffffffffff8) {
                            if (uVar2 < 0x17) {
                              local_80 = 0;
                              local_78 = (void *)0x0;
                              local_88 = (ulong)(byte)(((uint)uVar2 & 0xff) << 1);
                              pvVar13 = (void *)((long)&local_88 + 1);
                            }
                            else {
                              uVar8 = (uVar2 & 0xfffffffffffffff8) + 8;
                              if ((uVar2 | 7) != 0x17) {
                                uVar8 = uVar2 | 7;
                              }
                    /* try { // try from 00363cf8 to 00363cff has its CatchHandler @ 003640b4 */
                              pvVar13 = (void *)FUN_00759c3c(uVar8 + 1);
                              local_88 = uVar8 + 1 | 1;
                              local_80 = uVar2;
                              local_78 = pvVar13;
                            }
                            if (sVar5 != 0) {
                              puVar4 = &DAT_007ab571;
                              if ((bVar10 & 1) != 0) {
                                puVar4 = DAT_007ab580;
                              }
                              memmove(pvVar13,puVar4,sVar5);
                            }
                            if (sVar6 != 0) {
                              pvVar1 = (void *)((long)&DAT_007ab618 + 1);
                              if ((bVar11 & 1) != 0) {
                                pvVar1 = DAT_007ab628;
                              }
                              memmove((void *)((long)pvVar13 + sVar5),pvVar1,sVar6);
                            }
                            *(undefined1 *)((long)((long)pvVar13 + sVar5) + sVar6) = 0;
                    /* try { // try from 0036379c to 003637a7 has its CatchHandler @ 00363fe0 */
                            uVar12 = FUN_003626b0(param_2,&local_88);
                            bVar11 = (byte)DAT_007ab618;
                            bVar10 = DAT_007ab588;
                            sVar5 = (ulong)(DAT_007ab588 >> 1);
                            if ((DAT_007ab588 & 1) != 0) {
                              sVar5 = ram0x007ab590;
                            }
                            sVar6 = (ulong)((byte)DAT_007ab618 >> 1);
                            if (((byte)DAT_007ab618 & 1) != 0) {
                              sVar6 = DAT_007ab620;
                            }
                            uVar2 = sVar6 + sVar5;
                            *(undefined8 *)(param_1 + 0x160) = uVar12;
                            if (uVar2 < 0xfffffffffffffff8) {
                              if (uVar2 < 0x17) {
                                local_98 = 0;
                                local_90 = (void *)0x0;
                                local_a0 = (ulong)(byte)(((uint)uVar2 & 0xff) << 1);
                                pvVar13 = (void *)((long)&local_a0 + 1);
                              }
                              else {
                                uVar8 = (uVar2 & 0xfffffffffffffff8) + 8;
                                if ((uVar2 | 7) != 0x17) {
                                  uVar8 = uVar2 | 7;
                                }
                    /* try { // try from 00363d44 to 00363d4b has its CatchHandler @ 0036409c */
                                pvVar13 = (void *)FUN_00759c3c(uVar8 + 1);
                                local_a0 = uVar8 + 1 | 1;
                                local_98 = uVar2;
                                local_90 = pvVar13;
                              }
                              if (sVar5 != 0) {
                                puVar7 = &DAT_007ab589;
                                if ((bVar10 & 1) != 0) {
                                  puVar7 = DAT_007ab598;
                                }
                                memmove(pvVar13,puVar7,sVar5);
                              }
                              if (sVar6 != 0) {
                                pvVar1 = (void *)((long)&DAT_007ab618 + 1);
                                if ((bVar11 & 1) != 0) {
                                  pvVar1 = DAT_007ab628;
                                }
                                memmove((void *)((long)pvVar13 + sVar5),pvVar1,sVar6);
                              }
                              *(undefined1 *)((long)((long)pvVar13 + sVar5) + sVar6) = 0;
                    /* try { // try from 00363868 to 00363873 has its CatchHandler @ 00363fc8 */
                              uVar12 = FUN_003628d0(param_2,&local_a0);
                              *(undefined8 *)(param_1 + 0x168) = uVar12;
                              if ((local_a0 & 1) != 0) {
                                free(local_90);
                              }
                              if ((local_88 & 1) != 0) {
                                free(local_78);
                              }
                              bVar11 = (byte)DAT_007ab630;
                              bVar10 = DAT_007ab570;
                              sVar5 = (ulong)(DAT_007ab570 >> 1);
                              if ((DAT_007ab570 & 1) != 0) {
                                sVar5 = DAT_007ab578;
                              }
                              sVar6 = (ulong)((byte)DAT_007ab630 >> 1);
                              if (((byte)DAT_007ab630 & 1) != 0) {
                                sVar6 = DAT_007ab638;
                              }
                              uVar2 = sVar6 + sVar5;
                              if (uVar2 < 0xfffffffffffffff8) {
                                if (uVar2 < 0x17) {
                                  local_80 = 0;
                                  local_78 = (void *)0x0;
                                  local_88 = (ulong)(byte)(((uint)uVar2 & 0xff) << 1);
                                  pvVar13 = (void *)((long)&local_88 + 1);
                                }
                                else {
                                  uVar8 = (uVar2 & 0xfffffffffffffff8) + 8;
                                  if ((uVar2 | 7) != 0x17) {
                                    uVar8 = uVar2 | 7;
                                  }
                    /* try { // try from 00363d90 to 00363d97 has its CatchHandler @ 00364098 */
                                  pvVar13 = (void *)FUN_00759c3c(uVar8 + 1);
                                  local_88 = uVar8 + 1 | 1;
                                  local_80 = uVar2;
                                  local_78 = pvVar13;
                                }
                                if (sVar5 != 0) {
                                  puVar4 = &DAT_007ab571;
                                  if ((bVar10 & 1) != 0) {
                                    puVar4 = DAT_007ab580;
                                  }
                                  memmove(pvVar13,puVar4,sVar5);
                                }
                                if (sVar6 != 0) {
                                  pvVar1 = (void *)((long)&DAT_007ab630 + 1);
                                  if ((bVar11 & 1) != 0) {
                                    pvVar1 = DAT_007ab640;
                                  }
                                  memmove((void *)((long)pvVar13 + sVar5),pvVar1,sVar6);
                                }
                                *(undefined1 *)((long)((long)pvVar13 + sVar5) + sVar6) = 0;
                    /* try { // try from 00363944 to 0036394f has its CatchHandler @ 00363fc4 */
                                uVar12 = FUN_003626b0(param_2,&local_88);
                                bVar11 = (byte)DAT_007ab630;
                                bVar10 = DAT_007ab588;
                                sVar5 = (ulong)(DAT_007ab588 >> 1);
                                if ((DAT_007ab588 & 1) != 0) {
                                  sVar5 = ram0x007ab590;
                                }
                                sVar6 = (ulong)((byte)DAT_007ab630 >> 1);
                                if (((byte)DAT_007ab630 & 1) != 0) {
                                  sVar6 = DAT_007ab638;
                                }
                                uVar2 = sVar6 + sVar5;
                                *(undefined8 *)(param_1 + 0x170) = uVar12;
                                if (uVar2 < 0xfffffffffffffff8) {
                                  if (uVar2 < 0x17) {
                                    local_98 = 0;
                                    local_90 = (void *)0x0;
                                    local_a0 = (ulong)(byte)(((uint)uVar2 & 0xff) << 1);
                                    pvVar13 = (void *)((long)&local_a0 + 1);
                                  }
                                  else {
                                    uVar8 = (uVar2 & 0xfffffffffffffff8) + 8;
                                    if ((uVar2 | 7) != 0x17) {
                                      uVar8 = uVar2 | 7;
                                    }
                    /* try { // try from 00363dd4 to 00363ddb has its CatchHandler @ 00364094 */
                                    pvVar13 = (void *)FUN_00759c3c(uVar8 + 1);
                                    local_a0 = uVar8 + 1 | 1;
                                    local_98 = uVar2;
                                    local_90 = pvVar13;
                                  }
                                  if (sVar5 != 0) {
                                    puVar7 = &DAT_007ab589;
                                    if ((bVar10 & 1) != 0) {
                                      puVar7 = DAT_007ab598;
                                    }
                                    memmove(pvVar13,puVar7,sVar5);
                                  }
                                  if (sVar6 != 0) {
                                    pvVar1 = (void *)((long)&DAT_007ab630 + 1);
                                    if ((bVar11 & 1) != 0) {
                                      pvVar1 = DAT_007ab640;
                                    }
                                    memmove((void *)((long)pvVar13 + sVar5),pvVar1,sVar6);
                                  }
                                  *(undefined1 *)((long)((long)pvVar13 + sVar5) + sVar6) = 0;
                    /* try { // try from 00363a00 to 00363a0f has its CatchHandler @ 00363fc0 */
                                  uVar12 = FUN_003628d0(param_2,&local_a0);
                                  *(undefined8 *)(param_1 + 0x178) = uVar12;
                                  if ((local_a0 & 1) != 0) {
                                    free(local_90);
                                  }
                                  if ((local_88 & 1) != 0) {
                                    free(local_78);
                                  }
                    /* try { // try from 00363a34 to 00363a57 has its CatchHandler @ 00364204 */
                                  uVar12 = FUN_003626b0(param_2,&DAT_007ab5a0);
                                  *(undefined8 *)(param_1 + 0x180) = uVar12;
                                  uVar12 = FUN_003628d0(param_2,&DAT_007ab5b8);
                                  *(undefined8 *)(param_1 + 0x188) = uVar12;
                                  if (*(long *)(lVar9 + 0x28) == local_70) {
                                    return;
                                  }
                                }
                                else if (*(long *)(lVar9 + 0x28) == local_70) {
                    /* try { // try from 00363fb8 to 00363fbf has its CatchHandler @ 00364094 */
                    /* WARNING: Subroutine does not return */
                                  FUN_002fb400(&local_a0);
                                }
                              }
                              else if (*(long *)(lVar9 + 0x28) == local_70) {
                    /* try { // try from 00363f9c to 00363fa3 has its CatchHandler @ 00364098 */
                    /* WARNING: Subroutine does not return */
                                FUN_002fb400(&local_88);
                              }
                            }
                            else if (*(long *)(lVar9 + 0x28) == local_70) {
                    /* try { // try from 00363f80 to 00363f87 has its CatchHandler @ 0036409c */
                    /* WARNING: Subroutine does not return */
                              FUN_002fb400(&local_a0);
                            }
                          }
                          else if (*(long *)(lVar9 + 0x28) == local_70) {
                    /* try { // try from 00363f64 to 00363f6b has its CatchHandler @ 003640b4 */
                    /* WARNING: Subroutine does not return */
                            FUN_002fb400(&local_88);
                          }
                        }
                        else if (*(long *)(lVar9 + 0x28) == local_70) {
                    /* try { // try from 00363f48 to 00363f4f has its CatchHandler @ 003640b8 */
                    /* WARNING: Subroutine does not return */
                          FUN_002fb400(&local_100);
                        }
                      }
                      else if (*(long *)(lVar9 + 0x28) == local_70) {
                    /* try { // try from 00363f2c to 00363f33 has its CatchHandler @ 003640d8 */
                    /* WARNING: Subroutine does not return */
                        FUN_002fb400(&local_e8);
                      }
                    }
                    else if (*(long *)(lVar9 + 0x28) == local_70) {
                    /* try { // try from 00363f10 to 00363f17 has its CatchHandler @ 00364118 */
                    /* WARNING: Subroutine does not return */
                      FUN_002fb400(&local_d0);
                    }
                  }
                  else if (*(long *)(lVar9 + 0x28) == local_70) {
                    /* try { // try from 00363ef4 to 00363efb has its CatchHandler @ 00364128 */
                    /* WARNING: Subroutine does not return */
                    FUN_002fb400(&local_b8);
                  }
                }
                else if (*(long *)(lVar9 + 0x28) == local_70) {
                    /* try { // try from 00363ed8 to 00363edf has its CatchHandler @ 00364138 */
                    /* WARNING: Subroutine does not return */
                  FUN_002fb400(&local_a0);
                }
              }
              else if (*(long *)(lVar9 + 0x28) == local_70) {
                    /* try { // try from 00363ebc to 00363ec3 has its CatchHandler @ 00364150 */
                    /* WARNING: Subroutine does not return */
                FUN_002fb400(&local_88);
              }
            }
            else if (*(long *)(lVar9 + 0x28) == local_70) {
                    /* try { // try from 00363ea0 to 00363ea7 has its CatchHandler @ 00364158 */
                    /* WARNING: Subroutine does not return */
              FUN_002fb400(&local_100);
            }
          }
          else if (*(long *)(lVar9 + 0x28) == local_70) {
                    /* try { // try from 00363e84 to 00363e8b has its CatchHandler @ 00364178 */
                    /* WARNING: Subroutine does not return */
            FUN_002fb400(&local_e8);
          }
        }
        else if (*(long *)(lVar9 + 0x28) == local_70) {
                    /* try { // try from 00363e68 to 00363e6f has its CatchHandler @ 003641d4 */
                    /* WARNING: Subroutine does not return */
          FUN_002fb400(&local_d0);
        }
      }
      else if (*(long *)(lVar9 + 0x28) == local_70) {
                    /* try { // try from 00363e4c to 00363e53 has its CatchHandler @ 003641e4 */
                    /* WARNING: Subroutine does not return */
        FUN_002fb400(&local_b8);
      }
    }
    else if (*(long *)(lVar9 + 0x28) == local_70) {
                    /* try { // try from 00363e30 to 00363e37 has its CatchHandler @ 003641f4 */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_a0);
    }
  }
  else if (*(long *)(lVar9 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_002fb400(&local_88);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00364234  _INIT_21 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_21(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_FUN_007a13a0;
  DAT_007ab4c8 = 0x1a;
  DAT_007ab4d6 = 0;
  DAT_007ab4c9._0_5_ = s_WeightLinears_001b9c1c._0_5_;
  DAT_007ab4c9._5_3_ = s_WeightLinears_001b9c1c._5_3_;
  uRam00000000007ab4d1 = s_WeightLinears_001b9c1c._8_5_;
  __cxa_atexit(PTR_FUN_007a13a0,&DAT_007ab4c8,&PTR_LOOP_0075ec90);
  DAT_007ab4e0 = 0x20;
  DAT_007ab4e8._1_1_ = s_WeightNonLinears_001e4a46[8];
  DAT_007ab4e8._2_1_ = s_WeightNonLinears_001e4a46[9];
  DAT_007ab4e8._3_1_ = s_WeightNonLinears_001e4a46[10];
  DAT_007ab4e8._4_1_ = s_WeightNonLinears_001e4a46[0xb];
  DAT_007ab4e8._5_1_ = s_WeightNonLinears_001e4a46[0xc];
  DAT_007ab4e8._6_1_ = s_WeightNonLinears_001e4a46[0xd];
  DAT_007ab4e8._7_1_ = s_WeightNonLinears_001e4a46[0xe];
  DAT_007ab4f0._0_1_ = s_WeightNonLinears_001e4a46[0xf];
  DAT_007ab4e1 = s_WeightNonLinears_001e4a46[0];
  DAT_007ab4e1_1._0_1_ = s_WeightNonLinears_001e4a46[1];
  DAT_007ab4e1_1._1_1_ = s_WeightNonLinears_001e4a46[2];
  DAT_007ab4e1_1._2_1_ = s_WeightNonLinears_001e4a46[3];
  DAT_007ab4e1_1._3_1_ = s_WeightNonLinears_001e4a46[4];
  DAT_007ab4e1_1._4_1_ = s_WeightNonLinears_001e4a46[5];
  DAT_007ab4e1_1._5_1_ = s_WeightNonLinears_001e4a46[6];
  DAT_007ab4e8._0_1_ = s_WeightNonLinears_001e4a46[7];
  DAT_007ab4f0._1_1_ = 0;
  __cxa_atexit(puVar1,&DAT_007ab4e0,&PTR_LOOP_0075ec90);
  DAT_007ab4f8 = 0x14;
  _DAT_007ab501 = 0x7355;
  DAT_007ab503 = 0;
  DAT_007ab4f9._0_1_ = s_WeightGRUs_001e06b1[0];
  DAT_007ab4f9._1_1_ = s_WeightGRUs_001e06b1[1];
  DAT_007ab4f9._2_1_ = s_WeightGRUs_001e06b1[2];
  DAT_007ab4f9._3_1_ = s_WeightGRUs_001e06b1[3];
  DAT_007ab4f9._4_1_ = s_WeightGRUs_001e06b1[4];
  DAT_007ab4f9._5_1_ = s_WeightGRUs_001e06b1[5];
  DAT_007ab4f9._6_1_ = s_WeightGRUs_001e06b1[6];
  DAT_007ab4f9._7_1_ = s_WeightGRUs_001e06b1[7];
  __cxa_atexit(puVar1,&DAT_007ab4f8,&PTR_LOOP_0075ec90);
  DAT_007ab51f = 0;
  DAT_007ab510 = 0x1c;
  DAT_007ab511._0_1_ = s_BiasLinearNorm_001e8c0c[0];
  DAT_007ab511._1_1_ = s_BiasLinearNorm_001e8c0c[1];
  DAT_007ab511._2_1_ = s_BiasLinearNorm_001e8c0c[2];
  DAT_007ab511._3_1_ = s_BiasLinearNorm_001e8c0c[3];
  DAT_007ab511._4_1_ = s_BiasLinearNorm_001e8c0c[4];
  DAT_007ab511._5_1_ = s_BiasLinearNorm_001e8c0c[5];
  DAT_007ab511._6_1_ = s_BiasLinearNorm_001e8c0c[6];
  DAT_007ab511._7_1_ = s_BiasLinearNorm_001e8c0c[7];
  uRam00000000007ab519._0_1_ = s_BiasLinearNorm_001e8c0c[8];
  uRam00000000007ab519._1_1_ = s_BiasLinearNorm_001e8c0c[9];
  uRam00000000007ab519._2_1_ = s_BiasLinearNorm_001e8c0c[10];
  uRam00000000007ab519._3_1_ = s_BiasLinearNorm_001e8c0c[0xb];
  uRam00000000007ab519._4_1_ = s_BiasLinearNorm_001e8c0c[0xc];
  uRam00000000007ab519._5_1_ = s_BiasLinearNorm_001e8c0c[0xd];
  __cxa_atexit(puVar1,&DAT_007ab510,&PTR_LOOP_0075ec90);
  DAT_007ab539 = 0x6d;
  DAT_007ab528 = 0x22;
  uRam00000000007ab531._0_1_ = s_BiasNonLinearNorm_001eab8a[8];
  uRam00000000007ab531._1_1_ = s_BiasNonLinearNorm_001eab8a[9];
  uRam00000000007ab531._2_1_ = s_BiasNonLinearNorm_001eab8a[10];
  uRam00000000007ab531._3_1_ = s_BiasNonLinearNorm_001eab8a[0xb];
  uRam00000000007ab531._4_1_ = s_BiasNonLinearNorm_001eab8a[0xc];
  uRam00000000007ab531._5_1_ = s_BiasNonLinearNorm_001eab8a[0xd];
  uRam00000000007ab531._6_1_ = s_BiasNonLinearNorm_001eab8a[0xe];
  uRam00000000007ab531._7_1_ = s_BiasNonLinearNorm_001eab8a[0xf];
  DAT_007ab529 = s_BiasNonLinearNorm_001eab8a[0];
  DAT_007ab529_1._0_1_ = s_BiasNonLinearNorm_001eab8a[1];
  DAT_007ab529_1._1_1_ = s_BiasNonLinearNorm_001eab8a[2];
  DAT_007ab529_1._2_1_ = s_BiasNonLinearNorm_001eab8a[3];
  DAT_007ab529_1._3_1_ = s_BiasNonLinearNorm_001eab8a[4];
  DAT_007ab529_1._4_1_ = s_BiasNonLinearNorm_001eab8a[5];
  DAT_007ab529_1._5_1_ = s_BiasNonLinearNorm_001eab8a[6];
  DAT_007ab529_1._6_1_ = s_BiasNonLinearNorm_001eab8a[7];
  __cxa_atexit(puVar1,&DAT_007ab528,&PTR_LOOP_0075ec90);
  DAT_007ab540 = 0x1c;
  DAT_007ab541._0_1_ = s_GainLinearNorm_001f5500[0];
  DAT_007ab541._1_1_ = s_GainLinearNorm_001f5500[1];
  DAT_007ab541._2_1_ = s_GainLinearNorm_001f5500[2];
  DAT_007ab541._3_1_ = s_GainLinearNorm_001f5500[3];
  DAT_007ab541._4_1_ = s_GainLinearNorm_001f5500[4];
  DAT_007ab541._5_1_ = s_GainLinearNorm_001f5500[5];
  DAT_007ab541._6_1_ = s_GainLinearNorm_001f5500[6];
  DAT_007ab541._7_1_ = s_GainLinearNorm_001f5500[7];
  uRam00000000007ab549._0_1_ = s_GainLinearNorm_001f5500[8];
  uRam00000000007ab549._1_1_ = s_GainLinearNorm_001f5500[9];
  uRam00000000007ab549._2_1_ = s_GainLinearNorm_001f5500[10];
  uRam00000000007ab549._3_1_ = s_GainLinearNorm_001f5500[0xb];
  uRam00000000007ab549._4_1_ = s_GainLinearNorm_001f5500[0xc];
  uRam00000000007ab549._5_1_ = s_GainLinearNorm_001f5500[0xd];
  DAT_007ab54f = 0;
  __cxa_atexit(puVar1,&DAT_007ab540,&PTR_LOOP_0075ec90);
  DAT_007ab558 = 0x22;
  DAT_007ab569 = 0x6d;
  uRam00000000007ab561._0_1_ = s_GainNonLinearNorm_001c7378[8];
  uRam00000000007ab561._1_1_ = s_GainNonLinearNorm_001c7378[9];
  uRam00000000007ab561._2_1_ = s_GainNonLinearNorm_001c7378[10];
  uRam00000000007ab561._3_1_ = s_GainNonLinearNorm_001c7378[0xb];
  uRam00000000007ab561._4_1_ = s_GainNonLinearNorm_001c7378[0xc];
  uRam00000000007ab561._5_1_ = s_GainNonLinearNorm_001c7378[0xd];
  uRam00000000007ab561._6_1_ = s_GainNonLinearNorm_001c7378[0xe];
  uRam00000000007ab561._7_1_ = s_GainNonLinearNorm_001c7378[0xf];
  DAT_007ab559 = s_GainNonLinearNorm_001c7378[0];
  DAT_007ab559_1._0_1_ = s_GainNonLinearNorm_001c7378[1];
  DAT_007ab559_1._1_1_ = s_GainNonLinearNorm_001c7378[2];
  DAT_007ab559_1._2_1_ = s_GainNonLinearNorm_001c7378[3];
  DAT_007ab559_1._3_1_ = s_GainNonLinearNorm_001c7378[4];
  DAT_007ab559_1._4_1_ = s_GainNonLinearNorm_001c7378[5];
  DAT_007ab559_1._5_1_ = s_GainNonLinearNorm_001c7378[6];
  DAT_007ab559_1._6_1_ = s_GainNonLinearNorm_001c7378[7];
  __cxa_atexit(puVar1,&DAT_007ab558,&PTR_LOOP_0075ec90);
  DAT_007ab570 = 0x20;
  DAT_007ab578._1_1_ = s_WeightGRU_resets_001eedd5[8];
  DAT_007ab578._2_1_ = s_WeightGRU_resets_001eedd5[9];
  DAT_007ab578._3_1_ = s_WeightGRU_resets_001eedd5[10];
  DAT_007ab578._4_1_ = s_WeightGRU_resets_001eedd5[0xb];
  DAT_007ab578._5_1_ = s_WeightGRU_resets_001eedd5[0xc];
  DAT_007ab578._6_1_ = s_WeightGRU_resets_001eedd5[0xd];
  DAT_007ab578._7_1_ = s_WeightGRU_resets_001eedd5[0xe];
  DAT_007ab580._0_1_ = s_WeightGRU_resets_001eedd5[0xf];
  DAT_007ab571 = s_WeightGRU_resets_001eedd5[0];
  DAT_007ab571_1._0_1_ = s_WeightGRU_resets_001eedd5[1];
  DAT_007ab571_1._1_1_ = s_WeightGRU_resets_001eedd5[2];
  DAT_007ab571_1._2_1_ = s_WeightGRU_resets_001eedd5[3];
  DAT_007ab571_1._3_1_ = s_WeightGRU_resets_001eedd5[4];
  DAT_007ab571_1._4_1_ = s_WeightGRU_resets_001eedd5[5];
  DAT_007ab571_1._5_1_ = s_WeightGRU_resets_001eedd5[6];
  DAT_007ab578._0_1_ = s_WeightGRU_resets_001eedd5[7];
  DAT_007ab580._1_1_ = 0;
  __cxa_atexit(puVar1,&DAT_007ab570,&PTR_LOOP_0075ec90);
  DAT_007ab588 = 0x1c;
  DAT_007ab589._0_1_ = s_BiasGRU_resets_001e8c1b[0];
  DAT_007ab589._1_1_ = s_BiasGRU_resets_001e8c1b[1];
  DAT_007ab589._2_1_ = s_BiasGRU_resets_001e8c1b[2];
  DAT_007ab589._3_1_ = s_BiasGRU_resets_001e8c1b[3];
  DAT_007ab589._4_1_ = s_BiasGRU_resets_001e8c1b[4];
  DAT_007ab589._5_1_ = s_BiasGRU_resets_001e8c1b[5];
  DAT_007ab589._6_1_ = s_BiasGRU_resets_001e8c1b[6];
  DAT_007ab589._7_1_ = s_BiasGRU_resets_001e8c1b[7];
  uRam00000000007ab591._0_1_ = s_BiasGRU_resets_001e8c1b[8];
  uRam00000000007ab591._1_1_ = s_BiasGRU_resets_001e8c1b[9];
  uRam00000000007ab591._2_1_ = s_BiasGRU_resets_001e8c1b[10];
  uRam00000000007ab591._3_1_ = s_BiasGRU_resets_001e8c1b[0xb];
  uRam00000000007ab591._4_1_ = s_BiasGRU_resets_001e8c1b[0xc];
  uRam00000000007ab591._5_1_ = s_BiasGRU_resets_001e8c1b[0xd];
  DAT_007ab597 = 0;
  __cxa_atexit(puVar1,&DAT_007ab588,&PTR_LOOP_0075ec90);
  DAT_007ab5a0 = 10;
  DAT_007ab5a1 = 0x73616c57;
  DAT_007ab5a5 = 0x74;
  __cxa_atexit(puVar1,&DAT_007ab5a0,&PTR_LOOP_0075ec90);
  DAT_007ab5b8 = 10;
  DAT_007ab5b9 = 0x73616c42;
  DAT_007ab5bd = 0x74;
  __cxa_atexit(puVar1,&DAT_007ab5b8,&PTR_LOOP_0075ec90);
  DAT_007ab5d0 = 0x16;
  DAT_007ab5d1._0_7_ = (undefined7)s_BiasLinears_001d3846._0_8_;
  ram0x007ab5d8 = CONCAT31(0x737261,SUB81(s_BiasLinears_001d3846._0_8_,7));
  DAT_007ab5dc = 0;
  __cxa_atexit(puVar1,&DAT_007ab5d0,&PTR_LOOP_0075ec90);
  DAT_007ab5e8 = 0x1c;
  DAT_007ab5e9._0_1_ = s_BiasNonLinears_001f94b4[0];
  DAT_007ab5e9._1_1_ = s_BiasNonLinears_001f94b4[1];
  DAT_007ab5e9._2_1_ = s_BiasNonLinears_001f94b4[2];
  DAT_007ab5e9._3_1_ = s_BiasNonLinears_001f94b4[3];
  DAT_007ab5e9._4_1_ = s_BiasNonLinears_001f94b4[4];
  DAT_007ab5e9._5_1_ = s_BiasNonLinears_001f94b4[5];
  DAT_007ab5e9._6_1_ = s_BiasNonLinears_001f94b4[6];
  DAT_007ab5e9._7_1_ = s_BiasNonLinears_001f94b4[7];
  uRam00000000007ab5f1._0_1_ = s_BiasNonLinears_001f94b4[8];
  uRam00000000007ab5f1._1_1_ = s_BiasNonLinears_001f94b4[9];
  uRam00000000007ab5f1._2_1_ = s_BiasNonLinears_001f94b4[10];
  uRam00000000007ab5f1._3_1_ = s_BiasNonLinears_001f94b4[0xb];
  uRam00000000007ab5f1._4_1_ = s_BiasNonLinears_001f94b4[0xc];
  uRam00000000007ab5f1._5_1_ = s_BiasNonLinears_001f94b4[0xd];
  DAT_007ab5f7 = 0;
  __cxa_atexit(puVar1,&DAT_007ab5e8,&PTR_LOOP_0075ec90);
  DAT_007ab600 = 0x10;
  DAT_007ab609 = 0;
  DAT_007ab601 = 0x7355524773616942;
  __cxa_atexit(puVar1,&DAT_007ab600,&PTR_LOOP_0075ec90);
  DAT_007ab618 = 0x3102;
  DAT_007ab61a = 0;
  __cxa_atexit(puVar1,&DAT_007ab618,&PTR_LOOP_0075ec90);
  DAT_007ab630 = 0x3202;
  DAT_007ab632 = 0;
  __cxa_atexit(puVar1,&DAT_007ab630,&PTR_LOOP_0075ec90);
  return;
}


// ===== 00364540  FUN_00364540 =====

void FUN_00364540(undefined8 param_1,undefined8 param_2,int param_3,long *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  bool bVar3;
  void *pvVar4;
  undefined1 auVar5 [8];
  undefined8 uVar6;
  long *plVar7;
  long extraout_x1;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined1 auStack_158 [8];
  long *local_150;
  undefined1 auStack_148 [8];
  long *local_140;
  undefined1 local_138 [8];
  undefined8 *local_130;
  undefined8 *local_128;
  undefined1 auStack_f0 [8];
  long *local_e8;
  undefined1 auStack_e0 [8];
  long *local_d8;
  int local_cc;
  undefined1 auStack_c8 [8];
  long *local_c0;
  undefined1 auStack_b8 [8];
  long *local_b0;
  undefined1 auStack_a8 [8];
  long *local_a0;
  undefined1 auStack_98 [8];
  long *local_90;
  undefined1 auStack_88 [8];
  long *local_80;
  int local_74;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  if (param_3 < 4) {
    if (param_3 < 2) {
      if (param_3 == 0) {
        FUN_00716ad0(param_4,local_138,4);
        if (*(int *)((long)param_4 + *(long *)(*param_4 + -0x18) + 0x20) == 0) {
          FUN_00364f4c(auStack_88,param_1,param_2,local_138,0);
          plVar7 = local_80;
          goto joined_r0x003647a4;
        }
      }
      else if ((param_3 == 1) &&
              (FUN_00716ad0(param_4,local_138,4),
              *(int *)((long)param_4 + *(long *)(*param_4 + -0x18) + 0x20) == 0)) {
        FUN_00365334(auStack_98,param_1,param_2,local_138,0);
        plVar7 = local_90;
joined_r0x003647a4:
        if ((plVar7 != (long *)0x0) &&
           (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar7 + 1), lVar9 == 0)) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          FUN_0071245c(plVar7);
          uVar6 = 1;
          if (*(long *)(lVar1 + 0x28) == local_70) {
            return;
          }
          goto LAB_00364f48;
        }
        goto LAB_00364998;
      }
    }
    else {
      if (param_3 == 2) {
        local_138 = (undefined1  [8])0x0;
        local_130 = (undefined8 *)0x0;
        local_128 = (undefined8 *)0x0;
        local_74 = 0;
                    /* try { // try from 003647f4 to 00364833 has its CatchHandler @ 00364ed0 */
        FUN_00716ad0(param_4,&local_74,4);
        FUN_00713cc0(local_138,(long)local_74,0);
        puVar13 = local_128;
        if (((ulong)local_138 & 1) == 0) {
          puVar13 = (undefined8 *)(local_138 + 1);
        }
        FUN_00716ad0(param_4,puVar13,(long)local_74);
        iVar12 = *(int *)((long)param_4 + *(long *)(*param_4 + -0x18) + 0x20);
                    /* try { // try from 00364abc to 00364ad3 has its CatchHandler @ 00364ed0 */
        if (((iVar12 == 0) &&
            (FUN_0036571c(auStack_a8,param_1,param_2,local_138,0), local_a0 != (long *)0x0)) &&
           (lVar9 = FUN_00755c50(0xffffffffffffffff,local_a0 + 1), lVar9 == 0)) {
          (**(code **)(*local_a0 + 0x10))(local_a0);
          FUN_0071245c(local_a0);
        }
        auVar5 = (undefined1  [8])local_128;
        if (((ulong)local_138 & 1) != 0) goto LAB_00364948;
        goto LAB_0036494c;
      }
      if (param_3 == 3) {
        local_138 = (undefined1  [8])0x0;
        local_130 = (undefined8 *)0x0;
        local_128 = (undefined8 *)0x0;
        local_74 = 0;
                    /* try { // try from 00364660 to 0036467f has its CatchHandler @ 00364ecc */
        FUN_00716ad0(param_4,&local_74,4);
        if (local_74 != 0) {
          FUN_002feac4(local_138);
          puVar13 = local_130;
          for (auVar5 = local_138; auVar5 != (undefined1  [8])puVar13;
              auVar5 = (undefined1  [8])((long)auVar5 + 4)) {
                    /* try { // try from 0036468c to 0036469b has its CatchHandler @ 00364f0c */
            FUN_00716ad0(param_4,auVar5,4);
          }
        }
        iVar12 = *(int *)((long)param_4 + *(long *)(*param_4 + -0x18) + 0x20);
        if (iVar12 == 0) {
                    /* try { // try from 003646bc to 003646d3 has its CatchHandler @ 00364ecc */
          FUN_00365bd8(auStack_b8,param_1,param_2,local_138,0);
          plVar7 = local_b0;
          goto joined_r0x003646d8;
        }
        goto LAB_0036493c;
      }
    }
LAB_00364e64:
    uVar6 = 0;
    if (*(long *)(lVar1 + 0x28) == local_70) {
      return;
    }
  }
  else {
    if (param_3 < 6) {
      if (param_3 != 4) {
        if (param_3 != 5) goto LAB_00364e64;
        local_138 = (undefined1  [8])0x0;
        local_130 = (undefined8 *)0x0;
        local_128 = (undefined8 *)0x0;
        local_cc = 0;
                    /* try { // try from 003646fc to 0036470b has its CatchHandler @ 00364ec0 */
        FUN_00716ad0(param_4,&local_cc,4);
        if (*(int *)((long)param_4 + *(long *)(*param_4 + -0x18) + 0x20) == 0) {
          lVar9 = (long)local_130 - (long)local_138 >> 3;
          uVar10 = (ulong)local_cc;
          bVar3 = uVar10 < (ulong)(lVar9 * -0x5555555555555555);
          lVar9 = uVar10 + lVar9 * 0x5555555555555555;
          if (bVar3 || lVar9 == 0) {
            puVar13 = local_130;
            if (bVar3) {
              puVar13 = (undefined8 *)((long)local_138 + (long)local_cc * 3 * 8);
              puVar14 = local_130;
              while (puVar2 = puVar14, puVar2 != puVar13) {
                puVar14 = puVar2 + -3;
                pvVar4 = (void *)*puVar14;
                if (pvVar4 != (void *)0x0) {
                  puVar2[-2] = pvVar4;
                  free(pvVar4);
                }
              }
            }
          }
          else {
                    /* try { // try from 003649d4 to 003649db has its CatchHandler @ 00364ec0 */
            FUN_003697ec(local_138,lVar9);
            puVar13 = local_130;
          }
          local_130 = puVar13;
          if ((undefined1  [8])local_130 != local_138) {
            uVar10 = 0;
            do {
              auVar5 = local_138;
              local_74 = 0;
                    /* try { // try from 00364bdc to 00364c13 has its CatchHandler @ 00364f08 */
              FUN_00716ad0(param_4,&local_74,4);
              plVar7 = (long *)((long)auVar5 + uVar10 * 3 * 8);
              uVar8 = (ulong)local_74;
              lVar9 = *plVar7;
              lVar15 = plVar7[1];
              uVar11 = lVar15 - lVar9 >> 2;
              if (uVar8 < uVar11 || uVar8 - uVar11 == 0) {
                if (uVar8 < uVar11) {
                  lVar15 = lVar9 + uVar8 * 4;
                  plVar7[1] = lVar15;
                }
              }
              else {
                FUN_002feac4(plVar7,uVar8 - uVar11);
                lVar9 = *plVar7;
                lVar15 = plVar7[1];
              }
              for (; lVar9 != lVar15; lVar9 = lVar9 + 4) {
                    /* try { // try from 00364c30 to 00364c3f has its CatchHandler @ 00364f24 */
                FUN_00716ad0(param_4,lVar9,4);
              }
              if (*(int *)((long)param_4 + *(long *)(*param_4 + -0x18) + 0x20) != 0)
              goto LAB_00364720;
              uVar10 = uVar10 + 1;
            } while (uVar10 < (ulong)(((long)local_130 - (long)local_138 >> 3) * -0x5555555555555555
                                     ));
          }
                    /* try { // try from 00364c78 to 00364c8f has its CatchHandler @ 00364ec0 */
          FUN_003667a8(auStack_e0,param_1,param_2,local_138,0);
          plVar7 = local_d8;
          if (local_d8 != (long *)0x0) {
            lVar9 = FUN_00755c50(0xffffffffffffffff,local_d8 + 1);
            if (lVar9 == 0) {
              (**(code **)(*local_d8 + 0x10))(local_d8);
              FUN_0071245c(local_d8);
            }
            plVar7 = (long *)0x0;
          }
        }
        else {
LAB_00364720:
          plVar7 = (long *)0x1;
        }
        auVar5 = local_138;
        puVar13 = local_130;
        if (local_138 != (undefined1  [8])0x0) {
          while (puVar14 = puVar13, (undefined1  [8])puVar14 != auVar5) {
            puVar13 = puVar14 + -3;
            pvVar4 = (void *)*puVar13;
            if (pvVar4 != (void *)0x0) {
              puVar14[-2] = pvVar4;
              free(pvVar4);
            }
          }
          goto LAB_0036498c;
        }
        goto LAB_00364994;
      }
      FUN_00374600(local_138);
                    /* try { // try from 003648d4 to 0036490b has its CatchHandler @ 00364ea4 */
      plVar7 = (long *)FUN_00366124(param_4,local_138);
      iVar12 = *(int *)((long)plVar7 + *(long *)(*plVar7 + -0x18) + 0x20);
      if (iVar12 == 0) {
        FUN_00366244(auStack_c8,param_1,param_2,local_138,0);
        plVar7 = local_c0;
joined_r0x003646d8:
        if ((plVar7 != (long *)0x0) &&
           (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar7 + 1), lVar9 == 0)) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          FUN_0071245c(plVar7);
        }
      }
LAB_0036493c:
      if (local_138 != (undefined1  [8])0x0) {
        local_130 = (undefined8 *)local_138;
        auVar5 = local_138;
LAB_00364948:
        free((void *)auVar5);
      }
LAB_0036494c:
      if (iVar12 != 0) goto LAB_00364e64;
    }
    else {
      if (param_3 != 6) {
        if (param_3 == 7) {
          FUN_0036dfcc(local_138);
                    /* try { // try from 0036495c to 00364967 has its CatchHandler @ 00364e94 */
          plVar7 = (long *)FUN_00367240(param_4,local_138);
          if (*(int *)((long)plVar7 + *(long *)(*plVar7 + -0x18) + 0x20) == 0) {
                    /* try { // try from 00364a54 to 00364a6b has its CatchHandler @ 00364e94 */
            FUN_0036740c(auStack_148,param_1,param_2,local_138,0);
            if ((local_140 != (long *)0x0) &&
               (lVar9 = FUN_00755c50(0xffffffffffffffff,local_140 + 1), lVar9 == 0)) {
              (**(code **)(*local_140 + 0x10))(local_140);
              FUN_0071245c(local_140);
            }
            FUN_0036e048(local_138);
            uVar6 = 1;
            if (*(long *)(lVar1 + 0x28) == local_70) {
              return;
            }
            goto LAB_00364f48;
          }
          FUN_0036e048(local_138);
        }
        else if (param_3 == 8) {
          local_138 = (undefined1  [8])0x0;
          local_130 = (undefined8 *)0x0;
          local_128 = (undefined8 *)0x0;
          local_74 = 0;
                    /* try { // try from 003645b0 to 003645bf has its CatchHandler @ 00364ec4 */
          FUN_00716ad0(param_4,&local_74,4);
          if (*(int *)((long)param_4 + *(long *)(*param_4 + -0x18) + 0x20) == 0) {
            lVar9 = (long)local_130 - (long)local_138 >> 3;
            uVar10 = (ulong)local_74;
            bVar3 = uVar10 < (ulong)(lVar9 * -0x71c71c71c71c71c7);
            lVar9 = uVar10 + lVar9 * 0x71c71c71c71c71c7;
            if (bVar3 || lVar9 == 0) {
              puVar13 = local_130;
              if (bVar3) {
                puVar13 = (undefined8 *)((long)local_138 + (long)local_74 * 9 * 8);
                puVar14 = local_130;
                while (puVar14 != puVar13) {
                  puVar14 = puVar14 + -9;
                  FUN_0036e048(puVar14,lVar9);
                  lVar9 = extraout_x1;
                }
              }
            }
            else {
                    /* try { // try from 00364a44 to 00364a4b has its CatchHandler @ 00364ec4 */
              FUN_0036a450(local_138);
              puVar13 = local_130;
            }
            local_130 = puVar13;
            if ((undefined1  [8])local_130 != local_138) {
              lVar9 = 0;
              uVar10 = 0;
              do {
                    /* try { // try from 00364d98 to 00364da3 has its CatchHandler @ 00364ee8 */
                plVar7 = (long *)FUN_00367240(param_4,(undefined1 *)((long)local_138 + lVar9));
                if (*(int *)((long)plVar7 + *(long *)(*plVar7 + -0x18) + 0x20) != 0)
                goto LAB_003645d4;
                uVar10 = uVar10 + 1;
                lVar9 = lVar9 + 0x48;
              } while (uVar10 < (ulong)(((long)local_130 - (long)local_138 >> 3) *
                                       -0x71c71c71c71c71c7));
            }
                    /* try { // try from 00364dd8 to 00364def has its CatchHandler @ 00364ec4 */
            FUN_00367950(auStack_158,param_1,param_2,local_138,0);
            if ((local_150 != (long *)0x0) &&
               (lVar9 = FUN_00755c50(0xffffffffffffffff,local_150 + 1), lVar9 == 0)) {
              (**(code **)(*local_150 + 0x10))(local_150);
              FUN_0071245c(local_150);
            }
            bVar3 = false;
            auVar5 = local_138;
          }
          else {
LAB_003645d4:
            bVar3 = true;
            auVar5 = local_138;
          }
          local_138 = auVar5;
          puVar13 = local_130;
          if (auVar5 != (undefined1  [8])0x0) {
            while ((undefined1  [8])puVar13 != auVar5) {
              FUN_0036e048(puVar13 + -9);
              puVar13 = puVar13 + -9;
            }
            local_130 = (undefined8 *)auVar5;
            free((void *)local_138);
          }
          if (!bVar3) goto LAB_00364998;
        }
        goto LAB_00364e64;
      }
      local_138 = (undefined1  [8])0x0;
      local_130 = (undefined8 *)0x0;
      local_128 = (undefined8 *)0x0;
      local_74 = 0;
                    /* try { // try from 00364864 to 00364873 has its CatchHandler @ 00364ec8 */
      FUN_00716ad0(param_4,&local_74,4);
      if (*(int *)((long)param_4 + *(long *)(*param_4 + -0x18) + 0x20) == 0) {
        lVar9 = (long)local_130 - (long)local_138 >> 3;
        uVar10 = (ulong)local_74;
        bVar3 = uVar10 < (ulong)(lVar9 * -0x3333333333333333);
        lVar9 = uVar10 + lVar9 * 0x3333333333333333;
        if (bVar3 || lVar9 == 0) {
          puVar13 = local_130;
          if (bVar3) {
            puVar13 = (undefined8 *)((long)local_138 + (long)local_74 * 5 * 8);
            puVar14 = local_130;
            while (puVar2 = puVar14, puVar2 != puVar13) {
              puVar14 = puVar2 + -5;
              pvVar4 = (void *)*puVar14;
              if (pvVar4 != (void *)0x0) {
                puVar2[-4] = pvVar4;
                free(pvVar4);
              }
            }
          }
        }
        else {
                    /* try { // try from 00364a08 to 00364a0f has its CatchHandler @ 00364ec8 */
          FUN_00369c90(local_138,lVar9);
          puVar13 = local_130;
        }
        local_130 = puVar13;
        if ((undefined1  [8])local_130 != local_138) {
          lVar9 = 0;
          uVar10 = 0;
          do {
                    /* try { // try from 00364cf0 to 00364cfb has its CatchHandler @ 00364ef8 */
            plVar7 = (long *)FUN_00366124(param_4,(undefined1 *)((long)local_138 + lVar9));
            if (*(int *)((long)plVar7 + *(long *)(*plVar7 + -0x18) + 0x20) != 0) goto LAB_00364888;
            uVar10 = uVar10 + 1;
            lVar9 = lVar9 + 0x28;
          } while (uVar10 < (ulong)(((long)local_130 - (long)local_138 >> 3) * -0x3333333333333333))
          ;
        }
                    /* try { // try from 00364d30 to 00364d47 has its CatchHandler @ 00364ec8 */
        FUN_00366cf4(auStack_f0,param_1,param_2,local_138,0);
        plVar7 = local_e8;
        if (local_e8 != (long *)0x0) {
          lVar9 = FUN_00755c50(0xffffffffffffffff,local_e8 + 1);
          if (lVar9 == 0) {
            (**(code **)(*local_e8 + 0x10))(local_e8);
            FUN_0071245c(local_e8);
          }
          plVar7 = (long *)0x0;
        }
      }
      else {
LAB_00364888:
        plVar7 = (long *)0x1;
      }
      auVar5 = local_138;
      puVar13 = local_130;
      if (local_138 != (undefined1  [8])0x0) {
        while (puVar14 = puVar13, (undefined1  [8])puVar14 != auVar5) {
          puVar13 = puVar14 + -5;
          pvVar4 = (void *)*puVar13;
          if (pvVar4 != (void *)0x0) {
            puVar14[-4] = pvVar4;
            free(pvVar4);
          }
        }
LAB_0036498c:
        local_130 = (undefined8 *)auVar5;
        free((void *)local_138);
      }
LAB_00364994:
      if (((ulong)plVar7 & 1) != 0) goto LAB_00364e64;
    }
LAB_00364998:
    uVar6 = 1;
    if (*(long *)(lVar1 + 0x28) == local_70) {
      return;
    }
  }
LAB_00364f48:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


// ===== 00364f4c  FUN_00364f4c =====

void FUN_00364f4c(undefined8 *param_1,undefined8 param_2,ulong *param_3,undefined4 *param_4,
                 int param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong *puVar6;
  undefined4 *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  ulong *local_b0;
  long *local_a8;
  long *local_a0;
  long *plStack_98;
  void *local_90;
  ulong *local_88;
  long *local_80;
  undefined1 uStack_69;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  puVar6 = (ulong *)FUN_00759c3c(0x18);
  *puVar6 = (ulong)(PTR_DAT_007a16f0 + 0x10);
                    /* try { // try from 00364fa8 to 00364faf has its CatchHandler @ 0036530c */
  puVar7 = (undefined4 *)FUN_00759c3c(4);
  uVar12 = *param_4;
  puVar6[1] = (ulong)puVar7;
  *puVar7 = uVar12;
                    /* try { // try from 00364fc0 to 00364fc7 has its CatchHandler @ 003652fc */
  plVar8 = (long *)FUN_00759c3c(0x20);
  puVar5 = PTR_DAT_007a16f8;
  plVar8[2] = 0;
  plVar8[3] = (long)puVar7;
  puVar6[2] = (ulong)plVar8;
  *plVar8 = (long)(puVar5 + 0x10);
  plVar8[1] = 0;
  local_b0 = puVar6;
                    /* try { // try from 00364fe4 to 00364feb has its CatchHandler @ 003652ec */
  local_80 = (long *)FUN_00759c3c(0x20);
  puVar5 = PTR_DAT_007a1700;
  uVar4 = *param_3;
  local_80[2] = 0;
  local_80[3] = (long)puVar6;
  *local_80 = (long)(puVar5 + 0x10);
  local_80[1] = 0;
  if ((uVar4 & 1) == 0) {
    plStack_98 = (long *)param_3[1];
    local_a0 = (long *)*param_3;
    local_90 = (void *)param_3[2];
  }
  else {
                    /* try { // try from 00365028 to 0036502f has its CatchHandler @ 003652cc */
    local_a8 = local_80;
    FUN_002fb36c(&local_a0,param_3[2],param_3[1]);
  }
  local_b0 = (ulong *)0x0;
  local_a8 = (long *)0x0;
                    /* try { // try from 00365038 to 00365047 has its CatchHandler @ 003652d4 */
  local_88 = puVar6;
  auVar13 = FUN_00368734(param_2,&local_a0,&local_a0);
  plVar8 = local_80;
  if ((local_80 != (long *)0x0) &&
     (lVar9 = FUN_00755c50(0xffffffffffffffff,local_80 + 1), lVar9 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0071245c(plVar8);
  }
  if (((ulong)local_a0 & 1) != 0) {
    free(local_90);
  }
  plVar8 = local_a8;
  if ((local_a8 == (long *)0x0) ||
     (lVar9 = FUN_00755c50(0xffffffffffffffff,local_a8 + 1), lVar9 != 0)) {
    if ((auVar13 & (undefined1  [16])0xff) == (undefined1  [16])0x0) goto LAB_00365160;
LAB_00365098:
    lVar9 = *(long *)(auVar13._0_8_ + 0x38);
    if ((lVar9 != 0) &&
       (lVar9 = FUN_0073a738(lVar9,PTR_PTR_007a16b8,PTR_PTR_007a1708,0), lVar9 != 0)) {
      plVar8 = *(long **)(auVar13._0_8_ + 0x40);
      if (plVar8 != (long *)0x0) {
        FUN_00755c20(1,plVar8 + 1);
      }
      lVar2 = *(long *)(lVar9 + 0x10);
      *param_1 = *(undefined8 *)(lVar9 + 8);
      param_1[1] = lVar2;
      if (lVar2 != 0) {
        FUN_00755c20(1,lVar2 + 8);
      }
      if ((plVar8 != (long *)0x0) &&
         (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar9 == 0)) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        FUN_0071245c(plVar8);
      }
      goto LAB_00365264;
    }
  }
  else {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0071245c(plVar8);
    if ((auVar13 & (undefined1  [16])0xff) != (undefined1  [16])0x0) goto LAB_00365098;
LAB_00365160:
    if (param_5 != 0) {
      plVar8 = (long *)FUN_00759c3c(0x18);
      *plVar8 = (long)(PTR_DAT_007a16f0 + 0x10);
                    /* try { // try from 00365180 to 00365187 has its CatchHandler @ 003652c0 */
      puVar7 = (undefined4 *)FUN_00759c3c(4);
      uVar12 = *param_4;
      plVar8[1] = (long)puVar7;
      *puVar7 = uVar12;
                    /* try { // try from 00365198 to 0036519f has its CatchHandler @ 003652b0 */
      plVar10 = (long *)FUN_00759c3c(0x20);
      puVar1 = PTR_DAT_007a16f8 + 0x10;
      plVar10[2] = 0;
      plVar10[3] = (long)puVar7;
      *plVar10 = (long)puVar1;
      plVar10[1] = 0;
      plVar8[2] = (long)plVar10;
      local_a0 = plVar8;
                    /* try { // try from 003651bc to 003651c3 has its CatchHandler @ 003652a4 */
      plVar10 = (long *)FUN_00759c3c(0x20);
      plVar10[2] = 0;
      plVar10[3] = (long)plVar8;
      *plVar10 = (long)(puVar5 + 0x10);
      plVar10[1] = 0;
                    /* try { // try from 003651dc to 003651f7 has its CatchHandler @ 00365294 */
      local_b0 = param_3;
      plStack_98 = plVar10;
      lVar9 = FUN_00368aac(param_2,param_3,PTR_DAT_007a10e8,&local_b0,&uStack_69);
      plVar11 = *(long **)(lVar9 + 0x40);
      local_a0 = (long *)0x0;
      plStack_98 = (long *)0x0;
      *(long **)(lVar9 + 0x38) = plVar8;
      *(long **)(lVar9 + 0x40) = plVar10;
      if ((plVar11 != (long *)0x0) &&
         (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar11 + 1), lVar9 == 0)) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        FUN_0071245c(plVar11);
      }
      plVar8 = plStack_98;
      if ((plStack_98 != (long *)0x0) &&
         (lVar9 = FUN_00755c50(0xffffffffffffffff,plStack_98 + 1), lVar9 == 0)) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        FUN_0071245c(plVar8);
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_00365264:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00365334  FUN_00365334 =====

void FUN_00365334(undefined8 *param_1,undefined8 param_2,ulong *param_3,undefined4 *param_4,
                 int param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong *puVar7;
  undefined4 *puVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  ulong *local_b0;
  long *local_a8;
  long *local_a0;
  long *plStack_98;
  void *local_90;
  ulong *local_88;
  long *local_80;
  undefined1 uStack_69;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  puVar7 = (ulong *)FUN_00759c3c(0x18);
  *puVar7 = (ulong)(PTR_DAT_007a1710 + 0x10);
                    /* try { // try from 00365390 to 00365397 has its CatchHandler @ 003656f4 */
  puVar8 = (undefined4 *)FUN_00759c3c(4);
  uVar3 = *param_4;
  puVar7[1] = (ulong)puVar8;
  *puVar8 = uVar3;
                    /* try { // try from 003653a8 to 003653af has its CatchHandler @ 003656e4 */
  plVar9 = (long *)FUN_00759c3c(0x20);
  puVar6 = PTR_DAT_007a1718;
  plVar9[2] = 0;
  plVar9[3] = (long)puVar8;
  puVar7[2] = (ulong)plVar9;
  *plVar9 = (long)(puVar6 + 0x10);
  plVar9[1] = 0;
  local_b0 = puVar7;
                    /* try { // try from 003653cc to 003653d3 has its CatchHandler @ 003656d4 */
  local_80 = (long *)FUN_00759c3c(0x20);
  puVar6 = PTR_DAT_007a1720;
  uVar5 = *param_3;
  local_80[2] = 0;
  local_80[3] = (long)puVar7;
  *local_80 = (long)(puVar6 + 0x10);
  local_80[1] = 0;
  if ((uVar5 & 1) == 0) {
    plStack_98 = (long *)param_3[1];
    local_a0 = (long *)*param_3;
    local_90 = (void *)param_3[2];
  }
  else {
                    /* try { // try from 00365410 to 00365417 has its CatchHandler @ 003656b4 */
    local_a8 = local_80;
    FUN_002fb36c(&local_a0,param_3[2],param_3[1]);
  }
  local_b0 = (ulong *)0x0;
  local_a8 = (long *)0x0;
                    /* try { // try from 00365420 to 0036542f has its CatchHandler @ 003656bc */
  local_88 = puVar7;
  auVar13 = FUN_00368734(param_2,&local_a0,&local_a0);
  plVar9 = local_80;
  if ((local_80 != (long *)0x0) &&
     (lVar10 = FUN_00755c50(0xffffffffffffffff,local_80 + 1), lVar10 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    FUN_0071245c(plVar9);
  }
  if (((ulong)local_a0 & 1) != 0) {
    free(local_90);
  }
  plVar9 = local_a8;
  if ((local_a8 == (long *)0x0) ||
     (lVar10 = FUN_00755c50(0xffffffffffffffff,local_a8 + 1), lVar10 != 0)) {
    if ((auVar13 & (undefined1  [16])0xff) == (undefined1  [16])0x0) goto LAB_00365548;
LAB_00365480:
    lVar10 = *(long *)(auVar13._0_8_ + 0x38);
    if ((lVar10 != 0) &&
       (lVar10 = FUN_0073a738(lVar10,PTR_PTR_007a16b8,PTR_PTR_007a1728,0), lVar10 != 0)) {
      plVar9 = *(long **)(auVar13._0_8_ + 0x40);
      if (plVar9 != (long *)0x0) {
        FUN_00755c20(1,plVar9 + 1);
      }
      lVar2 = *(long *)(lVar10 + 0x10);
      *param_1 = *(undefined8 *)(lVar10 + 8);
      param_1[1] = lVar2;
      if (lVar2 != 0) {
        FUN_00755c20(1,lVar2 + 8);
      }
      if ((plVar9 != (long *)0x0) &&
         (lVar10 = FUN_00755c50(0xffffffffffffffff,plVar9 + 1), lVar10 == 0)) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        FUN_0071245c(plVar9);
      }
      goto LAB_0036564c;
    }
  }
  else {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    FUN_0071245c(plVar9);
    if ((auVar13 & (undefined1  [16])0xff) != (undefined1  [16])0x0) goto LAB_00365480;
LAB_00365548:
    if (param_5 != 0) {
      plVar9 = (long *)FUN_00759c3c(0x18);
      *plVar9 = (long)(PTR_DAT_007a1710 + 0x10);
                    /* try { // try from 00365568 to 0036556f has its CatchHandler @ 003656a8 */
      puVar8 = (undefined4 *)FUN_00759c3c(4);
      uVar3 = *param_4;
      plVar9[1] = (long)puVar8;
      *puVar8 = uVar3;
                    /* try { // try from 00365580 to 00365587 has its CatchHandler @ 00365698 */
      plVar11 = (long *)FUN_00759c3c(0x20);
      puVar1 = PTR_DAT_007a1718 + 0x10;
      plVar11[2] = 0;
      plVar11[3] = (long)puVar8;
      *plVar11 = (long)puVar1;
      plVar11[1] = 0;
      plVar9[2] = (long)plVar11;
      local_a0 = plVar9;
                    /* try { // try from 003655a4 to 003655ab has its CatchHandler @ 0036568c */
      plVar11 = (long *)FUN_00759c3c(0x20);
      plVar11[2] = 0;
      plVar11[3] = (long)plVar9;
      *plVar11 = (long)(puVar6 + 0x10);
      plVar11[1] = 0;
                    /* try { // try from 003655c4 to 003655df has its CatchHandler @ 0036567c */
      local_b0 = param_3;
      plStack_98 = plVar11;
      lVar10 = FUN_00368aac(param_2,param_3,PTR_DAT_007a10e8,&local_b0,&uStack_69);
      plVar12 = *(long **)(lVar10 + 0x40);
      local_a0 = (long *)0x0;
      plStack_98 = (long *)0x0;
      *(long **)(lVar10 + 0x38) = plVar9;
      *(long **)(lVar10 + 0x40) = plVar11;
      if ((plVar12 != (long *)0x0) &&
         (lVar10 = FUN_00755c50(0xffffffffffffffff,plVar12 + 1), lVar10 == 0)) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        FUN_0071245c(plVar12);
      }
      plVar9 = plStack_98;
      if ((plStack_98 != (long *)0x0) &&
         (lVar10 = FUN_00755c50(0xffffffffffffffff,plStack_98 + 1), lVar10 == 0)) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        FUN_0071245c(plVar9);
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_0036564c:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0036571c  FUN_0036571c =====

void FUN_0036571c(undefined8 *param_1,undefined8 param_2,ulong *param_3,ulong *param_4,int param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  ulong *local_b0;
  long *local_a8;
  long *local_a0;
  long *plStack_98;
  void *local_90;
  ulong *local_88;
  long *local_80;
  ulong *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  puVar5 = (ulong *)FUN_00759c3c(0x18);
  *puVar5 = (ulong)(PTR_DAT_007a1730 + 0x10);
                    /* try { // try from 00365778 to 00365783 has its CatchHandler @ 00365b5c */
  puVar6 = (ulong *)FUN_00759c3c(0x18);
  if ((*param_4 & 1) == 0) {
    uVar12 = *param_4;
    uVar10 = param_4[2];
    puVar6[1] = param_4[1];
    *puVar6 = uVar12;
    puVar6[2] = uVar10;
  }
  else {
                    /* try { // try from 003657a8 to 003657af has its CatchHandler @ 00365b0c */
    FUN_002fb36c(puVar6,param_4[2],param_4[1]);
  }
  puVar5[1] = (ulong)puVar6;
  local_70 = puVar6;
                    /* try { // try from 003657b8 to 003657bf has its CatchHandler @ 00365b4c */
  plVar7 = (long *)FUN_00759c3c(0x20);
  puVar3 = PTR_DAT_007a1738;
  plVar7[2] = 0;
  plVar7[3] = (long)puVar6;
  puVar5[2] = (ulong)plVar7;
  *plVar7 = (long)(puVar3 + 0x10);
  plVar7[1] = 0;
  local_b0 = puVar5;
                    /* try { // try from 003657dc to 003657e3 has its CatchHandler @ 00365b34 */
  local_80 = (long *)FUN_00759c3c(0x20);
  puVar4 = PTR_DAT_007a1740;
  uVar10 = *param_3;
  local_80[2] = 0;
  local_80[3] = (long)puVar5;
  *local_80 = (long)(puVar4 + 0x10);
  local_80[1] = 0;
  if ((uVar10 & 1) == 0) {
    plStack_98 = (long *)param_3[1];
    local_a0 = (long *)*param_3;
    local_90 = (void *)param_3[2];
  }
  else {
                    /* try { // try from 00365820 to 00365827 has its CatchHandler @ 00365b04 */
    local_a8 = local_80;
    FUN_002fb36c(&local_a0,param_3[2],param_3[1]);
  }
  local_b0 = (ulong *)0x0;
  local_a8 = (long *)0x0;
                    /* try { // try from 00365830 to 0036583f has its CatchHandler @ 00365b1c */
  local_88 = puVar5;
  auVar13 = FUN_00368734(param_2,&local_a0,&local_a0);
  plVar7 = local_80;
  if ((local_80 != (long *)0x0) &&
     (lVar8 = FUN_00755c50(0xffffffffffffffff,local_80 + 1), lVar8 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_0071245c(plVar7);
  }
  if (((ulong)local_a0 & 1) != 0) {
    free(local_90);
  }
  plVar7 = local_a8;
  if ((local_a8 == (long *)0x0) ||
     (lVar8 = FUN_00755c50(0xffffffffffffffff,local_a8 + 1), lVar8 != 0)) {
    if ((auVar13 & (undefined1  [16])0xff) == (undefined1  [16])0x0) goto LAB_0036595c;
LAB_00365890:
    lVar8 = *(long *)(auVar13._0_8_ + 0x38);
    if ((lVar8 != 0) &&
       (lVar8 = FUN_0073a738(lVar8,PTR_PTR_007a16b8,PTR_PTR_007a1748,0), lVar8 != 0)) {
      plVar7 = *(long **)(auVar13._0_8_ + 0x40);
      if (plVar7 != (long *)0x0) {
        FUN_00755c20(1,plVar7 + 1);
      }
      lVar1 = *(long *)(lVar8 + 0x10);
      *param_1 = *(undefined8 *)(lVar8 + 8);
      param_1[1] = lVar1;
      if (lVar1 != 0) {
        FUN_00755c20(1,lVar1 + 8);
      }
      if ((plVar7 != (long *)0x0) &&
         (lVar8 = FUN_00755c50(0xffffffffffffffff,plVar7 + 1), lVar8 == 0)) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        FUN_0071245c(plVar7);
      }
      goto LAB_00365a88;
    }
  }
  else {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_0071245c(plVar7);
    if ((auVar13 & (undefined1  [16])0xff) != (undefined1  [16])0x0) goto LAB_00365890;
LAB_0036595c:
    if (param_5 != 0) {
      plVar7 = (long *)FUN_00759c3c(0x18);
      *plVar7 = (long)(PTR_DAT_007a1730 + 0x10);
                    /* try { // try from 0036597c to 00365983 has its CatchHandler @ 00365af8 */
      puVar5 = (ulong *)FUN_00759c3c(0x18);
      if ((*param_4 & 1) == 0) {
        uVar12 = *param_4;
        uVar10 = param_4[2];
        puVar5[1] = param_4[1];
        *puVar5 = uVar12;
        puVar5[2] = uVar10;
      }
      else {
                    /* try { // try from 003659b0 to 003659b7 has its CatchHandler @ 00365ab8 */
        FUN_002fb36c(puVar5,param_4[2],param_4[1]);
      }
      plVar7[1] = (long)puVar5;
      local_b0 = puVar5;
                    /* try { // try from 003659c0 to 003659c7 has its CatchHandler @ 00365ae8 */
      plVar9 = (long *)FUN_00759c3c(0x20);
      plVar9[2] = 0;
      plVar9[3] = (long)puVar5;
      *plVar9 = (long)(puVar3 + 0x10);
      plVar9[1] = 0;
      plVar7[2] = (long)plVar9;
      local_a0 = plVar7;
                    /* try { // try from 003659dc to 003659e3 has its CatchHandler @ 00365ad8 */
      plVar9 = (long *)FUN_00759c3c(0x20);
      plVar9[2] = 0;
      plVar9[3] = (long)plVar7;
      *plVar9 = (long)(puVar4 + 0x10);
      plVar9[1] = 0;
                    /* try { // try from 003659fc to 00365a17 has its CatchHandler @ 00365ac8 */
      local_b0 = param_3;
      plStack_98 = plVar9;
      lVar8 = FUN_00368aac(param_2,param_3,PTR_DAT_007a10e8,&local_b0,&local_70);
      plVar11 = *(long **)(lVar8 + 0x40);
      *(long **)(lVar8 + 0x38) = plVar7;
      *(long **)(lVar8 + 0x40) = plVar9;
      local_a0 = (long *)0x0;
      plStack_98 = (long *)0x0;
      if ((plVar11 != (long *)0x0) &&
         (lVar8 = FUN_00755c50(0xffffffffffffffff,plVar11 + 1), lVar8 == 0)) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        FUN_0071245c(plVar11);
      }
      plVar7 = plStack_98;
      if ((plStack_98 != (long *)0x0) &&
         (lVar8 = FUN_00755c50(0xffffffffffffffff,plStack_98 + 1), lVar8 == 0)) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        FUN_0071245c(plVar7);
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_00365a88:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00365b88  FUN_00365b88 =====

void FUN_00365b88(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 00365bd8  FUN_00365bd8 =====

void FUN_00365bd8(undefined8 *param_1,long *param_2,ulong *param_3,undefined8 *param_4,int param_5)

{
  size_t sVar1;
  ulong uVar2;
  byte *__s2;
  long lVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  void *pvVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 *local_b0;
  ulong uStack_a8;
  void *local_a0;
  long *local_98;
  long *plStack_90;
  long *local_88;
  long *local_80;
  undefined1 auStack_78 [8];
  undefined8 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  plVar12 = param_2 + 1;
  plVar19 = (long *)*plVar12;
  if (plVar19 != (long *)0x0) {
    uVar2 = param_3[1];
    __s2 = (byte *)param_3[2];
    plVar11 = plVar12;
    if (((byte)*param_3 & 1) == 0) {
      __s2 = (byte *)((long)param_3 + 1);
      uVar2 = (ulong)(byte)((byte)*param_3 >> 1);
    }
    do {
      bVar4 = *(byte *)(plVar19 + 4);
      if ((bVar4 & 1) == 0) {
        uVar17 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) goto LAB_00365c60;
LAB_00365c94:
        sVar1 = uVar2;
        if (uVar17 <= uVar2) {
          sVar1 = uVar17;
        }
        iVar9 = memcmp((void *)((long)plVar19 + 0x21),__s2,sVar1);
        if (iVar9 != 0) goto LAB_00365c78;
LAB_00365cac:
        uVar14 = (uint)(uVar17 < uVar2);
        if (uVar17 < uVar2) goto LAB_00365c80;
LAB_00365cb8:
        lVar16 = 0;
      }
      else {
        uVar17 = plVar19[5];
        if ((bVar4 & 1) == 0) goto LAB_00365c94;
LAB_00365c60:
        sVar1 = uVar2;
        if (uVar17 <= uVar2) {
          sVar1 = uVar17;
        }
        iVar9 = memcmp((void *)plVar19[6],__s2,sVar1);
        if (iVar9 == 0) goto LAB_00365cac;
LAB_00365c78:
        uVar14 = -(iVar9 >> 0x1f);
        if (uVar14 == 0) goto LAB_00365cb8;
LAB_00365c80:
        lVar16 = 8;
      }
      if (uVar14 == 0) {
        plVar11 = plVar19;
      }
      plVar19 = *(long **)((long)plVar19 + lVar16);
    } while (plVar19 != (long *)0x0);
    if (plVar12 != plVar11) {
      uVar17 = (ulong)(*(byte *)(plVar11 + 4) >> 1);
      pvVar7 = (void *)((long)plVar11 + 0x21);
      if ((*(byte *)(plVar11 + 4) & 1) != 0) {
        uVar17 = plVar11[5];
        pvVar7 = (void *)plVar11[6];
      }
      sVar1 = uVar17;
      if (uVar2 <= uVar17) {
        sVar1 = uVar2;
      }
      iVar9 = memcmp(__s2,pvVar7,sVar1);
      bVar6 = uVar2 < uVar17;
      if (iVar9 != 0) {
        bVar6 = iVar9 < 0;
      }
      plVar12 = plVar11;
      if (!bVar6) {
        if (param_5 != 0) {
          plVar12 = (long *)FUN_00759c3c(0x18);
          *plVar12 = (long)(PTR_DAT_007a1750 + 0x10);
                    /* try { // try from 00365fac to 00365fb3 has its CatchHandler @ 003660a8 */
          puVar10 = (undefined8 *)FUN_00759c3c(0x18);
          uVar21 = param_4[1];
          uVar20 = *param_4;
          uVar15 = param_4[2];
          param_4[1] = 0;
          param_4[2] = 0;
          puVar10[1] = uVar21;
          *puVar10 = uVar20;
          puVar10[2] = uVar15;
          *param_4 = 0;
          plVar12[1] = (long)puVar10;
          local_b0 = puVar10;
                    /* try { // try from 00365fd8 to 00365fdf has its CatchHandler @ 00366098 */
          plVar19 = (long *)FUN_00759c3c(0x20);
          puVar8 = PTR_DAT_007a1758;
          plVar19[2] = 0;
          plVar19[3] = (long)puVar10;
          plVar12[2] = (long)plVar19;
          *plVar19 = (long)(puVar8 + 0x10);
          plVar19[1] = 0;
                    /* try { // try from 00365ff8 to 00365fff has its CatchHandler @ 0036608c */
          plVar19 = (long *)FUN_00759c3c(0x20);
          puVar8 = PTR_DAT_007a1760;
          plVar19[2] = 0;
          plVar19[3] = (long)plVar12;
          *plVar19 = (long)(puVar8 + 0x10);
          plVar19[1] = 0;
          plVar18 = (long *)plVar11[8];
          plVar11[7] = (long)plVar12;
          plVar11[8] = (long)plVar19;
          if ((plVar18 != (long *)0x0) &&
             (lVar16 = FUN_00755c50(0xffffffffffffffff,plVar18 + 1), lVar16 == 0)) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
            FUN_0071245c(plVar18);
          }
        }
        if (*(long *)(lVar5 + 0x28) == local_68) {
          *param_1 = 0;
          param_1[1] = 0;
          return;
        }
        goto LAB_00366120;
      }
    }
  }
  plVar19 = (long *)FUN_00759c3c(0x18);
  *plVar19 = (long)(PTR_DAT_007a1750 + 0x10);
                    /* try { // try from 00365d34 to 00365d3b has its CatchHandler @ 003660e0 */
  puVar10 = (undefined8 *)FUN_00759c3c(0x18);
  uVar21 = param_4[1];
  uVar20 = *param_4;
  uVar15 = param_4[2];
  param_4[1] = 0;
  param_4[2] = 0;
  puVar10[1] = uVar21;
  *puVar10 = uVar20;
  puVar10[2] = uVar15;
  *param_4 = 0;
  plVar19[1] = (long)puVar10;
  local_b0 = puVar10;
                    /* try { // try from 00365d60 to 00365d67 has its CatchHandler @ 003660d0 */
  plVar11 = (long *)FUN_00759c3c(0x20);
  puVar8 = PTR_DAT_007a1758;
  plVar11[2] = 0;
  plVar11[3] = (long)puVar10;
  plVar19[2] = (long)plVar11;
  *plVar11 = (long)(puVar8 + 0x10);
  plVar11[1] = 0;
  local_88 = plVar19;
                    /* try { // try from 00365d84 to 00365d8b has its CatchHandler @ 003660c0 */
  plStack_90 = (long *)FUN_00759c3c(0x20);
  puVar8 = PTR_DAT_007a1760;
  uVar2 = *param_3;
  plStack_90[2] = 0;
  plStack_90[3] = (long)plVar19;
  *plStack_90 = (long)(puVar8 + 0x10);
  plStack_90[1] = 0;
  local_80 = plStack_90;
  if ((uVar2 & 1) == 0) {
    uStack_a8 = param_3[1];
    local_b0 = (undefined8 *)*param_3;
    local_a0 = (void *)param_3[2];
  }
  else {
                    /* try { // try from 00365dc8 to 00365dcf has its CatchHandler @ 003660b8 */
    FUN_002fb36c(&local_b0,param_3[2],param_3[1]);
  }
  local_98 = plVar19;
  FUN_00755c20(1,plStack_90 + 1);
                    /* try { // try from 00365de4 to 00365e13 has its CatchHandler @ 003660f0 */
  plVar12 = (long *)FUN_00369208(param_2,plVar12,&local_70,auStack_78,&local_b0);
  if (*plVar12 == 0) {
    puVar13 = (undefined8 *)FUN_00759c3c(0x48);
    pvVar7 = local_a0;
    uVar2 = uStack_a8;
    puVar10 = local_b0;
    uStack_a8 = 0;
    local_a0 = (void *)0x0;
    local_b0 = (undefined8 *)0x0;
    puVar13[5] = uVar2;
    puVar13[4] = puVar10;
    puVar13[6] = pvVar7;
    puVar13[8] = plStack_90;
    puVar13[7] = local_98;
    local_98 = (long *)0x0;
    plStack_90 = (long *)0x0;
    *puVar13 = 0;
    puVar13[1] = 0;
    puVar13[2] = local_70;
    *plVar12 = (long)puVar13;
    if (*(long *)*param_2 != 0) {
      *param_2 = *(long *)*param_2;
      puVar13 = (undefined8 *)*plVar12;
    }
    FUN_00328410(param_2[1],puVar13);
    param_2[2] = param_2[2] + 1;
  }
  plVar12 = plStack_90;
  if ((plStack_90 != (long *)0x0) &&
     (lVar16 = FUN_00755c50(0xffffffffffffffff,plStack_90 + 1), lVar16 == 0)) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_0071245c(plVar12);
  }
  if (((ulong)local_b0 & 1) != 0) {
    free(local_a0);
  }
  if ((local_88 == (long *)0x0) ||
     (lVar16 = FUN_0073a738(local_88,PTR_PTR_007a16b8,PTR_PTR_007a16e0,0), plVar12 = local_80,
     lVar16 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (local_80 != (long *)0x0) {
      FUN_00755c20(1,local_80 + 1);
    }
    lVar3 = *(long *)(lVar16 + 0x10);
    *param_1 = *(undefined8 *)(lVar16 + 8);
    param_1[1] = lVar3;
    if (lVar3 != 0) {
      FUN_00755c20(1,lVar3 + 8);
    }
    if ((plVar12 != (long *)0x0) &&
       (lVar16 = FUN_00755c50(0xffffffffffffffff,plVar12 + 1), lVar16 == 0)) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      FUN_0071245c(plVar12);
    }
  }
  plVar12 = local_80;
  if ((local_80 != (long *)0x0) &&
     (lVar16 = FUN_00755c50(0xffffffffffffffff,local_80 + 1), lVar16 == 0)) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_0071245c(plVar12);
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
LAB_00366120:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00366124  FUN_00366124 =====

undefined8 FUN_00366124(undefined8 param_1,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  undefined8 local_78;
  void *local_70;
  void *local_68;
  undefined8 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  local_70 = (void *)0x0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_78 = 0;
                    /* try { // try from 00366160 to 0036617b has its CatchHandler @ 00366210 */
  FUN_00716ad0(param_1,(long)&local_78 + 4,4);
  FUN_00716ad0(param_1,&local_78,4);
  lVar2 = (long)(int)local_78;
  lVar3 = (long)(int)local_70;
  if ((long)(int)local_78 * (long)(int)local_70 != 0) {
                    /* try { // try from 00366188 to 0036618f has its CatchHandler @ 0036620c */
    FUN_002feac4(&local_70);
    pvVar5 = local_68;
    for (pvVar1 = local_70; pvVar1 != pvVar5; pvVar1 = (void *)((long)pvVar1 + 4)) {
                    /* try { // try from 0036619c to 003661ab has its CatchHandler @ 00366214 */
      FUN_00716ad0(param_1,pvVar1,4);
    }
  }
                    /* try { // try from 003661b8 to 003661cb has its CatchHandler @ 0036620c */
  FUN_00374610(param_2,lVar3,lVar2,&local_70);
  if (local_70 != (void *)0x0) {
    local_68 = local_70;
    free(local_70);
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}


// ===== 00366244  FUN_00366244 =====

void FUN_00366244(undefined8 *param_1,long *param_2,ulong *param_3,undefined8 param_4,int param_5)

{
  size_t sVar1;
  byte *__s2;
  long lVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  void *pvVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  long *local_98;
  long *plStack_90;
  long *local_88;
  long *local_80;
  undefined1 auStack_78 [8];
  undefined8 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  plVar12 = param_2 + 1;
  plVar17 = (long *)*plVar12;
  if (plVar17 != (long *)0x0) {
    uVar9 = param_3[1];
    __s2 = (byte *)param_3[2];
    plVar10 = plVar12;
    if (((byte)*param_3 & 1) == 0) {
      __s2 = (byte *)((long)param_3 + 1);
      uVar9 = (ulong)(byte)((byte)*param_3 >> 1);
    }
    do {
      bVar3 = *(byte *)(plVar17 + 4);
      if ((bVar3 & 1) == 0) {
        uVar15 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) goto LAB_003662d0;
LAB_00366304:
        sVar1 = uVar9;
        if (uVar15 <= uVar9) {
          sVar1 = uVar15;
        }
        iVar8 = memcmp((void *)((long)plVar17 + 0x21),__s2,sVar1);
        if (iVar8 != 0) goto LAB_003662e8;
LAB_0036631c:
        uVar13 = (uint)(uVar15 < uVar9);
        if (uVar15 < uVar9) goto LAB_003662f0;
LAB_00366328:
        lVar14 = 0;
      }
      else {
        uVar15 = plVar17[5];
        if ((bVar3 & 1) == 0) goto LAB_00366304;
LAB_003662d0:
        sVar1 = uVar9;
        if (uVar15 <= uVar9) {
          sVar1 = uVar15;
        }
        iVar8 = memcmp((void *)plVar17[6],__s2,sVar1);
        if (iVar8 == 0) goto LAB_0036631c;
LAB_003662e8:
        uVar13 = -(iVar8 >> 0x1f);
        if (uVar13 == 0) goto LAB_00366328;
LAB_003662f0:
        lVar14 = 8;
      }
      if (uVar13 == 0) {
        plVar10 = plVar17;
      }
      plVar17 = *(long **)((long)plVar17 + lVar14);
    } while (plVar17 != (long *)0x0);
    if (plVar12 != plVar10) {
      uVar15 = (ulong)(*(byte *)(plVar10 + 4) >> 1);
      pvVar6 = (void *)((long)plVar10 + 0x21);
      if ((*(byte *)(plVar10 + 4) & 1) != 0) {
        uVar15 = plVar10[5];
        pvVar6 = (void *)plVar10[6];
      }
      sVar1 = uVar15;
      if (uVar9 <= uVar15) {
        sVar1 = uVar9;
      }
      iVar8 = memcmp(__s2,pvVar6,sVar1);
      bVar5 = uVar9 < uVar15;
      if (iVar8 != 0) {
        bVar5 = iVar8 < 0;
      }
      plVar12 = plVar10;
      if (!bVar5) {
        if (param_5 != 0) {
          plVar12 = (long *)FUN_00759c3c(0x18);
          *plVar12 = (long)(PTR_DAT_007a1768 + 0x10);
                    /* try { // try from 00366614 to 0036661b has its CatchHandler @ 00366714 */
          uVar9 = FUN_00759c3c(0x28);
                    /* try { // try from 0036661c to 00366627 has its CatchHandler @ 00366704 */
          FUN_00374778(uVar9,param_4);
          plVar12[1] = uVar9;
          local_b0 = uVar9;
                    /* try { // try from 00366630 to 00366637 has its CatchHandler @ 003666f4 */
          plVar17 = (long *)FUN_00759c3c(0x20);
          puVar7 = PTR_DAT_007a1770;
          plVar17[2] = 0;
          plVar17[3] = uVar9;
          plVar12[2] = (long)plVar17;
          *plVar17 = (long)(puVar7 + 0x10);
          plVar17[1] = 0;
                    /* try { // try from 00366650 to 00366657 has its CatchHandler @ 003666e4 */
          plVar17 = (long *)FUN_00759c3c(0x20);
          puVar7 = PTR_DAT_007a1778;
          plVar17[2] = 0;
          plVar17[3] = (long)plVar12;
          *plVar17 = (long)(puVar7 + 0x10);
          plVar17[1] = 0;
          plVar16 = (long *)plVar10[8];
          plVar10[7] = (long)plVar12;
          plVar10[8] = (long)plVar17;
          if ((plVar16 != (long *)0x0) &&
             (lVar14 = FUN_00755c50(0xffffffffffffffff,plVar16 + 1), lVar14 == 0)) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
            FUN_0071245c(plVar16);
          }
        }
        if (*(long *)(lVar4 + 0x28) == local_68) {
          *param_1 = 0;
          param_1[1] = 0;
          return;
        }
        goto LAB_003667a4;
      }
    }
  }
  plVar17 = (long *)FUN_00759c3c(0x18);
  *plVar17 = (long)(PTR_DAT_007a1768 + 0x10);
                    /* try { // try from 003663a0 to 003663a7 has its CatchHandler @ 00366764 */
  uVar9 = FUN_00759c3c(0x28);
                    /* try { // try from 003663a8 to 003663b3 has its CatchHandler @ 00366754 */
  FUN_00374778(uVar9,param_4);
  plVar17[1] = uVar9;
  local_b0 = uVar9;
                    /* try { // try from 003663bc to 003663c3 has its CatchHandler @ 00366744 */
  plVar10 = (long *)FUN_00759c3c(0x20);
  puVar7 = PTR_DAT_007a1770;
  plVar10[2] = 0;
  plVar10[3] = uVar9;
  plVar17[2] = (long)plVar10;
  *plVar10 = (long)(puVar7 + 0x10);
  plVar10[1] = 0;
  local_88 = plVar17;
                    /* try { // try from 003663e0 to 003663e7 has its CatchHandler @ 0036672c */
  plStack_90 = (long *)FUN_00759c3c(0x20);
  puVar7 = PTR_DAT_007a1778;
  uVar9 = *param_3;
  plStack_90[2] = 0;
  plStack_90[3] = (long)plVar17;
  *plStack_90 = (long)(puVar7 + 0x10);
  plStack_90[1] = 0;
  local_80 = plStack_90;
  if ((uVar9 & 1) == 0) {
    uStack_a8 = param_3[1];
    local_b0 = *param_3;
    local_a0 = (void *)param_3[2];
  }
  else {
                    /* try { // try from 00366424 to 0036642b has its CatchHandler @ 00366724 */
    FUN_002fb36c(&local_b0,param_3[2],param_3[1]);
  }
  local_98 = plVar17;
  FUN_00755c20(1,plStack_90 + 1);
                    /* try { // try from 00366440 to 0036647b has its CatchHandler @ 00366774 */
  plVar17 = (long *)FUN_00369208(param_2,plVar12,&local_70,auStack_78,&local_b0);
  plVar12 = plStack_90;
  if (*plVar17 == 0) {
    puVar11 = (undefined8 *)FUN_00759c3c(0x48);
    pvVar6 = local_a0;
    uVar15 = uStack_a8;
    uVar9 = local_b0;
    uStack_a8 = 0;
    local_a0 = (void *)0x0;
    local_b0 = 0;
    puVar11[5] = uVar15;
    puVar11[4] = uVar9;
    puVar11[6] = pvVar6;
    puVar11[8] = plStack_90;
    puVar11[7] = local_98;
    local_98 = (long *)0x0;
    plStack_90 = (long *)0x0;
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = local_70;
    *plVar17 = (long)puVar11;
    if (*(long *)*param_2 != 0) {
      *param_2 = *(long *)*param_2;
      puVar11 = (undefined8 *)*plVar17;
    }
    FUN_00328410(param_2[1],puVar11);
    param_2[2] = param_2[2] + 1;
    plVar12 = plStack_90;
  }
  plStack_90 = plVar12;
  if ((plVar12 != (long *)0x0) &&
     (lVar14 = FUN_00755c50(0xffffffffffffffff,plVar12 + 1), lVar14 == 0)) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_0071245c(plVar12);
  }
  if ((local_b0 & 1) != 0) {
    free(local_a0);
  }
  if ((local_88 == (long *)0x0) ||
     (lVar14 = FUN_0073a738(local_88,PTR_PTR_007a16b8,PTR_PTR_007a16d8,0), plVar12 = local_80,
     lVar14 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (local_80 != (long *)0x0) {
      FUN_00755c20(1,local_80 + 1);
    }
    lVar2 = *(long *)(lVar14 + 0x10);
    *param_1 = *(undefined8 *)(lVar14 + 8);
    param_1[1] = lVar2;
    if (lVar2 != 0) {
      FUN_00755c20(1,lVar2 + 8);
    }
    if ((plVar12 != (long *)0x0) &&
       (lVar14 = FUN_00755c50(0xffffffffffffffff,plVar12 + 1), lVar14 == 0)) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      FUN_0071245c(plVar12);
    }
  }
  plVar12 = local_80;
  if ((local_80 != (long *)0x0) &&
     (lVar14 = FUN_00755c50(0xffffffffffffffff,local_80 + 1), lVar14 == 0)) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_0071245c(plVar12);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
LAB_003667a4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003667a8  FUN_003667a8 =====

void FUN_003667a8(undefined8 *param_1,long *param_2,ulong *param_3,undefined8 *param_4,int param_5)

{
  size_t sVar1;
  ulong uVar2;
  byte *__s2;
  long lVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  void *pvVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 *local_b0;
  ulong uStack_a8;
  void *local_a0;
  long *local_98;
  long *plStack_90;
  long *local_88;
  long *local_80;
  undefined1 auStack_78 [8];
  undefined8 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  plVar12 = param_2 + 1;
  plVar19 = (long *)*plVar12;
  if (plVar19 != (long *)0x0) {
    uVar2 = param_3[1];
    __s2 = (byte *)param_3[2];
    plVar11 = plVar12;
    if (((byte)*param_3 & 1) == 0) {
      __s2 = (byte *)((long)param_3 + 1);
      uVar2 = (ulong)(byte)((byte)*param_3 >> 1);
    }
    do {
      bVar4 = *(byte *)(plVar19 + 4);
      if ((bVar4 & 1) == 0) {
        uVar17 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) goto LAB_00366830;
LAB_00366864:
        sVar1 = uVar2;
        if (uVar17 <= uVar2) {
          sVar1 = uVar17;
        }
        iVar9 = memcmp((void *)((long)plVar19 + 0x21),__s2,sVar1);
        if (iVar9 != 0) goto LAB_00366848;
LAB_0036687c:
        uVar14 = (uint)(uVar17 < uVar2);
        if (uVar17 < uVar2) goto LAB_00366850;
LAB_00366888:
        lVar16 = 0;
      }
      else {
        uVar17 = plVar19[5];
        if ((bVar4 & 1) == 0) goto LAB_00366864;
LAB_00366830:
        sVar1 = uVar2;
        if (uVar17 <= uVar2) {
          sVar1 = uVar17;
        }
        iVar9 = memcmp((void *)plVar19[6],__s2,sVar1);
        if (iVar9 == 0) goto LAB_0036687c;
LAB_00366848:
        uVar14 = -(iVar9 >> 0x1f);
        if (uVar14 == 0) goto LAB_00366888;
LAB_00366850:
        lVar16 = 8;
      }
      if (uVar14 == 0) {
        plVar11 = plVar19;
      }
      plVar19 = *(long **)((long)plVar19 + lVar16);
    } while (plVar19 != (long *)0x0);
    if (plVar12 != plVar11) {
      uVar17 = (ulong)(*(byte *)(plVar11 + 4) >> 1);
      pvVar7 = (void *)((long)plVar11 + 0x21);
      if ((*(byte *)(plVar11 + 4) & 1) != 0) {
        uVar17 = plVar11[5];
        pvVar7 = (void *)plVar11[6];
      }
      sVar1 = uVar17;
      if (uVar2 <= uVar17) {
        sVar1 = uVar2;
      }
      iVar9 = memcmp(__s2,pvVar7,sVar1);
      bVar6 = uVar2 < uVar17;
      if (iVar9 != 0) {
        bVar6 = iVar9 < 0;
      }
      plVar12 = plVar11;
      if (!bVar6) {
        if (param_5 != 0) {
          plVar12 = (long *)FUN_00759c3c(0x18);
          *plVar12 = (long)(PTR_DAT_007a1780 + 0x10);
                    /* try { // try from 00366b7c to 00366b83 has its CatchHandler @ 00366c78 */
          puVar10 = (undefined8 *)FUN_00759c3c(0x18);
          uVar21 = param_4[1];
          uVar20 = *param_4;
          uVar15 = param_4[2];
          param_4[1] = 0;
          param_4[2] = 0;
          puVar10[1] = uVar21;
          *puVar10 = uVar20;
          puVar10[2] = uVar15;
          *param_4 = 0;
          plVar12[1] = (long)puVar10;
          local_b0 = puVar10;
                    /* try { // try from 00366ba8 to 00366baf has its CatchHandler @ 00366c68 */
          plVar19 = (long *)FUN_00759c3c(0x20);
          puVar8 = PTR_DAT_007a1788;
          plVar19[2] = 0;
          plVar19[3] = (long)puVar10;
          plVar12[2] = (long)plVar19;
          *plVar19 = (long)(puVar8 + 0x10);
          plVar19[1] = 0;
                    /* try { // try from 00366bc8 to 00366bcf has its CatchHandler @ 00366c5c */
          plVar19 = (long *)FUN_00759c3c(0x20);
          puVar8 = PTR_DAT_007a1790;
          plVar19[2] = 0;
          plVar19[3] = (long)plVar12;
          *plVar19 = (long)(puVar8 + 0x10);
          plVar19[1] = 0;
          plVar18 = (long *)plVar11[8];
          plVar11[7] = (long)plVar12;
          plVar11[8] = (long)plVar19;
          if ((plVar18 != (long *)0x0) &&
             (lVar16 = FUN_00755c50(0xffffffffffffffff,plVar18 + 1), lVar16 == 0)) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
            FUN_0071245c(plVar18);
          }
        }
        if (*(long *)(lVar5 + 0x28) == local_68) {
          *param_1 = 0;
          param_1[1] = 0;
          return;
        }
        goto LAB_00366cf0;
      }
    }
  }
  plVar19 = (long *)FUN_00759c3c(0x18);
  *plVar19 = (long)(PTR_DAT_007a1780 + 0x10);
                    /* try { // try from 00366904 to 0036690b has its CatchHandler @ 00366cb0 */
  puVar10 = (undefined8 *)FUN_00759c3c(0x18);
  uVar21 = param_4[1];
  uVar20 = *param_4;
  uVar15 = param_4[2];
  param_4[1] = 0;
  param_4[2] = 0;
  puVar10[1] = uVar21;
  *puVar10 = uVar20;
  puVar10[2] = uVar15;
  *param_4 = 0;
  plVar19[1] = (long)puVar10;
  local_b0 = puVar10;
                    /* try { // try from 00366930 to 00366937 has its CatchHandler @ 00366ca0 */
  plVar11 = (long *)FUN_00759c3c(0x20);
  puVar8 = PTR_DAT_007a1788;
  plVar11[2] = 0;
  plVar11[3] = (long)puVar10;
  plVar19[2] = (long)plVar11;
  *plVar11 = (long)(puVar8 + 0x10);
  plVar11[1] = 0;
  local_88 = plVar19;
                    /* try { // try from 00366954 to 0036695b has its CatchHandler @ 00366c90 */
  plStack_90 = (long *)FUN_00759c3c(0x20);
  puVar8 = PTR_DAT_007a1790;
  uVar2 = *param_3;
  plStack_90[2] = 0;
  plStack_90[3] = (long)plVar19;
  *plStack_90 = (long)(puVar8 + 0x10);
  plStack_90[1] = 0;
  local_80 = plStack_90;
  if ((uVar2 & 1) == 0) {
    uStack_a8 = param_3[1];
    local_b0 = (undefined8 *)*param_3;
    local_a0 = (void *)param_3[2];
  }
  else {
                    /* try { // try from 00366998 to 0036699f has its CatchHandler @ 00366c88 */
    FUN_002fb36c(&local_b0,param_3[2],param_3[1]);
  }
  local_98 = plVar19;
  FUN_00755c20(1,plStack_90 + 1);
                    /* try { // try from 003669b4 to 003669e3 has its CatchHandler @ 00366cc0 */
  plVar12 = (long *)FUN_00369208(param_2,plVar12,&local_70,auStack_78,&local_b0);
  if (*plVar12 == 0) {
    puVar13 = (undefined8 *)FUN_00759c3c(0x48);
    pvVar7 = local_a0;
    uVar2 = uStack_a8;
    puVar10 = local_b0;
    uStack_a8 = 0;
    local_a0 = (void *)0x0;
    local_b0 = (undefined8 *)0x0;
    puVar13[5] = uVar2;
    puVar13[4] = puVar10;
    puVar13[6] = pvVar7;
    puVar13[8] = plStack_90;
    puVar13[7] = local_98;
    local_98 = (long *)0x0;
    plStack_90 = (long *)0x0;
    *puVar13 = 0;
    puVar13[1] = 0;
    puVar13[2] = local_70;
    *plVar12 = (long)puVar13;
    if (*(long *)*param_2 != 0) {
      *param_2 = *(long *)*param_2;
      puVar13 = (undefined8 *)*plVar12;
    }
    FUN_00328410(param_2[1],puVar13);
    param_2[2] = param_2[2] + 1;
  }
  plVar12 = plStack_90;
  if ((plStack_90 != (long *)0x0) &&
     (lVar16 = FUN_00755c50(0xffffffffffffffff,plStack_90 + 1), lVar16 == 0)) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_0071245c(plVar12);
  }
  if (((ulong)local_b0 & 1) != 0) {
    free(local_a0);
  }
  if ((local_88 == (long *)0x0) ||
     (lVar16 = FUN_0073a738(local_88,PTR_PTR_007a16b8,PTR_PTR_007a16d0,0), plVar12 = local_80,
     lVar16 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (local_80 != (long *)0x0) {
      FUN_00755c20(1,local_80 + 1);
    }
    lVar3 = *(long *)(lVar16 + 0x10);
    *param_1 = *(undefined8 *)(lVar16 + 8);
    param_1[1] = lVar3;
    if (lVar3 != 0) {
      FUN_00755c20(1,lVar3 + 8);
    }
    if ((plVar12 != (long *)0x0) &&
       (lVar16 = FUN_00755c50(0xffffffffffffffff,plVar12 + 1), lVar16 == 0)) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      FUN_0071245c(plVar12);
    }
  }
  plVar12 = local_80;
  if ((local_80 != (long *)0x0) &&
     (lVar16 = FUN_00755c50(0xffffffffffffffff,local_80 + 1), lVar16 == 0)) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_0071245c(plVar12);
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
LAB_00366cf0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00366cf4  FUN_00366cf4 =====

void FUN_00366cf4(undefined8 *param_1,long *param_2,ulong *param_3,undefined8 *param_4,int param_5)

{
  size_t sVar1;
  ulong uVar2;
  byte *__s2;
  long lVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  void *pvVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 *local_b0;
  ulong uStack_a8;
  void *local_a0;
  long *local_98;
  long *plStack_90;
  long *local_88;
  long *local_80;
  undefined1 auStack_78 [8];
  undefined8 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  plVar12 = param_2 + 1;
  plVar19 = (long *)*plVar12;
  if (plVar19 != (long *)0x0) {
    uVar2 = param_3[1];
    __s2 = (byte *)param_3[2];
    plVar11 = plVar12;
    if (((byte)*param_3 & 1) == 0) {
      __s2 = (byte *)((long)param_3 + 1);
      uVar2 = (ulong)(byte)((byte)*param_3 >> 1);
    }
    do {
      bVar4 = *(byte *)(plVar19 + 4);
      if ((bVar4 & 1) == 0) {
        uVar17 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) goto LAB_00366d7c;
LAB_00366db0:
        sVar1 = uVar2;
        if (uVar17 <= uVar2) {
          sVar1 = uVar17;
        }
        iVar9 = memcmp((void *)((long)plVar19 + 0x21),__s2,sVar1);
        if (iVar9 != 0) goto LAB_00366d94;
LAB_00366dc8:
        uVar14 = (uint)(uVar17 < uVar2);
        if (uVar17 < uVar2) goto LAB_00366d9c;
LAB_00366dd4:
        lVar16 = 0;
      }
      else {
        uVar17 = plVar19[5];
        if ((bVar4 & 1) == 0) goto LAB_00366db0;
LAB_00366d7c:
        sVar1 = uVar2;
        if (uVar17 <= uVar2) {
          sVar1 = uVar17;
        }
        iVar9 = memcmp((void *)plVar19[6],__s2,sVar1);
        if (iVar9 == 0) goto LAB_00366dc8;
LAB_00366d94:
        uVar14 = -(iVar9 >> 0x1f);
        if (uVar14 == 0) goto LAB_00366dd4;
LAB_00366d9c:
        lVar16 = 8;
      }
      if (uVar14 == 0) {
        plVar11 = plVar19;
      }
      plVar19 = *(long **)((long)plVar19 + lVar16);
    } while (plVar19 != (long *)0x0);
    if (plVar12 != plVar11) {
      uVar17 = (ulong)(*(byte *)(plVar11 + 4) >> 1);
      pvVar7 = (void *)((long)plVar11 + 0x21);
      if ((*(byte *)(plVar11 + 4) & 1) != 0) {
        uVar17 = plVar11[5];
        pvVar7 = (void *)plVar11[6];
      }
      sVar1 = uVar17;
      if (uVar2 <= uVar17) {
        sVar1 = uVar2;
      }
      iVar9 = memcmp(__s2,pvVar7,sVar1);
      bVar6 = uVar2 < uVar17;
      if (iVar9 != 0) {
        bVar6 = iVar9 < 0;
      }
      plVar12 = plVar11;
      if (!bVar6) {
        if (param_5 != 0) {
          plVar12 = (long *)FUN_00759c3c(0x18);
          *plVar12 = (long)(PTR_DAT_007a1798 + 0x10);
                    /* try { // try from 003670c8 to 003670cf has its CatchHandler @ 003671c4 */
          puVar10 = (undefined8 *)FUN_00759c3c(0x18);
          uVar21 = param_4[1];
          uVar20 = *param_4;
          uVar15 = param_4[2];
          param_4[1] = 0;
          param_4[2] = 0;
          puVar10[1] = uVar21;
          *puVar10 = uVar20;
          puVar10[2] = uVar15;
          *param_4 = 0;
          plVar12[1] = (long)puVar10;
          local_b0 = puVar10;
                    /* try { // try from 003670f4 to 003670fb has its CatchHandler @ 003671b4 */
          plVar19 = (long *)FUN_00759c3c(0x20);
          puVar8 = PTR_DAT_007a17a0;
          plVar19[2] = 0;
          plVar19[3] = (long)puVar10;
          plVar12[2] = (long)plVar19;
          *plVar19 = (long)(puVar8 + 0x10);
          plVar19[1] = 0;
                    /* try { // try from 00367114 to 0036711b has its CatchHandler @ 003671a8 */
          plVar19 = (long *)FUN_00759c3c(0x20);
          puVar8 = PTR_DAT_007a17a8;
          plVar19[2] = 0;
          plVar19[3] = (long)plVar12;
          *plVar19 = (long)(puVar8 + 0x10);
          plVar19[1] = 0;
          plVar18 = (long *)plVar11[8];
          plVar11[7] = (long)plVar12;
          plVar11[8] = (long)plVar19;
          if ((plVar18 != (long *)0x0) &&
             (lVar16 = FUN_00755c50(0xffffffffffffffff,plVar18 + 1), lVar16 == 0)) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
            FUN_0071245c(plVar18);
          }
        }
        if (*(long *)(lVar5 + 0x28) == local_68) {
          *param_1 = 0;
          param_1[1] = 0;
          return;
        }
        goto LAB_0036723c;
      }
    }
  }
  plVar19 = (long *)FUN_00759c3c(0x18);
  *plVar19 = (long)(PTR_DAT_007a1798 + 0x10);
                    /* try { // try from 00366e50 to 00366e57 has its CatchHandler @ 003671fc */
  puVar10 = (undefined8 *)FUN_00759c3c(0x18);
  uVar21 = param_4[1];
  uVar20 = *param_4;
  uVar15 = param_4[2];
  param_4[1] = 0;
  param_4[2] = 0;
  puVar10[1] = uVar21;
  *puVar10 = uVar20;
  puVar10[2] = uVar15;
  *param_4 = 0;
  plVar19[1] = (long)puVar10;
  local_b0 = puVar10;
                    /* try { // try from 00366e7c to 00366e83 has its CatchHandler @ 003671ec */
  plVar11 = (long *)FUN_00759c3c(0x20);
  puVar8 = PTR_DAT_007a17a0;
  plVar11[2] = 0;
  plVar11[3] = (long)puVar10;
  plVar19[2] = (long)plVar11;
  *plVar11 = (long)(puVar8 + 0x10);
  plVar11[1] = 0;
  local_88 = plVar19;
                    /* try { // try from 00366ea0 to 00366ea7 has its CatchHandler @ 003671dc */
  plStack_90 = (long *)FUN_00759c3c(0x20);
  puVar8 = PTR_DAT_007a17a8;
  uVar2 = *param_3;
  plStack_90[2] = 0;
  plStack_90[3] = (long)plVar19;
  *plStack_90 = (long)(puVar8 + 0x10);
  plStack_90[1] = 0;
  local_80 = plStack_90;
  if ((uVar2 & 1) == 0) {
    uStack_a8 = param_3[1];
    local_b0 = (undefined8 *)*param_3;
    local_a0 = (void *)param_3[2];
  }
  else {
                    /* try { // try from 00366ee4 to 00366eeb has its CatchHandler @ 003671d4 */
    FUN_002fb36c(&local_b0,param_3[2],param_3[1]);
  }
  local_98 = plVar19;
  FUN_00755c20(1,plStack_90 + 1);
                    /* try { // try from 00366f00 to 00366f2f has its CatchHandler @ 0036720c */
  plVar12 = (long *)FUN_00369208(param_2,plVar12,&local_70,auStack_78,&local_b0);
  if (*plVar12 == 0) {
    puVar13 = (undefined8 *)FUN_00759c3c(0x48);
    pvVar7 = local_a0;
    uVar2 = uStack_a8;
    puVar10 = local_b0;
    uStack_a8 = 0;
    local_a0 = (void *)0x0;
    local_b0 = (undefined8 *)0x0;
    puVar13[5] = uVar2;
    puVar13[4] = puVar10;
    puVar13[6] = pvVar7;
    puVar13[8] = plStack_90;
    puVar13[7] = local_98;
    local_98 = (long *)0x0;
    plStack_90 = (long *)0x0;
    *puVar13 = 0;
    puVar13[1] = 0;
    puVar13[2] = local_70;
    *plVar12 = (long)puVar13;
    if (*(long *)*param_2 != 0) {
      *param_2 = *(long *)*param_2;
      puVar13 = (undefined8 *)*plVar12;
    }
    FUN_00328410(param_2[1],puVar13);
    param_2[2] = param_2[2] + 1;
  }
  plVar12 = plStack_90;
  if ((plStack_90 != (long *)0x0) &&
     (lVar16 = FUN_00755c50(0xffffffffffffffff,plStack_90 + 1), lVar16 == 0)) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_0071245c(plVar12);
  }
  if (((ulong)local_b0 & 1) != 0) {
    free(local_a0);
  }
  if ((local_88 == (long *)0x0) ||
     (lVar16 = FUN_0073a738(local_88,PTR_PTR_007a16b8,PTR_PTR_007a16e8,0), plVar12 = local_80,
     lVar16 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (local_80 != (long *)0x0) {
      FUN_00755c20(1,local_80 + 1);
    }
    lVar3 = *(long *)(lVar16 + 0x10);
    *param_1 = *(undefined8 *)(lVar16 + 8);
    param_1[1] = lVar3;
    if (lVar3 != 0) {
      FUN_00755c20(1,lVar3 + 8);
    }
    if ((plVar12 != (long *)0x0) &&
       (lVar16 = FUN_00755c50(0xffffffffffffffff,plVar12 + 1), lVar16 == 0)) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      FUN_0071245c(plVar12);
    }
  }
  plVar12 = local_80;
  if ((local_80 != (long *)0x0) &&
     (lVar16 = FUN_00755c50(0xffffffffffffffff,local_80 + 1), lVar16 == 0)) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_0071245c(plVar12);
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
LAB_0036723c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00367240  FUN_00367240 =====

undefined8 FUN_00367240(undefined8 param_1,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  size_t __n;
  long lVar4;
  void *__src;
  void *pvVar5;
  long *plVar6;
  undefined8 uVar7;
  void *local_78;
  void *local_70;
  void *local_68;
  void *local_60;
  void *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  local_60 = (void *)0x0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_78 = (void *)((ulong)local_78 & 0xffffffff00000000);
                    /* try { // try from 00367278 to 00367293 has its CatchHandler @ 003673b8 */
  FUN_00716ad0(param_1,&local_78,4);
  if ((int)local_78 == 0) {
    local_78 = (void *)0x0;
    local_70 = (void *)0x0;
    local_68 = (void *)0x0;
  }
  else {
    FUN_00368538(&local_60);
    pvVar5 = local_58;
    __src = local_60;
    for (pvVar1 = local_60; local_60 = __src, pvVar1 != pvVar5; pvVar1 = (void *)((long)pvVar1 + 8))
    {
                    /* try { // try from 003672a0 to 003672af has its CatchHandler @ 003673c0 */
      FUN_00716ad0(param_1,pvVar1,8);
      __src = local_60;
    }
    __n = (long)local_58 - (long)__src;
    local_78 = (void *)0x0;
    local_70 = (void *)0x0;
    local_68 = (void *)0x0;
    if (__n != 0) {
      if ((long)__n < 0) {
        if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 0036739c to 003673a3 has its CatchHandler @ 003673a4 */
          uVar7 = FUN_00368664(&local_78);
                    /* catch() { ... } // from try @ 003672d4 with catch @ 003673a4
                       catch() { ... } // from try @ 0036739c with catch @ 003673a4 */
          if (local_78 != (void *)0x0) {
            local_70 = local_78;
            free(local_78);
          }
          if (local_60 != (void *)0x0) {
            local_58 = local_60;
            free(local_60);
          }
          if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
            FUN_00755eac(uVar7);
          }
        }
        goto LAB_00367408;
      }
                    /* try { // try from 003672d4 to 003672db has its CatchHandler @ 003673a4 */
      local_78 = (void *)FUN_00759c3c(__n);
      pvVar1 = (void *)((long)local_78 + __n);
      local_70 = local_78;
      local_68 = pvVar1;
      memmove(local_78,__src,__n);
      local_70 = pvVar1;
    }
  }
                    /* try { // try from 00367304 to 0036730f has its CatchHandler @ 003673b4 */
  FUN_0036e09c(param_2,&local_78);
  plVar6 = (long *)FUN_0036e624(param_2);
  lVar3 = plVar6[1];
  for (lVar2 = *plVar6; lVar2 != lVar3; lVar2 = lVar2 + 4) {
                    /* try { // try from 00367324 to 00367333 has its CatchHandler @ 003673c8 */
    FUN_00716ad0(param_1,lVar2,4);
  }
  if (local_78 != (void *)0x0) {
    local_70 = local_78;
    free(local_78);
  }
  if (local_60 != (void *)0x0) {
    local_58 = local_60;
    free(local_60);
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return param_1;
  }
LAB_00367408:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036740c  FUN_0036740c =====

void FUN_0036740c(undefined8 *param_1,long *param_2,ulong *param_3,undefined8 param_4,int param_5)

{
  size_t sVar1;
  byte *__s2;
  long lVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  void *pvVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  long *local_98;
  long *plStack_90;
  long *local_88;
  long *local_80;
  undefined1 auStack_78 [8];
  undefined8 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  plVar12 = param_2 + 1;
  plVar17 = (long *)*plVar12;
  if (plVar17 != (long *)0x0) {
    uVar9 = param_3[1];
    __s2 = (byte *)param_3[2];
    plVar10 = plVar12;
    if (((byte)*param_3 & 1) == 0) {
      __s2 = (byte *)((long)param_3 + 1);
      uVar9 = (ulong)(byte)((byte)*param_3 >> 1);
    }
    do {
      bVar3 = *(byte *)(plVar17 + 4);
      if ((bVar3 & 1) == 0) {
        uVar15 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) goto LAB_00367498;
LAB_003674cc:
        sVar1 = uVar9;
        if (uVar15 <= uVar9) {
          sVar1 = uVar15;
        }
        iVar8 = memcmp((void *)((long)plVar17 + 0x21),__s2,sVar1);
        if (iVar8 != 0) goto LAB_003674b0;
LAB_003674e4:
        uVar13 = (uint)(uVar15 < uVar9);
        if (uVar15 < uVar9) goto LAB_003674b8;
LAB_003674f0:
        lVar14 = 0;
      }
      else {
        uVar15 = plVar17[5];
        if ((bVar3 & 1) == 0) goto LAB_003674cc;
LAB_00367498:
        sVar1 = uVar9;
        if (uVar15 <= uVar9) {
          sVar1 = uVar15;
        }
        iVar8 = memcmp((void *)plVar17[6],__s2,sVar1);
        if (iVar8 == 0) goto LAB_003674e4;
LAB_003674b0:
        uVar13 = -(iVar8 >> 0x1f);
        if (uVar13 == 0) goto LAB_003674f0;
LAB_003674b8:
        lVar14 = 8;
      }
      if (uVar13 == 0) {
        plVar10 = plVar17;
      }
      plVar17 = *(long **)((long)plVar17 + lVar14);
    } while (plVar17 != (long *)0x0);
    if (plVar12 != plVar10) {
      uVar15 = (ulong)(*(byte *)(plVar10 + 4) >> 1);
      pvVar6 = (void *)((long)plVar10 + 0x21);
      if ((*(byte *)(plVar10 + 4) & 1) != 0) {
        uVar15 = plVar10[5];
        pvVar6 = (void *)plVar10[6];
      }
      sVar1 = uVar15;
      if (uVar9 <= uVar15) {
        sVar1 = uVar9;
      }
      iVar8 = memcmp(__s2,pvVar6,sVar1);
      bVar5 = uVar9 < uVar15;
      if (iVar8 != 0) {
        bVar5 = iVar8 < 0;
      }
      plVar12 = plVar10;
      if (!bVar5) {
        if (param_5 != 0) {
          plVar12 = (long *)FUN_00759c3c(0x18);
          *plVar12 = (long)(PTR_DAT_007a17b0 + 0x10);
                    /* try { // try from 003677dc to 003677e3 has its CatchHandler @ 003678cc */
          uVar9 = FUN_00759c3c(0x48);
          FUN_0036e38c(uVar9,param_4);
          plVar12[1] = uVar9;
          local_b0 = uVar9;
                    /* try { // try from 003677f8 to 003677ff has its CatchHandler @ 003678bc */
          plVar17 = (long *)FUN_00759c3c(0x20);
          puVar7 = PTR_DAT_007a17b8;
          plVar17[2] = 0;
          plVar17[3] = uVar9;
          plVar12[2] = (long)plVar17;
          *plVar17 = (long)(puVar7 + 0x10);
          plVar17[1] = 0;
                    /* try { // try from 00367818 to 0036781f has its CatchHandler @ 003678ac */
          plVar17 = (long *)FUN_00759c3c(0x20);
          puVar7 = PTR_DAT_007a17c0;
          plVar17[2] = 0;
          plVar17[3] = (long)plVar12;
          *plVar17 = (long)(puVar7 + 0x10);
          plVar17[1] = 0;
          plVar16 = (long *)plVar10[8];
          plVar10[7] = (long)plVar12;
          plVar10[8] = (long)plVar17;
          if ((plVar16 != (long *)0x0) &&
             (lVar14 = FUN_00755c50(0xffffffffffffffff,plVar16 + 1), lVar14 == 0)) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
            FUN_0071245c(plVar16);
          }
        }
        if (*(long *)(lVar4 + 0x28) == local_68) {
          *param_1 = 0;
          param_1[1] = 0;
          return;
        }
        goto LAB_0036794c;
      }
    }
  }
  plVar17 = (long *)FUN_00759c3c(0x18);
  *plVar17 = (long)(PTR_DAT_007a17b0 + 0x10);
                    /* try { // try from 00367568 to 0036756f has its CatchHandler @ 0036790c */
  uVar9 = FUN_00759c3c(0x48);
  FUN_0036e38c(uVar9,param_4);
  plVar17[1] = uVar9;
  local_b0 = uVar9;
                    /* try { // try from 00367584 to 0036758b has its CatchHandler @ 003678fc */
  plVar10 = (long *)FUN_00759c3c(0x20);
  puVar7 = PTR_DAT_007a17b8;
  plVar10[2] = 0;
  plVar10[3] = uVar9;
  plVar17[2] = (long)plVar10;
  *plVar10 = (long)(puVar7 + 0x10);
  plVar10[1] = 0;
  local_88 = plVar17;
                    /* try { // try from 003675a8 to 003675af has its CatchHandler @ 003678e4 */
  plStack_90 = (long *)FUN_00759c3c(0x20);
  puVar7 = PTR_DAT_007a17c0;
  uVar9 = *param_3;
  plStack_90[2] = 0;
  plStack_90[3] = (long)plVar17;
  *plStack_90 = (long)(puVar7 + 0x10);
  plStack_90[1] = 0;
  local_80 = plStack_90;
  if ((uVar9 & 1) == 0) {
    uStack_a8 = param_3[1];
    local_b0 = *param_3;
    local_a0 = (void *)param_3[2];
  }
  else {
                    /* try { // try from 003675ec to 003675f3 has its CatchHandler @ 003678dc */
    FUN_002fb36c(&local_b0,param_3[2],param_3[1]);
  }
  local_98 = plVar17;
  FUN_00755c20(1,plStack_90 + 1);
                    /* try { // try from 00367608 to 00367643 has its CatchHandler @ 0036791c */
  plVar17 = (long *)FUN_00369208(param_2,plVar12,&local_70,auStack_78,&local_b0);
  plVar12 = plStack_90;
  if (*plVar17 == 0) {
    puVar11 = (undefined8 *)FUN_00759c3c(0x48);
    pvVar6 = local_a0;
    uVar15 = uStack_a8;
    uVar9 = local_b0;
    uStack_a8 = 0;
    local_a0 = (void *)0x0;
    local_b0 = 0;
    puVar11[5] = uVar15;
    puVar11[4] = uVar9;
    puVar11[6] = pvVar6;
    puVar11[8] = plStack_90;
    puVar11[7] = local_98;
    local_98 = (long *)0x0;
    plStack_90 = (long *)0x0;
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = local_70;
    *plVar17 = (long)puVar11;
    if (*(long *)*param_2 != 0) {
      *param_2 = *(long *)*param_2;
      puVar11 = (undefined8 *)*plVar17;
    }
    FUN_00328410(param_2[1],puVar11);
    param_2[2] = param_2[2] + 1;
    plVar12 = plStack_90;
  }
  plStack_90 = plVar12;
  if ((plVar12 != (long *)0x0) &&
     (lVar14 = FUN_00755c50(0xffffffffffffffff,plVar12 + 1), lVar14 == 0)) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_0071245c(plVar12);
  }
  if ((local_b0 & 1) != 0) {
    free(local_a0);
  }
  if ((local_88 == (long *)0x0) ||
     (lVar14 = FUN_0073a738(local_88,PTR_PTR_007a16b8,PTR_PTR_007a16c8,0), plVar12 = local_80,
     lVar14 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (local_80 != (long *)0x0) {
      FUN_00755c20(1,local_80 + 1);
    }
    lVar2 = *(long *)(lVar14 + 0x10);
    *param_1 = *(undefined8 *)(lVar14 + 8);
    param_1[1] = lVar2;
    if (lVar2 != 0) {
      FUN_00755c20(1,lVar2 + 8);
    }
    if ((plVar12 != (long *)0x0) &&
       (lVar14 = FUN_00755c50(0xffffffffffffffff,plVar12 + 1), lVar14 == 0)) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      FUN_0071245c(plVar12);
    }
  }
  plVar12 = local_80;
  if ((local_80 != (long *)0x0) &&
     (lVar14 = FUN_00755c50(0xffffffffffffffff,local_80 + 1), lVar14 == 0)) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_0071245c(plVar12);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
LAB_0036794c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00367950  FUN_00367950 =====

void FUN_00367950(undefined8 *param_1,long *param_2,ulong *param_3,undefined8 *param_4,int param_5)

{
  size_t sVar1;
  ulong uVar2;
  byte *__s2;
  long lVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  void *pvVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 *local_b0;
  ulong uStack_a8;
  void *local_a0;
  long *local_98;
  long *plStack_90;
  long *local_88;
  long *local_80;
  undefined1 auStack_78 [8];
  undefined8 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  plVar12 = param_2 + 1;
  plVar19 = (long *)*plVar12;
  if (plVar19 != (long *)0x0) {
    uVar2 = param_3[1];
    __s2 = (byte *)param_3[2];
    plVar11 = plVar12;
    if (((byte)*param_3 & 1) == 0) {
      __s2 = (byte *)((long)param_3 + 1);
      uVar2 = (ulong)(byte)((byte)*param_3 >> 1);
    }
    do {
      bVar4 = *(byte *)(plVar19 + 4);
      if ((bVar4 & 1) == 0) {
        uVar17 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) goto LAB_003679d8;
LAB_00367a0c:
        sVar1 = uVar2;
        if (uVar17 <= uVar2) {
          sVar1 = uVar17;
        }
        iVar9 = memcmp((void *)((long)plVar19 + 0x21),__s2,sVar1);
        if (iVar9 != 0) goto LAB_003679f0;
LAB_00367a24:
        uVar14 = (uint)(uVar17 < uVar2);
        if (uVar17 < uVar2) goto LAB_003679f8;
LAB_00367a30:
        lVar16 = 0;
      }
      else {
        uVar17 = plVar19[5];
        if ((bVar4 & 1) == 0) goto LAB_00367a0c;
LAB_003679d8:
        sVar1 = uVar2;
        if (uVar17 <= uVar2) {
          sVar1 = uVar17;
        }
        iVar9 = memcmp((void *)plVar19[6],__s2,sVar1);
        if (iVar9 == 0) goto LAB_00367a24;
LAB_003679f0:
        uVar14 = -(iVar9 >> 0x1f);
        if (uVar14 == 0) goto LAB_00367a30;
LAB_003679f8:
        lVar16 = 8;
      }
      if (uVar14 == 0) {
        plVar11 = plVar19;
      }
      plVar19 = *(long **)((long)plVar19 + lVar16);
    } while (plVar19 != (long *)0x0);
    if (plVar12 != plVar11) {
      uVar17 = (ulong)(*(byte *)(plVar11 + 4) >> 1);
      pvVar7 = (void *)((long)plVar11 + 0x21);
      if ((*(byte *)(plVar11 + 4) & 1) != 0) {
        uVar17 = plVar11[5];
        pvVar7 = (void *)plVar11[6];
      }
      sVar1 = uVar17;
      if (uVar2 <= uVar17) {
        sVar1 = uVar2;
      }
      iVar9 = memcmp(__s2,pvVar7,sVar1);
      bVar6 = uVar2 < uVar17;
      if (iVar9 != 0) {
        bVar6 = iVar9 < 0;
      }
      plVar12 = plVar11;
      if (!bVar6) {
        if (param_5 != 0) {
          plVar12 = (long *)FUN_00759c3c(0x18);
          *plVar12 = (long)(PTR_DAT_007a17c8 + 0x10);
                    /* try { // try from 00367d24 to 00367d2b has its CatchHandler @ 00367e20 */
          puVar10 = (undefined8 *)FUN_00759c3c(0x18);
          uVar21 = param_4[1];
          uVar20 = *param_4;
          uVar15 = param_4[2];
          param_4[1] = 0;
          param_4[2] = 0;
          puVar10[1] = uVar21;
          *puVar10 = uVar20;
          puVar10[2] = uVar15;
          *param_4 = 0;
          plVar12[1] = (long)puVar10;
          local_b0 = puVar10;
                    /* try { // try from 00367d50 to 00367d57 has its CatchHandler @ 00367e10 */
          plVar19 = (long *)FUN_00759c3c(0x20);
          puVar8 = PTR_DAT_007a17d0;
          plVar19[2] = 0;
          plVar19[3] = (long)puVar10;
          plVar12[2] = (long)plVar19;
          *plVar19 = (long)(puVar8 + 0x10);
          plVar19[1] = 0;
                    /* try { // try from 00367d70 to 00367d77 has its CatchHandler @ 00367e04 */
          plVar19 = (long *)FUN_00759c3c(0x20);
          puVar8 = PTR_DAT_007a17d8;
          plVar19[2] = 0;
          plVar19[3] = (long)plVar12;
          *plVar19 = (long)(puVar8 + 0x10);
          plVar19[1] = 0;
          plVar18 = (long *)plVar11[8];
          plVar11[7] = (long)plVar12;
          plVar11[8] = (long)plVar19;
          if ((plVar18 != (long *)0x0) &&
             (lVar16 = FUN_00755c50(0xffffffffffffffff,plVar18 + 1), lVar16 == 0)) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
            FUN_0071245c(plVar18);
          }
        }
        if (*(long *)(lVar5 + 0x28) == local_68) {
          *param_1 = 0;
          param_1[1] = 0;
          return;
        }
        goto LAB_00367e98;
      }
    }
  }
  plVar19 = (long *)FUN_00759c3c(0x18);
  *plVar19 = (long)(PTR_DAT_007a17c8 + 0x10);
                    /* try { // try from 00367aac to 00367ab3 has its CatchHandler @ 00367e58 */
  puVar10 = (undefined8 *)FUN_00759c3c(0x18);
  uVar21 = param_4[1];
  uVar20 = *param_4;
  uVar15 = param_4[2];
  param_4[1] = 0;
  param_4[2] = 0;
  puVar10[1] = uVar21;
  *puVar10 = uVar20;
  puVar10[2] = uVar15;
  *param_4 = 0;
  plVar19[1] = (long)puVar10;
  local_b0 = puVar10;
                    /* try { // try from 00367ad8 to 00367adf has its CatchHandler @ 00367e48 */
  plVar11 = (long *)FUN_00759c3c(0x20);
  puVar8 = PTR_DAT_007a17d0;
  plVar11[2] = 0;
  plVar11[3] = (long)puVar10;
  plVar19[2] = (long)plVar11;
  *plVar11 = (long)(puVar8 + 0x10);
  plVar11[1] = 0;
  local_88 = plVar19;
                    /* try { // try from 00367afc to 00367b03 has its CatchHandler @ 00367e38 */
  plStack_90 = (long *)FUN_00759c3c(0x20);
  puVar8 = PTR_DAT_007a17d8;
  uVar2 = *param_3;
  plStack_90[2] = 0;
  plStack_90[3] = (long)plVar19;
  *plStack_90 = (long)(puVar8 + 0x10);
  plStack_90[1] = 0;
  local_80 = plStack_90;
  if ((uVar2 & 1) == 0) {
    uStack_a8 = param_3[1];
    local_b0 = (undefined8 *)*param_3;
    local_a0 = (void *)param_3[2];
  }
  else {
                    /* try { // try from 00367b40 to 00367b47 has its CatchHandler @ 00367e30 */
    FUN_002fb36c(&local_b0,param_3[2],param_3[1]);
  }
  local_98 = plVar19;
  FUN_00755c20(1,plStack_90 + 1);
                    /* try { // try from 00367b5c to 00367b8b has its CatchHandler @ 00367e68 */
  plVar12 = (long *)FUN_00369208(param_2,plVar12,&local_70,auStack_78,&local_b0);
  if (*plVar12 == 0) {
    puVar13 = (undefined8 *)FUN_00759c3c(0x48);
    pvVar7 = local_a0;
    uVar2 = uStack_a8;
    puVar10 = local_b0;
    uStack_a8 = 0;
    local_a0 = (void *)0x0;
    local_b0 = (undefined8 *)0x0;
    puVar13[5] = uVar2;
    puVar13[4] = puVar10;
    puVar13[6] = pvVar7;
    puVar13[8] = plStack_90;
    puVar13[7] = local_98;
    local_98 = (long *)0x0;
    plStack_90 = (long *)0x0;
    *puVar13 = 0;
    puVar13[1] = 0;
    puVar13[2] = local_70;
    *plVar12 = (long)puVar13;
    if (*(long *)*param_2 != 0) {
      *param_2 = *(long *)*param_2;
      puVar13 = (undefined8 *)*plVar12;
    }
    FUN_00328410(param_2[1],puVar13);
    param_2[2] = param_2[2] + 1;
  }
  plVar12 = plStack_90;
  if ((plStack_90 != (long *)0x0) &&
     (lVar16 = FUN_00755c50(0xffffffffffffffff,plStack_90 + 1), lVar16 == 0)) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_0071245c(plVar12);
  }
  if (((ulong)local_b0 & 1) != 0) {
    free(local_a0);
  }
  if ((local_88 == (long *)0x0) ||
     (lVar16 = FUN_0073a738(local_88,PTR_PTR_007a16b8,PTR_PTR_007a16c0,0), plVar12 = local_80,
     lVar16 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (local_80 != (long *)0x0) {
      FUN_00755c20(1,local_80 + 1);
    }
    lVar3 = *(long *)(lVar16 + 0x10);
    *param_1 = *(undefined8 *)(lVar16 + 8);
    param_1[1] = lVar3;
    if (lVar3 != 0) {
      FUN_00755c20(1,lVar3 + 8);
    }
    if ((plVar12 != (long *)0x0) &&
       (lVar16 = FUN_00755c50(0xffffffffffffffff,plVar12 + 1), lVar16 == 0)) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      FUN_0071245c(plVar12);
    }
  }
  plVar12 = local_80;
  if ((local_80 != (long *)0x0) &&
     (lVar16 = FUN_00755c50(0xffffffffffffffff,local_80 + 1), lVar16 == 0)) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_0071245c(plVar12);
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
LAB_00367e98:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00367e9c  FUN_00367e9c =====

void FUN_00367e9c(undefined8 *param_1)

{
  void *__ptr;
  void *pvVar1;
  void *pvVar2;
  
  pvVar2 = (void *)*param_1;
  if (pvVar2 != (void *)0x0) {
    pvVar1 = (void *)param_1[1];
    __ptr = pvVar2;
    if (pvVar1 != pvVar2) {
      do {
        pvVar1 = (void *)((long)pvVar1 + -0x48);
        FUN_0036e048(pvVar1);
      } while (pvVar1 != pvVar2);
      __ptr = (void *)*param_1;
    }
    param_1[1] = pvVar2;
    free(__ptr);
    return;
  }
  return;
}


// ===== 00367f04  FUN_00367f04 =====

undefined8 FUN_00367f04(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong local_180;
  ulong local_178;
  void *local_170;
  undefined4 local_168;
  int local_164;
  long local_160 [3];
  undefined **ppuStack_148;
  uint auStack_140 [14];
  byte local_108;
  void *local_f8;
  undefined1 auStack_e0 [152];
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar8 = *param_2;
  iVar1 = *(int *)(param_2 + 1) - (int)uVar8;
  if (-1 < param_3) {
    iVar1 = param_3;
  }
  FUN_00303c58(local_160);
                    /* try { // try from 00367f50 to 00367f73 has its CatchHandler @ 00368148 */
  FUN_00717c94(local_160 + 2,uVar8,(long)iVar1);
  FUN_00716cc4(local_160,0,0);
  local_180 = 0;
  local_178 = 0;
  local_170 = (void *)0x0;
  local_168 = 0;
  if ((*(byte *)((long)auStack_140 + *(long *)(local_160[0] + -0x18)) >> 1 & 1) == 0) {
    do {
      local_164 = 0;
                    /* try { // try from 00367fac to 00368043 has its CatchHandler @ 00368158 */
      FUN_00716ad0(local_160,&local_164,4);
      FUN_00713cc0(&local_180,(long)local_164,0);
      pvVar2 = (void *)((ulong)&local_180 | 1);
      if ((local_180 & 1) != 0) {
        pvVar2 = local_170;
      }
      FUN_00716ad0(local_160,pvVar2,(long)local_164);
      uVar4 = *(uint *)((long)auStack_140 + *(long *)(local_160[0] + -0x18));
      uVar7 = (ulong)uVar4;
      if (uVar4 == 0) {
        uVar7 = local_180 >> 1 & 0x7f;
        if ((local_180 & 1) != 0) {
          uVar7 = local_178;
        }
        if (uVar7 != 0) {
          FUN_00716ad0(local_160,&local_168,4);
          uVar4 = *(uint *)((long)auStack_140 + *(long *)(local_160[0] + -0x18));
          uVar7 = (ulong)uVar4;
          if (uVar4 == 0) {
            FUN_00364540(param_1,&local_180,local_168,local_160);
            uVar7 = (ulong)*(uint *)((long)auStack_140 + *(long *)(local_160[0] + -0x18));
          }
        }
      }
      else if ((uVar4 >> 1 & 1) == 0) {
        puVar9 = param_1 + 1;
        FUN_00351cb4(param_1,*puVar9);
        *param_1 = puVar9;
        param_1[2] = 0;
        *puVar9 = 0;
        FUN_0071396c(param_1 + 3,"Corrupted weight file!");
        uVar8 = 0;
        if ((local_180 & 1) == 0) goto LAB_00368080;
        goto LAB_00368078;
      }
    } while (((uint)uVar7 >> 1 & 1) == 0);
  }
  if (param_1[2] == 0) {
                    /* try { // try from 0036805c to 00368133 has its CatchHandler @ 00368144 */
    FUN_0071396c(param_1 + 3,&DAT_001c717f);
  }
  uVar8 = 1;
  if ((local_180 & 1) != 0) {
LAB_00368078:
    free(local_170);
  }
LAB_00368080:
  puVar6 = PTR_PTR_007a10f0;
  local_160[0] = *(long *)PTR_PTR_007a10f0;
  uVar3 = *(undefined8 *)(PTR_PTR_007a10f0 + 0x48);
  *(undefined8 *)((long)local_160 + *(long *)(local_160[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a10f0 + 0x40);
  ppuStack_148 = &PTR_FUN_0079be30;
  local_160[2] = uVar3;
  if ((local_108 & 1) != 0) {
    free(local_f8);
  }
  FUN_00716098(&ppuStack_148);
  FUN_00717d80(local_160,puVar6 + 8);
  thunk_FUN_00715e00(auStack_e0);
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}


// ===== 00368190  FUN_00368190 =====

void FUN_00368190(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar3 = PTR_PTR_007a10f0;
  lVar5 = *(long *)PTR_PTR_007a10f0;
  uVar1 = *(undefined8 *)(PTR_PTR_007a10f0 + 0x40);
  lVar2 = *(long *)(PTR_PTR_007a10f0 + 0x48);
  *param_1 = lVar5;
  puVar4 = PTR_DAT_007a10f8;
  *(undefined8 *)((long)param_1 + *(long *)(lVar5 + -0x18)) = uVar1;
  param_1[3] = (long)(puVar4 + 0x10);
  param_1[2] = lVar2;
  if ((*(byte *)(param_1 + 0xb) & 1) != 0) {
    free((void *)param_1[0xd]);
  }
  FUN_00716098(param_1 + 3);
  FUN_00717d80(param_1,puVar3 + 8);
  thunk_FUN_00715e00(param_1 + 0x10);
  return;
}


// ===== 00368210  FUN_00368210 =====

void FUN_00368210(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [24];
  byte *local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00361218(param_2,&DAT_007ab648);
  if (((param_2 + 8 == lVar2) || (*(long *)(lVar2 + 0x38) == 0)) ||
     (lVar3 = FUN_0073a738(*(long *)(lVar2 + 0x38),PTR_PTR_007a16b8,PTR_PTR_007a1748,0), lVar3 == 0)
     ) {
    local_48 = (byte *)0x0;
    local_40 = (long *)0x0;
  }
  else {
    plVar5 = *(long **)(lVar2 + 0x40);
    if (plVar5 != (long *)0x0) {
      FUN_00755c20(1,plVar5 + 1);
    }
    local_48 = *(byte **)(lVar3 + 8);
    local_40 = *(long **)(lVar3 + 0x10);
    if (local_40 != (long *)0x0) {
      FUN_00755c20(1,local_40 + 1);
    }
    if ((plVar5 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_0071245c(plVar5);
    }
    if (local_48 != (byte *)0x0) {
      if ((*local_48 & 1) == 0) {
        uVar6 = *(undefined8 *)(local_48 + 8);
        uVar4 = *(undefined8 *)local_48;
        param_1[2] = *(undefined8 *)(local_48 + 0x10);
        param_1[1] = uVar6;
        *param_1 = uVar4;
      }
      else {
                    /* try { // try from 003682fc to 00368303 has its CatchHandler @ 003683e0 */
        FUN_002fb36c(param_1,*(undefined8 *)(local_48 + 0x10),*(undefined8 *)(local_48 + 8));
      }
      plVar5 = local_40;
      if ((local_40 == (long *)0x0) ||
         (lVar2 = FUN_00755c50(0xffffffffffffffff,local_40 + 1), lVar2 != 0)) {
        if (*(long *)(lVar1 + 0x28) == local_38) {
          return;
        }
      }
      else {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        if (*(long *)(lVar1 + 0x28) == local_38) {
          FUN_0071245c(plVar5);
          return;
        }
      }
      goto LAB_0036842c;
    }
  }
  uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 00368388 to 00368397 has its CatchHandler @ 00368400 */
  FUN_002fd2b0(auStack_60,"there are no Weight version in Weight ");
  FUN_00374b08(uVar4,auStack_60,
               "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/native/src/networks/src/weight.cpp"
               ,0x10b,"getWeightVersion");
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 003683c8 to 003683df has its CatchHandler @ 003683e8 */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar4,PTR_PTR_007a11f0,PTR_FUN_007a11f8);
  }
LAB_0036842c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00368430  FUN_00368430 =====

void FUN_00368430(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 *__ptr;
  ulong uVar3;
  long lVar4;
  byte *pbVar5;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  __ptr = (undefined8 *)FUN_00759c3c(0x30);
  __ptr[4] = 0;
  __ptr[5] = 0;
  __ptr[1] = 0;
  *__ptr = 0;
  __ptr[3] = 0;
  __ptr[2] = 0;
  *__ptr = __ptr + 1;
  pbVar5 = (byte *)(__ptr + 3);
  pbVar5[0] = 0;
  pbVar5[1] = 0;
  pbVar5[2] = 0;
  pbVar5[3] = 0;
  pbVar5[4] = 0;
  pbVar5[5] = 0;
  pbVar5[6] = 0;
  pbVar5[7] = 0;
                    /* try { // try from 00368488 to 00368493 has its CatchHandler @ 00368510 */
  uVar3 = FUN_00367f04(__ptr,param_2,0xffffffff);
  if ((uVar3 & 1) == 0) {
    bVar1 = *pbVar5;
    *param_1 = 0;
    if ((bVar1 & 1) != 0) {
      free((void *)__ptr[5]);
    }
    FUN_00351cb4(__ptr,__ptr[1]);
    if (*(long *)(lVar2 + 0x28) == lVar4) {
      free(__ptr);
      return;
    }
  }
  else {
    *param_1 = __ptr;
    if (*(long *)(lVar2 + 0x28) == lVar4) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00368538  FUN_00368538 =====

void FUN_00368538(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  void *__s;
  void *__dest;
  ulong uVar2;
  ulong uVar3;
  void *__src;
  void *__s_00;
  long lVar4;
  
  __s_00 = (void *)param_1[1];
  if ((ulong)(param_1[2] - (long)__s_00 >> 3) < param_2) {
    __src = (void *)*param_1;
    lVar4 = (long)__s_00 - (long)__src >> 3;
    uVar1 = lVar4 + param_2;
    if (uVar1 >> 0x3d != 0) {
      FUN_00368664(param_1);
LAB_00368660:
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
    uVar2 = param_1[2] - (long)__src;
    uVar3 = (long)uVar2 >> 2;
    if (uVar3 <= uVar1) {
      uVar3 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar2) {
      uVar3 = 0x1fffffffffffffff;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar3 >> 0x3d != 0) goto LAB_00368660;
      __dest = (void *)FUN_00759c3c(uVar3 << 3);
    }
    __s = (void *)((long)__dest + lVar4 * 8);
    memset(__s,0,param_2 * 8);
    memcpy(__dest,__src,(long)__s_00 - (long)__src);
    *param_1 = __dest;
    param_1[1] = (void *)((long)__s + param_2 * 8);
    param_1[2] = (void *)((long)__dest + uVar3 * 8);
    if (__src != (void *)0x0) {
      free(__src);
      return;
    }
  }
  else {
    if (param_2 != 0) {
      memset(__s_00,0,param_2 * 8);
      __s_00 = (void *)((long)__s_00 + param_2 * 8);
    }
    param_1[1] = __s_00;
  }
  return;
}


// ===== 00368664  FUN_00368664 =====

void FUN_00368664(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 00368678  FUN_00368678 =====

void FUN_00368678(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 003686c8  FUN_003686c8 =====

void FUN_003686c8(byte *param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x20);
  if ((plVar3 == (long *)0x0) || (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar2 != 0))
  {
    bVar1 = *param_1;
  }
  else {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  free(*(void **)(param_1 + 0x10));
  return;
}


// ===== 00368734  FUN_00368734 =====

undefined1  [16] FUN_00368734(long *param_1,byte *param_2,long *param_3)

{
  void *__s2;
  size_t __n;
  ulong uVar1;
  byte *__s1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  plVar9 = param_1 + 1;
  plVar7 = (long *)*plVar9;
  plVar10 = plVar9;
  if (plVar7 != (long *)0x0) {
    uVar1 = *(ulong *)(param_2 + 8);
    __s1 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      __s1 = param_2 + 1;
      uVar1 = (ulong)(*param_2 >> 1);
    }
    do {
      while( true ) {
        plVar9 = plVar7;
        __s2 = (void *)((long)plVar9 + 0x21);
        uVar3 = (ulong)(*(byte *)(plVar9 + 4) >> 1);
        if ((*(byte *)(plVar9 + 4) & 1) != 0) {
          __s2 = (void *)plVar9[6];
          uVar3 = plVar9[5];
        }
        __n = uVar3;
        if (uVar1 <= uVar3) {
          __n = uVar1;
        }
        iVar4 = memcmp(__s1,__s2,__n);
        bVar2 = uVar1 < uVar3;
        if (iVar4 != 0) {
          bVar2 = iVar4 < 0;
        }
        if (bVar2) break;
        iVar4 = memcmp(__s2,__s1,__n);
        bVar2 = uVar3 < uVar1;
        if (iVar4 != 0) {
          bVar2 = iVar4 < 0;
        }
        if (!bVar2) {
          uVar6 = 0;
          goto LAB_00368894;
        }
        plVar7 = (long *)plVar9[1];
        if ((long *)plVar9[1] == (long *)0x0) {
          plVar10 = plVar9 + 1;
          goto LAB_0036881c;
        }
      }
      plVar7 = (long *)*plVar9;
      plVar10 = plVar9;
    } while ((long *)*plVar9 != (long *)0x0);
  }
LAB_0036881c:
  plVar5 = (long *)FUN_00759c3c(0x48);
  lVar12 = param_3[1];
  lVar11 = *param_3;
  lVar8 = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  plVar5[5] = lVar12;
  plVar5[4] = lVar11;
  lVar12 = param_3[4];
  lVar11 = param_3[3];
  plVar5[6] = lVar8;
  plVar5[8] = lVar12;
  plVar5[7] = lVar11;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  *plVar5 = 0;
  plVar5[1] = 0;
  plVar5[2] = (long)plVar9;
  *plVar10 = (long)plVar5;
  plVar7 = plVar5;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    plVar7 = (long *)*plVar10;
  }
  FUN_00328410(param_1[1],plVar7);
  uVar6 = 1;
  param_1[2] = param_1[2] + 1;
  plVar9 = plVar5;
LAB_00368894:
  auVar13._8_8_ = uVar6;
  auVar13._0_8_ = plVar9;
  return auVar13;
}


// ===== 003688b0  FUN_003688b0 =====

void FUN_003688b0(undefined8 *param_1)

{
  long lVar1;
  void *__ptr;
  long *plVar2;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    if (*(char *)(param_1 + 2) != '\0') {
      plVar2 = *(long **)((long)__ptr + 0x40);
      if ((plVar2 != (long *)0x0) &&
         (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0)) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        FUN_0071245c(plVar2);
      }
      if ((*(byte *)((long)__ptr + 0x20) & 1) != 0) {
        free(*(void **)((long)__ptr + 0x30));
      }
    }
    free(__ptr);
    return;
  }
  return;
}


// ===== 0036892c  FUN_0036892c =====

void FUN_0036892c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00761998;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 0036898c  FUN_0036898c =====

void FUN_0036898c(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  *param_1 = (long)(PTR_DAT_007a16f0 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    free(param_1);
    return;
  }
  free(param_1);
  return;
}


// ===== 003689fc  FUN_003689fc =====

void FUN_003689fc(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00368a20  FUN_00368a20 =====

void FUN_00368a20(long param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    free(*(void **)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 00368a30  FUN_00368a30 =====

long FUN_00368a30(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrIfE27__sha_007a17e0) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00368a4c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00368a50  FUN_00368a50 =====

void FUN_00368a50(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00368a74  FUN_00368a74 =====

void FUN_00368a74(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00368a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}


// ===== 00368a8c  FUN_00368a8c =====

long FUN_00368a8c(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrIN5KRISP10_007a17e8) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00368aa8  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00368aac  FUN_00368aac =====

long * FUN_00368aac(long *param_1,byte *param_2,undefined8 param_3,undefined8 *param_4)

{
  void *__s2;
  size_t __n;
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  byte *pbVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  
  lVar11 = tpidr_el0;
  lVar8 = *(long *)(lVar11 + 0x28);
  plVar12 = param_1 + 1;
  plVar9 = (long *)*plVar12;
  plVar13 = plVar12;
  if (plVar9 != (long *)0x0) {
    uVar1 = *(ulong *)(param_2 + 8);
    pbVar10 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar10 = param_2 + 1;
      uVar1 = (ulong)(*param_2 >> 1);
    }
    do {
      while( true ) {
        plVar12 = plVar9;
        __s2 = (void *)((long)plVar12 + 0x21);
        uVar3 = (ulong)(*(byte *)(plVar12 + 4) >> 1);
        if ((*(byte *)(plVar12 + 4) & 1) != 0) {
          __s2 = (void *)plVar12[6];
          uVar3 = plVar12[5];
        }
        __n = uVar3;
        if (uVar1 <= uVar3) {
          __n = uVar1;
        }
        iVar4 = memcmp(pbVar10,__s2,__n);
        bVar2 = uVar1 < uVar3;
        if (iVar4 != 0) {
          bVar2 = iVar4 < 0;
        }
        if (bVar2) break;
        uVar5 = memcmp(__s2,pbVar10,__n);
        uVar6 = (ulong)uVar5;
        bVar2 = uVar3 < uVar1;
        if (uVar5 != 0) {
          bVar2 = (int)uVar5 < 0;
        }
        if (!bVar2) {
          uVar7 = 0;
          lVar11 = *(long *)(lVar11 + 0x28);
          plVar9 = plVar12;
          goto joined_r0x00368c50;
        }
        plVar9 = (long *)plVar12[1];
        if ((long *)plVar12[1] == (long *)0x0) {
          plVar13 = plVar12 + 1;
          goto LAB_00368ba8;
        }
      }
      plVar9 = (long *)*plVar12;
      plVar13 = plVar12;
    } while ((long *)*plVar12 != (long *)0x0);
  }
LAB_00368ba8:
  plVar9 = (long *)FUN_00759c3c(0x48);
  pbVar10 = (byte *)*param_4;
  if ((*pbVar10 & 1) == 0) {
    lVar15 = *(long *)(pbVar10 + 8);
    lVar14 = *(long *)pbVar10;
    plVar9[6] = *(long *)(pbVar10 + 0x10);
    plVar9[5] = lVar15;
    plVar9[4] = lVar14;
  }
  else {
                    /* try { // try from 00368be0 to 00368be7 has its CatchHandler @ 00368c78 */
    FUN_002fb36c(plVar9 + 4,*(undefined8 *)(pbVar10 + 0x10),*(undefined8 *)(pbVar10 + 8));
  }
  plVar9[7] = 0;
  plVar9[8] = 0;
  *plVar9 = 0;
  plVar9[1] = 0;
  plVar9[2] = (long)plVar12;
  *plVar13 = (long)plVar9;
  plVar12 = plVar9;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    plVar12 = (long *)*plVar13;
  }
  uVar6 = FUN_00328410(param_1[1],plVar12);
  uVar7 = 1;
  param_1[2] = param_1[2] + 1;
  lVar11 = *(long *)(lVar11 + 0x28);
joined_r0x00368c50:
  if (lVar11 != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6,uVar7);
  }
  return plVar9;
}


// ===== 00368ca0  FUN_00368ca0 =====

void FUN_00368ca0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00761a70;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 00368d00  FUN_00368d00 =====

void FUN_00368d00(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  *param_1 = (long)(PTR_DAT_007a1710 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    free(param_1);
    return;
  }
  free(param_1);
  return;
}


// ===== 00368d70  FUN_00368d70 =====

void FUN_00368d70(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00368d94  FUN_00368d94 =====

void FUN_00368d94(long param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    free(*(void **)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 00368da4  FUN_00368da4 =====

long FUN_00368da4(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrIiE27__sha_007a17f0) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00368dc0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00368dc4  FUN_00368dc4 =====

void FUN_00368dc4(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00368de8  FUN_00368de8 =====

void FUN_00368de8(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00368df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}


// ===== 00368e00  FUN_00368e00 =====

long FUN_00368e00(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrIN5KRISP10_007a17f8) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00368e1c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00368e20  FUN_00368e20 =====

void FUN_00368e20(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00761b48;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 00368e80  FUN_00368e80 =====

void FUN_00368e80(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  *param_1 = (long)(PTR_DAT_007a1730 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    free(param_1);
    return;
  }
  free(param_1);
  return;
}


// ===== 00368ef0  FUN_00368ef0 =====

void FUN_00368ef0(undefined8 *param_1)

{
  byte *__ptr;
  
  __ptr = (byte *)*param_1;
  *param_1 = 0;
  if (__ptr != (byte *)0x0) {
    if ((*__ptr & 1) != 0) {
      free(*(void **)(__ptr + 0x10));
    }
    free(__ptr);
    return;
  }
  return;
}


// ===== 00368f34  FUN_00368f34 =====

void FUN_00368f34(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00368f58  FUN_00368f58 =====

void FUN_00368f58(long param_1)

{
  byte *__ptr;
  
  __ptr = *(byte **)(param_1 + 0x18);
  if (__ptr != (byte *)0x0) {
    if ((*__ptr & 1) != 0) {
      free(*(void **)(__ptr + 0x10));
    }
    free(__ptr);
    return;
  }
  return;
}


// ===== 00368f98  FUN_00368f98 =====

long FUN_00368f98(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrINS_12basi_007a1800) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00368fb4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00368fb8  FUN_00368fb8 =====

void FUN_00368fb8(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00368fdc  FUN_00368fdc =====

void FUN_00368fdc(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00368fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}


// ===== 00368ff4  FUN_00368ff4 =====

long FUN_00368ff4(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrIN5KRISP10_007a1808) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00369010  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00369014  FUN_00369014 =====

void FUN_00369014(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00761c20;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 00369074  FUN_00369074 =====

void FUN_00369074(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  *param_1 = (long)(PTR_DAT_007a1750 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    free(param_1);
    return;
  }
  free(param_1);
  return;
}


// ===== 003690e4  FUN_003690e4 =====

void FUN_003690e4(undefined8 *param_1)

{
  void *__ptr;
  undefined8 *__ptr_00;
  
  __ptr_00 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (__ptr_00 != (undefined8 *)0x0) {
    __ptr = (void *)*__ptr_00;
    if (__ptr != (void *)0x0) {
      __ptr_00[1] = __ptr;
      free(__ptr);
    }
    free(__ptr_00);
    return;
  }
  return;
}


// ===== 00369128  FUN_00369128 =====

void FUN_00369128(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 0036914c  FUN_0036914c =====

void FUN_0036914c(long param_1)

{
  void *__ptr;
  undefined8 *__ptr_00;
  
  __ptr_00 = *(undefined8 **)(param_1 + 0x18);
  if (__ptr_00 != (undefined8 *)0x0) {
    __ptr = (void *)*__ptr_00;
    if (__ptr != (void *)0x0) {
      __ptr_00[1] = __ptr;
      free(__ptr);
    }
    free(__ptr_00);
    return;
  }
  return;
}


// ===== 0036918c  FUN_0036918c =====

long FUN_0036918c(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrINS_6vecto_007a1810) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 003691a8  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 003691ac  FUN_003691ac =====

void FUN_003691ac(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 003691d0  FUN_003691d0 =====

void FUN_003691d0(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003691e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}


// ===== 003691e8  FUN_003691e8 =====

long FUN_003691e8(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrIN5KRISP10_007a1818) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00369204  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00369208  FUN_00369208 =====

long * FUN_00369208(undefined8 *param_1,long *param_2,long *param_3,long *param_4,byte *param_5)

{
  ulong uVar1;
  void *pvVar2;
  size_t sVar3;
  ulong uVar4;
  byte *pbVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  
  plVar11 = param_1 + 1;
  if (plVar11 != param_2) {
    bVar6 = (*(byte *)(param_2 + 4) & 1) != 0;
    pvVar2 = (void *)((long)param_2 + 0x21);
    if (bVar6) {
      pvVar2 = (void *)param_2[6];
    }
    uVar1 = (ulong)(*(byte *)(param_2 + 4) >> 1);
    if (bVar6) {
      uVar1 = param_2[5];
    }
    uVar4 = *(ulong *)(param_5 + 8);
    pbVar5 = *(byte **)(param_5 + 0x10);
    if ((*param_5 & 1) == 0) {
      pbVar5 = param_5 + 1;
      uVar4 = (ulong)(*param_5 >> 1);
    }
    sVar3 = uVar1;
    if (uVar4 <= uVar1) {
      sVar3 = uVar4;
    }
    iVar7 = memcmp(pbVar5,pvVar2,sVar3);
    bVar6 = uVar4 < uVar1;
    if (iVar7 != 0) {
      bVar6 = iVar7 < 0;
    }
    if (!bVar6) {
      iVar7 = memcmp(pvVar2,pbVar5,sVar3);
      bVar6 = uVar1 < uVar4;
      if (iVar7 != 0) {
        bVar6 = iVar7 < 0;
      }
      if (!bVar6) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar12 = (long *)param_2[1];
      plVar8 = param_2;
      plVar9 = plVar12;
      if (plVar12 == (long *)0x0) {
        do {
          plVar10 = (long *)plVar8[2];
          bVar6 = (long *)*plVar10 != plVar8;
          plVar8 = plVar10;
        } while (bVar6);
      }
      else {
        do {
          plVar10 = plVar9;
          plVar9 = (long *)*plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
      }
      if (plVar10 != plVar11) {
        uVar1 = (ulong)(*(byte *)(plVar10 + 4) >> 1);
        pvVar2 = (void *)((long)plVar10 + 0x21);
        if ((*(byte *)(plVar10 + 4) & 1) != 0) {
          uVar1 = plVar10[5];
          pvVar2 = (void *)plVar10[6];
        }
        sVar3 = uVar1;
        if (uVar4 <= uVar1) {
          sVar3 = uVar4;
        }
        iVar7 = memcmp(pbVar5,pvVar2,sVar3);
        bVar6 = uVar4 < uVar1;
        if (iVar7 != 0) {
          bVar6 = iVar7 < 0;
        }
        if (!bVar6) {
          plVar8 = (long *)*plVar11;
          while (plVar9 = plVar11, plVar8 != (long *)0x0) {
            while( true ) {
              plVar11 = plVar8;
              pvVar2 = (void *)((long)plVar11 + 0x21);
              uVar1 = (ulong)(*(byte *)(plVar11 + 4) >> 1);
              if ((*(byte *)(plVar11 + 4) & 1) != 0) {
                pvVar2 = (void *)plVar11[6];
                uVar1 = plVar11[5];
              }
              sVar3 = uVar1;
              if (uVar4 <= uVar1) {
                sVar3 = uVar4;
              }
              iVar7 = memcmp(pbVar5,pvVar2,sVar3);
              bVar6 = uVar4 < uVar1;
              if (iVar7 != 0) {
                bVar6 = iVar7 < 0;
              }
              if (bVar6) break;
              iVar7 = memcmp(pvVar2,pbVar5,sVar3);
              bVar6 = uVar1 < uVar4;
              if (iVar7 != 0) {
                bVar6 = iVar7 < 0;
              }
              if (!bVar6) goto LAB_003695cc;
              plVar9 = plVar11 + 1;
              plVar8 = (long *)*plVar9;
              if ((long *)*plVar9 == (long *)0x0) goto LAB_003695cc;
            }
            plVar8 = (long *)*plVar11;
          }
LAB_003695cc:
          *param_3 = (long)plVar11;
          return plVar9;
        }
      }
      if (plVar12 != (long *)0x0) {
        *param_3 = (long)plVar10;
        return plVar10;
      }
      *param_3 = (long)param_2;
      return param_2 + 1;
    }
  }
  plVar9 = (long *)*param_2;
  plVar8 = param_2;
  if ((long *)*param_1 != param_2) {
    plVar12 = param_2;
    plVar10 = plVar9;
    if (plVar9 == (long *)0x0) {
      do {
        plVar8 = (long *)plVar12[2];
        bVar6 = (long *)*plVar8 == plVar12;
        plVar12 = plVar8;
      } while (bVar6);
    }
    else {
      do {
        plVar8 = plVar10;
        plVar10 = (long *)plVar8[1];
      } while ((long *)plVar8[1] != (long *)0x0);
    }
    pbVar5 = *(byte **)(param_5 + 0x10);
    bVar6 = (*param_5 & 1) == 0;
    if (bVar6) {
      pbVar5 = param_5 + 1;
    }
    uVar1 = (ulong)(*param_5 >> 1);
    if (!bVar6) {
      uVar1 = *(ulong *)(param_5 + 8);
    }
    pvVar2 = (void *)((long)plVar8 + 0x21);
    uVar4 = (ulong)(*(byte *)(plVar8 + 4) >> 1);
    if ((*(byte *)(plVar8 + 4) & 1) != 0) {
      pvVar2 = (void *)plVar8[6];
      uVar4 = plVar8[5];
    }
    sVar3 = uVar1;
    if (uVar4 <= uVar1) {
      sVar3 = uVar4;
    }
    iVar7 = memcmp(pvVar2,pbVar5,sVar3);
    bVar6 = uVar4 < uVar1;
    if (iVar7 != 0) {
      bVar6 = iVar7 < 0;
    }
    if (!bVar6) {
      plVar8 = (long *)*plVar11;
      while (plVar9 = plVar11, plVar8 != (long *)0x0) {
        while( true ) {
          plVar11 = plVar8;
          pvVar2 = (void *)((long)plVar11 + 0x21);
          uVar4 = (ulong)(*(byte *)(plVar11 + 4) >> 1);
          if ((*(byte *)(plVar11 + 4) & 1) != 0) {
            pvVar2 = (void *)plVar11[6];
            uVar4 = plVar11[5];
          }
          sVar3 = uVar4;
          if (uVar1 <= uVar4) {
            sVar3 = uVar1;
          }
          iVar7 = memcmp(pbVar5,pvVar2,sVar3);
          bVar6 = uVar1 < uVar4;
          if (iVar7 != 0) {
            bVar6 = iVar7 < 0;
          }
          if (bVar6) break;
          iVar7 = memcmp(pvVar2,pbVar5,sVar3);
          bVar6 = uVar4 < uVar1;
          if (iVar7 != 0) {
            bVar6 = iVar7 < 0;
          }
          if (!bVar6) goto LAB_00369460;
          plVar9 = plVar11 + 1;
          plVar8 = (long *)*plVar9;
          if ((long *)*plVar9 == (long *)0x0) goto LAB_00369460;
        }
        plVar8 = (long *)*plVar11;
      }
LAB_00369460:
      *param_3 = (long)plVar11;
      return plVar9;
    }
  }
  if (plVar9 == (long *)0x0) {
    *param_3 = (long)param_2;
  }
  else {
    param_2 = plVar8 + 1;
    *param_3 = (long)plVar8;
  }
  return param_2;
}


// ===== 003695f8  FUN_003695f8 =====

void FUN_003695f8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00761ce0;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 00369658  FUN_00369658 =====

void FUN_00369658(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  *param_1 = (long)(PTR_DAT_007a1768 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    free(param_1);
    return;
  }
  free(param_1);
  return;
}


// ===== 003696c8  FUN_003696c8 =====

void FUN_003696c8(undefined8 *param_1)

{
  void *__ptr;
  undefined8 *__ptr_00;
  
  __ptr_00 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (__ptr_00 != (undefined8 *)0x0) {
    __ptr = (void *)*__ptr_00;
    if (__ptr != (void *)0x0) {
      __ptr_00[1] = __ptr;
      free(__ptr);
    }
    free(__ptr_00);
    return;
  }
  return;
}


// ===== 0036970c  FUN_0036970c =====

void FUN_0036970c(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00369730  FUN_00369730 =====

void FUN_00369730(long param_1)

{
  void *__ptr;
  undefined8 *__ptr_00;
  
  __ptr_00 = *(undefined8 **)(param_1 + 0x18);
  if (__ptr_00 != (undefined8 *)0x0) {
    __ptr = (void *)*__ptr_00;
    if (__ptr != (void *)0x0) {
      __ptr_00[1] = __ptr;
      free(__ptr);
    }
    free(__ptr_00);
    return;
  }
  return;
}


// ===== 00369770  FUN_00369770 =====

long FUN_00369770(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrIN5KRISP10_007a1820) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0036978c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00369790  FUN_00369790 =====

void FUN_00369790(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 003697b4  FUN_003697b4 =====

void FUN_003697b4(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003697c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}


// ===== 003697cc  FUN_003697cc =====

long FUN_003697cc(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrIN5KRISP10_007a1828) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 003697e8  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 003697ec  FUN_003697ec =====

void FUN_003697ec(long *param_1,ulong param_2)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *__s;
  void *__s_00;
  size_t __n;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  __s = (undefined8 *)param_1[1];
  if ((ulong)((param_1[2] - (long)__s >> 3) * -0x5555555555555555) < param_2) {
    puVar6 = (undefined8 *)*param_1;
    lVar8 = (long)__s - (long)puVar6;
    lVar7 = lVar8 >> 3;
    uVar3 = lVar7 * -0x5555555555555555 + param_2;
    if (0xaaaaaaaaaaaaaaa < uVar3) {
      FUN_003699f8(param_1);
LAB_003699f4:
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
    lVar1 = param_1[2] - (long)puVar6 >> 3;
    uVar5 = lVar1 * 0x5555555555555556;
    if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
      uVar5 = uVar3;
    }
    if (0x555555555555554 < (ulong)(lVar1 * -0x5555555555555555)) {
      uVar5 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar5 == 0) {
      lVar1 = 0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar5) goto LAB_003699f4;
      lVar1 = FUN_00759c3c(uVar5 * 0x18);
    }
    __s_00 = (void *)(lVar1 + lVar7 * 8);
    __n = ((param_2 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    memset(__s_00,0,__n);
    if (puVar6 != __s) {
      puVar2 = (undefined8 *)(lVar1 + 0x10);
      puVar4 = puVar6;
      do {
        *puVar2 = 0;
        uVar9 = *puVar4;
        puVar2[-1] = puVar4[1];
        puVar2[-2] = uVar9;
        *puVar2 = puVar4[2];
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4 = puVar4 + 3;
        puVar2 = puVar2 + 3;
      } while (puVar4 != __s);
      do {
        __ptr = (void *)*puVar6;
        if (__ptr != (void *)0x0) {
          puVar6[1] = __ptr;
          free(__ptr);
        }
        puVar6 = puVar6 + 3;
      } while (puVar6 != __s);
      __s = (undefined8 *)*param_1;
    }
    *param_1 = (long)__s_00 - lVar8;
    param_1[1] = (long)__s_00 + __n;
    param_1[2] = lVar1 + uVar5 * 0x18;
    if (__s != (undefined8 *)0x0) {
      free(__s);
      return;
    }
  }
  else {
    if (param_2 != 0) {
      uVar3 = (param_2 * 0x18 - 0x18) / 0x18;
      memset(__s,0,uVar3 * 0x18 + 0x18);
      __s = __s + uVar3 * 3 + 3;
    }
    param_1[1] = (long)__s;
  }
  return;
}


// ===== 003699f8  FUN_003699f8 =====

void FUN_003699f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 00369a0c  FUN_00369a0c =====

void FUN_00369a0c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00761da0;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 00369a6c  FUN_00369a6c =====

void FUN_00369a6c(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  *param_1 = (long)(PTR_DAT_007a1780 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    free(param_1);
    return;
  }
  free(param_1);
  return;
}


// ===== 00369adc  FUN_00369adc =====

void FUN_00369adc(undefined8 *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *__ptr_00;
  undefined8 *puVar3;
  
  __ptr_00 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (__ptr_00 == (undefined8 *)0x0) {
    return;
  }
  puVar3 = (undefined8 *)*__ptr_00;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)__ptr_00[1];
    puVar1 = puVar3;
    if (puVar2 != puVar3) {
      do {
        puVar1 = puVar2 + -3;
        __ptr = (void *)*puVar1;
        if (__ptr != (void *)0x0) {
          puVar2[-2] = __ptr;
          free(__ptr);
        }
        puVar2 = puVar1;
      } while (puVar1 != puVar3);
      puVar1 = (undefined8 *)*__ptr_00;
    }
    __ptr_00[1] = puVar3;
    free(puVar1);
  }
  free(__ptr_00);
  return;
}


// ===== 00369b68  FUN_00369b68 =====

void FUN_00369b68(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00369b8c  FUN_00369b8c =====

void FUN_00369b8c(long param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *__ptr_00;
  undefined8 *puVar3;
  
  __ptr_00 = *(undefined8 **)(param_1 + 0x18);
  if (__ptr_00 == (undefined8 *)0x0) {
    return;
  }
  puVar3 = (undefined8 *)*__ptr_00;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)__ptr_00[1];
    puVar1 = puVar3;
    if (puVar2 != puVar3) {
      do {
        puVar1 = puVar2 + -3;
        __ptr = (void *)*puVar1;
        if (__ptr != (void *)0x0) {
          puVar2[-2] = __ptr;
          free(__ptr);
        }
        puVar2 = puVar1;
      } while (puVar1 != puVar3);
      puVar1 = (undefined8 *)*__ptr_00;
    }
    __ptr_00[1] = puVar3;
    free(puVar1);
  }
  free(__ptr_00);
  return;
}


// ===== 00369c14  FUN_00369c14 =====

long FUN_00369c14(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrINS_6vecto_007a1830) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00369c30  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00369c34  FUN_00369c34 =====

void FUN_00369c34(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00369c58  FUN_00369c58 =====

void FUN_00369c58(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00369c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}


// ===== 00369c70  FUN_00369c70 =====

long FUN_00369c70(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrIN5KRISP10_007a1838) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00369c8c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00369c90  FUN_00369c90 =====

void FUN_00369c90(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  void *__ptr;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *__ptr_00;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long local_88;
  long local_80;
  long *local_78;
  long *plStack_70;
  long *local_68;
  undefined1 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar7 = param_1 + 2;
  lVar5 = param_1[1];
  if ((ulong)((*plVar7 - lVar5 >> 3) * -0x3333333333333333) < param_2) {
    lVar5 = lVar5 - *param_1 >> 3;
    uVar1 = lVar5 * -0x3333333333333333 + param_2;
    if (0x666666666666666 < uVar1) {
      if (*(long *)(lVar2 + 0x28) != local_58) goto LAB_00369f00;
      FUN_00369f74(param_1);
LAB_00369ea8:
      if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_002f9ee0();
      }
      goto LAB_00369f00;
    }
    lVar3 = *plVar7 - *param_1 >> 3;
    uVar4 = lVar3 * -0x6666666666666666;
    if (uVar4 < uVar1 || uVar4 - uVar1 == 0) {
      uVar4 = uVar1;
    }
    if (0x333333333333332 < (ulong)(lVar3 * -0x3333333333333333)) {
      uVar4 = 0x666666666666666;
    }
    if (uVar4 == 0) {
      lVar3 = 0;
    }
    else {
      if (0x666666666666666 < uVar4) goto LAB_00369ea8;
      lVar3 = FUN_00759c3c(uVar4 * 0x28);
    }
    lVar6 = lVar3 + lVar5 * 8;
    lVar10 = param_2 * 0x28;
    lVar9 = lVar6 + lVar10;
    lVar5 = lVar6;
    do {
                    /* try { // try from 00369db8 to 00369dbf has its CatchHandler @ 00369ed8 */
      FUN_00374600(lVar5);
      lVar10 = lVar10 + -0x28;
      lVar5 = lVar5 + 0x28;
    } while (lVar10 != 0);
    puVar11 = (undefined8 *)*param_1;
    __ptr_00 = (undefined8 *)param_1[1];
    plStack_70 = &local_88;
    local_60 = 0;
    lVar6 = lVar6 + ((long)puVar11 - (long)__ptr_00);
    local_68 = &local_80;
    local_80 = lVar6;
    puVar8 = puVar11;
    local_88 = lVar6;
    local_78 = plVar7;
    if ((long)puVar11 - (long)__ptr_00 != 0) {
      do {
                    /* try { // try from 00369e04 to 00369e0b has its CatchHandler @ 00369ebc */
        FUN_00374778(local_80,puVar8);
        puVar8 = puVar8 + 5;
        local_80 = local_80 + 0x28;
      } while (puVar8 != __ptr_00);
      do {
        __ptr = (void *)*puVar11;
        if (__ptr != (void *)0x0) {
          puVar11[1] = __ptr;
          free(__ptr);
        }
        puVar11 = puVar11 + 5;
      } while (puVar11 != __ptr_00);
      __ptr_00 = (undefined8 *)*param_1;
    }
    *param_1 = lVar6;
    param_1[1] = lVar9;
    param_1[2] = lVar3 + uVar4 * 0x28;
    if (__ptr_00 != (undefined8 *)0x0) {
      free(__ptr_00);
    }
  }
  else {
    lVar3 = lVar5;
    if (param_2 != 0) {
      lVar3 = lVar5 + param_2 * 0x28;
      lVar9 = param_2 * 0x28;
      do {
                    /* try { // try from 00369d74 to 00369d7b has its CatchHandler @ 00369ecc */
        FUN_00374600(lVar5);
        lVar9 = lVar9 + -0x28;
        lVar5 = lVar5 + 0x28;
      } while (lVar9 != 0);
    }
    param_1[1] = lVar3;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_00369f00:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00369f04  FUN_00369f04 =====

void FUN_00369f04(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *__ptr;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)param_1[2];
  while (puVar2 != puVar1) {
    while( true ) {
      puVar3 = puVar2 + -5;
      __ptr = (void *)*puVar3;
      param_1[2] = puVar3;
      if (__ptr != (void *)0x0) break;
      puVar2 = puVar3;
      if (puVar3 == puVar1) goto LAB_00369f54;
    }
    puVar2[-4] = __ptr;
    free(__ptr);
    puVar2 = (undefined8 *)param_1[2];
  }
LAB_00369f54:
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 00369f74  FUN_00369f74 =====

void FUN_00369f74(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 00369f88  FUN_00369f88 =====

void FUN_00369f88(long param_1)

{
  undefined8 *puVar1;
  void *__ptr;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    puVar2 = (undefined8 *)**(undefined8 **)(param_1 + 8);
    puVar3 = (undefined8 *)**(long **)(param_1 + 0x10);
    while (puVar1 = puVar3, puVar1 != puVar2) {
      puVar3 = puVar1 + -5;
      __ptr = (void *)*puVar3;
      if (__ptr != (void *)0x0) {
        puVar1[-4] = __ptr;
        free(__ptr);
      }
    }
    return;
  }
  return;
}


// ===== 00369fe8  FUN_00369fe8 =====

void FUN_00369fe8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00761e60;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 0036a048  FUN_0036a048 =====

void FUN_0036a048(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  *param_1 = (long)(PTR_DAT_007a1798 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    free(param_1);
    return;
  }
  free(param_1);
  return;
}


// ===== 0036a0b8  FUN_0036a0b8 =====

void FUN_0036a0b8(undefined8 *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *__ptr_00;
  undefined8 *puVar3;
  
  __ptr_00 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (__ptr_00 == (undefined8 *)0x0) {
    return;
  }
  puVar3 = (undefined8 *)*__ptr_00;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)__ptr_00[1];
    puVar1 = puVar3;
    if (puVar2 != puVar3) {
      do {
        puVar1 = puVar2 + -5;
        __ptr = (void *)*puVar1;
        if (__ptr != (void *)0x0) {
          puVar2[-4] = __ptr;
          free(__ptr);
        }
        puVar2 = puVar1;
      } while (puVar1 != puVar3);
      puVar1 = (undefined8 *)*__ptr_00;
    }
    __ptr_00[1] = puVar3;
    free(puVar1);
  }
  free(__ptr_00);
  return;
}


// ===== 0036a144  FUN_0036a144 =====

void FUN_0036a144(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 0036a168  FUN_0036a168 =====

void FUN_0036a168(long param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *__ptr_00;
  undefined8 *puVar3;
  
  __ptr_00 = *(undefined8 **)(param_1 + 0x18);
  if (__ptr_00 == (undefined8 *)0x0) {
    return;
  }
  puVar3 = (undefined8 *)*__ptr_00;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)__ptr_00[1];
    puVar1 = puVar3;
    if (puVar2 != puVar3) {
      do {
        puVar1 = puVar2 + -5;
        __ptr = (void *)*puVar1;
        if (__ptr != (void *)0x0) {
          puVar2[-4] = __ptr;
          free(__ptr);
        }
        puVar2 = puVar1;
      } while (puVar1 != puVar3);
      puVar1 = (undefined8 *)*__ptr_00;
    }
    __ptr_00[1] = puVar3;
    free(puVar1);
  }
  free(__ptr_00);
  return;
}


// ===== 0036a1f0  FUN_0036a1f0 =====

long FUN_0036a1f0(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrINS_6vecto_007a1840) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0036a20c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0036a210  FUN_0036a210 =====

void FUN_0036a210(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 0036a234  FUN_0036a234 =====

void FUN_0036a234(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0036a244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}


// ===== 0036a24c  FUN_0036a24c =====

long FUN_0036a24c(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrIN5KRISP10_007a1848) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0036a268  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0036a26c  FUN_0036a26c =====

void FUN_0036a26c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00761f20;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 0036a2cc  FUN_0036a2cc =====

void FUN_0036a2cc(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  *param_1 = (long)(PTR_DAT_007a17b0 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    free(param_1);
    return;
  }
  free(param_1);
  return;
}


// ===== 0036a33c  FUN_0036a33c =====

void FUN_0036a33c(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    FUN_0036e048(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 0036a378  FUN_0036a378 =====

void FUN_0036a378(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 0036a39c  FUN_0036a39c =====

void FUN_0036a39c(long param_1)

{
  void *__ptr;
  
  __ptr = *(void **)(param_1 + 0x18);
  if (__ptr != (void *)0x0) {
    FUN_0036e048(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 0036a3d4  FUN_0036a3d4 =====

long FUN_0036a3d4(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrIN5KRISP4B_007a1850) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0036a3f0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0036a3f4  FUN_0036a3f4 =====

void FUN_0036a3f4(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 0036a418  FUN_0036a418 =====

void FUN_0036a418(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0036a428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}


// ===== 0036a430  FUN_0036a430 =====

long FUN_0036a430(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrIN5KRISP10_007a1858) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0036a44c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0036a450  FUN_0036a450 =====

void FUN_0036a450(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  void *__ptr;
  long lVar8;
  void *pvVar9;
  long lVar10;
  void *pvVar11;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  lVar6 = param_1[1];
  if ((ulong)((param_1[2] - lVar6 >> 3) * -0x71c71c71c71c71c7) < param_2) {
    lVar6 = lVar6 - *param_1 >> 3;
    uVar1 = lVar6 * -0x71c71c71c71c71c7 + param_2;
    if (0x38e38e38e38e38e < uVar1) {
      if (*(long *)(lVar2 + 0x28) != lVar3) goto LAB_0036a694;
      FUN_0036a6ec(param_1);
LAB_0036a64c:
      if (*(long *)(lVar2 + 0x28) == lVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_002f9ee0();
      }
      goto LAB_0036a694;
    }
    lVar4 = param_1[2] - *param_1 >> 3;
    uVar5 = lVar4 * 0x1c71c71c71c71c72;
    if (uVar5 < uVar1 || uVar5 - uVar1 == 0) {
      uVar5 = uVar1;
    }
    if (0x1c71c71c71c71c6 < (ulong)(lVar4 * -0x71c71c71c71c71c7)) {
      uVar5 = 0x38e38e38e38e38e;
    }
    if (uVar5 == 0) {
      lVar4 = 0;
    }
    else {
      if (0x38e38e38e38e38e < uVar5) goto LAB_0036a64c;
      lVar4 = FUN_00759c3c(uVar5 * 0x48);
    }
    lVar7 = lVar4 + lVar6 * 8;
    lVar8 = param_2 * 0x48;
    lVar10 = lVar7 + lVar8;
    lVar6 = lVar7;
    do {
                    /* try { // try from 0036a588 to 0036a58f has its CatchHandler @ 0036a66c */
      FUN_0036dfcc(lVar6);
      lVar8 = lVar8 + -0x48;
      lVar6 = lVar6 + 0x48;
    } while (lVar8 != 0);
    pvVar9 = (void *)*param_1;
    __ptr = (void *)param_1[1];
    lVar6 = (long)pvVar9 + (lVar7 - (long)__ptr);
    pvVar11 = pvVar9;
    lVar8 = lVar6;
    if (__ptr != pvVar9) {
      do {
        FUN_0036e38c(lVar8,pvVar11);
        pvVar11 = (void *)((long)pvVar11 + 0x48);
        lVar8 = lVar8 + 0x48;
      } while (pvVar11 != __ptr);
      do {
        FUN_0036e048(pvVar9);
        pvVar9 = (void *)((long)pvVar9 + 0x48);
      } while (pvVar9 != __ptr);
      __ptr = (void *)*param_1;
    }
    *param_1 = lVar6;
    param_1[1] = lVar10;
    param_1[2] = lVar4 + uVar5 * 0x48;
    if (__ptr != (void *)0x0) {
      free(__ptr);
    }
  }
  else {
    lVar4 = lVar6;
    if (param_2 != 0) {
      lVar4 = lVar6 + param_2 * 0x48;
      lVar10 = param_2 * 0x48;
      do {
                    /* try { // try from 0036a544 to 0036a54b has its CatchHandler @ 0036a660 */
        FUN_0036dfcc(lVar6);
        lVar10 = lVar10 + -0x48;
        lVar6 = lVar6 + 0x48;
      } while (lVar10 != 0);
    }
    param_1[1] = lVar4;
  }
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return;
  }
LAB_0036a694:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036a698  FUN_0036a698 =====

void FUN_0036a698(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x48;
    FUN_0036e048();
    lVar2 = param_1[2];
  }
  if ((void *)*param_1 == (void *)0x0) {
    return;
  }
  free((void *)*param_1);
  return;
}


// ===== 0036a6ec  FUN_0036a6ec =====

void FUN_0036a6ec(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 0036a700  FUN_0036a700 =====

void FUN_0036a700(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00761fe0;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 0036a760  FUN_0036a760 =====

void FUN_0036a760(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  *param_1 = (long)(PTR_DAT_007a17c8 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    free(param_1);
    return;
  }
  free(param_1);
  return;
}


// ===== 0036a7d0  FUN_0036a7d0 =====

void FUN_0036a7d0(undefined8 *param_1)

{
  void *__ptr;
  undefined8 *__ptr_00;
  void *pvVar1;
  void *pvVar2;
  
  __ptr_00 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (__ptr_00 != (undefined8 *)0x0) {
    pvVar2 = (void *)*__ptr_00;
    if (pvVar2 != (void *)0x0) {
      pvVar1 = (void *)__ptr_00[1];
      __ptr = pvVar2;
      if (pvVar1 != pvVar2) {
        do {
          pvVar1 = (void *)((long)pvVar1 + -0x48);
          FUN_0036e048(pvVar1);
        } while (pvVar1 != pvVar2);
        __ptr = (void *)*__ptr_00;
      }
      __ptr_00[1] = pvVar2;
      free(__ptr);
    }
    free(__ptr_00);
    return;
  }
  return;
}


// ===== 0036a848  FUN_0036a848 =====

void FUN_0036a848(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 0036a86c  FUN_0036a86c =====

void FUN_0036a86c(long param_1)

{
  void *__ptr;
  undefined8 *__ptr_00;
  void *pvVar1;
  void *pvVar2;
  
  __ptr_00 = *(undefined8 **)(param_1 + 0x18);
  if (__ptr_00 != (undefined8 *)0x0) {
    pvVar2 = (void *)*__ptr_00;
    if (pvVar2 != (void *)0x0) {
      pvVar1 = (void *)__ptr_00[1];
      __ptr = pvVar2;
      if (pvVar1 != pvVar2) {
        do {
          pvVar1 = (void *)((long)pvVar1 + -0x48);
          FUN_0036e048(pvVar1);
        } while (pvVar1 != pvVar2);
        __ptr = (void *)*__ptr_00;
      }
      __ptr_00[1] = pvVar2;
      free(__ptr);
    }
    free(__ptr_00);
    return;
  }
  return;
}


// ===== 0036a8e0  FUN_0036a8e0 =====

long FUN_0036a8e0(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrINS_6vecto_007a1860) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0036a8fc  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0036a900  FUN_0036a900 =====

void FUN_0036a900(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 0036a924  FUN_0036a924 =====

void FUN_0036a924(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0036a934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}


// ===== 0036a93c  FUN_0036a93c =====

long FUN_0036a93c(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrIN5KRISP10_007a1868) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0036a958  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0036a95c  _INIT_22 =====

void _INIT_22(void)

{
  DAT_007ab648 = 0xe;
  DAT_007ab649 = 0x73726556;
  uRam00000000007ab64d = 0x6e6f69;
  DAT_007ab650 = 0;
  __cxa_atexit(PTR_FUN_007a13a0,&DAT_007ab648,&PTR_LOOP_0075ec90);
  return;
}


// ===== 0036a99c  FUN_0036a99c =====

void FUN_0036a99c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0036a9fc(param_3);
  FUN_0036e38c(param_1,param_3);
  return;
}


// ===== 0036a9cc  FUN_0036a9cc =====

void FUN_0036a9cc(undefined8 param_1)

{
  FUN_0036e2d0(param_1);
  FUN_0036a9fc(param_1);
  return;
}


// ===== 0036a9f4  FUN_0036a9f4 =====

void FUN_0036a9f4(void)

{
  return;
}


// ===== 0036a9f8  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0036a9fc  FUN_0036a9fc =====

void FUN_0036a9fc(void)

{
  float *pfVar1;
  long *plVar2;
  float *pfVar3;
  float *pfVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 (*pauVar7) [16];
  ulong uVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  plVar2 = (long *)FUN_0036e624();
  pfVar4 = (float *)*plVar2;
  pfVar1 = (float *)plVar2[1];
  if (pfVar4 != pfVar1) {
    uVar5 = (long)pfVar1 + (-4 - (long)pfVar4);
    pfVar3 = pfVar4;
    if (0x1b < uVar5) {
      uVar5 = (uVar5 >> 2) + 1;
      uVar6 = uVar5 & 0x7ffffffffffffff8;
      pfVar3 = pfVar4 + uVar6;
      pauVar7 = (undefined1 (*) [16])(pfVar4 + 4);
      uVar8 = uVar6;
      do {
        uVar8 = uVar8 - 8;
        auVar10 = NEON_fmaxnm(pauVar7[-1],ZEXT816(0),4);
        auVar11 = NEON_fmaxnm(*pauVar7,ZEXT816(0),4);
        *(long *)(pauVar7[-1] + 8) = auVar10._8_8_;
        *(long *)pauVar7[-1] = auVar10._0_8_;
        *(long *)(*pauVar7 + 8) = auVar11._8_8_;
        *(long *)*pauVar7 = auVar11._0_8_;
        pauVar7 = pauVar7 + 2;
      } while (uVar8 != 0);
      if (uVar5 == uVar6) {
        return;
      }
    }
    do {
      fVar9 = *pfVar3;
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      pfVar4 = pfVar3 + 1;
      *pfVar3 = fVar9;
      pfVar3 = pfVar4;
    } while (pfVar4 != pfVar1);
  }
  return;
}


// ===== 0036aa88  FUN_0036aa88 =====

void FUN_0036aa88(void)

{
  float *pfVar1;
  long *plVar2;
  ulong uVar3;
  float *pfVar4;
  float *pfVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float __x;
  undefined1 auVar12 [16];
  float fStack_58;
  float fStack_54;
  
  plVar2 = (long *)FUN_0036e624();
  pfVar4 = (float *)*plVar2;
  pfVar1 = (float *)plVar2[1];
  if (pfVar4 != pfVar1) {
    uVar3 = (long)pfVar1 + (-4 - (long)pfVar4);
    if (0xb < uVar3) {
      auVar12 = NEON_fmov(0x3f800000,4);
      uVar3 = (uVar3 >> 2) + 1;
      uVar6 = uVar3 & 0x7ffffffffffffffc;
      pfVar5 = pfVar4;
      uVar7 = uVar6;
      do {
        fVar11 = expf(-pfVar5[1]);
        fVar8 = expf(__x);
        fVar9 = expf(fStack_58);
        fVar10 = expf(fStack_54);
        uVar7 = uVar7 - 4;
        pfVar5[4] = auVar12._8_4_ / (fVar9 + auVar12._8_4_);
        pfVar5[5] = auVar12._12_4_ / (fVar10 + auVar12._12_4_);
        *pfVar5 = auVar12._0_4_ / (fVar8 + auVar12._0_4_);
        pfVar5[1] = auVar12._4_4_ / (fVar11 + auVar12._4_4_);
        pfVar5 = pfVar5 + 4;
      } while (uVar7 != 0);
      pfVar4 = pfVar4 + uVar6;
      if (uVar3 == uVar6) {
        return;
      }
    }
    do {
      fVar11 = expf(-*pfVar4);
      pfVar5 = pfVar4 + 1;
      *pfVar4 = 1.0 / (fVar11 + 1.0);
      pfVar4 = pfVar5;
    } while (pfVar5 != pfVar1);
  }
  return;
}


// ===== 0036ab9c  FUN_0036ab9c =====

void FUN_0036ab9c(void)

{
  float *pfVar1;
  long *plVar2;
  float *pfVar3;
  float fVar4;
  
  plVar2 = (long *)FUN_0036e624();
  pfVar1 = (float *)plVar2[1];
  for (pfVar3 = (float *)*plVar2; pfVar3 != pfVar1; pfVar3 = pfVar3 + 1) {
    fVar4 = tanhf(*pfVar3);
    *pfVar3 = fVar4;
  }
  return;
}


// ===== 0036abd8  FUN_0036abd8 =====

void FUN_0036abd8(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 0036ac28  FUN_0036ac28 =====

void FUN_0036ac28(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)FUN_0036ebac();
  plVar4 = (long *)FUN_0036ebac(param_2);
  plVar1 = (long *)*plVar3;
  lVar6 = plVar3[1] - (long)plVar1 >> 3;
  if (lVar6 == 1) {
    lVar7 = *plVar4;
    lVar6 = *plVar1;
  }
  else {
    if (lVar6 != 2) {
      uVar5 = FUN_00753a74(0x20);
                    /* try { // try from 0036ad24 to 0036ad33 has its CatchHandler @ 0036ad80 */
      FUN_002fd2b0(auStack_50,"validateLinearInput: Invalid input shape.");
                    /* try { // try from 0036ad38 to 0036ad6f has its CatchHandler @ 0036ad70 */
      FUN_00374ee0(uVar5,auStack_50);
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar5,PTR_PTR_007a1338,PTR_FUN_007a11f8);
      }
      goto LAB_0036adc4;
    }
    lVar7 = *plVar4;
    lVar6 = plVar1[1];
  }
  if (lVar6 == *(long *)(lVar7 + 8)) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
      return;
    }
  }
  else {
    uVar5 = FUN_00753a74(0x20);
                    /* try { // try from 0036acc8 to 0036acd7 has its CatchHandler @ 0036ada0 */
    FUN_002fd2b0(auStack_50,"validateLinearInput: Invalid input shape.");
                    /* try { // try from 0036acdc to 0036ad13 has its CatchHandler @ 0036ad84 */
    FUN_00374ee0(uVar5,auStack_50);
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar5,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
  }
LAB_0036adc4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036adc8  FUN_0036adc8 =====

void FUN_0036adc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0036aa88(param_3);
  FUN_0036e38c(param_1,param_3);
  return;
}


// ===== 0036adf8  FUN_0036adf8 =====

void FUN_0036adf8(undefined8 param_1)

{
  FUN_0036e2d0(param_1);
  FUN_0036aa88(param_1);
  return;
}


// ===== 0036ae20  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0036ae24  FUN_0036ae24 =====

void FUN_0036ae24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0036ab9c(param_3);
  FUN_0036e38c(param_1,param_3);
  return;
}


// ===== 0036ae54  FUN_0036ae54 =====

void FUN_0036ae54(undefined8 param_1)

{
  FUN_0036e2d0(param_1);
  FUN_0036ab9c(param_1);
  return;
}


// ===== 0036ae7c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0036ae80  FUN_0036ae80 =====

void FUN_0036ae80(undefined8 *param_1)

{
  FUN_0036ba08();
  *param_1 = &PTR_FUN_00762178;
  return;
}


// ===== 0036aeb0  FUN_0036aeb0 =====

void FUN_0036aeb0(long param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_2[1] - *param_2 >> 2;
  uVar1 = param_3[1] - *param_3 >> 2;
  if (uVar2 < uVar1 || uVar2 - uVar1 == 0) {
    if (uVar2 < uVar1) {
      param_3[1] = *param_3 + (param_2[1] - *param_2);
      FUN_0036dcf4(*(undefined8 *)(*(long *)(param_1 + 8) + 8));
      return;
    }
  }
  else {
    FUN_002feac4(param_3,uVar2 - uVar1);
  }
  FUN_0036dcf4(*(undefined8 *)(*(long *)(param_1 + 8) + 8),param_2,param_3);
  return;
}


// ===== 0036af3c  FUN_0036af3c =====

void FUN_0036af3c(void *param_1)

{
  FUN_0036bb3c();
  free(param_1);
  return;
}


// ===== 0036af60  FUN_0036af60 =====

void FUN_0036af60(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long local_50;
  long *plStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = (long)(PTR_DAT_007a1878 + 0x10);
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[4] = 0;
  param_1[3] = 0;
  plVar2 = (long *)FUN_0036ebac(param_2);
  if (plVar2[1] - *plVar2 != 0x10) {
    uVar5 = FUN_00753a74(0x20);
                    /* try { // try from 0036b0e4 to 0036b0f3 has its CatchHandler @ 0036b244 */
    FUN_002fd2b0(&local_50,"Linear: Weights tensor must be 2D.");
                    /* try { // try from 0036b0f8 to 0036b133 has its CatchHandler @ 0036b230 */
    FUN_00374ee0(uVar5,&local_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar5,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
    goto LAB_0036b280;
  }
  uVar3 = FUN_0036e8e8(param_1[2]);
  if ((uVar3 & 1) == 0) {
    plVar2 = (long *)FUN_0036ebac(param_1[2]);
    if (plVar2[1] - *plVar2 != 8) {
      plVar2 = (long *)FUN_0036ebac(param_1[2]);
      if (plVar2[1] - *plVar2 == 0x10) {
        plVar2 = (long *)FUN_0036ebac(param_1[2]);
        if (*(long *)(*plVar2 + 8) == 1) goto LAB_0036b010;
      }
      uVar5 = FUN_00753a74(0x20);
                    /* try { // try from 0036b148 to 0036b157 has its CatchHandler @ 0036b22c */
      FUN_002fd2b0(&local_50,"Linear: Bias tensor must be either 1D or 2D with shape (row, 1).");
                    /* try { // try from 0036b15c to 0036b197 has its CatchHandler @ 0036b20c */
      FUN_00374ee0(uVar5,&local_50);
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar5,PTR_PTR_007a1338,PTR_FUN_007a11f8);
      }
      goto LAB_0036b280;
    }
LAB_0036b010:
    puVar4 = (undefined8 *)FUN_0036ebac(param_1[1]);
    lVar7 = *(long *)*puVar4;
    puVar4 = (undefined8 *)FUN_0036ebac(param_1[2]);
    if (lVar7 != *(long *)*puVar4) {
      uVar5 = FUN_00753a74(0x20);
                    /* try { // try from 0036b1ac to 0036b1bb has its CatchHandler @ 0036b228 */
      FUN_002fd2b0(&local_50,"Linear: Weights and bias tensor shapes do not match.");
                    /* try { // try from 0036b1c0 to 0036b1fb has its CatchHandler @ 0036b1fc */
      FUN_00374ee0(uVar5,&local_50);
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar5,PTR_PTR_007a1338,PTR_FUN_007a11f8);
      }
      goto LAB_0036b280;
    }
  }
                    /* try { // try from 0036b03c to 0036b043 has its CatchHandler @ 0036b254 */
  FUN_0036c290(&local_50);
  plVar2 = plStack_48;
  lVar7 = local_50;
  plVar6 = (long *)param_1[4];
  local_50 = 0;
  plStack_48 = (long *)0x0;
  param_1[4] = (long)plVar2;
  param_1[3] = lVar7;
  if ((plVar6 != (long *)0x0) && (lVar7 = FUN_00755c50(0xffffffffffffffff,plVar6 + 1), lVar7 == 0))
  {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_0071245c(plVar6);
  }
  plVar2 = plStack_48;
  if ((plStack_48 != (long *)0x0) &&
     (lVar7 = FUN_00755c50(0xffffffffffffffff,plStack_48 + 1), lVar7 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_0036b280:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036b284  FUN_0036b284 =====

void FUN_0036b284(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[4];
  *param_1 = &PTR_FUN_007621b8;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 0036b2e4  FUN_0036b2e4 =====

void FUN_0036b2e4(void *param_1)

{
  FUN_0036b284();
  free(param_1);
  return;
}


// ===== 0036b308  FUN_0036b308 =====

void FUN_0036b308(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  void *__s;
  ulong uVar4;
  undefined8 uVar5;
  size_t __n;
  ulong uVar6;
  ulong *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong *local_98;
  ulong *local_90;
  ulong *puStack_88;
  void *local_80;
  void *local_78;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_0036ac28(param_3,*(undefined8 *)(param_2 + 8));
  puVar2 = (undefined8 *)FUN_0036ebac(*(undefined8 *)(param_2 + 8));
  plVar3 = (long *)FUN_0036ebac(param_3);
  puVar7 = (ulong *)*puVar2;
  uVar4 = *puVar7;
  if (plVar3[1] - *plVar3 == 0x10) {
    uVar10 = *(ulong *)*plVar3;
    if (uVar4 != 0) goto LAB_0036b388;
LAB_0036b3d4:
    local_70 = (void *)0x0;
    local_78 = (void *)0x0;
    local_80 = (void *)0x0;
    __s = (void *)0x0;
  }
  else {
    uVar10 = 0;
    if (uVar4 == 0) goto LAB_0036b3d4;
LAB_0036b388:
    local_70 = (void *)0x0;
    local_78 = (void *)0x0;
    local_80 = (void *)0x0;
    if (uVar4 >> 0x3e != 0) {
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 0036b4e4 to 0036b4eb has its CatchHandler @ 0036b524 */
        uVar5 = FUN_002febf0(&local_80);
                    /* catch() { ... } // from try @ 0036b460 with catch @ 0036b4ec */
                    /* catch() { ... } // from try @ 0036b408 with catch @ 0036b510 */
        if (local_80 != (void *)0x0) {
          local_78 = local_80;
          free(local_80);
        }
        if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_00755eac(uVar5);
        }
      }
      goto LAB_0036b554;
    }
    __n = uVar4 * 4;
                    /* try { // try from 0036b394 to 0036b39b has its CatchHandler @ 0036b524 */
    __s = (void *)FUN_00759c3c(__n);
    local_70 = (void *)((long)__s + uVar4 * 4);
    local_80 = __s;
    memset(__s,0,__n);
    local_78 = (void *)((long)__s + __n);
  }
  uVar6 = puVar7[1];
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  puVar2 = (undefined8 *)FUN_0036e61c(*(undefined8 *)(param_2 + 8));
  uVar9 = *puVar2;
  puVar2 = (undefined8 *)FUN_0036e61c(param_3);
  uVar5 = *puVar2;
  puVar2 = (undefined8 *)FUN_0036e61c(*(undefined8 *)(param_2 + 0x10));
                    /* try { // try from 0036b408 to 0036b43f has its CatchHandler @ 0036b510 */
  FUN_0036d67c(uVar8,uVar9,uVar4,uVar6,0,uVar5,uVar6,1,0,*puVar2,uVar4,1,__s,uVar4,1);
  if (uVar10 == 0) {
                    /* try { // try from 0036b460 to 0036b467 has its CatchHandler @ 0036b4ec */
    local_98 = (ulong *)FUN_00759c3c(8);
    puStack_88 = local_98 + 1;
    *local_98 = uVar4;
  }
  else {
                    /* try { // try from 0036b444 to 0036b44b has its CatchHandler @ 0036b4f0 */
    local_98 = (ulong *)FUN_00759c3c(0x10);
    puStack_88 = local_98 + 2;
    *local_98 = uVar10;
    local_98[1] = uVar4;
  }
                    /* try { // try from 0036b474 to 0036b483 has its CatchHandler @ 0036b4f4 */
  local_90 = puStack_88;
  FUN_0036e160(param_1,&local_80,&local_98);
  if (local_98 != (ulong *)0x0) {
    local_90 = local_98;
    free(local_98);
  }
  if (local_80 != (void *)0x0) {
    local_78 = local_80;
    free(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
LAB_0036b554:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036b558  FUN_0036b558 =====

void FUN_0036b558(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0036b560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


// ===== 0036b564  FUN_0036b564 =====

void FUN_0036b564(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *local_58;
  undefined1 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_58 = param_1 + 1;
  *local_58 = 0;
  puVar4 = PTR_DAT_007a1880;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar7 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)param_2[1];
  local_50 = 0;
  *param_1 = (long)(puVar4 + 0x10);
  lVar2 = (long)puVar1 - (long)puVar7;
  if (lVar2 != 0) {
    if (lVar2 < 0) {
      if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 0036b640 to 0036b643 has its CatchHandler @ 0036b644 */
        uVar6 = FUN_0036b9f4();
                    /* catch() { ... } // from try @ 0036b5bc with catch @ 0036b644
                       catch() { ... } // from try @ 0036b640 with catch @ 0036b644 */
        FUN_0035fc84(&local_58);
        if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_00755eac(uVar6);
        }
      }
      goto LAB_0036b668;
    }
                    /* try { // try from 0036b5bc to 0036b5c3 has its CatchHandler @ 0036b644 */
    puVar5 = (undefined8 *)FUN_00759c3c(lVar2);
    param_1[1] = (long)puVar5;
    param_1[2] = (long)puVar5;
    param_1[3] = (long)puVar5 + lVar2;
    do {
      lVar2 = puVar7[1];
      *puVar5 = *puVar7;
      puVar5[1] = lVar2;
      if (lVar2 != 0) {
        FUN_00755c20(1,lVar2 + 8);
      }
      puVar7 = puVar7 + 2;
      puVar5 = puVar5 + 2;
    } while (puVar7 != puVar1);
    param_1[2] = (long)puVar5;
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
LAB_0036b668:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036b66c  FUN_0036b66c =====

void FUN_0036b66c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_b0 [72];
  long *local_68;
  long *plStack_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  puVar3 = *(undefined8 **)(param_2 + 0x10);
  for (puVar1 = *(undefined8 **)(param_2 + 8); puVar1 != puVar3; puVar1 = puVar1 + 2) {
    plVar2 = (long *)*puVar1;
    plVar4 = (long *)puVar1[1];
    local_68 = plVar2;
    plStack_60 = plVar4;
    if (plVar4 != (long *)0x0) {
      FUN_00755c20(1,plVar4 + 1);
    }
                    /* try { // try from 0036b70c to 0036b71b has its CatchHandler @ 0036b760 */
    (**(code **)(*plVar2 + 0x10))(auStack_b0,plVar2,param_3);
    FUN_0036e4bc(param_3,auStack_b0);
    FUN_0036e048(auStack_b0);
    if ((plVar4 != (long *)0x0) && (lVar6 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar6 == 0)
       ) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0071245c(plVar4);
    }
  }
  FUN_0036e38c(param_1,param_3);
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0036b788  FUN_0036b788 =====

void FUN_0036b788(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 auStack_a0 [72];
  long *local_58;
  long *plStack_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_0036e2d0(param_1);
  puVar2 = *(undefined8 **)(param_2 + 0x10);
  for (puVar6 = *(undefined8 **)(param_2 + 8); puVar6 != puVar2; puVar6 = puVar6 + 2) {
    plVar1 = (long *)*puVar6;
    plVar3 = (long *)puVar6[1];
    local_58 = plVar1;
    plStack_50 = plVar3;
    if (plVar3 != (long *)0x0) {
      FUN_00755c20(1,plVar3 + 1);
    }
                    /* try { // try from 0036b7f0 to 0036b7ff has its CatchHandler @ 0036b86c */
    (**(code **)(*plVar1 + 0x10))(auStack_a0,plVar1,param_1);
    FUN_0036e4bc(param_1,auStack_a0);
    FUN_0036e048(auStack_a0);
    if ((plVar3 != (long *)0x0) && (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar5 == 0)
       ) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_0071245c(plVar3);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036b89c  FUN_0036b89c =====

void FUN_0036b89c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  void *__ptr;
  void *pvVar3;
  
  __ptr = (void *)param_1[1];
  *param_1 = &PTR_FUN_00762200;
  if (__ptr == (void *)0x0) {
    return;
  }
  pvVar3 = (void *)param_1[2];
  if (pvVar3 == __ptr) {
    param_1[2] = __ptr;
    free(__ptr);
    return;
  }
  do {
    plVar2 = *(long **)((long)pvVar3 + -8);
    if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0)
       ) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_0071245c(plVar2);
    }
    pvVar3 = (void *)((long)pvVar3 + -0x10);
  } while (pvVar3 != __ptr);
  param_1[2] = __ptr;
  free((void *)param_1[1]);
  return;
}


// ===== 0036b954  FUN_0036b954 =====

void FUN_0036b954(long *param_1)

{
  long lVar1;
  void *__ptr;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar3 = (void *)param_1[1];
  *param_1 = (long)(PTR_DAT_007a1880 + 0x10);
  if (pvVar3 != (void *)0x0) {
    pvVar4 = (void *)param_1[2];
    __ptr = pvVar3;
    if (pvVar4 != pvVar3) {
      do {
        plVar2 = *(long **)((long)pvVar4 + -8);
        if ((plVar2 != (long *)0x0) &&
           (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0)) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          FUN_0071245c(plVar2);
        }
        pvVar4 = (void *)((long)pvVar4 + -0x10);
      } while (pvVar4 != pvVar3);
      __ptr = (void *)param_1[1];
    }
    param_1[2] = (long)pvVar3;
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0036b9f4  FUN_0036b9f4 =====

void FUN_0036b9f4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 0036ba08  FUN_0036ba08 =====

void FUN_0036ba08(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_007a1890;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
                    /* try { // try from 0036ba38 to 0036ba3f has its CatchHandler @ 0036bad8 */
  plVar2 = (long *)FUN_00759c3c(0x30);
  puVar1 = PTR_DAT_007a1898;
  plVar2[1] = 0;
  plVar2[2] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
                    /* try { // try from 0036ba5c to 0036ba63 has its CatchHandler @ 0036bab4 */
  FUN_0036bbf8(plVar2 + 3);
  plVar4 = (long *)param_1[2];
  param_1[1] = (long)(plVar2 + 3);
  param_1[2] = (long)plVar2;
  if ((plVar4 != (long *)0x0) && (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar3 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0071245c(plVar4);
    return;
  }
  return;
}


// ===== 0036baec  FUN_0036baec =====

void FUN_0036baec(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 0036bb3c  FUN_0036bb3c =====

void FUN_0036bb3c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00762248;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 0036bb9c  FUN_0036bb9c =====

void FUN_0036bb9c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x36bba0);
  (*pcVar1)();
}


// ===== 0036bba0  FUN_0036bba0 =====

void FUN_0036bba0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00762280;
  FUN_00712454();
  return;
}


// ===== 0036bbb4  FUN_0036bbb4 =====

void FUN_0036bbb4(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1898 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 0036bbe8  FUN_0036bbe8 =====

void FUN_0036bbe8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0036bbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0036bbf4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0036bbf8  FUN_0036bbf8 =====

void FUN_0036bbf8(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long local_50;
  long *plStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = (long)(PTR_DAT_007a1888 + 0x10);
  param_1[1] = 0;
  param_1[2] = 0;
                    /* try { // try from 0036bc38 to 0036bc3f has its CatchHandler @ 0036bcd0 */
  FUN_0036c290(&local_50);
  plVar2 = plStack_48;
  lVar3 = local_50;
  plVar4 = (long *)param_1[2];
  local_50 = 0;
  plStack_48 = (long *)0x0;
  param_1[2] = (long)plVar2;
  param_1[1] = lVar3;
  if ((plVar4 != (long *)0x0) && (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar3 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0071245c(plVar4);
  }
  plVar2 = plStack_48;
  if ((plStack_48 != (long *)0x0) &&
     (lVar3 = FUN_00755c50(0xffffffffffffffff,plStack_48 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036bcf8  FUN_0036bcf8 =====

void FUN_0036bcf8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  *param_1 = &PTR_FUN_007622d0;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 0036bd58  FUN_0036bd58 =====

void FUN_0036bd58(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  *param_1 = (long)(PTR_DAT_007a1888 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    free(param_1);
    return;
  }
  free(param_1);
  return;
}


// ===== 0036bdc8  FUN_0036bdc8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0036bdc8(long *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  ulong local_50;
  undefined8 uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_0036ba08();
  puVar5 = PTR_DAT_007a18a0;
  param_1[3] = param_2;
  param_1[4] = param_3;
  *param_1 = (long)(puVar5 + 0x10);
  lVar6 = FUN_003747dc(param_2);
  if (lVar6 != ((long *)param_1[4])[1] - *(long *)param_1[4] >> 2) {
                    /* try { // try from 0036be28 to 0036be2f has its CatchHandler @ 0036becc */
    local_40 = (char *)FUN_00759c3c(0x50);
    uVar4 = s_KrispMlLinearExtLayer__KrispMlLi_001cdb0a._48_8_;
    uVar3 = s_KrispMlLinearExtLayer__KrispMlLi_001cdb0a._32_8_;
    uVar2 = CONCAT71(s_KrispMlLinearExtLayer__KrispMlLi_001cdb0a._57_7_,
                     s_KrispMlLinearExtLayer__KrispMlLi_001cdb0a[0x38]);
    uStack_48 = _UNK_00200b28;
    local_50 = _DAT_00200b20;
    *(undefined8 *)(local_40 + 0x28) = s_KrispMlLinearExtLayer__KrispMlLi_001cdb0a._40_8_;
    *(undefined8 *)(local_40 + 0x20) = uVar3;
    *(undefined8 *)(local_40 + 0x38) = uVar2;
    *(undefined8 *)(local_40 + 0x30) = uVar4;
    uVar3 = s_KrispMlLinearExtLayer__KrispMlLi_001cdb0a._65_8_;
    uVar2 = CONCAT17(s_KrispMlLinearExtLayer__KrispMlLi_001cdb0a[0x40],
                     s_KrispMlLinearExtLayer__KrispMlLi_001cdb0a._57_7_);
    local_40[0x49] = '\0';
    *(undefined8 *)(local_40 + 0x41) = uVar3;
    *(undefined8 *)(local_40 + 0x39) = uVar2;
    uVar4 = s_KrispMlLinearExtLayer__KrispMlLi_001cdb0a._24_8_;
    uVar3 = s_KrispMlLinearExtLayer__KrispMlLi_001cdb0a._16_8_;
    uVar2 = s_KrispMlLinearExtLayer__KrispMlLi_001cdb0a._0_8_;
    *(undefined8 *)(local_40 + 8) = s_KrispMlLinearExtLayer__KrispMlLi_001cdb0a._8_8_;
    *(undefined8 *)local_40 = uVar2;
    *(undefined8 *)(local_40 + 0x18) = uVar4;
    *(undefined8 *)(local_40 + 0x10) = uVar3;
                    /* try { // try from 0036be64 to 0036be7f has its CatchHandler @ 0036beb4 */
    FUN_00372794(&local_50,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/mlops/src/layers/mlExt/krisp_ml_linear_ext_layer.cpp"
                 ,0x1f,"KrispMlLinearExtLayer");
    if ((local_50 & 1) != 0) {
      free(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036bef4  FUN_0036bef4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0036bef4(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_003747d4(*(undefined8 *)(param_1 + 0x18));
  if ((param_2[1] - *param_2 == 0) || (lVar3 != param_2[1] - *param_2 >> 2)) {
    local_70 = (char *)FUN_00759c3c(0x38);
    uVar7 = s_KrispMlLinearExtLayer__run__inco_001d9ec5._24_8_;
    uVar6 = s_KrispMlLinearExtLayer__run__inco_001d9ec5._16_8_;
    uVar5 = s_KrispMlLinearExtLayer__run__inco_001d9ec5._0_8_;
    uStack_78 = _UNK_002008a8;
    local_80 = _DAT_002008a0;
    *(undefined8 *)(local_70 + 8) = s_KrispMlLinearExtLayer__run__inco_001d9ec5._8_8_;
    *(undefined8 *)local_70 = uVar5;
    *(undefined8 *)(local_70 + 0x18) = uVar7;
    *(undefined8 *)(local_70 + 0x10) = uVar6;
    uVar7 = s_KrispMlLinearExtLayer__run__inco_001d9ec5._32_8_;
    uVar5 = CONCAT17(s_KrispMlLinearExtLayer__run__inco_001d9ec5[0x2f],
                     s_KrispMlLinearExtLayer__run__inco_001d9ec5._40_7_);
    uVar6 = CONCAT71(s_KrispMlLinearExtLayer__run__inco_001d9ec5._48_7_,
                     s_KrispMlLinearExtLayer__run__inco_001d9ec5[0x2f]);
    local_70[0x37] = '\0';
    *(undefined8 *)(local_70 + 0x28) = uVar5;
    *(undefined8 *)(local_70 + 0x20) = uVar7;
    *(undefined8 *)(local_70 + 0x2f) = uVar6;
                    /* try { // try from 0036bf88 to 0036bfa3 has its CatchHandler @ 0036c0ac */
    FUN_00372794(&local_80,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/mlops/src/layers/mlExt/krisp_ml_linear_ext_layer.cpp"
                 ,0x42,"forward");
    if ((local_80 & 1) != 0) {
      free(local_70);
    }
  }
  uVar4 = FUN_003747dc(*(undefined8 *)(param_1 + 0x18));
  uVar9 = param_3[1] - *param_3 >> 2;
  if (uVar4 < uVar9 || uVar4 - uVar9 == 0) {
    if (uVar4 < uVar9) {
      param_3[1] = *param_3 + uVar4 * 4;
    }
  }
  else {
    FUN_002feac4(param_3,uVar4 - uVar9);
  }
  lVar3 = *param_2;
  lVar1 = param_2[1];
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 8) + 8);
  uVar5 = FUN_003747e4(*(undefined8 *)(param_1 + 0x18));
  uVar6 = FUN_003747d4(*(undefined8 *)(param_1 + 0x18));
  uVar7 = FUN_003747dc(*(undefined8 *)(param_1 + 0x18));
  uVar11 = **(undefined8 **)(param_1 + 0x20);
  uVar8 = FUN_003747dc(*(undefined8 *)(param_1 + 0x18));
  FUN_0036d67c(uVar10,lVar3,1,lVar1 - lVar3 >> 2,0,uVar5,uVar6,uVar7,0,uVar11,1,uVar8,*param_3,1,
               param_3[1] - *param_3 >> 2);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036c0dc  FUN_0036c0dc =====

void FUN_0036c0dc(void *param_1)

{
  FUN_0036bb3c();
  free(param_1);
  return;
}


// ===== 0036c100  FUN_0036c100 =====

void FUN_0036c100(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = (long *)FUN_00759c3c(0x20);
  puVar1 = PTR_DAT_007a18a8;
  plVar3[2] = 0;
  puVar2 = PTR_DAT_007a18b0;
  param_1[1] = plVar3;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[1] = 0;
  plVar3[3] = (long)(puVar2 + 0x10);
  *param_1 = plVar3 + 3;
  return;
}


// ===== 0036c150  FUN_0036c150 =====

void FUN_0036c150(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = (long *)FUN_00759c3c(0x20);
  puVar1 = PTR_DAT_007a18b8;
  plVar3[2] = 0;
  puVar2 = PTR_DAT_007a18c0;
  param_1[1] = plVar3;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[1] = 0;
  plVar3[3] = (long)(puVar2 + 0x10);
  *param_1 = plVar3 + 3;
  return;
}


// ===== 0036c1a0  FUN_0036c1a0 =====

void FUN_0036c1a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00762340;
  FUN_00712454();
  return;
}


// ===== 0036c1b4  FUN_0036c1b4 =====

void FUN_0036c1b4(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a18a8 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 0036c1e8  FUN_0036c1e8 =====

void FUN_0036c1e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0036c1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0036c1f4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0036c1f8  FUN_0036c1f8 =====

void FUN_0036c1f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00762390;
  FUN_00712454();
  return;
}


// ===== 0036c20c  FUN_0036c20c =====

void FUN_0036c20c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a18b8 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 0036c240  FUN_0036c240 =====

void FUN_0036c240(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0036c248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0036c24c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0036c250  _INIT_23 =====

void _INIT_23(void)

{
  char *pcVar1;
  
  pcVar1 = getenv("OPENBLAS_NUM_THREADS");
  if (pcVar1 != (char *)0x0) {
    DAT_007ab660 = 0;
    return;
  }
  FUN_0070b074(1);
  DAT_007ab660 = 0;
  return;
}


// ===== 0036c290  FUN_0036c290 =====

void FUN_0036c290(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  long local_60;
  long *local_58;
  long local_50;
  long *local_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_0036c100(&local_50);
                    /* try { // try from 0036c2bc to 0036c2c3 has its CatchHandler @ 0036c4b4 */
  FUN_0036c150(&local_60);
                    /* try { // try from 0036c2c4 to 0036c2cb has its CatchHandler @ 0036c4a4 */
  plVar3 = (long *)FUN_00759c3c(0x20);
  plVar3[2] = 0;
  puVar1 = PTR_DAT_007a18d0 + 0x10;
  *plVar3 = (long)(PTR_DAT_007a18c8 + 0x10);
  local_80 = plVar3 + 3;
  *local_80 = (long)puVar1;
  plVar3[1] = 0;
  local_78 = plVar3;
  local_70 = local_80;
  local_68 = plVar3;
  FUN_00755c20(1);
  if ((local_60 == 0) || (local_50 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    lVar4 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1);
  }
  else {
                    /* try { // try from 0036c320 to 0036c327 has its CatchHandler @ 0036c48c */
    lVar4 = FUN_00759c3c(0x30);
                    /* try { // try from 0036c328 to 0036c33b has its CatchHandler @ 0036c47c */
    FUN_0036c5cc(lVar4,&local_60,&local_50,&local_80);
    *param_1 = lVar4;
                    /* try { // try from 0036c340 to 0036c347 has its CatchHandler @ 0036c464 */
    plVar5 = (long *)FUN_00759c3c(0x20);
    plVar3 = local_78;
    puVar1 = PTR_DAT_007a18d8;
    plVar5[2] = 0;
    plVar5[3] = lVar4;
    param_1[1] = (long)plVar5;
    *plVar5 = (long)(puVar1 + 0x10);
    plVar5[1] = 0;
    plVar5 = local_68;
    if (local_78 == (long *)0x0) goto joined_r0x0036c37c;
    lVar4 = FUN_00755c50(0xffffffffffffffff,local_78 + 1);
  }
  plVar5 = local_68;
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
    plVar5 = local_68;
  }
joined_r0x0036c37c:
  local_68 = plVar5;
  if ((plVar5 != (long *)0x0) && (lVar4 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar4 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
  if ((local_58 != (long *)0x0) &&
     (lVar4 = FUN_00755c50(0xffffffffffffffff,local_58 + 1), lVar4 == 0)) {
    (**(code **)(*local_58 + 0x10))(local_58);
    FUN_0071245c(local_58);
  }
  if ((local_48 != (long *)0x0) &&
     (lVar4 = FUN_00755c50(0xffffffffffffffff,local_48 + 1), lVar4 == 0)) {
    (**(code **)(*local_48 + 0x10))(local_48);
    FUN_0071245c(local_48);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036c4dc  FUN_0036c4dc =====

void FUN_0036c4dc(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 0036c52c  FUN_0036c52c =====

void FUN_0036c52c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 0036c57c  FUN_0036c57c =====

void FUN_0036c57c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 0036c5cc  FUN_0036c5cc =====

void FUN_0036c5cc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  
  lVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00755c20(1,lVar1 + 8);
  }
  lVar1 = param_3[1];
  param_1[2] = *param_3;
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    FUN_00755c20(1,lVar1 + 8);
  }
  lVar1 = param_4[1];
  param_1[4] = *param_4;
  param_1[5] = lVar1;
  if (lVar1 != 0) {
    FUN_00755c20(1,lVar1 + 8);
  }
  return;
}


// ===== 0036c640  FUN_0036c640 =====

void FUN_0036c640(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar1 = param_2[1] - *param_2;
  if (lVar1 == 0) {
    uVar3 = FUN_00753a74(0x20);
                    /* try { // try from 0036c6b0 to 0036c6bf has its CatchHandler @ 0036c724 */
    FUN_002fd2b0(auStack_50,"KrispBlas::vectorMean: input vector is empty");
                    /* try { // try from 0036c6c4 to 0036c6ff has its CatchHandler @ 0036c700 */
    FUN_00374ee0(uVar3,auStack_50);
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
  }
  else if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Could not recover jumptable at 0x0036c69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
              (*(long **)(param_1 + 0x20),*param_2,lVar1 >> 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036c750  FUN_0036c750 =====

float FUN_0036c750(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  void *local_60;
  void *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_2[1] - *param_2 == 0) {
    uVar2 = FUN_00753a74(0x20);
                    /* try { // try from 0036c820 to 0036c82f has its CatchHandler @ 0036c890 */
    FUN_002fd2b0(&local_60,"KrispBlas::vectorRMS: input vector is empty");
                    /* try { // try from 0036c834 to 0036c86b has its CatchHandler @ 0036c86c */
    FUN_00374ee0(uVar2,&local_60);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
  }
  else {
    local_60 = (void *)0x0;
    local_58 = (void *)0x0;
    local_50 = 0;
                    /* try { // try from 0036c794 to 0036c7c3 has its CatchHandler @ 0036c8a0 */
    FUN_002feac4(&local_60,param_2[1] - *param_2 >> 2);
    lVar3 = param_2[1] - *param_2 >> 2;
    FUN_0036c8d4(param_1,*param_2,lVar3,local_60,lVar3);
    fVar4 = (float)FUN_0036c640(param_1,&local_60);
    if (local_60 != (void *)0x0) {
      local_58 = local_60;
      free(local_60);
    }
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return SQRT(fVar4) + 1e-06;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036c8d4  FUN_0036c8d4 =====

void FUN_0036c8d4(long param_1,long param_2,ulong param_3,long param_4,ulong param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_2 == 0) || (param_4 == 0)) {
    uVar2 = FUN_00753a74(0x20);
                    /* try { // try from 0036c944 to 0036c953 has its CatchHandler @ 0036ca28 */
    FUN_002fd2b0(auStack_50,"KrispBlas::vectorSquare: nullptr passed as argument");
                    /* try { // try from 0036c958 to 0036c993 has its CatchHandler @ 0036ca0c */
    FUN_00374ee0(uVar2,auStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
  }
  else if (param_5 < param_3) {
    uVar2 = FUN_00753a74(0x20);
                    /* try { // try from 0036c9a8 to 0036c9b7 has its CatchHandler @ 0036ca08 */
    FUN_002fd2b0(auStack_50,"KrispBlas::vectorSquare: output vector size is less than input");
                    /* try { // try from 0036c9bc to 0036c9f7 has its CatchHandler @ 0036c9f8 */
    FUN_00374ee0(uVar2,auStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Could not recover jumptable at 0x0036c930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036ca54  FUN_0036ca54 =====

void FUN_0036ca54(undefined4 param_1,long param_2,long *param_3,long *param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = *param_3;
  uVar3 = param_3[1] - lVar1 >> 2;
  uVar2 = param_4[1] - *param_4 >> 2;
  if (uVar3 < uVar2 || uVar3 - uVar2 == 0) {
    if (uVar3 < uVar2) {
      param_4[1] = *param_4 + (param_3[1] - lVar1);
    }
  }
  else {
    FUN_002feac4(param_4,uVar3 - uVar2);
    lVar1 = *param_3;
  }
  if (param_3[1] - lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0036caec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 0x20) + 0x38))
              (param_1,*(long **)(param_2 + 0x20),lVar1,param_3[1] - lVar1 >> 2,*param_4);
    return;
  }
  return;
}


// ===== 0036cb04  FUN_0036cb04 =====

void FUN_0036cb04(undefined4 param_1,long param_2,long *param_3,long *param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = *param_3;
  uVar3 = param_3[1] - lVar1 >> 2;
  uVar2 = param_4[1] - *param_4 >> 2;
  if (uVar3 < uVar2 || uVar3 - uVar2 == 0) {
    if (uVar3 < uVar2) {
      param_4[1] = *param_4 + (param_3[1] - lVar1);
    }
  }
  else {
    FUN_002feac4(param_4,uVar3 - uVar2);
    lVar1 = *param_3;
  }
  if (param_3[1] - lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0036cb9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 0x20) + 0x40))
              (param_1,*(long **)(param_2 + 0x20),lVar1,param_3[1] - lVar1 >> 2,*param_4);
    return;
  }
  return;
}


// ===== 0036cbb4  FUN_0036cbb4 =====

void FUN_0036cbb4(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                 long param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((param_2 == 0) || (param_4 == 0)) || (param_6 == 0)) {
    uVar2 = FUN_00753a74(0x20);
                    /* try { // try from 0036cc40 to 0036cc4f has its CatchHandler @ 0036cd24 */
    FUN_002fd2b0(auStack_50,"KrispBlas::vectorPlusVector: nullptr passed as argument");
                    /* try { // try from 0036cc54 to 0036cc8f has its CatchHandler @ 0036cd08 */
    FUN_00374ee0(uVar2,auStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
  }
  else if ((param_3 == param_5) && (param_3 == param_7)) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Could not recover jumptable at 0x0036cc2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
                (*(long **)(param_1 + 0x10),param_3,param_2,param_4,param_6);
      return;
    }
  }
  else {
    uVar2 = FUN_00753a74(0x20);
                    /* try { // try from 0036cca4 to 0036ccb3 has its CatchHandler @ 0036cd04 */
    FUN_002fd2b0(auStack_50,"KrispBlas::vectorPlusVector: sizes of input vectors are not equal");
                    /* try { // try from 0036ccb8 to 0036ccf3 has its CatchHandler @ 0036ccf4 */
    FUN_00374ee0(uVar2,auStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036cd50  FUN_0036cd50 =====

void FUN_0036cd50(long param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = *param_2;
  uVar6 = param_2[1] - lVar3 >> 2;
  uVar5 = param_4[1] - *param_4 >> 2;
  if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
    if (uVar6 < uVar5) {
      param_4[1] = *param_4 + (param_2[1] - lVar3);
    }
  }
  else {
    FUN_002feac4(param_4,uVar6 - uVar5);
    lVar3 = *param_2;
  }
  if (param_2[1] == lVar3) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else {
    lVar4 = param_2[1] - lVar3;
    if (lVar4 == param_3[1] - *param_3) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x0036ce18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
                  (*(long **)(param_1 + 0x10),lVar4 >> 2,lVar3,*param_3,*param_4);
        return;
      }
    }
    else {
      uVar2 = FUN_00753a74(0x20);
                    /* try { // try from 0036ce50 to 0036ce5f has its CatchHandler @ 0036cec0 */
      FUN_002fd2b0(auStack_60,"KrispBlas::vectorPlusVector: sizes of input vectors are not equal");
                    /* try { // try from 0036ce64 to 0036ce9b has its CatchHandler @ 0036ce9c */
      FUN_00374ee0(uVar2,auStack_60);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar2,PTR_PTR_007a1338,PTR_FUN_007a11f8);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036cee8  FUN_0036cee8 =====

void FUN_0036cee8(long param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = *param_2;
  uVar6 = param_2[1] - lVar3 >> 2;
  uVar5 = param_4[1] - *param_4 >> 2;
  if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
    if (uVar6 < uVar5) {
      param_4[1] = *param_4 + (param_2[1] - lVar3);
    }
  }
  else {
    FUN_002feac4(param_4,uVar6 - uVar5);
    lVar3 = *param_2;
  }
  if (param_2[1] == lVar3) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else {
    lVar4 = param_2[1] - lVar3;
    if (lVar4 == param_3[1] - *param_3) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x0036cfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x10) + 0x28))
                  (*(long **)(param_1 + 0x10),lVar4 >> 2,lVar3,*param_3,*param_4);
        return;
      }
    }
    else {
      uVar2 = FUN_00753a74(0x20);
                    /* try { // try from 0036cfe8 to 0036cff7 has its CatchHandler @ 0036d058 */
      FUN_002fd2b0(auStack_60,"KrispBlas::vectorMultVector: sizes of input vectors are not equal");
                    /* try { // try from 0036cffc to 0036d033 has its CatchHandler @ 0036d034 */
      FUN_00374ee0(uVar2,auStack_60);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar2,PTR_PTR_007a1338,PTR_FUN_007a11f8);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036d080  FUN_0036d080 =====

void FUN_0036d080(long param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = *param_2;
  uVar5 = param_2[1] - lVar3 >> 3;
  uVar4 = param_4[1] - *param_4 >> 3;
  if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
    if (uVar5 < uVar4) {
      param_4[1] = *param_4 + (param_2[1] - lVar3);
    }
  }
  else {
    FUN_00346998(param_4,uVar5 - uVar4);
    lVar3 = *param_2;
  }
  if (param_2[1] == lVar3) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else if (param_2[1] - lVar3 >> 3 == param_3[1] - *param_3 >> 2) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x0036d14c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x20) + 0x58))();
      return;
    }
  }
  else {
    uVar2 = FUN_00753a74(0x20);
                    /* try { // try from 0036d184 to 0036d193 has its CatchHandler @ 0036d1f4 */
    FUN_002fd2b0(auStack_60,"KrispBlas::vectorMultVector: sizes of input vectors are not equal");
                    /* try { // try from 0036d198 to 0036d1cf has its CatchHandler @ 0036d1d0 */
    FUN_00374ee0(uVar2,auStack_60);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036d21c  FUN_0036d21c =====

void FUN_0036d21c(undefined4 param_1,long param_2,long *param_3,long *param_4,long *param_5,
                 long *param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar4 = (undefined4 *)*param_4;
  lVar3 = *param_3;
  lVar7 = param_4[1] - (long)puVar4;
  lVar5 = *param_5;
  lVar9 = param_3[1] - lVar3;
  uVar6 = lVar9 >> 2;
  if (lVar7 == 4) {
    if (lVar9 == param_5[1] - lVar5) {
      lVar7 = *param_6;
      uVar8 = param_6[1] - lVar7 >> 2;
      if (uVar6 < uVar8 || uVar6 - uVar8 == 0) {
        if (uVar6 < uVar8) {
          param_6[1] = lVar7 + lVar9;
        }
      }
      else {
        FUN_002feac4(param_6,uVar6 - uVar8);
        lVar3 = *param_3;
        puVar4 = (undefined4 *)*param_4;
        lVar5 = *param_5;
        lVar7 = *param_6;
      }
      param_1 = *puVar4;
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x0036d398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_2 + 0x20) + 0x70))
                  (*(long **)(param_2 + 0x20),lVar3,param_3[1] - lVar3 >> 2,lVar5,lVar7);
        return;
      }
    }
    else {
      uVar2 = FUN_00753a74(0x20);
                    /* try { // try from 0036d3a8 to 0036d3b7 has its CatchHandler @ 0036d480 */
      FUN_002fd2b0(auStack_60,
                   "KrispBlas::vectorSymmetricSumWithCoefficient: incorrect vectors\' size.");
                    /* try { // try from 0036d3bc to 0036d3f3 has its CatchHandler @ 0036d460 */
      param_1 = FUN_00374ee0(uVar2,auStack_60);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar2,PTR_PTR_007a1338,PTR_FUN_007a11f8);
      }
    }
  }
  else if ((lVar9 == lVar7) && (lVar9 == param_5[1] - lVar5)) {
    lVar9 = *param_6;
    uVar8 = param_6[1] - lVar9 >> 2;
    if (uVar6 < uVar8 || uVar6 - uVar8 == 0) {
      if (uVar6 < uVar8) {
        param_6[1] = lVar9 + lVar7;
      }
    }
    else {
      param_1 = FUN_002feac4(param_6,uVar6 - uVar8);
      lVar3 = *param_3;
      puVar4 = (undefined4 *)*param_4;
      lVar5 = *param_5;
      lVar9 = *param_6;
    }
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x0036d344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_2 + 0x20) + 0x68))
                (*(long **)(param_2 + 0x20),lVar3,param_3[1] - lVar3 >> 2,puVar4,lVar5,lVar9);
      return;
    }
  }
  else {
    uVar2 = FUN_00753a74(0x20);
                    /* try { // try from 0036d404 to 0036d413 has its CatchHandler @ 0036d47c */
    FUN_002fd2b0(auStack_60,
                 "KrispBlas::vectorSymmetricSumWithCoefficient: incorrect vectors\' size.");
                    /* try { // try from 0036d418 to 0036d44f has its CatchHandler @ 0036d450 */
    param_1 = FUN_00374ee0(uVar2,auStack_60);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0036d4a8  FUN_0036d4a8 =====

void FUN_0036d4a8(undefined4 param_1,long param_2,long param_3,long param_4,undefined4 *param_5,
                 long param_6,long param_7,long param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((param_3 == 0) || (param_5 == (undefined4 *)0x0)) || (param_7 == 0)) {
    uVar2 = FUN_00753a74(0x20);
                    /* try { // try from 0036d5d0 to 0036d5df has its CatchHandler @ 0036d630 */
    FUN_002fd2b0(auStack_50,
                 "KrispBlas::vectorMultiplyBySymmetricCoefficient: nullptr passed as argument");
                    /* try { // try from 0036d5e4 to 0036d61f has its CatchHandler @ 0036d620 */
    param_1 = FUN_00374ee0(uVar2,auStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
  }
  else if ((param_4 == param_8) && ((param_4 == param_6 || (param_6 == 1)))) {
    if (param_6 == 1) {
      param_1 = *param_5;
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Could not recover jumptable at 0x0036d528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_2 + 0x20) + 0x80))();
        return;
      }
    }
    else if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Could not recover jumptable at 0x0036d558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_2 + 0x20) + 0x78))();
      return;
    }
  }
  else {
    uVar2 = FUN_00753a74(0x20);
                    /* try { // try from 0036d56c to 0036d57b has its CatchHandler @ 0036d650 */
    FUN_002fd2b0(auStack_50,
                 "KrispBlas::vectorMultiplyBySymmetricCoefficient: incorrect vectors\' size.");
                    /* try { // try from 0036d580 to 0036d5bb has its CatchHandler @ 0036d634 */
    param_1 = FUN_00374ee0(uVar2,auStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0036d67c  FUN_0036d67c =====

void FUN_0036d67c(undefined8 *param_1,long param_2,long param_3,long param_4,byte param_5,
                 long param_6,long param_7,long param_8,byte param_9,void *param_10,long param_11,
                 long param_12,void *param_13,long param_14,long param_15)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if ((((param_3 == 0) || (param_4 == 0)) || (param_7 == 0)) || (param_8 == 0)) {
    uVar5 = FUN_00753a74(0x20);
                    /* try { // try from 0036d8ac to 0036d8bb has its CatchHandler @ 0036dae4 */
    FUN_002fd2b0(auStack_80,"KrispBlas::matMul: matrices should not be empty.");
                    /* try { // try from 0036d8c0 to 0036d8f7 has its CatchHandler @ 0036dac8 */
    FUN_00374ee0(uVar5,auStack_80);
    if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar5,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
  }
  else if (((param_2 == 0) || (param_6 == 0)) || (param_13 == (void *)0x0)) {
    uVar5 = FUN_00753a74(0x20);
                    /* try { // try from 0036d90c to 0036d91b has its CatchHandler @ 0036dac4 */
    FUN_002fd2b0(auStack_80,"KrispBlas::matMul: matrices\' should be specified.");
                    /* try { // try from 0036d920 to 0036d957 has its CatchHandler @ 0036dab4 */
    FUN_00374ee0(uVar5,auStack_80);
    if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar5,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
  }
  else {
    lVar6 = param_3;
    if ((param_5 & 1) == 0) {
      lVar6 = param_4;
    }
    lVar1 = param_8;
    if ((param_9 & 1) == 0) {
      lVar1 = param_7;
    }
    if (lVar6 == lVar1) {
      lVar1 = param_7;
      if ((param_9 & 1) == 0) {
        lVar1 = param_8;
      }
      lVar2 = param_4;
      if ((param_5 & 1) == 0) {
        lVar2 = param_3;
      }
      if ((lVar2 == param_14) && (lVar1 == param_15)) {
        if (param_10 == (void *)0x0) {
          uVar5 = 0;
        }
        else {
          if ((param_11 != param_14) || (param_12 != param_15)) {
            uVar5 = FUN_00753a74(0x20);
                    /* try { // try from 0036da2c to 0036da3b has its CatchHandler @ 0036da88 */
            FUN_002fd2b0(auStack_80,"KrispBlas::matMul: incorrect bias matrix\'s dimensions.");
                    /* try { // try from 0036da40 to 0036da77 has its CatchHandler @ 0036da78 */
            FUN_00374ee0(uVar5,auStack_80);
            if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_00753c5c(uVar5,PTR_PTR_007a1338,PTR_FUN_007a11f8);
            }
            goto LAB_0036db08;
          }
          if ((param_10 != param_13) && (param_15 * param_14 != 0)) {
            memmove(param_13,param_10,param_15 * param_14 * 4);
          }
          uVar5 = 0x3f800000;
        }
        if (param_14 == 1) {
          plVar4 = (long *)*param_1;
          UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
          if (*(long *)(lVar3 + 0x28) == local_68) {
            param_5 = param_9 ^ 0xff;
            param_3 = param_7;
            lVar6 = param_6;
            param_4 = param_8;
            param_6 = param_2;
LAB_0036d810:
                    /* WARNING: Could not recover jumptable at 0x0036d830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)
                      (0x3f800000,plVar4,0,param_5 & 1,param_3,param_4,lVar6,param_4,param_6);
            return;
          }
        }
        else {
          plVar4 = (long *)*param_1;
          if (param_15 == 1) {
            UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
            lVar6 = param_2;
            if (*(long *)(lVar3 + 0x28) == local_68) goto LAB_0036d810;
          }
          else if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Could not recover jumptable at 0x0036d898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar4 + 0x18))
                      (0x3f800000,uVar5,plVar4,0,param_5 & 1,param_9 & 1,param_14,param_15,lVar6,
                       param_2);
            return;
          }
        }
      }
      else {
        uVar5 = FUN_00753a74(0x20);
                    /* try { // try from 0036d9cc to 0036d9db has its CatchHandler @ 0036da9c */
        FUN_002fd2b0(auStack_80,"KrispBlas::matMul: incorrect output matrix\'s dimensions.");
                    /* try { // try from 0036d9e0 to 0036da17 has its CatchHandler @ 0036da8c */
        FUN_00374ee0(uVar5,auStack_80);
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar5,PTR_PTR_007a1338,PTR_FUN_007a11f8);
        }
      }
    }
    else {
      uVar5 = FUN_00753a74(0x20);
                    /* try { // try from 0036d96c to 0036d97b has its CatchHandler @ 0036dab0 */
      FUN_002fd2b0(auStack_80,"KrispBlas::matMul: incorrect matrices\' dimensions.");
                    /* try { // try from 0036d980 to 0036d9b7 has its CatchHandler @ 0036daa0 */
      FUN_00374ee0(uVar5,auStack_80);
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar5,PTR_PTR_007a1338,PTR_FUN_007a11f8);
      }
    }
  }
LAB_0036db08:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036db0c  FUN_0036db0c =====

void FUN_0036db0c(long param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = *param_2;
  lVar4 = *param_3;
  lVar7 = param_2[1] - lVar3;
  if (lVar7 == param_3[1] - lVar4) {
    if ((param_2[1] == lVar3) || (param_3[1] == lVar4)) {
      uVar2 = FUN_00753a74(0x20);
                    /* try { // try from 0036dc50 to 0036dc5f has its CatchHandler @ 0036dcac */
      FUN_002fd2b0(auStack_60,"KrispBlas::affectV1ByReluAddV2: vectors should not be empty.");
                    /* try { // try from 0036dc64 to 0036dc9b has its CatchHandler @ 0036dc9c */
      FUN_00374ee0(uVar2,auStack_60);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar2,PTR_PTR_007a1338,PTR_FUN_007a11f8);
      }
    }
    else {
      lVar5 = *param_4;
      uVar8 = lVar7 >> 2;
      uVar6 = param_4[1] - lVar5 >> 2;
      if (uVar8 < uVar6 || uVar8 - uVar6 == 0) {
        if (uVar8 < uVar6) {
          param_4[1] = lVar5 + lVar7;
        }
      }
      else {
        FUN_002feac4(param_4,uVar8 - uVar6);
        lVar3 = *param_2;
        lVar4 = *param_3;
        lVar5 = *param_4;
      }
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x0036dbe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x20) + 0x90))
                  (*(long **)(param_1 + 0x20),lVar3,param_2[1] - lVar3 >> 2,lVar4,lVar5);
        return;
      }
    }
  }
  else {
    uVar2 = FUN_00753a74(0x20);
                    /* try { // try from 0036dbf4 to 0036dc03 has its CatchHandler @ 0036dccc */
    FUN_002fd2b0(auStack_60,"KrispBlas::affectV1ByReluAddV2: incorrect vectors\' size.");
                    /* try { // try from 0036dc08 to 0036dc3f has its CatchHandler @ 0036dcb0 */
    FUN_00374ee0(uVar2,auStack_60);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036dcf4  FUN_0036dcf4 =====

void FUN_0036dcf4(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar4 = *param_2;
  lVar1 = param_2[1] - lVar4;
  if (lVar1 == 0) {
    uVar3 = FUN_00753a74(0x20);
                    /* try { // try from 0036ddb0 to 0036ddbf has its CatchHandler @ 0036de20 */
    FUN_002fd2b0(auStack_50,"KrispBlas::affectVectorBySigmoid: empty vector.");
                    /* try { // try from 0036ddc4 to 0036ddfb has its CatchHandler @ 0036ddfc */
    FUN_00374ee0(uVar3,auStack_50);
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
  }
  else {
    lVar5 = *param_3;
    uVar7 = lVar1 >> 2;
    uVar6 = param_3[1] - lVar5 >> 2;
    if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
      if (uVar7 < uVar6) {
        param_3[1] = lVar5 + lVar1;
      }
    }
    else {
      FUN_002feac4(param_3,uVar7 - uVar6);
      lVar4 = *param_2;
      lVar5 = *param_3;
    }
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Could not recover jumptable at 0x0036dda0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x20) + 0x98))
                (*(long **)(param_1 + 0x20),lVar4,param_2[1] - lVar4 >> 2,lVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036de48  FUN_0036de48 =====

void FUN_0036de48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_007623e0;
  FUN_00712454();
  return;
}


// ===== 0036de5c  FUN_0036de5c =====

void FUN_0036de5c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a18c8 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 0036de90  FUN_0036de90 =====

void FUN_0036de90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0036de98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0036de9c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0036dea0  FUN_0036dea0 =====

void FUN_0036dea0(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 0036dec4  FUN_0036dec4 =====

void FUN_0036dec4(long param_1)

{
  FUN_0036deec((undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x18));
  return;
}


// ===== 0036decc  FUN_0036decc =====

long FUN_0036decc(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrIN5KRISP4B_007a18e0) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0036dee8  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0036deec  FUN_0036deec =====

void FUN_0036deec(undefined8 param_1,void *param_2)

{
  long lVar1;
  long *plVar2;
  
  if (param_2 == (void *)0x0) {
    return;
  }
  plVar2 = *(long **)((long)param_2 + 0x28);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  plVar2 = *(long **)((long)param_2 + 0x18);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  plVar2 = *(long **)((long)param_2 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    free(param_2);
    return;
  }
  free(param_2);
  return;
}


// ===== 0036dfb4  FUN_0036dfb4 =====

void FUN_0036dfb4(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  if (__ptr != (void *)0x0) {
    param_1[1] = __ptr;
    free(__ptr);
    return;
  }
  return;
}


// ===== 0036dfcc  FUN_0036dfcc =====

void FUN_0036dfcc(long param_1)

{
  FUN_0036e7b0(param_1,&DAT_007ab668);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x18);
  return;
}


// ===== 0036e004  FUN_0036e004 =====

void FUN_0036e004(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[3];
  if (pvVar1 != (void *)0x0) {
    param_1[4] = pvVar1;
    free(pvVar1);
  }
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    param_1[1] = pvVar1;
    free(pvVar1);
    return;
  }
  return;
}


// ===== 0036e048  FUN_0036e048 =====

void FUN_0036e048(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[6];
  if (pvVar1 != (void *)0x0) {
    param_1[7] = pvVar1;
    free(pvVar1);
  }
  pvVar1 = (void *)param_1[3];
  if (pvVar1 != (void *)0x0) {
    param_1[4] = pvVar1;
    free(pvVar1);
  }
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    param_1[1] = pvVar1;
    free(pvVar1);
    return;
  }
  return;
}


// ===== 0036e09c  FUN_0036e09c =====

void FUN_0036e09c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_3c = 0;
  if (param_1 != param_2) {
    FUN_0036e62c(param_1,*param_2,param_2[1],param_2[1] - *param_2 >> 3);
  }
  FUN_0036e994(param_1,param_2);
  uVar3 = FUN_0036e840(param_1);
  lVar1 = param_1[6];
  uVar4 = param_1[7] - lVar1 >> 2;
  if (uVar3 < uVar4 || uVar3 - uVar4 == 0) {
    if (uVar3 < uVar4) {
      param_1[7] = lVar1 + uVar3 * 4;
    }
  }
  else {
    FUN_00333484(param_1 + 6,uVar3 - uVar4,&local_3c);
  }
  param_1[4] = param_1[3];
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036e160  FUN_0036e160 =====

void FUN_0036e160(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_0036e7b0(param_1,param_3);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  uVar5 = *param_2;
  *(undefined8 *)(param_1 + 0x38) = param_2[1];
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  *(undefined8 *)(param_1 + 0x40) = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
                    /* try { // try from 0036e1b8 to 0036e1c3 has its CatchHandler @ 0036e298 */
  FUN_0036e994(param_1,param_1);
  lVar1 = *(long *)(param_1 + 0x30);
  lVar2 = *(long *)(param_1 + 0x38);
  lVar4 = FUN_0036e840(param_1);
  if (lVar4 == lVar2 - lVar1 >> 2) {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x18);
    if (*(long *)(lVar3 + 0x28) == local_48) {
      return;
    }
  }
  else {
    uVar5 = FUN_00753a74(0x20);
                    /* try { // try from 0036e218 to 0036e227 has its CatchHandler @ 0036e288 */
    FUN_002fd2b0(auStack_60,"Tensor::Tensor: Tensor data doesn\'t correspond to it\'s shape.");
                    /* try { // try from 0036e22c to 0036e263 has its CatchHandler @ 0036e264 */
    FUN_00374ee0(uVar5,auStack_60);
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar5,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036e2d0  FUN_0036e2d0 =====

void FUN_0036e2d0(long param_1,long param_2)

{
  size_t __n;
  void *__dest;
  undefined8 uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  FUN_0036e7b0();
  puVar3 = (undefined8 *)(param_1 + 0x30);
  *puVar3 = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  pvVar2 = *(void **)(param_2 + 0x30);
  __n = *(long *)(param_2 + 0x38) - (long)pvVar2;
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* try { // try from 0036e358 to 0036e35f has its CatchHandler @ 0036e364 */
      uVar1 = FUN_002febf0(puVar3);
                    /* catch() { ... } // from try @ 0036e330 with catch @ 0036e360 */
                    /* catch() { ... } // from try @ 0036e30c with catch @ 0036e364
                       catch() { ... } // from try @ 0036e358 with catch @ 0036e364 */
      pvVar2 = (void *)*puVar3;
      if (pvVar2 != (void *)0x0) {
        *(void **)(param_1 + 0x38) = pvVar2;
        free(pvVar2);
      }
      FUN_0036e004(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_00755eac(uVar1);
    }
                    /* try { // try from 0036e30c to 0036e313 has its CatchHandler @ 0036e364 */
    __dest = (void *)FUN_00759c3c(__n);
    *(void **)(param_1 + 0x30) = __dest;
    *(void **)(param_1 + 0x38) = __dest;
    *(size_t *)(param_1 + 0x40) = (long)__dest + __n;
    memcpy(__dest,pvVar2,__n);
    *(size_t *)(param_1 + 0x38) = (long)__dest + __n;
  }
                    /* try { // try from 0036e330 to 0036e33b has its CatchHandler @ 0036e360 */
  FUN_0036e994(param_1,param_1);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x18);
  return;
}


// ===== 0036e38c  FUN_0036e38c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0036e38c(long param_1,undefined8 *param_2)

{
  void *__ptr;
  undefined8 uVar1;
  
                    /* try { // try from 0036e3a4 to 0036e41f has its CatchHandler @ 0036e44c */
  FUN_0036e7b0();
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  uVar1 = param_2[6];
  *(undefined8 *)(param_1 + 0x38) = param_2[7];
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_1 + 0x40) = param_2[8];
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  __ptr = *(void **)(param_1 + 0x18);
  if (__ptr != (void *)0x0) {
    *(void **)(param_1 + 0x20) = __ptr;
    free(__ptr);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  uVar1 = param_2[3];
  *(undefined8 *)(param_1 + 0x20) = param_2[4];
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  if (param_2 != &DAT_007ab668) {
    FUN_0036e62c(param_2,DAT_007ab668,DAT_007ab670,DAT_007ab670 - DAT_007ab668 >> 3);
    param_2[4] = param_2[3];
    return;
  }
  _DAT_007ab688 = 0;
  return;
}


// ===== 0036e450  FUN_0036e450 =====

long * FUN_0036e450(long *param_1,long *param_2)

{
  if (param_1 != param_2) {
    FUN_0031e170(param_1 + 6,param_2[6],param_2[7],param_2[7] - param_2[6] >> 2);
    FUN_0036e62c(param_1,*param_2,param_2[1],param_2[1] - *param_2 >> 3);
    FUN_0036e62c(param_1 + 3,param_2[3],param_2[4],param_2[4] - param_2[3] >> 3);
  }
  return param_1;
}


// ===== 0036e4bc  FUN_0036e4bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0036e4bc(undefined8 *param_1,undefined8 *param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = (void *)param_1[6];
  if (pvVar1 != (void *)0x0) {
    param_1[7] = pvVar1;
    free(pvVar1);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  param_1[8] = param_2[8];
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    param_1[1] = pvVar1;
    free(pvVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  pvVar1 = (void *)param_1[3];
  if (pvVar1 != (void *)0x0) {
    param_1[4] = pvVar1;
    free(pvVar1);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  param_1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  if (param_2 != &DAT_007ab668) {
                    /* try { // try from 0036e588 to 0036e58f has its CatchHandler @ 0036e5c4 */
    FUN_0036e62c(param_2,DAT_007ab668,DAT_007ab670,DAT_007ab670 - DAT_007ab668 >> 3);
    param_2[4] = param_2[3];
    return param_1;
  }
  _DAT_007ab688 = 0;
  return param_1;
}


// ===== 0036e5c8  FUN_0036e5c8 =====

long FUN_0036e5c8(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_0036ebb0();
  return *(long *)(param_1 + 0x30) + lVar1 * 4;
}


// ===== 0036e5f0  FUN_0036e5f0 =====

long FUN_0036e5f0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  lVar1 = FUN_0036ebb0();
  return lVar2 + lVar1 * 4;
}


// ===== 0036e614  FUN_0036e614 =====

undefined8 FUN_0036e614(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}


// ===== 0036e61c  FUN_0036e61c =====

long FUN_0036e61c(long param_1)

{
  return param_1 + 0x30;
}


// ===== 0036e624  FUN_0036e624 =====

long FUN_0036e624(long param_1)

{
  return param_1 + 0x30;
}


// ===== 0036e62c  FUN_0036e62c =====

void FUN_0036e62c(undefined8 *param_1,void *param_2,long param_3,ulong param_4)

{
  void *__src;
  ulong uVar1;
  long lVar2;
  size_t sVar3;
  ulong uVar4;
  void *__dest;
  
  uVar4 = param_1[2];
  __dest = (void *)*param_1;
  if (param_4 <= (ulong)((long)(uVar4 - (long)__dest) >> 3)) {
    sVar3 = (long)param_1[1] - (long)__dest;
    if ((ulong)((long)sVar3 >> 3) < param_4) {
      __src = (void *)((long)param_2 + sVar3);
      if ((void *)param_1[1] != __dest) {
        memmove(__dest,param_2,sVar3);
        __dest = (void *)param_1[1];
      }
      lVar2 = -(long)__src;
    }
    else {
      lVar2 = -(long)param_2;
      __src = param_2;
    }
    sVar3 = param_3 + lVar2;
    if (sVar3 != 0) {
      memmove(__dest,__src,sVar3);
    }
LAB_0036e738:
    param_1[1] = (long)__dest + sVar3;
    return;
  }
  if (__dest != (void *)0x0) {
    param_1[1] = __dest;
    free(__dest);
    uVar4 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_4 >> 0x3d == 0) {
    uVar1 = (long)uVar4 >> 2;
    if ((ulong)((long)uVar4 >> 2) <= param_4) {
      uVar1 = param_4;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 >> 0x3d == 0) {
      __dest = (void *)FUN_00759c3c(uVar1 * 8);
      sVar3 = param_3 - (long)param_2;
      *param_1 = __dest;
      param_1[1] = __dest;
      param_1[2] = (void *)((long)__dest + uVar1 * 8);
      if (sVar3 != 0) {
        memcpy(__dest,param_2,sVar3);
      }
      goto LAB_0036e738;
    }
  }
  FUN_00368664(param_1);
  DAT_007ab668 = (undefined8 *)0x0;
  DAT_007ab670 = (undefined8 *)0x0;
  DAT_007ab678 = (undefined8 *)0x0;
  DAT_007ab668 = (undefined8 *)FUN_00759c3c(8);
  DAT_007ab670 = DAT_007ab668 + 1;
  *DAT_007ab668 = 0;
  DAT_007ab678 = DAT_007ab670;
  __cxa_atexit(FUN_0036dfb4,&DAT_007ab668,&PTR_LOOP_0075ec90);
  return;
}


// ===== 0036e75c  _INIT_24 =====

void _INIT_24(void)

{
  DAT_007ab668 = (undefined8 *)0x0;
  DAT_007ab670 = (undefined8 *)0x0;
  DAT_007ab678 = (undefined8 *)0x0;
  DAT_007ab668 = (undefined8 *)FUN_00759c3c(8);
  DAT_007ab670 = DAT_007ab668 + 1;
  *DAT_007ab668 = 0;
  DAT_007ab678 = DAT_007ab670;
  __cxa_atexit(FUN_0036dfb4,&DAT_007ab668,&PTR_LOOP_0075ec90);
  return;
}


// ===== 0036e7b0  FUN_0036e7b0 =====

void FUN_0036e7b0(undefined8 *param_1,undefined8 *param_2)

{
  size_t __n;
  void *__dest;
  undefined8 uVar1;
  void *pvVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  pvVar2 = (void *)*param_2;
  __n = param_2[1] - (long)pvVar2;
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* try { // try from 0036e818 to 0036e81f has its CatchHandler @ 0036e820 */
      uVar1 = FUN_00368664(param_1);
                    /* catch() { ... } // from try @ 0036e7dc with catch @ 0036e820
                       catch() { ... } // from try @ 0036e818 with catch @ 0036e820 */
      pvVar2 = (void *)*param_1;
      if (pvVar2 != (void *)0x0) {
        param_1[1] = pvVar2;
        free(pvVar2);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00755eac(uVar1);
    }
                    /* try { // try from 0036e7dc to 0036e7e3 has its CatchHandler @ 0036e820 */
    __dest = (void *)FUN_00759c3c(__n);
    *param_1 = __dest;
    param_1[1] = __dest;
    param_1[2] = (long)__dest + __n;
    memcpy(__dest,pvVar2,__n);
    param_1[1] = (long)__dest + __n;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}


// ===== 0036e840  FUN_0036e840 =====

long FUN_0036e840(long *param_1)

{
  int *piVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  int *piVar4;
  ulong uVar5;
  int *piVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined1 auVar13 [16];
  
  piVar6 = (int *)*param_1;
  piVar1 = (int *)param_1[1];
  if (piVar6 == piVar1) {
    return 1;
  }
  uVar3 = (long)piVar1 + (-8 - (long)piVar6);
  if (uVar3 < 0x38) {
    iVar8 = 1;
    piVar4 = piVar6;
  }
  else {
    iVar8 = 1;
    iVar9 = 1;
    iVar10 = 1;
    iVar11 = 1;
    iVar16 = 1;
    iVar12 = 1;
    iVar14 = 1;
    iVar15 = 1;
    uVar3 = (uVar3 >> 3) + 1;
    uVar5 = uVar3 & 0x3ffffffffffffff8;
    piVar4 = piVar6 + uVar5 * 2;
    piVar6 = piVar6 + 8;
    uVar7 = uVar5;
    do {
      uVar7 = uVar7 - 8;
      iVar8 = iVar8 * SUB124(*(undefined1 (*) [12])(piVar6 + -8),0);
      iVar9 = iVar9 * SUB124(*(undefined1 (*) [12])(piVar6 + -8),8);
      iVar10 = iVar10 * SUB124(*(undefined1 (*) [12])(piVar6 + -4),0);
      iVar11 = iVar11 * SUB124(*(undefined1 (*) [12])(piVar6 + -4),8);
      iVar12 = iVar12 * (int)*(undefined8 *)piVar6;
      iVar14 = iVar14 * (int)*(undefined8 *)(piVar6 + 2);
      iVar15 = iVar15 * (int)*(undefined8 *)(piVar6 + 4);
      iVar16 = iVar16 * (int)*(undefined8 *)(piVar6 + 6);
      piVar6 = piVar6 + 0x10;
    } while (uVar7 != 0);
    iVar12 = iVar12 * iVar8;
    iVar14 = iVar14 * iVar9;
    auVar13._4_4_ = iVar14;
    auVar13._0_4_ = iVar12;
    auVar13._8_4_ = iVar15 * iVar10;
    auVar13._12_4_ = iVar16 * iVar11;
    auVar2._4_4_ = iVar14;
    auVar2._0_4_ = iVar12;
    auVar2._8_4_ = iVar15 * iVar10;
    auVar2._12_4_ = iVar16 * iVar11;
    auVar13 = NEON_ext(auVar13,auVar2,8,1);
    iVar8 = iVar12 * auVar13._0_4_ * iVar14 * auVar13._4_4_;
    if (uVar3 == uVar5) goto LAB_0036e8e0;
  }
  do {
    piVar6 = piVar4 + 2;
    iVar8 = iVar8 * *piVar4;
    piVar4 = piVar6;
  } while (piVar6 != piVar1);
LAB_0036e8e0:
  return (long)iVar8;
}


// ===== 0036e8e8  FUN_0036e8e8 =====

bool FUN_0036e8e8(long *param_1)

{
  int *piVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  int *piVar4;
  ulong uVar5;
  int *piVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined1 auVar13 [16];
  
  piVar6 = (int *)*param_1;
  piVar1 = (int *)param_1[1];
  if (piVar6 == piVar1) {
    return false;
  }
  uVar3 = (long)piVar1 + (-8 - (long)piVar6);
  if (uVar3 < 0x38) {
    iVar8 = 1;
    piVar4 = piVar6;
  }
  else {
    iVar8 = 1;
    iVar9 = 1;
    iVar10 = 1;
    iVar11 = 1;
    iVar16 = 1;
    iVar12 = 1;
    iVar14 = 1;
    iVar15 = 1;
    uVar3 = (uVar3 >> 3) + 1;
    uVar5 = uVar3 & 0x3ffffffffffffff8;
    piVar4 = piVar6 + uVar5 * 2;
    piVar6 = piVar6 + 8;
    uVar7 = uVar5;
    do {
      uVar7 = uVar7 - 8;
      iVar8 = iVar8 * SUB124(*(undefined1 (*) [12])(piVar6 + -8),0);
      iVar9 = iVar9 * SUB124(*(undefined1 (*) [12])(piVar6 + -8),8);
      iVar10 = iVar10 * SUB124(*(undefined1 (*) [12])(piVar6 + -4),0);
      iVar11 = iVar11 * SUB124(*(undefined1 (*) [12])(piVar6 + -4),8);
      iVar12 = iVar12 * (int)*(undefined8 *)piVar6;
      iVar14 = iVar14 * (int)*(undefined8 *)(piVar6 + 2);
      iVar15 = iVar15 * (int)*(undefined8 *)(piVar6 + 4);
      iVar16 = iVar16 * (int)*(undefined8 *)(piVar6 + 6);
      piVar6 = piVar6 + 0x10;
    } while (uVar7 != 0);
    iVar12 = iVar12 * iVar8;
    iVar14 = iVar14 * iVar9;
    auVar13._4_4_ = iVar14;
    auVar13._0_4_ = iVar12;
    auVar13._8_4_ = iVar15 * iVar10;
    auVar13._12_4_ = iVar16 * iVar11;
    auVar2._4_4_ = iVar14;
    auVar2._0_4_ = iVar12;
    auVar2._8_4_ = iVar15 * iVar10;
    auVar2._12_4_ = iVar16 * iVar11;
    auVar13 = NEON_ext(auVar13,auVar2,8,1);
    iVar8 = iVar12 * auVar13._0_4_ * iVar14 * auVar13._4_4_;
    if (uVar3 == uVar5) goto LAB_0036e988;
  }
  do {
    piVar6 = piVar4 + 2;
    iVar8 = iVar8 * *piVar4;
    piVar4 = piVar6;
  } while (piVar6 != piVar1);
LAB_0036e988:
  return iVar8 == 0;
}


// ===== 0036e994  FUN_0036e994 =====

void FUN_0036e994(long *param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined1 auVar15 [16];
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*param_2 == param_2[1]) {
    uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 0036ea9c to 0036eaab has its CatchHandler @ 0036eb80 */
    FUN_002fd2b0(auStack_50,"Tensor::validateShape: Tensor shape must be non empty.");
                    /* try { // try from 0036eab0 to 0036eaeb has its CatchHandler @ 0036eb64 */
    FUN_00374ee0(uVar4,auStack_50);
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar4,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
    goto LAB_0036eba8;
  }
  piVar8 = (int *)*param_1;
  piVar1 = (int *)param_1[1];
  if (piVar8 != piVar1) {
    uVar5 = (long)piVar1 + (-8 - (long)piVar8);
    if (uVar5 < 0x38) {
      iVar10 = 1;
      piVar6 = piVar8;
LAB_0036ea48:
      do {
        piVar8 = piVar6 + 2;
        iVar10 = iVar10 * *piVar6;
        piVar6 = piVar8;
      } while (piVar8 != piVar1);
    }
    else {
      iVar10 = 1;
      iVar11 = 1;
      iVar12 = 1;
      iVar13 = 1;
      iVar18 = 1;
      iVar14 = 1;
      iVar16 = 1;
      iVar17 = 1;
      uVar5 = (uVar5 >> 3) + 1;
      uVar7 = uVar5 & 0x3ffffffffffffff8;
      piVar6 = piVar8 + uVar7 * 2;
      piVar8 = piVar8 + 8;
      uVar9 = uVar7;
      do {
        uVar9 = uVar9 - 8;
        iVar10 = iVar10 * SUB124(*(undefined1 (*) [12])(piVar8 + -8),0);
        iVar11 = iVar11 * SUB124(*(undefined1 (*) [12])(piVar8 + -8),8);
        iVar12 = iVar12 * SUB124(*(undefined1 (*) [12])(piVar8 + -4),0);
        iVar13 = iVar13 * SUB124(*(undefined1 (*) [12])(piVar8 + -4),8);
        iVar14 = iVar14 * (int)*(undefined8 *)piVar8;
        iVar16 = iVar16 * (int)*(undefined8 *)(piVar8 + 2);
        iVar17 = iVar17 * (int)*(undefined8 *)(piVar8 + 4);
        iVar18 = iVar18 * (int)*(undefined8 *)(piVar8 + 6);
        piVar8 = piVar8 + 0x10;
      } while (uVar9 != 0);
      iVar14 = iVar14 * iVar10;
      iVar16 = iVar16 * iVar11;
      auVar15._4_4_ = iVar16;
      auVar15._0_4_ = iVar14;
      auVar15._8_4_ = iVar17 * iVar12;
      auVar15._12_4_ = iVar18 * iVar13;
      auVar3._4_4_ = iVar16;
      auVar3._0_4_ = iVar14;
      auVar3._8_4_ = iVar17 * iVar12;
      auVar3._12_4_ = iVar18 * iVar13;
      auVar15 = NEON_ext(auVar15,auVar3,8,1);
      iVar10 = iVar14 * auVar15._0_4_ * iVar16 * auVar15._4_4_;
      if (uVar5 != uVar7) goto LAB_0036ea48;
    }
    if ((param_2[1] - *param_2 != 8) && (iVar10 == 0)) {
      uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 0036eb00 to 0036eb0f has its CatchHandler @ 0036eb60 */
      FUN_002fd2b0(auStack_50,
                   "Tensor::validateShape: One of multidimensional tensor dimensions is zero.");
                    /* try { // try from 0036eb14 to 0036eb4f has its CatchHandler @ 0036eb50 */
      FUN_00374ee0(uVar4,auStack_50);
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar4,PTR_PTR_007a1338,PTR_FUN_007a11f8);
      }
      goto LAB_0036eba8;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_0036eba8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


