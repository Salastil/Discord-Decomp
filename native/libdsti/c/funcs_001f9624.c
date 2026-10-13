// ===== 001f9624  FUN_001f9624 =====

void FUN_001f9624(long param_1,undefined8 *param_2)

{
  ulong __size;
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = param_2[1];
  __size = lVar3 + 5;
  if (__size < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (__size <= uVar2) {
      __size = uVar2;
    }
    param_2[2] = __size;
    pvVar1 = realloc((void *)*param_2,__size);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
  }
  *(undefined1 *)((undefined4 *)((long)pvVar1 + lVar3) + 1) = 0x3a;
  *(undefined4 *)((long)pvVar1 + lVar3) = 0x3a647473;
  param_2[1] = param_2[1] + 5;
  plVar4 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
  if (*(char *)((long)plVar4 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001f96e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}


// ===== 001f96e8  FUN_001f96e8 =====

void FUN_001f96e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001f96f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  return;
}


// ===== 001f96f8  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f96fc  FUN_001f96fc =====

void FUN_001f96fc(long param_1)

{
  FUN_001f3a54(param_1 + 0x10);
  return;
}


// ===== 001f9704  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f9708  FUN_001f9708 =====

void FUN_001f9708(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = param_2[1];
  uVar6 = lVar5 + 0xc;
  if (uVar6 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar6 <= uVar4) {
      uVar6 = uVar4;
    }
    param_2[2] = uVar6;
    pvVar3 = realloc((void *)*param_2,uVar6);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_001f97e8;
    lVar5 = param_2[1];
  }
  uVar2 = s__enable_if__00144e98._0_8_;
  pcVar1 = (char *)((long)pvVar3 + lVar5);
  pcVar1[8] = '_';
  pcVar1[9] = 'i';
  pcVar1[10] = 'f';
  pcVar1[0xb] = ':';
  *(undefined8 *)pcVar1 = uVar2;
  param_2[1] = param_2[1] + 0xc;
  FUN_001f3a54(param_1 + 0x10,param_2);
  lVar5 = param_2[1];
  uVar6 = lVar5 + 1;
  if (uVar6 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar6 <= uVar4) {
      uVar6 = uVar4;
    }
    param_2[2] = uVar6;
    pvVar3 = realloc((void *)*param_2,uVar6);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
LAB_001f97e8:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar5 = param_2[1];
    uVar6 = lVar5 + 1;
  }
  param_2[1] = uVar6;
  *(undefined1 *)((long)pvVar3 + lVar5) = 0x5d;
  return;
}


// ===== 001f97ec  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f97f0  FUN_001f97f0 =====

undefined8 FUN_001f97f0(void)

{
  return 1;
}


// ===== 001f97f8  FUN_001f97f8 =====

undefined8 FUN_001f97f8(void)

{
  return 1;
}


// ===== 001f9800  FUN_001f9800 =====

void FUN_001f9800(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    if ((*(char *)((long)puVar2 + 9) != '\0') &&
       ((*(char *)((long)puVar2 + 9) != '\x02' ||
        (uVar3 = (**(code **)*puVar2)(puVar2,param_2), (uVar3 & 1) == 0)))) {
      lVar6 = param_2[1];
      uVar3 = lVar6 + 1;
      if (uVar3 < (ulong)param_2[2]) {
        pvVar4 = (void *)*param_2;
      }
      else {
        uVar5 = param_2[2] << 1;
        if (uVar3 <= uVar5) {
          uVar3 = uVar5;
        }
        param_2[2] = uVar3;
        pvVar4 = realloc((void *)*param_2,uVar3);
        *param_2 = pvVar4;
        if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar6 = param_2[1];
      }
      *(undefined1 *)((long)pvVar4 + lVar6) = 0x20;
      param_2[1] = param_2[1] + 1;
    }
  }
  plVar1 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  if (*(char *)((long)plVar1 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001f98ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  return;
}


// ===== 001f98f4  FUN_001f98f4 =====

void FUN_001f98f4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  void *pvVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = param_2[1];
  uVar1 = lVar7 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar6 = param_2[2] << 1;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_001f9c1c;
    lVar7 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar7) = 0x28;
  param_2[1] = param_2[1] + 1;
  FUN_001f3a54(param_1 + 0x20,param_2);
  lVar7 = param_2[1];
  uVar1 = lVar7 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar6 = param_2[2] << 1;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_001f9c1c;
    lVar7 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar7) = 0x29;
  param_2[1] = param_2[1] + 1;
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  }
  uVar5 = *(uint *)(param_1 + 0x38);
  if ((uVar5 & 1) != 0) {
    lVar7 = param_2[1];
    uVar1 = lVar7 + 6;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar6 = param_2[2] << 1;
      if (uVar1 <= uVar6) {
        uVar1 = uVar6;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_001f9c1c;
      lVar7 = param_2[1];
    }
    *(undefined2 *)((undefined4 *)((long)pvVar3 + lVar7) + 1) = 0x7473;
    *(undefined4 *)((long)pvVar3 + lVar7) = 0x6e6f6320;
    param_2[1] = param_2[1] + 6;
    uVar5 = *(uint *)(param_1 + 0x38);
  }
  if ((uVar5 >> 1 & 1) != 0) {
    lVar7 = param_2[1];
    uVar1 = lVar7 + 9;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar6 = param_2[2] << 1;
      if (uVar1 <= uVar6) {
        uVar1 = uVar6;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_001f9c1c;
      lVar7 = param_2[1];
    }
    uVar2 = s_volatile_00146125._0_8_;
    ((char *)((long)pvVar3 + lVar7))[8] = 'e';
    *(undefined8 *)((long)pvVar3 + lVar7) = uVar2;
    param_2[1] = param_2[1] + 9;
    uVar5 = *(uint *)(param_1 + 0x38);
  }
  if ((uVar5 >> 2 & 1) != 0) {
    lVar7 = param_2[1];
    uVar1 = lVar7 + 9;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar6 = param_2[2] << 1;
      if (uVar1 <= uVar6) {
        uVar1 = uVar6;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_001f9c1c;
      lVar7 = param_2[1];
    }
    uVar2 = s_restrict_001459ab._0_8_;
    ((char *)((long)pvVar3 + lVar7))[8] = 't';
    *(undefined8 *)((long)pvVar3 + lVar7) = uVar2;
    param_2[1] = param_2[1] + 9;
  }
  if (*(char *)(param_1 + 0x3c) == '\x02') {
    lVar7 = param_2[1];
    uVar1 = lVar7 + 3;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar6 = param_2[2] << 1;
      if (uVar1 <= uVar6) {
        uVar1 = uVar6;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
LAB_001f9c1c:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar7 = param_2[1];
    }
    *(undefined1 *)((undefined2 *)((long)pvVar3 + lVar7) + 1) = 0x26;
    *(undefined2 *)((long)pvVar3 + lVar7) = 0x2620;
    lVar7 = 3;
  }
  else {
    if (*(char *)(param_1 + 0x3c) != '\x01') goto LAB_001f9bcc;
    lVar7 = param_2[1];
    uVar1 = lVar7 + 2;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar6 = param_2[2] << 1;
      if (uVar1 <= uVar6) {
        uVar1 = uVar6;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_001f9c1c;
      lVar7 = param_2[1];
    }
    *(undefined2 *)((long)pvVar3 + lVar7) = 0x2620;
    lVar7 = 2;
  }
  param_2[1] = param_2[1] + lVar7;
LAB_001f9bcc:
  plVar4 = *(long **)(param_1 + 0x30);
  if ((plVar4 != (long *)0x0) &&
     ((**(code **)(*plVar4 + 0x20))(plVar4,param_2), *(char *)((long)plVar4 + 9) != '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x001f9c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
    return;
  }
  return;
}


// ===== 001f9c20  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f9c24  FUN_001f9c24 =====

void FUN_001f9c24(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  size_t __n;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar6 + 0x20))(plVar6);
  if (*(char *)((long)plVar6 + 9) != '\x01') {
    (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
  }
  lVar5 = param_2[1];
  uVar1 = lVar5 + 2;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_001f9d84;
    lVar5 = param_2[1];
  }
  *(undefined2 *)((long)pvVar2 + lVar5) = 0x2820;
  lVar5 = param_2[1] + 2;
  param_2[1] = lVar5;
  pvVar2 = *(void **)(param_1 + 0x18);
  __n = *(long *)(param_1 + 0x20) - (long)pvVar2;
  if (__n != 0) {
    uVar1 = lVar5 + __n;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_001f9d84;
      lVar5 = param_2[1];
    }
    memmove((void *)((long)pvVar3 + lVar5),pvVar2,__n);
    lVar5 = param_2[1] + __n;
    param_2[1] = lVar5;
  }
  uVar1 = lVar5 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_001f9d84:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar5) = 0x29;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 001f9d88  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f9d8c  FUN_001f9d8c =====

void FUN_001f9d8c(long *param_1)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  void *pvVar11;
  uint uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined1 uVar15;
  undefined1 auVar16 [16];
  undefined8 *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pcVar8 = (char *)*param_1;
  pcVar1 = (char *)param_1[1];
  if ((pcVar8 == pcVar1) || (*pcVar8 != 'r')) {
    uVar12 = 0;
  }
  else {
    pcVar8 = pcVar8 + 1;
    uVar12 = 4;
    *param_1 = (long)pcVar8;
  }
  pcVar9 = pcVar1;
  if (pcVar8 != pcVar1) {
    if (*pcVar8 == 'V') {
      pcVar8 = pcVar8 + 1;
      uVar12 = uVar12 | 2;
      *param_1 = (long)pcVar8;
    }
    if ((pcVar8 != pcVar1) && (pcVar9 = pcVar8, *pcVar8 == 'K')) {
      uVar12 = uVar12 | 1;
      *param_1 = (long)(pcVar8 + 1);
      pcVar9 = pcVar8 + 1;
    }
  }
  if (((ulong)((long)pcVar1 - (long)pcVar9) < 2) || (*pcVar9 != 'D')) goto LAB_001f9fec;
  if (pcVar9[1] == 'o') {
    pvVar11 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar9 + 2);
    lVar7 = *(long *)((long)pvVar11 + 8);
    puVar4 = (undefined8 *)pvVar11;
    if (0xfef < lVar7 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) {
LAB_001fa288:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar7 = 0;
      *puVar4 = pvVar11;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar7 + 0x20;
    puVar13 = (undefined8 *)((long)puVar4 + lVar7 + 0x10);
    *puVar13 = &PTR_FUN_0020c5d8;
    *(undefined4 *)((long)puVar4 + lVar7 + 0x18) = 0x1010107;
    *(char **)((long)puVar4 + lVar7 + 0x20) = "noexcept";
    *(char **)((long)puVar4 + lVar7 + 0x28) = "";
LAB_001f9ff0:
    pcVar8 = (char *)*param_1;
    pcVar1 = (char *)param_1[1];
    if (((1 < (ulong)((long)pcVar1 - (long)pcVar8)) && (*pcVar8 == 'D')) && (pcVar8[1] == 'x')) {
      pcVar8 = pcVar8 + 2;
      *param_1 = (long)pcVar8;
    }
    if ((pcVar8 != pcVar1) && (*pcVar8 == 'F')) {
      pcVar9 = pcVar8 + 1;
      *param_1 = (long)pcVar9;
      if ((pcVar9 != pcVar1) && (*pcVar9 == 'Y')) {
        *param_1 = (long)(pcVar8 + 2);
      }
      puVar5 = (undefined8 *)FUN_001e9ce4(param_1);
      puVar4 = puVar5;
      if (puVar5 != (undefined8 *)0x0) {
        lVar7 = param_1[2];
        lVar14 = 1;
        lVar10 = param_1[3];
        do {
          while( true ) {
            pcVar8 = (char *)*param_1;
            if (pcVar8 != (char *)param_1[1]) break;
LAB_001fa0b0:
            if (1 < (ulong)(param_1[1] - (long)pcVar8)) {
              cVar2 = *pcVar8;
              if (cVar2 == 'R') {
                if (pcVar8[1] == 'E') {
                  uVar15 = 1;
                  lVar14 = 2;
                  goto LAB_001fa15c;
                }
                cVar2 = *pcVar8;
              }
              if ((cVar2 == 'O') && (pcVar8[1] == 'E')) {
                lVar14 = 2;
                uVar15 = 2;
                goto LAB_001fa15c;
              }
            }
            puVar4 = (undefined8 *)FUN_001e9ce4(param_1);
            local_70 = puVar4;
            if (puVar4 == (undefined8 *)0x0) goto LAB_001fa110;
            FUN_001ec198(param_1 + 2,&local_70);
          }
          if (*pcVar8 == 'E') {
            uVar15 = 0;
LAB_001fa15c:
            lVar7 = (lVar10 - lVar7 >> 3) * 8;
            *param_1 = (long)(pcVar8 + lVar14);
            auVar16 = FUN_001f530c(param_1,param_1[2] + lVar7,param_1[3]);
            pvVar11 = (void *)param_1[0x266];
            param_1[3] = param_1[2] + lVar7;
            lVar7 = *(long *)((long)pvVar11 + 8);
            puVar6 = (undefined8 *)pvVar11;
            if (0xfef < lVar7 + 0x40U) {
              puVar6 = (undefined8 *)malloc(0x1000);
              if (puVar6 == (undefined8 *)0x0) goto LAB_001fa288;
              lVar7 = 0;
              *puVar6 = pvVar11;
              puVar6[1] = 0;
              param_1[0x266] = (long)puVar6;
            }
            *(long *)((long)puVar6 + 8) = lVar7 + 0x40;
            puVar4 = (undefined8 *)((long)puVar6 + lVar7 + 0x10);
            *puVar4 = &PTR_FUN_0020e088;
            *(undefined4 *)((long)puVar6 + lVar7 + 0x18) = 0x1000f;
            *(undefined8 **)((long)puVar6 + lVar7 + 0x20) = puVar5;
            *(undefined1 (*) [16])((long)puVar6 + lVar7 + 0x28) = auVar16;
            *(uint *)((long)puVar6 + lVar7 + 0x38) = uVar12;
            *(undefined1 *)((long)puVar6 + lVar7 + 0x3c) = uVar15;
            *(undefined8 **)((long)puVar6 + lVar7 + 0x40) = puVar13;
            break;
          }
          if (*pcVar8 != 'v') goto LAB_001fa0b0;
          *param_1 = (long)(pcVar8 + 1);
        } while( true );
      }
      goto LAB_001fa110;
    }
  }
  else {
    if (*pcVar9 != 'D') {
LAB_001f9fec:
      puVar13 = (undefined8 *)0x0;
      goto LAB_001f9ff0;
    }
    if (pcVar9[1] != 'O') {
      if ((*pcVar9 == 'D') && (pcVar9[1] == 'w')) {
        pcVar9 = pcVar9 + 2;
        *param_1 = (long)pcVar9;
        lVar7 = param_1[2];
        lVar10 = param_1[3];
        if (pcVar9 == pcVar1) goto LAB_001f9fc0;
        while (*pcVar9 != 'E') {
LAB_001f9fc0:
          do {
            puVar4 = (undefined8 *)FUN_001e9ce4(param_1);
            local_70 = puVar4;
            if (puVar4 == (undefined8 *)0x0) goto LAB_001fa110;
            FUN_001ec198(param_1 + 2,&local_70);
            pcVar9 = (char *)*param_1;
          } while (pcVar9 == (char *)param_1[1]);
        }
        lVar7 = (lVar10 - lVar7 >> 3) * 8;
        *param_1 = (long)(pcVar9 + 1);
        auVar16 = FUN_001f530c(param_1,param_1[2] + lVar7,param_1[3]);
        pvVar11 = (void *)param_1[0x266];
        param_1[3] = param_1[2] + lVar7;
        lVar7 = *(long *)((long)pvVar11 + 8);
        puVar4 = (undefined8 *)pvVar11;
        if (0xfef < lVar7 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_001fa288;
          lVar7 = 0;
          *puVar4 = pvVar11;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        *(long *)((long)puVar4 + 8) = lVar7 + 0x20;
        puVar13 = (undefined8 *)((long)puVar4 + lVar7 + 0x10);
        *puVar13 = &PTR_FUN_0020e018;
        *(undefined4 *)((long)puVar4 + lVar7 + 0x18) = 0x1010111;
        *(undefined1 (*) [16])((long)puVar4 + lVar7 + 0x20) = auVar16;
        goto LAB_001f9ff0;
      }
      goto LAB_001f9fec;
    }
    *param_1 = (long)(pcVar9 + 2);
    puVar4 = (undefined8 *)FUN_001ede40(param_1);
    if (puVar4 == (undefined8 *)0x0) goto LAB_001fa110;
    pcVar8 = (char *)*param_1;
    if ((pcVar8 != (char *)param_1[1]) && (*pcVar8 == 'E')) {
      pvVar11 = (void *)param_1[0x266];
      *param_1 = (long)(pcVar8 + 1);
      lVar7 = *(long *)((long)pvVar11 + 8);
      puVar5 = (undefined8 *)pvVar11;
      if (0xfef < lVar7 + 0x20U) {
        puVar5 = (undefined8 *)malloc(0x1000);
        if (puVar5 == (undefined8 *)0x0) goto LAB_001fa288;
        lVar7 = 0;
        *puVar5 = pvVar11;
        puVar5[1] = 0;
        param_1[0x266] = (long)puVar5;
      }
      *(long *)((long)puVar5 + 8) = lVar7 + 0x20;
      puVar13 = (undefined8 *)((long)puVar5 + lVar7 + 0x10);
      *puVar13 = &PTR_FUN_0020dfa8;
      *(undefined4 *)((long)puVar5 + lVar7 + 0x18) = 0x1010110;
      *(undefined8 **)((long)puVar5 + lVar7 + 0x20) = puVar4;
      goto LAB_001f9ff0;
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_001fa110:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


// ===== 001fa28c  FUN_001fa28c =====

undefined8 * FUN_001fa28c(long *param_1)

{
  byte *pbVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  void *pvVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  
  pbVar15 = (byte *)*param_1;
  pbVar1 = (byte *)param_1[1];
  if (pbVar15 == pbVar1) {
LAB_001fa350:
    uVar11 = 0;
  }
  else {
    if (*pbVar15 == 0x55) {
      pbVar13 = pbVar15 + 1;
      *param_1 = (long)pbVar13;
      if (pbVar1 == pbVar13) {
        return (undefined8 *)0x0;
      }
      if (9 < *pbVar13 - 0x30) {
        return (undefined8 *)0x0;
      }
      *param_1 = (long)(pbVar15 + 2);
      uVar8 = (ulong)pbVar15[1];
      pbVar15 = pbVar15 + 2;
      while ((uVar8 = uVar8 - 0x30, pbVar1 != pbVar15 && (*pbVar15 - 0x30 < 10))) {
        *param_1 = (long)(pbVar15 + 1);
        uVar8 = (ulong)*pbVar15 + uVar8 * 10;
        pbVar15 = pbVar15 + 1;
      }
      if ((ulong)((long)pbVar1 - (long)pbVar15) < uVar8) {
        return (undefined8 *)0x0;
      }
      pbVar13 = pbVar15 + uVar8;
      *param_1 = (long)pbVar13;
      if (pbVar15 == pbVar13) {
        return (undefined8 *)0x0;
      }
      if (((((((ulong)((long)pbVar13 - (long)pbVar15) < 9) || (*pbVar15 != 0x6f)) ||
            (pbVar15[1] != 0x62)) || ((pbVar15[2] != 0x6a || (pbVar15[3] != 99)))) ||
          ((pbVar15[4] != 0x70 || ((pbVar15[5] != 0x72 || (pbVar15[6] != 0x6f)))))) ||
         ((pbVar15[7] != 0x74 || (pbVar15[8] != 0x6f)))) {
        lVar9 = FUN_001fa28c(param_1);
        if (lVar9 == 0) {
          return (undefined8 *)0x0;
        }
        puVar16 = (undefined8 *)param_1[0x266];
        lVar7 = puVar16[1];
        puVar5 = puVar16;
        if (0xfef < lVar7 + 0x30U) {
          puVar5 = (undefined8 *)malloc(0x1000);
          if (puVar5 == (undefined8 *)0x0) goto LAB_001fa678;
          lVar7 = 0;
          *puVar5 = puVar16;
          puVar5[1] = 0;
          param_1[0x266] = (long)puVar5;
        }
        lVar10 = (long)puVar5 + lVar7;
        uVar11 = 0x102;
        ppuVar6 = &PTR_FUN_0020e168;
        goto LAB_001fa5ac;
      }
      pbVar14 = pbVar15 + 9;
      *param_1 = (long)pbVar14;
      param_1[1] = (long)pbVar13;
      if ((pbVar13 == pbVar14) || (9 < *pbVar14 - 0x30)) {
LAB_001fa5e4:
        pbVar14 = (byte *)0x0;
        pbVar15 = (byte *)0x0;
      }
      else {
        if (pbVar14 == pbVar13) {
          uVar8 = 0xffffffffffffffd0;
          pbVar15 = pbVar13;
        }
        else {
          lVar9 = 0;
          pbVar15 = pbVar14;
          do {
            pbVar14 = pbVar15 + 1;
            *param_1 = (long)pbVar14;
            uVar8 = (lVar9 + (ulong)*pbVar15) - 0x30;
            pbVar15 = pbVar14;
            if ((pbVar13 == pbVar14) || (9 < *pbVar14 - 0x30)) goto LAB_001fa5d8;
            lVar9 = uVar8 * 10;
          } while (pbVar13 != pbVar14);
          uVar8 = lVar9 - 0x30;
          pbVar15 = pbVar13;
        }
LAB_001fa5d8:
        if ((ulong)((long)pbVar13 - (long)pbVar14) < uVar8) goto LAB_001fa5e4;
        pbVar14 = pbVar15 + uVar8;
        *param_1 = (long)pbVar14;
      }
      *param_1 = (long)pbVar13;
      param_1[1] = (long)pbVar1;
      if ((pbVar15 == pbVar14) || (lVar9 = FUN_001fa28c(param_1), lVar9 == 0)) {
        return (undefined8 *)0x0;
      }
      puVar16 = (undefined8 *)param_1[0x266];
      lVar7 = puVar16[1];
      puVar5 = puVar16;
      if (0xfef < lVar7 + 0x30U) {
        puVar5 = (undefined8 *)malloc(0x1000);
        if (puVar5 == (undefined8 *)0x0) goto LAB_001fa678;
        lVar7 = 0;
        *puVar5 = puVar16;
        puVar5[1] = 0;
        param_1[0x266] = (long)puVar5;
      }
      lVar10 = (long)puVar5 + lVar7;
      uVar11 = 0x10a;
      ppuVar6 = &PTR_FUN_0020e0f8;
      pbVar13 = pbVar14;
LAB_001fa5ac:
      puVar5[1] = lVar7 + 0x30;
      *(undefined8 *)(lVar10 + 0x10) = ppuVar6;
      *(uint *)(lVar10 + 0x18) = uVar11 | 0x1010000;
      *(long *)(lVar10 + 0x20) = lVar9;
      *(byte **)(lVar10 + 0x28) = pbVar15;
      *(byte **)(lVar10 + 0x30) = pbVar13;
      return (undefined8 *)(lVar10 + 0x10);
    }
    if (*pbVar15 != 0x72) goto LAB_001fa350;
    pbVar15 = pbVar15 + 1;
    uVar11 = 4;
    *param_1 = (long)pbVar15;
  }
  if (pbVar15 != pbVar1) {
    if (*pbVar15 == 0x56) {
      pbVar15 = pbVar15 + 1;
      uVar11 = uVar11 | 2;
      *param_1 = (long)pbVar15;
    }
    if ((pbVar15 != pbVar1) && (*pbVar15 == 0x4b)) {
      uVar11 = uVar11 | 1;
      *param_1 = (long)(pbVar15 + 1);
    }
  }
  puVar16 = (undefined8 *)FUN_001e9ce4(param_1);
  puVar5 = puVar16;
  if ((puVar16 != (undefined8 *)0x0) && (uVar11 != 0)) {
    pvVar12 = (void *)param_1[0x266];
    lVar9 = *(long *)((long)pvVar12 + 8);
    puVar4 = (undefined8 *)pvVar12;
    if (0xfef < lVar9 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) {
LAB_001fa678:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar9 = 0;
      *puVar4 = pvVar12;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
    uVar3 = *(undefined2 *)((long)puVar16 + 9);
    uVar2 = *(undefined1 *)((long)puVar16 + 0xb);
    puVar5 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
    *puVar5 = &PTR_FUN_0020e1d8;
    *(undefined8 **)((long)puVar4 + lVar9 + 0x20) = puVar16;
    *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 3;
    *(uint *)((long)puVar4 + lVar9 + 0x1c) = uVar11;
    *(undefined2 *)((long)puVar4 + lVar9 + 0x19) = uVar3;
    *(undefined1 *)((long)puVar4 + lVar9 + 0x1b) = uVar2;
  }
  return puVar5;
}


// ===== 001fa67c  FUN_001fa67c =====

undefined8 * FUN_001fa67c(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  char *pcVar5;
  char *pcVar6;
  void *pvVar7;
  
  pcVar5 = (char *)*param_1;
  if ((1 < (ulong)(param_1[1] - (long)pcVar5)) && (*pcVar5 == 'T')) {
    if (pcVar5[1] == 's') {
      pcVar6 = "struct";
      *param_1 = (long)(pcVar5 + 2);
      pcVar5 = "";
      goto LAB_001fa73c;
    }
    if (*pcVar5 == 'T') {
      if (pcVar5[1] == 'u') {
        pcVar6 = "union";
        *param_1 = (long)(pcVar5 + 2);
        pcVar5 = "";
        goto LAB_001fa73c;
      }
      if ((*pcVar5 == 'T') && (pcVar5[1] == 'e')) {
        pcVar6 = "enum";
        *param_1 = (long)(pcVar5 + 2);
        pcVar5 = "";
        goto LAB_001fa73c;
      }
    }
  }
  pcVar5 = (char *)0x0;
  pcVar6 = (char *)0x0;
LAB_001fa73c:
  puVar1 = (undefined8 *)FUN_001eb464(param_1,0);
  puVar4 = puVar1;
  if ((puVar1 != (undefined8 *)0x0) && (pcVar6 != pcVar5)) {
    pvVar7 = (void *)param_1[0x266];
    lVar3 = *(long *)((long)pvVar7 + 8);
    puVar2 = (undefined8 *)pvVar7;
    if (0xfef < lVar3 + 0x30U) {
      puVar2 = (undefined8 *)malloc(0x1000);
      if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar3 = 0;
      *puVar2 = pvVar7;
      puVar2[1] = 0;
      param_1[0x266] = (long)puVar2;
    }
    *(long *)((long)puVar2 + 8) = lVar3 + 0x30;
    puVar4 = (undefined8 *)((long)puVar2 + lVar3 + 0x10);
    *puVar4 = &PTR_FUN_0020e408;
    *(undefined8 **)((long)puVar2 + lVar3 + 0x30) = puVar1;
    *(undefined4 *)((long)puVar2 + lVar3 + 0x18) = 0x1010106;
    *(char **)((long)puVar2 + lVar3 + 0x20) = pcVar6;
    *(char **)((long)puVar2 + lVar3 + 0x28) = pcVar5;
  }
  return puVar4;
}


// ===== 001fa7d4  FUN_001fa7d4 =====

void FUN_001fa7d4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = param_2[1];
  uVar1 = lVar5 + 9;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_001fa8e0;
    lVar5 = param_2[1];
  }
  uVar2 = s_noexcept__0014534e._0_8_;
  ((char *)((long)pvVar3 + lVar5))[8] = '(';
  *(undefined8 *)((long)pvVar3 + lVar5) = uVar2;
  param_2[1] = param_2[1] + 9;
  plVar6 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
  if (*(char *)((long)plVar6 + 9) != '\x01') {
    (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
  }
  lVar5 = param_2[1];
  uVar1 = lVar5 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
LAB_001fa8e0:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar5) = 0x29;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 001fa8e4  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001fa8e8  FUN_001fa8e8 =====

void FUN_001fa8e8(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = param_2[1];
  uVar4 = lVar3 + 6;
  if (uVar4 < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (uVar4 <= uVar2) {
      uVar4 = uVar2;
    }
    param_2[2] = uVar4;
    pvVar1 = realloc((void *)*param_2,uVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) goto LAB_001fa9c0;
    lVar3 = param_2[1];
  }
  *(undefined2 *)((undefined4 *)((long)pvVar1 + lVar3) + 1) = 0x2877;
  *(undefined4 *)((long)pvVar1 + lVar3) = 0x6f726874;
  param_2[1] = param_2[1] + 6;
  FUN_001f3a54(param_1 + 0x10,param_2);
  lVar3 = param_2[1];
  uVar4 = lVar3 + 1;
  if (uVar4 < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (uVar4 <= uVar2) {
      uVar4 = uVar2;
    }
    param_2[2] = uVar4;
    pvVar1 = realloc((void *)*param_2,uVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
LAB_001fa9c0:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
    uVar4 = lVar3 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar3) = 0x29;
  return;
}


// ===== 001fa9c4  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001fa9c8  FUN_001fa9c8 =====

undefined8 FUN_001fa9c8(void)

{
  return 1;
}


// ===== 001fa9d0  FUN_001fa9d0 =====

undefined8 FUN_001fa9d0(void)

{
  return 1;
}


// ===== 001fa9d8  FUN_001fa9d8 =====

void FUN_001fa9d8(long param_1,undefined8 *param_2)

{
  ulong __size;
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  lVar3 = param_2[1];
  __size = lVar3 + 1;
  if (__size < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (__size <= uVar2) {
      __size = uVar2;
    }
    param_2[2] = __size;
    pvVar1 = realloc((void *)*param_2,__size);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
  }
  *(undefined1 *)((long)pvVar1 + lVar3) = 0x20;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 001faa58  FUN_001faa58 =====

void FUN_001faa58(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  
  lVar4 = param_2[1];
  uVar6 = lVar4 + 1;
  if (uVar6 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    param_2[2] = uVar6;
    pvVar2 = realloc((void *)*param_2,uVar6);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_001fadcc;
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar4) = 0x28;
  param_2[1] = param_2[1] + 1;
  FUN_001f3a54(param_1 + 0x18,param_2);
  lVar4 = param_2[1];
  uVar6 = lVar4 + 1;
  if (uVar6 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    param_2[2] = uVar6;
    pvVar2 = realloc((void *)*param_2,uVar6);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_001fadcc;
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar4) = 0x29;
  param_2[1] = param_2[1] + 1;
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))(*(long **)(param_1 + 0x10),param_2);
  uVar3 = *(uint *)(param_1 + 0x28);
  if ((uVar3 & 1) != 0) {
    lVar4 = param_2[1];
    uVar6 = lVar4 + 6;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar6 <= uVar5) {
        uVar6 = uVar5;
      }
      param_2[2] = uVar6;
      pvVar2 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_001fadcc;
      lVar4 = param_2[1];
    }
    *(undefined2 *)((undefined4 *)((long)pvVar2 + lVar4) + 1) = 0x7473;
    *(undefined4 *)((long)pvVar2 + lVar4) = 0x6e6f6320;
    param_2[1] = param_2[1] + 6;
    uVar3 = *(uint *)(param_1 + 0x28);
  }
  if ((uVar3 >> 1 & 1) != 0) {
    lVar4 = param_2[1];
    uVar6 = lVar4 + 9;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar6 <= uVar5) {
        uVar6 = uVar5;
      }
      param_2[2] = uVar6;
      pvVar2 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_001fadcc;
      lVar4 = param_2[1];
    }
    uVar1 = s_volatile_00146125._0_8_;
    ((char *)((long)pvVar2 + lVar4))[8] = 'e';
    *(undefined8 *)((long)pvVar2 + lVar4) = uVar1;
    param_2[1] = param_2[1] + 9;
    uVar3 = *(uint *)(param_1 + 0x28);
  }
  if ((uVar3 >> 2 & 1) != 0) {
    lVar4 = param_2[1];
    uVar6 = lVar4 + 9;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar6 <= uVar5) {
        uVar6 = uVar5;
      }
      param_2[2] = uVar6;
      pvVar2 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_001fadcc;
      lVar4 = param_2[1];
    }
    uVar1 = s_restrict_001459ab._0_8_;
    ((char *)((long)pvVar2 + lVar4))[8] = 't';
    *(undefined8 *)((long)pvVar2 + lVar4) = uVar1;
    param_2[1] = param_2[1] + 9;
  }
  if (*(char *)(param_1 + 0x2c) == '\x02') {
    lVar4 = param_2[1];
    uVar6 = lVar4 + 3;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar6 <= uVar5) {
        uVar6 = uVar5;
      }
      param_2[2] = uVar6;
      pvVar2 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_001fadcc;
      lVar4 = param_2[1];
    }
    *(undefined1 *)((undefined2 *)((long)pvVar2 + lVar4) + 1) = 0x26;
    *(undefined2 *)((long)pvVar2 + lVar4) = 0x2620;
    lVar4 = 3;
LAB_001fad20:
    param_2[1] = param_2[1] + lVar4;
  }
  else if (*(char *)(param_1 + 0x2c) == '\x01') {
    lVar4 = param_2[1];
    uVar6 = lVar4 + 2;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar6 <= uVar5) {
        uVar6 = uVar5;
      }
      param_2[2] = uVar6;
      pvVar2 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_001fadcc;
      lVar4 = param_2[1];
    }
    *(undefined2 *)((long)pvVar2 + lVar4) = 0x2620;
    lVar4 = 2;
    goto LAB_001fad20;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar4 = param_2[1];
    uVar6 = lVar4 + 1;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar6 <= uVar5) {
        uVar6 = uVar5;
      }
      param_2[2] = uVar6;
      pvVar2 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
LAB_001fadcc:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar4 = param_2[1];
      uVar6 = lVar4 + 1;
    }
    param_2[1] = uVar6;
    *(undefined1 *)((long)pvVar2 + lVar4) = 0x20;
    plVar7 = *(long **)(param_1 + 0x30);
    (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
    if (*(char *)((long)plVar7 + 9) != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x001fadc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
      return;
    }
  }
  return;
}


// ===== 001fadd0  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001fadd4  FUN_001fadd4 =====

