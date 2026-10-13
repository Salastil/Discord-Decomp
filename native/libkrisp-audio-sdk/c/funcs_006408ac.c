// ===== 006408ac  FUN_006408ac =====

void FUN_006408ac(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_2 = (long)(PTR_DAT_007a2e68 + 0x10);
  param_2[2] = *(long *)(param_1 + 0x10);
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 == (long *)0x0) {
    param_2[8] = 0;
    lVar4 = *(long *)(param_1 + 0x50);
    lVar3 = *(long *)(param_1 + 0x68);
    lVar2 = *(long *)(param_1 + 0x60);
    param_2[0xb] = *(long *)(param_1 + 0x58);
    param_2[10] = lVar4;
    param_2[0xd] = lVar3;
    param_2[0xc] = lVar2;
    return;
  }
  if (plVar1 != (long *)(param_1 + 0x20)) {
    lVar2 = (**(code **)(*plVar1 + 0x10))();
    param_2[8] = lVar2;
    lVar4 = *(long *)(param_1 + 0x50);
    lVar3 = *(long *)(param_1 + 0x68);
    lVar2 = *(long *)(param_1 + 0x60);
    param_2[0xb] = *(long *)(param_1 + 0x58);
    param_2[10] = lVar4;
    param_2[0xd] = lVar3;
    param_2[0xc] = lVar2;
    return;
  }
  param_2[8] = (long)(param_2 + 4);
  (**(code **)(**(long **)(param_1 + 0x40) + 0x18))();
  lVar4 = *(long *)(param_1 + 0x50);
  lVar3 = *(long *)(param_1 + 0x68);
  lVar2 = *(long *)(param_1 + 0x60);
  param_2[0xb] = *(long *)(param_1 + 0x58);
  param_2[10] = lVar4;
  param_2[0xd] = lVar3;
  param_2[0xc] = lVar2;
  return;
}


// ===== 00640954  FUN_00640954 =====

void FUN_00640954(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x40);
  plVar1 = (long *)(param_1 + 0x20);
  if (plVar2 == plVar1) {
                    /* WARNING: Could not recover jumptable at 0x0064098c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))(plVar1);
    return;
  }
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00640978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x28))();
    return;
  }
  return;
}


// ===== 00640994  FUN_00640994 =====

void FUN_00640994(void *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)((long)param_1 + 0x40);
  plVar2 = (long *)((long)param_1 + 0x20);
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_006409d4;
    lVar3 = 0x28;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3))();
LAB_006409d4:
  free(param_1);
  return;
}


// ===== 006409e4  FUN_006409e4 =====

void FUN_006409e4(long param_1)

{
  FUN_006409ec(param_1 + 0x10);
  return;
}


// ===== 006409ec  FUN_006409ec =====

void FUN_006409ec(uint *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  byte bVar5;
  long lVar6;
  uint *puVar7;
  pthread_t pVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong *puVar14;
  ulong *puVar15;
  uint local_94;
  long local_90 [4];
  long *local_70;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  uVar12 = *(undefined8 *)(param_1 + 0x16);
  *(undefined4 *)(*(long *)(param_1 + 0x12) + 0xdc) = 1;
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x12);
  uVar13 = *(undefined8 *)(param_1 + 0x14);
  uVar2 = *param_1;
  uVar3 = param_1[1];
  puVar7 = *(uint **)(param_1 + 0xc);
  if (puVar7 == (uint *)0x0) {
    local_70 = (long *)0x0;
  }
  else if (puVar7 == param_1 + 4) {
    local_70 = local_90;
    (**(code **)(*(long *)puVar7 + 0x18))(puVar7,local_90);
  }
  else {
    local_70 = (long *)(**(code **)(*(long *)puVar7 + 0x10))();
  }
                    /* try { // try from 00640a80 to 00640aa3 has its CatchHandler @ 00640c2c */
  FUN_0064027c(uVar12,uVar13,uVar4,uVar10,uVar2 + 1,uVar3,local_90);
  if (local_70 == local_90) {
    lVar11 = 0x20;
    plVar9 = local_90;
LAB_00640ac4:
    (**(code **)(*plVar9 + lVar11))();
  }
  else if (local_70 != (long *)0x0) {
    lVar11 = 0x28;
    plVar9 = local_70;
    goto LAB_00640ac4;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x12) + 0xdd) = 1;
  puVar14 = *(ulong **)(param_1 + 0x10);
  uVar2 = *param_1;
  lVar11 = (*(code *)PTR_007a2e28)(&PTR_007a2e28);
  if ((*(byte *)(lVar6 + lVar11) & 1) == 0) {
    lVar11 = (*(code *)PTR_007a2e38)(&PTR_007a2e38);
    puVar1 = (undefined8 *)(lVar6 + lVar11);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    *(undefined1 *)(puVar1 + 4) = 0;
    puVar1[3] = 0xffffffff;
    puVar1[5] = 0;
    FUN_00754a3c(PTR_FUN_007a2e48,puVar1,&PTR_LOOP_0075ec90);
    lVar11 = (*(code *)PTR_007a2e28)(&PTR_007a2e28);
    *(undefined1 *)(lVar6 + lVar11) = 1;
    lVar11 = (*(code *)PTR_007a2e38)(&PTR_007a2e38);
    lVar11 = lVar6 + lVar11;
    bVar5 = *(byte *)(lVar11 + 8);
  }
  else {
    lVar11 = (*(code *)PTR_007a2e38)(&PTR_007a2e38);
    lVar11 = lVar6 + lVar11;
    bVar5 = *(byte *)(lVar11 + 8);
  }
  if ((bVar5 & 1) == 0) {
    pVar8 = pthread_self();
    *(pthread_t *)(lVar11 + 0x10) = pVar8;
    *(undefined1 *)(lVar11 + 8) = 1;
  }
  puVar15 = puVar14 + 1;
  plVar9 = *(long **)(param_1 + 0xc);
  if ((*puVar14 & 1) != 0) {
    puVar15 = (ulong *)*puVar15;
  }
  *(undefined4 *)((long)puVar15 + (long)(ulong)uVar2 * 4) = *(undefined4 *)(lVar11 + 0x18);
  local_94 = *param_1;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x30))(plVar9,&local_94);
    *(undefined4 *)(*(long *)(param_1 + 0x12) + 0xde) = 1;
    if (*(long *)(lVar6 + 0x28) == local_58) {
      return;
    }
    goto LAB_00640c78;
  }
  if (*(long *)(lVar6 + 0x28) != local_58) goto LAB_00640c78;
  uVar10 = FUN_0030be88();
                    /* catch() { ... } // from try @ 00640a80 with catch @ 00640c2c */
  if (local_70 == (long *)(ulong)uVar2) {
    lVar11 = 0x20;
    plVar9 = local_90;
LAB_00640c50:
    (**(code **)(*plVar9 + lVar11))(plVar9);
  }
  else if (local_70 != (long *)0x0) {
    lVar11 = 0x28;
    plVar9 = local_70;
    goto LAB_00640c50;
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00755eac(uVar10);
  }
LAB_00640c78:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00640c7c  FUN_00640c7c =====

void FUN_00640c7c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[6];
  plVar1 = param_1 + 2;
  *param_1 = (long)(PTR_DAT_007a2e78 + 0x10);
  if (plVar2 == plVar1) {
                    /* WARNING: Could not recover jumptable at 0x00640cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))(plVar1);
    return;
  }
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00640cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x28))();
    return;
  }
  return;
}


// ===== 00640ccc  FUN_00640ccc =====

void FUN_00640ccc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = (long)(PTR_DAT_007a2e78 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00640d1c;
    lVar3 = 0x28;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3))();
LAB_00640d1c:
  free(param_1);
  return;
}


// ===== 00640d2c  FUN_00640d2c =====

long * FUN_00640d2c(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  plVar1 = (long *)FUN_00759c3c(0x60);
  plVar2 = *(long **)(param_1 + 0x30);
  *plVar1 = (long)(PTR_DAT_007a2e78 + 0x10);
  if (plVar2 != (long *)0x0) {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      lVar3 = *plVar2;
      plVar1[6] = (long)(plVar1 + 2);
      (**(code **)(lVar3 + 0x18))();
      lVar3 = *(long *)(param_1 + 0x40);
      lVar5 = *(long *)(param_1 + 0x58);
      lVar4 = *(long *)(param_1 + 0x50);
      plVar1[9] = *(long *)(param_1 + 0x48);
      plVar1[8] = lVar3;
      plVar1[0xb] = lVar5;
      plVar1[10] = lVar4;
      return plVar1;
    }
                    /* try { // try from 00640d78 to 00640da7 has its CatchHandler @ 00640dc0 */
    plVar2 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  plVar1[6] = (long)plVar2;
  lVar3 = *(long *)(param_1 + 0x40);
  lVar5 = *(long *)(param_1 + 0x58);
  lVar4 = *(long *)(param_1 + 0x50);
  plVar1[9] = *(long *)(param_1 + 0x48);
  plVar1[8] = lVar3;
  plVar1[0xb] = lVar5;
  plVar1[10] = lVar4;
  return plVar1;
}


// ===== 00640dd4  FUN_00640dd4 =====

void FUN_00640dd4(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = *(long **)(param_1 + 0x30);
  *param_2 = (long)(PTR_DAT_007a2e78 + 0x10);
  if (plVar1 == (long *)0x0) {
    param_2[6] = 0;
    lVar4 = *(long *)(param_1 + 0x40);
    lVar3 = *(long *)(param_1 + 0x58);
    lVar2 = *(long *)(param_1 + 0x50);
    param_2[9] = *(long *)(param_1 + 0x48);
    param_2[8] = lVar4;
    param_2[0xb] = lVar3;
    param_2[10] = lVar2;
    return;
  }
  if (plVar1 != (long *)(param_1 + 0x10)) {
    lVar2 = (**(code **)(*plVar1 + 0x10))();
    param_2[6] = lVar2;
    lVar4 = *(long *)(param_1 + 0x40);
    lVar3 = *(long *)(param_1 + 0x58);
    lVar2 = *(long *)(param_1 + 0x50);
    param_2[9] = *(long *)(param_1 + 0x48);
    param_2[8] = lVar4;
    param_2[0xb] = lVar3;
    param_2[10] = lVar2;
    return;
  }
  param_2[6] = (long)(param_2 + 2);
  (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
  lVar4 = *(long *)(param_1 + 0x40);
  lVar3 = *(long *)(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x50);
  param_2[9] = *(long *)(param_1 + 0x48);
  param_2[8] = lVar4;
  param_2[0xb] = lVar3;
  param_2[10] = lVar2;
  return;
}


// ===== 00640e70  FUN_00640e70 =====

void FUN_00640e70(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x30);
  plVar1 = (long *)(param_1 + 0x10);
  if (plVar2 == plVar1) {
                    /* WARNING: Could not recover jumptable at 0x00640ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))(plVar1);
    return;
  }
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00640e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x28))();
    return;
  }
  return;
}


// ===== 00640eb0  FUN_00640eb0 =====

void FUN_00640eb0(void *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)((long)param_1 + 0x30);
  plVar2 = (long *)((long)param_1 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00640ef0;
    lVar3 = 0x28;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3))();
LAB_00640ef0:
  free(param_1);
  return;
}


// ===== 00640f00  FUN_00640f00 =====

void FUN_00640f00(long param_1)

{
  FUN_00640f08(param_1 + 0x10);
  return;
}


// ===== 00640f08  FUN_00640f08 =====

void FUN_00640f08(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  pthread_t pVar6;
  long *plVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined4 local_4c;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  puVar8 = *(ulong **)(param_1 + 0x38);
  uVar2 = *(uint *)(param_1 + 0x30);
  lVar5 = (*(code *)PTR_007a2e28)(&PTR_007a2e28);
  if ((*(byte *)(lVar4 + lVar5) & 1) == 0) {
    lVar5 = (*(code *)PTR_007a2e38)(&PTR_007a2e38);
    puVar1 = (undefined8 *)(lVar4 + lVar5);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    *(undefined1 *)(puVar1 + 4) = 0;
    puVar1[3] = 0xffffffff;
    puVar1[5] = 0;
    FUN_00754a3c(PTR_FUN_007a2e48,puVar1,&PTR_LOOP_0075ec90);
    lVar5 = (*(code *)PTR_007a2e28)(&PTR_007a2e28);
    *(undefined1 *)(lVar4 + lVar5) = 1;
    lVar5 = (*(code *)PTR_007a2e38)(&PTR_007a2e38);
    lVar5 = lVar4 + lVar5;
    bVar3 = *(byte *)(lVar5 + 8);
  }
  else {
    lVar5 = (*(code *)PTR_007a2e38)(&PTR_007a2e38);
    lVar5 = lVar4 + lVar5;
    bVar3 = *(byte *)(lVar5 + 8);
  }
  if ((bVar3 & 1) == 0) {
    pVar6 = pthread_self();
    *(pthread_t *)(lVar5 + 0x10) = pVar6;
    *(undefined1 *)(lVar5 + 8) = 1;
  }
  puVar9 = puVar8 + 1;
  plVar7 = *(long **)(param_1 + 0x20);
  if ((*puVar8 & 1) != 0) {
    puVar9 = (ulong *)*puVar9;
  }
  *(undefined4 *)((long)puVar9 + (ulong)uVar2 * 4) = *(undefined4 *)(lVar5 + 0x18);
  local_4c = *(undefined4 *)(param_1 + 0x30);
  if (plVar7 == (long *)0x0) {
    if (*(long *)(lVar4 + 0x28) == local_48) {
      FUN_0030be88();
    }
  }
  else {
    (**(code **)(*plVar7 + 0x30))(plVar7,&local_4c);
    FUN_00755bf0(1,*(long *)(param_1 + 0x40) + 0x84);
    if (*(long *)(lVar4 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00641080  FUN_00641080 =====

undefined8 * FUN_00641080(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong *__ptr;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  uVar11 = *param_1;
  uVar2 = 0xc;
  if ((uVar11 & 1) != 0) {
    uVar2 = param_1[2] << 1;
  }
  if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  __ptr = (ulong *)param_1[1];
  uVar12 = uVar11 >> 1;
  uVar4 = FUN_00759c3c(uVar2 << 3);
  puVar1 = (undefined8 *)(uVar4 + uVar12 * 8);
  *puVar1 = *param_2;
  if (1 < uVar11) {
    uVar5 = 0;
    puVar7 = param_1 + 1;
    if ((uVar11 & 1) != 0) {
      puVar7 = __ptr;
    }
    puVar8 = puVar7;
    if ((7 < uVar11) && (0x1f < uVar4 - (long)puVar7)) {
      uVar5 = uVar12 & 0x7ffffffffffffffc;
      puVar9 = (ulong *)(uVar4 + 0x10);
      puVar8 = puVar7 + uVar5;
      puVar7 = puVar7 + 2;
      uVar10 = uVar5;
      do {
        puVar3 = puVar7 + -1;
        uVar13 = puVar7[-2];
        uVar15 = puVar7[1];
        uVar14 = *puVar7;
        uVar10 = uVar10 - 4;
        puVar7 = puVar7 + 4;
        puVar9[-1] = *puVar3;
        puVar9[-2] = uVar13;
        puVar9[1] = uVar15;
        *puVar9 = uVar14;
        puVar9 = puVar9 + 4;
      } while (uVar10 != 0);
      if (uVar12 == uVar5) goto LAB_0064115c;
    }
    lVar6 = uVar12 - uVar5;
    puVar7 = (ulong *)(uVar4 + uVar5 * 8);
    do {
      lVar6 = lVar6 + -1;
      *puVar7 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar6 != 0);
  }
LAB_0064115c:
  if ((uVar11 & 1) != 0) {
    free(__ptr);
    uVar11 = *param_1;
  }
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  *param_1 = (uVar11 | 1) + 2;
  return puVar1;
}


// ===== 0064119c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 006411a0  FUN_006411a0 =====

void FUN_006411a0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_00797940;
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  puVar1[3] = uVar2;
  return;
}


// ===== 006411e0  FUN_006411e0 =====

void FUN_006411e0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00797940;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}


// ===== 00641200  FUN_00641200 =====

void FUN_00641200(void)

{
  return;
}


// ===== 00641204  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00641208  FUN_00641208 =====

void FUN_00641208(long param_1,uint *param_2)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong local_68;
  ulong uStack_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  lVar12 = *(long *)(param_1 + 8);
  uVar2 = *(uint *)(lVar12 + 0x200);
  uVar4 = 0;
  if (uVar2 != 0) {
    uVar4 = *param_2 / uVar2;
  }
  uVar2 = *param_2 - uVar4 * uVar2;
  uVar11 = (ulong)uVar2;
LAB_0064124c:
  lVar10 = **(long **)(param_1 + 0x10);
  do {
    puVar1 = (ulong *)(lVar12 + uVar11 * 0x40);
    if (*puVar1 < puVar1[1]) {
      uVar7 = FUN_00755c50(lVar10,puVar1);
      uVar9 = puVar1[1];
      if (uVar7 < uVar9) break;
    }
    uVar3 = *(uint *)(lVar12 + 0x200);
    uVar4 = (int)uVar11 + 1;
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = uVar4 / uVar3;
    }
    uVar4 = uVar4 - uVar5 * uVar3;
    uVar11 = (ulong)uVar4;
    if (uVar4 == uVar2) {
      if (*(long *)(lVar6 + 0x28) == local_58) {
        return;
      }
      goto LAB_0064131c;
    }
  } while( true );
  local_68 = uVar7 + lVar10;
  plVar8 = *(long **)(*(long *)(param_1 + 0x18) + 0x20);
  if (uVar9 <= local_68) {
    local_68 = uVar9;
  }
  uStack_60 = uVar7;
  if (plVar8 == (long *)0x0) {
    if (*(long *)(lVar6 + 0x28) == local_58) {
      FUN_0030be88();
    }
LAB_0064131c:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  (**(code **)(*plVar8 + 0x30))(plVar8,&uStack_60,&local_68);
  lVar12 = *(long *)(param_1 + 8);
  goto LAB_0064124c;
}


// ===== 00641320  FUN_00641320 =====

void FUN_00641320(void)

{
  return;
}


// ===== 00641324  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00641328  FUN_00641328 =====

void FUN_00641328(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_00797988;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  puVar1[4] = uVar6;
  puVar1[3] = uVar5;
  puVar1[5] = uVar2;
  return;
}


// ===== 00641370  FUN_00641370 =====

void FUN_00641370(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_2 = &PTR_FUN_00797988;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[4] = uVar2;
  param_2[3] = uVar1;
  param_2[2] = uVar4;
  param_2[1] = uVar3;
  return;
}


// ===== 00641398  FUN_00641398 =====

void FUN_00641398(void)

{
  return;
}


// ===== 0064139c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 006413a0  FUN_006413a0 =====

void FUN_006413a0(long param_1,uint *param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong local_68;
  ulong local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  lVar13 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar13 + 0x200);
  lVar10 = **(long **)(param_1 + 8);
  uVar4 = 0;
  if (uVar2 != 0) {
    uVar4 = *param_2 / uVar2;
  }
  uVar2 = *param_2 - uVar4 * uVar2;
  uVar12 = (ulong)uVar2;
  puVar11 = (ulong *)(lVar13 + (ulong)uVar2 * 0x40);
  if (*puVar11 < puVar11[1]) goto LAB_00641430;
  do {
    do {
      uVar3 = *(uint *)(lVar13 + 0x200);
      uVar4 = (int)uVar12 + 1;
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar5 = uVar4 / uVar3;
      }
      uVar4 = uVar4 - uVar5 * uVar3;
      uVar12 = (ulong)uVar4;
      if (uVar4 == uVar2) {
        if (*(long *)(lVar6 + 0x28) == local_58) {
          return;
        }
LAB_00641524:
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      puVar11 = (ulong *)(lVar13 + (ulong)uVar4 * 0x40);
    } while (puVar11[1] <= *puVar11);
LAB_00641430:
    while( true ) {
      uVar7 = FUN_00755c50(lVar10,puVar11);
      uVar9 = puVar11[1];
      if (uVar9 <= uVar7) break;
      plVar8 = *(long **)(*(long *)(param_1 + 0x18) + 0x20);
      uVar1 = uVar7 + lVar10;
      if (uVar9 <= uVar7 + lVar10) {
        uVar1 = uVar9;
      }
      local_68 = uVar1;
      local_60 = uVar7;
      if (plVar8 == (long *)0x0) {
        if (*(long *)(lVar6 + 0x28) == local_58) {
          FUN_0030be88();
        }
        goto LAB_00641524;
      }
      (**(code **)(*plVar8 + 0x30))(plVar8,&local_60,&local_68);
      FUN_00755c20(uVar7 - uVar1,*(undefined8 *)(param_1 + 0x20));
      if (1 < lVar10) {
        uVar14 = FUN_00755278();
        uVar15 = FUN_007552dc(**(undefined4 **)(param_1 + 0x28));
        FUN_00754c64(uVar14,uVar15);
        lVar10 = llroundl();
        if (lVar10 < 2) {
          lVar10 = 1;
        }
      }
      lVar13 = *(long *)(param_1 + 0x10);
      puVar11 = (ulong *)(lVar13 + uVar12 * 0x40);
      if (puVar11[1] <= *puVar11) break;
    }
  } while( true );
}


// ===== 00641528  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0064152c  FUN_0064152c =====

void FUN_0064152c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_007979d0;
  puVar1[1] = uVar2;
  return;
}


// ===== 00641560  FUN_00641560 =====

void FUN_00641560(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_007979d0;
  param_2[1] = uVar1;
  return;
}


// ===== 00641574  FUN_00641574 =====

void FUN_00641574(void)

{
  return;
}


// ===== 00641578  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0064157c  FUN_0064157c =====

void FUN_0064157c(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *param_2;
  lVar4 = *param_3;
  if (lVar3 < lVar4) {
    do {
      plVar2 = *(long **)(*(long *)(param_1 + 8) + 0x20);
      local_40 = lVar3;
      if (plVar2 == (long *)0x0) {
        if (*(long *)(lVar1 + 0x28) == local_38) {
          FUN_0030be88();
        }
        goto LAB_00641614;
      }
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_40);
      lVar3 = lVar3 + 1;
    } while (lVar4 != lVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_00641614:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00641618  FUN_00641618 =====

void FUN_00641618(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00759c3c(8);
  *param_1 = puVar1;
  *puVar1 = &PTR_FUN_00797a18;
  return;
}


// ===== 00641650  FUN_00641650 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00641650(undefined8 param_1,undefined8 param_2,byte *param_3,long param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  byte *pbVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  size_t sVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined4 uVar14;
  char *__s;
  byte local_1a8;
  undefined1 auStack_1a7 [7];
  ulong local_1a0;
  undefined1 *local_198;
  byte local_190;
  undefined1 auStack_18f [7];
  ulong local_188;
  undefined1 *local_180;
  undefined1 auStack_178 [8];
  undefined *local_170 [9];
  ulong local_128;
  undefined8 uStack_120;
  void *local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined *local_100 [3];
  undefined8 uStack_e8;
  undefined4 auStack_e0 [4];
  undefined8 local_d0;
  long local_68;
  
  puVar7 = PTR_PTR_007a1e48;
  puVar6 = PTR_DAT_007a1e40;
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  local_170[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_d0 = 0;
  local_100[0] = puVar1;
  *(undefined8 *)((long)local_170 + *(long *)(local_170[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar13 = *(long *)(local_170[0] + -0x18);
                    /* try { // try from 006416c0 to 006416cb has its CatchHandler @ 006419b8 */
  FUN_00715fc0((long)local_170 + lVar13,local_170 + 1);
  local_170[0] = puVar6 + 0x18;
  *(undefined8 *)((long)&uStack_e8 + lVar13) = 0;
  *(undefined4 *)((long)auStack_e0 + lVar13) = 0xffffffff;
                    /* try { // try from 006416e4 to 006416eb has its CatchHandler @ 006419a4 */
  local_100[0] = puVar1;
  FUN_007160dc(local_170 + 1);
  puVar1 = PTR_DAT_007a10f8;
  local_170[1] = PTR_DAT_007a10f8 + 0x10;
  uStack_120 = 0;
  local_128 = 0;
  uStack_110 = 0;
  local_118 = (void *)0x0;
  local_108 = 0x10;
  if (*(uint *)(param_4 + 8) < 5) {
    uVar14 = *(undefined4 *)(&DAT_0020f360 + (ulong)*(uint *)(param_4 + 8) * 4);
  }
  else {
    uVar14 = 4;
  }
                    /* try { // try from 00641730 to 006417cf has its CatchHandler @ 00641a08 */
  uVar9 = FUN_00303e0c(local_170,&DAT_001c6c95,2);
  local_190 = "VIWEF"[*(int *)(param_4 + 8)];
  uVar9 = FUN_00303e0c(uVar9,&local_190,1);
  uVar9 = FUN_00303e0c(uVar9,&DAT_001d9efd,1);
  __s = *(char **)(param_4 + 0x10);
  sVar10 = strlen(__s);
  uVar9 = FUN_00303e0c(uVar9,__s,sVar10);
  uVar9 = FUN_00303e0c(uVar9,&DAT_001d9efd,1);
  uVar3 = *(ulong *)(param_3 + 8);
  pbVar4 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar4 = param_3 + 1;
    uVar3 = (ulong)(*param_3 >> 1);
  }
  uVar9 = FUN_00303e0c(uVar9,pbVar4,uVar3);
  uVar9 = FUN_00303e0c(uVar9,&DAT_001c2f11,2);
                    /* try { // try from 006417d0 to 006417e7 has its CatchHandler @ 006419a0 */
  FUN_00475ff4(&local_190,param_4 + 0x20,0);
  puVar2 = local_180;
  if ((local_190 & 1) == 0) {
    local_188 = (ulong)(local_190 >> 1);
    puVar2 = auStack_18f;
  }
                    /* try { // try from 00641800 to 00641817 has its CatchHandler @ 006419d8 */
  uVar9 = FUN_00303e0c(uVar9,puVar2,local_188);
  uVar9 = FUN_00303e0c(uVar9,&DAT_001e03c5,2);
                    /* try { // try from 00641818 to 0064182b has its CatchHandler @ 0064199c */
  FUN_00718470(&local_1a8,param_4 + 0x78);
  puVar2 = local_198;
  if ((local_1a8 & 1) == 0) {
    local_1a0 = (ulong)(local_1a8 >> 1);
    puVar2 = auStack_1a7;
  }
                    /* try { // try from 00641844 to 00641863 has its CatchHandler @ 006419e0 */
  plVar11 = (long *)FUN_00303e0c(uVar9,puVar2,local_1a0);
  FUN_00715df0(auStack_178,(long)plVar11 + *(long *)(*plVar11 + -0x18));
                    /* try { // try from 00641864 to 00641883 has its CatchHandler @ 006419c8 */
  plVar12 = (long *)FUN_0073220c(auStack_178,PTR_DAT_007a1108);
  uVar8 = (**(code **)(*plVar12 + 0x38))(plVar12,10);
  FUN_00732094(auStack_178);
                    /* try { // try from 00641890 to 006418a3 has its CatchHandler @ 006419e0 */
  FUN_00717b9c(plVar11,uVar8);
  FUN_007165e0(plVar11);
  if ((local_1a8 & 1) != 0) {
    free(local_198);
  }
  if ((local_190 & 1) != 0) {
    free(local_180);
  }
  uVar9 = *(undefined8 *)(param_4 + 0x10);
                    /* try { // try from 006418c8 to 006418d7 has its CatchHandler @ 00641998 */
  FUN_00718470(&local_190,local_170 + 1);
  puVar2 = local_180;
  if ((local_190 & 1) == 0) {
    puVar2 = auStack_18f;
  }
                    /* try { // try from 006418e8 to 006418fb has its CatchHandler @ 00641988 */
  __android_log_print(uVar14,uVar9,&DAT_001d3a58,puVar2);
  if ((local_190 & 1) != 0) {
    free(local_180);
  }
  local_170[0] = *(undefined **)puVar7;
  *(undefined8 *)((long)local_170 + *(long *)(local_170[0] + -0x18)) =
       *(undefined8 *)(puVar7 + 0x18);
  local_170[1] = puVar1 + 0x10;
  if ((local_128 & 1) != 0) {
    free(local_118);
  }
  FUN_00716098(local_170 + 1);
  FUN_00716ee4(local_170,puVar7 + 8);
  thunk_FUN_00715e00(local_100);
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00641a30  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00641a34  FUN_00641a34 =====

void FUN_00641a34(undefined8 *param_1,byte *param_2,undefined8 param_3)

{
  size_t __n;
  ulong uVar1;
  byte bVar2;
  char *__dest;
  char *pcVar3;
  byte *__src;
  
  bVar2 = *param_2;
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 8);
  }
  __dest = (char *)thunk_FUN_00759c3c(__n + 1);
  memset(__dest,0,__n + 1);
  __src = *(byte **)(param_2 + 0x10);
  if ((bVar2 & 1) == 0) {
    __src = param_2 + 1;
  }
  pcVar3 = strncpy(__dest,(char *)__src,__n);
  uVar1 = (ulong)(*param_2 >> 1);
  if ((*param_2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  __dest[uVar1] = '\0';
                    /* try { // try from 00641ab0 to 00641abf has its CatchHandler @ 00641adc */
  pcVar3 = dirname(pcVar3);
  FUN_0071396c(param_3,pcVar3);
  *param_1 = 0;
  free(__dest);
  return;
}


// ===== 00641af0  FUN_00641af0 =====

undefined8 * FUN_00641af0(void)

{
  int iVar1;
  
  if (((DAT_007ae798 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ae798), iVar1 != 0)) {
                    /* try { // try from 00641b34 to 00641b3f has its CatchHandler @ 00641b78 */
    FUN_006459c0(&DAT_007ae7b0);
    DAT_007ae7b0 = &PTR_FUN_00797a48;
    DAT_007ae7c0 = PTR_DAT_007a2e98 + 0x10;
    FUN_00739d60(&DAT_007ae798);
    return &DAT_007ae7b0;
  }
  return &DAT_007ae7b0;
}


// ===== 00641b90  FUN_00641b90 =====

void FUN_00641b90(void)

{
  return;
}


// ===== 00641b94  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00641b98  FUN_00641b98 =====

undefined8 *
FUN_00641b98(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
            undefined8 param_5,uint *param_6)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *__arg;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  code *pcVar8;
  ulong uVar9;
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [24];
  undefined8 *local_108;
  undefined1 auStack_100 [80];
  char *local_b0;
  char *pcStack_a8;
  pthread_attr_t pStack_a0;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar9 = (ulong)param_3;
  puVar4 = (undefined8 *)FUN_00759c3c(0x30);
  *puVar4 = &PTR_FUN_00797b30;
  puVar4[2] = 0;
  puVar4[1] = 0;
  puVar4[4] = 0;
  puVar4[3] = 0;
  if ((int)param_3 < 0) {
    uVar6 = FUN_00753a74(0x88);
                    /* try { // try from 00641d94 to 00641d9b has its CatchHandler @ 00642178 */
    FUN_00645c30(&pStack_a0);
                    /* try { // try from 00641d9c to 00641dbb has its CatchHandler @ 00642154 */
    FUN_0047488c(auStack_100,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/platform/posix/env.cc"
                 ,0x90,
                 "onnxruntime::(anonymous namespace)::PosixThread::PosixThread(const char *, int, unsigned int (*)(int, Eigen::ThreadPoolInterface *), Eigen::ThreadPoolInterface *, const ThreadOptions &)"
                 ,&pStack_a0);
                    /* try { // try from 00641dbc to 00641dcb has its CatchHandler @ 0064211c */
    FUN_00479eac(auStack_128,"Negative thread index is not allowed");
                    /* try { // try from 00641dd0 to 00641e13 has its CatchHandler @ 006420bc */
    FUN_00474a40(uVar6,auStack_100,"index >= 0",auStack_128);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar6,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
    goto LAB_006421e8;
  }
  pcVar8 = *(code **)(param_6 + 10);
  uVar6 = *(undefined8 *)(param_6 + 0xe);
  puVar4[2] = *(undefined8 *)(param_6 + 0xc);
  puVar4[1] = pcVar8;
  puVar4[3] = uVar6;
                    /* try { // try from 00641c18 to 00641c1f has its CatchHandler @ 006421a4 */
  __arg = (undefined8 *)FUN_00759c3c(0x40);
  lVar5 = *(long *)(param_6 + 2);
  lVar1 = *(long *)(param_6 + 4);
  *__arg = param_2;
  *(uint *)(__arg + 1) = param_3;
  __arg[2] = param_4;
  __arg[3] = param_5;
  *(undefined1 *)(__arg + 4) = 0;
  uVar7 = (lVar1 - lVar5 >> 3) * -0x5555555555555555;
  *(undefined1 *)(__arg + 7) = 0;
  local_108 = __arg;
  if (uVar9 <= uVar7 && uVar7 - uVar9 != 0) {
                    /* try { // try from 00641c70 to 00641c8f has its CatchHandler @ 006421c4 */
    FUN_00644314(__arg + 4,lVar5 + uVar9 * 0x18);
    pcVar8 = (code *)puVar4[1];
  }
  if (pcVar8 == (code *)0x0) {
                    /* try { // try from 00641d18 to 00641d1f has its CatchHandler @ 00642174 */
    iVar3 = pthread_attr_init(&pStack_a0);
    if (iVar3 != 0) {
                    /* try { // try from 00641e18 to 00641e23 has its CatchHandler @ 00642150 */
      FUN_006459f4(auStack_128);
      uVar6 = FUN_00753a74(0x88);
                    /* try { // try from 00641e30 to 00641e37 has its CatchHandler @ 00642098 */
      FUN_00645c30(auStack_140);
                    /* try { // try from 00641e38 to 00641e57 has its CatchHandler @ 00642044 */
      FUN_0047488c(auStack_100,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/platform/posix/env.cc"
                   ,0xa5,
                   "onnxruntime::(anonymous namespace)::PosixThread::PosixThread(const char *, int, unsigned int (*)(int, Eigen::ThreadPoolInterface *), Eigen::ThreadPoolInterface *, const ThreadOptions &)"
                   ,auStack_140);
      local_b0 = " error msg: ";
      pcStack_a8 = "pthread_attr_init failed, error code: ";
      FUN_0064479c(auStack_158,&pcStack_a8,auStack_128,&local_b0,auStack_120);
      FUN_004792b8(uVar6,auStack_100,auStack_158);
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00641ea4 to 00641ebb has its CatchHandler @ 0064201c */
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar6,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_006421e8;
    }
    if (*param_6 != 0) {
                    /* try { // try from 00641d2c to 00641d4f has its CatchHandler @ 006421a0 */
      iVar3 = pthread_attr_setstacksize(&pStack_a0,(ulong)*param_6);
      if (iVar3 != 0) {
                    /* try { // try from 00641f68 to 00641f73 has its CatchHandler @ 006420b8 */
        FUN_006459f4(auStack_128);
        uVar6 = FUN_00753a74(0x88);
                    /* try { // try from 00641f80 to 00641f87 has its CatchHandler @ 00642054 */
        FUN_00645c30(auStack_140);
                    /* try { // try from 00641f88 to 00641fa7 has its CatchHandler @ 00642010 */
        FUN_0047488c(auStack_100,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/platform/posix/env.cc"
                     ,0xad,
                     "onnxruntime::(anonymous namespace)::PosixThread::PosixThread(const char *, int, unsigned int (*)(int, Eigen::ThreadPoolInterface *), Eigen::ThreadPoolInterface *, const ThreadOptions &)"
                     ,auStack_140);
        local_b0 = " error msg: ";
        pcStack_a8 = "pthread_attr_setstacksize failed, error code: ";
        FUN_0064479c(auStack_158,&pcStack_a8,auStack_128,&local_b0,auStack_120);
        FUN_004792b8(uVar6,auStack_100,auStack_158);
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00641ff4 to 0064200b has its CatchHandler @ 0064200c */
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar6,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
        }
        goto LAB_006421e8;
      }
    }
    iVar3 = pthread_create(puVar4 + 5,&pStack_a0,FUN_00644484,__arg);
    if (iVar3 != 0) {
                    /* try { // try from 00641ec0 to 00641ecb has its CatchHandler @ 0064214c */
      FUN_006459f4(auStack_128);
      uVar6 = FUN_00753a74(0x88);
                    /* try { // try from 00641ed8 to 00641edf has its CatchHandler @ 00642094 */
      FUN_00645c30(auStack_140);
                    /* try { // try from 00641ee0 to 00641eff has its CatchHandler @ 00642018 */
      FUN_0047488c(auStack_100,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/platform/posix/env.cc"
                   ,0xb4,
                   "onnxruntime::(anonymous namespace)::PosixThread::PosixThread(const char *, int, unsigned int (*)(int, Eigen::ThreadPoolInterface *), Eigen::ThreadPoolInterface *, const ThreadOptions &)"
                   ,auStack_140);
      local_b0 = " error msg: ";
      pcStack_a8 = "pthread_create failed, error code: ";
      FUN_0064479c(auStack_158,&pcStack_a8,auStack_128,&local_b0,auStack_120);
      FUN_004792b8(uVar6,auStack_100,auStack_158);
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00641f4c to 00641f63 has its CatchHandler @ 00642014 */
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar6,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_006421e8;
    }
  }
  else {
    lVar5 = (*pcVar8)(puVar4[2],FUN_006443e4,__arg);
    puVar4[4] = lVar5;
    if (lVar5 == 0) {
      uVar6 = FUN_00753a74(0x88);
                    /* try { // try from 00641ca4 to 00641cab has its CatchHandler @ 00642164 */
      FUN_00645c30(&pStack_a0);
                    /* try { // try from 00641cac to 00641ccb has its CatchHandler @ 0064213c */
      FUN_0047488c(auStack_100,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/platform/posix/env.cc"
                   ,0x9d,
                   "onnxruntime::(anonymous namespace)::PosixThread::PosixThread(const char *, int, unsigned int (*)(int, Eigen::ThreadPoolInterface *), Eigen::ThreadPoolInterface *, const ThreadOptions &)"
                   ,&pStack_a0);
                    /* try { // try from 00641ccc to 00641cdb has its CatchHandler @ 00642074 */
      FUN_00479eac(auStack_128,"custom_create_thread_fn returned invalid handle.");
      FUN_004792b8(uVar6,auStack_100,auStack_128);
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00641cfc to 00641d13 has its CatchHandler @ 00642058 */
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar6,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_006421e8;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return puVar4;
  }
LAB_006421e8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006421ec  FUN_006421ec =====

uint FUN_006421ec(void)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = FUN_00715c18();
  uVar2 = (uint)(uVar1 >> 1) & 0x7fffffff;
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 0064220c  FUN_0064220c =====

void FUN_0064220c(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = *param_2;
  param_1[2] = 0;
                    /* try { // try from 0064222c to 0064223f has its CatchHandler @ 0064224c */
  iVar1 = (**(code **)(lVar2 + 0x18))();
  if (iVar1 != 0) {
    FUN_00644a64(param_1,(long)iVar1);
  }
  return;
}


// ===== 00642260  FUN_00642260 =====

void FUN_00642260(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0064226c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}


// ===== 00642270  FUN_00642270 =====

void FUN_00642270(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0064227c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x18))();
  return;
}


// ===== 00642280  FUN_00642280 =====

void FUN_00642280(undefined8 param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  timespec local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (0 < (long)param_2) {
    do {
      local_58.tv_sec = 0;
      local_58.tv_nsec = 0;
      if (param_2 < 1000000) {
LAB_00642304:
        local_58.tv_nsec = param_2 * 1000;
        param_2 = 0;
      }
      else {
        local_58.tv_sec = param_2 / 1000000;
        param_2 = param_2 % 1000000;
        if (param_2 < 1000000) goto LAB_00642304;
      }
      do {
        iVar2 = nanosleep(&local_58,&local_58);
        if (iVar2 == 0) break;
        piVar3 = (int *)__errno();
      } while (*piVar3 == 4);
    } while (param_2 != 0);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00642360  FUN_00642360 =====

void FUN_00642360(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c = __open_2(param_3,0);
                    /* try { // try from 006423a8 to 006423b7 has its CatchHandler @ 006423e4 */
  (**(code **)(*param_2 + 0x48))(param_1,param_2,local_3c,param_4);
  FUN_00644c70(&local_3c);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0064240c  FUN_0064240c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0064240c(undefined8 *param_1,undefined8 param_2,int param_3,long *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  char *local_e0;
  undefined8 uStack_d8;
  char *local_d0;
  stat local_c0;
  
  lVar1 = tpidr_el0;
  local_c0.__unused[2] = *(long *)(lVar1 + 0x28);
  local_c0.__unused[1]._4_4_ = param_3;
  if (param_3 < 0) {
    local_e0 = "Invalid fd was supplied: ";
    FUN_004a0638(&local_c0,&local_e0,(undefined1 *)((long)local_c0.__unused + 0xc));
                    /* try { // try from 0064247c to 0064248f has its CatchHandler @ 00642550 */
    FUN_0063aa48(param_1,2,2,&local_c0);
    if (((byte)local_c0.st_dev & 1) == 0) goto LAB_00642514;
  }
  else {
    iVar6 = fstat(param_3,&local_c0);
    if (iVar6 < 0) {
      local_e0 = (char *)((ulong)local_e0 & 0xffffffffffff0000);
                    /* try { // try from 006424a4 to 006424b7 has its CatchHandler @ 0064253c */
      FUN_00644e8c(param_1,"fstat",&local_e0);
    }
    else {
      if (-1 < local_c0.st_size) {
        *param_4 = local_c0.st_size;
        *param_1 = 0;
        goto LAB_00642514;
      }
      local_d0 = (char *)FUN_00759c3c(0x28);
      uVar5 = s_Received_negative_size_from_stat_001e83e9._16_8_;
      uVar4 = s_Received_negative_size_from_stat_001e83e9._0_8_;
      uVar2 = CONCAT35(s_Received_negative_size_from_stat_001e83e9._29_3_,
                       s_Received_negative_size_from_stat_001e83e9._24_5_);
      uVar3 = CONCAT53(s_Received_negative_size_from_stat_001e83e9._32_5_,
                       s_Received_negative_size_from_stat_001e83e9._29_3_);
      uStack_d8 = _UNK_002008b8;
      local_e0 = _DAT_002008b0;
      *(undefined8 *)(local_d0 + 8) = s_Received_negative_size_from_stat_001e83e9._8_8_;
      *(undefined8 *)local_d0 = uVar4;
      *(undefined8 *)(local_d0 + 0x18) = uVar2;
      *(undefined8 *)(local_d0 + 0x10) = uVar5;
      *(undefined8 *)(local_d0 + 0x1d) = uVar3;
      local_d0[0x25] = '\0';
                    /* try { // try from 006424f0 to 00642503 has its CatchHandler @ 00642538 */
      FUN_0063aa48(param_1,1,1,&local_e0);
    }
    local_c0.st_nlink = (__nlink_t)local_d0;
    if (((ulong)local_e0 & 1) == 0) goto LAB_00642514;
  }
  free((void *)local_c0.st_nlink);
LAB_00642514:
  if (*(long *)(lVar1 + 0x28) != local_c0.__unused[2]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00642580  FUN_00642580 =====

void FUN_00642580(undefined8 *param_1,undefined8 param_2,char *param_3,long param_4,ulong param_5,
                 ulong param_6,long param_7)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  int __fd;
  __off_t _Var4;
  ssize_t sVar5;
  int *piVar6;
  size_t sVar7;
  void *pvVar8;
  ulong uVar9;
  int local_11c;
  ulong local_118;
  size_t local_110;
  void *local_108;
  byte local_f8;
  void *local_e8;
  byte *local_e0;
  byte *local_d8;
  char *local_c8 [2];
  void *local_b8;
  char *local_b0 [2];
  void *local_a0;
  ulong local_98;
  long local_90;
  char *pcStack_88;
  char *local_80;
  char *pcStack_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  local_98 = param_5;
  local_90 = param_4;
  pcStack_88 = param_3;
  if (param_3 == (char *)0x0) {
    FUN_0048a3f4(&local_118,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/platform/posix/env.cc"
                 ,0x169,"ReadFileIntoBuffer");
                    /* try { // try from 00642670 to 0064267f has its CatchHandler @ 00642bec */
    FUN_00475ff4(local_c8,&local_118,0);
    local_80 = "file_path == nullptr";
    pcStack_78 = " ";
    FUN_004a2c0c(local_b0,local_c8,&pcStack_78,&local_80);
                    /* try { // try from 006426a8 to 006426bb has its CatchHandler @ 00642bc4 */
    FUN_0063aa48(param_1,2,1,local_b0);
    if (((ulong)local_b0[0] & 1) != 0) {
      free(local_a0);
    }
    pbVar2 = local_e0;
    if (((ulong)local_c8[0] & 1) != 0) {
      free(local_b8);
      pbVar2 = local_e0;
    }
    local_e0 = pbVar2;
    if (pbVar2 != (byte *)0x0) {
      while (pbVar3 = local_d8, pbVar3 != pbVar2) {
        local_d8 = pbVar3 + -0x18;
        if ((*local_d8 & 1) != 0) {
          free(*(void **)(pbVar3 + -8));
        }
      }
LAB_00642908:
      free(local_e0);
    }
  }
  else if (param_4 < 0) {
    FUN_0048a3f4(&local_118,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/platform/posix/env.cc"
                 ,0x16a,"ReadFileIntoBuffer");
                    /* try { // try from 006426f4 to 00642703 has its CatchHandler @ 00642bc0 */
    FUN_00475ff4(local_c8,&local_118,0);
    local_80 = "offset < 0";
    pcStack_78 = " ";
    FUN_004a2c0c(local_b0,local_c8,&pcStack_78,&local_80);
                    /* try { // try from 0064272c to 0064273f has its CatchHandler @ 00642bbc */
    FUN_0063aa48(param_1,2,1,local_b0);
    if (((ulong)local_b0[0] & 1) != 0) {
      free(local_a0);
    }
    pbVar2 = local_e0;
    if (((ulong)local_c8[0] & 1) != 0) {
      free(local_b8);
      pbVar2 = local_e0;
    }
    local_e0 = pbVar2;
    if (pbVar2 != (byte *)0x0) {
      while (pbVar3 = local_d8, pbVar3 != pbVar2) {
        local_d8 = pbVar3 + -0x18;
        if ((*local_d8 & 1) != 0) {
          free(*(void **)(pbVar3 + -8));
        }
      }
      goto LAB_00642908;
    }
  }
  else {
    if (param_5 <= param_6) {
      __fd = __open_2(param_3,0);
      local_11c = __fd;
      if (__fd == -1) {
        sVar7 = strlen(param_3);
        if (0xfffffffffffffff7 < sVar7) {
          if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* try { // try from 00642b60 to 00642b67 has its CatchHandler @ 00642bb0 */
                    /* WARNING: Subroutine does not return */
            FUN_002fb400(&local_118);
          }
          goto LAB_00642c20;
        }
        if (sVar7 < 0x17) {
          pvVar8 = (void *)((ulong)&local_118 | 1);
          local_118 = CONCAT71(local_118._1_7_,(char)((int)sVar7 << 1));
          if (sVar7 != 0) goto LAB_006429c4;
        }
        else {
          uVar9 = (sVar7 & 0xfffffffffffffff8) + 8;
          if ((sVar7 | 7) != 0x17) {
            uVar9 = sVar7 | 7;
          }
                    /* try { // try from 006429ac to 006429b3 has its CatchHandler @ 00642bb0 */
          pvVar8 = (void *)FUN_00759c3c(uVar9 + 1);
          local_118 = uVar9 + 1 | 1;
          local_110 = sVar7;
          local_108 = pvVar8;
LAB_006429c4:
          memcpy(pvVar8,param_3,sVar7);
        }
        *(undefined1 *)((long)pvVar8 + sVar7) = 0;
                    /* try { // try from 006429d8 to 006429eb has its CatchHandler @ 00642b98 */
        FUN_00644e8c(param_1,&DAT_001c2898,&local_118);
LAB_00642b08:
        if ((local_118 & 1) != 0) {
          free(local_108);
        }
      }
      else {
        if (param_5 != 0) {
                    /* try { // try from 0064278c to 0064279b has its CatchHandler @ 00642b94 */
          if ((param_4 != 0) && (_Var4 = lseek(__fd,param_4,0), _Var4 == -1)) {
                    /* try { // try from 00642a8c to 00642a97 has its CatchHandler @ 00642b84 */
            FUN_002fd2b0(&local_118,param_3);
                    /* try { // try from 00642a98 to 00642aab has its CatchHandler @ 00642b80 */
            FUN_00644e8c(param_1,"lseek",&local_118);
            goto LAB_00642b08;
          }
          uVar9 = 0;
          do {
            sVar7 = param_5 - uVar9;
            if (0x3fffffff < sVar7) {
              sVar7 = 0x40000000;
            }
                    /* try { // try from 006427b8 to 006427c7 has its CatchHandler @ 00642bfc */
            while (sVar5 = read(__fd,(void *)(param_7 + uVar9),sVar7), sVar5 == -1) {
              piVar6 = (int *)__errno();
              if (*piVar6 != 4) {
                sVar7 = strlen(param_3);
                if (0xfffffffffffffff7 < sVar7) {
                  if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* try { // try from 00642b78 to 00642b7f has its CatchHandler @ 00642b90 */
                    /* WARNING: Subroutine does not return */
                    FUN_002fb400(&local_118);
                  }
                  goto LAB_00642c20;
                }
                if (sVar7 < 0x17) {
                  pvVar8 = (void *)((ulong)&local_118 | 1);
                  local_118 = CONCAT71(local_118._1_7_,(char)((int)sVar7 << 1));
                  if (sVar7 != 0) goto LAB_00642ae0;
                }
                else {
                  uVar9 = (sVar7 & 0xfffffffffffffff8) + 8;
                  if ((sVar7 | 7) != 0x17) {
                    uVar9 = sVar7 | 7;
                  }
                    /* try { // try from 00642ac8 to 00642acf has its CatchHandler @ 00642b90 */
                  pvVar8 = (void *)FUN_00759c3c(uVar9 + 1);
                  local_118 = uVar9 + 1 | 1;
                  local_110 = sVar7;
                  local_108 = pvVar8;
LAB_00642ae0:
                  memcpy(pvVar8,param_3,sVar7);
                }
                *(undefined1 *)((long)pvVar8 + sVar7) = 0;
                    /* try { // try from 00642af4 to 00642b07 has its CatchHandler @ 00642b88 */
                FUN_00644e8c(param_1,&DAT_001cf704,&local_118);
                goto LAB_00642b08;
              }
            }
            if (sVar5 == 0) {
              local_b0[0] = "ReadFileIntoBuffer - unexpected end of file. ";
              local_c8[0] = "File: ";
              local_80 = ", length: ";
              pcStack_78 = ", offset: ";
              FUN_00645108(&local_118,local_b0,local_c8,&pcStack_88,&pcStack_78,&local_90,&local_80,
                           &local_98);
                    /* try { // try from 00642a40 to 00642a53 has its CatchHandler @ 00642b8c */
              FUN_0063aa48(param_1,2,1,&local_118);
              goto LAB_00642b08;
            }
            uVar9 = sVar5 + uVar9;
          } while (uVar9 < param_5);
        }
        *param_1 = 0;
      }
      FUN_00644c70(&local_11c);
      if (*(long *)(lVar1 + 0x28) == local_70) {
        return;
      }
      goto LAB_00642c20;
    }
    FUN_0048a3f4(&local_118,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/platform/posix/env.cc"
                 ,0x16b,"ReadFileIntoBuffer");
                    /* try { // try from 006425ec to 006425fb has its CatchHandler @ 00642bb8 */
    FUN_00475ff4(local_c8,&local_118,0);
    local_80 = "length > buffer.size()";
    pcStack_78 = " ";
    FUN_004a2c0c(local_b0,local_c8,&pcStack_78,&local_80);
                    /* try { // try from 00642624 to 00642637 has its CatchHandler @ 00642bb4 */
    FUN_0063aa48(param_1,2,1,local_b0);
    if (((ulong)local_b0[0] & 1) != 0) {
      free(local_a0);
    }
    pbVar2 = local_e0;
    if (((ulong)local_c8[0] & 1) != 0) {
      free(local_b8);
      pbVar2 = local_e0;
    }
    local_e0 = pbVar2;
    if (pbVar2 != (byte *)0x0) {
      while (pbVar3 = local_d8, pbVar3 != pbVar2) {
        local_d8 = pbVar3 + -0x18;
        if ((*local_d8 & 1) != 0) {
          free(*(void **)(pbVar3 + -8));
        }
      }
      goto LAB_00642908;
    }
  }
  if ((local_f8 & 1) != 0) {
    free(local_e8);
  }
  if ((local_118 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == local_70) {
      return;
    }
  }
  else {
    free(local_108);
    if (*(long *)(lVar1 + 0x28) == local_70) {
      return;
    }
  }
LAB_00642c20:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00642c24  FUN_00642c24 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00642c24(undefined8 *param_1,undefined8 param_2,char *param_3,long param_4,long param_5,
                 long *param_6)

{
  ulong uVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  void *pvVar6;
  undefined8 *puVar7;
  size_t sVar8;
  long lVar9;
  ulong local_e8;
  size_t local_e0;
  void *local_d8;
  byte local_c8;
  void *local_b8;
  byte *local_b0;
  byte *local_a8;
  byte local_98 [16];
  void *local_88;
  uint local_80 [4];
  void *local_70;
  char *local_68;
  undefined *puStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_3 == (char *)0x0) {
    FUN_0048a3f4(&local_e8,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/platform/posix/env.cc"
                 ,0x196,"MapFileIntoMemory");
                    /* try { // try from 00642d2c to 00642d3b has its CatchHandler @ 0064318c */
    FUN_00475ff4(local_98,&local_e8,0);
    local_68 = "file_path == nullptr";
    puStack_60 = &DAT_001bc0af;
    FUN_004a2c0c(local_80,local_98,&puStack_60,&local_68);
                    /* try { // try from 00642d64 to 00642d77 has its CatchHandler @ 00643164 */
    FUN_0063aa48(param_1,2,1,local_80);
    if ((local_80[0] & 1) != 0) {
      free(local_70);
    }
    pbVar3 = local_b0;
    if ((local_98[0] & 1) != 0) {
      free(local_88);
      pbVar3 = local_b0;
    }
    local_b0 = pbVar3;
    if (pbVar3 != (byte *)0x0) {
      while (pbVar4 = local_a8, pbVar4 != pbVar3) {
        local_a8 = pbVar4 + -0x18;
        if ((*local_a8 & 1) != 0) {
          free(*(void **)(pbVar4 + -8));
        }
      }
LAB_00642f00:
      free(local_b0);
    }
  }
  else {
    if (-1 < param_4) {
      local_80[0] = __open_2(param_3,0);
      if (local_80[0] == 0xffffffff) {
        sVar8 = strlen(param_3);
        if (0xfffffffffffffff7 < sVar8) {
          if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 006430f0 to 006430f7 has its CatchHandler @ 0064314c */
                    /* WARNING: Subroutine does not return */
            FUN_002fb400(&local_e8);
          }
          goto LAB_006431b0;
        }
        if (sVar8 < 0x17) {
          pvVar6 = (void *)((ulong)&local_e8 | 1);
          local_e8 = CONCAT71(local_e8._1_7_,(char)((int)sVar8 << 1));
          if (sVar8 != 0) goto LAB_00642fb0;
        }
        else {
          uVar1 = (sVar8 & 0xfffffffffffffff8) + 8;
          if ((sVar8 | 7) != 0x17) {
            uVar1 = sVar8 | 7;
          }
                    /* try { // try from 00642f98 to 00642f9f has its CatchHandler @ 0064314c */
          pvVar6 = (void *)FUN_00759c3c(uVar1 + 1);
          local_e8 = uVar1 + 1 | 1;
          local_e0 = sVar8;
          local_d8 = pvVar6;
LAB_00642fb0:
          memcpy(pvVar6,param_3,sVar8);
        }
        *(undefined1 *)((long)pvVar6 + sVar8) = 0;
                    /* try { // try from 00642fc4 to 00642fd7 has its CatchHandler @ 00643130 */
        FUN_00644e8c(param_1,&DAT_001c2898,&local_e8);
LAB_00643068:
        if ((local_e8 & 1) != 0) {
          free(local_d8);
        }
      }
      else {
        if (param_5 == 0) {
          lVar9 = *param_6;
          *param_6 = 0;
          if ((lVar9 != 0) && ((code *)param_6[1] != (code *)0x0)) {
            (*(code *)param_6[1])(param_6[2]);
          }
          param_6[1] = 0;
          param_6[2] = 0;
        }
        else {
          if (((DAT_007ae7a8 & 1) == 0) && (iVar5 = FUN_00739c1c(&DAT_007ae7a8), iVar5 != 0)) {
                    /* try { // try from 006430bc to 006430c7 has its CatchHandler @ 00643110 */
            sysconf(0x27);
            DAT_007ae7a0 = FUN_00645378();
            FUN_00739d60(&DAT_007ae7a8);
          }
          lVar9 = 0;
          if (DAT_007ae7a0 != 0) {
            lVar9 = param_4 / DAT_007ae7a0;
          }
          param_4 = param_4 - lVar9 * DAT_007ae7a0;
          sVar8 = param_4 + param_5;
                    /* try { // try from 00642cb0 to 00642cc3 has its CatchHandler @ 00643148 */
          pvVar6 = mmap((void *)0x0,sVar8,3,2,local_80[0],lVar9 * DAT_007ae7a0);
          if (pvVar6 == (void *)0xffffffffffffffff) {
            sVar8 = strlen(param_3);
            if (0xfffffffffffffff7 < sVar8) {
              if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 00643108 to 0064310f has its CatchHandler @ 00643128 */
                    /* WARNING: Subroutine does not return */
                FUN_002fb400(&local_e8);
              }
              goto LAB_006431b0;
            }
            if (sVar8 < 0x17) {
              pvVar6 = (void *)((ulong)&local_e8 | 1);
              local_e8 = CONCAT71(local_e8._1_7_,(char)((int)sVar8 << 1));
              if (sVar8 != 0) goto LAB_00643040;
            }
            else {
              uVar1 = (sVar8 & 0xfffffffffffffff8) + 8;
              if ((sVar8 | 7) != 0x17) {
                uVar1 = sVar8 | 7;
              }
                    /* try { // try from 00643028 to 0064302f has its CatchHandler @ 00643128 */
              pvVar6 = (void *)FUN_00759c3c(uVar1 + 1);
              local_e8 = uVar1 + 1 | 1;
              local_e0 = sVar8;
              local_d8 = pvVar6;
LAB_00643040:
              memcpy(pvVar6,param_3,sVar8);
            }
            *(undefined1 *)((long)pvVar6 + sVar8) = 0;
                    /* try { // try from 00643054 to 00643067 has its CatchHandler @ 00643124 */
            FUN_00644e8c(param_1,&DAT_001cf709,&local_e8);
            goto LAB_00643068;
          }
                    /* try { // try from 00642cd0 to 00642cd7 has its CatchHandler @ 0064312c */
          puVar7 = (undefined8 *)FUN_00759c3c(0x10);
          lVar9 = *param_6;
          *puVar7 = pvVar6;
          puVar7[1] = sVar8;
          *param_6 = (long)pvVar6 + param_4;
          if ((lVar9 != 0) && ((code *)param_6[1] != (code *)0x0)) {
            (*(code *)param_6[1])(param_6[2]);
          }
          param_6[1] = (long)FUN_006453b4;
          param_6[2] = (long)puVar7;
        }
        *param_1 = 0;
      }
      FUN_00644c70(local_80);
      if (*(long *)(lVar2 + 0x28) == local_58) {
        return;
      }
      goto LAB_006431b0;
    }
    FUN_0048a3f4(&local_e8,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/platform/posix/env.cc"
                 ,0x197,"MapFileIntoMemory");
                    /* try { // try from 00642db0 to 00642dbf has its CatchHandler @ 00643160 */
    FUN_00475ff4(local_98,&local_e8,0);
    local_68 = "offset < 0";
    puStack_60 = &DAT_001bc0af;
    FUN_004a2c0c(local_80,local_98,&puStack_60,&local_68);
                    /* try { // try from 00642de8 to 00642dfb has its CatchHandler @ 0064315c */
    FUN_0063aa48(param_1,2,1,local_80);
    if ((local_80[0] & 1) != 0) {
      free(local_70);
    }
    pbVar3 = local_b0;
    if ((local_98[0] & 1) != 0) {
      free(local_88);
      pbVar3 = local_b0;
    }
    local_b0 = pbVar3;
    if (pbVar3 != (byte *)0x0) {
      while (pbVar4 = local_a8, pbVar4 != pbVar3) {
        local_a8 = pbVar4 + -0x18;
        if ((*local_a8 & 1) != 0) {
          free(*(void **)(pbVar4 + -8));
        }
      }
      goto LAB_00642f00;
    }
  }
  if ((local_c8 & 1) != 0) {
    free(local_b8);
  }
  if ((local_e8 & 1) == 0) {
    if (*(long *)(lVar2 + 0x28) != local_58) {
LAB_006431b0:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  else {
    free(local_d8);
    if (*(long *)(lVar2 + 0x28) != local_58) goto LAB_006431b0;
  }
  return;
}


// ===== 006431b4  FUN_006431b4 =====

void FUN_006431b4(undefined8 param_1,byte *param_2)

{
  long lVar1;
  int iVar2;
  byte *__file;
  uint local_98;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  __file = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    __file = param_2 + 1;
  }
  iVar2 = stat((char *)__file,(stat *)&stack0xffffffffffffff58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0 && (local_98 & 0xf000) == 0x4000);
}


// ===== 00643224  FUN_00643224 =====

void FUN_00643224(undefined8 *param_1,long *param_2,byte *param_3)

{
  ulong uVar1;
  long lVar2;
  byte *__src;
  int iVar3;
  char *pcVar4;
  size_t __n;
  void *__dest;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  int iVar11;
  char *pcVar12;
  ulong local_98;
  size_t local_90;
  void *local_88;
  ulong local_80;
  ulong local_78;
  char *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar10 = 0;
  pcVar12 = (char *)((ulong)&local_80 | 1);
  do {
    uVar5 = (ulong)(*param_3 >> 1);
    __src = param_3 + 1;
    if ((*param_3 & 1) != 0) {
      uVar5 = *(ulong *)(param_3 + 8);
      __src = *(byte **)(param_3 + 0x10);
    }
    if (uVar10 + 1 < uVar5) {
      pbVar8 = __src + uVar10 + 1;
      lVar7 = ~uVar10 + uVar5;
      do {
        pbVar9 = pbVar8;
        if ((*pbVar8 == 0x2f) || (*pbVar8 == 0x5c)) break;
        lVar7 = lVar7 + -1;
        pbVar8 = pbVar8 + 1;
        pbVar9 = __src + uVar5;
      } while (lVar7 != 0);
      uVar10 = (long)pbVar9 - (long)__src;
      if (pbVar9 == __src + uVar5) {
        uVar10 = 0xffffffffffffffff;
      }
    }
    else {
      uVar10 = 0xffffffffffffffff;
    }
    if (uVar10 <= uVar5) {
      uVar5 = uVar10;
    }
    if (0xfffffffffffffff7 < uVar5) {
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_002fb400(&local_80);
      }
      goto LAB_0064354c;
    }
    if (uVar5 < 0x17) {
      local_80 = CONCAT71(local_80._1_7_,(char)((int)uVar5 << 1));
      pcVar4 = pcVar12;
      if (uVar5 != 0) goto LAB_0064334c;
    }
    else {
      uVar1 = (uVar5 & 0xfffffffffffffff8) + 8;
      if ((uVar5 | 7) != 0x17) {
        uVar1 = uVar5 | 7;
      }
      pcVar4 = (char *)FUN_00759c3c(uVar1 + 1);
      local_80 = uVar1 + 1 | 1;
      local_78 = uVar5;
      local_70 = pcVar4;
LAB_0064334c:
      memmove(pcVar4,__src,uVar5);
    }
    pcVar4[uVar5] = '\0';
    pcVar4 = pcVar12;
    if ((local_80 & 1) != 0) {
      pcVar4 = local_70;
    }
    __n = strlen(pcVar4);
    if (0xfffffffffffffff7 < __n) {
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 006434e8 to 006434ef has its CatchHandler @ 00643500 */
                    /* WARNING: Subroutine does not return */
        FUN_002fb400(&local_98);
      }
      goto LAB_0064354c;
    }
    if (__n < 0x17) {
      local_98 = CONCAT71(local_98._1_7_,(char)((int)__n << 1));
      __dest = (void *)((ulong)&local_98 | 1);
      if (__n != 0) goto LAB_006433d0;
    }
    else {
      uVar5 = (__n & 0xfffffffffffffff8) + 8;
      if ((__n | 7) != 0x17) {
        uVar5 = __n | 7;
      }
                    /* try { // try from 006433b8 to 006433bf has its CatchHandler @ 006434f8 */
      __dest = (void *)FUN_00759c3c(uVar5 + 1);
      local_98 = uVar5 + 1 | 1;
      local_90 = __n;
      local_88 = __dest;
LAB_006433d0:
      memmove(__dest,pcVar4,__n);
    }
    lVar7 = *param_2;
    *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 006433ec to 006433f7 has its CatchHandler @ 00643508 */
    uVar5 = (**(code **)(lVar7 + 0x60))(param_2,&local_98);
    if ((local_98 & 1) != 0) {
      free(local_88);
    }
    uVar1 = local_80;
    if ((uVar5 & 1) == 0) {
      pcVar4 = pcVar12;
      if ((local_80 & 1) != 0) {
        pcVar4 = local_70;
      }
      iVar3 = mkdir(pcVar4,0x1fd);
      if (iVar3 == 0) {
        iVar11 = 0;
        iVar3 = 0;
      }
      else {
        puVar6 = (undefined4 *)__errno();
        iVar11 = 1;
        iVar3 = 1;
                    /* try { // try from 00643448 to 00643453 has its CatchHandler @ 006434f0 */
        FUN_0063af9c(param_1,1,*puVar6);
      }
    }
    else {
      iVar11 = 3;
      iVar3 = 3;
    }
    if ((uVar1 & 1) != 0) {
      free(local_70);
      iVar3 = iVar11;
    }
    if ((iVar3 != 3) && (iVar3 != 0)) goto LAB_00643484;
  } while (uVar10 != 0xffffffffffffffff);
  *param_1 = 0;
LAB_00643484:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_0064354c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00643550  FUN_00643550 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00643550(undefined8 *param_1,undefined8 param_2,byte *param_3)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte local_d0 [16];
  void *local_c0;
  byte local_b0;
  void *local_a0;
  byte *local_98;
  byte *local_90;
  byte local_80 [16];
  void *local_70;
  byte local_68 [16];
  void *local_58;
  int local_4c;
  char *local_48;
  undefined *puStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pbVar3 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar3 = param_3 + 1;
  }
  local_4c = nftw((char *)pbVar3,FUN_00645560,0x20,5);
  if (local_4c == 0) {
    *param_1 = 0;
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
  else {
    FUN_0048a3f4(local_d0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/platform/posix/env.cc"
                 ,0x1d6,"DeleteFolder");
                    /* try { // try from 006435bc to 006435cb has its CatchHandler @ 00643770 */
    FUN_00475ff4(local_80,local_d0,0);
    local_48 = "DeleteFolder(): nftw() failed with error: ";
    puStack_40 = &DAT_001bc0af;
    FUN_00645780(local_68,local_80,&puStack_40,&local_48,&local_4c);
                    /* try { // try from 006435f8 to 0064360b has its CatchHandler @ 00643708 */
    FUN_0063aa48(param_1,2,1,local_68);
    if ((local_68[0] & 1) != 0) {
      free(local_58);
    }
    pbVar3 = local_98;
    if ((local_80[0] & 1) != 0) {
      free(local_70);
      pbVar3 = local_98;
    }
    local_98 = pbVar3;
    if (pbVar3 != (byte *)0x0) {
      while (pbVar2 = local_90, pbVar2 != pbVar3) {
        local_90 = pbVar2 + -0x18;
        if ((*local_90 & 1) != 0) {
          free(*(void **)(pbVar2 + -8));
        }
      }
      free(local_98);
    }
    if ((local_b0 & 1) != 0) {
      free(local_a0);
    }
    if ((local_d0[0] & 1) == 0) {
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
    }
    else {
      free(local_c0);
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00643790  FUN_00643790 =====

void FUN_00643790(undefined8 *param_1,undefined8 param_2,byte *param_3,int *param_4)

{
  int iVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar2 = param_3 + 1;
  }
  iVar1 = __open_2(pbVar2,0);
  *param_4 = iVar1;
  if (-1 < iVar1) {
    *param_1 = 0;
    return;
  }
  FUN_00644e8c(param_1,&DAT_001c2898,param_3);
  return;
}


// ===== 00643800  FUN_00643800 =====

void FUN_00643800(undefined8 *param_1,undefined8 param_2,byte *param_3,int *param_4)

{
  int iVar1;
  byte *__file;
  
  __file = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    __file = param_3 + 1;
  }
  iVar1 = open((char *)__file,0x241,0x1a4);
  *param_4 = iVar1;
  if (-1 < iVar1) {
    *param_1 = 0;
    return;
  }
  FUN_00644e8c(param_1,&DAT_001c2898,param_3);
  return;
}


// ===== 00643874  FUN_00643874 =====

void FUN_00643874(undefined8 *param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  int iVar2;
  ushort local_40 [8];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = close(param_3);
  if (iVar2 == 0) {
    *param_1 = 0;
  }
  else {
    local_40[0] = 0;
                    /* try { // try from 006438a4 to 006438b7 has its CatchHandler @ 006438f0 */
    FUN_00644e8c(param_1,"close",local_40);
    if ((local_40[0] & 1) != 0) {
      free(local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00643920  FUN_00643920 =====

void FUN_00643920(undefined8 *param_1,undefined8 param_2,byte *param_3,undefined8 param_4)

{
  char *__ptr;
  byte *__name;
  
  __name = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    __name = param_3 + 1;
  }
  __ptr = realpath((char *)__name,(char *)0x0);
  if (__ptr != (char *)0x0) {
                    /* try { // try from 00643958 to 00643967 has its CatchHandler @ 006439a0 */
    FUN_0071396c(param_4,__ptr);
    *param_1 = 0;
    free(__ptr);
    return;
  }
  FUN_00644e8c(param_1,"realpath",param_3);
  return;
}


// ===== 006439b4  <EXTERNAL>::getpid =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_007a3f10)();
  return _Var1;
}


// ===== 006439b8  FUN_006439b8 =====

void FUN_006439b8(undefined8 *param_1,undefined8 param_2,byte *param_3,ulong param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong *puVar4;
  undefined4 uVar5;
  byte *pbVar6;
  byte local_98 [16];
  void *local_88;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  dlerror();
  pbVar6 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar6 = param_3 + 1;
  }
  uVar5 = 0x102;
  if ((param_4 & 1) == 0) {
    uVar5 = 2;
  }
  lVar2 = dlopen(pbVar6,uVar5);
  *param_5 = lVar2;
  uVar3 = dlerror();
  if (*param_5 == 0) {
    FUN_00714534(local_98,"Failed to load library ",param_3);
                    /* try { // try from 00643a54 to 00643a63 has its CatchHandler @ 00643b94 */
    puVar4 = (ulong *)FUN_00713bdc(local_98," with error: ");
    local_70 = (void *)puVar4[2];
    uStack_78 = puVar4[1];
    local_80 = *puVar4;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
                    /* try { // try from 00643a7c to 00643a87 has its CatchHandler @ 00643b74 */
    puVar4 = (ulong *)FUN_00713bdc(&local_80,uVar3);
    local_50 = (void *)puVar4[2];
    uStack_58 = puVar4[1];
    local_60 = *puVar4;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
                    /* try { // try from 00643aa0 to 00643ab3 has its CatchHandler @ 00643b30 */
    FUN_0063aa48(param_1,2,1,&local_60);
    if ((local_60 & 1) != 0) {
      free(local_50);
    }
    if ((local_80 & 1) != 0) {
      free(local_70);
    }
    if ((local_98[0] & 1) == 0) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
    }
    else {
      free(local_88);
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
    }
  }
  else {
    *param_1 = 0;
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00643bc0  FUN_00643bc0 =====

void FUN_00643bc0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  char *__s;
  size_t __n;
  ulong *puVar4;
  void *__dest;
  ulong local_78;
  size_t local_70;
  void *local_68;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_3 == 0) {
    if (*(long *)(lVar2 + 0x28) == local_48) {
      FUN_0063acd8(param_1,2,1,"Got null library handle");
      return;
    }
    goto LAB_00643df4;
  }
  dlerror();
  iVar3 = dlclose(param_3);
  __s = (char *)dlerror();
  if (iVar3 == 0) {
    *param_1 = 0;
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return;
    }
    goto LAB_00643df4;
  }
  __n = strlen(__s);
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_78);
    }
    goto LAB_00643df4;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_78 | 1);
    local_78 = CONCAT71(local_78._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00643cc0;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_78 = uVar1 + 1 | 1;
    local_70 = __n;
    local_68 = __dest;
LAB_00643cc0:
    memmove(__dest,__s,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 00643cd4 to 00643ce7 has its CatchHandler @ 00643dd0 */
  puVar4 = (ulong *)FUN_00713170(&local_78,0,"Failed to unload library with error: ");
  local_50 = (void *)puVar4[2];
  uStack_58 = puVar4[1];
  local_60 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
                    /* try { // try from 00643d00 to 00643d13 has its CatchHandler @ 00643d90 */
  FUN_0063aa48(param_1,2,1,&local_60);
  if ((local_60 & 1) != 0) {
    free(local_50);
  }
  if ((local_78 & 1) == 0) {
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return;
    }
  }
  else {
    free(local_68);
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return;
    }
  }
LAB_00643df4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00643df8  FUN_00643df8 =====

void FUN_00643df8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 00643e04  FUN_00643e04 =====

void FUN_00643e04(undefined8 *param_1,undefined8 param_2,undefined8 param_3,byte *param_4,
                 undefined8 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong *puVar4;
  byte *pbVar5;
  byte local_98 [16];
  void *local_88;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  dlerror();
  pbVar5 = *(byte **)(param_4 + 0x10);
  if ((*param_4 & 1) == 0) {
    pbVar5 = param_4 + 1;
  }
  uVar2 = dlsym(param_3,pbVar5);
  *param_5 = uVar2;
  lVar3 = dlerror();
  if (lVar3 == 0) {
    *param_1 = 0;
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else {
    FUN_00714534(local_98,"Failed to get symbol ",param_4);
                    /* try { // try from 00643e78 to 00643e87 has its CatchHandler @ 00643fd4 */
    puVar4 = (ulong *)FUN_00713bdc(local_98," with error: ");
    local_70 = (void *)puVar4[2];
    uStack_78 = puVar4[1];
    local_80 = *puVar4;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
                    /* try { // try from 00643ea0 to 00643eab has its CatchHandler @ 00643fb4 */
    puVar4 = (ulong *)FUN_00713bdc(&local_80,lVar3);
    local_50 = (void *)puVar4[2];
    uStack_58 = puVar4[1];
    local_60 = *puVar4;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
                    /* try { // try from 00643ec4 to 00643ed7 has its CatchHandler @ 00643f6c */
    FUN_0063aa48(param_1,2,1,&local_60);
    if ((local_60 & 1) != 0) {
      free(local_50);
    }
    if ((local_80 & 1) != 0) {
      free(local_70);
    }
    if ((local_98[0] & 1) == 0) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
    }
    else {
      free(local_88);
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00643ffc  FUN_00643ffc =====

void FUN_00643ffc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined2 uVar6;
  long lVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  byte local_88 [16];
  void *local_78;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long local_38;
  
  lVar7 = tpidr_el0;
  local_38 = *(long *)(lVar7 + 0x28);
  bVar5 = *param_4;
  uVar10 = *(ulong *)(param_4 + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar1 = uVar10;
  }
  if (uVar1 == 0) {
                    /* try { // try from 00644100 to 0064410f has its CatchHandler @ 006441b0 */
    FUN_00714534(&local_50,&DAT_001c90fa);
                    /* try { // try from 00644110 to 0064411f has its CatchHandler @ 0064419c */
    puVar9 = (undefined8 *)FUN_00713bdc(&local_50,&DAT_001f0881);
    uVar6 = *(undefined2 *)puVar9;
    *(undefined8 *)((long)param_1 + 2) = *(undefined8 *)((long)puVar9 + 2);
    uVar2 = puVar9[1];
    uVar4 = puVar9[2];
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *(undefined2 *)param_1 = uVar6;
    param_1[1] = uVar2;
    param_1[2] = uVar4;
    local_78 = local_40;
    if ((local_50 & 1) == 0) goto LAB_00644178;
  }
  else {
                    /* try { // try from 00644040 to 00644053 has its CatchHandler @ 00644220 */
    FUN_00714534(local_88,&DAT_001c90fa);
                    /* try { // try from 00644054 to 00644063 has its CatchHandler @ 00644208 */
    puVar8 = (ulong *)FUN_00713bdc(local_88,&DAT_001f0881);
    local_60 = (void *)puVar8[2];
    uStack_68 = puVar8[1];
    local_70 = *puVar8;
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
                    /* try { // try from 0064407c to 0064408b has its CatchHandler @ 006441e8 */
    puVar8 = (ulong *)FUN_00713bdc(&local_70,&DAT_001c773b);
    local_40 = (void *)puVar8[2];
    uStack_48 = puVar8[1];
    local_50 = *puVar8;
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
    uVar1 = *(ulong *)(param_4 + 8);
    pbVar3 = *(byte **)(param_4 + 0x10);
    if ((*param_4 & 1) == 0) {
      pbVar3 = param_4 + 1;
      uVar1 = (ulong)(*param_4 >> 1);
    }
                    /* try { // try from 006440bc to 006440c3 has its CatchHandler @ 006441b4 */
    puVar9 = (undefined8 *)FUN_0071302c(&local_50,pbVar3,uVar1);
    uVar6 = *(undefined2 *)puVar9;
    *(undefined8 *)((long)param_1 + 2) = *(undefined8 *)((long)puVar9 + 2);
    uVar2 = puVar9[1];
    uVar4 = puVar9[2];
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *(undefined2 *)param_1 = uVar6;
    param_1[1] = uVar2;
    param_1[2] = uVar4;
    if ((local_50 & 1) != 0) {
      free(local_40);
    }
    if ((local_70 & 1) != 0) {
      free(local_60);
    }
    if ((local_88[0] & 1) == 0) goto LAB_00644178;
  }
  free(local_78);
LAB_00644178:
  if (*(long *)(lVar7 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00644240  FUN_00644240 =====

long FUN_00644240(long param_1)

{
  return param_1 + 0x10;
}


// ===== 00644248  FUN_00644248 =====

void FUN_00644248(ulong *param_1,undefined8 param_2,byte *param_3)

{
  ulong uVar1;
  char *__s;
  size_t __n;
  byte *__name;
  void *__dest;
  
  __name = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    __name = param_3 + 1;
  }
  __s = getenv((char *)__name);
  if (__s == (char *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  __n = strlen(__s);
  if (0xfffffffffffffff7 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_002fb400(param_1);
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_006442f8;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar1 + 1 | 1;
  }
  memmove(__dest,__s,__n);
LAB_006442f8:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}


// ===== 00644314  FUN_00644314 =====

long * FUN_00644314(long *param_1,long *param_2)

{
  size_t __n;
  void *__dest;
  undefined8 uVar1;
  void *pvVar2;
  
  if ((char)param_1[3] != '\0') {
    if (param_1 != param_2) {
      FUN_0064466c(param_1,*param_2,param_2[1],param_2[1] - *param_2 >> 2);
    }
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  pvVar2 = (void *)*param_2;
  __n = param_2[1] - (long)pvVar2;
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* try { // try from 006443bc to 006443c3 has its CatchHandler @ 006443c4 */
      uVar1 = FUN_004b6308(param_1);
                    /* catch() { ... } // from try @ 0064437c with catch @ 006443c4
                       catch() { ... } // from try @ 006443bc with catch @ 006443c4 */
      pvVar2 = (void *)*param_1;
      if (pvVar2 != (void *)0x0) {
        param_1[1] = (long)pvVar2;
        free(pvVar2);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00755eac(uVar1);
    }
                    /* try { // try from 0064437c to 00644383 has its CatchHandler @ 006443c4 */
    __dest = (void *)FUN_00759c3c(__n);
    *param_1 = (long)__dest;
    param_1[1] = (long)__dest;
    param_1[2] = (long)__dest + __n;
    memcpy(__dest,pvVar2,__n);
    param_1[1] = (long)__dest + __n;
  }
  *(undefined1 *)(param_1 + 3) = 1;
  return param_1;
}


// ===== 006443e4  FUN_006443e4 =====

void FUN_006443e4(void *param_1)

{
  long lVar1;
  void *__ptr;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00644410 to 00644413 has its CatchHandler @ 00644450 */
  (**(code **)((long)param_1 + 0x10))
            (*(undefined4 *)((long)param_1 + 8),*(undefined8 *)((long)param_1 + 0x18));
  if ((*(char *)((long)param_1 + 0x38) != '\0') &&
     (__ptr = *(void **)((long)param_1 + 0x20), __ptr != (void *)0x0)) {
    *(void **)((long)param_1 + 0x28) = __ptr;
    free(__ptr);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    free(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00644484  FUN_00644484 =====

undefined8 FUN_00644484(void *param_1)

{
  long lVar1;
  void *__ptr;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 006444b0 to 006444b3 has its CatchHandler @ 006444f8 */
  (**(code **)((long)param_1 + 0x10))
            (*(undefined4 *)((long)param_1 + 8),*(undefined8 *)((long)param_1 + 0x18));
  if ((*(char *)((long)param_1 + 0x38) != '\0') &&
     (__ptr = *(void **)((long)param_1 + 0x20), __ptr != (void *)0x0)) {
    *(void **)((long)param_1 + 0x28) = __ptr;
    free(__ptr);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    free(param_1);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0064452c  FUN_0064452c =====

void FUN_0064452c(undefined8 *param_1)

{
  void *__ptr;
  void *__ptr_00;
  
  __ptr_00 = (void *)*param_1;
  *param_1 = 0;
  if (__ptr_00 != (void *)0x0) {
    if ((*(char *)((long)__ptr_00 + 0x38) != '\0') &&
       (__ptr = *(void **)((long)__ptr_00 + 0x20), __ptr != (void *)0x0)) {
      *(void **)((long)__ptr_00 + 0x28) = __ptr;
      free(__ptr);
    }
    free(__ptr_00);
    return;
  }
  return;
}


// ===== 00644578  FUN_00644578 =====

void FUN_00644578(undefined8 *param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  void *pvStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00797b30;
  if (param_1[4] == 0) {
    uVar2 = pthread_join(param_1[5],&pvStack_30);
    uVar3 = (ulong)uVar2;
  }
  else {
                    /* try { // try from 006445b0 to 006445c7 has its CatchHandler @ 006445ec */
    uVar3 = (*(code *)param_1[3])();
    param_1[4] = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 006445f0  FUN_006445f0 =====

void FUN_006445f0(undefined8 *param_1)

{
  long lVar1;
  void *pvStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00797b30;
  if (param_1[4] == 0) {
    pthread_join(param_1[5],&pvStack_30);
  }
  else {
                    /* try { // try from 00644628 to 0064463b has its CatchHandler @ 00644668 */
    (*(code *)param_1[3])();
  }
  free(param_1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0064466c  FUN_0064466c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0064466c(undefined8 *param_1,void *param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  void *__src;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  size_t sVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  long lVar9;
  void *__dest;
  undefined1 auVar10 [16];
  undefined *apuStack_1b8 [9];
  ulong uStack_170;
  undefined8 uStack_168;
  void *pvStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined *apuStack_148 [3];
  undefined8 uStack_130;
  undefined4 auStack_128 [4];
  undefined8 uStack_118;
  long lStack_b0;
  undefined1 *puStack_a0;
  code *pcStack_98;
  
  uVar8 = param_1[2];
  __dest = (void *)*param_1;
  if (param_4 <= (ulong)((long)(uVar8 - (long)__dest) >> 2)) {
    sVar7 = (long)param_1[1] - (long)__dest;
    if ((ulong)((long)sVar7 >> 2) < param_4) {
      __src = (void *)((long)param_2 + sVar7);
      if ((void *)param_1[1] != __dest) {
        memmove(__dest,param_2,sVar7);
        __dest = (void *)param_1[1];
      }
      lVar6 = -(long)__src;
    }
    else {
      lVar6 = -(long)param_2;
      __src = param_2;
    }
    sVar7 = param_3 + lVar6;
    if (sVar7 != 0) {
      memmove(__dest,__src,sVar7);
    }
LAB_00644778:
    param_1[1] = (long)__dest + sVar7;
    return;
  }
  lVar6 = param_3;
  if (__dest != (void *)0x0) {
    param_1[1] = __dest;
    free(__dest);
    uVar8 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = (long)uVar8 >> 1;
    if ((ulong)((long)uVar8 >> 1) <= param_4) {
      uVar2 = param_4;
    }
    if (0x7ffffffffffffffb < uVar8) {
      uVar2 = 0x3fffffffffffffff;
    }
    if (uVar2 >> 0x3e == 0) {
      __dest = (void *)FUN_00759c3c(uVar2 * 4);
      sVar7 = param_3 - (long)param_2;
      *param_1 = __dest;
      param_1[1] = __dest;
      param_1[2] = (void *)((long)__dest + uVar2 * 4);
      if (sVar7 != 0) {
        memcpy(__dest,param_2,sVar7);
      }
      goto LAB_00644778;
    }
  }
  auVar10 = FUN_004b6308(param_1);
  puVar5 = PTR_PTR_007a1e48;
  puVar4 = PTR_DAT_007a1e40;
  pcStack_98 = FUN_0064479c;
  lVar3 = tpidr_el0;
  lStack_b0 = *(long *)(lVar3 + 0x28);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  apuStack_1b8[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  uStack_118 = 0;
  apuStack_148[0] = puVar1;
  puStack_a0 = &stack0xffffffffffffffc0;
  *(undefined8 *)((long)apuStack_1b8 + *(long *)(apuStack_1b8[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar9 = *(long *)(apuStack_1b8[0] + -0x18);
  FUN_00715fc0((long)apuStack_1b8 + lVar9,apuStack_1b8 + 1);
  apuStack_1b8[0] = puVar4 + 0x18;
  *(undefined8 *)((long)&uStack_130 + lVar9) = 0;
  *(undefined4 *)((long)auStack_128 + lVar9) = 0xffffffff;
  apuStack_148[0] = puVar1;
  FUN_007160dc(apuStack_1b8 + 1);
  puVar1 = PTR_DAT_007a10f8 + 0x10;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  pvStack_160 = (void *)0x0;
  uStack_150 = 0x10;
  apuStack_1b8[1] = puVar1;
  FUN_0064493c(apuStack_1b8,auVar10._0_8_,auVar10._8_8_,lVar6,param_4);
  FUN_00718470(extraout_x8,apuStack_1b8 + 1);
  apuStack_1b8[0] = *(undefined **)puVar5;
  *(undefined8 *)((long)apuStack_1b8 + *(long *)(apuStack_1b8[0] + -0x18)) =
       *(undefined8 *)(puVar5 + 0x18);
  apuStack_1b8[1] = puVar1;
  if ((uStack_170 & 1) != 0) {
    free(pvStack_160);
  }
  FUN_00716098(apuStack_1b8 + 1);
  FUN_00716ee4(apuStack_1b8,puVar5 + 8);
  thunk_FUN_00715e00(apuStack_148);
  if (*(long *)(lVar3 + 0x28) == lStack_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0064479c  FUN_0064479c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0064479c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_178 [9];
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined *local_108 [3];
  undefined8 uStack_f0;
  undefined4 auStack_e8 [4];
  undefined8 local_d8;
  long local_70;
  
  puVar4 = PTR_PTR_007a1e48;
  puVar3 = PTR_DAT_007a1e40;
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_178[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  local_d8 = 0;
  local_108[0] = puVar1;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar5 = *(long *)(local_178[0] + -0x18);
                    /* try { // try from 00644818 to 00644823 has its CatchHandler @ 00644928 */
  FUN_00715fc0((long)local_178 + lVar5,local_178 + 1);
  local_178[0] = puVar3 + 0x18;
  *(undefined8 *)((long)&uStack_f0 + lVar5) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar5) = 0xffffffff;
                    /* try { // try from 0064483c to 00644843 has its CatchHandler @ 00644908 */
  local_108[0] = puVar1;
  FUN_007160dc(local_178 + 1);
  puVar1 = PTR_DAT_007a10f8 + 0x10;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_110 = 0x10;
  local_178[1] = puVar1;
  FUN_0064493c(local_178,param_2,param_3,param_4,param_5);
                    /* try { // try from 00644880 to 0064488b has its CatchHandler @ 00644904 */
  FUN_00718470(param_1,local_178 + 1);
  local_178[0] = *(undefined **)puVar4;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(puVar4 + 0x18);
  local_178[1] = puVar1;
  if ((local_130 & 1) != 0) {
    free(local_120);
  }
  FUN_00716098(local_178 + 1);
  FUN_00716ee4(local_178,puVar4 + 8);
  thunk_FUN_00715e00(local_108);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0064493c  FUN_0064493c =====

void FUN_0064493c(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
                 byte *param_5)

{
  ulong uVar1;
  byte *pbVar2;
  size_t sVar3;
  char *pcVar4;
  
  pcVar4 = (char *)*param_2;
  sVar3 = strlen(pcVar4);
                    /* try { // try from 00644970 to 0064497b has its CatchHandler @ 006449e4 */
  FUN_00303e0c(param_1,pcVar4,sVar3);
                    /* try { // try from 00644980 to 00644987 has its CatchHandler @ 006449e0 */
  FUN_00717214(param_1,*param_3);
  pcVar4 = (char *)*param_4;
  sVar3 = strlen(pcVar4);
                    /* try { // try from 00644998 to 006449a3 has its CatchHandler @ 006449dc */
  FUN_00303e0c(param_1,pcVar4,sVar3);
  uVar1 = *(ulong *)(param_5 + 8);
  pbVar2 = *(byte **)(param_5 + 0x10);
  if ((*param_5 & 1) == 0) {
    pbVar2 = param_5 + 1;
    uVar1 = (ulong)(*param_5 >> 1);
  }
                    /* try { // try from 006449bc to 006449c3 has its CatchHandler @ 006449d8 */
  FUN_00303e0c(param_1,pbVar2,uVar1);
  return;
}


// ===== 006449e8  FUN_006449e8 =====

void FUN_006449e8(undefined8 *param_1)

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


// ===== 00644a64  FUN_00644a64 =====

void FUN_00644a64(long *param_1,ulong param_2)

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
      FUN_0063c758(param_1);
LAB_00644c6c:
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
      if (0xaaaaaaaaaaaaaaa < uVar5) goto LAB_00644c6c;
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


// ===== 00644c70  FUN_00644c70 =====

void FUN_00644c70(int *param_1)

{
  ulong uVar1;
  int __fd;
  long lVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte local_230 [16];
  void *local_220;
  byte local_210;
  void *local_200;
  byte *local_1f8;
  byte *local_1f0;
  undefined4 local_1e0 [2];
  byte local_1d8;
  undefined1 auStack_1d7 [7];
  ulong local_1d0;
  undefined1 *local_1c8;
  undefined1 auStack_1c0 [112];
  undefined1 auStack_150 [264];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  __fd = *param_1;
                    /* try { // try from 00644ca4 to 00644cbb has its CatchHandler @ 00644e80 */
  if ((__fd != -1) && (iVar6 = close(__fd), iVar6 == -1)) {
    FUN_006459f4(local_1e0);
                    /* try { // try from 00644cbc to 00644cbf has its CatchHandler @ 00644e4c */
    lVar7 = FUN_00488994();
    if (*(int *)(lVar7 + 0x20) < 4) {
                    /* try { // try from 00644ccc to 00644ccf has its CatchHandler @ 00644e48 */
      uVar8 = FUN_00488994();
      uVar9 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
                    /* try { // try from 00644ce0 to 00644cfb has its CatchHandler @ 00644e44 */
      FUN_0048a3f4(local_230,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/platform/posix/env.cc"
                   ,0x50,"CleanUp");
                    /* try { // try from 00644cfc to 00644d1b has its CatchHandler @ 00644e3c */
      FUN_0048a554(auStack_1c0,uVar8,3,uVar9,0,local_230);
                    /* try { // try from 00644d1c to 00644d83 has its CatchHandler @ 00644e54 */
      uVar8 = FUN_00303e0c(auStack_150,"Failed to close file descriptor ",0x20);
      uVar8 = FUN_00717214(uVar8,__fd);
      uVar8 = FUN_00303e0c(uVar8," - error code: ",0xf);
      uVar8 = FUN_00717214(uVar8,local_1e0[0]);
      uVar8 = FUN_00303e0c(uVar8," error msg: ",0xc);
      uVar1 = (ulong)(local_1d8 >> 1);
      puVar3 = auStack_1d7;
      if ((local_1d8 & 1) != 0) {
        uVar1 = local_1d0;
        puVar3 = local_1c8;
      }
      FUN_00303e0c(uVar8,puVar3,uVar1);
      FUN_00637fac(auStack_1c0);
      pbVar5 = local_1f8;
      if (local_1f8 != (byte *)0x0) {
        while (pbVar4 = local_1f0, pbVar4 != pbVar5) {
          local_1f0 = pbVar4 + -0x18;
          if ((*local_1f0 & 1) != 0) {
            free(*(void **)(pbVar4 + -8));
          }
        }
        local_1f0 = pbVar5;
        free(local_1f8);
      }
      if ((local_210 & 1) != 0) {
        free(local_200);
      }
      if ((local_230[0] & 1) != 0) {
        free(local_220);
      }
    }
    if ((local_1d8 & 1) != 0) {
      free(local_1c8);
    }
  }
  *param_1 = -1;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00644e8c  FUN_00644e8c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00644e8c(undefined8 param_1,char *param_2,byte *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  size_t sVar8;
  undefined8 uVar9;
  long lVar10;
  byte local_1a8 [16];
  void *local_198;
  undefined4 local_190 [2];
  byte local_188;
  undefined1 auStack_187 [7];
  ulong local_180;
  undefined1 *local_178;
  undefined *local_170 [9];
  ulong local_128;
  undefined8 uStack_120;
  void *local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined *local_100 [3];
  undefined8 uStack_e8;
  undefined4 auStack_e0 [4];
  undefined8 local_d0;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  FUN_006459f4(local_190);
  puVar7 = PTR_PTR_007a1e48;
  puVar6 = PTR_DAT_007a1e40;
  local_d0 = 0;
  local_170[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_100[0] = puVar1;
  *(undefined8 *)((long)local_170 + *(long *)(local_170[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar10 = *(long *)(local_170[0] + -0x18);
                    /* try { // try from 00644f08 to 00644f13 has its CatchHandler @ 006450c0 */
  FUN_00715fc0((long)local_170 + lVar10,local_170 + 1);
  local_170[0] = puVar6 + 0x18;
  *(undefined8 *)((long)&uStack_e8 + lVar10) = 0;
  *(undefined4 *)((long)auStack_e0 + lVar10) = 0xffffffff;
                    /* try { // try from 00644f2c to 00644f33 has its CatchHandler @ 006450ac */
  local_100[0] = puVar1;
  FUN_007160dc(local_170 + 1);
  puVar1 = PTR_DAT_007a10f8;
  local_170[1] = PTR_DAT_007a10f8 + 0x10;
  uStack_120 = 0;
  local_128 = 0;
  uStack_110 = 0;
  local_118 = (void *)0x0;
  local_108 = 0x10;
  sVar8 = strlen(param_2);
                    /* try { // try from 00644f64 to 00644fcf has its CatchHandler @ 006450d0 */
  uVar9 = FUN_00303e0c(local_170,param_2,sVar8);
  uVar9 = FUN_00303e0c(uVar9," file \"",7);
  uVar2 = *(ulong *)(param_3 + 8);
  pbVar3 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar3 = param_3 + 1;
    uVar2 = (ulong)(*param_3 >> 1);
  }
  uVar9 = FUN_00303e0c(uVar9,pbVar3,uVar2);
  uVar9 = FUN_00303e0c(uVar9,"\" failed: ",10);
  uVar2 = (ulong)(local_188 >> 1);
  puVar5 = auStack_187;
  if ((local_188 & 1) != 0) {
    uVar2 = local_180;
    puVar5 = local_178;
  }
  FUN_00303e0c(uVar9,puVar5,uVar2);
                    /* try { // try from 00644fd4 to 00644fdf has its CatchHandler @ 006450a8 */
  FUN_00718470(local_1a8,local_170 + 1);
                    /* try { // try from 00644fe0 to 00644ff3 has its CatchHandler @ 00645090 */
  FUN_0063aa48(param_1,1,local_190[0],local_1a8);
  if ((local_1a8[0] & 1) != 0) {
    free(local_198);
  }
  local_170[0] = *(undefined **)puVar7;
  *(undefined8 *)((long)local_170 + *(long *)(local_170[0] + -0x18)) =
       *(undefined8 *)(puVar7 + 0x18);
  local_170[1] = puVar1 + 0x10;
  if ((local_128 & 1) != 0) {
    free(local_118);
  }
  FUN_00716098(local_170 + 1);
  FUN_00716ee4(local_170,puVar7 + 8);
  thunk_FUN_00715e00(local_100);
  if ((local_188 & 1) != 0) {
    free(local_178);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00645108  FUN_00645108 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00645108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_178 [9];
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined *local_108 [3];
  undefined8 uStack_f0;
  undefined4 auStack_e8 [4];
  undefined8 local_d8;
  long local_70;
  
  puVar4 = PTR_PTR_007a1e48;
  puVar3 = PTR_DAT_007a1e40;
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_178[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_d8 = 0;
  local_108[0] = puVar1;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar5 = *(long *)(local_178[0] + -0x18);
                    /* try { // try from 0064518c to 00645197 has its CatchHandler @ 006452a4 */
  FUN_00715fc0((long)local_178 + lVar5,local_178 + 1);
  local_178[0] = puVar3 + 0x18;
  *(undefined8 *)((long)&uStack_f0 + lVar5) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar5) = 0xffffffff;
                    /* try { // try from 006451b0 to 006451b7 has its CatchHandler @ 00645284 */
  local_108[0] = puVar1;
  FUN_007160dc(local_178 + 1);
  puVar1 = PTR_DAT_007a10f8 + 0x10;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_110 = 0x10;
  local_178[1] = puVar1;
  FUN_006452b8(local_178,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
                    /* try { // try from 006451fc to 00645207 has its CatchHandler @ 00645280 */
  FUN_00718470(param_1,local_178 + 1);
  local_178[0] = *(undefined **)puVar4;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(puVar4 + 0x18);
  local_178[1] = puVar1;
  if ((local_130 & 1) != 0) {
    free(local_120);
  }
  FUN_00716098(local_178 + 1);
  FUN_00716ee4(local_178,puVar4 + 8);
  thunk_FUN_00715e00(local_108);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006452b8  FUN_006452b8 =====

void FUN_006452b8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  size_t sVar1;
  char *pcVar2;
  
  pcVar2 = (char *)*param_2;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 006452fc to 00645307 has its CatchHandler @ 00645374 */
  FUN_00303e0c(param_1,pcVar2,sVar1);
  pcVar2 = (char *)*param_3;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 00645318 to 00645323 has its CatchHandler @ 00645370 */
  FUN_00303e0c(param_1,pcVar2,sVar1);
  pcVar2 = (char *)*param_4;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 00645334 to 0064533f has its CatchHandler @ 0064536c */
  FUN_00303e0c(param_1,pcVar2,sVar1);
  FUN_004ee9fc(param_1,param_5,param_6,param_7,param_8);
  return;
}


// ===== 00645378  FUN_00645378 =====

void FUN_00645378(long param_1)

{
  long *plVar1;
  
  if (-1 < param_1) {
    return;
  }
  plVar1 = (long *)FUN_00753a74(8);
  *plVar1 = (long)(PTR_DAT_007a1ef8 + 0x10);
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(plVar1,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
}


// ===== 006453b4  FUN_006453b4 =====

void FUN_006453b4(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte local_230 [16];
  void *local_220;
  byte local_210;
  void *local_200;
  byte *local_1f8;
  byte *local_1f0;
  undefined4 local_1e0 [2];
  byte local_1d8;
  undefined1 auStack_1d7 [7];
  ulong local_1d0;
  undefined1 *local_1c8;
  undefined1 auStack_1c0 [112];
  undefined1 auStack_150 [264];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 006453e4 to 006454a3 has its CatchHandler @ 0064555c */
  iVar6 = munmap((void *)*param_1,param_1[1]);
  if (iVar6 != 0) {
    FUN_006459f4(local_1e0);
    lVar7 = FUN_00488994();
    if (*(int *)(lVar7 + 0x20) < 4) {
      uVar8 = FUN_00488994();
      uVar9 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
      FUN_0048a3f4(local_230,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/platform/posix/env.cc"
                   ,0x46,"UnmapFile");
      FUN_0048a554(auStack_1c0,uVar8,3,uVar9,0,local_230);
      uVar8 = FUN_00303e0c(auStack_150,"munmap failed. error code: ",0x1b);
      uVar8 = FUN_00717214(uVar8,local_1e0[0]);
      uVar8 = FUN_00303e0c(uVar8," error msg: ",0xc);
      uVar1 = (ulong)(local_1d8 >> 1);
      puVar3 = auStack_1d7;
      if ((local_1d8 & 1) != 0) {
        uVar1 = local_1d0;
        puVar3 = local_1c8;
      }
      FUN_00303e0c(uVar8,puVar3,uVar1);
      FUN_00637fac(auStack_1c0);
      pbVar5 = local_1f8;
      if (local_1f8 != (byte *)0x0) {
        while (pbVar4 = local_1f0, pbVar4 != pbVar5) {
          local_1f0 = pbVar4 + -0x18;
          if ((*local_1f0 & 1) != 0) {
            free(*(void **)(pbVar4 + -8));
          }
        }
        local_1f0 = pbVar5;
        free(local_1f8);
      }
      if ((local_210 & 1) != 0) {
        free(local_200);
      }
      if ((local_230[0] & 1) != 0) {
        free(local_220);
      }
    }
    if ((local_1d8 & 1) != 0) {
      free(local_1c8);
    }
  }
  free(param_1);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00645560  FUN_00645560 =====

int FUN_00645560(char *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  size_t sVar9;
  undefined8 uVar10;
  byte local_230 [16];
  void *local_220;
  byte local_210;
  void *local_200;
  byte *local_1f8;
  byte *local_1f0;
  undefined4 local_1e0 [2];
  byte local_1d8;
  undefined1 auStack_1d7 [7];
  ulong local_1d0;
  undefined1 *local_1c8;
  undefined1 auStack_1c0 [112];
  undefined1 auStack_150 [264];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar6 = remove(param_1);
  if (iVar6 != 0) {
    FUN_006459f4(local_1e0);
                    /* try { // try from 0064559c to 0064559f has its CatchHandler @ 00645738 */
    lVar7 = FUN_00488994();
    if (*(int *)(lVar7 + 0x20) < 3) {
                    /* try { // try from 006455ac to 006455af has its CatchHandler @ 00645734 */
      uVar8 = FUN_00488994();
      uVar10 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
                    /* try { // try from 006455c0 to 006455db has its CatchHandler @ 00645730 */
      FUN_0048a3f4(local_230,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/platform/posix/env.cc"
                   ,0x6c,"nftw_remove");
                    /* try { // try from 006455dc to 006455fb has its CatchHandler @ 00645728 */
      FUN_0048a554(auStack_1c0,uVar8,2,uVar10,0,local_230);
                    /* try { // try from 006455fc to 00645677 has its CatchHandler @ 00645740 */
      uVar8 = FUN_00303e0c(auStack_150,"remove() failed. Error code: ",0x1d);
      uVar8 = FUN_00717214(uVar8,local_1e0[0]);
      uVar8 = FUN_00303e0c(uVar8," error msg: ",0xc);
      uVar1 = (ulong)(local_1d8 >> 1);
      puVar3 = auStack_1d7;
      if ((local_1d8 & 1) != 0) {
        uVar1 = local_1d0;
        puVar3 = local_1c8;
      }
      uVar8 = FUN_00303e0c(uVar8,puVar3,uVar1);
      uVar8 = FUN_00303e0c(uVar8,", path: ",8);
      sVar9 = strlen(param_1);
      FUN_00303e0c(uVar8,param_1,sVar9);
      FUN_00637fac(auStack_1c0);
      pbVar5 = local_1f8;
      if (local_1f8 != (byte *)0x0) {
        while (pbVar4 = local_1f0, pbVar4 != pbVar5) {
          local_1f0 = pbVar4 + -0x18;
          if ((*local_1f0 & 1) != 0) {
            free(*(void **)(pbVar4 + -8));
          }
        }
        local_1f0 = pbVar5;
        free(local_1f8);
      }
      if ((local_210 & 1) != 0) {
        free(local_200);
      }
      if ((local_230[0] & 1) != 0) {
        free(local_220);
      }
    }
    if ((local_1d8 & 1) != 0) {
      free(local_1c8);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00645780  FUN_00645780 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00645780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_178 [9];
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined *local_108 [3];
  undefined8 uStack_f0;
  undefined4 auStack_e8 [4];
  undefined8 local_d8;
  long local_70;
  
  puVar4 = PTR_PTR_007a1e48;
  puVar3 = PTR_DAT_007a1e40;
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_178[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  local_d8 = 0;
  local_108[0] = puVar1;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar5 = *(long *)(local_178[0] + -0x18);
                    /* try { // try from 006457fc to 00645807 has its CatchHandler @ 0064590c */
  FUN_00715fc0((long)local_178 + lVar5,local_178 + 1);
  local_178[0] = puVar3 + 0x18;
  *(undefined8 *)((long)&uStack_f0 + lVar5) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar5) = 0xffffffff;
                    /* try { // try from 00645820 to 00645827 has its CatchHandler @ 006458ec */
  local_108[0] = puVar1;
  FUN_007160dc(local_178 + 1);
  puVar1 = PTR_DAT_007a10f8 + 0x10;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_110 = 0x10;
  local_178[1] = puVar1;
  FUN_00645920(local_178,param_2,param_3,param_4,param_5);
                    /* try { // try from 00645864 to 0064586f has its CatchHandler @ 006458e8 */
  FUN_00718470(param_1,local_178 + 1);
  local_178[0] = *(undefined **)puVar4;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(puVar4 + 0x18);
  local_178[1] = puVar1;
  if ((local_130 & 1) != 0) {
    free(local_120);
  }
  FUN_00716098(local_178 + 1);
  FUN_00716ee4(local_178,puVar4 + 8);
  thunk_FUN_00715e00(local_108);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00645920  FUN_00645920 =====

void FUN_00645920(undefined8 param_1,byte *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined4 *param_5)

{
  ulong uVar1;
  byte *pbVar2;
  size_t sVar3;
  char *pcVar4;
  
  uVar1 = *(ulong *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar1 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 00645958 to 0064595b has its CatchHandler @ 006459bc */
  FUN_00303e0c(param_1,pbVar2,uVar1);
  pcVar4 = (char *)*param_3;
  sVar3 = strlen(pcVar4);
                    /* try { // try from 0064596c to 00645977 has its CatchHandler @ 006459b8 */
  FUN_00303e0c(param_1,pcVar4,sVar3);
  pcVar4 = (char *)*param_4;
  sVar3 = strlen(pcVar4);
                    /* try { // try from 00645988 to 00645993 has its CatchHandler @ 006459b4 */
  FUN_00303e0c(param_1,pcVar4,sVar3);
                    /* try { // try from 00645998 to 0064599f has its CatchHandler @ 006459b0 */
  FUN_00717214(param_1,*param_5);
  return;
}


// ===== 006459c0  FUN_006459c0 =====

void FUN_006459c0(long *param_1)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_007a2e88 + 0x10);
  lVar1 = FUN_00645ae8();
  param_1[1] = lVar1;
  return;
}


// ===== 006459f4  FUN_006459f4 =====

void FUN_006459f4(int *param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  ulong local_250;
  undefined8 uStack_248;
  void *local_240;
  undefined1 auStack_238 [512];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  piVar3 = (int *)__errno();
  iVar1 = *piVar3;
  local_250 = 0;
  uStack_248 = 0;
  local_240 = (void *)0x0;
  if (iVar1 == 0) {
    *param_1 = 0;
  }
  else {
                    /* try { // try from 00645a2c to 00645a47 has its CatchHandler @ 00645ab0 */
    uVar4 = __gnu_strerror_r(iVar1,auStack_238,0x200);
    FUN_0071396c(&local_250,uVar4);
    *param_1 = iVar1;
    if ((local_250 & 1) != 0) {
                    /* try { // try from 00645a58 to 00645a5f has its CatchHandler @ 00645aac */
      FUN_002fb36c(param_1 + 2,local_240,uStack_248);
      if ((local_250 & 1) != 0) {
        free(local_240);
      }
      goto LAB_00645a88;
    }
  }
  *(undefined8 *)(param_1 + 4) = uStack_248;
  *(ulong *)(param_1 + 2) = local_250;
  *(void **)(param_1 + 6) = local_240;
LAB_00645a88:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00645ae0  FUN_00645ae0 =====

void FUN_00645ae0(void)

{
  return;
}


// ===== 00645ae4  FUN_00645ae4 =====

void FUN_00645ae4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x645ae8);
  (*pcVar1)();
}


// ===== 00645ae8  FUN_00645ae8 =====

undefined8 * FUN_00645ae8(void)

{
  int iVar1;
  
  if (((DAT_007ae7d0 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ae7d0), iVar1 != 0)) {
                    /* try { // try from 00645b28 to 00645b37 has its CatchHandler @ 00645b60 */
    FUN_00645c10(&DAT_007ae7c8);
    DAT_007ae7c8 = &PTR_FUN_00797c38;
    FUN_00739d60(&DAT_007ae7d0);
    return &DAT_007ae7c8;
  }
  return &DAT_007ae7c8;
}


// ===== 00645b78  FUN_00645b78 =====

void FUN_00645b78(void)

{
  return;
}


// ===== 00645b7c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00645b80  FUN_00645b80 =====

long FUN_00645b80(void)

{
  long lVar1;
  int iVar2;
  timeval local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = gettimeofday(&local_38,(__timezone_ptr_t)0x0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_38.tv_usec + local_38.tv_sec * 1000000;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


// ===== 00645bdc  FUN_00645bdc =====

ulong FUN_00645bdc(long *param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x10))();
  return uVar1 / 1000000;
}


// ===== 00645c10  FUN_00645c10 =====

void FUN_00645c10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00797c68;
  return;
}


// ===== 00645c24  FUN_00645c24 =====

void FUN_00645c24(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x645c28);
  (*pcVar1)();
}


// ===== 00645c28  FUN_00645c28 =====

void FUN_00645c28(undefined8 param_1,undefined8 *param_2)

{
  FUN_00706b5c(param_1,*param_2);
  return;
}


// ===== 00645c30  FUN_00645c30 =====

void FUN_00645c30(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 00645c3c  FUN_00645c3c =====

void FUN_00645c3c(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00641af0();
  plVar1 = (long *)(**(code **)(*plVar1 + 200))();
                    /* WARNING: Could not recover jumptable at 0x00645ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x68))((int)plVar1,param_1,param_2,param_3,param_4,param_5);
  return;
}


// ===== 00645ca4  FUN_00645ca4 =====

undefined8 FUN_00645ca4(void)

{
  return 0;
}


// ===== 00645cac  FUN_00645cac =====

undefined8 FUN_00645cac(void)

{
  return 0;
}


// ===== 00645cb4  FUN_00645cb4 =====

undefined8 FUN_00645cb4(void)

{
  return 0;
}


// ===== 00645cbc  FUN_00645cbc =====

void FUN_00645cbc(void)

{
  return;
}


// ===== 00645cc0  FUN_00645cc0 =====

void FUN_00645cc0(void)

{
  return;
}


// ===== 00645cc4  FUN_00645cc4 =====

void FUN_00645cc4(void)

{
  return;
}


// ===== 00645cc8  FUN_00645cc8 =====

void FUN_00645cc8(void)

{
  return;
}


// ===== 00645ccc  FUN_00645ccc =====

void FUN_00645ccc(void)

{
  return;
}


// ===== 00645cd0  FUN_00645cd0 =====

void FUN_00645cd0(void)

{
  return;
}


// ===== 00645cd4  FUN_00645cd4 =====

void FUN_00645cd4(void)

{
  return;
}


// ===== 00645cd8  FUN_00645cd8 =====

void FUN_00645cd8(void)

{
  return;
}


// ===== 00645cdc  FUN_00645cdc =====

void FUN_00645cdc(void)

{
  return;
}


// ===== 00645ce0  FUN_00645ce0 =====

void FUN_00645ce0(void)

{
  return;
}


// ===== 00645ce4  FUN_00645ce4 =====

void FUN_00645ce4(void)

{
  return;
}


// ===== 00645ce8  FUN_00645ce8 =====

void FUN_00645ce8(void)

{
  return;
}


// ===== 00645cec  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00645cf0  FUN_00645cf0 =====

void FUN_00645cf0(ulong *param_1,uint *param_2)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  ulong __n;
  void *__dest;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if (param_2 == (uint *)0x0) goto LAB_00645d60;
  uVar2 = *param_2;
  __n = (ulong)uVar2;
  if (uVar2 < 0x17) {
    __dest = (void *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)(uVar2 << 1));
    if (uVar2 != 0) goto LAB_00645dc0;
    *(undefined1 *)((long)__dest + __n) = 0;
    bVar3 = (byte)*param_1;
  }
  else {
    uVar1 = (__n & 0xfffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_60 = uVar1 + 1 | 1;
    uStack_58 = __n;
    local_50 = __dest;
LAB_00645dc0:
    memcpy(__dest,param_2 + 1,__n);
    *(undefined1 *)((long)__dest + __n) = 0;
    bVar3 = (byte)*param_1;
  }
  if ((bVar3 & 1) != 0) {
    free((void *)param_1[2]);
  }
  param_1[1] = uStack_58;
  *param_1 = local_60;
  param_1[2] = (ulong)local_50;
LAB_00645d60:
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00645de0  FUN_00645de0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00645de0(long *param_1,int *param_2,long param_3)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  byte *pbVar6;
  undefined8 uVar7;
  ulong *puVar8;
  long lVar9;
  byte *pbVar10;
  ushort *puVar11;
  ulong uVar12;
  void *pvVar13;
  ulong local_f0;
  ulong local_e8;
  void *local_e0;
  byte local_d0;
  void *local_c0;
  byte *local_b8;
  byte *local_b0;
  byte local_a0 [16];
  void *local_90;
  byte local_88 [16];
  void *local_78;
  char *local_70;
  char *local_68;
  undefined *puStack_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  FUN_00650b80(param_3);
  puVar11 = (ushort *)((long)param_2 - (long)*param_2);
  lVar9 = -(long)*param_2;
  if ((4 < *puVar11) && (uVar12 = (ulong)puVar11[2], uVar12 != 0)) {
    puVar1 = (uint *)((long)param_2 + uVar12);
    puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
    uVar3 = *puVar1;
    uVar12 = (ulong)uVar3;
    if (uVar3 < 0x17) {
      pvVar13 = (void *)((ulong)&local_f0 | 1);
      local_f0 = CONCAT71(local_f0._1_7_,(char)(uVar3 << 1));
      if (uVar3 != 0) goto LAB_00645e9c;
    }
    else {
      uVar2 = (uVar12 & 0xfffffff8) + 8;
      if ((uVar12 | 7) != 0x17) {
        uVar2 = uVar12 | 7;
      }
      pvVar13 = (void *)FUN_00759c3c(uVar2 + 1);
      local_f0 = uVar2 + 1 | 1;
      local_e8 = uVar12;
      local_e0 = pvVar13;
LAB_00645e9c:
      memcpy(pvVar13,puVar1 + 1,uVar12);
    }
    *(undefined1 *)((long)pvVar13 + uVar12) = 0;
    puVar8 = (ulong *)(*(ulong *)(param_3 + 8) & 0xfffffffffffffffc);
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 1;
    if ((*(ulong *)(param_3 + 8) & 1) != 0) {
      puVar8 = (ulong *)*puVar8;
    }
                    /* try { // try from 00645ec8 to 00645ed3 has its CatchHandler @ 006461f8 */
    FUN_006638c0(param_3 + 0x30,&local_f0,puVar8);
    if ((local_f0 & 1) != 0) {
      free(local_e0);
    }
    lVar9 = -(long)*param_2;
  }
  if ((6 < *(ushort *)((long)param_2 + lVar9)) &&
     (uVar12 = (ulong)((ushort *)((long)param_2 + lVar9))[3], uVar12 != 0)) {
    puVar1 = (uint *)((long)param_2 + uVar12);
    puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
    uVar3 = *puVar1;
    uVar12 = (ulong)uVar3;
    if (uVar3 < 0x17) {
      pvVar13 = (void *)((ulong)&local_f0 | 1);
      local_f0 = CONCAT71(local_f0._1_7_,(char)(uVar3 << 1));
      if (uVar3 != 0) goto LAB_00645f64;
    }
    else {
      uVar2 = (uVar12 & 0xfffffff8) + 8;
      if ((uVar12 | 7) != 0x17) {
        uVar2 = uVar12 | 7;
      }
      pvVar13 = (void *)FUN_00759c3c(uVar2 + 1);
      local_f0 = uVar2 + 1 | 1;
      local_e8 = uVar12;
      local_e0 = pvVar13;
LAB_00645f64:
      memcpy(pvVar13,puVar1 + 1,uVar12);
    }
    *(undefined1 *)((long)pvVar13 + uVar12) = 0;
    puVar8 = (ulong *)(*(ulong *)(param_3 + 8) & 0xfffffffffffffffc);
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 2;
    if ((*(ulong *)(param_3 + 8) & 1) != 0) {
      puVar8 = (ulong *)*puVar8;
    }
                    /* try { // try from 00645f90 to 00645f9b has its CatchHandler @ 006461f4 */
    FUN_006638c0(param_3 + 0x38,&local_f0,puVar8);
    if ((local_f0 & 1) != 0) {
      free(local_e0);
    }
    lVar9 = -(long)*param_2;
  }
  if ((*(ushort *)((long)param_2 + lVar9) < 9) ||
     (uVar12 = (ulong)((ushort *)((long)param_2 + lVar9))[4], uVar12 == 0)) {
    pbVar10 = (byte *)(*(ulong *)(param_3 + 0x30) & 0xfffffffffffffffc);
    bVar4 = *pbVar10;
    uVar12 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar12 = *(ulong *)(pbVar10 + 8);
    }
    if (uVar12 != 0) {
      FUN_0048a3f4(&local_f0,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/flatbuffers/flatbuffers_utils.cc"
                   ,0x112,"LoadValueInfoOrtFormat");
                    /* try { // try from 0064603c to 0064604b has its CatchHandler @ 00646238 */
      FUN_00475ff4(local_a0,&local_f0,0);
      local_68 = "Null type info for ";
      puStack_60 = &DAT_001bc0af;
      local_70 = ". Invalid ORT format model.";
      FUN_005d6458(local_88,local_a0,&puStack_60,&local_68,
                   *(ulong *)(param_3 + 0x30) & 0xfffffffffffffffc,&local_70);
                    /* try { // try from 0064608c to 0064609f has its CatchHandler @ 00646210 */
      FUN_0063aa48(param_1,2,1,local_88);
      if ((local_88[0] & 1) != 0) {
        free(local_78);
      }
      pbVar10 = local_b8;
      if ((local_a0[0] & 1) != 0) {
        free(local_90);
        pbVar10 = local_b8;
      }
      local_b8 = pbVar10;
      if (pbVar10 != (byte *)0x0) {
        while (pbVar6 = local_b0, pbVar6 != pbVar10) {
          local_b0 = pbVar6 + -0x18;
          if ((*local_b0 & 1) != 0) {
            free(*(void **)(pbVar6 + -8));
          }
        }
        free(local_b8);
      }
      if ((local_d0 & 1) != 0) {
        free(local_c0);
      }
      if ((local_f0 & 1) != 0) {
        free(local_e0);
      }
      goto LAB_006461a0;
    }
  }
  else {
    puVar1 = (uint *)((long)param_2 + uVar12);
    uVar3 = *puVar1;
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 4;
    if (*(long *)(param_3 + 0x40) == 0) {
      puVar8 = (ulong *)(*(ulong *)(param_3 + 8) & 0xfffffffffffffffc);
      if ((*(ulong *)(param_3 + 8) & 1) != 0) {
        puVar8 = (ulong *)*puVar8;
      }
      uVar7 = FUN_00661d68(puVar8);
      *(undefined8 *)(param_3 + 0x40) = uVar7;
      FUN_00646260(param_1,(long)puVar1 + (ulong)uVar3,uVar7);
      lVar9 = *param_1;
    }
    else {
      FUN_00646260(param_1,(long)puVar1 + (ulong)uVar3);
      lVar9 = *param_1;
    }
    if (lVar9 != 0) {
                    /* try { // try from 00646178 to 00646197 has its CatchHandler @ 006461e4 */
      FUN_00645c3c(0,param_1,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/flatbuffers/flatbuffers_utils.cc"
                   ,"LoadValueInfoOrtFormat",0x114);
      goto LAB_006461a0;
    }
  }
  *param_1 = 0;
LAB_006461a0:
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00646260  FUN_00646260 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00646260(long *param_1,int *param_2,long param_3)

{
  uint *puVar1;
  uint *puVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  ushort uVar8;
  int iVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  void *pvVar13;
  ulong *puVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  undefined4 uVar18;
  ushort *puVar19;
  ulong uVar20;
  long lVar21;
  uint *puVar22;
  undefined8 uVar23;
  void *pvVar24;
  undefined *local_130 [2];
  void *local_120;
  char *local_118;
  ulong local_110;
  ulong local_108;
  void *local_100;
  byte local_f0;
  void *local_e0;
  byte *local_d8;
  byte *local_d0;
  char *local_c0 [2];
  void *local_b0;
  char *local_a8;
  char *local_a0 [2];
  void *local_90;
  long local_70;
  
  lVar10 = tpidr_el0;
  local_70 = *(long *)(lVar10 + 0x28);
  puVar19 = (ushort *)((long)param_2 - (long)*param_2);
  lVar15 = -(long)*param_2;
  if ((4 < *puVar19) && (uVar20 = (ulong)puVar19[2], uVar20 != 0)) {
    puVar22 = (uint *)((long)param_2 + uVar20);
    puVar22 = (uint *)((long)puVar22 + (ulong)*puVar22);
    uVar5 = *puVar22;
    uVar20 = (ulong)uVar5;
    if (uVar5 < 0x17) {
      pvVar24 = (void *)((ulong)&local_110 | 1);
      local_110 = CONCAT71(local_110._1_7_,(char)(uVar5 << 1));
      if (uVar5 != 0) goto LAB_00646318;
    }
    else {
      uVar3 = (uVar20 & 0xfffffff8) + 8;
      if ((uVar20 | 7) != 0x17) {
        uVar3 = uVar20 | 7;
      }
      pvVar24 = (void *)FUN_00759c3c(uVar3 + 1);
      local_110 = uVar3 + 1 | 1;
      local_108 = uVar20;
      local_100 = pvVar24;
LAB_00646318:
      memcpy(pvVar24,puVar22 + 1,uVar20);
    }
    *(undefined1 *)((long)pvVar24 + uVar20) = 0;
    puVar14 = (ulong *)(*(ulong *)(param_3 + 8) & 0xfffffffffffffffc);
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 1;
    if ((*(ulong *)(param_3 + 8) & 1) != 0) {
      puVar14 = (ulong *)*puVar14;
    }
                    /* try { // try from 00646344 to 0064634f has its CatchHandler @ 0064722c */
    FUN_006638c0(param_3 + 0x18,&local_110,puVar14);
    if ((local_110 & 1) != 0) {
      free(local_100);
    }
    lVar15 = -(long)*param_2;
  }
  puVar19 = (ushort *)((long)param_2 + lVar15);
  uVar8 = *puVar19;
  if ((uVar8 < 7) || ((ulong)puVar19[3] == 0)) {
LAB_00646440:
    local_130[0] = &DAT_001cb290;
LAB_00646448:
    local_a0[0] = "Type:";
    local_c0[0] = " is not supported currently";
    FUN_004b6708(&local_110,local_a0,local_130,local_c0);
                    /* try { // try from 00646478 to 0064648b has its CatchHandler @ 00647230 */
    FUN_0063aa48(param_1,2,2,&local_110);
LAB_0064648c:
    if ((local_110 & 1) != 0) {
      free(local_100);
    }
  }
  else {
    bVar6 = *(byte *)((long)param_2 + (ulong)puVar19[3]);
    if (bVar6 == 3) {
      if ((uVar8 < 9) || ((ulong)puVar19[4] == 0)) {
        FUN_0048a3f4(&local_110,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/flatbuffers/flatbuffers_utils.cc"
                     ,0xfb,"LoadTypeInfoOrtFormat");
                    /* try { // try from 00646570 to 0064657f has its CatchHandler @ 00647208 */
        FUN_00475ff4(local_c0,&local_110,0);
        local_130[0] = &DAT_001bc0af;
        local_a8 = "Null map type info. Invalid ORT format model.";
        FUN_004a2c0c(local_a0,local_c0,local_130,&local_a8);
                    /* try { // try from 006465ac to 006465bf has its CatchHandler @ 006471d8 */
        FUN_0063aa48(param_1,2,1,local_a0);
        if (((ulong)local_a0[0] & 1) != 0) {
          free(local_90);
        }
        pbVar11 = local_d8;
        if (((ulong)local_c0[0] & 1) != 0) {
          free(local_b0);
          pbVar11 = local_d8;
        }
        local_d8 = pbVar11;
        if (pbVar11 != (byte *)0x0) {
          while (pbVar12 = local_d0, pbVar12 != pbVar11) {
            local_d0 = pbVar12 + -0x18;
            if ((*local_d0 & 1) != 0) {
              free(*(void **)(pbVar12 + -8));
            }
          }
LAB_00646770:
          free(local_d8);
        }
LAB_00646778:
        if ((local_f0 & 1) != 0) {
          free(local_e0);
        }
        goto LAB_0064648c;
      }
      puVar22 = (uint *)((long)param_2 + (ulong)puVar19[4]);
      piVar16 = (int *)((long)puVar22 + (ulong)*puVar22);
      if (*(int *)(param_3 + 0x28) == 5) {
        lVar15 = *(long *)(param_3 + 0x20);
      }
      else {
        FUN_0065de80(param_3);
        *(undefined4 *)(param_3 + 0x28) = 5;
        puVar14 = (ulong *)(*(ulong *)(param_3 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_3 + 8) & 1) != 0) {
          puVar14 = (ulong *)*puVar14;
        }
        lVar15 = FUN_00661b68(puVar14);
        *(long *)(param_3 + 0x20) = lVar15;
      }
      if ((*(ushort *)((long)piVar16 - (long)*piVar16) < 5) ||
         (uVar20 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[2], uVar20 == 0)) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined4 *)((long)piVar16 + uVar20);
      }
      uVar5 = *(uint *)(lVar15 + 0x10);
      *(undefined4 *)(lVar15 + 0x20) = uVar18;
      *(uint *)(lVar15 + 0x10) = uVar5 | 2;
      if ((*(ushort *)((long)piVar16 - (long)*piVar16) < 7) ||
         (uVar20 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[3], uVar20 == 0)) {
        FUN_0048a3f4(&local_110,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/flatbuffers/flatbuffers_utils.cc"
                     ,0xe8,"LoadMapTypeOrtFormat");
                    /* try { // try from 006469c4 to 006469d3 has its CatchHandler @ 006471cc */
        FUN_00475ff4(local_c0,&local_110,0);
        local_130[0] = &DAT_001bc0af;
        local_a8 = "Null value type info in fbs::MapType. Invalid ORT format model.";
        FUN_004a2c0c(local_a0,local_c0,local_130,&local_a8);
                    /* try { // try from 00646a00 to 00646a13 has its CatchHandler @ 006471c4 */
        FUN_0063aa48(param_1,2,1,local_a0);
        if (((ulong)local_a0[0] & 1) != 0) {
          free(local_90);
        }
        pbVar11 = local_d8;
        if (((ulong)local_c0[0] & 1) != 0) {
          free(local_b0);
          pbVar11 = local_d8;
        }
        local_d8 = pbVar11;
        if (pbVar11 != (byte *)0x0) {
          while (pbVar12 = local_d0, pbVar12 != pbVar11) {
            local_d0 = pbVar12 + -0x18;
            if ((*local_d0 & 1) != 0) {
              free(*(void **)(pbVar12 + -8));
            }
          }
          free(local_d8);
        }
        if ((local_f0 & 1) != 0) {
          free(local_e0);
        }
        if ((local_110 & 1) != 0) {
          free(local_100);
        }
      }
      else {
        puVar22 = (uint *)((long)piVar16 + uVar20);
        lVar21 = *(long *)(lVar15 + 0x18);
        uVar4 = *puVar22;
        *(uint *)(lVar15 + 0x10) = uVar5 | 3;
        if (lVar21 == 0) {
          puVar14 = (ulong *)(*(ulong *)(lVar15 + 8) & 0xfffffffffffffffc);
          if ((*(ulong *)(lVar15 + 8) & 1) != 0) {
            puVar14 = (ulong *)*puVar14;
          }
          lVar21 = FUN_00661d68(puVar14);
          *(long *)(lVar15 + 0x18) = lVar21;
        }
        FUN_00646260(param_1,(long)puVar22 + (ulong)uVar4,lVar21);
        if (*param_1 == 0) goto LAB_00647104;
                    /* try { // try from 00646984 to 006469a3 has its CatchHandler @ 00647190 */
        FUN_00645c3c(0,param_1,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/flatbuffers/flatbuffers_utils.cc"
                     ,"LoadMapTypeOrtFormat",0xe9);
      }
      if (*param_1 != 0) {
                    /* try { // try from 00646c74 to 00646c93 has its CatchHandler @ 00647198 */
        FUN_00645c3c(0,param_1,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/flatbuffers/flatbuffers_utils.cc"
                     ,"LoadTypeInfoOrtFormat",0xfc);
        goto LAB_0064649c;
      }
    }
    else if (bVar6 == 2) {
      if ((uVar8 < 9) || ((ulong)puVar19[4] == 0)) {
        FUN_0048a3f4(&local_110,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/flatbuffers/flatbuffers_utils.cc"
                     ,0xf7,"LoadTypeInfoOrtFormat");
                    /* try { // try from 006464e8 to 006464f7 has its CatchHandler @ 0064720c */
        FUN_00475ff4(local_c0,&local_110,0);
        local_130[0] = &DAT_001bc0af;
        local_a8 = "Null sequence type info. Invalid ORT format model.";
        FUN_004a2c0c(local_a0,local_c0,local_130,&local_a8);
                    /* try { // try from 00646524 to 00646537 has its CatchHandler @ 006471dc */
        FUN_0063aa48(param_1,2,1,local_a0);
        if (((ulong)local_a0[0] & 1) != 0) {
          free(local_90);
        }
        pbVar11 = local_d8;
        if (((ulong)local_c0[0] & 1) != 0) {
          free(local_b0);
          pbVar11 = local_d8;
        }
        local_d8 = pbVar11;
        if (pbVar11 != (byte *)0x0) {
          while (pbVar12 = local_d0, pbVar12 != pbVar11) {
            local_d0 = pbVar12 + -0x18;
            if ((*local_d0 & 1) != 0) {
              free(*(void **)(pbVar12 + -8));
            }
          }
          goto LAB_00646770;
        }
        goto LAB_00646778;
      }
      puVar22 = (uint *)((long)param_2 + (ulong)puVar19[4]);
      piVar16 = (int *)((long)puVar22 + (ulong)*puVar22);
      if (*(int *)(param_3 + 0x28) == 4) {
        lVar15 = *(long *)(param_3 + 0x20);
      }
      else {
        FUN_0065de80(param_3);
        *(undefined4 *)(param_3 + 0x28) = 4;
        puVar14 = (ulong *)(*(ulong *)(param_3 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_3 + 8) & 1) != 0) {
          puVar14 = (ulong *)*puVar14;
        }
        lVar15 = FUN_00661ae8(puVar14);
        *(long *)(param_3 + 0x20) = lVar15;
      }
      if ((*(ushort *)((long)piVar16 - (long)*piVar16) < 5) ||
         (uVar20 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[2], uVar20 == 0)) {
        FUN_0048a3f4(&local_110,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/flatbuffers/flatbuffers_utils.cc"
                     ,0xdf,"LoadSequenceTypeOrtFormat");
                    /* try { // try from 00646858 to 00646867 has its CatchHandler @ 006471d0 */
        FUN_00475ff4(local_c0,&local_110,0);
        local_130[0] = &DAT_001bc0af;
        local_a8 = "Null value type info in fbs::SequenceType. Invalid ORT format model.";
        FUN_004a2c0c(local_a0,local_c0,local_130,&local_a8);
                    /* try { // try from 00646894 to 006468a7 has its CatchHandler @ 006471c8 */
        FUN_0063aa48(param_1,2,1,local_a0);
        if (((ulong)local_a0[0] & 1) != 0) {
          free(local_90);
        }
        pbVar11 = local_d8;
        if (((ulong)local_c0[0] & 1) != 0) {
          free(local_b0);
          pbVar11 = local_d8;
        }
        local_d8 = pbVar11;
        if (pbVar11 != (byte *)0x0) {
          while (pbVar12 = local_d0, pbVar12 != pbVar11) {
            local_d0 = pbVar12 + -0x18;
            if ((*local_d0 & 1) != 0) {
              free(*(void **)(pbVar12 + -8));
            }
          }
          free(local_d8);
        }
        if ((local_f0 & 1) != 0) {
          free(local_e0);
        }
        if ((local_110 & 1) != 0) {
          free(local_100);
        }
      }
      else {
        puVar22 = (uint *)((long)piVar16 + uVar20);
        lVar21 = *(long *)(lVar15 + 0x18);
        uVar5 = *puVar22;
        *(uint *)(lVar15 + 0x10) = *(uint *)(lVar15 + 0x10) | 1;
        if (lVar21 == 0) {
          puVar14 = (ulong *)(*(ulong *)(lVar15 + 8) & 0xfffffffffffffffc);
          if ((*(ulong *)(lVar15 + 8) & 1) != 0) {
            puVar14 = (ulong *)*puVar14;
          }
          lVar21 = FUN_00661d68(puVar14);
          *(long *)(lVar15 + 0x18) = lVar21;
        }
        FUN_00646260(param_1,(long)puVar22 + (ulong)uVar5,lVar21);
        if (*param_1 == 0) goto LAB_00647104;
                    /* try { // try from 00646818 to 00646837 has its CatchHandler @ 00647194 */
        FUN_00645c3c(0,param_1,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/flatbuffers/flatbuffers_utils.cc"
                     ,"LoadSequenceTypeOrtFormat",0xe0);
      }
      if (*param_1 != 0) {
                    /* try { // try from 00646c1c to 00646c3b has its CatchHandler @ 0064719c */
        FUN_00645c3c(0,param_1,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/flatbuffers/flatbuffers_utils.cc"
                     ,"LoadTypeInfoOrtFormat",0xf8);
        goto LAB_0064649c;
      }
    }
    else {
      if (bVar6 != 1) {
        if (bVar6 < 4) goto LAB_00646440;
        local_130[0] = &DAT_001c717f;
        goto LAB_00646448;
      }
      if ((uVar8 < 9) || ((ulong)puVar19[4] == 0)) {
        FUN_0048a3f4(&local_110,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/flatbuffers/flatbuffers_utils.cc"
                     ,0xf3,"LoadTypeInfoOrtFormat");
                    /* try { // try from 006465f8 to 00646607 has its CatchHandler @ 00647204 */
        FUN_00475ff4(local_c0,&local_110,0);
        local_130[0] = &DAT_001bc0af;
        local_a8 = "Null tensor type info. Invalid ORT format model.";
        FUN_004a2c0c(local_a0,local_c0,local_130,&local_a8);
                    /* try { // try from 00646634 to 00646647 has its CatchHandler @ 006471d4 */
        FUN_0063aa48(param_1,2,1,local_a0);
        if (((ulong)local_a0[0] & 1) != 0) {
          free(local_90);
        }
        pbVar11 = local_d8;
        if (((ulong)local_c0[0] & 1) != 0) {
          free(local_b0);
          pbVar11 = local_d8;
        }
        local_d8 = pbVar11;
        if (pbVar11 != (byte *)0x0) {
          while (pbVar12 = local_d0, pbVar12 != pbVar11) {
            local_d0 = pbVar12 + -0x18;
            if ((*local_d0 & 1) != 0) {
              free(*(void **)(pbVar12 + -8));
            }
          }
          goto LAB_00646770;
        }
        goto LAB_00646778;
      }
      puVar22 = (uint *)((long)param_2 + (ulong)puVar19[4]);
      piVar16 = (int *)((long)puVar22 + (ulong)*puVar22);
      if (*(int *)(param_3 + 0x28) == 1) {
        lVar15 = *(long *)(param_3 + 0x20);
      }
      else {
        FUN_0065de80(param_3);
        *(undefined4 *)(param_3 + 0x28) = 1;
        puVar14 = (ulong *)(*(ulong *)(param_3 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_3 + 8) & 1) != 0) {
          puVar14 = (ulong *)*puVar14;
        }
        lVar15 = FUN_00661a68(puVar14);
        *(long *)(param_3 + 0x20) = lVar15;
      }
      if ((*(ushort *)((long)piVar16 - (long)*piVar16) < 5) ||
         (uVar20 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[2], uVar20 == 0)) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined4 *)((long)piVar16 + uVar20);
      }
      uVar5 = *(uint *)(lVar15 + 0x10);
      *(undefined4 *)(lVar15 + 0x20) = uVar18;
      *(uint *)(lVar15 + 0x10) = uVar5 | 2;
      if ((6 < *(ushort *)((long)piVar16 - (long)*piVar16)) &&
         (uVar20 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[3], uVar20 != 0)) {
        puVar22 = (uint *)((long)piVar16 + uVar20);
        lVar21 = *(long *)(lVar15 + 0x18);
        uVar4 = *puVar22;
        *(uint *)(lVar15 + 0x10) = uVar5 | 3;
        piVar16 = (int *)((long)puVar22 + (ulong)uVar4);
        if (lVar21 == 0) {
          puVar14 = (ulong *)(*(ulong *)(lVar15 + 8) & 0xfffffffffffffffc);
          if ((*(ulong *)(lVar15 + 8) & 1) != 0) {
            puVar14 = (ulong *)*puVar14;
          }
          lVar21 = FUN_006619e8(puVar14);
          *(long *)(lVar15 + 0x18) = lVar21;
        }
        if ((4 < *(ushort *)((long)piVar16 - (long)*piVar16)) &&
           (uVar20 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[2], uVar20 != 0)) {
          puVar22 = (uint *)((long)piVar16 + uVar20);
          puVar22 = (uint *)((long)puVar22 + (ulong)*puVar22);
          FUN_006758fc(lVar21 + 0x10,*puVar22);
          if (*puVar22 << 2 != 0) {
            puVar1 = (uint *)((long)puVar22 + (ulong)(*puVar22 << 2));
            pvVar24 = (void *)((ulong)&local_110 | 1);
            do {
              puVar22 = puVar22 + 1;
              uVar5 = *puVar22;
              FUN_0065ab70(local_a0,0,0);
              piVar16 = *(int **)(lVar21 + 0x20);
              if (piVar16 == (int *)0x0) {
LAB_00646cfc:
                    /* try { // try from 00646d00 to 00646d83 has its CatchHandler @ 0064721c */
                uVar23 = FUN_00661968(*(undefined8 *)(lVar21 + 0x10));
                lVar15 = FUN_00675990(lVar21 + 0x10,uVar23);
              }
              else {
                iVar9 = *(int *)(lVar21 + 0x18);
                if (*piVar16 <= iVar9) goto LAB_00646cfc;
                *(int *)(lVar21 + 0x18) = iVar9 + 1;
                lVar15 = *(long *)(piVar16 + (long)iVar9 * 2 + 2);
              }
              piVar16 = (int *)((long)puVar22 + (ulong)uVar5);
              puVar19 = (ushort *)((long)piVar16 - (long)*piVar16);
              lVar17 = -(long)*piVar16;
              uVar8 = *puVar19;
              if (uVar8 < 7) {
LAB_00646dec:
                if (4 < uVar8) goto LAB_00646df4;
              }
              else {
                uVar20 = (ulong)puVar19[3];
                if (uVar20 != 0) {
                  puVar2 = (uint *)((long)piVar16 + uVar20);
                  puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
                  uVar5 = *puVar2;
                  uVar20 = (ulong)uVar5;
                  if (uVar5 < 0x17) {
                    local_110 = CONCAT71(local_110._1_7_,(char)(uVar5 << 1));
                    pvVar13 = pvVar24;
                    if (uVar5 != 0) goto LAB_00646d94;
                  }
                  else {
                    uVar3 = (uVar20 & 0xfffffff8) + 8;
                    if ((uVar20 | 7) != 0x17) {
                      uVar3 = uVar20 | 7;
                    }
                    pvVar13 = (void *)FUN_00759c3c(uVar3 + 1);
                    local_110 = uVar3 + 1 | 1;
                    local_108 = uVar20;
                    local_100 = pvVar13;
LAB_00646d94:
                    memcpy(pvVar13,puVar2 + 1,uVar20);
                  }
                  *(undefined1 *)((long)pvVar13 + uVar20) = 0;
                  puVar14 = (ulong *)(*(ulong *)(lVar15 + 8) & 0xfffffffffffffffc);
                  *(uint *)(lVar15 + 0x10) = *(uint *)(lVar15 + 0x10) | 1;
                  if ((*(ulong *)(lVar15 + 8) & 1) != 0) {
                    puVar14 = (ulong *)*puVar14;
                  }
                    /* try { // try from 00646dc0 to 00646dcb has its CatchHandler @ 006471ac */
                  FUN_006638c0(lVar15 + 0x18,&local_110,puVar14);
                  if ((local_110 & 1) != 0) {
                    free(local_100);
                  }
                  lVar17 = -(long)*piVar16;
                  uVar8 = *(ushort *)((long)piVar16 - (long)*piVar16);
                  goto LAB_00646dec;
                }
LAB_00646df4:
                uVar20 = (ulong)*(ushort *)((long)piVar16 + lVar17 + 4);
                if (uVar20 != 0) {
                  puVar2 = (uint *)((long)piVar16 + uVar20);
                  piVar16 = (int *)((long)puVar2 + (ulong)*puVar2);
                  puVar19 = (ushort *)((long)piVar16 - (long)*piVar16);
                  uVar8 = *puVar19;
                  if ((4 < uVar8) && ((ulong)puVar19[2] != 0)) {
                    cVar7 = *(char *)((long)piVar16 + (ulong)puVar19[2]);
                    if (cVar7 == '\x02') {
                      if ((uVar8 < 9) || ((ulong)puVar19[4] == 0)) {
                        FUN_0048a3f4(&local_110,
                                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/flatbuffers/flatbuffers_utils.cc"
                                     ,0xb8,"LoadTensorDimensionOrtFormat");
                    /* try { // try from 00646ec8 to 00646ed7 has its CatchHandler @ 00647180 */
                        FUN_00475ff4(local_130,&local_110,0);
                        local_a8 = " ";
                        local_118 = "dim_param value with no name. Invalid ORT format model.";
                        FUN_004a2c0c(local_c0,local_130,&local_a8,&local_118);
                    /* try { // try from 00646f04 to 00646f17 has its CatchHandler @ 00647158 */
                        FUN_0063aa48(param_1,2,1,local_c0);
                        if (((ulong)local_c0[0] & 1) != 0) {
                          free(local_b0);
                        }
                        pbVar11 = local_d8;
                        if (((ulong)local_130[0] & 1) != 0) {
                          free(local_120);
                          pbVar11 = local_d8;
                        }
                        local_d8 = pbVar11;
                        if (pbVar11 != (byte *)0x0) {
                          while (pbVar12 = local_d0, pbVar12 != pbVar11) {
                            local_d0 = pbVar12 + -0x18;
                            if ((*local_d0 & 1) != 0) {
                              free(*(void **)(pbVar12 + -8));
                            }
                          }
                          local_d0 = pbVar11;
                          free(local_d8);
                        }
                        if ((local_f0 & 1) == 0) {
                          if ((local_110 & 1) == 0) goto LAB_00646fa8;
LAB_00646fc4:
                          free(local_100);
                          lVar15 = *param_1;
                        }
                        else {
                          free(local_e0);
                          if ((local_110 & 1) != 0) goto LAB_00646fc4;
LAB_00646fa8:
                          lVar15 = *param_1;
                        }
                        if (lVar15 != 0) {
                    /* try { // try from 00647088 to 006470a7 has its CatchHandler @ 00647144 */
                          FUN_00645c3c(0,param_1,
                                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/flatbuffers/flatbuffers_utils.cc"
                                       ,"LoadTensorShapeOrtFormat",0xcc);
                          FUN_0065aba0(local_a0);
                    /* try { // try from 006470b8 to 006470d7 has its CatchHandler @ 00647140 */
                          if ((*param_1 != 0) &&
                             (FUN_00645c3c(0,param_1,
                                           "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/flatbuffers/flatbuffers_utils.cc"
                                           ,"LoadTensorTypeAndShapeOrtFormat",0xd7), *param_1 != 0))
                          {
                    /* try { // try from 006470e0 to 006470ff has its CatchHandler @ 0064713c */
                            FUN_00645c3c(0,param_1,
                                         "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/flatbuffers/flatbuffers_utils.cc"
                                         ,"LoadTypeInfoOrtFormat",0xf4);
                            goto LAB_0064649c;
                          }
                          break;
                        }
                      }
                      else {
                        puVar2 = (uint *)((long)piVar16 + (ulong)puVar19[4]);
                        puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
                        uVar5 = *puVar2;
                        uVar20 = (ulong)uVar5;
                        if (uVar5 < 0x17) {
                          local_110 = CONCAT71(local_110._1_7_,(char)(uVar5 << 1));
                          pvVar13 = pvVar24;
                          if (uVar5 != 0) goto LAB_00647008;
                        }
                        else {
                          uVar3 = (uVar20 & 0xfffffff8) + 8;
                          if ((uVar20 | 7) != 0x17) {
                            uVar3 = uVar20 | 7;
                          }
                    /* try { // try from 00646ff0 to 00646ff7 has its CatchHandler @ 0064721c */
                          pvVar13 = (void *)FUN_00759c3c(uVar3 + 1);
                          local_110 = uVar3 + 1 | 1;
                          local_108 = uVar20;
                          local_100 = pvVar13;
LAB_00647008:
                          memcpy(pvVar13,puVar2 + 1,uVar20);
                        }
                        *(undefined1 *)((long)pvVar13 + uVar20) = 0;
                        if (*(int *)(lVar15 + 0x28) != 2) {
                    /* try { // try from 00647028 to 0064705b has its CatchHandler @ 00647154 */
                          FUN_0065ac60(lVar15);
                          *(undefined4 *)(lVar15 + 0x28) = 2;
                          *(undefined1 **)(lVar15 + 0x20) = &DAT_007aea80;
                        }
                        puVar14 = (ulong *)(*(ulong *)(lVar15 + 8) & 0xfffffffffffffffc);
                        if ((*(ulong *)(lVar15 + 8) & 1) != 0) {
                          puVar14 = (ulong *)*puVar14;
                        }
                        FUN_006638c0(lVar15 + 0x20,&local_110,puVar14);
                        if ((local_110 & 1) != 0) {
                          free(local_100);
                        }
                      }
                    }
                    else if (cVar7 == '\x01') {
                      if ((uVar8 < 7) || ((ulong)puVar19[3] == 0)) {
                        uVar23 = 0;
                      }
                      else {
                        uVar23 = *(undefined8 *)((long)piVar16 + (ulong)puVar19[3]);
                      }
                      if (*(int *)(lVar15 + 0x28) != 1) {
                    /* try { // try from 00646ea0 to 00646ec7 has its CatchHandler @ 0064721c */
                        FUN_0065ac60(lVar15);
                        *(undefined4 *)(lVar15 + 0x28) = 1;
                      }
                      *(undefined8 *)(lVar15 + 0x20) = uVar23;
                    }
                  }
                }
              }
              *param_1 = 0;
              FUN_0065aba0(local_a0);
            } while (puVar22 != puVar1);
          }
        }
      }
    }
LAB_00647104:
    *param_1 = 0;
  }
LAB_0064649c:
  if (*(long *)(lVar10 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00647260  FUN_00647260 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00647260(undefined8 *param_1,int *param_2,long *param_3)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 *__ptr;
  byte *pbVar5;
  byte *pbVar6;
  undefined *puVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  undefined4 uVar14;
  void *pvVar15;
  ulong uVar16;
  undefined2 uVar17;
  float fVar18;
  undefined8 uVar19;
  ulong local_100;
  ulong local_f8;
  int *local_f0;
  byte local_e0;
  void *local_d0;
  byte *local_c8;
  byte *local_c0;
  ulong **local_b0 [2];
  void *local_a0;
  ulong *local_98 [2];
  void *local_88;
  char *local_80;
  undefined *puStack_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  if (param_2 != (int *)0x0) {
    if (param_3[3] != 0) {
      __ptr = (undefined8 *)param_3[2];
      while (__ptr != (undefined8 *)0x0) {
        pvVar15 = (void *)*__ptr;
        if ((*(byte *)(__ptr + 2) & 1) != 0) {
          free((void *)__ptr[4]);
        }
        free(__ptr);
        __ptr = (undefined8 *)pvVar15;
      }
      lVar10 = param_3[1];
      param_3[2] = 0;
      if (lVar10 != 0) {
        lVar13 = 0;
        do {
          *(undefined8 *)(*param_3 + lVar13 * 8) = 0;
          lVar13 = lVar13 + 1;
        } while (lVar10 != lVar13);
      }
      param_3[3] = 0;
    }
    fVar18 = (float)NEON_ucvtf(*param_2);
    uVar9 = (ulong)(fVar18 / *(float *)(param_3 + 4));
    if (uVar9 - 1 == 0) {
      uVar9 = 2;
    }
    else if ((uVar9 & uVar9 - 1) != 0) {
      uVar9 = FUN_00711ce0(uVar9);
    }
    uVar16 = param_3[1];
    if (uVar16 < uVar9) {
LAB_006473c8:
      FUN_005e7828(param_3);
    }
    else if (uVar9 < uVar16) {
      uVar12 = (ulong)((float)(ulong)param_3[3] / *(float *)(param_3 + 4));
      if (uVar16 < 3) {
LAB_00647494:
        uVar12 = FUN_00711ce0();
        if (uVar9 <= uVar12) {
          uVar9 = uVar12;
        }
      }
      else {
        uVar19 = NEON_cnt(uVar16,1);
        uVar17 = NEON_uaddlv(uVar19,1);
        if (1 < (CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar17) & 0xffffffff)) goto LAB_00647494;
        if (1 < uVar12) {
          uVar12 = 1L << (-LZCOUNT(uVar12 - 1) & 0x3fU);
        }
        if (uVar9 <= uVar12) {
          uVar9 = uVar12;
        }
      }
      if (uVar9 < uVar16) goto LAB_006473c8;
    }
    puVar7 = PTR_DAT_007a10e8;
    iVar2 = *param_2;
    if (iVar2 << 2 != 0) {
      uVar9 = 0;
      piVar11 = (int *)((ulong)&local_100 | 1);
      do {
        uVar16 = (ulong)*(uint *)((long)param_2 + uVar9 + 4);
        lVar10 = uVar16 + uVar9;
        lVar13 = (uVar16 - (long)*(int *)((long)param_2 + lVar10 + 4)) + uVar9;
        if ((*(ushort *)((long)param_2 + lVar13 + 4) < 5) ||
           (uVar12 = (ulong)*(ushort *)((long)param_2 + lVar13 + 8), uVar12 == 0)) {
          FUN_0048a3f4(&local_100,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/flatbuffers/flatbuffers_utils.cc"
                       ,0x124,"LoadOpsetImportOrtFormat");
                    /* try { // try from 00647720 to 0064772f has its CatchHandler @ 00647860 */
          FUN_00475ff4(local_b0,&local_100,0);
          local_80 = "opset import domain is null. Invalid ORT format model.";
          puStack_78 = &DAT_001bc0af;
          FUN_004a2c0c(local_98,local_b0,&puStack_78,&local_80);
                    /* try { // try from 00647758 to 0064776b has its CatchHandler @ 0064785c */
          FUN_0063aa48(param_1,2,1,local_98);
          if (((ulong)local_98[0] & 1) != 0) {
            free(local_88);
          }
          pbVar5 = local_c8;
          if (((ulong)local_b0[0] & 1) != 0) {
            free(local_a0);
            pbVar5 = local_c8;
          }
          local_c8 = pbVar5;
          if (pbVar5 != (byte *)0x0) goto joined_r0x006477d4;
          goto joined_r0x00647810;
        }
        lVar13 = uVar16 + uVar12;
        lVar13 = (ulong)*(uint *)((long)param_2 + lVar13 + uVar9 + 4) + uVar9 + lVar13;
        uVar3 = *(uint *)((long)param_2 + lVar13 + 4);
        uVar12 = (ulong)uVar3;
        if (uVar3 < 0x17) {
          local_100 = CONCAT71(local_100._1_7_,(char)(uVar3 << 1));
          piVar8 = piVar11;
          if (uVar3 != 0) goto LAB_00647598;
        }
        else {
          uVar1 = (uVar12 & 0xfffffff8) + 8;
          if ((uVar12 | 7) != 0x17) {
            uVar1 = uVar12 | 7;
          }
          piVar8 = (int *)FUN_00759c3c(uVar1 + 1);
          local_100 = uVar1 + 1 | 1;
          local_f8 = uVar12;
          local_f0 = piVar8;
LAB_00647598:
          memcpy(piVar8,(void *)((long)param_2 + lVar13 + 8),uVar12);
        }
        *(undefined1 *)((long)piVar8 + uVar12) = 0;
        uVar12 = local_100 >> 1 & 0x7f;
        if ((local_100 & 1) != 0) {
          uVar12 = local_f8;
        }
        if (uVar12 == 7) {
          piVar8 = piVar11;
          if ((local_100 & 1) != 0) {
            piVar8 = local_f0;
          }
          if (*piVar8 != 0x6f2e6961 || *(int *)((long)piVar8 + 3) != 0x786e6e6f) goto LAB_006475fc;
          lVar10 = (uVar16 - (long)*(int *)((long)param_2 + lVar10 + 4)) + uVar9;
          if ((*(ushort *)((long)param_2 + lVar10 + 4) < 7) ||
             (uVar12 = (ulong)*(ushort *)((long)param_2 + lVar10 + 10), uVar12 == 0)) {
            uVar14 = 0;
          }
          else {
            uVar14 = (undefined4)*(undefined8 *)((long)param_2 + uVar16 + uVar12 + uVar9 + 4);
          }
          local_b0[0] = local_98;
          local_98[0] = (ulong *)((ulong)local_98[0] & 0xffffffffffff0000);
                    /* try { // try from 006476b8 to 006476cf has its CatchHandler @ 006478b8 */
          lVar10 = FUN_00647a00(param_3,local_98,puVar7,local_b0,&puStack_78);
          *(undefined4 *)(lVar10 + 0x28) = uVar14;
          if (((ulong)local_98[0] & 1) != 0) {
            free(local_88);
          }
        }
        else {
LAB_006475fc:
          lVar10 = (uVar16 - (long)*(int *)((long)param_2 + lVar10 + 4)) + uVar9;
          if ((*(ushort *)((long)param_2 + lVar10 + 4) < 7) ||
             (uVar12 = (ulong)*(ushort *)((long)param_2 + lVar10 + 10), uVar12 == 0)) {
            uVar14 = 0;
          }
          else {
            uVar14 = (undefined4)*(undefined8 *)((long)param_2 + uVar16 + uVar12 + uVar9 + 4);
          }
          local_98[0] = &local_100;
                    /* try { // try from 00647640 to 00647657 has its CatchHandler @ 006478fc */
          lVar10 = FUN_00647e68(param_3,&local_100,puVar7,local_98,local_b0);
          *(undefined4 *)(lVar10 + 0x28) = uVar14;
        }
        if ((local_100 & 1) != 0) {
          free(local_f0);
        }
        uVar9 = uVar9 + 4;
      } while ((uint)(iVar2 << 2) != uVar9);
    }
    *param_1 = 0;
    if (*(long *)(lVar4 + 0x28) == local_70) {
      return;
    }
    goto LAB_00647924;
  }
  FUN_0048a3f4(&local_100,
               "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/flatbuffers/flatbuffers_utils.cc"
               ,0x11c,"LoadOpsetImportOrtFormat");
                    /* try { // try from 0064733c to 0064734b has its CatchHandler @ 00647890 */
  FUN_00475ff4(local_b0,&local_100,0);
  local_80 = "Model must have opset imports. Invalid ORT format model.";
  puStack_78 = &DAT_001bc0af;
  FUN_004a2c0c(local_98,local_b0,&puStack_78,&local_80);
                    /* try { // try from 00647374 to 00647387 has its CatchHandler @ 00647864 */
  FUN_0063aa48(param_1,2,1,local_98);
  if (((ulong)local_98[0] & 1) != 0) {
    free(local_88);
  }
  pbVar5 = local_c8;
  if (((ulong)local_b0[0] & 1) != 0) {
    free(local_a0);
    pbVar5 = local_c8;
  }
  local_c8 = pbVar5;
  if (pbVar5 != (byte *)0x0) {
    while (pbVar6 = local_c0, pbVar6 != pbVar5) {
      local_c0 = pbVar6 + -0x18;
      if ((*local_c0 & 1) != 0) {
        free(*(void **)(pbVar6 + -8));
      }
    }
    goto LAB_00647804;
  }
  goto joined_r0x00647810;
joined_r0x006477d4:
  while (pbVar6 = local_c0, pbVar6 != pbVar5) {
    local_c0 = pbVar6 + -0x18;
    if ((*local_c0 & 1) != 0) {
      free(*(void **)(pbVar6 + -8));
    }
  }
LAB_00647804:
  free(local_c8);
joined_r0x00647810:
  if ((local_e0 & 1) != 0) {
    free(local_d0);
  }
  if ((local_100 & 1) == 0) {
    if (*(long *)(lVar4 + 0x28) == local_70) {
      return;
    }
  }
  else {
    free(local_f0);
    if (*(long *)(lVar4 + 0x28) == local_70) {
      return;
    }
  }
LAB_00647924:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00647928  FUN_00647928 =====

bool FUN_00647928(byte *param_1)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  byte *pbVar4;
  
  bVar3 = *param_1;
  uVar2 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
  }
  if (4 < uVar2) {
    pbVar4 = *(byte **)(param_1 + 0x10);
    if ((bVar3 & 1) == 0) {
      pbVar4 = param_1 + 1;
    }
    if (pbVar4[uVar2 - 4] == 0x2e) {
      bVar3 = pbVar4[uVar2 - 3];
      uVar1 = (uint)bVar3;
      if (0xffffffe5 < bVar3 - 0x5b) {
        uVar1 = bVar3 | 0x20;
      }
      if (uVar1 == 0x6f) {
        bVar3 = pbVar4[uVar2 - 2];
        uVar1 = (uint)bVar3;
        if (0xffffffe5 < bVar3 - 0x5b) {
          uVar1 = bVar3 | 0x20;
        }
        if (uVar1 == 0x72) {
          bVar3 = pbVar4[uVar2 - 1];
          uVar1 = (uint)bVar3;
          if (0xffffffe5 < bVar3 - 0x5b) {
            uVar1 = bVar3 | 0x20;
          }
          return uVar1 == 0x74;
        }
      }
    }
  }
  return false;
}


// ===== 006479c4  FUN_006479c4 =====

bool FUN_006479c4(long param_1,int param_2)

{
  int iVar1;
  
  if (8 < param_2) {
    iVar1 = strncmp((char *)(param_1 + 4),"ORTM",4);
    return iVar1 == 0;
  }
  return false;
}


// ===== 00647a00  FUN_00647a00 =====

long * FUN_00647a00(long *param_1,byte *param_2,undefined8 param_3,undefined8 *param_4)

{
  size_t sVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long *unaff_x26;
  undefined2 uVar18;
  undefined8 uVar19;
  float fVar20;
  long *local_80;
  long *plStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar15 = *(ulong *)(param_2 + 8);
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
    uVar15 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 00647a50 to 00647a57 has its CatchHandler @ 00647e64 */
  plVar8 = (long *)FUN_0034bfb4(&local_80,pbVar3,uVar15);
  plVar17 = (long *)param_1[1];
  if (plVar17 != (long *)0x0) {
    uVar19 = NEON_cnt(plVar17,1);
    uVar18 = NEON_uaddlv(uVar19,1);
    uVar15 = CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) & 0xffffffff;
    if (uVar15 < 2) {
      unaff_x26 = (long *)((long)plVar17 - 1U & (ulong)plVar8);
    }
    else {
      unaff_x26 = plVar8;
      if (plVar17 <= plVar8) {
        uVar5 = 0;
        if (plVar17 != (long *)0x0) {
          uVar5 = (ulong)plVar8 / (ulong)plVar17;
        }
        unaff_x26 = (long *)((long)plVar8 - uVar5 * (long)plVar17);
      }
    }
    puVar14 = *(undefined8 **)(*param_1 + (long)unaff_x26 * 8);
    if ((puVar14 != (undefined8 *)0x0) && (plVar16 = (long *)*puVar14, plVar16 != (long *)0x0)) {
      sVar1 = (ulong)(*param_2 >> 1);
      pbVar3 = param_2 + 1;
      if ((*param_2 & 1) != 0) {
        sVar1 = *(size_t *)(param_2 + 8);
        pbVar3 = *(byte **)(param_2 + 0x10);
      }
      plVar10 = plVar8;
      if (uVar15 < 2) {
        do {
          if ((long *)plVar16[1] == plVar8) {
            bVar4 = *(byte *)(plVar16 + 2);
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar16[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar4 & 1) == 0) {
                if (bVar4 < 2) goto LAB_00647bf4;
                uVar15 = 0;
                while (*(byte *)((long)plVar16 + uVar15 + 0x11) == pbVar3[uVar15]) {
                  uVar15 = uVar15 + 1;
                  if (bVar4 >> 1 == uVar15) goto LAB_00647bf4;
                }
              }
              else {
                uVar7 = memcmp((void *)plVar16[4],pbVar3,plVar16[3]);
                plVar10 = (long *)(ulong)uVar7;
                if (uVar7 == 0) goto LAB_00647bf4;
              }
            }
          }
          else if ((long *)((ulong)plVar16[1] & (long)plVar17 - 1U) != unaff_x26) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          plVar9 = (long *)plVar16[1];
          if (plVar9 == plVar8) {
            bVar4 = *(byte *)(plVar16 + 2);
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar16[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar4 & 1) == 0) {
                if (bVar4 < 2) goto LAB_00647bf4;
                uVar15 = 0;
                while (*(byte *)((long)plVar16 + uVar15 + 0x11) == pbVar3[uVar15]) {
                  uVar15 = uVar15 + 1;
                  if (bVar4 >> 1 == uVar15) goto LAB_00647bf4;
                }
              }
              else {
                uVar7 = memcmp((void *)plVar16[4],pbVar3,plVar16[3]);
                plVar10 = (long *)(ulong)uVar7;
                if (uVar7 == 0) goto LAB_00647bf4;
              }
            }
          }
          else {
            if (plVar17 <= plVar9) {
              uVar15 = 0;
              if (plVar17 != (long *)0x0) {
                uVar15 = (ulong)plVar9 / (ulong)plVar17;
              }
              plVar9 = (long *)((long)plVar9 - uVar15 * (long)plVar17);
            }
            if (plVar9 != unaff_x26) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
  plVar9 = param_1 + 2;
  plVar16 = (long *)FUN_00759c3c(0x30);
  plVar10 = (long *)*param_4;
  *plVar16 = 0;
  plVar16[1] = (long)plVar8;
  lVar13 = plVar10[1];
  lVar11 = *plVar10;
  plVar16[4] = plVar10[2];
  plVar16[3] = lVar13;
  plVar16[2] = lVar11;
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = 0;
  lVar11 = param_1[3];
  fVar20 = *(float *)(param_1 + 4);
  *(undefined4 *)(plVar16 + 5) = 0;
  local_70 = 1;
  plVar10 = plVar16;
  local_80 = plVar16;
  plStack_78 = plVar9;
  if ((plVar17 == (long *)0x0) || (fVar20 * (float)plVar17 < (float)(lVar11 + 1))) {
    if (plVar17 < (long *)0x3) {
      uVar15 = 1;
    }
    else {
      uVar15 = (ulong)(((ulong)plVar17 & (long)plVar17 - 1U) != 0);
    }
    plVar17 = (long *)(uVar15 | (long)plVar17 << 1);
    plVar12 = (long *)(long)((float)(lVar11 + 1) / fVar20);
    if (plVar17 <= plVar12) {
      plVar17 = plVar12;
    }
    if ((long)plVar17 - 1U == 0) {
      plVar17 = (long *)0x2;
    }
    else if (((ulong)plVar17 & (long)plVar17 - 1U) != 0) {
                    /* try { // try from 00647cc4 to 00647d47 has its CatchHandler @ 00647e3c */
      plVar10 = (long *)FUN_00711ce0(plVar17);
      plVar17 = plVar10;
    }
    plVar12 = (long *)param_1[1];
    if (plVar12 < plVar17) {
LAB_00647cdc:
      plVar10 = (long *)FUN_005e7828(param_1,plVar17);
    }
    else if (plVar17 < plVar12) {
      plVar10 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (plVar12 < (long *)0x3) {
LAB_00647d44:
        plVar10 = (long *)FUN_00711ce0();
      }
      else {
        uVar19 = NEON_cnt(plVar12,1);
        uVar18 = NEON_uaddlv(uVar19,1);
        if (1 < (CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) & 0xffffffff)) goto LAB_00647d44;
        if ((long *)0x1 < plVar10) {
          plVar10 = (long *)(1L << (-LZCOUNT((long)plVar10 + -1) & 0x3fU));
        }
      }
      if (plVar17 <= plVar10) {
        plVar17 = plVar10;
      }
      if (plVar17 < plVar12) goto LAB_00647cdc;
    }
    plVar17 = (long *)param_1[1];
    if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar17 - 1U & (ulong)plVar8);
      lVar11 = *param_1;
      plVar12 = *(long **)(lVar11 + (long)unaff_x26 * 8);
      goto joined_r0x00647dbc;
    }
    if (plVar8 < plVar17) {
      lVar11 = *param_1;
      plVar12 = *(long **)(lVar11 + (long)plVar8 * 8);
      unaff_x26 = plVar8;
      goto joined_r0x00647dbc;
    }
    uVar15 = 0;
    if (plVar17 != (long *)0x0) {
      uVar15 = (ulong)plVar8 / (ulong)plVar17;
    }
    unaff_x26 = (long *)((long)plVar8 - uVar15 * (long)plVar17);
    lVar11 = *param_1;
    plVar12 = *(long **)(lVar11 + (long)unaff_x26 * 8);
    if (plVar12 == (long *)0x0) goto LAB_00647d78;
LAB_00647c6c:
    *plVar16 = *plVar12;
LAB_00647df4:
    *plVar12 = (long)plVar16;
  }
  else {
    lVar11 = *param_1;
    plVar12 = *(long **)(lVar11 + (long)unaff_x26 * 8);
joined_r0x00647dbc:
    if (plVar12 != (long *)0x0) goto LAB_00647c6c;
LAB_00647d78:
    lVar13 = *plVar9;
    *plVar9 = (long)plVar16;
    *plVar16 = lVar13;
    *(long **)(lVar11 + (long)unaff_x26 * 8) = plVar9;
    if (*plVar16 != 0) {
      plVar8 = *(long **)(*plVar16 + 8);
      if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar17 - 1U);
      }
      else if (plVar17 <= plVar8) {
        uVar15 = 0;
        if (plVar17 != (long *)0x0) {
          uVar15 = (ulong)plVar8 / (ulong)plVar17;
        }
        plVar8 = (long *)((long)plVar8 - uVar15 * (long)plVar17);
      }
      plVar12 = (long *)(*param_1 + (long)plVar8 * 8);
      goto LAB_00647df4;
    }
  }
  uVar19 = 1;
  param_1[3] = param_1[3] + 1;
LAB_00647e08:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return plVar16;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar10,uVar19);
LAB_00647bf4:
  uVar19 = 0;
  goto LAB_00647e08;
}


// ===== 00647e68  FUN_00647e68 =====

void FUN_00647e68(long *param_1,byte *param_2,undefined8 param_3,undefined8 *param_4)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  byte *pbVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x25;
  undefined2 uVar15;
  undefined8 uVar16;
  long lVar17;
  float fVar18;
  long *local_80;
  long *plStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar14 = *(ulong *)(param_2 + 8);
  pbVar10 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar10 = param_2 + 1;
    uVar14 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 00647eb8 to 00647ebf has its CatchHandler @ 00648324 */
  uVar6 = FUN_0034bfb4(&local_80,pbVar10,uVar14);
  uVar14 = param_1[1];
  if (uVar14 != 0) {
    uVar16 = NEON_cnt(uVar14,1);
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar13 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar13 < 2) {
      unaff_x25 = uVar14 - 1 & uVar6;
    }
    else {
      unaff_x25 = uVar6;
      if (uVar14 <= uVar6) {
        uVar9 = 0;
        if (uVar14 != 0) {
          uVar9 = uVar6 / uVar14;
        }
        unaff_x25 = uVar6 - uVar9 * uVar14;
      }
    }
    puVar12 = *(undefined8 **)(*param_1 + unaff_x25 * 8);
    if ((puVar12 != (undefined8 *)0x0) && (plVar7 = (long *)*puVar12, plVar7 != (long *)0x0)) {
      sVar1 = (ulong)(*param_2 >> 1);
      pbVar10 = param_2 + 1;
      if ((*param_2 & 1) != 0) {
        sVar1 = *(size_t *)(param_2 + 8);
        pbVar10 = *(byte **)(param_2 + 0x10);
      }
      if (uVar13 < 2) {
        do {
          if (plVar7[1] == uVar6) {
            bVar3 = *(byte *)(plVar7 + 2);
            sVar2 = (ulong)(bVar3 >> 1);
            if ((bVar3 & 1) != 0) {
              sVar2 = plVar7[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar3 & 1) == 0) {
                if (bVar3 < 2) goto LAB_0064807c;
                uVar13 = 0;
                while (*(byte *)((long)plVar7 + uVar13 + 0x11) == pbVar10[uVar13]) {
                  uVar13 = uVar13 + 1;
                  if (bVar3 >> 1 == uVar13) goto LAB_0064807c;
                }
              }
              else {
                iVar5 = memcmp((void *)plVar7[4],pbVar10,plVar7[3]);
                if (iVar5 == 0) goto LAB_0064807c;
              }
            }
          }
          else if ((plVar7[1] & uVar14 - 1) != unaff_x25) break;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar7[1];
          if (uVar13 == uVar6) {
            bVar3 = *(byte *)(plVar7 + 2);
            sVar2 = (ulong)(bVar3 >> 1);
            if ((bVar3 & 1) != 0) {
              sVar2 = plVar7[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar3 & 1) == 0) {
                if (bVar3 < 2) goto LAB_0064807c;
                uVar13 = 0;
                while (*(byte *)((long)plVar7 + uVar13 + 0x11) == pbVar10[uVar13]) {
                  uVar13 = uVar13 + 1;
                  if (bVar3 >> 1 == uVar13) goto LAB_0064807c;
                }
              }
              else {
                iVar5 = memcmp((void *)plVar7[4],pbVar10,plVar7[3]);
                if (iVar5 == 0) goto LAB_0064807c;
              }
            }
          }
          else {
            if (uVar14 <= uVar13) {
              uVar9 = 0;
              if (uVar14 != 0) {
                uVar9 = uVar13 / uVar14;
              }
              uVar13 = uVar13 - uVar9 * uVar14;
            }
            if (uVar13 != unaff_x25) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  plVar7 = param_1 + 2;
  plVar8 = (long *)FUN_00759c3c(0x30);
  pbVar10 = (byte *)*param_4;
  local_70 = 0;
  *plVar8 = 0;
  plVar8[1] = uVar6;
  local_80 = plVar8;
  plStack_78 = plVar7;
  if ((*pbVar10 & 1) == 0) {
    lVar17 = *(long *)(pbVar10 + 8);
    lVar11 = *(long *)pbVar10;
    plVar8[4] = *(long *)(pbVar10 + 0x10);
    plVar8[3] = lVar17;
    plVar8[2] = lVar11;
  }
  else {
                    /* try { // try from 006480c4 to 006480cb has its CatchHandler @ 006482fc */
    FUN_002fb36c(plVar8 + 2,*(undefined8 *)(pbVar10 + 0x10),*(undefined8 *)(pbVar10 + 8));
  }
  lVar11 = param_1[3];
  fVar18 = *(float *)(param_1 + 4);
  *(undefined4 *)(plVar8 + 5) = 0;
  local_70 = 1;
  if ((uVar14 == 0) || (fVar18 * (float)uVar14 < (float)(lVar11 + 1))) {
    if (uVar14 < 3) {
      uVar13 = 1;
    }
    else {
      uVar13 = (ulong)((uVar14 & uVar14 - 1) != 0);
    }
    uVar13 = uVar13 | uVar14 << 1;
    uVar14 = (ulong)((float)(lVar11 + 1) / fVar18);
    if (uVar13 <= uVar14) {
      uVar13 = uVar14;
    }
    if (uVar13 - 1 == 0) {
      uVar13 = 2;
    }
    else if ((uVar13 & uVar13 - 1) != 0) {
                    /* try { // try from 0064816c to 006481ef has its CatchHandler @ 006482f8 */
      uVar13 = FUN_00711ce0(uVar13);
    }
    uVar14 = param_1[1];
    if (uVar14 < uVar13) {
LAB_00648184:
      FUN_005e7828(param_1,uVar13);
    }
    else if (uVar13 < uVar14) {
      uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar14 < 3) {
LAB_006481ec:
        uVar9 = FUN_00711ce0();
      }
      else {
        uVar16 = NEON_cnt(uVar14,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        if (1 < (CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff)) goto LAB_006481ec;
        if (1 < uVar9) {
          uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
        }
      }
      if (uVar13 <= uVar9) {
        uVar13 = uVar9;
      }
      if (uVar13 < uVar14) goto LAB_00648184;
    }
    uVar14 = param_1[1];
    if ((uVar14 & uVar14 - 1) == 0) {
      unaff_x25 = uVar14 - 1 & uVar6;
      plVar8 = *(long **)(*param_1 + unaff_x25 * 8);
      goto joined_r0x00648278;
    }
    if (uVar6 < uVar14) {
      plVar8 = *(long **)(*param_1 + uVar6 * 8);
      unaff_x25 = uVar6;
      goto joined_r0x00648278;
    }
    uVar13 = 0;
    if (uVar14 != 0) {
      uVar13 = uVar6 / uVar14;
    }
    unaff_x25 = uVar6 - uVar13 * uVar14;
    plVar8 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar8 == (long *)0x0) goto LAB_00648224;
LAB_0064810c:
    *local_80 = *plVar8;
    *plVar8 = (long)local_80;
  }
  else {
    plVar8 = *(long **)(*param_1 + unaff_x25 * 8);
joined_r0x00648278:
    if (plVar8 != (long *)0x0) goto LAB_0064810c;
LAB_00648224:
    *local_80 = param_1[2];
    param_1[2] = (long)local_80;
    *(long **)(*param_1 + unaff_x25 * 8) = plVar7;
    if (*local_80 != 0) {
      uVar6 = *(ulong *)(*local_80 + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        uVar6 = uVar6 & uVar14 - 1;
      }
      else if (uVar14 <= uVar6) {
        uVar13 = 0;
        if (uVar14 != 0) {
          uVar13 = uVar6 / uVar14;
        }
        uVar6 = uVar6 - uVar13 * uVar14;
      }
      *(long **)(*param_1 + uVar6 * 8) = local_80;
    }
  }
  uVar16 = 1;
  param_1[3] = param_1[3] + 1;
  plVar7 = local_80;
LAB_006482c8:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar7,uVar16);
LAB_0064807c:
  uVar16 = 0;
  goto LAB_006482c8;
}


// ===== 00648328  FUN_00648328 =====

ulong FUN_00648328(ulong *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *param_1;
  uVar2 = param_1[2];
  lVar1 = 0;
  uVar3 = (uVar4 >> 0xc ^ param_2 >> 7) & uVar2;
  uVar5 = *(ulong *)(uVar4 + uVar3) & (*(ulong *)(uVar4 + uVar3) << 7 ^ 0xffffffffffffffff);
  while ((uVar5 & 0x8080808080808080) == 0) {
    lVar1 = lVar1 + 8;
    uVar3 = lVar1 + uVar3 & uVar2;
    uVar5 = *(ulong *)(uVar4 + uVar3) & (*(ulong *)(uVar4 + uVar3) << 7 ^ 0xffffffffffffffff);
  }
  uVar4 = (uVar5 & 0x8080808080808080) >> 7;
  uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  return uVar3 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & uVar2;
}


// ===== 00648380  FUN_00648380 =====

void FUN_00648380(ulong *param_1,long *param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  code *pcVar5;
  char cVar6;
  byte bVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong *puVar19;
  ulong uVar20;
  
  uVar2 = param_1[1];
  uVar4 = param_1[2];
  puVar19 = (ulong *)*param_1;
  puVar1 = (ulong *)((long)puVar19 + uVar4);
  puVar12 = puVar19;
  if (0 < (long)uVar4) {
    do {
      puVar13 = puVar12 + 1;
      *puVar12 = (*puVar12 >> 6 & 0x202020202020202) + 0x7e7e7e7e7e7e7e7e | 0x8080808080808080;
      puVar12 = puVar13;
    } while (puVar13 < puVar1);
  }
  uVar20 = *puVar19;
  *(undefined4 *)((long)puVar1 + 4) = *(undefined4 *)((long)puVar19 + 3);
  *(int *)((long)puVar1 + 1) = (int)uVar20;
  *(undefined1 *)((long)puVar19 + uVar4) = 0xff;
  if (uVar4 != 0) {
    pcVar3 = (code *)param_2[1];
    pcVar5 = (code *)param_2[2];
    uVar20 = 0;
    lVar18 = *param_2;
    uVar17 = uVar2;
    do {
      if (*(char *)((long)puVar19 + uVar20) == -2) {
        uVar8 = (*pcVar3)(param_1,uVar17);
        uVar9 = *param_1;
        uVar10 = param_1[2];
        uVar14 = (uVar9 >> 0xc ^ uVar8 >> 7) & uVar10;
        uVar11 = *(ulong *)(uVar9 + uVar14) & (*(ulong *)(uVar9 + uVar14) << 7 ^ 0xffffffffffffffff)
                 & 0x8080808080808080;
        uVar15 = uVar14;
        if (uVar11 == 0) {
          lVar16 = 8;
          do {
            uVar15 = uVar15 + lVar16;
            lVar16 = lVar16 + 8;
            uVar15 = uVar15 & uVar10;
            uVar11 = *(ulong *)(uVar9 + uVar15) &
                     (*(ulong *)(uVar9 + uVar15) << 7 ^ 0xffffffffffffffff) & 0x8080808080808080;
          } while (uVar11 == 0);
        }
        uVar11 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar15 = uVar15 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) & uVar10;
        if (((uVar15 - uVar14 ^ uVar20 - uVar14) & uVar4) < 8) {
          bVar7 = (byte)uVar8 & 0x7f;
          *(byte *)(uVar9 + uVar20) = bVar7;
          *(byte *)(uVar9 + (uVar10 & uVar20 - 7) + (uVar10 & 7)) = bVar7;
        }
        else {
          lVar16 = uVar2 + uVar15 * lVar18;
          cVar6 = *(char *)((long)puVar19 + uVar15);
          bVar7 = (byte)uVar8 & 0x7f;
          *(byte *)(uVar9 + uVar15) = bVar7;
          *(byte *)(uVar9 + (uVar15 - 7 & uVar10) + (uVar10 & 7)) = bVar7;
          if (cVar6 == -0x80) {
            (*pcVar5)(param_1,lVar16,uVar17);
            uVar15 = param_1[2];
            uVar11 = *param_1;
            *(undefined1 *)(uVar11 + uVar20) = 0x80;
            *(undefined1 *)(uVar11 + (uVar15 & uVar20 - 7) + (uVar15 & 7)) = 0x80;
          }
          else {
            (*pcVar5)(param_1,param_3,lVar16);
            (*pcVar5)(param_1,lVar16,uVar17);
            (*pcVar5)(param_1,uVar17,param_3);
            uVar20 = uVar20 - 1;
            uVar17 = uVar17 - lVar18;
          }
        }
      }
      uVar20 = uVar20 + 1;
      uVar17 = lVar18 + uVar17;
    } while (uVar20 != uVar4);
  }
  uVar2 = param_1[2];
  lVar18 = 6;
  if (uVar2 != 7) {
    lVar18 = uVar2 - (uVar2 >> 3);
  }
  *(ulong *)(*param_1 - 8) = lVar18 - (param_1[3] >> 1);
  return;
}


// ===== 006485b0  FUN_006485b0 =====

void FUN_006485b0(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = param_1[2];
  lVar3 = *param_1;
  param_1[3] = param_1[3] + -2;
  if (8 < uVar1) {
    uVar5 = NEON_cmeq(*(undefined8 *)(lVar3 + param_2),0x8080808080808080,1);
    lVar4 = NEON_cmeq(*(undefined8 *)(lVar3 + (uVar1 & param_2 - 8U)),0x8080808080808080,1);
    uVar2 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
    uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    if ((lVar4 == 0 || uVar5 == 0) ||
        7 < ((ulong)LZCOUNT(lVar4) >> 3) + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3)) {
      *(undefined1 *)(lVar3 + param_2) = 0xfe;
      *(undefined1 *)(lVar3 + (uVar1 & param_2 - 7U) + (uVar1 & 7)) = 0xfe;
      return;
    }
  }
  lVar4 = *(long *)(lVar3 + -8);
  *(undefined1 *)(lVar3 + param_2) = 0x80;
  *(undefined1 *)(lVar3 + (uVar1 & param_2 - 7U) + (uVar1 & 7)) = 0x80;
  *(long *)(lVar3 + -8) = lVar4 + 1;
  return;
}


// ===== 0064865c  FUN_0064865c =====

void FUN_0064865c(long *param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  void *__s;
  long lVar4;
  
  param_1[3] = param_1[3] & 1;
  if ((param_3 & 1) != 0) {
    lVar4 = param_1[2];
    __s = (void *)*param_1;
    memset(__s,0x80,lVar4 + 8);
    uVar2 = param_1[2];
    uVar3 = param_1[3];
    lVar1 = 6;
    if (uVar2 != 7) {
      lVar1 = uVar2 - (uVar2 >> 3);
    }
    *(undefined1 *)((long)__s + lVar4) = 0xff;
    *(ulong *)(*param_1 + -8) = lVar1 - (uVar3 >> 1);
    return;
  }
  (**(code **)(param_2 + 0x18))(param_1);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (long)&DAT_0020f390;
  return;
}


// ===== 00648700  FUN_00648700 =====

void FUN_00648700(long *param_1,undefined4 *param_2,long param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  
  uVar2 = param_1[1];
  *param_2 = *(undefined4 *)(*param_1 + (uVar2 >> 1) + 1);
  lVar4 = param_1[1];
  *(undefined1 *)((long)param_2 + (uVar2 >> 1)) = 0x80;
  *(undefined4 *)((long)param_2 + lVar4 + 1) = 0x80808080;
  puVar1 = (undefined1 *)((long)param_2 + param_3);
  param_2[1] = 0x80808080;
  *(undefined4 *)(puVar1 + 4) = 0x80808080;
  uVar3 = *param_2;
  *puVar1 = 0xff;
  *(undefined4 *)(puVar1 + 1) = uVar3;
  return;
}


// ===== 0064874c  FUN_0064874c =====

void FUN_0064874c(long *param_1,undefined8 *param_2,void *param_3,long param_4)

{
  undefined1 *puVar1;
  size_t __n;
  ulong uVar2;
  size_t __n_00;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  void *__dest;
  
  uVar2 = param_1[1];
  puVar3 = (undefined4 *)*param_2;
  lVar5 = param_2[2];
  *puVar3 = *(undefined4 *)(*param_1 + (uVar2 >> 1) + 1);
  lVar4 = param_1[1];
  *(undefined1 *)((long)puVar3 + (uVar2 >> 1)) = 0x80;
  *(undefined4 *)((long)puVar3 + lVar4 + 1) = 0x80808080;
  puVar1 = (undefined1 *)((long)puVar3 + lVar5);
  puVar3[1] = 0x80808080;
  *(undefined4 *)(puVar1 + 4) = 0x80808080;
  *(undefined4 *)(puVar1 + 1) = *puVar3;
  __dest = (void *)param_2[1];
  __n_00 = ((ulong)param_1[1] >> 1) * param_4;
  *puVar1 = 0xff;
  __n = param_4 + __n_00;
  memcpy(__dest,(void *)((long)param_3 + __n),__n_00);
  memcpy((void *)((long)__dest + __n),param_3,__n);
  return;
}


// ===== 006487ec  FUN_006487ec =====

void FUN_006487ec(ulong param_1,long param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_LOOP_007a1f58;
  if (0x3ff < param_3) {
    do {
      lVar3 = FUN_006489b4(param_2,0x400,puVar2,&DAT_0020f3a0);
      param_3 = param_3 - 0x400;
      param_2 = param_2 + 0x400;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = lVar3 + param_1;
      param_1 = SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
                (lVar3 + param_1) * -0x622015f714c7d297;
    } while (0x3ff < param_3);
  }
  FUN_00648888(param_1,param_2,param_3);
  return;
}


// ===== 00648888  FUN_00648888 =====

ulong FUN_00648888(ulong param_1,ulong *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_3 < 0x11) {
    if (8 < param_3) {
      uVar5 = *(ulong *)((long)param_2 + (param_3 - 8)) ^ param_1 + 0x9ddfea08eb382d69;
      uVar4 = (*param_2 >> 0x35 | *param_2 << 0xb) + param_1 + 0x9ddfea08eb382d69;
      uVar6 = uVar5 * uVar4;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar5;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar4;
      uVar4 = SUB168(auVar1 * auVar3,8);
      goto LAB_00648994;
    }
    if (param_3 < 4) {
      if (param_3 == 0) {
        return param_1;
      }
      uVar4 = (ulong)((uint)*(byte *)((long)param_2 + (param_3 >> 1)) <<
                      (ulong)(((uint)param_3 & 6) << 2) |
                     (uint)(byte)*param_2 |
                     (uint)*(byte *)((long)param_2 + (param_3 - 1)) <<
                     (ulong)(((uint)(param_3 - 1) & 3) << 3));
    }
    else {
      uVar4 = (ulong)*(uint *)((long)param_2 + (param_3 - 4)) << (param_3 * 8 - 0x20 & 0x3f) |
              (ulong)(uint)*param_2;
    }
  }
  else {
    if (0x400 < param_3) {
      uVar4 = FUN_006487ec();
      return uVar4;
    }
    uVar4 = FUN_006489b4(param_2,param_3,PTR_LOOP_007a1f58,&DAT_0020f3a0);
  }
  uVar6 = (uVar4 + param_1) * -0x622015f714c7d297;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4 + param_1;
  uVar4 = SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8);
LAB_00648994:
  return uVar4 ^ uVar6;
}


// ===== 006489a0  FUN_006489a0 =====

void FUN_006489a0(undefined8 param_1,undefined8 param_2)

{
  FUN_006489b4(param_1,param_2,PTR_LOOP_007a1f58,&DAT_0020f3a0);
  return;
}


// ===== 006489b4  FUN_006489b4 =====

ulong FUN_006489b4(ulong *param_1,ulong param_2,ulong param_3,ulong *param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
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
  ulong *puVar22;
  ulong uVar23;
  ulong uVar24;
  
  Hint_Prefetch(param_1,0,0,0);
  param_3 = *param_4 ^ param_3;
  uVar23 = param_2;
  if (param_2 < 0x41) {
    if (param_2 < 0x11) goto LAB_00648a98;
  }
  else {
    uVar24 = param_3;
    do {
      Hint_Prefetch(param_1 + 8,0,0,0);
      uVar3 = *param_1;
      puVar4 = param_1 + 1;
      puVar22 = param_1 + 2;
      puVar5 = param_1 + 3;
      uVar23 = uVar23 - 0x40;
      puVar1 = param_1 + 6;
      puVar6 = param_1 + 7;
      puVar2 = param_1 + 4;
      puVar7 = param_1 + 5;
      param_1 = param_1 + 8;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = param_4[1] ^ uVar3;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = *puVar4 ^ uVar24;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = param_4[2] ^ *puVar22;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = *puVar5 ^ uVar24;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = param_4[3] ^ *puVar2;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = *puVar7 ^ param_3;
      uVar24 = (param_4[1] ^ uVar3) * (*puVar4 ^ uVar24) ^
               (param_4[2] ^ *puVar22) * (*puVar5 ^ uVar24) ^
               SUB168(auVar9 * auVar16,8) ^ SUB168(auVar8 * auVar15,8);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = param_4[4] ^ *puVar1;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = *puVar6 ^ param_3;
      param_3 = (param_4[3] ^ *puVar2) * (*puVar7 ^ param_3) ^
                (param_4[4] ^ *puVar1) * (*puVar6 ^ param_3) ^
                SUB168(auVar11 * auVar18,8) ^ SUB168(auVar10 * auVar17,8);
    } while (0x40 < uVar23);
    param_3 = param_3 ^ uVar24;
    if (uVar23 < 0x11) goto LAB_00648a98;
  }
  puVar22 = param_1;
  do {
    param_1 = puVar22 + 2;
    uVar23 = uVar23 - 0x10;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = param_4[1] ^ *puVar22;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = puVar22[1] ^ param_3;
    param_3 = SUB168(auVar12 * auVar19,8) ^ (param_4[1] ^ *puVar22) * (puVar22[1] ^ param_3);
    puVar22 = param_1;
  } while (0x10 < uVar23);
LAB_00648a98:
  if (uVar23 < 9) {
    if (uVar23 < 4) {
      uVar24 = 0;
      if (uVar23 != 0) {
        uVar23 = (ulong)(byte)*param_1 << 0x10 |
                 (ulong)*(byte *)((long)param_1 + (uVar23 >> 1)) << 8 |
                 (ulong)*(byte *)((long)param_1 + (uVar23 - 1));
      }
    }
    else {
      uVar24 = (ulong)*(uint *)((long)param_1 + (uVar23 - 4));
      uVar23 = (ulong)(uint)*param_1;
    }
  }
  else {
    uVar24 = *(ulong *)((long)param_1 + (uVar23 - 8));
    uVar23 = *param_1;
  }
  uVar23 = param_4[1] ^ uVar23;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar23;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar24 ^ param_3;
  param_2 = param_4[1] ^ param_2;
  uVar23 = SUB168(auVar13 * auVar20,8) ^ uVar23 * (uVar24 ^ param_3);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar23;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = param_2;
  return SUB168(auVar14 * auVar21,8) ^ uVar23 * param_2;
}


// ===== 00648b1c  FUN_00648b1c =====

void FUN_00648b1c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00753a74(0x10);
                    /* try { // try from 00648b38 to 00648b3f has its CatchHandler @ 00648b58 */
  FUN_0030b958(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(uVar1,PTR_PTR_007a11b0,PTR_FUN_007a11b8);
}


// ===== 00648b6c  FUN_00648b6c =====

void FUN_00648b6c(undefined8 *param_1)

{
  FUN_0071274c();
  *param_1 = &PTR_FUN_0079deb0;
  return;
}


// ===== 00648b9c  FUN_00648b9c =====

void FUN_00648b9c(undefined8 *param_1)

{
  undefined8 *__ptr;
  void *pvVar1;
  
  __ptr = (undefined8 *)param_1[2];
  while (__ptr != (undefined8 *)0x0) {
    pvVar1 = (void *)*__ptr;
    FUN_0065e3c8(__ptr + 5);
    if ((*(byte *)(__ptr + 2) & 1) != 0) {
      free((void *)__ptr[4]);
    }
    free(__ptr);
    __ptr = (undefined8 *)pvVar1;
  }
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  free(pvVar1);
  return;
}


// ===== 00648c14  FUN_00648c14 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_00648c14(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  size_t sVar4;
  long lVar5;
  void *pvVar6;
  byte *local_b0;
  size_t local_a8;
  void *local_a0;
  byte local_98 [16];
  void *local_88;
  undefined1 uStack_79;
  ulong local_78;
  size_t local_70;
  void *local_68;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  sVar4 = strlen("");
  if (0xfffffffffffffff7 < sVar4) {
    if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_78);
    }
    goto LAB_006490bc;
  }
  if (sVar4 < 0x17) {
    pvVar6 = (void *)((ulong)&local_78 | 1);
    local_78 = CONCAT71(local_78._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_00648ca4;
  }
  else {
    uVar1 = (sVar4 & 0xfffffffffffffff8) + 8;
    if ((sVar4 | 7) != 0x17) {
      uVar1 = sVar4 | 7;
    }
    pvVar6 = (void *)FUN_00759c3c(uVar1 + 1);
    local_78 = uVar1 + 1 | 1;
    local_70 = sVar4;
    local_68 = pvVar6;
LAB_00648ca4:
    memset(pvVar6,0,sVar4);
  }
  *(undefined1 *)((long)pvVar6 + sVar4) = 0;
  sVar4 = strlen("");
  if (0xfffffffffffffff7 < sVar4) {
    if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 00648eb8 to 00648ebf has its CatchHandler @ 00649090 */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_b0);
    }
    goto LAB_006490bc;
  }
  if (sVar4 < 0x17) {
    pvVar6 = (void *)((ulong)&local_b0 | 1);
    local_b0 = (byte *)CONCAT71(local_b0._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_00648d20;
  }
  else {
    uVar1 = (sVar4 & 0xfffffffffffffff8) + 8;
    if ((sVar4 | 7) != 0x17) {
      uVar1 = sVar4 | 7;
    }
                    /* try { // try from 00648d08 to 00648d0f has its CatchHandler @ 00649090 */
    pvVar6 = (void *)FUN_00759c3c(uVar1 + 1);
    local_b0 = (byte *)(uVar1 + 1 | 1);
    local_a8 = sVar4;
    local_a0 = pvVar6;
LAB_00648d20:
    memset(pvVar6,0,sVar4);
  }
  *(undefined1 *)((long)pvVar6 + sVar4) = 0;
                    /* try { // try from 00648d34 to 00648d47 has its CatchHandler @ 00649050 */
  FUN_006490c0(local_98,param_1,&local_78,&local_b0);
  if (((ulong)local_b0 & 1) != 0) {
    free(local_a0);
  }
  if ((local_78 & 1) != 0) {
    free(local_68);
  }
  if (((DAT_007ae7e0 & 1) == 0) && (iVar3 = FUN_00739c1c(&DAT_007ae7e0), iVar3 != 0)) {
    __cxa_atexit(PTR_FUN_007a1110,&DAT_007ae838,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ae7e0);
  }
                    /* try { // try from 00648d94 to 00648d9f has its CatchHandler @ 00649048 */
  FUN_00715bcc(&DAT_007ae838);
  if (((DAT_007ae7d8 & 1) == 0) && (iVar3 = FUN_00739c1c(&DAT_007ae7d8), iVar3 != 0)) {
    DAT_007ae830 = 0x3f800000;
    uRam00000000007ae828 = 0;
    _DAT_007ae820 = 0;
    uRam00000000007ae818 = 0;
    _DAT_007ae810 = 0;
    __cxa_atexit(FUN_00648b9c,&DAT_007ae810,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ae7d8);
  }
                    /* try { // try from 00648db0 to 00648dbf has its CatchHandler @ 00649040 */
  lVar5 = FUN_0064cbf8(&DAT_007ae810,local_98);
  if (((DAT_007ae7d8 & 1) == 0) && (iVar3 = FUN_00739c1c(&DAT_007ae7d8), iVar3 != 0)) {
    DAT_007ae830 = 0x3f800000;
    uRam00000000007ae828 = 0;
    _DAT_007ae820 = 0;
    uRam00000000007ae818 = 0;
    _DAT_007ae810 = 0;
    __cxa_atexit(FUN_00648b9c,&DAT_007ae810,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ae7d8);
  }
  if (lVar5 == 0) {
                    /* try { // try from 00648dcc to 00648ddb has its CatchHandler @ 00649038 */
    FUN_0065e020(&local_78,0,0);
                    /* try { // try from 00648ddc to 00648e23 has its CatchHandler @ 00649068 */
    FUN_00649c94(local_98,&local_78);
    if (((DAT_007ae7d8 & 1) == 0) && (iVar3 = FUN_00739c1c(&DAT_007ae7d8), iVar3 != 0)) {
      DAT_007ae830 = 0x3f800000;
      uRam00000000007ae828 = 0;
      _DAT_007ae820 = 0;
      uRam00000000007ae818 = 0;
      _DAT_007ae810 = 0;
      __cxa_atexit(FUN_00648b9c,&DAT_007ae810,&PTR_LOOP_0075ec90);
      FUN_00739d60(&DAT_007ae7d8);
    }
    local_b0 = local_98;
    lVar5 = FUN_0064ce4c(&DAT_007ae810,local_98,PTR_DAT_007a10e8,&local_b0,&uStack_79);
    FUN_0065f058(lVar5 + 0x28,&local_78);
    FUN_0065e3c8(&local_78);
  }
  if (((DAT_007ae7d8 & 1) == 0) && (iVar3 = FUN_00739c1c(&DAT_007ae7d8), iVar3 != 0)) {
    DAT_007ae830 = 0x3f800000;
    uRam00000000007ae828 = 0;
    _DAT_007ae820 = 0;
    uRam00000000007ae818 = 0;
    _DAT_007ae810 = 0;
    __cxa_atexit(FUN_00648b9c,&DAT_007ae810,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ae7d8);
  }
                    /* try { // try from 00648e34 to 00648e43 has its CatchHandler @ 0064903c */
  lVar5 = FUN_0064cbf8(&DAT_007ae810,local_98);
  FUN_00715bf8(&DAT_007ae838);
  if ((local_98[0] & 1) != 0) {
    free(local_88);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return lVar5 + 0x10;
  }
LAB_006490bc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006490c0  FUN_006490c0 =====

/* WARNING: Removing unreachable block (ram,0x00649a00) */
/* WARNING: Removing unreachable block (ram,0x006495dc) */
/* WARNING: Removing unreachable block (ram,0x00649850) */
/* WARNING: Removing unreachable block (ram,0x00649680) */
/* WARNING: Removing unreachable block (ram,0x00649790) */
/* WARNING: Type propagation algorithm not settling */

void FUN_006490c0(undefined8 *param_1,long param_2,byte *param_3,byte *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  size_t sVar4;
  ulong uVar5;
  void *__src;
  byte bVar6;
  long lVar7;
  undefined1 *puVar8;
  bool bVar9;
  int iVar10;
  ulong *puVar11;
  size_t sVar12;
  undefined8 *puVar13;
  void *pvVar14;
  undefined8 uVar15;
  uint uVar16;
  byte *pbVar17;
  undefined *puVar18;
  byte *pbVar19;
  long lVar20;
  undefined8 uVar21;
  byte local_d0;
  undefined1 auStack_cf [7];
  ulong local_c8;
  undefined1 *local_c0;
  undefined8 local_b8;
  ulong local_b0;
  void *local_a8;
  undefined8 local_a0;
  ulong uStack_98;
  void *local_90;
  undefined8 local_80;
  ulong uStack_78;
  void *local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  iVar10 = *(int *)(param_2 + 0x28);
  if (iVar10 < 7) {
    if (iVar10 == 1) {
      bVar6 = *param_3;
      sVar4 = (ulong)(bVar6 >> 1);
      if ((bVar6 & 1) != 0) {
        sVar4 = *(size_t *)(param_3 + 8);
      }
      sVar12 = strlen("tensor(");
      uVar2 = sVar4 + sVar12;
      if (0xfffffffffffffff7 < uVar2) {
LAB_00649a44:
        if (*(long *)(lVar7 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_002fb400(&local_b8);
        }
        goto LAB_00649c90;
      }
      if (uVar2 < 0x17) {
        local_b0 = 0;
        local_a8 = (void *)0x0;
        local_b8 = (ulong)(byte)(((uint)uVar2 & 0xff) << 1);
        pvVar14 = (void *)((long)&local_b8 + 1);
      }
      else {
        uVar1 = (uVar2 & 0xfffffffffffffff8) + 8;
        if ((uVar2 | 7) != 0x17) {
          uVar1 = uVar2 | 7;
        }
        pvVar14 = (void *)FUN_00759c3c(uVar1 + 1);
        local_b8 = uVar1 + 1 | 1;
        local_b0 = uVar2;
        local_a8 = pvVar14;
      }
      if (sVar4 != 0) {
        pbVar17 = *(byte **)(param_3 + 0x10);
        if ((bVar6 & 1) == 0) {
          pbVar17 = param_3 + 1;
        }
        memmove(pvVar14,pbVar17,sVar4);
      }
      if (sVar12 != 0) {
        memcpy((void *)((long)pvVar14 + sVar4),"tensor(",sVar12);
      }
      lVar20 = *(long *)(param_2 + 0x20);
      *(undefined1 *)((long)((long)pvVar14 + sVar4) + sVar12) = 0;
                    /* try { // try from 00649898 to 006498a3 has its CatchHandler @ 00649c00 */
      FUN_0064a9f8(&local_d0,*(undefined4 *)(lVar20 + 0x20));
      puVar8 = local_c0;
      if ((local_d0 & 1) == 0) {
        local_c8 = (ulong)(local_d0 >> 1);
        puVar8 = auStack_cf;
      }
                    /* try { // try from 006498bc to 006498c3 has its CatchHandler @ 00649bc0 */
      puVar11 = (ulong *)FUN_0071302c(&local_b8,puVar8,local_c8);
      local_90 = (void *)puVar11[2];
      uStack_98 = puVar11[1];
      local_a0 = *puVar11;
      puVar11[1] = 0;
      puVar11[2] = 0;
      *puVar11 = 0;
                    /* try { // try from 006498dc to 006498eb has its CatchHandler @ 00649b98 */
      puVar11 = (ulong *)FUN_00713bdc(&local_a0,&DAT_001d047f);
      local_70 = (void *)puVar11[2];
      uStack_78 = puVar11[1];
      local_80 = *puVar11;
      puVar11[1] = 0;
      puVar11[2] = 0;
      *puVar11 = 0;
      uVar2 = *(ulong *)(param_4 + 8);
      pbVar17 = *(byte **)(param_4 + 0x10);
      if ((*param_4 & 1) == 0) {
        pbVar17 = param_4 + 1;
        uVar2 = (ulong)(*param_4 >> 1);
      }
                    /* try { // try from 0064991c to 00649923 has its CatchHandler @ 00649b40 */
      puVar13 = (undefined8 *)FUN_0071302c(&local_80,pbVar17,uVar2);
LAB_00649924:
      uVar21 = puVar13[1];
      uVar15 = *puVar13;
      param_1[2] = puVar13[2];
      param_1[1] = uVar21;
      *param_1 = uVar15;
      puVar13[1] = 0;
      puVar13[2] = 0;
      *puVar13 = 0;
      if ((local_80 & 1) != 0) {
        free(local_70);
      }
      if ((local_a0 & 1) != 0) {
        free(local_90);
      }
      pvVar14 = local_a8;
      uVar2 = local_b8;
      if ((local_d0 & 1) != 0) {
        free(local_c0);
        pvVar14 = local_a8;
        uVar2 = local_b8;
      }
    }
    else if (iVar10 == 4) {
      bVar6 = *param_3;
      puVar18 = *(undefined **)(*(long *)(param_2 + 0x20) + 0x18);
      puVar3 = PTR_PTR_007a1f50;
      if (puVar18 != (undefined *)0x0) {
        puVar3 = puVar18;
      }
      sVar4 = (ulong)(bVar6 >> 1);
      if ((bVar6 & 1) != 0) {
        sVar4 = *(size_t *)(param_3 + 8);
      }
      sVar12 = strlen("seq(");
      uVar2 = sVar4 + sVar12;
      if (0xfffffffffffffff7 < uVar2) {
LAB_00649a2c:
        if (*(long *)(lVar7 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_002fb400(&local_80);
        }
        goto LAB_00649c90;
      }
      if (uVar2 < 0x17) {
        uStack_78 = 0;
        local_70 = (void *)0x0;
        local_80 = (ulong)(byte)(((uint)uVar2 & 0xff) << 1);
        pvVar14 = (void *)((long)&local_80 + 1);
      }
      else {
        uVar1 = (uVar2 & 0xfffffffffffffff8) + 8;
        if ((uVar2 | 7) != 0x17) {
          uVar1 = uVar2 | 7;
        }
        pvVar14 = (void *)FUN_00759c3c(uVar1 + 1);
        local_80 = uVar1 + 1 | 1;
        uStack_78 = uVar2;
        local_70 = pvVar14;
      }
      if (sVar4 != 0) {
        pbVar17 = *(byte **)(param_3 + 0x10);
        if ((bVar6 & 1) == 0) {
          pbVar17 = param_3 + 1;
        }
        memmove(pvVar14,pbVar17,sVar4);
      }
      if (sVar12 != 0) {
        memcpy((void *)((long)pvVar14 + sVar4),&DAT_001ee7ed,sVar12);
      }
      *(undefined1 *)((long)((long)pvVar14 + sVar4) + sVar12) = 0;
                    /* try { // try from 0064961c to 0064962f has its CatchHandler @ 00649c10 */
      FUN_00714534(&local_a0,&DAT_001d047f,param_4);
                    /* try { // try from 00649630 to 00649643 has its CatchHandler @ 00649be4 */
      FUN_006490c0(param_1,puVar3,&local_80,&local_a0);
LAB_006497f8:
      pvVar14 = local_70;
      uVar2 = local_80;
      if ((local_a0 & 1) != 0) {
        free(local_90);
        pvVar14 = local_70;
        uVar2 = local_80;
      }
    }
    else {
      if (iVar10 != 5) {
LAB_00649ab8:
        uVar15 = FUN_00753a74(0x10);
                    /* try { // try from 00649ac8 to 00649ad3 has its CatchHandler @ 00649b00 */
        FUN_002fd1a0(uVar15,"Unsuported type proto value case.");
        if (*(long *)(lVar7 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar15,PTR_PTR_007a0fb8,PTR_FUN_007a0fc0);
        }
        goto LAB_00649c90;
      }
      FUN_0064a9f8(&local_b8,*(undefined4 *)(*(long *)(param_2 + 0x20) + 0x20));
                    /* try { // try from 00649130 to 00649147 has its CatchHandler @ 00649c38 */
      puVar11 = (ulong *)FUN_00713170(&local_b8,0,&DAT_001f2b37);
      local_90 = (void *)puVar11[2];
      uStack_98 = puVar11[1];
      local_a0 = *puVar11;
      puVar11[1] = 0;
      puVar11[2] = 0;
      *puVar11 = 0;
                    /* try { // try from 00649160 to 0064916f has its CatchHandler @ 00649c24 */
      puVar11 = (ulong *)FUN_00713bdc(&local_a0,&DAT_001ce2ff);
      uStack_78 = puVar11[1];
      local_80 = *puVar11;
      local_70 = (void *)puVar11[2];
      puVar11[1] = 0;
      puVar11[2] = 0;
      *puVar11 = 0;
      if ((local_a0 & 1) != 0) {
        free(local_90);
      }
      if ((local_b8 & 1) != 0) {
        free(local_a8);
      }
      uVar2 = local_80;
      puVar3 = *(undefined **)(param_2 + 0x20);
      if (*(int *)(param_2 + 0x28) != 5) {
        puVar3 = PTR_PTR_007a2ec8;
      }
      bVar6 = *param_3;
      puVar18 = PTR_PTR_007a1f50;
      if (*(undefined **)(puVar3 + 0x18) != (undefined *)0x0) {
        puVar18 = *(undefined **)(puVar3 + 0x18);
      }
      sVar4 = (ulong)(bVar6 >> 1);
      if ((bVar6 & 1) != 0) {
        sVar4 = *(size_t *)(param_3 + 8);
      }
      sVar12 = local_80 >> 1 & 0x7f;
      if ((local_80 & 1) != 0) {
        sVar12 = uStack_78;
      }
      uVar1 = sVar12 + sVar4;
      if (0xfffffffffffffff7 < uVar1) {
        if (*(long *)(lVar7 + 0x28) == local_68) {
                    /* try { // try from 00649ab0 to 00649ab7 has its CatchHandler @ 00649c4c */
                    /* WARNING: Subroutine does not return */
          FUN_002fb400(&local_a0);
        }
        goto LAB_00649c90;
      }
      if (uVar1 < 0x17) {
        uStack_98 = 0;
        local_90 = (void *)0x0;
        local_a0 = (ulong)(byte)(((uint)uVar1 & 0xff) << 1);
        pvVar14 = (void *)((long)&local_a0 + 1);
      }
      else {
        uVar5 = (uVar1 & 0xfffffffffffffff8) + 8;
        if ((uVar1 | 7) != 0x17) {
          uVar5 = uVar1 | 7;
        }
                    /* try { // try from 006499e0 to 006499e7 has its CatchHandler @ 00649c4c */
        pvVar14 = (void *)FUN_00759c3c(uVar5 + 1);
        local_a0 = uVar5 + 1 | 1;
        uStack_98 = uVar1;
        local_90 = pvVar14;
      }
      if (sVar4 != 0) {
        pbVar17 = *(byte **)(param_3 + 0x10);
        if ((bVar6 & 1) == 0) {
          pbVar17 = param_3 + 1;
        }
        memmove(pvVar14,pbVar17,sVar4);
      }
      if (sVar12 != 0) {
        __src = local_70;
        if ((uVar2 & 1) == 0) {
          __src = (void *)((long)&local_80 + 1);
        }
        memmove((void *)((long)pvVar14 + sVar4),__src,sVar12);
      }
      *(undefined1 *)((long)((long)pvVar14 + sVar4) + sVar12) = 0;
                    /* try { // try from 00649278 to 0064928f has its CatchHandler @ 00649b7c */
      FUN_00714534(&local_b8,&DAT_001d047f,param_4);
                    /* try { // try from 00649290 to 006492a3 has its CatchHandler @ 00649b10 */
      FUN_006490c0(param_1,puVar18,&local_a0,&local_b8);
      if ((local_b8 & 1) != 0) {
        free(local_a8);
      }
      pvVar14 = local_70;
      if ((local_a0 & 1) != 0) {
        free(local_90);
        pvVar14 = local_70;
      }
    }
    if ((uVar2 & 1) != 0) {
      free(pvVar14);
    }
  }
  else {
    if (iVar10 != 7) {
      if (iVar10 != 8) {
        if (iVar10 != 9) goto LAB_00649ab8;
        bVar6 = *param_3;
        puVar18 = *(undefined **)(*(long *)(param_2 + 0x20) + 0x18);
        puVar3 = PTR_PTR_007a1f50;
        if (puVar18 != (undefined *)0x0) {
          puVar3 = puVar18;
        }
        sVar4 = (ulong)(bVar6 >> 1);
        if ((bVar6 & 1) != 0) {
          sVar4 = *(size_t *)(param_3 + 8);
        }
        sVar12 = strlen("optional(");
        uVar2 = sVar4 + sVar12;
        if (0xfffffffffffffff7 < uVar2) goto LAB_00649a2c;
        if (uVar2 < 0x17) {
          uStack_78 = 0;
          local_70 = (void *)0x0;
          local_80 = (ulong)(byte)(((uint)uVar2 & 0xff) << 1);
          pvVar14 = (void *)((long)&local_80 + 1);
        }
        else {
          uVar1 = (uVar2 & 0xfffffffffffffff8) + 8;
          if ((uVar2 | 7) != 0x17) {
            uVar1 = uVar2 | 7;
          }
          pvVar14 = (void *)FUN_00759c3c(uVar1 + 1);
          local_80 = uVar1 + 1 | 1;
          uStack_78 = uVar2;
          local_70 = pvVar14;
        }
        if (sVar4 != 0) {
          pbVar17 = *(byte **)(param_3 + 0x10);
          if ((bVar6 & 1) == 0) {
            pbVar17 = param_3 + 1;
          }
          memmove(pvVar14,pbVar17,sVar4);
        }
        if (sVar12 != 0) {
          memcpy((void *)((long)pvVar14 + sVar4),"optional(",sVar12);
        }
        *(undefined1 *)((long)((long)pvVar14 + sVar4) + sVar12) = 0;
                    /* try { // try from 006497d0 to 006497e3 has its CatchHandler @ 00649c04 */
        FUN_00714534(&local_a0,&DAT_001d047f,param_4);
                    /* try { // try from 006497e4 to 006497f7 has its CatchHandler @ 00649bc4 */
        FUN_006490c0(param_1,puVar3,&local_80,&local_a0);
        goto LAB_006497f8;
      }
      bVar6 = *param_3;
      sVar4 = (ulong)(bVar6 >> 1);
      if ((bVar6 & 1) != 0) {
        sVar4 = *(size_t *)(param_3 + 8);
      }
      sVar12 = strlen("sparse_tensor(");
      uVar2 = sVar4 + sVar12;
      if (0xfffffffffffffff7 < uVar2) goto LAB_00649a44;
      if (uVar2 < 0x17) {
        local_b0 = 0;
        local_a8 = (void *)0x0;
        local_b8 = (ulong)(byte)(((uint)uVar2 & 0xff) << 1);
        pvVar14 = (void *)((long)&local_b8 + 1);
      }
      else {
        uVar1 = (uVar2 & 0xfffffffffffffff8) + 8;
        if ((uVar2 | 7) != 0x17) {
          uVar1 = uVar2 | 7;
        }
        pvVar14 = (void *)FUN_00759c3c(uVar1 + 1);
        local_b8 = uVar1 + 1 | 1;
        local_b0 = uVar2;
        local_a8 = pvVar14;
      }
      if (sVar4 != 0) {
        pbVar17 = *(byte **)(param_3 + 0x10);
        if ((bVar6 & 1) == 0) {
          pbVar17 = param_3 + 1;
        }
        memmove(pvVar14,pbVar17,sVar4);
      }
      if (sVar12 != 0) {
        memcpy((void *)((long)pvVar14 + sVar4),"sparse_tensor(",sVar12);
      }
      lVar20 = *(long *)(param_2 + 0x20);
      *(undefined1 *)((long)((long)pvVar14 + sVar4) + sVar12) = 0;
                    /* try { // try from 006496c8 to 006496d3 has its CatchHandler @ 00649c08 */
      FUN_0064a9f8(&local_d0,*(undefined4 *)(lVar20 + 0x20));
      puVar8 = local_c0;
      if ((local_d0 & 1) == 0) {
        local_c8 = (ulong)(local_d0 >> 1);
        puVar8 = auStack_cf;
      }
                    /* try { // try from 006496ec to 006496f3 has its CatchHandler @ 00649bc8 */
      puVar11 = (ulong *)FUN_0071302c(&local_b8,puVar8,local_c8);
      local_90 = (void *)puVar11[2];
      uStack_98 = puVar11[1];
      local_a0 = *puVar11;
      puVar11[1] = 0;
      puVar11[2] = 0;
      *puVar11 = 0;
                    /* try { // try from 0064970c to 0064971b has its CatchHandler @ 00649b9c */
      puVar11 = (ulong *)FUN_00713bdc(&local_a0,&DAT_001d047f);
      local_70 = (void *)puVar11[2];
      uStack_78 = puVar11[1];
      local_80 = *puVar11;
      puVar11[1] = 0;
      puVar11[2] = 0;
      *puVar11 = 0;
      uVar2 = *(ulong *)(param_4 + 8);
      pbVar17 = *(byte **)(param_4 + 0x10);
      if ((*param_4 & 1) == 0) {
        pbVar17 = param_4 + 1;
        uVar2 = (ulong)(*param_4 >> 1);
      }
                    /* try { // try from 0064974c to 00649753 has its CatchHandler @ 00649b44 */
      puVar13 = (undefined8 *)FUN_0071302c(&local_80,pbVar17,uVar2);
      goto LAB_00649924;
    }
    if (((DAT_007ae7e8 & 1) == 0) && (iVar10 = FUN_00739c1c(&DAT_007ae7e8), iVar10 != 0)) {
      DAT_007ae800 = 0;
      DAT_007ae808 = 0;
      DAT_007ae7f8 = 0;
      __cxa_atexit(PTR_FUN_007a13a0,&DAT_007ae7f8,&PTR_LOOP_0075ec90);
      FUN_00739d60(&DAT_007ae7e8);
    }
    bVar6 = *param_3;
    uVar2 = *(ulong *)(param_3 + 8);
    pbVar17 = *(byte **)(param_3 + 0x10);
    puVar3 = *(undefined **)(param_2 + 0x20);
    if (*(int *)(param_2 + 0x28) != 7) {
      puVar3 = PTR_PTR_007a2ed0;
    }
    bVar9 = (bVar6 & 1) == 0;
    *param_1 = 0;
    param_1[1] = 0;
    if (bVar9) {
      pbVar17 = param_3 + 1;
    }
    param_1[2] = 0;
    uVar1 = (ulong)(bVar6 >> 1);
    if (!bVar9) {
      uVar1 = uVar2;
    }
                    /* try { // try from 006494dc to 0064959f has its CatchHandler @ 00649c5c */
    uVar15 = FUN_0071302c(param_1,pbVar17,uVar1);
    FUN_00713bdc(uVar15,"opaque(");
    uVar16 = *(uint *)(puVar3 + 0x10);
    if ((uVar16 & 1) != 0) {
      pbVar17 = (byte *)(*(ulong *)(puVar3 + 0x18) & 0xfffffffffffffffc);
      bVar6 = *pbVar17;
      uVar2 = (ulong)(bVar6 >> 1);
      if ((bVar6 & 1) != 0) {
        uVar2 = *(ulong *)(pbVar17 + 8);
      }
      if (uVar2 != 0) {
        pbVar19 = *(byte **)(pbVar17 + 0x10);
        if ((bVar6 & 1) == 0) {
          pbVar19 = pbVar17 + 1;
        }
        uVar15 = FUN_0071302c(param_1,pbVar19);
        FUN_00713bdc(uVar15,&DAT_001ce2ff);
        uVar16 = *(uint *)(puVar3 + 0x10);
      }
    }
    if ((uVar16 >> 1 & 1) != 0) {
      pbVar17 = (byte *)(*(ulong *)(puVar3 + 0x20) & 0xfffffffffffffffc);
      bVar6 = *pbVar17;
      uVar2 = (ulong)(bVar6 >> 1);
      if ((bVar6 & 1) != 0) {
        uVar2 = *(ulong *)(pbVar17 + 8);
      }
      if (uVar2 != 0) {
        pbVar19 = *(byte **)(pbVar17 + 0x10);
        if ((bVar6 & 1) == 0) {
          pbVar19 = pbVar17 + 1;
        }
        FUN_0071302c(param_1,pbVar19);
      }
    }
    uVar15 = FUN_00713bdc(param_1,&DAT_001d047f);
    uVar2 = *(ulong *)(param_4 + 8);
    pbVar17 = *(byte **)(param_4 + 0x10);
    if ((*param_4 & 1) == 0) {
      pbVar17 = param_4 + 1;
      uVar2 = (ulong)(*param_4 >> 1);
    }
    FUN_0071302c(uVar15,pbVar17,uVar2);
  }
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
LAB_00649c90:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00649c94  FUN_00649c94 =====

void FUN_00649c94(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  void *pvVar10;
  ulong uVar11;
  undefined1 *puVar12;
  void *__dest;
  void *local_1d0;
  ulong local_1c8;
  void *local_1b0;
  ulong local_1a8;
  void *local_190;
  ulong local_188;
  ulong local_170;
  ulong local_168;
  undefined1 *local_160;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  ulong local_148;
  void *local_130;
  ulong local_128;
  ulong local_110;
  ulong local_108;
  void *local_100;
  void *local_f8;
  ulong local_f0;
  undefined1 *local_e8;
  void *local_d8;
  ulong local_d0;
  void *local_b8;
  ulong local_b0;
  void *local_98;
  ulong local_90;
  void *local_78;
  ulong local_70;
  long local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_0064b4a0(&local_78,param_1);
  FUN_0064ecbc(param_2);
  FUN_0064b594(&local_98,&DAT_001d7756);
  pvVar10 = local_78;
  uVar8 = local_70 - local_90;
  if ((local_70 < local_90) || (iVar3 = memcmp(local_78,local_98,local_90), iVar3 != 0)) {
    FUN_0064b594(&local_b8,"optional");
    pvVar10 = local_78;
    uVar8 = local_70 - local_b0;
    if ((local_b0 <= local_70) && (iVar3 = memcmp(local_78,local_b8,local_b0), iVar3 == 0)) {
      local_78 = (void *)((long)pvVar10 + local_b0);
      local_60 = local_60 + local_b0;
      local_70 = uVar8;
      FUN_0064ad30(&local_78);
      uVar8 = local_70;
      pvVar10 = local_78;
      if (0xfffffffffffffff7 < local_70) goto LAB_0064a65c;
      if (local_70 < 0x17) {
        puVar12 = (undefined1 *)((ulong)&local_f8 | 1);
        local_f8 = (void *)CONCAT71(local_f8._1_7_,(char)((int)local_70 << 1));
        if (local_70 != 0) goto LAB_0064a12c;
        *puVar12 = 0;
        if (*(int *)(param_2 + 0x28) != 9) goto LAB_0064a14c;
LAB_00649f3c:
        lVar4 = *(long *)(param_2 + 0x20);
        lVar7 = *(long *)(lVar4 + 0x18);
        *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 1;
      }
      else {
        uVar11 = (local_70 & 0xfffffffffffffff8) + 8;
        if ((local_70 | 7) != 0x17) {
          uVar11 = local_70 | 7;
        }
        puVar12 = (undefined1 *)FUN_00759c3c(uVar11 + 1);
        local_f8 = (void *)(uVar11 + 1 | 1);
        local_f0 = uVar8;
        local_e8 = puVar12;
LAB_0064a12c:
        memmove(puVar12,pvVar10,uVar8);
        puVar12[uVar8] = 0;
        if (*(int *)(param_2 + 0x28) == 9) goto LAB_00649f3c;
LAB_0064a14c:
                    /* try { // try from 0064a14c to 0064a1a7 has its CatchHandler @ 0064a6f4 */
        FUN_0065de80(param_2);
        *(undefined4 *)(param_2 + 0x28) = 9;
        puVar5 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_2 + 8) & 1) != 0) {
          puVar5 = (ulong *)*puVar5;
        }
        lVar4 = FUN_00661be8(puVar5);
        *(long *)(param_2 + 0x20) = lVar4;
        lVar7 = *(long *)(lVar4 + 0x18);
        *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 1;
      }
      if (lVar7 == 0) {
        puVar5 = (ulong *)(*(ulong *)(lVar4 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(lVar4 + 8) & 1) != 0) {
          puVar5 = (ulong *)*puVar5;
        }
        uVar9 = FUN_00661d68(puVar5);
        *(undefined8 *)(lVar4 + 0x18) = uVar9;
      }
      FUN_00649c94(&local_f8);
      goto LAB_0064a1a8;
    }
    FUN_0064b594(&local_d8,&DAT_001be0b5);
    pvVar10 = local_78;
    uVar8 = local_70 - local_d0;
    if ((local_70 < local_d0) || (iVar3 = memcmp(local_78,local_d8,local_d0), iVar3 != 0)) {
      FUN_0064b594(&local_190,"opaque");
      pvVar10 = local_78;
      uVar8 = local_70 - local_188;
      if ((local_70 < local_188) || (iVar3 = memcmp(local_78,local_190,local_188), iVar3 != 0)) {
        FUN_0064b594(&local_1b0,"sparse_tensor");
        pvVar10 = local_78;
        uVar8 = local_70 - local_1a8;
        if ((local_70 < local_1a8) || (iVar3 = memcmp(local_78,local_1b0,local_1a8), iVar3 != 0)) {
          FUN_0064b594(&local_1d0,"tensor");
          uVar11 = local_70;
          pvVar10 = local_78;
          uVar8 = local_70 - local_1c8;
          if ((local_70 < local_1c8) || (iVar3 = memcmp(local_78,local_1d0,local_1c8), iVar3 != 0))
          {
            FUN_0064afa4(&local_f8,pvVar10,uVar11);
                    /* try { // try from 00649e30 to 00649e3b has its CatchHandler @ 0064a6cc */
            FUN_0064b04c(&local_f8,&local_150);
            if (((ulong)local_f8 & 1) != 0) {
              free(local_e8);
            }
            lVar4 = FUN_0064b2f8(param_2);
            *(undefined4 *)(lVar4 + 0x20) = local_150;
            *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
            FUN_0064b36c();
          }
          else {
            local_78 = (void *)((long)pvVar10 + local_1c8);
            local_60 = local_60 + local_1c8;
            local_70 = uVar8;
            FUN_0064ad30(&local_78);
            FUN_0064afa4(&local_f8,local_78,local_70);
                    /* try { // try from 0064a1e4 to 0064a1ef has its CatchHandler @ 0064a6a4 */
            FUN_0064b04c(&local_f8,&local_150);
            if (((ulong)local_f8 & 1) != 0) {
              free(local_e8);
            }
            lVar4 = FUN_0064b2f8(param_2);
            *(undefined4 *)(lVar4 + 0x20) = local_150;
            *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
          }
        }
        else {
          local_78 = (void *)((long)pvVar10 + local_1a8);
          local_60 = local_60 + local_1a8;
          local_70 = uVar8;
          FUN_0064ad30(&local_78);
          uVar8 = local_70;
          pvVar10 = local_78;
          if (0xfffffffffffffff7 < local_70) goto LAB_0064a65c;
          if (local_70 < 0x17) {
            puVar12 = (undefined1 *)((ulong)&local_f8 | 1);
            local_f8 = (void *)CONCAT71(local_f8._1_7_,(char)((int)local_70 << 1));
            if (local_70 != 0) goto LAB_0064a4f0;
          }
          else {
            uVar11 = (local_70 & 0xfffffffffffffff8) + 8;
            if ((local_70 | 7) != 0x17) {
              uVar11 = local_70 | 7;
            }
            puVar12 = (undefined1 *)FUN_00759c3c(uVar11 + 1);
            local_f8 = (void *)(uVar11 + 1 | 1);
            local_f0 = uVar8;
            local_e8 = puVar12;
LAB_0064a4f0:
            memmove(puVar12,pvVar10,uVar8);
          }
          puVar12[uVar8] = 0;
                    /* try { // try from 0064a504 to 0064a50f has its CatchHandler @ 0064a6a8 */
          FUN_0064b04c(&local_f8,&local_150);
          if (((ulong)local_f8 & 1) != 0) {
            free(local_e8);
          }
          if (*(int *)(param_2 + 0x28) == 8) {
            lVar4 = *(long *)(param_2 + 0x20);
          }
          else {
            FUN_0065de80(param_2);
            *(undefined4 *)(param_2 + 0x28) = 8;
            puVar5 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc);
            if ((*(ulong *)(param_2 + 8) & 1) != 0) {
              puVar5 = (ulong *)*puVar5;
            }
            lVar4 = FUN_00661c68(puVar5);
            *(long *)(param_2 + 0x20) = lVar4;
          }
          *(undefined4 *)(lVar4 + 0x20) = local_150;
          *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
        }
      }
      else {
        local_78 = (void *)((long)pvVar10 + local_188);
        local_60 = local_60 + local_188;
        local_70 = uVar8;
        if (*(int *)(param_2 + 0x28) == 7) {
          uVar9 = *(undefined8 *)(param_2 + 0x20);
        }
        else {
          FUN_0065de80(param_2);
          *(undefined4 *)(param_2 + 0x28) = 7;
          puVar5 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc);
          if ((*(ulong *)(param_2 + 8) & 1) != 0) {
            puVar5 = (ulong *)*puVar5;
          }
          uVar9 = FUN_00661ce8(puVar5);
          *(undefined8 *)(param_2 + 0x20) = uVar9;
        }
        FUN_0064ad30(&local_78);
        if (local_70 != 0) {
          uVar8 = 0;
          do {
            if (*(char *)((long)local_78 + uVar8) == ',') {
              if (uVar8 != 0xffffffffffffffff) {
                if (uVar8 == 0) {
                  if (local_70 != 0) {
LAB_0064a5e4:
                    local_70 = ~uVar8 + local_70;
                    local_78 = (void *)((long)local_78 + uVar8 + 1);
                    local_60 = local_60 + uVar8 + 1;
                  }
                }
                else {
                  uVar6 = FUN_0064b2a0(uVar9);
                  FUN_00712d54(uVar6,local_78,uVar8);
                  if (uVar8 < local_70) goto LAB_0064a5e4;
                }
                if (local_70 == 0) goto LAB_0064a598;
              }
              break;
            }
            uVar8 = uVar8 + 1;
          } while (local_70 != uVar8);
          uVar9 = FUN_0064b2cc(uVar9);
          FUN_00712d54(uVar9,local_78,local_70);
        }
      }
    }
    else {
      local_78 = (void *)((long)pvVar10 + local_d0);
      local_60 = local_60 + local_d0;
      local_70 = uVar8;
      FUN_0064ad30(&local_78);
      if (local_70 != 0) {
        uVar8 = 0;
        do {
          if (*(char *)((long)local_78 + uVar8) == ',') goto LAB_00649f9c;
          uVar8 = uVar8 + 1;
        } while (local_70 != uVar8);
      }
      uVar8 = 0xffffffffffffffff;
LAB_00649f9c:
      FUN_0064b3d4(&local_f8,local_78,uVar8);
      uVar11 = local_f0;
      pvVar10 = local_f8;
      if (0xfffffffffffffff7 < local_f0) {
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_002fb400(&local_110);
        }
        goto LAB_0064a724;
      }
      if (local_f0 < 0x17) {
        __dest = (void *)((ulong)&local_110 | 1);
        local_110 = CONCAT71(local_110._1_7_,(char)((int)local_f0 << 1));
        if (local_f0 != 0) goto LAB_0064a250;
      }
      else {
        uVar1 = (local_f0 & 0xfffffffffffffff8) + 8;
        if ((local_f0 | 7) != 0x17) {
          uVar1 = local_f0 | 7;
        }
        __dest = (void *)FUN_00759c3c(uVar1 + 1);
        local_110 = uVar1 + 1 | 1;
        local_108 = uVar11;
        local_100 = __dest;
LAB_0064a250:
        memmove(__dest,pvVar10,uVar11);
      }
      *(undefined1 *)((long)__dest + uVar11) = 0;
      if (uVar8 <= local_70) {
        local_78 = (void *)((long)local_78 + uVar8);
        local_60 = local_60 + uVar8;
        local_70 = local_70 - uVar8;
      }
                    /* try { // try from 0064a288 to 0064a297 has its CatchHandler @ 0064a6b4 */
      FUN_0064b594(&local_130,&DAT_001ce2ff);
      uVar11 = local_70;
      pvVar10 = local_78;
      uVar8 = local_70 - local_128;
      if ((local_128 <= local_70) && (iVar3 = memcmp(local_78,local_130,local_128), iVar3 == 0)) {
        pvVar10 = (void *)((long)pvVar10 + local_128);
        local_60 = local_60 + local_128;
        uVar11 = uVar8;
        local_78 = pvVar10;
        local_70 = uVar8;
      }
                    /* try { // try from 0064a2d4 to 0064a2e3 has its CatchHandler @ 0064a6ac */
      FUN_0064b3d4(&local_150,pvVar10,uVar11);
                    /* try { // try from 0064a2e4 to 0064a323 has its CatchHandler @ 0064a6c4 */
      FUN_0064b04c(&local_110,&local_154);
      if (*(int *)(param_2 + 0x28) == 5) {
        lVar4 = *(long *)(param_2 + 0x20);
      }
      else {
        FUN_0065de80(param_2);
        *(undefined4 *)(param_2 + 0x28) = 5;
        puVar5 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_2 + 8) & 1) != 0) {
          puVar5 = (ulong *)*puVar5;
        }
        lVar4 = FUN_00661b68(puVar5);
        *(long *)(param_2 + 0x20) = lVar4;
      }
      *(undefined4 *)(lVar4 + 0x20) = local_154;
      *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
      if (0xfffffffffffffff7 < local_148) {
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0064a69c to 0064a6a3 has its CatchHandler @ 0064a6bc */
                    /* WARNING: Subroutine does not return */
          FUN_002fb400(&local_170);
        }
        goto LAB_0064a724;
      }
      if (local_148 < 0x17) {
        puVar12 = (undefined1 *)((ulong)&local_170 | 1);
        local_170 = CONCAT71(local_170._1_7_,(char)((int)local_148 << 1));
        if (local_148 != 0) goto LAB_0064a3c4;
        *puVar12 = 0;
        if (*(int *)(param_2 + 0x28) != 5) goto LAB_0064a3e4;
LAB_0064a378:
        lVar4 = *(long *)(param_2 + 0x20);
        lVar7 = *(long *)(lVar4 + 0x18);
        *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 1;
      }
      else {
        uVar8 = (local_148 & 0xfffffffffffffff8) + 8;
        if ((local_148 | 7) != 0x17) {
          uVar8 = local_148 | 7;
        }
                    /* try { // try from 0064a3ac to 0064a3b3 has its CatchHandler @ 0064a6bc */
        puVar12 = (undefined1 *)FUN_00759c3c(uVar8 + 1);
        local_170 = uVar8 + 1 | 1;
        local_168 = local_148;
        local_160 = puVar12;
LAB_0064a3c4:
        memmove(puVar12,(void *)CONCAT44(uStack_14c,local_150),local_148);
        puVar12[local_148] = 0;
        if (*(int *)(param_2 + 0x28) == 5) goto LAB_0064a378;
LAB_0064a3e4:
                    /* try { // try from 0064a3e4 to 0064a43f has its CatchHandler @ 0064a6d0 */
        FUN_0065de80(param_2);
        *(undefined4 *)(param_2 + 0x28) = 5;
        puVar5 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_2 + 8) & 1) != 0) {
          puVar5 = (ulong *)*puVar5;
        }
        lVar4 = FUN_00661b68(puVar5);
        *(long *)(param_2 + 0x20) = lVar4;
        lVar7 = *(long *)(lVar4 + 0x18);
        *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 1;
      }
      if (lVar7 == 0) {
        puVar5 = (ulong *)(*(ulong *)(lVar4 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(lVar4 + 8) & 1) != 0) {
          puVar5 = (ulong *)*puVar5;
        }
        uVar9 = FUN_00661d68(puVar5);
        *(undefined8 *)(lVar4 + 0x18) = uVar9;
      }
      FUN_00649c94(&local_170);
      if ((local_170 & 1) != 0) {
        free(local_160);
      }
      if ((local_110 & 1) != 0) {
        free(local_100);
      }
    }
  }
  else {
    local_78 = (void *)((long)pvVar10 + local_90);
    local_60 = local_60 + local_90;
    local_70 = uVar8;
    FUN_0064ad30(&local_78);
    uVar8 = local_70;
    pvVar10 = local_78;
    if (0xfffffffffffffff7 < local_70) {
LAB_0064a65c:
      if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_002fb400(&local_f8);
      }
      goto LAB_0064a724;
    }
    if (local_70 < 0x17) {
      puVar12 = (undefined1 *)((ulong)&local_f8 | 1);
      local_f8 = (void *)CONCAT71(local_f8._1_7_,(char)((int)local_70 << 1));
      if (local_70 != 0) goto LAB_0064a030;
      *puVar12 = 0;
      if (*(int *)(param_2 + 0x28) != 4) goto LAB_0064a050;
LAB_00649ec8:
      lVar4 = *(long *)(param_2 + 0x20);
      lVar7 = *(long *)(lVar4 + 0x18);
      *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 1;
    }
    else {
      uVar11 = (local_70 & 0xfffffffffffffff8) + 8;
      if ((local_70 | 7) != 0x17) {
        uVar11 = local_70 | 7;
      }
      puVar12 = (undefined1 *)FUN_00759c3c(uVar11 + 1);
      local_f8 = (void *)(uVar11 + 1 | 1);
      local_f0 = uVar8;
      local_e8 = puVar12;
LAB_0064a030:
      memmove(puVar12,pvVar10,uVar8);
      puVar12[uVar8] = 0;
      if (*(int *)(param_2 + 0x28) == 4) goto LAB_00649ec8;
LAB_0064a050:
                    /* try { // try from 0064a050 to 0064a0ab has its CatchHandler @ 0064a6f8 */
      FUN_0065de80(param_2);
      *(undefined4 *)(param_2 + 0x28) = 4;
      puVar5 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc);
      if ((*(ulong *)(param_2 + 8) & 1) != 0) {
        puVar5 = (ulong *)*puVar5;
      }
      lVar4 = FUN_00661ae8(puVar5);
      *(long *)(param_2 + 0x20) = lVar4;
      lVar7 = *(long *)(lVar4 + 0x18);
      *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 1;
    }
    if (lVar7 == 0) {
      puVar5 = (ulong *)(*(ulong *)(lVar4 + 8) & 0xfffffffffffffffc);
      if ((*(ulong *)(lVar4 + 8) & 1) != 0) {
        puVar5 = (ulong *)*puVar5;
      }
      uVar9 = FUN_00661d68(puVar5);
      *(undefined8 *)(lVar4 + 0x18) = uVar9;
    }
    FUN_00649c94(&local_f8);
LAB_0064a1a8:
    if (((ulong)local_f8 & 1) != 0) {
      free(local_e8);
    }
  }
LAB_0064a598:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_0064a724:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0064a728  FUN_0064a728 =====

undefined8 FUN_0064a728(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_0065e020(auStack_58,0,0);
                    /* try { // try from 0064a758 to 0064a76b has its CatchHandler @ 0064a79c */
  FUN_00649c94(param_1,auStack_58);
  uVar2 = FUN_00648c14(auStack_58);
  FUN_0065e3c8(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0064a7c4  FUN_0064a7c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0064a7c4(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_007ae7e0 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ae7e0), iVar2 != 0)) {
    __cxa_atexit(PTR_FUN_007a1110,&DAT_007ae838,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ae7e0);
  }
  FUN_00715bcc(&DAT_007ae838);
  if (((DAT_007ae7d8 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ae7d8), iVar2 != 0)) {
    DAT_007ae830 = 0x3f800000;
    uRam00000000007ae828 = 0;
    _DAT_007ae820 = 0;
    uRam00000000007ae818 = 0;
    _DAT_007ae810 = 0;
    __cxa_atexit(FUN_00648b9c,&DAT_007ae810,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ae7d8);
  }
                    /* try { // try from 0064a814 to 0064a81f has its CatchHandler @ 0064a9cc */
  lVar3 = FUN_0064cbf8(&DAT_007ae810,*param_1);
  if (((DAT_007ae7d8 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ae7d8), iVar2 != 0)) {
    DAT_007ae830 = 0x3f800000;
    uRam00000000007ae828 = 0;
    _DAT_007ae820 = 0;
    uRam00000000007ae818 = 0;
    _DAT_007ae810 = 0;
    __cxa_atexit(FUN_00648b9c,&DAT_007ae810,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ae7d8);
  }
  if (lVar3 == 0) {
    plVar4 = (long *)FUN_00753a74(0x10);
                    /* try { // try from 0064a93c to 0064a94b has its CatchHandler @ 0064a9bc */
    FUN_00714534(auStack_50,"Invalid data type ",*param_1);
                    /* try { // try from 0064a950 to 0064a997 has its CatchHandler @ 0064a998 */
    FUN_0071259c(plVar4,auStack_50);
    *plVar4 = (long)(PTR_DAT_007a0fb0 + 0x10);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(plVar4,PTR_PTR_007a0fb8,PTR_FUN_007a0fc0);
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_38) {
    FUN_00715bf8(&DAT_007ae838);
    return lVar3 + 0x28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0064a9f8  FUN_0064a9f8 =====

void FUN_0064a9f8(undefined8 *param_1,int param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar10 = tpidr_el0;
  local_38 = *(long *)(lVar10 + 0x28);
  if (((DAT_007ae7f0 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ae7f0), iVar2 != 0)) {
                    /* try { // try from 0064ac44 to 0064ac4f has its CatchHandler @ 0064ac74 */
    FUN_0064b77c(&DAT_007ae860);
    __cxa_atexit(PTR_FUN_007a2ed8,&DAT_007ae860,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ae7f0);
  }
  if (DAT_007ae890 != 0) {
    uVar4 = (ulong)param_2;
    uVar9 = NEON_cnt(DAT_007ae890,1);
    uVar8 = NEON_uaddlv(uVar9,1);
    uVar7 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8) & 0xffffffff;
    if (uVar7 < 2) {
      uVar5 = DAT_007ae890 - 1 & uVar4;
    }
    else {
      uVar5 = uVar4;
      if (DAT_007ae890 <= uVar4) {
        uVar5 = 0;
        if (DAT_007ae890 != 0) {
          uVar5 = uVar4 / DAT_007ae890;
        }
        uVar5 = uVar4 - uVar5 * DAT_007ae890;
      }
    }
    plVar6 = *(long **)(DAT_007ae888 + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar6[1] == uVar4) {
            if ((int)plVar6[2] == param_2) goto LAB_0064ab0c;
          }
          else if ((plVar6[1] & DAT_007ae890 - 1) != uVar5) break;
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar6[1];
          if (uVar7 == uVar4) {
            if ((int)plVar6[2] == param_2) goto LAB_0064ab0c;
          }
          else {
            if (DAT_007ae890 <= uVar7) {
              uVar1 = 0;
              if (DAT_007ae890 != 0) {
                uVar1 = uVar7 / DAT_007ae890;
              }
              uVar7 = uVar7 - uVar1 * DAT_007ae890;
            }
            if (uVar7 != uVar5) break;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
  plVar6 = (long *)FUN_00753a74(0x10);
                    /* try { // try from 0064ab84 to 0064ab8f has its CatchHandler @ 0064ad08 */
  FUN_00714798(auStack_88,param_2);
                    /* try { // try from 0064ab90 to 0064aba3 has its CatchHandler @ 0064acf0 */
  puVar3 = (undefined8 *)FUN_00713170(auStack_88,0,"Invalid tensor data type ");
  local_60 = puVar3[2];
  uStack_68 = puVar3[1];
  local_70 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
                    /* try { // try from 0064abbc to 0064abcb has its CatchHandler @ 0064acc0 */
  puVar3 = (undefined8 *)FUN_00713bdc(&local_70,&DAT_001c773b);
  local_40 = puVar3[2];
  uStack_48 = puVar3[1];
  local_50 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
                    /* try { // try from 0064abe8 to 0064ac2f has its CatchHandler @ 0064ac88 */
  FUN_0071259c(plVar6,&local_50);
  *plVar6 = (long)(PTR_DAT_007a0fb0 + 0x10);
  if (*(long *)(lVar10 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(plVar6,PTR_PTR_007a0fb8,PTR_FUN_007a0fc0);
  }
LAB_0064ad2c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0064ab0c:
  if ((*(byte *)(plVar6 + 3) & 1) == 0) {
    if (*(long *)(lVar10 + 0x28) == local_38) {
      lVar10 = plVar6[4];
      uVar9 = plVar6[3];
      param_1[2] = plVar6[5];
      param_1[1] = lVar10;
      *param_1 = uVar9;
      return;
    }
  }
  else if (*(long *)(lVar10 + 0x28) == local_38) {
    FUN_002fb36c(param_1,plVar6[5],plVar6[4]);
    return;
  }
  goto LAB_0064ad2c;
}


// ===== 0064ad30  FUN_0064ad30 =====

void FUN_0064ad30(long *param_1)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  void *__s1;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  void *local_88;
  ulong local_80;
  void *local_68;
  ulong local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  uVar6 = 0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar4 = param_1[1];
  uVar2 = uVar6;
  if (uVar4 != 0) {
    do {
      uVar7 = (uint)*(byte *)(*param_1 + uVar6);
      if ((uVar7 != 0x20) && (uVar2 = uVar6, uVar7 - 0xe < 0xfffffffb)) break;
      uVar6 = uVar6 + 1;
      uVar2 = uVar4;
    } while (uVar4 != uVar6);
  }
  if (uVar2 - 1 < uVar4) {
    *param_1 = *param_1 + uVar2;
    param_1[1] = uVar4 - uVar2;
    param_1[3] = param_1[3] + uVar2;
  }
  FUN_0064b594(&local_68,&DAT_001d8d1c);
  __s1 = (void *)*param_1;
  uVar6 = param_1[1];
  if ((local_60 <= uVar6) && (iVar3 = memcmp(__s1,local_68,local_60), iVar3 == 0)) {
    __s1 = (void *)((long)__s1 + local_60);
    *param_1 = (long)__s1;
    param_1[1] = uVar6 - local_60;
    param_1[3] = param_1[3] + local_60;
    uVar6 = uVar6 - local_60;
  }
  uVar4 = 0;
  uVar2 = uVar4;
  if (uVar6 != 0) {
    do {
      if ((*(byte *)((long)__s1 + uVar4) != 0x20) &&
         (uVar2 = uVar4, *(byte *)((long)__s1 + uVar4) - 0xe < 0xfffffffb)) break;
      uVar4 = uVar4 + 1;
      uVar2 = uVar6;
    } while (uVar6 != uVar4);
  }
  if (uVar2 - 1 < uVar6) {
    __s1 = (void *)((long)__s1 + uVar2);
    uVar6 = uVar6 - uVar2;
    *param_1 = (long)__s1;
    param_1[1] = uVar6;
    param_1[3] = param_1[3] + uVar2;
  }
  uVar4 = 0;
  uVar2 = uVar4;
  if (uVar6 != 0) {
    do {
      __s1 = (void *)((long)__s1 + -1);
      if ((*(byte *)((long)__s1 + uVar6) != 0x20) &&
         (uVar2 = uVar4, *(byte *)((long)__s1 + uVar6) - 0xe < 0xfffffffb)) break;
      uVar4 = uVar4 + 1;
      uVar2 = uVar6;
    } while (uVar6 != uVar4);
  }
  if (uVar2 - 1 < uVar6) {
    param_1[1] = uVar6 - uVar2;
  }
  FUN_0064b594(&local_88,&DAT_001d047f);
  uVar4 = param_1[1];
  uVar6 = uVar4 - local_80;
  if ((local_80 <= uVar4) &&
     (iVar3 = memcmp((void *)(*param_1 + uVar6),local_88,local_80), iVar3 == 0)) {
    param_1[1] = uVar6;
    uVar4 = uVar6;
  }
  uVar6 = 0;
  uVar2 = uVar6;
  if (uVar4 != 0) {
    lVar5 = *param_1;
    do {
      lVar5 = lVar5 + -1;
      if ((*(byte *)(lVar5 + uVar4) != 0x20) &&
         (uVar2 = uVar6, *(byte *)(lVar5 + uVar4) - 0xe < 0xfffffffb)) break;
      uVar6 = uVar6 + 1;
      uVar2 = uVar4;
    } while (uVar4 != uVar6);
  }
  if (uVar2 - 1 < uVar4) {
    param_1[1] = uVar4 - uVar2;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0064afa4  FUN_0064afa4 =====

void FUN_0064afa4(ulong *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 *__dest;
  
  if (0xfffffffffffffff7 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_002fb400(param_1);
  }
  if (param_3 < 0x17) {
    __dest = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)param_3 << 1);
    if (param_3 == 0) {
      *__dest = 0;
      return;
    }
  }
  else {
    uVar1 = (param_3 & 0xfffffffffffffff8) + 8;
    if ((param_3 | 7) != 0x17) {
      uVar1 = param_3 | 7;
    }
    __dest = (undefined1 *)FUN_00759c3c(uVar1 + 1);
    param_1[1] = param_3;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar1 + 1 | 1;
  }
  memmove(__dest,param_2,param_3);
  __dest[param_3] = 0;
  return;
}


// ===== 0064b04c  FUN_0064b04c =====

void FUN_0064b04c(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((DAT_007ae7f0 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ae7f0), iVar2 != 0)) {
                    /* try { // try from 0064b10c to 0064b117 has its CatchHandler @ 0064b218 */
    FUN_0064b77c(&DAT_007ae860);
    __cxa_atexit(PTR_FUN_007a2ed8,&DAT_007ae860,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ae7f0);
  }
  lVar3 = FUN_0064d55c(&DAT_007ae8b0,param_1);
  if (lVar3 == 0) {
    plVar4 = (long *)FUN_00753a74(0x10);
                    /* try { // try from 0064b148 to 0064b15b has its CatchHandler @ 0064b278 */
    FUN_00714534(auStack_78,
                 "DataTypeUtils::FromDataTypeString - Received invalid data type string \'",param_1)
    ;
                    /* try { // try from 0064b15c to 0064b16b has its CatchHandler @ 0064b260 */
    puVar5 = (undefined8 *)FUN_00713bdc(auStack_78,&DAT_001c90fe);
    local_50 = puVar5[2];
    uStack_58 = puVar5[1];
    local_60 = *puVar5;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
                    /* try { // try from 0064b188 to 0064b1cf has its CatchHandler @ 0064b22c */
    FUN_0071259c(plVar4,&local_60);
    *plVar4 = (long)(PTR_DAT_007a0fb0 + 0x10);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(plVar4,PTR_PTR_007a0fb8,PTR_FUN_007a0fc0);
    }
  }
  else {
    if (((DAT_007ae7f0 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ae7f0), iVar2 != 0)) {
                    /* try { // try from 0064b1e4 to 0064b1ef has its CatchHandler @ 0064b214 */
      FUN_0064b77c(&DAT_007ae860);
      __cxa_atexit(PTR_FUN_007a2ed8,&DAT_007ae860,&PTR_LOOP_0075ec90);
      FUN_00739d60(&DAT_007ae7f0);
    }
    local_60 = param_1;
    lVar3 = FUN_00647e68(&DAT_007ae860,param_1,PTR_DAT_007a10e8,&local_60,auStack_78);
    *param_2 = *(undefined4 *)(lVar3 + 0x28);
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0064b2a0  FUN_0064b2a0 =====

void FUN_0064b2a0(long param_1)

{
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_0066399c(param_1 + 0x18);
    return;
  }
  FUN_0066399c(param_1 + 0x18,*(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
  return;
}


// ===== 0064b2cc  FUN_0064b2cc =====

void FUN_0064b2cc(long param_1)

{
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_0066399c(param_1 + 0x20);
    return;
  }
  FUN_0066399c(param_1 + 0x20,*(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
  return;
}


// ===== 0064b2f8  FUN_0064b2f8 =====

undefined8 FUN_0064b2f8(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x28) == 1) {
    return *(undefined8 *)(param_1 + 0x20);
  }
  FUN_0065de80(param_1);
  *(undefined4 *)(param_1 + 0x28) = 1;
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    uVar1 = FUN_00661a68();
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    return uVar1;
  }
  uVar1 = FUN_00661a68(*(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return uVar1;
}


// ===== 0064b36c  FUN_0064b36c =====

void FUN_0064b36c(long param_1)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x18) != 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    uVar1 = FUN_006619e8();
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    return;
  }
  uVar1 = FUN_006619e8(*(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}


// ===== 0064b3d4  FUN_0064b3d4 =====

void FUN_0064b3d4(long *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_2;
  param_1[3] = param_2;
  if (param_3 == 0) {
LAB_0064b40c:
    uVar2 = uVar1 - 1;
  }
  else {
    do {
      if ((*(byte *)(param_2 + uVar1) != 0x20) && (*(byte *)(param_2 + uVar1) - 0xe < 0xfffffffb))
      goto LAB_0064b40c;
      uVar1 = uVar1 + 1;
    } while (param_3 != uVar1);
    uVar2 = param_3 - 1;
    uVar1 = param_3;
  }
  if (uVar2 < param_3) {
    param_2 = param_2 + uVar1;
    param_3 = param_3 - uVar1;
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[3] = param_2;
  }
  uVar1 = 0;
  uVar2 = uVar1;
  if (param_3 != 0) {
    do {
      param_2 = param_2 + -1;
      if ((*(byte *)(param_2 + param_3) != 0x20) &&
         (uVar2 = uVar1, *(byte *)(param_2 + param_3) - 0xe < 0xfffffffb)) break;
      uVar1 = uVar1 + 1;
      uVar2 = param_3;
    } while (param_3 != uVar1);
  }
  if (uVar2 - 1 < param_3) {
    param_1[1] = param_3 - uVar2;
  }
  return;
}


// ===== 0064b4a0  FUN_0064b4a0 =====

void FUN_0064b4a0(long *param_1,byte *param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  
  pbVar4 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar4 = param_2 + 1;
  }
  *param_1 = (long)pbVar4;
  bVar1 = *param_2;
  uVar5 = *(ulong *)(param_2 + 8);
  param_1[3] = (long)pbVar4;
  uVar3 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar3 = uVar5;
  }
  uVar5 = 0;
  param_1[1] = uVar3;
  param_1[2] = (long)pbVar4;
  uVar2 = uVar5;
  if (uVar3 != 0) {
    do {
      if ((pbVar4[uVar5] != 0x20) && (uVar2 = uVar5, pbVar4[uVar5] - 0xe < 0xfffffffb)) break;
      uVar5 = uVar5 + 1;
      uVar2 = uVar3;
    } while (uVar3 != uVar5);
  }
  if (uVar2 - 1 < uVar3) {
    pbVar4 = pbVar4 + uVar2;
    uVar3 = uVar3 - uVar2;
    *param_1 = (long)pbVar4;
    param_1[1] = uVar3;
    param_1[3] = (long)pbVar4;
  }
  uVar5 = 0;
  uVar2 = uVar5;
  if (uVar3 != 0) {
    do {
      pbVar4 = pbVar4 + -1;
      if ((pbVar4[uVar3] != 0x20) && (uVar2 = uVar5, pbVar4[uVar3] - 0xe < 0xfffffffb)) break;
      uVar5 = uVar5 + 1;
      uVar2 = uVar3;
    } while (uVar3 != uVar5);
  }
  if (uVar2 - 1 < uVar3) {
    param_1[1] = uVar3 - uVar2;
  }
  return;
}


// ===== 0064b594  FUN_0064b594 =====

void FUN_0064b594(long *param_1,char *param_2)

{
  size_t sVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  size_t sVar5;
  ulong uVar6;
  
  *param_1 = (long)param_2;
  uVar3 = strlen(param_2);
  lVar4 = *param_1;
  sVar5 = 0;
  param_1[1] = uVar3;
  param_1[2] = (long)param_2;
  param_1[3] = lVar4;
  sVar1 = sVar5;
  if (uVar3 != 0) {
    do {
      if ((*(byte *)(lVar4 + sVar5) != 0x20) &&
         (sVar1 = sVar5, *(byte *)(lVar4 + sVar5) - 0xe < 0xfffffffb)) break;
      sVar5 = sVar5 + 1;
      sVar1 = uVar3;
    } while (uVar3 != sVar5);
  }
  if (sVar1 - 1 < uVar3) {
    lVar4 = lVar4 + sVar1;
    uVar3 = uVar3 - sVar1;
    *param_1 = lVar4;
    param_1[1] = uVar3;
    param_1[3] = lVar4;
  }
  uVar6 = 0;
  uVar2 = uVar6;
  if (uVar3 != 0) {
    do {
      lVar4 = lVar4 + -1;
      if ((*(byte *)(lVar4 + uVar3) != 0x20) &&
         (uVar2 = uVar6, *(byte *)(lVar4 + uVar3) - 0xe < 0xfffffffb)) break;
      uVar6 = uVar6 + 1;
      uVar2 = uVar3;
    } while (uVar3 != uVar6);
  }
  if (uVar2 - 1 < uVar3) {
    param_1[1] = uVar3 - uVar2;
  }
  return;
}


// ===== 0064b68c  FUN_0064b68c =====

void FUN_0064b68c(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = (undefined8 *)param_1[0xc];
  while (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      free((void *)puVar1[4]);
    }
    free(puVar1);
    puVar1 = (undefined8 *)pvVar2;
  }
  pvVar2 = (void *)param_1[10];
  param_1[10] = 0;
  if (pvVar2 != (void *)0x0) {
    free(pvVar2);
  }
  puVar1 = (undefined8 *)param_1[7];
  while (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 3) & 1) != 0) {
      free((void *)puVar1[5]);
    }
    free(puVar1);
    puVar1 = (undefined8 *)pvVar2;
  }
  pvVar2 = (void *)param_1[5];
  param_1[5] = 0;
  if (pvVar2 != (void *)0x0) {
    free(pvVar2);
  }
  puVar1 = (undefined8 *)param_1[2];
  while (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      free((void *)puVar1[4]);
    }
    free(puVar1);
    puVar1 = (undefined8 *)pvVar2;
  }
  pvVar2 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  free(pvVar2);
  return;
}


// ===== 0064b77c  FUN_0064b77c =====

void FUN_0064b77c(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  size_t sVar4;
  long lVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 *local_80;
  size_t local_78;
  void *local_70;
  undefined1 uStack_61;
  undefined1 *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  sVar4 = strlen("float");
  if (0xfffffffffffffff7 < sVar4) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0064c88c to 0064c893 has its CatchHandler @ 0064cb4c */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_80);
    }
    goto LAB_0064cb84;
  }
  if (sVar4 < 0x17) {
    pvVar6 = (void *)((ulong)&local_80 | 1);
    local_80 = (undefined8 *)CONCAT71(local_80._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_0064b840;
  }
  else {
    uVar1 = (sVar4 & 0xfffffffffffffff8) + 8;
    if ((sVar4 | 7) != 0x17) {
      uVar1 = sVar4 | 7;
    }
                    /* try { // try from 0064b828 to 0064b82f has its CatchHandler @ 0064cb4c */
    pvVar6 = (void *)FUN_00759c3c(uVar1 + 1);
    local_80 = (undefined8 *)(uVar1 + 1 | 1);
    local_78 = sVar4;
    local_70 = pvVar6;
LAB_0064b840:
    memcpy(pvVar6,"float",sVar4);
  }
  *(undefined1 *)((long)pvVar6 + sVar4) = 0;
                    /* try { // try from 0064b860 to 0064b87b has its CatchHandler @ 0064cae0 */
  local_60 = (undefined1 *)&local_80;
  lVar5 = FUN_00647a00(param_1,&local_80,PTR_DAT_007a10e8,&local_60,&uStack_61);
  *(undefined4 *)(lVar5 + 0x28) = 1;
  if (((ulong)local_80 & 1) != 0) {
    free(local_70);
  }
  sVar4 = strlen("float16");
  if (0xfffffffffffffff7 < sVar4) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0064c8a4 to 0064c8ab has its CatchHandler @ 0064cb48 */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_80);
    }
    goto LAB_0064cb84;
  }
  if (sVar4 < 0x17) {
    pvVar6 = (void *)((ulong)&local_80 | 1);
    local_80 = (undefined8 *)CONCAT71(local_80._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_0064b8fc;
  }
  else {
    uVar1 = (sVar4 & 0xfffffffffffffff8) + 8;
    if ((sVar4 | 7) != 0x17) {
      uVar1 = sVar4 | 7;
    }
                    /* try { // try from 0064b8e4 to 0064b8eb has its CatchHandler @ 0064cb48 */
    pvVar6 = (void *)FUN_00759c3c(uVar1 + 1);
    local_80 = (undefined8 *)(uVar1 + 1 | 1);
    local_78 = sVar4;
    local_70 = pvVar6;
LAB_0064b8fc:
    memcpy(pvVar6,"float16",sVar4);
  }
  *(undefined1 *)((long)pvVar6 + sVar4) = 0;
                    /* try { // try from 0064b91c to 0064b937 has its CatchHandler @ 0064cadc */
  local_60 = (undefined1 *)&local_80;
  lVar5 = FUN_00647a00(param_1,&local_80,PTR_DAT_007a10e8,&local_60,&uStack_61);
  *(undefined4 *)(lVar5 + 0x28) = 10;
  if (((ulong)local_80 & 1) != 0) {
    free(local_70);
  }
  sVar4 = strlen("bfloat16");
  if (0xfffffffffffffff7 < sVar4) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0064c8bc to 0064c8c3 has its CatchHandler @ 0064cb44 */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_80);
    }
    goto LAB_0064cb84;
  }
  if (sVar4 < 0x17) {
    pvVar6 = (void *)((ulong)&local_80 | 1);
    local_80 = (undefined8 *)CONCAT71(local_80._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_0064b9b8;
  }
  else {
    uVar1 = (sVar4 & 0xfffffffffffffff8) + 8;
    if ((sVar4 | 7) != 0x17) {
      uVar1 = sVar4 | 7;
    }
                    /* try { // try from 0064b9a0 to 0064b9a7 has its CatchHandler @ 0064cb44 */
    pvVar6 = (void *)FUN_00759c3c(uVar1 + 1);
    local_80 = (undefined8 *)(uVar1 + 1 | 1);
    local_78 = sVar4;
    local_70 = pvVar6;
LAB_0064b9b8:
    memcpy(pvVar6,"bfloat16",sVar4);
  }
  *(undefined1 *)((long)pvVar6 + sVar4) = 0;
                    /* try { // try from 0064b9d8 to 0064b9f3 has its CatchHandler @ 0064cad8 */
  local_60 = (undefined1 *)&local_80;
  lVar5 = FUN_00647a00(param_1,&local_80,PTR_DAT_007a10e8,&local_60,&uStack_61);
  *(undefined4 *)(lVar5 + 0x28) = 0x10;
  if (((ulong)local_80 & 1) != 0) {
    free(local_70);
  }
  sVar4 = strlen("double");
  if (0xfffffffffffffff7 < sVar4) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0064c8d4 to 0064c8db has its CatchHandler @ 0064cb40 */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_80);
    }
    goto LAB_0064cb84;
  }
  if (sVar4 < 0x17) {
    pvVar6 = (void *)((ulong)&local_80 | 1);
    local_80 = (undefined8 *)CONCAT71(local_80._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_0064ba74;
  }
  else {
    uVar1 = (sVar4 & 0xfffffffffffffff8) + 8;
    if ((sVar4 | 7) != 0x17) {
      uVar1 = sVar4 | 7;
    }
                    /* try { // try from 0064ba5c to 0064ba63 has its CatchHandler @ 0064cb40 */
    pvVar6 = (void *)FUN_00759c3c(uVar1 + 1);
    local_80 = (undefined8 *)(uVar1 + 1 | 1);
    local_78 = sVar4;
    local_70 = pvVar6;
LAB_0064ba74:
    memcpy(pvVar6,"double",sVar4);
  }
  *(undefined1 *)((long)pvVar6 + sVar4) = 0;
                    /* try { // try from 0064ba94 to 0064baaf has its CatchHandler @ 0064cad4 */
  local_60 = (undefined1 *)&local_80;
  lVar5 = FUN_00647a00(param_1,&local_80,PTR_DAT_007a10e8,&local_60,&uStack_61);
  *(undefined4 *)(lVar5 + 0x28) = 0xb;
  if (((ulong)local_80 & 1) != 0) {
    free(local_70);
  }
  sVar4 = strlen("int8");
  if (0xfffffffffffffff7 < sVar4) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0064c8ec to 0064c8f3 has its CatchHandler @ 0064cb3c */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_80);
    }
    goto LAB_0064cb84;
  }
  if (sVar4 < 0x17) {
    pvVar6 = (void *)((ulong)&local_80 | 1);
    local_80 = (undefined8 *)CONCAT71(local_80._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_0064bb30;
  }
  else {
    uVar1 = (sVar4 & 0xfffffffffffffff8) + 8;
    if ((sVar4 | 7) != 0x17) {
      uVar1 = sVar4 | 7;
    }
                    /* try { // try from 0064bb18 to 0064bb1f has its CatchHandler @ 0064cb3c */
    pvVar6 = (void *)FUN_00759c3c(uVar1 + 1);
    local_80 = (undefined8 *)(uVar1 + 1 | 1);
    local_78 = sVar4;
    local_70 = pvVar6;
LAB_0064bb30:
    memcpy(pvVar6,&DAT_001d517b,sVar4);
  }
  *(undefined1 *)((long)pvVar6 + sVar4) = 0;
                    /* try { // try from 0064bb50 to 0064bb6b has its CatchHandler @ 0064cad0 */
  local_60 = (undefined1 *)&local_80;
  lVar5 = FUN_00647a00(param_1,&local_80,PTR_DAT_007a10e8,&local_60,&uStack_61);
  *(undefined4 *)(lVar5 + 0x28) = 3;
  if (((ulong)local_80 & 1) != 0) {
    free(local_70);
  }
  sVar4 = strlen("int16");
  if (0xfffffffffffffff7 < sVar4) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0064c904 to 0064c90b has its CatchHandler @ 0064cb38 */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_80);
    }
    goto LAB_0064cb84;
  }
  if (sVar4 < 0x17) {
    pvVar6 = (void *)((ulong)&local_80 | 1);
    local_80 = (undefined8 *)CONCAT71(local_80._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_0064bbec;
  }
  else {
    uVar1 = (sVar4 & 0xfffffffffffffff8) + 8;
    if ((sVar4 | 7) != 0x17) {
      uVar1 = sVar4 | 7;
    }
                    /* try { // try from 0064bbd4 to 0064bbdb has its CatchHandler @ 0064cb38 */
    pvVar6 = (void *)FUN_00759c3c(uVar1 + 1);
    local_80 = (undefined8 *)(uVar1 + 1 | 1);
    local_78 = sVar4;
    local_70 = pvVar6;
LAB_0064bbec:
    memcpy(pvVar6,"int16",sVar4);
  }
  *(undefined1 *)((long)pvVar6 + sVar4) = 0;
                    /* try { // try from 0064bc0c to 0064bc27 has its CatchHandler @ 0064cacc */
  local_60 = (undefined1 *)&local_80;
  lVar5 = FUN_00647a00(param_1,&local_80,PTR_DAT_007a10e8,&local_60,&uStack_61);
  *(undefined4 *)(lVar5 + 0x28) = 5;
  if (((ulong)local_80 & 1) != 0) {
    free(local_70);
  }
  sVar4 = strlen("int32");
  if (0xfffffffffffffff7 < sVar4) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0064c91c to 0064c923 has its CatchHandler @ 0064cb34 */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_80);
    }
    goto LAB_0064cb84;
  }
  if (sVar4 < 0x17) {
    pvVar6 = (void *)((ulong)&local_80 | 1);
    local_80 = (undefined8 *)CONCAT71(local_80._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_0064bca8;
  }
  else {
    uVar1 = (sVar4 & 0xfffffffffffffff8) + 8;
    if ((sVar4 | 7) != 0x17) {
      uVar1 = sVar4 | 7;
    }
                    /* try { // try from 0064bc90 to 0064bc97 has its CatchHandler @ 0064cb34 */
    pvVar6 = (void *)FUN_00759c3c(uVar1 + 1);
    local_80 = (undefined8 *)(uVar1 + 1 | 1);
    local_78 = sVar4;
    local_70 = pvVar6;
LAB_0064bca8:
    memcpy(pvVar6,"int32",sVar4);
  }
  *(undefined1 *)((long)pvVar6 + sVar4) = 0;
                    /* try { // try from 0064bcc8 to 0064bce3 has its CatchHandler @ 0064cac8 */
  local_60 = (undefined1 *)&local_80;
  lVar5 = FUN_00647a00(param_1,&local_80,PTR_DAT_007a10e8,&local_60,&uStack_61);
  *(undefined4 *)(lVar5 + 0x28) = 6;
  if (((ulong)local_80 & 1) != 0) {
    free(local_70);
  }
  sVar4 = strlen("int64");
  if (0xfffffffffffffff7 < sVar4) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0064c934 to 0064c93b has its CatchHandler @ 0064cb30 */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_80);
    }
    goto LAB_0064cb84;
  }
  if (sVar4 < 0x17) {
    pvVar6 = (void *)((ulong)&local_80 | 1);
    local_80 = (undefined8 *)CONCAT71(local_80._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_0064bd64;
  }
  else {
    uVar1 = (sVar4 & 0xfffffffffffffff8) + 8;
    if ((sVar4 | 7) != 0x17) {
      uVar1 = sVar4 | 7;
    }
                    /* try { // try from 0064bd4c to 0064bd53 has its CatchHandler @ 0064cb30 */
    pvVar6 = (void *)FUN_00759c3c(uVar1 + 1);
    local_80 = (undefined8 *)(uVar1 + 1 | 1);
    local_78 = sVar4;
    local_70 = pvVar6;
LAB_0064bd64:
    memcpy(pvVar6,"int64",sVar4);
  }
  *(undefined1 *)((long)pvVar6 + sVar4) = 0;
                    /* try { // try from 0064bd84 to 0064bd9f has its CatchHandler @ 0064cac4 */
  local_60 = (undefined1 *)&local_80;
  lVar5 = FUN_00647a00(param_1,&local_80,PTR_DAT_007a10e8,&local_60,&uStack_61);
  *(undefined4 *)(lVar5 + 0x28) = 7;
  if (((ulong)local_80 & 1) != 0) {
    free(local_70);
  }
  sVar4 = strlen("uint8");
  if (0xfffffffffffffff7 < sVar4) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0064c94c to 0064c953 has its CatchHandler @ 0064cb2c */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_80);
    }
    goto LAB_0064cb84;
  }
  if (sVar4 < 0x17) {
    pvVar6 = (void *)((ulong)&local_80 | 1);
    local_80 = (undefined8 *)CONCAT71(local_80._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_0064be20;
  }
  else {
    uVar1 = (sVar4 & 0xfffffffffffffff8) + 8;
    if ((sVar4 | 7) != 0x17) {
      uVar1 = sVar4 | 7;
    }
                    /* try { // try from 0064be08 to 0064be0f has its CatchHandler @ 0064cb2c */
    pvVar6 = (void *)FUN_00759c3c(uVar1 + 1);
    local_80 = (undefined8 *)(uVar1 + 1 | 1);
    local_78 = sVar4;
    local_70 = pvVar6;
LAB_0064be20:
    memcpy(pvVar6,"uint8",sVar4);
  }
  *(undefined1 *)((long)pvVar6 + sVar4) = 0;
                    /* try { // try from 0064be40 to 0064be5b has its CatchHandler @ 0064cac0 */
  local_60 = (undefined1 *)&local_80;
  lVar5 = FUN_00647a00(param_1,&local_80,PTR_DAT_007a10e8,&local_60,&uStack_61);
  *(undefined4 *)(lVar5 + 0x28) = 2;
  if (((ulong)local_80 & 1) != 0) {
    free(local_70);
  }
  sVar4 = strlen("uint16");
  if (0xfffffffffffffff7 < sVar4) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0064c964 to 0064c96b has its CatchHandler @ 0064cb28 */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_80);
    }
    goto LAB_0064cb84;
  }
  if (sVar4 < 0x17) {
    pvVar6 = (void *)((ulong)&local_80 | 1);
    local_80 = (undefined8 *)CONCAT71(local_80._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_0064bedc;
  }
  else {
    uVar1 = (sVar4 & 0xfffffffffffffff8) + 8;
    if ((sVar4 | 7) != 0x17) {
      uVar1 = sVar4 | 7;
    }
                    /* try { // try from 0064bec4 to 0064becb has its CatchHandler @ 0064cb28 */
    pvVar6 = (void *)FUN_00759c3c(uVar1 + 1);
    local_80 = (undefined8 *)(uVar1 + 1 | 1);
    local_78 = sVar4;
    local_70 = pvVar6;
LAB_0064bedc:
    memcpy(pvVar6,"uint16",sVar4);
  }
  *(undefined1 *)((long)pvVar6 + sVar4) = 0;
                    /* try { // try from 0064befc to 0064bf17 has its CatchHandler @ 0064cabc */
  local_60 = (undefined1 *)&local_80;
  lVar5 = FUN_00647a00(param_1,&local_80,PTR_DAT_007a10e8,&local_60,&uStack_61);
  *(undefined4 *)(lVar5 + 0x28) = 4;
  if (((ulong)local_80 & 1) != 0) {
    free(local_70);
  }
  sVar4 = strlen("uint32");
  if (0xfffffffffffffff7 < sVar4) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0064c97c to 0064c983 has its CatchHandler @ 0064cb24 */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_80);
    }
    goto LAB_0064cb84;
  }
  if (sVar4 < 0x17) {
    pvVar6 = (void *)((ulong)&local_80 | 1);
    local_80 = (undefined8 *)CONCAT71(local_80._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_0064bf98;
  }
  else {
    uVar1 = (sVar4 & 0xfffffffffffffff8) + 8;
    if ((sVar4 | 7) != 0x17) {
      uVar1 = sVar4 | 7;
    }
                    /* try { // try from 0064bf80 to 0064bf87 has its CatchHandler @ 0064cb24 */
    pvVar6 = (void *)FUN_00759c3c(uVar1 + 1);
    local_80 = (undefined8 *)(uVar1 + 1 | 1);
    local_78 = sVar4;
    local_70 = pvVar6;
LAB_0064bf98:
    memcpy(pvVar6,"uint32",sVar4);
  }
  *(undefined1 *)((long)pvVar6 + sVar4) = 0;
                    /* try { // try from 0064bfb8 to 0064bfd3 has its CatchHandler @ 0064cab8 */
  local_60 = (undefined1 *)&local_80;
  lVar5 = FUN_00647a00(param_1,&local_80,PTR_DAT_007a10e8,&local_60,&uStack_61);
  *(undefined4 *)(lVar5 + 0x28) = 0xc;
  if (((ulong)local_80 & 1) != 0) {
    free(local_70);
  }
  sVar4 = strlen("uint64");
  if (0xfffffffffffffff7 < sVar4) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0064c994 to 0064c99b has its CatchHandler @ 0064cb20 */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_80);
    }
    goto LAB_0064cb84;
  }
  if (sVar4 < 0x17) {
    pvVar6 = (void *)((ulong)&local_80 | 1);
    local_80 = (undefined8 *)CONCAT71(local_80._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_0064c054;
  }
  else {
    uVar1 = (sVar4 & 0xfffffffffffffff8) + 8;
    if ((sVar4 | 7) != 0x17) {
      uVar1 = sVar4 | 7;
    }
                    /* try { // try from 0064c03c to 0064c043 has its CatchHandler @ 0064cb20 */
    pvVar6 = (void *)FUN_00759c3c(uVar1 + 1);
    local_80 = (undefined8 *)(uVar1 + 1 | 1);
    local_78 = sVar4;
    local_70 = pvVar6;
LAB_0064c054:
    memcpy(pvVar6,"uint64",sVar4);
  }
  *(undefined1 *)((long)pvVar6 + sVar4) = 0;
                    /* try { // try from 0064c074 to 0064c08f has its CatchHandler @ 0064cab4 */
  local_60 = (undefined1 *)&local_80;
  lVar5 = FUN_00647a00(param_1,&local_80,PTR_DAT_007a10e8,&local_60,&uStack_61);
  *(undefined4 *)(lVar5 + 0x28) = 0xd;
  if (((ulong)local_80 & 1) != 0) {
    free(local_70);
  }
  sVar4 = strlen("complex64");
  if (0xfffffffffffffff7 < sVar4) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0064c9ac to 0064c9b3 has its CatchHandler @ 0064cb1c */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_80);
    }
    goto LAB_0064cb84;
  }
  if (sVar4 < 0x17) {
    pvVar6 = (void *)((ulong)&local_80 | 1);
    local_80 = (undefined8 *)CONCAT71(local_80._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_0064c110;
  }
  else {
    uVar1 = (sVar4 & 0xfffffffffffffff8) + 8;
    if ((sVar4 | 7) != 0x17) {
      uVar1 = sVar4 | 7;
    }
                    /* try { // try from 0064c0f8 to 0064c0ff has its CatchHandler @ 0064cb1c */
    pvVar6 = (void *)FUN_00759c3c(uVar1 + 1);
    local_80 = (undefined8 *)(uVar1 + 1 | 1);
    local_78 = sVar4;
    local_70 = pvVar6;
LAB_0064c110:
    memcpy(pvVar6,"complex64",sVar4);
  }
  *(undefined1 *)((long)pvVar6 + sVar4) = 0;
                    /* try { // try from 0064c130 to 0064c14b has its CatchHandler @ 0064cab0 */
  local_60 = (undefined1 *)&local_80;
  lVar5 = FUN_00647a00(param_1,&local_80,PTR_DAT_007a10e8,&local_60,&uStack_61);
  *(undefined4 *)(lVar5 + 0x28) = 0xe;
  if (((ulong)local_80 & 1) != 0) {
    free(local_70);
  }
  sVar4 = strlen("complex128");
  if (0xfffffffffffffff7 < sVar4) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0064c9c4 to 0064c9cb has its CatchHandler @ 0064cb18 */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_80);
    }
    goto LAB_0064cb84;
  }
  if (sVar4 < 0x17) {
    pvVar6 = (void *)((ulong)&local_80 | 1);
    local_80 = (undefined8 *)CONCAT71(local_80._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_0064c1cc;
  }
  else {
    uVar1 = (sVar4 & 0xfffffffffffffff8) + 8;
    if ((sVar4 | 7) != 0x17) {
      uVar1 = sVar4 | 7;
    }
                    /* try { // try from 0064c1b4 to 0064c1bb has its CatchHandler @ 0064cb18 */
    pvVar6 = (void *)FUN_00759c3c(uVar1 + 1);
    local_80 = (undefined8 *)(uVar1 + 1 | 1);
    local_78 = sVar4;
    local_70 = pvVar6;
LAB_0064c1cc:
    memcpy(pvVar6,"complex128",sVar4);
  }
  *(undefined1 *)((long)pvVar6 + sVar4) = 0;
                    /* try { // try from 0064c1ec to 0064c207 has its CatchHandler @ 0064caac */
  local_60 = (undefined1 *)&local_80;
  lVar5 = FUN_00647a00(param_1,&local_80,PTR_DAT_007a10e8,&local_60,&uStack_61);
  *(undefined4 *)(lVar5 + 0x28) = 0xf;
  if (((ulong)local_80 & 1) != 0) {
    free(local_70);
  }
  sVar4 = strlen("string");
  if (0xfffffffffffffff7 < sVar4) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0064c9dc to 0064c9e3 has its CatchHandler @ 0064cb14 */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_80);
    }
    goto LAB_0064cb84;
  }
  if (sVar4 < 0x17) {
    pvVar6 = (void *)((ulong)&local_80 | 1);
    local_80 = (undefined8 *)CONCAT71(local_80._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_0064c288;
  }
  else {
    uVar1 = (sVar4 & 0xfffffffffffffff8) + 8;
    if ((sVar4 | 7) != 0x17) {
      uVar1 = sVar4 | 7;
    }
                    /* try { // try from 0064c270 to 0064c277 has its CatchHandler @ 0064cb14 */
    pvVar6 = (void *)FUN_00759c3c(uVar1 + 1);
    local_80 = (undefined8 *)(uVar1 + 1 | 1);
    local_78 = sVar4;
    local_70 = pvVar6;
LAB_0064c288:
    memcpy(pvVar6,"string",sVar4);
  }
  *(undefined1 *)((long)pvVar6 + sVar4) = 0;
                    /* try { // try from 0064c2a8 to 0064c2c3 has its CatchHandler @ 0064caa8 */
  local_60 = (undefined1 *)&local_80;
  lVar5 = FUN_00647a00(param_1,&local_80,PTR_DAT_007a10e8,&local_60,&uStack_61);
  *(undefined4 *)(lVar5 + 0x28) = 8;
  if (((ulong)local_80 & 1) != 0) {
    free(local_70);
  }
  sVar4 = strlen("bool");
  if (0xfffffffffffffff7 < sVar4) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0064c9f4 to 0064c9fb has its CatchHandler @ 0064cb10 */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_80);
    }
    goto LAB_0064cb84;
  }
  if (sVar4 < 0x17) {
    pvVar6 = (void *)((ulong)&local_80 | 1);
    local_80 = (undefined8 *)CONCAT71(local_80._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_0064c344;
  }
  else {
    uVar1 = (sVar4 & 0xfffffffffffffff8) + 8;
    if ((sVar4 | 7) != 0x17) {
      uVar1 = sVar4 | 7;
    }
                    /* try { // try from 0064c32c to 0064c333 has its CatchHandler @ 0064cb10 */
    pvVar6 = (void *)FUN_00759c3c(uVar1 + 1);
    local_80 = (undefined8 *)(uVar1 + 1 | 1);
    local_78 = sVar4;
    local_70 = pvVar6;
LAB_0064c344:
    memcpy(pvVar6,&DAT_001c696e,sVar4);
  }
  *(undefined1 *)((long)pvVar6 + sVar4) = 0;
                    /* try { // try from 0064c364 to 0064c37f has its CatchHandler @ 0064caa4 */
  local_60 = (undefined1 *)&local_80;
  lVar5 = FUN_00647a00(param_1,&local_80,PTR_DAT_007a10e8,&local_60,&uStack_61);
  *(undefined4 *)(lVar5 + 0x28) = 9;
  if (((ulong)local_80 & 1) != 0) {
    free(local_70);
  }
  sVar4 = strlen("float8e4m3fn");
  if (0xfffffffffffffff7 < sVar4) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0064ca0c to 0064ca13 has its CatchHandler @ 0064cb0c */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_80);
    }
    goto LAB_0064cb84;
  }
  if (sVar4 < 0x17) {
    pvVar6 = (void *)((ulong)&local_80 | 1);
    local_80 = (undefined8 *)CONCAT71(local_80._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_0064c400;
  }
  else {
    uVar1 = (sVar4 & 0xfffffffffffffff8) + 8;
    if ((sVar4 | 7) != 0x17) {
      uVar1 = sVar4 | 7;
    }
                    /* try { // try from 0064c3e8 to 0064c3ef has its CatchHandler @ 0064cb0c */
    pvVar6 = (void *)FUN_00759c3c(uVar1 + 1);
    local_80 = (undefined8 *)(uVar1 + 1 | 1);
    local_78 = sVar4;
    local_70 = pvVar6;
LAB_0064c400:
    memcpy(pvVar6,"float8e4m3fn",sVar4);
  }
  *(undefined1 *)((long)pvVar6 + sVar4) = 0;
                    /* try { // try from 0064c420 to 0064c43b has its CatchHandler @ 0064caa0 */
  local_60 = (undefined1 *)&local_80;
  lVar5 = FUN_00647a00(param_1,&local_80,PTR_DAT_007a10e8,&local_60,&uStack_61);
  *(undefined4 *)(lVar5 + 0x28) = 0x11;
  if (((ulong)local_80 & 1) != 0) {
    free(local_70);
  }
  sVar4 = strlen("float8e4m3fnuz");
  if (0xfffffffffffffff7 < sVar4) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0064ca24 to 0064ca2b has its CatchHandler @ 0064cb08 */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_80);
    }
    goto LAB_0064cb84;
  }
  if (sVar4 < 0x17) {
    pvVar6 = (void *)((ulong)&local_80 | 1);
    local_80 = (undefined8 *)CONCAT71(local_80._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_0064c4bc;
  }
  else {
    uVar1 = (sVar4 & 0xfffffffffffffff8) + 8;
    if ((sVar4 | 7) != 0x17) {
      uVar1 = sVar4 | 7;
    }
                    /* try { // try from 0064c4a4 to 0064c4ab has its CatchHandler @ 0064cb08 */
    pvVar6 = (void *)FUN_00759c3c(uVar1 + 1);
    local_80 = (undefined8 *)(uVar1 + 1 | 1);
    local_78 = sVar4;
    local_70 = pvVar6;
LAB_0064c4bc:
    memcpy(pvVar6,"float8e4m3fnuz",sVar4);
  }
  *(undefined1 *)((long)pvVar6 + sVar4) = 0;
                    /* try { // try from 0064c4dc to 0064c4f7 has its CatchHandler @ 0064ca9c */
  local_60 = (undefined1 *)&local_80;
  lVar5 = FUN_00647a00(param_1,&local_80,PTR_DAT_007a10e8,&local_60,&uStack_61);
  *(undefined4 *)(lVar5 + 0x28) = 0x12;
  if (((ulong)local_80 & 1) != 0) {
    free(local_70);
  }
  sVar4 = strlen("float8e5m2");
  if (0xfffffffffffffff7 < sVar4) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0064ca3c to 0064ca43 has its CatchHandler @ 0064cb04 */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_80);
    }
    goto LAB_0064cb84;
  }
  if (sVar4 < 0x17) {
    pvVar6 = (void *)((ulong)&local_80 | 1);
    local_80 = (undefined8 *)CONCAT71(local_80._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_0064c578;
  }
  else {
    uVar1 = (sVar4 & 0xfffffffffffffff8) + 8;
    if ((sVar4 | 7) != 0x17) {
      uVar1 = sVar4 | 7;
    }
                    /* try { // try from 0064c560 to 0064c567 has its CatchHandler @ 0064cb04 */
    pvVar6 = (void *)FUN_00759c3c(uVar1 + 1);
    local_80 = (undefined8 *)(uVar1 + 1 | 1);
    local_78 = sVar4;
    local_70 = pvVar6;
LAB_0064c578:
    memcpy(pvVar6,"float8e5m2",sVar4);
  }
  *(undefined1 *)((long)pvVar6 + sVar4) = 0;
                    /* try { // try from 0064c598 to 0064c5b3 has its CatchHandler @ 0064ca98 */
  local_60 = (undefined1 *)&local_80;
  lVar5 = FUN_00647a00(param_1,&local_80,PTR_DAT_007a10e8,&local_60,&uStack_61);
  *(undefined4 *)(lVar5 + 0x28) = 0x13;
  if (((ulong)local_80 & 1) != 0) {
    free(local_70);
  }
  sVar4 = strlen("float8e5m2fnuz");
  if (0xfffffffffffffff7 < sVar4) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0064ca54 to 0064ca5b has its CatchHandler @ 0064cb00 */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_80);
    }
    goto LAB_0064cb84;
  }
  if (sVar4 < 0x17) {
    pvVar6 = (void *)((ulong)&local_80 | 1);
    local_80 = (undefined8 *)CONCAT71(local_80._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_0064c634;
  }
  else {
    uVar1 = (sVar4 & 0xfffffffffffffff8) + 8;
    if ((sVar4 | 7) != 0x17) {
      uVar1 = sVar4 | 7;
    }
                    /* try { // try from 0064c61c to 0064c623 has its CatchHandler @ 0064cb00 */
    pvVar6 = (void *)FUN_00759c3c(uVar1 + 1);
    local_80 = (undefined8 *)(uVar1 + 1 | 1);
    local_78 = sVar4;
    local_70 = pvVar6;
LAB_0064c634:
    memcpy(pvVar6,"float8e5m2fnuz",sVar4);
  }
  *(undefined1 *)((long)pvVar6 + sVar4) = 0;
                    /* try { // try from 0064c654 to 0064c66f has its CatchHandler @ 0064ca94 */
  local_60 = (undefined1 *)&local_80;
  lVar5 = FUN_00647a00(param_1,&local_80,PTR_DAT_007a10e8,&local_60,&uStack_61);
  *(undefined4 *)(lVar5 + 0x28) = 0x14;
  if (((ulong)local_80 & 1) != 0) {
    free(local_70);
  }
  sVar4 = strlen("uint4");
  if (0xfffffffffffffff7 < sVar4) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0064ca6c to 0064ca73 has its CatchHandler @ 0064cafc */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_80);
    }
    goto LAB_0064cb84;
  }
  if (sVar4 < 0x17) {
    pvVar6 = (void *)((ulong)&local_80 | 1);
    local_80 = (undefined8 *)CONCAT71(local_80._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_0064c6f0;
  }
  else {
    uVar1 = (sVar4 & 0xfffffffffffffff8) + 8;
    if ((sVar4 | 7) != 0x17) {
      uVar1 = sVar4 | 7;
    }
                    /* try { // try from 0064c6d8 to 0064c6df has its CatchHandler @ 0064cafc */
    pvVar6 = (void *)FUN_00759c3c(uVar1 + 1);
    local_80 = (undefined8 *)(uVar1 + 1 | 1);
    local_78 = sVar4;
    local_70 = pvVar6;
LAB_0064c6f0:
    memcpy(pvVar6,"uint4",sVar4);
  }
  *(undefined1 *)((long)pvVar6 + sVar4) = 0;
                    /* try { // try from 0064c710 to 0064c72b has its CatchHandler @ 0064ca90 */
  local_60 = (undefined1 *)&local_80;
  lVar5 = FUN_00647a00(param_1,&local_80,PTR_DAT_007a10e8,&local_60,&uStack_61);
  *(undefined4 *)(lVar5 + 0x28) = 0x15;
  if (((ulong)local_80 & 1) != 0) {
    free(local_70);
  }
  sVar4 = strlen("int4");
  if (0xfffffffffffffff7 < sVar4) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0064ca84 to 0064ca8b has its CatchHandler @ 0064caf8 */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_80);
    }
    goto LAB_0064cb84;
  }
  if (sVar4 < 0x17) {
    pvVar6 = (void *)((ulong)&local_80 | 1);
    local_80 = (undefined8 *)CONCAT71(local_80._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_0064c7ac;
  }
  else {
    uVar1 = (sVar4 & 0xfffffffffffffff8) + 8;
    if ((sVar4 | 7) != 0x17) {
      uVar1 = sVar4 | 7;
    }
                    /* try { // try from 0064c794 to 0064c79b has its CatchHandler @ 0064caf8 */
    pvVar6 = (void *)FUN_00759c3c(uVar1 + 1);
    local_80 = (undefined8 *)(uVar1 + 1 | 1);
    local_78 = sVar4;
    local_70 = pvVar6;
LAB_0064c7ac:
    memcpy(pvVar6,&DAT_001ee7f2,sVar4);
  }
  *(undefined1 *)((long)pvVar6 + sVar4) = 0;
                    /* try { // try from 0064c7cc to 0064c7e7 has its CatchHandler @ 0064ca8c */
  local_60 = (undefined1 *)&local_80;
  lVar5 = FUN_00647a00(param_1,&local_80,PTR_DAT_007a10e8,&local_60,&uStack_61);
  *(undefined4 *)(lVar5 + 0x28) = 0x16;
  if (((ulong)local_80 & 1) != 0) {
    free(local_70);
  }
  puVar3 = PTR_DAT_007a10e8;
  puVar7 = param_1 + 2;
  while (puVar7 = (undefined8 *)*puVar7, puVar7 != (undefined8 *)0x0) {
    local_80 = puVar7 + 5;
                    /* try { // try from 0064c81c to 0064c84b has its CatchHandler @ 0064cb50 */
    lVar5 = FUN_0064d7b0(param_1 + 5,local_80,puVar3,&local_80,&local_60);
    FUN_007139b0(lVar5 + 0x18,puVar7 + 2);
    FUN_005a3f00(param_1 + 10,puVar7 + 2,puVar7 + 2);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_0064cb84:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0064cb88  FUN_0064cb88 =====

void FUN_0064cb88(undefined8 *param_1)

{
  undefined8 *__ptr;
  void *pvVar1;
  
  __ptr = (undefined8 *)param_1[2];
  while (__ptr != (undefined8 *)0x0) {
    pvVar1 = (void *)*__ptr;
    if ((*(byte *)(__ptr + 3) & 1) != 0) {
      free((void *)__ptr[5]);
    }
    free(__ptr);
    __ptr = (undefined8 *)pvVar1;
  }
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  free(pvVar1);
  return;
}


// ===== 0064cbf8  FUN_0064cbf8 =====

long * FUN_0064cbf8(long *param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined2 uVar13;
  undefined8 uVar14;
  undefined1 uStack_59;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  uVar8 = *(ulong *)(param_2 + 8);
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
    uVar8 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 0064cc40 to 0064cc47 has its CatchHandler @ 0064ce48 */
  uVar8 = FUN_0034bfb4(&uStack_59,pbVar3,uVar8);
  uVar12 = param_1[1];
  if (uVar12 == 0) {
LAB_0064ce10:
    plVar9 = (long *)0x0;
  }
  else {
    uVar14 = NEON_cnt(uVar12,1);
    uVar13 = NEON_uaddlv(uVar14,1);
    uVar10 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
    if (uVar10 < 2) {
      uVar11 = uVar12 - 1 & uVar8;
    }
    else {
      uVar11 = uVar8;
      if (uVar12 <= uVar8) {
        uVar11 = 0;
        if (uVar12 != 0) {
          uVar11 = uVar8 / uVar12;
        }
        uVar11 = uVar8 - uVar11 * uVar12;
      }
    }
    plVar9 = *(long **)(*param_1 + uVar11 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      sVar1 = (ulong)(*param_2 >> 1);
      pbVar3 = param_2 + 1;
      if ((*param_2 & 1) != 0) {
        sVar1 = *(size_t *)(param_2 + 8);
        pbVar3 = *(byte **)(param_2 + 0x10);
      }
      if (uVar10 < 2) {
        do {
          if (plVar9[1] == uVar8) {
            bVar4 = *(byte *)(plVar9 + 2);
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar9[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar4 & 1) == 0) {
                if (bVar4 < 2) break;
                uVar10 = 0;
                while (*(byte *)((long)plVar9 + uVar10 + 0x11) == pbVar3[uVar10]) {
                  uVar10 = uVar10 + 1;
                  if (bVar4 >> 1 == uVar10) goto LAB_0064ce14;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar9[4],pbVar3,plVar9[3]);
                if (iVar7 == 0) break;
              }
            }
          }
          else if ((plVar9[1] & uVar12 - 1) != uVar11) goto LAB_0064ce10;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar9[1];
          if (uVar10 == uVar8) {
            bVar4 = *(byte *)(plVar9 + 2);
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar9[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar4 & 1) == 0) {
                if (bVar4 < 2) break;
                uVar10 = 0;
                while (*(byte *)((long)plVar9 + uVar10 + 0x11) == pbVar3[uVar10]) {
                  uVar10 = uVar10 + 1;
                  if (bVar4 >> 1 == uVar10) goto LAB_0064ce14;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar9[4],pbVar3,plVar9[3]);
                if (iVar7 == 0) break;
              }
            }
          }
          else {
            if (uVar12 <= uVar10) {
              uVar5 = 0;
              if (uVar12 != 0) {
                uVar5 = uVar10 / uVar12;
              }
              uVar10 = uVar10 - uVar5 * uVar12;
            }
            if (uVar10 != uVar11) goto LAB_0064ce10;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
LAB_0064ce14:
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return plVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0064ce4c  FUN_0064ce4c =====

void FUN_0064ce4c(long *param_1,byte *param_2,undefined8 param_3,undefined8 *param_4)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x25;
  undefined2 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long *local_80;
  long *plStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar13 = *(ulong *)(param_2 + 8);
  pbVar10 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar10 = param_2 + 1;
    uVar13 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 0064ce9c to 0064cea3 has its CatchHandler @ 0064d32c */
  uVar6 = FUN_0034bfb4(&local_80,pbVar10,uVar13);
  uVar13 = param_1[1];
  if (uVar13 != 0) {
    uVar15 = NEON_cnt(uVar13,1);
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar12 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    if (uVar12 < 2) {
      unaff_x25 = uVar13 - 1 & uVar6;
    }
    else {
      unaff_x25 = uVar6;
      if (uVar13 <= uVar6) {
        uVar9 = 0;
        if (uVar13 != 0) {
          uVar9 = uVar6 / uVar13;
        }
        unaff_x25 = uVar6 - uVar9 * uVar13;
      }
    }
    puVar11 = *(undefined8 **)(*param_1 + unaff_x25 * 8);
    if ((puVar11 != (undefined8 *)0x0) && (plVar7 = (long *)*puVar11, plVar7 != (long *)0x0)) {
      sVar1 = (ulong)(*param_2 >> 1);
      pbVar10 = param_2 + 1;
      if ((*param_2 & 1) != 0) {
        sVar1 = *(size_t *)(param_2 + 8);
        pbVar10 = *(byte **)(param_2 + 0x10);
      }
      if (uVar12 < 2) {
        do {
          if (plVar7[1] == uVar6) {
            bVar3 = *(byte *)(plVar7 + 2);
            sVar2 = (ulong)(bVar3 >> 1);
            if ((bVar3 & 1) != 0) {
              sVar2 = plVar7[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar3 & 1) == 0) {
                if (bVar3 < 2) goto LAB_0064d060;
                uVar12 = 0;
                while (*(byte *)((long)plVar7 + uVar12 + 0x11) == pbVar10[uVar12]) {
                  uVar12 = uVar12 + 1;
                  if (bVar3 >> 1 == uVar12) goto LAB_0064d060;
                }
              }
              else {
                iVar5 = memcmp((void *)plVar7[4],pbVar10,plVar7[3]);
                if (iVar5 == 0) goto LAB_0064d060;
              }
            }
          }
          else if ((plVar7[1] & uVar13 - 1) != unaff_x25) break;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar7[1];
          if (uVar12 == uVar6) {
            bVar3 = *(byte *)(plVar7 + 2);
            sVar2 = (ulong)(bVar3 >> 1);
            if ((bVar3 & 1) != 0) {
              sVar2 = plVar7[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar3 & 1) == 0) {
                if (bVar3 < 2) goto LAB_0064d060;
                uVar12 = 0;
                while (*(byte *)((long)plVar7 + uVar12 + 0x11) == pbVar10[uVar12]) {
                  uVar12 = uVar12 + 1;
                  if (bVar3 >> 1 == uVar12) goto LAB_0064d060;
                }
              }
              else {
                iVar5 = memcmp((void *)plVar7[4],pbVar10,plVar7[3]);
                if (iVar5 == 0) goto LAB_0064d060;
              }
            }
          }
          else {
            if (uVar13 <= uVar12) {
              uVar9 = 0;
              if (uVar13 != 0) {
                uVar9 = uVar12 / uVar13;
              }
              uVar12 = uVar12 - uVar9 * uVar13;
            }
            if (uVar12 != unaff_x25) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  plVar7 = param_1 + 2;
  plVar8 = (long *)FUN_00759c3c(0x58);
  pbVar10 = (byte *)*param_4;
  local_70 = 0;
  *plVar8 = 0;
  plVar8[1] = uVar6;
  local_80 = plVar8;
  plStack_78 = plVar7;
  if ((*pbVar10 & 1) == 0) {
    lVar17 = *(long *)(pbVar10 + 8);
    lVar16 = *(long *)pbVar10;
    plVar8[4] = *(long *)(pbVar10 + 0x10);
    plVar8[3] = lVar17;
    plVar8[2] = lVar16;
  }
  else {
                    /* try { // try from 0064d0a8 to 0064d0af has its CatchHandler @ 0064d2ec */
    FUN_002fb36c(plVar8 + 2,*(undefined8 *)(pbVar10 + 0x10),*(undefined8 *)(pbVar10 + 8));
  }
                    /* try { // try from 0064d0b0 to 0064d0bf has its CatchHandler @ 0064d2f4 */
  FUN_0065e020(plVar8 + 5,0,0);
  local_70 = 1;
  if ((uVar13 == 0) || (*(float *)(param_1 + 4) * (float)uVar13 < (float)(param_1[3] + 1))) {
    if (uVar13 < 3) {
      uVar12 = 1;
    }
    else {
      uVar12 = (ulong)((uVar13 & uVar13 - 1) != 0);
    }
    uVar12 = uVar12 | uVar13 << 1;
    uVar13 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar12 <= uVar13) {
      uVar12 = uVar13;
    }
    if (uVar12 - 1 == 0) {
      uVar12 = 2;
    }
    else if ((uVar12 & uVar12 - 1) != 0) {
                    /* try { // try from 0064d15c to 0064d1df has its CatchHandler @ 0064d2e8 */
      uVar12 = FUN_00711ce0(uVar12);
    }
    uVar13 = param_1[1];
    if (uVar13 < uVar12) {
LAB_0064d174:
      FUN_0064d384(param_1,uVar12);
    }
    else if (uVar12 < uVar13) {
      uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar13 < 3) {
LAB_0064d1dc:
        uVar9 = FUN_00711ce0();
      }
      else {
        uVar15 = NEON_cnt(uVar13,1);
        uVar14 = NEON_uaddlv(uVar15,1);
        if (1 < (CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff)) goto LAB_0064d1dc;
        if (1 < uVar9) {
          uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
        }
      }
      if (uVar12 <= uVar9) {
        uVar12 = uVar9;
      }
      if (uVar12 < uVar13) goto LAB_0064d174;
    }
    uVar13 = param_1[1];
    if ((uVar13 & uVar13 - 1) == 0) {
      unaff_x25 = uVar13 - 1 & uVar6;
      plVar8 = *(long **)(*param_1 + unaff_x25 * 8);
      goto joined_r0x0064d268;
    }
    if (uVar6 < uVar13) {
      plVar8 = *(long **)(*param_1 + uVar6 * 8);
      unaff_x25 = uVar6;
      goto joined_r0x0064d268;
    }
    uVar12 = 0;
    if (uVar13 != 0) {
      uVar12 = uVar6 / uVar13;
    }
    unaff_x25 = uVar6 - uVar12 * uVar13;
    plVar8 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar8 == (long *)0x0) goto LAB_0064d214;
LAB_0064d0fc:
    *local_80 = *plVar8;
    *plVar8 = (long)local_80;
  }
  else {
    plVar8 = *(long **)(*param_1 + unaff_x25 * 8);
joined_r0x0064d268:
    if (plVar8 != (long *)0x0) goto LAB_0064d0fc;
LAB_0064d214:
    *local_80 = param_1[2];
    param_1[2] = (long)local_80;
    *(long **)(*param_1 + unaff_x25 * 8) = plVar7;
    if (*local_80 != 0) {
      uVar6 = *(ulong *)(*local_80 + 8);
      if ((uVar13 & uVar13 - 1) == 0) {
        uVar6 = uVar6 & uVar13 - 1;
      }
      else if (uVar13 <= uVar6) {
        uVar12 = 0;
        if (uVar13 != 0) {
          uVar12 = uVar6 / uVar13;
        }
        uVar6 = uVar6 - uVar12 * uVar13;
      }
      *(long **)(*param_1 + uVar6 * 8) = local_80;
    }
  }
  uVar15 = 1;
  param_1[3] = param_1[3] + 1;
  plVar7 = local_80;
LAB_0064d2b8:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar7,uVar15);
LAB_0064d060:
  uVar15 = 0;
  goto LAB_0064d2b8;
}


// ===== 0064d330  FUN_0064d330 =====

void FUN_0064d330(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    if ((*(char *)(param_1 + 2) != '\0') &&
       (FUN_0065e3c8((long)__ptr + 0x28), (*(byte *)((long)__ptr + 0x10) & 1) != 0)) {
      free(*(void **)((long)__ptr + 0x20));
    }
    free(__ptr);
    return;
  }
  return;
}


// ===== 0064d384  FUN_0064d384 =====

void FUN_0064d384(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    pvVar3 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar3 != (void *)0x0) {
      free(pvVar3);
    }
    param_1[1] = 0;
    return;
  }
  if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  lVar2 = FUN_00759c3c(param_2 << 3);
  pvVar3 = (void *)*param_1;
  *param_1 = lVar2;
  if (pvVar3 != (void *)0x0) {
    free(pvVar3);
  }
  uVar4 = 0;
  param_1[1] = param_2;
  do {
    *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
    uVar4 = uVar4 + 1;
  } while (param_2 != uVar4);
  plVar6 = param_1 + 2;
  plVar5 = (long *)*plVar6;
  if (plVar5 == (long *)0x0) {
    return;
  }
  uVar4 = plVar5[1];
  uVar10 = NEON_cnt(param_2,1);
  uVar9 = NEON_uaddlv(uVar10,1);
  uVar8 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
  if (uVar8 < 2) {
    uVar4 = uVar4 & param_2 - 1;
    *(long **)(*param_1 + uVar4 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
  }
  else {
    if (param_2 <= uVar4) {
      uVar1 = 0;
      if (param_2 != 0) {
        uVar1 = uVar4 / param_2;
      }
      uVar4 = uVar4 - uVar1 * param_2;
    }
    *(long **)(*param_1 + uVar4 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
    if (1 < uVar8) {
      do {
        while( true ) {
          uVar8 = plVar6[1];
          if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          if (uVar8 != uVar4) break;
LAB_0064d508:
          plVar5 = plVar6;
          plVar6 = (long *)*plVar5;
          if (plVar6 == (long *)0x0) {
            return;
          }
        }
        if (*(long *)(*param_1 + uVar8 * 8) != 0) {
          *plVar5 = *plVar6;
          *plVar6 = **(long **)(*param_1 + uVar8 * 8);
          **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
          plVar6 = plVar5;
          goto LAB_0064d508;
        }
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
        plVar7 = (long *)*plVar6;
        plVar5 = plVar6;
        uVar4 = uVar8;
        plVar6 = plVar7;
        if (plVar7 == (long *)0x0) {
          return;
        }
      } while( true );
    }
  }
  do {
    uVar8 = plVar6[1] & param_2 - 1;
    if (uVar8 != uVar4) {
      if (*(long *)(*param_1 + uVar8 * 8) == 0) {
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
        uVar4 = uVar8;
      }
      else {
        *plVar5 = *plVar6;
        *plVar6 = **(long **)(*param_1 + uVar8 * 8);
        **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
        plVar6 = plVar5;
      }
    }
    plVar7 = (long *)*plVar6;
    plVar5 = plVar6;
    plVar6 = plVar7;
  } while (plVar7 != (long *)0x0);
  return;
}


// ===== 0064d55c  FUN_0064d55c =====

long * FUN_0064d55c(long *param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined2 uVar13;
  undefined8 uVar14;
  undefined1 uStack_59;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  uVar8 = *(ulong *)(param_2 + 8);
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
    uVar8 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 0064d5a4 to 0064d5ab has its CatchHandler @ 0064d7ac */
  uVar8 = FUN_0034bfb4(&uStack_59,pbVar3,uVar8);
  uVar12 = param_1[1];
  if (uVar12 == 0) {
LAB_0064d774:
    plVar9 = (long *)0x0;
  }
  else {
    uVar14 = NEON_cnt(uVar12,1);
    uVar13 = NEON_uaddlv(uVar14,1);
    uVar10 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
    if (uVar10 < 2) {
      uVar11 = uVar12 - 1 & uVar8;
    }
    else {
      uVar11 = uVar8;
      if (uVar12 <= uVar8) {
        uVar11 = 0;
        if (uVar12 != 0) {
          uVar11 = uVar8 / uVar12;
        }
        uVar11 = uVar8 - uVar11 * uVar12;
      }
    }
    plVar9 = *(long **)(*param_1 + uVar11 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      sVar1 = (ulong)(*param_2 >> 1);
      pbVar3 = param_2 + 1;
      if ((*param_2 & 1) != 0) {
        sVar1 = *(size_t *)(param_2 + 8);
        pbVar3 = *(byte **)(param_2 + 0x10);
      }
      if (uVar10 < 2) {
        do {
          if (uVar8 == plVar9[1]) {
            bVar4 = *(byte *)(plVar9 + 2);
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar9[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar4 & 1) == 0) {
                if (bVar4 < 2) break;
                uVar10 = 0;
                while (*(byte *)((long)plVar9 + uVar10 + 0x11) == pbVar3[uVar10]) {
                  uVar10 = uVar10 + 1;
                  if (bVar4 >> 1 == uVar10) goto LAB_0064d778;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar9[4],pbVar3,plVar9[3]);
                if (iVar7 == 0) break;
              }
            }
          }
          else if ((plVar9[1] & uVar12 - 1) != uVar11) goto LAB_0064d774;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar9[1];
          if (uVar8 == uVar10) {
            bVar4 = *(byte *)(plVar9 + 2);
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar9[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar4 & 1) == 0) {
                if (bVar4 < 2) break;
                uVar10 = 0;
                while (*(byte *)((long)plVar9 + uVar10 + 0x11) == pbVar3[uVar10]) {
                  uVar10 = uVar10 + 1;
                  if (bVar4 >> 1 == uVar10) goto LAB_0064d778;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar9[4],pbVar3,plVar9[3]);
                if (iVar7 == 0) break;
              }
            }
          }
          else {
            if (uVar12 <= uVar10) {
              uVar5 = 0;
              if (uVar12 != 0) {
                uVar5 = uVar10 / uVar12;
              }
              uVar10 = uVar10 - uVar5 * uVar12;
            }
            if (uVar10 != uVar11) goto LAB_0064d774;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
LAB_0064d778:
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return plVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0064d7b0  FUN_0064d7b0 =====

long * FUN_0064d7b0(long *param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *unaff_x26;
  undefined2 uVar17;
  undefined8 uVar18;
  float fVar19;
  
  lVar7 = tpidr_el0;
  lVar6 = *(long *)(lVar7 + 0x28);
  plVar15 = (long *)param_1[1];
  iVar3 = *param_2;
  plVar16 = (long *)(long)iVar3;
  if (plVar15 != (long *)0x0) {
    uVar18 = NEON_cnt(plVar15,1);
    uVar17 = NEON_uaddlv(uVar18,1);
    uVar12 = CONCAT62((int6)((ulong)uVar18 >> 0x10),uVar17) & 0xffffffff;
    if (uVar12 < 2) {
      unaff_x26 = (long *)((long)plVar15 - 1U & (ulong)plVar16);
    }
    else {
      unaff_x26 = plVar16;
      if (plVar15 <= plVar16) {
        uVar4 = 0;
        if (plVar15 != (long *)0x0) {
          uVar4 = (ulong)plVar16 / (ulong)plVar15;
        }
        unaff_x26 = (long *)((long)plVar16 - uVar4 * (long)plVar15);
      }
    }
    puVar11 = *(undefined8 **)(*param_1 + (long)unaff_x26 * 8);
    if ((puVar11 != (undefined8 *)0x0) && (plVar14 = (long *)*puVar11, plVar14 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if ((long *)plVar14[1] == plVar16) {
            if ((int)plVar14[2] == iVar3) goto LAB_0064d8b8;
          }
          else if ((long *)((ulong)plVar14[1] & (long)plVar15 - 1U) != unaff_x26) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          plVar5 = (long *)plVar14[1];
          if (plVar5 == plVar16) {
            if ((int)plVar14[2] == iVar3) goto LAB_0064d8b8;
          }
          else {
            if (plVar15 <= plVar5) {
              uVar12 = 0;
              if (plVar15 != (long *)0x0) {
                uVar12 = (ulong)plVar5 / (ulong)plVar15;
              }
              plVar5 = (long *)((long)plVar5 - uVar12 * (long)plVar15);
            }
            if (plVar5 != unaff_x26) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  plVar1 = param_1 + 2;
  plVar14 = (long *)FUN_00759c3c(0x30);
  fVar19 = *(float *)(param_1 + 4);
  uVar2 = *(undefined4 *)*param_4;
  *plVar14 = 0;
  plVar14[1] = (long)plVar16;
  *(undefined4 *)(plVar14 + 2) = uVar2;
  lVar8 = param_1[3];
  plVar14[4] = 0;
  plVar14[5] = 0;
  plVar14[3] = 0;
  plVar5 = plVar14;
  if ((plVar15 == (long *)0x0) || (fVar19 * (float)plVar15 < (float)(lVar8 + 1))) {
    if (plVar15 < (long *)0x3) {
      uVar12 = 1;
    }
    else {
      uVar12 = (ulong)(((ulong)plVar15 & (long)plVar15 - 1U) != 0);
    }
    plVar9 = (long *)(uVar12 | (long)plVar15 << 1);
    plVar13 = (long *)(long)((float)(lVar8 + 1) / fVar19);
    if (plVar9 <= plVar13) {
      plVar9 = plVar13;
    }
    if ((long)plVar9 - 1U == 0) {
      plVar9 = (long *)0x2;
    }
    else if (((ulong)plVar9 & (long)plVar9 - 1U) != 0) {
                    /* try { // try from 0064d990 to 0064da13 has its CatchHandler @ 0064db04 */
      plVar5 = (long *)FUN_00711ce0(plVar9);
      plVar15 = (long *)param_1[1];
      plVar9 = plVar5;
    }
    if (plVar15 < plVar9) {
LAB_0064d9a8:
      plVar5 = (long *)FUN_0064db7c(param_1,plVar9);
    }
    else if (plVar9 < plVar15) {
      plVar5 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (plVar15 < (long *)0x3) {
LAB_0064da10:
        plVar5 = (long *)FUN_00711ce0();
      }
      else {
        uVar18 = NEON_cnt(plVar15,1);
        uVar17 = NEON_uaddlv(uVar18,1);
        if (1 < (CONCAT62((int6)((ulong)uVar18 >> 0x10),uVar17) & 0xffffffff)) goto LAB_0064da10;
        if ((long *)0x1 < plVar5) {
          plVar5 = (long *)(1L << (-LZCOUNT((long)plVar5 + -1) & 0x3fU));
        }
      }
      if (plVar9 <= plVar5) {
        plVar9 = plVar5;
      }
      if (plVar9 < plVar15) goto LAB_0064d9a8;
    }
    plVar15 = (long *)param_1[1];
    if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar15 - 1U & (ulong)plVar16);
      lVar8 = *param_1;
      plVar9 = *(long **)(lVar8 + (long)unaff_x26 * 8);
      goto joined_r0x0064da88;
    }
    if (plVar16 < plVar15) {
      lVar8 = *param_1;
      plVar9 = *(long **)(lVar8 + (long)plVar16 * 8);
      unaff_x26 = plVar16;
      goto joined_r0x0064da88;
    }
    uVar12 = 0;
    if (plVar15 != (long *)0x0) {
      uVar12 = (ulong)plVar16 / (ulong)plVar15;
    }
    unaff_x26 = (long *)((long)plVar16 - uVar12 * (long)plVar15);
    lVar8 = *param_1;
    plVar9 = *(long **)(lVar8 + (long)unaff_x26 * 8);
    if (plVar9 == (long *)0x0) goto LAB_0064da44;
LAB_0064d938:
    *plVar14 = *plVar9;
LAB_0064dac0:
    *plVar9 = (long)plVar14;
  }
  else {
    lVar8 = *param_1;
    plVar9 = *(long **)(lVar8 + (long)unaff_x26 * 8);
joined_r0x0064da88:
    if (plVar9 != (long *)0x0) goto LAB_0064d938;
LAB_0064da44:
    lVar10 = *plVar1;
    *plVar1 = (long)plVar14;
    *plVar14 = lVar10;
    *(long **)(lVar8 + (long)unaff_x26 * 8) = plVar1;
    if (*plVar14 != 0) {
      plVar16 = *(long **)(*plVar14 + 8);
      if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
        plVar16 = (long *)((ulong)plVar16 & (long)plVar15 - 1U);
      }
      else if (plVar15 <= plVar16) {
        uVar12 = 0;
        if (plVar15 != (long *)0x0) {
          uVar12 = (ulong)plVar16 / (ulong)plVar15;
        }
        plVar16 = (long *)((long)plVar16 - uVar12 * (long)plVar15);
      }
      plVar9 = (long *)(*param_1 + (long)plVar16 * 8);
      goto LAB_0064dac0;
    }
  }
  uVar18 = 1;
  param_1[3] = param_1[3] + 1;
  lVar7 = *(long *)(lVar7 + 0x28);
joined_r0x0064d8c8:
  if (lVar7 != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar5,uVar18);
  }
  return plVar14;
LAB_0064d8b8:
  uVar18 = 0;
  lVar7 = *(long *)(lVar7 + 0x28);
  plVar5 = param_1;
  goto joined_r0x0064d8c8;
}


// ===== 0064db2c  FUN_0064db2c =====

void FUN_0064db2c(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    if ((*(char *)(param_1 + 2) != '\0') && ((*(byte *)((long)__ptr + 0x18) & 1) != 0)) {
      free(*(void **)((long)__ptr + 0x28));
    }
    free(__ptr);
    return;
  }
  return;
}


// ===== 0064db7c  FUN_0064db7c =====

void FUN_0064db7c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    pvVar3 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar3 != (void *)0x0) {
      free(pvVar3);
    }
    param_1[1] = 0;
    return;
  }
  if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  lVar2 = FUN_00759c3c(param_2 << 3);
  pvVar3 = (void *)*param_1;
  *param_1 = lVar2;
  if (pvVar3 != (void *)0x0) {
    free(pvVar3);
  }
  uVar4 = 0;
  param_1[1] = param_2;
  do {
    *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
    uVar4 = uVar4 + 1;
  } while (param_2 != uVar4);
  plVar6 = param_1 + 2;
  plVar5 = (long *)*plVar6;
  if (plVar5 == (long *)0x0) {
    return;
  }
  uVar4 = plVar5[1];
  uVar10 = NEON_cnt(param_2,1);
  uVar9 = NEON_uaddlv(uVar10,1);
  uVar8 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
  if (uVar8 < 2) {
    uVar4 = uVar4 & param_2 - 1;
    *(long **)(*param_1 + uVar4 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
  }
  else {
    if (param_2 <= uVar4) {
      uVar1 = 0;
      if (param_2 != 0) {
        uVar1 = uVar4 / param_2;
      }
      uVar4 = uVar4 - uVar1 * param_2;
    }
    *(long **)(*param_1 + uVar4 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
    if (1 < uVar8) {
      do {
        while( true ) {
          uVar8 = plVar6[1];
          if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          if (uVar8 != uVar4) break;
LAB_0064dd00:
          plVar5 = plVar6;
          plVar6 = (long *)*plVar5;
          if (plVar6 == (long *)0x0) {
            return;
          }
        }
        if (*(long *)(*param_1 + uVar8 * 8) != 0) {
          *plVar5 = *plVar6;
          *plVar6 = **(long **)(*param_1 + uVar8 * 8);
          **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
          plVar6 = plVar5;
          goto LAB_0064dd00;
        }
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
        plVar7 = (long *)*plVar6;
        plVar5 = plVar6;
        uVar4 = uVar8;
        plVar6 = plVar7;
        if (plVar7 == (long *)0x0) {
          return;
        }
      } while( true );
    }
  }
  do {
    uVar8 = plVar6[1] & param_2 - 1;
    if (uVar8 != uVar4) {
      if (*(long *)(*param_1 + uVar8 * 8) == 0) {
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
        uVar4 = uVar8;
      }
      else {
        *plVar5 = *plVar6;
        *plVar6 = **(long **)(*param_1 + uVar8 * 8);
        **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
        plVar6 = plVar5;
      }
    }
    plVar7 = (long *)*plVar6;
    plVar5 = plVar6;
    plVar6 = plVar7;
  } while (plVar7 != (long *)0x0);
  return;
}


// ===== 0064dd54  FUN_0064dd54 =====

undefined * FUN_0064dd54(void)

{
  return &DAT_007aa0b8;
}


// ===== 0064dd60  FUN_0064dd60 =====

undefined8 FUN_0064dd60(void)

{
  FUN_00684e4c(PTR_DAT_007a2ee0,0);
  return DAT_007ae8d8;
}


// ===== 0064dd88  FUN_0064dd88 =====

void FUN_0064dd88(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_007a2ee8;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  param_1[4] = param_2;
  param_1[5] = 0;
  param_1[6] = param_2;
  param_1[7] = param_2;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = uVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = param_2;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = param_2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = param_2;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = param_2;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  puVar2 = PTR_DAT_007a2ea0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x16] = (long)puVar2;
  param_1[0x17] = (long)puVar2;
  param_1[0x18] = (long)puVar2;
  param_1[0x19] = (long)puVar2;
  return;
}


// ===== 0064ddec  FUN_0064ddec =====

void FUN_0064ddec(undefined8 *param_1)

{
  void *__ptr;
  
  *param_1 = &PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) &&
     (__ptr = (void *)(param_1[1] + -2), __ptr != (void *)0x0)) {
    FUN_00662da0(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 0064de3c  FUN_0064de3c =====

void FUN_0064de3c(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  void *pvVar5;
  ulong *puVar6;
  uint uVar7;
  ulong *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  
  puVar8 = param_1 + 1;
  *puVar8 = 0;
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  iVar2 = *(int *)(param_2 + 0x18);
  *param_1 = &PTR_FUN_00797d30;
  if (iVar2 != 0) {
                    /* try { // try from 0064de98 to 0064de9f has its CatchHandler @ 0064e36c */
    FUN_00674a70(param_1 + 3);
    pvVar5 = *(void **)(param_2 + 0x20);
    *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + *(int *)(param_2 + 0x18);
    memcpy((void *)param_1[4],pvVar5,(long)*(int *)(param_2 + 0x18) << 2);
  }
  param_1[5] = 0;
  param_1[6] = 0;
  if (*(int *)(param_2 + 0x28) != 0) {
                    /* try { // try from 0064ded4 to 0064dedb has its CatchHandler @ 0064e2f0 */
    FUN_006741e8(param_1 + 5);
    pvVar5 = *(void **)(param_2 + 0x30);
    *(int *)(param_1 + 5) = *(int *)(param_1 + 5) + *(int *)(param_2 + 0x28);
    memcpy((void *)param_1[6],pvVar5,(long)*(int *)(param_2 + 0x28) << 3);
  }
  puVar10 = param_1 + 7;
  *puVar10 = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  iVar2 = *(int *)(param_2 + 0x40);
  if (iVar2 != 0) {
    lVar12 = *(long *)(param_2 + 0x48);
                    /* try { // try from 0064df18 to 0064df47 has its CatchHandler @ 0064e344 */
    uVar4 = FUN_00675710(puVar10,iVar2);
    FUN_005d663c(puVar10,uVar4,lVar12 + 8,iVar2,*(int *)param_1[9] - *(int *)(param_1 + 8));
    iVar3 = *(int *)param_1[9];
    iVar2 = *(int *)(param_1 + 8) + iVar2;
    *(int *)(param_1 + 8) = iVar2;
    if (iVar3 < iVar2) {
      *(int *)param_1[9] = iVar2;
    }
  }
  puVar10 = param_1 + 10;
  *puVar10 = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  iVar2 = *(int *)(param_2 + 0x58);
  if (iVar2 != 0) {
    lVar12 = *(long *)(param_2 + 0x60);
                    /* try { // try from 0064df80 to 0064dfaf has its CatchHandler @ 0064e330 */
    uVar4 = FUN_00675710(puVar10,iVar2);
    FUN_006622fc(puVar10,uVar4,lVar12 + 8,iVar2,*(int *)param_1[0xc] - *(int *)(param_1 + 0xb));
    iVar3 = *(int *)param_1[0xc];
    iVar2 = *(int *)(param_1 + 0xb) + iVar2;
    *(int *)(param_1 + 0xb) = iVar2;
    if (iVar3 < iVar2) {
      *(int *)param_1[0xc] = iVar2;
    }
  }
  puVar10 = param_1 + 0xd;
  *puVar10 = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  iVar2 = *(int *)(param_2 + 0x70);
  if (iVar2 != 0) {
    lVar12 = *(long *)(param_2 + 0x78);
                    /* try { // try from 0064dfe8 to 0064e017 has its CatchHandler @ 0064e31c */
    uVar4 = FUN_00675710(puVar10,iVar2);
    FUN_00662384(puVar10,uVar4,lVar12 + 8,iVar2,*(int *)param_1[0xf] - *(int *)(param_1 + 0xe));
    iVar3 = *(int *)param_1[0xf];
    iVar2 = *(int *)(param_1 + 0xe) + iVar2;
    *(int *)(param_1 + 0xe) = iVar2;
    if (iVar3 < iVar2) {
      *(int *)param_1[0xf] = iVar2;
    }
  }
  puVar10 = param_1 + 0x10;
  *puVar10 = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  iVar2 = *(int *)(param_2 + 0x88);
  if (iVar2 != 0) {
    lVar12 = *(long *)(param_2 + 0x90);
                    /* try { // try from 0064e050 to 0064e07f has its CatchHandler @ 0064e308 */
    uVar4 = FUN_00675710(puVar10,iVar2);
    FUN_0066240c(puVar10,uVar4,lVar12 + 8,iVar2,*(int *)param_1[0x12] - *(int *)(param_1 + 0x11));
    iVar3 = *(int *)param_1[0x12];
    iVar2 = *(int *)(param_1 + 0x11) + iVar2;
    *(int *)(param_1 + 0x11) = iVar2;
    if (iVar3 < iVar2) {
      *(int *)param_1[0x12] = iVar2;
    }
  }
  puVar10 = param_1 + 0x13;
  *puVar10 = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  iVar2 = *(int *)(param_2 + 0xa0);
  if (iVar2 != 0) {
    lVar12 = *(long *)(param_2 + 0xa8);
                    /* try { // try from 0064e0c0 to 0064e0ef has its CatchHandler @ 0064e2f8 */
    uVar4 = FUN_00675710(puVar10,iVar2);
    FUN_00662494(puVar10,uVar4,lVar12 + 8,iVar2,*(int *)param_1[0x15] - *(int *)(param_1 + 0x14));
    iVar3 = *(int *)param_1[0x15];
    iVar2 = *(int *)(param_1 + 0x14) + iVar2;
    *(int *)(param_1 + 0x14) = iVar2;
    if (iVar3 < iVar2) {
      *(int *)param_1[0x15] = iVar2;
    }
  }
  puVar10 = param_1 + 0x16;
  param_1[0x17] = 0;
  *puVar10 = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  puVar11 = param_1 + 0x18;
  param_1[0x19] = 0;
  *puVar11 = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
                    /* try { // try from 0064e13c to 0064e203 has its CatchHandler @ 0064e36c */
    FUN_006621e0(puVar8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  }
  uVar7 = *(uint *)(param_2 + 0x10);
  *puVar10 = &DAT_007aea80;
  if ((uVar7 & 1) != 0) {
    puVar6 = (ulong *)(*puVar8 & 0xfffffffffffffffc);
    if ((*puVar8 & 1) != 0) {
      puVar6 = (ulong *)*puVar6;
    }
    FUN_006636d4(puVar10,*(ulong *)(param_2 + 0xb0) & 0xfffffffffffffffc,puVar6);
    uVar7 = *(uint *)(param_2 + 0x10);
  }
  param_1[0x17] = &DAT_007aea80;
  if ((uVar7 >> 1 & 1) != 0) {
    puVar6 = (ulong *)(*puVar8 & 0xfffffffffffffffc);
    if ((*puVar8 & 1) != 0) {
      puVar6 = (ulong *)*puVar6;
    }
    FUN_006636d4(param_1 + 0x17,*(ulong *)(param_2 + 0xb8) & 0xfffffffffffffffc,puVar6);
    uVar7 = *(uint *)(param_2 + 0x10);
  }
  *puVar11 = &DAT_007aea80;
  if ((uVar7 >> 2 & 1) != 0) {
    puVar6 = (ulong *)(*puVar8 & 0xfffffffffffffffc);
    if ((*puVar8 & 1) != 0) {
      puVar6 = (ulong *)*puVar6;
    }
    FUN_006636d4(puVar11,*(ulong *)(param_2 + 0xc0) & 0xfffffffffffffffc,puVar6);
    uVar7 = *(uint *)(param_2 + 0x10);
  }
  param_1[0x19] = &DAT_007aea80;
  if ((uVar7 >> 3 & 1) != 0) {
    puVar6 = (ulong *)(*puVar8 & 0xfffffffffffffffc);
    if ((*puVar8 & 1) != 0) {
      puVar6 = (ulong *)*puVar6;
    }
    FUN_006636d4(param_1 + 0x19,*(ulong *)(param_2 + 200) & 0xfffffffffffffffc,puVar6);
    uVar7 = *(uint *)(param_2 + 0x10);
  }
  if ((uVar7 >> 4 & 1) != 0) {
    uVar9 = *(undefined8 *)(param_2 + 0xd0);
    uVar4 = FUN_00759c3c(0x100);
                    /* try { // try from 0064e204 to 0064e20f has its CatchHandler @ 0064e2d4 */
    FUN_00657d44(uVar4,uVar9);
    param_1[0x1a] = uVar4;
    uVar7 = *(uint *)(param_2 + 0x10);
  }
  if ((uVar7 >> 5 & 1) != 0) {
                    /* try { // try from 0064e21c to 0064e227 has its CatchHandler @ 0064e36c */
    uVar9 = *(undefined8 *)(param_2 + 0xd8);
    uVar4 = FUN_00759c3c(0xe8);
                    /* try { // try from 0064e228 to 0064e233 has its CatchHandler @ 0064e2d0 */
    FUN_00655ba0(uVar4,uVar9);
    param_1[0x1b] = uVar4;
    uVar7 = *(uint *)(param_2 + 0x10);
  }
  if ((uVar7 >> 6 & 1) != 0) {
                    /* try { // try from 0064e240 to 0064e24b has its CatchHandler @ 0064e36c */
    uVar9 = *(undefined8 *)(param_2 + 0xe0);
    uVar4 = FUN_00759c3c(0x30);
                    /* try { // try from 0064e24c to 0064e257 has its CatchHandler @ 0064e2cc */
    FUN_0065e050(uVar4,uVar9);
    param_1[0x1c] = uVar4;
    uVar7 = *(uint *)(param_2 + 0x10);
  }
  if ((uVar7 >> 7 & 1) != 0) {
                    /* try { // try from 0064e264 to 0064e26f has its CatchHandler @ 0064e36c */
    uVar9 = *(undefined8 *)(param_2 + 0xe8);
    uVar4 = FUN_00759c3c(0x38);
                    /* try { // try from 0064e270 to 0064e27b has its CatchHandler @ 0064e2c8 */
    FUN_0065a2ac(uVar4,uVar9);
    param_1[0x1d] = uVar4;
  }
  uVar4 = *(undefined8 *)(param_2 + 0xf0);
  param_1[0x1f] = *(undefined8 *)(param_2 + 0xf8);
  param_1[0x1e] = uVar4;
  return;
}


// ===== 0064e380  FUN_0064e380 =====

void FUN_0064e380(long *param_1)

{
  if ((param_1[2] != 0) && (*param_1 == 0)) {
                    /* try { // try from 0064e398 to 0064e39b has its CatchHandler @ 0064e3a4 */
    FUN_00675910();
  }
  return;
}


// ===== 0064e3a8  FUN_0064e3a8 =====

void FUN_0064e3a8(long *param_1)

{
  if ((param_1[2] != 0) && (*param_1 == 0)) {
                    /* try { // try from 0064e3c0 to 0064e3c3 has its CatchHandler @ 0064e3cc */
    FUN_00675910();
  }
  return;
}


// ===== 0064e3d0  FUN_0064e3d0 =====

void FUN_0064e3d0(long *param_1)

{
  if ((param_1[2] != 0) && (*param_1 == 0)) {
                    /* try { // try from 0064e3e8 to 0064e3eb has its CatchHandler @ 0064e3f4 */
    FUN_00675910();
  }
  return;
}


// ===== 0064e3f8  FUN_0064e3f8 =====

void FUN_0064e3f8(undefined8 *param_1)

{
  void *__ptr;
  ulong uVar1;
  
  if ((param_1[1] & 1) == 0) {
    uVar1 = param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 0064e418 to 0064e427 has its CatchHandler @ 0064e46c */
    uVar1 = FUN_00662218();
  }
  if (uVar1 == 0) {
    FUN_0064e470(param_1);
  }
  *param_1 = &PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) &&
     (__ptr = (void *)(param_1[1] + -2), __ptr != (void *)0x0)) {
    FUN_00662da0(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 0064e470  FUN_0064e470 =====

void FUN_0064e470(undefined **param_1)

{
  undefined *puVar1;
  
  FUN_00674b68(param_1 + 3);
  FUN_006742e4(param_1 + 5);
  FUN_00675290(param_1 + 7);
  if ((param_1[0xc] != (undefined *)0x0) && (param_1[10] == (undefined *)0x0)) {
                    /* try { // try from 0064e4ac to 0064e4af has its CatchHandler @ 0064e5a8 */
    FUN_00675910();
  }
  if ((param_1[0xf] != (undefined *)0x0) && (param_1[0xd] == (undefined *)0x0)) {
                    /* try { // try from 0064e4c4 to 0064e4c7 has its CatchHandler @ 0064e5a4 */
    FUN_00675910();
  }
  if ((param_1[0x12] != (undefined *)0x0) && (param_1[0x10] == (undefined *)0x0)) {
                    /* try { // try from 0064e4dc to 0064e4df has its CatchHandler @ 0064e5a0 */
    FUN_00675910();
  }
  if ((param_1[0x15] != (undefined *)0x0) && (param_1[0x13] == (undefined *)0x0)) {
                    /* try { // try from 0064e4f4 to 0064e4f7 has its CatchHandler @ 0064e59c */
    FUN_00675910();
  }
  FUN_00663a20(param_1 + 0x16);
  FUN_00663a20(param_1 + 0x17);
  FUN_00663a20(param_1 + 0x18);
  FUN_00663a20(param_1 + 0x19);
  if (param_1 != &PTR_PTR_FUN_007a9890) {
    puVar1 = param_1[0x1a];
    if (puVar1 != (undefined *)0x0) {
      FUN_00658234(puVar1);
      free(puVar1);
    }
    puVar1 = param_1[0x1b];
    if (puVar1 != (undefined *)0x0) {
      FUN_0065612c(puVar1);
      free(puVar1);
    }
    puVar1 = param_1[0x1c];
    if (puVar1 != (undefined *)0x0) {
      FUN_0065e3c8(puVar1);
      free(puVar1);
    }
    puVar1 = param_1[0x1d];
    if (puVar1 != (undefined *)0x0) {
      FUN_0065a3d8(puVar1);
      free(puVar1);
      return;
    }
  }
  return;
}


// ===== 0064e5ac  FUN_0064e5ac =====

void FUN_0064e5ac(void *param_1)

{
  FUN_0064e3f8();
  free(param_1);
  return;
}


// ===== 0064e5d0  FUN_0064e5d0 =====

void FUN_0064e5d0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// ===== 0064e5d8  FUN_0064e5d8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0064e5d8(long param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  byte *pbVar7;
  long lVar8;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x40)) {
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x48) + 8);
    do {
      while (pbVar7 = (byte *)*puVar5, (*pbVar7 & 1) == 0) {
        pbVar7[0] = 0;
        pbVar7[1] = 0;
        uVar4 = uVar4 - 1;
        puVar5 = puVar5 + 1;
        if (uVar4 == 0) goto LAB_0064e640;
      }
      **(undefined1 **)(pbVar7 + 0x10) = 0;
      pbVar7[8] = 0;
      pbVar7[9] = 0;
      pbVar7[10] = 0;
      pbVar7[0xb] = 0;
      pbVar7[0xc] = 0;
      pbVar7[0xd] = 0;
      pbVar7[0xe] = 0;
      pbVar7[0xf] = 0;
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar4 != 0);
LAB_0064e640:
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  uVar4 = (ulong)*(uint *)(param_1 + 0x58);
  if (0 < (int)*(uint *)(param_1 + 0x58)) {
    puVar5 = *(undefined8 **)(param_1 + 0x60);
    do {
      puVar5 = puVar5 + 1;
      FUN_0064e914(*puVar5);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  uVar4 = (ulong)*(uint *)(param_1 + 0x70);
  if (0 < (int)*(uint *)(param_1 + 0x70)) {
    puVar5 = *(undefined8 **)(param_1 + 0x78);
    do {
      puVar5 = puVar5 + 1;
      FUN_0064ea98(*puVar5);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  uVar4 = (ulong)*(uint *)(param_1 + 0x88);
  if (0 < (int)*(uint *)(param_1 + 0x88)) {
    plVar6 = *(long **)(param_1 + 0x90);
    do {
      plVar6 = plVar6 + 1;
      lVar8 = *plVar6;
      if ((*(byte *)(lVar8 + 0x10) & 1) == 0) {
        FUN_0065de80(lVar8);
        bVar3 = *(byte *)(lVar8 + 8);
        *(undefined4 *)(lVar8 + 0x10) = 0;
      }
      else {
        pbVar7 = (byte *)(*(ulong *)(lVar8 + 0x18) & 0xfffffffffffffffc);
        if ((*pbVar7 & 1) == 0) {
          pbVar7[0] = 0;
          pbVar7[1] = 0;
          FUN_0065de80(lVar8);
          bVar3 = *(byte *)(lVar8 + 8);
          *(undefined4 *)(lVar8 + 0x10) = 0;
        }
        else {
          **(undefined1 **)(pbVar7 + 0x10) = 0;
          pbVar7[8] = 0;
          pbVar7[9] = 0;
          pbVar7[10] = 0;
          pbVar7[0xb] = 0;
          pbVar7[0xc] = 0;
          pbVar7[0xd] = 0;
          pbVar7[0xe] = 0;
          pbVar7[0xf] = 0;
          FUN_0065de80(lVar8);
          bVar3 = *(byte *)(lVar8 + 8);
          *(undefined4 *)(lVar8 + 0x10) = 0;
        }
      }
      if ((bVar3 & 1) != 0) {
        FUN_006622b8(lVar8 + 8);
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  FUN_00662084(param_1 + 0x98);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xff) == 0) goto LAB_0064e8b4;
  if ((uVar1 & 1) != 0) {
    pbVar7 = (byte *)(*(ulong *)(param_1 + 0xb0) & 0xfffffffffffffffc);
    if ((*pbVar7 & 1) == 0) {
      pbVar7[0] = 0;
      pbVar7[1] = 0;
    }
    else {
      **(undefined1 **)(pbVar7 + 0x10) = 0;
      pbVar7[8] = 0;
      pbVar7[9] = 0;
      pbVar7[10] = 0;
      pbVar7[0xb] = 0;
      pbVar7[0xc] = 0;
      pbVar7[0xd] = 0;
      pbVar7[0xe] = 0;
      pbVar7[0xf] = 0;
    }
  }
  if ((uVar1 >> 1 & 1) != 0) {
    pbVar7 = (byte *)(*(ulong *)(param_1 + 0xb8) & 0xfffffffffffffffc);
    if ((*pbVar7 & 1) == 0) {
      pbVar7[0] = 0;
      pbVar7[1] = 0;
    }
    else {
      **(undefined1 **)(pbVar7 + 0x10) = 0;
      pbVar7[8] = 0;
      pbVar7[9] = 0;
      pbVar7[10] = 0;
      pbVar7[0xb] = 0;
      pbVar7[0xc] = 0;
      pbVar7[0xd] = 0;
      pbVar7[0xe] = 0;
      pbVar7[0xf] = 0;
    }
  }
  if ((uVar1 >> 2 & 1) != 0) {
    pbVar7 = (byte *)(*(ulong *)(param_1 + 0xc0) & 0xfffffffffffffffc);
    if ((*pbVar7 & 1) == 0) {
      pbVar7[0] = 0;
      pbVar7[1] = 0;
    }
    else {
      **(undefined1 **)(pbVar7 + 0x10) = 0;
      pbVar7[8] = 0;
      pbVar7[9] = 0;
      pbVar7[10] = 0;
      pbVar7[0xb] = 0;
      pbVar7[0xc] = 0;
      pbVar7[0xd] = 0;
      pbVar7[0xe] = 0;
      pbVar7[0xf] = 0;
    }
  }
  if ((uVar1 >> 3 & 1) != 0) {
    pbVar7 = (byte *)(*(ulong *)(param_1 + 200) & 0xfffffffffffffffc);
    if ((*pbVar7 & 1) == 0) {
      pbVar7[0] = 0;
      pbVar7[1] = 0;
    }
    else {
      **(undefined1 **)(pbVar7 + 0x10) = 0;
      pbVar7[8] = 0;
      pbVar7[9] = 0;
      pbVar7[10] = 0;
      pbVar7[0xb] = 0;
      pbVar7[0xc] = 0;
      pbVar7[0xd] = 0;
      pbVar7[0xe] = 0;
      pbVar7[0xf] = 0;
    }
  }
  if ((uVar1 >> 4 & 1) != 0) {
    FUN_0064e914(*(undefined8 *)(param_1 + 0xd0));
  }
  if ((uVar1 >> 5 & 1) != 0) {
    FUN_0064ea98(*(undefined8 *)(param_1 + 0xd8));
  }
  if ((uVar1 >> 6 & 1) != 0) {
    lVar8 = *(long *)(param_1 + 0xe0);
    if ((*(byte *)(lVar8 + 0x10) & 1) == 0) {
LAB_0064e854:
      FUN_0065de80(lVar8);
      bVar3 = *(byte *)(lVar8 + 8);
      *(undefined4 *)(lVar8 + 0x10) = 0;
    }
    else {
      pbVar7 = (byte *)(*(ulong *)(lVar8 + 0x18) & 0xfffffffffffffffc);
      if ((*pbVar7 & 1) == 0) {
        pbVar7[0] = 0;
        pbVar7[1] = 0;
        goto LAB_0064e854;
      }
      **(undefined1 **)(pbVar7 + 0x10) = 0;
      pbVar7[8] = 0;
      pbVar7[9] = 0;
      pbVar7[10] = 0;
      pbVar7[0xb] = 0;
      pbVar7[0xc] = 0;
      pbVar7[0xd] = 0;
      pbVar7[0xe] = 0;
      pbVar7[0xf] = 0;
      FUN_0065de80(lVar8);
      bVar3 = *(byte *)(lVar8 + 8);
      *(undefined4 *)(lVar8 + 0x10) = 0;
    }
    if ((bVar3 & 1) != 0) {
      FUN_006622b8(lVar8 + 8);
    }
  }
  if ((uVar1 >> 7 & 1) != 0) {
    lVar8 = *(long *)(param_1 + 0xe8);
    uVar2 = *(uint *)(lVar8 + 0x10);
    *(undefined4 *)(lVar8 + 0x18) = 0;
    if ((uVar2 & 3) != 0) {
      if ((uVar2 & 1) != 0) {
        FUN_0064e914(*(undefined8 *)(lVar8 + 0x28));
      }
      if ((uVar2 >> 1 & 1) != 0) {
        FUN_0064e914(*(undefined8 *)(lVar8 + 0x30));
      }
    }
    *(undefined4 *)(lVar8 + 0x10) = 0;
    if ((*(byte *)(lVar8 + 8) & 1) != 0) {
      FUN_006622b8((byte *)(lVar8 + 8));
    }
  }
LAB_0064e8b4:
  if ((uVar1 & 0x700) != 0) {
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006622b8((byte *)(param_1 + 8));
    return;
  }
  return;
}


// ===== 0064e914  FUN_0064e914 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0064e914(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x58)) {
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0x60) + 8);
    do {
      while (pbVar5 = (byte *)*puVar4, (*pbVar5 & 1) == 0) {
        pbVar5[0] = 0;
        pbVar5[1] = 0;
        uVar3 = uVar3 - 1;
        puVar4 = puVar4 + 1;
        if (uVar3 == 0) goto LAB_0064e97c;
      }
      **(undefined1 **)(pbVar5 + 0x10) = 0;
      pbVar5[8] = 0;
      pbVar5[9] = 0;
      pbVar5[10] = 0;
      pbVar5[0xb] = 0;
      pbVar5[0xc] = 0;
      pbVar5[0xd] = 0;
      pbVar5[0xe] = 0;
      pbVar5[0xf] = 0;
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar3 != 0);
LAB_0064e97c:
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  FUN_0066211c(param_1 + 0xa8);
  FUN_0066211c(param_1 + 0xc0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar5 = (byte *)(*(ulong *)(param_1 + 0xd8) & 0xfffffffffffffffc);
      if ((*pbVar5 & 1) == 0) {
        pbVar5[0] = 0;
        pbVar5[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar5 + 0x10) = 0;
        pbVar5[8] = 0;
        pbVar5[9] = 0;
        pbVar5[10] = 0;
        pbVar5[0xb] = 0;
        pbVar5[0xc] = 0;
        pbVar5[0xd] = 0;
        pbVar5[0xe] = 0;
        pbVar5[0xf] = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      pbVar5 = (byte *)(*(ulong *)(param_1 + 0xe0) & 0xfffffffffffffffc);
      if ((*pbVar5 & 1) == 0) {
        pbVar5[0] = 0;
        pbVar5[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar5 + 0x10) = 0;
        pbVar5[8] = 0;
        pbVar5[9] = 0;
        pbVar5[10] = 0;
        pbVar5[0xb] = 0;
        pbVar5[0xc] = 0;
        pbVar5[0xd] = 0;
        pbVar5[0xe] = 0;
        pbVar5[0xf] = 0;
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      pbVar5 = (byte *)(*(ulong *)(param_1 + 0xe8) & 0xfffffffffffffffc);
      if ((*pbVar5 & 1) == 0) {
        pbVar5[0] = 0;
        pbVar5[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar5 + 0x10) = 0;
        pbVar5[8] = 0;
        pbVar5[9] = 0;
        pbVar5[10] = 0;
        pbVar5[0xb] = 0;
        pbVar5[0xc] = 0;
        pbVar5[0xd] = 0;
        pbVar5[0xe] = 0;
        pbVar5[0xf] = 0;
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0xf0);
      if ((*(byte *)(lVar2 + 0x10) & 3) != 0) {
        *(undefined8 *)(lVar2 + 0x18) = 0;
        *(undefined8 *)(lVar2 + 0x20) = 0;
      }
      *(undefined4 *)(lVar2 + 0x10) = 0;
      if ((*(byte *)(lVar2 + 8) & 1) != 0) {
        FUN_006622b8();
      }
    }
  }
  if ((uVar1 & 0x30) != 0) {
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006622b8((byte *)(param_1 + 8));
    return;
  }
  return;
}


// ===== 0064ea98  FUN_0064ea98 =====

void FUN_0064ea98(long param_1)

{
  uint uVar1;
  byte bVar2;
  undefined8 *puVar3;
  long *plVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  
  uVar6 = (ulong)*(uint *)(param_1 + 0x20);
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    puVar3 = *(undefined8 **)(param_1 + 0x28);
    do {
      puVar3 = puVar3 + 1;
      FUN_00651754(*puVar3);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  uVar6 = (ulong)*(uint *)(param_1 + 0x38);
  if (0 < (int)*(uint *)(param_1 + 0x38)) {
    puVar3 = *(undefined8 **)(param_1 + 0x40);
    do {
      puVar3 = puVar3 + 1;
      FUN_0064e914(*puVar3);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  uVar6 = (ulong)*(uint *)(param_1 + 0x50);
  if (0 < (int)*(uint *)(param_1 + 0x50)) {
    puVar3 = *(undefined8 **)(param_1 + 0x58);
    do {
      puVar3 = puVar3 + 1;
      FUN_00650b80(*puVar3);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  uVar6 = (ulong)*(uint *)(param_1 + 0x68);
  if (0 < (int)*(uint *)(param_1 + 0x68)) {
    puVar3 = *(undefined8 **)(param_1 + 0x70);
    do {
      puVar3 = puVar3 + 1;
      FUN_00650b80(*puVar3);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  uVar6 = (ulong)*(uint *)(param_1 + 0x80);
  if (0 < (int)*(uint *)(param_1 + 0x80)) {
    puVar3 = *(undefined8 **)(param_1 + 0x88);
    do {
      puVar3 = puVar3 + 1;
      FUN_00650b80(*puVar3);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  uVar6 = (ulong)*(uint *)(param_1 + 0x98);
  if (0 < (int)*(uint *)(param_1 + 0x98)) {
    plVar4 = *(long **)(param_1 + 0xa0);
    do {
      plVar4 = plVar4 + 1;
      lVar7 = *plVar4;
      FUN_0066211c(lVar7 + 0x18);
      if ((*(byte *)(lVar7 + 0x10) & 1) == 0) {
        bVar2 = *(byte *)(lVar7 + 8);
        *(undefined4 *)(lVar7 + 0x10) = 0;
      }
      else {
        pbVar5 = (byte *)(*(ulong *)(lVar7 + 0x30) & 0xfffffffffffffffc);
        if ((*pbVar5 & 1) == 0) {
          pbVar5[0] = 0;
          pbVar5[1] = 0;
          bVar2 = *(byte *)(lVar7 + 8);
          *(undefined4 *)(lVar7 + 0x10) = 0;
        }
        else {
          **(undefined1 **)(pbVar5 + 0x10) = 0;
          pbVar5[8] = 0;
          pbVar5[9] = 0;
          pbVar5[10] = 0;
          pbVar5[0xb] = 0;
          pbVar5[0xc] = 0;
          pbVar5[0xd] = 0;
          pbVar5[0xe] = 0;
          pbVar5[0xf] = 0;
          bVar2 = *(byte *)(lVar7 + 8);
          *(undefined4 *)(lVar7 + 0x10) = 0;
        }
      }
      if ((bVar2 & 1) != 0) {
        FUN_006622b8(lVar7 + 8);
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  FUN_00662084(param_1 + 0xa8);
  FUN_0066211c(param_1 + 0xc0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar5 = (byte *)(*(ulong *)(param_1 + 0xd8) & 0xfffffffffffffffc);
      if ((*pbVar5 & 1) == 0) {
        pbVar5[0] = 0;
        pbVar5[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar5 + 0x10) = 0;
        pbVar5[8] = 0;
        pbVar5[9] = 0;
        pbVar5[10] = 0;
        pbVar5[0xb] = 0;
        pbVar5[0xc] = 0;
        pbVar5[0xd] = 0;
        pbVar5[0xe] = 0;
        pbVar5[0xf] = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      pbVar5 = (byte *)(*(ulong *)(param_1 + 0xe0) & 0xfffffffffffffffc);
      if ((*pbVar5 & 1) == 0) {
        pbVar5[0] = 0;
        pbVar5[1] = 0;
        bVar2 = *(byte *)(param_1 + 8);
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      else {
        **(undefined1 **)(pbVar5 + 0x10) = 0;
        pbVar5[8] = 0;
        pbVar5[9] = 0;
        pbVar5[10] = 0;
        pbVar5[0xb] = 0;
        pbVar5[0xc] = 0;
        pbVar5[0xd] = 0;
        pbVar5[0xe] = 0;
        pbVar5[0xf] = 0;
        bVar2 = *(byte *)(param_1 + 8);
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      goto joined_r0x0064ec5c;
    }
  }
  bVar2 = *(byte *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
joined_r0x0064ec5c:
  if ((bVar2 & 1) != 0) {
    FUN_006622b8(param_1 + 8);
    return;
  }
  return;
}


// ===== 0064ecbc  FUN_0064ecbc =====

void FUN_0064ecbc(long param_1)

{
  byte bVar1;
  byte *pbVar2;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    pbVar2 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    if ((*pbVar2 & 1) != 0) {
      **(undefined1 **)(pbVar2 + 0x10) = 0;
      pbVar2[8] = 0;
      pbVar2[9] = 0;
      pbVar2[10] = 0;
      pbVar2[0xb] = 0;
      pbVar2[0xc] = 0;
      pbVar2[0xd] = 0;
      pbVar2[0xe] = 0;
      pbVar2[0xf] = 0;
      FUN_0065de80(param_1);
      bVar1 = *(byte *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0x10) = 0;
      goto joined_r0x0064ed24;
    }
    pbVar2[0] = 0;
    pbVar2[1] = 0;
  }
  FUN_0065de80(param_1);
  bVar1 = *(byte *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
joined_r0x0064ed24:
  if ((bVar1 & 1) == 0) {
    return;
  }
  FUN_006622b8(param_1 + 8);
  return;
}


// ===== 0064ed38  FUN_0064ed38 =====

void FUN_0064ed38(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_0064e914(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_0064e914(*(undefined8 *)(param_1 + 0x30));
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006622b8((byte *)(param_1 + 8));
  return;
}


// ===== 0064ed98  FUN_0064ed98 =====

byte * FUN_0064ed98(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  byte *pbVar4;
  undefined1 auVar5 [16];
  
  do {
    if ((byte *)*param_3 <= param_2) {
      iVar1 = (int)param_2 - *(int *)(param_3 + 1);
      if (*(int *)((long)param_3 + 0x1c) == iVar1) {
        pbVar4 = (byte *)0x0;
        if (param_3[2] != 0 || iVar1 < 1) {
          pbVar4 = param_2;
        }
        goto LAB_0064f690;
      }
      auVar5 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar5._0_8_;
      pbVar4 = param_2;
      if ((auVar5 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_0064f690;
    }
    pbVar4 = param_2 + 1;
    uVar3 = (uint)*param_2;
    if ((char)*param_2 < '\0') {
      uVar3 = (uVar3 + (uint)*pbVar4 * 0x80) - 0x80;
      if (-1 < (char)*pbVar4) {
        pbVar4 = param_2 + 2;
        goto LAB_0064ee38;
      }
      auVar5 = FUN_0066fe50(param_2);
      uVar3 = (uint)(auVar5._8_8_ >> 3) & 0x1fffffff;
    }
    else {
LAB_0064ee38:
      auVar5._8_4_ = uVar3;
      auVar5._0_8_ = pbVar4;
      auVar5._12_4_ = 0;
      uVar3 = uVar3 >> 3;
    }
    pbVar4 = auVar5._0_8_;
    if (uVar3 - 1 < 0x17) {
                    /* WARNING: Could not recover jumptable at 0x0064ee54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pbVar4 = (byte *)(*(code *)(&UNK_0064ee58 +
                                 (ulong)*(ushort *)(&DAT_0020f3c8 + (ulong)(uVar3 - 1) * 2) * 4))();
      return pbVar4;
    }
    uVar3 = auVar5._8_4_;
    if ((uVar3 == 0) || ((uVar3 & 7) == 4)) {
      if (pbVar4 != (byte *)0x0) {
        *(uint *)(param_3 + 10) = uVar3 - 1;
      }
      goto LAB_0064f690;
    }
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar2 = FUN_00661fa4(param_1 + 8);
    }
    else {
      lVar2 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8;
    }
    param_2 = (byte *)FUN_006fbab8(auVar5._8_8_ & 0xffffffff,lVar2,pbVar4,param_3);
  } while (param_2 != (byte *)0x0);
  pbVar4 = (byte *)0x0;
LAB_0064f690:
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return pbVar4;
}


// ===== 0064f6dc  FUN_0064f6dc =====

ulong FUN_0064f6dc(long *param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined1 auVar4 [16];
  
  pbVar3 = (byte *)*param_1;
  bVar2 = *pbVar3;
  if (-1 < (long)(char)bVar2) {
    *param_1 = (long)(pbVar3 + 1);
    return (long)(char)bVar2;
  }
  bVar1 = pbVar3[1];
  if (-1 < (char)bVar1) {
    *param_1 = (long)(pbVar3 + 2);
    return (ulong)(((uint)bVar1 * 0x80 + (uint)bVar2) - 0x80);
  }
  auVar4 = FUN_0066fd14();
  *param_1 = auVar4._0_8_;
  return auVar4._8_8_;
}


// ===== 0064f75c  FUN_0064f75c =====

/* WARNING: Type propagation algorithm not settling */

undefined2 * FUN_0064f75c(long param_1,undefined2 *param_2,long *param_3)

{
  size_t sVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 & 1) != 0) {
    pbVar8 = (byte *)(*(ulong *)(param_1 + 0xb0) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar8 >> 1);
    if ((*pbVar8 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar8 + 8);
    }
    if (((long)sVar1 < 0x80) && ((long)sVar1 <= (*param_3 - (long)param_2) + 0xe)) {
      *(char *)((long)param_2 + 1) = (char)sVar1;
      *(undefined1 *)param_2 = 10;
      pvVar2 = (void *)((ulong)pbVar8 | 1);
      if ((*pbVar8 & 1) != 0) {
        pvVar2 = *(void **)(pbVar8 + 0x10);
      }
      memcpy(param_2 + 1,pvVar2,sVar1);
      param_2 = (undefined2 *)((long)(param_2 + 1) + sVar1);
    }
    else {
      param_2 = (undefined2 *)FUN_0066d778(param_3,1);
    }
  }
  if ((uVar3 >> 9 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0066d3f8(param_3,param_2);
    }
    uVar6 = *(undefined4 *)(param_1 + 0xf8);
    *(undefined1 *)param_2 = 0x15;
    *(undefined4 *)((long)param_2 + 1) = uVar6;
    param_2 = (undefined2 *)((long)param_2 + 5);
  }
  if ((uVar3 >> 8 & 1) != 0) {
    if (param_2 < (undefined2 *)*param_3) {
      uVar13 = *(ulong *)(param_1 + 0xf0);
      *(undefined1 *)param_2 = 0x18;
      *(char *)((long)param_2 + 1) = (char)uVar13;
    }
    else {
      param_2 = (undefined2 *)FUN_0066d3f8(param_3,param_2);
      uVar13 = *(ulong *)(param_1 + 0xf0);
      *(undefined1 *)param_2 = 0x18;
      *(char *)((long)param_2 + 1) = (char)uVar13;
    }
    if (uVar13 < 0x80) {
      param_2 = param_2 + 1;
    }
    else {
      uVar10 = uVar13 >> 7;
      *(byte *)((long)param_2 + 1) = (byte)uVar13 | 0x80;
      *(char *)(param_2 + 1) = (char)uVar10;
      param_2 = (undefined2 *)((long)param_2 + 3);
      puVar7 = param_2;
      if (0x3fff < uVar13) {
        do {
          uVar13 = uVar10 >> 0xe;
          uVar10 = uVar10 >> 7;
          *(byte *)((long)puVar7 + -1) = *(byte *)((long)puVar7 + -1) | 0x80;
          param_2 = (undefined2 *)((long)puVar7 + 1);
          *(char *)puVar7 = (char)uVar10;
          puVar7 = param_2;
        } while (uVar13 != 0);
      }
    }
  }
  if ((uVar3 >> 1 & 1) != 0) {
    pbVar8 = (byte *)(*(ulong *)(param_1 + 0xb8) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar8 >> 1);
    if ((*pbVar8 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar8 + 8);
    }
    if (((long)sVar1 < 0x80) && ((long)sVar1 <= (*param_3 - (long)param_2) + 0xe)) {
      *(char *)((long)param_2 + 1) = (char)sVar1;
      *(undefined1 *)param_2 = 0x22;
      pbVar11 = *(byte **)(pbVar8 + 0x10);
      if ((*pbVar8 & 1) == 0) {
        pbVar11 = pbVar8 + 1;
      }
      memcpy(param_2 + 1,pbVar11,sVar1);
      param_2 = (undefined2 *)((long)(param_2 + 1) + sVar1);
    }
    else {
      param_2 = (undefined2 *)FUN_0066d778(param_3,4);
    }
  }
  if ((uVar3 >> 4 & 1) != 0) {
    param_2 = (undefined2 *)
              FUN_00678d18(5,*(long *)(param_1 + 0xd0),
                           *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x14),param_2,param_3);
  }
  if ((uVar3 >> 5 & 1) == 0) {
    uVar4 = *(uint *)(param_1 + 0x18);
  }
  else {
    param_2 = (undefined2 *)
              FUN_00678d18(6,*(long *)(param_1 + 0xd8),
                           *(undefined4 *)(*(long *)(param_1 + 0xd8) + 0x14),param_2,param_3);
    uVar4 = *(uint *)(param_1 + 0x18);
  }
  if (0 < (int)uVar4) {
    lVar14 = 0;
    do {
      if ((undefined2 *)*param_3 <= param_2) {
        param_2 = (undefined2 *)FUN_0066d3f8(param_3,param_2);
      }
      uVar6 = *(undefined4 *)(*(long *)(param_1 + 0x20) + lVar14);
      lVar14 = lVar14 + 4;
      *(undefined1 *)param_2 = 0x3d;
      *(undefined4 *)((long)param_2 + 1) = uVar6;
      param_2 = (undefined2 *)((long)param_2 + 5);
    } while ((ulong)uVar4 * 4 - lVar14 != 0);
  }
  uVar4 = *(uint *)(param_1 + 0x28);
  if (0 < (int)uVar4) {
    uVar13 = 0;
    do {
      if (param_2 < (undefined2 *)*param_3) {
        uVar10 = *(ulong *)(*(long *)(param_1 + 0x30) + uVar13 * 8);
        *(undefined1 *)param_2 = 0x40;
        *(char *)((long)param_2 + 1) = (char)uVar10;
        if (0x7f < uVar10) goto LAB_0064fa44;
LAB_0064fa10:
        param_2 = param_2 + 1;
      }
      else {
        param_2 = (undefined2 *)FUN_0066d3f8(param_3,param_2);
        uVar10 = *(ulong *)(*(long *)(param_1 + 0x30) + uVar13 * 8);
        *(undefined1 *)param_2 = 0x40;
        *(char *)((long)param_2 + 1) = (char)uVar10;
        if (uVar10 < 0x80) goto LAB_0064fa10;
LAB_0064fa44:
        uVar9 = uVar10 >> 7;
        *(byte *)((long)param_2 + 1) = (byte)uVar10 | 0x80;
        *(char *)(param_2 + 1) = (char)uVar9;
        param_2 = (undefined2 *)((long)param_2 + 3);
        puVar7 = param_2;
        if (0x3fff < uVar10) {
          do {
            uVar10 = uVar9 >> 0xe;
            uVar9 = uVar9 >> 7;
            *(byte *)((long)puVar7 + -1) = *(byte *)((long)puVar7 + -1) | 0x80;
            param_2 = (undefined2 *)((long)puVar7 + 1);
            *(char *)puVar7 = (char)uVar9;
            puVar7 = param_2;
          } while (uVar10 != 0);
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar4);
  }
  if (0 < (int)*(uint *)(param_1 + 0x40)) {
    lVar15 = (ulong)*(uint *)(param_1 + 0x40) * 8;
    lVar14 = 0;
    do {
      while( true ) {
        pbVar8 = *(byte **)(*(long *)(param_1 + 0x48) + lVar14 + 8);
        sVar1 = (ulong)(*pbVar8 >> 1);
        if ((*pbVar8 & 1) != 0) {
          sVar1 = *(size_t *)(pbVar8 + 8);
        }
        if ((0x7f < (long)sVar1) || ((*param_3 - (long)param_2) + 0xe < (long)sVar1)) break;
        *(undefined1 *)param_2 = 0x4a;
        *(char *)((long)param_2 + 1) = (char)sVar1;
        pbVar11 = *(byte **)(pbVar8 + 0x10);
        if ((*pbVar8 & 1) == 0) {
          pbVar11 = pbVar8 + 1;
        }
        memcpy(param_2 + 1,pbVar11,sVar1);
        param_2 = (undefined2 *)((long)(param_2 + 1) + sVar1);
        lVar14 = lVar14 + 8;
        if (lVar15 - lVar14 == 0) goto LAB_0064fb58;
      }
      param_2 = (undefined2 *)FUN_0066d8d0(param_3,9);
      lVar14 = lVar14 + 8;
    } while (lVar15 - lVar14 != 0);
  }
LAB_0064fb58:
  iVar5 = *(int *)(param_1 + 0x58);
  if (iVar5 != 0) {
    iVar12 = 0;
    do {
      lVar14 = *(long *)(*(long *)(param_1 + 0x60) + (long)iVar12 * 8 + 8);
      param_2 = (undefined2 *)FUN_00678d18(10,lVar14,*(undefined4 *)(lVar14 + 0x14),param_2,param_3)
      ;
      iVar12 = iVar12 + 1;
    } while (iVar5 != iVar12);
  }
  iVar5 = *(int *)(param_1 + 0x70);
  if (iVar5 != 0) {
    iVar12 = 0;
    do {
      lVar14 = *(long *)(*(long *)(param_1 + 0x78) + (long)iVar12 * 8 + 8);
      param_2 = (undefined2 *)
                FUN_00678d18(0xb,lVar14,*(undefined4 *)(lVar14 + 0x14),param_2,param_3);
      iVar12 = iVar12 + 1;
    } while (iVar5 != iVar12);
  }
  if ((uVar3 >> 2 & 1) != 0) {
    pbVar8 = (byte *)(*(ulong *)(param_1 + 0xc0) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar8 >> 1);
    if ((*pbVar8 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar8 + 8);
    }
    if (((long)sVar1 < 0x80) && ((long)sVar1 <= (*param_3 - (long)param_2) + 0xe)) {
      *(char *)((long)param_2 + 1) = (char)sVar1;
      *(undefined1 *)param_2 = 0x6a;
      pvVar2 = (void *)((ulong)pbVar8 | 1);
      if ((*pbVar8 & 1) != 0) {
        pvVar2 = *(void **)(pbVar8 + 0x10);
      }
      memcpy(param_2 + 1,pvVar2,sVar1);
      param_2 = (undefined2 *)((long)(param_2 + 1) + sVar1);
    }
    else {
      param_2 = (undefined2 *)FUN_0066d778(param_3,0xd);
    }
  }
  if ((uVar3 >> 6 & 1) == 0) {
    iVar5 = *(int *)(param_1 + 0x88);
  }
  else {
    param_2 = (undefined2 *)
              FUN_00678d18(0xe,*(long *)(param_1 + 0xe0),
                           *(undefined4 *)(*(long *)(param_1 + 0xe0) + 0x14),param_2,param_3);
    iVar5 = *(int *)(param_1 + 0x88);
  }
  if (iVar5 != 0) {
    iVar12 = 0;
    do {
      lVar14 = *(long *)(*(long *)(param_1 + 0x90) + (long)iVar12 * 8 + 8);
      param_2 = (undefined2 *)
                FUN_00678d18(0xf,lVar14,*(undefined4 *)(lVar14 + 0x14),param_2,param_3);
      iVar12 = iVar12 + 1;
    } while (iVar5 != iVar12);
  }
  if ((uVar3 >> 10 & 1) != 0) {
    if (param_2 < (undefined2 *)*param_3) {
      uVar4 = *(uint *)(param_1 + 0xfc);
      *param_2 = 0x1a0;
      *(char *)(param_2 + 1) = (char)uVar4;
    }
    else {
      param_2 = (undefined2 *)FUN_0066d3f8(param_3,param_2);
      uVar4 = *(uint *)(param_1 + 0xfc);
      *param_2 = 0x1a0;
      *(char *)(param_2 + 1) = (char)uVar4;
    }
    if (uVar4 < 0x80) {
      param_2 = (undefined2 *)((long)param_2 + 3);
    }
    else {
      uVar13 = (ulong)(long)(int)uVar4 >> 7;
      *(byte *)(param_2 + 1) = (byte)uVar4 | 0x80;
      *(char *)((long)param_2 + 3) = (char)uVar13;
      param_2 = param_2 + 2;
      puVar7 = param_2;
      if (0x3fff < uVar4) {
        do {
          uVar10 = uVar13 >> 0xe;
          uVar13 = uVar13 >> 7;
          *(byte *)((long)puVar7 + -1) = *(byte *)((long)puVar7 + -1) | 0x80;
          param_2 = (undefined2 *)((long)puVar7 + 1);
          *(char *)puVar7 = (char)uVar13;
          puVar7 = param_2;
        } while (uVar10 != 0);
      }
    }
  }
  if ((uVar3 >> 3 & 1) != 0) {
    pbVar8 = (byte *)(*(ulong *)(param_1 + 200) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar8 >> 1);
    if ((*pbVar8 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar8 + 8);
    }
    if (((long)sVar1 < 0x80) && ((long)sVar1 <= (*param_3 - (long)param_2) + 0xd)) {
      *(char *)(param_2 + 1) = (char)sVar1;
      *param_2 = 0x1aa;
      pvVar2 = (void *)((ulong)pbVar8 | 1);
      if ((*pbVar8 & 1) != 0) {
        pvVar2 = *(void **)(pbVar8 + 0x10);
      }
      memcpy((undefined1 *)((long)param_2 + 3),pvVar2,sVar1);
      param_2 = (undefined2 *)((undefined1 *)((long)param_2 + 3) + sVar1);
    }
    else {
      param_2 = (undefined2 *)FUN_0066d778(param_3,0x15);
    }
  }
  if ((uVar3 >> 7 & 1) == 0) {
    iVar5 = *(int *)(param_1 + 0xa0);
  }
  else {
    param_2 = (undefined2 *)
              FUN_00678d18(0x16,*(long *)(param_1 + 0xe8),
                           *(undefined4 *)(*(long *)(param_1 + 0xe8) + 0x14),param_2,param_3);
    iVar5 = *(int *)(param_1 + 0xa0);
  }
  if (iVar5 != 0) {
    iVar12 = 0;
    do {
      lVar14 = *(long *)(*(long *)(param_1 + 0xa8) + (long)iVar12 * 8 + 8);
      param_2 = (undefined2 *)
                FUN_00678d18(0x17,lVar14,*(undefined4 *)(lVar14 + 0x14),param_2,param_3);
      iVar12 = iVar12 + 1;
    } while (iVar5 != iVar12);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  puVar7 = (undefined2 *)
           FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
  return puVar7;
}


// ===== 0064fe94  FUN_0064fe94 =====

undefined4 FUN_0064fe94(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 0064fe9c  FUN_0064fe9c =====

undefined4 FUN_0064fe9c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 0064fea4  FUN_0064fea4 =====

undefined4 FUN_0064fea4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 0064feac  FUN_0064feac =====

undefined4 FUN_0064feac(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 0064feb4  FUN_0064feb4 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0064feb4(long param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  lVar5 = FUN_006793b8(param_1 + 0x28);
  uVar8 = (ulong)*(uint *)(param_1 + 0x40);
  lVar5 = (ulong)uVar2 * 5 + lVar5 + (ulong)*(uint *)(param_1 + 0x28) + uVar8;
  if (0 < (int)*(uint *)(param_1 + 0x40)) {
    puVar9 = *(undefined8 **)(param_1 + 0x48);
    do {
      puVar9 = puVar9 + 1;
      bVar3 = *(byte *)*puVar9;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)((byte *)*puVar9 + 8);
      }
      uVar8 = uVar8 - 1;
      lVar5 = uVar1 + lVar5 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (uVar8 != 0);
  }
  iVar4 = *(int *)(param_1 + 0x58);
  lVar5 = lVar5 + iVar4;
  puVar9 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x60) != 0) {
    puVar9 = (undefined8 *)(*(long *)(param_1 + 0x60) + 8);
  }
  if (iVar4 != 0) {
    lVar10 = (long)iVar4 << 3;
    do {
      lVar6 = FUN_00659864(*puVar9);
      lVar10 = lVar10 + -8;
      lVar5 = lVar6 + lVar5 + (ulong)(((uint)LZCOUNT((uint)lVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar9 = puVar9 + 1;
    } while (lVar10 != 0);
  }
  iVar4 = *(int *)(param_1 + 0x70);
  lVar5 = lVar5 + iVar4;
  puVar9 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x78) != 0) {
    puVar9 = (undefined8 *)(*(long *)(param_1 + 0x78) + 8);
  }
  if (iVar4 != 0) {
    lVar10 = (long)iVar4 << 3;
    do {
      lVar6 = FUN_00656d24(*puVar9);
      lVar10 = lVar10 + -8;
      lVar5 = lVar6 + lVar5 + (ulong)(((uint)LZCOUNT((uint)lVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar9 = puVar9 + 1;
    } while (lVar10 != 0);
  }
  iVar4 = *(int *)(param_1 + 0x88);
  lVar5 = lVar5 + iVar4;
  puVar9 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x90) != 0) {
    puVar9 = (undefined8 *)(*(long *)(param_1 + 0x90) + 8);
  }
  if (iVar4 != 0) {
    lVar10 = (long)iVar4 << 3;
    do {
      lVar6 = FUN_0065ea34(*puVar9);
      lVar10 = lVar10 + -8;
      lVar5 = lVar6 + lVar5 + (ulong)(((uint)LZCOUNT((uint)lVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar9 = puVar9 + 1;
    } while (lVar10 != 0);
  }
  iVar4 = *(int *)(param_1 + 0xa0);
  lVar5 = lVar5 + (long)iVar4 * 2;
  puVar9 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0xa8) != 0) {
    puVar9 = (undefined8 *)(*(long *)(param_1 + 0xa8) + 8);
  }
  if (iVar4 != 0) {
    lVar10 = (long)iVar4 << 3;
    do {
      lVar6 = FUN_0065a928(*puVar9);
      lVar10 = lVar10 + -8;
      lVar5 = lVar6 + lVar5 + (ulong)(((uint)LZCOUNT((uint)lVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar9 = puVar9 + 1;
    } while (lVar10 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 0xff) != 0) {
    if ((uVar2 & 1) != 0) {
      pbVar7 = (byte *)(*(ulong *)(param_1 + 0xb0) & 0xfffffffffffffffc);
      bVar3 = *pbVar7;
      uVar8 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar8 = *(ulong *)(pbVar7 + 8);
      }
      lVar5 = lVar5 + uVar8 + (ulong)(((uint)LZCOUNT((uint)uVar8 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      pbVar7 = (byte *)(*(ulong *)(param_1 + 0xb8) & 0xfffffffffffffffc);
      bVar3 = *pbVar7;
      uVar8 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar8 = *(ulong *)(pbVar7 + 8);
      }
      lVar5 = lVar5 + uVar8 + (ulong)(((uint)LZCOUNT((uint)uVar8 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 2 & 1) != 0) {
      pbVar7 = (byte *)(*(ulong *)(param_1 + 0xc0) & 0xfffffffffffffffc);
      bVar3 = *pbVar7;
      uVar8 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar8 = *(ulong *)(pbVar7 + 8);
      }
      lVar5 = lVar5 + uVar8 + (ulong)(((uint)LZCOUNT((uint)uVar8 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 3 & 1) != 0) {
      pbVar7 = (byte *)(*(ulong *)(param_1 + 200) & 0xfffffffffffffffc);
      bVar3 = *pbVar7;
      uVar8 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar8 = *(ulong *)(pbVar7 + 8);
      }
      lVar5 = lVar5 + uVar8 + (ulong)(((uint)LZCOUNT((uint)uVar8 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    }
    if ((uVar2 >> 4 & 1) != 0) {
      lVar10 = FUN_00659864(*(undefined8 *)(param_1 + 0xd0));
      lVar5 = lVar5 + lVar10 + (ulong)(((uint)LZCOUNT((uint)lVar10 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1
      ;
    }
    if ((uVar2 >> 5 & 1) != 0) {
      lVar10 = FUN_00656d24(*(undefined8 *)(param_1 + 0xd8));
      lVar5 = lVar5 + lVar10 + (ulong)(((uint)LZCOUNT((uint)lVar10 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1
      ;
    }
    if ((uVar2 >> 6 & 1) != 0) {
      lVar10 = FUN_0065ea34(*(undefined8 *)(param_1 + 0xe0));
      lVar5 = lVar5 + lVar10 + (ulong)(((uint)LZCOUNT((uint)lVar10 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1
      ;
    }
    if ((uVar2 >> 7 & 1) != 0) {
      lVar10 = FUN_0065a928(*(undefined8 *)(param_1 + 0xe8));
      lVar5 = lVar5 + lVar10 + (ulong)(((uint)LZCOUNT((uint)lVar10 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2
      ;
    }
  }
  if ((uVar2 & 0x700) != 0) {
    if ((uVar2 >> 8 & 1) != 0) {
      lVar5 = lVar5 + ((LZCOUNT(*(ulong *)(param_1 + 0xf0) | 1) ^ 0x3fU) * 9 + 0x89 >> 6);
    }
    if ((uVar2 & 0x200) != 0) {
      lVar5 = lVar5 + 5;
    }
    if ((uVar2 >> 10 & 1) != 0) {
      lVar5 = lVar5 + ((LZCOUNT((long)*(int *)(param_1 + 0xfc) | 1) ^ 0x3fU) * 9 + 0x49 >> 6) + 2;
    }
  }
  FUN_006e5694(param_1,lVar5,param_1 + 0x14);
  return;
}


// ===== 006502ec  FUN_006502ec =====

/* WARNING: Type propagation algorithm not settling */

void FUN_006502ec(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  ulong *puVar6;
  void *pvVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    piVar9 = (int *)(param_1 + 0x18);
    iVar4 = *piVar9;
    FUN_00674a70(piVar9,iVar4 + *(int *)(param_2 + 0x18));
    pvVar7 = *(void **)(param_2 + 0x20);
    *piVar9 = *piVar9 + *(int *)(param_2 + 0x18);
    memcpy((void *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 4),pvVar7,
           (long)*(int *)(param_2 + 0x18) << 2);
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    piVar9 = (int *)(param_1 + 0x28);
    iVar4 = *piVar9;
    FUN_006741e8(piVar9,iVar4 + *(int *)(param_2 + 0x28));
    pvVar7 = *(void **)(param_2 + 0x30);
    *piVar9 = *piVar9 + *(int *)(param_2 + 0x28);
    memcpy((void *)(*(long *)(param_1 + 0x30) + (long)iVar4 * 8),pvVar7,
           (long)*(int *)(param_2 + 0x28) << 3);
  }
  iVar4 = *(int *)(param_2 + 0x40);
  if (iVar4 != 0) {
    lVar10 = *(long *)(param_2 + 0x48);
    uVar5 = FUN_00675710(param_1 + 0x38,iVar4);
    FUN_005d663c(param_1 + 0x38,uVar5,lVar10 + 8,iVar4,
                 **(int **)(param_1 + 0x48) - *(int *)(param_1 + 0x40));
    iVar2 = **(int **)(param_1 + 0x48);
    iVar4 = *(int *)(param_1 + 0x40) + iVar4;
    *(int *)(param_1 + 0x40) = iVar4;
    if (iVar2 < iVar4) {
      **(int **)(param_1 + 0x48) = iVar4;
    }
  }
  iVar4 = *(int *)(param_2 + 0x58);
  if (iVar4 != 0) {
    lVar10 = *(long *)(param_2 + 0x60);
    uVar5 = FUN_00675710(param_1 + 0x50,iVar4);
    FUN_006622fc(param_1 + 0x50,uVar5,lVar10 + 8,iVar4,
                 **(int **)(param_1 + 0x60) - *(int *)(param_1 + 0x58));
    iVar2 = **(int **)(param_1 + 0x60);
    iVar4 = *(int *)(param_1 + 0x58) + iVar4;
    *(int *)(param_1 + 0x58) = iVar4;
    if (iVar2 < iVar4) {
      **(int **)(param_1 + 0x60) = iVar4;
    }
  }
  iVar4 = *(int *)(param_2 + 0x70);
  if (iVar4 != 0) {
    lVar10 = *(long *)(param_2 + 0x78);
    uVar5 = FUN_00675710(param_1 + 0x68,iVar4);
    FUN_00662384(param_1 + 0x68,uVar5,lVar10 + 8,iVar4,
                 **(int **)(param_1 + 0x78) - *(int *)(param_1 + 0x70));
    iVar2 = **(int **)(param_1 + 0x78);
    iVar4 = *(int *)(param_1 + 0x70) + iVar4;
    *(int *)(param_1 + 0x70) = iVar4;
    if (iVar2 < iVar4) {
      **(int **)(param_1 + 0x78) = iVar4;
    }
  }
  iVar4 = *(int *)(param_2 + 0x88);
  if (iVar4 != 0) {
    lVar10 = *(long *)(param_2 + 0x90);
    uVar5 = FUN_00675710(param_1 + 0x80,iVar4);
    FUN_0066240c(param_1 + 0x80,uVar5,lVar10 + 8,iVar4,
                 **(int **)(param_1 + 0x90) - *(int *)(param_1 + 0x88));
    iVar2 = **(int **)(param_1 + 0x90);
    iVar4 = *(int *)(param_1 + 0x88) + iVar4;
    *(int *)(param_1 + 0x88) = iVar4;
    if (iVar2 < iVar4) {
      **(int **)(param_1 + 0x90) = iVar4;
    }
  }
  iVar4 = *(int *)(param_2 + 0xa0);
  if (iVar4 != 0) {
    lVar10 = *(long *)(param_2 + 0xa8);
    uVar5 = FUN_00675710(param_1 + 0x98,iVar4);
    FUN_00662494(param_1 + 0x98,uVar5,lVar10 + 8,iVar4,
                 **(int **)(param_1 + 0xa8) - *(int *)(param_1 + 0xa0));
    iVar2 = **(int **)(param_1 + 0xa8);
    iVar4 = *(int *)(param_1 + 0xa0) + iVar4;
    *(int *)(param_1 + 0xa0) = iVar4;
    if (iVar2 < iVar4) {
      **(int **)(param_1 + 0xa8) = iVar4;
    }
  }
  uVar3 = *(uint *)(param_2 + 0x10);
  if ((uVar3 & 0xff) != 0) {
    if ((uVar3 & 1) != 0) {
      uVar8 = *(ulong *)(param_2 + 0xb0);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0xb0,uVar8 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0xb0,uVar8 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar3 >> 1 & 1) != 0) {
      uVar8 = *(ulong *)(param_2 + 0xb8);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0xb8,uVar8 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0xb8,uVar8 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar3 >> 2 & 1) != 0) {
      uVar8 = *(ulong *)(param_2 + 0xc0);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0xc0,uVar8 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0xc0,uVar8 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar3 >> 3 & 1) != 0) {
      uVar8 = *(ulong *)(param_2 + 200);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 200,uVar8 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 200,uVar8 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar3 >> 4 & 1) != 0) {
      lVar10 = *(long *)(param_1 + 0xd0);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
      if (lVar10 == 0) {
        puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar6 = (ulong *)*puVar6;
        }
        lVar10 = FUN_00661868(puVar6);
        *(long *)(param_1 + 0xd0) = lVar10;
      }
      ppuVar1 = &PTR_PTR_FUN_007a9cf0;
      if (*(undefined ***)(param_2 + 0xd0) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(param_2 + 0xd0);
      }
      FUN_00659dc0(lVar10,ppuVar1);
    }
    if ((uVar3 >> 5 & 1) != 0) {
      lVar10 = *(long *)(param_1 + 0xd8);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
      if (lVar10 == 0) {
        puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar6 = (ulong *)*puVar6;
        }
        lVar10 = FUN_00661768(puVar6);
        *(long *)(param_1 + 0xd8) = lVar10;
      }
      ppuVar1 = &PTR_PTR_FUN_007a9be0;
      if (*(undefined ***)(param_2 + 0xd8) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(param_2 + 0xd8);
      }
      FUN_0065711c(lVar10,ppuVar1);
    }
    if ((uVar3 >> 6 & 1) != 0) {
      lVar10 = *(long *)(param_1 + 0xe0);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x40;
      if (lVar10 == 0) {
        puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar6 = (ulong *)*puVar6;
        }
        lVar10 = FUN_00661d68(puVar6);
        *(long *)(param_1 + 0xe0) = lVar10;
      }
      ppuVar1 = &PTR_PTR_FUN_007a9f68;
      if (*(undefined ***)(param_2 + 0xe0) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(param_2 + 0xe0);
      }
      FUN_0065ec98(lVar10,ppuVar1);
    }
    if ((uVar3 >> 7 & 1) != 0) {
      lVar10 = *(long *)(param_1 + 0xe8);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x80;
      if (lVar10 == 0) {
        puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar6 = (ulong *)*puVar6;
        }
        lVar10 = FUN_006618e8(puVar6);
        *(long *)(param_1 + 0xe8) = lVar10;
      }
      ppuVar1 = &PTR_PTR_FUN_007a9df0;
      if (*(undefined ***)(param_2 + 0xe8) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(param_2 + 0xe8);
      }
      FUN_0065a9d4(lVar10,ppuVar1);
    }
  }
  if ((uVar3 & 0x700) == 0) {
    uVar8 = *(ulong *)(param_2 + 8);
  }
  else {
    if ((uVar3 >> 8 & 1) != 0) {
      *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
    }
    if ((uVar3 >> 9 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
    }
    if ((uVar3 >> 10 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0xfc);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar3;
    uVar8 = *(ulong *)(param_2 + 8);
  }
  if ((uVar8 & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(uVar8 & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 00650848  FUN_00650848 =====

undefined ** FUN_00650848(void)

{
  return &PTR_FUN_00798b90;
}


// ===== 00650854  FUN_00650854 =====

void FUN_00650854(long param_1,long param_2)

{
  if (param_2 != param_1) {
    FUN_0064e5d8();
    FUN_006502ec(param_1,param_2);
    return;
  }
  return;
}


// ===== 0065088c  FUN_0065088c =====

undefined8 FUN_0065088c(void)

{
  return 1;
}


// ===== 00650894  FUN_00650894 =====

void FUN_00650894(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 8) = uVar3;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_2 + 0x10) = uVar2;
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x18) = uVar3;
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  uVar7 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x28) = uVar3;
  *(undefined8 *)(param_2 + 0x30) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x48) = uVar4;
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_1 + 0x50);
  uVar4 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x60) = uVar3;
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  uVar5 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(param_1 + 0x68);
  uVar3 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_2 + 0x78) = uVar4;
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_1 + 0x80);
  uVar4 = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_2 + 0x90) = uVar3;
  *(undefined8 *)(param_1 + 0x80) = uVar5;
  *(undefined8 *)(param_1 + 0x90) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0xa8);
  uVar5 = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(param_1 + 0x98);
  uVar3 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_2 + 0x40) = uVar6;
  *(undefined8 *)(param_2 + 0xa8) = uVar4;
  *(undefined8 *)(param_1 + 0x40) = uVar7;
  *(undefined8 *)(param_1 + 0x98) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0xa8) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  uVar4 = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_2 + 0xb0) = uVar3;
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb0) = uVar4;
  uVar5 = *(undefined8 *)(param_2 + 0x70);
  uVar4 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_2 + 0xb8) = uVar3;
  *(undefined8 *)(param_1 + 0x70) = uVar5;
  uVar3 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = uVar4;
  uVar5 = *(undefined8 *)(param_2 + 0x88);
  uVar4 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_2 + 0xc0) = uVar3;
  *(undefined8 *)(param_1 + 0x88) = uVar5;
  uVar3 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 0xc0) = uVar4;
  uVar5 = *(undefined8 *)(param_2 + 0xa0);
  uVar4 = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_2 + 200) = uVar3;
  *(undefined8 *)(param_1 + 0xa0) = uVar5;
  *(undefined8 *)(param_1 + 200) = uVar4;
  uVar3 = *(undefined8 *)(param_1 + 0xd0);
  uVar4 = *(undefined8 *)(param_1 + 0xd8);
  uVar5 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xd0) = uVar5;
  *(undefined8 *)(param_2 + 0xd0) = uVar3;
  *(undefined8 *)(param_2 + 0xd8) = uVar4;
  uVar5 = *(undefined8 *)(param_2 + 0xe0);
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  uVar4 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xe0) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_2 + 0xe0) = uVar3;
  *(undefined8 *)(param_2 + 0xe8) = uVar4;
  uVar3 = *(undefined8 *)(param_1 + 0xf0);
  uVar4 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0xf0) = uVar5;
  *(undefined8 *)(param_2 + 0xf0) = uVar3;
  *(undefined8 *)(param_2 + 0xf8) = uVar4;
  return;
}


// ===== 00650a38  FUN_00650a38 =====

void FUN_00650a38(void)

{
  FUN_00684dd0(FUN_0064dd54,&DAT_007ae908,&DAT_007ae910);
  return;
}


// ===== 00650a50  FUN_00650a50 =====

void FUN_00650a50(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_007a2f08;
  param_1[2] = 0;
  param_1[3] = param_2;
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = uVar1;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  puVar2 = PTR_DAT_007a2ea0;
  param_1[7] = (long)PTR_DAT_007a2ea0;
  param_1[8] = 0;
  param_1[6] = (long)puVar2;
  return;
}


// ===== 00650a8c  FUN_00650a8c =====

void FUN_00650a8c(undefined **param_1)

{
  ulong uVar1;
  undefined *puVar2;
  
  if (((ulong)param_1[1] & 1) == 0) {
    uVar1 = (ulong)param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 00650aac to 00650aaf has its CatchHandler @ 00650b50 */
    uVar1 = FUN_00662218();
  }
  if (uVar1 == 0) {
    if ((param_1[5] != (undefined *)0x0) && (param_1[3] == (undefined *)0x0)) {
                    /* try { // try from 00650b0c to 00650b0f has its CatchHandler @ 00650b4c */
      FUN_00675910();
    }
                    /* try { // try from 00650b10 to 00650b1f has its CatchHandler @ 00650b50 */
    FUN_00663a20(param_1 + 6);
    FUN_00663a20(param_1 + 7);
    if ((param_1 != &PTR_PTR_FUN_007a9990) && (puVar2 = param_1[8], puVar2 != (undefined *)0x0)) {
      FUN_0065e3c8(puVar2);
      free(puVar2);
    }
  }
  *param_1 = (undefined *)&PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) && (puVar2 = param_1[1] + -2, puVar2 != (undefined *)0x0))
  {
    FUN_00662da0(puVar2);
    free(puVar2);
    return;
  }
  return;
}


// ===== 00650b54  FUN_00650b54 =====

void FUN_00650b54(void *param_1)

{
  FUN_00650a8c();
  free(param_1);
  return;
}


// ===== 00650b78  FUN_00650b78 =====

void FUN_00650b78(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// ===== 00650b80  FUN_00650b80 =====

void FUN_00650b80(long param_1)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  
  FUN_0066211c(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) == 0) goto LAB_00650c6c;
  if ((uVar1 & 1) != 0) {
    pbVar3 = (byte *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
    if ((*pbVar3 & 1) == 0) {
      pbVar3[0] = 0;
      pbVar3[1] = 0;
    }
    else {
      **(undefined1 **)(pbVar3 + 0x10) = 0;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
    }
  }
  if ((uVar1 >> 1 & 1) != 0) {
    pbVar3 = (byte *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
    if ((*pbVar3 & 1) == 0) {
      pbVar3[0] = 0;
      pbVar3[1] = 0;
    }
    else {
      **(undefined1 **)(pbVar3 + 0x10) = 0;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
    }
  }
  if ((uVar1 >> 2 & 1) == 0) goto LAB_00650c6c;
  lVar4 = *(long *)(param_1 + 0x40);
  if ((*(byte *)(lVar4 + 0x10) & 1) == 0) {
LAB_00650bd0:
    FUN_0065de80(lVar4);
    bVar2 = *(byte *)(lVar4 + 8);
    *(undefined4 *)(lVar4 + 0x10) = 0;
  }
  else {
    pbVar3 = (byte *)(*(ulong *)(lVar4 + 0x18) & 0xfffffffffffffffc);
    if ((*pbVar3 & 1) == 0) {
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      goto LAB_00650bd0;
    }
    **(undefined1 **)(pbVar3 + 0x10) = 0;
    pbVar3[8] = 0;
    pbVar3[9] = 0;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0;
    pbVar3[0xc] = 0;
    pbVar3[0xd] = 0;
    pbVar3[0xe] = 0;
    pbVar3[0xf] = 0;
    FUN_0065de80(lVar4);
    bVar2 = *(byte *)(lVar4 + 8);
    *(undefined4 *)(lVar4 + 0x10) = 0;
  }
  if ((bVar2 & 1) != 0) {
    FUN_006622b8(lVar4 + 8);
  }
LAB_00650c6c:
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006622b8((byte *)(param_1 + 8));
    return;
  }
  return;
}


// ===== 00650c94  FUN_00650c94 =====

byte * FUN_00650c94(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  int *piVar8;
  byte *pbVar9;
  undefined1 auVar10 [16];
  
LAB_00650cd0:
  do {
    if ((byte *)*param_3 <= param_2) {
      iVar1 = (int)param_2 - *(int *)(param_3 + 1);
      if (*(int *)((long)param_3 + 0x1c) == iVar1) {
        pbVar9 = (byte *)0x0;
        if (param_3[2] != 0 || iVar1 < 1) {
          pbVar9 = param_2;
        }
        return pbVar9;
      }
      auVar10 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar10._0_8_;
      if ((auVar10 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        return param_2;
      }
    }
    pbVar9 = param_2 + 1;
    uVar7 = (uint)*param_2;
    if ((char)*param_2 < '\0') {
      uVar7 = (uVar7 + (uint)*pbVar9 * 0x80) - 0x80;
      if (-1 < (char)*pbVar9) {
        pbVar9 = param_2 + 2;
        goto LAB_00650d04;
      }
      auVar10 = FUN_0066fe50(param_2);
      uVar7 = (uint)(auVar10._8_8_ >> 3) & 0x1fffffff;
      auVar2 = auVar10;
      if (2 < uVar7) goto LAB_00650dac;
LAB_00650d10:
      auVar10 = auVar2;
      lVar5 = auVar10._0_8_;
      if (uVar7 == 1) {
        if ((auVar10._8_4_ & 0xff) != 10) goto LAB_00650e80;
        puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar4 = (ulong *)*puVar4;
        }
        lVar6 = param_1 + 0x30;
LAB_00650cb8:
        uVar3 = FUN_0066399c(lVar6,puVar4);
        param_2 = (byte *)FUN_0066ff90(uVar3,lVar5,param_3);
      }
      else {
        if ((uVar7 != 2) || ((auVar10._8_4_ & 0xff) != 0x12)) goto LAB_00650e80;
        lVar6 = *(long *)(param_1 + 0x40);
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
        if (lVar6 == 0) {
          puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
          if ((*(ulong *)(param_1 + 8) & 1) != 0) {
            puVar4 = (ulong *)*puVar4;
          }
          lVar6 = FUN_00661d68(puVar4);
          *(long *)(param_1 + 0x40) = lVar6;
        }
        param_2 = (byte *)FUN_0066fa8c(param_3,lVar6,lVar5);
      }
    }
    else {
LAB_00650d04:
      auVar2._8_4_ = uVar7;
      auVar2._0_8_ = pbVar9;
      auVar2._12_4_ = 0;
      auVar10._8_4_ = uVar7;
      auVar10._0_8_ = pbVar9;
      auVar10._12_4_ = 0;
      uVar7 = uVar7 >> 3;
      if (uVar7 < 3) goto LAB_00650d10;
LAB_00650dac:
      lVar5 = auVar10._0_8_;
      if (uVar7 == 3) {
        if ((auVar10._8_4_ & 0xff) != 0x1a) goto LAB_00650e80;
        puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar4 = (ulong *)*puVar4;
        }
        lVar6 = param_1 + 0x38;
        goto LAB_00650cb8;
      }
      if ((uVar7 == 4) && ((auVar10._8_4_ & 0xff) == 0x22)) {
        param_2 = (byte *)(lVar5 + -1);
        do {
          piVar8 = *(int **)(param_1 + 0x28);
          if (piVar8 == (int *)0x0) {
LAB_00650e0c:
            uVar3 = FUN_00661668(*(undefined8 *)(param_1 + 0x18));
            uVar3 = FUN_00675990(param_1 + 0x18,uVar3);
            param_2 = (byte *)FUN_0066fa8c(param_3,uVar3,param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            iVar1 = *(int *)(param_1 + 0x20);
            if (*piVar8 <= iVar1) goto LAB_00650e0c;
            *(int *)(param_1 + 0x20) = iVar1 + 1;
            param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar8 + (long)iVar1 * 2 + 2),
                                           param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x22));
        goto LAB_00650cd0;
      }
LAB_00650e80:
      pbVar9 = auVar10._0_8_;
      uVar7 = auVar10._8_4_;
      if ((uVar7 == 0) || ((uVar7 & 7) == 4)) {
        if (pbVar9 != (byte *)0x0) {
          *(uint *)(param_3 + 10) = uVar7 - 1;
          return pbVar9;
        }
        return (byte *)0x0;
      }
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        lVar5 = FUN_00661fa4(param_1 + 8);
      }
      else {
        lVar5 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8;
      }
      param_2 = (byte *)FUN_006fbab8(auVar10._8_8_ & 0xffffffff,lVar5,pbVar9,param_3);
    }
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}


// ===== 00650f6c  FUN_00650f6c =====

/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_00650f6c(long param_1,undefined1 *param_2,long *param_3)

{
  size_t sVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  long lVar6;
  byte *pbVar7;
  int iVar8;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 & 1) != 0) {
    pbVar7 = (byte *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar7 >> 1);
    if ((*pbVar7 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar7 + 8);
    }
    if (((long)sVar1 < 0x80) && ((long)sVar1 <= (*param_3 - (long)param_2) + 0xe)) {
      param_2[1] = (char)sVar1;
      *param_2 = 10;
      pvVar2 = (void *)((ulong)pbVar7 | 1);
      if ((*pbVar7 & 1) != 0) {
        pvVar2 = *(void **)(pbVar7 + 0x10);
      }
      memcpy(param_2 + 2,pvVar2,sVar1);
      param_2 = param_2 + 2 + sVar1;
    }
    else {
      param_2 = (undefined1 *)FUN_0066d778(param_3,1);
    }
  }
  if ((uVar3 >> 2 & 1) != 0) {
    param_2 = (undefined1 *)
              FUN_00678d18(2,*(long *)(param_1 + 0x40),
                           *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x14),param_2,param_3);
  }
  if ((uVar3 >> 1 & 1) == 0) {
    iVar4 = *(int *)(param_1 + 0x20);
  }
  else {
    pbVar7 = (byte *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar7 >> 1);
    if ((*pbVar7 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar7 + 8);
    }
    if (((long)sVar1 < 0x80) && ((long)sVar1 <= (*param_3 - (long)param_2) + 0xe)) {
      param_2[1] = (char)sVar1;
      *param_2 = 0x1a;
      pvVar2 = (void *)((ulong)pbVar7 | 1);
      if ((*pbVar7 & 1) != 0) {
        pvVar2 = *(void **)(pbVar7 + 0x10);
      }
      memcpy(param_2 + 2,pvVar2,sVar1);
      param_2 = param_2 + 2 + sVar1;
      iVar4 = *(int *)(param_1 + 0x20);
    }
    else {
      param_2 = (undefined1 *)FUN_0066d778(param_3,3);
      iVar4 = *(int *)(param_1 + 0x20);
    }
  }
  if (iVar4 != 0) {
    iVar8 = 0;
    do {
      lVar6 = *(long *)(*(long *)(param_1 + 0x28) + (long)iVar8 * 8 + 8);
      param_2 = (undefined1 *)FUN_00678d18(4,lVar6,*(undefined4 *)(lVar6 + 0x14),param_2,param_3);
      iVar8 = iVar8 + 1;
    } while (iVar4 != iVar8);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    puVar5 = (undefined1 *)
             FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
    return puVar5;
  }
  return param_2;
}


// ===== 00651150  FUN_00651150 =====

undefined4 FUN_00651150(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 00651158  FUN_00651158 =====

void FUN_00651158(long param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  lVar7 = (long)*(int *)(param_1 + 0x20);
  plVar8 = (long *)0x0;
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar8 = (long *)(*(long *)(param_1 + 0x28) + 8);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    lVar7 = 0;
  }
  else {
    lVar9 = lVar7 << 3;
    do {
      lVar4 = *plVar8;
      uVar2 = *(uint *)(lVar4 + 0x10);
      if ((uVar2 & 3) == 0) {
        lVar5 = 0;
      }
      else {
        if ((uVar2 & 1) == 0) {
          lVar5 = 0;
        }
        else {
          pbVar6 = (byte *)(*(ulong *)(lVar4 + 0x18) & 0xfffffffffffffffc);
          bVar3 = *pbVar6;
          uVar1 = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            uVar1 = *(ulong *)(pbVar6 + 8);
          }
          lVar5 = uVar1 + (((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
        }
        if ((uVar2 >> 1 & 1) != 0) {
          pbVar6 = (byte *)(*(ulong *)(lVar4 + 0x20) & 0xfffffffffffffffc);
          bVar3 = *pbVar6;
          uVar1 = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            uVar1 = *(ulong *)(pbVar6 + 8);
          }
          lVar5 = lVar5 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
                  1;
        }
      }
      lVar4 = FUN_006e5694(lVar4,lVar5,lVar4 + 0x14);
      lVar9 = lVar9 + -8;
      plVar8 = plVar8 + 1;
      lVar7 = lVar4 + lVar7 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (lVar9 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 7) != 0) {
    if ((uVar2 & 1) != 0) {
      pbVar6 = (byte *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
      bVar3 = *pbVar6;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar6 + 8);
      }
      lVar7 = lVar7 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      pbVar6 = (byte *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
      bVar3 = *pbVar6;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar6 + 8);
      }
      lVar7 = lVar7 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 2 & 1) != 0) {
      lVar9 = FUN_0065ea34(*(undefined8 *)(param_1 + 0x40));
      lVar7 = lVar7 + lVar9 + (ulong)(((uint)LZCOUNT((uint)lVar9 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  FUN_006e5694(param_1,lVar7,param_1 + 0x14);
  return;
}


// ===== 00651358  FUN_00651358 =====

void FUN_00651358(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  
  iVar2 = *(int *)(param_2 + 0x20);
  if (iVar2 != 0) {
    lVar8 = *(long *)(param_2 + 0x28);
    uVar5 = FUN_00675710(param_1 + 0x18,iVar2);
    FUN_0066251c(param_1 + 0x18,uVar5,lVar8 + 8,iVar2,
                 **(int **)(param_1 + 0x28) - *(int *)(param_1 + 0x20));
    iVar3 = **(int **)(param_1 + 0x28);
    iVar2 = *(int *)(param_1 + 0x20) + iVar2;
    *(int *)(param_1 + 0x20) = iVar2;
    if (iVar3 < iVar2) {
      **(int **)(param_1 + 0x28) = iVar2;
    }
  }
  uVar4 = *(uint *)(param_2 + 0x10);
  if ((uVar4 & 7) != 0) {
    if ((uVar4 & 1) != 0) {
      uVar7 = *(ulong *)(param_2 + 0x30);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0x30,uVar7 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0x30,uVar7 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar4 >> 1 & 1) != 0) {
      uVar7 = *(ulong *)(param_2 + 0x38);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0x38,uVar7 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0x38,uVar7 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar4 >> 2 & 1) != 0) {
      lVar8 = *(long *)(param_1 + 0x40);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      if (lVar8 == 0) {
        puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar6 = (ulong *)*puVar6;
        }
        lVar8 = FUN_00661d68(puVar6);
        *(long *)(param_1 + 0x40) = lVar8;
      }
      ppuVar1 = &PTR_PTR_FUN_007a9f68;
      if (*(undefined ***)(param_2 + 0x40) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(param_2 + 0x40);
      }
      FUN_0065ec98(lVar8,ppuVar1);
      uVar7 = *(ulong *)(param_2 + 8);
      goto joined_r0x00651498;
    }
  }
  uVar7 = *(ulong *)(param_2 + 8);
joined_r0x00651498:
  if ((uVar7 & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(uVar7 & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 006514f0  FUN_006514f0 =====

undefined ** FUN_006514f0(void)

{
  return &PTR_FUN_00798ba0;
}


// ===== 006514fc  FUN_006514fc =====

void FUN_006514fc(long param_1,long param_2)

{
  if (param_2 != param_1) {
    FUN_00650b80();
    FUN_00651358(param_1,param_2);
    return;
  }
  return;
}


// ===== 00651534  FUN_00651534 =====

undefined8 FUN_00651534(void)

{
  return 1;
}


// ===== 0065153c  FUN_0065153c =====

void FUN_0065153c(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_2 + 8) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_2 + 0x10) = uVar2;
  *(undefined8 *)(param_2 + 0x38) = uVar3;
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(undefined8 *)(param_2 + 0x40) = uVar4;
  return;
}


// ===== 006515c0  FUN_006515c0 =====

void FUN_006515c0(void)

{
  FUN_00684dd0(FUN_0064dd54,&DAT_007ae908,&DAT_007ae920);
  return;
}


// ===== 006515d8  FUN_006515d8 =====

void FUN_006515d8(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_007a2f20;
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_2;
  param_1[7] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = uVar1;
  param_1[8] = 0;
  param_1[9] = param_2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = param_2;
  puVar2 = PTR_DAT_007a2ea0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = (long)puVar2;
  param_1[0x10] = (long)puVar2;
  param_1[0x11] = (long)puVar2;
  param_1[0x12] = (long)puVar2;
  param_1[0x13] = (long)puVar2;
  return;
}


// ===== 00651628  FUN_00651628 =====

void FUN_00651628(undefined8 *param_1)

{
  void *__ptr;
  ulong uVar1;
  
  if ((param_1[1] & 1) == 0) {
    uVar1 = param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 00651648 to 00651657 has its CatchHandler @ 0065169c */
    uVar1 = FUN_00662218();
  }
  if (uVar1 == 0) {
    FUN_006516a0(param_1);
  }
  *param_1 = &PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) &&
     (__ptr = (void *)(param_1[1] + -2), __ptr != (void *)0x0)) {
    FUN_00662da0(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 006516a0  FUN_006516a0 =====

void FUN_006516a0(long param_1)

{
  FUN_00675290(param_1 + 0x18);
  FUN_00675290(param_1 + 0x30);
  if ((*(long *)(param_1 + 0x58) != 0) && (*(long *)(param_1 + 0x48) == 0)) {
                    /* try { // try from 006516d4 to 006516d7 has its CatchHandler @ 00651724 */
    FUN_00675910();
  }
  if ((*(long *)(param_1 + 0x70) != 0) && (*(long *)(param_1 + 0x60) == 0)) {
                    /* try { // try from 006516ec to 006516ef has its CatchHandler @ 00651720 */
    FUN_00675910();
  }
  FUN_00663a20(param_1 + 0x78);
  FUN_00663a20(param_1 + 0x80);
  FUN_00663a20(param_1 + 0x88);
  FUN_00663a20(param_1 + 0x90);
  FUN_00663a20(param_1 + 0x98);
  return;
}


// ===== 00651728  FUN_00651728 =====

void FUN_00651728(void *param_1)

{
  FUN_00651628();
  free(param_1);
  return;
}


// ===== 0065174c  FUN_0065174c =====

void FUN_0065174c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// ===== 00651754  FUN_00651754 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00651754(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x20);
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x28) + 8);
    do {
      while (pbVar4 = (byte *)*puVar3, (*pbVar4 & 1) != 0) {
        **(undefined1 **)(pbVar4 + 0x10) = 0;
        pbVar4[8] = 0;
        pbVar4[9] = 0;
        pbVar4[10] = 0;
        pbVar4[0xb] = 0;
        pbVar4[0xc] = 0;
        pbVar4[0xd] = 0;
        pbVar4[0xe] = 0;
        pbVar4[0xf] = 0;
        uVar2 = uVar2 - 1;
        puVar3 = puVar3 + 1;
        if (uVar2 == 0) goto LAB_006517b4;
      }
      pbVar4[0] = 0;
      pbVar4[1] = 0;
      uVar2 = uVar2 - 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 != 0);
LAB_006517b4:
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  uVar2 = (ulong)*(uint *)(param_1 + 0x38);
  if (0 < (int)*(uint *)(param_1 + 0x38)) {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x40) + 8);
    do {
      while (pbVar4 = (byte *)*puVar3, (*pbVar4 & 1) != 0) {
        **(undefined1 **)(pbVar4 + 0x10) = 0;
        pbVar4[8] = 0;
        pbVar4[9] = 0;
        pbVar4[10] = 0;
        pbVar4[0xb] = 0;
        pbVar4[0xc] = 0;
        pbVar4[0xd] = 0;
        pbVar4[0xe] = 0;
        pbVar4[0xf] = 0;
        uVar2 = uVar2 - 1;
        puVar3 = puVar3 + 1;
        if (uVar2 == 0) goto LAB_00651804;
      }
      pbVar4[0] = 0;
      pbVar4[1] = 0;
      uVar2 = uVar2 - 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 != 0);
LAB_00651804:
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  uVar2 = (ulong)*(uint *)(param_1 + 0x50);
  if (0 < (int)*(uint *)(param_1 + 0x50)) {
    puVar3 = *(undefined8 **)(param_1 + 0x58);
    do {
      puVar3 = puVar3 + 1;
      FUN_0064e5d8(*puVar3);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  FUN_0066211c(param_1 + 0x60);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar4 = (byte *)(*(ulong *)(param_1 + 0x78) & 0xfffffffffffffffc);
      if ((*pbVar4 & 1) == 0) {
        pbVar4[0] = 0;
        pbVar4[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar4 + 0x10) = 0;
        pbVar4[8] = 0;
        pbVar4[9] = 0;
        pbVar4[10] = 0;
        pbVar4[0xb] = 0;
        pbVar4[0xc] = 0;
        pbVar4[0xd] = 0;
        pbVar4[0xe] = 0;
        pbVar4[0xf] = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      pbVar4 = (byte *)(*(ulong *)(param_1 + 0x80) & 0xfffffffffffffffc);
      if ((*pbVar4 & 1) == 0) {
        pbVar4[0] = 0;
        pbVar4[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar4 + 0x10) = 0;
        pbVar4[8] = 0;
        pbVar4[9] = 0;
        pbVar4[10] = 0;
        pbVar4[0xb] = 0;
        pbVar4[0xc] = 0;
        pbVar4[0xd] = 0;
        pbVar4[0xe] = 0;
        pbVar4[0xf] = 0;
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      pbVar4 = (byte *)(*(ulong *)(param_1 + 0x88) & 0xfffffffffffffffc);
      if ((*pbVar4 & 1) == 0) {
        pbVar4[0] = 0;
        pbVar4[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar4 + 0x10) = 0;
        pbVar4[8] = 0;
        pbVar4[9] = 0;
        pbVar4[10] = 0;
        pbVar4[0xb] = 0;
        pbVar4[0xc] = 0;
        pbVar4[0xd] = 0;
        pbVar4[0xe] = 0;
        pbVar4[0xf] = 0;
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      pbVar4 = (byte *)(*(ulong *)(param_1 + 0x90) & 0xfffffffffffffffc);
      if ((*pbVar4 & 1) == 0) {
        pbVar4[0] = 0;
        pbVar4[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar4 + 0x10) = 0;
        pbVar4[8] = 0;
        pbVar4[9] = 0;
        pbVar4[10] = 0;
        pbVar4[0xb] = 0;
        pbVar4[0xc] = 0;
        pbVar4[0xd] = 0;
        pbVar4[0xe] = 0;
        pbVar4[0xf] = 0;
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      pbVar4 = (byte *)(*(ulong *)(param_1 + 0x98) & 0xfffffffffffffffc);
      if ((*pbVar4 & 1) == 0) {
        pbVar4[0] = 0;
        pbVar4[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar4 + 0x10) = 0;
        pbVar4[8] = 0;
        pbVar4[9] = 0;
        pbVar4[10] = 0;
        pbVar4[0xb] = 0;
        pbVar4[0xc] = 0;
        pbVar4[0xd] = 0;
        pbVar4[0xe] = 0;
        pbVar4[0xf] = 0;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006622b8((byte *)(param_1 + 8));
  return;
}


// ===== 00651960  FUN_00651960 =====

byte * FUN_00651960(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  ulong *puVar9;
  uint uVar10;
  int *piVar11;
  byte *pbVar12;
  undefined1 auVar13 [16];
  
  puVar3 = PTR_PTR_007a2ea8;
LAB_006519b0:
  if ((byte *)*param_3 <= param_2) {
    iVar1 = (int)param_2 - *(int *)(param_3 + 1);
    if (*(int *)((long)param_3 + 0x1c) == iVar1) {
      pbVar12 = (byte *)0x0;
      if (param_3[2] != 0 || iVar1 < 1) {
        pbVar12 = param_2;
      }
      return pbVar12;
    }
    auVar13 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
    param_2 = auVar13._0_8_;
    if ((auVar13 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      return param_2;
    }
  }
  pbVar12 = param_2 + 1;
  uVar10 = (uint)*param_2;
  if ((char)*param_2 < '\0') {
    uVar10 = (uVar10 + (uint)*pbVar12 * 0x80) - 0x80;
    if (-1 < (char)*pbVar12) {
      pbVar12 = param_2 + 2;
      goto LAB_006519e4;
    }
    auVar13 = FUN_0066fe50(param_2);
    uVar10 = (uint)(auVar13._8_8_ >> 3) & 0x1fffffff;
    auVar2 = auVar13;
    if (uVar10 < 5) goto LAB_00651afc;
LAB_006519f0:
    auVar13 = auVar2;
    lVar7 = auVar13._0_8_;
    uVar8 = auVar13._8_4_;
    if (uVar10 < 7) {
      if (uVar10 == 5) {
        if ((uVar8 & 0xff) != 0x2a) goto LAB_00651dec;
        param_2 = (byte *)(lVar7 + -1);
        do {
          piVar11 = *(int **)(param_1 + 0x58);
          if (piVar11 == (int *)0x0) {
LAB_00651d78:
            uVar5 = FUN_006613e8(*(undefined8 *)(param_1 + 0x48));
            uVar5 = FUN_00675990(param_1 + 0x48,uVar5);
            param_2 = (byte *)FUN_0066fa8c(param_3,uVar5,param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            iVar1 = *(int *)(param_1 + 0x50);
            if (*piVar11 <= iVar1) goto LAB_00651d78;
            *(int *)(param_1 + 0x50) = iVar1 + 1;
            param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar11 + (long)iVar1 * 2 + 2),
                                           param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x2a));
        goto LAB_006519b0;
      }
      if ((uVar10 == 6) && ((uVar8 & 0xff) == 0x32)) {
        puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar9 = (ulong *)*puVar9;
        }
        lVar4 = param_1 + 0x88;
        goto LAB_00651998;
      }
    }
    else {
      if (uVar10 == 7) {
        if ((uVar8 & 0xff) != 0x3a) goto LAB_00651dec;
        puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar9 = (ulong *)*puVar9;
        }
        lVar4 = param_1 + 0x90;
LAB_00651998:
        uVar5 = FUN_0066399c(lVar4,puVar9);
        param_2 = (byte *)FUN_0066ff90(uVar5,lVar7,param_3);
        if (param_2 == (byte *)0x0) {
          return (byte *)0x0;
        }
        goto LAB_006519b0;
      }
      if (uVar10 == 8) {
        if ((uVar8 & 0xff) == 0x42) {
          puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
          if ((*(ulong *)(param_1 + 8) & 1) != 0) {
            puVar9 = (ulong *)*puVar9;
          }
          lVar4 = param_1 + 0x98;
          goto LAB_00651998;
        }
        goto LAB_00651dec;
      }
      if ((uVar10 == 9) && ((uVar8 & 0xff) == 0x4a)) {
        param_2 = (byte *)(lVar7 + -1);
        do {
          piVar11 = *(int **)(param_1 + 0x70);
          if (piVar11 == (int *)0x0) {
LAB_00651a60:
            uVar5 = FUN_00661668(*(undefined8 *)(param_1 + 0x60));
            uVar5 = FUN_00675990(param_1 + 0x60,uVar5);
            param_2 = (byte *)FUN_0066fa8c(param_3,uVar5,param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            iVar1 = *(int *)(param_1 + 0x68);
            if (*piVar11 <= iVar1) goto LAB_00651a60;
            *(int *)(param_1 + 0x68) = iVar1 + 1;
            param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar11 + (long)iVar1 * 2 + 2),
                                           param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x4a));
        goto LAB_006519b0;
      }
    }
  }
  else {
LAB_006519e4:
    auVar2._8_4_ = uVar10;
    auVar2._0_8_ = pbVar12;
    auVar2._12_4_ = 0;
    auVar13._8_4_ = uVar10;
    auVar13._0_8_ = pbVar12;
    auVar13._12_4_ = 0;
    uVar10 = uVar10 >> 3;
    if (4 < uVar10) goto LAB_006519f0;
LAB_00651afc:
    lVar7 = auVar13._0_8_;
    uVar8 = auVar13._8_4_;
    if (2 < uVar10) {
      if (uVar10 == 3) {
        if ((uVar8 & 0xff) == 0x1a) {
          puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
          if ((*(ulong *)(param_1 + 8) & 1) != 0) {
            puVar9 = (ulong *)*puVar9;
          }
          lVar4 = param_1 + 0x78;
          goto LAB_00651998;
        }
        goto LAB_00651dec;
      }
      if ((uVar10 != 4) || ((uVar8 & 0xff) != 0x22)) goto LAB_00651dec;
      puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar9 = (ulong *)*puVar9;
      }
      lVar4 = param_1 + 0x80;
      goto LAB_00651998;
    }
    if (uVar10 == 1) {
      if ((uVar8 & 0xff) == 10) {
        param_2 = (byte *)(lVar7 + -1);
        do {
          piVar11 = *(int **)(param_1 + 0x28);
          if (piVar11 == (int *)0x0) {
LAB_00651c60:
            if (*(long *)(param_1 + 0x18) == 0) {
              puVar6 = (undefined8 *)FUN_00759c3c(0x18);
            }
            else {
              auVar13 = FUN_00663600(*(long *)(param_1 + 0x18),0x18,puVar3);
              puVar6 = auVar13._0_8_;
              *auVar13._8_8_ = puVar6;
              auVar13._8_8_[1] = FUN_005d5b40;
            }
            *puVar6 = 0;
            puVar6[1] = 0;
            puVar6[2] = 0;
            uVar5 = FUN_00675990(param_1 + 0x18,puVar6);
            param_2 = (byte *)FUN_0066ff90(uVar5,param_2 + 1,param_3);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            iVar1 = *(int *)(param_1 + 0x20);
            if (*piVar11 <= iVar1) goto LAB_00651c60;
            *(int *)(param_1 + 0x20) = iVar1 + 1;
            param_2 = (byte *)FUN_0066ff90(*(undefined8 *)(piVar11 + (long)iVar1 * 2 + 2),
                                           param_2 + 1,param_3);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 10));
        goto LAB_006519b0;
      }
    }
    else if ((uVar10 == 2) && ((uVar8 & 0xff) == 0x12)) {
      param_2 = (byte *)(lVar7 + -1);
      do {
        piVar11 = *(int **)(param_1 + 0x40);
        if (piVar11 == (int *)0x0) {
LAB_00651b64:
          if (*(long *)(param_1 + 0x30) == 0) {
            puVar6 = (undefined8 *)FUN_00759c3c(0x18);
          }
          else {
            auVar13 = FUN_00663600(*(long *)(param_1 + 0x30),0x18,puVar3);
            puVar6 = auVar13._0_8_;
            *auVar13._8_8_ = puVar6;
            auVar13._8_8_[1] = FUN_005d5b40;
          }
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6[2] = 0;
          uVar5 = FUN_00675990(param_1 + 0x30,puVar6);
          param_2 = (byte *)FUN_0066ff90(uVar5,param_2 + 1,param_3);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
        else {
          iVar1 = *(int *)(param_1 + 0x38);
          if (*piVar11 <= iVar1) goto LAB_00651b64;
          *(int *)(param_1 + 0x38) = iVar1 + 1;
          param_2 = (byte *)FUN_0066ff90(*(undefined8 *)(piVar11 + (long)iVar1 * 2 + 2),param_2 + 1,
                                         param_3);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
      } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x12));
      goto LAB_006519b0;
    }
  }
LAB_00651dec:
  pbVar12 = auVar13._0_8_;
  uVar10 = auVar13._8_4_;
  if ((uVar10 == 0) || ((uVar10 & 7) == 4)) {
    if (pbVar12 != (byte *)0x0) {
      *(uint *)(param_3 + 10) = uVar10 - 1;
      return pbVar12;
    }
    return (byte *)0x0;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    lVar7 = FUN_00661fa4(param_1 + 8);
  }
  else {
    lVar7 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8;
  }
  param_2 = (byte *)FUN_006fbab8(auVar13._8_8_ & 0xffffffff,lVar7,pbVar12,param_3);
  if (param_2 == (byte *)0x0) {
    return (byte *)0x0;
  }
  goto LAB_006519b0;
}


// ===== 00651efc  FUN_00651efc =====

/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_00651efc(long param_1,undefined1 *param_2,long *param_3)

{
  byte *pbVar1;
  size_t sVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    lVar10 = (ulong)*(uint *)(param_1 + 0x20) * 8;
    lVar9 = 0;
    do {
      while( true ) {
        pbVar7 = *(byte **)(*(long *)(param_1 + 0x28) + lVar9 + 8);
        sVar2 = (ulong)(*pbVar7 >> 1);
        if ((*pbVar7 & 1) != 0) {
          sVar2 = *(size_t *)(pbVar7 + 8);
        }
        if ((0x7f < (long)sVar2) || ((*param_3 - (long)param_2) + 0xe < (long)sVar2)) break;
        *param_2 = 10;
        param_2[1] = (char)sVar2;
        pbVar1 = pbVar7 + 1;
        if ((*pbVar7 & 1) != 0) {
          pbVar1 = *(byte **)(pbVar7 + 0x10);
        }
        memcpy(param_2 + 2,pbVar1,sVar2);
        param_2 = param_2 + 2 + sVar2;
        lVar9 = lVar9 + 8;
        if (lVar10 - lVar9 == 0) goto LAB_00651fd0;
      }
      param_2 = (undefined1 *)FUN_0066d8d0(param_3,1);
      lVar9 = lVar9 + 8;
    } while (lVar10 - lVar9 != 0);
  }
LAB_00651fd0:
  if (0 < (int)*(uint *)(param_1 + 0x38)) {
    lVar10 = (ulong)*(uint *)(param_1 + 0x38) * 8;
    lVar9 = 0;
    do {
      while( true ) {
        pbVar7 = *(byte **)(*(long *)(param_1 + 0x40) + lVar9 + 8);
        sVar2 = (ulong)(*pbVar7 >> 1);
        if ((*pbVar7 & 1) != 0) {
          sVar2 = *(size_t *)(pbVar7 + 8);
        }
        if ((0x7f < (long)sVar2) || ((*param_3 - (long)param_2) + 0xe < (long)sVar2)) break;
        *param_2 = 0x12;
        param_2[1] = (char)sVar2;
        pbVar1 = pbVar7 + 1;
        if ((*pbVar7 & 1) != 0) {
          pbVar1 = *(byte **)(pbVar7 + 0x10);
        }
        memcpy(param_2 + 2,pbVar1,sVar2);
        param_2 = param_2 + 2 + sVar2;
        lVar9 = lVar9 + 8;
        if (lVar10 - lVar9 == 0) goto LAB_00652080;
      }
      param_2 = (undefined1 *)FUN_0066d8d0(param_3,2);
      lVar9 = lVar9 + 8;
    } while (lVar10 - lVar9 != 0);
  }
LAB_00652080:
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 & 1) != 0) {
    pbVar7 = (byte *)(*(ulong *)(param_1 + 0x78) & 0xfffffffffffffffc);
    sVar2 = (ulong)(*pbVar7 >> 1);
    if ((*pbVar7 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar7 + 8);
    }
    if (((long)sVar2 < 0x80) && ((long)sVar2 <= (*param_3 - (long)param_2) + 0xe)) {
      param_2[1] = (char)sVar2;
      *param_2 = 0x1a;
      pvVar3 = (void *)((ulong)pbVar7 | 1);
      if ((*pbVar7 & 1) != 0) {
        pvVar3 = *(void **)(pbVar7 + 0x10);
      }
      memcpy(param_2 + 2,pvVar3,sVar2);
      param_2 = param_2 + 2 + sVar2;
    }
    else {
      param_2 = (undefined1 *)FUN_0066d778(param_3,3);
    }
  }
  if ((uVar4 >> 1 & 1) == 0) {
    iVar5 = *(int *)(param_1 + 0x50);
  }
  else {
    pbVar7 = (byte *)(*(ulong *)(param_1 + 0x80) & 0xfffffffffffffffc);
    sVar2 = (ulong)(*pbVar7 >> 1);
    if ((*pbVar7 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar7 + 8);
    }
    if (((long)sVar2 < 0x80) && ((long)sVar2 <= (*param_3 - (long)param_2) + 0xe)) {
      *(char *)((long)param_2 + 1) = (char)sVar2;
      *param_2 = 0x22;
      pvVar3 = (void *)((ulong)pbVar7 | 1);
      if ((*pbVar7 & 1) != 0) {
        pvVar3 = *(void **)(pbVar7 + 0x10);
      }
      memcpy((undefined1 *)((long)param_2 + 2),pvVar3,sVar2);
      param_2 = (undefined1 *)((long)param_2 + 2) + sVar2;
      iVar5 = *(int *)(param_1 + 0x50);
    }
    else {
      param_2 = (undefined1 *)FUN_0066d778(param_3,4);
      iVar5 = *(int *)(param_1 + 0x50);
    }
  }
  if (iVar5 != 0) {
    iVar8 = 0;
    do {
      lVar9 = *(long *)(*(long *)(param_1 + 0x58) + (long)iVar8 * 8 + 8);
      param_2 = (undefined1 *)FUN_00678d18(5,lVar9,*(undefined4 *)(lVar9 + 0x14),param_2,param_3);
      iVar8 = iVar8 + 1;
    } while (iVar5 != iVar8);
  }
  if ((uVar4 >> 2 & 1) != 0) {
    pbVar7 = (byte *)(*(ulong *)(param_1 + 0x88) & 0xfffffffffffffffc);
    sVar2 = (ulong)(*pbVar7 >> 1);
    if ((*pbVar7 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar7 + 8);
    }
    if (((long)sVar2 < 0x80) && ((long)sVar2 <= (*param_3 - (long)param_2) + 0xe)) {
      param_2[1] = (char)sVar2;
      *param_2 = 0x32;
      pvVar3 = (void *)((ulong)pbVar7 | 1);
      if ((*pbVar7 & 1) != 0) {
        pvVar3 = *(void **)(pbVar7 + 0x10);
      }
      memcpy(param_2 + 2,pvVar3,sVar2);
      param_2 = param_2 + 2 + sVar2;
    }
    else {
      param_2 = (undefined1 *)FUN_0066d778(param_3,6);
    }
  }
  if ((uVar4 >> 3 & 1) != 0) {
    pbVar7 = (byte *)(*(ulong *)(param_1 + 0x90) & 0xfffffffffffffffc);
    sVar2 = (ulong)(*pbVar7 >> 1);
    if ((*pbVar7 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar7 + 8);
    }
    if (((long)sVar2 < 0x80) && ((long)sVar2 <= (*param_3 - (long)param_2) + 0xe)) {
      *(char *)((long)param_2 + 1) = (char)sVar2;
      *param_2 = 0x3a;
      pvVar3 = (void *)((ulong)pbVar7 | 1);
      if ((*pbVar7 & 1) != 0) {
        pvVar3 = *(void **)(pbVar7 + 0x10);
      }
      memcpy((undefined1 *)((long)param_2 + 2),pvVar3,sVar2);
      param_2 = (undefined1 *)((long)param_2 + 2) + sVar2;
    }
    else {
      param_2 = (undefined1 *)FUN_0066d778(param_3,7);
    }
  }
  if ((uVar4 >> 4 & 1) == 0) {
    iVar5 = *(int *)(param_1 + 0x68);
  }
  else {
    pbVar7 = (byte *)(*(ulong *)(param_1 + 0x98) & 0xfffffffffffffffc);
    sVar2 = (ulong)(*pbVar7 >> 1);
    if ((*pbVar7 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar7 + 8);
    }
    if (((long)sVar2 < 0x80) && ((long)sVar2 <= (*param_3 - (long)param_2) + 0xe)) {
      param_2[1] = (char)sVar2;
      *param_2 = 0x42;
      pvVar3 = (void *)((ulong)pbVar7 | 1);
      if ((*pbVar7 & 1) != 0) {
        pvVar3 = *(void **)(pbVar7 + 0x10);
      }
      memcpy(param_2 + 2,pvVar3,sVar2);
      param_2 = param_2 + 2 + sVar2;
      iVar5 = *(int *)(param_1 + 0x68);
    }
    else {
      param_2 = (undefined1 *)FUN_0066d778(param_3,8);
      iVar5 = *(int *)(param_1 + 0x68);
    }
  }
  if (iVar5 != 0) {
    iVar8 = 0;
    do {
      lVar9 = *(long *)(*(long *)(param_1 + 0x70) + (long)iVar8 * 8 + 8);
      param_2 = (undefined1 *)FUN_00678d18(9,lVar9,*(undefined4 *)(lVar9 + 0x14),param_2,param_3);
      iVar8 = iVar8 + 1;
    } while (iVar5 != iVar8);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  puVar6 = (undefined1 *)
           FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
  return puVar6;
}


// ===== 00652414  FUN_00652414 =====

undefined4 FUN_00652414(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 0065241c  FUN_0065241c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0065241c(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  
  uVar6 = (ulong)*(uint *)(param_1 + 0x20);
  if ((int)*(uint *)(param_1 + 0x20) < 1) {
    uVar1 = *(uint *)(param_1 + 0x38);
    uVar10 = (ulong)uVar1;
    lVar7 = uVar6 + uVar10;
  }
  else {
    puVar9 = *(undefined8 **)(param_1 + 0x28);
    uVar11 = uVar6;
    do {
      puVar9 = puVar9 + 1;
      bVar2 = *(byte *)*puVar9;
      uVar10 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar10 = *(ulong *)((byte *)*puVar9 + 8);
      }
      uVar6 = uVar6 - 1;
      uVar11 = uVar10 + uVar11 + (ulong)(((uint)LZCOUNT((uint)uVar10 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (uVar6 != 0);
    uVar1 = *(uint *)(param_1 + 0x38);
    uVar10 = (ulong)uVar1;
    lVar7 = uVar11 + uVar10;
  }
  if (0 < (int)uVar1) {
    puVar9 = *(undefined8 **)(param_1 + 0x40);
    do {
      puVar9 = puVar9 + 1;
      bVar2 = *(byte *)*puVar9;
      uVar6 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar6 = *(ulong *)((byte *)*puVar9 + 8);
      }
      uVar10 = uVar10 - 1;
      lVar7 = uVar6 + lVar7 + (ulong)(((uint)LZCOUNT((uint)uVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (uVar10 != 0);
  }
  iVar3 = *(int *)(param_1 + 0x50);
  lVar7 = lVar7 + iVar3;
  puVar9 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x58) != 0) {
    puVar9 = (undefined8 *)(*(long *)(param_1 + 0x58) + 8);
  }
  if (iVar3 != 0) {
    lVar13 = (long)iVar3 << 3;
    do {
      lVar4 = FUN_0064feb4(*puVar9);
      lVar13 = lVar13 + -8;
      lVar7 = lVar4 + lVar7 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar9 = puVar9 + 1;
    } while (lVar13 != 0);
  }
  iVar3 = *(int *)(param_1 + 0x68);
  lVar7 = lVar7 + iVar3;
  plVar12 = (long *)0x0;
  if (*(long *)(param_1 + 0x70) != 0) {
    plVar12 = (long *)(*(long *)(param_1 + 0x70) + 8);
  }
  if (iVar3 != 0) {
    lVar13 = (long)iVar3 << 3;
    do {
      lVar4 = *plVar12;
      uVar1 = *(uint *)(lVar4 + 0x10);
      if ((uVar1 & 3) == 0) {
        lVar5 = 0;
      }
      else {
        if ((uVar1 & 1) == 0) {
          lVar5 = 0;
        }
        else {
          pbVar8 = (byte *)(*(ulong *)(lVar4 + 0x18) & 0xfffffffffffffffc);
          bVar2 = *pbVar8;
          uVar6 = (ulong)(bVar2 >> 1);
          if ((bVar2 & 1) != 0) {
            uVar6 = *(ulong *)(pbVar8 + 8);
          }
          lVar5 = uVar6 + (((uint)LZCOUNT((uint)uVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
        }
        if ((uVar1 >> 1 & 1) != 0) {
          pbVar8 = (byte *)(*(ulong *)(lVar4 + 0x20) & 0xfffffffffffffffc);
          bVar2 = *pbVar8;
          uVar6 = (ulong)(bVar2 >> 1);
          if ((bVar2 & 1) != 0) {
            uVar6 = *(ulong *)(pbVar8 + 8);
          }
          lVar5 = lVar5 + uVar6 + (ulong)(((uint)LZCOUNT((uint)uVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
                  1;
        }
      }
      lVar4 = FUN_006e5694(lVar4,lVar5,lVar4 + 0x14);
      lVar13 = lVar13 + -8;
      plVar12 = plVar12 + 1;
      lVar7 = lVar4 + lVar7 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (lVar13 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar8 = (byte *)(*(ulong *)(param_1 + 0x78) & 0xfffffffffffffffc);
      bVar2 = *pbVar8;
      uVar6 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar6 = *(ulong *)(pbVar8 + 8);
      }
      lVar7 = lVar7 + uVar6 + (ulong)(((uint)LZCOUNT((uint)uVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      pbVar8 = (byte *)(*(ulong *)(param_1 + 0x80) & 0xfffffffffffffffc);
      bVar2 = *pbVar8;
      uVar6 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar6 = *(ulong *)(pbVar8 + 8);
      }
      lVar7 = lVar7 + uVar6 + (ulong)(((uint)LZCOUNT((uint)uVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      pbVar8 = (byte *)(*(ulong *)(param_1 + 0x88) & 0xfffffffffffffffc);
      bVar2 = *pbVar8;
      uVar6 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar6 = *(ulong *)(pbVar8 + 8);
      }
      lVar7 = lVar7 + uVar6 + (ulong)(((uint)LZCOUNT((uint)uVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      pbVar8 = (byte *)(*(ulong *)(param_1 + 0x90) & 0xfffffffffffffffc);
      bVar2 = *pbVar8;
      uVar6 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar6 = *(ulong *)(pbVar8 + 8);
      }
      lVar7 = lVar7 + uVar6 + (ulong)(((uint)LZCOUNT((uint)uVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      pbVar8 = (byte *)(*(ulong *)(param_1 + 0x98) & 0xfffffffffffffffc);
      bVar2 = *pbVar8;
      uVar6 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar6 = *(ulong *)(pbVar8 + 8);
      }
      lVar7 = lVar7 + uVar6 + (ulong)(((uint)LZCOUNT((uint)uVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  FUN_006e5694(param_1,lVar7,param_1 + 0x14);
  return;
}


// ===== 006527d8  FUN_006527d8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_006527d8(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  iVar1 = *(int *)(param_2 + 0x20);
  if (iVar1 != 0) {
    lVar6 = *(long *)(param_2 + 0x28);
    uVar4 = FUN_00675710(param_1 + 0x18,iVar1);
    FUN_005d663c(param_1 + 0x18,uVar4,lVar6 + 8,iVar1,
                 **(int **)(param_1 + 0x28) - *(int *)(param_1 + 0x20));
    iVar2 = **(int **)(param_1 + 0x28);
    iVar1 = *(int *)(param_1 + 0x20) + iVar1;
    *(int *)(param_1 + 0x20) = iVar1;
    if (iVar2 < iVar1) {
      **(int **)(param_1 + 0x28) = iVar1;
    }
  }
  iVar1 = *(int *)(param_2 + 0x38);
  if (iVar1 != 0) {
    lVar6 = *(long *)(param_2 + 0x40);
    uVar4 = FUN_00675710(param_1 + 0x30,iVar1);
    FUN_005d663c(param_1 + 0x30,uVar4,lVar6 + 8,iVar1,
                 **(int **)(param_1 + 0x40) - *(int *)(param_1 + 0x38));
    iVar2 = **(int **)(param_1 + 0x40);
    iVar1 = *(int *)(param_1 + 0x38) + iVar1;
    *(int *)(param_1 + 0x38) = iVar1;
    if (iVar2 < iVar1) {
      **(int **)(param_1 + 0x40) = iVar1;
    }
  }
  iVar1 = *(int *)(param_2 + 0x50);
  if (iVar1 != 0) {
    lVar6 = *(long *)(param_2 + 0x58);
    uVar4 = FUN_00675710(param_1 + 0x48,iVar1);
    FUN_006625a4(param_1 + 0x48,uVar4,lVar6 + 8,iVar1,
                 **(int **)(param_1 + 0x58) - *(int *)(param_1 + 0x50));
    iVar2 = **(int **)(param_1 + 0x58);
    iVar1 = *(int *)(param_1 + 0x50) + iVar1;
    *(int *)(param_1 + 0x50) = iVar1;
    if (iVar2 < iVar1) {
      **(int **)(param_1 + 0x58) = iVar1;
    }
  }
  iVar1 = *(int *)(param_2 + 0x68);
  if (iVar1 != 0) {
    lVar6 = *(long *)(param_2 + 0x70);
    uVar4 = FUN_00675710(param_1 + 0x60,iVar1);
    FUN_0066251c(param_1 + 0x60,uVar4,lVar6 + 8,iVar1,
                 **(int **)(param_1 + 0x70) - *(int *)(param_1 + 0x68));
    iVar2 = **(int **)(param_1 + 0x70);
    iVar1 = *(int *)(param_1 + 0x68) + iVar1;
    *(int *)(param_1 + 0x68) = iVar1;
    if (iVar2 < iVar1) {
      **(int **)(param_1 + 0x70) = iVar1;
    }
  }
  uVar3 = *(uint *)(param_2 + 0x10);
  if ((uVar3 & 0x1f) != 0) {
    if ((uVar3 & 1) != 0) {
      uVar5 = *(ulong *)(param_2 + 0x78);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0x78,uVar5 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0x78,uVar5 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar3 >> 1 & 1) != 0) {
      uVar5 = *(ulong *)(param_2 + 0x80);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0x80,uVar5 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0x80,uVar5 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar3 >> 2 & 1) != 0) {
      uVar5 = *(ulong *)(param_2 + 0x88);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0x88,uVar5 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0x88,uVar5 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar3 >> 3 & 1) != 0) {
      uVar5 = *(ulong *)(param_2 + 0x90);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0x90,uVar5 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0x90,uVar5 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar3 >> 4 & 1) != 0) {
      uVar5 = *(ulong *)(param_2 + 0x98);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0x98,uVar5 & 0xfffffffffffffffc);
        uVar5 = *(ulong *)(param_2 + 8);
      }
      else {
        FUN_006636d4(param_1 + 0x98,uVar5 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
        uVar5 = *(ulong *)(param_2 + 8);
      }
      goto joined_r0x00652b08;
    }
  }
  uVar5 = *(ulong *)(param_2 + 8);
joined_r0x00652b08:
  if ((uVar5 & 1) != 0) {
    FUN_006621e0(param_1 + 8,(uVar5 & 0xfffffffffffffffc) + 8);
    return;
  }
  return;
}


// ===== 00652b10  FUN_00652b10 =====

undefined ** FUN_00652b10(void)

{
  return &PTR_FUN_00798bb0;
}


// ===== 00652b1c  FUN_00652b1c =====

undefined8 FUN_00652b1c(void)

{
  return 1;
}


// ===== 00652b24  FUN_00652b24 =====

void FUN_00652b24(void)

{
  FUN_00684dd0(FUN_0064dd54,&DAT_007ae908,&DAT_007ae930);
  return;
}


// ===== 00652b3c  FUN_00652b3c =====

void FUN_00652b3c(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_007a2f30;
  param_1[2] = 0;
  param_1[3] = param_2;
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_2;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = uVar1;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  return;
}


// ===== 00652b74  FUN_00652b74 =====

void FUN_00652b74(long *param_1)

{
  if ((param_1[2] != 0) && (*param_1 == 0)) {
                    /* try { // try from 00652b8c to 00652b8f has its CatchHandler @ 00652b98 */
    FUN_00675910();
  }
  return;
}


// ===== 00652b9c  FUN_00652b9c =====

void FUN_00652b9c(undefined **param_1)

{
  ulong uVar1;
  undefined *puVar2;
  
  if (((ulong)param_1[1] & 1) == 0) {
    uVar1 = (ulong)param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 00652bbc to 00652bbf has its CatchHandler @ 00652c84 */
    uVar1 = FUN_00662218();
  }
  if (uVar1 == 0) {
    if ((param_1[5] != (undefined *)0x0) && (param_1[3] == (undefined *)0x0)) {
                    /* try { // try from 00652c1c to 00652c1f has its CatchHandler @ 00652c80 */
      FUN_00675910();
    }
    if ((param_1[8] != (undefined *)0x0) && (param_1[6] == (undefined *)0x0)) {
                    /* try { // try from 00652c34 to 00652c37 has its CatchHandler @ 00652c7c */
      FUN_00675910();
    }
    if (param_1 != &PTR_PTR_FUN_007a9a78) {
      puVar2 = param_1[9];
      if (puVar2 != (undefined *)0x0) {
        FUN_0065612c(puVar2);
        free(puVar2);
      }
      puVar2 = param_1[10];
      if (puVar2 != (undefined *)0x0) {
        FUN_0065612c(puVar2);
        free(puVar2);
      }
    }
  }
  *param_1 = (undefined *)&PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) && (puVar2 = param_1[1] + -2, puVar2 != (undefined *)0x0))
  {
    FUN_00662da0(puVar2);
    free(puVar2);
    return;
  }
  return;
}


// ===== 00652c88  FUN_00652c88 =====

void FUN_00652c88(void *param_1)

{
  FUN_00652b9c();
  free(param_1);
  return;
}


// ===== 00652cac  FUN_00652cac =====

void FUN_00652cac(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// ===== 00652cb4  FUN_00652cb4 =====

void FUN_00652cb4(long param_1)

{
  uint uVar1;
  
  FUN_0066211c(param_1 + 0x18);
  FUN_0066211c(param_1 + 0x30);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_0064ea98(*(undefined8 *)(param_1 + 0x48));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_0064ea98(*(undefined8 *)(param_1 + 0x50));
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006622b8((byte *)(param_1 + 8));
  return;
}


// ===== 00652d20  FUN_00652d20 =====

byte * FUN_00652d20(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  ulong *puVar3;
  undefined8 uVar4;
  long lVar5;
  byte *pbVar6;
  uint uVar7;
  int *piVar8;
  undefined1 auVar9 [16];
  
LAB_00652d60:
  do {
    while( true ) {
      if ((byte *)*param_3 <= param_2) {
        iVar1 = (int)param_2 - *(int *)(param_3 + 1);
        if (*(int *)((long)param_3 + 0x1c) == iVar1) {
          pbVar6 = (byte *)0x0;
          if (param_3[2] != 0 || iVar1 < 1) {
            pbVar6 = param_2;
          }
          return pbVar6;
        }
        auVar9 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
        param_2 = auVar9._0_8_;
        if ((auVar9 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
          return param_2;
        }
      }
      pbVar6 = param_2 + 1;
      uVar7 = (uint)*param_2;
      if (-1 < (char)*param_2) break;
      uVar7 = (uVar7 + (uint)*pbVar6 * 0x80) - 0x80;
      if (-1 < (char)*pbVar6) {
        pbVar6 = param_2 + 2;
        break;
      }
      auVar9 = FUN_0066fe50(param_2);
      uVar7 = (uint)(auVar9._8_8_ >> 3) & 0x1fffffff;
      auVar2 = auVar9;
      if (2 < uVar7) goto LAB_00652e40;
LAB_00652da0:
      auVar9 = auVar2;
      if (uVar7 == 1) {
        if ((auVar9._8_4_ & 0xff) != 10) goto LAB_00652f80;
        lVar5 = *(long *)(param_1 + 0x48);
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
        if (lVar5 == 0) {
          puVar3 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
          if ((*(ulong *)(param_1 + 8) & 1) != 0) {
            puVar3 = (ulong *)*puVar3;
          }
          lVar5 = FUN_00661768(puVar3);
          *(long *)(param_1 + 0x48) = lVar5;
        }
      }
      else {
        if ((uVar7 != 2) || ((auVar9._8_4_ & 0xff) != 0x12)) goto LAB_00652f80;
        lVar5 = *(long *)(param_1 + 0x50);
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
        if (lVar5 == 0) {
          puVar3 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
          if ((*(ulong *)(param_1 + 8) & 1) != 0) {
            puVar3 = (ulong *)*puVar3;
          }
          lVar5 = FUN_00661768(puVar3);
          *(long *)(param_1 + 0x50) = lVar5;
        }
      }
      param_2 = (byte *)FUN_0066fa8c(param_3,lVar5,auVar9._0_8_);
      if (param_2 == (byte *)0x0) {
        return (byte *)0x0;
      }
    }
    auVar2._8_4_ = uVar7;
    auVar2._0_8_ = pbVar6;
    auVar2._12_4_ = 0;
    auVar9._8_4_ = uVar7;
    auVar9._0_8_ = pbVar6;
    auVar9._12_4_ = 0;
    uVar7 = uVar7 >> 3;
    if (uVar7 < 3) goto LAB_00652da0;
LAB_00652e40:
    if (uVar7 == 3) {
      if ((auVar9._8_4_ & 0xff) == 0x1a) {
        param_2 = (byte *)(auVar9._0_8_ + -1);
        do {
          piVar8 = *(int **)(param_1 + 0x28);
          if (piVar8 == (int *)0x0) {
LAB_00652f38:
            uVar4 = FUN_00661668(*(undefined8 *)(param_1 + 0x18));
            uVar4 = FUN_00675990(param_1 + 0x18,uVar4);
            param_2 = (byte *)FUN_0066fa8c(param_3,uVar4,param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            iVar1 = *(int *)(param_1 + 0x20);
            if (*piVar8 <= iVar1) goto LAB_00652f38;
            *(int *)(param_1 + 0x20) = iVar1 + 1;
            param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar8 + (long)iVar1 * 2 + 2),
                                           param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x1a));
        goto LAB_00652d60;
      }
    }
    else if ((uVar7 == 4) && ((auVar9._8_4_ & 0xff) == 0x22)) {
      param_2 = (byte *)(auVar9._0_8_ + -1);
      do {
        piVar8 = *(int **)(param_1 + 0x40);
        if (piVar8 == (int *)0x0) {
LAB_00652ea0:
          uVar4 = FUN_00661668(*(undefined8 *)(param_1 + 0x30));
          uVar4 = FUN_00675990(param_1 + 0x30,uVar4);
          param_2 = (byte *)FUN_0066fa8c(param_3,uVar4,param_2 + 1);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
        else {
          iVar1 = *(int *)(param_1 + 0x38);
          if (*piVar8 <= iVar1) goto LAB_00652ea0;
          *(int *)(param_1 + 0x38) = iVar1 + 1;
          param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar8 + (long)iVar1 * 2 + 2),
                                         param_2 + 1);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
      } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x22));
      goto LAB_00652d60;
    }
LAB_00652f80:
    pbVar6 = auVar9._0_8_;
    uVar7 = auVar9._8_4_;
    if ((uVar7 == 0) || ((uVar7 & 7) == 4)) {
      if (pbVar6 != (byte *)0x0) {
        *(uint *)(param_3 + 10) = uVar7 - 1;
        return pbVar6;
      }
      return (byte *)0x0;
    }
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar5 = FUN_00661fa4(param_1 + 8);
    }
    else {
      lVar5 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8;
    }
    param_2 = (byte *)FUN_006fbab8(auVar9._8_8_ & 0xffffffff,lVar5,pbVar6,param_3);
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}


// ===== 00653070  FUN_00653070 =====

undefined8 FUN_00653070(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = FUN_00678d18(1,*(long *)(param_1 + 0x48),
                           *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x14),param_2,param_3);
  }
  if ((uVar1 >> 1 & 1) == 0) {
    iVar2 = *(int *)(param_1 + 0x20);
  }
  else {
    param_2 = FUN_00678d18(2,*(long *)(param_1 + 0x50),
                           *(undefined4 *)(*(long *)(param_1 + 0x50) + 0x14),param_2,param_3);
    iVar2 = *(int *)(param_1 + 0x20);
  }
  if (iVar2 != 0) {
    iVar5 = 0;
    do {
      lVar4 = *(long *)(*(long *)(param_1 + 0x28) + (long)iVar5 * 8 + 8);
      param_2 = FUN_00678d18(3,lVar4,*(undefined4 *)(lVar4 + 0x14),param_2,param_3);
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  iVar2 = *(int *)(param_1 + 0x38);
  if (iVar2 != 0) {
    iVar5 = 0;
    do {
      lVar4 = *(long *)(*(long *)(param_1 + 0x40) + (long)iVar5 * 8 + 8);
      param_2 = FUN_00678d18(4,lVar4,*(undefined4 *)(lVar4 + 0x14),param_2,param_3);
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar3 = FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
  return uVar3;
}


// ===== 00653184  FUN_00653184 =====

void FUN_00653184(long param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  lVar8 = (long)*(int *)(param_1 + 0x20);
  plVar9 = (long *)0x0;
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar9 = (long *)(*(long *)(param_1 + 0x28) + 8);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    lVar8 = 0;
  }
  else {
    lVar10 = lVar8 << 3;
    do {
      lVar5 = *plVar9;
      uVar2 = *(uint *)(lVar5 + 0x10);
      if ((uVar2 & 3) == 0) {
        lVar6 = 0;
      }
      else {
        if ((uVar2 & 1) == 0) {
          lVar6 = 0;
        }
        else {
          pbVar7 = (byte *)(*(ulong *)(lVar5 + 0x18) & 0xfffffffffffffffc);
          bVar3 = *pbVar7;
          uVar1 = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            uVar1 = *(ulong *)(pbVar7 + 8);
          }
          lVar6 = uVar1 + (((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
        }
        if ((uVar2 >> 1 & 1) != 0) {
          pbVar7 = (byte *)(*(ulong *)(lVar5 + 0x20) & 0xfffffffffffffffc);
          bVar3 = *pbVar7;
          uVar1 = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            uVar1 = *(ulong *)(pbVar7 + 8);
          }
          lVar6 = lVar6 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
                  1;
        }
      }
      lVar5 = FUN_006e5694(lVar5,lVar6,lVar5 + 0x14);
      lVar10 = lVar10 + -8;
      plVar9 = plVar9 + 1;
      lVar8 = lVar5 + lVar8 + (ulong)(((uint)LZCOUNT((uint)lVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (lVar10 != 0);
  }
  iVar4 = *(int *)(param_1 + 0x38);
  lVar8 = lVar8 + iVar4;
  plVar9 = (long *)0x0;
  if (*(long *)(param_1 + 0x40) != 0) {
    plVar9 = (long *)(*(long *)(param_1 + 0x40) + 8);
  }
  if (iVar4 != 0) {
    lVar10 = (long)iVar4 << 3;
    do {
      lVar5 = *plVar9;
      uVar2 = *(uint *)(lVar5 + 0x10);
      if ((uVar2 & 3) == 0) {
        lVar6 = 0;
      }
      else {
        if ((uVar2 & 1) == 0) {
          lVar6 = 0;
        }
        else {
          pbVar7 = (byte *)(*(ulong *)(lVar5 + 0x18) & 0xfffffffffffffffc);
          bVar3 = *pbVar7;
          uVar1 = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            uVar1 = *(ulong *)(pbVar7 + 8);
          }
          lVar6 = uVar1 + (((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
        }
        if ((uVar2 >> 1 & 1) != 0) {
          pbVar7 = (byte *)(*(ulong *)(lVar5 + 0x20) & 0xfffffffffffffffc);
          bVar3 = *pbVar7;
          uVar1 = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            uVar1 = *(ulong *)(pbVar7 + 8);
          }
          lVar6 = lVar6 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
                  1;
        }
      }
      lVar5 = FUN_006e5694(lVar5,lVar6,lVar5 + 0x14);
      lVar10 = lVar10 + -8;
      plVar9 = plVar9 + 1;
      lVar8 = lVar5 + lVar8 + (ulong)(((uint)LZCOUNT((uint)lVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (lVar10 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      lVar10 = FUN_00656d24(*(undefined8 *)(param_1 + 0x48));
      lVar8 = lVar8 + lVar10 + (ulong)(((uint)LZCOUNT((uint)lVar10 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1
      ;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      lVar10 = FUN_00656d24(*(undefined8 *)(param_1 + 0x50));
      lVar8 = lVar8 + lVar10 + (ulong)(((uint)LZCOUNT((uint)lVar10 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1
      ;
    }
  }
  FUN_006e5694(param_1,lVar8,param_1 + 0x14);
  return;
}


// ===== 00653420  FUN_00653420 =====

void FUN_00653420(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  long lVar7;
  
  iVar2 = *(int *)(param_2 + 0x20);
  if (iVar2 != 0) {
    lVar7 = *(long *)(param_2 + 0x28);
    uVar5 = FUN_00675710(param_1 + 0x18,iVar2);
    FUN_0066251c(param_1 + 0x18,uVar5,lVar7 + 8,iVar2,
                 **(int **)(param_1 + 0x28) - *(int *)(param_1 + 0x20));
    iVar3 = **(int **)(param_1 + 0x28);
    iVar2 = *(int *)(param_1 + 0x20) + iVar2;
    *(int *)(param_1 + 0x20) = iVar2;
    if (iVar3 < iVar2) {
      **(int **)(param_1 + 0x28) = iVar2;
    }
  }
  iVar2 = *(int *)(param_2 + 0x38);
  if (iVar2 != 0) {
    lVar7 = *(long *)(param_2 + 0x40);
    uVar5 = FUN_00675710(param_1 + 0x30,iVar2);
    FUN_0066251c(param_1 + 0x30,uVar5,lVar7 + 8,iVar2,
                 **(int **)(param_1 + 0x40) - *(int *)(param_1 + 0x38));
    iVar3 = **(int **)(param_1 + 0x40);
    iVar2 = *(int *)(param_1 + 0x38) + iVar2;
    *(int *)(param_1 + 0x38) = iVar2;
    if (iVar3 < iVar2) {
      **(int **)(param_1 + 0x40) = iVar2;
    }
  }
  uVar4 = *(uint *)(param_2 + 0x10);
  if ((uVar4 & 3) != 0) {
    if ((uVar4 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0x48);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if (lVar7 == 0) {
        puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar6 = (ulong *)*puVar6;
        }
        lVar7 = FUN_00661768(puVar6);
        *(long *)(param_1 + 0x48) = lVar7;
      }
      ppuVar1 = &PTR_PTR_FUN_007a9be0;
      if (*(undefined ***)(param_2 + 0x48) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(param_2 + 0x48);
      }
      FUN_0065711c(lVar7,ppuVar1);
    }
    if ((uVar4 >> 1 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0x50);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      if (lVar7 == 0) {
        puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar6 = (ulong *)*puVar6;
        }
        lVar7 = FUN_00661768(puVar6);
        *(long *)(param_1 + 0x50) = lVar7;
      }
      ppuVar1 = &PTR_PTR_FUN_007a9be0;
      if (*(undefined ***)(param_2 + 0x50) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(param_2 + 0x50);
      }
      FUN_0065711c(lVar7,ppuVar1);
    }
  }
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 006535c0  FUN_006535c0 =====

undefined ** FUN_006535c0(void)

{
  return &PTR_FUN_00798bc0;
}


// ===== 006535cc  FUN_006535cc =====

undefined8 FUN_006535cc(void)

{
  return 1;
}


// ===== 006535d4  FUN_006535d4 =====

void FUN_006535d4(void)

{
  FUN_00684dd0(FUN_0064dd54,&DAT_007ae908,&DAT_007ae940);
  return;
}


// ===== 006535ec  FUN_006535ec =====

void FUN_006535ec(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_007a2f48;
  param_1[2] = 0;
  param_1[3] = param_2;
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_2;
  param_1[7] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = uVar1;
  param_1[8] = 0;
  param_1[9] = param_2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = param_2;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  puVar2 = PTR_DAT_007a2ea0;
  param_1[0x15] = 0;
  param_1[0xf] = (long)puVar2;
  param_1[0x10] = (long)puVar2;
  param_1[0x11] = (long)puVar2;
  param_1[0x12] = (long)puVar2;
  return;
}


// ===== 0065364c  FUN_0065364c =====

void FUN_0065364c(undefined8 *param_1)

{
  void *__ptr;
  ulong uVar1;
  
  if ((param_1[1] & 1) == 0) {
    uVar1 = param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 0065366c to 0065367b has its CatchHandler @ 006536c0 */
    uVar1 = FUN_00662218();
  }
  if (uVar1 == 0) {
    FUN_006536c4(param_1);
  }
  *param_1 = &PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) &&
     (__ptr = (void *)(param_1[1] + -2), __ptr != (void *)0x0)) {
    FUN_00662da0(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 006536c4  FUN_006536c4 =====

void FUN_006536c4(undefined **param_1)

{
  undefined *__ptr;
  
  if ((param_1[5] != (undefined *)0x0) && (param_1[3] == (undefined *)0x0)) {
                    /* try { // try from 006536e4 to 006536e7 has its CatchHandler @ 00653798 */
    FUN_00675910();
  }
  if ((param_1[8] != (undefined *)0x0) && (param_1[6] == (undefined *)0x0)) {
                    /* try { // try from 006536fc to 006536ff has its CatchHandler @ 00653794 */
    FUN_00675910();
  }
  if ((param_1[0xb] != (undefined *)0x0) && (param_1[9] == (undefined *)0x0)) {
                    /* try { // try from 00653714 to 00653717 has its CatchHandler @ 00653790 */
    FUN_00675910();
  }
  if ((param_1[0xe] != (undefined *)0x0) && (param_1[0xc] == (undefined *)0x0)) {
                    /* try { // try from 0065372c to 0065372f has its CatchHandler @ 0065378c */
    FUN_00675910();
  }
  FUN_00663a20(param_1 + 0xf);
  FUN_00663a20(param_1 + 0x10);
  FUN_00663a20(param_1 + 0x11);
  FUN_00663a20(param_1 + 0x12);
  if ((param_1 != &PTR_PTR_FUN_007a9ad0) && (__ptr = param_1[0x13], __ptr != (undefined *)0x0)) {
    FUN_0065612c(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 0065379c  FUN_0065379c =====

void FUN_0065379c(void *param_1)

{
  FUN_0065364c();
  free(param_1);
  return;
}


// ===== 006537c0  FUN_006537c0 =====

void FUN_006537c0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// ===== 006537c8  FUN_006537c8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_006537c8(long param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  ulong uVar7;
  
  uVar7 = (ulong)*(uint *)(param_1 + 0x20);
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    plVar4 = *(long **)(param_1 + 0x28);
    do {
      plVar4 = plVar4 + 1;
      lVar3 = *plVar4;
      if ((*(byte *)(lVar3 + 0x10) & 1) == 0) {
        bVar2 = *(byte *)(lVar3 + 8);
        *(undefined8 *)(lVar3 + 0x20) = 0;
        *(undefined4 *)(lVar3 + 0x10) = 0;
      }
      else {
        pbVar6 = (byte *)(*(ulong *)(lVar3 + 0x18) & 0xfffffffffffffffc);
        if ((*pbVar6 & 1) == 0) {
          pbVar6[0] = 0;
          pbVar6[1] = 0;
          bVar2 = *(byte *)(lVar3 + 8);
          *(undefined8 *)(lVar3 + 0x20) = 0;
          *(undefined4 *)(lVar3 + 0x10) = 0;
        }
        else {
          **(undefined1 **)(pbVar6 + 0x10) = 0;
          pbVar6[8] = 0;
          pbVar6[9] = 0;
          pbVar6[10] = 0;
          pbVar6[0xb] = 0;
          pbVar6[0xc] = 0;
          pbVar6[0xd] = 0;
          pbVar6[0xe] = 0;
          pbVar6[0xf] = 0;
          bVar2 = *(byte *)(lVar3 + 8);
          *(undefined8 *)(lVar3 + 0x20) = 0;
          *(undefined4 *)(lVar3 + 0x10) = 0;
        }
      }
      if ((bVar2 & 1) != 0) {
        FUN_006622b8();
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  FUN_0066211c(param_1 + 0x30);
  uVar7 = (ulong)*(uint *)(param_1 + 0x50);
  if (0 < (int)*(uint *)(param_1 + 0x50)) {
    puVar5 = *(undefined8 **)(param_1 + 0x58);
    do {
      puVar5 = puVar5 + 1;
      FUN_00652cb4(*puVar5);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  uVar7 = (ulong)*(uint *)(param_1 + 0x68);
  if (0 < (int)*(uint *)(param_1 + 0x68)) {
    puVar5 = *(undefined8 **)(param_1 + 0x70);
    do {
      puVar5 = puVar5 + 1;
      FUN_0065f92c(*puVar5);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar6 = (byte *)(*(ulong *)(param_1 + 0x78) & 0xfffffffffffffffc);
      if ((*pbVar6 & 1) == 0) {
        pbVar6[0] = 0;
        pbVar6[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar6 + 0x10) = 0;
        pbVar6[8] = 0;
        pbVar6[9] = 0;
        pbVar6[10] = 0;
        pbVar6[0xb] = 0;
        pbVar6[0xc] = 0;
        pbVar6[0xd] = 0;
        pbVar6[0xe] = 0;
        pbVar6[0xf] = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      pbVar6 = (byte *)(*(ulong *)(param_1 + 0x80) & 0xfffffffffffffffc);
      if ((*pbVar6 & 1) == 0) {
        pbVar6[0] = 0;
        pbVar6[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar6 + 0x10) = 0;
        pbVar6[8] = 0;
        pbVar6[9] = 0;
        pbVar6[10] = 0;
        pbVar6[0xb] = 0;
        pbVar6[0xc] = 0;
        pbVar6[0xd] = 0;
        pbVar6[0xe] = 0;
        pbVar6[0xf] = 0;
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      pbVar6 = (byte *)(*(ulong *)(param_1 + 0x88) & 0xfffffffffffffffc);
      if ((*pbVar6 & 1) == 0) {
        pbVar6[0] = 0;
        pbVar6[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar6 + 0x10) = 0;
        pbVar6[8] = 0;
        pbVar6[9] = 0;
        pbVar6[10] = 0;
        pbVar6[0xb] = 0;
        pbVar6[0xc] = 0;
        pbVar6[0xd] = 0;
        pbVar6[0xe] = 0;
        pbVar6[0xf] = 0;
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      pbVar6 = (byte *)(*(ulong *)(param_1 + 0x90) & 0xfffffffffffffffc);
      if ((*pbVar6 & 1) == 0) {
        pbVar6[0] = 0;
        pbVar6[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar6 + 0x10) = 0;
        pbVar6[8] = 0;
        pbVar6[9] = 0;
        pbVar6[10] = 0;
        pbVar6[0xb] = 0;
        pbVar6[0xc] = 0;
        pbVar6[0xd] = 0;
        pbVar6[0xe] = 0;
        pbVar6[0xf] = 0;
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_0064ea98(*(undefined8 *)(param_1 + 0x98));
    }
  }
  if ((uVar1 & 0x60) != 0) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006622b8((byte *)(param_1 + 8));
    return;
  }
  return;
}


// ===== 006539e0  FUN_006539e0 =====

byte * FUN_006539e0(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  ulong *puVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  int *piVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  
  uVar12 = 0;
LAB_00653a24:
  pbVar11 = param_2;
  if ((byte *)*param_3 <= param_2) {
    iVar1 = (int)param_2 - *(int *)(param_3 + 1);
    if (*(int *)((long)param_3 + 0x1c) == iVar1) {
      pbVar11 = (byte *)0x0;
      if (param_3[2] != 0 || iVar1 < 1) {
        pbVar11 = param_2;
      }
      goto LAB_00653f8c;
    }
    auVar13 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
    pbVar11 = auVar13._0_8_;
    if ((auVar13 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_00653f8c;
  }
  pbVar10 = pbVar11 + 1;
  uVar8 = (uint)*pbVar11;
  if ((char)*pbVar11 < '\0') {
    uVar8 = (uVar8 + (uint)*pbVar10 * 0x80) - 0x80;
    if (-1 < (char)*pbVar10) {
      pbVar10 = pbVar11 + 2;
      goto LAB_00653a58;
    }
    auVar13 = FUN_0066fe50(pbVar11);
    uVar8 = (uint)(auVar13._8_8_ >> 3) & 0x1fffffff;
    auVar2 = auVar13;
    if (uVar8 < 6) goto LAB_00653bdc;
LAB_00653a64:
    auVar13 = auVar2;
    pbVar11 = auVar13._0_8_;
    uVar6 = auVar13._8_4_;
    if (uVar8 < 0xe) {
      if (uVar8 == 6) {
        if ((uVar6 & 0xff) == 0x32) {
          puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
          if ((*(ulong *)(param_1 + 8) & 1) != 0) {
            puVar4 = (ulong *)*puVar4;
          }
          lVar5 = param_1 + 0x90;
LAB_00653a0c:
          uVar3 = FUN_0066399c(lVar5,puVar4);
          param_2 = (byte *)FUN_0066ff90(uVar3,pbVar11,param_3);
          goto joined_r0x00653f0c;
        }
      }
      else if (uVar8 == 7) {
        if ((uVar6 & 0xff) == 0x3a) {
          lVar5 = *(long *)(param_1 + 0x98);
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
          if (lVar5 == 0) {
            puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
            if ((*(ulong *)(param_1 + 8) & 1) != 0) {
              puVar4 = (ulong *)*puVar4;
            }
            lVar5 = FUN_00661768(puVar4);
            *(long *)(param_1 + 0x98) = lVar5;
          }
          param_2 = (byte *)FUN_0066fa8c(param_3,lVar5,pbVar11);
          goto joined_r0x00653f0c;
        }
      }
      else if ((uVar8 == 8) && ((uVar6 & 0xff) == 0x42)) {
        param_2 = pbVar11 + -1;
        do {
          piVar9 = *(int **)(param_1 + 0x28);
          if (piVar9 == (int *)0x0) {
LAB_00653ad0:
            uVar3 = FUN_00661de8(*(undefined8 *)(param_1 + 0x18));
            uVar3 = FUN_00675990(param_1 + 0x18,uVar3);
            param_2 = (byte *)FUN_0066fa8c(param_3,uVar3,param_2 + 1);
          }
          else {
            iVar1 = *(int *)(param_1 + 0x20);
            if (*piVar9 <= iVar1) goto LAB_00653ad0;
            *(int *)(param_1 + 0x20) = iVar1 + 1;
            param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar9 + (long)iVar1 * 2 + 2),
                                           param_2 + 1);
          }
          if (param_2 == (byte *)0x0) goto LAB_00653f78;
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x42));
        goto LAB_00653a24;
      }
    }
    else if (uVar8 == 0xe) {
      if ((uVar6 & 0xff) == 0x72) {
        param_2 = pbVar11 + -1;
        do {
          piVar9 = *(int **)(param_1 + 0x40);
          if (piVar9 == (int *)0x0) {
LAB_00653e64:
            uVar3 = FUN_00661668(*(undefined8 *)(param_1 + 0x30));
            uVar3 = FUN_00675990(param_1 + 0x30,uVar3);
            param_2 = (byte *)FUN_0066fa8c(param_3,uVar3,param_2 + 1);
          }
          else {
            iVar1 = *(int *)(param_1 + 0x38);
            if (*piVar9 <= iVar1) goto LAB_00653e64;
            *(int *)(param_1 + 0x38) = iVar1 + 1;
            param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar9 + (long)iVar1 * 2 + 2),
                                           param_2 + 1);
          }
          if (param_2 == (byte *)0x0) goto LAB_00653f78;
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x72));
        goto LAB_00653a24;
      }
    }
    else if (uVar8 == 0x14) {
      if ((uVar6 & 0xff) == 0xa2) {
        param_2 = pbVar11 + -2;
        do {
          piVar9 = *(int **)(param_1 + 0x58);
          if (piVar9 == (int *)0x0) {
LAB_00653d78:
            uVar3 = FUN_00661568(*(undefined8 *)(param_1 + 0x48));
            uVar3 = FUN_00675990(param_1 + 0x48,uVar3);
            param_2 = (byte *)FUN_0066fa8c(param_3,uVar3,param_2 + 2);
          }
          else {
            iVar1 = *(int *)(param_1 + 0x50);
            if (*piVar9 <= iVar1) goto LAB_00653d78;
            *(int *)(param_1 + 0x50) = iVar1 + 1;
            param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar9 + (long)iVar1 * 2 + 2),
                                           param_2 + 2);
          }
          if (param_2 == (byte *)0x0) goto LAB_00653f78;
        } while ((param_2 < (byte *)*param_3) && (*(short *)param_2 == 0x1a2));
        goto LAB_00653a24;
      }
    }
    else if ((uVar8 == 0x19) && ((uVar6 & 0xff) == 0xca)) {
      param_2 = pbVar11 + -2;
      do {
        piVar9 = *(int **)(param_1 + 0x70);
        if (piVar9 == (int *)0x0) {
LAB_00653b7c:
          uVar3 = FUN_00661e68(*(undefined8 *)(param_1 + 0x60));
          uVar3 = FUN_00675990(param_1 + 0x60,uVar3);
          param_2 = (byte *)FUN_0066fa8c(param_3,uVar3,param_2 + 2);
        }
        else {
          iVar1 = *(int *)(param_1 + 0x68);
          if (*piVar9 <= iVar1) goto LAB_00653b7c;
          *(int *)(param_1 + 0x68) = iVar1 + 1;
          param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar9 + (long)iVar1 * 2 + 2),
                                         param_2 + 2);
        }
        if (param_2 == (byte *)0x0) goto LAB_00653f78;
      } while ((param_2 < (byte *)*param_3) && (*(short *)param_2 == 0x1ca));
      goto LAB_00653a24;
    }
  }
  else {
LAB_00653a58:
    auVar2._8_4_ = uVar8;
    auVar2._0_8_ = pbVar10;
    auVar2._12_4_ = 0;
    auVar13._8_4_ = uVar8;
    auVar13._0_8_ = pbVar10;
    auVar13._12_4_ = 0;
    uVar8 = uVar8 >> 3;
    if (5 < uVar8) goto LAB_00653a64;
LAB_00653bdc:
    pbVar11 = auVar13._0_8_;
    uVar6 = auVar13._8_4_;
    if (uVar8 < 3) {
      if (uVar8 != 1) {
        if ((uVar8 == 2) && ((uVar6 & 0xff) == 0x12)) {
          puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
          if ((*(ulong *)(param_1 + 8) & 1) != 0) {
            puVar4 = (ulong *)*puVar4;
          }
          lVar5 = param_1 + 0x78;
          goto LAB_00653a0c;
        }
        goto LAB_00653eac;
      }
      if ((uVar6 & 0xff) != 8) goto LAB_00653eac;
      uVar12 = uVar12 | 0x20;
      param_2 = pbVar11 + 1;
      uVar7 = (ulong)(char)*pbVar11;
      if ((long)uVar7 < 0) {
        uVar7 = (ulong)(((uint)*param_2 * 0x80 + (uint)*pbVar11) - 0x80);
        if (-1 < (char)*param_2) {
          param_2 = pbVar11 + 2;
          goto LAB_00653cb0;
        }
        auVar13 = FUN_0066fd14(pbVar11);
        param_2 = auVar13._0_8_;
        *(long *)(param_1 + 0xa0) = auVar13._8_8_;
joined_r0x00653f0c:
        if (param_2 == (byte *)0x0) {
LAB_00653f78:
          pbVar11 = (byte *)0x0;
LAB_00653f8c:
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar12;
          return pbVar11;
        }
      }
      else {
LAB_00653cb0:
        *(ulong *)(param_1 + 0xa0) = uVar7;
      }
      goto LAB_00653a24;
    }
    if (uVar8 == 3) {
      if ((uVar6 & 0xff) != 0x1a) goto LAB_00653eac;
      puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar4 = (ulong *)*puVar4;
      }
      lVar5 = param_1 + 0x80;
      goto LAB_00653a0c;
    }
    if (uVar8 != 4) {
      if ((uVar8 != 5) || ((uVar6 & 0xff) != 0x28)) goto LAB_00653eac;
      uVar12 = uVar12 | 0x40;
      param_2 = pbVar11 + 1;
      uVar7 = (ulong)(char)*pbVar11;
      if ((long)uVar7 < 0) {
        uVar7 = (ulong)(((uint)*param_2 * 0x80 + (uint)*pbVar11) - 0x80);
        if ((char)*param_2 < '\0') {
          auVar13 = FUN_0066fd14(pbVar11);
          param_2 = auVar13._0_8_;
          *(long *)(param_1 + 0xa8) = auVar13._8_8_;
          goto joined_r0x00653f0c;
        }
        param_2 = pbVar11 + 2;
      }
      *(ulong *)(param_1 + 0xa8) = uVar7;
      goto LAB_00653a24;
    }
    if ((uVar6 & 0xff) == 0x22) {
      puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar4 = (ulong *)*puVar4;
      }
      lVar5 = param_1 + 0x88;
      goto LAB_00653a0c;
    }
  }
LAB_00653eac:
  pbVar11 = auVar13._0_8_;
  uVar8 = auVar13._8_4_;
  if ((uVar8 == 0) || ((uVar8 & 7) == 4)) {
    if (pbVar11 != (byte *)0x0) {
      *(uint *)(param_3 + 10) = uVar8 - 1;
    }
    goto LAB_00653f8c;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    lVar5 = FUN_00661fa4(param_1 + 8);
  }
  else {
    lVar5 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8;
  }
  param_2 = (byte *)FUN_006fbab8(auVar13._8_8_ & 0xffffffff,lVar5,pbVar11,param_3);
  goto joined_r0x00653f0c;
}


// ===== 00653fcc  FUN_00653fcc =====

/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_00653fcc(long param_1,undefined1 *param_2,long *param_3)

{
  size_t sVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 >> 5 & 1) != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      uVar9 = *(ulong *)(param_1 + 0xa0);
      *param_2 = 8;
      param_2[1] = (char)uVar9;
    }
    else {
      param_2 = (undefined1 *)FUN_0066d3f8(param_3,param_2);
      uVar9 = *(ulong *)(param_1 + 0xa0);
      *param_2 = 8;
      param_2[1] = (char)uVar9;
    }
    if (uVar9 < 0x80) {
      param_2 = param_2 + 2;
    }
    else {
      uVar8 = uVar9 >> 7;
      param_2[1] = (byte)uVar9 | 0x80;
      param_2[2] = (char)uVar8;
      param_2 = param_2 + 3;
      puVar5 = param_2;
      if (0x3fff < uVar9) {
        do {
          uVar9 = uVar8 >> 0xe;
          uVar8 = uVar8 >> 7;
          puVar5[-1] = puVar5[-1] | 0x80;
          param_2 = puVar5 + 1;
          *puVar5 = (char)uVar8;
          puVar5 = param_2;
        } while (uVar9 != 0);
      }
    }
  }
  if ((uVar3 & 1) != 0) {
    pbVar7 = (byte *)(*(ulong *)(param_1 + 0x78) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar7 >> 1);
    if ((*pbVar7 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar7 + 8);
    }
    if (((long)sVar1 < 0x80) && ((long)sVar1 <= (*param_3 - (long)param_2) + 0xe)) {
      param_2[1] = (char)sVar1;
      *param_2 = 0x12;
      pvVar2 = (void *)((ulong)pbVar7 | 1);
      if ((*pbVar7 & 1) != 0) {
        pvVar2 = *(void **)(pbVar7 + 0x10);
      }
      memcpy(param_2 + 2,pvVar2,sVar1);
      param_2 = param_2 + 2 + sVar1;
    }
    else {
      param_2 = (undefined1 *)FUN_0066d778(param_3,2);
    }
  }
  if ((uVar3 >> 1 & 1) != 0) {
    pbVar7 = (byte *)(*(ulong *)(param_1 + 0x80) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar7 >> 1);
    if ((*pbVar7 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar7 + 8);
    }
    if (((long)sVar1 < 0x80) && ((long)sVar1 <= (*param_3 - (long)param_2) + 0xe)) {
      *(char *)((long)param_2 + 1) = (char)sVar1;
      *param_2 = 0x1a;
      pvVar2 = (void *)((ulong)pbVar7 | 1);
      if ((*pbVar7 & 1) != 0) {
        pvVar2 = *(void **)(pbVar7 + 0x10);
      }
      memcpy((undefined1 *)((long)param_2 + 2),pvVar2,sVar1);
      param_2 = (undefined1 *)((long)param_2 + 2) + sVar1;
    }
    else {
      param_2 = (undefined1 *)FUN_0066d778(param_3,3);
    }
  }
  if ((uVar3 >> 2 & 1) != 0) {
    pbVar7 = (byte *)(*(ulong *)(param_1 + 0x88) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar7 >> 1);
    if ((*pbVar7 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar7 + 8);
    }
    if (((long)sVar1 < 0x80) && ((long)sVar1 <= (*param_3 - (long)param_2) + 0xe)) {
      param_2[1] = (char)sVar1;
      *param_2 = 0x22;
      pvVar2 = (void *)((ulong)pbVar7 | 1);
      if ((*pbVar7 & 1) != 0) {
        pvVar2 = *(void **)(pbVar7 + 0x10);
      }
      memcpy(param_2 + 2,pvVar2,sVar1);
      param_2 = param_2 + 2 + sVar1;
    }
    else {
      param_2 = (undefined1 *)FUN_0066d778(param_3,4);
    }
  }
  if ((uVar3 >> 6 & 1) != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      uVar9 = *(ulong *)(param_1 + 0xa8);
      *param_2 = 0x28;
      param_2[1] = (char)uVar9;
    }
    else {
      param_2 = (undefined1 *)FUN_0066d3f8(param_3,param_2);
      uVar9 = *(ulong *)(param_1 + 0xa8);
      *param_2 = 0x28;
      param_2[1] = (char)uVar9;
    }
    if (uVar9 < 0x80) {
      param_2 = param_2 + 2;
    }
    else {
      uVar8 = uVar9 >> 7;
      param_2[1] = (byte)uVar9 | 0x80;
      param_2[2] = (char)uVar8;
      param_2 = param_2 + 3;
      puVar5 = param_2;
      if (0x3fff < uVar9) {
        do {
          uVar9 = uVar8 >> 0xe;
          uVar8 = uVar8 >> 7;
          puVar5[-1] = puVar5[-1] | 0x80;
          param_2 = puVar5 + 1;
          *puVar5 = (char)uVar8;
          puVar5 = param_2;
        } while (uVar9 != 0);
      }
    }
  }
  if ((uVar3 >> 3 & 1) != 0) {
    pbVar7 = (byte *)(*(ulong *)(param_1 + 0x90) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar7 >> 1);
    if ((*pbVar7 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar7 + 8);
    }
    if (((long)sVar1 < 0x80) && ((long)sVar1 <= (*param_3 - (long)param_2) + 0xe)) {
      param_2[1] = (char)sVar1;
      *param_2 = 0x32;
      pvVar2 = (void *)((ulong)pbVar7 | 1);
      if ((*pbVar7 & 1) != 0) {
        pvVar2 = *(void **)(pbVar7 + 0x10);
      }
      memcpy(param_2 + 2,pvVar2,sVar1);
      param_2 = param_2 + 2 + sVar1;
    }
    else {
      param_2 = (undefined1 *)FUN_0066d778(param_3,6);
    }
  }
  if ((uVar3 >> 4 & 1) == 0) {
    iVar4 = *(int *)(param_1 + 0x20);
  }
  else {
    param_2 = (undefined1 *)
              FUN_00678d18(7,*(long *)(param_1 + 0x98),
                           *(undefined4 *)(*(long *)(param_1 + 0x98) + 0x14),param_2,param_3);
    iVar4 = *(int *)(param_1 + 0x20);
  }
  if (iVar4 != 0) {
    iVar10 = 0;
    do {
      lVar6 = *(long *)(*(long *)(param_1 + 0x28) + (long)iVar10 * 8 + 8);
      param_2 = (undefined1 *)FUN_00678d18(8,lVar6,*(undefined4 *)(lVar6 + 0x14),param_2,param_3);
      iVar10 = iVar10 + 1;
    } while (iVar4 != iVar10);
  }
  iVar4 = *(int *)(param_1 + 0x38);
  if (iVar4 != 0) {
    iVar10 = 0;
    do {
      lVar6 = *(long *)(*(long *)(param_1 + 0x40) + (long)iVar10 * 8 + 8);
      param_2 = (undefined1 *)FUN_00678d18(0xe,lVar6,*(undefined4 *)(lVar6 + 0x14),param_2,param_3);
      iVar10 = iVar10 + 1;
    } while (iVar4 != iVar10);
  }
  iVar4 = *(int *)(param_1 + 0x50);
  if (iVar4 != 0) {
    iVar10 = 0;
    do {
      lVar6 = *(long *)(*(long *)(param_1 + 0x58) + (long)iVar10 * 8 + 8);
      param_2 = (undefined1 *)FUN_00678d18(0x14,lVar6,*(undefined4 *)(lVar6 + 0x14),param_2,param_3)
      ;
      iVar10 = iVar10 + 1;
    } while (iVar4 != iVar10);
  }
  iVar4 = *(int *)(param_1 + 0x68);
  if (iVar4 != 0) {
    iVar10 = 0;
    do {
      lVar6 = *(long *)(*(long *)(param_1 + 0x70) + (long)iVar10 * 8 + 8);
      param_2 = (undefined1 *)FUN_00678d18(0x19,lVar6,*(undefined4 *)(lVar6 + 0x14),param_2,param_3)
      ;
      iVar10 = iVar10 + 1;
    } while (iVar4 != iVar10);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  puVar5 = (undefined1 *)
           FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
  return puVar5;
}


// ===== 00654490  FUN_00654490 =====

undefined4 FUN_00654490(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 00654498  FUN_00654498 =====

undefined4 FUN_00654498(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 006544a0  FUN_006544a0 =====

undefined4 FUN_006544a0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 006544a8  FUN_006544a8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_006544a8(long param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  
  lVar8 = (long)*(int *)(param_1 + 0x20);
  plVar9 = (long *)0x0;
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar9 = (long *)(*(long *)(param_1 + 0x28) + 8);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    lVar8 = 0;
  }
  else {
    lVar11 = lVar8 << 3;
    do {
      lVar5 = *plVar9;
      uVar2 = *(uint *)(lVar5 + 0x10);
      if ((uVar2 & 3) == 0) {
        lVar6 = 0;
      }
      else {
        if ((uVar2 & 1) == 0) {
          lVar6 = 0;
        }
        else {
          pbVar7 = (byte *)(*(ulong *)(lVar5 + 0x18) & 0xfffffffffffffffc);
          bVar3 = *pbVar7;
          uVar1 = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            uVar1 = *(ulong *)(pbVar7 + 8);
          }
          lVar6 = uVar1 + (((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
        }
        if ((uVar2 >> 1 & 1) != 0) {
          lVar6 = lVar6 + ((LZCOUNT(*(ulong *)(lVar5 + 0x20) | 1) ^ 0x3fU) * 9 + 0x89 >> 6);
        }
      }
      lVar5 = FUN_006e5694(lVar5,lVar6,lVar5 + 0x14);
      lVar11 = lVar11 + -8;
      plVar9 = plVar9 + 1;
      lVar8 = lVar5 + lVar8 + (ulong)(((uint)LZCOUNT((uint)lVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (lVar11 != 0);
  }
  iVar4 = *(int *)(param_1 + 0x38);
  lVar8 = lVar8 + iVar4;
  plVar9 = (long *)0x0;
  if (*(long *)(param_1 + 0x40) != 0) {
    plVar9 = (long *)(*(long *)(param_1 + 0x40) + 8);
  }
  if (iVar4 != 0) {
    lVar11 = (long)iVar4 << 3;
    do {
      lVar5 = *plVar9;
      uVar2 = *(uint *)(lVar5 + 0x10);
      if ((uVar2 & 3) == 0) {
        lVar6 = 0;
      }
      else {
        if ((uVar2 & 1) == 0) {
          lVar6 = 0;
        }
        else {
          pbVar7 = (byte *)(*(ulong *)(lVar5 + 0x18) & 0xfffffffffffffffc);
          bVar3 = *pbVar7;
          uVar1 = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            uVar1 = *(ulong *)(pbVar7 + 8);
          }
          lVar6 = uVar1 + (((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
        }
        if ((uVar2 >> 1 & 1) != 0) {
          pbVar7 = (byte *)(*(ulong *)(lVar5 + 0x20) & 0xfffffffffffffffc);
          bVar3 = *pbVar7;
          uVar1 = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            uVar1 = *(ulong *)(pbVar7 + 8);
          }
          lVar6 = lVar6 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
                  1;
        }
      }
      lVar5 = FUN_006e5694(lVar5,lVar6,lVar5 + 0x14);
      lVar11 = lVar11 + -8;
      plVar9 = plVar9 + 1;
      lVar8 = lVar5 + lVar8 + (ulong)(((uint)LZCOUNT((uint)lVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (lVar11 != 0);
  }
  iVar4 = *(int *)(param_1 + 0x50);
  lVar8 = lVar8 + (long)iVar4 * 2;
  puVar10 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x58) != 0) {
    puVar10 = (undefined8 *)(*(long *)(param_1 + 0x58) + 8);
  }
  if (iVar4 != 0) {
    lVar11 = (long)iVar4 << 3;
    do {
      lVar5 = FUN_00653184(*puVar10);
      lVar11 = lVar11 + -8;
      lVar8 = lVar5 + lVar8 + (ulong)(((uint)LZCOUNT((uint)lVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar10 = puVar10 + 1;
    } while (lVar11 != 0);
  }
  iVar4 = *(int *)(param_1 + 0x68);
  lVar8 = lVar8 + (long)iVar4 * 2;
  puVar10 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x70) != 0) {
    puVar10 = (undefined8 *)(*(long *)(param_1 + 0x70) + 8);
  }
  if (iVar4 != 0) {
    lVar11 = (long)iVar4 << 3;
    do {
      lVar5 = FUN_00660a14(*puVar10);
      lVar11 = lVar11 + -8;
      lVar8 = lVar5 + lVar8 + (ulong)(((uint)LZCOUNT((uint)lVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar10 = puVar10 + 1;
    } while (lVar11 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 0x7f) != 0) {
    if ((uVar2 & 1) != 0) {
      pbVar7 = (byte *)(*(ulong *)(param_1 + 0x78) & 0xfffffffffffffffc);
      bVar3 = *pbVar7;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar7 + 8);
      }
      lVar8 = lVar8 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      pbVar7 = (byte *)(*(ulong *)(param_1 + 0x80) & 0xfffffffffffffffc);
      bVar3 = *pbVar7;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar7 + 8);
      }
      lVar8 = lVar8 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 2 & 1) != 0) {
      pbVar7 = (byte *)(*(ulong *)(param_1 + 0x88) & 0xfffffffffffffffc);
      bVar3 = *pbVar7;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar7 + 8);
      }
      lVar8 = lVar8 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 3 & 1) != 0) {
      pbVar7 = (byte *)(*(ulong *)(param_1 + 0x90) & 0xfffffffffffffffc);
      bVar3 = *pbVar7;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar7 + 8);
      }
      lVar8 = lVar8 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 4 & 1) != 0) {
      lVar11 = FUN_00656d24(*(undefined8 *)(param_1 + 0x98));
      lVar8 = lVar8 + lVar11 + (ulong)(((uint)LZCOUNT((uint)lVar11 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1
      ;
    }
    if ((uVar2 >> 5 & 1) != 0) {
      lVar8 = lVar8 + ((LZCOUNT(*(ulong *)(param_1 + 0xa0) | 1) ^ 0x3fU) * 9 + 0x89 >> 6);
    }
    if ((uVar2 >> 6 & 1) != 0) {
      lVar8 = lVar8 + ((LZCOUNT(*(ulong *)(param_1 + 0xa8) | 1) ^ 0x3fU) * 9 + 0x89 >> 6);
    }
  }
  FUN_006e5694(param_1,lVar8,param_1 + 0x14);
  return;
}


// ===== 006548fc  FUN_006548fc =====

/* WARNING: Type propagation algorithm not settling */

void FUN_006548fc(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  
  iVar2 = *(int *)(param_2 + 0x20);
  if (iVar2 != 0) {
    lVar8 = *(long *)(param_2 + 0x28);
    uVar5 = FUN_00675710(param_1 + 0x18,iVar2);
    FUN_0066262c(param_1 + 0x18,uVar5,lVar8 + 8,iVar2,
                 **(int **)(param_1 + 0x28) - *(int *)(param_1 + 0x20));
    iVar3 = **(int **)(param_1 + 0x28);
    iVar2 = *(int *)(param_1 + 0x20) + iVar2;
    *(int *)(param_1 + 0x20) = iVar2;
    if (iVar3 < iVar2) {
      **(int **)(param_1 + 0x28) = iVar2;
    }
  }
  iVar2 = *(int *)(param_2 + 0x38);
  if (iVar2 != 0) {
    lVar8 = *(long *)(param_2 + 0x40);
    uVar5 = FUN_00675710(param_1 + 0x30,iVar2);
    FUN_0066251c(param_1 + 0x30,uVar5,lVar8 + 8,iVar2,
                 **(int **)(param_1 + 0x40) - *(int *)(param_1 + 0x38));
    iVar3 = **(int **)(param_1 + 0x40);
    iVar2 = *(int *)(param_1 + 0x38) + iVar2;
    *(int *)(param_1 + 0x38) = iVar2;
    if (iVar3 < iVar2) {
      **(int **)(param_1 + 0x40) = iVar2;
    }
  }
  iVar2 = *(int *)(param_2 + 0x50);
  if (iVar2 != 0) {
    lVar8 = *(long *)(param_2 + 0x58);
    uVar5 = FUN_00675710(param_1 + 0x48,iVar2);
    FUN_00662750(param_1 + 0x48,uVar5,lVar8 + 8,iVar2,
                 **(int **)(param_1 + 0x58) - *(int *)(param_1 + 0x50));
    iVar3 = **(int **)(param_1 + 0x58);
    iVar2 = *(int *)(param_1 + 0x50) + iVar2;
    *(int *)(param_1 + 0x50) = iVar2;
    if (iVar3 < iVar2) {
      **(int **)(param_1 + 0x58) = iVar2;
    }
  }
  iVar2 = *(int *)(param_2 + 0x68);
  if (iVar2 != 0) {
    lVar8 = *(long *)(param_2 + 0x70);
    uVar5 = FUN_00675710(param_1 + 0x60,iVar2);
    FUN_006627d8(param_1 + 0x60,uVar5,lVar8 + 8,iVar2,
                 **(int **)(param_1 + 0x70) - *(int *)(param_1 + 0x68));
    iVar3 = **(int **)(param_1 + 0x70);
    iVar2 = *(int *)(param_1 + 0x68) + iVar2;
    *(int *)(param_1 + 0x68) = iVar2;
    if (iVar3 < iVar2) {
      **(int **)(param_1 + 0x70) = iVar2;
    }
  }
  uVar4 = *(uint *)(param_2 + 0x10);
  if ((uVar4 & 0x7f) != 0) {
    if ((uVar4 & 1) != 0) {
      uVar7 = *(ulong *)(param_2 + 0x78);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0x78,uVar7 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0x78,uVar7 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar4 >> 1 & 1) != 0) {
      uVar7 = *(ulong *)(param_2 + 0x80);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0x80,uVar7 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0x80,uVar7 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar4 >> 2 & 1) != 0) {
      uVar7 = *(ulong *)(param_2 + 0x88);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0x88,uVar7 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0x88,uVar7 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar4 >> 3 & 1) != 0) {
      uVar7 = *(ulong *)(param_2 + 0x90);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0x90,uVar7 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0x90,uVar7 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar4 >> 4 & 1) != 0) {
      lVar8 = *(long *)(param_1 + 0x98);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
      if (lVar8 == 0) {
        puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar6 = (ulong *)*puVar6;
        }
        lVar8 = FUN_00661768(puVar6);
        *(long *)(param_1 + 0x98) = lVar8;
      }
      ppuVar1 = &PTR_PTR_FUN_007a9be0;
      if (*(undefined ***)(param_2 + 0x98) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(param_2 + 0x98);
      }
      FUN_0065711c(lVar8,ppuVar1);
    }
    if ((uVar4 >> 5 & 1) != 0) {
      *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
    }
    if ((uVar4 >> 6 & 1) != 0) {
      *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar4;
  }
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 00654c60  FUN_00654c60 =====

undefined ** FUN_00654c60(void)

{
  return &PTR_FUN_00798bd0;
}


// ===== 00654c6c  FUN_00654c6c =====

undefined8 FUN_00654c6c(void)

{
  return 1;
}


// ===== 00654c74  FUN_00654c74 =====

void FUN_00654c74(void)

{
  FUN_00684dd0(FUN_0064dd54,&DAT_007ae908,&DAT_007ae950);
  return;
}


// ===== 00654c8c  FUN_00654c8c =====

void FUN_00654c8c(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  *param_1 = (long)(PTR_DAT_007a2f60 + 0x10);
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = (long)&DAT_007aea80;
  param_1[4] = (long)&DAT_007aea80;
  return;
}


// ===== 00654cbc  FUN_00654cbc =====

void FUN_00654cbc(long *param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong *puVar6;
  
  puVar6 = (ulong *)(param_1 + 1);
  *puVar6 = 0;
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 2) = uVar1;
  puVar2 = PTR_DAT_007a2f60;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  uVar5 = *(ulong *)(param_2 + 8);
  *param_1 = (long)(puVar2 + 0x10);
  if ((uVar5 & 1) != 0) {
                    /* try { // try from 00654d0c to 00654d6f has its CatchHandler @ 00654d90 */
    FUN_006621e0(puVar6,(uVar5 & 0xfffffffffffffffc) + 8);
  }
  uVar4 = *(uint *)(param_2 + 0x10);
  param_1[3] = (long)&DAT_007aea80;
  if ((uVar4 & 1) != 0) {
    puVar3 = (ulong *)(*puVar6 & 0xfffffffffffffffc);
    if ((*puVar6 & 1) != 0) {
      puVar3 = (ulong *)*puVar3;
    }
    FUN_006636d4(param_1 + 3,*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc,puVar3);
    uVar4 = *(uint *)(param_2 + 0x10);
  }
  param_1[4] = (long)&DAT_007aea80;
  if ((uVar4 >> 1 & 1) != 0) {
    puVar3 = (ulong *)(*puVar6 & 0xfffffffffffffffc);
    if ((*puVar6 & 1) != 0) {
      puVar3 = (ulong *)*puVar3;
    }
    FUN_006636d4(param_1 + 4,*(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc,puVar3);
  }
  return;
}


// ===== 00654da4  FUN_00654da4 =====

void FUN_00654da4(undefined8 *param_1)

{
  void *__ptr;
  ulong uVar1;
  
  if ((param_1[1] & 1) == 0) {
    uVar1 = param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 00654dc4 to 00654ddb has its CatchHandler @ 00654e20 */
    uVar1 = FUN_00662218();
  }
  if (uVar1 == 0) {
    FUN_00663a20(param_1 + 3);
    FUN_00663a20(param_1 + 4);
  }
  *param_1 = &PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) &&
     (__ptr = (void *)(param_1[1] + -2), __ptr != (void *)0x0)) {
    FUN_00662da0(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 00654e24  FUN_00654e24 =====

void FUN_00654e24(void *param_1)

{
  FUN_00654da4();
  free(param_1);
  return;
}


// ===== 00654e48  FUN_00654e48 =====

void FUN_00654e48(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// ===== 00654e50  FUN_00654e50 =====

void FUN_00654e50(long param_1)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar3 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
      if ((*pbVar3 & 1) == 0) {
        pbVar3[0] = 0;
        pbVar3[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar3 + 0x10) = 0;
        pbVar3[8] = 0;
        pbVar3[9] = 0;
        pbVar3[10] = 0;
        pbVar3[0xb] = 0;
        pbVar3[0xc] = 0;
        pbVar3[0xd] = 0;
        pbVar3[0xe] = 0;
        pbVar3[0xf] = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      pbVar3 = (byte *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
      if ((*pbVar3 & 1) == 0) {
        pbVar3[0] = 0;
        pbVar3[1] = 0;
        bVar2 = *(byte *)(param_1 + 8);
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      else {
        **(undefined1 **)(pbVar3 + 0x10) = 0;
        pbVar3[8] = 0;
        pbVar3[9] = 0;
        pbVar3[10] = 0;
        pbVar3[0xb] = 0;
        pbVar3[0xc] = 0;
        pbVar3[0xd] = 0;
        pbVar3[0xe] = 0;
        pbVar3[0xf] = 0;
        bVar2 = *(byte *)(param_1 + 8);
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      goto joined_r0x00654e94;
    }
  }
  bVar2 = *(byte *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
joined_r0x00654e94:
  if ((bVar2 & 1) == 0) {
    return;
  }
  FUN_006622b8();
  return;
}


// ===== 00654ed8  FUN_00654ed8 =====

byte * FUN_00654ed8(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  ulong *puVar4;
  uint uVar5;
  byte *pbVar6;
  undefined1 auVar7 [16];
  
  do {
    while( true ) {
      if ((byte *)*param_3 <= param_2) {
        iVar1 = (int)param_2 - *(int *)(param_3 + 1);
        if (*(int *)((long)param_3 + 0x1c) == iVar1) {
          pbVar6 = (byte *)0x0;
          if (param_3[2] != 0 || iVar1 < 1) {
            pbVar6 = param_2;
          }
          return pbVar6;
        }
        auVar7 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
        param_2 = auVar7._0_8_;
        if ((auVar7 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
          return param_2;
        }
      }
      pbVar6 = param_2 + 1;
      uVar5 = (uint)*param_2;
      if (-1 < (char)*param_2) break;
      uVar5 = (uVar5 + (uint)*pbVar6 * 0x80) - 0x80;
      if (-1 < (char)*pbVar6) {
        pbVar6 = param_2 + 2;
        break;
      }
      auVar7 = FUN_0066fe50();
      uVar5 = (uint)(auVar7._8_8_ >> 3) & 0x1fffffff;
      auVar2 = auVar7;
      if (uVar5 == 2) goto LAB_00654f98;
LAB_00654f50:
      auVar7 = auVar2;
      if ((uVar5 == 1) && ((auVar7._8_4_ & 0xff) == 10)) {
        puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar4 = (ulong *)*puVar4;
        }
        uVar3 = FUN_0066399c(param_1 + 0x18,puVar4);
        param_2 = (byte *)FUN_0066ff90(uVar3,auVar7._0_8_,param_3);
        if (param_2 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
LAB_00654fd8:
        pbVar6 = auVar7._0_8_;
        uVar5 = auVar7._8_4_;
        if ((uVar5 == 0) || ((uVar5 & 7) == 4)) {
          if (pbVar6 != (byte *)0x0) {
            *(uint *)(param_3 + 10) = uVar5 - 1;
            return pbVar6;
          }
          return (byte *)0x0;
        }
        if ((*(ulong *)(param_1 + 8) & 1) == 0) {
          uVar3 = FUN_00661fa4(param_1 + 8);
          param_2 = (byte *)FUN_006fbab8(auVar7._8_8_ & 0xffffffff,uVar3,pbVar6,param_3);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
        else {
          param_2 = (byte *)FUN_006fbab8(auVar7._8_8_ & 0xffffffff,
                                         (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,pbVar6,
                                         param_3);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
      }
    }
    auVar2._8_4_ = uVar5;
    auVar2._0_8_ = pbVar6;
    auVar2._12_4_ = 0;
    auVar7._8_4_ = uVar5;
    auVar7._0_8_ = pbVar6;
    auVar7._12_4_ = 0;
    uVar5 = uVar5 >> 3;
    if (uVar5 != 2) goto LAB_00654f50;
LAB_00654f98:
    if ((auVar7._8_4_ & 0xff) != 0x12) goto LAB_00654fd8;
    puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    uVar3 = FUN_0066399c(param_1 + 0x20,puVar4);
    param_2 = (byte *)FUN_0066ff90(uVar3,auVar7._0_8_,param_3);
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}


// ===== 006550c8  FUN_006550c8 =====

undefined1 * FUN_006550c8(long param_1,undefined1 *param_2,long *param_3)

{
  size_t sVar1;
  void *pvVar2;
  uint uVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  ulong uVar6;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 & 1) != 0) {
    pbVar5 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar5 >> 1);
    if ((*pbVar5 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar5 + 8);
    }
    if (((long)sVar1 < 0x80) && ((long)sVar1 <= (*param_3 - (long)param_2) + 0xe)) {
      param_2[1] = (char)sVar1;
      *param_2 = 10;
      pvVar2 = (void *)((ulong)pbVar5 | 1);
      if ((*pbVar5 & 1) != 0) {
        pvVar2 = *(void **)(pbVar5 + 0x10);
      }
      memcpy(param_2 + 2,pvVar2,sVar1);
      param_2 = param_2 + 2 + sVar1;
    }
    else {
      param_2 = (undefined1 *)FUN_0066d778(param_3,1);
    }
  }
  if ((uVar3 >> 1 & 1) == 0) {
    uVar6 = *(ulong *)(param_1 + 8);
  }
  else {
    pbVar5 = (byte *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar5 >> 1);
    if ((*pbVar5 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar5 + 8);
    }
    if (((long)sVar1 < 0x80) && ((long)sVar1 <= (*param_3 - (long)param_2) + 0xe)) {
      param_2[1] = (char)sVar1;
      *param_2 = 0x12;
      pvVar2 = (void *)((ulong)pbVar5 | 1);
      if ((*pbVar5 & 1) != 0) {
        pvVar2 = *(void **)(pbVar5 + 0x10);
      }
      memcpy(param_2 + 2,pvVar2,sVar1);
      param_2 = param_2 + 2 + sVar1;
      uVar6 = *(ulong *)(param_1 + 8);
    }
    else {
      param_2 = (undefined1 *)FUN_0066d778(param_3,2);
      uVar6 = *(ulong *)(param_1 + 8);
    }
  }
  if ((uVar6 & 1) != 0) {
    puVar4 = (undefined1 *)FUN_006fc418((uVar6 & 0xfffffffffffffffc) + 8,param_2,param_3);
    return puVar4;
  }
  return param_2;
}


// ===== 00655250  FUN_00655250 =====

void FUN_00655250(long param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  byte *pbVar5;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 3) == 0) {
    FUN_006e5694(param_1,0,param_1 + 0x14);
    return;
  }
  if ((uVar2 & 1) == 0) {
    lVar4 = 0;
  }
  else {
    pbVar5 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    bVar3 = *pbVar5;
    uVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar1 = *(ulong *)(pbVar5 + 8);
    }
    lVar4 = uVar1 + (((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  if ((uVar2 >> 1 & 1) == 0) {
    FUN_006e5694(param_1,lVar4,param_1 + 0x14);
    return;
  }
  pbVar5 = (byte *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
  bVar3 = *pbVar5;
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(pbVar5 + 8);
  }
  FUN_006e5694(param_1,lVar4 + uVar1 +
                       (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1,
               param_1 + 0x14);
  return;
}


// ===== 00655304  FUN_00655304 =====

void FUN_00655304(long param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 + 0x18);
      puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar2 = (ulong *)*puVar2;
      }
      FUN_006636d4(param_1 + 0x18,uVar3 & 0xfffffffffffffffc,puVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 + 0x20);
      puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar2 = (ulong *)*puVar2;
      }
      FUN_006636d4(param_1 + 0x20,uVar3 & 0xfffffffffffffffc,puVar2);
    }
  }
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 006553c4  FUN_006553c4 =====

undefined ** FUN_006553c4(void)

{
  return &PTR_FUN_00798be0;
}


// ===== 006553d0  FUN_006553d0 =====

undefined8 FUN_006553d0(void)

{
  return 1;
}


// ===== 006553d8  FUN_006553d8 =====

void FUN_006553d8(void)

{
  FUN_00684dd0(FUN_0064dd54,&DAT_007ae908,&DAT_007ae960);
  return;
}


// ===== 006553f0  FUN_006553f0 =====

void FUN_006553f0(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_007a2f70;
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = uVar1;
  param_1[5] = 0;
  param_1[6] = (long)&DAT_007aea80;
  return;
}


// ===== 00655424  FUN_00655424 =====

void FUN_00655424(undefined8 *param_1)

{
  void *__ptr;
  ulong uVar1;
  
  if ((param_1[1] & 1) == 0) {
    uVar1 = param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 00655444 to 00655447 has its CatchHandler @ 006554b4 */
    uVar1 = FUN_00662218();
  }
  if (uVar1 == 0) {
    if ((param_1[5] != 0) && (param_1[3] == 0)) {
                    /* try { // try from 00655460 to 00655463 has its CatchHandler @ 006554b0 */
      FUN_00675910();
    }
                    /* try { // try from 00655464 to 0065546b has its CatchHandler @ 006554b4 */
    FUN_00663a20(param_1 + 6);
  }
  *param_1 = &PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) &&
     (__ptr = (void *)(param_1[1] + -2), __ptr != (void *)0x0)) {
    FUN_00662da0(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 006554b8  FUN_006554b8 =====

void FUN_006554b8(void *param_1)

{
  FUN_00655424();
  free(param_1);
  return;
}


// ===== 006554dc  FUN_006554dc =====

void FUN_006554dc(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// ===== 006554e4  FUN_006554e4 =====

void FUN_006554e4(long param_1)

{
  byte bVar1;
  byte *pbVar2;
  
  FUN_0066211c(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    pbVar2 = (byte *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
    if ((*pbVar2 & 1) != 0) {
      **(undefined1 **)(pbVar2 + 0x10) = 0;
      pbVar2[8] = 0;
      pbVar2[9] = 0;
      pbVar2[10] = 0;
      pbVar2[0xb] = 0;
      pbVar2[0xc] = 0;
      pbVar2[0xd] = 0;
      pbVar2[0xe] = 0;
      pbVar2[0xf] = 0;
      bVar1 = *(byte *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0x10) = 0;
      goto joined_r0x00655544;
    }
    pbVar2[0] = 0;
    pbVar2[1] = 0;
  }
  bVar1 = *(byte *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
joined_r0x00655544:
  if ((bVar1 & 1) == 0) {
    return;
  }
  FUN_006622b8(param_1 + 8);
  return;
}


// ===== 00655558  FUN_00655558 =====

byte * FUN_00655558(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  ulong *puVar5;
  uint uVar6;
  int *piVar7;
  byte *pbVar8;
  undefined1 auVar9 [16];
  
  do {
    while( true ) {
      if ((byte *)*param_3 <= param_2) {
        iVar1 = (int)param_2 - *(int *)(param_3 + 1);
        if (*(int *)((long)param_3 + 0x1c) == iVar1) {
          pbVar8 = (byte *)0x0;
          if (param_3[2] != 0 || iVar1 < 1) {
            pbVar8 = param_2;
          }
          return pbVar8;
        }
        auVar9 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
        param_2 = auVar9._0_8_;
        if ((auVar9 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
          return param_2;
        }
      }
      pbVar8 = param_2 + 1;
      uVar6 = (uint)*param_2;
      if (-1 < (char)*param_2) break;
      uVar6 = (uVar6 + (uint)*pbVar8 * 0x80) - 0x80;
      if (-1 < (char)*pbVar8) {
        pbVar8 = param_2 + 2;
        break;
      }
      auVar9 = FUN_0066fe50(param_2);
      uVar6 = (uint)(auVar9._8_8_ >> 3) & 0x1fffffff;
      auVar2 = auVar9;
      if (uVar6 != 2) goto LAB_006555d4;
LAB_00655620:
      if ((auVar9._8_4_ & 0xff) == 0x12) {
        param_2 = (byte *)(auVar9._0_8_ + -1);
        do {
          piVar7 = *(int **)(param_1 + 0x28);
          if (piVar7 == (int *)0x0) {
LAB_00655670:
            uVar3 = FUN_00661668(*(undefined8 *)(param_1 + 0x18));
            uVar3 = FUN_00675990(param_1 + 0x18,uVar3);
            param_2 = (byte *)FUN_0066fa8c(param_3,uVar3,param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            iVar1 = *(int *)(param_1 + 0x20);
            if (*piVar7 <= iVar1) goto LAB_00655670;
            *(int *)(param_1 + 0x20) = iVar1 + 1;
            param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar7 + (long)iVar1 * 2 + 2),
                                           param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x12));
      }
      else {
LAB_006556b8:
        pbVar8 = auVar9._0_8_;
        uVar6 = auVar9._8_4_;
        if ((uVar6 == 0) || ((uVar6 & 7) == 4)) {
          if (pbVar8 != (byte *)0x0) {
            *(uint *)(param_3 + 10) = uVar6 - 1;
            return pbVar8;
          }
          return (byte *)0x0;
        }
        if ((*(ulong *)(param_1 + 8) & 1) == 0) {
          lVar4 = FUN_00661fa4(param_1 + 8);
        }
        else {
          lVar4 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8;
        }
        param_2 = (byte *)FUN_006fbab8(auVar9._8_8_ & 0xffffffff,lVar4,pbVar8,param_3);
        if (param_2 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
    }
    auVar2._8_4_ = uVar6;
    auVar2._0_8_ = pbVar8;
    auVar2._12_4_ = 0;
    auVar9._8_4_ = uVar6;
    auVar9._0_8_ = pbVar8;
    auVar9._12_4_ = 0;
    uVar6 = uVar6 >> 3;
    if (uVar6 == 2) goto LAB_00655620;
LAB_006555d4:
    auVar9 = auVar2;
    if ((uVar6 != 1) || ((auVar9._8_4_ & 0xff) != 10)) goto LAB_006556b8;
    puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    uVar3 = FUN_0066399c(param_1 + 0x30,puVar5);
    param_2 = (byte *)FUN_0066ff90(uVar3,auVar9._0_8_,param_3);
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}


// ===== 0065579c  FUN_0065579c =====

undefined1 * FUN_0065579c(long param_1,undefined1 *param_2,long *param_3)

{
  size_t __n;
  void *__src;
  int iVar1;
  undefined1 *puVar2;
  long lVar3;
  byte *pbVar4;
  int iVar5;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    pbVar4 = (byte *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
    __n = (ulong)(*pbVar4 >> 1);
    if ((*pbVar4 & 1) != 0) {
      __n = *(size_t *)(pbVar4 + 8);
    }
    if ((0x7f < (long)__n) || ((*param_3 - (long)param_2) + 0xe < (long)__n)) {
      param_2 = (undefined1 *)FUN_0066d778(param_3,1);
      iVar1 = *(int *)(param_1 + 0x20);
      goto joined_r0x00655830;
    }
    param_2[1] = (char)__n;
    *param_2 = 10;
    __src = (void *)((ulong)pbVar4 | 1);
    if ((*pbVar4 & 1) != 0) {
      __src = *(void **)(pbVar4 + 0x10);
    }
    memcpy(param_2 + 2,__src,__n);
    param_2 = param_2 + 2 + __n;
  }
  iVar1 = *(int *)(param_1 + 0x20);
joined_r0x00655830:
  if (iVar1 != 0) {
    iVar5 = 0;
    do {
      lVar3 = *(long *)(*(long *)(param_1 + 0x28) + (long)iVar5 * 8 + 8);
      param_2 = (undefined1 *)FUN_00678d18(2,lVar3,*(undefined4 *)(lVar3 + 0x14),param_2,param_3);
      iVar5 = iVar5 + 1;
    } while (iVar1 != iVar5);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  puVar2 = (undefined1 *)
           FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
  return puVar2;
}


// ===== 006558bc  FUN_006558bc =====

void FUN_006558bc(long param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  lVar7 = (long)*(int *)(param_1 + 0x20);
  plVar8 = (long *)0x0;
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar8 = (long *)(*(long *)(param_1 + 0x28) + 8);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    lVar7 = 0;
  }
  else {
    lVar9 = lVar7 << 3;
    do {
      lVar4 = *plVar8;
      uVar2 = *(uint *)(lVar4 + 0x10);
      if ((uVar2 & 3) == 0) {
        lVar5 = 0;
      }
      else {
        if ((uVar2 & 1) == 0) {
          lVar5 = 0;
        }
        else {
          pbVar6 = (byte *)(*(ulong *)(lVar4 + 0x18) & 0xfffffffffffffffc);
          bVar3 = *pbVar6;
          uVar1 = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            uVar1 = *(ulong *)(pbVar6 + 8);
          }
          lVar5 = uVar1 + (((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
        }
        if ((uVar2 >> 1 & 1) != 0) {
          pbVar6 = (byte *)(*(ulong *)(lVar4 + 0x20) & 0xfffffffffffffffc);
          bVar3 = *pbVar6;
          uVar1 = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            uVar1 = *(ulong *)(pbVar6 + 8);
          }
          lVar5 = lVar5 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
                  1;
        }
      }
      lVar4 = FUN_006e5694(lVar4,lVar5,lVar4 + 0x14);
      lVar9 = lVar9 + -8;
      plVar8 = plVar8 + 1;
      lVar7 = lVar4 + lVar7 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (lVar9 != 0);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    pbVar6 = (byte *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
    bVar3 = *pbVar6;
    uVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar1 = *(ulong *)(pbVar6 + 8);
    }
    lVar7 = lVar7 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  FUN_006e5694(param_1,lVar7,param_1 + 0x14);
  return;
}


// ===== 00655a34  FUN_00655a34 =====

void FUN_00655a34(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  
  iVar1 = *(int *)(param_2 + 0x20);
  if (iVar1 != 0) {
    lVar6 = *(long *)(param_2 + 0x28);
    uVar3 = FUN_00675710(param_1 + 0x18,iVar1);
    FUN_0066251c(param_1 + 0x18,uVar3,lVar6 + 8,iVar1,
                 **(int **)(param_1 + 0x28) - *(int *)(param_1 + 0x20));
    iVar2 = **(int **)(param_1 + 0x28);
    iVar1 = *(int *)(param_1 + 0x20) + iVar1;
    *(int *)(param_1 + 0x20) = iVar1;
    if (iVar2 < iVar1) {
      **(int **)(param_1 + 0x28) = iVar1;
    }
  }
  if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
    uVar5 = *(ulong *)(param_2 + 0x30);
    puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    FUN_006636d4(param_1 + 0x30,uVar5 & 0xfffffffffffffffc,puVar4);
  }
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 00655b14  FUN_00655b14 =====

undefined ** FUN_00655b14(void)

{
  return &PTR_FUN_00798bf0;
}


// ===== 00655b20  FUN_00655b20 =====

undefined8 FUN_00655b20(void)

{
  return 1;
}


// ===== 00655b28  FUN_00655b28 =====

void FUN_00655b28(void)

{
  FUN_00684dd0(FUN_0064dd54,&DAT_007ae908,&DAT_007ae970);
  return;
}


// ===== 00655b40  FUN_00655b40 =====

void FUN_00655b40(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_007a2f80;
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_2;
  param_1[7] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = uVar1;
  param_1[8] = 0;
  param_1[9] = param_2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = param_2;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = param_2;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = param_2;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = param_2;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = param_2;
  puVar2 = PTR_DAT_007a2ea0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = (long)puVar2;
  param_1[0x1c] = (long)puVar2;
  return;
}


// ===== 00655ba0  FUN_00655ba0 =====

void FUN_00655ba0(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong *puVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  
  puVar9 = param_1 + 1;
  *puVar9 = 0;
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  iVar2 = *(int *)(param_2 + 0x20);
  *param_1 = &PTR_FUN_00798190;
  if (iVar2 != 0) {
    lVar7 = *(long *)(param_2 + 0x28);
                    /* try { // try from 00655c04 to 00655c33 has its CatchHandler @ 00656078 */
    uVar4 = FUN_00675710(param_1 + 3,iVar2);
    FUN_00662860(param_1 + 3,uVar4,lVar7 + 8,iVar2,*(int *)param_1[5] - *(int *)(param_1 + 4));
    iVar3 = *(int *)param_1[5];
    iVar2 = *(int *)(param_1 + 4) + iVar2;
    *(int *)(param_1 + 4) = iVar2;
    if (iVar3 < iVar2) {
      *(int *)param_1[5] = iVar2;
    }
  }
  puVar8 = param_1 + 6;
  *puVar8 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  iVar2 = *(int *)(param_2 + 0x38);
  if (iVar2 != 0) {
    lVar7 = *(long *)(param_2 + 0x40);
                    /* try { // try from 00655c6c to 00655c9b has its CatchHandler @ 00656070 */
    uVar4 = FUN_00675710(puVar8,iVar2);
    FUN_006622fc(puVar8,uVar4,lVar7 + 8,iVar2,*(int *)param_1[8] - *(int *)(param_1 + 7));
    iVar3 = *(int *)param_1[8];
    iVar2 = *(int *)(param_1 + 7) + iVar2;
    *(int *)(param_1 + 7) = iVar2;
    if (iVar3 < iVar2) {
      *(int *)param_1[8] = iVar2;
    }
  }
  puVar8 = param_1 + 9;
  *puVar8 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  iVar2 = *(int *)(param_2 + 0x50);
  if (iVar2 != 0) {
    lVar7 = *(long *)(param_2 + 0x58);
                    /* try { // try from 00655cd4 to 00655d03 has its CatchHandler @ 00656064 */
    uVar4 = FUN_00675710(puVar8,iVar2);
    FUN_006628e8(puVar8,uVar4,lVar7 + 8,iVar2,*(int *)param_1[0xb] - *(int *)(param_1 + 10));
    iVar3 = *(int *)param_1[0xb];
    iVar2 = *(int *)(param_1 + 10) + iVar2;
    *(int *)(param_1 + 10) = iVar2;
    if (iVar3 < iVar2) {
      *(int *)param_1[0xb] = iVar2;
    }
  }
  puVar8 = param_1 + 0xc;
  *puVar8 = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  iVar2 = *(int *)(param_2 + 0x68);
  if (iVar2 != 0) {
    lVar7 = *(long *)(param_2 + 0x70);
                    /* try { // try from 00655d3c to 00655d6b has its CatchHandler @ 00656034 */
    uVar4 = FUN_00675710(puVar8,iVar2);
    FUN_006628e8(puVar8,uVar4,lVar7 + 8,iVar2,*(int *)param_1[0xe] - *(int *)(param_1 + 0xd));
    iVar3 = *(int *)param_1[0xe];
    iVar2 = *(int *)(param_1 + 0xd) + iVar2;
    *(int *)(param_1 + 0xd) = iVar2;
    if (iVar3 < iVar2) {
      *(int *)param_1[0xe] = iVar2;
    }
  }
  puVar8 = param_1 + 0xf;
  *puVar8 = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  iVar2 = *(int *)(param_2 + 0x80);
  if (iVar2 != 0) {
    lVar7 = *(long *)(param_2 + 0x88);
                    /* try { // try from 00655da4 to 00655dd3 has its CatchHandler @ 00656020 */
    uVar4 = FUN_00675710(puVar8,iVar2);
    FUN_006628e8(puVar8,uVar4,lVar7 + 8,iVar2,*(int *)param_1[0x11] - *(int *)(param_1 + 0x10));
    iVar3 = *(int *)param_1[0x11];
    iVar2 = *(int *)(param_1 + 0x10) + iVar2;
    *(int *)(param_1 + 0x10) = iVar2;
    if (iVar3 < iVar2) {
      *(int *)param_1[0x11] = iVar2;
    }
  }
  puVar8 = param_1 + 0x12;
  *puVar8 = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  iVar2 = *(int *)(param_2 + 0x98);
  if (iVar2 != 0) {
    lVar7 = *(long *)(param_2 + 0xa0);
                    /* try { // try from 00655e0c to 00655e3b has its CatchHandler @ 0065600c */
    uVar4 = FUN_00675710(puVar8,iVar2);
    FUN_00662970(puVar8,uVar4,lVar7 + 8,iVar2,*(int *)param_1[0x14] - *(int *)(param_1 + 0x13));
    iVar3 = *(int *)param_1[0x14];
    iVar2 = *(int *)(param_1 + 0x13) + iVar2;
    *(int *)(param_1 + 0x13) = iVar2;
    if (iVar3 < iVar2) {
      *(int *)param_1[0x14] = iVar2;
    }
  }
  puVar8 = param_1 + 0x15;
  *puVar8 = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  iVar2 = *(int *)(param_2 + 0xb0);
  if (iVar2 != 0) {
    lVar7 = *(long *)(param_2 + 0xb8);
                    /* try { // try from 00655e78 to 00655ea7 has its CatchHandler @ 00655ff8 */
    uVar4 = FUN_00675710(puVar8,iVar2);
    FUN_00662494(puVar8,uVar4,lVar7 + 8,iVar2,*(int *)param_1[0x17] - *(int *)(param_1 + 0x16));
    iVar3 = *(int *)param_1[0x17];
    iVar2 = *(int *)(param_1 + 0x16) + iVar2;
    *(int *)(param_1 + 0x16) = iVar2;
    if (iVar3 < iVar2) {
      *(int *)param_1[0x17] = iVar2;
    }
  }
  puVar8 = param_1 + 0x18;
  *puVar8 = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  iVar2 = *(int *)(param_2 + 200);
  if (iVar2 != 0) {
    lVar7 = *(long *)(param_2 + 0xd0);
                    /* try { // try from 00655ee4 to 00655f13 has its CatchHandler @ 00655fe8 */
    uVar4 = FUN_00675710(puVar8,iVar2);
    FUN_0066251c(puVar8,uVar4,lVar7 + 8,iVar2,*(int *)param_1[0x1a] - *(int *)(param_1 + 0x19));
    iVar3 = *(int *)param_1[0x1a];
    iVar2 = *(int *)(param_1 + 0x19) + iVar2;
    *(int *)(param_1 + 0x19) = iVar2;
    if (iVar3 < iVar2) {
      *(int *)param_1[0x1a] = iVar2;
    }
  }
  puVar8 = param_1 + 0x1b;
  *puVar8 = 0;
  param_1 = param_1 + 0x1c;
  *param_1 = 0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
                    /* try { // try from 00655f54 to 00655fb7 has its CatchHandler @ 00656078 */
    FUN_006621e0(puVar9,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  }
  uVar6 = *(uint *)(param_2 + 0x10);
  *puVar8 = &DAT_007aea80;
  if ((uVar6 & 1) != 0) {
    puVar5 = (ulong *)(*puVar9 & 0xfffffffffffffffc);
    if ((*puVar9 & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    FUN_006636d4(puVar8,*(ulong *)(param_2 + 0xd8) & 0xfffffffffffffffc,puVar5);
    uVar6 = *(uint *)(param_2 + 0x10);
  }
  *param_1 = &DAT_007aea80;
  if ((uVar6 >> 1 & 1) != 0) {
    puVar5 = (ulong *)(*puVar9 & 0xfffffffffffffffc);
    if ((*puVar9 & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    FUN_006636d4(param_1,*(ulong *)(param_2 + 0xe0) & 0xfffffffffffffffc,puVar5);
  }
  return;
}


// ===== 0065608c  FUN_0065608c =====

void FUN_0065608c(long *param_1)

{
  if ((param_1[2] != 0) && (*param_1 == 0)) {
                    /* try { // try from 006560a4 to 006560a7 has its CatchHandler @ 006560b0 */
    FUN_00675910();
  }
  return;
}


// ===== 006560b4  FUN_006560b4 =====

void FUN_006560b4(long *param_1)

{
  if ((param_1[2] != 0) && (*param_1 == 0)) {
                    /* try { // try from 006560cc to 006560cf has its CatchHandler @ 006560d8 */
    FUN_00675910();
  }
  return;
}


// ===== 006560dc  FUN_006560dc =====

void FUN_006560dc(long *param_1)

{
  if ((param_1[2] != 0) && (*param_1 == 0)) {
                    /* try { // try from 006560f4 to 006560f7 has its CatchHandler @ 00656100 */
    FUN_00675910();
  }
  return;
}


// ===== 00656104  FUN_00656104 =====

void FUN_00656104(long *param_1)

{
  if ((param_1[2] != 0) && (*param_1 == 0)) {
                    /* try { // try from 0065611c to 0065611f has its CatchHandler @ 00656128 */
    FUN_00675910();
  }
  return;
}


// ===== 0065612c  FUN_0065612c =====

void FUN_0065612c(undefined8 *param_1)

{
  void *__ptr;
  ulong uVar1;
  
  if ((param_1[1] & 1) == 0) {
    uVar1 = param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 0065614c to 0065615b has its CatchHandler @ 006561a0 */
    uVar1 = FUN_00662218();
  }
  if (uVar1 == 0) {
    FUN_006561a4(param_1);
  }
  *param_1 = &PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) &&
     (__ptr = (void *)(param_1[1] + -2), __ptr != (void *)0x0)) {
    FUN_00662da0(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 006561a4  FUN_006561a4 =====

void FUN_006561a4(long param_1)

{
  if ((*(long *)(param_1 + 0x28) != 0) && (*(long *)(param_1 + 0x18) == 0)) {
                    /* try { // try from 006561c4 to 006561c7 has its CatchHandler @ 006562a4 */
    FUN_00675910();
  }
  if ((*(long *)(param_1 + 0x40) != 0) && (*(long *)(param_1 + 0x30) == 0)) {
                    /* try { // try from 006561dc to 006561df has its CatchHandler @ 006562a0 */
    FUN_00675910();
  }
  if ((*(long *)(param_1 + 0x58) != 0) && (*(long *)(param_1 + 0x48) == 0)) {
                    /* try { // try from 006561f4 to 006561f7 has its CatchHandler @ 0065629c */
    FUN_00675910();
  }
  if ((*(long *)(param_1 + 0x70) != 0) && (*(long *)(param_1 + 0x60) == 0)) {
                    /* try { // try from 0065620c to 0065620f has its CatchHandler @ 00656298 */
    FUN_00675910();
  }
  if ((*(long *)(param_1 + 0x88) != 0) && (*(long *)(param_1 + 0x78) == 0)) {
                    /* try { // try from 00656224 to 00656227 has its CatchHandler @ 00656294 */
    FUN_00675910();
  }
  if ((*(long *)(param_1 + 0xa0) != 0) && (*(long *)(param_1 + 0x90) == 0)) {
                    /* try { // try from 0065623c to 0065623f has its CatchHandler @ 00656290 */
    FUN_00675910();
  }
  if ((*(long *)(param_1 + 0xb8) != 0) && (*(long *)(param_1 + 0xa8) == 0)) {
                    /* try { // try from 00656254 to 00656257 has its CatchHandler @ 0065628c */
    FUN_00675910();
  }
  if ((*(long *)(param_1 + 0xd0) != 0) && (*(long *)(param_1 + 0xc0) == 0)) {
                    /* try { // try from 0065626c to 0065626f has its CatchHandler @ 00656288 */
    FUN_00675910();
  }
  FUN_00663a20(param_1 + 0xd8);
  FUN_00663a20(param_1 + 0xe0);
  return;
}


// ===== 006562a8  FUN_006562a8 =====

void FUN_006562a8(void *param_1)

{
  FUN_0065612c();
  free(param_1);
  return;
}


// ===== 006562cc  FUN_006562cc =====

void FUN_006562cc(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// ===== 006562d4  FUN_006562d4 =====

byte * FUN_006562d4(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  ulong *puVar7;
  uint uVar8;
  int *piVar9;
  byte *pbVar10;
  undefined1 auVar11 [16];
  
LAB_00656310:
  if ((byte *)*param_3 <= param_2) {
    iVar1 = (int)param_2 - *(int *)(param_3 + 1);
    if (*(int *)((long)param_3 + 0x1c) == iVar1) {
      pbVar10 = (byte *)0x0;
      if (param_3[2] != 0 || iVar1 < 1) {
        pbVar10 = param_2;
      }
      return pbVar10;
    }
    auVar11 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
    param_2 = auVar11._0_8_;
    if ((auVar11 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      return param_2;
    }
  }
  pbVar10 = param_2 + 1;
  uVar8 = (uint)*param_2;
  if ((char)*param_2 < '\0') {
    uVar8 = (uVar8 + (uint)*pbVar10 * 0x80) - 0x80;
    if (-1 < (char)*pbVar10) {
      pbVar10 = param_2 + 2;
      goto LAB_00656344;
    }
    auVar11 = FUN_0066fe50(param_2);
    uVar8 = (uint)(auVar11._8_8_ >> 3) & 0x1fffffff;
    auVar2 = auVar11;
    if (0xb < uVar8) goto LAB_0065645c;
LAB_00656350:
    auVar11 = auVar2;
    lVar5 = auVar11._0_8_;
    uVar6 = auVar11._8_4_;
    if (uVar8 < 5) {
      if (uVar8 == 1) {
        if ((uVar6 & 0xff) != 10) goto LAB_006568e0;
        param_2 = (byte *)(lVar5 + -1);
        do {
          piVar9 = *(int **)(param_1 + 0x28);
          if (piVar9 == (int *)0x0) {
LAB_0065660c:
            uVar4 = FUN_006614e8(*(undefined8 *)(param_1 + 0x18));
            uVar4 = FUN_00675990(param_1 + 0x18,uVar4);
            param_2 = (byte *)FUN_0066fa8c(param_3,uVar4,param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            iVar1 = *(int *)(param_1 + 0x20);
            if (*piVar9 <= iVar1) goto LAB_0065660c;
            *(int *)(param_1 + 0x20) = iVar1 + 1;
            param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar9 + (long)iVar1 * 2 + 2),
                                           param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 10));
      }
      else {
        if ((uVar8 != 2) || ((uVar6 & 0xff) != 0x12)) goto LAB_006568e0;
        puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar7 = (ulong *)*puVar7;
        }
        lVar3 = param_1 + 0xd8;
LAB_006562f8:
        uVar4 = FUN_0066399c(lVar3,puVar7);
        param_2 = (byte *)FUN_0066ff90(uVar4,lVar5,param_3);
        if (param_2 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      goto LAB_00656310;
    }
    if (uVar8 == 5) {
      if ((uVar6 & 0xff) == 0x2a) {
        param_2 = (byte *)(lVar5 + -1);
        do {
          piVar9 = *(int **)(param_1 + 0x40);
          if (piVar9 == (int *)0x0) {
LAB_0065673c:
            uVar4 = FUN_00661868(*(undefined8 *)(param_1 + 0x30));
            uVar4 = FUN_00675990(param_1 + 0x30,uVar4);
            param_2 = (byte *)FUN_0066fa8c(param_3,uVar4,param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            iVar1 = *(int *)(param_1 + 0x38);
            if (*piVar9 <= iVar1) goto LAB_0065673c;
            *(int *)(param_1 + 0x38) = iVar1 + 1;
            param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar9 + (long)iVar1 * 2 + 2),
                                           param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x2a));
        goto LAB_00656310;
      }
    }
    else {
      if (uVar8 == 10) {
        if ((uVar6 & 0xff) == 0x52) {
          puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
          if ((*(ulong *)(param_1 + 8) & 1) != 0) {
            puVar7 = (ulong *)*puVar7;
          }
          lVar3 = param_1 + 0xe0;
          goto LAB_006562f8;
        }
        goto LAB_006568e0;
      }
      if ((uVar8 == 0xb) && ((uVar6 & 0xff) == 0x5a)) {
        param_2 = (byte *)(lVar5 + -1);
        do {
          piVar9 = *(int **)(param_1 + 0x58);
          if (piVar9 == (int *)0x0) {
LAB_006563c0:
            uVar4 = FUN_00661468(*(undefined8 *)(param_1 + 0x48));
            uVar4 = FUN_00675990(param_1 + 0x48,uVar4);
            param_2 = (byte *)FUN_0066fa8c(param_3,uVar4,param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            iVar1 = *(int *)(param_1 + 0x50);
            if (*piVar9 <= iVar1) goto LAB_006563c0;
            *(int *)(param_1 + 0x50) = iVar1 + 1;
            param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar9 + (long)iVar1 * 2 + 2),
                                           param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x5a));
        goto LAB_00656310;
      }
    }
  }
  else {
LAB_00656344:
    auVar2._8_4_ = uVar8;
    auVar2._0_8_ = pbVar10;
    auVar2._12_4_ = 0;
    auVar11._8_4_ = uVar8;
    auVar11._0_8_ = pbVar10;
    auVar11._12_4_ = 0;
    uVar8 = uVar8 >> 3;
    if (uVar8 < 0xc) goto LAB_00656350;
LAB_0065645c:
    lVar5 = auVar11._0_8_;
    uVar6 = auVar11._8_4_;
    if (uVar8 < 0xe) {
      if (uVar8 == 0xc) {
        if ((uVar6 & 0xff) == 0x62) {
          param_2 = (byte *)(lVar5 + -1);
          do {
            piVar9 = *(int **)(param_1 + 0x70);
            if (piVar9 == (int *)0x0) {
LAB_006566a4:
              uVar4 = FUN_00661468(*(undefined8 *)(param_1 + 0x60));
              uVar4 = FUN_00675990(param_1 + 0x60,uVar4);
              param_2 = (byte *)FUN_0066fa8c(param_3,uVar4,param_2 + 1);
              if (param_2 == (byte *)0x0) {
                return (byte *)0x0;
              }
            }
            else {
              iVar1 = *(int *)(param_1 + 0x68);
              if (*piVar9 <= iVar1) goto LAB_006566a4;
              *(int *)(param_1 + 0x68) = iVar1 + 1;
              param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar9 + (long)iVar1 * 2 + 2),
                                             param_2 + 1);
              if (param_2 == (byte *)0x0) {
                return (byte *)0x0;
              }
            }
          } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x62));
          goto LAB_00656310;
        }
      }
      else if ((uVar8 == 0xd) && ((uVar6 & 0xff) == 0x6a)) {
        param_2 = (byte *)(lVar5 + -1);
        do {
          piVar9 = *(int **)(param_1 + 0x88);
          if (piVar9 == (int *)0x0) {
LAB_00656574:
            uVar4 = FUN_00661468(*(undefined8 *)(param_1 + 0x78));
            uVar4 = FUN_00675990(param_1 + 0x78,uVar4);
            param_2 = (byte *)FUN_0066fa8c(param_3,uVar4,param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            iVar1 = *(int *)(param_1 + 0x80);
            if (*piVar9 <= iVar1) goto LAB_00656574;
            *(int *)(param_1 + 0x80) = iVar1 + 1;
            param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar9 + (long)iVar1 * 2 + 2),
                                           param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x6a));
        goto LAB_00656310;
      }
    }
    else if (uVar8 == 0xe) {
      if ((uVar6 & 0xff) == 0x72) {
        param_2 = (byte *)(lVar5 + -1);
        do {
          piVar9 = *(int **)(param_1 + 0xa0);
          if (piVar9 == (int *)0x0) {
LAB_006567d4:
            uVar4 = FUN_006616e8(*(undefined8 *)(param_1 + 0x90));
            uVar4 = FUN_00675990(param_1 + 0x90,uVar4);
            param_2 = (byte *)FUN_0066fa8c(param_3,uVar4,param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            iVar1 = *(int *)(param_1 + 0x98);
            if (*piVar9 <= iVar1) goto LAB_006567d4;
            *(int *)(param_1 + 0x98) = iVar1 + 1;
            param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar9 + (long)iVar1 * 2 + 2),
                                           param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x72));
        goto LAB_00656310;
      }
    }
    else if (uVar8 == 0xf) {
      if ((uVar6 & 0xff) == 0x7a) {
        param_2 = (byte *)(lVar5 + -1);
        do {
          piVar9 = *(int **)(param_1 + 0xb8);
          if (piVar9 == (int *)0x0) {
LAB_00656898:
            uVar4 = FUN_006618e8(*(undefined8 *)(param_1 + 0xa8));
            uVar4 = FUN_00675990(param_1 + 0xa8,uVar4);
            param_2 = (byte *)FUN_0066fa8c(param_3,uVar4,param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            iVar1 = *(int *)(param_1 + 0xb0);
            if (*piVar9 <= iVar1) goto LAB_00656898;
            *(int *)(param_1 + 0xb0) = iVar1 + 1;
            param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar9 + (long)iVar1 * 2 + 2),
                                           param_2 + 1);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x7a));
        goto LAB_00656310;
      }
    }
    else if ((uVar8 == 0x10) && ((uVar6 & 0xff) == 0x82)) {
      param_2 = (byte *)(lVar5 + -2);
      do {
        piVar9 = *(int **)(param_1 + 0xd0);
        if (piVar9 == (int *)0x0) {
LAB_006564cc:
          uVar4 = FUN_00661668(*(undefined8 *)(param_1 + 0xc0));
          uVar4 = FUN_00675990(param_1 + 0xc0,uVar4);
          param_2 = (byte *)FUN_0066fa8c(param_3,uVar4,param_2 + 2);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
        else {
          iVar1 = *(int *)(param_1 + 200);
          if (*piVar9 <= iVar1) goto LAB_006564cc;
          *(int *)(param_1 + 200) = iVar1 + 1;
          param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar9 + (long)iVar1 * 2 + 2),
                                         param_2 + 2);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
      } while ((param_2 < (byte *)*param_3) && (*(short *)param_2 == 0x182));
      goto LAB_00656310;
    }
  }
LAB_006568e0:
  pbVar10 = auVar11._0_8_;
  uVar8 = auVar11._8_4_;
  if ((uVar8 == 0) || ((uVar8 & 7) == 4)) {
    if (pbVar10 != (byte *)0x0) {
      *(uint *)(param_3 + 10) = uVar8 - 1;
      return pbVar10;
    }
    return (byte *)0x0;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    lVar5 = FUN_00661fa4(param_1 + 8);
  }
  else {
    lVar5 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8;
  }
  param_2 = (byte *)FUN_006fbab8(auVar11._8_8_ & 0xffffffff,lVar5,pbVar10,param_3);
  if (param_2 == (byte *)0x0) {
    return (byte *)0x0;
  }
  goto LAB_00656310;
}


// ===== 006569cc  FUN_006569cc =====

undefined1 * FUN_006569cc(long param_1,undefined1 *param_2,long *param_3)

{
  size_t sVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  long lVar6;
  byte *pbVar7;
  int iVar8;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if (iVar3 != 0) {
    iVar8 = 0;
    do {
      lVar6 = *(long *)(*(long *)(param_1 + 0x28) + (long)iVar8 * 8 + 8);
      param_2 = (undefined1 *)FUN_00678d18(1,lVar6,*(undefined4 *)(lVar6 + 0x14),param_2,param_3);
      iVar8 = iVar8 + 1;
    } while (iVar3 != iVar8);
  }
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 & 1) == 0) {
LAB_00656a98:
    iVar3 = *(int *)(param_1 + 0x38);
  }
  else {
    pbVar7 = (byte *)(*(ulong *)(param_1 + 0xd8) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar7 >> 1);
    if ((*pbVar7 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar7 + 8);
    }
    if (((long)sVar1 < 0x80) && ((long)sVar1 <= (*param_3 - (long)param_2) + 0xe)) {
      param_2[1] = (char)sVar1;
      *param_2 = 0x12;
      pvVar2 = (void *)((ulong)pbVar7 | 1);
      if ((*pbVar7 & 1) != 0) {
        pvVar2 = *(void **)(pbVar7 + 0x10);
      }
      memcpy(param_2 + 2,pvVar2,sVar1);
      param_2 = param_2 + 2 + sVar1;
      goto LAB_00656a98;
    }
    param_2 = (undefined1 *)FUN_0066d778(param_3,2);
    iVar3 = *(int *)(param_1 + 0x38);
  }
  if (iVar3 != 0) {
    iVar8 = 0;
    do {
      lVar6 = *(long *)(*(long *)(param_1 + 0x40) + (long)iVar8 * 8 + 8);
      param_2 = (undefined1 *)FUN_00678d18(5,lVar6,*(undefined4 *)(lVar6 + 0x14),param_2,param_3);
      iVar8 = iVar8 + 1;
    } while (iVar3 != iVar8);
  }
  if ((uVar4 >> 1 & 1) != 0) {
    pbVar7 = (byte *)(*(ulong *)(param_1 + 0xe0) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar7 >> 1);
    if ((*pbVar7 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar7 + 8);
    }
    if ((0x7f < (long)sVar1) || ((*param_3 - (long)param_2) + 0xe < (long)sVar1)) {
      param_2 = (undefined1 *)FUN_0066d778(param_3,10);
      iVar3 = *(int *)(param_1 + 0x50);
      goto joined_r0x00656b44;
    }
    param_2[1] = (char)sVar1;
    *param_2 = 0x52;
    pvVar2 = (void *)((ulong)pbVar7 | 1);
    if ((*pbVar7 & 1) != 0) {
      pvVar2 = *(void **)(pbVar7 + 0x10);
    }
    memcpy(param_2 + 2,pvVar2,sVar1);
    param_2 = param_2 + 2 + sVar1;
  }
  iVar3 = *(int *)(param_1 + 0x50);
joined_r0x00656b44:
  if (iVar3 != 0) {
    iVar8 = 0;
    do {
      lVar6 = *(long *)(*(long *)(param_1 + 0x58) + (long)iVar8 * 8 + 8);
      param_2 = (undefined1 *)FUN_00678d18(0xb,lVar6,*(undefined4 *)(lVar6 + 0x14),param_2,param_3);
      iVar8 = iVar8 + 1;
    } while (iVar3 != iVar8);
  }
  iVar3 = *(int *)(param_1 + 0x68);
  if (iVar3 != 0) {
    iVar8 = 0;
    do {
      lVar6 = *(long *)(*(long *)(param_1 + 0x70) + (long)iVar8 * 8 + 8);
      param_2 = (undefined1 *)FUN_00678d18(0xc,lVar6,*(undefined4 *)(lVar6 + 0x14),param_2,param_3);
      iVar8 = iVar8 + 1;
    } while (iVar3 != iVar8);
  }
  iVar3 = *(int *)(param_1 + 0x80);
  if (iVar3 != 0) {
    iVar8 = 0;
    do {
      lVar6 = *(long *)(*(long *)(param_1 + 0x88) + (long)iVar8 * 8 + 8);
      param_2 = (undefined1 *)FUN_00678d18(0xd,lVar6,*(undefined4 *)(lVar6 + 0x14),param_2,param_3);
      iVar8 = iVar8 + 1;
    } while (iVar3 != iVar8);
  }
  iVar3 = *(int *)(param_1 + 0x98);
  if (iVar3 != 0) {
    iVar8 = 0;
    do {
      lVar6 = *(long *)(*(long *)(param_1 + 0xa0) + (long)iVar8 * 8 + 8);
      param_2 = (undefined1 *)FUN_00678d18(0xe,lVar6,*(undefined4 *)(lVar6 + 0x14),param_2,param_3);
      iVar8 = iVar8 + 1;
    } while (iVar3 != iVar8);
  }
  iVar3 = *(int *)(param_1 + 0xb0);
  if (iVar3 != 0) {
    iVar8 = 0;
    do {
      lVar6 = *(long *)(*(long *)(param_1 + 0xb8) + (long)iVar8 * 8 + 8);
      param_2 = (undefined1 *)FUN_00678d18(0xf,lVar6,*(undefined4 *)(lVar6 + 0x14),param_2,param_3);
      iVar8 = iVar8 + 1;
    } while (iVar3 != iVar8);
  }
  iVar3 = *(int *)(param_1 + 200);
  if (iVar3 != 0) {
    iVar8 = 0;
    do {
      lVar6 = *(long *)(*(long *)(param_1 + 0xd0) + (long)iVar8 * 8 + 8);
      param_2 = (undefined1 *)FUN_00678d18(0x10,lVar6,*(undefined4 *)(lVar6 + 0x14),param_2,param_3)
      ;
      iVar8 = iVar8 + 1;
    } while (iVar3 != iVar8);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  puVar5 = (undefined1 *)
           FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
  return puVar5;
}


// ===== 00656d0c  FUN_00656d0c =====

undefined4 FUN_00656d0c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 00656d14  FUN_00656d14 =====

undefined4 FUN_00656d14(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 00656d1c  FUN_00656d1c =====

undefined4 FUN_00656d1c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 00656d24  FUN_00656d24 =====

void FUN_00656d24(long param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  
  lVar8 = (long)*(int *)(param_1 + 0x20);
  puVar9 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x28) != 0) {
    puVar9 = (undefined8 *)(*(long *)(param_1 + 0x28) + 8);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    lVar8 = 0;
  }
  else {
    lVar11 = lVar8 << 3;
    do {
      lVar5 = FUN_0065241c(*puVar9);
      lVar11 = lVar11 + -8;
      lVar8 = lVar5 + lVar8 + (ulong)(((uint)LZCOUNT((uint)lVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar9 = puVar9 + 1;
    } while (lVar11 != 0);
  }
  iVar4 = *(int *)(param_1 + 0x38);
  lVar8 = lVar8 + iVar4;
  puVar9 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x40) != 0) {
    puVar9 = (undefined8 *)(*(long *)(param_1 + 0x40) + 8);
  }
  if (iVar4 != 0) {
    lVar11 = (long)iVar4 << 3;
    do {
      lVar5 = FUN_00659864(*puVar9);
      lVar11 = lVar11 + -8;
      lVar8 = lVar5 + lVar8 + (ulong)(((uint)LZCOUNT((uint)lVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar9 = puVar9 + 1;
    } while (lVar11 != 0);
  }
  iVar4 = *(int *)(param_1 + 0x50);
  lVar8 = lVar8 + iVar4;
  puVar9 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x58) != 0) {
    puVar9 = (undefined8 *)(*(long *)(param_1 + 0x58) + 8);
  }
  if (iVar4 != 0) {
    lVar11 = (long)iVar4 << 3;
    do {
      lVar5 = FUN_00651158(*puVar9);
      lVar11 = lVar11 + -8;
      lVar8 = lVar5 + lVar8 + (ulong)(((uint)LZCOUNT((uint)lVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar9 = puVar9 + 1;
    } while (lVar11 != 0);
  }
  iVar4 = *(int *)(param_1 + 0x68);
  lVar8 = lVar8 + iVar4;
  puVar9 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x70) != 0) {
    puVar9 = (undefined8 *)(*(long *)(param_1 + 0x70) + 8);
  }
  if (iVar4 != 0) {
    lVar11 = (long)iVar4 << 3;
    do {
      lVar5 = FUN_00651158(*puVar9);
      lVar11 = lVar11 + -8;
      lVar8 = lVar5 + lVar8 + (ulong)(((uint)LZCOUNT((uint)lVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar9 = puVar9 + 1;
    } while (lVar11 != 0);
  }
  iVar4 = *(int *)(param_1 + 0x80);
  lVar8 = lVar8 + iVar4;
  puVar9 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x88) != 0) {
    puVar9 = (undefined8 *)(*(long *)(param_1 + 0x88) + 8);
  }
  if (iVar4 != 0) {
    lVar11 = (long)iVar4 << 3;
    do {
      lVar5 = FUN_00651158(*puVar9);
      lVar11 = lVar11 + -8;
      lVar8 = lVar5 + lVar8 + (ulong)(((uint)LZCOUNT((uint)lVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar9 = puVar9 + 1;
    } while (lVar11 != 0);
  }
  iVar4 = *(int *)(param_1 + 0x98);
  lVar8 = lVar8 + iVar4;
  puVar9 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0xa0) != 0) {
    puVar9 = (undefined8 *)(*(long *)(param_1 + 0xa0) + 8);
  }
  if (iVar4 != 0) {
    lVar11 = (long)iVar4 << 3;
    do {
      lVar5 = FUN_006558bc(*puVar9);
      lVar11 = lVar11 + -8;
      lVar8 = lVar5 + lVar8 + (ulong)(((uint)LZCOUNT((uint)lVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar9 = puVar9 + 1;
    } while (lVar11 != 0);
  }
  iVar4 = *(int *)(param_1 + 0xb0);
  lVar8 = lVar8 + iVar4;
  puVar9 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0xb8) != 0) {
    puVar9 = (undefined8 *)(*(long *)(param_1 + 0xb8) + 8);
  }
  if (iVar4 != 0) {
    lVar11 = (long)iVar4 << 3;
    do {
      lVar5 = FUN_0065a928(*puVar9);
      lVar11 = lVar11 + -8;
      lVar8 = lVar5 + lVar8 + (ulong)(((uint)LZCOUNT((uint)lVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar9 = puVar9 + 1;
    } while (lVar11 != 0);
  }
  iVar4 = *(int *)(param_1 + 200);
  lVar8 = lVar8 + (long)iVar4 * 2;
  plVar10 = (long *)0x0;
  if (*(long *)(param_1 + 0xd0) != 0) {
    plVar10 = (long *)(*(long *)(param_1 + 0xd0) + 8);
  }
  if (iVar4 != 0) {
    lVar11 = (long)iVar4 << 3;
    do {
      lVar5 = *plVar10;
      uVar2 = *(uint *)(lVar5 + 0x10);
      if ((uVar2 & 3) == 0) {
        lVar6 = 0;
      }
      else {
        if ((uVar2 & 1) == 0) {
          lVar6 = 0;
        }
        else {
          pbVar7 = (byte *)(*(ulong *)(lVar5 + 0x18) & 0xfffffffffffffffc);
          bVar3 = *pbVar7;
          uVar1 = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            uVar1 = *(ulong *)(pbVar7 + 8);
          }
          lVar6 = uVar1 + (((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
        }
        if ((uVar2 >> 1 & 1) != 0) {
          pbVar7 = (byte *)(*(ulong *)(lVar5 + 0x20) & 0xfffffffffffffffc);
          bVar3 = *pbVar7;
          uVar1 = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            uVar1 = *(ulong *)(pbVar7 + 8);
          }
          lVar6 = lVar6 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
                  1;
        }
      }
      lVar5 = FUN_006e5694(lVar5,lVar6,lVar5 + 0x14);
      lVar11 = lVar11 + -8;
      plVar10 = plVar10 + 1;
      lVar8 = lVar5 + lVar8 + (ulong)(((uint)LZCOUNT((uint)lVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (lVar11 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      pbVar7 = (byte *)(*(ulong *)(param_1 + 0xd8) & 0xfffffffffffffffc);
      bVar3 = *pbVar7;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar7 + 8);
      }
      lVar8 = lVar8 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      pbVar7 = (byte *)(*(ulong *)(param_1 + 0xe0) & 0xfffffffffffffffc);
      bVar3 = *pbVar7;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar7 + 8);
      }
      lVar8 = lVar8 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  FUN_006e5694(param_1,lVar8,param_1 + 0x14);
  return;
}


// ===== 0065711c  FUN_0065711c =====

void FUN_0065711c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  
  iVar1 = *(int *)(param_2 + 0x20);
  if (iVar1 != 0) {
    lVar7 = *(long *)(param_2 + 0x28);
    uVar4 = FUN_00675710(param_1 + 0x18,iVar1);
    FUN_00662860(param_1 + 0x18,uVar4,lVar7 + 8,iVar1,
                 **(int **)(param_1 + 0x28) - *(int *)(param_1 + 0x20));
    iVar2 = **(int **)(param_1 + 0x28);
    iVar1 = *(int *)(param_1 + 0x20) + iVar1;
    *(int *)(param_1 + 0x20) = iVar1;
    if (iVar2 < iVar1) {
      **(int **)(param_1 + 0x28) = iVar1;
    }
  }
  iVar1 = *(int *)(param_2 + 0x38);
  if (iVar1 != 0) {
    lVar7 = *(long *)(param_2 + 0x40);
    uVar4 = FUN_00675710(param_1 + 0x30,iVar1);
    FUN_006622fc(param_1 + 0x30,uVar4,lVar7 + 8,iVar1,
                 **(int **)(param_1 + 0x40) - *(int *)(param_1 + 0x38));
    iVar2 = **(int **)(param_1 + 0x40);
    iVar1 = *(int *)(param_1 + 0x38) + iVar1;
    *(int *)(param_1 + 0x38) = iVar1;
    if (iVar2 < iVar1) {
      **(int **)(param_1 + 0x40) = iVar1;
    }
  }
  iVar1 = *(int *)(param_2 + 0x50);
  if (iVar1 != 0) {
    lVar7 = *(long *)(param_2 + 0x58);
    uVar4 = FUN_00675710(param_1 + 0x48,iVar1);
    FUN_006628e8(param_1 + 0x48,uVar4,lVar7 + 8,iVar1,
                 **(int **)(param_1 + 0x58) - *(int *)(param_1 + 0x50));
    iVar2 = **(int **)(param_1 + 0x58);
    iVar1 = *(int *)(param_1 + 0x50) + iVar1;
    *(int *)(param_1 + 0x50) = iVar1;
    if (iVar2 < iVar1) {
      **(int **)(param_1 + 0x58) = iVar1;
    }
  }
  iVar1 = *(int *)(param_2 + 0x68);
  if (iVar1 != 0) {
    lVar7 = *(long *)(param_2 + 0x70);
    uVar4 = FUN_00675710(param_1 + 0x60,iVar1);
    FUN_006628e8(param_1 + 0x60,uVar4,lVar7 + 8,iVar1,
                 **(int **)(param_1 + 0x70) - *(int *)(param_1 + 0x68));
    iVar2 = **(int **)(param_1 + 0x70);
    iVar1 = *(int *)(param_1 + 0x68) + iVar1;
    *(int *)(param_1 + 0x68) = iVar1;
    if (iVar2 < iVar1) {
      **(int **)(param_1 + 0x70) = iVar1;
    }
  }
  iVar1 = *(int *)(param_2 + 0x80);
  if (iVar1 != 0) {
    lVar7 = *(long *)(param_2 + 0x88);
    uVar4 = FUN_00675710(param_1 + 0x78,iVar1);
    FUN_006628e8(param_1 + 0x78,uVar4,lVar7 + 8,iVar1,
                 **(int **)(param_1 + 0x88) - *(int *)(param_1 + 0x80));
    iVar2 = **(int **)(param_1 + 0x88);
    iVar1 = *(int *)(param_1 + 0x80) + iVar1;
    *(int *)(param_1 + 0x80) = iVar1;
    if (iVar2 < iVar1) {
      **(int **)(param_1 + 0x88) = iVar1;
    }
  }
  iVar1 = *(int *)(param_2 + 0x98);
  if (iVar1 != 0) {
    lVar7 = *(long *)(param_2 + 0xa0);
    uVar4 = FUN_00675710(param_1 + 0x90,iVar1);
    FUN_00662970(param_1 + 0x90,uVar4,lVar7 + 8,iVar1,
                 **(int **)(param_1 + 0xa0) - *(int *)(param_1 + 0x98));
    iVar2 = **(int **)(param_1 + 0xa0);
    iVar1 = *(int *)(param_1 + 0x98) + iVar1;
    *(int *)(param_1 + 0x98) = iVar1;
    if (iVar2 < iVar1) {
      **(int **)(param_1 + 0xa0) = iVar1;
    }
  }
  iVar1 = *(int *)(param_2 + 0xb0);
  if (iVar1 != 0) {
    lVar7 = *(long *)(param_2 + 0xb8);
    uVar4 = FUN_00675710(param_1 + 0xa8,iVar1);
    FUN_00662494(param_1 + 0xa8,uVar4,lVar7 + 8,iVar1,
                 **(int **)(param_1 + 0xb8) - *(int *)(param_1 + 0xb0));
    iVar2 = **(int **)(param_1 + 0xb8);
    iVar1 = *(int *)(param_1 + 0xb0) + iVar1;
    *(int *)(param_1 + 0xb0) = iVar1;
    if (iVar2 < iVar1) {
      **(int **)(param_1 + 0xb8) = iVar1;
    }
  }
  iVar1 = *(int *)(param_2 + 200);
  if (iVar1 != 0) {
    lVar7 = *(long *)(param_2 + 0xd0);
    uVar4 = FUN_00675710(param_1 + 0xc0,iVar1);
    FUN_0066251c(param_1 + 0xc0,uVar4,lVar7 + 8,iVar1,
                 **(int **)(param_1 + 0xd0) - *(int *)(param_1 + 200));
    iVar2 = **(int **)(param_1 + 0xd0);
    iVar1 = *(int *)(param_1 + 200) + iVar1;
    *(int *)(param_1 + 200) = iVar1;
    if (iVar2 < iVar1) {
      **(int **)(param_1 + 0xd0) = iVar1;
    }
  }
  uVar3 = *(uint *)(param_2 + 0x10);
  if ((uVar3 & 3) != 0) {
    if ((uVar3 & 1) != 0) {
      uVar6 = *(ulong *)(param_2 + 0xd8);
      puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar5 = (ulong *)*puVar5;
      }
      FUN_006636d4(param_1 + 0xd8,uVar6 & 0xfffffffffffffffc,puVar5);
    }
    if ((uVar3 >> 1 & 1) != 0) {
      uVar6 = *(ulong *)(param_2 + 0xe0);
      puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar5 = (ulong *)*puVar5;
      }
      FUN_006636d4(param_1 + 0xe0,uVar6 & 0xfffffffffffffffc,puVar5);
    }
  }
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 006574bc  FUN_006574bc =====

undefined ** FUN_006574bc(void)

{
  return &PTR_FUN_00798c00;
}


// ===== 006574c8  FUN_006574c8 =====

void FUN_006574c8(long param_1,long param_2)

{
  if (param_2 != param_1) {
    FUN_0064ea98();
    FUN_0065711c(param_1,param_2);
    return;
  }
  return;
}


// ===== 00657500  FUN_00657500 =====

undefined8 FUN_00657500(void)

{
  return 1;
}


// ===== 00657508  FUN_00657508 =====

void FUN_00657508(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 8) = uVar3;
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_2 + 0x10) = uVar2;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x18) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_2 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = uVar4;
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_1 + 0x48);
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_2 + 0x58) = uVar3;
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  uVar5 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_1 + 0x60);
  uVar3 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_2 + 0x20) = uVar6;
  *(undefined8 *)(param_1 + 0x20) = uVar7;
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_2 + 0x70) = uVar4;
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x60) = uVar5;
  *(undefined8 *)(param_2 + 0x38) = uVar6;
  uVar5 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_2 + 0x78) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x88);
  uVar7 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x88) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x78) = uVar5;
  *(undefined8 *)(param_1 + 0x88) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_2 + 0x50) = uVar6;
  uVar5 = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x50) = uVar7;
  uVar6 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_2 + 0x90) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xa0);
  uVar7 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_2 + 0xa0) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa0) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_2 + 0x68) = uVar6;
  *(undefined8 *)(param_1 + 0x68) = uVar7;
  uVar6 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x90) = uVar5;
  uVar7 = *(undefined8 *)(param_2 + 0x80);
  uVar5 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_2 + 0xa8) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_2 + 0xb8) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_2 + 0x80) = uVar6;
  *(undefined8 *)(param_1 + 0x80) = uVar7;
  uVar6 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0xa8) = uVar5;
  uVar7 = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xb8) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0xd0);
  uVar5 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_2 + 0xc0) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_2 + 0x98) = uVar6;
  *(undefined8 *)(param_1 + 0x98) = uVar7;
  uVar6 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_2 + 0xd0) = uVar4;
  uVar7 = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xc0) = uVar5;
  *(undefined8 *)(param_1 + 0xd0) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  uVar4 = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_2 + 0xb0) = uVar6;
  *(undefined8 *)(param_1 + 0xb0) = uVar7;
  uVar5 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_2 + 0xd8) = uVar3;
  uVar6 = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xd8) = uVar4;
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  uVar4 = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_2 + 200) = uVar5;
  *(undefined8 *)(param_1 + 200) = uVar6;
  *(undefined8 *)(param_2 + 0xe0) = uVar3;
  *(undefined8 *)(param_1 + 0xe0) = uVar4;
  return;
}


// ===== 006576cc  FUN_006576cc =====

void FUN_006576cc(void)

{
  FUN_00684dd0(FUN_0064dd54,&DAT_007ae908,&DAT_007ae980);
  return;
}


// ===== 006576e4  FUN_006576e4 =====

void FUN_006576e4(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_007a2f90;
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = uVar1;
  return;
}


// ===== 0065770c  FUN_0065770c =====

void FUN_0065770c(long *param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  param_1[1] = 0;
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 2) = uVar1;
  puVar2 = PTR_DAT_007a2f90;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  uVar3 = *(ulong *)(param_2 + 8);
  *param_1 = (long)(puVar2 + 0x10);
  if ((uVar3 & 1) != 0) {
                    /* try { // try from 00657754 to 0065775b has its CatchHandler @ 00657770 */
    FUN_006621e0(param_1 + 1,(uVar3 & 0xfffffffffffffffc) + 8);
  }
  lVar4 = *(long *)(param_2 + 0x18);
  param_1[4] = *(long *)(param_2 + 0x20);
  param_1[3] = lVar4;
  return;
}


// ===== 00657784  FUN_00657784 =====

void FUN_00657784(undefined8 *param_1)

{
  void *__ptr;
  ulong uVar1;
  ulong *puVar2;
  
  puVar2 = param_1 + 1;
  uVar1 = *puVar2;
  if ((uVar1 & 1) != 0) {
                    /* try { // try from 006577a0 to 006577a7 has its CatchHandler @ 006577ec */
    FUN_00662218(puVar2);
    uVar1 = *puVar2;
  }
  *param_1 = &PTR_FUN_00799110;
  if ((((uint)uVar1 >> 1 & 1) != 0) && (__ptr = (void *)(uVar1 - 2), __ptr != (void *)0x0)) {
    FUN_00662da0(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 006577f0  FUN_006577f0 =====

void FUN_006577f0(void *param_1)

{
  FUN_00657784();
  free(param_1);
  return;
}


// ===== 00657814  FUN_00657814 =====

void FUN_00657814(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// ===== 0065781c  FUN_0065781c =====

void FUN_0065781c(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 3) != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006622b8();
  return;
}


// ===== 00657840  FUN_00657840 =====

byte * FUN_00657840(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  ulong uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  
  uVar7 = 0;
  do {
    while( true ) {
      if ((byte *)*param_3 <= param_2) {
        iVar1 = (int)param_2 - *(int *)(param_3 + 1);
        if (*(int *)((long)param_3 + 0x1c) == iVar1) {
          pbVar5 = (byte *)0x0;
          if (param_3[2] != 0 || iVar1 < 1) {
            pbVar5 = param_2;
          }
          goto LAB_00657a0c;
        }
        auVar8 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
        param_2 = auVar8._0_8_;
        pbVar5 = param_2;
        if ((auVar8 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_00657a0c;
      }
      pbVar5 = param_2 + 1;
      uVar6 = (uint)*param_2;
      if ((char)*param_2 < '\0') break;
LAB_006578a4:
      auVar2._8_4_ = uVar6;
      auVar2._0_8_ = pbVar5;
      auVar2._12_4_ = 0;
      auVar8._8_4_ = uVar6;
      auVar8._0_8_ = pbVar5;
      auVar8._12_4_ = 0;
      uVar6 = uVar6 >> 3;
      if (uVar6 != 2) goto LAB_006578b0;
LAB_00657914:
      pbVar5 = auVar8._0_8_;
      if ((auVar8._8_4_ & 0xff) != 0x10) goto LAB_00657954;
      uVar7 = uVar7 | 2;
      param_2 = pbVar5 + 1;
      uVar4 = (ulong)(char)*pbVar5;
      if ((long)uVar4 < 0) {
        uVar4 = (ulong)(((uint)*param_2 * 0x80 + (uint)*pbVar5) - 0x80);
        if (-1 < (char)*param_2) {
          param_2 = pbVar5 + 2;
          goto LAB_0065794c;
        }
        auVar8 = FUN_0066fd14(pbVar5);
        param_2 = auVar8._0_8_;
        *(long *)(param_1 + 0x20) = auVar8._8_8_;
joined_r0x00657984:
        if (param_2 == (byte *)0x0) {
          pbVar5 = (byte *)0x0;
LAB_00657a0c:
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar7;
          return pbVar5;
        }
      }
      else {
LAB_0065794c:
        *(ulong *)(param_1 + 0x20) = uVar4;
      }
    }
    uVar6 = (uVar6 + (uint)*pbVar5 * 0x80) - 0x80;
    if (-1 < (char)*pbVar5) {
      pbVar5 = param_2 + 2;
      goto LAB_006578a4;
    }
    auVar8 = FUN_0066fe50();
    uVar6 = (uint)(auVar8._8_8_ >> 3) & 0x1fffffff;
    auVar2 = auVar8;
    if (uVar6 == 2) goto LAB_00657914;
LAB_006578b0:
    auVar8 = auVar2;
    pbVar5 = auVar8._0_8_;
    if ((uVar6 != 1) || ((auVar8._8_4_ & 0xff) != 8)) {
LAB_00657954:
      pbVar5 = auVar8._0_8_;
      uVar6 = auVar8._8_4_;
      if ((uVar6 == 0) || ((uVar6 & 7) == 4)) {
        if (pbVar5 != (byte *)0x0) {
          *(uint *)(param_3 + 10) = uVar6 - 1;
        }
        goto LAB_00657a0c;
      }
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        uVar3 = FUN_00661fa4(param_1 + 8);
        param_2 = (byte *)FUN_006fbab8(auVar8._8_8_ & 0xffffffff,uVar3,pbVar5,param_3);
      }
      else {
        param_2 = (byte *)FUN_006fbab8(auVar8._8_8_ & 0xffffffff,
                                       (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,pbVar5,
                                       param_3);
      }
      goto joined_r0x00657984;
    }
    uVar7 = uVar7 | 1;
    param_2 = pbVar5 + 1;
    uVar4 = (ulong)(char)*pbVar5;
    if ((long)uVar4 < 0) {
      uVar4 = (ulong)(((uint)*param_2 * 0x80 + (uint)*pbVar5) - 0x80);
      if ((char)*param_2 < '\0') {
        auVar8 = FUN_0066fd14(pbVar5);
        param_2 = auVar8._0_8_;
        *(long *)(param_1 + 0x18) = auVar8._8_8_;
        goto joined_r0x00657984;
      }
      param_2 = pbVar5 + 2;
    }
    *(ulong *)(param_1 + 0x18) = uVar4;
  } while( true );
}


// ===== 00657a4c  FUN_00657a4c =====

undefined1 * FUN_00657a4c(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      uVar4 = *(ulong *)(param_1 + 0x18);
      *param_2 = 8;
      param_2[1] = (char)uVar4;
    }
    else {
      param_2 = (undefined1 *)FUN_0066d3f8(param_3);
      uVar4 = *(ulong *)(param_1 + 0x18);
      *param_2 = 8;
      param_2[1] = (char)uVar4;
    }
    if (uVar4 < 0x80) {
      param_2 = param_2 + 2;
    }
    else {
      uVar3 = uVar4 >> 7;
      param_2[1] = (byte)uVar4 | 0x80;
      param_2[2] = (char)uVar3;
      param_2 = param_2 + 3;
      puVar2 = param_2;
      if (0x3fff < uVar4) {
        do {
          uVar4 = uVar3 >> 0xe;
          uVar3 = uVar3 >> 7;
          puVar2[-1] = puVar2[-1] | 0x80;
          param_2 = puVar2 + 1;
          *puVar2 = (char)uVar3;
          puVar2 = param_2;
        } while (uVar4 != 0);
      }
    }
  }
  if ((uVar1 >> 1 & 1) != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      uVar4 = *(ulong *)(param_1 + 0x20);
      *param_2 = 0x10;
      param_2[1] = (char)uVar4;
    }
    else {
      param_2 = (undefined1 *)FUN_0066d3f8(param_3);
      uVar4 = *(ulong *)(param_1 + 0x20);
      *param_2 = 0x10;
      param_2[1] = (char)uVar4;
    }
    if (uVar4 < 0x80) {
      param_2 = param_2 + 2;
    }
    else {
      uVar3 = uVar4 >> 7;
      param_2[1] = (byte)uVar4 | 0x80;
      param_2[2] = (char)uVar3;
      param_2 = param_2 + 3;
      puVar2 = param_2;
      if (0x3fff < uVar4) {
        do {
          uVar4 = uVar3 >> 0xe;
          uVar3 = uVar3 >> 7;
          puVar2[-1] = puVar2[-1] | 0x80;
          param_2 = puVar2 + 1;
          *puVar2 = (char)uVar3;
          puVar2 = param_2;
        } while (uVar4 != 0);
      }
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    puVar2 = (undefined1 *)
             FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
    return puVar2;
  }
  return param_2;
}


// ===== 00657bcc  FUN_00657bcc =====

void FUN_00657bcc(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (LZCOUNT(*(ulong *)(param_1 + 0x18) | 1) ^ 0x3fU) * 9 + 0x89 >> 6;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar2 = uVar2 + ((LZCOUNT(*(ulong *)(param_1 + 0x20) | 1) ^ 0x3fU) * 9 + 0x89 >> 6);
    }
    FUN_006e5694(param_1,uVar2,param_1 + 0x14);
    return;
  }
  FUN_006e5694(param_1,0,param_1 + 0x14);
  return;
}


// ===== 00657c38  FUN_00657c38 =====

void FUN_00657c38(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  }
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 00657c84  FUN_00657c84 =====

undefined ** FUN_00657c84(void)

{
  return &PTR_FUN_00798c10;
}


// ===== 00657c90  FUN_00657c90 =====

undefined8 FUN_00657c90(void)

{
  return 1;
}


// ===== 00657c98  FUN_00657c98 =====

void FUN_00657c98(void)

{
  FUN_00684dd0(FUN_0064dd54,&DAT_007ae908,&DAT_007ae990);
  return;
}


// ===== 00657cb0  FUN_00657cb0 =====

void FUN_00657cb0(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_007a2fa0;
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = uVar1;
  param_1[5] = 0;
  param_1[6] = param_2;
  param_1[7] = 0;
  param_1[8] = param_2;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = param_2;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = param_2;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = param_2;
  param_1[0x12] = 0;
  param_1[0x13] = param_2;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = param_2;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = param_2;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  puVar2 = PTR_DAT_007a2ea0;
  param_1[0x1f] = 0;
  param_1[0x1b] = (long)puVar2;
  param_1[0x1c] = (long)puVar2;
  param_1[0x1d] = (long)puVar2;
  return;
}


// ===== 00657d44  FUN_00657d44 =====

void FUN_00657d44(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  void *pvVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  puVar9 = param_1 + 1;
  *puVar9 = 0;
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  iVar2 = *(int *)(param_2 + 0x18);
  *param_1 = &PTR_FUN_007982d0;
  if (iVar2 != 0) {
                    /* try { // try from 00657da0 to 00657da7 has its CatchHandler @ 00658220 */
    FUN_006741e8(param_1 + 3);
    pvVar6 = *(void **)(param_2 + 0x20);
    *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + *(int *)(param_2 + 0x18);
    memcpy((void *)param_1[4],pvVar6,(long)*(int *)(param_2 + 0x18) << 3);
  }
  param_1[5] = 0;
  param_1[6] = 0;
  if (*(int *)(param_2 + 0x28) != 0) {
                    /* try { // try from 00657ddc to 00657de3 has its CatchHandler @ 006581ac */
    FUN_00674a70(param_1 + 5);
    pvVar6 = *(void **)(param_2 + 0x30);
    *(int *)(param_1 + 5) = *(int *)(param_1 + 5) + *(int *)(param_2 + 0x28);
    memcpy((void *)param_1[6],pvVar6,(long)*(int *)(param_2 + 0x28) << 2);
  }
  param_1[7] = 0;
  param_1[8] = 0;
  if (*(int *)(param_2 + 0x38) != 0) {
                    /* try { // try from 00657e18 to 00657e1f has its CatchHandler @ 006581a0 */
    FUN_00673968(param_1 + 7);
    pvVar6 = *(void **)(param_2 + 0x40);
    *(int *)(param_1 + 7) = *(int *)(param_1 + 7) + *(int *)(param_2 + 0x38);
    memcpy((void *)param_1[8],pvVar6,(long)*(int *)(param_2 + 0x38) << 2);
  }
  puVar12 = param_1 + 10;
  *puVar12 = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  iVar2 = *(int *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 9) = 0;
  if (iVar2 != 0) {
    lVar8 = *(long *)(param_2 + 0x60);
                    /* try { // try from 00657e64 to 00657e93 has its CatchHandler @ 006581f0 */
    uVar5 = FUN_00675710(puVar12,iVar2);
    FUN_005d663c(puVar12,uVar5,lVar8 + 8,iVar2,*(int *)param_1[0xc] - *(int *)(param_1 + 0xb));
    iVar3 = *(int *)param_1[0xc];
    iVar2 = *(int *)(param_1 + 0xb) + iVar2;
    *(int *)(param_1 + 0xb) = iVar2;
    if (iVar3 < iVar2) {
      *(int *)param_1[0xc] = iVar2;
    }
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  if (*(int *)(param_2 + 0x68) != 0) {
                    /* try { // try from 00657ec4 to 00657ecb has its CatchHandler @ 00658194 */
    FUN_006741e8(param_1 + 0xd);
    pvVar6 = *(void **)(param_2 + 0x70);
    *(int *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) + *(int *)(param_2 + 0x68);
    memcpy((void *)param_1[0xe],pvVar6,(long)*(int *)(param_2 + 0x68) << 3);
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  iVar2 = *(int *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (iVar2 != 0) {
                    /* try { // try from 00657f04 to 00657f0b has its CatchHandler @ 00658188 */
    FUN_00674eb0(param_1 + 0x10);
    pvVar6 = *(void **)(param_2 + 0x88);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + *(int *)(param_2 + 0x80);
    memcpy((void *)param_1[0x11],pvVar6,(long)*(int *)(param_2 + 0x80) << 3);
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  if (*(int *)(param_2 + 0x90) != 0) {
                    /* try { // try from 00657f40 to 00657f47 has its CatchHandler @ 0065817c */
    FUN_0067462c(param_1 + 0x12);
    pvVar6 = *(void **)(param_2 + 0x98);
    *(int *)(param_1 + 0x12) = *(int *)(param_1 + 0x12) + *(int *)(param_2 + 0x90);
    memcpy((void *)param_1[0x13],pvVar6,(long)*(int *)(param_2 + 0x90) << 3);
  }
  puVar12 = param_1 + 0x15;
  *puVar12 = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  iVar2 = *(int *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (iVar2 != 0) {
    lVar8 = *(long *)(param_2 + 0xb8);
                    /* try { // try from 00657f8c to 00657fbb has its CatchHandler @ 006581c4 */
    uVar5 = FUN_00675710(puVar12,iVar2);
    FUN_0066251c(puVar12,uVar5,lVar8 + 8,iVar2,*(int *)param_1[0x17] - *(int *)(param_1 + 0x16));
    iVar3 = *(int *)param_1[0x17];
    iVar2 = *(int *)(param_1 + 0x16) + iVar2;
    *(int *)(param_1 + 0x16) = iVar2;
    if (iVar3 < iVar2) {
      *(int *)param_1[0x17] = iVar2;
    }
  }
  puVar12 = param_1 + 0x18;
  *puVar12 = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  iVar2 = *(int *)(param_2 + 200);
  if (iVar2 != 0) {
    lVar8 = *(long *)(param_2 + 0xd0);
                    /* try { // try from 00657ff8 to 00658027 has its CatchHandler @ 006581b4 */
    uVar5 = FUN_00675710(puVar12,iVar2);
    FUN_0066251c(puVar12,uVar5,lVar8 + 8,iVar2,*(int *)param_1[0x1a] - *(int *)(param_1 + 0x19));
    iVar3 = *(int *)param_1[0x1a];
    iVar2 = *(int *)(param_1 + 0x19) + iVar2;
    *(int *)(param_1 + 0x19) = iVar2;
    if (iVar3 < iVar2) {
      *(int *)param_1[0x1a] = iVar2;
    }
  }
  puVar11 = param_1 + 0x1b;
  param_1[0x1c] = 0;
  *puVar11 = 0;
  puVar12 = param_1 + 0x1d;
  param_1[0x1e] = 0;
  *puVar12 = 0;
  param_1[0x1f] = 0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
                    /* try { // try from 00658070 to 0065810f has its CatchHandler @ 00658220 */
    FUN_006621e0(puVar9,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  }
  uVar4 = *(uint *)(param_2 + 0x10);
  *puVar11 = &DAT_007aea80;
  if ((uVar4 & 1) != 0) {
    puVar7 = (ulong *)(*puVar9 & 0xfffffffffffffffc);
    if ((*puVar9 & 1) != 0) {
      puVar7 = (ulong *)*puVar7;
    }
    FUN_006636d4(puVar11,*(ulong *)(param_2 + 0xd8) & 0xfffffffffffffffc,puVar7);
    uVar4 = *(uint *)(param_2 + 0x10);
  }
  param_1[0x1c] = &DAT_007aea80;
  if ((uVar4 >> 1 & 1) != 0) {
    puVar7 = (ulong *)(*puVar9 & 0xfffffffffffffffc);
    if ((*puVar9 & 1) != 0) {
      puVar7 = (ulong *)*puVar7;
    }
    FUN_006636d4(param_1 + 0x1c,*(ulong *)(param_2 + 0xe0) & 0xfffffffffffffffc,puVar7);
    uVar4 = *(uint *)(param_2 + 0x10);
  }
  *puVar12 = &DAT_007aea80;
  if ((uVar4 >> 2 & 1) != 0) {
    puVar7 = (ulong *)(*puVar9 & 0xfffffffffffffffc);
    if ((*puVar9 & 1) != 0) {
      puVar7 = (ulong *)*puVar7;
    }
    FUN_006636d4(puVar12,*(ulong *)(param_2 + 0xe8) & 0xfffffffffffffffc,puVar7);
    uVar4 = *(uint *)(param_2 + 0x10);
  }
  if ((uVar4 >> 3 & 1) != 0) {
    uVar10 = *(undefined8 *)(param_2 + 0xf0);
    uVar5 = FUN_00759c3c(0x28);
                    /* try { // try from 00658110 to 0065811b has its CatchHandler @ 00658160 */
    FUN_0065770c(uVar5,uVar10);
    param_1[0x1e] = uVar5;
  }
  param_1[0x1f] = *(undefined8 *)(param_2 + 0xf8);
  return;
}


// ===== 00658234  FUN_00658234 =====

void FUN_00658234(undefined8 *param_1)

{
  void *__ptr;
  ulong uVar1;
  
  if ((param_1[1] & 1) == 0) {
    uVar1 = param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 00658254 to 00658263 has its CatchHandler @ 006582a8 */
    uVar1 = FUN_00662218();
  }
  if (uVar1 == 0) {
    FUN_006582ac(param_1);
  }
  *param_1 = &PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) &&
     (__ptr = (void *)(param_1[1] + -2), __ptr != (void *)0x0)) {
    FUN_00662da0(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 006582ac  FUN_006582ac =====

void FUN_006582ac(undefined **param_1)

{
  undefined *__ptr;
  
  FUN_006742e4(param_1 + 3);
  FUN_00674b68(param_1 + 5);
  FUN_00673a60(param_1 + 7);
  FUN_00675290(param_1 + 10);
  FUN_006742e4(param_1 + 0xd);
  FUN_00674fac(param_1 + 0x10);
  FUN_00674728(param_1 + 0x12);
  if ((param_1[0x17] != (undefined *)0x0) && (param_1[0x15] == (undefined *)0x0)) {
                    /* try { // try from 00658308 to 0065830b has its CatchHandler @ 0065837c */
    FUN_00675910();
  }
  if ((param_1[0x1a] != (undefined *)0x0) && (param_1[0x18] == (undefined *)0x0)) {
                    /* try { // try from 00658320 to 00658323 has its CatchHandler @ 00658378 */
    FUN_00675910();
  }
  FUN_00663a20(param_1 + 0x1b);
  FUN_00663a20(param_1 + 0x1c);
  FUN_00663a20(param_1 + 0x1d);
  if ((param_1 != &PTR_PTR_FUN_007a9cf0) && (__ptr = param_1[0x1e], __ptr != (undefined *)0x0)) {
    FUN_00657784(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 00658380  FUN_00658380 =====

void FUN_00658380(void *param_1)

{
  FUN_00658234();
  free(param_1);
  return;
}


// ===== 006583a4  FUN_006583a4 =====

void FUN_006583a4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// ===== 006583ac  FUN_006583ac =====

byte * FUN_006583ac(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  uint uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  do {
    if ((byte *)*param_3 <= param_2) {
      iVar1 = (int)param_2 - *(int *)(param_3 + 1);
      if (*(int *)((long)param_3 + 0x1c) == iVar1) {
        pbVar4 = (byte *)0x0;
        if (param_3[2] != 0 || iVar1 < 1) {
          pbVar4 = param_2;
        }
        goto LAB_00658b44;
      }
      auVar7 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar7._0_8_;
      pbVar4 = param_2;
      if ((auVar7 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_00658b44;
    }
    pbVar4 = param_2 + 1;
    uVar5 = (uint)*param_2;
    if ((char)*param_2 < '\0') {
      uVar5 = (uVar5 + (uint)*pbVar4 * 0x80) - 0x80;
      if (-1 < (char)*pbVar4) {
        pbVar4 = param_2 + 2;
        goto LAB_00658458;
      }
      auVar7 = FUN_0066fe50();
      uVar5 = (uint)(auVar7._8_8_ >> 3) & 0x1fffffff;
    }
    else {
LAB_00658458:
      auVar7._8_4_ = uVar5;
      auVar7._0_8_ = pbVar4;
      auVar7._12_4_ = 0;
      uVar5 = uVar5 >> 3;
    }
    pbVar4 = auVar7._0_8_;
    if (uVar5 - 1 < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x00658478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pbVar4 = (byte *)(*(code *)(&UNK_0065847c +
                                 (ulong)*(ushort *)(&DAT_0020f3f6 + (ulong)(uVar5 - 1) * 2) * 4))();
      return pbVar4;
    }
    uVar5 = auVar7._8_4_;
    if ((uVar5 == 0) || ((uVar5 & 7) == 4)) {
      if (pbVar4 != (byte *)0x0) {
        *(uint *)(param_3 + 10) = uVar5 - 1;
      }
      goto LAB_00658b44;
    }
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar3 = FUN_00661fa4(param_1 + 8);
    }
    else {
      lVar3 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8;
    }
    param_2 = (byte *)FUN_006fbab8(auVar7._8_8_ & 0xffffffff,lVar3,pbVar4,param_3);
  } while (param_2 != (byte *)0x0);
  pbVar4 = (byte *)0x0;
LAB_00658b44:
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  if (*(long *)(lVar2 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pbVar4;
}


// ===== 00658ba4  FUN_00658ba4 =====

ulong FUN_00658ba4(long *param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined1 auVar4 [16];
  
  pbVar3 = (byte *)*param_1;
  bVar2 = *pbVar3;
  if (-1 < (char)bVar2) {
    *param_1 = (long)(pbVar3 + 1);
    return (ulong)(uint)bVar2;
  }
  bVar1 = pbVar3[1];
  if (-1 < (char)bVar1) {
    *param_1 = (long)(pbVar3 + 2);
    return (ulong)(((uint)bVar2 + (uint)bVar1 * 0x80) - 0x80);
  }
  auVar4 = FUN_0066fc04();
  *param_1 = auVar4._0_8_;
  return auVar4._8_8_ & 0xffffffff;
}


// ===== 00658c24  FUN_00658c24 =====

void FUN_00658c24(undefined4 param_1,long param_2)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(param_2 + 0x28);
  uVar1 = *puVar2;
  if (uVar1 == *(uint *)(param_2 + 0x2c)) {
    FUN_00674a70(puVar2,uVar1 + 1);
    *(undefined4 *)(*(long *)(param_2 + 0x30) + (ulong)uVar1 * 4) = param_1;
    *puVar2 = uVar1 + 1;
    return;
  }
  *(undefined4 *)(*(long *)(param_2 + 0x30) + (ulong)uVar1 * 4) = param_1;
  *puVar2 = uVar1 + 1;
  return;
}


// ===== 00658ca4  FUN_00658ca4 =====

void FUN_00658ca4(long param_1,undefined4 param_2)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(param_1 + 0x38);
  uVar1 = *puVar2;
  if (uVar1 == *(uint *)(param_1 + 0x3c)) {
    FUN_00673968(puVar2,uVar1 + 1);
    *(undefined4 *)(*(long *)(param_1 + 0x40) + (ulong)uVar1 * 4) = param_2;
    *puVar2 = uVar1 + 1;
    return;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x40) + (ulong)uVar1 * 4) = param_2;
  *puVar2 = uVar1 + 1;
  return;
}


// ===== 00658d24  FUN_00658d24 =====

void FUN_00658d24(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(param_1 + 0x68);
  uVar1 = *puVar2;
  if (uVar1 == *(uint *)(param_1 + 0x6c)) {
    FUN_006741e8(puVar2,uVar1 + 1);
    *(undefined8 *)(*(long *)(param_1 + 0x70) + (ulong)uVar1 * 8) = param_2;
    *puVar2 = uVar1 + 1;
    return;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x70) + (ulong)uVar1 * 8) = param_2;
  *puVar2 = uVar1 + 1;
  return;
}


// ===== 00658da4  FUN_00658da4 =====

void FUN_00658da4(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(param_2 + 0x80);
  uVar1 = *puVar2;
  if (uVar1 == *(uint *)(param_2 + 0x84)) {
    FUN_00674eb0(puVar2,uVar1 + 1);
    *(undefined8 *)(*(long *)(param_2 + 0x88) + (ulong)uVar1 * 8) = param_1;
    *puVar2 = uVar1 + 1;
    return;
  }
  *(undefined8 *)(*(long *)(param_2 + 0x88) + (ulong)uVar1 * 8) = param_1;
  *puVar2 = uVar1 + 1;
  return;
}


// ===== 00658e24  FUN_00658e24 =====

void FUN_00658e24(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(param_1 + 0x90);
  uVar1 = *puVar2;
  if (uVar1 == *(uint *)(param_1 + 0x94)) {
    FUN_0067462c(puVar2,uVar1 + 1);
    *(undefined8 *)(*(long *)(param_1 + 0x98) + (ulong)uVar1 * 8) = param_2;
    *puVar2 = uVar1 + 1;
    return;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x98) + (ulong)uVar1 * 8) = param_2;
  *puVar2 = uVar1 + 1;
  return;
}


// ===== 00658ea4  FUN_00658ea4 =====

byte * FUN_00658ea4(long param_1,byte *param_2,long *param_3)

{
  uint *puVar1;
  ulong *puVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  byte *pbVar12;
  uint uVar13;
  uint *puVar14;
  ulong *puVar15;
  int iVar16;
  ulong uVar17;
  size_t sVar18;
  long lVar19;
  long lVar20;
  
  uVar4 = *(uint *)(param_1 + 0x18);
  if (0 < (int)uVar4) {
    uVar17 = 0;
    do {
      if (param_2 < (byte *)*param_3) {
        uVar11 = *(ulong *)(*(long *)(param_1 + 0x20) + uVar17 * 8);
        *param_2 = 8;
        param_2[1] = (byte)uVar11;
        if (0x7f < uVar11) goto LAB_00658f14;
LAB_00658ee0:
        param_2 = param_2 + 2;
      }
      else {
        param_2 = (byte *)FUN_0066d3f8(param_3,param_2);
        uVar11 = *(ulong *)(*(long *)(param_1 + 0x20) + uVar17 * 8);
        *param_2 = 8;
        param_2[1] = (byte)uVar11;
        if (uVar11 < 0x80) goto LAB_00658ee0;
LAB_00658f14:
        uVar8 = uVar11 >> 7;
        param_2[1] = (byte)uVar11 | 0x80;
        param_2[2] = (byte)uVar8;
        param_2 = param_2 + 3;
        pbVar9 = param_2;
        if (0x3fff < uVar11) {
          do {
            uVar11 = uVar8 >> 0xe;
            uVar8 = uVar8 >> 7;
            pbVar9[-1] = pbVar9[-1] | 0x80;
            param_2 = pbVar9 + 1;
            *pbVar9 = (byte)uVar8;
            pbVar9 = param_2;
          } while (uVar11 != 0);
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar4);
  }
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 >> 4 & 1) != 0) {
    if (param_2 < (byte *)*param_3) {
      uVar13 = *(uint *)(param_1 + 0xf8);
      *param_2 = 0x10;
      param_2[1] = (byte)uVar13;
    }
    else {
      param_2 = (byte *)FUN_0066d3f8(param_3,param_2);
      uVar13 = *(uint *)(param_1 + 0xf8);
      *param_2 = 0x10;
      param_2[1] = (byte)uVar13;
    }
    if (uVar13 < 0x80) {
      param_2 = param_2 + 2;
    }
    else {
      uVar17 = (ulong)(long)(int)uVar13 >> 7;
      param_2[1] = (byte)uVar13 | 0x80;
      param_2[2] = (byte)uVar17;
      param_2 = param_2 + 3;
      pbVar9 = param_2;
      if (0x3fff < uVar13) {
        do {
          uVar11 = uVar17 >> 0xe;
          uVar17 = uVar17 >> 7;
          pbVar9[-1] = pbVar9[-1] | 0x80;
          param_2 = pbVar9 + 1;
          *pbVar9 = (byte)uVar17;
          pbVar9 = param_2;
        } while (uVar11 != 0);
      }
    }
  }
  if ((uVar4 >> 3 & 1) != 0) {
    param_2 = (byte *)FUN_00678d18(3,*(long *)(param_1 + 0xf0),
                                   *(undefined4 *)(*(long *)(param_1 + 0xf0) + 0x14),param_2,param_3
                                  );
  }
  iVar7 = *(int *)(param_1 + 0x28);
  if (iVar7 < 1) {
LAB_00659090:
    uVar13 = *(uint *)(param_1 + 0x48);
  }
  else {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_0066d3f8(param_3,param_2);
      iVar7 = *(int *)(param_1 + 0x28);
    }
    uVar13 = iVar7 << 2;
    pbVar9 = param_2 + 1;
    *param_2 = 0x22;
    uVar10 = uVar13;
    if (0x7f < uVar13) {
      do {
        param_2 = pbVar9;
        uVar5 = uVar10 >> 0xe;
        bVar6 = (byte)uVar10;
        uVar10 = uVar10 >> 7;
        pbVar9 = param_2 + 1;
        *param_2 = bVar6 | 0x80;
      } while (uVar5 != 0);
    }
    *pbVar9 = (byte)uVar10;
    param_2 = param_2 + 2;
    sVar18 = (size_t)(int)uVar13;
    if ((long)sVar18 <= *param_3 - (long)param_2) {
      memcpy(param_2,*(void **)(param_1 + 0x30),sVar18);
      param_2 = param_2 + sVar18;
      goto LAB_00659090;
    }
    param_2 = (byte *)FUN_0066d454(param_3,*(void **)(param_1 + 0x30),uVar13,param_2);
    uVar13 = *(uint *)(param_1 + 0x48);
  }
  if (0 < (int)uVar13) {
    if (param_2 < (byte *)*param_3) {
      *param_2 = 0x2a;
    }
    else {
      param_2 = (byte *)FUN_0066d3f8(param_3,param_2);
      *param_2 = 0x2a;
    }
    pbVar9 = param_2 + 1;
    if (0x7f < uVar13) {
      do {
        param_2 = pbVar9;
        uVar10 = uVar13 >> 0xe;
        bVar6 = (byte)uVar13;
        uVar13 = uVar13 >> 7;
        pbVar9 = param_2 + 1;
        *param_2 = bVar6 | 0x80;
      } while (uVar10 != 0);
    }
    *pbVar9 = (byte)uVar13;
    param_2 = param_2 + 2;
    puVar14 = *(uint **)(param_1 + 0x40);
    puVar1 = puVar14 + *(int *)(param_1 + 0x38);
    do {
      if (param_2 < (byte *)*param_3) {
        uVar13 = *puVar14;
        *param_2 = (byte)uVar13;
        if (0x7f < uVar13) goto LAB_006590fc;
LAB_006590d4:
        param_2 = param_2 + 1;
      }
      else {
        param_2 = (byte *)FUN_0066d3f8(param_3,param_2);
        uVar13 = *puVar14;
        *param_2 = (byte)uVar13;
        if (uVar13 < 0x80) goto LAB_006590d4;
LAB_006590fc:
        uVar17 = (ulong)(long)(int)uVar13 >> 7;
        *param_2 = (byte)uVar13 | 0x80;
        param_2[1] = (byte)uVar17;
        param_2 = param_2 + 2;
        pbVar9 = param_2;
        if (0x3fff < uVar13) {
          do {
            uVar11 = uVar17 >> 0xe;
            uVar17 = uVar17 >> 7;
            pbVar9[-1] = pbVar9[-1] | 0x80;
            param_2 = pbVar9 + 1;
            *pbVar9 = (byte)uVar17;
            pbVar9 = param_2;
          } while (uVar11 != 0);
        }
      }
      puVar14 = puVar14 + 1;
    } while (puVar14 < puVar1);
  }
  if (0 < (int)*(uint *)(param_1 + 0x58)) {
    lVar20 = (ulong)*(uint *)(param_1 + 0x58) * 8;
    lVar19 = 0;
    do {
      while( true ) {
        pbVar9 = *(byte **)(*(long *)(param_1 + 0x60) + lVar19 + 8);
        sVar18 = (ulong)(*pbVar9 >> 1);
        if ((*pbVar9 & 1) != 0) {
          sVar18 = *(size_t *)(pbVar9 + 8);
        }
        if ((0x7f < (long)sVar18) || ((*param_3 - (long)param_2) + 0xe < (long)sVar18)) break;
        *param_2 = 0x32;
        param_2[1] = (byte)sVar18;
        pbVar12 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar12 = pbVar9 + 1;
        }
        memcpy(param_2 + 2,pbVar12,sVar18);
        param_2 = param_2 + 2 + sVar18;
        lVar19 = lVar19 + 8;
        if (lVar20 - lVar19 == 0) goto LAB_00659258;
      }
      param_2 = (byte *)FUN_0066d8d0(param_3,6);
      lVar19 = lVar19 + 8;
    } while (lVar20 - lVar19 != 0);
  }
LAB_00659258:
  uVar13 = *(uint *)(param_1 + 0x78);
  if (0 < (int)uVar13) {
    if (param_2 < (byte *)*param_3) {
      *param_2 = 0x3a;
    }
    else {
      param_2 = (byte *)FUN_0066d3f8(param_3,param_2);
      *param_2 = 0x3a;
    }
    pbVar9 = param_2 + 1;
    if (0x7f < uVar13) {
      do {
        param_2 = pbVar9;
        uVar10 = uVar13 >> 0xe;
        bVar6 = (byte)uVar13;
        uVar13 = uVar13 >> 7;
        pbVar9 = param_2 + 1;
        *param_2 = bVar6 | 0x80;
      } while (uVar10 != 0);
    }
    *pbVar9 = (byte)uVar13;
    param_2 = param_2 + 2;
    puVar15 = *(ulong **)(param_1 + 0x70);
    puVar2 = puVar15 + *(int *)(param_1 + 0x68);
    do {
      if (param_2 < (byte *)*param_3) {
        uVar17 = *puVar15;
        *param_2 = (byte)uVar17;
        if (0x7f < uVar17) goto LAB_006592c4;
LAB_0065929c:
        param_2 = param_2 + 1;
      }
      else {
        param_2 = (byte *)FUN_0066d3f8(param_3,param_2);
        uVar17 = *puVar15;
        *param_2 = (byte)uVar17;
        if (uVar17 < 0x80) goto LAB_0065929c;
LAB_006592c4:
        uVar11 = uVar17 >> 7;
        *param_2 = (byte)uVar17 | 0x80;
        param_2[1] = (byte)uVar11;
        param_2 = param_2 + 2;
        pbVar9 = param_2;
        if (0x3fff < uVar17) {
          do {
            uVar17 = uVar11 >> 0xe;
            uVar11 = uVar11 >> 7;
            pbVar9[-1] = pbVar9[-1] | 0x80;
            param_2 = pbVar9 + 1;
            *pbVar9 = (byte)uVar11;
            pbVar9 = param_2;
          } while (uVar17 != 0);
        }
      }
      puVar15 = puVar15 + 1;
    } while (puVar15 < puVar2);
  }
  if ((uVar4 & 1) == 0) {
joined_r0x0065962c:
    if ((uVar4 >> 1 & 1) != 0) goto LAB_006593ac;
LAB_0065932c:
    iVar7 = *(int *)(param_1 + 0x80);
  }
  else {
    pbVar9 = (byte *)(*(ulong *)(param_1 + 0xd8) & 0xfffffffffffffffc);
    sVar18 = (ulong)(*pbVar9 >> 1);
    if ((*pbVar9 & 1) != 0) {
      sVar18 = *(size_t *)(pbVar9 + 8);
    }
    if ((0x7f < (long)sVar18) || ((*param_3 - (long)param_2) + 0xe < (long)sVar18)) {
      param_2 = (byte *)FUN_0066d778(param_3,8);
      goto joined_r0x0065962c;
    }
    param_2[1] = (byte)sVar18;
    *param_2 = 0x42;
    pvVar3 = (void *)((ulong)pbVar9 | 1);
    if ((*pbVar9 & 1) != 0) {
      pvVar3 = *(void **)(pbVar9 + 0x10);
    }
    memcpy(param_2 + 2,pvVar3,sVar18);
    param_2 = param_2 + 2 + sVar18;
    if ((uVar4 >> 1 & 1) == 0) goto LAB_0065932c;
LAB_006593ac:
    pbVar9 = (byte *)(*(ulong *)(param_1 + 0xe0) & 0xfffffffffffffffc);
    sVar18 = (ulong)(*pbVar9 >> 1);
    if ((*pbVar9 & 1) != 0) {
      sVar18 = *(size_t *)(pbVar9 + 8);
    }
    if (((long)sVar18 < 0x80) && ((long)sVar18 <= (*param_3 - (long)param_2) + 0xe)) {
      param_2[1] = (byte)sVar18;
      *param_2 = 0x4a;
      pbVar12 = *(byte **)(pbVar9 + 0x10);
      if ((*pbVar9 & 1) == 0) {
        pbVar12 = pbVar9 + 1;
      }
      memcpy(param_2 + 2,pbVar12,sVar18);
      param_2 = param_2 + 2 + sVar18;
      iVar7 = *(int *)(param_1 + 0x80);
    }
    else {
      param_2 = (byte *)FUN_0066d778(param_3,9);
      iVar7 = *(int *)(param_1 + 0x80);
    }
  }
  if (0 < iVar7) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_0066d3f8(param_3,param_2);
      iVar7 = *(int *)(param_1 + 0x80);
    }
    uVar13 = iVar7 << 3;
    pbVar9 = param_2 + 1;
    *param_2 = 0x52;
    uVar10 = uVar13;
    if (0x7f < uVar13) {
      do {
        param_2 = pbVar9;
        uVar5 = uVar10 >> 0xe;
        bVar6 = (byte)uVar10;
        uVar10 = uVar10 >> 7;
        pbVar9 = param_2 + 1;
        *param_2 = bVar6 | 0x80;
      } while (uVar5 != 0);
    }
    *pbVar9 = (byte)uVar10;
    param_2 = param_2 + 2;
    sVar18 = (size_t)(int)uVar13;
    if (*param_3 - (long)param_2 < (long)sVar18) {
      param_2 = (byte *)FUN_0066d454(param_3,*(void **)(param_1 + 0x88),uVar13,param_2);
    }
    else {
      memcpy(param_2,*(void **)(param_1 + 0x88),sVar18);
      param_2 = param_2 + sVar18;
    }
  }
  uVar13 = *(uint *)(param_1 + 0xa0);
  if (0 < (int)uVar13) {
    if (param_2 < (byte *)*param_3) {
      *param_2 = 0x5a;
    }
    else {
      param_2 = (byte *)FUN_0066d3f8(param_3,param_2);
      *param_2 = 0x5a;
    }
    pbVar9 = param_2 + 1;
    if (0x7f < uVar13) {
      do {
        param_2 = pbVar9;
        uVar10 = uVar13 >> 0xe;
        bVar6 = (byte)uVar13;
        uVar13 = uVar13 >> 7;
        pbVar9 = param_2 + 1;
        *param_2 = bVar6 | 0x80;
      } while (uVar10 != 0);
    }
    *pbVar9 = (byte)uVar13;
    param_2 = param_2 + 2;
    puVar15 = *(ulong **)(param_1 + 0x98);
    puVar2 = puVar15 + *(int *)(param_1 + 0x90);
    do {
      if (param_2 < (byte *)*param_3) {
        uVar17 = *puVar15;
        *param_2 = (byte)uVar17;
        if (0x7f < uVar17) goto LAB_006594e4;
LAB_006594bc:
        param_2 = param_2 + 1;
      }
      else {
        param_2 = (byte *)FUN_0066d3f8(param_3,param_2);
        uVar17 = *puVar15;
        *param_2 = (byte)uVar17;
        if (uVar17 < 0x80) goto LAB_006594bc;
LAB_006594e4:
        uVar11 = uVar17 >> 7;
        *param_2 = (byte)uVar17 | 0x80;
        param_2[1] = (byte)uVar11;
        param_2 = param_2 + 2;
        pbVar9 = param_2;
        if (0x3fff < uVar17) {
          do {
            uVar17 = uVar11 >> 0xe;
            uVar11 = uVar11 >> 7;
            pbVar9[-1] = pbVar9[-1] | 0x80;
            param_2 = pbVar9 + 1;
            *pbVar9 = (byte)uVar11;
            pbVar9 = param_2;
          } while (uVar17 != 0);
        }
      }
      puVar15 = puVar15 + 1;
    } while (puVar15 < puVar2);
  }
  if ((uVar4 >> 2 & 1) != 0) {
    pbVar9 = (byte *)(*(ulong *)(param_1 + 0xe8) & 0xfffffffffffffffc);
    sVar18 = (ulong)(*pbVar9 >> 1);
    if ((*pbVar9 & 1) != 0) {
      sVar18 = *(size_t *)(pbVar9 + 8);
    }
    if ((0x7f < (long)sVar18) || ((*param_3 - (long)param_2) + 0xe < (long)sVar18)) {
      param_2 = (byte *)FUN_0066d778(param_3,0xc);
      iVar7 = *(int *)(param_1 + 0xb0);
      goto joined_r0x006595b8;
    }
    param_2[1] = (byte)sVar18;
    *param_2 = 0x62;
    pvVar3 = (void *)((ulong)pbVar9 | 1);
    if ((*pbVar9 & 1) != 0) {
      pvVar3 = *(void **)(pbVar9 + 0x10);
    }
    memcpy(param_2 + 2,pvVar3,sVar18);
    param_2 = param_2 + 2 + sVar18;
  }
  iVar7 = *(int *)(param_1 + 0xb0);
joined_r0x006595b8:
  if (iVar7 != 0) {
    iVar16 = 0;
    do {
      lVar19 = *(long *)(*(long *)(param_1 + 0xb8) + (long)iVar16 * 8 + 8);
      param_2 = (byte *)FUN_00678d18(0xd,lVar19,*(undefined4 *)(lVar19 + 0x14),param_2,param_3);
      iVar16 = iVar16 + 1;
    } while (iVar7 != iVar16);
  }
  if ((uVar4 >> 5 & 1) != 0) {
    if (param_2 < (byte *)*param_3) {
      uVar4 = *(uint *)(param_1 + 0xfc);
      *param_2 = 0x70;
      param_2[1] = (byte)uVar4;
    }
    else {
      param_2 = (byte *)FUN_0066d3f8(param_3,param_2);
      uVar4 = *(uint *)(param_1 + 0xfc);
      *param_2 = 0x70;
      param_2[1] = (byte)uVar4;
    }
    if (uVar4 < 0x80) {
      param_2 = param_2 + 2;
    }
    else {
      uVar17 = (ulong)(long)(int)uVar4 >> 7;
      param_2[1] = (byte)uVar4 | 0x80;
      param_2[2] = (byte)uVar17;
      param_2 = param_2 + 3;
      pbVar9 = param_2;
      if (0x3fff < uVar4) {
        do {
          uVar11 = uVar17 >> 0xe;
          uVar17 = uVar17 >> 7;
          pbVar9[-1] = pbVar9[-1] | 0x80;
          param_2 = pbVar9 + 1;
          *pbVar9 = (byte)uVar17;
          pbVar9 = param_2;
        } while (uVar11 != 0);
      }
    }
  }
  iVar7 = *(int *)(param_1 + 200);
  if (iVar7 != 0) {
    iVar16 = 0;
    do {
      lVar19 = *(long *)(*(long *)(param_1 + 0xd0) + (long)iVar16 * 8 + 8);
      param_2 = (byte *)FUN_00678d18(0x10,lVar19,*(undefined4 *)(lVar19 + 0x14),param_2,param_3);
      iVar16 = iVar16 + 1;
    } while (iVar7 != iVar16);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  pbVar9 = (byte *)FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
  return pbVar9;
}


// ===== 0065985c  FUN_0065985c =====

undefined4 FUN_0065985c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 00659864  FUN_00659864 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00659864(long param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  long *plVar13;
  
  lVar6 = FUN_006793b8(param_1 + 0x18);
  uVar2 = *(uint *)(param_1 + 0x28);
  lVar6 = lVar6 + (ulong)*(uint *)(param_1 + 0x18);
  if (uVar2 != 0) {
    lVar6 = lVar6 + ((LZCOUNT(-((ulong)(uVar2 >> 0x1d) & 1) & 0xffffffff00000000 |
                              ((ulong)uVar2 & 0x3fffffff) << 2 | 1) ^ 0x3fU) * 9 + 0x49 >> 6) + 1;
  }
  lVar6 = lVar6 + (ulong)uVar2 * 4;
  lVar7 = FUN_006792fc(param_1 + 0x38);
  *(int *)(param_1 + 0x48) = (int)lVar7;
  uVar10 = (ulong)*(uint *)(param_1 + 0x58);
  if (lVar7 != 0) {
    lVar6 = lVar6 + ((LZCOUNT((long)(int)lVar7 | 1) ^ 0x3fU) * 9 + 0x49 >> 6) + 1;
  }
  lVar6 = lVar6 + lVar7 + uVar10;
  if (0 < (int)*(uint *)(param_1 + 0x58)) {
    puVar12 = *(undefined8 **)(param_1 + 0x60);
    do {
      puVar12 = puVar12 + 1;
      bVar4 = *(byte *)*puVar12;
      uVar1 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar1 = *(ulong *)((byte *)*puVar12 + 8);
      }
      uVar10 = uVar10 - 1;
      lVar6 = uVar1 + lVar6 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (uVar10 != 0);
  }
  lVar7 = FUN_006793b8(param_1 + 0x68);
  *(int *)(param_1 + 0x78) = (int)lVar7;
  uVar2 = *(uint *)(param_1 + 0x80);
  if (lVar7 != 0) {
    lVar6 = lVar6 + ((LZCOUNT((long)(int)lVar7 | 1) ^ 0x3fU) * 9 + 0x49 >> 6) + 1;
  }
  lVar6 = lVar6 + lVar7;
  if (uVar2 != 0) {
    lVar6 = lVar6 + ((LZCOUNT(-((ulong)(uVar2 >> 0x1c) & 1) & 0xffffffff00000000 |
                              ((ulong)uVar2 & 0x1fffffff) << 3 | 1) ^ 0x3fU) * 9 + 0x49 >> 6) + 1;
  }
  lVar6 = lVar6 + (ulong)uVar2 * 8;
  lVar7 = FUN_00679474(param_1 + 0x90);
  *(int *)(param_1 + 0xa0) = (int)lVar7;
  iVar5 = *(int *)(param_1 + 0xb0);
  if (lVar7 != 0) {
    lVar6 = lVar6 + ((LZCOUNT((long)(int)lVar7 | 1) ^ 0x3fU) * 9 + 0x49 >> 6) + 1;
  }
  lVar6 = lVar6 + lVar7 + iVar5;
  plVar13 = (long *)0x0;
  if (*(long *)(param_1 + 0xb8) != 0) {
    plVar13 = (long *)(*(long *)(param_1 + 0xb8) + 8);
  }
  if (iVar5 != 0) {
    lVar7 = (long)iVar5 << 3;
    do {
      lVar8 = *plVar13;
      uVar2 = *(uint *)(lVar8 + 0x10);
      if ((uVar2 & 3) == 0) {
        lVar9 = 0;
      }
      else {
        if ((uVar2 & 1) == 0) {
          lVar9 = 0;
        }
        else {
          pbVar11 = (byte *)(*(ulong *)(lVar8 + 0x18) & 0xfffffffffffffffc);
          bVar4 = *pbVar11;
          uVar10 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            uVar10 = *(ulong *)(pbVar11 + 8);
          }
          lVar9 = uVar10 + (((uint)LZCOUNT((uint)uVar10 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
        }
        if ((uVar2 >> 1 & 1) != 0) {
          pbVar11 = (byte *)(*(ulong *)(lVar8 + 0x20) & 0xfffffffffffffffc);
          bVar4 = *pbVar11;
          uVar10 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            uVar10 = *(ulong *)(pbVar11 + 8);
          }
          lVar9 = lVar9 + uVar10 + (ulong)(((uint)LZCOUNT((uint)uVar10 | 1) ^ 0x1f) * 9 + 0x49 >> 6)
                  + 1;
        }
      }
      lVar8 = FUN_006e5694(lVar8,lVar9,lVar8 + 0x14);
      lVar7 = lVar7 + -8;
      plVar13 = plVar13 + 1;
      lVar6 = lVar8 + lVar6 + (ulong)(((uint)LZCOUNT((uint)lVar8 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (lVar7 != 0);
  }
  iVar5 = *(int *)(param_1 + 200);
  lVar6 = lVar6 + (long)iVar5 * 2;
  plVar13 = (long *)0x0;
  if (*(long *)(param_1 + 0xd0) != 0) {
    plVar13 = (long *)(*(long *)(param_1 + 0xd0) + 8);
  }
  if (iVar5 != 0) {
    lVar7 = (long)iVar5 << 3;
    do {
      lVar8 = *plVar13;
      uVar2 = *(uint *)(lVar8 + 0x10);
      if ((uVar2 & 3) == 0) {
        lVar9 = 0;
      }
      else {
        if ((uVar2 & 1) == 0) {
          lVar9 = 0;
        }
        else {
          pbVar11 = (byte *)(*(ulong *)(lVar8 + 0x18) & 0xfffffffffffffffc);
          bVar4 = *pbVar11;
          uVar10 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            uVar10 = *(ulong *)(pbVar11 + 8);
          }
          lVar9 = uVar10 + (((uint)LZCOUNT((uint)uVar10 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
        }
        if ((uVar2 >> 1 & 1) != 0) {
          pbVar11 = (byte *)(*(ulong *)(lVar8 + 0x20) & 0xfffffffffffffffc);
          bVar4 = *pbVar11;
          uVar10 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            uVar10 = *(ulong *)(pbVar11 + 8);
          }
          lVar9 = lVar9 + uVar10 + (ulong)(((uint)LZCOUNT((uint)uVar10 | 1) ^ 0x1f) * 9 + 0x49 >> 6)
                  + 1;
        }
      }
      lVar8 = FUN_006e5694(lVar8,lVar9,lVar8 + 0x14);
      lVar7 = lVar7 + -8;
      plVar13 = plVar13 + 1;
      lVar6 = lVar8 + lVar6 + (ulong)(((uint)LZCOUNT((uint)lVar8 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (lVar7 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 0x3f) != 0) {
    if ((uVar2 & 1) != 0) {
      pbVar11 = (byte *)(*(ulong *)(param_1 + 0xd8) & 0xfffffffffffffffc);
      bVar4 = *pbVar11;
      uVar10 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar10 = *(ulong *)(pbVar11 + 8);
      }
      lVar6 = lVar6 + uVar10 + (ulong)(((uint)LZCOUNT((uint)uVar10 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1
      ;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      pbVar11 = (byte *)(*(ulong *)(param_1 + 0xe0) & 0xfffffffffffffffc);
      bVar4 = *pbVar11;
      uVar10 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar10 = *(ulong *)(pbVar11 + 8);
      }
      lVar6 = lVar6 + uVar10 + (ulong)(((uint)LZCOUNT((uint)uVar10 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1
      ;
    }
    if ((uVar2 >> 2 & 1) != 0) {
      pbVar11 = (byte *)(*(ulong *)(param_1 + 0xe8) & 0xfffffffffffffffc);
      bVar4 = *pbVar11;
      uVar10 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar10 = *(ulong *)(pbVar11 + 8);
      }
      lVar6 = lVar6 + uVar10 + (ulong)(((uint)LZCOUNT((uint)uVar10 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1
      ;
    }
    if ((uVar2 >> 3 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0xf0);
      uVar3 = *(uint *)(lVar7 + 0x10);
      if ((uVar3 & 3) == 0) {
        uVar10 = 0;
      }
      else {
        if ((uVar3 & 1) == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = (LZCOUNT(*(ulong *)(lVar7 + 0x18) | 1) ^ 0x3fU) * 9 + 0x89 >> 6;
        }
        if ((uVar3 >> 1 & 1) != 0) {
          uVar10 = uVar10 + ((LZCOUNT(*(ulong *)(lVar7 + 0x20) | 1) ^ 0x3fU) * 9 + 0x89 >> 6);
        }
      }
      lVar7 = FUN_006e5694(lVar7,uVar10,lVar7 + 0x14);
      lVar6 = lVar6 + lVar7 + (ulong)(((uint)LZCOUNT((uint)lVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 4 & 1) != 0) {
      lVar6 = lVar6 + ((LZCOUNT((long)*(int *)(param_1 + 0xf8) | 1) ^ 0x3fU) * 9 + 0x89 >> 6);
    }
    if ((uVar2 >> 5 & 1) != 0) {
      lVar6 = lVar6 + ((LZCOUNT((long)*(int *)(param_1 + 0xfc) | 1) ^ 0x3fU) * 9 + 0x49 >> 6) + 1;
    }
  }
  FUN_006e5694(param_1,lVar6,param_1 + 0x14);
  return;
}


// ===== 00659dc0  FUN_00659dc0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00659dc0(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong *puVar7;
  void *pvVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    piVar10 = (int *)(param_1 + 0x18);
    iVar5 = *piVar10;
    FUN_006741e8(piVar10,iVar5 + *(int *)(param_2 + 0x18));
    pvVar8 = *(void **)(param_2 + 0x20);
    *piVar10 = *piVar10 + *(int *)(param_2 + 0x18);
    memcpy((void *)(*(long *)(param_1 + 0x20) + (long)iVar5 * 8),pvVar8,
           (long)*(int *)(param_2 + 0x18) << 3);
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    piVar10 = (int *)(param_1 + 0x28);
    iVar5 = *piVar10;
    FUN_00674a70(piVar10,iVar5 + *(int *)(param_2 + 0x28));
    pvVar8 = *(void **)(param_2 + 0x30);
    *piVar10 = *piVar10 + *(int *)(param_2 + 0x28);
    memcpy((void *)(*(long *)(param_1 + 0x30) + (long)iVar5 * 4),pvVar8,
           (long)*(int *)(param_2 + 0x28) << 2);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    piVar10 = (int *)(param_1 + 0x38);
    iVar5 = *piVar10;
    FUN_00673968(piVar10,iVar5 + *(int *)(param_2 + 0x38));
    pvVar8 = *(void **)(param_2 + 0x40);
    *piVar10 = *piVar10 + *(int *)(param_2 + 0x38);
    memcpy((void *)(*(long *)(param_1 + 0x40) + (long)iVar5 * 4),pvVar8,
           (long)*(int *)(param_2 + 0x38) << 2);
  }
  iVar5 = *(int *)(param_2 + 0x58);
  if (iVar5 != 0) {
    lVar11 = *(long *)(param_2 + 0x60);
    uVar6 = FUN_00675710(param_1 + 0x50,iVar5);
    FUN_005d663c(param_1 + 0x50,uVar6,lVar11 + 8,iVar5,
                 **(int **)(param_1 + 0x60) - *(int *)(param_1 + 0x58));
    iVar2 = **(int **)(param_1 + 0x60);
    iVar5 = *(int *)(param_1 + 0x58) + iVar5;
    *(int *)(param_1 + 0x58) = iVar5;
    if (iVar2 < iVar5) {
      **(int **)(param_1 + 0x60) = iVar5;
    }
  }
  if (*(int *)(param_2 + 0x68) != 0) {
    piVar10 = (int *)(param_1 + 0x68);
    iVar5 = *piVar10;
    FUN_006741e8(piVar10,iVar5 + *(int *)(param_2 + 0x68));
    pvVar8 = *(void **)(param_2 + 0x70);
    *piVar10 = *piVar10 + *(int *)(param_2 + 0x68);
    memcpy((void *)(*(long *)(param_1 + 0x70) + (long)iVar5 * 8),pvVar8,
           (long)*(int *)(param_2 + 0x68) << 3);
  }
  if (*(int *)(param_2 + 0x80) != 0) {
    piVar10 = (int *)(param_1 + 0x80);
    iVar5 = *piVar10;
    FUN_00674eb0(piVar10,iVar5 + *(int *)(param_2 + 0x80));
    pvVar8 = *(void **)(param_2 + 0x88);
    *piVar10 = *piVar10 + *(int *)(param_2 + 0x80);
    memcpy((void *)(*(long *)(param_1 + 0x88) + (long)iVar5 * 8),pvVar8,
           (long)*(int *)(param_2 + 0x80) << 3);
  }
  if (*(int *)(param_2 + 0x90) != 0) {
    piVar10 = (int *)(param_1 + 0x90);
    iVar5 = *piVar10;
    FUN_0067462c(piVar10,iVar5 + *(int *)(param_2 + 0x90));
    pvVar8 = *(void **)(param_2 + 0x98);
    *piVar10 = *piVar10 + *(int *)(param_2 + 0x90);
    memcpy((void *)(*(long *)(param_1 + 0x98) + (long)iVar5 * 8),pvVar8,
           (long)*(int *)(param_2 + 0x90) << 3);
  }
  iVar5 = *(int *)(param_2 + 0xb0);
  if (iVar5 != 0) {
    lVar11 = *(long *)(param_2 + 0xb8);
    uVar6 = FUN_00675710(param_1 + 0xa8,iVar5);
    FUN_0066251c(param_1 + 0xa8,uVar6,lVar11 + 8,iVar5,
                 **(int **)(param_1 + 0xb8) - *(int *)(param_1 + 0xb0));
    iVar2 = **(int **)(param_1 + 0xb8);
    iVar5 = *(int *)(param_1 + 0xb0) + iVar5;
    *(int *)(param_1 + 0xb0) = iVar5;
    if (iVar2 < iVar5) {
      **(int **)(param_1 + 0xb8) = iVar5;
    }
  }
  iVar5 = *(int *)(param_2 + 200);
  if (iVar5 != 0) {
    lVar11 = *(long *)(param_2 + 0xd0);
    uVar6 = FUN_00675710(param_1 + 0xc0,iVar5);
    FUN_0066251c(param_1 + 0xc0,uVar6,lVar11 + 8,iVar5,
                 **(int **)(param_1 + 0xd0) - *(int *)(param_1 + 200));
    iVar2 = **(int **)(param_1 + 0xd0);
    iVar5 = *(int *)(param_1 + 200) + iVar5;
    *(int *)(param_1 + 200) = iVar5;
    if (iVar2 < iVar5) {
      **(int **)(param_1 + 0xd0) = iVar5;
    }
  }
  uVar3 = *(uint *)(param_2 + 0x10);
  if ((uVar3 & 0x3f) != 0) {
    if ((uVar3 & 1) != 0) {
      uVar9 = *(ulong *)(param_2 + 0xd8);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0xd8,uVar9 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0xd8,uVar9 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar3 >> 1 & 1) != 0) {
      uVar9 = *(ulong *)(param_2 + 0xe0);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0xe0,uVar9 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0xe0,uVar9 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar3 >> 2 & 1) != 0) {
      uVar9 = *(ulong *)(param_2 + 0xe8);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        FUN_006636d4(param_1 + 0xe8,uVar9 & 0xfffffffffffffffc);
      }
      else {
        FUN_006636d4(param_1 + 0xe8,uVar9 & 0xfffffffffffffffc,
                     *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      }
    }
    if ((uVar3 >> 3 & 1) != 0) {
      lVar11 = *(long *)(param_1 + 0xf0);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
      if (lVar11 == 0) {
        puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar7 = (ulong *)*puVar7;
        }
        lVar11 = FUN_006617e8(puVar7);
        *(long *)(param_1 + 0xf0) = lVar11;
      }
      ppuVar1 = &PTR_PTR_FUN_007a9cc8;
      if (*(undefined ***)(param_2 + 0xf0) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(param_2 + 0xf0);
      }
      uVar4 = *(uint *)(ppuVar1 + 2);
      if ((uVar4 & 3) != 0) {
        if ((uVar4 & 1) != 0) {
          *(undefined **)(lVar11 + 0x18) = ppuVar1[3];
        }
        if ((uVar4 >> 1 & 1) != 0) {
          *(undefined **)(lVar11 + 0x20) = ppuVar1[4];
        }
        *(uint *)(lVar11 + 0x10) = *(uint *)(lVar11 + 0x10) | uVar4;
      }
      if (((ulong)ppuVar1[1] & 1) != 0) {
        FUN_006621e0(lVar11 + 8,((ulong)ppuVar1[1] & 0xfffffffffffffffc) + 8);
      }
    }
    if ((uVar3 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
    }
    if ((uVar3 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0xfc);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar3;
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
    return;
  }
  return;
}


// ===== 0065a254  FUN_0065a254 =====

undefined ** FUN_0065a254(void)

{
  return &PTR_FUN_00798c20;
}


// ===== 0065a260  FUN_0065a260 =====

undefined8 FUN_0065a260(void)

{
  return 1;
}


// ===== 0065a268  FUN_0065a268 =====

void FUN_0065a268(void)

{
  FUN_00684dd0(FUN_0064dd54,&DAT_007ae908,&DAT_007ae9a0);
  return;
}


// ===== 0065a280  FUN_0065a280 =====

void FUN_0065a280(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_007a2fb8;
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = param_2;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = uVar1;
  return;
}


// ===== 0065a2ac  FUN_0065a2ac =====

void FUN_0065a2ac(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  void *__src;
  uint uVar4;
  undefined8 uVar5;
  
  param_1[1] = 0;
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  iVar2 = *(int *)(param_2 + 0x18);
  *param_1 = &PTR_FUN_00798370;
  if (iVar2 != 0) {
                    /* try { // try from 0065a2fc to 0065a303 has its CatchHandler @ 0065a3c4 */
    FUN_006741e8(param_1 + 3);
    __src = *(void **)(param_2 + 0x20);
    *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + *(int *)(param_2 + 0x18);
    memcpy((void *)param_1[4],__src,(long)*(int *)(param_2 + 0x18) << 3);
  }
  param_1[5] = 0;
  param_1[6] = 0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
                    /* try { // try from 0065a33c to 0065a35b has its CatchHandler @ 0065a3c4 */
    FUN_006621e0(param_1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  }
  uVar4 = *(uint *)(param_2 + 0x10);
  if ((uVar4 & 1) != 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    uVar3 = FUN_00759c3c(0x100);
                    /* try { // try from 0065a35c to 0065a367 has its CatchHandler @ 0065a3a8 */
    FUN_00657d44(uVar3,uVar5);
    param_1[5] = uVar3;
    uVar4 = *(uint *)(param_2 + 0x10);
  }
  if ((uVar4 >> 1 & 1) != 0) {
                    /* try { // try from 0065a374 to 0065a37f has its CatchHandler @ 0065a3c4 */
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    uVar3 = FUN_00759c3c(0x100);
                    /* try { // try from 0065a380 to 0065a38b has its CatchHandler @ 0065a3a4 */
    FUN_00657d44(uVar3,uVar5);
    param_1[6] = uVar3;
  }
  return;
}


// ===== 0065a3d8  FUN_0065a3d8 =====

void FUN_0065a3d8(undefined **param_1)

{
  ulong uVar1;
  undefined *puVar2;
  
  if (((ulong)param_1[1] & 1) == 0) {
    uVar1 = (ulong)param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 0065a3f8 to 0065a3fb has its CatchHandler @ 0065a490 */
    uVar1 = FUN_00662218();
  }
  if (uVar1 == 0) {
    FUN_006742e4(param_1 + 3);
    if (param_1 != &PTR_PTR_FUN_007a9df0) {
      puVar2 = param_1[5];
      if (puVar2 != (undefined *)0x0) {
        FUN_00658234(puVar2);
        free(puVar2);
      }
      puVar2 = param_1[6];
      if (puVar2 != (undefined *)0x0) {
        FUN_00658234(puVar2);
        free(puVar2);
      }
    }
  }
  *param_1 = (undefined *)&PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) && (puVar2 = param_1[1] + -2, puVar2 != (undefined *)0x0))
  {
    FUN_00662da0(puVar2);
    free(puVar2);
    return;
  }
  return;
}


// ===== 0065a494  FUN_0065a494 =====

void FUN_0065a494(void *param_1)

{
  FUN_0065a3d8();
  free(param_1);
  return;
}


// ===== 0065a4b8  FUN_0065a4b8 =====

void FUN_0065a4b8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// ===== 0065a4c0  FUN_0065a4c0 =====

byte * FUN_0065a4c0(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong *puVar6;
  long lVar7;
  byte *pbVar8;
  uint uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
LAB_0065a504:
  do {
    if ((byte *)*param_3 <= param_2) {
      iVar1 = (int)param_2 - *(int *)(param_3 + 1);
      if (*(int *)((long)param_3 + 0x1c) == iVar1) {
        pbVar8 = (byte *)0x0;
        if (param_3[2] != 0 || iVar1 < 1) {
          pbVar8 = param_2;
        }
        return pbVar8;
      }
      auVar11 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar11._0_8_;
      if ((auVar11 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        return param_2;
      }
    }
    pbVar8 = param_2 + 1;
    uVar9 = (uint)*param_2;
    if ((char)*param_2 < '\0') {
      uVar9 = (uVar9 + (uint)*pbVar8 * 0x80) - 0x80;
      if (-1 < (char)*pbVar8) {
        pbVar8 = param_2 + 2;
        goto LAB_0065a538;
      }
      auVar11 = FUN_0066fe50(param_2);
      uVar9 = (uint)(auVar11._8_8_ >> 3) & 0x1fffffff;
      auVar4 = auVar11;
      if (uVar9 == 3) goto LAB_0065a5e4;
LAB_0065a544:
      auVar11 = auVar4;
      if (uVar9 == 2) {
        if ((auVar11._8_4_ & 0xff) != 0x12) goto LAB_0065a6f8;
        lVar7 = *(long *)(param_1 + 0x30);
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
        if (lVar7 == 0) {
          puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
          if ((*(ulong *)(param_1 + 8) & 1) != 0) {
            puVar6 = (ulong *)*puVar6;
          }
          lVar7 = FUN_00661868(puVar6);
          *(long *)(param_1 + 0x30) = lVar7;
        }
      }
      else {
        if ((uVar9 != 1) || ((auVar11._8_4_ & 0xff) != 10)) {
LAB_0065a6f8:
          pbVar8 = auVar11._0_8_;
          uVar9 = auVar11._8_4_;
          if ((uVar9 == 0) || ((uVar9 & 7) == 4)) {
            if (pbVar8 != (byte *)0x0) {
              *(uint *)(param_3 + 10) = uVar9 - 1;
              return pbVar8;
            }
            return (byte *)0x0;
          }
          if ((*(ulong *)(param_1 + 8) & 1) == 0) {
            lVar7 = FUN_00661fa4(param_1 + 8);
          }
          else {
            lVar7 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8;
          }
          param_2 = (byte *)FUN_006fbab8(auVar11._8_8_ & 0xffffffff,lVar7,pbVar8,param_3);
          goto LAB_0065a4fc;
        }
        lVar7 = *(long *)(param_1 + 0x28);
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
        if (lVar7 == 0) {
          puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
          if ((*(ulong *)(param_1 + 8) & 1) != 0) {
            puVar6 = (ulong *)*puVar6;
          }
          lVar7 = FUN_00661868(puVar6);
          *(long *)(param_1 + 0x28) = lVar7;
        }
      }
      param_2 = (byte *)FUN_0066fa8c(param_3,lVar7,auVar11._0_8_);
    }
    else {
LAB_0065a538:
      auVar4._8_4_ = uVar9;
      auVar4._0_8_ = pbVar8;
      auVar4._12_4_ = 0;
      auVar11._8_4_ = uVar9;
      auVar11._0_8_ = pbVar8;
      auVar11._12_4_ = 0;
      uVar9 = uVar9 >> 3;
      if (uVar9 != 3) goto LAB_0065a544;
LAB_0065a5e4:
      uVar9 = auVar11._8_4_ & 0xff;
      if (uVar9 == 0x18) {
        param_2 = (byte *)(auVar11._0_8_ + -1);
        do {
          bVar3 = param_2[1];
          auVar12._8_8_ = (long)(char)bVar3;
          auVar12._0_8_ = param_2 + 2;
          if ((long)(char)bVar3 < 0) {
            bVar2 = param_2[2];
            iVar1 = (uint)bVar2 * 0x80 + (uint)bVar3 + -0x80;
            if ((char)bVar2 < '\0') {
              auVar12 = FUN_0066fd14(param_2 + 1,iVar1);
              uVar10 = (ulong)*(uint *)(param_1 + 0x18);
              auVar5 = auVar12;
              if (*(uint *)(param_1 + 0x18) == *(uint *)(param_1 + 0x1c)) goto LAB_0065a640;
              goto LAB_0065a680;
            }
            auVar5._8_4_ = iVar1;
            auVar5._0_8_ = param_2 + 3;
            auVar5._12_4_ = 0;
            auVar12._8_4_ = iVar1;
            auVar12._0_8_ = param_2 + 3;
            auVar12._12_4_ = 0;
            uVar10 = (ulong)*(uint *)(param_1 + 0x18);
            if (*(uint *)(param_1 + 0x18) != *(uint *)(param_1 + 0x1c)) goto LAB_0065a680;
LAB_0065a640:
            param_2 = auVar12._0_8_;
            iVar1 = (int)uVar10 + 1;
            FUN_006741e8(param_1 + 0x18,iVar1);
            *(long *)(*(long *)(param_1 + 0x20) + uVar10 * 8) = auVar12._8_8_;
            *(int *)(param_1 + 0x18) = iVar1;
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            uVar10 = (ulong)*(uint *)(param_1 + 0x18);
            auVar5 = auVar12;
            if (*(uint *)(param_1 + 0x18) == *(uint *)(param_1 + 0x1c)) goto LAB_0065a640;
LAB_0065a680:
            param_2 = auVar5._0_8_;
            *(long *)(*(long *)(param_1 + 0x20) + uVar10 * 8) = auVar5._8_8_;
            *(int *)(param_1 + 0x18) = (int)uVar10 + 1;
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x18));
        goto LAB_0065a504;
      }
      if (uVar9 != 0x1a) goto LAB_0065a6f8;
      param_2 = (byte *)FUN_006700e8(param_1 + 0x18,auVar11._0_8_,param_3);
    }
LAB_0065a4fc:
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}


// ===== 0065a7c0  FUN_0065a7c0 =====

undefined1 * FUN_0065a7c0(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = (undefined1 *)
              FUN_00678d18(1,*(long *)(param_1 + 0x28),
                           *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x14),param_2,param_3);
  }
  if ((uVar1 >> 1 & 1) == 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  else {
    param_2 = (undefined1 *)
              FUN_00678d18(2,*(long *)(param_1 + 0x30),
                           *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x14),param_2,param_3);
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  if (0 < (int)uVar1) {
    uVar5 = 0;
    do {
      if (param_2 < (undefined1 *)*param_3) {
        uVar4 = *(ulong *)(*(long *)(param_1 + 0x20) + uVar5 * 8);
        *param_2 = 0x18;
        param_2[1] = (char)uVar4;
        if (0x7f < uVar4) goto LAB_0065a87c;
LAB_0065a848:
        param_2 = param_2 + 2;
      }
      else {
        param_2 = (undefined1 *)FUN_0066d3f8(param_3,param_2);
        uVar4 = *(ulong *)(*(long *)(param_1 + 0x20) + uVar5 * 8);
        *param_2 = 0x18;
        param_2[1] = (char)uVar4;
        if (uVar4 < 0x80) goto LAB_0065a848;
LAB_0065a87c:
        uVar3 = uVar4 >> 7;
        param_2[1] = (byte)uVar4 | 0x80;
        param_2[2] = (char)uVar3;
        param_2 = param_2 + 3;
        puVar2 = param_2;
        if (0x3fff < uVar4) {
          do {
            uVar4 = uVar3 >> 0xe;
            uVar3 = uVar3 >> 7;
            puVar2[-1] = puVar2[-1] | 0x80;
            param_2 = puVar2 + 1;
            *puVar2 = (char)uVar3;
            puVar2 = param_2;
          } while (uVar4 != 0);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar1);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  puVar2 = (undefined1 *)
           FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
  return puVar2;
}


// ===== 0065a928  FUN_0065a928 =====

void FUN_0065a928(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_006793b8(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar2 = lVar2 + (ulong)*(uint *)(param_1 + 0x18);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar3 = FUN_00659864(*(undefined8 *)(param_1 + 0x28));
      lVar2 = lVar2 + lVar3 + (ulong)(((uint)LZCOUNT((uint)lVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar3 = FUN_00659864(*(undefined8 *)(param_1 + 0x30));
      lVar2 = lVar2 + lVar3 + (ulong)(((uint)LZCOUNT((uint)lVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  FUN_006e5694(param_1,lVar2,param_1 + 0x14);
  return;
}


// ===== 0065a9d4  FUN_0065a9d4 =====

void FUN_0065a9d4(long param_1,long param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong *puVar5;
  void *__src;
  int *piVar6;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    piVar6 = (int *)(param_1 + 0x18);
    iVar3 = *piVar6;
    FUN_006741e8(piVar6,iVar3 + *(int *)(param_2 + 0x18));
    __src = *(void **)(param_2 + 0x20);
    *piVar6 = *piVar6 + *(int *)(param_2 + 0x18);
    memcpy((void *)(*(long *)(param_1 + 0x20) + (long)iVar3 * 8),__src,
           (long)*(int *)(param_2 + 0x18) << 3);
  }
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x28);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if (lVar4 == 0) {
        puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar5 = (ulong *)*puVar5;
        }
        lVar4 = FUN_00661868(puVar5);
        *(long *)(param_1 + 0x28) = lVar4;
      }
      ppuVar1 = &PTR_PTR_FUN_007a9cf0;
      if (*(undefined ***)(param_2 + 0x28) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(param_2 + 0x28);
      }
      FUN_00659dc0(lVar4,ppuVar1);
    }
    if ((uVar2 >> 1 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      if (lVar4 == 0) {
        puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar5 = (ulong *)*puVar5;
        }
        lVar4 = FUN_00661868(puVar5);
        *(long *)(param_1 + 0x30) = lVar4;
      }
      ppuVar1 = &PTR_PTR_FUN_007a9cf0;
      if (*(undefined ***)(param_2 + 0x30) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(param_2 + 0x30);
      }
      FUN_00659dc0(lVar4,ppuVar1);
    }
  }
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 0065ab00  FUN_0065ab00 =====

undefined ** FUN_0065ab00(void)

{
  return &PTR_FUN_00798c30;
}


// ===== 0065ab0c  FUN_0065ab0c =====

undefined8 FUN_0065ab0c(void)

{
  return 1;
}


// ===== 0065ab14  FUN_0065ab14 =====

void FUN_0065ab14(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar3;
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar2;
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x18) = uVar3;
  *(undefined8 *)(param_2 + 0x20) = uVar1;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_2 + 0x28) = uVar3;
  *(undefined8 *)(param_2 + 0x30) = uVar1;
  return;
}


// ===== 0065ab58  FUN_0065ab58 =====

void FUN_0065ab58(void)

{
  FUN_00684dd0(FUN_0064dd54,&DAT_007ae908,&DAT_007ae9b0);
  return;
}


// ===== 0065ab70  FUN_0065ab70 =====

void FUN_0065ab70(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  *param_1 = (long)(PTR_DAT_007a2fc8 + 0x10);
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[2] = 0;
  param_1[3] = (long)&DAT_007aea80;
  return;
}


// ===== 0065aba0  FUN_0065aba0 =====

void FUN_0065aba0(undefined8 *param_1)

{
  void *__ptr;
  ulong uVar1;
  
  if ((param_1[1] & 1) == 0) {
    uVar1 = param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 0065abc0 to 0065abe7 has its CatchHandler @ 0065ac30 */
    uVar1 = FUN_00662218();
  }
  if (uVar1 == 0) {
    FUN_00663a20(param_1 + 3);
    if (*(int *)(param_1 + 5) != 0) {
      if (*(int *)(param_1 + 5) == 2) {
        FUN_00663a20(param_1 + 4);
      }
      *(undefined4 *)(param_1 + 5) = 0;
    }
  }
  *param_1 = &PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) &&
     (__ptr = (void *)(param_1[1] + -2), __ptr != (void *)0x0)) {
    FUN_00662da0(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 0065ac34  FUN_0065ac34 =====

void FUN_0065ac34(void *param_1)

{
  FUN_0065aba0();
  free(param_1);
  return;
}


// ===== 0065ac58  FUN_0065ac58 =====

void FUN_0065ac58(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// ===== 0065ac60  FUN_0065ac60 =====

void FUN_0065ac60(long param_1)

{
  if (*(int *)(param_1 + 0x28) == 2) {
    FUN_00663a20(param_1 + 0x20);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}


// ===== 0065ac94  FUN_0065ac94 =====

void FUN_0065ac94(long param_1)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = *(int *)(param_1 + 0x28);
  }
  else {
    pbVar3 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    if ((*pbVar3 & 1) == 0) {
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      iVar1 = *(int *)(param_1 + 0x28);
    }
    else {
      **(undefined1 **)(pbVar3 + 0x10) = 0;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
      iVar1 = *(int *)(param_1 + 0x28);
    }
  }
  if (iVar1 == 2) {
    FUN_00663a20(param_1 + 0x20);
    bVar2 = *(byte *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else {
    bVar2 = *(byte *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if ((bVar2 & 1) != 0) {
    FUN_006622b8();
    return;
  }
  return;
}


// ===== 0065ad30  FUN_0065ad30 =====

byte * FUN_0065ad30(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  byte *pbVar4;
  undefined8 uVar5;
  ulong *puVar6;
  uint uVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  puVar3 = PTR_DAT_007a2ea0;
  do {
    while( true ) {
      if ((byte *)*param_3 <= param_2) {
        iVar1 = (int)param_2 - *(int *)(param_3 + 1);
        if (*(int *)((long)param_3 + 0x1c) == iVar1) {
          pbVar8 = (byte *)0x0;
          if (param_3[2] != 0 || iVar1 < 1) {
            pbVar8 = param_2;
          }
          return pbVar8;
        }
        auVar10 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
        param_2 = auVar10._0_8_;
        if ((auVar10 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
          return param_2;
        }
      }
      pbVar8 = param_2 + 1;
      uVar7 = (uint)*param_2;
      if (-1 < (char)*param_2) break;
      uVar7 = (uVar7 + (uint)*pbVar8 * 0x80) - 0x80;
      if (-1 < (char)*pbVar8) {
        pbVar8 = param_2 + 2;
        break;
      }
      auVar10 = FUN_0066fe50();
      uVar7 = (uint)(auVar10._8_8_ >> 3) & 0x1fffffff;
      auVar2 = auVar10;
      if (uVar7 != 3) goto LAB_0065add8;
LAB_0065ae88:
      if ((auVar10._8_4_ & 0xff) == 0x1a) {
        puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar6 = (ulong *)*puVar6;
        }
        uVar5 = FUN_0066399c(param_1 + 0x18,puVar6);
        param_2 = (byte *)FUN_0066ff90(uVar5,auVar10._0_8_,param_3);
        if (param_2 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
LAB_0065aec8:
        pbVar8 = auVar10._0_8_;
        uVar7 = auVar10._8_4_;
        if ((uVar7 == 0) || ((uVar7 & 7) == 4)) {
          if (pbVar8 != (byte *)0x0) {
            *(uint *)(param_3 + 10) = uVar7 - 1;
            return pbVar8;
          }
          return (byte *)0x0;
        }
        if ((*(ulong *)(param_1 + 8) & 1) == 0) {
          uVar5 = FUN_00661fa4(param_1 + 8);
          param_2 = (byte *)FUN_006fbab8(auVar10._8_8_ & 0xffffffff,uVar5,pbVar8,param_3);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
        else {
          param_2 = (byte *)FUN_006fbab8(auVar10._8_8_ & 0xffffffff,
                                         (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,pbVar8,
                                         param_3);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
      }
    }
    auVar2._8_4_ = uVar7;
    auVar2._0_8_ = pbVar8;
    auVar2._12_4_ = 0;
    auVar10._8_4_ = uVar7;
    auVar10._0_8_ = pbVar8;
    auVar10._12_4_ = 0;
    uVar7 = uVar7 >> 3;
    if (uVar7 == 3) goto LAB_0065ae88;
LAB_0065add8:
    auVar10 = auVar2;
    pbVar8 = auVar10._0_8_;
    if (uVar7 == 2) {
      if ((auVar10._8_4_ & 0xff) != 0x12) goto LAB_0065aec8;
      if (*(int *)(param_1 + 0x28) != 2) {
        *(undefined4 *)(param_1 + 0x28) = 2;
        *(undefined **)(param_1 + 0x20) = puVar3;
      }
      puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar6 = (ulong *)*puVar6;
      }
      uVar5 = FUN_0066399c(param_1 + 0x20,puVar6);
      param_2 = (byte *)FUN_0066ff90(uVar5,pbVar8,param_3);
      if (param_2 == (byte *)0x0) {
        return (byte *)0x0;
      }
    }
    else {
      if ((uVar7 != 1) || ((auVar10._8_4_ & 0xff) != 8)) goto LAB_0065aec8;
      pbVar4 = pbVar8 + 1;
      uVar9 = (ulong)(char)*pbVar8;
      if ((long)uVar9 < 0) {
        uVar9 = (ulong)(((uint)*pbVar4 * 0x80 + (uint)*pbVar8) - 0x80);
        if (-1 < (char)*pbVar4) {
          pbVar4 = pbVar8 + 2;
          goto LAB_0065ae1c;
        }
        auVar11 = FUN_0066fd14(pbVar8,uVar9);
        iVar1 = *(int *)(param_1 + 0x28);
      }
      else {
LAB_0065ae1c:
        auVar11._8_8_ = uVar9;
        auVar11._0_8_ = pbVar4;
        iVar1 = *(int *)(param_1 + 0x28);
      }
      if (iVar1 != 1) {
        if (iVar1 == 2) {
          FUN_00663a20(param_1 + 0x20);
        }
        *(undefined4 *)(param_1 + 0x28) = 1;
      }
      param_2 = auVar11._0_8_;
      *(long *)(param_1 + 0x20) = auVar11._8_8_;
      if (param_2 == (byte *)0x0) {
        return (byte *)0x0;
      }
    }
  } while( true );
}


// ===== 0065aff0  FUN_0065aff0 =====

undefined2 * FUN_0065aff0(long param_1,undefined2 *param_2,long *param_3)

{
  size_t sVar1;
  void *pvVar2;
  undefined2 *puVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (*(int *)(param_1 + 0x28) == 2) {
    pbVar4 = (byte *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar4 >> 1);
    if ((*pbVar4 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar4 + 8);
    }
    if (((long)sVar1 < 0x80) && ((long)sVar1 <= (*param_3 - (long)param_2) + 0xe)) {
      *(char *)((long)param_2 + 1) = (char)sVar1;
      *(undefined1 *)param_2 = 0x12;
      pvVar2 = (void *)((ulong)pbVar4 | 1);
      if ((*pbVar4 & 1) != 0) {
        pvVar2 = *(void **)(pbVar4 + 0x10);
      }
      memcpy(param_2 + 1,pvVar2,sVar1);
      param_2 = (undefined2 *)((long)(param_2 + 1) + sVar1);
    }
    else {
      param_2 = (undefined2 *)FUN_0066d778(param_3,2);
    }
  }
  else if (*(int *)(param_1 + 0x28) == 1) {
    puVar3 = param_2;
    if ((param_2 < (undefined2 *)*param_3) ||
       (puVar3 = (undefined2 *)FUN_0066d3f8(param_3,param_2), *(int *)(param_1 + 0x28) == 1)) {
      uVar6 = *(ulong *)(param_1 + 0x20);
      *(undefined1 *)puVar3 = 8;
      *(byte *)((long)puVar3 + 1) = (byte)uVar6;
      if (uVar6 < 0x80) {
        param_2 = puVar3 + 1;
      }
      else {
        uVar5 = uVar6 >> 7;
        *(byte *)((long)puVar3 + 1) = (byte)uVar6 | 0x80;
        *(char *)(puVar3 + 1) = (char)uVar5;
        param_2 = (undefined2 *)((long)puVar3 + 3);
        puVar3 = param_2;
        if (0x3fff < uVar6) {
          do {
            uVar6 = uVar5 >> 0xe;
            uVar5 = uVar5 >> 7;
            *(byte *)((long)puVar3 + -1) = *(byte *)((long)puVar3 + -1) | 0x80;
            param_2 = (undefined2 *)((long)puVar3 + 1);
            *(char *)puVar3 = (char)uVar5;
            puVar3 = param_2;
          } while (uVar6 != 0);
        }
      }
    }
    else {
      param_2 = puVar3 + 1;
      *puVar3 = 8;
    }
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    pbVar4 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    sVar1 = (ulong)(*pbVar4 >> 1);
    if ((*pbVar4 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar4 + 8);
    }
    if ((0x7f < (long)sVar1) || ((*param_3 - (long)param_2) + 0xe < (long)sVar1)) {
      param_2 = (undefined2 *)FUN_0066d778(param_3,3);
      uVar6 = *(ulong *)(param_1 + 8);
      goto joined_r0x0065b198;
    }
    *(char *)((long)param_2 + 1) = (char)sVar1;
    *(undefined1 *)param_2 = 0x1a;
    pvVar2 = (void *)((ulong)pbVar4 | 1);
    if ((*pbVar4 & 1) != 0) {
      pvVar2 = *(void **)(pbVar4 + 0x10);
    }
    memcpy(param_2 + 1,pvVar2,sVar1);
    param_2 = (undefined2 *)((long)(param_2 + 1) + sVar1);
  }
  uVar6 = *(ulong *)(param_1 + 8);
joined_r0x0065b198:
  if ((uVar6 & 1) == 0) {
    return param_2;
  }
  puVar3 = (undefined2 *)FUN_006fc418((uVar6 & 0xfffffffffffffffc) + 8,param_2,param_3);
  return puVar3;
}


// ===== 0065b1f8  FUN_0065b1f8 =====

void FUN_0065b1f8(long param_1)

{
  ulong uVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  byte *pbVar5;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    lVar4 = 0;
    iVar2 = *(int *)(param_1 + 0x28);
  }
  else {
    pbVar5 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    bVar3 = *pbVar5;
    uVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar1 = *(ulong *)(pbVar5 + 8);
    }
    lVar4 = uVar1 + (((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    iVar2 = *(int *)(param_1 + 0x28);
  }
  if (iVar2 == 2) {
    pbVar5 = (byte *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
    bVar3 = *pbVar5;
    uVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar1 = *(ulong *)(pbVar5 + 8);
    }
    lVar4 = lVar4 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  else if (iVar2 == 1) {
    FUN_006e5694(param_1,lVar4 + ((LZCOUNT(*(ulong *)(param_1 + 0x20) | 1) ^ 0x3fU) * 9 + 0x89 >> 6)
                 ,param_1 + 0x14);
    return;
  }
  FUN_006e5694(param_1,lVar4,param_1 + 0x14);
  return;
}


// ===== 0065b2cc  FUN_0065b2cc =====

void FUN_0065b2cc(long param_1,long param_2)

{
  undefined *puVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
    uVar3 = *(ulong *)(param_2 + 0x18);
    puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    FUN_006636d4(param_1 + 0x18,uVar3 & 0xfffffffffffffffc,puVar2);
  }
  puVar1 = PTR_DAT_007a2ea0;
  if (*(int *)(param_2 + 0x28) == 2) {
    uVar3 = *(ulong *)(param_2 + 0x20);
    if (*(int *)(param_1 + 0x28) != 2) {
      *(undefined4 *)(param_1 + 0x28) = 2;
      *(undefined **)(param_1 + 0x20) = puVar1;
    }
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_006636d4(param_1 + 0x20,uVar3 & 0xfffffffffffffffc);
      uVar3 = *(ulong *)(param_2 + 8);
    }
    else {
      FUN_006636d4(param_1 + 0x20,uVar3 & 0xfffffffffffffffc,
                   *(undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc));
      uVar3 = *(ulong *)(param_2 + 8);
    }
  }
  else {
    if (*(int *)(param_2 + 0x28) == 1) {
      uVar4 = *(undefined8 *)(param_2 + 0x20);
      if (*(int *)(param_1 + 0x28) != 1) {
        if (*(int *)(param_1 + 0x28) == 2) {
          FUN_00663a20(param_1 + 0x20);
        }
        *(undefined4 *)(param_1 + 0x28) = 1;
      }
      *(undefined8 *)(param_1 + 0x20) = uVar4;
    }
    uVar3 = *(ulong *)(param_2 + 8);
  }
  if ((uVar3 & 1) != 0) {
    FUN_006621e0(param_1 + 8,(uVar3 & 0xfffffffffffffffc) + 8);
    return;
  }
  return;
}


// ===== 0065b3f0  FUN_0065b3f0 =====

undefined ** FUN_0065b3f0(void)

{
  return &PTR_FUN_00798c40;
}


// ===== 0065b3fc  FUN_0065b3fc =====

undefined8 FUN_0065b3fc(void)

{
  return 1;
}


// ===== 0065b404  FUN_0065b404 =====

void FUN_0065b404(void)

{
  FUN_00684dd0(FUN_0064dd54,&DAT_007ae908,&DAT_007ae9c0);
  return;
}


// ===== 0065b41c  FUN_0065b41c =====

void FUN_0065b41c(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_007a2fd8;
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = uVar1;
  return;
}


// ===== 0065b448  FUN_0065b448 =====

void FUN_0065b448(undefined8 *param_1)

{
  void *__ptr;
  ulong uVar1;
  
  if ((param_1[1] & 1) == 0) {
    uVar1 = param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 0065b468 to 0065b46b has its CatchHandler @ 0065b4d0 */
    uVar1 = FUN_00662218();
  }
  if (uVar1 == 0) {
    if ((param_1[4] != 0) && (param_1[2] == 0)) {
                    /* try { // try from 0065b484 to 0065b487 has its CatchHandler @ 0065b4cc */
      FUN_00675910();
    }
  }
  *param_1 = &PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) &&
     (__ptr = (void *)(param_1[1] + -2), __ptr != (void *)0x0)) {
    FUN_00662da0(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 0065b4d4  FUN_0065b4d4 =====

void FUN_0065b4d4(void *param_1)

{
  FUN_0065b448();
  free(param_1);
  return;
}


// ===== 0065b4f8  FUN_0065b4f8 =====

void FUN_0065b4f8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}


// ===== 0065b500  FUN_0065b500 =====

void FUN_0065b500(long param_1)

{
  int iVar1;
  byte bVar2;
  long *plVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  
  uVar6 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    plVar3 = *(long **)(param_1 + 0x20);
    do {
      plVar3 = plVar3 + 1;
      lVar5 = *plVar3;
      if ((*(byte *)(lVar5 + 0x10) & 1) == 0) {
        iVar1 = *(int *)(lVar5 + 0x28);
joined_r0x0065b59c:
        if (iVar1 != 2) goto LAB_0065b550;
LAB_0065b5a0:
        FUN_00663a20(lVar5 + 0x20);
        bVar2 = *(byte *)(lVar5 + 8);
        *(undefined4 *)(lVar5 + 0x28) = 0;
        *(undefined4 *)(lVar5 + 0x10) = 0;
      }
      else {
        pbVar4 = (byte *)(*(ulong *)(lVar5 + 0x18) & 0xfffffffffffffffc);
        if ((*pbVar4 & 1) != 0) {
          **(undefined1 **)(pbVar4 + 0x10) = 0;
          pbVar4[8] = 0;
          pbVar4[9] = 0;
          pbVar4[10] = 0;
          pbVar4[0xb] = 0;
          pbVar4[0xc] = 0;
          pbVar4[0xd] = 0;
          pbVar4[0xe] = 0;
          pbVar4[0xf] = 0;
          iVar1 = *(int *)(lVar5 + 0x28);
          goto joined_r0x0065b59c;
        }
        pbVar4[0] = 0;
        pbVar4[1] = 0;
        if (*(int *)(lVar5 + 0x28) == 2) goto LAB_0065b5a0;
LAB_0065b550:
        bVar2 = *(byte *)(lVar5 + 8);
        *(undefined4 *)(lVar5 + 0x28) = 0;
        *(undefined4 *)(lVar5 + 0x10) = 0;
      }
      if ((bVar2 & 1) != 0) {
        FUN_006622b8(lVar5 + 8);
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006622b8((byte *)(param_1 + 8));
    return;
  }
  return;
}


// ===== 0065b5f4  FUN_0065b5f4 =====

byte * FUN_0065b5f4(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  byte *pbVar4;
  int *piVar5;
  undefined1 auVar6 [16];
  
  do {
    if ((byte *)*param_3 <= param_2) {
      iVar1 = (int)param_2 - *(int *)(param_3 + 1);
      if (*(int *)((long)param_3 + 0x1c) == iVar1) {
        pbVar4 = (byte *)0x0;
        if (param_3[2] != 0 || iVar1 < 1) {
          pbVar4 = param_2;
        }
        return pbVar4;
      }
      auVar6 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar6._0_8_;
      if ((auVar6 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        return param_2;
      }
    }
    pbVar4 = param_2 + 1;
    uVar3 = (uint)*param_2;
    if ((char)*param_2 < '\0') {
      uVar3 = (uVar3 + (uint)*pbVar4 * 0x80) - 0x80;
      if (-1 < (char)*pbVar4) {
        pbVar4 = param_2 + 2;
        goto LAB_0065b644;
      }
      auVar6 = FUN_0066fe50(param_2);
      uVar3 = auVar6._8_4_;
    }
    else {
LAB_0065b644:
      auVar6._8_4_ = uVar3;
      auVar6._0_8_ = pbVar4;
      auVar6._12_4_ = 0;
    }
    param_2 = auVar6._0_8_;
    if (uVar3 == 10) {
      param_2 = param_2 + -1;
      do {
        piVar5 = *(int **)(param_1 + 0x20);
        if (piVar5 == (int *)0x0) {
LAB_0065b6e0:
          uVar2 = FUN_00661968(*(undefined8 *)(param_1 + 0x10));
          uVar2 = FUN_00675990(param_1 + 0x10,uVar2);
          param_2 = (byte *)FUN_0066fa8c(param_3,uVar2,param_2 + 1);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
        else {
          iVar1 = *(int *)(param_1 + 0x18);
          if (*piVar5 <= iVar1) goto LAB_0065b6e0;
          *(int *)(param_1 + 0x18) = iVar1 + 1;
          param_2 = (byte *)FUN_0066fa8c(param_3,*(undefined8 *)(piVar5 + (long)iVar1 * 2 + 2),
                                         param_2 + 1);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
      } while ((param_2 < (byte *)*param_3) && (*param_2 == 10));
    }
    else {
      uVar3 = auVar6._8_4_;
      if ((uVar3 == 0) || ((uVar3 & 7) == 4)) {
        if (param_2 != (byte *)0x0) {
          *(uint *)(param_3 + 10) = uVar3 - 1;
          return param_2;
        }
        return (byte *)0x0;
      }
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        uVar2 = FUN_00661fa4(param_1 + 8);
        param_2 = (byte *)FUN_006fbab8(auVar6._8_8_ & 0xffffffff,uVar2,param_2,param_3);
        if (param_2 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        param_2 = (byte *)FUN_006fbab8(auVar6._8_8_ & 0xffffffff,
                                       (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,
                                       param_3);
        if (param_2 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
    }
  } while( true );
}


// ===== 0065b7ec  FUN_0065b7ec =====

undefined8 FUN_0065b7ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    iVar4 = 0;
    do {
      lVar3 = *(long *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 8 + 8);
      param_2 = FUN_00678d18(1,lVar3,*(undefined4 *)(lVar3 + 0x14),param_2,param_3);
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar2 = FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
  return uVar2;
}


// ===== 0065b87c  FUN_0065b87c =====

undefined4 FUN_0065b87c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 0065b884  FUN_0065b884 =====

void FUN_0065b884(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar2 = (long)*(int *)(param_1 + 0x18);
  puVar3 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x20) != 0) {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar2 = 0;
  }
  else {
    lVar4 = lVar2 << 3;
    do {
      lVar1 = FUN_0065b1f8(*puVar3);
      lVar4 = lVar4 + -8;
      lVar2 = lVar1 + lVar2 + (ulong)(((uint)LZCOUNT((uint)lVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
  }
  FUN_006e5694(param_1,lVar2,param_1 + 0x28);
  return;
}


// ===== 0065b908  FUN_0065b908 =====

void FUN_0065b908(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    lVar4 = *(long *)(param_2 + 0x20);
    uVar3 = FUN_00675710(param_1 + 0x10,iVar1);
    FUN_006629f8(param_1 + 0x10,uVar3,lVar4 + 8,iVar1,
                 **(int **)(param_1 + 0x20) - *(int *)(param_1 + 0x18));
    iVar2 = **(int **)(param_1 + 0x20);
    iVar1 = *(int *)(param_1 + 0x18) + iVar1;
    *(int *)(param_1 + 0x18) = iVar1;
    if (iVar2 < iVar1) {
      **(int **)(param_1 + 0x20) = iVar1;
    }
  }
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 0065b9b0  FUN_0065b9b0 =====

undefined ** FUN_0065b9b0(void)

{
  return &PTR_FUN_00798c50;
}


// ===== 0065b9bc  FUN_0065b9bc =====

undefined8 FUN_0065b9bc(void)

{
  return 1;
}


// ===== 0065b9c4  FUN_0065b9c4 =====

void FUN_0065b9c4(void)

{
  FUN_00684dd0(FUN_0064dd54,&DAT_007ae908,&DAT_007ae9d0);
  return;
}


// ===== 0065b9dc  FUN_0065b9dc =====

void FUN_0065b9dc(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_007a2fe8;
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = uVar1;
  return;
}


// ===== 0065ba04  FUN_0065ba04 =====

void FUN_0065ba04(undefined **param_1)

{
  ulong uVar1;
  undefined *puVar2;
  
  if (((ulong)param_1[1] & 1) == 0) {
    uVar1 = (ulong)param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 0065ba24 to 0065ba27 has its CatchHandler @ 0065ba98 */
    uVar1 = FUN_00662218();
  }
  if (((param_1 != &PTR_PTR_FUN_007a9e88) && (uVar1 == 0)) &&
     (puVar2 = param_1[3], puVar2 != (undefined *)0x0)) {
    FUN_0065b448(puVar2);
    free(puVar2);
  }
  *param_1 = (undefined *)&PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) && (puVar2 = param_1[1] + -2, puVar2 != (undefined *)0x0))
  {
    FUN_00662da0(puVar2);
    free(puVar2);
    return;
  }
  return;
}


// ===== 0065ba9c  FUN_0065ba9c =====

void FUN_0065ba9c(void *param_1)

{
  FUN_0065ba04();
  free(param_1);
  return;
}


// ===== 0065bac0  FUN_0065bac0 =====

void FUN_0065bac0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// ===== 0065bac8  FUN_0065bac8 =====

void FUN_0065bac8(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_0065b500(*(undefined8 *)(param_1 + 0x18));
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006622b8();
  return;
}


// ===== 0065bb10  FUN_0065bb10 =====

byte * FUN_0065bb10(long param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined1 auVar4 [16];
  ulong *puVar5;
  undefined8 uVar6;
  long lVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  
  uVar10 = 0;
  if (param_2 < (byte *)*param_3) goto LAB_0065bb90;
LAB_0065bb6c:
  do {
    iVar3 = (int)param_2 - *(int *)(param_3 + 1);
    if (*(int *)((long)param_3 + 0x1c) == iVar3) {
      pbVar8 = (byte *)0x0;
      if (param_3[2] != 0 || iVar3 < 1) {
        pbVar8 = param_2;
      }
LAB_0065bd10:
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar10;
      return pbVar8;
    }
    auVar11 = FUN_0066f53c(param_3,iVar3,*(undefined4 *)((long)param_3 + 0x5c));
    param_2 = auVar11._0_8_;
    pbVar8 = param_2;
    if ((auVar11 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_0065bd10;
LAB_0065bb90:
    do {
      while( true ) {
        pbVar8 = param_2 + 1;
        uVar9 = (uint)*param_2;
        if (-1 < (char)*param_2) break;
        uVar9 = (uVar9 + (uint)*pbVar8 * 0x80) - 0x80;
        if (-1 < (char)*pbVar8) {
          pbVar8 = param_2 + 2;
          break;
        }
        auVar11 = FUN_0066fe50();
        uVar9 = (uint)(auVar11._8_8_ >> 3) & 0x1fffffff;
        auVar4 = auVar11;
        if (uVar9 != 2) goto LAB_0065bbc4;
LAB_0065bc14:
        if ((auVar11._8_4_ & 0xff) == 0x12) {
          lVar7 = *(long *)(param_1 + 0x18);
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
          if (lVar7 == 0) {
            puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
            if ((*(ulong *)(param_1 + 8) & 1) != 0) {
              puVar5 = (ulong *)*puVar5;
            }
            lVar7 = FUN_006619e8(puVar5);
            *(long *)(param_1 + 0x18) = lVar7;
          }
          param_2 = (byte *)FUN_0066fa8c(param_3,lVar7,auVar11._0_8_);
        }
        else {
LAB_0065bc4c:
          pbVar8 = auVar11._0_8_;
          uVar9 = auVar11._8_4_;
          if ((uVar9 == 0) || ((uVar9 & 7) == 4)) {
            if (pbVar8 != (byte *)0x0) {
              *(uint *)(param_3 + 10) = uVar9 - 1;
            }
            goto LAB_0065bd10;
          }
          if ((*(ulong *)(param_1 + 8) & 1) == 0) {
            uVar6 = FUN_00661fa4(param_1 + 8);
            param_2 = (byte *)FUN_006fbab8(auVar11._8_8_ & 0xffffffff,uVar6,pbVar8,param_3);
          }
          else {
            param_2 = (byte *)FUN_006fbab8(auVar11._8_8_ & 0xffffffff,
                                           (*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,pbVar8
                                           ,param_3);
          }
        }
joined_r0x0065bc7c:
        if (param_2 == (byte *)0x0) {
          pbVar8 = (byte *)0x0;
          goto LAB_0065bd10;
        }
        if ((byte *)*param_3 <= param_2) goto LAB_0065bb6c;
      }
      auVar4._8_4_ = uVar9;
      auVar4._0_8_ = pbVar8;
      auVar4._12_4_ = 0;
      auVar11._8_4_ = uVar9;
      auVar11._0_8_ = pbVar8;
      auVar11._12_4_ = 0;
      uVar9 = uVar9 >> 3;
      if (uVar9 == 2) goto LAB_0065bc14;
LAB_0065bbc4:
      auVar11 = auVar4;
      pbVar8 = auVar11._0_8_;
      if ((uVar9 != 1) || ((auVar11._8_4_ & 0xff) != 8)) goto LAB_0065bc4c;
      param_2 = pbVar8 + 1;
      bVar2 = *pbVar8;
      if ((char)bVar2 < '\0') {
        bVar1 = *param_2;
        if ((char)bVar1 < '\0') {
          auVar12 = FUN_0066fc04(pbVar8);
          param_2 = auVar12._0_8_;
          uVar10 = 2;
          *(int *)(param_1 + 0x20) = auVar12._8_4_;
          goto joined_r0x0065bc7c;
        }
        param_2 = pbVar8 + 2;
        *(uint *)(param_1 + 0x20) = (uint)bVar2 + (uint)bVar1 * 0x80 + -0x80;
        uVar10 = 2;
        if ((byte *)*param_3 <= param_2) break;
        goto LAB_0065bb90;
      }
      *(uint *)(param_1 + 0x20) = (uint)bVar2;
      uVar10 = 2;
    } while (param_2 < (byte *)*param_3);
  } while( true );
}


// ===== 0065bd50  FUN_0065bd50 =====

undefined1 * FUN_0065bd50(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 1 & 1) != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      uVar2 = *(uint *)(param_1 + 0x20);
      *param_2 = 8;
      param_2[1] = (char)uVar2;
    }
    else {
      param_2 = (undefined1 *)FUN_0066d3f8(param_3,param_2);
      uVar2 = *(uint *)(param_1 + 0x20);
      *param_2 = 8;
      param_2[1] = (char)uVar2;
    }
    if (uVar2 < 0x80) {
      param_2 = param_2 + 2;
    }
    else {
      uVar4 = (ulong)(long)(int)uVar2 >> 7;
      param_2[1] = (byte)uVar2 | 0x80;
      param_2[2] = (char)uVar4;
      param_2 = param_2 + 3;
      puVar3 = param_2;
      if (0x3fff < uVar2) {
        do {
          uVar5 = uVar4 >> 0xe;
          uVar4 = uVar4 >> 7;
          puVar3[-1] = puVar3[-1] | 0x80;
          param_2 = puVar3 + 1;
          *puVar3 = (char)uVar4;
          puVar3 = param_2;
        } while (uVar5 != 0);
      }
    }
  }
  if ((uVar1 & 1) != 0) {
    param_2 = (undefined1 *)
              FUN_00678d18(2,*(long *)(param_1 + 0x18),
                           *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x28),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    puVar3 = (undefined1 *)
             FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
    return puVar3;
  }
  return param_2;
}


// ===== 0065be58  FUN_0065be58 =====

undefined4 FUN_0065be58(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}


// ===== 0065be60  FUN_0065be60 =====

void FUN_0065be60(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) == 0) {
    FUN_006e5694(param_1,0,param_1 + 0x14);
    return;
  }
  if ((uVar1 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x18);
    lVar3 = (long)*(int *)(lVar4 + 0x18);
    puVar5 = (undefined8 *)0x0;
    if (*(long *)(lVar4 + 0x20) != 0) {
      puVar5 = (undefined8 *)(*(long *)(lVar4 + 0x20) + 8);
    }
    if (*(int *)(lVar4 + 0x18) == 0) {
      lVar3 = 0;
    }
    else {
      lVar6 = lVar3 << 3;
      do {
        lVar2 = FUN_0065b1f8(*puVar5);
        lVar6 = lVar6 + -8;
        lVar3 = lVar2 + lVar3 + (ulong)(((uint)LZCOUNT((uint)lVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
        puVar5 = puVar5 + 1;
      } while (lVar6 != 0);
    }
    lVar3 = FUN_006e5694(lVar4,lVar3,lVar4 + 0x28);
    lVar3 = lVar3 + (ulong)(((uint)LZCOUNT((uint)lVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    FUN_006e5694(param_1,lVar3 + ((LZCOUNT((long)*(int *)(param_1 + 0x20) | 1) ^ 0x3fU) * 9 + 0x89
                                 >> 6),param_1 + 0x14);
    return;
  }
  FUN_006e5694(param_1,lVar3,param_1 + 0x14);
  return;
}


// ===== 0065bf88  FUN_0065bf88 =====

void FUN_0065bf88(long param_1,long param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if (lVar7 == 0) {
        puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar5 = (ulong *)*puVar5;
        }
        lVar7 = FUN_006619e8(puVar5);
        *(long *)(param_1 + 0x18) = lVar7;
      }
      ppuVar1 = &PTR_PTR_FUN_007a9e58;
      if (*(undefined ***)(param_2 + 0x18) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(param_2 + 0x18);
      }
      iVar3 = *(int *)(ppuVar1 + 3);
      if (iVar3 != 0) {
        puVar8 = ppuVar1[4];
        uVar6 = FUN_00675710(lVar7 + 0x10,iVar3);
        FUN_006629f8(lVar7 + 0x10,uVar6,puVar8 + 8,iVar3,
                     **(int **)(lVar7 + 0x20) - *(int *)(lVar7 + 0x18));
        iVar4 = **(int **)(lVar7 + 0x20);
        iVar3 = *(int *)(lVar7 + 0x18) + iVar3;
        *(int *)(lVar7 + 0x18) = iVar3;
        if (iVar4 < iVar3) {
          **(int **)(lVar7 + 0x20) = iVar3;
        }
      }
      if (((ulong)ppuVar1[1] & 1) != 0) {
        FUN_006621e0(lVar7 + 8,((ulong)ppuVar1[1] & 0xfffffffffffffffc) + 8);
      }
    }
    if ((uVar2 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2;
  }
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 0065c0d0  FUN_0065c0d0 =====

undefined ** FUN_0065c0d0(void)

{
  return &PTR_FUN_00798c60;
}


// ===== 0065c0dc  FUN_0065c0dc =====

undefined8 FUN_0065c0dc(void)

{
  return 1;
}


// ===== 0065c0e4  FUN_0065c0e4 =====

void FUN_0065c0e4(void)

{
  FUN_00684dd0(FUN_0064dd54,&DAT_007ae908,&DAT_007ae9e0);
  return;
}


// ===== 0065c0fc  FUN_0065c0fc =====

void FUN_0065c0fc(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_007a2ff8;
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = uVar1;
  return;
}


// ===== 0065c120  FUN_0065c120 =====

void FUN_0065c120(undefined **param_1)

{
  ulong uVar1;
  undefined *puVar2;
  
  if (((ulong)param_1[1] & 1) == 0) {
    uVar1 = (ulong)param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 0065c140 to 0065c143 has its CatchHandler @ 0065c1b4 */
    uVar1 = FUN_00662218();
  }
  if (((param_1 != &PTR_PTR_FUN_007a9eb0) && (uVar1 == 0)) &&
     (puVar2 = param_1[3], puVar2 != (undefined *)0x0)) {
    FUN_0065e3c8(puVar2);
    free(puVar2);
  }
  *param_1 = (undefined *)&PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) && (puVar2 = param_1[1] + -2, puVar2 != (undefined *)0x0))
  {
    FUN_00662da0(puVar2);
    free(puVar2);
    return;
  }
  return;
}


// ===== 0065c1b8  FUN_0065c1b8 =====

void FUN_0065c1b8(void *param_1)

{
  FUN_0065c120();
  free(param_1);
  return;
}


// ===== 0065c1dc  FUN_0065c1dc =====

void FUN_0065c1dc(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// ===== 0065c1e4  FUN_0065c1e4 =====

void FUN_0065c1e4(long param_1)

{
  byte bVar1;
  byte *pbVar2;
  long lVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) goto LAB_0065c238;
  lVar3 = *(long *)(param_1 + 0x18);
  if ((*(byte *)(lVar3 + 0x10) & 1) == 0) {
LAB_0065c21c:
    FUN_0065de80(lVar3);
    bVar1 = *(byte *)(lVar3 + 8);
    *(undefined4 *)(lVar3 + 0x10) = 0;
  }
  else {
    pbVar2 = (byte *)(*(ulong *)(lVar3 + 0x18) & 0xfffffffffffffffc);
    if ((*pbVar2 & 1) == 0) {
      pbVar2[0] = 0;
      pbVar2[1] = 0;
      goto LAB_0065c21c;
    }
    **(undefined1 **)(pbVar2 + 0x10) = 0;
    pbVar2[8] = 0;
    pbVar2[9] = 0;
    pbVar2[10] = 0;
    pbVar2[0xb] = 0;
    pbVar2[0xc] = 0;
    pbVar2[0xd] = 0;
    pbVar2[0xe] = 0;
    pbVar2[0xf] = 0;
    FUN_0065de80(lVar3);
    bVar1 = *(byte *)(lVar3 + 8);
    *(undefined4 *)(lVar3 + 0x10) = 0;
  }
  if ((bVar1 & 1) != 0) {
    FUN_006622b8(lVar3 + 8);
  }
LAB_0065c238:
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006622b8((byte *)(param_1 + 8));
  return;
}


// ===== 0065c284  FUN_0065c284 =====

byte * FUN_0065c284(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  byte *pbVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  
  do {
    while( true ) {
      if ((byte *)*param_3 <= param_2) {
        iVar1 = (int)param_2 - *(int *)(param_3 + 1);
        if (*(int *)((long)param_3 + 0x1c) == iVar1) {
          pbVar4 = (byte *)0x0;
          if (param_3[2] != 0 || iVar1 < 1) {
            pbVar4 = param_2;
          }
          return pbVar4;
        }
        auVar6 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
        param_2 = auVar6._0_8_;
        if ((auVar6 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
          return param_2;
        }
      }
      pbVar4 = param_2 + 1;
      uVar5 = (uint)*param_2;
      if (-1 < (char)*param_2) break;
      uVar5 = (uVar5 + (uint)*pbVar4 * 0x80) - 0x80;
      if (-1 < (char)*pbVar4) {
        pbVar4 = param_2 + 2;
        break;
      }
      auVar7 = FUN_0066fe50(param_2,uVar5);
      pbVar4 = auVar7._0_8_;
      if (auVar7._8_4_ != 10) goto LAB_0065c300;
LAB_0065c2a4:
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if (*(long *)(param_1 + 0x18) == 0) {
        puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar2 = (ulong *)*puVar2;
        }
        uVar3 = FUN_00661d68(puVar2);
        *(undefined8 *)(param_1 + 0x18) = uVar3;
        param_2 = (byte *)FUN_0066fa8c(param_3,uVar3,pbVar4);
        if (param_2 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        param_2 = (byte *)FUN_0066fa8c(param_3);
        if (param_2 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
    }
    auVar7._8_4_ = uVar5;
    auVar7._0_8_ = pbVar4;
    if (uVar5 == 10) goto LAB_0065c2a4;
LAB_0065c300:
    uVar5 = auVar7._8_4_;
    pbVar4 = auVar7._0_8_;
    if ((uVar5 == 0) || ((uVar5 & 7) == 4)) {
      if (pbVar4 != (byte *)0x0) {
        *(uint *)(param_3 + 10) = uVar5 - 1;
        return pbVar4;
      }
      return (byte *)0x0;
    }
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      uVar3 = FUN_00661fa4(param_1 + 8);
      param_2 = (byte *)FUN_006fbab8(uVar5,uVar3,pbVar4,param_3);
      if (param_2 == (byte *)0x0) {
        return (byte *)0x0;
      }
    }
    else {
      param_2 = (byte *)FUN_006fbab8(uVar5,(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,pbVar4
                                     ,param_3);
      if (param_2 == (byte *)0x0) {
        return (byte *)0x0;
      }
    }
  } while( true );
}


// ===== 0065c42c  FUN_0065c42c =====

undefined8 FUN_0065c42c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    param_2 = FUN_00678d18(1,*(long *)(param_1 + 0x18),
                           *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar1 = FUN_006fc418((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8,param_2,param_3);
  return uVar1;
}


// ===== 0065c498  FUN_0065c498 =====

void FUN_0065c498(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    FUN_006e5694(param_1,0,param_1 + 0x14);
    return;
  }
  lVar1 = FUN_0065ea34(*(undefined8 *)(param_1 + 0x18));
  FUN_006e5694(param_1,lVar1 + (ulong)(((uint)LZCOUNT((uint)lVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1,
               param_1 + 0x14);
  return;
}


// ===== 0065c500  FUN_0065c500 =====

void FUN_0065c500(long param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  ulong *puVar3;
  
  if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
    if (lVar2 == 0) {
      puVar3 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffc);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar3 = (ulong *)*puVar3;
      }
      lVar2 = FUN_00661d68(puVar3);
      *(long *)(param_1 + 0x18) = lVar2;
    }
    ppuVar1 = &PTR_PTR_FUN_007a9f68;
    if (*(undefined ***)(param_2 + 0x18) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_2 + 0x18);
    }
    FUN_0065ec98(lVar2,ppuVar1);
  }
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006621e0(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc) + 8);
  return;
}


// ===== 0065c590  FUN_0065c590 =====

undefined ** FUN_0065c590(void)

{
  return &PTR_FUN_00798c70;
}


// ===== 0065c59c  FUN_0065c59c =====

undefined8 FUN_0065c59c(void)

{
  return 1;
}


// ===== 0065c5a4  FUN_0065c5a4 =====

void FUN_0065c5a4(void)

{
  FUN_00684dd0(FUN_0064dd54,&DAT_007ae908,&DAT_007ae9f0);
  return;
}


// ===== 0065c5bc  FUN_0065c5bc =====

void FUN_0065c5bc(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_007a3008;
  uVar1 = param_2 | 2;
  if ((param_3 & 1) == 0) {
    uVar1 = param_2;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = uVar1;
  return;
}


// ===== 0065c5e4  FUN_0065c5e4 =====

void FUN_0065c5e4(undefined **param_1)

{
  ulong uVar1;
  undefined *puVar2;
  
  if (((ulong)param_1[1] & 1) == 0) {
    uVar1 = (ulong)param_1[1] & 0xfffffffffffffffc;
  }
  else {
                    /* try { // try from 0065c604 to 0065c607 has its CatchHandler @ 0065c678 */
    uVar1 = FUN_00662218();
  }
  if (((param_1 != &PTR_PTR_FUN_007a9ed0) && (uVar1 == 0)) &&
     (puVar2 = param_1[3], puVar2 != (undefined *)0x0)) {
    FUN_0065e3c8(puVar2);
    free(puVar2);
  }
  *param_1 = (undefined *)&PTR_FUN_00799110;
  if ((((uint)param_1[1] >> 1 & 1) != 0) && (puVar2 = param_1[1] + -2, puVar2 != (undefined *)0x0))
  {
    FUN_00662da0(puVar2);
    free(puVar2);
    return;
  }
  return;
}


// ===== 0065c67c  FUN_0065c67c =====

void FUN_0065c67c(void *param_1)

{
  FUN_0065c5e4();
  free(param_1);
  return;
}


// ===== 0065c6a0  FUN_0065c6a0 =====

void FUN_0065c6a0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