void FUN_001fadd4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  size_t __n;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar6 + 0x20))(plVar6);
  if (*(char *)((long)plVar6 + 9) != '\x01') {
    (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
  }
  lVar5 = param_2[1];
  uVar1 = lVar5 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_001faf34;
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar5) = 0x3c;
  lVar5 = param_2[1] + 1;
  param_2[1] = lVar5;
  pvVar2 = *(void **)(param_1 + 0x18);
  __n = *(long *)(param_1 + 0x20) - (long)pvVar2;
  if (__n != 0) {
    uVar1 = lVar5 + __n;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_001faf34;
      lVar5 = param_2[1];
    }
    memmove((void *)((long)pvVar3 + lVar5),pvVar2,__n);
    lVar5 = param_2[1] + __n;
    param_2[1] = lVar5;
  }
  uVar1 = lVar5 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_001faf34:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar5) = 0x3e;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 001faf38  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001faf3c  FUN_001faf3c =====

void FUN_001faf3c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  size_t __n;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar6 + 0x20))(plVar6);
  if (*(char *)((long)plVar6 + 9) != '\x01') {
    (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
  }
  lVar5 = param_2[1];
  uVar1 = lVar5 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_001fb04c;
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar5) = 0x20;
  lVar5 = param_2[1] + 1;
  param_2[1] = lVar5;
  pvVar2 = *(void **)(param_1 + 0x18);
  __n = *(long *)(param_1 + 0x20) - (long)pvVar2;
  if (__n != 0) {
    uVar1 = lVar5 + __n;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
LAB_001fb04c:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar5 = param_2[1];
    }
    memmove((void *)((long)pvVar3 + lVar5),pvVar2,__n);
    param_2[1] = param_2[1] + __n;
  }
  return;
}


// ===== 001fb050  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001fb054  FUN_001fb054 =====

ulong FUN_001fb054(long param_1)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = *(char *)((long)*(undefined8 **)(param_1 + 0x10) + 9);
  if (cVar1 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x001fb06c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x10))();
    return uVar2;
  }
  return (ulong)(cVar1 == '\0');
}


// ===== 001fb07c  FUN_001fb07c =====

ulong FUN_001fb07c(long param_1)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = *(char *)((long)*(long **)(param_1 + 0x10) + 10);
  if (cVar1 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x001fb094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 8))();
    return uVar2;
  }
  return (ulong)(cVar1 == '\0');
}


// ===== 001fb0a4  FUN_001fb0a4 =====

ulong FUN_001fb0a4(long param_1)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = *(char *)((long)*(long **)(param_1 + 0x10) + 0xb);
  if (cVar1 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x001fb0bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
    return uVar2;
  }
  return (ulong)(cVar1 == '\0');
}


// ===== 001fb0cc  FUN_001fb0cc =====

void FUN_001fb0cc(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  void *pvVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  uVar4 = *(uint *)(param_1 + 0xc);
  if ((uVar4 & 1) != 0) {
    lVar6 = param_2[1];
    uVar1 = lVar6 + 6;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_001fb23c;
      lVar6 = param_2[1];
    }
    *(undefined2 *)((undefined4 *)((long)pvVar3 + lVar6) + 1) = 0x7473;
    *(undefined4 *)((long)pvVar3 + lVar6) = 0x6e6f6320;
    param_2[1] = param_2[1] + 6;
    uVar4 = *(uint *)(param_1 + 0xc);
  }
  if ((uVar4 >> 1 & 1) != 0) {
    lVar6 = param_2[1];
    uVar1 = lVar6 + 9;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_001fb23c;
      lVar6 = param_2[1];
    }
    uVar2 = s_volatile_00146125._0_8_;
    ((char *)((long)pvVar3 + lVar6))[8] = 'e';
    *(undefined8 *)((long)pvVar3 + lVar6) = uVar2;
    param_2[1] = param_2[1] + 9;
    uVar4 = *(uint *)(param_1 + 0xc);
  }
  if ((uVar4 >> 2 & 1) != 0) {
    lVar6 = param_2[1];
    uVar1 = lVar6 + 9;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
LAB_001fb23c:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar6 = param_2[1];
    }
    uVar2 = s_restrict_001459ab._0_8_;
    ((char *)((long)pvVar3 + lVar6))[8] = 't';
    *(undefined8 *)((long)pvVar3 + lVar6) = uVar2;
    param_2[1] = param_2[1] + 9;
  }
  return;
}


// ===== 001fb240  FUN_001fb240 =====

void FUN_001fb240(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001fb24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))();
  return;
}


// ===== 001fb250  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001fb254  FUN_001fb254 =====

void FUN_001fb254(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = param_2[1];
  uVar1 = lVar5 + 0xd;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_001fb360;
    lVar5 = param_2[1];
  }
  uVar2 = CONCAT35(s_pixel_vector__00145aad._5_3_,s_pixel_vector__00145aad._0_5_);
  *(ulong *)((long)pvVar3 + lVar5 + 5) =
       CONCAT53(s_pixel_vector__00145aad._8_5_,s_pixel_vector__00145aad._5_3_);
  *(undefined8 *)((long)pvVar3 + lVar5) = uVar2;
  param_2[1] = param_2[1] + 0xd;
  plVar6 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
  if (*(char *)((long)plVar6 + 9) != '\x01') {
    (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
  }
  lVar5 = param_2[1];
  uVar1 = lVar5 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
LAB_001fb360:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar5) = 0x5d;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 001fb364  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001fb368  FUN_001fb368 =====

void FUN_001fb368(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x20))(plVar5);
  if (*(char *)((long)plVar5 + 9) != '\x01') {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar4 = param_2[1];
  uVar1 = lVar4 + 8;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_001fb4ac;
    lVar4 = param_2[1];
  }
  *(undefined8 *)((long)pvVar2 + lVar4) = 0x5b726f7463657620;
  param_2[1] = param_2[1] + 8;
  plVar5 = *(long **)(param_1 + 0x18);
  if ((plVar5 != (long *)0x0) &&
     ((**(code **)(*plVar5 + 0x20))(plVar5,param_2), *(char *)((long)plVar5 + 9) != '\x01')) {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar4 = param_2[1];
  uVar1 = lVar4 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_001fb4ac:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar4) = 0x5d;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 001fb4b0  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001fb4b4  FUN_001fb4b4 =====

undefined8 FUN_001fb4b4(void)

{
  return 1;
}


// ===== 001fb4bc  FUN_001fb4bc =====

undefined8 FUN_001fb4bc(void)

{
  return 1;
}


// ===== 001fb4c4  FUN_001fb4c4 =====

void FUN_001fb4c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001fb4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  return;
}


// ===== 001fb4d4  FUN_001fb4d4 =====

void FUN_001fb4d4(long param_1,long *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  lVar3 = param_2[1];
  if ((lVar3 == 0) || (*(char *)(lVar3 + *param_2 + -1) != ']')) {
    uVar1 = lVar3 + 1;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = (long)pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_001fb654;
      lVar3 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x20;
    lVar3 = param_2[1] + 1;
    param_2[1] = lVar3;
  }
  uVar1 = lVar3 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = (long)pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_001fb654;
    lVar3 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x5b;
  param_2[1] = param_2[1] + 1;
  plVar5 = *(long **)(param_1 + 0x18);
  if ((plVar5 != (long *)0x0) &&
     ((**(code **)(*plVar5 + 0x20))(plVar5,param_2), *(char *)((long)plVar5 + 9) != '\x01')) {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar3 = param_2[1];
  uVar1 = lVar3 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = (long)pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_001fb654:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x5d;
  param_2[1] = param_2[1] + 1;
                    /* WARNING: Could not recover jumptable at 0x001fb650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))(*(long **)(param_1 + 0x10),param_2);
  return;
}


// ===== 001fb658  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001fb65c  FUN_001fb65c =====

ulong FUN_001fb65c(long param_1)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = *(char *)((long)*(undefined8 **)(param_1 + 0x18) + 9);
  if (cVar1 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x001fb674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x18))();
    return uVar2;
  }
  return (ulong)(cVar1 == '\0');
}


// ===== 001fb684  FUN_001fb684 =====

void FUN_001fb684(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  void *pvVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined1 uVar7;
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  plVar1 = *(long **)(param_1 + 0x18);
  if (*(char *)((long)plVar1 + 10) == '\0') {
LAB_001fb6f8:
    lVar6 = param_2[1];
    uVar2 = lVar6 + 1;
    if (uVar2 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar2 <= uVar5) {
        uVar2 = uVar5;
      }
      param_2[2] = uVar2;
      pvVar3 = realloc((void *)*param_2,uVar2);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_001fb834;
      lVar6 = param_2[1];
    }
    puVar4 = (undefined1 *)((long)pvVar3 + lVar6);
    uVar7 = 0x28;
  }
  else {
    if (*(char *)((long)plVar1 + 10) == '\x02') {
      uVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_2);
      if ((uVar2 & 1) != 0) goto LAB_001fb6f8;
      plVar1 = *(long **)(param_1 + 0x18);
    }
    if ((*(char *)((long)plVar1 + 0xb) == '\0') ||
       ((*(char *)((long)plVar1 + 0xb) == '\x02' &&
        (uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2), (uVar2 & 1) != 0))))
    goto LAB_001fb6f8;
    lVar6 = param_2[1];
    uVar2 = lVar6 + 1;
    if (uVar2 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar2 <= uVar5) {
        uVar2 = uVar5;
      }
      param_2[2] = uVar2;
      pvVar3 = realloc((void *)*param_2,uVar2);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_001fb834;
      lVar6 = param_2[1];
    }
    puVar4 = (undefined1 *)((long)pvVar3 + lVar6);
    uVar7 = 0x20;
  }
  *puVar4 = uVar7;
  param_2[1] = param_2[1] + 1;
  plVar1 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  if (*(char *)((long)plVar1 + 9) != '\x01') {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  }
  lVar6 = param_2[1];
  uVar2 = lVar6 + 3;
  if (uVar2 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar2 <= uVar5) {
      uVar2 = uVar5;
    }
    param_2[2] = uVar2;
    pvVar3 = realloc((void *)*param_2,uVar2);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
LAB_001fb834:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar6 = param_2[1];
  }
  *(undefined1 *)((undefined2 *)((long)pvVar3 + lVar6) + 1) = 0x2a;
  *(undefined2 *)((long)pvVar3 + lVar6) = 0x3a3a;
  param_2[1] = param_2[1] + 3;
  return;
}


// ===== 001fb838  FUN_001fb838 =====

void FUN_001fb838(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (*(char *)((long)plVar1 + 10) != '\0') {
    if (*(char *)((long)plVar1 + 10) == '\x02') {
      uVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_2);
      if ((uVar2 & 1) != 0) goto LAB_001fb89c;
      plVar1 = *(long **)(param_1 + 0x18);
    }
    if ((*(char *)((long)plVar1 + 0xb) != '\0') &&
       ((*(char *)((long)plVar1 + 0xb) != '\x02' ||
        (uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2), (uVar2 & 1) == 0))))
    goto LAB_001fb8ec;
  }
LAB_001fb89c:
  lVar5 = param_2[1];
  uVar2 = lVar5 + 1;
  if (uVar2 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar2 <= uVar4) {
      uVar2 = uVar4;
    }
    param_2[2] = uVar2;
    pvVar3 = realloc((void *)*param_2,uVar2);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar5) = 0x29;
  param_2[1] = param_2[1] + 1;
LAB_001fb8ec:
                    /* WARNING: Could not recover jumptable at 0x001fb904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),param_2);
  return;
}


// ===== 001fb90c  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001fb910  FUN_001fb910 =====

void FUN_001fb910(long param_1,undefined8 *param_2)

{
  size_t __n;
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  
  pvVar2 = *(void **)(param_1 + 0x10);
  lVar3 = param_2[1];
  __n = *(long *)(param_1 + 0x18) - (long)pvVar2;
  if (__n != 0) {
    uVar5 = lVar3 + __n;
    if (uVar5 < (ulong)param_2[2]) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar5 <= uVar4) {
        uVar5 = uVar4;
      }
      param_2[2] = uVar5;
      pvVar1 = realloc((void *)*param_2,uVar5);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB_001fba30;
      lVar3 = param_2[1];
    }
    memmove((void *)((long)pvVar1 + lVar3),pvVar2,__n);
    lVar3 = param_2[1] + __n;
    param_2[1] = lVar3;
  }
  uVar5 = lVar3 + 1;
  if (uVar5 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar5 <= uVar4) {
      uVar5 = uVar4;
    }
    param_2[2] = uVar5;
    pvVar2 = realloc((void *)*param_2,uVar5);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_001fba30:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
    uVar5 = lVar3 + 1;
  }
  param_2[1] = uVar5;
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x20;
  plVar6 = *(long **)(param_1 + 0x20);
  (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
  if (*(char *)((long)plVar6 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001fba2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
  return;
}


// ===== 001fba34  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001fba38  FUN_001fba38 =====

ulong FUN_001fba38(long param_1)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = *(char *)((long)*(undefined8 **)(param_1 + 0x10) + 9);
  if (cVar1 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x001fba50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x10))();
    return uVar2;
  }
  return (ulong)(cVar1 == '\0');
}


// ===== 001fba60  FUN_001fba60 =====

void FUN_001fba60(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  size_t __n;
  void *pvVar2;
  ulong uVar3;
  void *pvVar4;
  char *pcVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 uVar8;
  long lVar9;
  char *pcVar10;
  long *plVar11;
  long *plVar12;
  
  plVar11 = *(long **)(param_1 + 0x10);
  if (((char)plVar11[1] == '\n') && (lVar9 = plVar11[2], *(char *)(lVar9 + 8) == '\a')) {
    pcVar5 = *(char **)(lVar9 + 0x10);
    pcVar1 = *(char **)(lVar9 + 0x18);
    if ((long)pcVar1 - (long)pcVar5 == 0xb) {
      if (pcVar5 != pcVar1) {
        pcVar10 = "objc_object";
        do {
          if (*pcVar5 != *pcVar10) goto LAB_001fbafc;
          pcVar5 = pcVar5 + 1;
          pcVar10 = pcVar10 + 1;
        } while (pcVar1 != pcVar5);
      }
      plVar12 = param_2 + 1;
      lVar9 = *plVar12;
      uVar3 = lVar9 + 3;
      if (uVar3 < (ulong)param_2[2]) {
        pvVar2 = (void *)*param_2;
      }
      else {
        uVar7 = param_2[2] << 1;
        if (uVar3 <= uVar7) {
          uVar3 = uVar7;
        }
        param_2[2] = uVar3;
        pvVar2 = realloc((void *)*param_2,uVar3);
        *param_2 = pvVar2;
        if (pvVar2 == (void *)0x0) goto LAB_001fbd88;
        lVar9 = *plVar12;
      }
      *(undefined1 *)((undefined2 *)((long)pvVar2 + lVar9) + 1) = 0x3c;
      *(undefined2 *)((long)pvVar2 + lVar9) = 0x6469;
      lVar9 = *plVar12 + 3;
      *plVar12 = lVar9;
      pvVar2 = (void *)plVar11[3];
      __n = plVar11[4] - (long)pvVar2;
      if (__n != 0) {
        uVar3 = lVar9 + __n;
        if (uVar3 < (ulong)param_2[2]) {
          pvVar4 = (void *)*param_2;
        }
        else {
          uVar7 = param_2[2] << 1;
          if (uVar3 <= uVar7) {
            uVar3 = uVar7;
          }
          param_2[2] = uVar3;
          pvVar4 = realloc((void *)*param_2,uVar3);
          *param_2 = pvVar4;
          if (pvVar4 == (void *)0x0) goto LAB_001fbd88;
          lVar9 = *plVar12;
        }
        memmove((void *)((long)pvVar4 + lVar9),pvVar2,__n);
        lVar9 = *plVar12 + __n;
        *plVar12 = lVar9;
      }
      uVar3 = lVar9 + 1;
      if (uVar3 < (ulong)param_2[2]) {
        pvVar2 = (void *)*param_2;
      }
      else {
        uVar7 = param_2[2] << 1;
        if (uVar3 <= uVar7) {
          uVar3 = uVar7;
        }
        param_2[2] = uVar3;
        pvVar2 = realloc((void *)*param_2,uVar3);
        *param_2 = pvVar2;
        if (pvVar2 == (void *)0x0) goto LAB_001fbd88;
        lVar9 = *plVar12;
      }
      puVar6 = (undefined1 *)((long)pvVar2 + lVar9);
      uVar8 = 0x3e;
      goto LAB_001fbc74;
    }
  }
LAB_001fbafc:
  (**(code **)(*plVar11 + 0x20))(plVar11,param_2);
  plVar11 = *(long **)(param_1 + 0x10);
  if ((*(char *)((long)plVar11 + 10) == '\0') ||
     ((*(char *)((long)plVar11 + 10) == '\x02' &&
      (uVar3 = (**(code **)(*plVar11 + 8))(plVar11,param_2), (uVar3 & 1) != 0)))) {
    lVar9 = param_2[1];
    uVar3 = lVar9 + 1;
    if (uVar3 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar7 = param_2[2] << 1;
      if (uVar3 <= uVar7) {
        uVar3 = uVar7;
      }
      param_2[2] = uVar3;
      pvVar2 = realloc((void *)*param_2,uVar3);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_001fbd88;
      lVar9 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar9) = 0x20;
    param_2[1] = param_2[1] + 1;
  }
  plVar11 = *(long **)(param_1 + 0x10);
  if (*(char *)((long)plVar11 + 10) == '\0') {
LAB_001fbbd8:
    lVar9 = param_2[1];
    uVar3 = lVar9 + 1;
    if (uVar3 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar7 = param_2[2] << 1;
      if (uVar3 <= uVar7) {
        uVar3 = uVar7;
      }
      param_2[2] = uVar3;
      pvVar2 = realloc((void *)*param_2,uVar3);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_001fbd88;
      lVar9 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar9) = 0x28;
    param_2[1] = param_2[1] + 1;
  }
  else {
    if (*(char *)((long)plVar11 + 10) == '\x02') {
      uVar3 = (**(code **)(*plVar11 + 8))(plVar11,param_2);
      if ((uVar3 & 1) != 0) goto LAB_001fbbd8;
      plVar11 = *(long **)(param_1 + 0x10);
    }
    if ((*(char *)((long)plVar11 + 0xb) == '\0') ||
       ((*(char *)((long)plVar11 + 0xb) == '\x02' &&
        (uVar3 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2), (uVar3 & 1) != 0))))
    goto LAB_001fbbd8;
  }
  lVar9 = param_2[1];
  uVar3 = lVar9 + 1;
  if (uVar3 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar7 = param_2[2] << 1;
    if (uVar3 <= uVar7) {
      uVar3 = uVar7;
    }
    param_2[2] = uVar3;
    pvVar2 = realloc((void *)*param_2,uVar3);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_001fbd88:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar9 = param_2[1];
  }
  puVar6 = (undefined1 *)((long)pvVar2 + lVar9);
  uVar8 = 0x2a;
LAB_001fbc74:
  *puVar6 = uVar8;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 001fbd8c  FUN_001fbd8c =====

void FUN_001fbd8c(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  long *plVar2;
  ulong uVar3;
  void *pvVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  
  plVar2 = *(long **)(param_1 + 0x10);
  if (((char)plVar2[1] == '\n') && (lVar7 = plVar2[2], *(char *)(lVar7 + 8) == '\a')) {
    pcVar5 = *(char **)(lVar7 + 0x10);
    pcVar1 = *(char **)(lVar7 + 0x18);
    if ((long)pcVar1 - (long)pcVar5 == 0xb) {
      if (pcVar5 != pcVar1) {
        pcVar8 = "objc_object";
        do {
          if (*pcVar5 != *pcVar8) goto LAB_001fbe0c;
          pcVar5 = pcVar5 + 1;
          pcVar8 = pcVar8 + 1;
        } while (pcVar1 != pcVar5);
      }
      return;
    }
  }
LAB_001fbe0c:
  if (*(char *)((long)plVar2 + 10) != '\0') {
    if (*(char *)((long)plVar2 + 10) == '\x02') {
      uVar3 = (**(code **)(*plVar2 + 8))(plVar2,param_2);
      if ((uVar3 & 1) != 0) goto LAB_001fbe58;
      plVar2 = *(long **)(param_1 + 0x10);
    }
    if ((*(char *)((long)plVar2 + 0xb) != '\0') &&
       ((*(char *)((long)plVar2 + 0xb) != '\x02' ||
        (uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,param_2), (uVar3 & 1) == 0))))
    goto LAB_001fbea8;
  }
LAB_001fbe58:
  lVar7 = param_2[1];
  uVar3 = lVar7 + 1;
  if (uVar3 < (ulong)param_2[2]) {
    pvVar4 = (void *)*param_2;
  }
  else {
    uVar6 = param_2[2] << 1;
    if (uVar3 <= uVar6) {
      uVar3 = uVar6;
    }
    param_2[2] = uVar3;
    pvVar4 = realloc((void *)*param_2,uVar3);
    *param_2 = pvVar4;
    if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar7 = param_2[1];
  }
  *(undefined1 *)((long)pvVar4 + lVar7) = 0x29;
  param_2[1] = param_2[1] + 1;
LAB_001fbea8:
                    /* WARNING: Could not recover jumptable at 0x001fbec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))(*(long **)(param_1 + 0x10),param_2);
  return;
}


// ===== 001fbec8  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001fbecc  FUN_001fbecc =====

ulong FUN_001fbecc(long param_1)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = *(char *)((long)*(undefined8 **)(param_1 + 0x10) + 9);
  if (cVar1 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x001fbee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x10))();
    return uVar2;
  }
  return (ulong)(cVar1 == '\0');
}


// ===== 001fbef4  FUN_001fbef4 =====

void FUN_001fbef4(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined *__src;
  long lVar2;
  ulong uVar3;
  size_t sVar4;
  void *pvVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  
  if (*(char *)(param_1 + 0x1c) != '\0') {
    return;
  }
  plVar7 = *(long **)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x1c) = 1;
  iVar8 = *(int *)(param_1 + 0x18);
                    /* try { // try from 001fbf30 to 001fbf37 has its CatchHandler @ 001fc180 */
  lVar2 = (**(code **)(*plVar7 + 0x18))(plVar7);
  while (*(char *)(lVar2 + 8) == '\f') {
    plVar7 = *(long **)(lVar2 + 0x10);
    iVar1 = *(int *)(lVar2 + 0x18);
    if (iVar8 <= *(int *)(lVar2 + 0x18)) {
      iVar1 = iVar8;
    }
                    /* try { // try from 001fbf5c to 001fbf67 has its CatchHandler @ 001fc188 */
    lVar2 = (**(code **)(*plVar7 + 0x18))(plVar7,param_2);
    iVar8 = iVar1;
  }
                    /* try { // try from 001fbf74 to 001fbfb7 has its CatchHandler @ 001fc180 */
  (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
  if (*(char *)((long)plVar7 + 10) == '\0') {
LAB_001fbfa8:
    sVar4 = __strlen_chk(&DAT_00144ef0,2);
    if (sVar4 != 0) {
      lVar2 = param_2[1];
      uVar3 = lVar2 + sVar4;
      if (uVar3 < (ulong)param_2[2]) {
        pvVar5 = (void *)*param_2;
      }
      else {
        uVar6 = param_2[2] << 1;
        if (uVar3 <= uVar6) {
          uVar3 = uVar6;
        }
        param_2[2] = uVar3;
        pvVar5 = realloc((void *)*param_2,uVar3);
        *param_2 = pvVar5;
        if (pvVar5 == (void *)0x0) goto LAB_001fc17c;
        lVar2 = param_2[1];
      }
      memcpy((void *)((long)pvVar5 + lVar2),&DAT_00144ef0,sVar4);
      param_2[1] = param_2[1] + sVar4;
    }
LAB_001fc01c:
                    /* try { // try from 001fc034 to 001fc07b has its CatchHandler @ 001fc180 */
    if ((*(char *)((long)plVar7 + 10) != '\0') &&
       ((*(char *)((long)plVar7 + 10) != '\x02' ||
        (uVar3 = (**(code **)(*plVar7 + 8))(plVar7,param_2), (uVar3 & 1) == 0)))) goto LAB_001fc044;
LAB_001fc06c:
    sVar4 = __strlen_chk(&DAT_00145d2a,2);
    if (sVar4 != 0) {
      lVar2 = param_2[1];
      uVar3 = lVar2 + sVar4;
      if (uVar3 < (ulong)param_2[2]) {
        pvVar5 = (void *)*param_2;
      }
      else {
        uVar6 = param_2[2] << 1;
        if (uVar3 <= uVar6) {
          uVar3 = uVar6;
        }
        param_2[2] = uVar3;
        pvVar5 = realloc((void *)*param_2,uVar3);
        *param_2 = pvVar5;
        if (pvVar5 == (void *)0x0) goto LAB_001fc17c;
        lVar2 = param_2[1];
      }
      memcpy((void *)((long)pvVar5 + lVar2),&DAT_00145d2a,sVar4);
      param_2[1] = param_2[1] + sVar4;
    }
  }
  else {
    if (*(char *)((long)plVar7 + 10) == '\x02') {
      uVar3 = (**(code **)(*plVar7 + 8))(plVar7,param_2);
      if ((uVar3 & 1) != 0) goto LAB_001fbfa8;
      goto LAB_001fc01c;
    }
LAB_001fc044:
    if ((*(char *)((long)plVar7 + 0xb) == '\0') ||
       ((*(char *)((long)plVar7 + 0xb) == '\x02' &&
        (uVar3 = (**(code **)(*plVar7 + 0x10))(plVar7,param_2), (uVar3 & 1) != 0))))
    goto LAB_001fc06c;
  }
  __src = &DAT_00145dec;
  if (iVar8 != 0) {
    __src = &DAT_00145daa;
  }
                    /* try { // try from 001fc0f8 to 001fc103 has its CatchHandler @ 001fc180 */
  sVar4 = __strlen_chk(__src,3);
  if (sVar4 != 0) {
    lVar2 = param_2[1];
    uVar3 = lVar2 + sVar4;
    if (uVar3 < (ulong)param_2[2]) {
      pvVar5 = (void *)*param_2;
    }
    else {
      uVar6 = param_2[2] << 1;
      if (uVar3 <= uVar6) {
        uVar3 = uVar6;
      }
      param_2[2] = uVar3;
      pvVar5 = realloc((void *)*param_2,uVar3);
      *param_2 = pvVar5;
      if (pvVar5 == (void *)0x0) {
LAB_001fc17c:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar2 = param_2[1];
    }
    memmove((void *)((long)pvVar5 + lVar2),__src,sVar4);
    param_2[1] = param_2[1] + sVar4;
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return;
}


// ===== 001fc190  FUN_001fc190 =====

void FUN_001fc190(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  size_t __n;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x1c) == '\0') {
    plVar5 = *(long **)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x1c) = 1;
                    /* try { // try from 001fc1c4 to 001fc1cb has its CatchHandler @ 001fc2e4 */
    lVar1 = (**(code **)(*plVar5 + 0x18))(plVar5);
    while (*(char *)(lVar1 + 8) == '\f') {
      plVar5 = *(long **)(lVar1 + 0x10);
                    /* try { // try from 001fc1e4 to 001fc1ef has its CatchHandler @ 001fc2ec */
      lVar1 = (**(code **)(*plVar5 + 0x18))(plVar5,param_2);
    }
                    /* try { // try from 001fc20c to 001fc253 has its CatchHandler @ 001fc2e4 */
    if ((((*(char *)((long)plVar5 + 10) == '\0') ||
         (((*(char *)((long)plVar5 + 10) == '\x02' &&
           (uVar2 = (**(code **)(*plVar5 + 8))(plVar5,param_2), (uVar2 & 1) != 0)) ||
          (*(char *)((long)plVar5 + 0xb) == '\0')))) ||
        ((*(char *)((long)plVar5 + 0xb) == '\x02' &&
         (uVar2 = (**(code **)(*plVar5 + 0x10))(plVar5,param_2), (uVar2 & 1) != 0)))) &&
       (__n = __strlen_chk(&DAT_00145ead,2), __n != 0)) {
      lVar1 = param_2[1];
      uVar2 = lVar1 + __n;
      if (uVar2 < (ulong)param_2[2]) {
        pvVar3 = (void *)*param_2;
      }
      else {
        uVar4 = param_2[2] << 1;
        if (uVar2 <= uVar4) {
          uVar2 = uVar4;
        }
        param_2[2] = uVar2;
        pvVar3 = realloc((void *)*param_2,uVar2);
        *param_2 = pvVar3;
        if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar1 = param_2[1];
      }
      memcpy((void *)((long)pvVar3 + lVar1),&DAT_00145ead,__n);
      param_2[1] = param_2[1] + __n;
    }
                    /* try { // try from 001fc2c0 to 001fc2cb has its CatchHandler @ 001fc2e4 */
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
    *(undefined1 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// ===== 001fc2f4  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001fc2f8  FUN_001fc2f8 =====

void FUN_001fc2f8(long param_1,undefined8 *param_2)

{
  ulong __size;
  void *__src;
  size_t __n;
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  __src = *(void **)(param_1 + 0x18);
  __n = *(long *)(param_1 + 0x20) - (long)__src;
  if (__n != 0) {
    lVar3 = param_2[1];
    __size = lVar3 + __n;
    if (__size < (ulong)param_2[2]) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar2 = param_2[2] << 1;
      if (__size <= uVar2) {
        __size = uVar2;
      }
      param_2[2] = __size;
      pvVar1 = realloc((void *)*param_2,__size);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar3 = param_2[1];
    }
    memmove((void *)((long)pvVar1 + lVar3),__src,__n);
    param_2[1] = param_2[1] + __n;
  }
  return;
}


// ===== 001fc398  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001fc39c  __gxx_personality_v0 =====

void __gxx_personality_v0(int param_1,ulong param_2,ulong param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  int local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar3 = 3;
  if (((param_1 == 1) && (param_4 != 0)) && (param_5 != 0)) {
    param_3 = param_3 & 0xffffffffffffff00;
    if ((param_2 & 1) == 0) {
      if (((uint)param_2 >> 1 & 1) == 0) {
        iVar3 = 3;
      }
      else {
        if (((uint)param_2 >> 2 & 1) == 0) {
          FUN_001fc558(&local_78,param_2,param_3 == 0x434c4e47432b2b00,param_4,param_5);
          iVar3 = local_50;
          if (local_50 != 6) goto LAB_001fc520;
          FUN_001ff600(param_5,0,param_4);
          FUN_001ff600(param_5,1,local_78);
          uVar4 = local_60;
        }
        else {
          if (param_3 == 0x434c4e47432b2b00) {
            local_78 = (long)*(int *)(param_4 + -0x24);
            uStack_68 = *(undefined8 *)(param_4 + -0x18);
            local_70 = *(undefined8 *)(param_4 + -0x20);
            uStack_58 = *(undefined8 *)(param_4 + -8);
            local_60 = *(undefined8 *)(param_4 + -0x10);
          }
          else {
            FUN_001fc558(&local_78,param_2,0,param_4,param_5);
            if (local_50 != 6) {
                    /* WARNING: Subroutine does not return */
              FUN_001fcb60(0,param_4);
            }
          }
          uVar4 = local_60;
          lVar2 = local_78;
          FUN_001ff600(param_5,0,param_4);
          FUN_001ff600(param_5,1,lVar2);
        }
        FUN_001ff674(param_5,uVar4);
        iVar3 = 7;
      }
    }
    else {
      FUN_001fc558(&local_78,param_2,param_3 == 0x434c4e47432b2b00,param_4,param_5);
      iVar3 = local_50;
      if ((local_50 == 6) && (param_3 == 0x434c4e47432b2b00)) {
        iVar3 = 6;
        *(int *)(param_4 + -0x24) = (int)local_78;
        *(undefined8 *)(param_4 + -0x18) = uStack_68;
        *(undefined8 *)(param_4 + -0x20) = local_70;
        *(undefined8 *)(param_4 + -8) = uStack_58;
        *(undefined8 *)(param_4 + -0x10) = local_60;
      }
    }
  }
LAB_001fc520:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3);
  }
  return;
}


// ===== 001fc558  FUN_001fc558 =====

void FUN_001fc558(ulong *param_1,uint param_2,uint param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined4 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *local_a8;
  byte *local_80;
  byte *local_78;
  byte *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 3;
  if ((param_2 & 1) == 0) {
    if ((param_2 >> 1 & 1) == 0) {
LAB_001fc5c8:
      uVar13 = 3;
    }
    else {
      if ((~param_2 & 0xc) != 0) goto LAB_001fc600;
      uVar13 = 2;
    }
  }
  else {
    if ((param_2 & 0xe) != 0) goto LAB_001fc5c8;
LAB_001fc600:
    pbVar6 = (byte *)FUN_001ff67c(param_5);
    local_78 = pbVar6;
    if (pbVar6 != (byte *)0x0) {
      param_1[2] = (ulong)pbVar6;
      lVar7 = FUN_001ff658(param_5);
      uVar8 = FUN_001ff684(param_5);
      local_78 = pbVar6 + 1;
      uVar9 = FUN_001fcf08(&local_78,*pbVar6);
      uVar1 = uVar8;
      if (uVar9 != 0) {
        uVar1 = uVar9;
      }
      pbVar6 = local_78 + 1;
      uVar9 = (ulong)*local_78;
      if (uVar9 == 0xff) {
        pbVar19 = (byte *)0x0;
      }
      else {
        uVar16 = 0;
        uVar15 = 0;
        pbVar19 = pbVar6;
        do {
          pbVar6 = pbVar19 + 1;
          bVar3 = *pbVar19;
          uVar15 = ((ulong)bVar3 & 0x7f) << (uVar16 & 0x3f) | uVar15;
          uVar16 = uVar16 + 7;
          pbVar19 = pbVar6;
        } while ((char)bVar3 < '\0');
        pbVar19 = pbVar6 + uVar15;
      }
      bVar3 = *pbVar6;
      uVar16 = 0;
      uVar15 = 0;
      uVar8 = lVar7 + ~uVar8;
      pbVar6 = pbVar6 + 1;
      do {
        pbVar18 = pbVar6 + 1;
        bVar4 = *pbVar6;
        uVar15 = ((ulong)bVar4 & 0x7f) << (uVar16 & 0x3f) | uVar15;
        uVar16 = uVar16 + 7;
        pbVar6 = pbVar18;
      } while ((char)bVar4 < '\0');
      local_80 = pbVar18;
      local_78 = pbVar18;
      do {
        if (pbVar18 + (uVar15 & 0xffffffff) <= local_80) break;
        uVar10 = FUN_001fcf08(&local_80,bVar3);
        lVar7 = FUN_001fcf08(&local_80,bVar3);
        lVar11 = FUN_001fcf08(&local_80,bVar3);
        uVar16 = 0;
        uVar14 = 0;
        pbVar6 = local_80;
        do {
          local_80 = pbVar6 + 1;
          bVar4 = *pbVar6;
          uVar14 = ((ulong)bVar4 & 0x7f) << (uVar16 & 0x3f) | uVar14;
          uVar16 = uVar16 + 7;
          pbVar6 = local_80;
        } while ((char)bVar4 < '\0');
        if ((uVar10 <= uVar8) && (uVar8 < lVar7 + uVar10)) {
          if (lVar11 == 0) goto LAB_001fca1c;
          uVar1 = lVar11 + uVar1;
          if (uVar14 != 0) {
            local_a8 = (byte *)(param_4 + 0x20);
            uVar8 = uVar9 & 0xf;
            pbVar18 = pbVar18 + uVar14 + (uVar15 & 0xffffffff) + -1;
            uVar2 = 0x1c1dU >> uVar8 & 1;
            goto LAB_001fc7c0;
          }
          if ((param_2 & 6) != 2) goto LAB_001fca50;
          *param_1 = 0;
          param_1[3] = uVar1;
          uVar13 = 6;
          goto LAB_001fc5cc;
        }
      } while (uVar10 <= uVar8);
LAB_001fcb1c:
                    /* WARNING: Subroutine does not return */
      FUN_001fcb60(param_3 & 1,param_4);
    }
LAB_001fca50:
    uVar13 = 8;
  }
LAB_001fc5cc:
  *(undefined4 *)(param_1 + 5) = uVar13;
LAB_001fc5d0:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_001fc7c0:
  uVar16 = 0;
  uVar15 = 0;
  pbVar6 = pbVar18;
  do {
    pbVar17 = pbVar6 + 1;
    bVar3 = *pbVar6;
    uVar15 = ((ulong)bVar3 & 0x7f) << (uVar16 & 0x3f) | uVar15;
    uVar16 = uVar16 + 7;
    pbVar6 = pbVar17;
  } while ((char)bVar3 < '\0');
  uVar10 = -1L << (uVar16 & 0x3f);
  if (((uint)(uVar16 < 0x40) & (bVar3 & 0x40) >> 6) == 0) {
    uVar10 = 0;
  }
  uVar15 = uVar15 | uVar10;
  if ((long)uVar15 < 1) {
    if ((long)uVar15 < 0) {
      if ((param_3 & 1) == 0) {
        if ((param_2 & 5) != 0) goto LAB_001fca58;
        if ((param_2 >> 3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_001fcb60(0,param_4);
        }
      }
      else {
        lVar7 = FUN_001e7b5c(param_4);
        pbVar6 = local_a8;
        if (lVar7 == 0x434c4e47432b2b01) {
          pbVar6 = *(byte **)(param_4 + -0x58);
        }
        if ((pbVar6 == (byte *)0x0) || (lVar7 = *(long *)(param_4 + -0x50), lVar7 == 0))
        goto LAB_001fcb3c;
        if (pbVar19 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_001fcb60(0,param_4);
        }
        uVar16 = 0;
        uVar14 = 0;
        uVar10 = ~uVar15;
        while( true ) {
          for (; uVar14 = ((ulong)pbVar19[uVar10] & 0x7f) << (uVar16 & 0x3f) | uVar14,
              (char)pbVar19[uVar10] < '\0'; uVar10 = uVar10 + 1) {
            uVar16 = uVar16 + 7;
          }
          if (uVar14 == 0) {
            if ((param_2 & 1) == 0) goto LAB_001fc9c8;
            *param_1 = uVar15;
            param_1[1] = (ulong)pbVar18;
            param_1[3] = uVar1;
            param_1[4] = (ulong)pbVar6;
            uVar13 = 6;
            goto LAB_001fca20;
          }
          local_70 = pbVar19;
          if ((0xc < (uint)uVar8) || (uVar2 == 0)) goto LAB_001fcb2c;
          local_70 = pbVar19 + -(uVar14 << (*(ulong *)(&DAT_0014adc8 + uVar8 * 8) & 0x3f));
          plVar12 = (long *)FUN_001fcf08(&local_70,uVar9);
          local_70 = pbVar6;
          uVar16 = (**(code **)(*plVar12 + 0x20))(plVar12,lVar7,&local_70);
          if ((uVar16 & 1) != 0) break;
          uVar16 = 0;
          uVar14 = 0;
          uVar10 = uVar10 + 1;
        }
      }
    }
    else if ((param_2 & 6) == 2) {
      *param_1 = 0;
      param_1[1] = (ulong)pbVar18;
      param_1[3] = uVar1;
      lVar7 = FUN_001e7b5c(param_4);
      if (lVar7 == 0x434c4e47432b2b01) {
        local_a8 = *(byte **)(param_4 + -0x58);
      }
      param_1[4] = (ulong)local_a8;
      uVar13 = 6;
      goto LAB_001fc5cc;
    }
  }
  else {
    local_70 = pbVar19;
    if (((pbVar19 == (byte *)0x0) || (0xc < (uint)uVar8)) || (uVar2 == 0)) goto LAB_001fcb1c;
    local_70 = pbVar19 + -(uVar15 << (*(ulong *)(&DAT_0014adc8 + uVar8 * 8) & 0x3f));
    plVar12 = (long *)FUN_001fcf08(&local_70,uVar9);
    if (plVar12 == (long *)0x0) {
      if ((param_2 & 5) != 0) {
LAB_001fca58:
        *param_1 = uVar15;
        param_1[1] = (ulong)pbVar18;
        param_1[3] = uVar1;
        lVar7 = FUN_001e7b5c(param_4);
        if (lVar7 == 0x434c4e47432b2b01) {
          local_a8 = *(byte **)(param_4 + -0x58);
        }
        param_1[4] = (ulong)local_a8;
        uVar13 = 6;
        goto LAB_001fca20;
      }
      if ((param_2 >> 3 & 1) == 0) goto LAB_001fcb1c;
    }
    else if ((param_3 & 1) != 0) {
      lVar7 = FUN_001e7b5c(param_4);
      local_70 = local_a8;
      if (lVar7 == 0x434c4e47432b2b01) {
        local_70 = *(byte **)(param_4 + -0x58);
      }
      if ((local_70 == (byte *)0x0) || (*(long *)(param_4 + -0x50) == 0)) {
LAB_001fcb3c:
                    /* WARNING: Subroutine does not return */
        FUN_001fcb60(1,param_4);
      }
      uVar16 = (**(code **)(*plVar12 + 0x20))(plVar12,*(long *)(param_4 + -0x50),&local_70);
      if ((uVar16 & 1) != 0) {
        if ((param_2 & 1) != 0) {
          *param_1 = uVar15;
          param_1[1] = (ulong)pbVar18;
          *(undefined4 *)(param_1 + 5) = 6;
          param_1[3] = uVar1;
          param_1[4] = (ulong)local_70;
          goto LAB_001fc5d0;
        }
LAB_001fc9c8:
        if ((param_2 >> 3 & 1) == 0) {
LAB_001fcb2c:
                    /* WARNING: Subroutine does not return */
          FUN_001fcb60(1,param_4);
        }
      }
    }
  }
  uVar16 = 0;
  uVar15 = 0;
  pbVar6 = pbVar17;
  do {
    bVar3 = *pbVar6;
    uVar15 = ((ulong)bVar3 & 0x7f) << (uVar16 & 0x3f) | uVar15;
    uVar16 = uVar16 + 7;
    pbVar6 = pbVar6 + 1;
  } while ((char)bVar3 < '\0');
  uVar10 = -1L << (uVar16 & 0x3f);
  if (((uint)(uVar16 < 0x40) & (bVar3 & 0x40) >> 6) == 0) {
    uVar10 = 0;
  }
  if ((uVar15 | uVar10) == 0) goto LAB_001fca1c;
  pbVar18 = pbVar17 + (uVar15 | uVar10);
  goto LAB_001fc7c0;
LAB_001fca1c:
  uVar13 = 8;
LAB_001fca20:
  *(undefined4 *)(param_1 + 5) = uVar13;
  goto LAB_001fc5d0;
}


// ===== 001fcb60  FUN_001fcb60 =====

void FUN_001fcb60(ulong param_1,long param_2)

{
  __cxa_begin_catch(param_2);
  if ((param_1 & 1) != 0) {
    FUN_001e8704(*(undefined8 *)(param_2 + -0x38));
  }
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 001fcb8c  __cxa_call_unexpected =====

void __cxa_call_unexpected(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  ulong uVar15;
  byte *unaff_x22;
  byte *pbVar16;
  long lVar18;
  long unaff_x25;
  ulong uVar19;
  ulong uVar20;
  undefined *local_78;
  byte *local_70;
  undefined **local_68;
  byte *pbVar17;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_001fcb60(0,0);
  }
  __cxa_begin_catch();
  uVar7 = FUN_001e7b64(param_1);
  if ((uVar7 & 1) == 0) {
    uVar8 = std::get_terminate();
    uVar13 = std::get_unexpected();
    lVar18 = 0;
  }
  else {
    unaff_x22 = *(byte **)(param_1 + -0x18);
    uVar13 = *(undefined8 *)(param_1 + -0x40);
    uVar8 = *(undefined8 *)(param_1 + -0x38);
    lVar18 = param_1 + -0x60;
    unaff_x25 = (long)(int)~*(uint *)(param_1 + -0x24);
    local_70 = unaff_x22;
  }
                    /* try { // try from 001fcc00 to 001fcc03 has its CatchHandler @ 001fcc04 */
  FUN_001e86c4(uVar13);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 001fcc00 with catch @ 001fcc04
                        */
  __cxa_begin_catch();
  if ((uVar7 & 1) != 0) {
    local_70 = unaff_x22 + 1;
                    /* try { // try from 001fcc18 to 001fcc1f has its CatchHandler @ 001fcee0 */
    FUN_001fcf08(&local_70,*unaff_x22);
    pbVar17 = local_70 + 1;
    bVar4 = *local_70;
    uVar7 = (ulong)bVar4;
    local_70 = pbVar17;
    if (uVar7 != 0xff) {
      uVar11 = 0;
      uVar19 = 0;
      do {
        pbVar16 = pbVar17 + 1;
        bVar3 = *pbVar17;
        uVar19 = ((ulong)bVar3 & 0x7f) << (uVar11 & 0x3f) | uVar19;
        uVar11 = uVar11 + 7;
        pbVar17 = pbVar16;
      } while ((char)bVar3 < '\0');
      local_70 = pbVar16;
                    /* try { // try from 001fcc64 to 001fcc6b has its CatchHandler @ 001fcedc */
      plVar9 = (long *)__cxa_get_globals_fast();
      lVar12 = *plVar9;
      if (lVar12 != 0) {
        lVar1 = lVar12 + 0x60;
                    /* try { // try from 001fcc80 to 001fcc87 has its CatchHandler @ 001fced8 */
        uVar6 = FUN_001e7b64(lVar1);
        ppuVar2 = (undefined **)(pbVar16 + uVar19);
        if ((lVar12 != lVar18) && (((uVar6 ^ 1) & 1) == 0)) {
          uVar13 = *(undefined8 *)(lVar12 + 0x10);
                    /* try { // try from 001fcca8 to 001fccaf has its CatchHandler @ 001fced4 */
          lVar18 = FUN_001e7b5c(lVar1);
          if (lVar18 == 0x434c4e47432b2b01) {
            ppuVar14 = *(undefined ***)(lVar12 + 8);
          }
          else {
            ppuVar14 = (undefined **)(lVar12 + 0x80);
          }
          uVar11 = 0;
          uVar15 = 0;
          uVar20 = uVar7 & 0xf;
          lVar18 = unaff_x25 + uVar19;
          while( true ) {
            for (; uVar15 = ((ulong)pbVar16[lVar18] & 0x7f) << (uVar11 & 0x3f) | uVar15,
                (char)pbVar16[lVar18] < '\0'; lVar18 = lVar18 + 1) {
              uVar11 = uVar11 + 7;
            }
            if (uVar15 == 0) break;
            if ((0xc < (uint)uVar20) || ((0x1c1dU >> uVar20 & 1) == 0)) goto LAB_001fce44;
            local_68 = (undefined **)
                       ((long)ppuVar2 - (uVar15 << (*(ulong *)(&DAT_0014adc8 + uVar20 * 8) & 0x3f)))
            ;
                    /* try { // try from 001fcd4c to 001fcd6b has its CatchHandler @ 001fcee4 */
            plVar10 = (long *)FUN_001fcf08(&local_68,uVar7);
            local_68 = ppuVar14;
            uVar11 = (**(code **)(*plVar10 + 0x20))(plVar10,uVar13,&local_68);
            if ((uVar11 & 1) != 0) {
              do {
                *(int *)(lVar12 + 0x38) = -*(int *)(lVar12 + 0x38);
                *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
                    /* try { // try from 001fceb0 to 001fcec3 has its CatchHandler @ 001fced4 */
                __cxa_end_catch();
                __cxa_end_catch();
                __cxa_begin_catch(lVar1);
                __cxa_rethrow();
              } while( true );
            }
            uVar11 = 0;
            uVar15 = 0;
            lVar18 = lVar18 + 1;
          }
        }
        puVar5 = PTR_PTR_0020fc68;
        local_78 = PTR_vtable_0020fc60 + 0x10;
        uVar15 = (ulong)(bVar4 + 6) & 0xf;
        lVar18 = unaff_x25 + uVar19;
        uVar11 = 0;
        uVar19 = 0;
LAB_001fcdd4:
        for (; uVar19 = ((ulong)pbVar16[lVar18] & 0x7f) << (uVar11 & 0x3f) | uVar19,
            (char)pbVar16[lVar18] < '\0'; lVar18 = lVar18 + 1) {
          uVar11 = uVar11 + 7;
        }
        if (uVar19 == 0) {
          std::exception::~exception((exception *)&local_78);
          goto LAB_001fce58;
        }
        if ((10 < (uint)uVar15) || ((0x747U >> uVar15 & 1) == 0)) {
LAB_001fce44:
          local_68 = ppuVar2;
                    /* WARNING: Subroutine does not return */
          FUN_001fcb60(1,param_1);
        }
        local_68 = (undefined **)
                   ((long)ppuVar2 - (uVar19 << (*(ulong *)(&DAT_0014ae30 + uVar15 * 8) & 0x3f)));
                    /* try { // try from 001fce0c to 001fce2f has its CatchHandler @ 001fceec */
        plVar9 = (long *)FUN_001fcf08(&local_68,uVar7);
        local_68 = &local_78;
        uVar11 = (**(code **)(*plVar9 + 0x20))(plVar9,puVar5,&local_68);
        if ((uVar11 & 1) == 0) {
          uVar11 = 0;
          uVar19 = 0;
          lVar18 = lVar18 + 1;
          goto LAB_001fcdd4;
        }
        goto LAB_001fce64;
      }
    }
    uVar13 = FUN_001e8704(uVar8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 001fce64 with catch @ 001fced0
                       catch(type#1 @ 00000000) { ... } // from try @ 001fce80 with catch @ 001fced0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 001fce0c with catch @ 001fceec
                        */
    std::exception::~exception((exception *)&local_78);
                    /* try { // try from 001fcef8 to 001fcefb has its CatchHandler @ 001fcf04 */
    __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
    FUN_00200e50(uVar13);
  }
LAB_001fce58:
  __cxa_end_catch();
  FUN_001e8704(uVar8);
LAB_001fce64:
                    /* try { // try from 001fce64 to 001fce67 has its CatchHandler @ 001fced0 */
  __cxa_end_catch();
  plVar9 = (long *)__cxa_allocate_exception(8);
  *plVar9 = (long)(PTR_vtable_0020fc60 + 0x10);
                    /* try { // try from 001fce80 to 001fce93 has its CatchHandler @ 001fced0 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(plVar9,PTR_PTR_0020fc68,PTR__exception_0020fc70);
}


// ===== 001fcf08  FUN_001fcf08 =====

/* WARNING: Type propagation algorithm not settling */

long * FUN_001fcf08(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar1 = param_2 & 0xff;
  if (uVar1 == 0xff) {
    return (long *)0x0;
  }
  if (0xc < (param_2 & 0xf)) {
switchD_001fcf40_caseD_5:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar8 = (uint *)*param_1;
  switch(param_2 & 0xf) {
  case 0:
  case 4:
  case 0xc:
    puVar7 = puVar8 + 2;
    plVar4 = *(long **)puVar8;
    break;
  case 1:
    uVar9 = 0;
    plVar4 = (long *)0x0;
    puVar6 = puVar8;
    do {
      puVar7 = (uint *)((long)puVar6 + 1);
      uVar3 = *puVar6;
      plVar4 = (long *)(((ulong)(byte)uVar3 & 0x7f) << (uVar9 & 0x3f) | (ulong)plVar4);
      uVar9 = uVar9 + 7;
      puVar6 = puVar7;
    } while ((char)(byte)uVar3 < '\0');
    break;
  case 2:
    puVar7 = (uint *)((long)puVar8 + 2);
    plVar4 = (long *)(ulong)(ushort)*puVar8;
    break;
  case 3:
    puVar7 = puVar8 + 1;
    plVar4 = (long *)(ulong)*puVar8;
    break;
  default:
    goto switchD_001fcf40_caseD_5;
  case 9:
    uVar9 = 0;
    uVar5 = 0;
    puVar6 = puVar8;
    do {
      puVar7 = (uint *)((long)puVar6 + 1);
      bVar2 = (byte)*puVar6;
      uVar5 = ((ulong)bVar2 & 0x7f) << (uVar9 & 0x3f) | uVar5;
      uVar9 = uVar9 + 7;
      puVar6 = puVar7;
    } while ((char)bVar2 < '\0');
    uVar10 = -1L << (uVar9 & 0x3f);
    if (((uint)(uVar9 < 0x40) & (bVar2 & 0x40) >> 6) == 0) {
      uVar10 = 0;
    }
    plVar4 = (long *)(uVar5 | uVar10);
    break;
  case 10:
    puVar7 = (uint *)((long)puVar8 + 2);
    plVar4 = (long *)(long)(short)*puVar8;
    break;
  case 0xb:
    puVar7 = puVar8 + 1;
    plVar4 = (long *)(long)(int)*puVar8;
  }
  uVar3 = uVar1 >> 4 & 7;
  if (uVar3 != 0) {
    if (uVar3 != 1) goto switchD_001fcf40_caseD_5;
    if (plVar4 == (long *)0x0) goto LAB_001fd02c;
    plVar4 = (long *)((long)plVar4 + (long)puVar8);
  }
  if ((plVar4 != (long *)0x0) && (uVar1 >> 7 != 0)) {
    plVar4 = (long *)*plVar4;
  }
LAB_001fd02c:
  *param_1 = puVar7;
  return plVar4;
}


// ===== 001fd054  __cxa_pure_virtual =====

void __cxa_pure_virtual(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_001e8584("Pure virtual function called!");
}


// ===== 001fd068  __cxa_deleted_virtual =====

void __cxa_deleted_virtual(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_001e8584("Deleted virtual function called!");
}


// ===== 001fd07c  FUN_001fd07c =====

void FUN_001fd07c(size_t param_1)

{
  long lVar1;
  int iVar2;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0) {
    param_1 = 1;
  }
  iVar2 = posix_memalign(&local_30,0x10,param_1);
  if (iVar2 != 0) {
    local_30 = (void *)FUN_001fd0e8(param_1);
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_30);
  }
  return;
}


// ===== 001fd0e8  FUN_001fd0e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort * FUN_001fd0e8(long param_1)

{
  ulong uVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00215f88);
  if (DAT_00215fb0 == (ushort *)0x0) {
    DAT_00215fb0 = &DAT_00215fc0;
    _DAT_00215fc0 = 0x800080;
  }
  if (DAT_00215fb0 != (ushort *)&DAT_002161c0) {
    uVar1 = (param_1 + 3U >> 2) + 1;
    puVar4 = (ushort *)0x0;
    puVar3 = DAT_00215fb0;
    do {
      uVar2 = puVar3[1];
      if (uVar1 < uVar2) {
        uVar2 = uVar2 - (ushort)uVar1;
        puVar3[1] = uVar2;
        puVar3 = puVar3 + (ulong)uVar2 * 2;
        *puVar3 = 0;
        puVar3[1] = (ushort)uVar1;
        puVar4 = puVar3 + 2;
        goto LAB_001fd1b4;
      }
      if (uVar1 == uVar2) {
        if (puVar4 == (ushort *)0x0) {
          DAT_00215fb0 = &DAT_00215fc0 + (ulong)*puVar3 * 2;
        }
        else {
          *puVar4 = *puVar3;
        }
        puVar4 = puVar3 + 2;
        *puVar3 = 0;
        goto LAB_001fd1b4;
      }
      uVar2 = *puVar3;
      puVar4 = puVar3;
      puVar3 = &DAT_00215fc0 + (ulong)uVar2 * 2;
    } while ((ulong)uVar2 != 0x80);
  }
  puVar4 = (ushort *)0x0;
LAB_001fd1b4:
                    /* try { // try from 001fd1b4 to 001fd1bf has its CatchHandler @ 001fd1d0 */
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00215f88);
  return puVar4;
}


// ===== 001fd1d4  FUN_001fd1d4 =====

void * FUN_001fd1d4(size_t param_1,size_t param_2)

{
  void *__s;
  
  __s = calloc(param_1,param_2);
  if (__s == (void *)0x0) {
    __s = (void *)FUN_001fd0e8(param_2 * param_1);
    if (__s != (void *)0x0) {
      memset(__s,0,param_2 * param_1);
    }
  }
  return __s;
}


// ===== 001fd230  FUN_001fd230 =====

void FUN_001fd230(undefined1 *param_1)

{
  if (((undefined1 *)0x215fbf < param_1) && (param_1 < &DAT_002161c0)) {
    FUN_001fd258();
    return;
  }
  free(param_1);
  return;
}


// ===== 001fd258  FUN_001fd258 =====

int FUN_001fd258(long param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  
  puVar6 = (ushort *)(param_1 + -4);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00215f88);
  if ((DAT_00215fb0 != (ushort *)0x0) && (DAT_00215fb0 != (ushort *)&DAT_002161c0)) {
    uVar2 = *(ushort *)(param_1 + -2);
    puVar4 = (ushort *)0x0;
    puVar5 = DAT_00215fb0;
    do {
      uVar1 = puVar5[1];
      if (puVar5 + (ulong)uVar1 * 2 == puVar6) {
        puVar5[1] = uVar2 + uVar1;
        goto LAB_001fd338;
      }
      if (puVar6 + (ulong)uVar2 * 2 == puVar5) {
        *(ushort *)(param_1 + -2) = uVar2 + uVar1;
        if (puVar4 == (ushort *)0x0) {
          DAT_00215fb0 = puVar6;
          *puVar6 = puVar6[(ulong)uVar2 * 2];
        }
        else {
          *puVar4 = (ushort)((int)puVar6 - 0x215fc0U >> 2);
        }
        goto LAB_001fd338;
      }
      uVar1 = *puVar5;
      puVar4 = puVar5;
      puVar5 = &DAT_00215fc0 + (ulong)uVar1 * 2;
    } while ((ulong)uVar1 != 0x80);
  }
  *puVar6 = (ushort)((int)DAT_00215fb0 - 0x215fc0U >> 2);
  DAT_00215fb0 = puVar6;
LAB_001fd338:
                    /* try { // try from 001fd338 to 001fd343 has its CatchHandler @ 001fd350 */
  iVar3 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00215f88);
  return iVar3;
}


// ===== 001fd354  FUN_001fd354 =====

void FUN_001fd354(undefined1 *param_1)

{
  if (((undefined1 *)0x215fbf < param_1) && (param_1 < &DAT_002161c0)) {
    FUN_001fd258();
    return;
  }
  free(param_1);
  return;
}


// ===== 001fd37c  std::type_info::~type_info =====

void __thiscall std::type_info::~type_info(type_info *this)

{
  (*(code *)PTR__type_info_002109c0)();
  return;
}


// ===== 001fd380  FUN_001fd380 =====

void FUN_001fd380(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1fd384);
  (*pcVar1)();
}


// ===== 001fd384  FUN_001fd384 =====

void FUN_001fd384(void)

{
  return;
}


// ===== 001fd388  FUN_001fd388 =====

void FUN_001fd388(void)

{
  return;
}


// ===== 001fd38c  FUN_001fd38c =====

void FUN_001fd38c(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001fd3b0  FUN_001fd3b0 =====

void FUN_001fd3b0(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001fd3d4  FUN_001fd3d4 =====

void FUN_001fd3d4(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001fd3f8  FUN_001fd3f8 =====

void FUN_001fd3f8(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001fd41c  FUN_001fd41c =====

void FUN_001fd41c(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001fd440  FUN_001fd440 =====

void FUN_001fd440(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001fd464  FUN_001fd464 =====

void FUN_001fd464(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001fd488  FUN_001fd488 =====

void FUN_001fd488(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001fd4ac  FUN_001fd4ac =====

void FUN_001fd4ac(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001fd4d0  FUN_001fd4d0 =====

void FUN_001fd4d0(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001fd4f4  FUN_001fd4f4 =====

bool FUN_001fd4f4(long param_1,long param_2)

{
  return *(long *)(param_1 + 8) == *(long *)(param_2 + 8);
}


// ===== 001fd508  FUN_001fd508 =====

undefined8 FUN_001fd508(void)

{
  return 0;
}


// ===== 001fd510  FUN_001fd510 =====

undefined8 FUN_001fd510(void)

{
  return 0;
}


// ===== 001fd518  FUN_001fd518 =====

bool FUN_001fd518(long param_1,long param_2)

{
  return *(long *)(param_1 + 8) == *(long *)(param_2 + 8);
}


// ===== 001fd52c  FUN_001fd52c =====

void FUN_001fd52c(long param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  long *local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined7 uStack_50;
  undefined1 local_49;
  undefined7 uStack_48;
  undefined8 uStack_41;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 8) != *(long *)(param_2 + 8)) {
    plVar2 = (long *)__dynamic_cast(param_2,PTR_PTR_0020fc78,PTR_PTR_0020fc80,0);
    if (plVar2 == (long *)0x0) goto LAB_001fd5e4;
    uStack_80 = 0;
    uStack_70 = 0xffffffffffffffff;
    uStack_48 = 0;
    uStack_60 = 0;
    local_68 = 0;
    uStack_50 = 0;
    local_49 = 0;
    local_58 = 0;
    uStack_41 = 0x100;
    local_88 = plVar2;
    local_78 = param_1;
    (**(code **)(*plVar2 + 0x38))(plVar2,&local_88,*param_3,1);
    if ((int)local_58 != 1) {
      plVar2 = (long *)0x0;
      goto LAB_001fd5e4;
    }
    *param_3 = local_68;
  }
  plVar2 = (long *)0x1;
LAB_001fd5e4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar2);
}


// ===== 001fd60c  FUN_001fd60c =====

void FUN_001fd60c(undefined8 param_1,long param_2,long param_3,undefined4 param_4)

{
  if (*(long *)(param_2 + 0x20) == 0) {
    *(long *)(param_2 + 0x20) = param_3;
    *(undefined4 *)(param_2 + 0x30) = param_4;
    *(undefined4 *)(param_2 + 0x3c) = 1;
    return;
  }
  if (*(long *)(param_2 + 0x20) == param_3) {
    if (*(int *)(param_2 + 0x30) == 2) {
      *(undefined4 *)(param_2 + 0x30) = param_4;
      return;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x30) = 2;
    *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
    *(undefined1 *)(param_2 + 0x4e) = 1;
  }
  return;
}


// ===== 001fd664  FUN_001fd664 =====

void FUN_001fd664(long param_1,long param_2,long param_3,undefined4 param_4)

{
  if (*(long *)(param_1 + 8) == *(long *)(*(long *)(param_2 + 0x10) + 8)) {
    if (*(long *)(param_2 + 0x20) == 0) {
      *(long *)(param_2 + 0x20) = param_3;
      *(undefined4 *)(param_2 + 0x30) = param_4;
      *(undefined4 *)(param_2 + 0x3c) = 1;
      return;
    }
    if (*(long *)(param_2 + 0x20) != param_3) {
      *(undefined4 *)(param_2 + 0x30) = 2;
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
      *(undefined1 *)(param_2 + 0x4e) = 1;
      return;
    }
    if (*(int *)(param_2 + 0x30) == 2) {
      *(undefined4 *)(param_2 + 0x30) = param_4;
      return;
    }
  }
  return;
}


// ===== 001fd6d4  FUN_001fd6d4 =====

void FUN_001fd6d4(long param_1,long param_2,long param_3,undefined4 param_4)

{
  if (*(long *)(param_1 + 8) != *(long *)(*(long *)(param_2 + 0x10) + 8)) {
                    /* WARNING: Could not recover jumptable at 0x001fd6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x38))();
    return;
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    if (*(long *)(param_2 + 0x20) == param_3) {
      if (*(int *)(param_2 + 0x30) == 2) {
        *(undefined4 *)(param_2 + 0x30) = param_4;
        return;
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x30) = 2;
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
      *(undefined1 *)(param_2 + 0x4e) = 1;
    }
    return;
  }
  *(long *)(param_2 + 0x20) = param_3;
  *(undefined4 *)(param_2 + 0x30) = param_4;
  *(undefined4 *)(param_2 + 0x3c) = 1;
  return;
}


// ===== 001fd750  FUN_001fd750 =====

void FUN_001fd750(undefined8 *param_1,undefined8 param_2,long *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = param_1[1];
  if (param_3 == (long *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (long)uVar2 >> 8;
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(*param_3 + lVar3);
    }
  }
  uVar1 = 2;
  if ((uVar2 & 2) != 0) {
    uVar1 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x001fd78c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x38))((long *)*param_1,param_2,(long)param_3 + lVar3,uVar1);
  return;
}


// ===== 001fd790  FUN_001fd790 =====

void FUN_001fd790(long param_1,long param_2,long *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (*(long *)(param_1 + 8) == *(long *)(*(long *)(param_2 + 0x10) + 8)) {
    if (*(long **)(param_2 + 0x20) == (long *)0x0) {
      *(long **)(param_2 + 0x20) = param_3;
      *(undefined4 *)(param_2 + 0x30) = param_4;
      *(undefined4 *)(param_2 + 0x3c) = 1;
    }
    else if (*(long **)(param_2 + 0x20) == param_3) {
      if (*(int *)(param_2 + 0x30) == 2) {
        *(undefined4 *)(param_2 + 0x30) = param_4;
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x30) = 2;
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
      *(undefined1 *)(param_2 + 0x4e) = 1;
    }
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x14);
    uVar3 = *(ulong *)(param_1 + 0x20);
    if (param_3 == (long *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (long)uVar3 >> 8;
      if ((uVar3 & 1) != 0) {
        lVar4 = *(long *)(*param_3 + lVar4);
      }
    }
    uVar1 = 2;
    if ((uVar3 & 2) != 0) {
      uVar1 = param_4;
    }
    (**(code **)(**(long **)(param_1 + 0x18) + 0x38))
              (*(long **)(param_1 + 0x18),param_2,(long)param_3 + lVar4,uVar1);
    if (1 < uVar2) {
      puVar5 = (undefined8 *)(param_1 + 0x28);
      do {
        uVar3 = puVar5[1];
        if (param_3 == (long *)0x0) {
          lVar4 = 0;
        }
        else {
          lVar4 = (long)uVar3 >> 8;
          if ((uVar3 & 1) != 0) {
            lVar4 = *(long *)(*param_3 + lVar4);
          }
        }
        uVar1 = 2;
        if ((uVar3 & 2) != 0) {
          uVar1 = param_4;
        }
        (**(code **)(*(long *)*puVar5 + 0x38))((long *)*puVar5,param_2,(long)param_3 + lVar4,uVar1);
      } while ((*(char *)(param_2 + 0x4e) == '\0') &&
              (puVar5 = puVar5 + 2, puVar5 < (undefined8 *)(param_1 + (ulong)uVar2 * 0x10 + 0x18)));
    }
  }
  return;
}


// ===== 001fd8e4  FUN_001fd8e4 =====

bool FUN_001fd8e4(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x10) & 0x18) == 0) {
    if (param_2 == 0) {
      return false;
    }
    lVar2 = __dynamic_cast(param_2,PTR_PTR_0020fc78,PTR_PTR_0020fc88,0);
    if (lVar2 == 0) {
      return false;
    }
    if ((*(byte *)(lVar2 + 0x10) & 0x18) == 0) {
      return *(long *)(param_1 + 8) == *(long *)(param_2 + 8);
    }
  }
  if (param_1 != param_2) {
    iVar1 = strcmp(*(char **)(param_1 + 8),*(char **)(param_2 + 8));
    return iVar1 == 0;
  }
  return true;
}


// ===== 001fd97c  FUN_001fd97c =====

long * FUN_001fd97c(long param_1,long param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *local_98;
  undefined8 uStack_90;
  long *local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined7 uStack_60;
  undefined1 local_59;
  undefined7 uStack_58;
  undefined8 uStack_51;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(undefined **)(param_2 + 8) == PTR_typeinfo_name_0020fc90) {
    *param_3 = 0;
LAB_001fd9fc:
    plVar4 = (long *)0x1;
  }
  else {
    if ((*(byte *)(param_1 + 0x10) & 0x18) != 0) {
LAB_001fd9cc:
      if ((param_1 != param_2) &&
         (iVar2 = strcmp(*(char **)(param_1 + 8),*(char **)(param_2 + 8)), iVar2 != 0))
      goto LAB_001fda64;
LAB_001fd9e4:
      if ((long *)*param_3 == (long *)0x0) goto LAB_001fd9fc;
      lVar6 = *(long *)*param_3;
LAB_001fd9f0:
      *param_3 = lVar6;
      goto LAB_001fd9fc;
    }
    lVar6 = __dynamic_cast(param_2,PTR_PTR_0020fc78,PTR_PTR_0020fc88,0);
    if (lVar6 != 0) {
      if ((*(byte *)(lVar6 + 0x10) & 0x18) != 0) goto LAB_001fd9cc;
      if (*(long *)(param_1 + 8) != *(long *)(param_2 + 8)) goto LAB_001fda64;
      goto LAB_001fd9e4;
    }
LAB_001fda64:
    plVar3 = (long *)__dynamic_cast(param_2,PTR_PTR_0020fc78,PTR_PTR_0020fc98,0);
    plVar4 = plVar3;
    if (plVar3 == (long *)0x0) goto LAB_001fda00;
    if ((long *)*param_3 != (long *)0x0) {
      *param_3 = *(long *)*param_3;
    }
    if (((*(uint *)(plVar3 + 2) & (*(uint *)(param_1 + 0x10) ^ 0xffffffff) & 7) != 0) ||
       ((*(uint *)(param_1 + 0x10) & (*(uint *)(plVar3 + 2) ^ 0xffffffff) & 0x60) != 0))
    goto LAB_001fdab8;
    plVar4 = *(long **)(param_1 + 0x18);
    lVar6 = plVar3[3];
    if ((undefined *)plVar4[1] == *(undefined **)(lVar6 + 8)) goto LAB_001fd9fc;
    if ((undefined *)plVar4[1] == PTR_typeinfo_name_0020fca0) {
      if (lVar6 == 0) goto LAB_001fd9fc;
      lVar6 = __dynamic_cast(lVar6,PTR_PTR_0020fc78,PTR_PTR_0020fca8,0);
      plVar4 = (long *)(ulong)(lVar6 == 0);
    }
    else if (plVar4 != (long *)0x0) {
      lVar6 = __dynamic_cast(plVar4,PTR_PTR_0020fc78,PTR_PTR_0020fc98,0);
      if (lVar6 != 0) {
        if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
          plVar4 = (long *)FUN_001fdc9c(lVar6,plVar3[3]);
          if (*(long *)(lVar1 + 0x28) == local_48) {
            return (long *)(ulong)((uint)plVar4 & 1);
          }
          goto LAB_001fdc98;
        }
        goto LAB_001fdab8;
      }
      plVar4 = *(long **)(param_1 + 0x18);
      if (plVar4 != (long *)0x0) {
        lVar6 = __dynamic_cast(plVar4,PTR_PTR_0020fc78,PTR_PTR_0020fcb0,0);
        if (lVar6 == 0) {
          plVar4 = *(long **)(param_1 + 0x18);
          if ((((plVar4 != (long *)0x0) &&
               (plVar5 = (long *)__dynamic_cast(plVar4,PTR_PTR_0020fc78,PTR_PTR_0020fc80,0),
               plVar4 = plVar5, plVar5 != (long *)0x0)) &&
              (plVar4 = (long *)plVar3[3], plVar4 != (long *)0x0)) &&
             (plVar4 = (long *)__dynamic_cast(plVar4,PTR_PTR_0020fc78,PTR_PTR_0020fc80,0),
             plVar4 != (long *)0x0)) {
            uStack_90 = 0;
            uStack_80 = 0xffffffffffffffff;
            uStack_58 = 0;
            uStack_70 = 0;
            local_78 = 0;
            uStack_60 = 0;
            local_59 = 0;
            local_68 = 0;
            uStack_51 = 0x100;
            local_98 = plVar4;
            local_88 = plVar5;
            (**(code **)(*plVar4 + 0x38))(plVar4,&local_98,*param_3,1);
            if ((int)local_68 == 1) {
              lVar6 = local_78;
              if (*param_3 != 0) goto LAB_001fd9f0;
              goto LAB_001fd9fc;
            }
LAB_001fdab8:
            plVar4 = (long *)0x0;
          }
        }
        else {
          if ((*(byte *)(param_1 + 0x10) & 1) == 0) goto LAB_001fdab8;
          plVar4 = (long *)plVar3[3];
          if ((plVar4 != (long *)0x0) &&
             (plVar4 = (long *)__dynamic_cast(plVar4,PTR_PTR_0020fc78,PTR_PTR_0020fcb0,0),
             plVar4 != (long *)0x0)) {
            if (((*(uint *)(plVar4 + 2) & (*(uint *)(lVar6 + 0x10) ^ 0xffffffff)) != 0) ||
               (*(long *)(*(long *)(lVar6 + 0x18) + 8) != *(long *)(plVar4[3] + 8)))
            goto LAB_001fdab8;
            plVar4 = (long *)(ulong)(*(long *)(*(long *)(lVar6 + 0x20) + 8) ==
                                    *(long *)(plVar4[4] + 8));
          }
        }
      }
    }
  }
LAB_001fda00:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return plVar4;
  }
LAB_001fdc98:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar4);
}


// ===== 001fdc9c  FUN_001fdc9c =====

bool FUN_001fdc9c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_0020fc98;
  puVar1 = PTR_PTR_0020fc78;
  if (param_2 != 0) {
    do {
      lVar3 = __dynamic_cast(param_2,puVar1,puVar2,0);
      if (lVar3 == 0) {
        return false;
      }
      if ((*(uint *)(lVar3 + 0x10) & (*(uint *)(param_1 + 0x10) ^ 0xffffffff)) != 0) {
        return false;
      }
      lVar4 = *(long *)(param_1 + 0x18);
      if (*(long *)(lVar4 + 8) == *(long *)(*(long *)(lVar3 + 0x18) + 8)) {
        return true;
      }
      if ((*(uint *)(param_1 + 0x10) & 1) == 0) {
        return false;
      }
      if (lVar4 == 0) {
        return false;
      }
      lVar4 = __dynamic_cast(lVar4,puVar1,puVar2,0);
      if (lVar4 == 0) {
        if (*(long *)(param_1 + 0x18) == 0) {
          return false;
        }
        lVar4 = __dynamic_cast(*(long *)(param_1 + 0x18),PTR_PTR_0020fc78,PTR_PTR_0020fcb0,0);
        if (lVar4 == 0) {
          return false;
        }
        if (*(long *)(lVar3 + 0x18) == 0) {
          return false;
        }
        lVar3 = __dynamic_cast(*(long *)(lVar3 + 0x18),PTR_PTR_0020fc78,PTR_PTR_0020fcb0,0);
        if (lVar3 != 0) {
          if ((*(uint *)(lVar3 + 0x10) & (*(uint *)(lVar4 + 0x10) ^ 0xffffffff)) != 0) {
            return false;
          }
          if (*(long *)(*(long *)(lVar4 + 0x18) + 8) != *(long *)(*(long *)(lVar3 + 0x18) + 8)) {
            return false;
          }
          return *(long *)(*(long *)(lVar4 + 0x20) + 8) == *(long *)(*(long *)(lVar3 + 0x20) + 8);
        }
        return false;
      }
      param_2 = *(long *)(lVar3 + 0x18);
      param_1 = lVar4;
    } while (param_2 != 0);
  }
  return false;
}


// ===== 001fdde4  FUN_001fdde4 =====

bool FUN_001fdde4(long param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = __dynamic_cast(param_2,PTR_PTR_0020fc78,PTR_PTR_0020fcb0,0);
    if (lVar1 == 0) {
      return false;
    }
    if (((*(uint *)(lVar1 + 0x10) & (*(uint *)(param_1 + 0x10) ^ 0xffffffff)) == 0) &&
       (*(long *)(*(long *)(param_1 + 0x18) + 8) == *(long *)(*(long *)(lVar1 + 0x18) + 8))) {
      return *(long *)(*(long *)(param_1 + 0x20) + 8) == *(long *)(*(long *)(lVar1 + 0x20) + 8);
    }
  }
  return false;
}


// ===== 001fde70  FUN_001fde70 =====

ulong FUN_001fde70(long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  
  if (*(undefined **)(param_2 + 8) == PTR_typeinfo_name_0020fc90) {
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (lVar2 = __dynamic_cast(*(long *)(param_1 + 0x18),PTR_PTR_0020fc78,PTR_PTR_0020fca8,0),
       lVar2 == 0)) {
      puVar4 = &DAT_0014af78;
    }
    else {
      puVar4 = &DAT_0014af68;
    }
    *param_3 = puVar4;
LAB_001fdfa0:
    uVar3 = 1;
  }
  else {
    if ((*(byte *)(param_1 + 0x10) & 0x18) == 0) {
      lVar2 = __dynamic_cast(param_2,PTR_PTR_0020fc78,PTR_PTR_0020fc88,0);
      if (lVar2 != 0) {
        if ((*(byte *)(lVar2 + 0x10) & 0x18) != 0) goto LAB_001fdea8;
        if (*(long *)(param_1 + 8) == *(long *)(param_2 + 8)) goto LAB_001fdfa0;
      }
    }
    else {
LAB_001fdea8:
      if ((param_1 == param_2) ||
         (iVar1 = strcmp(*(char **)(param_1 + 8),*(char **)(param_2 + 8)), iVar1 == 0))
      goto LAB_001fdfa0;
    }
    uVar3 = __dynamic_cast(param_2,PTR_PTR_0020fc78,PTR_PTR_0020fcb0,0);
    if (uVar3 != 0) {
      if ((((*(uint *)(uVar3 + 0x10) & (*(uint *)(param_1 + 0x10) ^ 0xffffffff) & 7) == 0) &&
          ((*(uint *)(param_1 + 0x10) & (*(uint *)(uVar3 + 0x10) ^ 0xffffffff) & 0x60) == 0)) &&
         (*(long *)(*(long *)(param_1 + 0x18) + 8) == *(long *)(*(long *)(uVar3 + 0x18) + 8))) {
        uVar3 = (ulong)(*(long *)(*(long *)(param_1 + 0x20) + 8) ==
                       *(long *)(*(long *)(uVar3 + 0x20) + 8));
      }
      else {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}


// ===== 001fdfd0  __dynamic_cast =====

void __dynamic_cast(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long local_78;
  long *plStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  long lStack_50;
  undefined8 local_48;
  int iStack_40;
  int iStack_3c;
  int local_38;
  undefined3 uStack_34;
  undefined8 uStack_31;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  plVar1 = *(long **)(*param_1 + -8);
  lStack_50 = 0;
  local_58 = 0;
  iStack_40 = 0;
  local_48 = 0;
  uStack_31 = 0;
  iStack_3c = 0;
  local_38 = 0;
  uStack_34 = 0;
  lVar3 = (long)param_1 + *(long *)(*param_1 + -0x10);
  local_78 = param_3;
  plStack_70 = param_1;
  local_68 = param_2;
  uStack_60 = param_4;
  if (plVar1[1] == *(long *)(param_3 + 8)) {
    uStack_31 = 0x100;
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_78,lVar3,lVar3,1,0);
    if ((int)local_48 != 1) {
      lVar3 = 0;
    }
  }
  else {
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_78,lVar3,1,0);
    if (iStack_3c == 1) {
      if (((int)local_48 == 1) ||
         (((lVar3 = 0, local_38 == 0 && (local_48._4_4_ == 1)) && (iStack_40 == 1)))) {
        lVar3 = local_58;
      }
    }
    else if (iStack_3c == 0) {
      lVar3 = lStack_50;
      if ((iStack_40 != 1 || local_48._4_4_ != 1) || local_38 != 1) {
        lVar3 = 0;
      }
    }
    else {
      lVar3 = 0;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


// ===== 001fe108  FUN_001fe108 =====

void FUN_001fe108(undefined8 param_1,long param_2,long param_3,long param_4,int param_5)

{
  int iVar1;
  
  *(undefined1 *)(param_2 + 0x4d) = 1;
  if (*(long *)(param_2 + 8) == param_4) {
    *(undefined1 *)(param_2 + 0x4c) = 1;
    if (*(long *)(param_2 + 0x20) == 0) {
      *(long *)(param_2 + 0x20) = param_3;
      *(int *)(param_2 + 0x30) = param_5;
      *(undefined4 *)(param_2 + 0x3c) = 1;
      if ((param_5 == 1) && (*(int *)(param_2 + 0x48) == 1)) {
        *(undefined1 *)(param_2 + 0x4e) = 1;
        return;
      }
    }
    else {
      if (*(long *)(param_2 + 0x20) != param_3) {
        *(undefined1 *)(param_2 + 0x4e) = 1;
        *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
        return;
      }
      iVar1 = *(int *)(param_2 + 0x30);
      if (*(int *)(param_2 + 0x30) == 2) {
        *(int *)(param_2 + 0x30) = param_5;
        iVar1 = param_5;
      }
      if ((*(int *)(param_2 + 0x48) == 1) && (iVar1 == 1)) {
        *(undefined1 *)(param_2 + 0x4e) = 1;
        return;
      }
    }
  }
  return;
}


// ===== 001fe1a8  FUN_001fe1a8 =====

void FUN_001fe1a8(undefined8 param_1,long param_2,long param_3,undefined4 param_4)

{
  if ((*(long *)(param_2 + 8) == param_3) && (*(int *)(param_2 + 0x34) != 1)) {
    *(undefined4 *)(param_2 + 0x34) = param_4;
    return;
  }
  return;
}


// ===== 001fe1cc  FUN_001fe1cc =====

void FUN_001fe1cc(long param_1,long *param_2,long *param_3,int param_4,uint param_5)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  char *__s1;
  undefined8 *puVar10;
  undefined4 uVar11;
  
  lVar6 = param_2[2];
  if ((param_5 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar6 + 8)) {
      if (*(long *)(param_1 + 8) != *(long *)(*param_2 + 8)) {
LAB_001fe2a8:
        uVar7 = *(ulong *)(param_1 + 0x20);
        uVar1 = *(uint *)(param_1 + 0x14);
        lVar6 = (long)uVar7 >> 8;
        if ((uVar7 & 1) != 0) {
          lVar6 = *(long *)(*param_3 + lVar6);
        }
        iVar5 = 2;
        if ((uVar7 & 2) != 0) {
          iVar5 = param_4;
        }
        (**(code **)(**(long **)(param_1 + 0x18) + 0x30))
                  (*(long **)(param_1 + 0x18),param_2,(long)param_3 + lVar6,iVar5,param_5 & 1);
        if (uVar1 < 2) {
          return;
        }
        puVar10 = (undefined8 *)(param_1 + (ulong)uVar1 * 0x10 + 0x18);
        puVar9 = (undefined8 *)(param_1 + 0x28);
        if (((*(uint *)(param_1 + 0x10) >> 1 & 1) != 0) || (*(int *)((long)param_2 + 0x3c) == 1)) {
          do {
            if (*(char *)((long)param_2 + 0x4e) != '\0') {
              return;
            }
            uVar7 = puVar9[1];
            lVar6 = (long)uVar7 >> 8;
            if ((uVar7 & 1) != 0) {
              lVar6 = *(long *)(*param_3 + lVar6);
            }
            puVar8 = puVar9 + 2;
            iVar5 = 2;
            if ((uVar7 & 2) != 0) {
              iVar5 = param_4;
            }
            (**(code **)(*(long *)*puVar9 + 0x30))
                      ((long *)*puVar9,param_2,(long)param_3 + lVar6,iVar5,param_5 & 1);
            puVar9 = puVar8;
          } while (puVar8 < puVar10);
          return;
        }
        if ((*(uint *)(param_1 + 0x10) & 1) == 0) {
          while( true ) {
            if (*(char *)((long)param_2 + 0x4e) != '\0') {
              return;
            }
            if (*(int *)((long)param_2 + 0x3c) == 1) break;
            uVar7 = puVar9[1];
            lVar6 = (long)uVar7 >> 8;
            if ((uVar7 & 1) != 0) {
              lVar6 = *(long *)(*param_3 + lVar6);
            }
            puVar8 = puVar9 + 2;
            iVar5 = 2;
            if ((uVar7 & 2) != 0) {
              iVar5 = param_4;
            }
            (**(code **)(*(long *)*puVar9 + 0x30))
                      ((long *)*puVar9,param_2,(long)param_3 + lVar6,iVar5,param_5 & 1);
            puVar9 = puVar8;
            if (puVar10 <= puVar8) {
              return;
            }
          }
          return;
        }
        while( true ) {
          if (*(char *)((long)param_2 + 0x4e) != '\0') {
            return;
          }
          if ((*(int *)((long)param_2 + 0x3c) == 1) && ((int)param_2[6] == 1)) break;
          uVar7 = puVar9[1];
          lVar6 = (long)uVar7 >> 8;
          if ((uVar7 & 1) != 0) {
            lVar6 = *(long *)(*param_3 + lVar6);
          }
          puVar8 = puVar9 + 2;
          iVar5 = 2;
          if ((uVar7 & 2) != 0) {
            iVar5 = param_4;
          }
          (**(code **)(*(long *)*puVar9 + 0x30))
                    ((long *)*puVar9,param_2,(long)param_3 + lVar6,iVar5,param_5 & 1);
          puVar9 = puVar8;
          if (puVar10 <= puVar8) {
            return;
          }
        }
        return;
      }
LAB_001fe23c:
      if (((long *)param_2[4] == param_3) || ((long *)param_2[5] == param_3)) {
        if (param_4 != 1) {
          return;
        }
        *(undefined4 *)(param_2 + 7) = 1;
        return;
      }
      *(int *)(param_2 + 7) = param_4;
      if (*(int *)((long)param_2 + 0x44) != 4) {
        uVar1 = *(uint *)(param_1 + 0x14);
        if (uVar1 == 0) {
          *(undefined4 *)((long)param_2 + 0x44) = 4;
        }
        else {
          bVar3 = false;
          bVar2 = false;
          puVar10 = (undefined8 *)(param_1 + 0x18);
          do {
            *(undefined2 *)((long)param_2 + 0x4c) = 0;
            uVar7 = puVar10[1];
            lVar6 = (long)uVar7 >> 8;
            if ((uVar7 & 1) != 0) {
              lVar6 = *(long *)(*param_3 + lVar6);
            }
            uVar11 = 1;
            if ((uVar7 & 2) == 0) {
              uVar11 = 2;
            }
            (**(code **)(*(long *)*puVar10 + 0x28))
                      ((long *)*puVar10,param_2,param_3,(long)param_3 + lVar6,uVar11,param_5 & 1);
            if (*(char *)((long)param_2 + 0x4e) != '\0') break;
            bVar4 = bVar3;
            if (*(char *)((long)param_2 + 0x4d) != '\0') {
              if (*(char *)((long)param_2 + 0x4c) == '\0') {
                if ((*(byte *)(param_1 + 0x10) & 1) == 0) goto LAB_001fe518;
                bVar2 = true;
              }
              else {
                if ((int)param_2[6] == 1) {
                  bVar3 = true;
                  goto LAB_001fe518;
                }
                bVar2 = true;
                bVar3 = bVar2;
                bVar4 = true;
                if ((*(byte *)(param_1 + 0x10) >> 1 & 1) == 0) goto LAB_001fe518;
              }
            }
            bVar3 = bVar4;
            puVar10 = puVar10 + 2;
          } while (puVar10 < (undefined8 *)(param_1 + (ulong)uVar1 * 0x10 + 0x18));
          if (bVar2) {
LAB_001fe518:
            uVar11 = 3;
          }
          else {
            uVar11 = 4;
          }
          *(undefined4 *)((long)param_2 + 0x44) = uVar11;
          if (bVar3) {
            return;
          }
        }
      }
      param_2[5] = (long)param_3;
      *(int *)(param_2 + 8) = (int)param_2[8] + 1;
      if (*(int *)((long)param_2 + 0x3c) != 1) {
        return;
      }
      if ((int)param_2[6] != 2) {
        return;
      }
      *(undefined1 *)((long)param_2 + 0x4e) = 1;
      return;
    }
  }
  else if (param_1 != lVar6) {
    __s1 = *(char **)(param_1 + 8);
    iVar5 = strcmp(__s1,*(char **)(lVar6 + 8));
    if (iVar5 != 0) {
      if ((param_1 != *param_2) && (iVar5 = strcmp(__s1,*(char **)(*param_2 + 8)), iVar5 != 0))
      goto LAB_001fe2a8;
      goto LAB_001fe23c;
    }
  }
  if (((long *)param_2[1] == param_3) && (*(int *)((long)param_2 + 0x34) != 1)) {
    *(int *)((long)param_2 + 0x34) = param_4;
  }
  return;
}


// ===== 001fe570  FUN_001fe570 =====

void FUN_001fe570(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001fe5a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x28))();
  return;
}


// ===== 001fe5a8  FUN_001fe5a8 =====

void FUN_001fe5a8(undefined8 *param_1,undefined8 param_2,long *param_3,undefined4 param_4,
                 uint param_5)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = param_1[1];
  lVar3 = (long)uVar2 >> 8;
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(*param_3 + lVar3);
  }
  uVar1 = 2;
  if ((uVar2 & 2) != 0) {
    uVar1 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x001fe5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x30))
            ((long *)*param_1,param_2,(long)param_3 + lVar3,uVar1,param_5 & 1);
  return;
}


// ===== 001fe5e0  FUN_001fe5e0 =====

void FUN_001fe5e0(long param_1,long *param_2,long param_3,int param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  char *__s1;
  
  lVar2 = param_2[2];
  if ((param_5 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar2 + 8)) {
      if (*(long *)(param_1 + 8) != *(long *)(*param_2 + 8)) {
LAB_001fe6d4:
                    /* WARNING: Could not recover jumptable at 0x001fe700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x10) + 0x30))
                  (*(long **)(param_1 + 0x10),param_2,param_3,param_4,param_5 & 1);
        return;
      }
LAB_001fe648:
      if ((param_2[4] == param_3) || (param_2[5] == param_3)) {
        if (param_4 != 1) {
          return;
        }
        *(undefined4 *)(param_2 + 7) = 1;
        return;
      }
      *(int *)(param_2 + 7) = param_4;
      if (*(int *)((long)param_2 + 0x44) != 4) {
        *(undefined2 *)((long)param_2 + 0x4c) = 0;
        (**(code **)(**(long **)(param_1 + 0x10) + 0x28))
                  (*(long **)(param_1 + 0x10),param_2,param_3,param_3,1,param_5 & 1);
        if (*(char *)((long)param_2 + 0x4d) == '\0') {
          *(undefined4 *)((long)param_2 + 0x44) = 4;
        }
        else {
          *(undefined4 *)((long)param_2 + 0x44) = 3;
          if (*(char *)((long)param_2 + 0x4c) != '\0') {
            return;
          }
        }
      }
      param_2[5] = param_3;
      *(int *)(param_2 + 8) = (int)param_2[8] + 1;
      if (*(int *)((long)param_2 + 0x3c) != 1) {
        return;
      }
      if ((int)param_2[6] != 2) {
        return;
      }
      *(undefined1 *)((long)param_2 + 0x4e) = 1;
      return;
    }
  }
  else if (param_1 != lVar2) {
    __s1 = *(char **)(param_1 + 8);
    iVar1 = strcmp(__s1,*(char **)(lVar2 + 8));
    if (iVar1 != 0) {
      if ((param_1 != *param_2) && (iVar1 = strcmp(__s1,*(char **)(*param_2 + 8)), iVar1 != 0))
      goto LAB_001fe6d4;
      goto LAB_001fe648;
    }
  }
  if ((param_2[1] == param_3) && (*(int *)((long)param_2 + 0x34) != 1)) {
    *(int *)((long)param_2 + 0x34) = param_4;
  }
  return;
}


// ===== 001fe780  FUN_001fe780 =====

void FUN_001fe780(long param_1,long *param_2,long param_3,int param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  char *__s1;
  
  lVar2 = param_2[2];
  if ((param_5 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar2 + 8)) {
      if (*(long *)(param_1 + 8) != *(long *)(*param_2 + 8)) {
        return;
      }
LAB_001fe808:
      if ((param_2[4] != param_3) && (param_2[5] != param_3)) {
        *(int *)(param_2 + 7) = param_4;
        param_2[5] = param_3;
        *(int *)(param_2 + 8) = (int)param_2[8] + 1;
        if ((*(int *)((long)param_2 + 0x3c) == 1) && ((int)param_2[6] == 2)) {
          *(undefined1 *)((long)param_2 + 0x4e) = 1;
        }
        *(undefined4 *)((long)param_2 + 0x44) = 4;
        return;
      }
      if (param_4 != 1) {
        return;
      }
      *(undefined4 *)(param_2 + 7) = 1;
      return;
    }
  }
  else if (param_1 != lVar2) {
    __s1 = *(char **)(param_1 + 8);
    iVar1 = strcmp(__s1,*(char **)(lVar2 + 8));
    if (iVar1 != 0) {
      if ((param_1 != *param_2) && (iVar1 = strcmp(__s1,*(char **)(*param_2 + 8)), iVar1 != 0)) {
        return;
      }
      goto LAB_001fe808;
    }
  }
  if ((param_2[1] == param_3) && (*(int *)((long)param_2 + 0x34) != 1)) {
    *(int *)((long)param_2 + 0x34) = param_4;
  }
  return;
}


// ===== 001fe8a0  FUN_001fe8a0 =====

void FUN_001fe8a0(long param_1,long param_2,long param_3,long *param_4,int param_5,uint param_6)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  lVar5 = *(long *)(param_2 + 0x10);
  if ((param_6 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar5 + 8)) goto LAB_001fe944;
  }
  else if ((param_1 != lVar5) &&
          (iVar4 = strcmp(*(char **)(param_1 + 8),*(char **)(lVar5 + 8)), iVar4 != 0)) {
LAB_001fe944:
    bVar8 = *(byte *)(param_2 + 0x4c);
    bVar7 = *(byte *)(param_2 + 0x4d);
    uVar1 = *(uint *)(param_1 + 0x14);
    *(undefined2 *)(param_2 + 0x4c) = 0;
    uVar6 = *(ulong *)(param_1 + 0x20);
    lVar5 = (long)uVar6 >> 8;
    if ((uVar6 & 1) != 0) {
      lVar5 = *(long *)(*param_4 + lVar5);
    }
    iVar4 = 2;
    if ((uVar6 & 2) != 0) {
      iVar4 = param_5;
    }
    (**(code **)(**(long **)(param_1 + 0x18) + 0x28))
              (*(long **)(param_1 + 0x18),param_2,param_3,(long)param_4 + lVar5,iVar4,param_6 & 1);
    bVar2 = *(byte *)(param_2 + 0x4c);
    bVar3 = *(byte *)(param_2 + 0x4d);
    bVar8 = bVar2 | bVar8;
    bVar7 = bVar3 | bVar7;
    if (1 < uVar1) {
      puVar10 = (undefined8 *)(param_1 + 0x28);
      do {
        if (*(char *)(param_2 + 0x4e) != '\0') break;
        if (bVar2 == 0) {
          if (bVar3 != 0) {
            bVar2 = *(byte *)(param_1 + 0x10);
            goto joined_r0x001fea34;
          }
        }
        else {
          if (*(int *)(param_2 + 0x30) == 1) break;
          bVar2 = *(byte *)(param_1 + 0x10) >> 1;
joined_r0x001fea34:
          if ((bVar2 & 1) == 0) break;
        }
        *(undefined2 *)(param_2 + 0x4c) = 0;
        uVar6 = puVar10[1];
        lVar5 = (long)uVar6 >> 8;
        if ((uVar6 & 1) != 0) {
          lVar5 = *(long *)(*param_4 + lVar5);
        }
        puVar9 = puVar10 + 2;
        iVar4 = 2;
        if ((uVar6 & 2) != 0) {
          iVar4 = param_5;
        }
        (**(code **)(*(long *)*puVar10 + 0x28))
                  ((long *)*puVar10,param_2,param_3,(long)param_4 + lVar5,iVar4,param_6 & 1);
        bVar2 = *(byte *)(param_2 + 0x4c);
        bVar3 = *(byte *)(param_2 + 0x4d);
        bVar8 = bVar2 | bVar8;
        bVar7 = bVar3 | bVar7;
        puVar10 = puVar9;
      } while (puVar9 < (undefined8 *)(param_1 + (ulong)uVar1 * 0x10 + 0x18));
    }
    *(bool *)(param_2 + 0x4c) = bVar8 != 0;
    *(bool *)(param_2 + 0x4d) = bVar7 != 0;
    return;
  }
  *(undefined1 *)(param_2 + 0x4d) = 1;
  if (*(long **)(param_2 + 8) != param_4) {
    return;
  }
  *(undefined1 *)(param_2 + 0x4c) = 1;
  if (*(long *)(param_2 + 0x20) == 0) {
    *(long *)(param_2 + 0x20) = param_3;
    *(int *)(param_2 + 0x30) = param_5;
    *(undefined4 *)(param_2 + 0x3c) = 1;
    if (param_5 != 1) {
      return;
    }
  }
  else {
    if (*(long *)(param_2 + 0x20) != param_3) {
      *(undefined1 *)(param_2 + 0x4e) = 1;
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
      return;
    }
    iVar4 = *(int *)(param_2 + 0x30);
    if (*(int *)(param_2 + 0x30) == 2) {
      *(int *)(param_2 + 0x30) = param_5;
      iVar4 = param_5;
    }
    if (iVar4 != 1) {
      return;
    }
  }
  if (*(int *)(param_2 + 0x48) == 1) {
    *(undefined1 *)(param_2 + 0x4e) = 1;
  }
  return;
}


// ===== 001fead4  FUN_001fead4 =====

void FUN_001fead4(long param_1,long param_2,long param_3,long param_4,int param_5,uint param_6)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x10);
  if ((param_6 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar2 + 8)) goto LAB_001feb58;
  }
  else if ((param_1 != lVar2) &&
          (iVar1 = strcmp(*(char **)(param_1 + 8),*(char **)(lVar2 + 8)), iVar1 != 0)) {
LAB_001feb58:
                    /* WARNING: Could not recover jumptable at 0x001feb88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x28))
              (*(long **)(param_1 + 0x10),param_2,param_3,param_4,param_5,param_6 & 1);
    return;
  }
  *(undefined1 *)(param_2 + 0x4d) = 1;
  if (*(long *)(param_2 + 8) != param_4) {
    return;
  }
  *(undefined1 *)(param_2 + 0x4c) = 1;
  if (*(long *)(param_2 + 0x20) == 0) {
    *(long *)(param_2 + 0x20) = param_3;
    *(int *)(param_2 + 0x30) = param_5;
    *(undefined4 *)(param_2 + 0x3c) = 1;
    if (param_5 != 1) {
      return;
    }
  }
  else {
    if (*(long *)(param_2 + 0x20) != param_3) {
      *(undefined1 *)(param_2 + 0x4e) = 1;
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
      return;
    }
    iVar1 = *(int *)(param_2 + 0x30);
    if (*(int *)(param_2 + 0x30) == 2) {
      *(int *)(param_2 + 0x30) = param_5;
      iVar1 = param_5;
    }
    if (iVar1 != 1) {
      return;
    }
  }
  if (*(int *)(param_2 + 0x48) == 1) {
    *(undefined1 *)(param_2 + 0x4e) = 1;
  }
  return;
}


// ===== 001fec04  FUN_001fec04 =====

void FUN_001fec04(long param_1,long param_2,long param_3,long param_4,int param_5,uint param_6)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x10);
  if ((param_6 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar2 + 8)) {
      return;
    }
  }
  else if ((param_1 != lVar2) &&
          (iVar1 = strcmp(*(char **)(param_1 + 8),*(char **)(lVar2 + 8)), iVar1 != 0)) {
    return;
  }
  *(undefined1 *)(param_2 + 0x4d) = 1;
  if (*(long *)(param_2 + 8) != param_4) {
    return;
  }
  *(undefined1 *)(param_2 + 0x4c) = 1;
  if (*(long *)(param_2 + 0x20) == 0) {
    *(long *)(param_2 + 0x20) = param_3;
    *(int *)(param_2 + 0x30) = param_5;
    *(undefined4 *)(param_2 + 0x3c) = 1;
    if (param_5 != 1) {
      return;
    }
  }
  else {
    if (*(long *)(param_2 + 0x20) != param_3) {
      *(undefined1 *)(param_2 + 0x4e) = 1;
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
      return;
    }
    iVar1 = *(int *)(param_2 + 0x30);
    if (*(int *)(param_2 + 0x30) == 2) {
      *(int *)(param_2 + 0x30) = param_5;
      iVar1 = param_5;
    }
    if (iVar1 != 1) {
      return;
    }
  }
  if (*(int *)(param_2 + 0x48) == 1) {
    *(undefined1 *)(param_2 + 0x4e) = 1;
  }
  return;
}


// ===== 001fecf4  std::exception::~exception =====

/* std::exception::~exception() */

void __thiscall std::exception::~exception(exception *this)

{
  return;
}


// ===== 001fecf8  std::exception::~exception =====

/* std::exception::~exception() */

void __thiscall std::exception::~exception(exception *this)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001fecfc  std::exception::what =====

/* std::exception::what() const */

char * std::exception::what(void)

{
  return "std::exception";
}


// ===== 001fed08  std::bad_exception::~bad_exception =====

/* std::bad_exception::~bad_exception() */

void __thiscall std::bad_exception::~bad_exception(bad_exception *this)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001fed0c  std::bad_exception::what =====

/* std::bad_exception::what() const */

char * std::bad_exception::what(void)

{
  return "std::bad_exception";
}


// ===== 001fed18  std::bad_alloc::bad_alloc =====

/* std::bad_alloc::bad_alloc() */

void __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
  *(undefined **)this = PTR_vtable_0020fcb8 + 0x10;
  return;
}


// ===== 001fed2c  std::bad_alloc::~bad_alloc =====

/* std::bad_alloc::~bad_alloc() */

void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001fed30  std::bad_alloc::what =====

/* std::bad_alloc::what() const */

char * std::bad_alloc::what(void)

{
  return "std::bad_alloc";
}


// ===== 001fed3c  std::bad_array_new_length::bad_array_new_length =====

/* std::bad_array_new_length::bad_array_new_length() */

void __thiscall std::bad_array_new_length::bad_array_new_length(bad_array_new_length *this)

{
  *(undefined **)this = PTR_vtable_0020fcc0 + 0x10;
  return;
}


// ===== 001fed50  std::bad_array_new_length::~bad_array_new_length =====

/* std::bad_array_new_length::~bad_array_new_length() */

void __thiscall std::bad_array_new_length::~bad_array_new_length(bad_array_new_length *this)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001fed54  std::bad_array_new_length::what =====

/* std::bad_array_new_length::what() const */

char * std::bad_array_new_length::what(void)

{
  return "bad_array_new_length";
}


// ===== 001fed60  std::domain_error::~domain_error =====

/* std::domain_error::~domain_error() */

void __thiscall std::domain_error::~domain_error(domain_error *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = *(long *)(this + 8);
  *(undefined **)this = PTR_vtable_0020fbc0 + 0x10;
  piVar5 = (int *)(lVar4 + -8);
  do {
    iVar1 = *piVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar3) {
      *piVar5 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 < 0) {
    operator_delete((void *)(lVar4 + -0x18));
  }
  exception::~exception((exception *)this);
  return;
}


// ===== 001fedb4  std::logic_error::~logic_error =====

/* std::logic_error::~logic_error() */

void __thiscall std::logic_error::~logic_error(logic_error *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = *(long *)(this + 8);
  *(undefined **)this = PTR_vtable_0020fbc0 + 0x10;
  piVar5 = (int *)(lVar4 + -8);
  do {
    iVar1 = *piVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar3) {
      *piVar5 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 < 0) {
    operator_delete((void *)(lVar4 + -0x18));
  }
  exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


// ===== 001fee10  std::logic_error::what =====

/* std::logic_error::what() const */

undefined8 __thiscall std::logic_error::what(logic_error *this)

{
  return *(undefined8 *)(this + 8);
}


// ===== 001fee18  std::underflow_error::~underflow_error =====

/* std::underflow_error::~underflow_error() */

void __thiscall std::underflow_error::~underflow_error(underflow_error *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = *(long *)(this + 8);
  *(undefined **)this = PTR_vtable_0020fbc8 + 0x10;
  piVar5 = (int *)(lVar4 + -8);
  do {
    iVar1 = *piVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar3) {
      *piVar5 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 < 0) {
    operator_delete((void *)(lVar4 + -0x18));
  }
  exception::~exception((exception *)this);
  return;
}


// ===== 001fee6c  std::runtime_error::~runtime_error =====

/* std::runtime_error::~runtime_error() */

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = *(long *)(this + 8);
  *(undefined **)this = PTR_vtable_0020fbc8 + 0x10;
  piVar5 = (int *)(lVar4 + -8);
  do {
    iVar1 = *piVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar3) {
      *piVar5 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 < 0) {
    operator_delete((void *)(lVar4 + -0x18));
  }
  exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


// ===== 001feec8  std::runtime_error::what =====

/* std::runtime_error::what() const */

undefined8 __thiscall std::runtime_error::what(runtime_error *this)

{
  return *(undefined8 *)(this + 8);
}


// ===== 001feed0  std::domain_error::~domain_error =====

/* std::domain_error::~domain_error() */

void __thiscall std::domain_error::~domain_error(domain_error *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = *(long *)(this + 8);
  *(undefined **)this = PTR_vtable_0020fbc0 + 0x10;
  piVar5 = (int *)(lVar4 + -8);
  do {
    iVar1 = *piVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar3) {
      *piVar5 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 < 0) {
    operator_delete((void *)(lVar4 + -0x18));
  }
  exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


// ===== 001fef2c  std::invalid_argument::~invalid_argument =====

/* std::invalid_argument::~invalid_argument() */

void __thiscall std::invalid_argument::~invalid_argument(invalid_argument *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = *(long *)(this + 8);
  *(undefined **)this = PTR_vtable_0020fbc0 + 0x10;
  piVar5 = (int *)(lVar4 + -8);
  do {
    iVar1 = *piVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar3) {
      *piVar5 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 < 0) {
    operator_delete((void *)(lVar4 + -0x18));
  }
  exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


// ===== 001fef88  std::length_error::~length_error =====

/* std::length_error::~length_error() */

void __thiscall std::length_error::~length_error(length_error *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = *(long *)(this + 8);
  *(undefined **)this = PTR_vtable_0020fbc0 + 0x10;
  piVar5 = (int *)(lVar4 + -8);
  do {
    iVar1 = *piVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar3) {
      *piVar5 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 < 0) {
    operator_delete((void *)(lVar4 + -0x18));
  }
  exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


// ===== 001fefe4  std::out_of_range::~out_of_range =====

/* std::out_of_range::~out_of_range() */

void __thiscall std::out_of_range::~out_of_range(out_of_range *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = *(long *)(this + 8);
  *(undefined **)this = PTR_vtable_0020fbc0 + 0x10;
  piVar5 = (int *)(lVar4 + -8);
  do {
    iVar1 = *piVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar3) {
      *piVar5 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 < 0) {
    operator_delete((void *)(lVar4 + -0x18));
  }
  exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


// ===== 001ff040  std::range_error::~range_error =====

/* std::range_error::~range_error() */

void __thiscall std::range_error::~range_error(range_error *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = *(long *)(this + 8);
  *(undefined **)this = PTR_vtable_0020fbc8 + 0x10;
  piVar5 = (int *)(lVar4 + -8);
  do {
    iVar1 = *piVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar3) {
      *piVar5 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 < 0) {
    operator_delete((void *)(lVar4 + -0x18));
  }
  exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


// ===== 001ff09c  std::overflow_error::~overflow_error =====

/* std::overflow_error::~overflow_error() */

void __thiscall std::overflow_error::~overflow_error(overflow_error *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = *(long *)(this + 8);
  *(undefined **)this = PTR_vtable_0020fbc8 + 0x10;
  piVar5 = (int *)(lVar4 + -8);
  do {
    iVar1 = *piVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar3) {
      *piVar5 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 < 0) {
    operator_delete((void *)(lVar4 + -0x18));
  }
  exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


// ===== 001ff0f8  std::underflow_error::~underflow_error =====

/* std::underflow_error::~underflow_error() */

void __thiscall std::underflow_error::~underflow_error(underflow_error *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = *(long *)(this + 8);
  *(undefined **)this = PTR_vtable_0020fbc8 + 0x10;
  piVar5 = (int *)(lVar4 + -8);
  do {
    iVar1 = *piVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar3) {
      *piVar5 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 < 0) {
    operator_delete((void *)(lVar4 + -0x18));
  }
  exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


// ===== 001ff154  std::type_info::~type_info =====

/* std::type_info::~type_info() */

void __thiscall std::type_info::~type_info(type_info *this)

{
  return;
}


// ===== 001ff158  std::type_info::~type_info =====

/* std::type_info::~type_info() */

void __thiscall std::type_info::~type_info(type_info *this)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001ff15c  std::bad_cast::bad_cast =====

/* std::bad_cast::bad_cast() */

void __thiscall std::bad_cast::bad_cast(bad_cast *this)

{
  *(undefined **)this = PTR_vtable_0020fcc8 + 0x10;
  return;
}


// ===== 001ff170  std::bad_cast::~bad_cast =====

/* std::bad_cast::~bad_cast() */

void __thiscall std::bad_cast::~bad_cast(bad_cast *this)

{
  (*(code *)PTR__exception_002106f0)();
  return;
}


// ===== 001ff174  std::bad_cast::~bad_cast =====

/* std::bad_cast::~bad_cast() */

void __thiscall std::bad_cast::~bad_cast(bad_cast *this)

{
  exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


// ===== 001ff198  std::bad_cast::what =====

/* std::bad_cast::what() const */

char * std::bad_cast::what(void)

{
  return "std::bad_cast";
}


// ===== 001ff1a4  std::bad_typeid::bad_typeid =====

/* std::bad_typeid::bad_typeid() */

void __thiscall std::bad_typeid::bad_typeid(bad_typeid *this)

{
  *(undefined **)this = PTR_vtable_0020fcd0 + 0x10;
  return;
}


// ===== 001ff1b8  std::bad_typeid::~bad_typeid =====

/* std::bad_typeid::~bad_typeid() */

void __thiscall std::bad_typeid::~bad_typeid(bad_typeid *this)

{
  (*(code *)PTR__exception_002106f0)();
  return;
}


// ===== 001ff1bc  std::bad_typeid::~bad_typeid =====

/* std::bad_typeid::~bad_typeid() */

void __thiscall std::bad_typeid::~bad_typeid(bad_typeid *this)

{
  exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


// ===== 001ff1e0  std::bad_typeid::what =====

/* std::bad_typeid::what() const */

char * std::bad_typeid::what(void)

{
  return "std::bad_typeid";
}


// ===== 001ff1ec  FUN_001ff1ec =====

void FUN_001ff1ec(byte *param_1,ulong *param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  do {
    bVar1 = *param_1;
    uVar2 = uVar4 & 0x3f;
    uVar4 = (ulong)((int)uVar4 + 7);
    uVar3 = uVar3 | ((ulong)bVar1 & 0x7f) << uVar2;
    param_1 = param_1 + 1;
  } while ((char)bVar1 < '\0');
  *param_2 = uVar3;
  return;
}


// ===== 001ff214  FUN_001ff214 =====

void FUN_001ff214(byte *param_1,ulong *param_2)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = 0;
  uVar5 = 0;
  do {
    bVar2 = *param_1;
    uVar3 = uVar5 & 0x3f;
    uVar1 = (int)uVar5 + 7;
    uVar5 = (ulong)uVar1;
    uVar4 = uVar4 | ((ulong)bVar2 & 0x7f) << uVar3;
    param_1 = param_1 + 1;
  } while ((char)bVar2 < '\0');
  if ((uVar1 < 0x40) && ((bVar2 >> 6 & 1) != 0)) {
    uVar4 = -1L << (uVar5 & 0x3f) | uVar4;
  }
  *param_2 = uVar4;
  return;
}


// ===== 001ff254  FUN_001ff254 =====

ulong * FUN_001ff254(byte param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  ulong *puVar1;
  ulong *local_8;
  
  if (param_1 == 0x50) {
    local_8 = (ulong *)((long)param_3 + 7U & 0xfffffffffffffff8);
    puVar1 = local_8 + 1;
    local_8 = (ulong *)*local_8;
  }
  else {
    switch(param_1 & 0xf) {
    case 0:
    case 4:
    case 0xc:
      puVar1 = param_3 + 1;
      local_8 = (ulong *)*param_3;
      break;
    case 1:
      puVar1 = (ulong *)FUN_001ff1ec(param_3,&local_8);
      break;
    case 2:
      puVar1 = (ulong *)((long)param_3 + 2);
      local_8 = (ulong *)(ulong)(ushort)*param_3;
      break;
    case 3:
      puVar1 = (ulong *)((long)param_3 + 4);
      local_8 = (ulong *)(ulong)(uint)*param_3;
      break;
    default:
                    /* WARNING: Subroutine does not return */
      abort();
    case 9:
      puVar1 = (ulong *)FUN_001ff214(param_3,&local_8);
      break;
    case 10:
      puVar1 = (ulong *)((long)param_3 + 2);
      local_8 = (ulong *)(long)(short)*param_3;
      break;
    case 0xb:
      puVar1 = (ulong *)((long)param_3 + 4);
      local_8 = (ulong *)(long)(int)(uint)*param_3;
    }
    if (local_8 != (ulong *)0x0) {
      if ((param_1 & 0x70) != 0x10) {
        param_3 = param_2;
      }
      local_8 = (ulong *)((long)local_8 + (long)param_3);
      if ((char)param_1 < '\0') {
        local_8 = (ulong *)*local_8;
      }
    }
  }
  *param_4 = (ulong)local_8;
  return puVar1;
}


// ===== 001ff344  FUN_001ff344 =====

void FUN_001ff344(void)

{
  DAT_002161c0 = 8;
  DAT_002161c1 = 8;
  DAT_002161c2 = 8;
  DAT_002161c3 = 8;
  DAT_002161c4 = 8;
  DAT_002161c5 = 8;
  DAT_002161c6 = 8;
  DAT_002161c7 = 8;
  DAT_002161c8 = 8;
  DAT_002161c9 = 8;
  DAT_002161ca = 8;
  DAT_002161cb = 8;
  DAT_002161cc = 8;
  DAT_002161cd = 8;
  DAT_002161ce = 8;
  DAT_002161cf = 8;
  DAT_002161d0 = 8;
  DAT_002161d1 = 8;
  DAT_002161d2 = 8;
  DAT_002161d3 = 8;
  DAT_002161d4 = 8;
  DAT_002161d5 = 8;
  DAT_002161d6 = 8;
  DAT_002161d7 = 8;
  DAT_002161d8 = 8;
  DAT_002161d9 = 8;
  DAT_002161da = 8;
  DAT_002161db = 8;
  DAT_002161dc = 8;
  DAT_002161dd = 8;
  DAT_002161de = 8;
  DAT_002161df = 8;
  DAT_00216200 = 8;
  DAT_00216201 = 8;
  DAT_00216202 = 8;
  DAT_00216203 = 8;
  DAT_00216204 = 8;
  DAT_00216205 = 8;
  DAT_00216206 = 8;
  DAT_00216207 = 8;
  DAT_00216208 = 8;
  DAT_00216209 = 8;
  DAT_0021620a = 8;
  DAT_0021620b = 8;
  DAT_0021620c = 8;
  DAT_0021620d = 8;
  DAT_0021620e = 8;
  DAT_0021620f = 8;
  DAT_00216210 = 8;
  DAT_00216211 = 8;
  DAT_00216212 = 8;
  DAT_00216213 = 8;
  DAT_00216214 = 8;
  DAT_00216215 = 8;
  DAT_00216216 = 8;
  DAT_00216217 = 8;
  DAT_00216218 = 8;
  DAT_00216219 = 8;
  DAT_0021621a = 8;
  DAT_0021621b = 8;
  DAT_0021621c = 8;
  DAT_0021621d = 8;
  DAT_0021621e = 8;
  DAT_0021621f = 8;
  DAT_00216220 = 8;
  return;
}


// ===== 001ff458  FUN_001ff458 =====

void FUN_001ff458(long param_1,undefined8 param_2,undefined8 *param_3)

{
  if (DAT_002161df == '\b') {
    *param_3 = param_2;
    if ((*(ulong *)(param_1 + 0x340) >> 0x3e & 1) != 0) {
      *(undefined1 *)(param_1 + 0x377) = 0;
    }
    *(undefined8 **)(param_1 + 0xf8) = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 001ff494  FUN_001ff494 =====

undefined8 * FUN_001ff494(long param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x62) {
    puVar1 = *(undefined8 **)(param_1 + (long)param_2 * 8);
    if (((*(ulong *)(param_1 + 0x340) >> 0x3e & 1) == 0) ||
       (*(char *)(param_1 + param_2 + 0x358) == '\0')) {
      if ((&DAT_002161c0)[param_2] != '\b') goto LAB_001ff4a4;
      puVar1 = (undefined8 *)*puVar1;
    }
    return puVar1;
  }
LAB_001ff4a4:
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 001ff4ec  FUN_001ff4ec =====

long FUN_001ff4ec(long param_1,long param_2)

{
  undefined8 *__dest;
  undefined8 *__src;
  long lVar1;
  undefined1 auStack_8 [8];
  
  if ((((*(ulong *)(param_2 + 0x340) >> 0x3e & 1) == 0) || (*(char *)(param_2 + 0x377) == '\0')) &&
     (*(long *)(param_2 + 0xf8) == 0)) {
    FUN_001ff458(param_2,*(undefined8 *)(param_2 + 0x310),auStack_8);
  }
  lVar1 = 0;
  while( true ) {
    __dest = *(undefined8 **)(param_1 + lVar1 * 8);
    __src = *(undefined8 **)(param_2 + lVar1 * 8);
    if (*(char *)(param_1 + lVar1 + 0x358) != '\0') break;
    if ((*(char *)(param_2 + lVar1 + 0x358) == '\0') || (__dest == (undefined8 *)0x0)) {
      if ((__dest != (undefined8 *)0x0 && __src != (undefined8 *)0x0) && (__src != __dest)) {
        memcpy(__dest,__src,(ulong)(byte)(&DAT_002161c0)[lVar1]);
      }
    }
    else {
      if ((&DAT_002161c0)[lVar1] != '\b') break;
      *__dest = __src;
    }
    lVar1 = lVar1 + 1;
    if (lVar1 == 0x61) {
      if ((((*(ulong *)(param_1 + 0x340) >> 0x3e & 1) == 0) ||
          (lVar1 = 0, *(char *)(param_1 + 0x377) == '\0')) &&
         (lVar1 = 0, *(long *)(param_1 + 0xf8) == 0)) {
        lVar1 = FUN_001ff494(param_2,0x1f);
        lVar1 = (lVar1 - *(long *)(param_1 + 0x310)) + *(long *)(param_2 + 0x350);
      }
      return lVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 001ff5f8  FUN_001ff5f8 =====

undefined8 FUN_001ff5f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x310);
}


// ===== 001ff600  FUN_001ff600 =====

void FUN_001ff600(long param_1,int param_2,undefined8 param_3)

{
  if (0x61 < param_2) {
LAB_001ff610:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (((*(ulong *)(param_1 + 0x340) >> 0x3e & 1) == 0) ||
     (*(char *)(param_1 + param_2 + 0x358) == '\0')) {
    if ((&DAT_002161c0)[param_2] != '\b') goto LAB_001ff610;
    **(undefined8 **)(param_1 + (long)param_2 * 8) = param_3;
  }
  else {
    *(undefined8 *)(param_1 + (long)param_2 * 8) = param_3;
  }
  return;
}


// ===== 001ff658  FUN_001ff658 =====

undefined8 FUN_001ff658(long param_1)

{
  return *(undefined8 *)(param_1 + 0x318);
}


// ===== 001ff660  FUN_001ff660 =====

undefined8 FUN_001ff660(long param_1,uint *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x318);
  *param_2 = (uint)((ulong)*(undefined8 *)(param_1 + 0x340) >> 0x3f);
  return uVar1;
}


// ===== 001ff674  FUN_001ff674 =====

void FUN_001ff674(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x318) = param_2;
  return;
}


// ===== 001ff67c  FUN_001ff67c =====

undefined8 FUN_001ff67c(long param_1)

{
  return *(undefined8 *)(param_1 + 800);
}


// ===== 001ff684  FUN_001ff684 =====

undefined8 FUN_001ff684(long param_1)

{
  return *(undefined8 *)(param_1 + 0x338);
}


// ===== 001ff68c  FUN_001ff68c =====

undefined8 FUN_001ff68c(long param_1)

{
  long lVar1;
  undefined1 auStack_18 [16];
  undefined8 local_8;
  
  lVar1 = FUN_002027d4(param_1 + -1,auStack_18);
  if (lVar1 == 0) {
    local_8 = 0;
  }
  return local_8;
}


// ===== 001ff6b4  FUN_001ff6b4 =====

undefined8 FUN_001ff6b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x330);
}


// ===== 001ff6bc  FUN_001ff6bc =====

undefined8 FUN_001ff6bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x328);
}


// ===== 001ff6c4  FUN_001ff6c4 =====

undefined8 FUN_001ff6c4(byte param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  if (param_1 != 0xff) {
    bVar1 = param_1 & 0x70;
    if (bVar1 == 0x20) {
      uVar2 = FUN_001ff6bc(param_2);
      return uVar2;
    }
    if (bVar1 < 0x21) {
      if (((param_1 & 0x70) != 0) && (bVar1 != 0x10)) {
LAB_001ff72c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    else {
      if (bVar1 == 0x40) {
        uVar2 = FUN_001ff684();
        return uVar2;
      }
      if (bVar1 != 0x50) {
        if (bVar1 == 0x30) {
          uVar2 = FUN_001ff6b4();
          return uVar2;
        }
        goto LAB_001ff72c;
      }
    }
  }
  return 0;
}


// ===== 001ff73c  FUN_001ff73c =====

void FUN_001ff73c(byte *param_1,byte *param_2,long param_3,void *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  void *pvVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  undefined4 uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  ulong local_18;
  long local_10;
  long local_8;
  
  puVar4 = &stack0xffffffffffffff70;
  *(undefined8 *)((long)param_4 + 0x620) = 0;
  puVar16 = (undefined1 *)0x0;
  do {
    if ((param_2 <= param_1) ||
       (uVar12 = *(ulong *)((long)param_4 + 0x648),
       (ulong)(*(long *)(param_3 + 0x318) - (*(long *)(param_3 + 0x340) >> 0x3f)) <= uVar12)) {
      return;
    }
    bVar2 = *param_1;
    uVar10 = (ulong)bVar2;
    pbVar5 = param_1 + 1;
    bVar1 = bVar2 & 0xc0;
    if (bVar1 == 0x40) {
      *(ulong *)((long)param_4 + 0x648) =
           uVar12 + (uVar10 & 0x3f) * *(long *)((long)param_4 + 0x660);
      goto switchD_001ff810_caseD_0;
    }
    if (bVar1 == 0x80) {
      local_18 = uVar10 & 0x3f;
LAB_001ff8a4:
      pbVar5 = (byte *)FUN_001ff1ec(pbVar5,&local_10);
      lVar11 = *(long *)((long)param_4 + 0x658);
      lVar9 = local_10;
LAB_001ffa64:
      if (0x61 < local_18) goto switchD_001ff810_caseD_0;
      lVar7 = local_18 * 0x10;
      *(undefined4 *)((long)param_4 + lVar7 + 8) = 1;
      lVar9 = lVar9 * lVar11;
      goto LAB_001ffc00;
    }
    if (bVar1 == 0xc0) {
      *(undefined4 *)((long)param_4 + (uVar10 & 0x3f) * 0x10 + 8) = 0;
      goto switchD_001ff810_caseD_0;
    }
    switch(bVar2) {
    case 0:
      break;
    case 1:
      uVar3 = *(undefined1 *)((long)param_4 + 0x670);
      uVar8 = FUN_001ff6c4(uVar3,param_3);
      pbVar5 = (byte *)FUN_001ff254(uVar3,uVar8,pbVar5,&local_8);
      *(long *)((long)param_4 + 0x648) = local_8;
      break;
    case 2:
      *(ulong *)((long)param_4 + 0x648) =
           uVar12 + (ulong)param_1[1] * *(long *)((long)param_4 + 0x660);
      pbVar5 = param_1 + 2;
      break;
    case 3:
      *(ulong *)((long)param_4 + 0x648) =
           uVar12 + (ulong)*(ushort *)(param_1 + 1) * *(long *)((long)param_4 + 0x660);
      pbVar5 = param_1 + 3;
      break;
    case 4:
      *(ulong *)((long)param_4 + 0x648) =
           uVar12 + (ulong)*(uint *)(param_1 + 1) * *(long *)((long)param_4 + 0x660);
      pbVar5 = param_1 + 5;
      break;
    case 5:
      pbVar5 = (byte *)FUN_001ff1ec(pbVar5,&local_18);
      goto LAB_001ff8a4;
    case 6:
    case 8:
      pbVar5 = (byte *)FUN_001ff1ec(pbVar5,&local_18);
      if (local_18 < 0x62) {
        *(undefined4 *)((long)param_4 + local_18 * 0x10 + 8) = 0;
      }
      break;
    case 7:
      pbVar5 = (byte *)FUN_001ff1ec(pbVar5,&local_18);
      if (local_18 < 0x62) {
        *(undefined4 *)((long)param_4 + local_18 * 0x10 + 8) = 6;
      }
      break;
    case 9:
      uVar8 = FUN_001ff1ec(pbVar5,&local_18);
      pbVar5 = (byte *)FUN_001ff1ec(uVar8,&local_8);
      if (local_18 < 0x62) {
        lVar7 = local_18 * 0x10;
        *(undefined4 *)((long)param_4 + lVar7 + 8) = 2;
        lVar9 = local_8;
        goto LAB_001ffc00;
      }
      break;
    case 10:
      if (puVar16 == (undefined1 *)0x0) {
        puVar15 = puVar4 + -0x660;
        puVar4 = puVar4 + -0x660;
      }
      else {
        puVar15 = puVar4;
        puVar4 = puVar16;
        puVar16 = *(undefined1 **)(puVar16 + 0x620);
      }
      pvVar6 = memcpy(puVar4,param_4,0x648);
      *(void **)((long)param_4 + 0x620) = pvVar6;
      puVar4 = puVar15;
      break;
    case 0xb:
      puVar15 = *(undefined1 **)((long)param_4 + 0x620);
      memcpy(param_4,puVar15,0x648);
      *(undefined1 **)(puVar15 + 0x620) = puVar16;
      puVar16 = puVar15;
      break;
    case 0xc:
      uVar8 = FUN_001ff1ec(pbVar5,&local_10);
      *(long *)((long)param_4 + 0x630) = local_10;
      pbVar5 = (byte *)FUN_001ff1ec(uVar8,&local_10);
      *(long *)((long)param_4 + 0x628) = local_10;
      goto LAB_001ff9e8;
    case 0xd:
      pbVar5 = (byte *)FUN_001ff1ec(pbVar5,&local_10);
      *(long *)((long)param_4 + 0x630) = local_10;
LAB_001ff9e8:
      *(undefined4 *)((long)param_4 + 0x640) = 1;
      break;
    case 0xe:
      pbVar5 = (byte *)FUN_001ff1ec(pbVar5,&local_10);
      lVar9 = local_10;
      goto LAB_001ffab4;
    case 0xf:
      *(byte **)((long)param_4 + 0x638) = pbVar5;
      *(undefined4 *)((long)param_4 + 0x640) = 2;
      goto LAB_001ffb64;
    case 0x10:
      pbVar5 = (byte *)FUN_001ff1ec(pbVar5,&local_18);
      if (local_18 < 0x62) {
        uVar14 = 3;
LAB_001ffb5c:
        *(undefined4 *)((long)param_4 + local_18 * 0x10 + 8) = uVar14;
        *(byte **)((long)param_4 + local_18 * 0x10) = pbVar5;
      }
      goto LAB_001ffb64;
    case 0x11:
      uVar8 = FUN_001ff1ec(pbVar5,&local_18);
      pbVar5 = (byte *)FUN_001ff214(uVar8,&local_8);
      lVar11 = *(long *)((long)param_4 + 0x658);
      lVar9 = local_8;
      goto LAB_001ffa64;
    case 0x12:
      uVar8 = FUN_001ff1ec(pbVar5,&local_10);
      *(long *)((long)param_4 + 0x630) = local_10;
      pbVar5 = (byte *)FUN_001ff214(uVar8,&local_8);
      *(undefined4 *)((long)param_4 + 0x640) = 1;
      goto LAB_001ffaa8;
    case 0x13:
      pbVar5 = (byte *)FUN_001ff214(pbVar5,&local_8);
LAB_001ffaa8:
      lVar9 = local_8 * *(long *)((long)param_4 + 0x658);
LAB_001ffab4:
      *(long *)((long)param_4 + 0x628) = lVar9;
      break;
    case 0x14:
      uVar8 = FUN_001ff1ec(pbVar5,&local_18);
      pbVar5 = (byte *)FUN_001ff1ec(uVar8,&local_10);
      lVar11 = *(long *)((long)param_4 + 0x658);
      lVar9 = local_10;
      goto LAB_001ffb14;
    case 0x15:
      uVar8 = FUN_001ff1ec(pbVar5,&local_18);
      pbVar5 = (byte *)FUN_001ff214(uVar8,&local_8);
      lVar11 = *(long *)((long)param_4 + 0x658);
      lVar9 = local_8;
LAB_001ffb14:
      if (local_18 < 0x62) {
        lVar7 = local_18 * 0x10;
        *(undefined4 *)((long)param_4 + lVar7 + 8) = 4;
        lVar9 = lVar9 * lVar11;
LAB_001ffc00:
        *(long *)((long)param_4 + lVar7) = lVar9;
      }
      break;
    case 0x16:
      pbVar5 = (byte *)FUN_001ff1ec(pbVar5,&local_18);
      if (local_18 < 0x62) {
        uVar14 = 5;
        goto LAB_001ffb5c;
      }
LAB_001ffb64:
      lVar9 = FUN_001ff1ec(pbVar5,&local_10);
      pbVar5 = (byte *)(lVar9 + local_10);
      break;
    default:
                    /* WARNING: Subroutine does not return */
      abort();
    case 0x2d:
      lVar9 = 0x10;
      local_18 = 0x10;
      lVar7 = 0;
      plVar13 = (long *)((long)param_4 + 0x100);
      do {
        *(undefined4 *)(plVar13 + 1) = 1;
        lVar9 = lVar9 + 1;
        *plVar13 = lVar7;
        lVar7 = lVar7 + 8;
        plVar13 = plVar13 + 2;
      } while (lVar9 != 0x20);
      break;
    case 0x2e:
      pbVar5 = (byte *)FUN_001ff1ec(pbVar5,&local_10);
      *(long *)(param_3 + 0x350) = local_10;
      break;
    case 0x2f:
      uVar8 = FUN_001ff1ec(pbVar5,&local_18);
      pbVar5 = (byte *)FUN_001ff1ec(uVar8,&local_10);
      lVar9 = *(long *)((long)param_4 + 0x658);
      if (local_18 < 0x62) {
        lVar7 = local_18 * 0x10;
        *(undefined4 *)((long)param_4 + lVar7 + 8) = 1;
        lVar9 = -(lVar9 * local_10);
        goto LAB_001ffc00;
      }
    }
switchD_001ff810_caseD_0:
    param_1 = pbVar5;
  } while( true );
}


// ===== 001ffc34  FUN_001ffc34 =====

undefined8 FUN_001ffc34(long param_1,long *param_2)

{
  byte bVar1;
  char cVar2;
  uint *puVar3;
  long lVar4;
  int *piVar5;
  size_t sVar6;
  long *plVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  uint *puVar16;
  char *pcVar17;
  ulong local_18;
  long local_10;
  long local_8;
  char *pcVar18;
  
  memset(param_2,0,0x680);
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  if (*(long *)(param_1 + 0x318) == 0) {
    return 5;
  }
  puVar3 = (uint *)FUN_002027d4(*(long *)(param_1 + 0x318) +
                                (-1 - (*(long *)(param_1 + 0x340) >> 0x3f)),param_1 + 0x328);
  if (puVar3 == (uint *)0x0) {
    if (**(int **)(param_1 + 0x318) != -0x2d7fee98) {
      return 5;
    }
    if ((*(int **)(param_1 + 0x318))[1] != -0x2bffffff) {
      return 5;
    }
    lVar15 = *(long *)(param_1 + 0x310);
    param_2[0xc6] = 0x1f;
    *(undefined4 *)(param_2 + 200) = 1;
    lVar10 = lVar15 + 0x130;
    param_2[0xc5] = 0x130;
    lVar4 = 8;
    plVar7 = param_2;
    do {
      *(undefined4 *)(plVar7 + 1) = 1;
      *plVar7 = lVar4;
      lVar4 = lVar4 + 8;
      plVar7 = plVar7 + 2;
    } while (lVar4 != 0x100);
    for (piVar5 = (int *)(lVar15 + 0x250); *piVar5 != 0;
        piVar5 = (int *)((long)piVar5 + (ulong)(uint)piVar5[1])) {
      if (*piVar5 == 0x46508001) {
        plVar7 = param_2 + 0x80;
        do {
          *(undefined4 *)(plVar7 + 1) = 1;
          plVar14 = plVar7 + 2;
          *plVar7 = (long)piVar5 + ((-0x3f0 - lVar10) - (long)param_2) + (long)plVar7;
          plVar7 = plVar14;
        } while (plVar14 != param_2 + 0xc0);
      }
    }
    *(undefined1 *)((long)param_2 + 0x673) = 1;
    param_2[0x3e] = (lVar15 + 0x230) - lVar10;
    *(undefined4 *)(param_2 + 0x3f) = 1;
    *(undefined4 *)(param_2 + 0xc1) = 4;
    param_2[0xc0] = *(long *)(lVar15 + 0x238) - lVar10;
    param_2[0xcd] = 0x60;
LAB_00200030:
    uVar11 = 0;
  }
  else {
    puVar16 = (uint *)((long)puVar3 + (4 - (long)(int)puVar3[1]));
    param_2[0xc9] = *(long *)(param_1 + 0x338);
    pcVar18 = (char *)((long)puVar16 + 9);
    sVar6 = strlen(pcVar18);
    plVar14 = (long *)(pcVar18 + sVar6 + 1);
    plVar7 = plVar14;
    if ((*(char *)((long)puVar16 + 9) == 'e') && (*(char *)((long)puVar16 + 10) == 'h')) {
      plVar7 = plVar14 + 1;
      pcVar18 = (char *)((long)puVar16 + 0xb);
      param_2[0xcf] = *plVar14;
    }
    if ((byte)puVar16[2] < 4) {
LAB_001ffe0c:
      uVar11 = FUN_001ff1ec(plVar7,&local_18);
      param_2[0xcc] = local_18;
      pbVar8 = (byte *)FUN_001ff214(uVar11,&local_10);
      param_2[0xcb] = local_10;
      if ((char)puVar16[2] == '\x01') {
        pbVar9 = pbVar8 + 1;
        uVar12 = (ulong)*pbVar8;
      }
      else {
        pbVar9 = (byte *)FUN_001ff1ec(pbVar8,&local_18);
        uVar12 = local_18;
      }
      param_2[0xcd] = uVar12;
      *(undefined1 *)((long)param_2 + 0x671) = 0xff;
      pbVar8 = (byte *)0x0;
      if (*pcVar18 == 'z') {
        pcVar18 = pcVar18 + 1;
        pbVar9 = (byte *)FUN_001ff1ec(pbVar9,&local_18);
        *(undefined1 *)((long)param_2 + 0x672) = 1;
        pbVar8 = pbVar9 + local_18;
      }
      while( true ) {
        pcVar17 = pcVar18 + 1;
        cVar2 = *pcVar18;
        if (cVar2 == '\0') break;
        pcVar18 = pcVar17;
        if (cVar2 == 'L') {
          *(byte *)((long)param_2 + 0x671) = *pbVar9;
LAB_001ffec8:
          pbVar9 = pbVar9 + 1;
        }
        else {
          if (cVar2 == 'R') {
            *(byte *)(param_2 + 0xce) = *pbVar9;
            goto LAB_001ffec8;
          }
          if (cVar2 == 'P') {
            bVar1 = *pbVar9;
            uVar11 = FUN_001ff6c4(bVar1,param_1);
            pbVar9 = (byte *)FUN_001ff254(bVar1,uVar11,pbVar9 + 1,&local_8);
            param_2[0xca] = local_8;
          }
          else {
            if (cVar2 != 'S') goto LAB_001fff38;
            *(undefined1 *)((long)param_2 + 0x673) = 1;
          }
        }
      }
      if (pbVar8 == (byte *)0x0) {
        pbVar8 = pbVar9;
      }
LAB_001fff38:
      if (pbVar8 != (byte *)0x0) {
        FUN_001ff73c(pbVar8,(long)puVar16 + (ulong)*puVar16 + 4,param_1,param_2);
        if (*(byte *)(param_2 + 0xce) == 0xff) {
          iVar13 = 0;
        }
        else {
          switch(*(byte *)(param_2 + 0xce) & 7) {
          case 0:
          case 4:
            iVar13 = 8;
            break;
          default:
                    /* WARNING: Subroutine does not return */
            abort();
          case 2:
            iVar13 = 2;
            break;
          case 3:
            iVar13 = 4;
          }
        }
        lVar4 = 0;
        lVar10 = (long)puVar3 + (ulong)(uint)(iVar13 << 1) + 8;
        if (*(char *)((long)param_2 + 0x672) != '\0') {
          lVar10 = FUN_001ff1ec(lVar10,&local_8);
          lVar4 = lVar10 + local_8;
        }
        cVar2 = *(char *)((long)param_2 + 0x671);
        if (cVar2 != -1) {
          uVar11 = FUN_001ff6c4(cVar2,param_1);
          lVar10 = FUN_001ff254(cVar2,uVar11,lVar10,&local_8);
          *(long *)(param_1 + 800) = local_8;
        }
        if (lVar4 == 0) {
          lVar4 = lVar10;
        }
        FUN_001ff73c(lVar4,(long)puVar3 + (ulong)*puVar3 + 4,param_1,param_2);
        goto LAB_00200030;
      }
    }
    else if (((char)*plVar7 == '\b') && (*(char *)((long)plVar7 + 1) == '\0')) {
      plVar7 = (long *)((long)plVar7 + 2);
      goto LAB_001ffe0c;
    }
    uVar11 = 3;
  }
  return uVar11;
}


// ===== 00200058  FUN_00200058 =====

/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong FUN_00200058(byte *param_1,byte *param_2,undefined8 param_3,ulong param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  byte *pbVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  int local_220 [2];
  ulong local_218;
  ulong local_210;
  ulong local_208;
  ulong local_200 [64];
  uint uVar13;
  
  local_200[0] = param_4;
  uVar11 = 1;
LAB_002000a8:
  pbVar9 = param_1;
  if (param_2 <= pbVar9) {
    if (uVar11 != 0) {
      return local_200[(int)(uVar11 - 1)];
    }
switchD_00200464_caseD_3:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  bVar1 = *pbVar9;
  param_1 = pbVar9 + 1;
  uVar12 = (uint)bVar1;
  uVar13 = (uint)bVar1;
  if (bVar1 < 0x21) {
    if (bVar1 < 0x1f) {
      if (uVar13 == 0x10) {
        param_1 = (byte *)FUN_001ff1ec(param_1,&local_218);
        uVar4 = local_218;
      }
      else if (uVar13 < 0x11) {
        if (uVar13 == 10) {
          uVar4 = (ulong)*(ushort *)(pbVar9 + 1);
LAB_002002b4:
          param_1 = pbVar9 + 3;
        }
        else if (uVar13 < 0xb) {
          if (uVar12 == 6) goto LAB_002003f0;
          if (uVar12 < 7) {
            if (bVar1 != 3) goto switchD_00200464_caseD_3;
            param_1 = pbVar9 + 9;
            uVar4 = *(ulong *)(pbVar9 + 1);
          }
          else {
            param_1 = pbVar9 + 2;
            if (uVar12 == 8) {
              uVar4 = (ulong)pbVar9[1];
            }
            else {
              if (uVar12 != 9) goto switchD_00200464_caseD_3;
              uVar4 = (long)(char)pbVar9[1];
            }
          }
        }
        else {
          if (uVar13 == 0xd) {
            uVar4 = (ulong)*(int *)(pbVar9 + 1);
          }
          else {
            if (0xd < uVar13) {
              param_1 = pbVar9 + 9;
              if ((bVar1 == 0xe) || (bVar1 == 0xf)) {
                uVar4 = *(ulong *)(pbVar9 + 1);
                goto LAB_002005c8;
              }
              goto switchD_00200464_caseD_3;
            }
            if (bVar1 == 0xb) {
              uVar4 = (ulong)*(short *)(pbVar9 + 1);
              goto LAB_002002b4;
            }
            if (bVar1 != 0xc) goto switchD_00200464_caseD_3;
            uVar4 = (ulong)*(uint *)(pbVar9 + 1);
          }
          param_1 = pbVar9 + 5;
        }
      }
      else if (uVar13 == 0x15) {
        local_210 = (ulong)pbVar9[1];
        param_1 = pbVar9 + 2;
        if ((long)(int)(uVar11 - 1) <= (long)local_210) goto switchD_00200464_caseD_3;
        uVar4 = local_200[(long)(int)(uVar11 - 1) - local_210];
      }
      else {
        if (0x15 < uVar13) {
          if (uVar13 == 0x19) goto LAB_002003f0;
          if (0x19 < uVar13) goto LAB_002004b4;
          iVar3 = uVar11 - 1;
          iVar2 = uVar11 - 2;
          if (uVar13 == 0x16) {
            if ((int)uVar11 < 2) goto switchD_00200464_caseD_3;
            uVar4 = local_200[iVar3];
            local_200[iVar3] = local_200[iVar2];
            local_200[iVar2] = uVar4;
          }
          else {
            if ((uVar13 != 0x17) || ((int)uVar11 < 3)) goto switchD_00200464_caseD_3;
            uVar4 = local_200[iVar3];
            uVar10 = local_200[(int)(uVar11 - 3)];
            local_200[iVar3] = local_200[iVar2];
            local_200[iVar2] = uVar10;
            local_200[(int)(uVar11 - 3)] = uVar4;
          }
          goto LAB_002000a8;
        }
        if (uVar13 == 0x12) {
          if (uVar11 == 0) goto switchD_00200464_caseD_3;
          iVar3 = uVar11 - 1;
        }
        else {
          if (uVar13 < 0x12) {
            param_1 = (byte *)FUN_001ff214(param_1,&local_208);
            uVar4 = local_208;
            goto LAB_002005c8;
          }
          if (uVar13 == 0x13) {
            if (uVar11 == 0) goto switchD_00200464_caseD_3;
            uVar11 = uVar11 - 1;
            goto LAB_002000a8;
          }
          if ((uVar13 != 0x14) || ((int)uVar11 < 2)) goto switchD_00200464_caseD_3;
          iVar3 = uVar11 - 2;
        }
        uVar4 = local_200[iVar3];
      }
    }
    else {
LAB_002003f0:
      if (uVar11 == 0) goto switchD_00200464_caseD_3;
      uVar11 = uVar11 - 1;
      puVar8 = (ulong *)local_200[(int)uVar11];
      if (uVar12 == 0x1f) {
        uVar4 = -(long)puVar8;
      }
      else if (uVar12 < 0x20) {
        if (uVar12 == 6) {
switchD_00200464_caseD_8:
          uVar4 = *puVar8;
        }
        else {
          if (bVar1 != 0x19) goto switchD_00200464_caseD_3;
          uVar4 = ((ulong)puVar8 ^ (long)puVar8 >> 0x3f) - ((long)puVar8 >> 0x3f);
        }
      }
      else if (uVar12 == 0x23) {
        param_1 = (byte *)FUN_001ff1ec(param_1,&local_218);
        uVar4 = (long)puVar8 + local_218;
      }
      else if (uVar12 == 0x94) {
        param_1 = pbVar9 + 2;
        switch(pbVar9[1]) {
        case 1:
          uVar4 = (ulong)(byte)*puVar8;
          break;
        case 2:
          uVar4 = (ulong)(ushort)*puVar8;
          break;
        default:
          goto switchD_00200464_caseD_3;
        case 4:
          uVar4 = (ulong)(uint)*puVar8;
          break;
        case 8:
          goto switchD_00200464_caseD_8;
        }
      }
      else {
        if (uVar12 != 0x20) goto switchD_00200464_caseD_3;
        uVar4 = ~(ulong)puVar8;
      }
    }
  }
  else if (uVar13 < 0x50) {
    if (0x2f < uVar12) {
      uVar4 = (ulong)(uVar12 - 0x30);
      goto LAB_002005c8;
    }
    if (0x27 < uVar12) {
      if (uVar13 < 0x2f) {
        if (0x28 < uVar13) goto LAB_002004b4;
        if (uVar11 == 0) goto switchD_00200464_caseD_3;
        uVar11 = uVar11 - 1;
        param_1 = pbVar9 + 3;
        if (local_200[(int)uVar11] != 0) {
          param_1 = pbVar9 + 3 + *(short *)(pbVar9 + 1);
        }
      }
      else {
        param_1 = pbVar9 + (long)*(short *)(pbVar9 + 1) + 3;
      }
      goto LAB_002000a8;
    }
    if ((uVar13 < 0x24) && (0x22 < uVar13)) goto LAB_002003f0;
LAB_002004b4:
    if ((int)uVar11 < 2) goto switchD_00200464_caseD_3;
    uVar12 = uVar11 - 2;
    uVar7 = local_200[(int)uVar12];
    uVar10 = local_200[(int)(uVar11 - 1)];
    uVar11 = uVar12;
    switch(bVar1) {
    case 0x1a:
      uVar4 = uVar10 & uVar7;
      break;
    case 0x1b:
      uVar4 = 0;
      if (uVar10 != 0) {
        uVar4 = (long)uVar7 / (long)uVar10;
      }
      break;
    case 0x1c:
      uVar4 = uVar7 - uVar10;
      break;
    case 0x1d:
      uVar4 = 0;
      if (uVar10 != 0) {
        uVar4 = uVar7 / uVar10;
      }
      uVar4 = uVar7 - uVar4 * uVar10;
      break;
    case 0x1e:
      uVar4 = uVar10 * uVar7;
      break;
    default:
      goto switchD_00200464_caseD_3;
    case 0x21:
      uVar4 = uVar10 | uVar7;
      break;
    case 0x22:
      uVar4 = uVar10 + uVar7;
      break;
    case 0x24:
      uVar4 = uVar7 << (uVar10 & 0x3f);
      break;
    case 0x25:
      uVar4 = uVar7 >> (uVar10 & 0x3f);
      break;
    case 0x26:
      uVar4 = (long)uVar7 >> (uVar10 & 0x3f);
      break;
    case 0x27:
      uVar4 = uVar10 ^ uVar7;
      break;
    case 0x29:
      uVar4 = (ulong)(uVar7 == uVar10);
      break;
    case 0x2a:
      uVar4 = (ulong)((long)uVar10 <= (long)uVar7);
      break;
    case 0x2b:
      uVar4 = (ulong)((long)uVar10 < (long)uVar7);
      break;
    case 0x2c:
      uVar4 = (ulong)((long)uVar7 <= (long)uVar10);
      break;
    case 0x2d:
      uVar4 = (ulong)((long)uVar7 < (long)uVar10);
      break;
    case 0x2e:
      uVar4 = (ulong)(uVar7 != uVar10);
    }
  }
  else {
    if (uVar13 != 0x90) {
      if (uVar13 < 0x91) {
        if (bVar1 < 0x70) {
          iVar3 = uVar12 - 0x50;
          goto LAB_0020031c;
        }
        param_1 = (byte *)FUN_001ff214(param_1,&local_210);
        lVar6 = FUN_001ff494(param_3,uVar13 - 0x70);
      }
      else {
        if (uVar13 == 0x94) goto LAB_002003f0;
        if (0x94 < uVar13) {
          if (uVar13 != 0x96) {
            if (uVar13 == 0xf1) {
              bVar1 = pbVar9[1];
              uVar5 = FUN_001ff6c4(bVar1,param_3);
              param_1 = (byte *)FUN_001ff254(bVar1,uVar5,pbVar9 + 2,&local_208);
              uVar4 = local_208;
              goto LAB_002005c8;
            }
            goto switchD_00200464_caseD_3;
          }
          goto LAB_002000a8;
        }
        if (bVar1 != 0x92) goto switchD_00200464_caseD_3;
        uVar5 = FUN_001ff1ec(param_1,local_220);
        param_1 = (byte *)FUN_001ff214(uVar5,&local_210);
        lVar6 = FUN_001ff494(param_3,local_220[0]);
      }
      uVar4 = lVar6 + local_210;
      goto LAB_002005c8;
    }
    param_1 = (byte *)FUN_001ff1ec(param_1,local_220);
    iVar3 = local_220[0];
LAB_0020031c:
    uVar4 = FUN_001ff494(param_3,iVar3);
  }
LAB_002005c8:
  if (0x3f < uVar11) goto switchD_00200464_caseD_3;
  local_200[(int)uVar11] = uVar4;
  uVar11 = uVar11 + 1;
  goto LAB_002000a8;
}


// ===== 0020060c  FUN_0020060c =====

void FUN_0020060c(void *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined1 auStack_3d0 [8];
  long local_3c8;
  long alStack_3c0 [31];
  long local_2c8;
  ulong local_80;
  char acStack_68 [31];
  char local_49;
  
  memcpy(alStack_3c0,param_1,0x3c0);
  if ((((local_80 >> 0x3e & 1) == 0) || (local_49 == '\0')) && (local_2c8 == 0)) {
    FUN_001ff458(alStack_3c0,*(undefined8 *)((long)param_1 + 0x310),auStack_3d0);
  }
  if ((*(ulong *)((long)param_1 + 0x340) >> 0x3e & 1) != 0) {
    *(undefined1 *)((long)param_1 + 0x377) = 0;
  }
  lVar2 = param_2[200];
  *(undefined8 *)((long)param_1 + 0xf8) = 0;
  if ((int)lVar2 == 1) {
    lVar2 = FUN_001ff494(alStack_3c0,(int)param_2[0xc6]);
    lVar2 = lVar2 + param_2[0xc5];
  }
  else {
    if ((int)lVar2 != 2) {
LAB_00200754:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = FUN_001ff1ec(param_2[199],&local_3c8);
    lVar2 = FUN_00200058(lVar2,lVar2 + local_3c8,alStack_3c0,0);
  }
  *(long *)((long)param_1 + 0x310) = lVar2;
  puVar5 = (undefined1 *)((long)param_1 + 0x358);
  lVar4 = 0;
  plVar6 = param_2;
  do {
    switch((int)plVar6[1]) {
    case 1:
      lVar3 = lVar2 + *plVar6;
      break;
    case 2:
      if (acStack_68[(int)*plVar6] != '\0') {
        lVar3 = FUN_001ff494(alStack_3c0);
        goto LAB_00200744;
      }
      lVar3 = alStack_3c0[(int)*plVar6];
      break;
    case 3:
      lVar3 = FUN_001ff1ec(*plVar6,&local_3c8);
      lVar3 = FUN_00200058(lVar3,lVar3 + local_3c8,alStack_3c0,lVar2);
      break;
    case 4:
      lVar3 = lVar2 + *plVar6;
      goto LAB_00200744;
    case 5:
      lVar3 = FUN_001ff1ec(*plVar6,&local_3c8);
      lVar3 = FUN_00200058(lVar3,lVar3 + local_3c8,alStack_3c0,lVar2);
LAB_00200744:
      if ((byte)(&DAT_002161c0)[lVar4] < 9) {
        *puVar5 = 1;
        goto LAB_002007c4;
      }
      goto LAB_00200754;
    default:
      goto switchD_0020071c_default;
    }
    if ((*(ulong *)((long)param_1 + 0x340) >> 0x3e & 1) != 0) {
      *puVar5 = 0;
    }
LAB_002007c4:
    *(long *)((long)param_1 + lVar4 * 8) = lVar3;
switchD_0020071c_default:
    lVar4 = lVar4 + 1;
    plVar6 = plVar6 + 2;
    puVar5 = puVar5 + 1;
    if (lVar4 == 0x62) {
      uVar1 = *(ulong *)((long)param_1 + 0x340) & 0x7fffffffffffffff;
      if (*(char *)((long)param_2 + 0x673) != '\0') {
        uVar1 = *(ulong *)((long)param_1 + 0x340) | 0x8000000000000000;
      }
      *(ulong *)((long)param_1 + 0x340) = uVar1;
      return;
    }
  } while( true );
}


// ===== 00200818  FUN_00200818 =====

void FUN_00200818(void *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 unaff_x30;
  undefined1 auStack_688 [8];
  undefined1 auStack_680 [1576];
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_40;
  
  memset(param_1,0,0x3c0);
  *(undefined8 *)((long)param_1 + 0x318) = unaff_x30;
  *(undefined8 *)((long)param_1 + 0x340) = 0x4000000000000000;
  iVar1 = FUN_001ffc34(param_1,auStack_680);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (((PTR_pthread_create_0020fcd8 == (undefined *)0x0) ||
      (iVar1 = pthread_once((pthread_once_t *)&DAT_00216224,FUN_001ff344), iVar1 != 0)) &&
     (DAT_002161c0 == '\0')) {
    FUN_001ff344();
  }
  FUN_001ff458(param_1,param_2,auStack_688);
  local_58 = 0;
  local_40 = 1;
  local_50 = 0x1f;
  FUN_0020060c(param_1,auStack_680);
  *(undefined8 *)((long)param_1 + 0x318) = param_3;
  return;
}


// ===== 002008f4  FUN_002008f4 =====

void FUN_002008f4(long param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_0020060c();
  if (*(int *)(param_2 + *(long *)(param_2 + 0x668) * 0x10 + 8) == 6) {
    *(undefined8 *)(param_1 + 0x318) = 0;
  }
  else {
    uVar1 = FUN_001ff494(param_1);
    *(undefined8 *)(param_1 + 0x318) = uVar1;
  }
  return;
}


// ===== 00200940  FUN_00200940 =====

undefined8 FUN_00200940(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_680 [1616];
  code *local_30;
  
  do {
    iVar1 = FUN_001ffc34(param_2,auStack_680);
    lVar2 = FUN_001ff5f8(param_2);
    uVar4 = 4;
    if (lVar2 + (*(long *)(param_2 + 0x340) >> 0x3f) != param_1[3]) {
      uVar4 = 0;
    }
    if (iVar1 != 0) {
      return 2;
    }
    if (local_30 != (code *)0x0) {
      uVar3 = (*local_30)(1,uVar4 | 2,*param_1,param_1,param_2);
      if ((int)uVar3 == 7) {
        return uVar3;
      }
      if ((int)uVar3 != 8) {
        return 2;
      }
    }
    if (uVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    FUN_002008f4(param_2,auStack_680);
  } while( true );
}


// ===== 00200a00  FUN_00200a00 =====

undefined4 FUN_00200a00(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 auStack_680 [1616];
  code *local_30;
  
  pcVar3 = (code *)param_1[2];
  uVar4 = param_1[3];
  while( true ) {
    iVar1 = FUN_001ffc34(param_2,auStack_680);
    if ((iVar1 != 5) && (iVar1 != 0)) {
      return 2;
    }
    uVar5 = 0x1a;
    if (iVar1 != 5) {
      uVar5 = 10;
    }
    iVar2 = (*pcVar3)(1,uVar5,*param_1,param_1,param_2,uVar4);
    if (iVar2 != 0) break;
    if (iVar1 == 5) {
      return 5;
    }
    if (local_30 != (code *)0x0) {
      iVar1 = (*local_30)(1,10,*param_1,param_1,param_2);
      if (iVar1 == 7) {
        return 7;
      }
      if (iVar1 != 8) {
        return 2;
      }
    }
    FUN_002008f4(param_2,auStack_680);
  }
  return 2;
}


// ===== 00200aec  FUN_00200aec =====

long FUN_00200aec(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  char *pcVar6;
  undefined1 auStack_a40 [792];
  long local_728;
  undefined8 local_700;
  undefined8 local_6f0;
  undefined8 local_680;
  char local_678 [1568];
  undefined8 local_58;
  undefined2 local_50;
  int local_40;
  undefined2 local_18;
  undefined8 local_8;
  
  memset(auStack_a40,0,0x3c0);
  local_700 = 0x4000000000000000;
  local_728 = param_1 + 1;
  iVar2 = FUN_001ffc34(auStack_a40,&local_680);
  lVar5 = 0;
  if ((iVar2 == 0) && (local_40 != 2)) {
    pcVar3 = local_678;
    pcVar6 = (char *)(param_2 + 0x334);
    puVar4 = (undefined8 *)(param_2 + 0x20);
    do {
      cVar1 = *pcVar3;
      *pcVar6 = cVar1;
      if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
        *puVar4 = *(undefined8 *)(pcVar3 + -8);
      }
      else {
        *puVar4 = 0;
      }
      pcVar3 = pcVar3 + 0x10;
      pcVar6 = pcVar6 + 1;
      puVar4 = puVar4 + 1;
    } while (pcVar3 != (char *)&local_58);
    *(undefined8 *)(param_2 + 0x10) = local_58;
    *(undefined2 *)(param_2 + 0x330) = local_50;
    *(undefined2 *)(param_2 + 0x332) = local_18;
    *(undefined8 *)(param_2 + 0x18) = local_6f0;
    *(undefined8 *)(param_2 + 8) = local_8;
    lVar5 = param_2;
  }
  return lVar5;
}


// ===== 00200be0  FUN_00200be0 =====

void FUN_00200be0(void)

{
  return;
}


// ===== 00200be4  FUN_00200be4 =====

undefined1  [16] FUN_00200be4(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  long lVar3;
  undefined1 auStack_e00 [960];
  undefined1 auStack_a40 [784];
  undefined8 local_730;
  undefined8 local_728;
  long local_700;
  undefined1 auStack_680 [1616];
  code *local_30;
  
  FUN_00200818(auStack_e00,&stack0x00000000);
  memcpy(auStack_a40,auStack_e00,0x3c0);
  do {
    iVar2 = FUN_001ffc34(auStack_a40,auStack_680);
    if ((iVar2 == 5) || (iVar2 != 0)) goto LAB_00200d1c;
    if (local_30 != (code *)0x0) {
      iVar2 = (*local_30)(1,1,*param_1,param_1,auStack_a40);
      if (iVar2 == 6) {
        param_1[2] = 0;
        lVar3 = FUN_001ff5f8(auStack_a40);
        param_1[3] = lVar3 + (local_700 >> 0x3f);
        memcpy(auStack_a40,auStack_e00,0x3c0);
        iVar2 = FUN_00200940(param_1,auStack_a40);
        if (iVar2 == 7) {
          FUN_001ff4ec(auStack_e00,auStack_a40);
          FUN_00200be0(local_730,local_728);
        }
LAB_00200d1c:
        auVar1._8_8_ = param_2;
        auVar1._0_8_ = param_1;
        return auVar1;
      }
      if (iVar2 != 8) goto LAB_00200d1c;
    }
    FUN_002008f4(auStack_a40,auStack_680);
  } while( true );
}


// ===== 00200d5c  FUN_00200d5c =====

undefined1  [16] FUN_00200d5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined1 auStack_780 [960];
  undefined1 auStack_3c0 [784];
  undefined8 local_b0;
  undefined8 local_a8;
  
  FUN_00200818(auStack_780,&stack0x00000000);
  memcpy(auStack_3c0,auStack_780,0x3c0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  iVar2 = FUN_00200a00(param_1,auStack_3c0);
  if (iVar2 == 7) {
    FUN_001ff4ec(auStack_780,auStack_3c0);
    FUN_00200be0(local_b0,local_a8);
  }
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}


// ===== 00200e50  FUN_00200e50 =====

undefined1  [16] FUN_00200e50(long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined1 auStack_780 [960];
  undefined1 auStack_3c0 [784];
  undefined8 local_b0;
  undefined8 local_a8;
  
  FUN_00200818(auStack_780,&stack0x00000000);
  memcpy(auStack_3c0,auStack_780,0x3c0);
  if (*(long *)(param_1 + 0x10) == 0) {
    iVar2 = FUN_00200940(param_1,auStack_3c0);
  }
  else {
    iVar2 = FUN_00200a00(param_1,auStack_3c0);
  }
  if (iVar2 != 7) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_001ff4ec(auStack_780,auStack_3c0);
  FUN_00200be0(local_b0,local_a8);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}


// ===== 00200f4c  FUN_00200f4c =====

undefined1  [16] FUN_00200f4c(long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined1 auStack_780 [960];
  undefined1 auStack_3c0 [784];
  undefined8 local_b0;
  undefined8 local_a8;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_00200be4();
  }
  else {
    FUN_00200818(auStack_780,&stack0x00000000);
    memcpy(auStack_3c0,auStack_780,0x3c0);
    iVar2 = FUN_00200a00(param_1,auStack_3c0);
    if (iVar2 != 7) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    FUN_001ff4ec(auStack_780,auStack_3c0);
    FUN_00200be0(local_b0,local_a8);
  }
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}


// ===== 00201044  FUN_00201044 =====

void FUN_00201044(long param_1)

{
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(1,param_1);
  }
  return;
}


// ===== 00201068  FUN_00201068 =====

undefined8 FUN_00201068(code *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_a40 [960];
  undefined1 auStack_680 [1664];
  
  FUN_00200818(auStack_a40,&stack0x00000000);
  while (((iVar1 = FUN_001ffc34(auStack_a40,auStack_680), iVar1 == 5 || (iVar1 == 0)) &&
         (iVar2 = (*param_1)(auStack_a40,param_2), iVar2 == 0))) {
    if (iVar1 == 5) {
      return 5;
    }
    FUN_002008f4(auStack_a40,auStack_680);
  }
  return 3;
}


// ===== 00201138  FUN_00201138 =====

void FUN_00201138(byte *param_1,ulong *param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  do {
    bVar1 = *param_1;
    uVar2 = uVar4 & 0x3f;
    uVar4 = (ulong)((int)uVar4 + 7);
    uVar3 = uVar3 | ((ulong)bVar1 & 0x7f) << uVar2;
    param_1 = param_1 + 1;
  } while ((char)bVar1 < '\0');
  *param_2 = uVar3;
  return;
}


// ===== 00201160  FUN_00201160 =====

void FUN_00201160(byte *param_1,ulong *param_2)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = 0;
  uVar5 = 0;
  do {
    bVar2 = *param_1;
    uVar3 = uVar5 & 0x3f;
    uVar1 = (int)uVar5 + 7;
    uVar5 = (ulong)uVar1;
    uVar4 = uVar4 | ((ulong)bVar2 & 0x7f) << uVar3;
    param_1 = param_1 + 1;
  } while ((char)bVar2 < '\0');
  if ((uVar1 < 0x40) && ((bVar2 >> 6 & 1) != 0)) {
    uVar4 = -1L << (uVar5 & 0x3f) | uVar4;
  }
  *param_2 = uVar4;
  return;
}


// ===== 002011a0  FUN_002011a0 =====

int FUN_002011a0(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  
  iVar1 = -(uint)(*(ulong *)(param_2 + 8) < *(ulong *)(param_3 + 8));
  if (*(ulong *)(param_3 + 8) < *(ulong *)(param_2 + 8)) {
    iVar1 = 1;
  }
  return iVar1;
}


// ===== 002011bc  FUN_002011bc =====

void FUN_002011bc(undefined8 param_1,code *param_2,long param_3,ulong param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  iVar3 = (int)param_4;
  while( true ) {
    uVar1 = iVar3 * 2 + 1;
    uVar5 = (ulong)uVar1;
    if (param_5 <= (int)uVar1) {
      return;
    }
    uVar2 = iVar3 * 2 + 2;
    if ((int)uVar2 < param_5) {
      uVar5 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3;
      iVar3 = (*param_2)(param_1,*(undefined8 *)(param_3 + uVar5),
                         *(undefined8 *)(param_3 + uVar5 + 8));
      if (iVar3 < 0) {
        uVar1 = uVar2;
      }
      uVar5 = (ulong)uVar1;
    }
    uVar6 = -(param_4 >> 0x1f & 1) & 0xfffffff800000000 | (param_4 & 0xffffffff) << 3;
    uVar7 = -(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3;
    iVar3 = (*param_2)(param_1,*(undefined8 *)(param_3 + uVar6),*(undefined8 *)(param_3 + uVar7));
    if (-1 < iVar3) break;
    uVar4 = *(undefined8 *)(param_3 + uVar6);
    *(undefined8 *)(param_3 + uVar6) = *(undefined8 *)(param_3 + uVar7);
    *(undefined8 *)(param_3 + uVar7) = uVar4;
    iVar3 = (int)uVar5;
    param_4 = uVar5;
  }
  return;
}


// ===== 0020127c  FUN_0020127c =====

void FUN_0020127c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar6 = *(ulong *)(param_3 + 8);
  lVar2 = param_3 + 0x10;
  uVar7 = uVar6 >> 1;
  while( true ) {
    uVar3 = (int)uVar7 - 1;
    uVar7 = (ulong)uVar3;
    if ((int)uVar3 < 0) break;
    FUN_002011bc(param_1,param_2,lVar2,uVar3,uVar6 & 0xffffffff);
  }
  lVar8 = 0;
  iVar5 = (int)uVar6 + -1;
  lVar1 = lVar2 + (long)iVar5 * 8;
  for (; 0 < iVar5; iVar5 = iVar5 + -1) {
    uVar4 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(lVar1 + lVar8);
    *(undefined8 *)(lVar1 + lVar8) = uVar4;
    lVar8 = lVar8 + -8;
    FUN_002011bc(param_1,param_2,lVar2,0,iVar5);
  }
  return;
}


// ===== 00201330  FUN_00201330 =====

undefined8 FUN_00201330(byte param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0xff) {
    uVar1 = 0;
  }
  else {
    switch(param_1 & 7) {
    case 0:
    case 4:
      uVar1 = 8;
      break;
    default:
                    /* WARNING: Subroutine does not return */
      abort();
    case 2:
      uVar1 = 2;
      break;
    case 3:
      uVar1 = 4;
    }
  }
  return uVar1;
}


// ===== 00201390  FUN_00201390 =====

undefined8 FUN_00201390(byte param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  
  if (param_1 != 0xff) {
    bVar1 = param_1 & 0x70;
    if (bVar1 == 0x20) {
      return *(undefined8 *)(param_2 + 8);
    }
    if (bVar1 < 0x21) {
      bVar2 = bVar1 == 0x10;
      if ((param_1 & 0x70) == 0) {
        return 0;
      }
    }
    else {
      if (bVar1 == 0x30) {
        return *(undefined8 *)(param_2 + 0x10);
      }
      bVar2 = bVar1 == 0x50;
    }
    if (!bVar2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return 0;
}


// ===== 002013f0  FUN_002013f0 =====

undefined8 FUN_002013f0(byte param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  
  if (param_1 != 0xff) {
    bVar1 = param_1 & 0x70;
    if (bVar1 == 0x20) {
      return *(undefined8 *)(param_2 + 8);
    }
    if (bVar1 < 0x21) {
      bVar2 = bVar1 == 0x10;
      if ((param_1 & 0x70) == 0) {
        return 0;
      }
    }
    else {
      if (bVar1 == 0x30) {
        return *(undefined8 *)(param_2 + 0x10);
      }
      bVar2 = bVar1 == 0x50;
    }
    if (!bVar2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return 0;
}


// ===== 00201450  FUN_00201450 =====

ulong * FUN_00201450(byte param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  ulong *puVar1;
  ulong *local_8;
  
  if (param_1 == 0x50) {
    local_8 = (ulong *)((long)param_3 + 7U & 0xfffffffffffffff8);
    puVar1 = local_8 + 1;
    local_8 = (ulong *)*local_8;
  }
  else {
    switch(param_1 & 0xf) {
    case 0:
    case 4:
    case 0xc:
      puVar1 = param_3 + 1;
      local_8 = (ulong *)*param_3;
      break;
    case 1:
      puVar1 = (ulong *)FUN_00201138(param_3,&local_8);
      break;
    case 2:
      puVar1 = (ulong *)((long)param_3 + 2);
      local_8 = (ulong *)(ulong)(ushort)*param_3;
      break;
    case 3:
      puVar1 = (ulong *)((long)param_3 + 4);
      local_8 = (ulong *)(ulong)(uint)*param_3;
      break;
    default:
                    /* WARNING: Subroutine does not return */
      abort();
    case 9:
      puVar1 = (ulong *)FUN_00201160(param_3,&local_8);
      break;
    case 10:
      puVar1 = (ulong *)((long)param_3 + 2);
      local_8 = (ulong *)(long)(short)*param_3;
      break;
    case 0xb:
      puVar1 = (ulong *)((long)param_3 + 4);
      local_8 = (ulong *)(long)(int)(uint)*param_3;
    }
    if (local_8 != (ulong *)0x0) {
      if ((param_1 & 0x70) != 0x10) {
        param_3 = param_2;
      }
      local_8 = (ulong *)((long)local_8 + (long)param_3);
      if ((char)param_1 < '\0') {
        local_8 = (ulong *)*local_8;
      }
    }
  }
  *param_4 = (ulong)local_8;
  return puVar1;
}


// ===== 00201540  FUN_00201540 =====

int FUN_00201540(long param_1,long param_2,long param_3)

{
  int iVar1;
  ushort uVar2;
  undefined8 uVar3;
  ulong local_10;
  ulong local_8;
  
  uVar2 = *(ushort *)(param_1 + 0x20) >> 3 & 0xff;
  uVar3 = FUN_00201390(uVar2,param_1);
  FUN_00201450(uVar2,uVar3,param_2 + 8,&local_10);
  FUN_00201450(*(ushort *)(param_1 + 0x20) >> 3,uVar3,param_3 + 8,&local_8);
  iVar1 = -(uint)(local_10 < local_8);
  if (local_8 < local_10) {
    iVar1 = 1;
  }
  return iVar1;
}


// ===== 002015d0  FUN_002015d0 =====

byte FUN_002015d0(long param_1)

{
  char cVar1;
  byte bVar2;
  size_t sVar3;
  undefined8 uVar4;
  long lVar5;
  byte *pbVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  undefined1 auStack_8 [8];
  
  pcVar8 = (char *)(param_1 + 9);
  sVar3 = strlen(pcVar8);
  pcVar7 = pcVar8 + sVar3 + 1;
  if (3 < *(byte *)(param_1 + 8)) {
    if (pcVar8[sVar3 + 1] != '\b') {
      return 0xff;
    }
    if (pcVar7[1] != '\0') {
      return 0xff;
    }
    pcVar7 = pcVar7 + 2;
  }
  if (*(char *)(param_1 + 9) == 'z') {
    uVar4 = FUN_00201138(pcVar7,auStack_10);
    lVar5 = FUN_00201160(uVar4,auStack_8);
    if (*(char *)(param_1 + 8) == '\x01') {
      lVar5 = lVar5 + 1;
    }
    else {
      lVar5 = FUN_00201138(lVar5,auStack_10);
    }
    pbVar6 = (byte *)FUN_00201138(lVar5,auStack_10);
    for (pcVar8 = (char *)(param_1 + 10); cVar1 = *pcVar8, cVar1 != 'R'; pcVar8 = pcVar8 + 1) {
      if (cVar1 == 'P') {
        pbVar6 = (byte *)FUN_00201450(*pbVar6 & 0x7f,0,pbVar6 + 1,auStack_18);
      }
      else {
        if (cVar1 != 'L') goto LAB_00201628;
        pbVar6 = pbVar6 + 1;
      }
    }
    bVar2 = *pbVar6;
  }
  else {
LAB_00201628:
    bVar2 = 0;
  }
  return bVar2;
}


// ===== 002016cc  FUN_002016cc =====

uint * FUN_002016cc(long param_1,uint *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong local_10;
  ulong local_8;
  
  uVar3 = (ulong)(*(ushort *)(param_1 + 0x20) >> 3);
  uVar7 = uVar3 & 0xff;
  uVar1 = FUN_00201390(uVar3 & 0xff,param_1);
  lVar2 = 0;
  do {
    if (*param_2 == 0) {
      return (uint *)0x0;
    }
    if (param_2[1] != 0) {
      lVar6 = lVar2;
      if (((*(byte *)(param_1 + 0x20) >> 2 & 1) != 0) &&
         (lVar6 = (long)param_2 + (4 - (long)(int)param_2[1]), lVar6 != lVar2)) {
        uVar3 = FUN_002015d0(lVar6);
        uVar7 = uVar3 & 0xffffffff;
        uVar1 = FUN_00201390(uVar3,param_1);
      }
      if ((uint)uVar7 == 0) {
        local_10 = *(ulong *)(param_2 + 2);
        local_8 = *(ulong *)(param_2 + 4);
        uVar3 = local_10;
      }
      else {
        uVar4 = FUN_00201450(uVar7 & 0xff,uVar1,param_2 + 2,&local_10);
        FUN_00201450((uint)uVar7 & 0xf,0,uVar4,&local_8);
        uVar3 = FUN_00201330(uVar7 & 0xff);
        uVar5 = 0xffffffffffffffff;
        if ((uVar3 & 0xffffffff) < 8) {
          uVar5 = (1L << ((uVar3 & 7) << 3)) - 1;
        }
        uVar3 = uVar5 & local_10;
      }
      lVar2 = lVar6;
      if ((uVar3 != 0) && (param_3 - local_10 < local_8)) {
        return param_2;
      }
    }
    param_2 = (uint *)((long)param_2 + (ulong)*param_2 + 4);
  } while( true );
}


// ===== 0020182c  FUN_0020182c =====

void FUN_0020182c(long param_1)

{
  FUN_002015d0((param_1 + 4) - (long)*(int *)(param_1 + 4));
  return;
}


// ===== 0020183c  FUN_0020183c =====

undefined8 FUN_0020183c(ulong *param_1,ulong param_2,ulong *param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong *puVar15;
  int *piVar16;
  ulong uVar17;
  int *piVar18;
  ulong *puVar19;
  int *piVar20;
  int *piVar21;
  ulong uVar22;
  undefined8 local_40;
  ulong local_38;
  long local_30;
  ulong local_28;
  ulong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  piVar16 = (int *)param_1[2];
  uVar17 = *param_1;
  if ((param_2 < 0x30) || ((int)param_3[5] == 0)) {
    if (param_2 < 0x1a) {
      return 0xffffffff;
    }
  }
  else {
    if ((param_1[4] == DAT_00214b00) && (param_1[5] == DAT_00216228)) {
      puVar19 = DAT_00216230;
      puVar13 = (ulong *)0x0;
      puVar15 = (ulong *)0x0;
      while (puVar10 = puVar19, puVar10 != (ulong *)0x0) {
        if ((*puVar10 <= *param_3) && (*param_3 < puVar10[1])) {
          uVar17 = puVar10[2];
          piVar18 = (int *)puVar10[3];
          if (puVar10 != DAT_00216230) {
            puVar15[5] = puVar10[5];
            puVar10[5] = (ulong)DAT_00216230;
            DAT_00216230 = puVar10;
          }
          goto LAB_00201a4c;
        }
        puVar13 = puVar10;
        if (*puVar10 == 0 && puVar10[1] == 0) break;
        puVar19 = (ulong *)puVar10[5];
        if (puVar19 != (ulong *)0x0) {
          puVar15 = puVar10;
        }
      }
      goto LAB_0020196c;
    }
    puVar11 = &DAT_00216268;
    DAT_00214b00 = param_1[4];
    DAT_00216228 = param_1[5];
    do {
      puVar11[-6] = 0;
      puVar11[-5] = 0;
      puVar11[-1] = puVar11;
      puVar11 = puVar11 + 6;
    } while (puVar11 != (undefined8 *)0x2163e8);
    DAT_002163b0 = 0;
    DAT_00216230 = &DAT_00216238;
    *(undefined4 *)(param_3 + 5) = 0;
  }
  puVar15 = (ulong *)0x0;
  puVar13 = (ulong *)0x0;
LAB_0020196c:
  uVar22 = (ulong)(ushort)param_1[3];
  uVar9 = 0;
  uVar14 = 0;
  bVar4 = false;
  piVar21 = (int *)0x0;
  piVar18 = (int *)0x0;
  while (uVar22 = uVar22 - 1, uVar22 != 0xffffffffffffffff) {
    iVar3 = *piVar16;
    piVar20 = piVar18;
    if (iVar3 == 1) {
      uVar12 = uVar17 + *(long *)(piVar16 + 4);
      if ((uVar12 <= *param_3) && (*param_3 < uVar12 + *(long *)(piVar16 + 10))) {
        bVar4 = true;
        uVar9 = uVar12 + *(long *)(piVar16 + 10);
        uVar14 = uVar12;
      }
    }
    else {
      piVar20 = piVar16;
      if ((iVar3 != 0x6474e550) && (piVar20 = piVar18, iVar3 == 2)) {
        piVar21 = piVar16;
      }
    }
    piVar16 = piVar16 + 0xe;
    piVar18 = piVar20;
  }
  if (!bVar4) {
    return 0;
  }
  if (param_2 >= 0x30) {
    if ((puVar15 != (ulong *)0x0) && (puVar13 != (ulong *)0x0)) {
      puVar15[5] = puVar13[5];
      puVar13[5] = (ulong)DAT_00216230;
      DAT_00216230 = puVar13;
    }
    puVar13 = DAT_00216230;
    DAT_00216230[2] = uVar17;
    puVar13[3] = (ulong)piVar18;
    puVar13[4] = (ulong)piVar21;
    *puVar13 = uVar14;
    puVar13[1] = uVar9;
  }
LAB_00201a4c:
  if (piVar18 == (int *)0x0) {
    return 0;
  }
  lVar1 = uVar17 + *(long *)(piVar18 + 4);
  if (*(char *)(uVar17 + *(long *)(piVar18 + 4)) != '\x01') {
    return 1;
  }
  uVar6 = *(undefined1 *)(lVar1 + 1);
  uVar7 = FUN_002013f0(uVar6,param_3);
  uVar7 = FUN_00201450(uVar6,uVar7,lVar1 + 4,&local_40);
  cVar2 = *(char *)(lVar1 + 2);
  if ((cVar2 != -1) && (*(char *)(lVar1 + 3) == ';')) {
    uVar8 = FUN_002013f0(cVar2,param_3);
    piVar16 = (int *)FUN_00201450(cVar2,uVar8,uVar7,&local_38);
    if (local_38 == 0) {
      return 1;
    }
    if (((ulong)piVar16 & 3) == 0) {
      uVar17 = *param_3;
      if (uVar17 < (ulong)(lVar1 + *piVar16)) {
        return 1;
      }
      uVar9 = local_38 - 1;
      if (uVar17 < (ulong)(lVar1 + piVar16[uVar9 * 2])) {
        uVar14 = 0;
        uVar22 = uVar9;
        do {
          uVar12 = uVar22;
          if (uVar12 <= uVar14) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar9 = uVar12 + uVar14 >> 1;
          uVar22 = uVar9;
        } while ((uVar17 < (ulong)(lVar1 + piVar16[uVar9 * 2])) ||
                (uVar14 = uVar9 + 1, uVar22 = uVar12,
                (ulong)(lVar1 + piVar16[uVar9 * 2 + 2]) <= uVar17));
      }
      uVar17 = lVar1 + piVar16[uVar9 * 2 + 1];
      bVar5 = FUN_0020182c(uVar17);
      uVar14 = FUN_00201330(bVar5);
      FUN_00201450(bVar5 & 0xf,0,uVar17 + (uVar14 & 0xffffffff) + 8,&local_30);
      iVar3 = piVar16[uVar9 * 2];
      if (*param_3 < (ulong)(lVar1 + iVar3 + local_30)) {
        param_3[4] = uVar17;
      }
      param_3[3] = lVar1 + iVar3;
      return 1;
    }
  }
  local_28 = param_3[1];
  local_20 = param_3[2];
  local_10 = 4;
  local_30 = 0;
  local_18 = local_40;
  uVar17 = FUN_002016cc(&local_30,local_40,*param_3);
  param_3[4] = uVar17;
  if (uVar17 != 0) {
    uVar6 = FUN_0020182c();
    uVar7 = FUN_002013f0(uVar6,param_3);
    FUN_00201450(uVar6,uVar7,param_3[4] + 8,&local_38);
    param_3[3] = local_38;
  }
  return 1;
}


// ===== 00201c58  FUN_00201c58 =====

int FUN_00201c58(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  ulong local_10;
  ulong local_8;
  
  uVar2 = FUN_0020182c(param_2);
  uVar3 = FUN_00201390(uVar2,param_1);
  FUN_00201450(uVar2,uVar3,param_2 + 8,&local_10);
  uVar2 = FUN_0020182c(param_3);
  uVar3 = FUN_00201390(uVar2,param_1);
  FUN_00201450(uVar2,uVar3,param_3 + 8,&local_8);
  iVar1 = -(uint)(local_10 < local_8);
  if (local_8 < local_10) {
    iVar1 = 1;
  }
  return iVar1;
}


// ===== 00201cf4  FUN_00201cf4 =====

long FUN_00201cf4(ulong *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong local_8;
  
  uVar8 = 0;
  uVar2 = 0;
  lVar7 = 0;
  lVar4 = 0;
  do {
    if (*param_2 == 0) {
      return lVar7;
    }
    if (param_2[1] != 0) {
      lVar6 = (long)param_2 + (4 - (long)(int)param_2[1]);
      if (lVar6 != lVar4) {
        uVar2 = FUN_002015d0(lVar6);
        if (uVar2 == 0xff) {
          return -1;
        }
        uVar8 = FUN_00201390((char)uVar2,param_1);
        uVar1 = (ushort)param_1[4];
        lVar4 = lVar6;
        if ((uVar1 & 0x7f8) == 0x7f8) {
          *(ushort *)(param_1 + 4) = uVar1 & 0xf800 | uVar1 & 7 | (ushort)((uVar2 & 0xff) << 3);
        }
        else if ((uVar1 >> 3 & 0xff) != uVar2) {
          *(byte *)(param_1 + 4) = (byte)param_1[4] | 4;
        }
      }
      FUN_00201450(uVar2 & 0xff,uVar8,param_2 + 2,&local_8);
      uVar3 = FUN_00201330(uVar2 & 0xff);
      uVar5 = 0xffffffffffffffff;
      if ((uVar3 & 0xffffffff) < 8) {
        uVar5 = (1L << ((uVar3 & 7) << 3)) - 1;
      }
      if (((uVar5 & local_8) != 0) && (lVar7 = lVar7 + 1, local_8 < *param_1)) {
        *param_1 = local_8;
      }
    }
    param_2 = (uint *)((long)param_2 + (ulong)*param_2 + 4);
  } while( true );
}


// ===== 00201e54  FUN_00201e54 =====

void FUN_00201e54(long param_1,long *param_2,uint *param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong local_8;
  
  uVar3 = (ulong)(*(ushort *)(param_1 + 0x20) >> 3);
  uVar7 = uVar3 & 0xff;
  uVar1 = FUN_00201390(uVar3 & 0xff,param_1);
  lVar2 = 0;
  for (; *param_3 != 0; param_3 = (uint *)((long)param_3 + (ulong)*param_3 + 4)) {
    if (param_3[1] != 0) {
      lVar6 = lVar2;
      if (((*(byte *)(param_1 + 0x20) >> 2 & 1) != 0) &&
         (lVar6 = (long)param_3 + (4 - (long)(int)param_3[1]), lVar6 != lVar2)) {
        uVar3 = FUN_002015d0(lVar6);
        uVar7 = uVar3 & 0xffffffff;
        uVar1 = FUN_00201390(uVar3,param_1);
      }
      if ((int)uVar7 == 0) {
        uVar3 = *(ulong *)(param_3 + 2);
      }
      else {
        FUN_00201450(uVar7 & 0xff,uVar1,param_3 + 2,&local_8);
        uVar4 = FUN_00201330(uVar7 & 0xff);
        uVar3 = 0xffffffffffffffff;
        if ((uVar4 & 0xffffffff) < 8) {
          uVar3 = (1L << ((uVar4 & 7) << 3)) - 1;
        }
        uVar3 = uVar3 & local_8;
      }
      lVar2 = lVar6;
      if ((uVar3 != 0) && (lVar6 = *param_2, lVar6 != 0)) {
        lVar5 = *(long *)(lVar6 + 8);
        *(long *)(lVar6 + 8) = lVar5 + 1;
        *(uint **)(lVar6 + (lVar5 + 2) * 8) = param_3;
      }
    }
  }
  return;
}


// ===== 00201f88  FUN_00201f88 =====

long FUN_00201f88(ulong *param_1,ulong param_2)

{
  ushort uVar1;
  ulong *puVar2;
  void *pvVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  size_t __size;
  ulong uVar12;
  ulong *puVar13;
  ulong *puVar14;
  code *pcVar15;
  ulong uVar16;
  ulong *puVar17;
  long lVar18;
  ulong uVar19;
  ulong *puVar20;
  ulong local_18;
  ulong *local_10;
  void *local_8;
  
  if (((byte)param_1[4] & 1) != 0) goto LAB_00201fb4;
  uVar16 = (ulong)((uint)param_1[4] >> 0xb);
  if (uVar16 == 0) {
    if (((byte)param_1[4] >> 1 & 1) == 0) {
      uVar16 = FUN_00201cf4(param_1,param_1[3]);
      if (uVar16 != 0xffffffffffffffff) goto LAB_0020202c;
LAB_00201fec:
      param_1[4] = 0;
      *(undefined2 *)(param_1 + 4) = 0x7f8;
      param_1[3] = (ulong)&DAT_002163c0;
    }
    else {
      for (plVar11 = (long *)param_1[3]; *plVar11 != 0; plVar11 = plVar11 + 1) {
        lVar9 = FUN_00201cf4(param_1);
        if (lVar9 == -1) goto LAB_00201fec;
        uVar16 = uVar16 + lVar9;
      }
LAB_0020202c:
      uVar5 = (uint)uVar16 & 0x1fffff;
      if (uVar5 == uVar16) {
        uVar5 = (uint)param_1[4] & 0x7ff | uVar5 << 0xb;
      }
      else {
        uVar5 = (uint)param_1[4] & 0x7ff;
      }
      *(uint *)(param_1 + 4) = uVar5;
      if (uVar16 != 0) goto LAB_00202054;
    }
  }
  else {
LAB_00202054:
    __size = (uVar16 + 2) * 8;
    local_10 = (ulong *)malloc(__size);
    if (local_10 != (ulong *)0x0) {
      local_10[1] = 0;
      local_8 = malloc(__size);
      if (local_8 != (void *)0x0) {
        *(undefined8 *)((long)local_8 + 8) = 0;
      }
      if (((byte)param_1[4] >> 1 & 1) == 0) {
        FUN_00201e54(param_1,&local_10,param_1[3]);
      }
      else {
        for (plVar11 = (long *)param_1[3]; *plVar11 != 0; plVar11 = plVar11 + 1) {
          FUN_00201e54(param_1,&local_10);
        }
      }
      pvVar3 = local_8;
      puVar2 = local_10;
      if ((local_10 != (ulong *)0x0) && (local_10[1] != uVar16)) {
LAB_002023ac:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (((byte)param_1[4] >> 2 & 1) == 0) {
        if ((param_1[4] & 0x7f8) == 0) {
          pcVar15 = FUN_002011a0;
        }
        else {
          pcVar15 = FUN_00201540;
        }
      }
      else {
        pcVar15 = FUN_00201c58;
      }
      if (local_8 == (void *)0x0) {
        FUN_0020127c(param_1,pcVar15,local_10);
      }
      else {
        puVar17 = local_10 + 2;
        uVar19 = local_10[1];
        puVar13 = &DAT_002163b8;
        puVar20 = puVar17;
        for (uVar12 = 0; uVar12 != uVar19; uVar12 = uVar12 + 1) {
          while ((puVar13 != &DAT_002163b8 &&
                 (iVar6 = (*pcVar15)(param_1,*puVar20,*puVar13), iVar6 < 0))) {
            puVar14 = *(ulong **)((long)pvVar3 + (long)puVar13 + (0x10 - (long)puVar17));
            *(undefined8 *)((long)pvVar3 + (long)puVar13 + (0x10 - (long)puVar17)) = 0;
            puVar13 = puVar14;
          }
          *(ulong **)((long)pvVar3 + uVar12 * 8 + 0x10) = puVar13;
          puVar13 = puVar20;
          puVar20 = puVar20 + 1;
        }
        lVar9 = 0;
        uVar12 = 0;
        for (uVar10 = 0; uVar10 != uVar19; uVar10 = uVar10 + 1) {
          if (*(long *)((long)pvVar3 + uVar10 * 8 + 0x10) == 0) {
            lVar18 = lVar9 + 2;
            lVar9 = lVar9 + 1;
            *(ulong *)((long)pvVar3 + lVar18 * 8) = *puVar17;
          }
          else {
            lVar18 = uVar12 + 2;
            uVar12 = uVar12 + 1;
            puVar2[lVar18] = *puVar17;
          }
          puVar17 = puVar17 + 1;
        }
        puVar2[1] = uVar12;
        *(long *)((long)pvVar3 + 8) = lVar9;
        if (*(long *)((long)local_8 + 8) + local_10[1] != uVar16) goto LAB_002023ac;
        FUN_0020127c(param_1,pcVar15);
        pvVar3 = local_8;
        puVar2 = local_10;
        lVar9 = *(long *)((long)local_8 + 8);
        if (lVar9 != 0) {
          uVar16 = local_10[1];
          lVar18 = lVar9 << 3;
          do {
            lVar9 = lVar9 + -1;
            uVar12 = *(ulong *)((long)pvVar3 + lVar18 + 8);
            puVar17 = puVar2 + uVar16;
            while (uVar16 != 0) {
              iVar6 = (*pcVar15)(param_1,puVar17[1],uVar12);
              if (iVar6 < 1) break;
              *(ulong *)((long)(puVar17 + -1) + lVar18 + 0x10) = puVar17[1];
              uVar16 = uVar16 - 1;
              puVar17 = puVar17 + -1;
            }
            lVar18 = lVar18 + -8;
            puVar2[lVar9 + uVar16 + 2] = uVar12;
          } while (lVar9 != 0);
          puVar2[1] = puVar2[1] + *(long *)((long)pvVar3 + 8);
        }
        free(local_8);
      }
      *local_10 = param_1[3];
      param_1[3] = (ulong)local_10;
      *(byte *)(param_1 + 4) = (byte)param_1[4] | 1;
    }
  }
  if (param_2 < *param_1) {
    return 0;
  }
LAB_00201fb4:
  bVar4 = (byte)param_1[4];
  if ((bVar4 & 1) == 0) {
    if ((bVar4 >> 1 & 1) == 0) {
      lVar9 = FUN_002016cc(param_1,param_1[3],param_2);
      return lVar9;
    }
    for (plVar11 = (long *)param_1[3]; *plVar11 != 0; plVar11 = plVar11 + 1) {
      lVar9 = FUN_002016cc(param_1,*plVar11,param_2);
      if (lVar9 != 0) {
        return lVar9;
      }
    }
  }
  else if ((bVar4 >> 2 & 1) == 0) {
    if (((ushort)param_1[4] & 0x7f8) == 0) {
      uVar16 = 0;
      uVar12 = *(ulong *)(param_1[3] + 8);
      while (uVar19 = uVar12, uVar16 < uVar19) {
        uVar12 = uVar19 + uVar16 >> 1;
        lVar9 = *(long *)(param_1[3] + (uVar12 + 2) * 8);
        if (*(ulong *)(lVar9 + 8) <= param_2) {
          if (param_2 < *(ulong *)(lVar9 + 8) + *(long *)(lVar9 + 0x10)) {
            return lVar9;
          }
          uVar16 = uVar12 + 1;
          uVar12 = uVar19;
        }
      }
    }
    else {
      uVar1 = (ushort)param_1[4] >> 3;
      uVar19 = param_1[3];
      uVar16 = 0;
      uVar7 = FUN_00201390(uVar1 & 0xff,param_1);
      uVar12 = *(ulong *)(uVar19 + 8);
      while (uVar10 = uVar12, uVar16 < uVar10) {
        uVar12 = uVar10 + uVar16 >> 1;
        lVar9 = *(long *)(uVar19 + (uVar12 + 2) * 8);
        uVar8 = FUN_00201450(uVar1 & 0xff,uVar7,lVar9 + 8,&local_18);
        FUN_00201450(uVar1 & 0xf,0,uVar8,&local_10);
        if (local_18 <= param_2) {
          if (param_2 < local_18 + (long)local_10) {
            return lVar9;
          }
          uVar16 = uVar12 + 1;
          uVar12 = uVar10;
        }
      }
    }
  }
  else {
    uVar19 = param_1[3];
    uVar16 = 0;
    uVar12 = *(ulong *)(uVar19 + 8);
    while (uVar10 = uVar12, uVar16 < uVar10) {
      uVar12 = uVar10 + uVar16 >> 1;
      lVar9 = *(long *)(uVar19 + (uVar12 + 2) * 8);
      bVar4 = FUN_0020182c(lVar9);
      uVar7 = FUN_00201390(bVar4,param_1);
      uVar7 = FUN_00201450(bVar4,uVar7,lVar9 + 8,&local_18);
      FUN_00201450(bVar4 & 0xf,0,uVar7,&local_10);
      if (local_18 <= param_2) {
        if (param_2 < local_18 + (long)local_10) {
          return lVar9;
        }
        uVar16 = uVar12 + 1;
        uVar12 = uVar10;
      }
    }
  }
  return 0;
}


// ===== 002024f8  FUN_002024f8 =====

int * FUN_002024f8(int *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    *param_2 = 0xffffffffffffffff;
    param_2[4] = 0;
    param_2[3] = param_1;
    param_2[1] = param_3;
    param_2[2] = param_4;
    *(undefined2 *)(param_2 + 4) = 0x7f8;
    if (PTR_pthread_create_0020fcd8 != (undefined *)0x0) {
      pthread_mutex_lock((pthread_mutex_t *)&DAT_002163c8);
    }
    param_1 = (int *)&DAT_00216228;
    param_2[5] = DAT_002163f0;
    DAT_002163f0 = param_2;
    if (PTR_pthread_create_0020fcd8 != (undefined *)0x0) {
      uVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_002163c8);
      return (int *)(ulong)uVar1;
    }
  }
  return param_1;
}


// ===== 00202594  FUN_00202594 =====

void FUN_00202594(undefined8 param_1,undefined8 param_2)

{
  FUN_002024f8(param_1,param_2,0,0);
  return;
}


// ===== 002025a0  FUN_002025a0 =====

void FUN_002025a0(int *param_1)

{
  void *pvVar1;
  
  if (*param_1 != 0) {
    pvVar1 = malloc(0x30);
    FUN_00202594(param_1,pvVar1);
    return;
  }
  return;
}


// ===== 002025e0  FUN_002025e0 =====

int FUN_002025e0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  param_2[4] = 0;
  param_2[3] = param_1;
  *(undefined1 *)(param_2 + 4) = 2;
  param_2[1] = param_3;
  *param_2 = 0xffffffffffffffff;
  param_2[2] = param_4;
  *(ushort *)(param_2 + 4) = *(ushort *)(param_2 + 4) | 0x7f8;
  if (PTR_pthread_create_0020fcd8 != (undefined *)0x0) {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_002163c8);
  }
  param_2[5] = DAT_002163f0;
  DAT_002163f0 = param_2;
  if (PTR_pthread_create_0020fcd8 != (undefined *)0x0) {
    iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_002163c8);
    return iVar1;
  }
  return 0x216228;
}


// ===== 00202674  FUN_00202674 =====

void FUN_00202674(undefined8 param_1,undefined8 param_2)

{
  FUN_002025e0(param_1,param_2,0,0);
  return;
}


// ===== 00202680  FUN_00202680 =====

void FUN_00202680(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(0x30);
  FUN_00202674(param_1,pvVar1);
  return;
}


// ===== 002026ac  FUN_002026ac =====

long FUN_002026ac(int *param_1)

{
  long *plVar1;
  long lVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 0;
  }
  if (PTR_pthread_create_0020fcd8 != (undefined *)0x0) {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_002163c8);
  }
  plVar1 = &DAT_002163f0;
  for (lVar2 = DAT_002163f0; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x28)) {
    if (*(int **)(lVar2 + 0x18) == param_1) goto LAB_0020273c;
    plVar1 = (long *)(lVar2 + 0x28);
  }
  plVar1 = &DAT_002163f8;
  while (lVar2 = *plVar1, lVar2 != 0) {
    if ((*(byte *)(lVar2 + 0x20) & 1) == 0) {
      if (*(int **)(lVar2 + 0x18) == param_1) goto LAB_0020273c;
    }
    else if ((int *)**(undefined8 **)(lVar2 + 0x18) == param_1) {
      *plVar1 = *(long *)(lVar2 + 0x28);
      free(*(void **)(lVar2 + 0x18));
      goto LAB_00202790;
    }
    plVar1 = (long *)(lVar2 + 0x28);
  }
  if (PTR_pthread_create_0020fcd8 == (undefined *)0x0) goto LAB_0020278c;
LAB_0020277c:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_002163c8);
  if (lVar2 != 0) {
    return lVar2;
  }
LAB_0020278c:
                    /* WARNING: Subroutine does not return */
  abort();
LAB_0020273c:
  *plVar1 = *(long *)(lVar2 + 0x28);
LAB_00202790:
  if (PTR_pthread_create_0020fcd8 == (undefined *)0x0) {
    return lVar2;
  }
  goto LAB_0020277c;
}


// ===== 002027ac  thunk_FUN_002026ac =====

long thunk_FUN_002026ac(int *param_1)

{
  long *plVar1;
  long lVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 0;
  }
  if (PTR_pthread_create_0020fcd8 != (undefined *)0x0) {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_002163c8);
  }
  plVar1 = &DAT_002163f0;
  for (lVar2 = DAT_002163f0; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x28)) {
    if (*(int **)(lVar2 + 0x18) == param_1) goto LAB_0020273c;
    plVar1 = (long *)(lVar2 + 0x28);
  }
  plVar1 = &DAT_002163f8;
  while (lVar2 = *plVar1, lVar2 != 0) {
    if ((*(byte *)(lVar2 + 0x20) & 1) == 0) {
      if (*(int **)(lVar2 + 0x18) == param_1) goto LAB_0020273c;
    }
    else if ((int *)**(undefined8 **)(lVar2 + 0x18) == param_1) {
      *plVar1 = *(long *)(lVar2 + 0x28);
      free(*(void **)(lVar2 + 0x18));
      goto LAB_00202790;
    }
    plVar1 = (long *)(lVar2 + 0x28);
  }
  if (PTR_pthread_create_0020fcd8 == (undefined *)0x0) goto LAB_0020278c;
LAB_0020277c:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_002163c8);
  if (lVar2 != 0) {
    return lVar2;
  }
LAB_0020278c:
                    /* WARNING: Subroutine does not return */
  abort();
LAB_0020273c:
  *plVar1 = *(long *)(lVar2 + 0x28);
LAB_00202790:
  if (PTR_pthread_create_0020fcd8 == (undefined *)0x0) {
    return lVar2;
  }
  goto LAB_0020277c;
}


// ===== 002027b0  FUN_002027b0 =====

void FUN_002027b0(int *param_1)

{
  void *__ptr;
  
  if (*param_1 != 0) {
    __ptr = (void *)thunk_FUN_002026ac();
    free(__ptr);
    return;
  }
  return;
}


// ===== 002027d4  FUN_002027d4 =====

long FUN_002027d4(ulong param_1,ulong *param_2)

{
  ulong uVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  long local_10;
  undefined4 local_8;
  
  puVar8 = DAT_002163f8;
  if (PTR_pthread_create_0020fcd8 != (undefined *)0x0) {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_002163c8);
    puVar8 = DAT_002163f8;
  }
  for (; puVar8 != (ulong *)0x0; puVar8 = (ulong *)puVar8[5]) {
    if (*puVar8 <= param_1) {
      lVar4 = FUN_00201f88(puVar8,param_1);
      if (lVar4 != 0) goto LAB_00202970;
      break;
    }
  }
  do {
    puVar8 = DAT_002163f0;
    if (DAT_002163f0 == (ulong *)0x0) {
      lVar4 = 0;
      if (PTR_pthread_create_0020fcd8 != (undefined *)0x0) goto LAB_002028b0;
      goto LAB_00202914;
    }
    DAT_002163f0 = (ulong *)DAT_002163f0[5];
    lVar4 = FUN_00201f88(puVar8,param_1);
    puVar7 = (ulong *)&DAT_002163f8;
    for (puVar6 = DAT_002163f8; (puVar6 != (ulong *)0x0 && (*puVar8 <= *puVar6));
        puVar6 = (ulong *)puVar6[5]) {
      puVar7 = puVar6 + 5;
    }
    puVar8[5] = (ulong)puVar6;
    *puVar7 = (ulong)puVar8;
  } while (lVar4 == 0);
LAB_00202970:
  if (PTR_pthread_create_0020fcd8 != (undefined *)0x0) {
LAB_002028b0:
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_002163c8);
    if (lVar4 == 0) {
LAB_00202914:
      local_8 = 1;
      local_28 = 0;
      local_20 = 0;
      local_18 = 0;
      local_10 = 0;
      local_30 = param_1;
      iVar3 = dl_iterate_phdr(FUN_0020183c,&local_30);
      if (iVar3 < 0) {
        return 0;
      }
      if (local_10 == 0) {
        return 0;
      }
      *param_2 = local_28;
      param_2[1] = local_20;
      local_30 = local_18;
      goto LAB_00202968;
    }
  }
  *param_2 = puVar8[1];
  uVar1 = puVar8[4];
  param_2[1] = puVar8[2];
  uVar2 = (ushort)puVar8[4] >> 3 & 0xff;
  if (((byte)uVar1 >> 2 & 1) != 0) {
    uVar2 = FUN_0020182c(lVar4);
  }
  uVar5 = FUN_00201390(uVar2 & 0xff,puVar8);
  FUN_00201450(uVar2 & 0xff,uVar5,lVar4 + 8,&local_30);
  local_10 = lVar4;
LAB_00202968:
  param_2[2] = local_30;
  return local_10;
}


// ===== 00202998  FUN_00202998 =====

void FUN_00202998(void)

{
  int iVar1;
  
  iVar1 = pthread_key_create(&DAT_00216400,FUN_002029d8);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  DAT_00216404 = 1;
  return;
}


// ===== 002029d8  FUN_002029d8 =====

long * FUN_002029d8(long *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  if (*param_1 != 0) {
    *param_1 = *param_1 + -1;
    uVar1 = pthread_setspecific(DAT_00216400,param_1);
    return (long *)(ulong)uVar1;
  }
  lVar3 = param_1[1];
  for (lVar2 = 0; lVar2 != lVar3; lVar2 = lVar2 + 1) {
    if (param_1[lVar2 + 2] != 0) {
      free(*(void **)(param_1[lVar2 + 2] + -8));
    }
  }
  free(param_1);
  return param_1;
}


// ===== 00202a58  FUN_00202a58 =====

void * FUN_00202a58(size_t *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  
  uVar3 = param_1[1];
  if (uVar3 < 9) {
    pvVar1 = malloc(*param_1 + 8);
    if (pvVar1 != (void *)0x0) {
      *(void **)pvVar1 = pvVar1;
      pvVar1 = (void *)((long)pvVar1 + 8);
LAB_00202abc:
      if ((void *)param_1[3] == (void *)0x0) {
        memset(pvVar1,0,*param_1);
      }
      else {
        memcpy(pvVar1,(void *)param_1[3],*param_1);
      }
      return pvVar1;
    }
  }
  else {
    pvVar2 = malloc(uVar3 + *param_1 + 7);
    if (pvVar2 != (void *)0x0) {
      pvVar1 = (void *)((long)pvVar2 + uVar3 + 7 & -uVar3);
      *(void **)((long)pvVar1 - 8) = pvVar2;
      goto LAB_00202abc;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00202af0  FUN_00202af0 =====

int FUN_00202af0(void)

{
  int iVar1;
  
  if (DAT_00216404 != 0) {
    DAT_00216404 = 0;
    iVar1 = pthread_key_delete(DAT_00216400);
    return iVar1;
  }
  return 0x216000;
}


// ===== 00202b10  FUN_00202b10 =====

long FUN_00202b10(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *__ptr;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (PTR_pthread_create_0020fcd8 == (undefined *)0x0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      uVar2 = FUN_00202a58();
      *(undefined8 *)(param_1 + 0x10) = uVar2;
    }
    return *(long *)(param_1 + 0x10);
  }
  uVar4 = *(ulong *)(param_1 + 0x10);
  if (uVar4 == 0) {
    pthread_once((pthread_once_t *)&DAT_00216408,FUN_00202998);
    pthread_mutex_lock((pthread_mutex_t *)&DAT_00216410);
    uVar4 = *(ulong *)(param_1 + 0x10);
    if (uVar4 == 0) {
      uVar4 = DAT_00216438 + 1;
      DAT_00216438 = uVar4;
      *(ulong *)(param_1 + 0x10) = uVar4;
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_00216410);
  }
  __ptr = (undefined8 *)pthread_getspecific(DAT_00216400);
  if (__ptr == (undefined8 *)0x0) {
    __ptr = (undefined8 *)calloc(uVar4 + 0x22,8);
    if (__ptr == (undefined8 *)0x0) {
LAB_00202bc8:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *__ptr = 1;
    __ptr[1] = uVar4 + 0x20;
  }
  else {
    uVar5 = __ptr[1];
    if (uVar4 <= uVar5) goto LAB_00202c3c;
    uVar1 = uVar4 + 0x20;
    if (uVar4 <= uVar5 * 2) {
      uVar1 = uVar5 * 2;
    }
    __ptr = (undefined8 *)realloc(__ptr,(uVar1 + 2) * 8);
    if (__ptr == (undefined8 *)0x0) goto LAB_00202bc8;
    __ptr[1] = uVar1;
    memset(__ptr + uVar5 + 2,0,(uVar1 - uVar5) * 8);
  }
  pthread_setspecific(DAT_00216400,__ptr);
LAB_00202c3c:
  lVar3 = __ptr[uVar4 + 1];
  if (lVar3 == 0) {
    lVar3 = FUN_00202a58(param_1);
    __ptr[uVar4 + 1] = lVar3;
  }
  return lVar3;
}


// ===== 00202c68  FUN_00202c68 =====

void FUN_00202c68(ulong *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  if (*param_1 < param_2) {
    *param_1 = param_2;
    param_1[3] = 0;
  }
  if (param_1[1] < param_3) {
    param_1[1] = param_3;
  }
  if ((param_4 != 0) && (param_2 == *param_1)) {
    param_1[3] = param_4;
  }
  return;
}


// ===== 00202ca4  FUN_00202ca4 =====

void FUN_00202ca4(void)

{
  long in_x9;
  
  FUN_001d400c(*(undefined8 *)(in_x9 + 0x240));
  return;
}


// ===== 00202cb0  FUN_00202cb0 =====

void FUN_00202cb0(void)

{
  (*(code *)PTR_0020fcf0)();
  return;
}


// ===== 00202cd0  <EXTERNAL>::__cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_0020fcf8)();
  return;
}


// ===== 00202ce0  <EXTERNAL>::__cxa_atexit =====

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_0020fd00)();
  return;
}


// ===== 00202cf0  operator.new =====

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_0020fd08)();
  return pvVar1;
}


// ===== 00202d00  <EXTERNAL>::memset =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0020fd10)(__s,__c);
  return pvVar1;
}


// ===== 00202d10  std::__ndk1::__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,int>>>::__emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>> =====

void std::__ndk1::
     __tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,int>>>
     ::
     __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
               (int *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  (*(code *)
    PTR___emplace_unique_key_args<int,std___ndk1_piecewise_construct_t_const&,std___ndk1_tuple<int_const&>,std___ndk1_tuple<>>_0020fd18
  )();
  return;
}


// ===== 00202d20  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign =====

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1)

{
  (*(code *)PTR_assign_0020fd20)();
  return;
}


// ===== 00202d30  rlottie::Animation::loadFromFile =====

void __thiscall
rlottie::Animation::loadFromFile(Animation *this,basic_string_conflict *param_1,map *param_2)

{
  (*(code *)PTR_loadFromFile_0020fd28)();
  return;
}


// ===== 00202d40  rlottie::Animation::~Animation =====

void __thiscall rlottie::Animation::~Animation(Animation *this)

{
  (*(code *)PTR__Animation_0020fd30)();
  return;
}


// ===== 00202d50  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 00202d60  rlottie::Animation::totalFrame =====

void __thiscall rlottie::Animation::totalFrame(Animation *this)

{
  (*(code *)PTR_totalFrame_0020fd40)();
  return;
}


// ===== 00202d70  rlottie::Animation::frameRate =====

void __thiscall rlottie::Animation::frameRate(Animation *this)

{
  (*(code *)PTR_frameRate_0020fd48)();
  return;
}


// ===== 00202d80  LottieInfo::~LottieInfo =====

void __thiscall LottieInfo::~LottieInfo(LottieInfo *this)

{
  (*(code *)PTR__LottieInfo_0020fd50)();
  return;
}


// ===== 00202d90  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator= =====

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
operator=(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
         basic_string_conflict *param_1)

{
  (*(code *)PTR_operator__0020fd58)();
  return;
}


// ===== 00202da0  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string =====

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     basic_string(basic_string_conflict *param_1,ulong param_2,ulong param_3,allocator *param_4)

{
  (*(code *)PTR_basic_string_0020fd60)();
  return;
}


// ===== 00202db0  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append =====

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1)

{
  (*(code *)PTR_append_0020fd68)();
  return;
}


// ===== 00202dc0  <EXTERNAL>::mkdir =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mkdir_0020fd70)((int)__path,__mode);
  return iVar1;
}


// ===== 00202dd0  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert =====

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,char *param_2)

{
  (*(code *)PTR_insert_0020fd78)();
  return;
}


// ===== 00202de0  std::__ndk1::to_string =====

void __thiscall std::__ndk1::to_string(__ndk1 *this,int param_1)

{
  (*(code *)PTR_to_string_0020fd80)(this,param_1);
  return;
}


// ===== 00202df0  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append =====

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2)

{
  (*(code *)PTR_append_0020fd88)();
  return;
}


// ===== 00202e00  <EXTERNAL>::fopen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_0020fd90)();
  return pFVar1;
}


// ===== 00202e10  <EXTERNAL>::fread =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_0020fd98)();
  return sVar1;
}


// ===== 00202e20  <EXTERNAL>::utimensat =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int utimensat(int __fd,char *__path,timespec *__times,int __flags)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_utimensat_0020fda0)(__fd,__path,__times,__flags);
  return iVar1;
}


// ===== 00202e30  <EXTERNAL>::fclose =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_0020fda8)((int)__stream);
  return iVar1;
}


// ===== 00202e40  <EXTERNAL>::__stack_chk_fail =====

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_0020fdb0)();
  return;
}


// ===== 00202e50  operator.delete[] =====

void operator_delete__(void *param_1)

{
  (*(code *)PTR_operator_delete___0020fdb8)();
  return;
}


// ===== 00202e60  rlottie::Animation::loadFromData =====

void __thiscall rlottie::Animation::loadFromData(void)

{
  (*(code *)PTR_loadFromData_0020fdc0)();
  return;
}


// ===== 00202e70  <EXTERNAL>::strlen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0020fdc8)();
  return sVar1;
}


// ===== 00202e80  <EXTERNAL>::memcpy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0020fdd0)();
  return pvVar1;
}


// ===== 00202e90  std::__ndk1::__basic_string_common<true>::__throw_length_error =====

void std::__ndk1::__basic_string_common<true>::__throw_length_error(void)

{
  (*(code *)PTR___throw_length_error_0020fdd8)();
  return;
}


// ===== 00202ea0  rlottie::Animation::setValue =====

void rlottie::Animation::setValue(void)

{
  (*(code *)PTR_setValue_0020fde0)();
  return;
}


// ===== 00202eb0  rlottie::Animation::resetCurrentFrame =====

void __thiscall rlottie::Animation::resetCurrentFrame(Animation *this)

{
  (*(code *)PTR_resetCurrentFrame_0020fde8)();
  return;
}


// ===== 00202ec0  std::__ndk1::mutex::lock =====

void __thiscall std::__ndk1::mutex::lock(mutex *this)

{
  (*(code *)PTR_lock_0020fdf0)();
  return;
}


// ===== 00202ed0  std::__ndk1::condition_variable::wait =====

void __thiscall std::__ndk1::condition_variable::wait(condition_variable *this,unique_lock *param_1)

{
  (*(code *)PTR_wait_0020fdf8)();
  return;
}


// ===== 00202ee0  std::__ndk1::unique_lock<std::__ndk1::mutex>::unlock =====

void __thiscall
std::__ndk1::unique_lock<std::__ndk1::mutex>::unlock(unique_lock<std::__ndk1::mutex> *this)

{
  (*(code *)PTR_unlock_0020fe00)();
  return;
}


// ===== 00202ef0  LZ4_compress_default =====

void LZ4_compress_default(void)

{
  (*(code *)PTR_LZ4_compress_default_0020fe08)();
  return;
}


// ===== 00202f00  <EXTERNAL>::fwrite =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0020fe10)();
  return sVar1;
}


// ===== 00202f10  <EXTERNAL>::fflush =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_0020fe18)((int)__stream);
  return iVar1;
}


// ===== 00202f20  <EXTERNAL>::fileno =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fileno_0020fe20)((int)__stream);
  return iVar1;
}


// ===== 00202f30  <EXTERNAL>::fsync =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fsync(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fsync_0020fe28)(__fd);
  return iVar1;
}


// ===== 00202f40  std::__ndk1::condition_variable::notify_one =====

void __thiscall std::__ndk1::condition_variable::notify_one(condition_variable *this)

{
  (*(code *)PTR_notify_one_0020fe30)();
  return;
}


// ===== 00202f50  std::__ndk1::mutex::unlock =====

void __thiscall std::__ndk1::mutex::unlock(mutex *this)

{
  (*(code *)PTR_unlock_0020fe38)();
  return;
}


// ===== 00202f60  std::__ndk1::__throw_system_error =====

void std::__ndk1::__throw_system_error(int param_1,char *param_2)

{
  (*(code *)PTR___throw_system_error_0020fe40)(param_1);
  return;
}


// ===== 00202f70  std::__ndk1::__thread_struct::__thread_struct =====

void __thiscall std::__ndk1::__thread_struct::__thread_struct(__thread_struct *this)

{
  (*(code *)PTR___thread_struct_0020fe48)();
  return;
}


// ===== 00202f80  <EXTERNAL>::pthread_create =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0020fe50)((int)__newthread);
  return iVar1;
}


// ===== 00202f90  std::__ndk1::thread::~thread =====

void __thiscall std::__ndk1::thread::~thread(thread *this)

{
  (*(code *)PTR__thread_0020fe58)();
  return;
}


// ===== 00202fa0  <EXTERNAL>::fseek =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_0020fe60)((int)__stream,__off,__whence);
  return iVar1;
}


// ===== 00202fb0  LZ4_compressBound =====

void LZ4_compressBound(void)

{
  (*(code *)PTR_LZ4_compressBound_0020fe68)();
  return;
}


// ===== 00202fc0  operator.new[] =====

void * operator_new__(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new___0020fe70)();
  return pvVar1;
}


// ===== 00202fd0  rlottie::Surface::Surface =====

void __thiscall
rlottie::Surface::Surface(Surface *this,uint *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  (*(code *)PTR_Surface_0020fe78)();
  return;
}


// ===== 00202fe0  rlottie::Animation::renderSync =====

void __thiscall
rlottie::Animation::renderSync(Animation *this,ulong param_1,Surface *param_2,bool param_3)

{
  (*(code *)PTR_renderSync_0020fe80)();
  return;
}


// ===== 00202ff0  <EXTERNAL>::fputc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_0020fe88)(__c);
  return iVar1;
}


// ===== 00203000  std::terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
  (*(code *)PTR_terminate_0020fe90)();
  return;
}


// ===== 00203010  <EXTERNAL>::AndroidBitmap_lockPixels =====

void AndroidBitmap_lockPixels(void)

{
  (*(code *)PTR_AndroidBitmap_lockPixels_0020fe98)();
  return;
}


// ===== 00203020  LZ4_decompress_safe =====

void LZ4_decompress_safe(void)

{
  (*(code *)PTR_LZ4_decompress_safe_0020fea0)();
  return;
}


// ===== 00203030  <EXTERNAL>::AndroidBitmap_unlockPixels =====

void AndroidBitmap_unlockPixels(void)

{
  (*(code *)PTR_AndroidBitmap_unlockPixels_0020fea8)();
  return;
}


// ===== 00203040  std::__ndk1::__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,int>>>::__insert_node_at =====

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,int>>>
::__insert_node_at(__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,int>>>
                   *this,__tree_end_node *param_1,__tree_node_base **param_2,
                  __tree_node_base *param_3)

{
  (*(code *)PTR___insert_node_at_0020feb0)();
  return;
}


// ===== 00203050  std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*> =====

void std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
               (__tree_node_base *param_1,__tree_node_base *param_2)

{
  (*(code *)PTR___tree_balance_after_insert<std___ndk1___tree_node_base<void*>*>_0020feb8)();
  return;
}


// ===== 00203060  std::__ndk1::__thread_local_data =====

void std::__ndk1::__thread_local_data(void)

{
  (*(code *)PTR___thread_local_data_0020fec0)();
  return;
}


// ===== 00203070  <EXTERNAL>::pthread_setspecific =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_setspecific(pthread_key_t __key,void *__pointer)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_setspecific_0020fec8)(__key);
  return iVar1;
}


// ===== 00203080  std::__ndk1::__thread_struct::~__thread_struct =====

void __thiscall std::__ndk1::__thread_struct::~__thread_struct(__thread_struct *this)

{
  (*(code *)PTR____thread_struct_0020fed0)();
  return;
}


// ===== 00203090  LZ4_compress_fast_extState =====

void LZ4_compress_fast_extState(void)

{
  (*(code *)PTR_LZ4_compress_fast_extState_0020fed8)();
  return;
}


// ===== 002030a0  <EXTERNAL>::malloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0020fee0)();
  return pvVar1;
}


// ===== 002030b0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0020fee8)();
  return;
}


// ===== 002030c0  <EXTERNAL>::memmove =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0020fef0)();
  return pvVar1;
}


// ===== 002030d0  LZ4_decompress_fast =====

void LZ4_decompress_fast(void)

{
  (*(code *)PTR_LZ4_decompress_fast_0020fef8)();
  return;
}


// ===== 002030e0  <EXTERNAL>::calloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0020ff00)();
  return pvVar1;
}


// ===== 002030f0  LZ4_decompress_safe_forceExtDict =====

void LZ4_decompress_safe_forceExtDict(void)

{
  (*(code *)PTR_LZ4_decompress_safe_forceExtDict_0020ff08)();
  return;
}


// ===== 00203100  LZ4_decompress_safe_withPrefix64k =====

void LZ4_decompress_safe_withPrefix64k(void)

{
  (*(code *)PTR_LZ4_decompress_safe_withPrefix64k_0020ff10)();
  return;
}


// ===== 00203110  LZ4_compress_fast_continue =====

void LZ4_compress_fast_continue(void)

{
  (*(code *)PTR_LZ4_compress_fast_continue_0020ff18)();
  return;
}


// ===== 00203120  std::__ndk1::__shared_weak_count::__release_weak =====

void __thiscall std::__ndk1::__shared_weak_count::__release_weak(__shared_weak_count *this)

{
  (*(code *)PTR___release_weak_0020ff20)();
  return;
}


// ===== 00203130  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string =====

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
basic_string(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
            basic_string_conflict *param_1)

{
  (*(code *)PTR_basic_string_0020ff28)();
  return;
}


// ===== 00203140  std::__ndk1::__vector_base_common<true>::__throw_length_error =====

void std::__ndk1::__vector_base_common<true>::__throw_length_error(void)

{
  (*(code *)PTR___throw_length_error_0020ff30)();
  return;
}


// ===== 00203150  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare =====

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,char *param_3,ulong param_4)

{
  (*(code *)PTR_compare_0020ff38)();
  return;
}


// ===== 00203160  __cxa_guard_acquire =====

void __cxa_guard_acquire(void)

{
  (*(code *)PTR___cxa_guard_acquire_0020ff40)();
  return;
}


// ===== 00203170  __cxa_guard_release =====

void __cxa_guard_release(void)

{
  (*(code *)PTR___cxa_guard_release_0020ff48)();
  return;
}


// ===== 00203180  <EXTERNAL>::abort =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0020ff50)();
  return;
}


// ===== 00203190  <EXTERNAL>::fmodf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float fmodf(float __x,float __y)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_fmodf_0020ff58)();
  return fVar1;
}


// ===== 002031a0  std::__ndk1::ios_base::init =====

void __thiscall std::__ndk1::ios_base::init(ios_base *this,void *param_1)

{
  (*(code *)PTR_init_0020ff60)();
  return;
}


// ===== 002031b0  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf =====

void __thiscall
std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf
          (basic_streambuf<char,std::__ndk1::char_traits<char>> *this)

{
  (*(code *)PTR_basic_streambuf_0020ff68)();
  return;
}


// ===== 002031c0  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf =====

void __thiscall
std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
          (basic_streambuf<char,std::__ndk1::char_traits<char>> *this)

{
  (*(code *)PTR__basic_streambuf_0020ff70)();
  return;
}


// ===== 002031d0  std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream =====

void __thiscall
std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream
          (basic_iostream<char,std::__ndk1::char_traits<char>> *this)

{
  (*(code *)PTR__basic_iostream_0020ff78)();
  return;
}


// ===== 002031e0  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios =====

void __thiscall
std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
          (basic_ios<char,std::__ndk1::char_traits<char>> *this)

{
  (*(code *)PTR__basic_ios_0020ff80)();
  return;
}


// ===== 002031f0  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::sentry::sentry =====

void __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::sentry::sentry
          (sentry *this,basic_istream *param_1,bool param_2)

{
  (*(code *)PTR_sentry_0020ff88)(this,param_1,param_2);
  return;
}


// ===== 00203200  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back =====

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
push_back(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
         char param_1)

{
  (*(code *)PTR_push_back_0020ff90)(this,param_1);
  return;
}


// ===== 00203210  std::__ndk1::ios_base::clear =====

void __thiscall std::__ndk1::ios_base::clear(ios_base *this,uint param_1)

{
  (*(code *)PTR_clear_0020ff98)(this,param_1);
  return;
}


// ===== 00203220  <EXTERNAL>::memcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_0020ffa0)((int)__s1);
  return iVar1;
}


// ===== 00203230  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize =====

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,char param_2)

{
  (*(code *)PTR_resize_0020ffa8)(this,param_1,param_2);
  return;
}


// ===== 00203240  <EXTERNAL>::strrchr =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_0020ffb0)(__s,__c);
  return pcVar1;
}


// ===== 00203250  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::~basic_istream =====

void __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::~basic_istream
          (basic_istream<char,std::__ndk1::char_traits<char>> *this)

{
  (*(code *)PTR__basic_istream_0020ffb8)();
  return;
}


// ===== 00203260  std::__ndk1::locale::use_facet =====

void __thiscall std::__ndk1::locale::use_facet(locale *this,id *param_1)

{
  (*(code *)PTR_use_facet_0020ffc0)();
  return;
}


// ===== 00203270  <EXTERNAL>::fseeko =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseeko(FILE *__stream,__off_t __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseeko_0020ffc8)((int)__stream,__off,__whence);
  return iVar1;
}


// ===== 00203280  <EXTERNAL>::ftello =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off_t ftello(FILE *__stream)

{
  __off_t _Var1;
  
  _Var1 = (*(code *)PTR_ftello_0020ffd0)();
  return _Var1;
}


// ===== 00203290  std::__ndk1::locale::locale =====

void __thiscall std::__ndk1::locale::locale(locale *this,locale *param_1)

{
  (*(code *)PTR_locale_0020ffd8)();
  return;
}


// ===== 002032a0  std::__ndk1::locale::has_facet =====

void __thiscall std::__ndk1::locale::has_facet(locale *this,id *param_1)

{
  (*(code *)PTR_has_facet_0020ffe0)();
  return;
}


// ===== 002032b0  std::__ndk1::locale::~locale =====

void __thiscall std::__ndk1::locale::~locale(locale *this)

{
  (*(code *)PTR__locale_0020ffe8)();
  return;
}


// ===== 002032c0  <EXTERNAL>::powf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float powf(float __x,float __y)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_powf_0020fff0)();
  return fVar1;
}


// ===== 002032d0  <EXTERNAL>::atan2f =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float atan2f(float __y,float __x)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_atan2f_0020fff8)();
  return fVar1;
}


// ===== 002032e0  <EXTERNAL>::sincosf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void sincosf(float __x,float *__sinx,float *__cosx)

{
  (*(code *)PTR_sincosf_00210000)();
  return;
}


// ===== 002032f0  std::__ndk1::__shared_count::~__shared_count =====

void __thiscall std::__ndk1::__shared_count::~__shared_count(__shared_count *this)

{
  (*(code *)PTR____shared_count_00210008)();
  return;
}


// ===== 00203300  <EXTERNAL>::strcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00210010)((int)__s1);
  return iVar1;
}


// ===== 00203310  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare =====

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,char *param_3)

{
  (*(code *)PTR_compare_00210018)();
  return;
}


// ===== 00203320  <EXTERNAL>::memchr =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memchr(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memchr_00210020)(__s,__c);
  return pvVar1;
}


// ===== 00203330  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<< =====

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this,int param_1)

{
  (*(code *)PTR_operator<<_00210028)(this,param_1);
  return;
}


// ===== 00203340  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream =====

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this)

{
  (*(code *)PTR__basic_ostream_00210030)();
  return;
}


// ===== 00203350  <EXTERNAL>::strtol =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_00210038)(__nptr,__endptr,__base);
  return lVar1;
}


// ===== 00203360  <EXTERNAL>::__vsnprintf_chk =====

void __vsnprintf_chk(void)

{
  (*(code *)PTR___vsnprintf_chk_00210040)();
  return;
}


// ===== 00203370  <EXTERNAL>::realloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_00210048)();
  return pvVar1;
}


// ===== 00203380  std::__ndk1::__next_prime =====

void std::__ndk1::__next_prime(ulong param_1)

{
  (*(code *)PTR___next_prime_00210050)();
  return;
}


// ===== 00203390  <EXTERNAL>::dlopen =====

void dlopen(void)

{
  (*(code *)PTR_dlopen_00210058)();
  return;
}


// ===== 002033a0  <EXTERNAL>::dlsym =====

void dlsym(void)

{
  (*(code *)PTR_dlsym_00210060)();
  return;
}


// ===== 002033b0  <EXTERNAL>::dlclose =====

void dlclose(void)

{
  (*(code *)PTR_dlclose_00210068)();
  return;
}


// ===== 002033c0  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<< =====

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this,float param_1)

{
  (*(code *)PTR_operator<<_00210070)();
  return;
}


// ===== 002033d0  std::__ndk1::ios_base::getloc =====

void std::__ndk1::ios_base::getloc(void)

{
  (*(code *)PTR_getloc_00210078)();
  return;
}


// ===== 002033e0  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put =====

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this,char param_1)

{
  (*(code *)PTR_put_00210080)(this,param_1);
  return;
}


// ===== 002033f0  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush =====

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this)

{
  (*(code *)PTR_flush_00210088)();
  return;
}


// ===== 00203400  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry =====

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry
          (sentry *this,basic_ostream *param_1)

{
  (*(code *)PTR_sentry_00210090)();
  return;
}


// ===== 00203410  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry =====

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry(sentry *this)

{
  (*(code *)PTR__sentry_00210098)();
  return;
}


// ===== 00203420  <EXTERNAL>::fprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_002100a0)((int)__stream);
  return iVar1;
}


// ===== 00203430  std::__ndk1::mutex::~mutex =====

void __thiscall std::__ndk1::mutex::~mutex(mutex *this)

{
  (*(code *)PTR__mutex_002100a8)();
  return;
}


// ===== 00203440  std::__ndk1::condition_variable::~condition_variable =====

void __thiscall std::__ndk1::condition_variable::~condition_variable(condition_variable *this)

{
  (*(code *)PTR__condition_variable_002100b0)();
  return;
}


// ===== 00203450  <EXTERNAL>::setjmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setjmp(__jmp_buf_tag *__env)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setjmp_002100b8)((int)__env);
  return iVar1;
}


// ===== 00203460  <EXTERNAL>::longjmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void longjmp(__jmp_buf_tag *__env,int __val)

{
  (*(code *)PTR_longjmp_002100c0)(__env,__val);
  return;
}


// ===== 00203470  <EXTERNAL>::pthread_cond_signal =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_signal(pthread_cond_t *__cond)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_signal_002100c8)((int)__cond);
  return iVar1;
}


// ===== 00203480  __cxa_begin_catch =====

void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_002100d0)();
  return;
}


// ===== 00203490  <EXTERNAL>::pthread_cond_broadcast =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_broadcast(pthread_cond_t *__cond)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_broadcast_002100d8)((int)__cond);
  return iVar1;
}


// ===== 002034a0  <EXTERNAL>::pthread_cond_wait =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_wait_002100e0)((int)__cond);
  return iVar1;
}


// ===== 002034b0  <EXTERNAL>::pthread_cond_timedwait =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_timedwait(pthread_cond_t *__cond,pthread_mutex_t *__mutex,timespec *__abstime)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_timedwait_002100e8)((int)__cond);
  return iVar1;
}


// ===== 002034c0  <EXTERNAL>::pthread_getspecific =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * pthread_getspecific(pthread_key_t __key)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_pthread_getspecific_002100f0)(__key);
  return pvVar1;
}


// ===== 002034d0  std::__ndk1::__thread_struct::notify_all_at_thread_exit =====

void std::__ndk1::__thread_struct::notify_all_at_thread_exit
               (condition_variable *param_1,mutex *param_2)

{
  (*(code *)PTR_notify_all_at_thread_exit_002100f8)();
  return;
}


// ===== 002034e0  <EXTERNAL>::pthread_cond_destroy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_destroy(pthread_cond_t *__cond)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_destroy_00210100)((int)__cond);
  return iVar1;
}


// ===== 002034f0  __cxa_allocate_exception =====

void __cxa_allocate_exception(void)

{
  (*(code *)PTR___cxa_allocate_exception_00210108)();
  return;
}


// ===== 00203500  __cxa_throw =====

void __cxa_throw(void)

{
  (*(code *)PTR___cxa_throw_00210110)();
  return;
}


// ===== 00203510  __cxa_free_exception =====

void __cxa_free_exception(void)

{
  (*(code *)PTR___cxa_free_exception_00210118)();
  return;
}


// ===== 00203520  std::runtime_error::runtime_error =====

void __thiscall std::runtime_error::runtime_error(runtime_error *this,char *param_1)

{
  (*(code *)PTR_runtime_error_00210120)();
  return;
}


// ===== 00203530  std::__ndk1::ios_base::~ios_base =====

void __thiscall std::__ndk1::ios_base::~ios_base(ios_base *this)

{
  (*(code *)PTR__ios_base_00210128)();
  return;
}


// ===== 00203540  std::__ndk1::ios_base::copyfmt =====

void __thiscall std::__ndk1::ios_base::copyfmt(ios_base *this,ios_base *param_1)

{
  (*(code *)PTR_copyfmt_00210130)();
  return;
}


// ===== 00203550  std::__throw_bad_alloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_alloc(void)

{
  (*(code *)PTR___throw_bad_alloc_00210138)();
  return;
}


// ===== 00203560  std::__ndk1::locale::operator= =====

void __thiscall std::__ndk1::locale::operator=(locale *this,locale *param_1)

{
  (*(code *)PTR_operator__00210140)();
  return;
}


// ===== 00203570  std::__ndk1::locale::locale =====

void __thiscall std::__ndk1::locale::locale(locale *this)

{
  (*(code *)PTR_locale_00210148)();
  return;
}


// ===== 00203580  <EXTERNAL>::wmemcpy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

wchar_t * wmemcpy(wchar_t *__s1,wchar_t *__s2,size_t __n)

{
  wchar_t *pwVar1;
  
  pwVar1 = (wchar_t *)(*(code *)PTR_wmemcpy_00210150)();
  return pwVar1;
}


// ===== 00203590  std::__ndk1::ios_base::swap =====

void __thiscall std::__ndk1::ios_base::swap(ios_base *this,ios_base *param_1)

{
  (*(code *)PTR_swap_00210158)();
  return;
}


// ===== 002035a0  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry =====

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry(sentry *this)

{
  (*(code *)PTR__sentry_00210160)();
  return;
}


// ===== 002035b0  __cxa_end_catch =====

void __cxa_end_catch(void)

{
  (*(code *)PTR___cxa_end_catch_00210168)();
  return;
}


// ===== 002035c0  __cxa_rethrow =====

void __cxa_rethrow(void)

{
  (*(code *)PTR___cxa_rethrow_00210170)();
  return;
}


// ===== 002035d0  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::sentry::sentry =====

void __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::sentry::sentry
          (sentry *this,basic_istream *param_1,bool param_2)

{
  (*(code *)PTR_sentry_00210178)(this,param_1,param_2);
  return;
}


// ===== 002035e0  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get =====

void __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get
          (basic_istream<char,std::__ndk1::char_traits<char>> *this)

{
  (*(code *)PTR_get_00210180)();
  return;
}


// ===== 002035f0  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get =====

void __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,char *param_1,long param_2,
          char param_3)

{
  (*(code *)PTR_get_00210188)();
  return;
}


// ===== 00203600  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get =====

void __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,basic_streambuf *param_1,
          char param_2)

{
  (*(code *)PTR_get_00210190)(this,param_1,param_2);
  return;
}


// ===== 00203610  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::getline =====

void __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::getline
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,char *param_1,long param_2,
          char param_3)

{
  (*(code *)PTR_getline_00210198)();
  return;
}


// ===== 00203620  std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush =====

void __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  (*(code *)PTR_flush_002101a0)();
  return;
}


// ===== 00203630  std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::sentry::~sentry =====

void __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::sentry::~sentry(sentry *this)

{
  (*(code *)PTR__sentry_002101a8)();
  return;
}


// ===== 00203640  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::sentry::sentry =====

void __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::sentry::sentry
          (sentry *this,basic_istream *param_1,bool param_2)

{
  (*(code *)PTR_sentry_002101b0)(this,param_1,param_2);
  return;
}


// ===== 00203650  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::get =====

void __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::get
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  (*(code *)PTR_get_002101b8)();
  return;
}


// ===== 00203660  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::get =====

void __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::get
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t *param_1,
          long param_2,wchar_t param_3)

{
  (*(code *)PTR_get_002101c0)();
  return;
}


// ===== 00203670  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::get =====

void __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::get
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,basic_streambuf *param_1,
          wchar_t param_2)

{
  (*(code *)PTR_get_002101c8)(this,param_1,param_2);
  return;
}


// ===== 00203680  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::getline =====

void __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::getline
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t *param_1,
          long param_2,wchar_t param_3)

{
  (*(code *)PTR_getline_002101d0)();
  return;
}


// ===== 00203690  std::uncaught_exception =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::uncaught_exception(void)

{
  (*(code *)PTR_uncaught_exception_002101d8)();
  return;
}


// ===== 002036a0  std::__ndk1::error_category::error_category =====

void __thiscall std::__ndk1::error_category::error_category(error_category *this)

{
  (*(code *)PTR_error_category_002101e0)();
  return;
}


// ===== 002036b0  std::__ndk1::system_error::system_error =====

void __thiscall std::__ndk1::system_error::system_error(void)

{
  (*(code *)PTR_system_error_002101e8)();
  return;
}


// ===== 002036c0  std::__ndk1::system_error::system_error =====

void __thiscall std::__ndk1::system_error::system_error(void)

{
  (*(code *)PTR_system_error_002101f0)();
  return;
}


// ===== 002036d0  std::__ndk1::system_error::~system_error =====

void __thiscall std::__ndk1::system_error::~system_error(system_error *this)

{
  (*(code *)PTR__system_error_002101f8)();
  return;
}


// ===== 002036e0  std::__ndk1::error_category::~error_category =====

void __thiscall std::__ndk1::error_category::~error_category(error_category *this)

{
  (*(code *)PTR__error_category_00210200)();
  return;
}


// ===== 002036f0  __cxa_uncaught_exceptions =====

void __cxa_uncaught_exceptions(void)

{
  (*(code *)PTR___cxa_uncaught_exceptions_00210208)();
  return;
}


// ===== 00203700  __cxa_decrement_exception_refcount =====

void __cxa_decrement_exception_refcount(void)

{
  (*(code *)PTR___cxa_decrement_exception_refcount_00210210)();
  return;
}


// ===== 00203710  __cxa_increment_exception_refcount =====

void __cxa_increment_exception_refcount(void)

{
  (*(code *)PTR___cxa_increment_exception_refcount_00210218)();
  return;
}


// ===== 00203720  __cxa_current_primary_exception =====

void __cxa_current_primary_exception(void)

{
  (*(code *)PTR___cxa_current_primary_exception_00210220)();
  return;
}


// ===== 00203730  std::rethrow_exception =====

void std::rethrow_exception(void)

{
  (*(code *)PTR_rethrow_exception_00210228)();
  return;
}


// ===== 00203740  __cxa_rethrow_primary_exception =====

void __cxa_rethrow_primary_exception(void)

{
  (*(code *)PTR___cxa_rethrow_primary_exception_00210230)();
  return;
}


// ===== 00203750  std::__ndk1::__shared_count::~__shared_count =====

void __thiscall std::__ndk1::__shared_count::~__shared_count(__shared_count *this)

{
  (*(code *)PTR____shared_count_00210238)();
  return;
}


// ===== 00203760  std::__ndk1::__call_once =====

void std::__ndk1::__call_once(ulong *param_1,void *param_2,_func_void_void_ptr *param_3)

{
  (*(code *)PTR___call_once_00210240)();
  return;
}


// ===== 00203770  std::__ndk1::__shared_count::__release_shared =====

void __thiscall std::__ndk1::__shared_count::__release_shared(__shared_count *this)

{
  (*(code *)PTR___release_shared_00210248)();
  return;
}


// ===== 00203780  std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::__do_get_signed<long> =====

void __thiscall
std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__do_get_signed<long>(void)

{
  (*(code *)PTR___do_get_signed<long>_00210250)();
  return;
}


// ===== 00203790  std::__ndk1::__num_get<char>::__stage2_int_prep =====

void __thiscall
std::__ndk1::__num_get<char>::__stage2_int_prep
          (__num_get<char> *this,ios_base *param_1,char *param_2,char *param_3)

{
  (*(code *)PTR___stage2_int_prep_00210258)();
  return;
}


// ===== 002037a0  std::__ndk1::__num_get<char>::__stage2_int_loop =====

void std::__ndk1::__num_get<char>::__stage2_int_loop
               (char param_1,int param_2,char *param_3,char **param_4,uint *param_5,char param_6,
               basic_string_conflict *param_7,uint *param_8,uint **param_9,char *param_10)

{
  (*(code *)PTR___stage2_int_loop_00210260)(param_1,param_2);
  return;
}


// ===== 002037b0  std::__ndk1::__check_grouping =====

void std::__ndk1::__check_grouping
               (basic_string_conflict *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  (*(code *)PTR___check_grouping_00210268)();
  return;
}


// ===== 002037c0  std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::__do_get_signed<long_long> =====

void __thiscall
std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__do_get_signed<long_long>(void)

{
  (*(code *)PTR___do_get_signed<long_long>_00210270)();
  return;
}


// ===== 002037d0  std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::__do_get_unsigned<unsigned_short> =====

void __thiscall
std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__do_get_unsigned<unsigned_short>(void)

{
  (*(code *)PTR___do_get_unsigned<unsigned_short>_00210278)();
  return;
}


// ===== 002037e0  std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::__do_get_unsigned<unsigned_int> =====

void __thiscall
std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__do_get_unsigned<unsigned_int>(void)

{
  (*(code *)PTR___do_get_unsigned<unsigned_int>_00210280)();
  return;
}


// ===== 002037f0  std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::__do_get_unsigned<unsigned_long> =====

void __thiscall
std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__do_get_unsigned<unsigned_long>(void)

{
  (*(code *)PTR___do_get_unsigned<unsigned_long>_00210288)();
  return;
}


// ===== 00203800  std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::__do_get_unsigned<unsigned_long_long> =====

void __thiscall
std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__do_get_unsigned<unsigned_long_long>(void)

{
  (*(code *)PTR___do_get_unsigned<unsigned_long_long>_00210290)();
  return;
}


// ===== 00203810  std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::__do_get_floating_point<float> =====

void __thiscall
std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__do_get_floating_point<float>(void)

{
  (*(code *)PTR___do_get_floating_point<float>_00210298)();
  return;
}


// ===== 00203820  std::__ndk1::__num_get<char>::__stage2_float_prep =====

void __thiscall
std::__ndk1::__num_get<char>::__stage2_float_prep
          (__num_get<char> *this,ios_base *param_1,char *param_2,char *param_3,char *param_4)

{
  (*(code *)PTR___stage2_float_prep_002102a0)();
  return;
}


