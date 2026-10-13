// ===== 00139278  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00139280  FUN_00139280 =====

void FUN_00139280(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pvVar3 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar3 + 8);
  puVar1 = (undefined8 *)pvVar3;
  if (lVar2 - 0xfd0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar3;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  uVar5 = param_2[1];
  uVar4 = *param_2;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0014f2c8;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x43;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar5;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar4;
  return;
}


// ===== 00139320  FUN_00139320 =====

void FUN_00139320(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  size_t __size;
  long lVar3;
  size_t sVar4;
  void *__src;
  
  lVar3 = param_2[1];
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 2U) {
    sVar4 = param_2[2] * 2;
    uVar1 = lVar3 + 0x3e2;
    if (sVar4 < uVar1 || sVar4 - uVar1 == 0) {
      sVar4 = uVar1;
    }
    param_2[2] = sVar4;
    pvVar2 = realloc(pvVar2,sVar4);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
  }
  *(undefined2 *)((long)pvVar2 + lVar3) = 0x7066;
  lVar3 = param_2[1] + 2;
  param_2[1] = lVar3;
  sVar4 = *(size_t *)(param_1 + 0x18);
  if (sVar4 != 0) {
    __src = *(void **)(param_1 + 0x10);
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar3 + sVar4) {
      __size = param_2[2] * 2;
      uVar1 = lVar3 + sVar4 + 0x3e0;
      if (__size < uVar1 || __size - uVar1 == 0) {
        __size = uVar1;
      }
      param_2[2] = __size;
      pvVar2 = realloc(pvVar2,__size);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
    }
    memcpy((void *)((long)pvVar2 + lVar3),__src,sVar4);
    param_2[1] = param_2[1] + sVar4;
  }
  return;
}


// ===== 0013940c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00139414  FUN_00139414 =====

void FUN_00139414(long param_1,undefined8 *param_2)

{
  char cVar1;
  void *pvVar2;
  long lVar3;
  size_t sVar4;
  size_t sVar5;
  long lVar6;
  ulong uVar7;
  void *pvVar8;
  undefined8 *local_40;
  long lStack_38;
  
  lVar3 = param_2[1];
  pvVar2 = (void *)*param_2;
  uVar7 = lVar3 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  local_40 = param_2;
  lStack_38 = param_1;
  if ((ulong)param_2[2] < uVar7) {
    sVar5 = param_2[2] * 2;
    uVar7 = lVar3 + 0x3e1;
    if (sVar5 < uVar7 || sVar5 - uVar7 == 0) {
      sVar5 = uVar7;
    }
    param_2[2] = sVar5;
    pvVar2 = realloc(pvVar2,sVar5);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
    uVar7 = lVar3 + 1;
  }
  param_2[1] = uVar7;
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x28;
  if ((*(char *)(param_1 + 0x30) == '\0') || (*(long *)(param_1 + 0x18) != 0)) {
    if (*(char *)(param_1 + 0x30) == '\0') {
      FUN_001397fc(&local_40);
      lVar3 = param_2[1];
      uVar7 = param_2[2];
      pvVar2 = (void *)*param_2;
      if (uVar7 < lVar3 + 1U) goto LAB_001394fc;
    }
    else {
      FUN_001347c4(*(long *)(param_1 + 0x18),param_2,3,1);
      lVar3 = param_2[1];
      uVar7 = param_2[2];
      pvVar2 = (void *)*param_2;
      if (uVar7 < lVar3 + 1U) {
LAB_001394fc:
        sVar5 = uVar7 * 2;
        uVar7 = lVar3 + 0x3e1;
        if (sVar5 < uVar7 || sVar5 - uVar7 == 0) {
          sVar5 = uVar7;
        }
        param_2[2] = sVar5;
        pvVar2 = realloc(pvVar2,sVar5);
        *param_2 = pvVar2;
        if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar3 = param_2[1];
      }
    }
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x20;
    lVar3 = param_2[1] + 1;
    param_2[1] = lVar3;
    sVar5 = *(size_t *)(param_1 + 0x28);
    if (sVar5 != 0) {
      pvVar8 = *(void **)(param_1 + 0x20);
      pvVar2 = (void *)*param_2;
      if ((ulong)param_2[2] < lVar3 + sVar5) {
        sVar4 = param_2[2] * 2;
        uVar7 = lVar3 + sVar5 + 0x3e0;
        if (sVar4 < uVar7 || sVar4 - uVar7 == 0) {
          sVar4 = uVar7;
        }
        param_2[2] = sVar4;
        pvVar2 = realloc(pvVar2,sVar4);
        *param_2 = pvVar2;
        if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar3 = param_2[1];
      }
      memcpy((void *)((long)pvVar2 + lVar3),pvVar8,sVar5);
      lVar3 = param_2[1] + sVar5;
      param_2[1] = lVar3;
    }
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar3 + 1U) {
      sVar5 = param_2[2] * 2;
      uVar7 = lVar3 + 0x3e1;
      if (sVar5 < uVar7 || sVar5 - uVar7 == 0) {
        sVar5 = uVar7;
      }
      param_2[2] = sVar5;
      pvVar2 = realloc(pvVar2,sVar5);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x20;
    lVar6 = param_2[1];
    uVar7 = param_2[2];
    lVar3 = lVar6 + 1;
    param_2[1] = lVar3;
    pvVar2 = (void *)*param_2;
    if (lVar6 + 4U <= uVar7) goto LAB_00139614;
  }
  else {
    lVar3 = param_2[1];
    uVar7 = param_2[2];
    pvVar2 = (void *)*param_2;
    if (lVar3 + 3U <= uVar7) goto LAB_00139614;
  }
  sVar5 = uVar7 * 2;
  uVar7 = lVar3 + 0x3e3;
  if (sVar5 < uVar7 || sVar5 - uVar7 == 0) {
    sVar5 = uVar7;
  }
  param_2[2] = sVar5;
  pvVar2 = realloc(pvVar2,sVar5);
  *param_2 = pvVar2;
  if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar3 = param_2[1];
LAB_00139614:
  *(undefined1 *)((undefined2 *)((long)pvVar2 + lVar3) + 1) = 0x2e;
  *(undefined2 *)((long)pvVar2 + lVar3) = 0x2e2e;
  lVar6 = param_2[1];
  cVar1 = *(char *)(param_1 + 0x30);
  lVar3 = lVar6 + 3;
  param_2[1] = lVar3;
  if ((cVar1 != '\0') || (*(long *)(param_1 + 0x18) != 0)) {
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar6 + 4U) {
      sVar5 = param_2[2] * 2;
      uVar7 = lVar6 + 0x3e4;
      if (sVar5 < uVar7 || sVar5 - uVar7 == 0) {
        sVar5 = uVar7;
      }
      param_2[2] = sVar5;
      pvVar2 = realloc(pvVar2,sVar5);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x20;
    lVar3 = param_2[1] + 1;
    param_2[1] = lVar3;
    sVar5 = *(size_t *)(param_1 + 0x28);
    if (sVar5 != 0) {
      pvVar8 = *(void **)(param_1 + 0x20);
      pvVar2 = (void *)*param_2;
      if ((ulong)param_2[2] < lVar3 + sVar5) {
        sVar4 = param_2[2] * 2;
        uVar7 = lVar3 + sVar5 + 0x3e0;
        if (sVar4 < uVar7 || sVar4 - uVar7 == 0) {
          sVar4 = uVar7;
        }
        param_2[2] = sVar4;
        pvVar2 = realloc(pvVar2,sVar4);
        *param_2 = pvVar2;
        if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar3 = param_2[1];
      }
      memcpy((void *)((long)pvVar2 + lVar3),pvVar8,sVar5);
      lVar3 = param_2[1] + sVar5;
      param_2[1] = lVar3;
    }
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar3 + 1U) {
      sVar5 = param_2[2] * 2;
      uVar7 = lVar3 + 0x3e1;
      if (sVar5 < uVar7 || sVar5 - uVar7 == 0) {
        sVar5 = uVar7;
      }
      param_2[2] = sVar5;
      pvVar2 = realloc(pvVar2,sVar5);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x20;
    cVar1 = *(char *)(param_1 + 0x30);
    param_2[1] = param_2[1] + 1;
    if (cVar1 == '\0') {
      FUN_001347c4(*(undefined8 *)(param_1 + 0x18),param_2,3,1);
    }
    else {
      FUN_001397fc(&local_40);
    }
  }
  lVar3 = param_2[1];
  pvVar2 = (void *)*param_2;
  uVar7 = lVar3 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar7) {
    sVar5 = param_2[2] * 2;
    uVar7 = lVar3 + 0x3e1;
    if (sVar5 < uVar7 || sVar5 - uVar7 == 0) {
      sVar5 = uVar7;
    }
    param_2[2] = sVar5;
    pvVar2 = realloc(pvVar2,sVar5);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
    uVar7 = lVar3 + 1;
  }
  param_2[1] = uVar7;
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x29;
  return;
}


// ===== 001397f4  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001397fc  FUN_001397fc =====

void FUN_001397fc(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  size_t sVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined **local_48;
  undefined1 local_40;
  undefined2 local_3f;
  undefined8 local_38;
  
  puVar5 = (undefined8 *)*param_1;
  lVar6 = param_1[1];
  lVar2 = puVar5[1];
  pvVar1 = (void *)*puVar5;
  uVar4 = lVar2 + 1;
  *(int *)(puVar5 + 4) = *(int *)(puVar5 + 4) + 1;
  if ((ulong)puVar5[2] < uVar4) {
    sVar3 = puVar5[2] * 2;
    uVar4 = lVar2 + 0x3e1;
    if (sVar3 < uVar4 || sVar3 - uVar4 == 0) {
      sVar3 = uVar4;
    }
    puVar5[2] = sVar3;
    pvVar1 = realloc(pvVar1,sVar3);
    *puVar5 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = puVar5[1];
    uVar4 = lVar2 + 1;
  }
  puVar5[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x28;
  local_38 = *(undefined8 *)(lVar6 + 0x10);
  local_40 = 0x2a;
  local_3f = 0x540;
  local_48 = &PTR_FUN_0014f3a8;
  FUN_0013991c(&local_48,*param_1);
  param_1 = (undefined8 *)*param_1;
  lVar2 = param_1[1];
  pvVar1 = (void *)*param_1;
  uVar4 = lVar2 + 1;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  if ((ulong)param_1[2] < uVar4) {
    sVar3 = param_1[2] * 2;
    uVar4 = lVar2 + 0x3e1;
    if (sVar3 < uVar4 || sVar3 - uVar4 == 0) {
      sVar3 = uVar4;
    }
    param_1[2] = sVar3;
    pvVar1 = realloc(pvVar1,sVar3);
    *param_1 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_1[1];
    uVar4 = lVar2 + 1;
  }
  param_1[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x29;
  return;
}


// ===== 0013991c  FUN_0013991c =====

void FUN_0013991c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  void *pvVar5;
  long lVar6;
  size_t sVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  
  plVar8 = *(long **)(param_1 + 0x10);
  lVar10 = param_2[1];
  uVar2 = *(undefined4 *)(param_2 + 3);
  uVar3 = *(undefined4 *)((long)param_2 + 0x1c);
  lVar6 = *plVar8;
  param_2[3] = 0xffffffffffffffff;
                    /* try { // try from 0013995c to 00139987 has its CatchHandler @ 00139ac4 */
  (**(code **)(lVar6 + 0x20))(plVar8);
  if ((*(ushort *)((long)plVar8 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
  }
  uVar4 = *(uint *)((long)param_2 + 0x1c);
  if (uVar4 == 0xffffffff) {
    lVar10 = param_2[1];
    pvVar5 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar10 + 3U) {
      sVar7 = param_2[2] * 2;
      uVar1 = lVar10 + 0x3e3;
      if (sVar7 < uVar1 || sVar7 - uVar1 == 0) {
        sVar7 = uVar1;
      }
      param_2[2] = sVar7;
      pvVar5 = realloc(pvVar5,sVar7);
      *param_2 = pvVar5;
      if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00139ac0 to 00139ac3 has its CatchHandler @ 00139ac4 */
        abort();
      }
      lVar10 = param_2[1];
    }
    *(undefined1 *)((undefined2 *)((long)pvVar5 + lVar10) + 1) = 0x2e;
    *(undefined2 *)((long)pvVar5 + lVar10) = 0x2e2e;
    lVar10 = param_2[1] + 3;
  }
  else if (uVar4 != 0) {
    if (1 < uVar4) {
      uVar9 = 1;
      do {
        lVar10 = param_2[1];
        pvVar5 = (void *)*param_2;
        if ((ulong)param_2[2] < lVar10 + 2U) {
          sVar7 = param_2[2] * 2;
          uVar1 = lVar10 + 0x3e2;
          if (sVar7 < uVar1 || sVar7 - uVar1 == 0) {
            sVar7 = uVar1;
          }
          param_2[2] = sVar7;
          pvVar5 = realloc(pvVar5,sVar7);
          *param_2 = pvVar5;
          if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00139abc to 00139abf has its CatchHandler @ 00139acc */
            abort();
          }
          lVar10 = param_2[1];
        }
        *(undefined2 *)((long)pvVar5 + lVar10) = 0x202c;
        plVar8 = *(long **)(param_1 + 0x10);
        *(uint *)(param_2 + 3) = uVar9;
        lVar10 = *plVar8;
        param_2[1] = param_2[1] + 2;
                    /* try { // try from 00139a10 to 00139a3f has its CatchHandler @ 00139ad4 */
        (**(code **)(lVar10 + 0x20))(plVar8,param_2);
        if ((*(ushort *)((long)plVar8 + 9) & 0xc0) != 0x40) {
          (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
        }
        uVar9 = uVar9 + 1;
      } while (uVar4 != uVar9);
    }
    goto LAB_00139a9c;
  }
  param_2[1] = lVar10;
LAB_00139a9c:
  *(undefined4 *)(param_2 + 3) = uVar2;
  *(undefined4 *)((long)param_2 + 0x1c) = uVar3;
  return;
}


// ===== 00139adc  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00139ae4  FUN_00139ae4 =====

void FUN_00139ae4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  size_t sVar4;
  ulong uVar5;
  long *plVar6;
  
  lVar3 = param_2[1];
  uVar1 = param_2[2];
  pvVar2 = (void *)*param_2;
  uVar5 = lVar3 + 1;
  if (*(char *)(param_1 + 0x20) == '\0') {
    if (uVar1 < uVar5) {
      sVar4 = uVar1 * 2;
      uVar5 = lVar3 + 0x3e1;
      if (sVar4 < uVar5 || sVar4 - uVar5 == 0) {
        sVar4 = uVar5;
      }
      param_2[2] = sVar4;
      pvVar2 = realloc(pvVar2,sVar4);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
      uVar5 = lVar3 + 1;
    }
    param_2[1] = uVar5;
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x2e;
    plVar6 = *(long **)(param_1 + 0x10);
    (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
    if ((*(ushort *)((long)plVar6 + 9) & 0xc0) != 0x40) {
      (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
    }
  }
  else {
    if (uVar1 < uVar5) {
      sVar4 = uVar1 * 2;
      uVar5 = lVar3 + 0x3e1;
      if (sVar4 < uVar5 || sVar4 - uVar5 == 0) {
        sVar4 = uVar5;
      }
      param_2[2] = sVar4;
      pvVar2 = realloc(pvVar2,sVar4);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
      uVar5 = lVar3 + 1;
    }
    param_2[1] = uVar5;
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x5b;
    plVar6 = *(long **)(param_1 + 0x10);
    (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
    if ((*(ushort *)((long)plVar6 + 9) & 0xc0) != 0x40) {
      (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
    }
    lVar3 = param_2[1];
    pvVar2 = (void *)*param_2;
    uVar5 = lVar3 + 1;
    if ((ulong)param_2[2] < uVar5) {
      sVar4 = param_2[2] * 2;
      uVar5 = lVar3 + 0x3e1;
      if (sVar4 < uVar5 || sVar4 - uVar5 == 0) {
        sVar4 = uVar5;
      }
      param_2[2] = sVar4;
      pvVar2 = realloc(pvVar2,sVar4);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
      uVar5 = lVar3 + 1;
    }
    param_2[1] = uVar5;
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x5d;
  }
  plVar6 = *(long **)(param_1 + 0x18);
  if (1 < *(byte *)(plVar6 + 1) - 0x51) {
    lVar3 = param_2[1];
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar3 + 3U) {
      sVar4 = param_2[2] * 2;
      uVar5 = lVar3 + 0x3e3;
      if (sVar4 < uVar5 || sVar4 - uVar5 == 0) {
        sVar4 = uVar5;
      }
      param_2[2] = sVar4;
      pvVar2 = realloc(pvVar2,sVar4);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
    }
    *(undefined1 *)((undefined2 *)((long)pvVar2 + lVar3) + 1) = 0x20;
    *(undefined2 *)((long)pvVar2 + lVar3) = 0x3d20;
    plVar6 = *(long **)(param_1 + 0x18);
    param_2[1] = param_2[1] + 3;
  }
  (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
  if ((*(ushort *)((long)plVar6 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00139d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
  return;
}


// ===== 00139d28  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00139d30  FUN_00139d30 =====

void FUN_00139d30(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  size_t sVar4;
  long *plVar5;
  
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar3 = lVar2 + 1;
  if ((ulong)param_2[2] < uVar3) {
    sVar4 = param_2[2] * 2;
    uVar3 = lVar2 + 0x3e1;
    if (sVar4 < uVar3 || sVar4 - uVar3 == 0) {
      sVar4 = uVar3;
    }
    param_2[2] = sVar4;
    pvVar1 = realloc(pvVar1,sVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
    uVar3 = lVar2 + 1;
  }
  param_2[1] = uVar3;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x5b;
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if ((*(ushort *)((long)plVar5 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar2 + 5U) {
    sVar4 = param_2[2] * 2;
    uVar3 = lVar2 + 0x3e5;
    if (sVar4 < uVar3 || sVar4 - uVar3 == 0) {
      sVar4 = uVar3;
    }
    param_2[2] = sVar4;
    pvVar1 = realloc(pvVar1,sVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
  }
  *(undefined1 *)((undefined4 *)((long)pvVar1 + lVar2) + 1) = 0x20;
  *(undefined4 *)((long)pvVar1 + lVar2) = 0x2e2e2e20;
  plVar5 = *(long **)(param_1 + 0x18);
  lVar2 = *plVar5;
  param_2[1] = param_2[1] + 5;
  (**(code **)(lVar2 + 0x20))(plVar5,param_2);
  if ((*(ushort *)((long)plVar5 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar3 = lVar2 + 1;
  if ((ulong)param_2[2] < uVar3) {
    sVar4 = param_2[2] * 2;
    uVar3 = lVar2 + 0x3e1;
    if (sVar4 < uVar3 || sVar4 - uVar3 == 0) {
      sVar4 = uVar3;
    }
    param_2[2] = sVar4;
    pvVar1 = realloc(pvVar1,sVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
    uVar3 = lVar2 + 1;
  }
  param_2[1] = uVar3;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x5d;
  plVar5 = *(long **)(param_1 + 0x20);
  if (1 < *(byte *)(plVar5 + 1) - 0x51) {
    lVar2 = param_2[1];
    pvVar1 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar2 + 3U) {
      sVar4 = param_2[2] * 2;
      uVar3 = lVar2 + 0x3e3;
      if (sVar4 < uVar3 || sVar4 - uVar3 == 0) {
        sVar4 = uVar3;
      }
      param_2[2] = sVar4;
      pvVar1 = realloc(pvVar1,sVar4);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = param_2[1];
    }
    *(undefined1 *)((undefined2 *)((long)pvVar1 + lVar2) + 1) = 0x20;
    *(undefined2 *)((long)pvVar1 + lVar2) = 0x3d20;
    plVar5 = *(long **)(param_1 + 0x20);
    param_2[1] = param_2[1] + 3;
  }
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if ((*(ushort *)((long)plVar5 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00139f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  return;
}


// ===== 00139f94  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00139f9c  FUN_00139f9c =====

void FUN_00139f9c(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  size_t sVar6;
  long *plVar7;
  long lVar8;
  bool bVar9;
  
  plVar7 = *(long **)(param_1 + 0x10);
  if ((plVar7 != (long *)0x0) &&
     ((**(code **)(*plVar7 + 0x20))(plVar7,param_2), (*(ushort *)((long)plVar7 + 9) & 0xc0) != 0x40)
     ) {
    (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
  }
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar5 = lVar2 + 1;
  if ((ulong)param_2[2] < uVar5) {
    sVar6 = param_2[2] * 2;
    uVar5 = lVar2 + 0x3e1;
    if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
      sVar6 = uVar5;
    }
    param_2[2] = sVar6;
    pvVar1 = realloc(pvVar1,sVar6);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
    uVar5 = lVar2 + 1;
  }
  param_2[1] = uVar5;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x7b;
  lVar2 = param_2[1];
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar8 = 0;
    bVar9 = true;
    do {
      while( true ) {
        lVar3 = lVar2;
        if (!bVar9) {
          pvVar1 = (void *)*param_2;
          if ((ulong)param_2[2] < lVar2 + 2U) {
            sVar6 = param_2[2] * 2;
            uVar5 = lVar2 + 0x3e2;
            if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
              sVar6 = uVar5;
            }
            param_2[2] = sVar6;
            pvVar1 = realloc(pvVar1,sVar6);
            *param_2 = pvVar1;
            if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            lVar3 = param_2[1];
          }
          *(undefined2 *)((long)pvVar1 + lVar3) = 0x202c;
          lVar3 = param_2[1] + 2;
          param_2[1] = lVar3;
        }
        FUN_001347c4(*(undefined8 *)(*(long *)(param_1 + 0x18) + lVar8 * 8),param_2,0x12,0);
        lVar4 = param_2[1];
        if (lVar3 == lVar4) break;
        bVar9 = false;
        lVar8 = lVar8 + 1;
        lVar2 = lVar4;
        if (lVar8 == *(long *)(param_1 + 0x20)) goto LAB_0013a10c;
      }
      param_2[1] = lVar2;
      lVar8 = lVar8 + 1;
    } while (lVar8 != *(long *)(param_1 + 0x20));
  }
LAB_0013a10c:
  uVar5 = lVar2 + 1;
  pvVar1 = (void *)*param_2;
  if ((ulong)param_2[2] < uVar5) {
    sVar6 = param_2[2] * 2;
    uVar5 = lVar2 + 0x3e1;
    if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
      sVar6 = uVar5;
    }
    param_2[2] = sVar6;
    pvVar1 = realloc(pvVar1,sVar6);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
    uVar5 = lVar2 + 1;
  }
  param_2[1] = uVar5;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x7d;
  return;
}


// ===== 0013a17c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0013a184  FUN_0013a184 =====

void FUN_0013a184(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  size_t sVar3;
  ulong uVar4;
  long *plVar5;
  
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar4 = lVar2 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  if ((ulong)param_2[2] < uVar4) {
    sVar3 = param_2[2] * 2;
    uVar4 = lVar2 + 0x3e1;
    if (sVar3 < uVar4 || sVar3 - uVar4 == 0) {
      sVar3 = uVar4;
    }
    param_2[2] = sVar3;
    pvVar1 = realloc(pvVar1,sVar3);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
    uVar4 = lVar2 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x28;
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if ((*(ushort *)((long)plVar5 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar4 = lVar2 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar4) {
    sVar3 = param_2[2] * 2;
    uVar4 = lVar2 + 0x3e1;
    if (sVar3 < uVar4 || sVar3 - uVar4 == 0) {
      sVar3 = uVar4;
    }
    param_2[2] = sVar3;
    pvVar1 = realloc(pvVar1,sVar3);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
    uVar4 = lVar2 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x29;
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar4 = lVar2 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  if ((ulong)param_2[2] < uVar4) {
    sVar3 = param_2[2] * 2;
    uVar4 = lVar2 + 0x3e1;
    if (sVar3 < uVar4 || sVar3 - uVar4 == 0) {
      sVar3 = uVar4;
    }
    param_2[2] = sVar3;
    pvVar1 = realloc(pvVar1,sVar3);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
    uVar4 = lVar2 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x28;
  plVar5 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if ((*(ushort *)((long)plVar5 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar4 = lVar2 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar4) {
    sVar3 = param_2[2] * 2;
    uVar4 = lVar2 + 0x3e1;
    if (sVar3 < uVar4 || sVar3 - uVar4 == 0) {
      sVar3 = uVar4;
    }
    param_2[2] = sVar3;
    pvVar1 = realloc(pvVar1,sVar3);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
    uVar4 = lVar2 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x29;
  return;
}


// ===== 0013a38c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0013a394  FUN_0013a394 =====

void FUN_0013a394(long param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  size_t sVar7;
  long *plVar8;
  
  lVar4 = param_2[1];
  pvVar3 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar4 + 1U) {
    sVar7 = param_2[2] * 2;
    uVar6 = lVar4 + 0x3e1;
    if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
      sVar7 = uVar6;
    }
    param_2[2] = sVar7;
    pvVar3 = realloc(pvVar3,sVar7);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar4) = 0x20;
  lVar5 = param_2[1];
  cVar1 = *(char *)(param_1 + 0x18);
  lVar4 = lVar5 + 1;
  param_2[1] = lVar4;
  if ((cVar1 != '\0') || (*(long *)(param_1 + 0x20) != 0)) {
    uVar6 = lVar5 + 2;
    pvVar3 = (void *)*param_2;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    if ((ulong)param_2[2] < uVar6) {
      sVar7 = param_2[2] * 2;
      uVar6 = lVar5 + 0x3e2;
      if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
        sVar7 = uVar6;
      }
      param_2[2] = sVar7;
      pvVar3 = realloc(pvVar3,sVar7);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
      uVar6 = lVar4 + 1;
    }
    param_2[1] = uVar6;
    *(undefined1 *)((long)pvVar3 + lVar4) = 0x7b;
  }
  plVar8 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar8 + 0x20))(plVar8,param_2);
  if ((*(ushort *)((long)plVar8 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
  }
  if ((*(char *)(param_1 + 0x18) != '\0') || (*(long *)(param_1 + 0x20) != 0)) {
    lVar4 = param_2[1];
    pvVar3 = (void *)*param_2;
    uVar6 = lVar4 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
    if ((ulong)param_2[2] < uVar6) {
      sVar7 = param_2[2] * 2;
      uVar6 = lVar4 + 0x3e1;
      if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
        sVar7 = uVar6;
      }
      param_2[2] = sVar7;
      pvVar3 = realloc(pvVar3,sVar7);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
      uVar6 = lVar4 + 1;
    }
    param_2[1] = uVar6;
    *(undefined1 *)((long)pvVar3 + lVar4) = 0x7d;
    if (*(char *)(param_1 + 0x18) != '\0') {
      lVar4 = param_2[1];
      pvVar3 = (void *)*param_2;
      if ((ulong)param_2[2] < lVar4 + 9U) {
        sVar7 = param_2[2] * 2;
        uVar6 = lVar4 + 0x3e9;
        if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
          sVar7 = uVar6;
        }
        param_2[2] = sVar7;
        pvVar3 = realloc(pvVar3,sVar7);
        *param_2 = pvVar3;
        if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar4 = param_2[1];
      }
      uVar2 = s_noexcept_00113158._0_8_;
      ((char *)((long)pvVar3 + lVar4))[8] = 't';
      *(undefined8 *)((long)pvVar3 + lVar4) = uVar2;
      param_2[1] = param_2[1] + 9;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      lVar4 = param_2[1];
      pvVar3 = (void *)*param_2;
      if ((ulong)param_2[2] < lVar4 + 4U) {
        sVar7 = param_2[2] * 2;
        uVar6 = lVar4 + 0x3e4;
        if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
          sVar7 = uVar6;
        }
        param_2[2] = sVar7;
        pvVar3 = realloc(pvVar3,sVar7);
        *param_2 = pvVar3;
        if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar4 = param_2[1];
      }
      *(undefined4 *)((long)pvVar3 + lVar4) = 0x203e2d20;
      plVar8 = *(long **)(param_1 + 0x20);
      lVar4 = *plVar8;
      param_2[1] = param_2[1] + 4;
      (**(code **)(lVar4 + 0x20))(plVar8,param_2);
      if ((*(ushort *)((long)plVar8 + 9) & 0xc0) != 0x40) {
        (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
      }
    }
  }
  lVar4 = param_2[1];
  pvVar3 = (void *)*param_2;
  uVar6 = lVar4 + 1;
  if ((ulong)param_2[2] < uVar6) {
    sVar7 = param_2[2] * 2;
    uVar6 = lVar4 + 0x3e1;
    if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
      sVar7 = uVar6;
    }
    param_2[2] = sVar7;
    pvVar3 = realloc(pvVar3,sVar7);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
    uVar6 = lVar4 + 1;
  }
  param_2[1] = uVar6;
  *(undefined1 *)((long)pvVar3 + lVar4) = 0x3b;
  return;
}


// ===== 0013a678  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0013a680  FUN_0013a680 =====

void FUN_0013a680(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  size_t sVar6;
  long *plVar7;
  
  lVar4 = param_2[1];
  pvVar3 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar4 + 10U) {
    sVar6 = param_2[2] * 2;
    uVar5 = lVar4 + 0x3ea;
    if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
      sVar6 = uVar5;
    }
    param_2[2] = sVar6;
    pvVar3 = realloc(pvVar3,sVar6);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
  }
  uVar2 = s_typename_00113b36._0_8_;
  pcVar1 = (char *)((long)pvVar3 + lVar4);
  pcVar1[8] = 'e';
  pcVar1[9] = ' ';
  *(undefined8 *)pcVar1 = uVar2;
  plVar7 = *(long **)(param_1 + 0x10);
  lVar4 = *plVar7;
  param_2[1] = param_2[1] + 10;
  (**(code **)(lVar4 + 0x20))(plVar7,param_2);
  if ((*(ushort *)((long)plVar7 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
  }
  lVar4 = param_2[1];
  pvVar3 = (void *)*param_2;
  uVar5 = lVar4 + 1;
  if ((ulong)param_2[2] < uVar5) {
    sVar6 = param_2[2] * 2;
    uVar5 = lVar4 + 0x3e1;
    if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
      sVar6 = uVar5;
    }
    param_2[2] = sVar6;
    pvVar3 = realloc(pvVar3,sVar6);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
    uVar5 = lVar4 + 1;
  }
  param_2[1] = uVar5;
  *(undefined1 *)((long)pvVar3 + lVar4) = 0x3b;
  return;
}


// ===== 0013a79c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0013a7a4  FUN_0013a7a4 =====

void FUN_0013a7a4(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  size_t sVar6;
  long *plVar7;
  
  lVar4 = param_2[1];
  pvVar3 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar4 + 10U) {
    sVar6 = param_2[2] * 2;
    uVar5 = lVar4 + 0x3ea;
    if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
      sVar6 = uVar5;
    }
    param_2[2] = sVar6;
    pvVar3 = realloc(pvVar3,sVar6);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
  }
  uVar2 = s_requires_00113ef2._0_8_;
  pcVar1 = (char *)((long)pvVar3 + lVar4);
  pcVar1[8] = 's';
  pcVar1[9] = ' ';
  *(undefined8 *)pcVar1 = uVar2;
  plVar7 = *(long **)(param_1 + 0x10);
  lVar4 = *plVar7;
  param_2[1] = param_2[1] + 10;
  (**(code **)(lVar4 + 0x20))(plVar7,param_2);
  if ((*(ushort *)((long)plVar7 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
  }
  lVar4 = param_2[1];
  pvVar3 = (void *)*param_2;
  uVar5 = lVar4 + 1;
  if ((ulong)param_2[2] < uVar5) {
    sVar6 = param_2[2] * 2;
    uVar5 = lVar4 + 0x3e1;
    if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
      sVar6 = uVar5;
    }
    param_2[2] = sVar6;
    pvVar3 = realloc(pvVar3,sVar6);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
    uVar5 = lVar4 + 1;
  }
  param_2[1] = uVar5;
  *(undefined1 *)((long)pvVar3 + lVar4) = 0x3b;
  return;
}


// ===== 0013a8c0  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0013a8c8  FUN_0013a8c8 =====

void FUN_0013a8c8(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  size_t sVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  bool bVar10;
  
  lVar4 = param_2[1];
  pvVar1 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar4 + 8U) {
    sVar6 = param_2[2] * 2;
    uVar3 = lVar4 + 1000;
    if (sVar6 < uVar3 || sVar6 - uVar3 == 0) {
      sVar6 = uVar3;
    }
    param_2[2] = sVar6;
    pvVar1 = realloc(pvVar1,sVar6);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
  }
  *(undefined8 *)((long)pvVar1 + lVar4) = 0x7365726975716572;
  lVar5 = param_2[1];
  lVar7 = *(long *)(param_1 + 0x18);
  lVar4 = lVar5 + 8;
  param_2[1] = lVar4;
  if (lVar7 != 0) {
    uVar3 = lVar5 + 9;
    pvVar1 = (void *)*param_2;
    if ((ulong)param_2[2] < uVar3) {
      sVar6 = param_2[2] * 2;
      uVar3 = lVar5 + 0x3e9;
      if (sVar6 < uVar3 || sVar6 - uVar3 == 0) {
        sVar6 = uVar3;
      }
      param_2[2] = sVar6;
      pvVar1 = realloc(pvVar1,sVar6);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
      uVar3 = lVar4 + 1;
    }
    param_2[1] = uVar3;
    *(undefined1 *)((long)pvVar1 + lVar4) = 0x20;
    lVar4 = param_2[1];
    pvVar1 = (void *)*param_2;
    uVar3 = lVar4 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    if ((ulong)param_2[2] < uVar3) {
      sVar6 = param_2[2] * 2;
      uVar3 = lVar4 + 0x3e1;
      if (sVar6 < uVar3 || sVar6 - uVar3 == 0) {
        sVar6 = uVar3;
      }
      param_2[2] = sVar6;
      pvVar1 = realloc(pvVar1,sVar6);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
      uVar3 = lVar4 + 1;
    }
    param_2[1] = uVar3;
    *(undefined1 *)((long)pvVar1 + lVar4) = 0x28;
    lVar4 = param_2[1];
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar5 = 0;
      bVar10 = true;
      do {
        while( true ) {
          lVar7 = lVar4;
          if (!bVar10) {
            pvVar1 = (void *)*param_2;
            if ((ulong)param_2[2] < lVar4 + 2U) {
              sVar6 = param_2[2] * 2;
              uVar3 = lVar4 + 0x3e2;
              if (sVar6 < uVar3 || sVar6 - uVar3 == 0) {
                sVar6 = uVar3;
              }
              param_2[2] = sVar6;
              pvVar1 = realloc(pvVar1,sVar6);
              *param_2 = pvVar1;
              if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              lVar7 = param_2[1];
            }
            *(undefined2 *)((long)pvVar1 + lVar7) = 0x202c;
            lVar7 = param_2[1] + 2;
            param_2[1] = lVar7;
          }
          FUN_001347c4(*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar5 * 8),param_2,0x12,0);
          lVar2 = param_2[1];
          if (lVar7 == lVar2) break;
          bVar10 = false;
          lVar5 = lVar5 + 1;
          lVar4 = lVar2;
          if (lVar5 == *(long *)(param_1 + 0x18)) goto LAB_0013aab4;
        }
        param_2[1] = lVar4;
        lVar5 = lVar5 + 1;
      } while (lVar5 != *(long *)(param_1 + 0x18));
    }
LAB_0013aab4:
    uVar3 = lVar4 + 1;
    pvVar1 = (void *)*param_2;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
    if ((ulong)param_2[2] < uVar3) {
      sVar6 = param_2[2] * 2;
      uVar3 = lVar4 + 0x3e1;
      if (sVar6 < uVar3 || sVar6 - uVar3 == 0) {
        sVar6 = uVar3;
      }
      param_2[2] = sVar6;
      pvVar1 = realloc(pvVar1,sVar6);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
      uVar3 = lVar4 + 1;
    }
    param_2[1] = uVar3;
    *(undefined1 *)((long)pvVar1 + lVar4) = 0x29;
    lVar4 = param_2[1];
  }
  uVar3 = lVar4 + 1;
  pvVar1 = (void *)*param_2;
  if ((ulong)param_2[2] < uVar3) {
    sVar6 = param_2[2] * 2;
    uVar3 = lVar4 + 0x3e1;
    if (sVar6 < uVar3 || sVar6 - uVar3 == 0) {
      sVar6 = uVar3;
    }
    param_2[2] = sVar6;
    pvVar1 = realloc(pvVar1,sVar6);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
    uVar3 = lVar4 + 1;
  }
  param_2[1] = uVar3;
  *(undefined1 *)((long)pvVar1 + lVar4) = 0x20;
  lVar4 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar3 = lVar4 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  if ((ulong)param_2[2] < uVar3) {
    sVar6 = param_2[2] * 2;
    uVar3 = lVar4 + 0x3e1;
    if (sVar6 < uVar3 || sVar6 - uVar3 == 0) {
      sVar6 = uVar3;
    }
    param_2[2] = sVar6;
    pvVar1 = realloc(pvVar1,sVar6);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
    uVar3 = lVar4 + 1;
  }
  param_2[1] = uVar3;
  *(undefined1 *)((long)pvVar1 + lVar4) = 0x7b;
  if (*(long *)(param_1 + 0x28) != 0) {
    puVar9 = *(undefined8 **)(param_1 + 0x20);
    lVar4 = *(long *)(param_1 + 0x28) << 3;
    do {
      plVar8 = (long *)*puVar9;
      (**(code **)(*plVar8 + 0x20))(plVar8,param_2);
      if ((*(ushort *)((long)plVar8 + 9) & 0xc0) != 0x40) {
        (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
      }
      lVar4 = lVar4 + -8;
      puVar9 = puVar9 + 1;
    } while (lVar4 != 0);
  }
  lVar4 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar3 = lVar4 + 1;
  if ((ulong)param_2[2] < uVar3) {
    sVar6 = param_2[2] * 2;
    uVar3 = lVar4 + 0x3e1;
    if (sVar6 < uVar3 || sVar6 - uVar3 == 0) {
      sVar6 = uVar3;
    }
    param_2[2] = sVar6;
    pvVar1 = realloc(pvVar1,sVar6);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
    uVar3 = lVar4 + 1;
  }
  param_2[1] = uVar3;
  *(undefined1 *)((long)pvVar1 + lVar4) = 0x20;
  lVar4 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar3 = lVar4 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar3) {
    sVar6 = param_2[2] * 2;
    uVar3 = lVar4 + 0x3e1;
    if (sVar6 < uVar3 || sVar6 - uVar3 == 0) {
      sVar6 = uVar3;
    }
    param_2[2] = sVar6;
    pvVar1 = realloc(pvVar1,sVar6);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
    uVar3 = lVar4 + 1;
  }
  param_2[1] = uVar3;
  *(undefined1 *)((long)pvVar1 + lVar4) = 0x7d;
  return;
}


// ===== 0013ace4  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0013acec  FUN_0013acec =====

void FUN_0013acec(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  size_t sVar3;
  size_t sVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  char *pcVar9;
  
  plVar8 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar8 + 0x20))(plVar8);
  if ((*(ushort *)((long)plVar8 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
  }
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar2 + 2U) {
    sVar4 = param_2[2] * 2;
    uVar6 = lVar2 + 0x3e2;
    if (sVar4 < uVar6 || sVar4 - uVar6 == 0) {
      sVar4 = uVar6;
    }
    param_2[2] = sVar4;
    pvVar1 = realloc(pvVar1,sVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
  }
  *(undefined2 *)((long)pvVar1 + lVar2) = 0x3c2e;
  plVar8 = *(long **)(param_1 + 0x10);
  lVar2 = *plVar8;
  param_2[1] = param_2[1] + 2;
  (**(code **)(lVar2 + 0x20))(plVar8,param_2);
  if ((*(ushort *)((long)plVar8 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
  }
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar2 + 0xbU) {
    sVar4 = param_2[2] * 2;
    uVar6 = lVar2 + 0x3eb;
    if (sVar4 < uVar6 || sVar4 - uVar6 == 0) {
      sVar4 = uVar6;
    }
    param_2[2] = sVar4;
    pvVar1 = realloc(pvVar1,sVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
  }
  pcVar9 = (char *)((long)pvVar1 + lVar2);
  *(undefined8 *)pcVar9 = s_at_offset_0011375a._0_8_;
  pcVar9[7] = 's';
  pcVar9[8] = 'e';
  pcVar9[9] = 't';
  pcVar9[10] = ' ';
  lVar5 = param_2[1];
  lVar2 = lVar5 + 0xb;
  param_2[1] = lVar2;
  sVar4 = *(size_t *)(param_1 + 0x28);
  if (sVar4 == 0) {
    pvVar1 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar5 + 0xcU) {
      sVar4 = param_2[2] * 2;
      uVar6 = lVar5 + 0x3ec;
      if (sVar4 < uVar6 || sVar4 - uVar6 == 0) {
        sVar4 = uVar6;
      }
      param_2[2] = sVar4;
      pvVar1 = realloc(pvVar1,sVar4);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = param_2[1];
    }
    *(undefined1 *)((long)pvVar1 + lVar2) = 0x30;
    sVar4 = 1;
  }
  else {
    pcVar9 = *(char **)(param_1 + 0x20);
    uVar6 = param_2[2];
    pvVar1 = (void *)*param_2;
    if (*pcVar9 == 'n') {
      if (uVar6 < lVar5 + 0xcU) {
        sVar4 = uVar6 * 2;
        uVar6 = lVar5 + 0x3ec;
        if (sVar4 < uVar6 || sVar4 - uVar6 == 0) {
          sVar4 = uVar6;
        }
        param_2[2] = sVar4;
        pvVar1 = realloc(pvVar1,sVar4);
        *param_2 = pvVar1;
        if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar2 = param_2[1];
      }
      *(undefined1 *)((long)pvVar1 + lVar2) = 0x2d;
      lVar5 = param_2[1];
      lVar7 = *(long *)(param_1 + 0x28);
      lVar2 = lVar5 + 1;
      sVar4 = lVar7 - 1;
      param_2[1] = lVar2;
      if (sVar4 == 0) goto LAB_0013af78;
      uVar6 = lVar5 + lVar7;
      lVar5 = *(long *)(param_1 + 0x20);
      pvVar1 = (void *)*param_2;
      if ((ulong)param_2[2] < uVar6) {
        sVar3 = param_2[2] * 2;
        uVar6 = uVar6 + 0x3e0;
        if (sVar3 < uVar6 || sVar3 - uVar6 == 0) {
          sVar3 = uVar6;
        }
        param_2[2] = sVar3;
        pvVar1 = realloc(pvVar1,sVar3);
        *param_2 = pvVar1;
        if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar2 = param_2[1];
      }
      pvVar1 = (void *)((long)pvVar1 + lVar2);
      pcVar9 = (char *)(lVar5 + 1);
    }
    else {
      if (uVar6 < lVar2 + sVar4) {
        sVar3 = uVar6 * 2;
        uVar6 = lVar2 + sVar4 + 0x3e0;
        if (sVar3 < uVar6 || sVar3 - uVar6 == 0) {
          sVar3 = uVar6;
        }
        param_2[2] = sVar3;
        pvVar1 = realloc(pvVar1,sVar3);
        *param_2 = pvVar1;
        if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar2 = param_2[1];
      }
      pvVar1 = (void *)((long)pvVar1 + lVar2);
    }
    memcpy(pvVar1,pcVar9,sVar4);
  }
  lVar2 = param_2[1] + sVar4;
  param_2[1] = lVar2;
LAB_0013af78:
  pvVar1 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar2 + 1U) {
    sVar4 = param_2[2] * 2;
    uVar6 = lVar2 + 0x3e1;
    if (sVar4 < uVar6 || sVar4 - uVar6 == 0) {
      sVar4 = uVar6;
    }
    param_2[2] = sVar4;
    pvVar1 = realloc(pvVar1,sVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
  }
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x3e;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 0013aff4  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0013affc  FUN_0013affc =====

void FUN_0013affc(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  size_t sVar6;
  undefined **local_38;
  undefined1 local_30;
  undefined2 local_2f;
  undefined8 local_28;
  
  lVar4 = param_2[1];
  pvVar3 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar4 + 9U) {
    sVar6 = param_2[2] * 2;
    uVar5 = lVar4 + 0x3e9;
    if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
      sVar6 = uVar5;
    }
    param_2[2] = sVar6;
    pvVar3 = realloc(pvVar3,sVar6);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
  }
  uVar2 = s_sizeof____00112cc9._0_8_;
  ((char *)((long)pvVar3 + lVar4))[8] = '.';
  *(undefined8 *)((long)pvVar3 + lVar4) = uVar2;
  lVar1 = param_2[1];
  pvVar3 = (void *)*param_2;
  uVar5 = lVar1 + 10;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  lVar4 = lVar1 + 9;
  param_2[1] = lVar4;
  if ((ulong)param_2[2] < uVar5) {
    sVar6 = param_2[2] * 2;
    uVar5 = lVar1 + 0x3ea;
    if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
      sVar6 = uVar5;
    }
    param_2[2] = sVar6;
    pvVar3 = realloc(pvVar3,sVar6);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
    uVar5 = lVar4 + 1;
  }
  param_2[1] = uVar5;
  *(undefined1 *)((long)pvVar3 + lVar4) = 0x28;
  local_30 = 0x2a;
  local_28 = *(undefined8 *)(param_1 + 0x10);
  local_2f = 0x540;
  local_38 = &PTR_FUN_0014f3a8;
  FUN_0013991c(&local_38,param_2);
  lVar4 = param_2[1];
  pvVar3 = (void *)*param_2;
  uVar5 = lVar4 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar5) {
    sVar6 = param_2[2] * 2;
    uVar5 = lVar4 + 0x3e1;
    if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
      sVar6 = uVar5;
    }
    param_2[2] = sVar6;
    pvVar3 = realloc(pvVar3,sVar6);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
    uVar5 = lVar4 + 1;
  }
  param_2[1] = uVar5;
  *(undefined1 *)((long)pvVar3 + lVar4) = 0x29;
  return;
}


// ===== 0013b174  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0013b17c  FUN_0013b17c =====

void FUN_0013b17c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *__ptr;
  size_t __size;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar3 = 0;
    bVar5 = true;
    lVar4 = param_2[1];
    do {
      while( true ) {
        lVar2 = lVar4;
        if (!bVar5) {
          __ptr = (void *)*param_2;
          if ((ulong)param_2[2] < lVar4 + 2U) {
            __size = param_2[2] * 2;
            uVar1 = lVar4 + 0x3e2;
            if (__size < uVar1 || __size - uVar1 == 0) {
              __size = uVar1;
            }
            param_2[2] = __size;
            __ptr = realloc(__ptr,__size);
            *param_2 = __ptr;
            if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            lVar2 = param_2[1];
          }
          *(undefined2 *)((long)__ptr + lVar2) = 0x202c;
          lVar2 = param_2[1] + 2;
          param_2[1] = lVar2;
        }
        FUN_001347c4(*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar3 * 8),param_2,0x12,0);
        if (lVar2 == param_2[1]) break;
        bVar5 = false;
        lVar3 = lVar3 + 1;
        lVar4 = param_2[1];
        if (lVar3 == *(long *)(param_1 + 0x18)) {
          return;
        }
      }
      param_2[1] = lVar4;
      lVar3 = lVar3 + 1;
    } while (lVar3 != *(long *)(param_1 + 0x18));
  }
  return;
}


// ===== 0013b284  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0013b28c  FUN_0013b28c =====

void FUN_0013b28c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *__ptr;
  long lVar2;
  size_t __size;
  long *plVar3;
  
  lVar2 = param_2[1];
  __ptr = (void *)*param_2;
  if ((ulong)param_2[2] < lVar2 + 6U) {
    __size = param_2[2] * 2;
    uVar1 = lVar2 + 0x3e6;
    if (__size < uVar1 || __size - uVar1 == 0) {
      __size = uVar1;
    }
    param_2[2] = __size;
    __ptr = realloc(__ptr,__size);
    *param_2 = __ptr;
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
  }
  *(undefined2 *)((undefined4 *)((long)__ptr + lVar2) + 1) = 0x2077;
  *(undefined4 *)((long)__ptr + lVar2) = 0x6f726874;
  plVar3 = *(long **)(param_1 + 0x10);
  lVar2 = *plVar3;
  param_2[1] = param_2[1] + 6;
  (**(code **)(lVar2 + 0x20))(plVar3,param_2);
  if ((*(ushort *)((long)plVar3 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0013b35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  return;
}


// ===== 0013b364  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0013b36c  FUN_0013b36c =====

void FUN_0013b36c(long *param_1)

{
  char cVar1;
  long lVar2;
  long *__ptr;
  void *__dest;
  size_t __n;
  long *plVar3;
  long *plVar4;
  
  if ((char *)param_1[1] == (char *)*param_1) {
LAB_0013b3f0:
    FUN_0012f11c();
    return;
  }
  cVar1 = *(char *)*param_1;
  if (cVar1 == 'D') {
    lVar2 = FUN_0012efd8();
    if (lVar2 == 0) {
      return;
    }
    plVar4 = (long *)param_1[0x26];
    if (plVar4 != (long *)param_1[0x27]) goto LAB_0013b4c4;
    plVar3 = (long *)param_1[0x25];
    __n = (long)plVar4 - (long)plVar3;
    if (plVar3 == param_1 + 0x28) {
      __dest = malloc(__n * 2);
      if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (plVar4 != plVar3) {
        memmove(__dest,plVar3,__n);
      }
LAB_0013b4a8:
      param_1[0x25] = (long)__dest;
    }
    else {
      __dest = realloc(plVar3,__n * 2);
      param_1[0x25] = (long)__dest;
      if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
  }
  else {
    if (cVar1 != 'T') goto LAB_0013b3f0;
    lVar2 = FUN_0012ec08();
    if (lVar2 == 0) {
      return;
    }
    plVar4 = (long *)param_1[0x26];
    if (plVar4 != (long *)param_1[0x27]) goto LAB_0013b4c4;
    __ptr = (long *)param_1[0x25];
    plVar3 = param_1 + 0x28;
    __n = (long)plVar4 - (long)__ptr;
    if (__ptr == plVar3) {
      __dest = malloc(__n * 2);
      if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (plVar4 != plVar3) {
        memcpy(__dest,plVar3,__n);
      }
      goto LAB_0013b4a8;
    }
    __dest = realloc(__ptr,__n * 2);
    param_1[0x25] = (long)__dest;
    if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  plVar4 = (long *)((long)__dest + __n);
  param_1[0x27] = (long)((long)__dest + ((long)__n >> 2) * 8);
LAB_0013b4c4:
  param_1[0x26] = (long)(plVar4 + 1);
  *plVar4 = lVar2;
  return;
}


// ===== 0013b4f0  FUN_0013b4f0 =====

undefined8 * FUN_0013b4f0(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  void *pvVar6;
  
  puVar1 = (undefined8 *)FUN_0012e010();
  puVar5 = puVar1;
  if ((((puVar1 != (undefined8 *)0x0) && ((char *)param_1[1] != (char *)*param_1)) &&
      (*(char *)*param_1 == 'I')) &&
     (puVar2 = (undefined8 *)FUN_0012e5c4(param_1,0), puVar5 = puVar2, puVar2 != (undefined8 *)0x0))
  {
    pvVar6 = (void *)param_1[0x266];
    lVar4 = *(long *)((long)pvVar6 + 8);
    puVar3 = (undefined8 *)pvVar6;
    if (lVar4 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar4 = 0;
      *puVar3 = pvVar6;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar4 + 0x20;
    puVar5 = (undefined8 *)((long)puVar3 + lVar4 + 0x10);
    *puVar5 = &PTR_FUN_00150058;
    *(undefined8 **)((long)puVar3 + lVar4 + 0x20) = puVar1;
    *(undefined8 **)((long)puVar3 + lVar4 + 0x28) = puVar2;
    *(undefined1 *)((long)puVar3 + lVar4 + 0x18) = 0x2d;
    *(ushort *)((long)puVar3 + lVar4 + 0x19) =
         *(ushort *)((long)puVar3 + lVar4 + 0x19) & 0xf000 | 0x540;
  }
  return puVar5;
}


// ===== 0013b5c8  FUN_0013b5c8 =====

undefined8 * FUN_0013b5c8(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  void *pvVar9;
  
  pbVar1 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if ((pbVar2 != pbVar1) && (0xfffffff5 < *pbVar1 - 0x3a)) {
    puVar3 = (undefined8 *)FUN_0013b4f0(param_1);
    return puVar3;
  }
  if ((ulong)((long)pbVar2 - (long)pbVar1) < 2) {
LAB_0013b624:
    puVar3 = (undefined8 *)FUN_0013b91c(param_1,0);
  }
  else {
    if (*(short *)pbVar1 == 0x6e64) {
      pbVar1 = pbVar1 + 2;
      *param_1 = (long)pbVar1;
      if ((pbVar2 == pbVar1) || (*pbVar1 - 0x3a < 0xfffffff6)) {
        lVar6 = FUN_0013b36c(param_1);
      }
      else {
        lVar6 = FUN_0013b4f0(param_1);
      }
      if (lVar6 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar9 = (void *)param_1[0x266];
      lVar8 = *(long *)((long)pvVar9 + 8);
      puVar3 = (undefined8 *)pvVar9;
      if (0xfffffffffffff00f < lVar8 - 0xfd0U) {
LAB_0013b768:
        *(long *)((long)puVar3 + 8) = lVar8 + 0x20;
        puVar7 = (undefined8 *)((long)puVar3 + lVar8 + 0x10);
        *puVar7 = &PTR_FUN_0014f9c8;
        *(long *)((long)puVar3 + lVar8 + 0x20) = lVar6;
        *(undefined1 *)((long)puVar3 + lVar8 + 0x18) = 0x32;
        *(ushort *)((long)puVar3 + lVar8 + 0x19) =
             *(ushort *)((long)puVar3 + lVar8 + 0x19) & 0xf000 | 0x540;
        return puVar7;
      }
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 != (undefined8 *)0x0) {
        lVar8 = 0;
        *puVar3 = pvVar9;
        puVar3[1] = 0;
        param_1[0x266] = (long)puVar3;
        goto LAB_0013b768;
      }
      goto LAB_0013b7f8;
    }
    if (*(short *)pbVar1 != 0x6e6f) goto LAB_0013b624;
    *param_1 = (long)(pbVar1 + 2);
    puVar3 = (undefined8 *)FUN_0013b91c(param_1,0);
  }
  puVar7 = puVar3;
  if ((((puVar3 != (undefined8 *)0x0) && ((char *)param_1[1] != (char *)*param_1)) &&
      (*(char *)*param_1 == 'I')) &&
     (puVar4 = (undefined8 *)FUN_0012e5c4(param_1,0), puVar7 = puVar4, puVar4 != (undefined8 *)0x0))
  {
    pvVar9 = (void *)param_1[0x266];
    lVar6 = *(long *)((long)pvVar9 + 8);
    puVar5 = (undefined8 *)pvVar9;
    if (lVar6 - 0xfd0U < 0xfffffffffffff010) {
      puVar5 = (undefined8 *)malloc(0x1000);
      if (puVar5 == (undefined8 *)0x0) {
LAB_0013b7f8:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar6 = 0;
      *puVar5 = pvVar9;
      puVar5[1] = 0;
      param_1[0x266] = (long)puVar5;
    }
    *(long *)((long)puVar5 + 8) = lVar6 + 0x20;
    puVar7 = (undefined8 *)((long)puVar5 + lVar6 + 0x10);
    *puVar7 = &PTR_FUN_00150058;
    *(undefined8 **)((long)puVar5 + lVar6 + 0x20) = puVar3;
    *(undefined8 **)((long)puVar5 + lVar6 + 0x28) = puVar4;
    *(undefined1 *)((long)puVar5 + lVar6 + 0x18) = 0x2d;
    *(ushort *)((long)puVar5 + lVar6 + 0x19) =
         *(ushort *)((long)puVar5 + lVar6 + 0x19) & 0xf000 | 0x540;
  }
  return puVar7;
}


// ===== 0013b7fc  FUN_0013b7fc =====

void FUN_0013b7fc(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *__ptr;
  long lVar2;
  size_t __size;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar3 + 0x20))(plVar3);
  if ((*(ushort *)((long)plVar3 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  }
  lVar2 = param_2[1];
  __ptr = (void *)*param_2;
  if ((ulong)param_2[2] < lVar2 + 2U) {
    __size = param_2[2] * 2;
    uVar1 = lVar2 + 0x3e2;
    if (__size < uVar1 || __size - uVar1 == 0) {
      __size = uVar1;
    }
    param_2[2] = __size;
    __ptr = realloc(__ptr,__size);
    *param_2 = __ptr;
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
  }
  *(undefined2 *)((long)__ptr + lVar2) = 0x3a3a;
  plVar3 = *(long **)(param_1 + 0x18);
  lVar2 = *plVar3;
  param_2[1] = param_2[1] + 2;
  (**(code **)(lVar2 + 0x20))(plVar3,param_2);
  if ((*(ushort *)((long)plVar3 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0013b8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  return;
}


// ===== 0013b900  FUN_0013b900 =====

void FUN_0013b900(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0013b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
  return;
}


// ===== 0013b914  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0013b91c  FUN_0013b91c =====

undefined8 * FUN_0013b91c(long *param_1,undefined1 *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  char cVar5;
  ushort uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  size_t sVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined1 uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  char *__s;
  void *pvVar18;
  
  pbVar2 = (byte *)*param_1;
  pbVar3 = (byte *)param_1[1];
  if ((ulong)((long)pbVar3 - (long)pbVar2) < 2) {
LAB_0013ba94:
    if (pbVar2 == pbVar3) {
      return (undefined8 *)0x0;
    }
    if (*pbVar2 != 0x76) {
      return (undefined8 *)0x0;
    }
    pbVar1 = pbVar2 + 1;
    *param_1 = (long)pbVar1;
    if (pbVar3 == pbVar1) {
      return (undefined8 *)0x0;
    }
    if (9 < *pbVar1 - 0x30) {
      return (undefined8 *)0x0;
    }
    *param_1 = (long)(pbVar2 + 2);
    lVar12 = FUN_0012e010();
    if (lVar12 == 0) {
      return (undefined8 *)0x0;
    }
    pvVar18 = (void *)param_1[0x266];
    lVar7 = *(long *)((long)pvVar18 + 8);
    puVar9 = (undefined8 *)pvVar18;
    if (lVar7 - 0xfd0U < 0xfffffffffffff010) {
      puVar9 = (undefined8 *)malloc(0x1000);
      if (puVar9 == (undefined8 *)0x0) {
LAB_0013bcc4:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar7 = 0;
      *puVar9 = pvVar18;
      puVar9[1] = 0;
      param_1[0x266] = (long)puVar9;
    }
    lVar14 = (long)puVar9 + lVar7;
    ppuVar11 = &PTR_FUN_0014fa38;
    *(long *)((long)puVar9 + 8) = lVar7 + 0x20;
    uVar13 = 4;
  }
  else {
    bVar4 = *pbVar2;
    uVar15 = 0;
    uVar16 = 0x3d;
    do {
      uVar17 = uVar15 + uVar16 >> 1;
      if (((byte)(&DAT_0014e298)[uVar17 * 0x10] < bVar4) ||
         ((bVar4 == (&DAT_0014e298)[uVar17 * 0x10] &&
          ((byte)(&DAT_0014e299)[uVar17 * 0x10] < pbVar2[1])))) {
        uVar15 = uVar17 + 1;
        uVar17 = uVar16;
      }
      uVar16 = uVar17;
    } while (uVar16 != uVar15);
    lVar12 = uVar15 * 0x10;
    if ((bVar4 == (&DAT_0014e298)[lVar12]) && (pbVar2[1] == (&DAT_0014e299)[lVar12])) {
      bVar4 = (&DAT_0014e29a)[lVar12];
      *param_1 = (long)(pbVar2 + 2);
      if (bVar4 == 8) {
        cVar5 = *(char *)((long)param_1 + 0x309);
        lVar12 = param_1[0x61];
        *(undefined1 *)(param_1 + 0x61) = 0;
        *(bool *)((long)param_1 + 0x309) = param_2 != (undefined1 *)0x0 || cVar5 != '\0';
                    /* try { // try from 0013b9f4 to 0013b9fb has its CatchHandler @ 0013bcc8 */
        lVar7 = FUN_0012acb8();
        if (lVar7 == 0) {
          puVar9 = (undefined8 *)0x0;
        }
        else {
          if (param_2 != (undefined1 *)0x0) {
            *param_2 = 1;
          }
          pvVar18 = (void *)param_1[0x266];
          lVar14 = *(long *)((long)pvVar18 + 8);
          puVar8 = (undefined8 *)pvVar18;
          if (lVar14 - 0xfd0U < 0xfffffffffffff010) {
            puVar8 = (undefined8 *)malloc(0x1000);
            if (puVar8 == (undefined8 *)0x0) goto LAB_0013bcc4;
            lVar14 = 0;
            *puVar8 = pvVar18;
            puVar8[1] = 0;
            param_1[0x266] = (long)puVar8;
          }
          *(long *)((long)puVar8 + 8) = lVar14 + 0x20;
          puVar9 = (undefined8 *)((long)puVar8 + lVar14 + 0x10);
          *puVar9 = &PTR_FUN_0014fa38;
          *(long *)((long)puVar8 + lVar14 + 0x20) = lVar7;
          *(undefined1 *)((long)puVar8 + lVar14 + 0x18) = 4;
          *(ushort *)((long)puVar8 + lVar14 + 0x19) =
               *(ushort *)((long)puVar8 + lVar14 + 0x19) & 0xf000 | 0x540;
        }
        *(char *)((long)param_1 + 0x309) = cVar5;
        *(char *)(param_1 + 0x61) = (char)lVar12;
        return puVar9;
      }
      if (10 < bVar4) {
        return (undefined8 *)0x0;
      }
      if ((bVar4 == 4) && (((&DAT_0014e29b)[lVar12] & 1) == 0)) {
        return (undefined8 *)0x0;
      }
      __s = (&PTR_s_operator___0014e2a0)[uVar15 * 2];
      sVar10 = strlen(__s);
      pvVar18 = (void *)param_1[0x266];
      lVar12 = *(long *)((long)pvVar18 + 8);
      puVar9 = (undefined8 *)pvVar18;
      if (lVar12 - 0xfd0U < 0xfffffffffffff010) {
        puVar9 = (undefined8 *)malloc(0x1000);
        if (puVar9 == (undefined8 *)0x0) goto LAB_0013bcc4;
        lVar12 = 0;
        *puVar9 = pvVar18;
        puVar9[1] = 0;
        param_1[0x266] = (long)puVar9;
      }
      *(long *)((long)puVar9 + 8) = lVar12 + 0x20;
      puVar8 = (undefined8 *)((long)puVar9 + lVar12 + 0x10);
      *puVar8 = &PTR_FUN_0014e158;
      uVar6 = *(ushort *)((long)puVar9 + lVar12 + 0x19);
      *(char **)((long)puVar9 + lVar12 + 0x20) = __s;
      *(size_t *)((long)puVar9 + lVar12 + 0x28) = sVar10;
      *(undefined1 *)((long)puVar9 + lVar12 + 0x18) = 8;
      goto LAB_0013bbcc;
    }
    if (*(short *)pbVar2 != 0x696c) goto LAB_0013ba94;
    *param_1 = (long)(pbVar2 + 2);
    lVar12 = FUN_0012e010();
    if (lVar12 == 0) {
      return (undefined8 *)0x0;
    }
    pvVar18 = (void *)param_1[0x266];
    lVar7 = *(long *)((long)pvVar18 + 8);
    puVar9 = (undefined8 *)pvVar18;
    if (lVar7 - 0xfd0U < 0xfffffffffffff010) {
      puVar9 = (undefined8 *)malloc(0x1000);
      if (puVar9 == (undefined8 *)0x0) goto LAB_0013bcc4;
      lVar7 = 0;
      *puVar9 = pvVar18;
      puVar9[1] = 0;
      param_1[0x266] = (long)puVar9;
    }
    lVar14 = (long)puVar9 + lVar7;
    ppuVar11 = &PTR_FUN_0014faa8;
    *(long *)((long)puVar9 + 8) = lVar7 + 0x20;
    uVar13 = 0x14;
  }
  puVar8 = (undefined8 *)(lVar14 + 0x10);
  *puVar8 = ppuVar11;
  uVar6 = *(ushort *)(lVar14 + 0x19);
  *(undefined1 *)(lVar14 + 0x18) = uVar13;
  *(long *)(lVar14 + 0x20) = lVar12;
LAB_0013bbcc:
  *(ushort *)((long)puVar8 + 9) = uVar6 & 0xf000 | 0x540;
  return puVar8;
}


// ===== 0013bcd4  FUN_0013bcd4 =====

void FUN_0013bcd4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *__ptr;
  long lVar2;
  size_t __size;
  
  lVar2 = param_2[1];
  __ptr = (void *)*param_2;
  if ((ulong)param_2[2] < lVar2 + 1U) {
    __size = param_2[2] * 2;
    uVar1 = lVar2 + 0x3e1;
    if (__size < uVar1 || __size - uVar1 == 0) {
      __size = uVar1;
    }
    param_2[2] = __size;
    __ptr = realloc(__ptr,__size);
    *param_2 = __ptr;
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
  }
  *(undefined1 *)((long)__ptr + lVar2) = 0x7e;
  lVar2 = **(long **)(param_1 + 0x10);
  param_2[1] = param_2[1] + 1;
                    /* WARNING: Could not recover jumptable at 0x0013bd60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x20))();
  return;
}


// ===== 0013bd68  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0013bd70  FUN_0013bd70 =====

void FUN_0013bd70(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  void *__ptr;
  long lVar3;
  size_t __size;
  long *plVar4;
  
  lVar3 = param_2[1];
  __ptr = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 9U) {
    __size = param_2[2] * 2;
    uVar1 = lVar3 + 0x3e9;
    if (__size < uVar1 || __size - uVar1 == 0) {
      __size = uVar1;
    }
    param_2[2] = __size;
    __ptr = realloc(__ptr,__size);
    *param_2 = __ptr;
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
  }
  uVar2 = s_operator_00113ce4._0_8_;
  ((char *)((long)__ptr + lVar3))[8] = ' ';
  *(undefined8 *)((long)__ptr + lVar3) = uVar2;
  plVar4 = *(long **)(param_1 + 0x10);
  lVar3 = *plVar4;
  param_2[1] = param_2[1] + 9;
  (**(code **)(lVar3 + 0x20))(plVar4,param_2);
  if ((*(ushort *)((long)plVar4 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0013be44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}


// ===== 0013be4c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0013be54  FUN_0013be54 =====

void FUN_0013be54(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  char *pcVar2;
  void *__ptr;
  long lVar3;
  size_t __size;
  long *plVar4;
  
  lVar3 = param_2[1];
  __ptr = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 0xbU) {
    __size = param_2[2] * 2;
    uVar1 = lVar3 + 0x3eb;
    if (__size < uVar1 || __size - uVar1 == 0) {
      __size = uVar1;
    }
    param_2[2] = __size;
    __ptr = realloc(__ptr,__size);
    *param_2 = __ptr;
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
  }
  pcVar2 = (char *)((long)__ptr + lVar3);
  *(undefined8 *)pcVar2 = s_operator___00113b41._0_8_;
  pcVar2[7] = 'r';
  pcVar2[8] = '\"';
  pcVar2[9] = '\"';
  pcVar2[10] = ' ';
  plVar4 = *(long **)(param_1 + 0x10);
  lVar3 = *plVar4;
  param_2[1] = param_2[1] + 0xb;
  (**(code **)(lVar3 + 0x20))(plVar4,param_2);
  if ((*(ushort *)((long)plVar4 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0013bf2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}


// ===== 0013bf34  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0013bf3c  FUN_0013bf3c =====

void FUN_0013bf3c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *__ptr;
  long lVar2;
  size_t __size;
  long *plVar3;
  
  lVar2 = param_2[1];
  __ptr = (void *)*param_2;
  if ((ulong)param_2[2] < lVar2 + 2U) {
    __size = param_2[2] * 2;
    uVar1 = lVar2 + 0x3e2;
    if (__size < uVar1 || __size - uVar1 == 0) {
      __size = uVar1;
    }
    param_2[2] = __size;
    __ptr = realloc(__ptr,__size);
    *param_2 = __ptr;
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
  }
  *(undefined2 *)((long)__ptr + lVar2) = 0x3a3a;
  plVar3 = *(long **)(param_1 + 0x10);
  lVar2 = *plVar3;
  param_2[1] = param_2[1] + 2;
  (**(code **)(lVar2 + 0x20))(plVar3,param_2);
  if ((*(ushort *)((long)plVar3 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0013bffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  return;
}


// ===== 0013c004  FUN_0013c004 =====

void FUN_0013c004(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0013c014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  return;
}


// ===== 0013c018  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0013c020  FUN_0013c020 =====

undefined8 * FUN_0013c020(long *param_1,undefined8 *param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  ulong uVar9;
  void *pvVar10;
  
  pbVar6 = (byte *)*param_1;
  pbVar3 = (byte *)param_1[1];
  puVar8 = param_2;
  if (pbVar6 != pbVar3) {
    do {
      if (*pbVar6 != 0x42) {
        return puVar8;
      }
      pbVar7 = pbVar6 + 1;
      *param_1 = (long)pbVar7;
      if ((pbVar3 == pbVar7) || (*pbVar7 - 0x3a < 0xfffffff6)) {
        return (undefined8 *)0x0;
      }
      uVar9 = 0;
      pbVar6 = pbVar6 + 2;
      do {
        pbVar7 = pbVar6;
        *param_1 = (long)pbVar7;
        uVar9 = ((ulong)pbVar7[-1] + uVar9 * 10) - 0x30;
        if (pbVar7 == pbVar3) {
          if (uVar9 != 0) {
            return (undefined8 *)0x0;
          }
          goto LAB_0013c134;
        }
        pbVar6 = pbVar7 + 1;
      } while (*pbVar7 - 0x30 < 10);
      uVar4 = (long)pbVar3 - (long)pbVar7;
      pbVar3 = pbVar7;
      if (uVar4 < uVar9) {
        return (undefined8 *)0x0;
      }
LAB_0013c134:
      *param_1 = (long)(pbVar3 + uVar9);
      if (uVar9 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar10 = (void *)param_1[0x266];
      lVar5 = *(long *)((long)pvVar10 + 8);
      puVar2 = (undefined8 *)pvVar10;
      if (lVar5 - 0xfc0U < 0xfffffffffffff010) {
        puVar2 = (undefined8 *)malloc(0x1000);
        if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar5 = 0;
        *puVar2 = pvVar10;
        puVar2[1] = 0;
        param_1[0x266] = (long)puVar2;
      }
      *(long *)((long)puVar2 + 8) = lVar5 + 0x30;
      uVar1 = *(ushort *)((long)puVar8 + 9);
      param_2 = (undefined8 *)((long)puVar2 + lVar5 + 0x10);
      *param_2 = &PTR_FUN_0014fc68;
      *(byte **)((long)puVar2 + lVar5 + 0x28) = pbVar3;
      *(ulong *)((long)puVar2 + lVar5 + 0x30) = uVar9;
      *(undefined8 **)((long)puVar2 + lVar5 + 0x20) = puVar8;
      *(undefined1 *)((long)puVar2 + lVar5 + 0x18) = 9;
      *(ushort *)((long)puVar2 + lVar5 + 0x19) =
           *(ushort *)((long)puVar2 + lVar5 + 0x19) & 0xf000 | uVar1 & 0xfc0;
      pbVar6 = (byte *)*param_1;
      pbVar3 = (byte *)param_1[1];
      puVar8 = param_2;
    } while (pbVar6 != pbVar3);
  }
  return param_2;
}


// ===== 0013c1a0  FUN_0013c1a0 =====

void FUN_0013c1a0(long param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  size_t __size;
  long lVar4;
  ulong uVar5;
  size_t sVar6;
  ulong uVar7;
  char *pcVar8;
  
  lVar4 = param_2[1];
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar4 + 5U) {
    sVar6 = param_2[2] * 2;
    uVar5 = lVar4 + 0x3e5;
    if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
      sVar6 = uVar5;
    }
    param_2[2] = sVar6;
    pvVar2 = realloc(pvVar2,sVar6);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
  }
  *(undefined1 *)((undefined4 *)((long)pvVar2 + lVar4) + 1) = 0x3a;
  *(undefined4 *)((long)pvVar2 + lVar4) = 0x3a647473;
  lVar3 = param_2[1];
  iVar1 = *(int *)(param_1 + 0xc);
  lVar4 = lVar3 + 5;
  param_2[1] = lVar4;
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      pcVar8 = "allocator";
      sVar6 = 9;
      uVar7 = param_2[2];
      uVar5 = lVar3 + 0xe;
      pvVar2 = (void *)*param_2;
      if (uVar5 <= uVar7) goto LAB_0013c328;
    }
    else {
      if (iVar1 != 1) {
        pcVar8 = "basic_string";
        sVar6 = 6;
        goto LAB_0013c2cc;
      }
      pcVar8 = "basic_string";
      sVar6 = 0xc;
      uVar7 = param_2[2];
      uVar5 = lVar3 + 0x11;
      pvVar2 = (void *)*param_2;
      if (uVar5 <= uVar7) goto LAB_0013c328;
    }
  }
  else {
    if (iVar1 == 3) {
      pcVar8 = "basic_istream";
      sVar6 = 7;
    }
    else if (iVar1 == 4) {
      pcVar8 = "basic_ostream";
      sVar6 = 7;
    }
    else {
      pcVar8 = "basic_iostream";
      sVar6 = 8;
    }
LAB_0013c2cc:
    if (*(int *)pcVar8 != 0x69736162 || (short)*(int *)((long)pcVar8 + 4) != 0x5f63) {
                    /* WARNING: Subroutine does not return */
      FUN_00127d24("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0x6aa,
                   &DAT_001128a6);
    }
    pcVar8 = (char *)((long)pcVar8 + 6);
    uVar7 = param_2[2];
    uVar5 = lVar4 + sVar6;
    pvVar2 = (void *)*param_2;
    if (uVar5 <= uVar7) goto LAB_0013c328;
  }
  __size = uVar7 * 2;
  uVar5 = uVar5 + 0x3e0;
  if (__size < uVar5 || __size - uVar5 == 0) {
    __size = uVar5;
  }
  param_2[2] = __size;
  pvVar2 = realloc(pvVar2,__size);
  *param_2 = pvVar2;
  if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar4 = param_2[1];
LAB_0013c328:
  memcpy((void *)((long)pvVar2 + lVar4),pcVar8,sVar6);
  param_2[1] = param_2[1] + sVar6;
  return;
}


// ===== 0013c380  FUN_0013c380 =====

undefined1  [16] FUN_0013c380(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      auVar5._8_8_ = 9;
      auVar5._0_8_ = "allocator";
      return auVar5;
    }
    if (iVar1 == 1) {
      auVar4._8_8_ = 0xc;
      auVar4._0_8_ = "basic_string";
      return auVar4;
    }
    pcVar3 = "basic_string";
    uVar2 = 6;
  }
  else if (iVar1 == 3) {
    pcVar3 = "basic_istream";
    uVar2 = 7;
  }
  else if (iVar1 == 4) {
    pcVar3 = "basic_ostream";
    uVar2 = 7;
  }
  else {
    pcVar3 = "basic_iostream";
    uVar2 = 8;
  }
  if (*(int *)pcVar3 == 0x69736162 && (short)*(int *)((long)pcVar3 + 4) == 0x5f63) {
    auVar6._8_8_ = uVar2;
    auVar6._0_8_ = (char *)((long)pcVar3 + 6);
    return auVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00127d24("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0x6aa,
               &DAT_001128a6);
}


// ===== 0013c45c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0013c464  FUN_0013c464 =====

void FUN_0013c464(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  char *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *pvVar7;
  size_t __size;
  long lVar8;
  long lVar9;
  size_t sVar10;
  undefined1 auVar11 [16];
  
  lVar8 = param_2[1];
  pvVar7 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar8 + 5U) {
    sVar10 = param_2[2] * 2;
    uVar1 = lVar8 + 0x3e5;
    if (sVar10 < uVar1 || sVar10 - uVar1 == 0) {
      sVar10 = uVar1;
    }
    param_2[2] = sVar10;
    pvVar7 = realloc(pvVar7,sVar10);
    *param_2 = pvVar7;
    if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar8 = param_2[1];
  }
  *(undefined1 *)((undefined4 *)((long)pvVar7 + lVar8) + 1) = 0x3a;
  *(undefined4 *)((long)pvVar7 + lVar8) = 0x3a647473;
  lVar8 = *param_1;
  param_2[1] = param_2[1] + 5;
  auVar11 = (**(code **)(lVar8 + 0x30))(param_1);
  sVar10 = auVar11._8_8_;
  if (sVar10 != 0) {
    lVar8 = param_2[1];
    pvVar7 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar8 + sVar10) {
      __size = param_2[2] * 2;
      uVar1 = lVar8 + sVar10 + 0x3e0;
      if (__size < uVar1 || __size - uVar1 == 0) {
        __size = uVar1;
      }
      param_2[2] = __size;
      pvVar7 = realloc(pvVar7,__size);
      *param_2 = pvVar7;
      if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar8 = param_2[1];
    }
    memcpy((void *)((long)pvVar7 + lVar8),auVar11._0_8_,sVar10);
    param_2[1] = param_2[1] + sVar10;
  }
  if (1 < *(uint *)((long)param_1 + 0xc)) {
    lVar8 = param_2[1];
    pvVar7 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar8 + 0x1dU) {
      sVar10 = param_2[2] * 2;
      uVar1 = lVar8 + 0x3fd;
      if (sVar10 < uVar1 || sVar10 - uVar1 == 0) {
        sVar10 = uVar1;
      }
      param_2[2] = sVar10;
      pvVar7 = realloc(pvVar7,sVar10);
      *param_2 = pvVar7;
      if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar8 = param_2[1];
    }
    uVar6 = s_<char,_std::char_traits<char>_001133e3._21_8_;
    uVar5 = s_<char,_std::char_traits<char>_001133e3._0_8_;
    pcVar2 = (char *)((long)pvVar7 + lVar8);
    uVar4 = CONCAT53(s_<char,_std::char_traits<char>_001133e3._16_5_,
                     s_<char,_std::char_traits<char>_001133e3._13_3_);
    *(ulong *)(pcVar2 + 8) =
         CONCAT35(s_<char,_std::char_traits<char>_001133e3._13_3_,
                  s_<char,_std::char_traits<char>_001133e3._8_5_);
    *(undefined8 *)pcVar2 = uVar5;
    *(undefined8 *)(pcVar2 + 0x15) = uVar6;
    *(undefined8 *)(pcVar2 + 0xd) = uVar4;
    lVar9 = param_2[1];
    iVar3 = *(int *)((long)param_1 + 0xc);
    lVar8 = lVar9 + 0x1d;
    param_2[1] = lVar8;
    if (iVar3 == 2) {
      pvVar7 = (void *)*param_2;
      if ((ulong)param_2[2] < lVar9 + 0x33U) {
        sVar10 = param_2[2] * 2;
        uVar1 = lVar9 + 0x413;
        if (sVar10 < uVar1 || sVar10 - uVar1 == 0) {
          sVar10 = uVar1;
        }
        param_2[2] = sVar10;
        pvVar7 = realloc(pvVar7,sVar10);
        *param_2 = pvVar7;
        if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar8 = param_2[1];
      }
      uVar5 = s___std__allocator<char>_00113a67._0_8_;
      pcVar2 = (char *)((long)pvVar7 + lVar8);
      uVar4 = CONCAT62(s___std__allocator<char>_00113a67._16_6_,
                       s___std__allocator<char>_00113a67._14_2_);
      *(ulong *)(pcVar2 + 8) =
           CONCAT26(s___std__allocator<char>_00113a67._14_2_,s___std__allocator<char>_00113a67._8_6_
                   );
      *(undefined8 *)pcVar2 = uVar5;
      *(undefined8 *)(pcVar2 + 0xe) = uVar4;
      lVar8 = param_2[1] + 0x16;
      param_2[1] = lVar8;
    }
    pvVar7 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar8 + 1U) {
      sVar10 = param_2[2] * 2;
      uVar1 = lVar8 + 0x3e1;
      if (sVar10 < uVar1 || sVar10 - uVar1 == 0) {
        sVar10 = uVar1;
      }
      param_2[2] = sVar10;
      pvVar7 = realloc(pvVar7,sVar10);
      *param_2 = pvVar7;
      if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar8 = param_2[1];
    }
    *(undefined1 *)((long)pvVar7 + lVar8) = 0x3e;
    param_2[1] = param_2[1] + 1;
  }
  return;
}


// ===== 0013c6a0  FUN_0013c6a0 =====

undefined1  [16] FUN_0013c6a0(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = *(undefined8 *)(&DAT_001158a0 + (long)*(int *)(param_1 + 0xc) * 8);
  auVar1._0_8_ = &DAT_001158d0 + *(int *)(&DAT_001158d0 + (long)*(int *)(param_1 + 0xc) * 4);
  return auVar1;
}


// ===== 0013c6c8  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0013c6d0  FUN_0013c6d0 =====

void FUN_0013c6d0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  size_t __size;
  size_t sVar4;
  void *__src;
  
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  lVar3 = param_2[1];
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 5U) {
    sVar4 = param_2[2] * 2;
    uVar1 = lVar3 + 0x3e5;
    if (sVar4 < uVar1 || sVar4 - uVar1 == 0) {
      sVar4 = uVar1;
    }
    param_2[2] = sVar4;
    pvVar2 = realloc(pvVar2,sVar4);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
  }
  *(undefined1 *)((undefined4 *)((long)pvVar2 + lVar3) + 1) = 0x3a;
  *(undefined4 *)((long)pvVar2 + lVar3) = 0x6962615b;
  lVar3 = param_2[1] + 5;
  param_2[1] = lVar3;
  sVar4 = *(size_t *)(param_1 + 0x20);
  if (sVar4 != 0) {
    __src = *(void **)(param_1 + 0x18);
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar3 + sVar4) {
      __size = param_2[2] * 2;
      uVar1 = lVar3 + sVar4 + 0x3e0;
      if (__size < uVar1 || __size - uVar1 == 0) {
        __size = uVar1;
      }
      param_2[2] = __size;
      pvVar2 = realloc(pvVar2,__size);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
    }
    memcpy((void *)((long)pvVar2 + lVar3),__src,sVar4);
    lVar3 = param_2[1] + sVar4;
    param_2[1] = lVar3;
  }
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 1U) {
    sVar4 = param_2[2] * 2;
    uVar1 = lVar3 + 0x3e1;
    if (sVar4 < uVar1 || sVar4 - uVar1 == 0) {
      sVar4 = uVar1;
    }
    param_2[2] = sVar4;
    pvVar2 = realloc(pvVar2,sVar4);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x5d;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 0013c824  FUN_0013c824 =====

void FUN_0013c824(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0013c834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  return;
}


// ===== 0013c838  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0013c840  FUN_0013c840 =====

void FUN_0013c840(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  size_t sVar6;
  long lVar7;
  bool bVar8;
  
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar5 = lVar2 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  if ((ulong)param_2[2] < uVar5) {
    sVar6 = param_2[2] * 2;
    uVar5 = lVar2 + 0x3e1;
    if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
      sVar6 = uVar5;
    }
    param_2[2] = sVar6;
    pvVar1 = realloc(pvVar1,sVar6);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
    uVar5 = lVar2 + 1;
  }
  param_2[1] = uVar5;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x5b;
  lVar2 = param_2[1];
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar7 = 0;
    bVar8 = true;
    do {
      while( true ) {
        lVar3 = lVar2;
        if (!bVar8) {
          pvVar1 = (void *)*param_2;
          if ((ulong)param_2[2] < lVar2 + 2U) {
            sVar6 = param_2[2] * 2;
            uVar5 = lVar2 + 0x3e2;
            if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
              sVar6 = uVar5;
            }
            param_2[2] = sVar6;
            pvVar1 = realloc(pvVar1,sVar6);
            *param_2 = pvVar1;
            if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            lVar3 = param_2[1];
          }
          *(undefined2 *)((long)pvVar1 + lVar3) = 0x202c;
          lVar3 = param_2[1] + 2;
          param_2[1] = lVar3;
        }
        FUN_001347c4(*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar7 * 8),param_2,0x12,0);
        lVar4 = param_2[1];
        if (lVar3 == lVar4) break;
        bVar8 = false;
        lVar7 = lVar7 + 1;
        lVar2 = lVar4;
        if (lVar7 == *(long *)(param_1 + 0x18)) goto LAB_0013c97c;
      }
      param_2[1] = lVar2;
      lVar7 = lVar7 + 1;
    } while (lVar7 != *(long *)(param_1 + 0x18));
  }
LAB_0013c97c:
  uVar5 = lVar2 + 1;
  pvVar1 = (void *)*param_2;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar5) {
    sVar6 = param_2[2] * 2;
    uVar5 = lVar2 + 0x3e1;
    if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
      sVar6 = uVar5;
    }
    param_2[2] = sVar6;
    pvVar1 = realloc(pvVar1,sVar6);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
    uVar5 = lVar2 + 1;
  }
  param_2[1] = uVar5;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x5d;
  return;
}


// ===== 0013c9f8  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0013ca00  FUN_0013ca00 =====

void FUN_0013ca00(long param_1,undefined8 *param_2,char param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar4 + 8);
  puVar1 = (undefined8 *)pvVar4;
  if (lVar2 - 0xfd0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  uVar3 = *param_2;
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0014fd48;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x31;
  *(bool *)((long)puVar1 + lVar2 + 0x28) = param_3 != '\0';
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined4 *)((long)puVar1 + lVar2 + 0x2c) = param_4;
  return;
}


// ===== 0013cac0  FUN_0013cac0 =====

void FUN_0013cac0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  size_t sVar3;
  size_t __size;
  long lVar4;
  undefined1 auVar5 [16];
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    lVar4 = param_2[1];
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar4 + 1U) {
      sVar3 = param_2[2] * 2;
      uVar1 = lVar4 + 0x3e1;
      if (sVar3 < uVar1 || sVar3 - uVar1 == 0) {
        sVar3 = uVar1;
      }
      param_2[2] = sVar3;
      pvVar2 = realloc(pvVar2,sVar3);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar4) = 0x7e;
    param_2[1] = param_2[1] + 1;
  }
  auVar5 = (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  sVar3 = auVar5._8_8_;
  if (sVar3 != 0) {
    lVar4 = param_2[1];
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar4 + sVar3) {
      __size = param_2[2] * 2;
      uVar1 = lVar4 + sVar3 + 0x3e0;
      if (__size < uVar1 || __size - uVar1 == 0) {
        __size = uVar1;
      }
      param_2[2] = __size;
      pvVar2 = realloc(pvVar2,__size);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
    }
    memcpy((void *)((long)pvVar2 + lVar4),auVar5._0_8_,sVar3);
    param_2[1] = param_2[1] + sVar3;
  }
  return;
}


// ===== 0013cbc4  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0013cbcc  FUN_0013cbcc =====

void FUN_0013cbcc(long param_1,undefined8 *param_2)

{
  void *__ptr;
  long lVar1;
  size_t __size;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar3 + 0x20))(plVar3);
  if ((*(ushort *)((long)plVar3 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  }
  lVar1 = param_2[1];
  __ptr = (void *)*param_2;
  uVar2 = lVar1 + 1;
  if ((ulong)param_2[2] < uVar2) {
    __size = param_2[2] * 2;
    uVar2 = lVar1 + 0x3e1;
    if (__size < uVar2 || __size - uVar2 == 0) {
      __size = uVar2;
    }
    param_2[2] = __size;
    __ptr = realloc(__ptr,__size);
    *param_2 = __ptr;
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar1 = param_2[1];
    uVar2 = lVar1 + 1;
  }
  param_2[1] = uVar2;
  *(undefined1 *)((long)__ptr + lVar1) = 0x40;
  plVar3 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar3 + 0x20))(plVar3,param_2);
  if ((*(ushort *)((long)plVar3 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0013ccc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  return;
}


// ===== 0013cccc  FUN_0013cccc =====

void FUN_0013cccc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0013ccdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
  return;
}


// ===== 0013cce0  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0013cce8  FUN_0013cce8 =====

void FUN_0013cce8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  void *__ptr;
  long lVar3;
  size_t __size;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar4 + 0x20))(plVar4);
  if ((*(ushort *)((long)plVar4 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  }
  lVar3 = param_2[1];
  __ptr = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 9U) {
    __size = param_2[2] * 2;
    uVar1 = lVar3 + 0x3e9;
    if (__size < uVar1 || __size - uVar1 == 0) {
      __size = uVar1;
    }
    param_2[2] = __size;
    __ptr = realloc(__ptr,__size);
    *param_2 = __ptr;
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
  }
  uVar2 = s___friend_00112701._0_8_;
  ((char *)((long)__ptr + lVar3))[8] = ' ';
  *(undefined8 *)((long)__ptr + lVar3) = uVar2;
  plVar4 = *(long **)(param_1 + 0x18);
  lVar3 = *plVar4;
  param_2[1] = param_2[1] + 9;
  (**(code **)(lVar3 + 0x20))(plVar4,param_2);
  if ((*(ushort *)((long)plVar4 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0013cdf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}


// ===== 0013ce00  FUN_0013ce00 =====

void FUN_0013ce00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0013ce10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
  return;
}


// ===== 0013ce14  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0013ce1c  FUN_0013ce1c =====

void FUN_0013ce1c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *__ptr;
  long lVar2;
  size_t __size;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar3 + 0x20))(plVar3);
  if ((*(ushort *)((long)plVar3 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  }
  lVar2 = param_2[1];
  __ptr = (void *)*param_2;
  if ((ulong)param_2[2] < lVar2 + 2U) {
    __size = param_2[2] * 2;
    uVar1 = lVar2 + 0x3e2;
    if (__size < uVar1 || __size - uVar1 == 0) {
      __size = uVar1;
    }
    param_2[2] = __size;
    __ptr = realloc(__ptr,__size);
    *param_2 = __ptr;
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
  }
  *(undefined2 *)((long)__ptr + lVar2) = 0x3a3a;
  plVar3 = *(long **)(param_1 + 0x18);
  lVar2 = *plVar3;
  param_2[1] = param_2[1] + 2;
  (**(code **)(lVar2 + 0x20))(plVar3,param_2);
  if ((*(ushort *)((long)plVar3 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0013cf18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  return;
}


// ===== 0013cf20  FUN_0013cf20 =====

void FUN_0013cf20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0013cf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
  return;
}


// ===== 0013cf34  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0013cf3c  FUN_0013cf3c =====

byte * FUN_0013cf3c(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  if (param_1 != param_2) {
    if (*param_1 == 0x5f) {
      if (param_1 + 1 != param_2) {
        uVar2 = (uint)param_1[1];
        if (0xfffffff5 < uVar2 - 0x3a) {
          return param_1 + 2;
        }
        if (uVar2 == 0x5f) {
          for (pbVar3 = param_1 + 2; pbVar3 != param_2; pbVar3 = pbVar3 + 1) {
            if (*pbVar3 - 0x3a < 0xfffffff6) {
              if (*pbVar3 == 0x5f) {
                param_1 = pbVar3 + 1;
              }
              return param_1;
            }
          }
        }
      }
    }
    else if (0xfffffff5 < *param_1 - 0x3a) {
      pbVar3 = param_1 + 1;
      do {
        if (pbVar3 == param_2) {
          return param_2;
        }
        bVar1 = *pbVar3;
        pbVar3 = pbVar3 + 1;
      } while (0xfffffff5 < bVar1 - 0x3a);
    }
  }
  return param_1;
}


// ===== 0013cfec  FUN_0013cfec =====

undefined8 * FUN_0013cfec(long param_1,char *param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar5 + 8);
  puVar1 = (undefined8 *)pvVar5;
  if (lVar3 - 0xfd0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = 0;
    *puVar1 = pvVar5;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar3 + 0x20;
  sVar2 = strlen(param_2);
  puVar4 = (undefined8 *)((long)puVar1 + lVar3 + 0x10);
  *puVar4 = &PTR_FUN_0014e158;
  *(undefined1 *)((long)puVar1 + lVar3 + 0x18) = 8;
  *(char **)((long)puVar1 + lVar3 + 0x20) = param_2;
  *(size_t *)((long)puVar1 + lVar3 + 0x28) = sVar2;
  *(ushort *)((long)puVar1 + lVar3 + 0x19) =
       *(ushort *)((long)puVar1 + lVar3 + 0x19) & 0xf000 | 0x540;
  return puVar4;
}


// ===== 0013d094  FUN_0013d094 =====

void FUN_0013d094(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar5 + 8);
  puVar1 = (undefined8 *)pvVar5;
  if (lVar2 - 0xfd0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar5;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0014ff08;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x1a;
  uVar3 = *param_2;
  uVar4 = *param_3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar4;
  return;
}


// ===== 0013d13c  FUN_0013d13c =====

void FUN_0013d13c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *__ptr;
  long lVar2;
  size_t __size;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar3 + 0x20))(plVar3);
  if ((*(ushort *)((long)plVar3 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  }
  lVar2 = param_2[1];
  __ptr = (void *)*param_2;
  if ((ulong)param_2[2] < lVar2 + 2U) {
    __size = param_2[2] * 2;
    uVar1 = lVar2 + 0x3e2;
    if (__size < uVar1 || __size - uVar1 == 0) {
      __size = uVar1;
    }
    param_2[2] = __size;
    __ptr = realloc(__ptr,__size);
    *param_2 = __ptr;
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
  }
  *(undefined2 *)((long)__ptr + lVar2) = 0x3a3a;
  plVar3 = *(long **)(param_1 + 0x18);
  lVar2 = *plVar3;
  param_2[1] = param_2[1] + 2;
  (**(code **)(lVar2 + 0x20))(plVar3,param_2);
  if ((*(ushort *)((long)plVar3 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0013d238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  return;
}


// ===== 0013d240  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0013d248  FUN_0013d248 =====

ulong FUN_0013d248(long param_1,long param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  
  if (*(int *)(param_2 + 0x1c) == -1) {
    lVar4 = *(long *)(param_1 + 0x18);
    uVar3 = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = (int)lVar4;
    if (lVar4 == 0) {
      return 0;
    }
  }
  else {
    uVar3 = (ulong)*(uint *)(param_2 + 0x18);
    if (*(ulong *)(param_1 + 0x18) <= uVar3) {
      return 0;
    }
  }
  puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x10) + uVar3 * 8);
  bVar1 = *(byte *)((long)puVar2 + 9);
  if ((bVar1 & 0xc0) != 0x80) {
    return (ulong)(bVar1 < 0x40);
  }
                    /* WARNING: Could not recover jumptable at 0x0013d288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)*puVar2)();
  return uVar3;
}


// ===== 0013d2b4  FUN_0013d2b4 =====

ulong FUN_0013d2b4(long param_1,long param_2)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  if (*(int *)(param_2 + 0x1c) == -1) {
    lVar4 = *(long *)(param_1 + 0x18);
    uVar3 = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = (int)lVar4;
    if (lVar4 == 0) {
      return 0;
    }
  }
  else {
    uVar3 = (ulong)*(uint *)(param_2 + 0x18);
    if (*(ulong *)(param_1 + 0x18) <= uVar3) {
      return 0;
    }
  }
  plVar2 = *(long **)(*(long *)(param_1 + 0x10) + uVar3 * 8);
  bVar1 = *(byte *)((long)plVar2 + 10);
  if ((bVar1 & 3) != 2) {
    return (ulong)((bVar1 & 3) == 0);
  }
                    /* WARNING: Could not recover jumptable at 0x0013d2f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar2 + 8))();
  return uVar3;
}


// ===== 0013d320  FUN_0013d320 =====

ulong FUN_0013d320(long param_1,long param_2)

{
  ushort uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  if (*(int *)(param_2 + 0x1c) == -1) {
    lVar4 = *(long *)(param_1 + 0x18);
    uVar3 = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = (int)lVar4;
    if (lVar4 == 0) {
      return 0;
    }
  }
  else {
    uVar3 = (ulong)*(uint *)(param_2 + 0x18);
    if (*(ulong *)(param_1 + 0x18) <= uVar3) {
      return 0;
    }
  }
  plVar2 = *(long **)(*(long *)(param_1 + 0x10) + uVar3 * 8);
  uVar1 = *(ushort *)((long)plVar2 + 9) >> 10 & 3;
  if (uVar1 != 2) {
    return (ulong)(uVar1 == 0);
  }
                    /* WARNING: Could not recover jumptable at 0x0013d360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar2 + 0x10))();
  return uVar3;
}


// ===== 0013d38c  FUN_0013d38c =====

void FUN_0013d38c(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (*(int *)(param_2 + 0x1c) == -1) {
    lVar2 = *(long *)(param_1 + 0x18);
    uVar1 = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = (int)lVar2;
    if (lVar2 == 0) {
      return;
    }
  }
  else {
    uVar1 = (ulong)*(uint *)(param_2 + 0x18);
    if (*(ulong *)(param_1 + 0x18) <= uVar1) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0013d3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + uVar1 * 8) + 0x18))();
  return;
}


// ===== 0013d3d8  FUN_0013d3d8 =====

void FUN_0013d3d8(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (*(int *)(param_2 + 0x1c) == -1) {
    lVar2 = *(long *)(param_1 + 0x18);
    uVar1 = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = (int)lVar2;
    if (lVar2 == 0) {
      return;
    }
  }
  else {
    uVar1 = (ulong)*(uint *)(param_2 + 0x18);
    if (*(ulong *)(param_1 + 0x18) <= uVar1) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0013d408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + uVar1 * 8) + 0x20))();
  return;
}


// ===== 0013d424  FUN_0013d424 =====

void FUN_0013d424(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (*(int *)(param_2 + 0x1c) == -1) {
    lVar2 = *(long *)(param_1 + 0x18);
    uVar1 = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = (int)lVar2;
    if (lVar2 == 0) {
      return;
    }
  }
  else {
    uVar1 = (ulong)*(uint *)(param_2 + 0x18);
    if (*(ulong *)(param_1 + 0x18) <= uVar1) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0013d454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + uVar1 * 8) + 0x28))();
  return;
}


// ===== 0013d470  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0013d478  FUN_0013d478 =====

void FUN_0013d478(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  size_t sVar7;
  long lVar8;
  bool bVar9;
  
  lVar4 = param_2[1];
  pvVar3 = (void *)*param_2;
  uVar2 = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  if ((ulong)param_2[2] < lVar4 + 1U) {
    sVar7 = param_2[2] * 2;
    uVar1 = lVar4 + 0x3e1;
    if (sVar7 < uVar1 || sVar7 - uVar1 == 0) {
      sVar7 = uVar1;
    }
    param_2[2] = sVar7;
    pvVar3 = realloc(pvVar3,sVar7);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar4) = 0x3c;
  lVar8 = *(long *)(param_1 + 0x18);
  lVar4 = param_2[1] + 1;
  param_2[1] = lVar4;
  if (lVar8 != 0) {
    lVar8 = 0;
    bVar9 = true;
    do {
      while( true ) {
        lVar5 = lVar4;
        if (!bVar9) {
          pvVar3 = (void *)*param_2;
          if ((ulong)param_2[2] < lVar4 + 2U) {
            sVar7 = param_2[2] * 2;
            uVar1 = lVar4 + 0x3e2;
            if (sVar7 < uVar1 || sVar7 - uVar1 == 0) {
              sVar7 = uVar1;
            }
            param_2[2] = sVar7;
            pvVar3 = realloc(pvVar3,sVar7);
            *param_2 = pvVar3;
            if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0013d61c to 0013d627 has its CatchHandler @ 0013d628 */
              abort();
            }
            lVar5 = param_2[1];
          }
          *(undefined2 *)((long)pvVar3 + lVar5) = 0x202c;
          lVar5 = param_2[1] + 2;
          param_2[1] = lVar5;
        }
                    /* try { // try from 0013d57c to 0013d58b has its CatchHandler @ 0013d630 */
        FUN_001347c4(*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar8 * 8),param_2,0x12,0);
        lVar6 = param_2[1];
        if (lVar5 == lVar6) break;
        bVar9 = false;
        lVar8 = lVar8 + 1;
        lVar4 = lVar6;
        if (lVar8 == *(long *)(param_1 + 0x18)) goto LAB_0013d5b0;
      }
      param_2[1] = lVar4;
      lVar8 = lVar8 + 1;
    } while (lVar8 != *(long *)(param_1 + 0x18));
  }
LAB_0013d5b0:
  pvVar3 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar4 + 1U) {
    sVar7 = param_2[2] * 2;
    uVar1 = lVar4 + 0x3e1;
    if (sVar7 < uVar1 || sVar7 - uVar1 == 0) {
      sVar7 = uVar1;
    }
    param_2[2] = sVar7;
    pvVar3 = realloc(pvVar3,sVar7);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar4) = 0x3e;
  param_2[1] = param_2[1] + 1;
  *(undefined4 *)(param_2 + 4) = uVar2;
  return;
}


// ===== 0013d638  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0013d640  FUN_0013d640 =====

void FUN_0013d640(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  if ((*(ushort *)((long)plVar1 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  }
  plVar1 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  if ((*(ushort *)((long)plVar1 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0013d6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  return;
}


// ===== 0013d6f4  FUN_0013d6f4 =====

void FUN_0013d6f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0013d704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  return;
}


// ===== 0013d708  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0013d710  FUN_0013d710 =====

void FUN_0013d710(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *__ptr;
  size_t __size;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar3 = 0;
    bVar5 = true;
    lVar4 = param_2[1];
    do {
      while( true ) {
        lVar2 = lVar4;
        if (!bVar5) {
          __ptr = (void *)*param_2;
          if ((ulong)param_2[2] < lVar4 + 2U) {
            __size = param_2[2] * 2;
            uVar1 = lVar4 + 0x3e2;
            if (__size < uVar1 || __size - uVar1 == 0) {
              __size = uVar1;
            }
            param_2[2] = __size;
            __ptr = realloc(__ptr,__size);
            *param_2 = __ptr;
            if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            lVar2 = param_2[1];
          }
          *(undefined2 *)((long)__ptr + lVar2) = 0x202c;
          lVar2 = param_2[1] + 2;
          param_2[1] = lVar2;
        }
        FUN_001347c4(*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar3 * 8),param_2,0x12,0);
        if (lVar2 == param_2[1]) break;
        bVar5 = false;
        lVar3 = lVar3 + 1;
        lVar4 = param_2[1];
        if (lVar3 == *(long *)(param_1 + 0x18)) {
          return;
        }
      }
      param_2[1] = lVar4;
      lVar3 = lVar3 + 1;
    } while (lVar3 != *(long *)(param_1 + 0x18));
  }
  return;
}


// ===== 0013d818  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0013d820  FUN_0013d820 =====

void FUN_0013d820(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  if ((*(ushort *)((long)plVar1 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0013d884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  return;
}


// ===== 0013d888  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0013d890  FUN_0013d890 =====

void FUN_0013d890(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  size_t sVar8;
  bool bVar9;
  
  lVar6 = param_2[1];
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar6 + 0xcU) {
    sVar8 = param_2[2] * 2;
    uVar5 = lVar6 + 0x3ec;
    if (sVar8 < uVar5 || sVar8 - uVar5 == 0) {
      sVar8 = uVar5;
    }
    param_2[2] = sVar8;
    pvVar2 = realloc(pvVar2,sVar8);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = param_2[1];
  }
  pcVar1 = (char *)((long)pvVar2 + lVar6);
  *(undefined8 *)pcVar1 = s__enable_if__001125e0._0_8_;
  pcVar1[8] = '_';
  pcVar1[9] = 'i';
  pcVar1[10] = 'f';
  pcVar1[0xb] = ':';
  lVar7 = *(long *)(param_1 + 0x18);
  lVar6 = param_2[1] + 0xc;
  param_2[1] = lVar6;
  if (lVar7 != 0) {
    lVar7 = 0;
    bVar9 = true;
    do {
      while( true ) {
        lVar3 = lVar6;
        if (!bVar9) {
          pvVar2 = (void *)*param_2;
          if ((ulong)param_2[2] < lVar6 + 2U) {
            sVar8 = param_2[2] * 2;
            uVar5 = lVar6 + 0x3e2;
            if (sVar8 < uVar5 || sVar8 - uVar5 == 0) {
              sVar8 = uVar5;
            }
            param_2[2] = sVar8;
            pvVar2 = realloc(pvVar2,sVar8);
            *param_2 = pvVar2;
            if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            lVar3 = param_2[1];
          }
          *(undefined2 *)((long)pvVar2 + lVar3) = 0x202c;
          lVar3 = param_2[1] + 2;
          param_2[1] = lVar3;
        }
        FUN_001347c4(*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar7 * 8),param_2,0x12,0);
        lVar4 = param_2[1];
        if (lVar3 == lVar4) break;
        bVar9 = false;
        lVar7 = lVar7 + 1;
        lVar6 = lVar4;
        if (lVar7 == *(long *)(param_1 + 0x18)) goto LAB_0013d9e0;
      }
      param_2[1] = lVar6;
      lVar7 = lVar7 + 1;
    } while (lVar7 != *(long *)(param_1 + 0x18));
  }
LAB_0013d9e0:
  uVar5 = lVar6 + 1;
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < uVar5) {
    sVar8 = param_2[2] * 2;
    uVar5 = lVar6 + 0x3e1;
    if (sVar8 < uVar5 || sVar8 - uVar5 == 0) {
      sVar8 = uVar5;
    }
    param_2[2] = sVar8;
    pvVar2 = realloc(pvVar2,sVar8);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = param_2[1];
    uVar5 = lVar6 + 1;
  }
  param_2[1] = uVar5;
  *(undefined1 *)((long)pvVar2 + lVar6) = 0x5d;
  return;
}


// ===== 0013da50  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0013da58  FUN_0013da58 =====

void FUN_0013da58(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *__ptr;
  long lVar2;
  size_t __size;
  long *plVar3;
  
  lVar2 = param_2[1];
  __ptr = (void *)*param_2;
  if ((ulong)param_2[2] < lVar2 + 5U) {
    __size = param_2[2] * 2;
    uVar1 = lVar2 + 0x3e5;
    if (__size < uVar1 || __size - uVar1 == 0) {
      __size = uVar1;
    }
    param_2[2] = __size;
    __ptr = realloc(__ptr,__size);
    *param_2 = __ptr;
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
  }
  *(undefined1 *)((undefined4 *)((long)__ptr + lVar2) + 1) = 0x20;
  *(undefined4 *)((long)__ptr + lVar2) = 0x73696874;
  plVar3 = *(long **)(param_1 + 0x10);
  lVar2 = *plVar3;
  param_2[1] = param_2[1] + 5;
  (**(code **)(lVar2 + 0x20))(plVar3,param_2);
  if ((*(ushort *)((long)plVar3 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0013db28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  return;
}


// ===== 0013db30  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0013db38  FUN_0013db38 =====

undefined8 FUN_0013db38(void)

{
  return 1;
}


// ===== 0013db44  FUN_0013db44 =====

undefined8 FUN_0013db44(void)

{
  return 1;
}


// ===== 0013db50  FUN_0013db50 =====

void FUN_0013db50(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  void *__ptr;
  long lVar4;
  size_t __size;
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    if ((*(byte *)((long)puVar2 + 9) & 0xc0) == 0x80) {
      uVar3 = (**(code **)*puVar2)(puVar2,param_2);
      if ((uVar3 & 1) != 0) goto LAB_0013dc00;
    }
    else if (*(byte *)((long)puVar2 + 9) < 0x40) goto LAB_0013dc00;
    lVar4 = param_2[1];
    __ptr = (void *)*param_2;
    if ((ulong)param_2[2] < lVar4 + 1U) {
      __size = param_2[2] * 2;
      uVar3 = lVar4 + 0x3e1;
      if (__size < uVar3 || __size - uVar3 == 0) {
        __size = uVar3;
      }
      param_2[2] = __size;
      __ptr = realloc(__ptr,__size);
      *param_2 = __ptr;
      if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
    }
    *(undefined1 *)((long)__ptr + lVar4) = 0x20;
    param_2[1] = param_2[1] + 1;
  }
LAB_0013dc00:
  plVar1 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  if ((*(ushort *)((long)plVar1 + 9) & 0xc0) != 0x40) {
                    /* WARNING: Could not recover jumptable at 0x0013dc54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
    return;
  }
  return;
}


// ===== 0013dc5c  FUN_0013dc5c =====

void FUN_0013dc5c(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  void *pvVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  size_t sVar10;
  long lVar11;
  bool bVar12;
  
  lVar6 = param_2[1];
  pvVar3 = (void *)*param_2;
  uVar9 = lVar6 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  if ((ulong)param_2[2] < uVar9) {
    sVar10 = param_2[2] * 2;
    uVar9 = lVar6 + 0x3e1;
    if (sVar10 < uVar9 || sVar10 - uVar9 == 0) {
      sVar10 = uVar9;
    }
    param_2[2] = sVar10;
    pvVar3 = realloc(pvVar3,sVar10);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = param_2[1];
    uVar9 = lVar6 + 1;
  }
  param_2[1] = uVar9;
  *(undefined1 *)((long)pvVar3 + lVar6) = 0x28;
  lVar6 = param_2[1];
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar11 = 0;
    bVar12 = true;
    do {
      while( true ) {
        lVar7 = lVar6;
        if (!bVar12) {
          pvVar3 = (void *)*param_2;
          if ((ulong)param_2[2] < lVar6 + 2U) {
            sVar10 = param_2[2] * 2;
            uVar9 = lVar6 + 0x3e2;
            if (sVar10 < uVar9 || sVar10 - uVar9 == 0) {
              sVar10 = uVar9;
            }
            param_2[2] = sVar10;
            pvVar3 = realloc(pvVar3,sVar10);
            *param_2 = pvVar3;
            if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            lVar7 = param_2[1];
          }
          *(undefined2 *)((long)pvVar3 + lVar7) = 0x202c;
          lVar7 = param_2[1] + 2;
          param_2[1] = lVar7;
        }
        FUN_001347c4(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar11 * 8),param_2,0x12,0);
        lVar8 = param_2[1];
        if (lVar7 == lVar8) break;
        bVar12 = false;
        lVar11 = lVar11 + 1;
        lVar6 = lVar8;
        if (lVar11 == *(long *)(param_1 + 0x28)) goto LAB_0013dd98;
      }
      param_2[1] = lVar6;
      lVar11 = lVar11 + 1;
    } while (lVar11 != *(long *)(param_1 + 0x28));
  }
LAB_0013dd98:
  uVar9 = lVar6 + 1;
  pvVar3 = (void *)*param_2;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar9) {
    sVar10 = param_2[2] * 2;
    uVar9 = lVar6 + 0x3e1;
    if (sVar10 < uVar9 || sVar10 - uVar9 == 0) {
      sVar10 = uVar9;
    }
    param_2[2] = sVar10;
    pvVar3 = realloc(pvVar3,sVar10);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = param_2[1];
    uVar9 = lVar6 + 1;
  }
  param_2[1] = uVar9;
  *(undefined1 *)((long)pvVar3 + lVar6) = 0x29;
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  }
  uVar5 = *(uint *)(param_1 + 0x40);
  if ((uVar5 & 1) != 0) {
    lVar6 = param_2[1];
    pvVar3 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar6 + 6U) {
      sVar10 = param_2[2] * 2;
      uVar9 = lVar6 + 0x3e6;
      if (sVar10 < uVar9 || sVar10 - uVar9 == 0) {
        sVar10 = uVar9;
      }
      param_2[2] = sVar10;
      pvVar3 = realloc(pvVar3,sVar10);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar6 = param_2[1];
    }
    *(undefined2 *)((undefined4 *)((long)pvVar3 + lVar6) + 1) = 0x7473;
    *(undefined4 *)((long)pvVar3 + lVar6) = 0x6e6f6320;
    uVar5 = *(uint *)(param_1 + 0x40);
    param_2[1] = param_2[1] + 6;
  }
  if ((uVar5 >> 1 & 1) != 0) {
    lVar6 = param_2[1];
    pvVar3 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar6 + 9U) {
      sVar10 = param_2[2] * 2;
      uVar9 = lVar6 + 0x3e9;
      if (sVar10 < uVar9 || sVar10 - uVar9 == 0) {
        sVar10 = uVar9;
      }
      param_2[2] = sVar10;
      pvVar3 = realloc(pvVar3,sVar10);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar6 = param_2[1];
    }
    uVar2 = s_volatile_00113cfc._0_8_;
    ((char *)((long)pvVar3 + lVar6))[8] = 'e';
    *(undefined8 *)((long)pvVar3 + lVar6) = uVar2;
    uVar5 = *(uint *)(param_1 + 0x40);
    param_2[1] = param_2[1] + 9;
  }
  if ((uVar5 >> 2 & 1) != 0) {
    lVar6 = param_2[1];
    pvVar3 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar6 + 9U) {
      sVar10 = param_2[2] * 2;
      uVar9 = lVar6 + 0x3e9;
      if (sVar10 < uVar9 || sVar10 - uVar9 == 0) {
        sVar10 = uVar9;
      }
      param_2[2] = sVar10;
      pvVar3 = realloc(pvVar3,sVar10);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar6 = param_2[1];
    }
    uVar2 = s_restrict_00113e01._0_8_;
    ((char *)((long)pvVar3 + lVar6))[8] = 't';
    *(undefined8 *)((long)pvVar3 + lVar6) = uVar2;
    param_2[1] = param_2[1] + 9;
  }
  if (*(char *)(param_1 + 0x44) == '\x02') {
    lVar6 = param_2[1];
    pvVar3 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar6 + 3U) {
      sVar10 = param_2[2] * 2;
      uVar9 = lVar6 + 0x3e3;
      if (sVar10 < uVar9 || sVar10 - uVar9 == 0) {
        sVar10 = uVar9;
      }
      param_2[2] = sVar10;
      pvVar3 = realloc(pvVar3,sVar10);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar6 = param_2[1];
    }
    *(undefined1 *)((undefined2 *)((long)pvVar3 + lVar6) + 1) = 0x26;
    *(undefined2 *)((long)pvVar3 + lVar6) = 0x2620;
    lVar6 = 3;
  }
  else {
    if (*(char *)(param_1 + 0x44) != '\x01') goto LAB_0013dff0;
    lVar6 = param_2[1];
    pvVar3 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar6 + 2U) {
      sVar10 = param_2[2] * 2;
      uVar9 = lVar6 + 0x3e2;
      if (sVar10 < uVar9 || sVar10 - uVar9 == 0) {
        sVar10 = uVar9;
      }
      param_2[2] = sVar10;
      pvVar3 = realloc(pvVar3,sVar10);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar6 = param_2[1];
    }
    *(undefined2 *)((long)pvVar3 + lVar6) = 0x2620;
    lVar6 = 2;
  }
  param_2[1] = param_2[1] + lVar6;
LAB_0013dff0:
  plVar4 = *(long **)(param_1 + 0x30);
  if ((plVar4 != (long *)0x0) &&
     ((**(code **)(*plVar4 + 0x20))(plVar4,param_2), (*(ushort *)((long)plVar4 + 9) & 0xc0) != 0x40)
     ) {
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar6 = param_2[1];
    pvVar3 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar6 + 10U) {
      sVar10 = param_2[2] * 2;
      uVar9 = lVar6 + 0x3ea;
      if (sVar10 < uVar9 || sVar10 - uVar9 == 0) {
        sVar10 = uVar9;
      }
      param_2[2] = sVar10;
      pvVar3 = realloc(pvVar3,sVar10);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar6 = param_2[1];
    }
    uVar2 = s_requires_00113ef2._0_8_;
    pcVar1 = (char *)((long)pvVar3 + lVar6);
    pcVar1[8] = 's';
    pcVar1[9] = ' ';
    *(undefined8 *)pcVar1 = uVar2;
    plVar4 = *(long **)(param_1 + 0x38);
    lVar6 = *plVar4;
    param_2[1] = param_2[1] + 10;
    (**(code **)(lVar6 + 0x20))(plVar4,param_2);
    if ((*(ushort *)((long)plVar4 + 9) & 0xc0) != 0x40) {
                    /* WARNING: Could not recover jumptable at 0x0013e104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
      return;
    }
  }
  return;
}


// ===== 0013e12c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0013e134  FUN_0013e134 =====

void FUN_0013e134(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  size_t __size;
  size_t sVar4;
  void *__src;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x20))(plVar5);
  if ((*(ushort *)((long)plVar5 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar3 = param_2[1];
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 2U) {
    sVar4 = param_2[2] * 2;
    uVar1 = lVar3 + 0x3e2;
    if (sVar4 < uVar1 || sVar4 - uVar1 == 0) {
      sVar4 = uVar1;
    }
    param_2[2] = sVar4;
    pvVar2 = realloc(pvVar2,sVar4);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
  }
  *(undefined2 *)((long)pvVar2 + lVar3) = 0x2820;
  lVar3 = param_2[1] + 2;
  param_2[1] = lVar3;
  sVar4 = *(size_t *)(param_1 + 0x20);
  if (sVar4 != 0) {
    __src = *(void **)(param_1 + 0x18);
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar3 + sVar4) {
      __size = param_2[2] * 2;
      uVar1 = lVar3 + sVar4 + 0x3e0;
      if (__size < uVar1 || __size - uVar1 == 0) {
        __size = uVar1;
      }
      param_2[2] = __size;
      pvVar2 = realloc(pvVar2,__size);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
    }
    memcpy((void *)((long)pvVar2 + lVar3),__src,sVar4);
    lVar3 = param_2[1] + sVar4;
    param_2[1] = lVar3;
  }
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 1U) {
    sVar4 = param_2[2] * 2;
    uVar1 = lVar3 + 0x3e1;
    if (sVar4 < uVar1 || sVar4 - uVar1 == 0) {
      sVar4 = uVar1;
    }
    param_2[2] = sVar4;
    pvVar2 = realloc(pvVar2,sVar4);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x29;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 0013e2a0  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0013e2a8  FUN_0013e2a8 =====

undefined8 * FUN_0013e2a8(long *param_1)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  short *psVar10;
  short *psVar11;
  long lVar12;
  short *psVar13;
  undefined1 uVar14;
  long *plVar15;
  size_t sVar16;
  uint uVar17;
  undefined8 *puVar18;
  undefined1 auVar19 [16];
  
  psVar11 = (short *)*param_1;
  psVar10 = (short *)param_1[1];
  psVar13 = psVar10;
  if ((psVar11 == psVar10) || ((char)*psVar11 != 'r')) {
    uVar17 = 0;
    if (psVar11 != psVar10) goto LAB_0013e310;
joined_r0x0013e350:
    if ((ulong)((long)psVar10 - (long)psVar13) < 2) goto LAB_0013e364;
    if (*psVar13 == 0x6f44) {
      pvVar7 = (void *)param_1[0x266];
      *param_1 = (long)(psVar13 + 1);
      lVar4 = *(long *)((long)pvVar7 + 8);
      puVar8 = (undefined8 *)pvVar7;
      if (lVar4 - 0xfd0U < 0xfffffffffffff010) {
        puVar8 = (undefined8 *)malloc(0x1000);
        if (puVar8 == (undefined8 *)0x0) goto LAB_0013e894;
        lVar4 = 0;
        *puVar8 = pvVar7;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar4 + 0x20;
      puVar18 = (undefined8 *)((long)puVar8 + lVar4 + 0x10);
      *puVar18 = &PTR_FUN_0014e158;
      *(undefined1 *)((long)puVar8 + lVar4 + 0x18) = 8;
      *(ushort *)((long)puVar8 + lVar4 + 0x19) =
           *(ushort *)((long)puVar8 + lVar4 + 0x19) & 0xf000 | 0x540;
      *(char **)((long)puVar8 + lVar4 + 0x20) = "noexcept";
      *(undefined8 *)((long)puVar8 + lVar4 + 0x28) = 8;
    }
    else if (*psVar13 == 0x4f44) {
      *param_1 = (long)(psVar13 + 1);
      lVar4 = FUN_0012ff04(param_1);
      if (lVar4 == 0) {
        return (undefined8 *)0x0;
      }
      pcVar2 = (char *)*param_1;
      if (pcVar2 == (char *)param_1[1]) {
        return (undefined8 *)0x0;
      }
      if (*pcVar2 != 'E') {
        return (undefined8 *)0x0;
      }
      pvVar7 = (void *)param_1[0x266];
      *param_1 = (long)(pcVar2 + 1);
      lVar12 = *(long *)((long)pvVar7 + 8);
      puVar8 = (undefined8 *)pvVar7;
      if (lVar12 - 0xfd0U < 0xfffffffffffff010) {
        puVar8 = (undefined8 *)malloc(0x1000);
        if (puVar8 == (undefined8 *)0x0) goto LAB_0013e894;
        lVar12 = 0;
        *puVar8 = pvVar7;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar12 + 0x20;
      puVar18 = (undefined8 *)((long)puVar8 + lVar12 + 0x10);
      *puVar18 = &PTR_FUN_00150368;
      *(long *)((long)puVar8 + lVar12 + 0x20) = lVar4;
      *(undefined1 *)((long)puVar8 + lVar12 + 0x18) = 0x11;
      *(ushort *)((long)puVar8 + lVar12 + 0x19) =
           *(ushort *)((long)puVar8 + lVar12 + 0x19) & 0xf000 | 0x540;
    }
    else {
      if (*psVar13 != 0x7744) goto LAB_0013e364;
      lVar4 = param_1[2];
      lVar12 = param_1[3];
      psVar13 = psVar13 + 1;
      plVar1 = param_1 + 5;
      *param_1 = (long)psVar13;
      while ((psVar13 == psVar10 || ((char)*psVar13 != 'E'))) {
        lVar3 = FUN_0012acb8(param_1);
        if (lVar3 == 0) {
          return (undefined8 *)0x0;
        }
        plVar15 = (long *)param_1[3];
        if (plVar15 == (long *)param_1[4]) {
          plVar6 = (long *)param_1[2];
          sVar16 = (long)plVar15 - (long)plVar6;
          if (plVar6 == plVar1) {
            pvVar7 = malloc(sVar16 * 2);
            if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (plVar15 != plVar1) {
              memcpy(pvVar7,plVar1,sVar16);
            }
            param_1[2] = (long)pvVar7;
          }
          else {
            pvVar7 = realloc(plVar6,sVar16 * 2);
            param_1[2] = (long)pvVar7;
            if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          plVar15 = (long *)((long)pvVar7 + sVar16);
          param_1[4] = (long)((long)pvVar7 + ((long)sVar16 >> 2) * 8);
        }
        param_1[3] = (long)(plVar15 + 1);
        *plVar15 = lVar3;
        psVar10 = (short *)param_1[1];
        psVar13 = (short *)*param_1;
      }
      *param_1 = (long)((long)psVar13 + 1);
      auVar19 = FUN_0012ce20(param_1,lVar12 - lVar4 >> 3);
      pvVar7 = (void *)param_1[0x266];
      lVar4 = *(long *)((long)pvVar7 + 8);
      puVar8 = (undefined8 *)pvVar7;
      if (lVar4 - 0xfd0U < 0xfffffffffffff010) {
        puVar8 = (undefined8 *)malloc(0x1000);
        if (puVar8 == (undefined8 *)0x0) goto LAB_0013e894;
        lVar4 = 0;
        *puVar8 = pvVar7;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar4 + 0x20;
      puVar18 = (undefined8 *)((long)puVar8 + lVar4 + 0x10);
      *puVar18 = &PTR_FUN_001503d8;
      *(undefined1 (*) [16])((long)puVar8 + lVar4 + 0x20) = auVar19;
      *(undefined1 *)((long)puVar8 + lVar4 + 0x18) = 0x12;
      *(ushort *)((long)puVar8 + lVar4 + 0x19) =
           *(ushort *)((long)puVar8 + lVar4 + 0x19) & 0xf000 | 0x540;
    }
  }
  else {
    psVar11 = (short *)((long)psVar11 + 1);
    uVar17 = 4;
    *param_1 = (long)psVar11;
    if (psVar11 == psVar10) goto joined_r0x0013e350;
LAB_0013e310:
    if ((char)*psVar11 == 'V') {
      psVar11 = (short *)((long)psVar11 + 1);
      uVar17 = uVar17 | 2;
      *param_1 = (long)psVar11;
    }
    if (psVar11 != psVar10) {
      psVar13 = psVar11;
      if ((char)*psVar11 == 'K') {
        uVar17 = uVar17 | 1;
        *param_1 = (long)psVar11 + 1;
        psVar13 = (short *)((long)psVar11 + 1);
      }
      goto joined_r0x0013e350;
    }
LAB_0013e364:
    puVar18 = (undefined8 *)0x0;
  }
  psVar11 = (short *)*param_1;
  psVar13 = (short *)param_1[1];
  if ((1 < (ulong)((long)psVar13 - (long)psVar11)) && (*psVar11 == 0x7844)) {
    psVar11 = psVar11 + 1;
    *param_1 = (long)psVar11;
  }
  if ((psVar11 == psVar13) || ((char)*psVar11 != 'F')) {
    return (undefined8 *)0x0;
  }
  psVar10 = (short *)((long)psVar11 + 1);
  *param_1 = (long)psVar10;
  if ((psVar10 != psVar13) && (*(char *)psVar10 == 'Y')) {
    *param_1 = (long)(psVar11 + 1);
  }
  lVar4 = FUN_0012acb8(param_1);
  if (lVar4 == 0) {
    return (undefined8 *)0x0;
  }
  lVar12 = param_1[2];
  lVar3 = param_1[3];
  plVar1 = param_1 + 5;
  psVar11 = (short *)*param_1;
  psVar13 = (short *)param_1[1];
  if (psVar11 != psVar13) goto LAB_0013e58c;
LAB_0013e5e0:
  if (1 < (ulong)((long)psVar13 - (long)psVar11)) {
    if (*psVar11 == 0x4552) {
      uVar14 = 1;
      lVar5 = 2;
LAB_0013e7f0:
      *param_1 = (long)((long)psVar11 + lVar5);
      auVar19 = FUN_0012ce20(param_1,lVar3 - lVar12 >> 3);
      pvVar7 = (void *)param_1[0x266];
      lVar12 = *(long *)((long)pvVar7 + 8);
      puVar8 = (undefined8 *)pvVar7;
      if (lVar12 - 0xfb0U < 0xfffffffffffff010) {
        puVar8 = (undefined8 *)malloc(0x1000);
        if (puVar8 == (undefined8 *)0x0) {
LAB_0013e894:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar12 = 0;
        *puVar8 = pvVar7;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar12 + 0x40;
      puVar9 = (undefined8 *)((long)puVar8 + lVar12 + 0x10);
      *puVar9 = &PTR_FUN_00150448;
      *(undefined1 *)((long)puVar8 + lVar12 + 0x18) = 0x10;
      *(long *)((long)puVar8 + lVar12 + 0x20) = lVar4;
      *(undefined1 (*) [16])((long)puVar8 + lVar12 + 0x28) = auVar19;
      *(uint *)((long)puVar8 + lVar12 + 0x38) = uVar17;
      *(ushort *)((long)puVar8 + lVar12 + 0x19) =
           *(ushort *)((long)puVar8 + lVar12 + 0x19) & 0xf000 | 0x100;
      *(undefined1 *)((long)puVar8 + lVar12 + 0x3c) = uVar14;
      *(undefined8 **)((long)puVar8 + lVar12 + 0x40) = puVar18;
      return puVar9;
    }
    if (*psVar11 == 0x454f) {
      lVar5 = 2;
      uVar14 = 2;
      goto LAB_0013e7f0;
    }
  }
  lVar5 = FUN_0012acb8(param_1);
  if (lVar5 == 0) {
    return (undefined8 *)0x0;
  }
  plVar15 = (long *)param_1[3];
  if (plVar15 == (long *)param_1[4]) {
    plVar6 = (long *)param_1[2];
    sVar16 = (long)plVar15 - (long)plVar6;
    if (plVar6 == plVar1) {
      pvVar7 = malloc(sVar16 * 2);
      if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (plVar15 != plVar1) {
        memcpy(pvVar7,plVar1,sVar16);
      }
      param_1[2] = (long)pvVar7;
    }
    else {
      pvVar7 = realloc(plVar6,sVar16 * 2);
      param_1[2] = (long)pvVar7;
      if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    plVar15 = (long *)((long)pvVar7 + sVar16);
    param_1[4] = (long)((long)pvVar7 + ((long)sVar16 >> 2) * 8);
  }
  param_1[3] = (long)(plVar15 + 1);
  *plVar15 = lVar5;
  psVar11 = (short *)*param_1;
  psVar13 = (short *)param_1[1];
  if (psVar11 != psVar13) {
LAB_0013e58c:
    do {
      if ((char)*psVar11 == 'E') {
        uVar14 = 0;
        lVar5 = 1;
        goto LAB_0013e7f0;
      }
      if ((char)*psVar11 != 'v') break;
      *param_1 = (long)((long)psVar11 + 1);
      psVar11 = (short *)*param_1;
      psVar13 = (short *)param_1[1];
    } while (psVar11 != psVar13);
  }
  goto LAB_0013e5e0;
}


// ===== 0013e898  FUN_0013e898 =====

undefined8 * FUN_0013e898(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  byte *pbVar10;
  ulong uVar11;
  byte *pbVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  ulong uVar17;
  byte *pbVar18;
  byte *pbVar19;
  void *pvVar20;
  
  pbVar10 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if (pbVar10 == pbVar2) {
LAB_0013e918:
    uVar13 = 0;
  }
  else {
    if (*pbVar10 == 0x55) {
      pbVar19 = pbVar10 + 1;
      *param_1 = (long)pbVar19;
      if (pbVar2 == pbVar19) {
        return (undefined8 *)0x0;
      }
      if (*pbVar19 - 0x3a < 0xfffffff6) {
        return (undefined8 *)0x0;
      }
      lVar4 = 0;
      uVar17 = 0;
      do {
        uVar16 = uVar17;
        lVar5 = lVar4;
        pbVar19 = pbVar10 + lVar5 + 2;
        *param_1 = (long)pbVar19;
        uVar11 = (ulong)pbVar10[lVar5 + 1];
        uVar17 = (uVar11 + uVar16 * 10) - 0x30;
        if (pbVar19 == pbVar2) {
          pbVar19 = pbVar2;
          if (uVar17 != 0) {
            return (undefined8 *)0x0;
          }
          goto LAB_0013ea74;
        }
        lVar4 = lVar5 + 1;
      } while (*pbVar19 - 0x30 < 10);
      pbVar19 = pbVar10 + lVar5 + 2;
      if ((ulong)((long)pbVar2 - (long)pbVar19) < uVar17) {
        return (undefined8 *)0x0;
      }
LAB_0013ea74:
      pbVar1 = pbVar19 + uVar17;
      *param_1 = (long)pbVar1;
      if (uVar17 == 0) {
        return (undefined8 *)0x0;
      }
      if ((uVar17 < 9) || (*(long *)pbVar19 != 0x746f7270636a626f || pbVar19[8] != 0x6f)) {
        if ((pbVar2 == pbVar1) || (*pbVar1 != 0x49)) {
          lVar4 = 0;
        }
        else {
          lVar4 = FUN_0012e5c4(param_1,0);
          if (lVar4 == 0) {
            return (undefined8 *)0x0;
          }
        }
        lVar5 = FUN_0013e898(param_1);
        if (lVar5 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar20 = (void *)param_1[0x266];
        lVar9 = *(long *)((long)pvVar20 + 8);
        puVar6 = (undefined8 *)pvVar20;
        if (lVar9 - 0xfc0U < 0xfffffffffffff010) {
          puVar6 = (undefined8 *)malloc(0x1000);
          if (puVar6 == (undefined8 *)0x0) goto LAB_0013ecf0;
          lVar9 = 0;
          *puVar6 = pvVar20;
          puVar6[1] = 0;
          param_1[0x266] = (long)puVar6;
        }
        *(long *)((long)puVar6 + 8) = lVar9 + 0x30;
        puVar7 = (undefined8 *)((long)puVar6 + lVar9 + 0x10);
        *puVar7 = &PTR_FUN_00150528;
        uVar3 = *(ushort *)((long)puVar6 + lVar9 + 0x19);
        *(undefined1 *)((long)puVar6 + lVar9 + 0x18) = 2;
        *(long *)((long)puVar6 + lVar9 + 0x20) = lVar5;
        *(byte **)((long)puVar6 + lVar9 + 0x28) = pbVar19;
        *(ulong *)((long)puVar6 + lVar9 + 0x30) = uVar17;
        *(long *)((long)puVar6 + lVar9 + 0x38) = lVar4;
      }
      else {
        pbVar19 = pbVar10 + lVar5 + 0xb;
        pbVar14 = pbVar10 + uVar11 + uVar16 * 10 + lVar5 + -0x2e;
        *param_1 = (long)pbVar19;
        param_1[1] = (long)pbVar14;
        if ((pbVar19 == pbVar14) || (*pbVar19 - 0x3a < 0xfffffff6)) {
LAB_0013ec18:
          *param_1 = (long)pbVar1;
          param_1[1] = (long)pbVar2;
          return (undefined8 *)0x0;
        }
        pbVar18 = (byte *)0x0;
        lVar4 = uVar16 * 10 + uVar11 + -0x3a;
        pbVar19 = pbVar10 + lVar5 + 0xc;
        do {
          pbVar12 = pbVar19;
          *param_1 = (long)pbVar12;
          pbVar18 = (byte *)((ulong)pbVar12[-1] + (long)pbVar18 * 10 + -0x30);
          pbVar15 = pbVar14;
          if (lVar4 == 0) break;
          lVar4 = lVar4 + -1;
          pbVar19 = pbVar12 + 1;
          pbVar15 = pbVar12;
        } while (*pbVar12 - 0x30 < 10);
        if (pbVar10 + lVar5 + (uVar16 * 10 - (long)pbVar15) + uVar11 + -0x2e < pbVar18)
        goto LAB_0013ec18;
        *param_1 = (long)pbVar1;
        param_1[1] = (long)pbVar2;
        if (pbVar18 == (byte *)0x0) {
          return (undefined8 *)0x0;
        }
        lVar4 = FUN_0013e898(param_1);
        if (lVar4 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar20 = (void *)param_1[0x266];
        lVar5 = *(long *)((long)pvVar20 + 8);
        puVar6 = (undefined8 *)pvVar20;
        if (lVar5 - 0xfc0U < 0xfffffffffffff010) {
          puVar6 = (undefined8 *)malloc(0x1000);
          if (puVar6 == (undefined8 *)0x0) goto LAB_0013ecf0;
          lVar5 = 0;
          *puVar6 = pvVar20;
          puVar6[1] = 0;
          param_1[0x266] = (long)puVar6;
        }
        *(long *)((long)puVar6 + 8) = lVar5 + 0x30;
        puVar7 = (undefined8 *)((long)puVar6 + lVar5 + 0x10);
        *puVar7 = &PTR_FUN_001504b8;
        uVar3 = *(ushort *)((long)puVar6 + lVar5 + 0x19);
        *(undefined1 *)((long)puVar6 + lVar5 + 0x18) = 0xb;
        *(long *)((long)puVar6 + lVar5 + 0x20) = lVar4;
        *(byte **)((long)puVar6 + lVar5 + 0x28) = pbVar15;
        *(byte **)((long)puVar6 + lVar5 + 0x30) = pbVar18;
      }
      *(ushort *)((long)puVar7 + 9) = uVar3 & 0xf000 | 0x540;
      return puVar7;
    }
    if (*pbVar10 != 0x72) goto LAB_0013e918;
    pbVar10 = pbVar10 + 1;
    uVar13 = 4;
    *param_1 = (long)pbVar10;
  }
  if (pbVar10 != pbVar2) {
    if (*pbVar10 == 0x56) {
      pbVar10 = pbVar10 + 1;
      uVar13 = uVar13 | 2;
      *param_1 = (long)pbVar10;
    }
    if ((pbVar10 != pbVar2) && (*pbVar10 == 0x4b)) {
      uVar13 = uVar13 | 1;
      *param_1 = (long)(pbVar10 + 1);
    }
  }
  puVar6 = (undefined8 *)FUN_0012acb8(param_1);
  if ((puVar6 == (undefined8 *)0x0) || (uVar13 == 0)) {
    return puVar6;
  }
  pvVar20 = (void *)param_1[0x266];
  lVar4 = *(long *)((long)pvVar20 + 8);
  puVar7 = (undefined8 *)pvVar20;
  if (lVar4 - 0xfd0U < 0xfffffffffffff010) {
    puVar7 = (undefined8 *)malloc(0x1000);
    if (puVar7 == (undefined8 *)0x0) {
LAB_0013ecf0:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = 0;
    *puVar7 = pvVar20;
    puVar7[1] = 0;
    param_1[0x266] = (long)puVar7;
  }
  *(long *)((long)puVar7 + 8) = lVar4 + 0x20;
  uVar3 = *(ushort *)((long)puVar6 + 9);
  puVar8 = (undefined8 *)((long)puVar7 + lVar4 + 0x10);
  *puVar8 = &PTR_FUN_00150598;
  *(undefined8 **)((long)puVar7 + lVar4 + 0x20) = puVar6;
  *(undefined1 *)((long)puVar7 + lVar4 + 0x18) = 3;
  *(uint *)((long)puVar7 + lVar4 + 0x1c) = uVar13;
  *(ushort *)((long)puVar7 + lVar4 + 0x19) =
       *(ushort *)((long)puVar7 + lVar4 + 0x19) & 0xf000 | uVar3 & 0xfc0;
  return puVar8;
}


// ===== 0013ecf4  FUN_0013ecf4 =====

undefined8 * FUN_0013ecf4(long param_1,char *param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar5 + 8);
  puVar1 = (undefined8 *)pvVar5;
  if (lVar3 - 0xfd0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = 0;
    *puVar1 = pvVar5;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar3 + 0x20;
  sVar2 = strlen(param_2);
  puVar4 = (undefined8 *)((long)puVar1 + lVar3 + 0x10);
  *puVar4 = &PTR_FUN_0014e158;
  *(undefined1 *)((long)puVar1 + lVar3 + 0x18) = 8;
  *(char **)((long)puVar1 + lVar3 + 0x20) = param_2;
  *(size_t *)((long)puVar1 + lVar3 + 0x28) = sVar2;
  *(ushort *)((long)puVar1 + lVar3 + 0x19) =
       *(ushort *)((long)puVar1 + lVar3 + 0x19) & 0xf000 | 0x540;
  return puVar4;
}


// ===== 0013ed9c  FUN_0013ed9c =====

undefined8 * FUN_0013ed9c(long param_1,char *param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar5 + 8);
  puVar1 = (undefined8 *)pvVar5;
  if (lVar3 - 0xfd0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = 0;
    *puVar1 = pvVar5;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar3 + 0x20;
  sVar2 = strlen(param_2);
  puVar4 = (undefined8 *)((long)puVar1 + lVar3 + 0x10);
  *puVar4 = &PTR_FUN_0014e158;
  *(undefined1 *)((long)puVar1 + lVar3 + 0x18) = 8;
  *(char **)((long)puVar1 + lVar3 + 0x20) = param_2;
  *(size_t *)((long)puVar1 + lVar3 + 0x28) = sVar2;
  *(ushort *)((long)puVar1 + lVar3 + 0x19) =
       *(ushort *)((long)puVar1 + lVar3 + 0x19) & 0xf000 | 0x540;
  return puVar4;
}


// ===== 0013ee44  FUN_0013ee44 =====

undefined8 * FUN_0013ee44(long param_1,char *param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar5 + 8);
  puVar1 = (undefined8 *)pvVar5;
  if (lVar3 - 0xfd0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = 0;
    *puVar1 = pvVar5;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar3 + 0x20;
  sVar2 = strlen(param_2);
  puVar4 = (undefined8 *)((long)puVar1 + lVar3 + 0x10);
  *puVar4 = &PTR_FUN_0014e158;
  *(undefined1 *)((long)puVar1 + lVar3 + 0x18) = 8;
  *(char **)((long)puVar1 + lVar3 + 0x20) = param_2;
  *(size_t *)((long)puVar1 + lVar3 + 0x28) = sVar2;
  *(ushort *)((long)puVar1 + lVar3 + 0x19) =
       *(ushort *)((long)puVar1 + lVar3 + 0x19) & 0xf000 | 0x540;
  return puVar4;
}


// ===== 0013eeec  FUN_0013eeec =====

void FUN_0013eeec(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar4 + 8);
  puVar1 = (undefined8 *)pvVar4;
  if (lVar2 - 0xfc0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x30;
  uVar6 = param_2[1];
  uVar5 = *param_2;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_00150608;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 7;
  uVar3 = *param_3;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar6;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar5;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  return;
}


// ===== 0013ef98  FUN_0013ef98 =====

void FUN_0013ef98(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar4 + 8);
  puVar1 = (undefined8 *)pvVar4;
  if (lVar2 - 0xfd0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_00150678;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x1f;
  uVar3 = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  return;
}


// ===== 0013f038  FUN_0013f038 =====

void FUN_0013f038(long param_1,undefined8 *param_2,char param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar4 + 8);
  puVar1 = (undefined8 *)pvVar4;
  if (lVar2 - 0xfd0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  uVar3 = *param_2;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_001506e8;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x20;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(bool *)((long)puVar1 + lVar2 + 0x28) = param_3 != '\0';
  return;
}


// ===== 0013f0e8  FUN_0013f0e8 =====

void FUN_0013f0e8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar4 + 8);
  puVar1 = (undefined8 *)pvVar4;
  if (lVar2 - 0xfc0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x30;
  uVar3 = *param_2;
  uVar6 = param_3[1];
  uVar5 = *param_3;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_00150758;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 5;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar6;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar5;
  return;
}


// ===== 0013f194  FUN_0013f194 =====

undefined8 * FUN_0013f194(long *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  short *psVar3;
  char *pcVar4;
  byte *pbVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ushort uVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  void *pvVar17;
  undefined8 *local_40;
  undefined8 *local_38;
  
  psVar3 = (short *)*param_1;
  pbVar5 = (byte *)param_1[1];
  if ((ulong)((long)pbVar5 - (long)psVar3) < 2) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    if (*psVar3 != 0x7644) {
      return (undefined8 *)0x0;
    }
    pbVar1 = (byte *)(psVar3 + 1);
    *param_1 = (long)pbVar1;
    if ((pbVar5 != pbVar1) && (bVar6 = *pbVar1, 0x30 < bVar6)) {
      if (bVar6 < 0x3a) {
        pbVar15 = (byte *)(psVar3 + 1);
        pbVar13 = pbVar1;
        do {
          pbVar16 = pbVar15;
          if (*pbVar13 - 0x3a < 0xfffffff6) break;
          pbVar13 = pbVar13 + 1;
          pbVar15 = pbVar15 + 1;
          *param_1 = (long)pbVar13;
          pbVar16 = pbVar5;
        } while (pbVar13 != pbVar5);
        pvVar17 = (void *)param_1[0x266];
        lVar14 = *(long *)((long)pvVar17 + 8);
        puVar7 = (undefined8 *)pvVar17;
        if (0xfffffffffffff00f < lVar14 - 0xfd0U) {
LAB_0013f294:
          *(long *)((long)puVar7 + 8) = lVar14 + 0x20;
          local_38 = (undefined8 *)((long)puVar7 + lVar14 + 0x10);
          *local_38 = &PTR_FUN_0014e158;
          *(undefined1 *)((long)puVar7 + lVar14 + 0x18) = 8;
          *(ushort *)((long)puVar7 + lVar14 + 0x19) =
               *(ushort *)((long)puVar7 + lVar14 + 0x19) & 0xf000 | 0x540;
          *(byte **)((long)puVar7 + lVar14 + 0x20) = pbVar1;
          *(long *)((long)puVar7 + lVar14 + 0x28) = (long)pbVar16 - (long)pbVar1;
          pcVar4 = (char *)*param_1;
          if (pcVar4 == (char *)param_1[1]) {
            return (undefined8 *)0x0;
          }
          if (*pcVar4 != '_') {
            return (undefined8 *)0x0;
          }
          pcVar2 = pcVar4 + 1;
          *param_1 = (long)pcVar2;
          if ((pcVar2 != (char *)param_1[1]) && (*pcVar2 == 'p')) {
            *param_1 = (long)(pcVar4 + 2);
            puVar7 = (undefined8 *)FUN_00140b74(param_1,&local_38);
            return puVar7;
          }
          local_40 = (undefined8 *)FUN_0012acb8();
          if (local_40 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          puVar7 = (undefined8 *)FUN_00140c14(param_1,&local_40,&local_38);
          return puVar7;
        }
        puVar7 = (undefined8 *)malloc(0x1000);
        if (puVar7 != (undefined8 *)0x0) {
          lVar14 = 0;
          *puVar7 = pvVar17;
          puVar7[1] = 0;
          param_1[0x266] = (long)puVar7;
          goto LAB_0013f294;
        }
        goto LAB_0013f4a0;
      }
      if (bVar6 == 0x5f) {
        *param_1 = (long)psVar3 + 3;
        lVar14 = FUN_0012acb8();
        if (lVar14 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar17 = (void *)param_1[0x266];
        lVar12 = *(long *)((long)pvVar17 + 8);
        puVar7 = (undefined8 *)pvVar17;
        if (lVar12 - 0xfd0U < 0xfffffffffffff010) {
          puVar7 = (undefined8 *)malloc(0x1000);
          if (puVar7 == (undefined8 *)0x0) goto LAB_0013f4a0;
          lVar12 = 0;
          *puVar7 = pvVar17;
          puVar7[1] = 0;
          param_1[0x266] = (long)puVar7;
        }
        *(long *)((long)puVar7 + 8) = lVar12 + 0x20;
        puVar8 = (undefined8 *)((long)puVar7 + lVar12 + 0x10);
        *puVar8 = &PTR_FUN_00150838;
        uVar11 = *(ushort *)((long)puVar7 + lVar12 + 0x19);
        *(long *)((long)puVar7 + lVar12 + 0x20) = lVar14;
        *(undefined8 *)((long)puVar7 + lVar12 + 0x28) = 0;
        goto LAB_0013f444;
      }
    }
    puVar9 = (undefined8 *)FUN_0012ff04();
    puVar7 = puVar9;
    if (puVar9 != (undefined8 *)0x0) {
      pcVar4 = (char *)*param_1;
      if (pcVar4 == (char *)param_1[1]) {
        return (undefined8 *)0x0;
      }
      if (*pcVar4 != '_') {
        return (undefined8 *)0x0;
      }
      *param_1 = (long)(pcVar4 + 1);
      puVar7 = (undefined8 *)FUN_0012acb8(param_1);
      if (puVar7 != (undefined8 *)0x0) {
        pvVar17 = (void *)param_1[0x266];
        lVar14 = *(long *)((long)pvVar17 + 8);
        puVar10 = (undefined8 *)pvVar17;
        if (lVar14 - 0xfd0U < 0xfffffffffffff010) {
          puVar10 = (undefined8 *)malloc(0x1000);
          if (puVar10 == (undefined8 *)0x0) {
LAB_0013f4a0:
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar14 = 0;
          *puVar10 = pvVar17;
          puVar10[1] = 0;
          param_1[0x266] = (long)puVar10;
        }
        *(long *)((long)puVar10 + 8) = lVar14 + 0x20;
        puVar8 = (undefined8 *)((long)puVar10 + lVar14 + 0x10);
        *puVar8 = &PTR_FUN_00150838;
        uVar11 = *(ushort *)((long)puVar10 + lVar14 + 0x19);
        *(undefined8 **)((long)puVar10 + lVar14 + 0x20) = puVar7;
        *(undefined8 **)((long)puVar10 + lVar14 + 0x28) = puVar9;
LAB_0013f444:
        *(undefined1 *)(puVar8 + 1) = 0x1d;
        *(ushort *)((long)puVar8 + 9) = uVar11 & 0xf000 | 0x540;
        return puVar8;
      }
    }
  }
  return puVar7;
}


// ===== 0013f4a4  FUN_0013f4a4 =====

undefined8 * FUN_0013f4a4(long *param_1)

{
  short *psVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  void *pvVar8;
  
  psVar1 = (short *)*param_1;
  if ((ulong)(param_1[1] - (long)psVar1) < 2) {
LAB_0013f4cc:
    puVar2 = (undefined8 *)FUN_0012c1f0(param_1,0);
    return puVar2;
  }
  if (*psVar1 == 0x7354) {
    pcVar6 = "struct";
    uVar7 = 6;
    *param_1 = (long)(psVar1 + 1);
    lVar3 = FUN_0012c1f0(param_1,0);
  }
  else {
    if (*psVar1 != 0x7554) {
      if (*psVar1 != 0x6554) goto LAB_0013f4cc;
      pcVar6 = "enum";
      uVar7 = 4;
      *param_1 = (long)(psVar1 + 1);
      lVar3 = FUN_0012c1f0(param_1,0);
      if (lVar3 == 0) {
        return (undefined8 *)0x0;
      }
      goto LAB_0013f5a0;
    }
    pcVar6 = "union";
    uVar7 = 5;
    *param_1 = (long)(psVar1 + 1);
    lVar3 = FUN_0012c1f0(param_1,0);
  }
  if (lVar3 == 0) {
    return (undefined8 *)0x0;
  }
LAB_0013f5a0:
  pvVar8 = (void *)param_1[0x266];
  lVar4 = *(long *)((long)pvVar8 + 8);
  puVar2 = (undefined8 *)pvVar8;
  if (lVar4 - 0xfc0U < 0xfffffffffffff010) {
    puVar2 = (undefined8 *)malloc(0x1000);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = 0;
    *puVar2 = pvVar8;
    puVar2[1] = 0;
    param_1[0x266] = (long)puVar2;
  }
  *(long *)((long)puVar2 + 8) = lVar4 + 0x30;
  puVar5 = (undefined8 *)((long)puVar2 + lVar4 + 0x10);
  *puVar5 = &PTR_FUN_00150988;
  *(undefined1 *)((long)puVar2 + lVar4 + 0x18) = 6;
  *(long *)((long)puVar2 + lVar4 + 0x30) = lVar3;
  *(char **)((long)puVar2 + lVar4 + 0x20) = pcVar6;
  *(undefined8 *)((long)puVar2 + lVar4 + 0x28) = uVar7;
  *(ushort *)((long)puVar2 + lVar4 + 0x19) =
       *(ushort *)((long)puVar2 + lVar4 + 0x19) & 0xf000 | 0x540;
  return puVar5;
}


// ===== 0013f638  FUN_0013f638 =====

void FUN_0013f638(long param_1,long *param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar5 + 8);
  puVar2 = (undefined8 *)pvVar5;
  if (lVar3 - 0xfd0U < 0xfffffffffffff010) {
    puVar2 = (undefined8 *)malloc(0x1000);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = 0;
    *puVar2 = pvVar5;
    puVar2[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar2;
  }
  lVar4 = *param_2;
  *(long *)((long)puVar2 + 8) = lVar3 + 0x20;
  uVar1 = *(ushort *)(lVar4 + 9);
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_001509f8;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0xc;
  *(ushort *)((long)puVar2 + lVar3 + 0x19) =
       uVar1 & 0xc0 | 0x500 | *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000;
  *(long *)((long)puVar2 + lVar3 + 0x20) = lVar4;
  return;
}


// ===== 0013f6e4  FUN_0013f6e4 =====

void FUN_0013f6e4(long param_1,long *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  
  pvVar6 = *(void **)(param_1 + 0x1330);
  lVar4 = *(long *)((long)pvVar6 + 8);
  puVar3 = (undefined8 *)pvVar6;
  if (lVar4 - 0xfd0U < 0xfffffffffffff010) {
    puVar3 = (undefined8 *)malloc(0x1000);
    if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = 0;
    *puVar3 = pvVar6;
    puVar3[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar3;
  }
  lVar5 = *param_2;
  *(long *)((long)puVar3 + 8) = lVar4 + 0x20;
  uVar2 = *(ushort *)(lVar5 + 9);
  uVar1 = *param_3;
  *(undefined ***)((long)puVar3 + lVar4 + 0x10) = &PTR_FUN_00150a68;
  *(undefined1 *)((long)puVar3 + lVar4 + 0x18) = 0xd;
  *(long *)((long)puVar3 + lVar4 + 0x20) = lVar5;
  *(undefined4 *)((long)puVar3 + lVar4 + 0x28) = uVar1;
  *(ushort *)((long)puVar3 + lVar4 + 0x19) =
       uVar2 & 0xc0 | 0x500 | *(ushort *)((long)puVar3 + lVar4 + 0x19) & 0xf000;
  *(undefined1 *)((long)puVar3 + lVar4 + 0x2c) = 0;
  return;
}


// ===== 0013f7a0  FUN_0013f7a0 =====

void FUN_0013f7a0(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar4 + 8);
  puVar1 = (undefined8 *)pvVar4;
  if (lVar2 - 0xfc0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x30;
  uVar3 = *param_2;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_00150758;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 5;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  *(char **)((long)puVar1 + lVar2 + 0x28) = " complex";
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = 8;
  return;
}


// ===== 0013f850  FUN_0013f850 =====

void FUN_0013f850(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar4 + 8);
  puVar1 = (undefined8 *)pvVar4;
  if (lVar2 - 0xfc0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x30;
  uVar3 = *param_2;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_00150758;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 5;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  *(char **)((long)puVar1 + lVar2 + 0x28) = " imaginary";
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = 10;
  return;
}


// ===== 0013f900  FUN_0013f900 =====

void FUN_0013f900(long param_1,undefined8 *param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  size_t sVar5;
  
  lVar3 = param_2[1];
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 8U) {
    sVar5 = param_2[2] * 2;
    uVar4 = lVar3 + 1000;
    if (sVar5 < uVar4 || sVar5 - uVar4 == 0) {
      sVar5 = uVar4;
    }
    param_2[2] = sVar5;
    pvVar2 = realloc(pvVar2,sVar5);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
  }
  *(undefined8 *)((long)pvVar2 + lVar3) = 0x7470656378656f6e;
  lVar1 = param_2[1];
  pvVar2 = (void *)*param_2;
  uVar4 = lVar1 + 9;
  lVar3 = lVar1 + 8;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  param_2[1] = lVar3;
  if ((ulong)param_2[2] < uVar4) {
    sVar5 = param_2[2] * 2;
    uVar4 = lVar1 + 0x3e9;
    if (sVar5 < uVar4 || sVar5 - uVar4 == 0) {
      sVar5 = uVar4;
    }
    param_2[2] = sVar5;
    pvVar2 = realloc(pvVar2,sVar5);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
    uVar4 = lVar3 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x28;
  FUN_001347c4(*(undefined8 *)(param_1 + 0x10),param_2,0x13,0);
  lVar3 = param_2[1];
  pvVar2 = (void *)*param_2;
  uVar4 = lVar3 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar4) {
    sVar5 = param_2[2] * 2;
    uVar4 = lVar3 + 0x3e1;
    if (sVar5 < uVar4 || sVar5 - uVar4 == 0) {
      sVar5 = uVar4;
    }
    param_2[2] = sVar5;
    pvVar2 = realloc(pvVar2,sVar5);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
    uVar4 = lVar3 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x29;
  return;
}


// ===== 0013fa4c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0013fa54  FUN_0013fa54 =====

void FUN_0013fa54(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  size_t sVar6;
  long lVar7;
  bool bVar8;
  
  lVar5 = param_2[1];
  pvVar1 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar5 + 5U) {
    sVar6 = param_2[2] * 2;
    uVar4 = lVar5 + 0x3e5;
    if (sVar6 < uVar4 || sVar6 - uVar4 == 0) {
      sVar6 = uVar4;
    }
    param_2[2] = sVar6;
    pvVar1 = realloc(pvVar1,sVar6);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = param_2[1];
  }
  *(undefined1 *)((undefined4 *)((long)pvVar1 + lVar5) + 1) = 0x77;
  *(undefined4 *)((long)pvVar1 + lVar5) = 0x6f726874;
  lVar7 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar4 = lVar7 + 6;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  lVar5 = lVar7 + 5;
  param_2[1] = lVar5;
  if ((ulong)param_2[2] < uVar4) {
    sVar6 = param_2[2] * 2;
    uVar4 = lVar7 + 0x3e6;
    if (sVar6 < uVar4 || sVar6 - uVar4 == 0) {
      sVar6 = uVar4;
    }
    param_2[2] = sVar6;
    pvVar1 = realloc(pvVar1,sVar6);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = param_2[1];
    uVar4 = lVar5 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar5) = 0x28;
  lVar5 = param_2[1];
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar7 = 0;
    bVar8 = true;
    do {
      while( true ) {
        lVar2 = lVar5;
        if (!bVar8) {
          pvVar1 = (void *)*param_2;
          if ((ulong)param_2[2] < lVar5 + 2U) {
            sVar6 = param_2[2] * 2;
            uVar4 = lVar5 + 0x3e2;
            if (sVar6 < uVar4 || sVar6 - uVar4 == 0) {
              sVar6 = uVar4;
            }
            param_2[2] = sVar6;
            pvVar1 = realloc(pvVar1,sVar6);
            *param_2 = pvVar1;
            if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            lVar2 = param_2[1];
          }
          *(undefined2 *)((long)pvVar1 + lVar2) = 0x202c;
          lVar2 = param_2[1] + 2;
          param_2[1] = lVar2;
        }
        FUN_001347c4(*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar7 * 8),param_2,0x12,0);
        lVar3 = param_2[1];
        if (lVar2 == lVar3) break;
        bVar8 = false;
        lVar7 = lVar7 + 1;
        lVar5 = lVar3;
        if (lVar7 == *(long *)(param_1 + 0x18)) goto LAB_0013fbf0;
      }
      param_2[1] = lVar5;
      lVar7 = lVar7 + 1;
    } while (lVar7 != *(long *)(param_1 + 0x18));
  }
LAB_0013fbf0:
  uVar4 = lVar5 + 1;
  pvVar1 = (void *)*param_2;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar4) {
    sVar6 = param_2[2] * 2;
    uVar4 = lVar5 + 0x3e1;
    if (sVar6 < uVar4 || sVar6 - uVar4 == 0) {
      sVar6 = uVar4;
    }
    param_2[2] = sVar6;
    pvVar1 = realloc(pvVar1,sVar6);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = param_2[1];
    uVar4 = lVar5 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar5) = 0x29;
  return;
}


// ===== 0013fc70  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0013fc78  FUN_0013fc78 =====

undefined8 FUN_0013fc78(void)

{
  return 1;
}


// ===== 0013fc84  FUN_0013fc84 =====

undefined8 FUN_0013fc84(void)

{
  return 1;
}


// ===== 0013fc90  FUN_0013fc90 =====

void FUN_0013fc90(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *__ptr;
  long lVar2;
  size_t __size;
  
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  lVar2 = param_2[1];
  __ptr = (void *)*param_2;
  if ((ulong)param_2[2] < lVar2 + 1U) {
    __size = param_2[2] * 2;
    uVar1 = lVar2 + 0x3e1;
    if (__size < uVar1 || __size - uVar1 == 0) {
      __size = uVar1;
    }
    param_2[2] = __size;
    __ptr = realloc(__ptr,__size);
    *param_2 = __ptr;
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
  }
  *(undefined1 *)((long)__ptr + lVar2) = 0x20;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 0013fd14  FUN_0013fd14 =====

void FUN_0013fd14(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  size_t sVar8;
  long *plVar9;
  long lVar10;
  bool bVar11;
  
  lVar4 = param_2[1];
  pvVar2 = (void *)*param_2;
  uVar7 = lVar4 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  if ((ulong)param_2[2] < uVar7) {
    sVar8 = param_2[2] * 2;
    uVar7 = lVar4 + 0x3e1;
    if (sVar8 < uVar7 || sVar8 - uVar7 == 0) {
      sVar8 = uVar7;
    }
    param_2[2] = sVar8;
    pvVar2 = realloc(pvVar2,sVar8);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
    uVar7 = lVar4 + 1;
  }
  param_2[1] = uVar7;
  *(undefined1 *)((long)pvVar2 + lVar4) = 0x28;
  lVar4 = param_2[1];
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar10 = 0;
    bVar11 = true;
    do {
      while( true ) {
        lVar5 = lVar4;
        if (!bVar11) {
          pvVar2 = (void *)*param_2;
          if ((ulong)param_2[2] < lVar4 + 2U) {
            sVar8 = param_2[2] * 2;
            uVar7 = lVar4 + 0x3e2;
            if (sVar8 < uVar7 || sVar8 - uVar7 == 0) {
              sVar8 = uVar7;
            }
            param_2[2] = sVar8;
            pvVar2 = realloc(pvVar2,sVar8);
            *param_2 = pvVar2;
            if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            lVar5 = param_2[1];
          }
          *(undefined2 *)((long)pvVar2 + lVar5) = 0x202c;
          lVar5 = param_2[1] + 2;
          param_2[1] = lVar5;
        }
        FUN_001347c4(*(undefined8 *)(*(long *)(param_1 + 0x18) + lVar10 * 8),param_2,0x12,0);
        lVar6 = param_2[1];
        if (lVar5 == lVar6) break;
        bVar11 = false;
        lVar10 = lVar10 + 1;
        lVar4 = lVar6;
        if (lVar10 == *(long *)(param_1 + 0x20)) goto LAB_0013fe50;
      }
      param_2[1] = lVar4;
      lVar10 = lVar10 + 1;
    } while (lVar10 != *(long *)(param_1 + 0x20));
  }
LAB_0013fe50:
  uVar7 = lVar4 + 1;
  pvVar2 = (void *)*param_2;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar7) {
    sVar8 = param_2[2] * 2;
    uVar7 = lVar4 + 0x3e1;
    if (sVar8 < uVar7 || sVar8 - uVar7 == 0) {
      sVar8 = uVar7;
    }
    param_2[2] = sVar8;
    pvVar2 = realloc(pvVar2,sVar8);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
    uVar7 = lVar4 + 1;
  }
  param_2[1] = uVar7;
  *(undefined1 *)((long)pvVar2 + lVar4) = 0x29;
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))(*(long **)(param_1 + 0x10),param_2);
  uVar3 = *(uint *)(param_1 + 0x28);
  if ((uVar3 & 1) != 0) {
    lVar4 = param_2[1];
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar4 + 6U) {
      sVar8 = param_2[2] * 2;
      uVar7 = lVar4 + 0x3e6;
      if (sVar8 < uVar7 || sVar8 - uVar7 == 0) {
        sVar8 = uVar7;
      }
      param_2[2] = sVar8;
      pvVar2 = realloc(pvVar2,sVar8);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
    }
    *(undefined2 *)((undefined4 *)((long)pvVar2 + lVar4) + 1) = 0x7473;
    *(undefined4 *)((long)pvVar2 + lVar4) = 0x6e6f6320;
    uVar3 = *(uint *)(param_1 + 0x28);
    param_2[1] = param_2[1] + 6;
  }
  if ((uVar3 >> 1 & 1) != 0) {
    lVar4 = param_2[1];
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar4 + 9U) {
      sVar8 = param_2[2] * 2;
      uVar7 = lVar4 + 0x3e9;
      if (sVar8 < uVar7 || sVar8 - uVar7 == 0) {
        sVar8 = uVar7;
      }
      param_2[2] = sVar8;
      pvVar2 = realloc(pvVar2,sVar8);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
    }
    uVar1 = s_volatile_00113cfc._0_8_;
    ((char *)((long)pvVar2 + lVar4))[8] = 'e';
    *(undefined8 *)((long)pvVar2 + lVar4) = uVar1;
    uVar3 = *(uint *)(param_1 + 0x28);
    param_2[1] = param_2[1] + 9;
  }
  if ((uVar3 >> 2 & 1) != 0) {
    lVar4 = param_2[1];
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar4 + 9U) {
      sVar8 = param_2[2] * 2;
      uVar7 = lVar4 + 0x3e9;
      if (sVar8 < uVar7 || sVar8 - uVar7 == 0) {
        sVar8 = uVar7;
      }
      param_2[2] = sVar8;
      pvVar2 = realloc(pvVar2,sVar8);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
    }
    uVar1 = s_restrict_00113e01._0_8_;
    ((char *)((long)pvVar2 + lVar4))[8] = 't';
    *(undefined8 *)((long)pvVar2 + lVar4) = uVar1;
    param_2[1] = param_2[1] + 9;
  }
  if (*(char *)(param_1 + 0x2c) == '\x02') {
    lVar4 = param_2[1];
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar4 + 3U) {
      sVar8 = param_2[2] * 2;
      uVar7 = lVar4 + 0x3e3;
      if (sVar8 < uVar7 || sVar8 - uVar7 == 0) {
        sVar8 = uVar7;
      }
      param_2[2] = sVar8;
      pvVar2 = realloc(pvVar2,sVar8);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
    }
    *(undefined1 *)((undefined2 *)((long)pvVar2 + lVar4) + 1) = 0x26;
    *(undefined2 *)((long)pvVar2 + lVar4) = 0x2620;
    lVar4 = 3;
  }
  else {
    if (*(char *)(param_1 + 0x2c) != '\x01') goto LAB_001400a4;
    lVar4 = param_2[1];
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar4 + 2U) {
      sVar8 = param_2[2] * 2;
      uVar7 = lVar4 + 0x3e2;
      if (sVar8 < uVar7 || sVar8 - uVar7 == 0) {
        sVar8 = uVar7;
      }
      param_2[2] = sVar8;
      pvVar2 = realloc(pvVar2,sVar8);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
    }
    *(undefined2 *)((long)pvVar2 + lVar4) = 0x2620;
    lVar4 = 2;
  }
  param_2[1] = param_2[1] + lVar4;
LAB_001400a4:
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar4 = param_2[1];
    pvVar2 = (void *)*param_2;
    uVar7 = lVar4 + 1;
    if ((ulong)param_2[2] < uVar7) {
      sVar8 = param_2[2] * 2;
      uVar7 = lVar4 + 0x3e1;
      if (sVar8 < uVar7 || sVar8 - uVar7 == 0) {
        sVar8 = uVar7;
      }
      param_2[2] = sVar8;
      pvVar2 = realloc(pvVar2,sVar8);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
      uVar7 = lVar4 + 1;
    }
    param_2[1] = uVar7;
    *(undefined1 *)((long)pvVar2 + lVar4) = 0x20;
    plVar9 = *(long **)(param_1 + 0x30);
    (**(code **)(*plVar9 + 0x20))(plVar9,param_2);
    if ((*(ushort *)((long)plVar9 + 9) & 0xc0) != 0x40) {
                    /* WARNING: Could not recover jumptable at 0x00140160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x28))(plVar9,param_2);
      return;
    }
  }
  return;
}


// ===== 00140188  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00140190  FUN_00140190 =====

void FUN_00140190(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  size_t __size;
  size_t sVar4;
  void *__src;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x20))(plVar5);
  if ((*(ushort *)((long)plVar5 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar3 = param_2[1];
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 1U) {
    sVar4 = param_2[2] * 2;
    uVar1 = lVar3 + 0x3e1;
    if (sVar4 < uVar1 || sVar4 - uVar1 == 0) {
      sVar4 = uVar1;
    }
    param_2[2] = sVar4;
    pvVar2 = realloc(pvVar2,sVar4);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x3c;
  lVar3 = param_2[1] + 1;
  param_2[1] = lVar3;
  sVar4 = *(size_t *)(param_1 + 0x20);
  if (sVar4 != 0) {
    __src = *(void **)(param_1 + 0x18);
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar3 + sVar4) {
      __size = param_2[2] * 2;
      uVar1 = lVar3 + sVar4 + 0x3e0;
      if (__size < uVar1 || __size - uVar1 == 0) {
        __size = uVar1;
      }
      param_2[2] = __size;
      pvVar2 = realloc(pvVar2,__size);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
    }
    memcpy((void *)((long)pvVar2 + lVar3),__src,sVar4);
    lVar3 = param_2[1] + sVar4;
    param_2[1] = lVar3;
  }
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 1U) {
    sVar4 = param_2[2] * 2;
    uVar1 = lVar3 + 0x3e1;
    if (sVar4 < uVar1 || sVar4 - uVar1 == 0) {
      sVar4 = uVar1;
    }
    param_2[2] = sVar4;
    pvVar2 = realloc(pvVar2,sVar4);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x3e;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 001402fc  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00140304  FUN_00140304 =====

void FUN_00140304(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  size_t __size;
  size_t sVar4;
  long *plVar5;
  void *__src;
  
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x20))(plVar5);
  if ((*(ushort *)((long)plVar5 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar3 = param_2[1];
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 1U) {
    sVar4 = param_2[2] * 2;
    uVar1 = lVar3 + 0x3e1;
    if (sVar4 < uVar1 || sVar4 - uVar1 == 0) {
      sVar4 = uVar1;
    }
    param_2[2] = sVar4;
    pvVar2 = realloc(pvVar2,sVar4);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x20;
  lVar3 = param_2[1] + 1;
  param_2[1] = lVar3;
  sVar4 = *(size_t *)(param_1 + 0x20);
  if (sVar4 != 0) {
    __src = *(void **)(param_1 + 0x18);
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar3 + sVar4) {
      __size = param_2[2] * 2;
      uVar1 = lVar3 + sVar4 + 0x3e0;
      if (__size < uVar1 || __size - uVar1 == 0) {
        __size = uVar1;
      }
      param_2[2] = __size;
      pvVar2 = realloc(pvVar2,__size);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
    }
    memcpy((void *)((long)pvVar2 + lVar3),__src,sVar4);
    param_2[1] = param_2[1] + sVar4;
  }
  plVar5 = *(long **)(param_1 + 0x28);
  if ((plVar5 != (long *)0x0) &&
     ((**(code **)(*plVar5 + 0x20))(plVar5,param_2), (*(ushort *)((long)plVar5 + 9) & 0xc0) != 0x40)
     ) {
                    /* WARNING: Could not recover jumptable at 0x00140464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
    return;
  }
  return;
}


// ===== 00140470  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00140478  FUN_00140478 =====

ulong FUN_00140478(long param_1)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *(byte *)((long)*(undefined8 **)(param_1 + 0x10) + 9);
  if ((bVar1 & 0xc0) == 0x80) {
                    /* WARNING: Could not recover jumptable at 0x00140498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x10))();
    return uVar2;
  }
  return (ulong)(bVar1 < 0x40);
}


// ===== 001404a8  FUN_001404a8 =====

ulong FUN_001404a8(long param_1)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *(byte *)((long)*(long **)(param_1 + 0x10) + 10);
  if ((bVar1 & 3) == 2) {
                    /* WARNING: Could not recover jumptable at 0x001404c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 8))();
    return uVar2;
  }
  return (ulong)((bVar1 & 3) == 0);
}


// ===== 001404d8  FUN_001404d8 =====

ulong FUN_001404d8(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  
  uVar1 = *(ushort *)((long)*(long **)(param_1 + 0x10) + 9) >> 10 & 3;
  if (uVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x001404f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
    return uVar2;
  }
  return (ulong)(uVar1 == 0);
}


// ===== 00140508  FUN_00140508 =====

void FUN_00140508(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  void *pvVar3;
  uint uVar4;
  long lVar5;
  size_t sVar6;
  
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  uVar4 = *(uint *)(param_1 + 0xc);
  if ((uVar4 & 1) != 0) {
    lVar5 = param_2[1];
    pvVar3 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar5 + 6U) {
      sVar6 = param_2[2] * 2;
      uVar1 = lVar5 + 0x3e6;
      if (sVar6 < uVar1 || sVar6 - uVar1 == 0) {
        sVar6 = uVar1;
      }
      param_2[2] = sVar6;
      pvVar3 = realloc(pvVar3,sVar6);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar5 = param_2[1];
    }
    *(undefined2 *)((undefined4 *)((long)pvVar3 + lVar5) + 1) = 0x7473;
    *(undefined4 *)((long)pvVar3 + lVar5) = 0x6e6f6320;
    uVar4 = *(uint *)(param_1 + 0xc);
    param_2[1] = param_2[1] + 6;
  }
  if ((uVar4 >> 1 & 1) != 0) {
    lVar5 = param_2[1];
    pvVar3 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar5 + 9U) {
      sVar6 = param_2[2] * 2;
      uVar1 = lVar5 + 0x3e9;
      if (sVar6 < uVar1 || sVar6 - uVar1 == 0) {
        sVar6 = uVar1;
      }
      param_2[2] = sVar6;
      pvVar3 = realloc(pvVar3,sVar6);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar5 = param_2[1];
    }
    uVar2 = s_volatile_00113cfc._0_8_;
    ((char *)((long)pvVar3 + lVar5))[8] = 'e';
    *(undefined8 *)((long)pvVar3 + lVar5) = uVar2;
    uVar4 = *(uint *)(param_1 + 0xc);
    param_2[1] = param_2[1] + 9;
  }
  if ((uVar4 >> 2 & 1) != 0) {
    lVar5 = param_2[1];
    pvVar3 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar5 + 9U) {
      sVar6 = param_2[2] * 2;
      uVar1 = lVar5 + 0x3e9;
      if (sVar6 < uVar1 || sVar6 - uVar1 == 0) {
        sVar6 = uVar1;
      }
      param_2[2] = sVar6;
      pvVar3 = realloc(pvVar3,sVar6);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar5 = param_2[1];
    }
    uVar2 = s_restrict_00113e01._0_8_;
    ((char *)((long)pvVar3 + lVar5))[8] = 't';
    *(undefined8 *)((long)pvVar3 + lVar5) = uVar2;
    param_2[1] = param_2[1] + 9;
  }
  return;
}


// ===== 00140680  FUN_00140680 =====

void FUN_00140680(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00140690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))();
  return;
}


// ===== 00140694  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0014069c  FUN_0014069c =====

void FUN_0014069c(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  size_t __size;
  ulong uVar3;
  long *plVar4;
  size_t sVar5;
  void *__src;
  
  sVar5 = *(size_t *)(param_1 + 0x18);
  lVar2 = param_2[1];
  if (sVar5 != 0) {
    __src = *(void **)(param_1 + 0x10);
    pvVar1 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar2 + sVar5) {
      __size = param_2[2] * 2;
      uVar3 = lVar2 + sVar5 + 0x3e0;
      if (__size < uVar3 || __size - uVar3 == 0) {
        __size = uVar3;
      }
      param_2[2] = __size;
      pvVar1 = realloc(pvVar1,__size);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = param_2[1];
    }
    memcpy((void *)((long)pvVar1 + lVar2),__src,sVar5);
    lVar2 = param_2[1] + sVar5;
    param_2[1] = lVar2;
  }
  uVar3 = lVar2 + 1;
  pvVar1 = (void *)*param_2;
  if ((ulong)param_2[2] < uVar3) {
    sVar5 = param_2[2] * 2;
    uVar3 = lVar2 + 0x3e1;
    if (sVar5 < uVar3 || sVar5 - uVar3 == 0) {
      sVar5 = uVar3;
    }
    param_2[2] = sVar5;
    pvVar1 = realloc(pvVar1,sVar5);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
    uVar3 = lVar2 + 1;
  }
  param_2[1] = uVar3;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x28;
  plVar4 = *(long **)(param_1 + 0x20);
  (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
  if ((*(ushort *)((long)plVar4 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  }
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar3 = lVar2 + 1;
  if ((ulong)param_2[2] < uVar3) {
    sVar5 = param_2[2] * 2;
    uVar3 = lVar2 + 0x3e1;
    if (sVar5 < uVar3 || sVar5 - uVar3 == 0) {
      sVar5 = uVar3;
    }
    param_2[2] = sVar5;
    pvVar1 = realloc(pvVar1,sVar5);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
    uVar3 = lVar2 + 1;
  }
  param_2[1] = uVar3;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x29;
  return;
}


// ===== 00140808  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00140810  FUN_00140810 =====

void FUN_00140810(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *__ptr;
  long lVar2;
  size_t __size;
  long *plVar3;
  
  lVar2 = param_2[1];
  __ptr = (void *)*param_2;
  if ((ulong)param_2[2] < lVar2 + 6U) {
    __size = param_2[2] * 2;
    uVar1 = lVar2 + 0x3e6;
    if (__size < uVar1 || __size - uVar1 == 0) {
      __size = uVar1;
    }
    param_2[2] = __size;
    __ptr = realloc(__ptr,__size);
    *param_2 = __ptr;
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
  }
  *(undefined2 *)((undefined4 *)((long)__ptr + lVar2) + 1) = 0x7461;
  *(undefined4 *)((long)__ptr + lVar2) = 0x6f6c465f;
  plVar3 = *(long **)(param_1 + 0x10);
  lVar2 = *plVar3;
  param_2[1] = param_2[1] + 6;
  (**(code **)(lVar2 + 0x20))(plVar3,param_2);
  if ((*(ushort *)((long)plVar3 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001408e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  return;
}


// ===== 001408e8  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001408f0  FUN_001408f0 =====

void FUN_001408f0(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  size_t sVar5;
  ulong uVar6;
  
  lVar4 = param_2[1];
  if (*(char *)(param_1 + 0x18) == '\0') {
    pvVar3 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar4 + 9U) {
      sVar5 = param_2[2] * 2;
      uVar6 = lVar4 + 0x3e9;
      if (sVar5 < uVar6 || sVar5 - uVar6 == 0) {
        sVar5 = uVar6;
      }
      param_2[2] = sVar5;
      pvVar3 = realloc(pvVar3,sVar5);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
    }
    uVar2 = s_unsigned_001128bf._0_8_;
    ((char *)((long)pvVar3 + lVar4))[8] = ' ';
    *(undefined8 *)((long)pvVar3 + lVar4) = uVar2;
    lVar1 = param_2[1];
    uVar6 = param_2[2];
    lVar4 = lVar1 + 9;
    param_2[1] = lVar4;
    pvVar3 = (void *)*param_2;
    if (lVar1 + 0x10U <= uVar6) goto LAB_001409c0;
  }
  else {
    uVar6 = param_2[2];
    pvVar3 = (void *)*param_2;
    if (lVar4 + 7U <= uVar6) goto LAB_001409c0;
  }
  sVar5 = uVar6 * 2;
  uVar6 = lVar4 + 999;
  if (sVar5 < uVar6 || sVar5 - uVar6 == 0) {
    sVar5 = uVar6;
  }
  param_2[2] = sVar5;
  pvVar3 = realloc(pvVar3,sVar5);
  *param_2 = pvVar3;
  if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar4 = param_2[1];
LAB_001409c0:
  *(undefined4 *)((long)pvVar3 + lVar4 + 3) = 0x746e4974;
  *(undefined4 *)((long)pvVar3 + lVar4) = 0x7469425f;
  lVar1 = param_2[1];
  pvVar3 = (void *)*param_2;
  uVar6 = lVar1 + 8;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  lVar4 = lVar1 + 7;
  param_2[1] = lVar4;
  if ((ulong)param_2[2] < uVar6) {
    sVar5 = param_2[2] * 2;
    uVar6 = lVar1 + 1000;
    if (sVar5 < uVar6 || sVar5 - uVar6 == 0) {
      sVar5 = uVar6;
    }
    param_2[2] = sVar5;
    pvVar3 = realloc(pvVar3,sVar5);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
    uVar6 = lVar4 + 1;
  }
  param_2[1] = uVar6;
  *(undefined1 *)((long)pvVar3 + lVar4) = 0x28;
  FUN_001347c4(*(undefined8 *)(param_1 + 0x10),param_2,0x13,0);
  lVar4 = param_2[1];
  pvVar3 = (void *)*param_2;
  uVar6 = lVar4 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar6) {
    sVar5 = param_2[2] * 2;
    uVar6 = lVar4 + 0x3e1;
    if (sVar5 < uVar6 || sVar5 - uVar6 == 0) {
      sVar5 = uVar6;
    }
    param_2[2] = sVar5;
    pvVar3 = realloc(pvVar3,sVar5);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
    uVar6 = lVar4 + 1;
  }
  param_2[1] = uVar6;
  *(undefined1 *)((long)pvVar3 + lVar4) = 0x29;
  return;
}


// ===== 00140ac0  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00140ac8  FUN_00140ac8 =====

void FUN_00140ac8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *__ptr;
  size_t __size;
  long lVar2;
  size_t __n;
  void *__src;
  
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  __n = *(size_t *)(param_1 + 0x20);
  if (__n != 0) {
    lVar2 = param_2[1];
    __ptr = (void *)*param_2;
    __src = *(void **)(param_1 + 0x18);
    if ((ulong)param_2[2] < lVar2 + __n) {
      __size = param_2[2] * 2;
      uVar1 = lVar2 + __n + 0x3e0;
      if (__size < uVar1 || __size - uVar1 == 0) {
        __size = uVar1;
      }
      param_2[2] = __size;
      __ptr = realloc(__ptr,__size);
      *param_2 = __ptr;
      if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = param_2[1];
    }
    memcpy((void *)((long)__ptr + lVar2),__src,__n);
    param_2[1] = param_2[1] + __n;
  }
  return;
}


// ===== 00140b6c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00140b74  FUN_00140b74 =====

void FUN_00140b74(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar4 + 8);
  puVar1 = (undefined8 *)pvVar4;
  if (lVar2 - 0xfd0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_001507c8;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x1e;
  uVar3 = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  return;
}


// ===== 00140c14  FUN_00140c14 =====

void FUN_00140c14(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar5 + 8);
  puVar1 = (undefined8 *)pvVar5;
  if (lVar2 - 0xfd0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar5;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_00150838;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x1d;
  uVar3 = *param_2;
  uVar4 = *param_3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar4;
  return;
}


// ===== 00140cbc  FUN_00140cbc =====

void FUN_00140cbc(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  size_t sVar5;
  long *plVar6;
  
  lVar4 = param_2[1];
  pvVar3 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar4 + 0xdU) {
    sVar5 = param_2[2] * 2;
    uVar1 = lVar4 + 0x3ed;
    if (sVar5 < uVar1 || sVar5 - uVar1 == 0) {
      sVar5 = uVar1;
    }
    param_2[2] = sVar5;
    pvVar3 = realloc(pvVar3,sVar5);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
  }
  uVar2 = CONCAT53(s_pixel_vector__00113e63._8_5_,s_pixel_vector__00113e63._5_3_);
  *(undefined8 *)((long)pvVar3 + lVar4) =
       CONCAT35(s_pixel_vector__00113e63._5_3_,s_pixel_vector__00113e63._0_5_);
  *(undefined8 *)((long)pvVar3 + lVar4 + 5) = uVar2;
  plVar6 = *(long **)(param_1 + 0x10);
  lVar4 = *plVar6;
  param_2[1] = param_2[1] + 0xd;
  (**(code **)(lVar4 + 0x20))(plVar6,param_2);
  if ((*(ushort *)((long)plVar6 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
  }
  lVar4 = param_2[1];
  pvVar3 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar4 + 1U) {
    sVar5 = param_2[2] * 2;
    uVar1 = lVar4 + 0x3e1;
    if (sVar5 < uVar1 || sVar5 - uVar1 == 0) {
      sVar5 = uVar1;
    }
    param_2[2] = sVar5;
    pvVar3 = realloc(pvVar3,sVar5);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar4) = 0x5d;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 00140ddc  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00140de4  FUN_00140de4 =====

void FUN_00140de4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  size_t sVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x20))(plVar5);
  if ((*(ushort *)((long)plVar5 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar3 = param_2[1];
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 8U) {
    sVar4 = param_2[2] * 2;
    uVar1 = lVar3 + 1000;
    if (sVar4 < uVar1 || sVar4 - uVar1 == 0) {
      sVar4 = uVar1;
    }
    param_2[2] = sVar4;
    pvVar2 = realloc(pvVar2,sVar4);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
  }
  *(undefined8 *)((long)pvVar2 + lVar3) = 0x5b726f7463657620;
  plVar5 = *(long **)(param_1 + 0x18);
  param_2[1] = param_2[1] + 8;
  if ((plVar5 != (long *)0x0) &&
     ((**(code **)(*plVar5 + 0x20))(plVar5,param_2), (*(ushort *)((long)plVar5 + 9) & 0xc0) != 0x40)
     ) {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar3 = param_2[1];
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 1U) {
    sVar4 = param_2[2] * 2;
    uVar1 = lVar3 + 0x3e1;
    if (sVar4 < uVar1 || sVar4 - uVar1 == 0) {
      sVar4 = uVar1;
    }
    param_2[2] = sVar4;
    pvVar2 = realloc(pvVar2,sVar4);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x5d;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 00140f38  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00140f40  FUN_00140f40 =====

void FUN_00140f40(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar5 + 8);
  puVar1 = (undefined8 *)pvVar5;
  if (lVar2 - 0xfd0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar5;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_001508a8;
  uVar4 = *param_2;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0xf;
  uVar3 = *param_3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x400;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar4;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar3;
  return;
}


// ===== 00140fe4  FUN_00140fe4 =====

undefined8 FUN_00140fe4(void)

{
  return 1;
}


// ===== 00140ff0  FUN_00140ff0 =====

undefined8 FUN_00140ff0(void)

{
  return 1;
}


// ===== 00140ffc  FUN_00140ffc =====

void FUN_00140ffc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0014100c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  return;
}


// ===== 00141010  FUN_00141010 =====

void FUN_00141010(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  size_t sVar4;
  long *plVar5;
  
  lVar3 = param_2[1];
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00127d24("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/Utility.h",0xae,&DAT_001128a6)
    ;
  }
  pvVar2 = (void *)*param_2;
  if (*(char *)((long)pvVar2 + lVar3 + -1) != ']') {
    if ((ulong)param_2[2] < lVar3 + 1U) {
      sVar4 = param_2[2] * 2;
      uVar1 = lVar3 + 0x3e1;
      if (sVar4 < uVar1 || sVar4 - uVar1 == 0) {
        sVar4 = uVar1;
      }
      param_2[2] = sVar4;
      pvVar2 = realloc(pvVar2,sVar4);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x20;
    pvVar2 = (void *)*param_2;
    lVar3 = param_2[1] + 1;
    param_2[1] = lVar3;
  }
  if ((ulong)param_2[2] < lVar3 + 1U) {
    sVar4 = param_2[2] * 2;
    uVar1 = lVar3 + 0x3e1;
    if (sVar4 < uVar1 || sVar4 - uVar1 == 0) {
      sVar4 = uVar1;
    }
    param_2[2] = sVar4;
    pvVar2 = realloc(pvVar2,sVar4);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x5b;
  plVar5 = *(long **)(param_1 + 0x18);
  param_2[1] = param_2[1] + 1;
  if ((plVar5 != (long *)0x0) &&
     ((**(code **)(*plVar5 + 0x20))(plVar5,param_2), (*(ushort *)((long)plVar5 + 9) & 0xc0) != 0x40)
     ) {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar3 = param_2[1];
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 1U) {
    sVar4 = param_2[2] * 2;
    uVar1 = lVar3 + 0x3e1;
    if (sVar4 < uVar1 || sVar4 - uVar1 == 0) {
      sVar4 = uVar1;
    }
    param_2[2] = sVar4;
    pvVar2 = realloc(pvVar2,sVar4);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x5d;
  plVar5 = *(long **)(param_1 + 0x10);
  lVar3 = *plVar5;
  param_2[1] = param_2[1] + 1;
                    /* WARNING: Could not recover jumptable at 0x00141184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x28))(plVar5,param_2);
  return;
}


// ===== 001411b4  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001411bc  FUN_001411bc =====

void FUN_001411bc(long param_1,undefined8 *param_2,long *param_3)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  void *pvVar6;
  
  pvVar6 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar6 + 8);
  puVar2 = (undefined8 *)pvVar6;
  if (lVar3 - 0xfd0U < 0xfffffffffffff010) {
    puVar2 = (undefined8 *)malloc(0x1000);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = 0;
    *puVar2 = pvVar6;
    puVar2[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar2;
  }
  lVar4 = *param_3;
  *(long *)((long)puVar2 + 8) = lVar3 + 0x20;
  uVar1 = *(ushort *)(lVar4 + 9);
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_00150918;
  uVar5 = *param_2;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0xe;
  *(ushort *)((long)puVar2 + lVar3 + 0x19) =
       uVar1 & 0xc0 | 0x500 | *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x20) = uVar5;
  *(long *)((long)puVar2 + lVar3 + 0x28) = lVar4;
  return;
}


// ===== 00141270  FUN_00141270 =====

ulong FUN_00141270(long param_1)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *(byte *)((long)*(undefined8 **)(param_1 + 0x18) + 9);
  if ((bVar1 & 0xc0) == 0x80) {
                    /* WARNING: Could not recover jumptable at 0x00141290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x18))();
    return uVar2;
  }
  return (ulong)(bVar1 < 0x40);
}


// ===== 001412a0  FUN_001412a0 =====

void FUN_001412a0(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  long *plVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  undefined1 uVar7;
  size_t sVar8;
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  plVar3 = *(long **)(param_1 + 0x18);
  uVar1 = *(ushort *)((long)plVar3 + 9);
  uVar2 = uVar1 >> 8 & 3;
  if (uVar2 != 0) {
    if (uVar2 == 2) {
      uVar4 = (**(code **)(*plVar3 + 8))(plVar3,param_2);
      if ((uVar4 & 1) != 0) goto LAB_00141324;
      plVar3 = *(long **)(param_1 + 0x18);
      uVar1 = *(ushort *)((long)plVar3 + 9);
    }
    if (((uVar1 >> 10 & 3) != 0) &&
       (((uVar1 >> 10 & 3) != 2 ||
        (uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2), (uVar4 & 1) == 0)))) {
      lVar6 = param_2[1];
      pvVar5 = (void *)*param_2;
      if ((ulong)param_2[2] < lVar6 + 1U) {
        sVar8 = param_2[2] * 2;
        uVar4 = lVar6 + 0x3e1;
        if (sVar8 < uVar4 || sVar8 - uVar4 == 0) {
          sVar8 = uVar4;
        }
        param_2[2] = sVar8;
        pvVar5 = realloc(pvVar5,sVar8);
        *param_2 = pvVar5;
        if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar6 = param_2[1];
      }
      uVar7 = 0x20;
      goto LAB_001413a0;
    }
  }
LAB_00141324:
  lVar6 = param_2[1];
  pvVar5 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar6 + 1U) {
    sVar8 = param_2[2] * 2;
    uVar4 = lVar6 + 0x3e1;
    if (sVar8 < uVar4 || sVar8 - uVar4 == 0) {
      sVar8 = uVar4;
    }
    param_2[2] = sVar8;
    pvVar5 = realloc(pvVar5,sVar8);
    *param_2 = pvVar5;
    if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = param_2[1];
  }
  uVar7 = 0x28;
LAB_001413a0:
  *(undefined1 *)((long)pvVar5 + lVar6) = uVar7;
  plVar3 = *(long **)(param_1 + 0x10);
  lVar6 = *plVar3;
  param_2[1] = param_2[1] + 1;
  (**(code **)(lVar6 + 0x20))(plVar3,param_2);
  if ((*(ushort *)((long)plVar3 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  }
  lVar6 = param_2[1];
  pvVar5 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar6 + 3U) {
    sVar8 = param_2[2] * 2;
    uVar4 = lVar6 + 0x3e3;
    if (sVar8 < uVar4 || sVar8 - uVar4 == 0) {
      sVar8 = uVar4;
    }
    param_2[2] = sVar8;
    pvVar5 = realloc(pvVar5,sVar8);
    *param_2 = pvVar5;
    if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = param_2[1];
  }
  *(undefined1 *)((undefined2 *)((long)pvVar5 + lVar6) + 1) = 0x2a;
  *(undefined2 *)((long)pvVar5 + lVar6) = 0x3a3a;
  param_2[1] = param_2[1] + 3;
  return;
}


// ===== 00141460  FUN_00141460 =====

void FUN_00141460(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  long *plVar3;
  ulong uVar4;
  void *__ptr;
  long lVar5;
  size_t __size;
  
  plVar3 = *(long **)(param_1 + 0x18);
  uVar1 = *(ushort *)((long)plVar3 + 9);
  uVar2 = uVar1 >> 8 & 3;
  if (uVar2 != 0) {
    if (uVar2 == 2) {
      uVar4 = (**(code **)(*plVar3 + 8))(plVar3,param_2);
      if ((uVar4 & 1) != 0) goto LAB_001414d4;
      plVar3 = *(long **)(param_1 + 0x18);
      uVar1 = *(ushort *)((long)plVar3 + 9);
    }
    if (((uVar1 >> 10 & 3) != 0) &&
       (((uVar1 >> 10 & 3) != 2 ||
        (uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2), (uVar4 & 1) == 0))))
    goto LAB_00141520;
  }
LAB_001414d4:
  lVar5 = param_2[1];
  __ptr = (void *)*param_2;
  if ((ulong)param_2[2] < lVar5 + 1U) {
    __size = param_2[2] * 2;
    uVar4 = lVar5 + 0x3e1;
    if (__size < uVar4 || __size - uVar4 == 0) {
      __size = uVar4;
    }
    param_2[2] = __size;
    __ptr = realloc(__ptr,__size);
    *param_2 = __ptr;
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)__ptr + lVar5) = 0x29;
  param_2[1] = param_2[1] + 1;
LAB_00141520:
                    /* WARNING: Could not recover jumptable at 0x0014153c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),param_2);
  return;
}


// ===== 00141544  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0014154c  FUN_0014154c =====

void FUN_0014154c(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  size_t __size;
  ulong uVar3;
  long *plVar4;
  size_t sVar5;
  void *__src;
  
  sVar5 = *(size_t *)(param_1 + 0x18);
  lVar2 = param_2[1];
  if (sVar5 != 0) {
    __src = *(void **)(param_1 + 0x10);
    pvVar1 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar2 + sVar5) {
      __size = param_2[2] * 2;
      uVar3 = lVar2 + sVar5 + 0x3e0;
      if (__size < uVar3 || __size - uVar3 == 0) {
        __size = uVar3;
      }
      param_2[2] = __size;
      pvVar1 = realloc(pvVar1,__size);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = param_2[1];
    }
    memcpy((void *)((long)pvVar1 + lVar2),__src,sVar5);
    lVar2 = param_2[1] + sVar5;
    param_2[1] = lVar2;
  }
  uVar3 = lVar2 + 1;
  pvVar1 = (void *)*param_2;
  if ((ulong)param_2[2] < uVar3) {
    sVar5 = param_2[2] * 2;
    uVar3 = lVar2 + 0x3e1;
    if (sVar5 < uVar3 || sVar5 - uVar3 == 0) {
      sVar5 = uVar3;
    }
    param_2[2] = sVar5;
    pvVar1 = realloc(pvVar1,sVar5);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
    uVar3 = lVar2 + 1;
  }
  param_2[1] = uVar3;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x20;
  plVar4 = *(long **)(param_1 + 0x20);
  (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
  if ((*(ushort *)((long)plVar4 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00141670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}


// ===== 0014167c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00141684  FUN_00141684 =====

ulong FUN_00141684(long param_1)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *(byte *)((long)*(undefined8 **)(param_1 + 0x10) + 9);
  if ((bVar1 & 0xc0) == 0x80) {
                    /* WARNING: Could not recover jumptable at 0x001416a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x10))();
    return uVar2;
  }
  return (ulong)(bVar1 < 0x40);
}


// ===== 001416b4  FUN_001416b4 =====

void FUN_001416b4(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  long *plVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  size_t __size;
  undefined1 uVar7;
  size_t sVar8;
  void *__src;
  long *plVar9;
  
  plVar3 = *(long **)(param_1 + 0x10);
  if (((((char)plVar3[1] == '\v') && (lVar6 = plVar3[2], *(char *)(lVar6 + 8) == '\b')) &&
      (*(long *)(lVar6 + 0x18) == 0xb)) &&
     (**(long **)(lVar6 + 0x10) == 0x6a626f5f636a626f &&
      *(long *)((long)*(long **)(lVar6 + 0x10) + 3) == 0x7463656a626f5f63)) {
    pvVar5 = (void *)*param_2;
    plVar9 = param_2 + 1;
    lVar6 = *plVar9;
    if ((ulong)param_2[2] < lVar6 + 3U) {
      sVar8 = param_2[2] * 2;
      uVar4 = lVar6 + 0x3e3;
      if (sVar8 < uVar4 || sVar8 - uVar4 == 0) {
        sVar8 = uVar4;
      }
      param_2[2] = sVar8;
      pvVar5 = realloc(pvVar5,sVar8);
      *param_2 = pvVar5;
      if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar6 = *plVar9;
    }
    *(undefined1 *)((undefined2 *)((long)pvVar5 + lVar6) + 1) = 0x3c;
    *(undefined2 *)((long)pvVar5 + lVar6) = 0x6469;
    lVar6 = *plVar9 + 3;
    *plVar9 = lVar6;
    sVar8 = plVar3[4];
    if (sVar8 != 0) {
      __src = (void *)plVar3[3];
      pvVar5 = (void *)*param_2;
      if ((ulong)param_2[2] < lVar6 + sVar8) {
        __size = param_2[2] * 2;
        uVar4 = lVar6 + sVar8 + 0x3e0;
        if (__size < uVar4 || __size - uVar4 == 0) {
          __size = uVar4;
        }
        param_2[2] = __size;
        pvVar5 = realloc(pvVar5,__size);
        *param_2 = pvVar5;
        if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar6 = *plVar9;
      }
      memcpy((void *)((long)pvVar5 + lVar6),__src,sVar8);
      lVar6 = *plVar9 + sVar8;
      *plVar9 = lVar6;
    }
    pvVar5 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar6 + 1U) {
      sVar8 = param_2[2] * 2;
      uVar4 = lVar6 + 0x3e1;
      if (sVar8 < uVar4 || sVar8 - uVar4 == 0) {
        sVar8 = uVar4;
      }
      param_2[2] = sVar8;
      pvVar5 = realloc(pvVar5,sVar8);
      *param_2 = pvVar5;
      if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar6 = *plVar9;
    }
    uVar7 = 0x3e;
    goto LAB_001418a8;
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,param_2);
  plVar3 = *(long **)(param_1 + 0x10);
  if (((*(byte *)((long)plVar3 + 10) & 3) == 0) ||
     (((*(byte *)((long)plVar3 + 10) & 3) == 2 &&
      (uVar4 = (**(code **)(*plVar3 + 8))(plVar3,param_2), (uVar4 & 1) != 0)))) {
    lVar6 = param_2[1];
    pvVar5 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar6 + 1U) {
      sVar8 = param_2[2] * 2;
      uVar4 = lVar6 + 0x3e1;
      if (sVar8 < uVar4 || sVar8 - uVar4 == 0) {
        sVar8 = uVar4;
      }
      param_2[2] = sVar8;
      pvVar5 = realloc(pvVar5,sVar8);
      *param_2 = pvVar5;
      if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar6 = param_2[1];
    }
    *(undefined1 *)((long)pvVar5 + lVar6) = 0x20;
    param_2[1] = param_2[1] + 1;
  }
  plVar3 = *(long **)(param_1 + 0x10);
  uVar1 = *(ushort *)((long)plVar3 + 9);
  uVar2 = uVar1 >> 8 & 3;
  if (uVar2 == 0) {
LAB_00141818:
    lVar6 = param_2[1];
    pvVar5 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar6 + 1U) {
      sVar8 = param_2[2] * 2;
      uVar4 = lVar6 + 0x3e1;
      if (sVar8 < uVar4 || sVar8 - uVar4 == 0) {
        sVar8 = uVar4;
      }
      param_2[2] = sVar8;
      pvVar5 = realloc(pvVar5,sVar8);
      *param_2 = pvVar5;
      if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar6 = param_2[1];
    }
    *(undefined1 *)((long)pvVar5 + lVar6) = 0x28;
    param_2[1] = param_2[1] + 1;
  }
  else {
    if (uVar2 == 2) {
      uVar4 = (**(code **)(*plVar3 + 8))(plVar3,param_2);
      if ((uVar4 & 1) != 0) goto LAB_00141818;
      plVar3 = *(long **)(param_1 + 0x10);
      uVar1 = *(ushort *)((long)plVar3 + 9);
    }
    if (((uVar1 >> 10 & 3) == 0) ||
       (((uVar1 >> 10 & 3) == 2 &&
        (uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2), (uVar4 & 1) != 0))))
    goto LAB_00141818;
  }
  pvVar5 = (void *)*param_2;
  lVar6 = param_2[1];
  if ((ulong)param_2[2] < lVar6 + 1U) {
    sVar8 = param_2[2] * 2;
    uVar4 = lVar6 + 0x3e1;
    if (sVar8 < uVar4 || sVar8 - uVar4 == 0) {
      sVar8 = uVar4;
    }
    param_2[2] = sVar8;
    pvVar5 = realloc(pvVar5,sVar8);
    *param_2 = pvVar5;
    if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = param_2[1];
  }
  uVar7 = 0x2a;
LAB_001418a8:
  *(undefined1 *)((long)pvVar5 + lVar6) = uVar7;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 001419f4  FUN_001419f4 =====

void FUN_001419f4(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  long *plVar3;
  ulong uVar4;
  void *__ptr;
  long lVar5;
  size_t __size;
  
  plVar3 = *(long **)(param_1 + 0x10);
  if (((((char)plVar3[1] == '\v') && (lVar5 = plVar3[2], *(char *)(lVar5 + 8) == '\b')) &&
      (*(long *)(lVar5 + 0x18) == 0xb)) &&
     (**(long **)(lVar5 + 0x10) == 0x6a626f5f636a626f &&
      *(long *)((long)*(long **)(lVar5 + 0x10) + 3) == 0x7463656a626f5f63)) {
    return;
  }
  uVar1 = *(ushort *)((long)plVar3 + 9);
  uVar2 = uVar1 >> 8 & 3;
  if (uVar2 != 0) {
    if (uVar2 == 2) {
      uVar4 = (**(code **)(*plVar3 + 8))(plVar3,param_2);
      if ((uVar4 & 1) != 0) goto LAB_00141ac8;
      plVar3 = *(long **)(param_1 + 0x10);
      uVar1 = *(ushort *)((long)plVar3 + 9);
    }
    if (((uVar1 >> 10 & 3) != 0) &&
       (((uVar1 >> 10 & 3) != 2 ||
        (uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2), (uVar4 & 1) == 0))))
    goto LAB_00141b14;
  }
LAB_00141ac8:
  lVar5 = param_2[1];
  __ptr = (void *)*param_2;
  if ((ulong)param_2[2] < lVar5 + 1U) {
    __size = param_2[2] * 2;
    uVar4 = lVar5 + 0x3e1;
    if (__size < uVar4 || __size - uVar4 == 0) {
      __size = uVar4;
    }
    param_2[2] = __size;
    __ptr = realloc(__ptr,__size);
    *param_2 = __ptr;
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)__ptr + lVar5) = 0x29;
  param_2[1] = param_2[1] + 1;
LAB_00141b14:
                    /* WARNING: Could not recover jumptable at 0x00141b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))(*(long **)(param_1 + 0x10),param_2);
  return;
}


// ===== 00141b48  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00141b50  FUN_00141b50 =====

ulong FUN_00141b50(long param_1)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *(byte *)((long)*(undefined8 **)(param_1 + 0x10) + 9);
  if ((bVar1 & 0xc0) == 0x80) {
                    /* WARNING: Could not recover jumptable at 0x00141b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x10))();
    return uVar2;
  }
  return (ulong)(bVar1 < 0x40);
}


// ===== 00141b80  FUN_00141b80 =====

void FUN_00141b80(long param_1,undefined8 *param_2)

{
  undefined *__src;
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  ulong uVar4;
  void *pvVar5;
  long *plVar6;
  long lVar7;
  size_t __size;
  size_t sVar8;
  undefined1 auVar9 [16];
  
  if (*(char *)(param_1 + 0x1c) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x1c) = 1;
                    /* try { // try from 00141bc8 to 00141cc3 has its CatchHandler @ 00141dac */
  auVar9 = FUN_00141f00(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),param_2);
  plVar6 = auVar9._8_8_;
  if (plVar6 == (long *)0x0) goto LAB_00141d88;
  (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
  if (((*(byte *)((long)plVar6 + 10) & 3) == 0) ||
     (((*(byte *)((long)plVar6 + 10) & 3) == 2 &&
      (uVar4 = (**(code **)(*plVar6 + 8))(plVar6,param_2), (uVar4 & 1) != 0)))) {
    lVar7 = param_2[1];
    pvVar5 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar7 + 1U) {
      sVar8 = param_2[2] * 2;
      uVar4 = lVar7 + 0x3e1;
      if (sVar8 < uVar4 || sVar8 - uVar4 == 0) {
        sVar8 = uVar4;
      }
      param_2[2] = sVar8;
      pvVar5 = realloc(pvVar5,sVar8);
      *param_2 = pvVar5;
      if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar7 = param_2[1];
    }
    *(undefined1 *)((long)pvVar5 + lVar7) = 0x20;
    param_2[1] = param_2[1] + 1;
  }
  uVar1 = *(ushort *)((long)plVar6 + 9);
  uVar2 = uVar1 >> 8 & 3;
  if (uVar2 == 0) {
LAB_00141cc8:
    lVar7 = param_2[1];
    pvVar5 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar7 + 1U) {
      sVar8 = param_2[2] * 2;
      uVar4 = lVar7 + 0x3e1;
      if (sVar8 < uVar4 || sVar8 - uVar4 == 0) {
        sVar8 = uVar4;
      }
      param_2[2] = sVar8;
      pvVar5 = realloc(pvVar5,sVar8);
      *param_2 = pvVar5;
      if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar7 = param_2[1];
    }
    *(undefined1 *)((long)pvVar5 + lVar7) = 0x28;
    param_2[1] = param_2[1] + 1;
  }
  else {
    if (uVar2 == 2) {
      uVar4 = (**(code **)(*plVar6 + 8))(plVar6,param_2);
      if ((uVar4 & 1) != 0) goto LAB_00141cc8;
      uVar1 = *(ushort *)((long)plVar6 + 9);
    }
    if (((uVar1 >> 10 & 3) == 0) ||
       (((uVar1 >> 10 & 3) == 2 &&
        (uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,param_2), (uVar4 & 1) != 0))))
    goto LAB_00141cc8;
  }
  bVar3 = (auVar9 & (undefined1  [16])0xffffffff) != (undefined1  [16])0x0;
  sVar8 = 1;
  if (bVar3) {
    sVar8 = 2;
  }
  lVar7 = param_2[1];
  pvVar5 = (void *)*param_2;
  __src = &UNK_00112b64;
  if (bVar3) {
    __src = &DAT_00112b66;
  }
  if ((ulong)param_2[2] < lVar7 + sVar8) {
    __size = param_2[2] * 2;
    uVar4 = lVar7 + sVar8 + 0x3e0;
    if (__size < uVar4 || __size - uVar4 == 0) {
      __size = uVar4;
    }
    param_2[2] = __size;
    pvVar5 = realloc(pvVar5,__size);
    *param_2 = pvVar5;
    if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00141da0 to 00141dab has its CatchHandler @ 00141dac */
      abort();
    }
    lVar7 = param_2[1];
  }
  memcpy((void *)((long)pvVar5 + lVar7),__src,sVar8);
  param_2[1] = param_2[1] + sVar8;
LAB_00141d88:
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return;
}


// ===== 00141db4  FUN_00141db4 =====

void FUN_00141db4(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ulong uVar3;
  void *__ptr;
  long *extraout_x1;
  long lVar4;
  size_t __size;
  
  if (*(char *)(param_1 + 0x1c) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x1c) = 1;
                    /* try { // try from 00141dfc to 00141ee7 has its CatchHandler @ 00141ee8 */
  FUN_00141f00(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),param_2);
  if (extraout_x1 == (long *)0x0) goto LAB_00141ecc;
  uVar1 = *(ushort *)((long)extraout_x1 + 9);
  uVar2 = uVar1 >> 8 & 3;
  if (uVar2 == 0) {
LAB_00141e6c:
    lVar4 = param_2[1];
    __ptr = (void *)*param_2;
    if ((ulong)param_2[2] < lVar4 + 1U) {
      __size = param_2[2] * 2;
      uVar3 = lVar4 + 0x3e1;
      if (__size < uVar3 || __size - uVar3 == 0) {
        __size = uVar3;
      }
      param_2[2] = __size;
      __ptr = realloc(__ptr,__size);
      *param_2 = __ptr;
      if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
    }
    *(undefined1 *)((long)__ptr + lVar4) = 0x29;
    param_2[1] = param_2[1] + 1;
  }
  else {
    if (uVar2 == 2) {
      uVar3 = (**(code **)(*extraout_x1 + 8))(extraout_x1,param_2);
      if ((uVar3 & 1) != 0) goto LAB_00141e6c;
      uVar1 = *(ushort *)((long)extraout_x1 + 9);
    }
    if (((uVar1 >> 10 & 3) == 0) ||
       (((uVar1 >> 10 & 3) == 2 &&
        (uVar3 = (**(code **)(*extraout_x1 + 0x10))(extraout_x1,param_2), (uVar3 & 1) != 0))))
    goto LAB_00141e6c;
  }
  (**(code **)(*extraout_x1 + 0x28))(extraout_x1,param_2);
LAB_00141ecc:
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return;
}


// ===== 00141ef0  FUN_00141ef0 =====

void FUN_00141ef0(void)

{
  return;
}


// ===== 00141ef8  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00141f00  FUN_00141f00 =====

undefined1  [16] FUN_00141f00(long *param_1,uint param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  size_t __n;
  undefined1 auVar6 [16];
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  local_88 = (undefined8 *)&stack0xffffffffffffffc0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  local_98 = &local_80;
  local_90 = &local_80;
  do {
    do {
                    /* try { // try from 00141f50 to 00141f5b has its CatchHandler @ 00142090 */
      lVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_3);
      if (*(char *)(lVar2 + 8) != '\r') {
        uVar5 = param_2;
        if (local_98 == &local_80) goto LAB_00142040;
        goto LAB_0014203c;
      }
      param_1 = *(long **)(lVar2 + 0x10);
      uVar5 = *(uint *)(lVar2 + 0x18);
      if ((int)param_2 <= (int)*(uint *)(lVar2 + 0x18)) {
        uVar5 = param_2;
      }
      if (local_90 == local_88) {
        __n = (long)local_90 - (long)local_98;
        if (local_98 == &local_80) {
          local_98 = (undefined8 *)malloc(__n * 2);
          if (local_98 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (local_90 != &local_80) {
            memcpy(local_98,&local_80,__n);
          }
        }
        else {
          local_98 = (undefined8 *)realloc(local_98,__n * 2);
          if (local_98 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        local_90 = (undefined8 *)((long)local_98 + __n);
        local_88 = local_98 + ((long)__n >> 2);
      }
      puVar1 = local_90 + 1;
      *local_90 = param_1;
      uVar3 = (long)puVar1 - (long)local_98 >> 3;
      param_2 = uVar5;
      local_90 = puVar1;
    } while (uVar3 < 2);
    uVar4 = uVar3 - 1 >> 1;
    if (uVar3 <= uVar4) {
                    /* try { // try from 00142064 to 0014208b has its CatchHandler @ 0014208c */
                    /* WARNING: Subroutine does not return */
      FUN_00127d24("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0x96,
                   "Invalid access!");
    }
  } while (param_1 != (long *)local_98[uVar4]);
  param_1 = (long *)0x0;
  if (local_98 != &local_80) {
LAB_0014203c:
    free(local_98);
    uVar5 = param_2;
  }
LAB_00142040:
  auVar6._4_4_ = 0;
  auVar6._0_4_ = uVar5;
  auVar6._8_8_ = param_1;
  return auVar6;
}


// ===== 001420ac  operator.new =====

/* operator new(unsigned long) */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  code *pcVar2;
  bad_alloc *this;
  
  if (param_1 < 2) {
    param_1 = 1;
  }
  while( true ) {
    pvVar1 = malloc(param_1);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    pcVar2 = (code *)std::get_new_handler();
    if (pcVar2 == (code *)0x0) break;
                    /* try { // try from 001420d8 to 001420db has its CatchHandler @ 00142118 */
    (*pcVar2)();
  }
  this = (bad_alloc *)__cxa_allocate_exception(8);
  std::bad_alloc::bad_alloc(this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_PTR_00150de8,PTR__bad_array_new_length_00150dd8);
}


// ===== 0014211c  operator.new =====

/* operator new(unsigned long, std::nothrow_t const&) */

void * operator_new(ulong param_1,nothrow_t *param_2)

{
  void *pvVar1;
  
                    /* try { // try from 00142128 to 0014212b has its CatchHandler @ 00142138 */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}


// ===== 00142154  operator.new[] =====

/* operator new[](unsigned long) */

void * operator_new__(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(param_1);
  return pvVar1;
}


// ===== 0014215c  operator.new[] =====

/* operator new[](unsigned long, std::nothrow_t const&) */

void * operator_new__(ulong param_1,nothrow_t *param_2)

{
  void *pvVar1;
  
                    /* try { // try from 00142168 to 0014216b has its CatchHandler @ 00142178 */
  pvVar1 = operator_new__(param_1);
  return pvVar1;
}


// ===== 00142194  operator.delete =====

/* operator delete(void*) */

void operator_delete(void *param_1)

{
  free(param_1);
  return;
}


// ===== 0014219c  operator.delete =====

/* operator delete(void*, std::nothrow_t const&) */

void operator_delete(void *param_1,nothrow_t *param_2)

{
  operator_delete(param_1);
  return;
}


// ===== 001421a4  operator.delete =====

/* operator delete(void*, unsigned long) */

void operator_delete(void *param_1,ulong param_2)

{
  operator_delete(param_1);
  return;
}


// ===== 001421ac  operator.delete[] =====

/* operator delete[](void*) */

void operator_delete__(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001421b4  operator.delete[] =====

/* operator delete[](void*, std::nothrow_t const&) */

void operator_delete__(void *param_1,nothrow_t *param_2)

{
  operator_delete__(param_1);
  return;
}


// ===== 001421bc  operator.delete[] =====

/* operator delete[](void*, unsigned long) */

void operator_delete__(void *param_1,ulong param_2)

{
  operator_delete__(param_1);
  return;
}


// ===== 001421c4  operator.new =====

/* operator new(unsigned long, std::align_val_t) */

void * operator_new(size_t param_1,size_t param_2)

{
  code *pcVar1;
  bad_alloc *this;
  void *local_28;
  
  if (param_1 < 2) {
    param_1 = 1;
  }
  if (param_2 < 9) {
    param_2 = 8;
  }
  while( true ) {
    local_28 = (void *)0x0;
                    /* try { // try from 001421f0 to 00142213 has its CatchHandler @ 00142254 */
    posix_memalign(&local_28,param_2,param_1);
    if (local_28 != (void *)0x0) {
      return local_28;
    }
    pcVar1 = (code *)std::get_new_handler();
    if (pcVar1 == (code *)0x0) break;
    (*pcVar1)();
  }
  this = (bad_alloc *)__cxa_allocate_exception(8);
  std::bad_alloc::bad_alloc(this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_PTR_00150de8,PTR__bad_array_new_length_00150dd8);
}


// ===== 00142258  operator.new =====

/* operator new(unsigned long, std::align_val_t, std::nothrow_t const&) */

void * operator_new(void)

{
  void *pvVar1;
  
                    /* try { // try from 00142264 to 00142267 has its CatchHandler @ 00142274 */
  pvVar1 = operator_new();
  return pvVar1;
}


// ===== 00142290  operator.new[] =====

/* operator new[](unsigned long, std::align_val_t) */

void * operator_new__(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new();
  return pvVar1;
}


// ===== 00142298  operator.new[] =====

/* operator new[](unsigned long, std::align_val_t, std::nothrow_t const&) */

void * operator_new__(void)

{
  void *pvVar1;
  
                    /* try { // try from 001422a4 to 001422a7 has its CatchHandler @ 001422b4 */
  pvVar1 = operator_new__();
  return pvVar1;
}


// ===== 001422d0  operator.delete =====

/* operator delete(void*, std::align_val_t) */

void operator_delete(void *param_1)

{
  free(param_1);
  return;
}


// ===== 001422d8  operator.delete =====

/* operator delete(void*, std::align_val_t, std::nothrow_t const&) */

void operator_delete(void)

{
  operator_delete();
  return;
}


// ===== 001422e0  operator.delete =====

/* operator delete(void*, unsigned long, std::align_val_t) */

void operator_delete(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  operator_delete(param_1,param_3);
  return;
}


// ===== 001422ec  operator.delete[] =====

/* operator delete[](void*, std::align_val_t) */

void operator_delete__(void)

{
  operator_delete();
  return;
}


// ===== 001422f4  operator.delete[] =====

/* operator delete[](void*, std::align_val_t, std::nothrow_t const&) */

void operator_delete__(void)

{
  operator_delete__();
  return;
}


// ===== 001422fc  operator.delete[] =====

/* operator delete[](void*, unsigned long, std::align_val_t) */

void operator_delete__(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  operator_delete__(param_1,param_3);
  return;
}


// ===== 00142308  FUN_00142308 =====

undefined8 FUN_00142308(undefined8 *param_1)

{
  return *param_1;
}


// ===== 00142314  FUN_00142314 =====

bool FUN_00142314(ulong *param_1)

{
  return *param_1 >> 8 == 0x434c4e47432b2b;
}


// ===== 00142338  __cxa_allocate_exception =====

long __cxa_allocate_exception(long param_1)

{
  void *__s;
  
                    /* try { // try from 0014234c to 00142353 has its CatchHandler @ 00142384 */
  __s = (void *)FUN_00142b08(param_1 + 0x8fU & 0xfffffffffffffff0);
  if (__s != (void *)0x0) {
    memset(__s,0,param_1 + 0x8fU & 0xfffffffffffffff0);
    return (long)__s + 0x80;
  }
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 00142388  __cxa_begin_catch =====

ulong * __cxa_begin_catch(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  
  uVar6 = *param_1;
                    /* try { // try from 0014239c to 0014239f has its CatchHandler @ 00142430 */
  plVar3 = (long *)__cxa_get_globals();
  puVar4 = param_1 + -0xc;
  if (uVar6 >> 8 == 0x434c4e47432b2b) {
    iVar2 = (int)param_1[-5];
    puVar5 = (ulong *)*plVar3;
    iVar1 = -iVar2;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    *(int *)(param_1 + -5) = iVar1 + 1;
    if (puVar4 != puVar5) {
      param_1[-6] = (ulong)puVar5;
      *plVar3 = (long)puVar4;
    }
    puVar4 = (ulong *)param_1[-1];
    *(int *)(plVar3 + 1) = (int)plVar3[1] + -1;
    return puVar4;
  }
  if (*plVar3 == 0) {
    *plVar3 = (long)puVar4;
    return param_1 + 4;
  }
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 00142434  __cxa_free_exception =====

void __cxa_free_exception(long param_1)

{
                    /* try { // try from 00142444 to 00142447 has its CatchHandler @ 00142454 */
  FUN_00142cec(param_1 + -0x80);
  return;
}


// ===== 00142458  __cxa_allocate_dependent_exception =====

void __cxa_allocate_dependent_exception(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00142b08(0x80);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 00142494  __cxa_free_dependent_exception =====

void __cxa_free_dependent_exception(void)

{
  FUN_00142cec();
  return;
}


// ===== 0014249c  __cxa_throw =====

void __cxa_throw(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x1;
  
  lVar2 = __cxa_get_globals();
  uVar3 = std::get_unexpected();
  *(undefined8 *)(param_1 + -0x60) = uVar3;
  uVar3 = std::get_terminate();
  *(undefined8 *)(param_1 + -0x20) = 0x434c4e47432b2b00;
  iVar1 = *(int *)(lVar2 + 8);
  *(undefined8 *)(param_1 + -0x58) = uVar3;
  *(undefined8 *)(param_1 + -0x68) = param_3;
  *(undefined8 *)(param_1 + -0x78) = 1;
  *(undefined8 *)(param_1 + -0x70) = param_2;
  *(int *)(lVar2 + 8) = iVar1 + 1;
  *(code **)(param_1 + -0x18) = FUN_00142520;
  FUN_00144580((undefined8 *)(param_1 + -0x20));
  iVar1 = FUN_00142588(param_1 + -0x80);
  if (iVar1 == 1) {
    lVar2 = FUN_00144550(0xffffffffffffffff,extraout_x1 + -0x58);
    if (lVar2 == 1) {
      if (*(code **)(extraout_x1 + -0x48) != (code *)0x0) {
        (**(code **)(extraout_x1 + -0x48))(extraout_x1 + 0x20);
      }
      FUN_00142cec(extraout_x1 + -0x60);
    }
    return;
  }
  FUN_001276bc(*(undefined8 *)(extraout_x1 + -0x38));
                    /* WARNING: Subroutine does not return */
  FUN_0012677c();
}


// ===== 00142520  FUN_00142520 =====

void FUN_00142520(int param_1,long param_2)

{
  long lVar1;
  
  if (param_1 == 1) {
    lVar1 = FUN_00144550(0xffffffffffffffff,param_2 + -0x58);
    if (lVar1 == 1) {
      if (*(code **)(param_2 + -0x48) != (code *)0x0) {
                    /* try { // try from 00142558 to 0014255f has its CatchHandler @ 00142580 */
        (**(code **)(param_2 + -0x48))(param_2 + 0x20);
      }
                    /* try { // try from 00142560 to 00142567 has its CatchHandler @ 00142584 */
      FUN_00142cec(param_2 + -0x60);
    }
    return;
  }
  FUN_001276bc(*(undefined8 *)(param_2 + -0x38));
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00142558 with catch @ 00142580
                        */
  FUN_0012677c();
}


// ===== 00142588  FUN_00142588 =====

undefined8 FUN_00142588(long param_1)

{
  long lVar1;
  
  __cxa_begin_catch(param_1 + 0x60);
  lVar1 = FUN_001276bc(*(undefined8 *)(param_1 + 0x28));
  return *(undefined8 *)(lVar1 + -8);
}


// ===== 001425ac  __cxa_get_exception_ptr =====

undefined8 __cxa_get_exception_ptr(long param_1)

{
  return *(undefined8 *)(param_1 + -8);
}


// ===== 001425b8  __cxa_end_catch =====

void __cxa_end_catch(void)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = (long *)__cxa_get_globals_fast();
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    if (*(ulong *)(lVar3 + 0x60) >> 8 != 0x434c4e47432b2b) {
      FUN_0014498c((ulong *)(lVar3 + 0x60));
      *plVar2 = 0;
      return;
    }
    iVar1 = *(int *)(lVar3 + 0x38);
    if (iVar1 < 0) {
      *(int *)(lVar3 + 0x38) = iVar1 + 1;
      if (iVar1 == -1) {
        *plVar2 = *(long *)(lVar3 + 0x30);
        return;
      }
    }
    else {
      *(int *)(lVar3 + 0x38) = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        *plVar2 = *(long *)(lVar3 + 0x30);
        lVar4 = lVar3;
        if (*(char *)(lVar3 + 0x60) == '\x01') {
          lVar4 = *(long *)(lVar3 + 8) + -0x80;
          FUN_00142cec(lVar3);
        }
        lVar3 = FUN_00144550(0xffffffffffffffff,lVar4 + 8);
        if (lVar3 == 1) {
          if (*(code **)(lVar4 + 0x18) != (code *)0x0) {
                    /* try { // try from 001426a0 to 001426a7 has its CatchHandler @ 001426b4 */
            (**(code **)(lVar4 + 0x18))(lVar4 + 0x80);
          }
                    /* try { // try from 001426a8 to 001426af has its CatchHandler @ 001426b8 */
          FUN_00142cec(lVar4);
        }
      }
    }
  }
  return;
}


// ===== 001426bc  __cxa_decrement_exception_refcount =====

void __cxa_decrement_exception_refcount(long param_1)

{
  long lVar1;
  
  if ((param_1 != 0) && (lVar1 = FUN_00144550(0xffffffffffffffff,param_1 + -0x78), lVar1 == 1)) {
    if (*(code **)(param_1 + -0x68) != (code *)0x0) {
                    /* try { // try from 001426f0 to 001426f7 has its CatchHandler @ 00142710 */
      (**(code **)(param_1 + -0x68))(param_1);
    }
                    /* try { // try from 001426f8 to 001426ff has its CatchHandler @ 00142714 */
    FUN_00142cec(param_1 + -0x80);
  }
  return;
}


// ===== 00142718  __cxa_current_exception_type =====

long * __cxa_current_exception_type(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)__cxa_get_globals_fast();
  if (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if ((lVar2 == 0) || (*(ulong *)(lVar2 + 0x60) >> 8 != 0x434c4e47432b2b)) {
      return (long *)0x0;
    }
    plVar1 = *(long **)(lVar2 + 0x10);
  }
  return plVar1;
}


// ===== 00142770  __cxa_rethrow =====

void __cxa_rethrow(void)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  
  plVar3 = (long *)__cxa_get_globals();
  lVar8 = *plVar3;
  if (lVar8 != 0) {
    puVar6 = (ulong *)(lVar8 + 0x60);
    uVar4 = *puVar6;
    if ((uVar4 & 0xffffffffffffff00) == 0x434c4e47432b2b00) {
      lVar5 = plVar3[1];
      *(int *)(lVar8 + 0x38) = -*(int *)(lVar8 + 0x38);
      *(int *)(plVar3 + 1) = (int)lVar5 + 1;
    }
    else {
      *plVar3 = 0;
    }
    FUN_00144580(puVar6);
    uVar7 = *puVar6;
                    /* try { // try from 001427e4 to 001427e7 has its CatchHandler @ 00142850 */
    plVar3 = (long *)__cxa_get_globals();
    if ((uVar7 & 0xffffffffffffff00) == 0x434c4e47432b2b00) {
      iVar2 = *(int *)(lVar8 + 0x38);
      lVar5 = *plVar3;
      iVar1 = -iVar2;
      if (-1 < iVar2) {
        iVar1 = iVar2;
      }
      *(int *)(lVar8 + 0x38) = iVar1 + 1;
      if (lVar8 != lVar5) {
        *(long *)(lVar8 + 0x30) = lVar5;
        *plVar3 = lVar8;
      }
      *(int *)(plVar3 + 1) = (int)plVar3[1] + -1;
    }
    else {
      if (*plVar3 != 0) goto LAB_00142790;
      *plVar3 = lVar8;
    }
    if ((uVar4 & 0xffffffffffffff00) == 0x434c4e47432b2b00) {
      FUN_001276bc(*(undefined8 *)(lVar8 + 0x28));
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 001427e4 with catch @ 00142850
                        */
      FUN_0012677c();
    }
  }
LAB_00142790:
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 00142854  __cxa_increment_exception_refcount =====

void __cxa_increment_exception_refcount(long param_1)

{
  if (param_1 != 0) {
    FUN_00144550(1,param_1 + -0x78);
  }
  return;
}


// ===== 00142880  __cxa_current_primary_exception =====

long * __cxa_current_primary_exception(void)

{
  long *plVar1;
  long lVar2;
  
                    /* try { // try from 00142890 to 00142893 has its CatchHandler @ 00142908 */
  plVar1 = (long *)__cxa_get_globals_fast();
  if (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if ((lVar2 == 0) || (*(ulong *)(lVar2 + 0x60) >> 8 != 0x434c4e47432b2b)) {
      return (long *)0x0;
    }
    if ((*(ulong *)(lVar2 + 0x60) & 0xff) == 1) {
      lVar2 = *(long *)(lVar2 + 8) + -0x80;
    }
    plVar1 = (long *)(lVar2 + 0x80);
    FUN_00144550(1,lVar2 + 8);
  }
  return plVar1;
}


// ===== 0014290c  __cxa_rethrow_primary_exception =====

void __cxa_rethrow_primary_exception(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong *puVar9;
  
  if (param_1 == 0) {
    return;
  }
  puVar3 = (undefined8 *)FUN_00142b08(0x80);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[0xf] = 0;
    puVar3[0xe] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar9 = puVar3 + 0xc;
    puVar3[0xd] = 0;
    *puVar9 = 0;
    puVar3[1] = param_1;
    FUN_00144550(1,param_1 + -0x78);
    puVar3[2] = *(undefined8 *)(param_1 + -0x70);
    uVar4 = std::get_unexpected();
    puVar3[4] = uVar4;
    uVar4 = std::get_terminate();
    puVar3[5] = uVar4;
    *puVar9 = 0x434c4e47432b2b01;
    lVar5 = __cxa_get_globals();
    iVar1 = *(int *)(lVar5 + 8);
    puVar3[0xd] = FUN_00142a3c;
    *(int *)(lVar5 + 8) = iVar1 + 1;
    FUN_00144580(puVar9);
    uVar8 = *puVar9;
                    /* try { // try from 001429bc to 001429bf has its CatchHandler @ 00142a38 */
    plVar6 = (long *)__cxa_get_globals();
    if ((uVar8 & 0xffffffffffffff00) == 0x434c4e47432b2b00) {
      iVar2 = *(int *)(puVar3 + 7);
      puVar7 = (undefined8 *)*plVar6;
      iVar1 = -iVar2;
      if (-1 < iVar2) {
        iVar1 = iVar2;
      }
      *(int *)(puVar3 + 7) = iVar1 + 1;
      if (puVar3 != puVar7) {
        puVar3[6] = puVar7;
        *plVar6 = (long)puVar3;
      }
      *(int *)(plVar6 + 1) = (int)plVar6[1] + -1;
      return;
    }
    if (*plVar6 == 0) {
      *plVar6 = (long)puVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 00142a3c  FUN_00142a3c =====

void FUN_00142a3c(int param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == 1) {
    lVar2 = *(long *)(param_2 + -0x58);
    if ((lVar2 != 0) && (lVar1 = FUN_00144550(0xffffffffffffffff,lVar2 + -0x78), lVar1 == 1)) {
      if (*(code **)(lVar2 + -0x68) != (code *)0x0) {
                    /* try { // try from 00142a7c to 00142a83 has its CatchHandler @ 00142aa8 */
        (**(code **)(lVar2 + -0x68))(lVar2);
      }
                    /* try { // try from 00142a84 to 00142a8b has its CatchHandler @ 00142aac */
      FUN_00142cec(lVar2 + -0x80);
    }
    FUN_00142cec(param_2 + -0x60);
    return;
  }
  FUN_001276bc(*(undefined8 *)(param_2 + -0x38));
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00142a7c with catch @ 00142aa8
                        */
  FUN_0012677c();
}


// ===== 00142ab0  __cxa_uncaught_exception =====

ulong __cxa_uncaught_exception(void)

{
  ulong uVar1;
  
                    /* try { // try from 00142abc to 00142abf has its CatchHandler @ 00142adc */
  uVar1 = __cxa_get_globals_fast();
  if (uVar1 != 0) {
    uVar1 = (ulong)(*(int *)(uVar1 + 8) != 0);
  }
  return uVar1;
}


// ===== 00142ae0  __cxa_uncaught_exceptions =====

ulong __cxa_uncaught_exceptions(void)

{
  ulong uVar1;
  
                    /* try { // try from 00142aec to 00142aef has its CatchHandler @ 00142b04 */
  uVar1 = __cxa_get_globals_fast();
  if (uVar1 != 0) {
    uVar1 = (ulong)*(uint *)(uVar1 + 8);
  }
  return uVar1;
}


// ===== 00142b08  FUN_00142b08 =====

void FUN_00142b08(size_t param_1)

{
  void *local_8;
  
  local_8 = (void *)0x0;
  if (param_1 < 2) {
    param_1 = 1;
  }
  posix_memalign(&local_8,0x10,param_1);
  if (local_8 != (void *)0x0) {
    return;
  }
  FUN_00142b64(param_1);
  return;
}


// ===== 00142b64  FUN_00142b64 =====

ushort * FUN_00142b64(long param_1)

{
  ulong uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *puVar4;
  ulong uVar5;
  ushort *puVar6;
  ulong uVar7;
  ulong uVar8;
  ushort *puVar9;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_001555e8);
  if (DAT_001555e0 == (ushort *)0x0) {
    DAT_0015561c = 0x7d0080;
    DAT_001555e0 = (ushort *)&DAT_0015561c;
  }
  else if (DAT_001555e0 == (ushort *)&DAT_00155810) goto LAB_00142c1c;
  uVar5 = param_1 + 3U >> 2;
  uVar1 = uVar5 + 1;
  puVar4 = (ushort *)0x0;
  puVar6 = DAT_001555e0;
  do {
    puVar9 = puVar6 + 2;
    if (((ulong)puVar9 & 0xf) != 0) {
                    /* try { // try from 00142ca8 to 00142cc7 has its CatchHandler @ 00142cd0 */
                    /* WARNING: Subroutine does not return */
      FUN_00127d24("%s:%d: %s","out/llvm-project/libcxxabi/src/fallback_malloc.cpp",0x92,
                   &DAT_001128a6);
    }
    uVar2 = puVar6[1];
    uVar8 = (ulong)uVar2;
    uVar7 = (ulong)((uint)uVar2 - (int)uVar1 & 3);
    if (uVar8 <= uVar1) {
      uVar7 = 0;
    }
    if (uVar7 + uVar1 < uVar8) {
      uVar3 = (ushort)(uVar7 + uVar1);
      uVar2 = uVar2 - uVar3;
      puVar4 = puVar6 + (ulong)uVar2 * 2;
      puVar6[1] = uVar2;
      puVar9 = puVar4 + 2;
      *puVar4 = 0;
      puVar4[1] = uVar3;
      if (((ulong)puVar9 & 0xf) != 0) {
                    /* try { // try from 00142c44 to 00142c63 has its CatchHandler @ 00142cc8 */
                    /* WARNING: Subroutine does not return */
        FUN_00127d24("%s:%d: %s","out/llvm-project/libcxxabi/src/fallback_malloc.cpp",0xa7,
                     &DAT_001128a6);
      }
      goto LAB_00142c88;
    }
    if (uVar5 < uVar8) {
      uVar2 = *puVar6;
      if (puVar4 == (ushort *)0x0) {
        *puVar6 = 0;
        DAT_001555e0 = (ushort *)((ulong)uVar2 * 4 + 0x155610);
      }
      else {
        *puVar4 = uVar2;
        *puVar6 = 0;
      }
      goto LAB_00142c88;
    }
    uVar2 = *puVar6;
    puVar4 = puVar6;
    puVar6 = (ushort *)((ulong)uVar2 * 4 + 0x155610);
  } while ((ulong)uVar2 != 0x80);
LAB_00142c1c:
  puVar9 = (ushort *)0x0;
LAB_00142c88:
                    /* try { // try from 00142c88 to 00142c93 has its CatchHandler @ 00142ccc */
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_001555e8);
  return puVar9;
}


// ===== 00142cec  FUN_00142cec =====

void * FUN_00142cec(void *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  
  if ((param_1 < (void *)0x155610) || ((void *)0x15580f < param_1)) {
    free(param_1);
    return param_1;
  }
  puVar7 = (ushort *)((long)param_1 + -4);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_001555e8);
  if ((DAT_001555e0 != (ushort *)0x0) && (DAT_001555e0 != (ushort *)&DAT_00155810)) {
    puVar2 = DAT_001555e0;
    puVar6 = (ushort *)0x0;
    do {
      puVar5 = puVar2;
      uVar1 = puVar5[1];
      if (puVar5 + (ulong)uVar1 * 2 == puVar7) {
        puVar5[1] = *(short *)((long)param_1 + -2) + uVar1;
        goto LAB_00142e04;
      }
      if (puVar7 + (ulong)*(ushort *)((long)param_1 + -2) * 2 == puVar5) {
        *(ushort *)((long)param_1 + -2) = *(ushort *)((long)param_1 + -2) + uVar1;
        if (puVar6 == (ushort *)0x0) {
          DAT_001555e0 = puVar7;
          *puVar7 = *puVar5;
        }
        else {
          *puVar6 = (ushort)((int)puVar7 - 0x155610U >> 2);
        }
        goto LAB_00142e04;
      }
      puVar2 = (ushort *)((ulong)*puVar5 * 4 + 0x155610);
      puVar6 = puVar5;
    } while ((ulong)*puVar5 != 0x80);
  }
  iVar4 = (int)DAT_001555e0;
  DAT_001555e0 = puVar7;
  *puVar7 = (ushort)(iVar4 - 0x155610U >> 2);
LAB_00142e04:
                    /* try { // try from 00142e04 to 00142e0f has its CatchHandler @ 00142e24 */
  uVar3 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_001555e8);
  return (void *)(ulong)uVar3;
}


// ===== 00142e28  __gxx_personality_v0 =====

ulong * __gxx_personality_v0
                  (int param_1,ulong param_2,ulong param_3,long param_4,long param_5,ulong *param_6)

{
  byte bVar1;
  int iVar2;
  ulong *puVar3;
  byte bVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  char *pcVar14;
  ulong *puVar15;
  undefined4 uVar16;
  ulong uVar17;
  ulong uVar18;
  byte *extraout_x9;
  ulong uVar19;
  ulong *puVar20;
  undefined8 uVar21;
  byte *pbVar22;
  byte *pbVar23;
  undefined8 uVar24;
  uint uVar25;
  ulong uVar26;
  long lVar27;
  byte *pbVar28;
  ulong *puVar29;
  long lVar30;
  undefined1 auVar31 [16];
  undefined *puStack_180;
  byte *pbStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  ulong uStack_160;
  ulong *puStack_158;
  ulong *puStack_150;
  ulong uStack_148;
  byte *pbStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  byte *pbStack_128;
  ulong uStack_120;
  ulong *puStack_118;
  uint uStack_104;
  ulong *puStack_100;
  uint uStack_f4;
  ulong *puStack_f0;
  ulong uStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  ulong *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  
  if (param_1 != 1) {
    return (ulong *)0x3;
  }
  if (param_4 == 0) {
    return (ulong *)0x3;
  }
  if (param_5 == 0) {
    return (ulong *)0x3;
  }
  param_3 = param_3 & 0xffffffffffffff00;
  lVar9 = param_5;
  if ((uint)param_2 == 6) {
    if (param_3 == 0x434c4e47432b2b00) {
      iVar2 = *(int *)(param_4 + -0x24);
      uVar21 = *(undefined8 *)(param_4 + -0x10);
      thunk_FUN_00144b14(param_5,0,param_4);
      thunk_FUN_00144b14(param_5,1,(long)iVar2);
      FUN_001449e0(param_5,uVar21);
      if (-1 < iVar2) {
        return (ulong *)0x7;
      }
      goto LAB_00142eb8;
    }
    FUN_00143050(&local_60,6,0,param_4);
  }
  else {
    FUN_00143050(&local_60,param_2,param_3 == 0x434c4e47432b2b00,param_4);
  }
  if (local_38 == 3) {
    return (ulong *)(ulong)local_38;
  }
  if (local_38 == 8) {
    return (ulong *)(ulong)local_38;
  }
  if ((param_2 & 1) == 0) {
    if (((uint)param_2 >> 1 & 1) == 0) {
      __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x3da,
                "_Unwind_Reason_Code __cxxabiv1::__gxx_personality_v0(int, _Unwind_Action, uint64_t, _Unwind_Exception *, _Unwind_Context *)"
                ,"actions & _UA_CLEANUP_PHASE");
      goto code_r0x00143014;
    }
    if (local_38 == 6) {
      thunk_FUN_00144b14(param_5,0,param_4);
      thunk_FUN_00144b14(param_5,1,local_60);
      FUN_001449e0(param_5,local_48);
      if (-1 < local_60) {
        return (ulong *)0x7;
      }
LAB_00142eb8:
      *(undefined8 *)(param_4 + -0x10) = 0;
      return (ulong *)0x7;
    }
  }
  else {
    if (local_38 == 6) {
      if (param_3 != 0x434c4e47432b2b00) {
        return (ulong *)0x6;
      }
      *(int *)(param_4 + -0x24) = (int)local_60;
      *(undefined8 *)(param_4 + -0x18) = uStack_50;
      *(undefined8 *)(param_4 + -0x20) = local_58;
      *(undefined8 *)(param_4 + -0x10) = local_48;
      *(undefined8 *)(param_4 + -8) = uStack_40;
      return (ulong *)0x6;
    }
code_r0x00143014:
    __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x3c8,
              "_Unwind_Reason_Code __cxxabiv1::__gxx_personality_v0(int, _Unwind_Action, uint64_t, _Unwind_Exception *, _Unwind_Context *)"
              ,"results.reason == _URC_HANDLER_FOUND");
  }
  uStack_104 = 0x11325d;
  pcVar14 = "results.reason == _URC_HANDLER_FOUND";
  auVar31 = __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x3db);
  puVar20 = auVar31._0_8_;
  pcStack_b8 = FUN_00143050;
  uVar26 = auVar31._8_8_ & 0xffffffff;
  puVar20[4] = 0;
  *(undefined4 *)(puVar20 + 5) = 3;
  puVar20[1] = 0;
  *puVar20 = 0;
  puVar20[3] = 0;
  puVar20[2] = 0;
  uVar25 = auVar31._8_4_;
  if ((auVar31 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    if ((uVar25 >> 1 & 1) == 0) {
      return puVar20;
    }
    if (((uVar25 ^ 0xffffffff) & 0xc) == 0) {
      uVar16 = 2;
      puVar5 = puVar20;
      goto LAB_00143444;
    }
  }
  else if ((auVar31 & (undefined1  [16])0xe) != (undefined1  [16])0x0) {
    return puVar20;
  }
  puStack_f0 = (ulong *)pcVar14;
  puStack_c0 = &stack0xffffffffffffffd0;
  puVar5 = (ulong *)FUN_00144924(lVar9);
  if (puVar5 != (ulong *)0x0) {
    puVar20[2] = (ulong)puVar5;
    puVar6 = (ulong *)FUN_001449b0(lVar9);
    uVar7 = FUN_00144958(lVar9);
    pbStack_d0 = (byte *)((long)puVar5 + 1);
    if ((byte)*puVar5 == 0xff) {
      pbVar28 = (byte *)((long)puVar5 + 2);
      bVar1 = *pbStack_d0;
      uVar8 = uVar7;
    }
    else {
      uVar8 = FUN_001437fc(&pbStack_d0,(byte)*puVar5,0);
      pbVar28 = pbStack_d0 + 1;
      bVar1 = *pbStack_d0;
    }
    uStack_e8 = (ulong)bVar1;
    if (uStack_e8 == 0xff) {
      pbStack_e0 = (byte *)0x0;
    }
    else {
      uVar19 = 0;
      uVar17 = 0;
      pbVar22 = pbVar28;
      do {
        pbVar28 = pbVar22 + 1;
        bVar1 = *pbVar22;
        uVar18 = uVar19 & 0x3f;
        uVar19 = uVar19 + 7;
        uVar17 = ((ulong)bVar1 & 0x7f) << uVar18 | uVar17;
        pbVar22 = pbVar28;
      } while ((char)bVar1 < '\0');
      pbStack_e0 = pbVar28 + uVar17;
    }
    uVar19 = 0;
    uVar17 = 0;
    puVar15 = (ulong *)((long)puVar6 + ~uVar7);
    puVar29 = (ulong *)(ulong)*pbVar28;
    pbVar28 = pbVar28 + 1;
    do {
      pbVar22 = pbVar28 + 1;
      bVar1 = *pbVar28;
      uVar7 = uVar19 & 0x3f;
      uVar19 = uVar19 + 7;
      uVar17 = ((ulong)bVar1 & 0x7f) << uVar7 | uVar17;
      pbVar28 = pbVar22;
    } while ((char)bVar1 < '\0');
    pbStack_d8 = pbVar22;
    pbStack_d0 = pbVar22;
    do {
      if (pbVar22 + (uVar17 & 0xffffffff) <= pbStack_d8) break;
      puVar6 = (ulong *)FUN_001437fc(&pbStack_d8,puVar29,0);
      lVar9 = FUN_001437fc(&pbStack_d8,puVar29,0);
      puVar5 = (ulong *)FUN_001437fc(&pbStack_d8,puVar29,0);
      uVar7 = 0;
      uVar19 = 0;
      pbVar28 = pbStack_d8;
      do {
        pbStack_d8 = pbVar28 + 1;
        bVar1 = *pbVar28;
        uVar18 = uVar7 & 0x3f;
        uVar7 = uVar7 + 7;
        uVar19 = ((ulong)bVar1 & 0x7f) << uVar18 | uVar19;
        pbVar28 = pbStack_d8;
      } while ((char)bVar1 < '\0');
      if ((puVar6 <= puVar15) && (puVar15 < (ulong *)(lVar9 + (long)puVar6))) {
        if (puVar5 == (ulong *)0x0) goto LAB_00143440;
        puVar20[3] = (ulong)((long)puVar5 + uVar8);
        if (uVar19 == 0) {
          uVar16 = 6;
          if ((auVar31 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
            uVar16 = 8;
          }
          goto LAB_00143444;
        }
        puVar6 = (ulong *)(ulong)uStack_104;
        uVar8 = uStack_e8 & 0xf;
        pbVar22 = pbVar22 + uVar19 + (uVar17 & 0xffffffff) + -1;
        puStack_100 = puStack_f0 + 4;
        uStack_f4 = 0x1c1dU >> uVar8 & 1;
        uVar7 = 0;
        goto LAB_00143290;
      }
    } while (puVar6 <= puVar15);
    __cxa_begin_catch(puStack_f0);
    if ((uStack_104 & 1) != 0) {
      do {
        FUN_001276bc(puStack_f0[-7]);
LAB_00143548:
        __cxa_begin_catch(puStack_f0);
      } while (((ulong)puVar6 & 1) != 0);
    }
                    /* WARNING: Subroutine does not return */
    std::terminate();
  }
LAB_00143440:
  uVar16 = 8;
LAB_00143444:
  *(undefined4 *)(puVar20 + 5) = uVar16;
  return puVar5;
LAB_00143290:
  puVar15 = puStack_f0;
  uVar19 = 0;
  uVar17 = 0;
  pbVar28 = pbVar22;
  do {
    pbVar23 = pbVar28 + 1;
    bVar1 = *pbVar28;
    uVar18 = uVar19 & 0x3f;
    uVar19 = uVar19 + 7;
    uVar17 = ((ulong)bVar1 & 0x7f) << uVar18 | uVar17;
    pbVar28 = pbVar23;
  } while ((char)bVar1 < '\0');
  uVar18 = -1L << (uVar19 & 0x3f);
  if (0x3f < uVar19 || bVar1 < 0x40) {
    uVar18 = 0;
  }
  uVar17 = uVar17 | uVar18;
  uVar19 = uVar7;
  if ((long)uVar17 < 1) {
    uVar19 = (ulong)((uint)(uVar17 == 0) | (uint)uVar7);
    if ((uVar17 != 0) && ((uVar25 >> 3 & 1) == 0)) {
      if (((ulong)puVar6 & 1) == 0) {
        *puVar20 = uVar17;
        puVar20[1] = (ulong)pbVar22;
        goto LAB_001434e4;
      }
      lVar9 = FUN_00142308(puStack_f0);
      puVar10 = puStack_100;
      if (lVar9 == 0x434c4e47432b2b01) {
        puVar10 = (ulong *)puVar15[-0xb];
      }
      if ((puVar10 == (ulong *)0x0) || (puVar15[-10] == 0)) {
LAB_00143568:
        __cxa_begin_catch(puVar15);
        FUN_001276bc(puVar15[-7]);
        puVar20 = puVar15;
        goto code_r0x00143580;
      }
      puVar5 = (ulong *)FUN_001439e8(uVar17,pbStack_e0,uStack_e8,puVar15[-10],puVar10,puVar15,0);
      param_6 = puVar15;
      uVar19 = uVar7;
      puVar29 = puVar10;
      if (((ulong)puVar5 & 1) != 0) {
        if ((auVar31 & (undefined1  [16])0x1) == (undefined1  [16])0x0) goto code_r0x001435c0;
        *puVar20 = uVar17;
        puVar20[1] = (ulong)pbVar22;
        uVar16 = 6;
        puVar20[4] = (ulong)puVar10;
        goto LAB_00143444;
      }
    }
  }
  else {
    if (pbStack_e0 == (byte *)0x0) goto LAB_00143548;
    if (0xc < (uint)uVar8) goto LAB_00143548;
    if (uStack_f4 == 0) goto LAB_00143548;
    puStack_c8 = (ulong *)(pbStack_e0 + *(long *)(&DAT_001158e8 + uVar8 * 8) * uVar17);
    puVar10 = (ulong *)FUN_001437fc(&puStack_c8,uStack_e8,0);
    puVar3 = puStack_f0;
    if (puVar10 == (ulong *)0x0) {
      puVar10 = puVar29;
      if ((auVar31 & (undefined1  [16])0xd) != (undefined1  [16])0x0) {
        *puVar20 = uVar17;
        puVar20[1] = (ulong)pbVar22;
LAB_001434e4:
        puVar6 = puStack_f0;
        puVar5 = (ulong *)FUN_00142308(puStack_f0);
        if (puVar5 == (ulong *)0x434c4e47432b2b01) {
          puStack_100 = (ulong *)puVar6[-0xb];
        }
        puVar20[4] = (ulong)puStack_100;
        uVar16 = 6;
        goto LAB_00143444;
      }
code_r0x00143580:
      __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x2ec,
                "void __cxxabiv1::scan_eh_tab(scan_results &, _Unwind_Action, bool, _Unwind_Exception *, _Unwind_Context *)"
                ,"actions & (_UA_SEARCH_PHASE | _UA_HANDLER_FRAME | _UA_FORCE_UNWIND)");
code_r0x001435a0:
      __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x306,
                "void __cxxabiv1::scan_eh_tab(scan_results &, _Unwind_Action, bool, _Unwind_Exception *, _Unwind_Context *)"
                ,"actions & (_UA_SEARCH_PHASE | _UA_FORCE_UNWIND)");
code_r0x001435c0:
      lVar9 = __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x327,
                        "void __cxxabiv1::scan_eh_tab(scan_results &, _Unwind_Action, bool, _Unwind_Exception *, _Unwind_Context *)"
                        ,"actions & _UA_SEARCH_PHASE");
      pcStack_168 = __cxa_call_unexpected;
      uStack_138 = 0xffffffffffffffff;
      ppuStack_170 = &puStack_c0;
      uStack_160 = uVar8;
      puStack_158 = puVar6;
      puStack_150 = puVar10;
      uStack_148 = uVar17;
      pbStack_140 = pbVar22;
      uStack_130 = uVar26;
      pbStack_128 = pbVar23;
      uStack_120 = uVar7;
      puStack_118 = puVar20;
      if (lVar9 == 0) {
        __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      __cxa_begin_catch();
      uVar7 = FUN_00142314(lVar9);
      if ((uVar7 & 1) == 0) {
        uVar11 = std::get_terminate();
        uVar21 = std::get_unexpected();
        uVar24 = 0;
        lVar27 = 0;
      }
      else {
        uVar21 = *(undefined8 *)(lVar9 + -0x40);
        uVar11 = *(undefined8 *)(lVar9 + -0x38);
        lVar27 = lVar9 + -0x60;
        pbVar22 = *(byte **)(lVar9 + -0x18);
        uVar24 = *(undefined8 *)(lVar9 + -0x10);
        uVar26 = (ulong)*(int *)(lVar9 + -0x24);
      }
      FUN_00127670(uVar21);
      __cxa_begin_catch();
      if ((uVar7 & 1) == 0) goto LAB_00143768;
      pbStack_178 = pbVar22 + 1;
      FUN_001437fc(&pbStack_178,*pbVar22,uVar24);
      bVar1 = *pbStack_178;
      if (bVar1 != 0xff) goto LAB_00143684;
      do {
        FUN_001276bc(uVar11);
        pbStack_178 = extraout_x9;
LAB_00143684:
        uVar7 = 0;
        uVar8 = 0;
        pbVar28 = pbStack_178 + 1;
        do {
          pbVar23 = pbVar28 + 1;
          bVar4 = *pbVar28;
          uVar19 = uVar7 & 0x3f;
          uVar7 = uVar7 + 7;
          uVar8 = ((ulong)bVar4 & 0x7f) << uVar19 | uVar8;
          pbVar28 = pbVar23;
        } while ((char)bVar4 < '\0');
        pbStack_178 = pbVar23;
        plVar12 = (long *)__cxa_get_globals_fast();
        lVar30 = *plVar12;
      } while (lVar30 == 0);
      bVar4 = FUN_00142314(lVar30 + 0x60);
      if ((bVar4 & lVar30 != lVar27) == 1) {
        uVar21 = *(undefined8 *)(lVar30 + 0x10);
        lVar27 = FUN_00142308(lVar30 + 0x60);
        if (lVar27 == 0x434c4e47432b2b01) {
          lVar27 = *(long *)(lVar30 + 8);
        }
        else {
          lVar27 = lVar30 + 0x80;
        }
        uVar7 = FUN_001439e8(uVar26,pbVar23 + uVar8,bVar1,uVar21,lVar27,lVar9,uVar24);
        if ((uVar7 & 1) == 0) {
          lVar9 = plVar12[1];
          *(int *)(lVar30 + 0x38) = -*(int *)(lVar30 + 0x38);
          *(int *)(plVar12 + 1) = (int)lVar9 + 1;
          __cxa_end_catch();
          __cxa_end_catch();
          __cxa_begin_catch(lVar30 + 0x60);
          uVar21 = __cxa_rethrow();
          std::bad_array_new_length::~bad_array_new_length((bad_array_new_length *)&puStack_180);
          __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
          FUN_001447ac(uVar21);
        }
      }
      pbVar22 = PTR_vtable_00150df0;
      puStack_180 = PTR_vtable_00150df0 + 0x10;
      uVar26 = FUN_001439e8(uVar26,pbVar23 + uVar8,bVar1,PTR_PTR_00150df8,&puStack_180,lVar9,uVar24)
      ;
      if ((uVar26 & 1) != 0) {
        std::bad_array_new_length::~bad_array_new_length((bad_array_new_length *)&puStack_180);
LAB_00143768:
        __cxa_end_catch();
        FUN_001276bc(uVar11);
      }
      __cxa_end_catch();
      puVar13 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar13 = pbVar22 + 0x10;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar13,PTR_PTR_00150df8,PTR__bad_array_new_length_00150dc8);
    }
    puVar5 = puVar10;
    if (((ulong)puVar6 & 1) != 0) {
      lVar9 = FUN_00142308(puStack_f0);
      puStack_c8 = puStack_100;
      if (lVar9 == 0x434c4e47432b2b01) {
        puStack_c8 = (ulong *)puVar3[-0xb];
      }
      if ((puStack_c8 == (ulong *)0x0) || (puVar3[-10] == 0)) {
        __cxa_begin_catch(puVar3);
        FUN_001276bc(puVar3[-7]);
        puVar15 = param_6;
        puVar6 = puVar3;
        goto LAB_00143568;
      }
      puVar5 = (ulong *)(**(code **)(*puVar10 + 0x20))(puVar10,puVar3[-10],&puStack_c8);
      puVar6 = (ulong *)(ulong)uStack_104;
      puVar29 = puVar10;
      if (((ulong)puVar5 & 1) != 0) {
        if ((auVar31 & (undefined1  [16])0x9) != (undefined1  [16])0x0) {
          *puVar20 = uVar17;
          puVar20[1] = (ulong)pbVar22;
          *(undefined4 *)(puVar20 + 5) = 6;
          puVar20[4] = (ulong)puStack_c8;
          return puVar5;
        }
        goto code_r0x001435a0;
      }
    }
  }
  uVar7 = 0;
  uVar17 = 0;
  do {
    bVar1 = *pbVar28;
    uVar18 = uVar7 & 0x3f;
    uVar7 = uVar7 + 7;
    uVar17 = ((ulong)bVar1 & 0x7f) << uVar18 | uVar17;
    pbVar28 = pbVar28 + 1;
  } while ((char)bVar1 < '\0');
  uVar18 = -1L << (uVar7 & 0x3f);
  if (0x3f < uVar7 || bVar1 < 0x40) {
    uVar18 = 0;
  }
  if ((uVar17 | uVar18) == 0) goto LAB_00143480;
  pbVar22 = pbVar23 + (uVar17 | uVar18);
  uVar7 = uVar19;
  goto LAB_00143290;
LAB_00143480:
  uVar16 = 6;
  if (((uint)uVar19 & (uVar25 & 2) >> 1) == 0) {
    uVar16 = 8;
  }
  goto LAB_00143444;
}


// ===== 00143050  FUN_00143050 =====

void FUN_00143050(ulong *param_1,uint param_2,uint param_3,ulong *param_4,undefined8 param_5,
                 ulong *param_6)

{
  byte bVar1;
  ulong *puVar2;
  byte bVar3;
  char *pcVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong *puVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong *puVar13;
  undefined4 uVar14;
  ulong uVar15;
  ulong uVar16;
  byte *extraout_x9;
  ulong uVar17;
  byte *pbVar18;
  byte *pbVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 uVar22;
  byte *pbVar23;
  ulong *puVar24;
  long lVar25;
  undefined *puStack_120;
  byte *pbStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  ulong uStack_100;
  ulong *puStack_f8;
  ulong *puStack_f0;
  ulong uStack_e8;
  byte *pbStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  byte *pbStack_c8;
  ulong uStack_c0;
  ulong *puStack_b8;
  uint local_a4;
  ulong *local_a0;
  uint local_94;
  ulong *local_90;
  ulong local_88;
  byte *local_80;
  byte *local_78;
  byte *local_70;
  ulong *local_68;
  
  uVar21 = (ulong)param_2;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 3;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  if ((param_2 & 1) == 0) {
    if ((param_2 >> 1 & 1) == 0) {
      return;
    }
    if (((param_2 ^ 0xffffffff) & 0xc) == 0) {
      uVar14 = 2;
      goto LAB_00143444;
    }
  }
  else if ((param_2 & 0xe) != 0) {
    return;
  }
  local_90 = param_4;
  pcVar4 = (char *)FUN_00144924(param_5);
  if (pcVar4 != (char *)0x0) {
    param_1[2] = (ulong)pcVar4;
    local_a4 = param_3;
    puVar5 = (ulong *)FUN_001449b0(param_5);
    uVar6 = FUN_00144958(param_5);
    local_70 = (byte *)(pcVar4 + 1);
    if (*pcVar4 == -1) {
      pbVar23 = (byte *)(pcVar4 + 2);
      bVar1 = *local_70;
      uVar7 = uVar6;
    }
    else {
      uVar7 = FUN_001437fc(&local_70,*pcVar4,0);
      pbVar23 = local_70 + 1;
      bVar1 = *local_70;
    }
    local_88 = (ulong)bVar1;
    if (local_88 == 0xff) {
      local_80 = (byte *)0x0;
    }
    else {
      uVar17 = 0;
      uVar15 = 0;
      pbVar18 = pbVar23;
      do {
        pbVar23 = pbVar18 + 1;
        bVar1 = *pbVar18;
        uVar16 = uVar17 & 0x3f;
        uVar17 = uVar17 + 7;
        uVar15 = ((ulong)bVar1 & 0x7f) << uVar16 | uVar15;
        pbVar18 = pbVar23;
      } while ((char)bVar1 < '\0');
      local_80 = pbVar23 + uVar15;
    }
    uVar17 = 0;
    uVar15 = 0;
    puVar13 = (ulong *)((long)puVar5 + ~uVar6);
    puVar24 = (ulong *)(ulong)*pbVar23;
    pbVar23 = pbVar23 + 1;
    do {
      pbVar18 = pbVar23 + 1;
      bVar1 = *pbVar23;
      uVar6 = uVar17 & 0x3f;
      uVar17 = uVar17 + 7;
      uVar15 = ((ulong)bVar1 & 0x7f) << uVar6 | uVar15;
      pbVar23 = pbVar18;
    } while ((char)bVar1 < '\0');
    local_78 = pbVar18;
    local_70 = pbVar18;
    do {
      if (pbVar18 + (uVar15 & 0xffffffff) <= local_78) break;
      puVar5 = (ulong *)FUN_001437fc(&local_78,puVar24,0);
      lVar8 = FUN_001437fc(&local_78,puVar24,0);
      lVar9 = FUN_001437fc(&local_78,puVar24,0);
      uVar6 = 0;
      uVar17 = 0;
      pbVar23 = local_78;
      do {
        local_78 = pbVar23 + 1;
        bVar1 = *pbVar23;
        uVar16 = uVar6 & 0x3f;
        uVar6 = uVar6 + 7;
        uVar17 = ((ulong)bVar1 & 0x7f) << uVar16 | uVar17;
        pbVar23 = local_78;
      } while ((char)bVar1 < '\0');
      if ((puVar5 <= puVar13) && (puVar13 < (ulong *)(lVar8 + (long)puVar5))) {
        if (lVar9 == 0) goto LAB_00143440;
        param_1[3] = lVar9 + uVar7;
        if (uVar17 != 0) {
          puVar5 = (ulong *)(ulong)local_a4;
          uVar7 = local_88 & 0xf;
          pbVar18 = pbVar18 + uVar17 + (uVar15 & 0xffffffff) + -1;
          local_a0 = local_90 + 4;
          local_94 = 0x1c1dU >> uVar7 & 1;
          uVar6 = 0;
          goto LAB_00143290;
        }
        uVar14 = 6;
        if ((param_2 & 1) != 0) {
          uVar14 = 8;
        }
        goto LAB_00143444;
      }
    } while (puVar5 <= puVar13);
    __cxa_begin_catch(local_90);
    if ((local_a4 & 1) != 0) {
      do {
        FUN_001276bc(local_90[-7]);
LAB_00143548:
        __cxa_begin_catch(local_90);
      } while (((ulong)puVar5 & 1) != 0);
    }
                    /* WARNING: Subroutine does not return */
    std::terminate();
  }
LAB_00143440:
  uVar14 = 8;
  goto LAB_00143444;
LAB_00143290:
  puVar13 = local_90;
  uVar17 = 0;
  uVar15 = 0;
  pbVar23 = pbVar18;
  do {
    pbVar19 = pbVar23 + 1;
    bVar1 = *pbVar23;
    uVar16 = uVar17 & 0x3f;
    uVar17 = uVar17 + 7;
    uVar15 = ((ulong)bVar1 & 0x7f) << uVar16 | uVar15;
    pbVar23 = pbVar19;
  } while ((char)bVar1 < '\0');
  uVar16 = -1L << (uVar17 & 0x3f);
  if (0x3f < uVar17 || bVar1 < 0x40) {
    uVar16 = 0;
  }
  uVar15 = uVar15 | uVar16;
  uVar17 = uVar6;
  if ((long)uVar15 < 1) {
    uVar17 = (ulong)((uint)(uVar15 == 0) | (uint)uVar6);
    if ((uVar15 != 0) && ((param_2 >> 3 & 1) == 0)) {
      if (((ulong)puVar5 & 1) == 0) {
        *param_1 = uVar15;
        param_1[1] = (ulong)pbVar18;
        goto LAB_001434e4;
      }
      lVar8 = FUN_00142308(local_90);
      puVar10 = local_a0;
      if (lVar8 == 0x434c4e47432b2b01) {
        puVar10 = (ulong *)puVar13[-0xb];
      }
      if ((puVar10 == (ulong *)0x0) || (puVar13[-10] == 0)) {
LAB_00143568:
        __cxa_begin_catch(puVar13);
        FUN_001276bc(puVar13[-7]);
        param_1 = puVar13;
        goto code_r0x00143580;
      }
      uVar16 = FUN_001439e8(uVar15,local_80,local_88,puVar13[-10],puVar10,puVar13,0);
      param_6 = puVar13;
      uVar17 = uVar6;
      puVar24 = puVar10;
      if ((uVar16 & 1) != 0) {
        if ((param_2 & 1) == 0) goto code_r0x001435c0;
        *param_1 = uVar15;
        param_1[1] = (ulong)pbVar18;
        uVar14 = 6;
        param_1[4] = (ulong)puVar10;
        goto LAB_00143444;
      }
    }
  }
  else {
    if (local_80 == (byte *)0x0) goto LAB_00143548;
    if (0xc < (uint)uVar7) goto LAB_00143548;
    if (local_94 == 0) goto LAB_00143548;
    local_68 = (ulong *)(local_80 + *(long *)(&DAT_001158e8 + uVar7 * 8) * uVar15);
    puVar10 = (ulong *)FUN_001437fc(&local_68,local_88,0);
    puVar2 = local_90;
    if (puVar10 == (ulong *)0x0) {
      puVar10 = puVar24;
      if ((param_2 & 0xd) != 0) {
        *param_1 = uVar15;
        param_1[1] = (ulong)pbVar18;
LAB_001434e4:
        puVar5 = local_90;
        lVar8 = FUN_00142308(local_90);
        if (lVar8 == 0x434c4e47432b2b01) {
          local_a0 = (ulong *)puVar5[-0xb];
        }
        param_1[4] = (ulong)local_a0;
        uVar14 = 6;
        goto LAB_00143444;
      }
code_r0x00143580:
      __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x2ec,
                "void __cxxabiv1::scan_eh_tab(scan_results &, _Unwind_Action, bool, _Unwind_Exception *, _Unwind_Context *)"
                ,"actions & (_UA_SEARCH_PHASE | _UA_HANDLER_FRAME | _UA_FORCE_UNWIND)");
code_r0x001435a0:
      __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x306,
                "void __cxxabiv1::scan_eh_tab(scan_results &, _Unwind_Action, bool, _Unwind_Exception *, _Unwind_Context *)"
                ,"actions & (_UA_SEARCH_PHASE | _UA_FORCE_UNWIND)");
code_r0x001435c0:
      lVar8 = __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x327,
                        "void __cxxabiv1::scan_eh_tab(scan_results &, _Unwind_Action, bool, _Unwind_Exception *, _Unwind_Context *)"
                        ,"actions & _UA_SEARCH_PHASE");
      pcStack_108 = __cxa_call_unexpected;
      uStack_d8 = 0xffffffffffffffff;
      puStack_110 = &stack0xffffffffffffffa0;
      uStack_100 = uVar7;
      puStack_f8 = puVar5;
      puStack_f0 = puVar10;
      uStack_e8 = uVar15;
      pbStack_e0 = pbVar18;
      uStack_d0 = uVar21;
      pbStack_c8 = pbVar19;
      uStack_c0 = uVar6;
      puStack_b8 = param_1;
      if (lVar8 == 0) {
        __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      __cxa_begin_catch();
      uVar6 = FUN_00142314(lVar8);
      if ((uVar6 & 1) == 0) {
        uVar11 = std::get_terminate();
        uVar22 = std::get_unexpected();
        uVar20 = 0;
        lVar9 = 0;
      }
      else {
        uVar22 = *(undefined8 *)(lVar8 + -0x40);
        uVar11 = *(undefined8 *)(lVar8 + -0x38);
        lVar9 = lVar8 + -0x60;
        pbVar18 = *(byte **)(lVar8 + -0x18);
        uVar20 = *(undefined8 *)(lVar8 + -0x10);
        uVar21 = (ulong)*(int *)(lVar8 + -0x24);
      }
      FUN_00127670(uVar22);
      __cxa_begin_catch();
      if ((uVar6 & 1) == 0) goto LAB_00143768;
      pbStack_118 = pbVar18 + 1;
      FUN_001437fc(&pbStack_118,*pbVar18,uVar20);
      bVar1 = *pbStack_118;
      if (bVar1 != 0xff) goto LAB_00143684;
      do {
        FUN_001276bc(uVar11);
        pbStack_118 = extraout_x9;
LAB_00143684:
        uVar6 = 0;
        uVar7 = 0;
        pbVar23 = pbStack_118 + 1;
        do {
          pbVar19 = pbVar23 + 1;
          bVar3 = *pbVar23;
          uVar17 = uVar6 & 0x3f;
          uVar6 = uVar6 + 7;
          uVar7 = ((ulong)bVar3 & 0x7f) << uVar17 | uVar7;
          pbVar23 = pbVar19;
        } while ((char)bVar3 < '\0');
        pbStack_118 = pbVar19;
        plVar12 = (long *)__cxa_get_globals_fast();
        lVar25 = *plVar12;
      } while (lVar25 == 0);
      bVar3 = FUN_00142314(lVar25 + 0x60);
      if ((bVar3 & lVar25 != lVar9) == 1) {
        uVar22 = *(undefined8 *)(lVar25 + 0x10);
        lVar9 = FUN_00142308(lVar25 + 0x60);
        if (lVar9 == 0x434c4e47432b2b01) {
          lVar9 = *(long *)(lVar25 + 8);
        }
        else {
          lVar9 = lVar25 + 0x80;
        }
        uVar6 = FUN_001439e8(uVar21,pbVar19 + uVar7,bVar1,uVar22,lVar9,lVar8,uVar20);
        if ((uVar6 & 1) == 0) {
          lVar8 = plVar12[1];
          *(int *)(lVar25 + 0x38) = -*(int *)(lVar25 + 0x38);
          *(int *)(plVar12 + 1) = (int)lVar8 + 1;
          __cxa_end_catch();
          __cxa_end_catch();
          __cxa_begin_catch(lVar25 + 0x60);
          uVar22 = __cxa_rethrow();
          std::bad_array_new_length::~bad_array_new_length((bad_array_new_length *)&puStack_120);
          __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
          FUN_001447ac(uVar22);
        }
      }
      pbVar18 = PTR_vtable_00150df0;
      puStack_120 = PTR_vtable_00150df0 + 0x10;
      uVar21 = FUN_001439e8(uVar21,pbVar19 + uVar7,bVar1,PTR_PTR_00150df8,&puStack_120,lVar8,uVar20)
      ;
      if ((uVar21 & 1) != 0) {
        std::bad_array_new_length::~bad_array_new_length((bad_array_new_length *)&puStack_120);
LAB_00143768:
        __cxa_end_catch();
        FUN_001276bc(uVar11);
      }
      __cxa_end_catch();
      plVar12 = (long *)__cxa_allocate_exception(8);
      *plVar12 = (long)(pbVar18 + 0x10);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(plVar12,PTR_PTR_00150df8,PTR__bad_array_new_length_00150dc8);
    }
    if (((ulong)puVar5 & 1) != 0) {
      lVar8 = FUN_00142308(local_90);
      local_68 = local_a0;
      if (lVar8 == 0x434c4e47432b2b01) {
        local_68 = (ulong *)puVar2[-0xb];
      }
      if ((local_68 == (ulong *)0x0) || (puVar2[-10] == 0)) {
        __cxa_begin_catch(puVar2);
        FUN_001276bc(puVar2[-7]);
        puVar13 = param_6;
        puVar5 = puVar2;
        goto LAB_00143568;
      }
      uVar16 = (**(code **)(*puVar10 + 0x20))(puVar10,puVar2[-10],&local_68);
      puVar5 = (ulong *)(ulong)local_a4;
      puVar24 = puVar10;
      if ((uVar16 & 1) != 0) {
        if ((param_2 & 9) != 0) {
          *param_1 = uVar15;
          param_1[1] = (ulong)pbVar18;
          *(undefined4 *)(param_1 + 5) = 6;
          param_1[4] = (ulong)local_68;
          return;
        }
        goto code_r0x001435a0;
      }
    }
  }
  uVar6 = 0;
  uVar15 = 0;
  do {
    bVar1 = *pbVar23;
    uVar16 = uVar6 & 0x3f;
    uVar6 = uVar6 + 7;
    uVar15 = ((ulong)bVar1 & 0x7f) << uVar16 | uVar15;
    pbVar23 = pbVar23 + 1;
  } while ((char)bVar1 < '\0');
  uVar16 = -1L << (uVar6 & 0x3f);
  if (0x3f < uVar6 || bVar1 < 0x40) {
    uVar16 = 0;
  }
  if ((uVar15 | uVar16) == 0) goto LAB_00143480;
  pbVar18 = pbVar19 + (uVar15 | uVar16);
  uVar6 = uVar17;
  goto LAB_00143290;
LAB_00143480:
  uVar14 = 6;
  if (((uint)uVar17 & (param_2 & 2) >> 1) == 0) {
    uVar14 = 8;
  }
LAB_00143444:
  *(undefined4 *)(param_1 + 5) = uVar14;
  return;
}


// ===== 001435dc  __cxa_call_unexpected =====

void __cxa_call_unexpected(long param_1)

{
  byte bVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  byte *extraout_x9;
  undefined8 uVar7;
  long unaff_x22;
  undefined1 *unaff_x24;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar13;
  undefined *local_70;
  byte *local_68;
  byte *pbVar12;
  
  if (param_1 == 0) {
    __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
    std::terminate();
  }
  __cxa_begin_catch();
  uVar4 = FUN_00142314(param_1);
  if ((uVar4 & 1) == 0) {
    uVar5 = std::get_terminate();
    uVar9 = std::get_unexpected();
    uVar7 = 0;
    lVar8 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + -0x40);
    uVar5 = *(undefined8 *)(param_1 + -0x38);
    lVar8 = param_1 + -0x60;
    unaff_x24 = *(undefined1 **)(param_1 + -0x18);
    uVar7 = *(undefined8 *)(param_1 + -0x10);
    unaff_x22 = (long)*(int *)(param_1 + -0x24);
  }
                    /* try { // try from 0014364c to 0014364f has its CatchHandler @ 00143650 */
  FUN_00127670(uVar9);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0014364c with catch @ 00143650
                        */
  __cxa_begin_catch();
  if ((uVar4 & 1) != 0) {
    local_68 = unaff_x24 + 1;
                    /* try { // try from 00143660 to 0014366b has its CatchHandler @ 001437e8 */
    FUN_001437fc(&local_68,*unaff_x24,uVar7);
    bVar1 = *local_68;
    if (bVar1 != 0xff) goto LAB_00143684;
    do {
      FUN_001276bc(uVar5);
      local_68 = extraout_x9;
LAB_00143684:
      uVar4 = 0;
      uVar10 = 0;
      pbVar12 = local_68 + 1;
      do {
        pbVar11 = pbVar12 + 1;
        bVar3 = *pbVar12;
        uVar2 = uVar4 & 0x3f;
        uVar4 = uVar4 + 7;
        uVar10 = ((ulong)bVar3 & 0x7f) << uVar2 | uVar10;
        pbVar12 = pbVar11;
      } while ((char)bVar3 < '\0');
      local_68 = pbVar11;
                    /* try { // try from 001436ac to 001436af has its CatchHandler @ 001437e4 */
      plVar6 = (long *)__cxa_get_globals_fast();
      lVar13 = *plVar6;
    } while (lVar13 == 0);
                    /* try { // try from 001436bc to 001436c3 has its CatchHandler @ 001437e0 */
    bVar3 = FUN_00142314(lVar13 + 0x60);
    if ((bVar3 & lVar13 != lVar8) == 1) {
      uVar9 = *(undefined8 *)(lVar13 + 0x10);
                    /* try { // try from 001436dc to 00143723 has its CatchHandler @ 001437dc */
      lVar8 = FUN_00142308(lVar13 + 0x60);
      if (lVar8 == 0x434c4e47432b2b01) {
        lVar8 = *(long *)(lVar13 + 8);
      }
      else {
        lVar8 = lVar13 + 0x80;
      }
      uVar4 = FUN_001439e8(unaff_x22,pbVar11 + uVar10,bVar1,uVar9,lVar8,param_1,uVar7);
      if ((uVar4 & 1) == 0) {
        lVar8 = plVar6[1];
        *(int *)(lVar13 + 0x38) = -*(int *)(lVar13 + 0x38);
        *(int *)(plVar6 + 1) = (int)lVar8 + 1;
                    /* try { // try from 001437b8 to 001437cb has its CatchHandler @ 001437dc */
        __cxa_end_catch();
        __cxa_end_catch();
        __cxa_begin_catch(lVar13 + 0x60);
        uVar9 = __cxa_rethrow();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00143738 with catch @ 001437cc
                       catch(type#1 @ 00000000) { ... } // from try @ 00143774 with catch @ 001437cc
                       catch(type#1 @ 00000000) { ... } // from try @ 00143788 with catch @ 001437cc
                        */
        std::bad_array_new_length::~bad_array_new_length((bad_array_new_length *)&local_70);
                    /* try { // try from 001437ec to 001437ef has its CatchHandler @ 001437f8 */
        __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
        FUN_001447ac(uVar9);
      }
    }
    unaff_x24 = PTR_vtable_00150df0;
    local_70 = PTR_vtable_00150df0 + 0x10;
                    /* try { // try from 00143738 to 0014375b has its CatchHandler @ 001437cc */
    uVar4 = FUN_001439e8(unaff_x22,pbVar11 + uVar10,bVar1,PTR_PTR_00150df8,&local_70,param_1,uVar7);
    if ((uVar4 & 1) == 0) goto LAB_00143774;
    std::bad_array_new_length::~bad_array_new_length((bad_array_new_length *)&local_70);
  }
  __cxa_end_catch();
  FUN_001276bc(uVar5);
LAB_00143774:
                    /* try { // try from 00143774 to 00143777 has its CatchHandler @ 001437cc */
  __cxa_end_catch();
  plVar6 = (long *)__cxa_allocate_exception(8);
  *plVar6 = (long)(unaff_x24 + 0x10);
                    /* try { // try from 00143788 to 0014379b has its CatchHandler @ 001437cc */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(plVar6,PTR_PTR_00150df8,PTR__bad_array_new_length_00150dc8);
}


// ===== 001437fc  FUN_001437fc =====

undefined8 * FUN_001437fc(undefined8 *param_1,uint param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  if ((param_2 & 0xff) == 0xff) {
    return (undefined8 *)0x0;
  }
  uVar1 = param_2 & 0xf;
  puVar5 = (ulong *)*param_1;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      if (uVar1 == 0) goto LAB_00143918;
      if (uVar1 != 1) goto LAB_001439e4;
      uVar8 = 0;
      puVar4 = (undefined8 *)0x0;
      puVar6 = puVar5;
      do {
        puVar7 = (ulong *)((long)puVar6 + 1);
        uVar9 = *puVar6;
        uVar3 = uVar8 & 0x3f;
        uVar8 = uVar8 + 7;
        puVar4 = (undefined8 *)(((ulong)(byte)uVar9 & 0x7f) << uVar3 | (ulong)puVar4);
        puVar6 = puVar7;
      } while ((char)(byte)uVar9 < '\0');
    }
    else if (uVar1 == 2) {
      puVar7 = (ulong *)((long)puVar5 + 2);
      puVar4 = (undefined8 *)(ulong)(ushort)*puVar5;
    }
    else {
      if (uVar1 != 3) goto LAB_001439e4;
      puVar4 = (undefined8 *)(ulong)(uint)*puVar5;
joined_r0x001438b4:
      puVar7 = (ulong *)((long)puVar5 + 4);
    }
  }
  else if (uVar1 < 10) {
    if (uVar1 == 4) goto LAB_00143918;
    if (uVar1 != 9) goto LAB_001439e4;
    uVar8 = 0;
    uVar3 = 0;
    puVar6 = puVar5;
    do {
      puVar7 = (ulong *)((long)puVar6 + 1);
      bVar2 = (byte)*puVar6;
      uVar9 = uVar8 & 0x3f;
      uVar8 = uVar8 + 7;
      uVar3 = ((ulong)bVar2 & 0x7f) << uVar9 | uVar3;
      puVar6 = puVar7;
    } while ((char)bVar2 < '\0');
    uVar9 = -1L << (uVar8 & 0x3f);
    if (0x3f < uVar8 || bVar2 < 0x40) {
      uVar9 = 0;
    }
    puVar4 = (undefined8 *)(uVar3 | uVar9);
  }
  else if (uVar1 == 10) {
    puVar7 = (ulong *)((long)puVar5 + 2);
    puVar4 = (undefined8 *)(long)(short)*puVar5;
  }
  else {
    if (uVar1 == 0xb) {
      puVar4 = (undefined8 *)(long)(int)(uint)*puVar5;
      goto joined_r0x001438b4;
    }
    if (uVar1 != 0xc) goto LAB_001439e4;
LAB_00143918:
    puVar7 = puVar5 + 1;
    puVar4 = (undefined8 *)*puVar5;
  }
  uVar1 = (param_2 & 0xff) >> 4 & 7;
  if (uVar1 != 0) {
    if (uVar1 == 3) {
      if (param_3 == 0) {
        __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x135,
                  "uintptr_t __cxxabiv1::readEncodedPointer(const uint8_t **, uint8_t, uintptr_t)",
                  "(base != 0) && \"DW_EH_PE_datarel is invalid with a base of 0\"");
LAB_001439e4:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (puVar4 == (undefined8 *)0x0) goto LAB_00143980;
      puVar4 = (undefined8 *)((long)puVar4 + param_3);
    }
    else {
      if (uVar1 != 1) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (puVar4 == (undefined8 *)0x0) goto LAB_00143980;
      puVar4 = (undefined8 *)((long)puVar4 + (long)puVar5);
    }
  }
  if ((puVar4 != (undefined8 *)0x0) && ((param_2 >> 7 & 1) != 0)) {
    puVar4 = (undefined8 *)*puVar4;
    *param_1 = puVar7;
    return puVar4;
  }
LAB_00143980:
  *param_1 = puVar7;
  return puVar4;
}


// ===== 001439e8  FUN_001439e8 =====

bool FUN_001439e8(ulong param_1,long param_2,ulong param_3,undefined8 param_4,long param_5,
                 long param_6,undefined8 param_7)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  long local_68;
  byte *pbVar9;
  
  if (param_2 == 0) {
LAB_00143afc:
    __cxa_begin_catch(param_6);
                    /* WARNING: Subroutine does not return */
    std::terminate();
  }
  uVar7 = param_3 & 0xf;
  uVar4 = 0;
  uVar5 = 0;
  pbVar9 = (byte *)(param_2 + ~param_1);
  do {
    do {
      pbVar8 = pbVar9 + 1;
      bVar1 = *pbVar9;
      uVar6 = uVar4 & 0x3f;
      uVar4 = uVar4 + 7;
      uVar6 = ((ulong)bVar1 & 0x7f) << uVar6 | uVar5;
      uVar5 = uVar6;
      pbVar9 = pbVar8;
    } while ((char)bVar1 < '\0');
    if (uVar6 == 0) break;
    if ((0xc < (uint)uVar7) || ((0x1c1dU >> uVar7 & 1) == 0)) {
      __cxa_begin_catch(param_6);
      FUN_001276bc(*(undefined8 *)(param_6 + -0x38));
      goto LAB_00143afc;
    }
    local_68 = param_2 + *(long *)(&DAT_001158e8 + uVar7 * 8) * uVar6;
    plVar2 = (long *)FUN_001437fc(&local_68,param_3 & 0xffffffff,param_7);
    local_68 = param_5;
    uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_4,&local_68);
    uVar4 = 0;
    uVar5 = 0;
  } while ((uVar3 & 1) == 0);
  return uVar6 == 0;
}


// ===== 00143b08  __emutls_get_address =====

void * __emutls_get_address(size_t *param_1)

{
  pthread_key_t __key;
  undefined8 *__ptr;
  void *pvVar1;
  void *__s;
  size_t __n;
  ulong uVar2;
  size_t sVar3;
  long lVar4;
  
  sVar3 = param_1[2];
  if (sVar3 == 0) {
    pthread_once((pthread_once_t *)&DAT_00155818,FUN_00143d30);
    pthread_mutex_lock((pthread_mutex_t *)&DAT_00155828);
    sVar3 = param_1[2];
    if (sVar3 == 0) {
      sVar3 = DAT_00155820 + 1;
      DAT_00155820 = sVar3;
      param_1[2] = sVar3;
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_00155828);
    __ptr = (undefined8 *)pthread_getspecific(DAT_00155814);
    if (__ptr == (undefined8 *)0x0) goto LAB_00143be8;
LAB_00143b3c:
    uVar2 = __ptr[1];
    if (sVar3 <= uVar2) goto LAB_00143c30;
    lVar4 = (sVar3 + 0x11 & 0xfffffffffffffff0) - 2;
    __ptr = (undefined8 *)realloc(__ptr,lVar4 * 8 + 0x10);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    memset(__ptr + uVar2 + 2,0,(lVar4 - uVar2) * 8);
  }
  else {
    __ptr = (undefined8 *)pthread_getspecific(DAT_00155814);
    if (__ptr != (undefined8 *)0x0) goto LAB_00143b3c;
LAB_00143be8:
    lVar4 = (sVar3 + 0x11 & 0xfffffffffffffff0) - 2;
    __ptr = (undefined8 *)malloc(lVar4 * 8 + 0x10);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    memset(__ptr + 2,0,lVar4 * 8);
    *__ptr = 1;
  }
  __key = DAT_00155814;
  __ptr[1] = lVar4;
  pthread_setspecific(__key,__ptr);
LAB_00143c30:
  pvVar1 = (void *)__ptr[sVar3 + 1];
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
  uVar2 = param_1[1];
  if (uVar2 < 9) {
    uVar2 = 8;
  }
  if ((uVar2 & uVar2 - 1) == 0) {
    __n = *param_1;
    pvVar1 = malloc(uVar2 + 7 + __n);
    if (pvVar1 != (void *)0x0) {
      __s = (void *)((long)pvVar1 + uVar2 + 7 & -uVar2);
      *(void **)((long)__s + -8) = pvVar1;
      if ((void *)param_1[3] == (void *)0x0) {
        memset(__s,0,__n);
      }
      else {
        memcpy(__s,(void *)param_1[3],__n);
      }
      __ptr[sVar3 + 1] = __s;
      return __s;
    }
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00143cf4  FUN_00143cf4 =====

ulong FUN_00143cf4(ulong param_1)

{
  uint uVar1;
  
  if (DAT_00155810 == '\x01') {
    uVar1 = pthread_key_delete(DAT_00155814);
    param_1 = (ulong)uVar1;
    DAT_00155810 = '\0';
  }
  return param_1;
}


// ===== 00143d30  FUN_00143d30 =====

void FUN_00143d30(void)

{
  int iVar1;
  
  iVar1 = pthread_key_create(&DAT_00155814,FUN_00143d6c);
  if (iVar1 == 0) {
    DAT_00155810 = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00143d6c  FUN_00143d6c =====

long * FUN_00143d6c(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*param_1 != 0) {
    *param_1 = *param_1 + -1;
    uVar1 = pthread_setspecific(DAT_00155814,param_1);
    return (long *)(ulong)uVar1;
  }
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      if (param_1[uVar3 + 2] != 0) {
        free(*(void **)(param_1[uVar3 + 2] + -8));
        uVar2 = param_1[1];
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  free(param_1);
  return param_1;
}


// ===== 00143df4  _INIT_0 =====

void _INIT_0(void)

{
  uint uVar1;
  int iVar2;
  char acStack_6c [92];
  
  uVar1 = getauxval(0x10);
  if ((uVar1 >> 8 & 1) == 0) {
    DAT_00155850 = 0;
    return;
  }
  iVar2 = __system_property_get("ro.arch",acStack_6c);
  if (0 < iVar2) {
    iVar2 = strncmp(acStack_6c,"exynos9810",10);
    DAT_00155850 = iVar2 != 0;
    return;
  }
  DAT_00155850 = 1;
  return;
}


// ===== 00143e8c  FUN_00143e8c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00143e8c(ulong param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = (uint)param_1;
  if (((uint)(param_1 >> 0x3e) & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(ulong *)(param_2 + 0x10);
  }
  if ((uVar3 >> 7 & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 0x400;
  }
  uVar2 = (uint)uVar4;
  if ((uVar3 >> 4 & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 0x8000;
  }
  if ((uVar3 >> 0x1b & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 2;
  }
  if ((uVar2 >> 7 & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 6;
  }
  if ((~uVar3 & 0xc0000) == 0) {
    DAT_00155858 = DAT_00155858 | 0x20;
  }
  if ((uVar3 >> 0x14 & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 0x10;
  }
  if ((uVar3 >> 0x17 & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 8;
  }
  if ((uVar3 >> 9 & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 0x10100;
  }
  if ((uVar3 >> 0x18 & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 0x20000;
  }
  if ((uVar3 >> 0xc & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 0x40;
  }
  if ((uVar3 >> 0x1a & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 0x800000;
  }
  if ((uVar3 >> 3 & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 0x4000;
  }
  if ((uVar3 >> 5 & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 0x800;
  }
  if ((uVar3 >> 6 & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 0x1000;
  }
  if ((uVar3 >> 0xd & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 0x100000;
  }
  if ((uVar3 >> 0xe & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 0x200000;
  }
  if ((uVar3 >> 0x1d & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 0x400000000000;
  }
  if ((uVar3 >> 0x1c & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 0x2000000000000;
  }
  if ((uVar2 >> 0x12 & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 0x180000000000;
  }
  if ((uVar2 >> 0x16 & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 0x380000000000;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 0x2000000000;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 0x6000000000;
  }
  if ((uVar2 >> 4 & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 0x8000000000;
  }
  if ((uVar2 >> 5 & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 0x10000000000;
  }
  if ((uVar2 >> 6 & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 0x20000000000;
  }
  if ((uVar4 & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 0x80000;
  }
  if ((uVar3 >> 8 & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 0x80;
  }
  if ((uVar2 >> 0x10 & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 1;
  }
  if ((uVar2 >> 0xd & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 0x4000000;
  }
  if ((uVar4 >> 0x20 & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 0x10000000;
  }
  if ((uVar4 >> 0x21 & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 0x100000000;
  }
  if ((uVar2 >> 0xf & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 0x2000000;
  }
  if ((uVar2 >> 8 & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 0x1000000;
  }
  if ((uVar2 >> 9 & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 0x200000000;
  }
  if ((uVar2 >> 10 & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 0x400000000;
  }
  if ((uVar2 >> 0xb & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 0x800000000;
  }
  if ((uVar2 >> 0x11 & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 0x4000000000000;
  }
  if ((uVar2 >> 0x15 & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 0x20000000;
  }
  if ((int)uVar2 < 0) {
    DAT_00155858 = DAT_00155858 | 0x40000000000000;
  }
  if ((uVar2 >> 0x17 & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 0x40000000000;
  }
  if ((uVar2 >> 0x18 & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 0x100000000000000;
  }
  if ((uVar2 >> 0x19 & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 0x80000000000000;
  }
  if ((uVar4 >> 0x2b & 1) != 0) {
    DAT_00155858 = DAT_00155858 | 0x800000000000000;
  }
  if ((uVar3 >> 0xb & 1) == 0) {
    if ((param_1 & 0x201) != 0) {
      DAT_00155858 = DAT_00155858 | 0x300;
    }
    if ((uVar4 & 1) != 0 || (param_1 & 0x10000) != 0) {
      DAT_00155858 = DAT_00155858 | 0x40000;
    }
    if ((param_1 & 0x4008000) != 0) {
      DAT_00155858 = DAT_00155858 | 0x400000;
    }
    if ((uVar4 & 0x100004000) != 0) {
      DAT_00155858 = DAT_00155858 | 0x8000000;
    }
    uVar5 = DAT_00155858 | (ulong)(uVar2 << 0x13) & 0x80000000;
    if ((uVar4 & 2) != 0 && (param_1 & 0x400000) != 0) {
      uVar5 = uVar5 | 0x1000000000;
    }
    uVar5 = uVar5 | (param_1 & 0x20000) >> 4;
    goto LAB_00143ff4;
  }
  uVar4 = id_aa64pfr1_el1;
  if ((uVar4 & 0xf00) != 0) {
    DAT_00155858 = DAT_00155858 | 0x80000000000;
  }
  if ((uVar4 & 0xf0) == 0x10) {
    DAT_00155858 = DAT_00155858 | 0x1000000000000;
    if ((uVar4 & 0xf000000) != 0x2000000) goto LAB_001442e4;
LAB_00144338:
    DAT_00155858 = DAT_00155858 | 0x200000000000000;
    uVar4 = id_aa64pfr0_el1;
    uVar3 = (uint)uVar4;
  }
  else {
    if ((uVar4 & 0xf000000) == 0x2000000) goto LAB_00144338;
LAB_001442e4:
    uVar4 = id_aa64pfr0_el1;
    uVar3 = (uint)uVar4;
  }
  if ((~uVar3 & 0xf0000) != 0) {
    DAT_00155858 = DAT_00155858 | 0x300;
  }
  if ((uVar4 & 0xf00000000) != 0) {
    uVar4 = UnkSytemRegRead(3,0,0,4,4);
    if ((uVar4 & 0xf) == 1) {
      DAT_00155858 = DAT_00155858 | 0x1000000000;
    }
    else if ((uVar4 & 0xf) == 0) {
      DAT_00155858 = DAT_00155858 | 0x40000000;
    }
    if ((uVar4 & 0xf00000) != 0) {
      DAT_00155858 = DAT_00155858 | 0x80000000;
    }
  }
  uVar4 = id_aa64isar0_el1;
  if ((uVar4 & 0xf00000000) != 0) {
    DAT_00155858 = DAT_00155858 | 0x2000;
  }
  uVar4 = id_aa64isar1_el1;
  uVar5 = uVar4 >> 0x14 & 0xf;
  if ((uVar4 & 0xf) != 0) {
    DAT_00155858 = DAT_00155858 | 0x40000;
  }
  if (uVar5 != 0) {
    if (uVar5 == 3) {
      DAT_00155858 = DAT_00155858 | 0x400000000400000;
    }
    else {
      DAT_00155858 = DAT_00155858 | 0x400000;
    }
  }
  uVar5 = DAT_00155858 | 0x800000000000;
  if ((uVar4 & 0xf0000000000) != 0x20000000000) {
    uVar5 = DAT_00155858;
  }
  if ((uVar4 & 0xf00000000000) != 0) {
    uVar5 = uVar5 | 0x8000000;
  }
  if (uVar4 >> 0x3c != 0) {
    if (uVar4 >> 0x3d == 0) {
      DAT_00155858 = uVar5 | 0x8008000000000000;
      return;
    }
    uVar1 = 0x38000000000000;
    if (uVar4 >> 0x3c < 3) {
      uVar1 = 0x18000000000000;
    }
    DAT_00155858 = uVar5 | uVar1 | 0x8000000000000000;
    return;
  }
LAB_00143ff4:
  DAT_00155858 = uVar5 | 0x8000000000000000;
  return;
}


// ===== 00144428  _INIT_1 =====

void _INIT_1(void)

{
  int iVar1;
  ulong uVar2;
  char local_70 [8];
  ulong uStack_68;
  undefined8 local_60;
  
  if (DAT_00155858 != 0) {
    return;
  }
  iVar1 = __system_property_get("ro.arch",local_70);
  if ((iVar1 < 1) || (iVar1 = strncmp(local_70,"exynos9810",10), iVar1 != 0)) {
    uVar2 = getauxval(0x10);
    local_60 = getauxval(0x1a);
    local_70[0] = '\x18';
    local_70[1] = '\0';
    local_70[2] = '\0';
    local_70[3] = '\0';
    local_70[4] = '\0';
    local_70[5] = '\0';
    local_70[6] = '\0';
    local_70[7] = '\0';
    uStack_68 = uVar2;
    FUN_00143e8c(uVar2 | 0x4000000000000000,local_70);
  }
  return;
}


// ===== 001444c0  FUN_001444c0 =====

undefined8 FUN_001444c0(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  
  if (DAT_00155850 == '\0') {
    do {
      uVar3 = *param_2;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = param_1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return uVar3;
  }
  LOAcquire();
  uVar3 = *param_2;
  *param_2 = param_1;
  LORelease();
  return uVar3;
}


// ===== 001444f0  FUN_001444f0 =====

int FUN_001444f0(int param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  if (DAT_00155850 == '\0') {
    do {
      iVar3 = *param_2;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = iVar3 + param_1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return iVar3;
  }
  LOAcquire();
  iVar3 = *param_2;
  *param_2 = iVar3 + param_1;
  LORelease();
  return iVar3;
}


// ===== 00144520  FUN_00144520 =====

long FUN_00144520(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_00155850 == '\0') {
    do {
      lVar3 = *param_2;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = lVar3 + param_1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return lVar3;
  }
  lVar3 = *param_2;
  *param_2 = lVar3 + param_1;
  return lVar3;
}


// ===== 00144550  FUN_00144550 =====

long FUN_00144550(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_00155850 == '\0') {
    do {
      lVar3 = *param_2;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = lVar3 + param_1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return lVar3;
  }
  LOAcquire();
  lVar3 = *param_2;
  *param_2 = lVar3 + param_1;
  LORelease();
  return lVar3;
}


// ===== 00144580  FUN_00144580 =====

undefined8 FUN_00144580(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_4f0 [624];
  undefined1 auStack_280 [528];
  undefined8 local_70;
  undefined1 auStack_68 [24];
  code *local_50;
  
  FUN_0014859c(auStack_280);
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_001449f0(auStack_4f0,auStack_280);
  iVar1 = FUN_00144c00(auStack_4f0);
  while( true ) {
    if (iVar1 == 0) {
      return 5;
    }
    if ((iVar1 < 0) || (iVar1 = FUN_00144c28(auStack_4f0,auStack_68), iVar1 != 0)) break;
    if ((local_50 != (code *)0x0) &&
       (iVar1 = (*local_50)(1,1,*param_1,param_1,auStack_4f0), iVar1 != 8)) {
      if (iVar1 != 6) {
        return 3;
      }
      FUN_00144a98(auStack_4f0,0xfffffffe,&local_70);
      param_1[3] = local_70;
      uVar2 = FUN_00144678(auStack_280,auStack_4f0,param_1);
      return uVar2;
    }
    iVar1 = FUN_00144c00(auStack_4f0);
  }
  return 3;
}


// ===== 00144678  FUN_00144678 =====

undefined8 FUN_00144678(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_80 [24];
  code *local_68;
  long local_38;
  
  FUN_001449f0(param_2,param_1);
  iVar2 = FUN_00144c14(param_2);
  while( true ) {
    if (iVar2 == 0) {
      return 5;
    }
    if (iVar2 < 0) break;
    FUN_00144a98(param_2,0xfffffffe,&local_38);
    iVar2 = FUN_00144c28(param_2,auStack_80);
    if (iVar2 != 0) {
      return 2;
    }
    if (local_68 != (code *)0x0) {
      uVar3 = 6;
      if (local_38 != param_3[3]) {
        uVar3 = 2;
      }
      iVar2 = (*local_68)(1,uVar3,*param_3,param_3,param_2);
      puVar1 = PTR___sF_00150d60;
      if (iVar2 != 8) {
        if (iVar2 != 7) {
          return 2;
        }
        FUN_00144c68(param_2);
        return 2;
      }
      if (local_38 == param_3[3]) {
        fprintf((FILE *)(PTR___sF_00150d60 + 0x130),"libunwind: %s - %s\n","unwind_phase2",
                "during phase1 personality function said it would stop here, but now in phase2 it did not stop here"
               );
        fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    iVar2 = FUN_00144c14(param_2);
  }
  return 2;
}


// ===== 001447ac  FUN_001447ac =====

void FUN_001447ac(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_4a0 [624];
  undefined1 auStack_230 [528];
  
  FUN_0014859c(auStack_230);
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_00144678(auStack_230,auStack_4a0,param_1);
  }
  else {
    FUN_00144830(auStack_230,auStack_4a0,param_1,*(long *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = PTR___sF_00150d60;
  fprintf((FILE *)(PTR___sF_00150d60 + 0x130),"libunwind: %s - %s\n","_Unwind_Resume",
          "_Unwind_Resume() can\'t return");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00144830  FUN_00144830 =====

void FUN_00144830(undefined8 param_1,undefined8 param_2,undefined8 *param_3,code *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined1 auStack_78 [24];
  code *local_60;
  
  FUN_001449f0(param_2,param_1);
  iVar1 = FUN_00144c14(param_2);
  while( true ) {
    if (iVar1 < 1) {
      (*param_4)(1,0x1a,*param_3,param_3,param_2,param_5);
      return;
    }
    iVar1 = FUN_00144c28(param_2,auStack_78);
    if (iVar1 != 0) break;
    iVar1 = (*param_4)(1,10,*param_3,param_3,param_2,param_5);
    if (iVar1 != 0) {
      return;
    }
    if ((local_60 != (code *)0x0) &&
       (iVar1 = (*local_60)(1,10,*param_3,param_3,param_2), iVar1 != 8)) {
      if (iVar1 != 7) {
        return;
      }
      FUN_00144c68(param_2);
    }
    iVar1 = FUN_00144c14(param_2);
  }
  return;
}


// ===== 00144924  FUN_00144924 =====

undefined8 FUN_00144924(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_58 [16];
  undefined8 local_48;
  
  iVar1 = FUN_00144c28(param_1,auStack_58);
  if (iVar1 != 0) {
    local_48 = 0;
  }
  return local_48;
}


// ===== 00144958  FUN_00144958 =====

undefined8 FUN_00144958(undefined8 param_1)

{
  int iVar1;
  undefined8 local_58 [9];
  
  iVar1 = FUN_00144c28(param_1,local_58);
  if (iVar1 != 0) {
    local_58[0] = 0;
  }
  return local_58[0];
}


// ===== 0014498c  FUN_0014498c =====

void FUN_0014498c(long param_1)

{
  if (*(code **)(param_1 + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001449a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 8))(1,param_1);
    return;
  }
  return;
}


// ===== 001449a8  thunk_FUN_00144b14 =====

void thunk_FUN_00144b14(void)

{
  FUN_00144b14();
  return;
}


// ===== 001449b0  FUN_001449b0 =====

undefined8 FUN_001449b0(undefined8 param_1)

{
  undefined8 local_18;
  
  FUN_00144a98(param_1,0xffffffff,&local_18);
  return local_18;
}


// ===== 001449e0  FUN_001449e0 =====

void FUN_001449e0(undefined8 param_1,undefined8 param_2)

{
  FUN_00144b14(param_1,0xffffffff,param_2);
  return;
}


// ===== 001449f0  FUN_001449f0 =====

undefined8 FUN_001449f0(undefined8 *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = &PTR_FUN_00150ad8;
  param_1[1] = &DAT_00155860;
  memcpy(param_1 + 2,param_2,0x110);
  uVar3 = *(undefined8 *)((long)param_2 + 0x130);
  uVar2 = *(undefined8 *)((long)param_2 + 0x148);
  uVar1 = *(undefined8 *)((long)param_2 + 0x140);
  uVar7 = *(undefined8 *)((long)param_2 + 0x118);
  uVar6 = *(undefined8 *)((long)param_2 + 0x110);
  uVar5 = *(undefined8 *)((long)param_2 + 0x128);
  uVar4 = *(undefined8 *)((long)param_2 + 0x120);
  param_1[0x29] = *(undefined8 *)((long)param_2 + 0x138);
  param_1[0x28] = uVar3;
  param_1[0x2b] = uVar2;
  param_1[0x2a] = uVar1;
  param_1[0x25] = uVar7;
  param_1[0x24] = uVar6;
  param_1[0x27] = uVar5;
  param_1[0x26] = uVar4;
  uVar3 = *(undefined8 *)((long)param_2 + 0x170);
  uVar2 = *(undefined8 *)((long)param_2 + 0x188);
  uVar1 = *(undefined8 *)((long)param_2 + 0x180);
  uVar7 = *(undefined8 *)((long)param_2 + 0x158);
  uVar6 = *(undefined8 *)((long)param_2 + 0x150);
  uVar5 = *(undefined8 *)((long)param_2 + 0x168);
  uVar4 = *(undefined8 *)((long)param_2 + 0x160);
  param_1[0x31] = *(undefined8 *)((long)param_2 + 0x178);
  param_1[0x30] = uVar3;
  param_1[0x33] = uVar2;
  param_1[0x32] = uVar1;
  param_1[0x2d] = uVar7;
  param_1[0x2c] = uVar6;
  param_1[0x2f] = uVar5;
  param_1[0x2e] = uVar4;
  uVar3 = *(undefined8 *)((long)param_2 + 0x1b0);
  uVar2 = *(undefined8 *)((long)param_2 + 0x1c8);
  uVar1 = *(undefined8 *)((long)param_2 + 0x1c0);
  uVar7 = *(undefined8 *)((long)param_2 + 0x198);
  uVar6 = *(undefined8 *)((long)param_2 + 400);
  uVar5 = *(undefined8 *)((long)param_2 + 0x1a8);
  uVar4 = *(undefined8 *)((long)param_2 + 0x1a0);
  param_1[0x39] = *(undefined8 *)((long)param_2 + 0x1b8);
  param_1[0x38] = uVar3;
  param_1[0x3b] = uVar2;
  param_1[0x3a] = uVar1;
  param_1[0x35] = uVar7;
  param_1[0x34] = uVar6;
  param_1[0x37] = uVar5;
  param_1[0x36] = uVar4;
  uVar3 = *(undefined8 *)((long)param_2 + 0x1f0);
  uVar2 = *(undefined8 *)((long)param_2 + 0x208);
  uVar1 = *(undefined8 *)((long)param_2 + 0x200);
  uVar7 = *(undefined8 *)((long)param_2 + 0x1d8);
  uVar6 = *(undefined8 *)((long)param_2 + 0x1d0);
  uVar5 = *(undefined8 *)((long)param_2 + 0x1e8);
  uVar4 = *(undefined8 *)((long)param_2 + 0x1e0);
  param_1[0x41] = *(undefined8 *)((long)param_2 + 0x1f8);
  param_1[0x40] = uVar3;
  param_1[0x43] = uVar2;
  param_1[0x42] = uVar1;
  param_1[0x3d] = uVar7;
  param_1[0x3c] = uVar6;
  param_1[0x3f] = uVar5;
  param_1[0x3e] = uVar4;
  *(undefined8 *)((long)param_1 + 0x263) = 0;
  *(undefined8 *)((long)param_1 + 0x25b) = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  FUN_001454b8(param_1,0);
  return 0;
}


// ===== 00144a98  FUN_00144a98 =====

undefined8 FUN_00144a98(long *param_1,undefined4 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x10))();
  if ((uVar1 & 1) != 0) {
    uVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_2);
    *param_3 = uVar2;
    return 0;
  }
  return 0xffffe672;
}


// ===== 00144b14  FUN_00144b14 =====

undefined8 FUN_00144b14(long *param_1,int param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_78 [32];
  long local_58;
  
  uVar1 = (**(code **)(*param_1 + 0x10))();
  if ((uVar1 & 1) != 0) {
    (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3);
    if (param_2 == -1) {
      (**(code **)(*param_1 + 0x48))(param_1,auStack_78);
      (**(code **)(*param_1 + 0x68))(param_1,0);
      if (local_58 != 0) {
        lVar2 = (**(code **)(*param_1 + 0x18))(param_1,0xfffffffe);
        (**(code **)(*param_1 + 0x20))(param_1,0xfffffffe,local_58 + lVar2);
      }
    }
    return 0;
  }
  return 0xffffe672;
}


// ===== 00144c00  FUN_00144c00 =====

void FUN_00144c00(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00144c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,0);
  return;
}


// ===== 00144c14  FUN_00144c14 =====

void FUN_00144c14(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00144c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,1);
  return;
}


// ===== 00144c28  FUN_00144c28 =====

undefined4 FUN_00144c28(long *param_1,long param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x48))();
  uVar1 = 0xffffe66b;
  if (*(long *)(param_2 + 8) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 00144c68  FUN_00144c68 =====

undefined8 FUN_00144c68(long *param_1)

{
  (**(code **)(*param_1 + 0x50))();
  return 0xffffe674;
}


// ===== 00144c90  FUN_00144c90 =====

char * FUN_00144c90(undefined8 param_1,uint *param_2,undefined8 *param_3,long *param_4,ulong param_5
                   )

{
  char cVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  uint *local_48;
  
  puVar10 = param_2 + 1;
  uVar9 = (ulong)*param_2;
  if (*param_2 == 0xffffffff) {
    uVar9 = *(ulong *)(param_2 + 1);
    puVar10 = param_2 + 3;
  }
  if (uVar9 == 0) {
    pcVar7 = "FDE has zero length";
  }
  else if (*puVar10 == 0) {
    pcVar7 = "FDE is really a CIE";
  }
  else {
    lVar8 = (long)puVar10 - (ulong)*puVar10;
    if ((param_5 & 1) == 0) {
      pcVar7 = (char *)FUN_00144e20(param_1,lVar8,param_4);
      if (pcVar7 != (char *)0x0) {
        return pcVar7;
      }
    }
    else if (*param_4 != lVar8) {
      return "CIE start does not match";
    }
    lVar8 = (long)puVar10 + uVar9;
    local_48 = puVar10 + 1;
    lVar3 = FUN_00146c78(param_1,&local_48,lVar8,(char)param_4[3],0);
    lVar4 = FUN_00146c78(param_1,&local_48,lVar8,*(byte *)(param_4 + 3) & 0xf,0);
    cVar1 = *(char *)((long)param_4 + 0x31);
    param_3[5] = 0;
    puVar10 = local_48;
    if (cVar1 != '\0') {
      lVar5 = FUN_00147004(&local_48,lVar8);
      puVar2 = local_48;
      puVar10 = (uint *)((long)local_48 + lVar5);
      if ((*(byte *)((long)param_4 + 0x19) != 0xff) &&
         (lVar5 = FUN_00146c78(param_1,&local_48,lVar8,*(byte *)((long)param_4 + 0x19) & 0xf,0),
         lVar5 != 0)) {
        local_48 = puVar2;
        uVar6 = FUN_00146c78(param_1,&local_48,lVar8,*(undefined1 *)((long)param_4 + 0x19),0);
        param_3[5] = uVar6;
      }
    }
    pcVar7 = (char *)0x0;
    param_3[2] = puVar10;
    param_3[3] = lVar3;
    *param_3 = param_2;
    param_3[1] = lVar8 - (long)param_2;
    param_3[4] = lVar4 + lVar3;
  }
  return pcVar7;
}


// ===== 00144e20  FUN_00144e20 =====

char * FUN_00144e20(undefined8 param_1,uint *param_2,long *param_3)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  long lVar8;
  char *pcVar9;
  uint *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  byte *pbVar18;
  byte *local_48;
  
  *(undefined2 *)((long)param_3 + 0x33) = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  *(undefined2 *)(param_3 + 6) = 0;
  *param_3 = (long)param_2;
  *(undefined4 *)(param_3 + 3) = 0xff00;
  puVar10 = param_2 + 1;
  uVar13 = (ulong)*param_2;
  if (*param_2 == 0xffffffff) {
    uVar13 = *(ulong *)(param_2 + 1);
    puVar10 = param_2 + 3;
    pbVar1 = (byte *)(uVar13 + (long)puVar10);
  }
  else {
    pbVar1 = (byte *)((long)puVar10 + uVar13);
  }
  if (uVar13 == 0) {
    pcVar9 = (char *)0x0;
  }
  else if (*puVar10 == 0) {
    uVar4 = puVar10[1];
    if (((byte)uVar4 & 0xfd) == 1) {
      pbVar18 = (byte *)((long)puVar10 + 5);
      pbVar11 = pbVar18;
      do {
        local_48 = pbVar11 + 1;
        bVar2 = *pbVar11;
        pbVar11 = local_48;
      } while (bVar2 != 0);
      uVar7 = FUN_00147004(&local_48,pbVar1);
      uVar13 = 0;
      uVar14 = 0;
      *(undefined4 *)(param_3 + 5) = uVar7;
      puVar5 = PTR___sF_00150d60;
      pbVar11 = local_48;
      pbVar15 = local_48;
      do {
        pbVar12 = pbVar11;
        if (pbVar15 == pbVar1) {
          fprintf((FILE *)(PTR___sF_00150d60 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                  "truncated sleb128 expression");
          fflush((FILE *)(puVar5 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
        pbVar16 = pbVar15 + 1;
        bVar2 = *pbVar15;
        pbVar11 = pbVar12 + 1;
        uVar3 = uVar13 & 0x3f;
        uVar13 = uVar13 + 7;
        uVar14 = ((ulong)bVar2 & 0x7f) << uVar3 | uVar14;
        pbVar15 = pbVar16;
      } while ((char)bVar2 < '\0');
      uVar17 = (uint)(-1L << (uVar13 & 0x3f));
      if (0x38 < (int)uVar13 - 7U || bVar2 < 0x40) {
        uVar17 = 0;
      }
      *(uint *)((long)param_3 + 0x2c) = (uint)uVar14 | uVar17;
      if ((byte)uVar4 == 1) {
        local_48 = pbVar12 + 2;
        *(byte *)((long)param_3 + 0x32) = *pbVar16;
        bVar2 = *pbVar18;
      }
      else {
        local_48 = pbVar11;
        uVar6 = FUN_00147004(&local_48,pbVar1);
        *(undefined1 *)((long)param_3 + 0x32) = uVar6;
        bVar2 = *pbVar18;
      }
      if (bVar2 == 0x7a) {
        FUN_00147004(&local_48,pbVar1);
LAB_00144fa0:
        bVar2 = *pbVar18;
        if (bVar2 < 0x50) {
          if (bVar2 < 0x47) {
            if (bVar2 != 0x42) {
              if (bVar2 != 0) goto LAB_00145040;
              goto LAB_00145084;
            }
            *(undefined1 *)((long)param_3 + 0x33) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_00144fa0;
          }
          if (bVar2 == 0x47) {
            *(undefined1 *)((long)param_3 + 0x34) = 1;
            goto LAB_00145040;
          }
          if (bVar2 == 0x4c) {
            pbVar18 = pbVar18 + 1;
            *(byte *)((long)param_3 + 0x19) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_00144fa0;
          }
        }
        else if (bVar2 < 0x53) {
          if (bVar2 == 0x50) {
            bVar2 = *local_48;
            *(byte *)((long)param_3 + 0x1a) = bVar2;
            *(char *)((long)param_3 + 0x1b) = (char)(local_48 + 1) - (char)param_2;
            local_48 = local_48 + 1;
            lVar8 = FUN_00146c78(param_1,&local_48,pbVar1,bVar2,0);
            param_3[4] = lVar8;
            pbVar18 = pbVar18 + 1;
            goto LAB_00144fa0;
          }
          if (bVar2 == 0x52) {
            pbVar18 = pbVar18 + 1;
            *(byte *)(param_3 + 3) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_00144fa0;
          }
        }
        else {
          if (bVar2 == 0x53) {
            *(undefined1 *)(param_3 + 6) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_00144fa0;
          }
          if (bVar2 == 0x7a) {
            *(undefined1 *)((long)param_3 + 0x31) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_00144fa0;
          }
        }
LAB_00145040:
        pbVar18 = pbVar18 + 1;
        goto LAB_00144fa0;
      }
LAB_00145084:
      pcVar9 = (char *)0x0;
      param_3[1] = (long)pbVar1 - *param_3;
      param_3[2] = (long)local_48;
    }
    else {
      pcVar9 = "CIE version is not 1 or 3";
    }
  }
  else {
    pcVar9 = "CIE ID is not zero";
  }
  return pcVar9;
}


// ===== 001450e8  FUN_001450e8 =====

void FUN_001450e8(void)

{
  return;
}


// ===== 001450f0  FUN_001450f0 =====

void FUN_001450f0(void)

{
  return;
}


// ===== 001450f8  FUN_001450f8 =====

bool FUN_001450f8(undefined8 param_1,uint param_2)

{
  if (0xfffffffd < param_2) {
    return true;
  }
  if (0x5f < param_2) {
    return false;
  }
  if (param_2 == 0x22) {
    return true;
  }
  return param_2 - 0x40 < 0xffffffe1;
}


// ===== 0014513c  FUN_0014513c =====

undefined8 FUN_0014513c(long param_1,uint param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_00150d60;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_001451a4:
      return *(undefined8 *)(param_1 + 0x108);
    }
    if (param_2 == 0xffffffff) goto LAB_00145198;
    if (param_2 == 0x1d) {
      return *(undefined8 *)(param_1 + 0xf8);
    }
  }
  else if ((int)param_2 < 0x20) {
    if (param_2 == 0x1e) {
      return *(undefined8 *)(param_1 + 0x100);
    }
    if (param_2 == 0x1f) goto LAB_001451a4;
  }
  else {
    if (param_2 == 0x22) {
      return *(undefined8 *)(param_1 + 0x118);
    }
    if (param_2 == 0x20) {
LAB_00145198:
      return *(undefined8 *)(param_1 + 0x110);
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_00150d60 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8);
}


// ===== 00145224  FUN_00145224 =====

void FUN_00145224(long param_1,uint param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_00150d60;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_0014528c:
      *(undefined8 *)(param_1 + 0x108) = param_3;
      return;
    }
    if (param_2 == 0xffffffff) goto LAB_00145280;
    if (param_2 == 0x1d) {
      *(undefined8 *)(param_1 + 0xf8) = param_3;
      return;
    }
  }
  else if ((int)param_2 < 0x20) {
    if (param_2 == 0x1e) {
      *(undefined8 *)(param_1 + 0x100) = param_3;
      return;
    }
    if (param_2 == 0x1f) goto LAB_0014528c;
  }
  else {
    if (param_2 == 0x22) {
      *(undefined8 *)(param_1 + 0x118) = param_3;
      return;
    }
    if (param_2 == 0x20) {
LAB_00145280:
      *(undefined8 *)(param_1 + 0x110) = param_3;
      return;
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_00150d60 + 0x130),"libunwind: %s - %s\n","setRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8) = param_3;
  return;
}


// ===== 0014530c  FUN_0014530c =====

bool FUN_0014530c(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffffffe0) == 0x40;
}


// ===== 00145320  FUN_00145320 =====

undefined1  [16] FUN_00145320(long param_1,int param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + (long)param_2 * 8 + -0xe0);
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 00145330  FUN_00145330 =====

void FUN_00145330(undefined8 param_1,long param_2,int param_3)

{
  *(undefined8 *)(param_2 + (long)param_3 * 8 + -0xe0) = param_1;
  return;
}


// ===== 00145340  FUN_00145340 =====

ulong FUN_00145340(long *param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_240 [528];
  
  if ((char)param_1[0x4d] != '\0') {
    return 0;
  }
  if (*(char *)((long)param_1 + 0x26a) == '\0') {
    lVar1 = param_1[1];
    uVar4 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
    uVar3 = FUN_00145864(lVar1,uVar4,param_1[0x4b],param_1 + 2,(long)param_1 + 0x269,param_2 & 1);
    iVar2 = (int)uVar3;
  }
  else {
    memset(auStack_240,0,0x210);
    uVar3 = FUN_00145744(param_1,auStack_240);
    iVar2 = (int)uVar3;
  }
  if (iVar2 == 1) {
    uVar3 = uVar3 & 0xffffffff;
    (**(code **)(*param_1 + 0x68))(param_1,1);
    if ((char)param_1[0x4d] != '\0') {
      return 0;
    }
  }
  return uVar3;
}


// ===== 00145430  FUN_00145430 =====

void FUN_00145430(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)(param_1 + 0x268) != '\0') {
    param_2[8] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[7] = 0;
    param_2[6] = 0;
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x220);
  param_2[1] = *(undefined8 *)(param_1 + 0x228);
  *param_2 = uVar1;
  uVar6 = *(undefined8 *)(param_1 + 0x248);
  uVar5 = *(undefined8 *)(param_1 + 0x240);
  uVar2 = *(undefined8 *)(param_1 + 600);
  uVar1 = *(undefined8 *)(param_1 + 0x250);
  uVar4 = *(undefined8 *)(param_1 + 0x238);
  uVar3 = *(undefined8 *)(param_1 + 0x230);
  param_2[8] = *(undefined8 *)(param_1 + 0x260);
  param_2[5] = uVar6;
  param_2[4] = uVar5;
  param_2[7] = uVar2;
  param_2[6] = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return;
}


// ===== 00145474  FUN_00145474 =====

void FUN_00145474(long param_1)

{
  FUN_0014850c(param_1 + 0x10);
  return;
}


// ===== 00145480  FUN_00145480 =====

undefined1 FUN_00145480(long param_1)

{
  return *(undefined1 *)(param_1 + 0x269);
}


// ===== 0014548c  FUN_0014548c =====

undefined8 FUN_0014548c(long *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  return 0;
}


// ===== 001454b8  FUN_001454b8 =====

void FUN_001454b8(long *param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long local_6e0 [4];
  long local_6c0;
  int local_6a8;
  int iStack_6a4;
  undefined4 uStack_6a0;
  long local_690;
  long lStack_688;
  long local_680;
  undefined1 auStack_678 [16];
  long local_668;
  int *local_648;
  undefined1 *puStack_640;
  ulong local_638;
  
  *(undefined1 *)((long)param_1 + 0x26a) = 0;
  lVar3 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  if (lVar3 == 0) {
    *(undefined1 *)(param_1 + 0x4d) = 1;
    return;
  }
  local_648 = (int *)param_1[1];
  puStack_640 = auStack_678;
  uVar7 = lVar3 - (param_2 & 1);
  local_638 = uVar7;
  iVar1 = dl_iterate_phdr(FUN_00147e5c,&local_648);
  if (((iVar1 == 0) || (local_668 == 0)) ||
     (uVar4 = FUN_00147b88(param_1,uVar7,auStack_678,0), (uVar4 & 1) == 0)) {
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00155864);
    for (puVar6 = PTR_DAT_00155518; puVar6 < PTR_DAT_00155520; puVar6 = puVar6 + 0x20) {
      if ((*(ulong *)(puVar6 + 8) <= uVar7) && (uVar7 < *(ulong *)(puVar6 + 0x10))) {
        lVar3 = *(long *)(puVar6 + 0x18);
        pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00155864);
        if ((lVar3 != 0) &&
           (lVar3 = FUN_00144c90(param_1[1],lVar3,&local_6a8,local_6e0,0), lVar3 == 0)) {
          memset(&local_648,0,0x618);
          uVar7 = FUN_00145cec(param_1[1],&local_6a8,local_6e0,uVar7,4,&local_648);
          if ((uVar7 & 1) != 0) {
            param_1[0x49] = 0;
            param_1[0x46] = local_680;
            param_1[0x47] = local_6c0;
            param_1[0x48] = local_638 & 0xffffffff;
            *(undefined4 *)(param_1 + 0x4a) = 0x3000000;
            param_1[0x45] = lStack_688;
            param_1[0x44] = local_690;
            param_1[0x4c] = 0;
            param_1[0x4b] = CONCAT44(iStack_6a4,local_6a8);
            *(undefined4 *)((long)param_1 + 0x254) = uStack_6a0;
            return;
          }
        }
        goto LAB_00145640;
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00155864);
LAB_00145640:
    lVar3 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
    local_648 = &local_6a8;
    puStack_640 = (undefined1 *)0x8;
    local_6e0[1] = 8;
    local_6e0[0] = lVar3;
    uVar2 = getpid();
    lVar5 = syscall(0x10e,(ulong)uVar2,&local_648,1,local_6e0,1,0);
    if (((lVar5 != 8) || (local_6a8 != -0x2d7fee98)) || (iStack_6a4 != -0x2bffffff)) {
      *(undefined1 *)(param_1 + 0x4d) = 1;
      return;
    }
    param_1[0x4c] = 0;
    param_1[0x45] = lVar3 + 4;
    param_1[0x44] = lVar3;
    *(undefined1 *)((long)param_1 + 0x26a) = 1;
    param_1[0x49] = 0;
    param_1[0x48] = 0;
    param_1[0x4b] = 0;
    param_1[0x4a] = 0;
    param_1[0x47] = 0;
    param_1[0x46] = 0;
  }
  return;
}


// ===== 00145738  FUN_00145738 =====

void FUN_00145738(undefined8 param_1,undefined4 param_2)

{
  FUN_001484dc(param_2);
  return;
}


// ===== 00145744  FUN_00145744 =====

undefined8 FUN_00145744(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar1 + 0x138);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar1 + 0x140);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar1 + 0x148);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar1 + 0x150);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar1 + 0x158);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar1 + 0x160);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar1 + 0x168);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar1 + 0x170);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(lVar1 + 0x178);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(lVar1 + 0x180);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar1 + 0x188);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar1 + 400);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar1 + 0x198);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(lVar1 + 0x1a8);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(lVar1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(lVar1 + 0x1b8);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(lVar1 + 0x1c0);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(lVar1 + 0x1c8);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(lVar1 + 0x1d0);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(lVar1 + 0x1d8);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(lVar1 + 0x1e0);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(lVar1 + 0x1e8);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(lVar1 + 0x1f0);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(lVar1 + 0x1f8);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(lVar1 + 0x200);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(lVar1 + 0x208);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(lVar1 + 0x210);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(lVar1 + 0x218);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(lVar1 + 0x220);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(lVar1 + 0x228);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(lVar1 + 0x230);
  uVar2 = *(undefined8 *)(lVar1 + 0x238);
  *(undefined1 *)(param_1 + 0x269) = 1;
  *(undefined8 *)(param_1 + 0x110) = uVar2;
  return 1;
}


// ===== 00145864  FUN_00145864 =====

undefined8
FUN_00145864(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4,
            undefined1 *param_5,ulong param_6)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  int *piVar15;
  uint uVar16;
  ulong *puVar17;
  ulong uVar18;
  undefined1 auStack_b20 [288];
  ulong local_a00 [96];
  undefined1 auStack_700 [24];
  int local_6e8 [2];
  long local_6e0 [67];
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined1 auStack_e8 [48];
  undefined1 local_b8;
  byte local_b6;
  char local_b4;
  undefined1 auStack_b0 [48];
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar7 = FUN_00144c90(param_1,param_3,auStack_b0,auStack_e8,0);
  if (lVar7 == 0) {
    memset(auStack_700,0,0x618);
    uVar8 = FUN_00145cec(param_1,auStack_b0,auStack_e8,param_2,4,auStack_700);
    if ((uVar8 & 1) != 0) {
      uVar8 = FUN_00146934(param_1,auStack_700,param_4);
      if (((param_6 & 1) != 0) && (local_b4 != '\0')) {
        for (uVar12 = *(ulong *)((long)param_4 + 0xf8) & 0xfffffffffffffff0; uVar12 < uVar8;
            uVar12 = uVar12 + 0x10) {
        }
      }
      memcpy(local_a00 + 0x1e,param_4,0x210);
      uVar12 = 0;
      uVar14 = 0;
      piVar15 = local_6e8;
      puVar17 = local_a00 + 0x1e;
      local_a00[0x3d] = uVar8;
      do {
        puVar3 = PTR___sF_00150d60;
        iVar2 = *piVar15;
        if (iVar2 == 0) {
          uVar18 = local_a00[0x3d];
          uVar5 = local_a00[0x3b];
          uVar6 = local_a00[0x3c];
          uVar10 = local_a00[0x3f];
          if (uVar12 == local_b6) {
            if (local_b6 < 0x1f) {
              puVar13 = (undefined8 *)((long)param_4 + 0xe8);
              if ((local_b6 != 0x1d) &&
                 (puVar13 = (undefined8 *)((long)param_4 + 0xf0), local_b6 != 0x1e))
              goto LAB_00145b44;
            }
            else {
              puVar13 = (undefined8 *)((long)param_4 + 0x108);
              if ((local_b6 != 0x22) &&
                 ((puVar13 = (undefined8 *)((long)param_4 + 0x100), local_b6 != 0x20 &&
                  (puVar13 = (undefined8 *)((long)param_4 + 0xf8), local_b6 != 0x1f)))) {
LAB_00145b44:
                if (0x1c < local_b6) {
                  fprintf((FILE *)(PTR___sF_00150d60 + 0x130),"libunwind: %s - %s\n","getRegister",
                          "unsupported arm64 register");
                  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                puVar13 = (undefined8 *)((long)param_4 + (ulong)local_b6 * 8);
              }
            }
            uVar14 = *puVar13;
          }
        }
        else {
          uVar16 = (uint)uVar12;
          if ((uVar16 & 0x60) == 0x40) {
            if (iVar2 < 5) {
              uVar18 = 0;
              if (iVar2 != 1) {
                if (iVar2 != 2) {
LAB_00145c50:
                  fprintf((FILE *)(PTR___sF_00150d60 + 0x130),"libunwind: %s - %s\n",
                          "getSavedFloatRegister","unsupported restore location for float register")
                  ;
                  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                uVar18 = *(ulong *)(*(long *)(piVar15 + 2) + uVar8);
              }
            }
            else if (iVar2 == 5) {
              uVar18 = *(ulong *)((long)param_4 +
                                 ((*(long *)(piVar15 + 2) << 0x20) + -0x4000000000 >> 0x1d) + 0x110)
              ;
            }
            else {
              if (iVar2 != 6) goto LAB_00145c50;
              puVar9 = (ulong *)FUN_001471cc(*(undefined8 *)(piVar15 + 2),param_1,param_4,uVar8);
              uVar18 = *puVar9;
            }
            local_a00[uVar12] = uVar18;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == local_b6) {
            uVar14 = FUN_00146a68(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == 0x22) {
            uVar10 = FUN_00146a68(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
          }
          else {
            if (0xffffffe0 < uVar16 - 0x40) {
              return 0xffffe672;
            }
            uVar11 = FUN_00146a68(param_1,param_4,uVar8,piVar15);
            puVar3 = PTR___sF_00150d60;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
            if ((int)uVar16 < 0x1f) {
              uVar5 = uVar11;
              if ((uVar16 != 0x1d) && (uVar5 = local_a00[0x3b], uVar6 = uVar11, uVar16 != 0x1e))
              goto LAB_00145b98;
            }
            else {
              uVar18 = uVar11;
              if ((uVar16 != 0x1f) &&
                 ((uVar18 = local_a00[0x3d], uVar10 = uVar11, uVar16 != 0x22 &&
                  (uVar10 = local_a00[0x3f], uVar16 != 0x20)))) {
LAB_00145b98:
                if (0x1c < uVar12) {
                  fprintf((FILE *)(PTR___sF_00150d60 + 0x130),"libunwind: %s - %s\n","setRegister",
                          "unsupported arm64 register");
                  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                *puVar17 = uVar11;
                uVar18 = local_a00[0x3d];
                uVar5 = local_a00[0x3b];
                uVar6 = local_a00[0x3c];
                uVar10 = local_a00[0x3f];
              }
            }
          }
        }
        local_a00[0x3f] = uVar10;
        local_a00[0x3c] = uVar6;
        local_a00[0x3b] = uVar5;
        local_a00[0x3d] = uVar18;
        uVar12 = uVar12 + 1;
        piVar15 = piVar15 + 4;
        puVar17 = puVar17 + 1;
        if (uVar12 == 0x60) {
          *param_5 = local_b8;
          memcpy(auStack_b20,param_4,0x210);
          uStack_78 = uStack_4c0;
          local_80 = local_4c8;
          uVar4 = local_80;
          local_80._0_4_ = (int)local_4c8;
          bVar1 = (int)local_80 != 0;
          if (bVar1) {
            local_80 = uVar4;
            FUN_00146a68(param_1,auStack_b20,uVar8,&local_80);
          }
          local_a00[0x3e] = uVar14;
          memcpy(param_4,local_a00 + 0x1e,0x210);
          return 1;
        }
      } while( true );
    }
  }
  return 0xffffe66e;
}


// ===== 00145cec  FUN_00145cec =====

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_00145cec(undefined8 param_1,long *param_2,long *param_3,long param_4,int param_5,
            undefined4 *param_6)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  long lVar8;
  char *__ptr;
  size_t __size;
  FILE *__s;
  uint uVar9;
  byte *pbVar10;
  ulong uVar11;
  undefined4 *puVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  byte *pbVar21;
  undefined1 auStack_6e0 [4];
  int local_6dc;
  byte **local_6d8;
  undefined8 *puStack_6d0;
  undefined8 local_6c8;
  undefined8 *local_6c0;
  byte *apbStack_6a0 [193];
  ulong local_98 [7];
  
  puVar6 = (undefined8 *)auStack_6e0;
  lVar20 = 0;
  local_98[0] = param_3[2];
  local_98[1] = param_3[1] + *param_3;
  local_98[2] = 0xffffffffffffffff;
  local_98[3] = param_2[2];
  local_6c8 = param_1;
  local_6c0 = (undefined8 *)0x0;
  local_98[4] = param_2[1] + *param_2;
  local_98[5] = param_4 - param_2[3];
  local_6d8 = apbStack_6a0 + 0x44;
  puStack_6d0 = (undefined8 *)(param_6 + 0x8e);
  while( true ) {
    pbVar21 = *(byte **)((long)local_98 + lVar20);
    pbVar2 = *(byte **)((long)local_98 + lVar20 + 8);
    uVar16 = *(ulong *)((long)local_98 + lVar20 + 0x10);
    apbStack_6a0[0xc0] = pbVar21;
    if (pbVar21 < pbVar2 && uVar16 != 0) break;
LAB_00145d70:
    lVar20 = lVar20 + 0x18;
    if (lVar20 == 0x30) {
      return 1;
    }
  }
  uVar17 = 0;
LAB_00145da0:
  puVar18 = local_6c0;
  puVar5 = PTR___sF_00150d60;
  pbVar10 = pbVar21 + 1;
  bVar3 = *pbVar21;
  apbStack_6a0[0xc0] = pbVar10;
  switch((ulong)bVar3) {
  case 0:
    goto code_r0x00146674;
  case 1:
    uVar17 = FUN_00146c78(local_6c8,apbStack_6a0 + 0xc0,pbVar2,(char)param_3[3],0);
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 2:
    uVar9 = (uint)pbVar21[1];
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 2;
    goto LAB_00146228;
  case 3:
    uVar9 = (uint)*(ushort *)(pbVar21 + 1);
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 3;
    goto LAB_00146228;
  case 4:
    uVar9 = *(uint *)(pbVar21 + 1);
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 5;
LAB_00146228:
    uVar17 = uVar17 + iVar13 * uVar9;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 5:
    uVar19 = FUN_00147004(apbStack_6a0 + 0xc0,pbVar2);
    lVar8 = FUN_00147004(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended DWARF unwind, reg too big\n";
      __size = 0x46;
      __s = (FILE *)(PTR___sF_00150d60 + 0x130);
      goto LAB_00146824;
    }
    puVar12 = param_6 + uVar19 * 4;
    iVar13 = *(int *)((long)param_3 + 0x2c);
    if (*(char *)(puVar12 + 7) == '\0') {
      pbVar10 = *(byte **)(param_6 + uVar19 * 4 + 8);
      pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
      *(char *)(puVar12 + 7) = '\x01';
      apbStack_6a0[uVar19 * 2 + 1] = pbVar10;
      apbStack_6a0[uVar19 * 2] = pbVar21;
    }
    lVar8 = lVar8 * iVar13;
LAB_001461c4:
    puVar12[6] = 2;
    *(long *)(puVar12 + 8) = lVar8;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 6:
    uVar19 = FUN_00147004(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_restore_extended DWARF unwind, reg too big\n";
LAB_00146714:
      __s = (FILE *)(PTR___sF_00150d60 + 0x130);
      __size = 0x47;
      goto LAB_00146824;
    }
    cVar4 = *(char *)(param_6 + uVar19 * 4 + 7);
joined_r0x00146654:
    if (cVar4 != '\0') {
      pbVar21 = apbStack_6a0[uVar19 * 2];
      *(byte **)(param_6 + uVar19 * 4 + 8) = apbStack_6a0[uVar19 * 2 + 1];
      *(byte **)(param_6 + uVar19 * 4 + 6) = pbVar21;
    }
    goto code_r0x00146674;
  case 7:
    uVar19 = FUN_00147004(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_undefined DWARF unwind, reg too big\n";
LAB_00146818:
      __s = (FILE *)(PTR___sF_00150d60 + 0x130);
      __size = 0x40;
      goto LAB_00146824;
    }
    if (*(char *)(param_6 + uVar19 * 4 + 7) == '\0') {
      pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
      *(char *)(param_6 + uVar19 * 4 + 7) = '\x01';
      apbStack_6a0[uVar19 * 2 + 1] = *(byte **)(param_6 + uVar19 * 4 + 8);
      apbStack_6a0[uVar19 * 2] = pbVar21;
    }
    param_6[uVar19 * 4 + 6] = 1;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 8:
    uVar19 = FUN_00147004(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_same_value DWARF unwind, reg too big\n";
LAB_001467fc:
      __s = (FILE *)(PTR___sF_00150d60 + 0x130);
      __size = 0x41;
      goto LAB_00146824;
    }
    if (*(char *)(param_6 + uVar19 * 4 + 7) == '\0') {
      pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
      *(char *)(param_6 + uVar19 * 4 + 7) = '\x01';
      apbStack_6a0[uVar19 * 2 + 1] = *(byte **)(param_6 + uVar19 * 4 + 8);
      apbStack_6a0[uVar19 * 2] = pbVar21;
    }
    param_6[uVar19 * 4 + 6] = 0;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 9:
    uVar19 = FUN_00147004(apbStack_6a0 + 0xc0,pbVar2);
    uVar14 = FUN_00147004(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg too big\n";
      __size = 0x3f;
      __s = (FILE *)(PTR___sF_00150d60 + 0x130);
      goto LAB_00146824;
    }
    if (0x5f < uVar14) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg2 too big\n";
      goto LAB_00146818;
    }
    if (*(char *)(param_6 + uVar19 * 4 + 7) == '\0') {
      pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
      *(char *)(param_6 + uVar19 * 4 + 7) = '\x01';
      apbStack_6a0[uVar19 * 2 + 1] = *(byte **)(param_6 + uVar19 * 4 + 8);
      apbStack_6a0[uVar19 * 2] = pbVar21;
    }
    *(ulong *)(param_6 + uVar19 * 4 + 8) = uVar14;
    param_6[uVar19 * 4 + 6] = 5;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 10:
    puVar18 = (undefined8 *)((long)puVar6 + 0xfffffffffffff9e0);
    *puVar18 = local_6c0;
    memcpy((undefined1 *)((long)puVar6 + 0xfffffffffffff9e8),param_6,0x618);
    local_6c0 = puVar18;
    puVar6 = puVar18;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xb:
    if (local_6c0 == (undefined8 *)0x0) {
      return 0;
    }
    memcpy(param_6,local_6c0 + 1,0x618);
    local_6c0 = (undefined8 *)*puVar18;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xc:
    uVar19 = FUN_00147004(apbStack_6a0 + 0xc0,pbVar2);
    uVar7 = FUN_00147004(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa DWARF unwind, reg too big\n";
      __size = 0x3e;
      __s = (FILE *)(PTR___sF_00150d60 + 0x130);
      goto LAB_00146824;
    }
    *param_6 = (int)uVar19;
    param_6[1] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xd:
    uVar19 = FUN_00147004(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa_register DWARF unwind, reg too big\n";
      goto LAB_00146714;
    }
    *param_6 = (int)uVar19;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xe:
    uVar7 = FUN_00147004(apbStack_6a0 + 0xc0,pbVar2);
    param_6[1] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xf:
    *param_6 = 0;
    *(byte **)(param_6 + 2) = pbVar10;
    goto LAB_001465a8;
  case 0x10:
    uVar19 = FUN_00147004(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_expression DWARF unwind, reg too big\n";
      goto LAB_001467fc;
    }
    puVar12 = param_6 + uVar19 * 4;
    if (*(char *)(puVar12 + 7) == '\0') {
      pbVar10 = *(byte **)(param_6 + uVar19 * 4 + 8);
      pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
      *(char *)(puVar12 + 7) = '\x01';
      apbStack_6a0[uVar19 * 2 + 1] = pbVar10;
      apbStack_6a0[uVar19 * 2] = pbVar21;
    }
    uVar7 = 6;
LAB_001465a0:
    puVar12[6] = uVar7;
    *(byte **)(puVar12 + 8) = apbStack_6a0[0xc0];
LAB_001465a8:
    lVar8 = FUN_00147004(apbStack_6a0 + 0xc0,pbVar2);
    apbStack_6a0[0xc0] = apbStack_6a0[0xc0] + lVar8;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x11:
    uVar19 = FUN_00147004(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_00150d60;
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended_sf DWARF unwind, reg too big\n";
      __size = 0x49;
      __s = (FILE *)(PTR___sF_00150d60 + 0x130);
      goto LAB_00146824;
    }
    uVar14 = 0;
    uVar11 = 0;
    pbVar21 = apbStack_6a0[0xc0];
    pbVar10 = apbStack_6a0[0xc0];
    do {
      if (pbVar10 == pbVar2) {
        fprintf((FILE *)(PTR___sF_00150d60 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                "truncated sleb128 expression");
        fflush((FILE *)(puVar5 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      bVar3 = *pbVar10;
      pbVar21 = pbVar21 + 1;
      uVar15 = uVar14 & 0x3f;
      uVar14 = uVar14 + 7;
      uVar11 = ((ulong)bVar3 & 0x7f) << uVar15 | uVar11;
      pbVar10 = pbVar10 + 1;
    } while ((char)bVar3 < '\0');
    puVar12 = param_6 + uVar19 * 4;
    uVar15 = -1L << (uVar14 & 0x3f);
    iVar13 = *(int *)((long)param_3 + 0x2c);
    if (0x38 < (int)uVar14 - 7U || bVar3 < 0x40) {
      uVar15 = 0;
    }
    apbStack_6a0[0xc0] = pbVar21;
    if (*(char *)(puVar12 + 7) == '\0') {
      pbVar10 = *(byte **)(param_6 + uVar19 * 4 + 8);
      pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
      *(char *)(puVar12 + 7) = '\x01';
      apbStack_6a0[uVar19 * 2 + 1] = pbVar10;
      apbStack_6a0[uVar19 * 2] = pbVar21;
    }
    uVar11 = uVar11 | uVar15;
    uVar7 = 2;
LAB_00146534:
    puVar12[6] = uVar7;
    *(ulong *)(puVar12 + 8) = uVar11 * (long)iVar13;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x12:
    uVar14 = FUN_00147004(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_00150d60;
    uVar19 = 0;
    uVar11 = 0;
    pbVar21 = apbStack_6a0[0xc0];
    pbVar10 = apbStack_6a0[0xc0];
    do {
      if (pbVar10 == pbVar2) {
        fprintf((FILE *)(PTR___sF_00150d60 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                "truncated sleb128 expression");
        fflush((FILE *)(puVar5 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      bVar3 = *pbVar10;
      pbVar21 = pbVar21 + 1;
      uVar15 = uVar19 & 0x3f;
      uVar19 = uVar19 + 7;
      uVar11 = ((ulong)bVar3 & 0x7f) << uVar15 | uVar11;
      pbVar10 = pbVar10 + 1;
    } while ((char)bVar3 < '\0');
    apbStack_6a0[0xc0] = pbVar21;
    if (0x5f < uVar14) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa_sf DWARF unwind, reg too big\n";
      goto LAB_001467fc;
    }
    iVar13 = *(int *)((long)param_3 + 0x2c);
    uVar9 = (uint)(-1L << (uVar19 & 0x3f));
    if (0x38 < (int)uVar19 - 7U || bVar3 < 0x40) {
      uVar9 = 0;
    }
    *param_6 = (int)uVar14;
    param_6[1] = iVar13 * ((uint)uVar11 | uVar9);
    break;
  case 0x13:
    uVar19 = 0;
    uVar14 = 0;
    pbVar21 = pbVar10;
    do {
      if (pbVar21 == pbVar2) {
        fprintf((FILE *)(PTR___sF_00150d60 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                "truncated sleb128 expression");
        fflush((FILE *)(puVar5 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      bVar3 = *pbVar21;
      pbVar10 = pbVar10 + 1;
      uVar11 = uVar19 & 0x3f;
      uVar19 = uVar19 + 7;
      uVar14 = ((ulong)bVar3 & 0x7f) << uVar11 | uVar14;
      pbVar21 = pbVar21 + 1;
    } while ((char)bVar3 < '\0');
    apbStack_6a0[0xc0] = pbVar10;
    uVar9 = (uint)(-1L << (uVar19 & 0x3f));
    if (0x38 < (int)uVar19 - 7U || bVar3 < 0x40) {
      uVar9 = 0;
    }
    param_6[1] = *(int *)((long)param_3 + 0x2c) * ((uint)uVar14 | uVar9);
    pbVar21 = pbVar10;
    break;
  case 0x14:
    uVar19 = FUN_00147004(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      fprintf((FILE *)(PTR___sF_00150d60 + 0x130),
              "libunwind: malformed DW_CFA_val_offset DWARF unwind, reg (%lu) out of range\n\n",
              uVar19);
      goto LAB_0014682c;
    }
    lVar8 = FUN_00147004(apbStack_6a0 + 0xc0,pbVar2);
    iVar13 = *(int *)((long)param_3 + 0x2c);
    if (*(char *)(param_6 + uVar19 * 4 + 7) == '\0') {
      pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
      *(char *)(param_6 + uVar19 * 4 + 7) = '\x01';
      apbStack_6a0[uVar19 * 2 + 1] = *(byte **)(param_6 + uVar19 * 4 + 8);
      apbStack_6a0[uVar19 * 2] = pbVar21;
    }
    param_6[uVar19 * 4 + 6] = 4;
    *(long *)(param_6 + uVar19 * 4 + 8) = lVar8 * iVar13;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x15:
    uVar19 = FUN_00147004(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_00150d60;
    if (uVar19 < 0x60) {
      uVar14 = 0;
      uVar11 = 0;
      pbVar21 = apbStack_6a0[0xc0];
      pbVar10 = apbStack_6a0[0xc0];
      do {
        if (pbVar10 == pbVar2) {
          fprintf((FILE *)(PTR___sF_00150d60 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                  "truncated sleb128 expression");
          fflush((FILE *)(puVar5 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
        bVar3 = *pbVar10;
        pbVar21 = pbVar21 + 1;
        uVar15 = uVar14 & 0x3f;
        uVar14 = uVar14 + 7;
        uVar11 = ((ulong)bVar3 & 0x7f) << uVar15 | uVar11;
        pbVar10 = pbVar10 + 1;
      } while ((char)bVar3 < '\0');
      puVar12 = param_6 + uVar19 * 4;
      uVar15 = -1L << (uVar14 & 0x3f);
      iVar13 = *(int *)((long)param_3 + 0x2c);
      if (0x38 < (int)uVar14 - 7U || bVar3 < 0x40) {
        uVar15 = 0;
      }
      apbStack_6a0[0xc0] = pbVar21;
      if (*(char *)(puVar12 + 7) == '\0') {
        pbVar10 = *(byte **)(param_6 + uVar19 * 4 + 8);
        pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
        *(char *)(puVar12 + 7) = '\x01';
        apbStack_6a0[uVar19 * 2 + 1] = pbVar10;
        apbStack_6a0[uVar19 * 2] = pbVar21;
      }
      uVar11 = uVar11 | uVar15;
      uVar7 = 4;
      goto LAB_00146534;
    }
    __ptr = "libunwind: malformed DW_CFA_val_offset_sf DWARF unwind, reg too big\n";
    __size = 0x44;
    __s = (FILE *)(PTR___sF_00150d60 + 0x130);
    goto LAB_00146824;
  case 0x16:
    uVar19 = FUN_00147004(apbStack_6a0 + 0xc0,pbVar2);
    if (uVar19 < 0x60) {
      puVar12 = param_6 + uVar19 * 4;
      if (*(char *)(puVar12 + 7) == '\0') {
        pbVar10 = *(byte **)(param_6 + uVar19 * 4 + 8);
        pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
        *(char *)(puVar12 + 7) = '\x01';
        apbStack_6a0[uVar19 * 2 + 1] = pbVar10;
        apbStack_6a0[uVar19 * 2] = pbVar21;
      }
      uVar7 = 7;
      goto LAB_001465a0;
    }
    __ptr = "libunwind: malformed DW_CFA_val_expression DWARF unwind, reg too big\n";
    __size = 0x45;
    __s = (FILE *)(PTR___sF_00150d60 + 0x130);
    goto LAB_00146824;
  default:
    bVar1 = bVar3 & 0xc0;
    uVar19 = (ulong)bVar3 & 0x3f;
    if (bVar1 == 0x40) {
      uVar17 = uVar17 + (uint)((int)param_3[5] * (int)uVar19);
      pbVar21 = pbVar10;
    }
    else {
      if (bVar1 == 0xc0) {
        cVar4 = *(char *)(param_6 + uVar19 * 4 + 7);
        goto joined_r0x00146654;
      }
      if (bVar1 != 0x80) {
        return 0;
      }
      local_6dc = param_5;
      lVar8 = FUN_00147004(apbStack_6a0 + 0xc0,pbVar2);
      iVar13 = *(int *)((long)param_3 + 0x2c);
      if (*(char *)(param_6 + uVar19 * 4 + 7) == '\0') {
        pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
        apbStack_6a0[uVar19 * 2 + 1] = *(byte **)(param_6 + uVar19 * 4 + 8);
        apbStack_6a0[uVar19 * 2] = pbVar21;
        *(char *)(param_6 + uVar19 * 4 + 7) = '\x01';
      }
      param_6[uVar19 * 4 + 6] = 2;
      *(long *)(param_6 + uVar19 * 4 + 8) = lVar8 * iVar13;
      param_5 = local_6dc;
      pbVar21 = apbStack_6a0[0xc0];
    }
    break;
  case 0x2d:
    if (param_5 != 4) goto code_r0x00146674;
    if (*(char *)(param_6 + 0x8f) == '\0') {
      pbVar10 = (byte *)puStack_6d0[1];
      pbVar21 = (byte *)*puStack_6d0;
      *(undefined1 *)(param_6 + 0x8f) = 1;
      local_6d8[1] = pbVar10;
      *local_6d8 = pbVar21;
    }
    *(ulong *)(param_6 + 0x90) = *(ulong *)(param_6 + 0x90) ^ 1;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x2e:
    uVar7 = FUN_00147004(apbStack_6a0 + 0xc0,pbVar2);
    param_6[4] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x2f:
    uVar19 = FUN_00147004(apbStack_6a0 + 0xc0,pbVar2);
    if (uVar19 < 0x60) {
      lVar8 = FUN_00147004(apbStack_6a0 + 0xc0,pbVar2);
      puVar12 = param_6 + uVar19 * 4;
      iVar13 = *(int *)((long)param_3 + 0x2c);
      if (*(char *)(puVar12 + 7) == '\0') {
        pbVar10 = *(byte **)(param_6 + uVar19 * 4 + 8);
        pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
        *(char *)(puVar12 + 7) = '\x01';
        apbStack_6a0[uVar19 * 2 + 1] = pbVar10;
        apbStack_6a0[uVar19 * 2] = pbVar21;
      }
      lVar8 = -(lVar8 * iVar13);
      goto LAB_001461c4;
    }
    __ptr = "libunwind: malformed DW_CFA_GNU_negative_offset_extended DWARF unwind, reg too big\n";
    __size = 0x53;
    __s = (FILE *)(PTR___sF_00150d60 + 0x130);
LAB_00146824:
    fwrite(__ptr,__size,1,__s);
LAB_0014682c:
    fflush((FILE *)(PTR___sF_00150d60 + 0x130));
    return 0;
  }
joined_r0x0014615c:
  if ((pbVar2 <= pbVar21) || (uVar16 <= uVar17)) goto LAB_00145d70;
  goto LAB_00145da0;
code_r0x00146674:
  pbVar21 = apbStack_6a0[0xc0];
  goto joined_r0x0014615c;
}


// ===== 00146934  FUN_00146934 =====

long FUN_00146934(undefined8 param_1,uint *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR___sF_00150d60;
  uVar1 = *param_2;
  if ((int)uVar1 < 0x1e) {
    if ((int)uVar1 < 0) {
      if (uVar1 == 0xfffffffe) {
LAB_00146974:
        return *(long *)(param_3 + 0xf8) + (long)(int)param_2[1];
      }
      if (uVar1 == 0xffffffff) goto LAB_001469b8;
    }
    else {
      if (uVar1 == 0) {
        lVar3 = FUN_001471cc(*(undefined8 *)(param_2 + 2),param_1,param_3,0);
        return lVar3;
      }
      if (uVar1 == 0x1d) {
        return *(long *)(param_3 + 0xe8) + (long)(int)param_2[1];
      }
    }
  }
  else if ((int)uVar1 < 0x20) {
    if (uVar1 == 0x1e) {
      return *(long *)(param_3 + 0xf0) + (long)(int)param_2[1];
    }
    if (uVar1 == 0x1f) goto LAB_00146974;
  }
  else {
    if (uVar1 == 0x22) {
      return *(long *)(param_3 + 0x108) + (long)(int)param_2[1];
    }
    if (uVar1 == 0x20) {
LAB_001469b8:
      return *(long *)(param_3 + 0x100) + (long)(int)param_2[1];
    }
  }
  if (0x1c < uVar1) {
    fprintf((FILE *)(PTR___sF_00150d60 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(long *)(param_3 + (ulong)uVar1 * 8) + (long)(int)param_2[1];
}


// ===== 00146a68  FUN_00146a68 =====

undefined8 FUN_00146a68(undefined8 param_1,long param_2,long param_3,int *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  puVar2 = PTR___sF_00150d60;
  iVar1 = *param_4;
  if (iVar1 < 5) {
    if (iVar1 == 1) {
      return 0;
    }
    if ((iVar1 == 2) || (iVar1 == 3)) {
      return *(undefined8 *)(*(long *)(param_4 + 2) + param_3);
    }
  }
  else {
    if (iVar1 == 5) {
      uVar5 = (uint)*(ulong *)(param_4 + 2);
      if ((int)uVar5 < 0x1e) {
        if (uVar5 == 0xfffffffe) {
LAB_00146ba4:
          return *(undefined8 *)(param_2 + 0xf8);
        }
        if (uVar5 == 0xffffffff) goto LAB_00146b8c;
        if (uVar5 == 0x1d) {
          return *(undefined8 *)(param_2 + 0xe8);
        }
      }
      else if ((int)uVar5 < 0x20) {
        if (uVar5 == 0x1e) {
          return *(undefined8 *)(param_2 + 0xf0);
        }
        if (uVar5 == 0x1f) goto LAB_00146ba4;
      }
      else {
        if (uVar5 == 0x22) {
          return *(undefined8 *)(param_2 + 0x108);
        }
        if (uVar5 == 0x20) {
LAB_00146b8c:
          return *(undefined8 *)(param_2 + 0x100);
        }
      }
      if (0x1c < uVar5) {
        fprintf((FILE *)(PTR___sF_00150d60 + 0x130),"libunwind: %s - %s\n","getRegister",
                "unsupported arm64 register");
        fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      return *(undefined8 *)(param_2 + (*(ulong *)(param_4 + 2) & 0xffffffff) * 8);
    }
    if (iVar1 == 6) {
      puVar4 = (undefined8 *)FUN_001471cc(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return *puVar4;
    }
    if (iVar1 == 7) {
      uVar3 = FUN_001471cc(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return uVar3;
    }
  }
  fprintf((FILE *)(PTR___sF_00150d60 + 0x130),"libunwind: %s - %s\n","getSavedRegister",
          "unsupported restore location for register");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00146c78  FUN_00146c78 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_00146c78(undefined8 param_1,long *param_2,ulong *param_3,uint param_4,long param_5)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  
  puVar3 = PTR___sF_00150d60;
  uVar1 = param_4 & 0xf;
  puVar10 = (ulong *)*param_2;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      if ((param_4 & 0xf) == 0) goto LAB_00146dc4;
      if (uVar1 != 1) {
LAB_00146fd0:
        fprintf((FILE *)(PTR___sF_00150d60 + 0x130),"libunwind: %s - %s\n","getEncodedP",
                "unknown pointer encoding");
        fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar4 = (undefined8 *)FUN_00147004(param_2,param_3);
      puVar3 = PTR___sF_00150d60;
    }
    else if (uVar1 == 2) {
      puVar4 = (undefined8 *)(ulong)(ushort)*puVar10;
      *param_2 = (long)puVar10 + 2;
      puVar3 = PTR___sF_00150d60;
    }
    else {
      if (uVar1 != 3) goto LAB_00146fd0;
      puVar4 = (undefined8 *)(ulong)(uint)*puVar10;
      *param_2 = (long)((long)puVar10 + 4);
      puVar3 = PTR___sF_00150d60;
    }
  }
  else if (uVar1 < 10) {
    if (uVar1 == 4) {
LAB_00146dc4:
      puVar4 = (undefined8 *)*puVar10;
      *param_2 = (long)(puVar10 + 1);
      puVar3 = PTR___sF_00150d60;
    }
    else {
      if (uVar1 != 9) goto LAB_00146fd0;
      uVar7 = 0;
      uVar5 = 0;
      puVar6 = puVar10;
      puVar9 = puVar10;
      do {
        if (puVar9 == param_3) {
          fprintf((FILE *)(PTR___sF_00150d60 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                  "truncated sleb128 expression");
          fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
        bVar2 = (byte)*puVar9;
        puVar6 = (ulong *)((long)puVar6 + 1);
        uVar8 = uVar7 & 0x3f;
        uVar7 = uVar7 + 7;
        uVar5 = ((ulong)bVar2 & 0x7f) << uVar8 | uVar5;
        puVar9 = (ulong *)((long)puVar9 + 1);
      } while ((char)bVar2 < '\0');
      *param_2 = (long)puVar6;
      uVar8 = -1L << (uVar7 & 0x3f);
      if (0x38 < (int)uVar7 - 7U || bVar2 < 0x40) {
        uVar8 = 0;
      }
      puVar4 = (undefined8 *)(uVar5 | uVar8);
      puVar3 = PTR___sF_00150d60;
    }
  }
  else if (uVar1 == 10) {
    puVar4 = (undefined8 *)(long)(short)*puVar10;
    *param_2 = (long)puVar10 + 2;
    puVar3 = PTR___sF_00150d60;
  }
  else {
    if (uVar1 != 0xb) {
      if (uVar1 != 0xc) goto LAB_00146fd0;
      goto LAB_00146dc4;
    }
    puVar4 = (undefined8 *)(long)(int)(uint)*puVar10;
    *param_2 = (long)((long)puVar10 + 4);
    puVar3 = PTR___sF_00150d60;
  }
  uVar1 = (param_4 & 0xff) >> 4 & 7;
  PTR___sF_00150d60 = puVar3;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
      if (uVar1 != 1) goto LAB_00146f9c;
      puVar4 = (undefined8 *)((long)puVar4 + (long)puVar10);
    }
LAB_00146e50:
    if ((param_4 >> 7 & 1) != 0) {
      return (undefined8 *)*puVar4;
    }
    return puVar4;
  }
  if (uVar1 < 4) {
    if (uVar1 == 3) {
      if (param_5 == 0) {
        fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP",
                "DW_EH_PE_datarel is invalid with a datarelBase of 0");
        fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar4 = (undefined8 *)((long)puVar4 + param_5);
      goto LAB_00146e50;
    }
    if (uVar1 == 2) {
      fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP",
              "DW_EH_PE_textrel pointer encoding not supported");
      fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    if (uVar1 == 4) {
      fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP",
              "DW_EH_PE_funcrel pointer encoding not supported");
      fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (uVar1 == 5) {
      fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP",
              "DW_EH_PE_aligned pointer encoding not supported");
      fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
LAB_00146f9c:
  fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP","unknown pointer encoding");
  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00147004  FUN_00147004 =====

ulong FUN_00147004(long *param_1,byte *param_2)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  puVar2 = PTR___sF_00150d60;
  pbVar4 = (byte *)*param_1;
  if (pbVar4 != param_2) {
    pbVar5 = pbVar4 + 1;
    uVar3 = (ulong)*pbVar4 & 0x7f;
    if (-1 < (char)*pbVar4) {
LAB_00147034:
      *param_1 = (long)pbVar5;
      return uVar3;
    }
    if (pbVar5 != param_2) {
      uVar3 = uVar3 | (ulong)((int)(char)pbVar4[1] & 0x7f) << 7;
      pbVar5 = pbVar4 + 2;
      if (-1 < (char)pbVar4[1]) goto LAB_00147034;
      if (pbVar5 != param_2) {
        uVar3 = uVar3 | (ulong)((int)(char)pbVar4[2] & 0x7f) << 0xe;
        pbVar5 = pbVar4 + 3;
        if (-1 < (char)pbVar4[2]) goto LAB_00147034;
        if (pbVar5 != param_2) {
          uVar3 = uVar3 | (ulong)((int)(char)pbVar4[3] & 0x7f) << 0x15;
          pbVar5 = pbVar4 + 4;
          if (-1 < (char)pbVar4[3]) goto LAB_00147034;
          if (pbVar5 != param_2) {
            uVar3 = uVar3 | (ulong)((int)(char)pbVar4[4] & 0x7f) << 0x1c;
            pbVar5 = pbVar4 + 5;
            if (-1 < (char)pbVar4[4]) goto LAB_00147034;
            if (pbVar5 != param_2) {
              uVar3 = uVar3 | (ulong)((int)(char)pbVar4[5] & 0x7f) << 0x23;
              pbVar5 = pbVar4 + 6;
              if (-1 < (char)pbVar4[5]) goto LAB_00147034;
              if (pbVar5 != param_2) {
                uVar3 = uVar3 | (ulong)((int)(char)pbVar4[6] & 0x7f) << 0x2a;
                pbVar5 = pbVar4 + 7;
                if (-1 < (char)pbVar4[6]) goto LAB_00147034;
                if (pbVar5 != param_2) {
                  uVar3 = uVar3 | (ulong)((int)(char)pbVar4[7] & 0x7f) << 0x31;
                  pbVar5 = pbVar4 + 8;
                  if (-1 < (char)pbVar4[7]) goto LAB_00147034;
                  if (pbVar5 != param_2) {
                    uVar3 = uVar3 | (ulong)((int)(char)pbVar4[8] & 0x7f) << 0x38;
                    pbVar5 = pbVar4 + 9;
                    if (-1 < (char)pbVar4[8]) goto LAB_00147034;
                    if (pbVar5 != param_2) {
                      bVar1 = *pbVar5;
                      if ((bVar1 & 0x7e) == 0) {
                        if (-1 < (char)bVar1) {
                          *param_1 = (long)(pbVar4 + 10);
                          return uVar3 | (ulong)bVar1 << 0x3f;
                        }
                        if (pbVar4 + 10 == param_2) goto LAB_00147164;
                      }
                      fprintf((FILE *)(PTR___sF_00150d60 + 0x130),"libunwind: %s - %s\n",
                              "getULEB128","malformed uleb128 expression");
                      fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
                      abort();
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
LAB_00147164:
  fprintf((FILE *)(PTR___sF_00150d60 + 0x130),"libunwind: %s - %s\n","getULEB128",
          "truncated uleb128 expression");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 001471cc  FUN_001471cc =====

ulong FUN_001471cc(byte *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  byte *pbVar6;
  byte bVar7;
  byte bVar8;
  undefined *puVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong *puVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  byte *pbVar18;
  ulong *puVar19;
  undefined1 auVar20 [16];
  ulong local_380 [99];
  byte *local_68;
  
  local_68 = param_1;
  lVar11 = FUN_00147004(&local_68,param_1 + 0x14);
  local_380[0] = param_4;
  pbVar6 = local_68 + lVar11;
  if (local_68 < pbVar6) {
    puVar1 = (ulong *)(param_3 + 0xf0);
    puVar2 = (ulong *)(param_3 + 0xe8);
    puVar3 = (ulong *)(param_3 + 0x108);
    puVar4 = (ulong *)(param_3 + 0xf8);
    puVar19 = local_380;
    puVar5 = (ulong *)(param_3 + 0x100);
    pbVar18 = local_68;
    do {
      puVar9 = PTR___sF_00150d60;
      pbVar13 = pbVar18 + 1;
      local_68 = pbVar13;
      bVar8 = *pbVar18;
      uVar10 = (uint)bVar8;
      if (0x91 < uVar10 - 3) {
code_r0x00147a48:
        fprintf((FILE *)(PTR___sF_00150d60 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
                "DWARF opcode not implemented");
        fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar15 = (uint)bVar8;
      puVar14 = puVar4;
      switch(uVar10) {
      case 3:
      case 0xe:
      case 0xf:
        uVar16 = *(ulong *)(pbVar18 + 1);
        local_68 = pbVar18 + 9;
        goto LAB_001476b4;
      case 4:
      case 5:
      case 7:
        goto code_r0x00147a48;
      case 6:
        puVar14 = (ulong *)*puVar19;
LAB_00147644:
        *puVar19 = *puVar14;
        goto LAB_00147250;
      case 8:
        uVar16 = (ulong)pbVar18[1];
        goto LAB_00147618;
      case 9:
        uVar16 = (ulong)(char)pbVar18[1];
LAB_00147618:
        local_68 = pbVar18 + 2;
        goto LAB_001476b4;
      case 10:
        uVar16 = (ulong)*(ushort *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_001476b4;
      case 0xb:
        uVar16 = (ulong)*(short *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_001476b4;
      case 0xc:
        uVar16 = (ulong)*(uint *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_001476b4;
      case 0xd:
        uVar16 = (ulong)*(int *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_001476b4;
      case 0x10:
        uVar16 = FUN_00147004(&local_68,pbVar6);
        puVar19 = puVar19 + 1;
        *puVar19 = uVar16;
        goto LAB_00147250;
      case 0x11:
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = pbVar13;
        do {
          if (pbVar18 == pbVar6) {
            fprintf((FILE *)(PTR___sF_00150d60 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                    "truncated sleb128 expression");
            fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar8 = *pbVar18;
          pbVar13 = pbVar13 + 1;
          uVar17 = uVar16 & 0x3f;
          uVar16 = uVar16 + 7;
          uVar12 = ((ulong)bVar8 & 0x7f) << uVar17 | uVar12;
          pbVar18 = pbVar18 + 1;
        } while ((char)bVar8 < '\0');
        local_68 = pbVar13;
        uVar17 = -1L << (uVar16 & 0x3f);
        if (0x38 < (int)uVar16 - 7U || bVar8 < 0x40) {
          uVar17 = 0;
        }
        puVar19 = puVar19 + 1;
        *puVar19 = uVar12 | uVar17;
        goto LAB_00147250;
      case 0x12:
        uVar16 = *puVar19;
        goto LAB_0014724c;
      case 0x13:
        puVar19 = puVar19 + -1;
        goto LAB_00147250;
      case 0x14:
        uVar16 = puVar19[-1];
        goto LAB_0014724c;
      case 0x15:
        local_68 = pbVar18 + 2;
        uVar16 = puVar19[-(ulong)pbVar18[1]];
LAB_001476b4:
LAB_0014724c:
        puVar19[1] = uVar16;
        puVar19 = puVar19 + 1;
        goto LAB_00147250;
      case 0x16:
        auVar20 = NEON_ext(*(undefined1 (*) [16])(puVar19 + -1),*(undefined1 (*) [16])(puVar19 + -1)
                           ,8,1);
        *puVar19 = auVar20._8_8_;
        puVar19[-1] = auVar20._0_8_;
        goto LAB_00147250;
      case 0x17:
        uVar16 = *puVar19;
        *puVar19 = SUB168(*(undefined1 (*) [16])(puVar19 + -2),8);
        puVar19[-1] = SUB168(*(undefined1 (*) [16])(puVar19 + -2),0);
        puVar19[-2] = uVar16;
        goto LAB_00147250;
      case 0x18:
        puVar14 = (ulong *)*puVar19;
        puVar19 = puVar19 + -1;
        *puVar19 = *puVar14;
        goto LAB_00147250;
      case 0x19:
        uVar16 = *puVar19;
        if ((long)uVar16 < 0) goto LAB_001477ec;
        goto LAB_00147250;
      case 0x1a:
        uVar16 = puVar19[-1] & *puVar19;
        break;
      case 0x1b:
        uVar16 = 0;
        if (*puVar19 != 0) {
          uVar16 = (long)puVar19[-1] / (long)*puVar19;
        }
        break;
      case 0x1c:
        uVar16 = puVar19[-1] - *puVar19;
        break;
      case 0x1d:
        uVar16 = *puVar19;
        lVar11 = 0;
        if (uVar16 != 0) {
          lVar11 = (long)puVar19[-1] / (long)uVar16;
        }
        uVar16 = puVar19[-1] - lVar11 * uVar16;
        break;
      case 0x1e:
        uVar16 = puVar19[-1] * *puVar19;
        break;
      case 0x1f:
        uVar16 = *puVar19;
LAB_001477ec:
        *puVar19 = -uVar16;
        goto LAB_00147250;
      case 0x20:
        *puVar19 = ~*puVar19;
        goto LAB_00147250;
      case 0x21:
        uVar16 = puVar19[-1] | *puVar19;
        break;
      case 0x22:
        uVar16 = puVar19[-1] + *puVar19;
        break;
      case 0x23:
        lVar11 = FUN_00147004(&local_68,pbVar6);
        *puVar19 = *puVar19 + lVar11;
        goto LAB_00147250;
      case 0x24:
        uVar16 = puVar19[-1] << (*puVar19 & 0x3f);
        break;
      case 0x25:
        uVar16 = puVar19[-1] >> (*puVar19 & 0x3f);
        break;
      case 0x26:
        uVar16 = (long)puVar19[-1] >> (*puVar19 & 0x3f);
        break;
      case 0x27:
        uVar16 = puVar19[-1] ^ *puVar19;
        break;
      case 0x28:
        puVar14 = puVar19 + -1;
        uVar16 = *puVar19;
        local_68 = pbVar18 + 3;
        puVar19 = puVar14;
        if (uVar16 != 0) {
          local_68 = pbVar18 + 3 + *(short *)(pbVar18 + 1);
        }
        goto LAB_00147250;
      case 0x29:
        uVar16 = (ulong)(puVar19[-1] == *puVar19);
        break;
      case 0x2a:
        uVar16 = (ulong)(*puVar19 <= puVar19[-1]);
        break;
      case 0x2b:
        uVar16 = (ulong)(*puVar19 < puVar19[-1]);
        break;
      case 0x2c:
        uVar16 = (ulong)(puVar19[-1] <= *puVar19);
        break;
      case 0x2d:
        uVar16 = (ulong)(puVar19[-1] < *puVar19);
        break;
      case 0x2e:
        uVar16 = (ulong)(puVar19[-1] != *puVar19);
        break;
      case 0x2f:
        local_68 = pbVar18 + (long)*(short *)(pbVar18 + 1) + 3;
        goto LAB_00147250;
      default:
        uVar16 = (ulong)(uVar15 - 0x30);
        goto LAB_0014724c;
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5b:
      case 0x5c:
      case 0x5d:
      case 0x5e:
      case 0x5f:
      case 0x60:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x6f:
        if (((uVar15 != 0x6f) && (puVar14 = puVar1, bVar8 != 0x6e)) &&
           (puVar14 = puVar2, bVar8 != 0x6d)) {
          puVar14 = (ulong *)(param_3 + (ulong)(uVar15 - 0x50) * 8);
        }
        goto LAB_00147248;
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7a:
      case 0x7b:
      case 0x7c:
      case 0x7d:
      case 0x7e:
      case 0x7f:
      case 0x80:
      case 0x81:
      case 0x82:
      case 0x83:
      case 0x84:
      case 0x85:
      case 0x86:
      case 0x87:
      case 0x88:
      case 0x89:
      case 0x8a:
      case 0x8b:
      case 0x8c:
      case 0x8d:
      case 0x8e:
      case 0x8f:
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = pbVar13;
        do {
          if (pbVar18 == pbVar6) {
            fprintf((FILE *)(PTR___sF_00150d60 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                    "truncated sleb128 expression");
            fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar7 = *pbVar18;
          pbVar13 = pbVar13 + 1;
          uVar17 = uVar16 & 0x3f;
          uVar16 = uVar16 + 7;
          uVar12 = ((ulong)bVar7 & 0x7f) << uVar17 | uVar12;
          pbVar18 = pbVar18 + 1;
        } while ((char)bVar7 < '\0');
        local_68 = pbVar13;
        uVar17 = -1L << (uVar16 & 0x3f);
        if (0x38 < (int)uVar16 - 7U || bVar7 < 0x40) {
          uVar17 = 0;
        }
        if (bVar8 < 0x8e) {
          if (((bVar8 != 0x6e) && (puVar14 = puVar5, bVar8 != 0x6f)) &&
             (puVar14 = puVar2, bVar8 != 0x8d)) goto LAB_00147388;
        }
        else if (bVar8 < 0x90) {
          puVar14 = puVar1;
          if ((bVar8 != 0x8e) && (puVar14 = puVar4, uVar15 != 0x8f)) {
LAB_00147388:
            if (0x1c < uVar10 - 0x70) {
              fprintf((FILE *)(PTR___sF_00150d60 + 0x130),"libunwind: %s - %s\n","getRegister",
                      "unsupported arm64 register");
              fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            puVar14 = (ulong *)(param_3 + (ulong)(uVar10 - 0x70) * 8);
          }
        }
        else {
          puVar14 = puVar5;
          if ((bVar8 != 0x90) && (puVar14 = puVar3, bVar8 != 0x92)) goto LAB_00147388;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_0014724c;
      case 0x90:
        uVar10 = FUN_00147004(&local_68,pbVar6);
        puVar9 = PTR___sF_00150d60;
        if ((int)uVar10 < 0x1e) {
          if (((uVar10 != 0xfffffffe) && (puVar14 = puVar5, uVar10 != 0xffffffff)) &&
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_001478ec;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_001478ec:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_00150d60 + 0x130),"libunwind: %s - %s\n","getRegister",
                      "unsupported arm64 register");
              fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            puVar14 = (ulong *)(param_3 + (ulong)uVar10 * 8);
          }
        }
        else {
          puVar14 = puVar5;
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_001478ec;
        }
LAB_00147248:
        uVar16 = *puVar14;
        goto LAB_0014724c;
      case 0x91:
        fprintf((FILE *)(PTR___sF_00150d60 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
                "DW_OP_fbreg not implemented");
        fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x92:
        uVar10 = FUN_00147004(&local_68,pbVar6);
        puVar9 = PTR___sF_00150d60;
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = local_68;
        pbVar13 = local_68;
        do {
          if (pbVar13 == pbVar6) {
            fprintf((FILE *)(PTR___sF_00150d60 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                    "truncated sleb128 expression");
            fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar8 = *pbVar13;
          pbVar18 = pbVar18 + 1;
          uVar17 = uVar16 & 0x3f;
          uVar16 = uVar16 + 7;
          uVar12 = ((ulong)bVar8 & 0x7f) << uVar17 | uVar12;
          pbVar13 = pbVar13 + 1;
        } while ((char)bVar8 < '\0');
        local_68 = pbVar18;
        uVar17 = -1L << (uVar16 & 0x3f);
        if (0x38 < (int)uVar16 - 7U || bVar8 < 0x40) {
          uVar17 = 0;
        }
        if ((int)uVar10 < 0x1e) {
          if (((uVar10 != 0xfffffffe) && (puVar14 = puVar5, uVar10 != 0xffffffff)) &&
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_00147914;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_00147914:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_00150d60 + 0x130),"libunwind: %s - %s\n","getRegister",
                      "unsupported arm64 register");
              fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            puVar14 = (ulong *)(param_3 + (ulong)uVar10 * 8);
          }
        }
        else {
          puVar14 = puVar5;
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_00147914;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_0014724c;
      case 0x93:
        fprintf((FILE *)(PTR___sF_00150d60 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
                "DW_OP_piece not implemented");
        fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x94:
        local_68 = pbVar18 + 2;
        puVar14 = (ulong *)*puVar19;
        bVar8 = pbVar18[1];
        if (bVar8 < 4) {
          if (bVar8 == 1) {
            *puVar19 = (ulong)(byte)*puVar14;
          }
          else {
            if (bVar8 != 2) {
LAB_00147aec:
              fprintf((FILE *)(PTR___sF_00150d60 + 0x130),"libunwind: %s - %s\n",
                      "evaluateExpression","DW_OP_deref_size with bad size");
              fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *puVar19 = (ulong)(ushort)*puVar14;
          }
        }
        else {
          if (bVar8 != 4) {
            if (bVar8 != 8) goto LAB_00147aec;
            goto LAB_00147644;
          }
          *puVar19 = (ulong)(uint)*puVar14;
        }
        goto LAB_00147250;
      }
      puVar19[-1] = uVar16;
      puVar19 = puVar19 + -1;
LAB_00147250:
      pbVar18 = local_68;
    } while (local_68 < pbVar6);
    param_4 = *puVar19;
  }
  return param_4;
}


// ===== 00147b88  FUN_00147b88 =====

undefined8 FUN_00147b88(long param_1,ulong param_2,long *param_3,uint param_4)

{
  bool bVar1;
  byte bVar2;
  undefined *__src;
  ulong uVar3;
  undefined *__dest;
  long *plVar4;
  size_t __n;
  long lVar5;
  undefined1 auStack_6e8 [32];
  undefined8 local_6c8;
  long local_6b0;
  undefined4 uStack_6a8;
  long local_698;
  long local_690;
  undefined8 uStack_688;
  undefined1 auStack_680 [16];
  uint local_670;
  
  if (((param_4 == 0) ||
      (uVar3 = FUN_001480b0(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],
                            param_3[2] + (ulong)param_4,&local_6b0,auStack_6e8), (uVar3 & 1) == 0))
     && ((param_3[4] == 0 ||
         (uVar3 = FUN_00148278(*(undefined8 *)(param_1 + 8),param_2,param_3[4],(int)param_3[5],
                               &local_6b0,auStack_6e8), (uVar3 & 1) == 0)))) {
    lVar5 = *param_3;
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00155864);
    if (PTR_DAT_00155518 < PTR_DAT_00155520) {
      plVar4 = (long *)PTR_DAT_00155518;
      if (lVar5 == -1) {
        do {
          if (((ulong)plVar4[1] <= param_2) && (param_2 < (ulong)plVar4[2])) goto LAB_00147c90;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_00155520);
      }
      else {
        do {
          if (((*plVar4 == lVar5) && ((ulong)plVar4[1] <= param_2)) && (param_2 < (ulong)plVar4[2]))
          goto LAB_00147c90;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_00155520);
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00155864);
    goto LAB_00147cd8;
  }
LAB_00147cf8:
  bVar2 = 1;
LAB_00147cfc:
  lVar5 = *param_3;
  memset(auStack_680,0,0x618);
  uVar3 = FUN_00145cec(*(undefined8 *)(param_1 + 8),&local_6b0,auStack_6e8,param_2,4,auStack_680);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x230) = uStack_688;
  *(long *)(param_1 + 0x228) = local_690;
  *(undefined8 *)(param_1 + 0x238) = local_6c8;
  bVar1 = (bool)(bVar2 ^ 1);
  *(ulong *)(param_1 + 0x240) = (ulong)local_670;
  *(undefined4 *)(param_1 + 0x250) = 0x3000000;
  *(long *)(param_1 + 0x220) = local_698;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined4 *)(param_1 + 0x254) = uStack_6a8;
  if (param_4 != 0) {
    bVar1 = true;
  }
  *(long *)(param_1 + 600) = local_6b0;
  *(long *)(param_1 + 0x260) = lVar5;
  if (!bVar1) {
    if (param_3[4] == 0) {
      lVar5 = *param_3;
      pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_00155864);
      __src = PTR_DAT_00155518;
      if (DAT_00155528 <= PTR_DAT_00155520) {
        __n = (long)DAT_00155528 - (long)PTR_DAT_00155518;
        __dest = (undefined *)malloc(__n * 4);
        memcpy(__dest,__src,__n);
        if ((undefined8 *)__src != &DAT_001558a0) {
          free(__src);
        }
        DAT_00155528 = __dest + ((long)__n >> 3) * 0x20;
        PTR_DAT_00155520 = __dest + __n;
        PTR_DAT_00155518 = __dest;
      }
      *(long *)PTR_DAT_00155520 = lVar5;
      *(long *)((long)PTR_DAT_00155520 + 8) = local_698;
      *(long *)((long)PTR_DAT_00155520 + 0x18) = local_6b0;
      *(long *)((long)PTR_DAT_00155520 + 0x10) = local_690;
      PTR_DAT_00155520 = (undefined *)((long)PTR_DAT_00155520 + 0x20);
      pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00155864);
      return 1;
    }
    return 1;
  }
  return 1;
LAB_00147c90:
  lVar5 = plVar4[3];
  pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00155864);
  if ((lVar5 != 0) &&
     (uVar3 = FUN_001480b0(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],lVar5,
                           &local_6b0,auStack_6e8), (uVar3 & 1) != 0)) {
    bVar2 = 0;
    goto LAB_00147cfc;
  }
LAB_00147cd8:
  uVar3 = FUN_001480b0(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],0,&local_6b0,
                       auStack_6e8);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  goto LAB_00147cf8;
}


// ===== 00147e5c  FUN_00147e5c =====

undefined8 FUN_00147e5c(ulong *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 local_70 [4];
  
  uVar12 = (ulong)(ushort)param_1[3];
  if (uVar12 != 0) {
    uVar6 = param_3[2];
    uVar13 = *param_1;
    if (uVar13 <= uVar6) {
      uVar5 = uVar12;
      piVar10 = (int *)param_1[2];
      do {
        if (((*piVar10 == 1) && (uVar1 = *(long *)(piVar10 + 4) + uVar13, uVar1 <= uVar6)) &&
           (uVar11 = *(ulong *)(piVar10 + 10), uVar6 < uVar11 + uVar1)) {
          puVar7 = (ulong *)param_3[1];
          uVar6 = uVar12 + 0xffffffff;
          *puVar7 = uVar1;
          puVar7[1] = uVar11;
          do {
            if (*(int *)(param_1[2] + (uVar6 & 0xffffffff) * 0x38) == 0x6474e550) {
              lVar8 = param_1[2] + (uVar6 & 0xffffffff) * 0x38;
              uVar2 = *param_3;
              lVar3 = param_3[1];
              lVar9 = *(long *)(lVar8 + 0x28);
              lVar8 = *(long *)(lVar8 + 0x10) + uVar13;
              *(long *)(lVar3 + 0x20) = lVar8;
              *(long *)(lVar3 + 0x28) = lVar9;
              uVar5 = FUN_00147f90(uVar2,lVar8,lVar9 + lVar8,local_70);
              if ((uVar5 & 1) != 0) {
                lVar8 = param_3[1];
                *(undefined8 *)(lVar8 + 0x10) = local_70[0];
                *(undefined8 *)(lVar8 + 0x18) = 0xffffffffffffffff;
                return 1;
              }
            }
            uVar4 = (int)uVar12 - 1;
            uVar12 = (ulong)uVar4;
            uVar6 = uVar6 - 1;
          } while ((uVar4 & 0xffff) != 0);
          return 0;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 0xe;
      } while (uVar5 != 0);
    }
  }
  return 0;
}


// ===== 00147f90  FUN_00147f90 =====

undefined8 FUN_00147f90(undefined8 param_1,byte *param_2,byte *param_3,undefined8 *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  byte *local_28;
  
  puVar3 = PTR___sF_00150d60;
  if ((ulong)((long)param_3 - (long)param_2) < 4) {
    if (param_3 == param_2) {
      return 0;
    }
    fprintf((FILE *)(PTR___sF_00150d60 + 0x130),
            "libunwind: unsupported .eh_frame_hdr at %lx: need at least 4 bytes of data but only got %zd\n"
            ,param_2);
  }
  else {
    if (*param_2 == 1) {
      local_28 = param_2 + 4;
      bVar1 = param_2[2];
      bVar2 = param_2[1];
      *(byte *)(param_4 + 3) = param_2[3];
      uVar4 = FUN_00146c78(param_1,&local_28,param_3,bVar2,param_2);
      *param_4 = uVar4;
      if (bVar1 == 0xff) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_00146c78(param_1,&local_28,param_3,bVar1,param_2);
      }
      param_4[1] = uVar4;
      param_4[2] = local_28;
      return 1;
    }
    fprintf((FILE *)(PTR___sF_00150d60 + 0x130),
            "libunwind: unsupported .eh_frame_hdr version: %u at %lx\n",(ulong)(uint)*param_2,
            param_2);
  }
  fflush((FILE *)(puVar3 + 0x130));
  return 0;
}


// ===== 001480b0  FUN_001480b0 =====

undefined8
FUN_001480b0(undefined8 param_1,ulong param_2,uint *param_3,long param_4,uint *param_5,
            undefined8 *param_6,long param_7)

{
  uint *puVar1;
  char cVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint *puVar7;
  ulong uVar8;
  uint *puVar9;
  uint *local_68;
  
  puVar9 = (uint *)(param_4 + (long)param_3);
  puVar1 = param_3;
  if (param_5 != (uint *)0x0) {
    puVar1 = param_5;
  }
  if (param_4 == -1) {
    puVar9 = (uint *)0xffffffffffffffff;
  }
  while( true ) {
    puVar3 = puVar1;
    if (puVar9 <= puVar3) {
      return 0;
    }
    local_68 = puVar3 + 1;
    uVar8 = (ulong)*puVar3;
    if (*puVar3 == 0xffffffff) {
      uVar8 = *(ulong *)(puVar3 + 1);
      local_68 = puVar3 + 3;
    }
    if (uVar8 == 0) break;
    puVar1 = (uint *)((long)local_68 + uVar8);
    if ((((*local_68 != 0) &&
         (puVar7 = (uint *)((long)local_68 - (ulong)*local_68), param_3 <= puVar7)) &&
        (puVar7 < puVar9)) && (lVar4 = FUN_00144e20(param_1,puVar7,param_7), lVar4 == 0)) {
      local_68 = local_68 + 1;
      uVar8 = FUN_00146c78(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x18),0);
      lVar4 = FUN_00146c78(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x18) & 0xf,0);
      if ((uVar8 < param_2) && (param_2 <= lVar4 + uVar8)) {
        cVar2 = *(char *)(param_7 + 0x31);
        param_6[5] = 0;
        puVar9 = local_68;
        if (cVar2 != '\0') {
          lVar5 = FUN_00147004(&local_68,puVar1);
          puVar7 = local_68;
          puVar9 = (uint *)((long)local_68 + lVar5);
          if ((*(byte *)(param_7 + 0x19) != 0xff) &&
             (lVar5 = FUN_00146c78(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x19) & 0xf,0),
             lVar5 != 0)) {
            local_68 = puVar7;
            uVar6 = FUN_00146c78(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x19),0);
            param_6[5] = uVar6;
          }
        }
        param_6[2] = puVar9;
        param_6[3] = uVar8;
        *param_6 = puVar3;
        param_6[1] = (long)puVar1 - (long)puVar3;
        param_6[4] = lVar4 + uVar8;
        return 1;
      }
    }
  }
  return 0;
}


// ===== 00148278  FUN_00148278 =====

undefined8
FUN_00148278(undefined8 param_1,ulong param_2,long param_3,ulong param_4,long param_5,
            undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long local_88;
  undefined1 auStack_80 [8];
  ulong local_78;
  long local_70;
  undefined1 local_68;
  
  lVar4 = param_3 + (param_4 & 0xffffffff);
  uVar1 = FUN_00147f90(param_1,param_3,lVar4,auStack_80);
  if (((uVar1 & 1) != 0) && (local_78 != 0)) {
    lVar2 = FUN_001483e0(local_68);
    lVar7 = 0;
    do {
      if (local_78 < 2) {
        lVar8 = lVar7 * lVar2;
        break;
      }
      uVar6 = local_78 >> 1;
      lVar8 = (uVar6 + lVar7) * lVar2;
      local_88 = local_70 + lVar8;
      uVar1 = FUN_00146c78(param_1,&local_88,lVar4,local_68,param_3);
      uVar5 = local_78 - uVar6;
      local_78 = uVar6;
      if (uVar1 < param_2) {
        local_78 = uVar5;
        lVar7 = uVar6 + lVar7;
      }
    } while (uVar1 != param_2);
    local_88 = local_70 + lVar8;
    FUN_00146c78(param_1,&local_88,lVar4,local_68,param_3);
    uVar3 = FUN_00146c78(param_1,&local_88,lVar4,local_68,param_3);
    lVar4 = FUN_00144c90(param_1,uVar3,param_5,param_6,0);
    if (((lVar4 == 0) && (*(ulong *)(param_5 + 0x18) <= param_2)) &&
       (param_2 < *(ulong *)(param_5 + 0x20))) {
      return 1;
    }
  }
  return 0;
}


// ===== 001483e0  FUN_001483e0 =====

undefined8 FUN_001483e0(uint param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_00150d60;
  param_1 = param_1 & 0xf;
  if (param_1 < 9) {
    if (param_1 < 3) {
      if (param_1 == 2) {
        return 4;
      }
      if (param_1 == 1) {
LAB_001484a8:
        fprintf((FILE *)(PTR___sF_00150d60 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
                "Can\'t binary search on variable length encoded data.");
        fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    else {
      if (param_1 == 3) {
        return 8;
      }
      if (param_1 == 4) {
        return 0x10;
      }
    }
  }
  else if (param_1 < 0xb) {
    if (param_1 == 10) {
      return 4;
    }
    if (param_1 == 9) goto LAB_001484a8;
  }
  else {
    if (param_1 == 0xc) {
      return 0x10;
    }
    if (param_1 == 0xb) {
      return 8;
    }
  }
  fprintf((FILE *)(PTR___sF_00150d60 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
          "Unknown DWARF encoding for search table.");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 001484dc  FUN_001484dc =====

char * FUN_001484dc(int param_1)

{
  if (param_1 + 2U < 0x62) {
    return &DAT_00115ad4 + *(int *)(&DAT_00115ad4 + (ulong)(param_1 + 2U) * 4);
  }
  return "unknown register";
}


// ===== 0014850c  FUN_0014850c =====

undefined1  [16] FUN_0014850c(undefined1 (*param_1) [16])

{
  return *param_1;
}


// ===== 0014859c  FUN_0014859c =====

undefined8
FUN_0014859c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,long param_10,undefined8 param_11,undefined8 param_12,
            undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
            undefined8 param_17)

{
  undefined8 in_x9;
  undefined8 in_x10;
  undefined8 in_x11;
  undefined8 in_x12;
  undefined8 in_x13;
  undefined8 in_x14;
  undefined8 in_x15;
  undefined8 in_x16;
  undefined8 in_x17;
  undefined8 in_x18;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  undefined8 in_d16;
  undefined8 in_d17;
  undefined8 in_d18;
  undefined8 in_d19;
  undefined8 in_d20;
  undefined8 in_d21;
  undefined8 in_d22;
  undefined8 in_d23;
  undefined8 in_d24;
  undefined8 in_d25;
  undefined8 in_d26;
  undefined8 in_d27;
  undefined8 in_d28;
  undefined8 in_d29;
  undefined8 in_d30;
  undefined8 in_d31;
  
  *(long *)param_10 = param_10;
  *(undefined8 *)(param_10 + 8) = param_11;
  *(undefined8 *)(param_10 + 0x10) = param_12;
  *(undefined8 *)(param_10 + 0x18) = param_13;
  *(undefined8 *)(param_10 + 0x20) = param_14;
  *(undefined8 *)(param_10 + 0x28) = param_15;
  *(undefined8 *)(param_10 + 0x30) = param_16;
  *(undefined8 *)(param_10 + 0x38) = param_17;
  *(undefined8 *)(param_10 + 0x40) = param_1;
  *(undefined8 *)(param_10 + 0x48) = in_x9;
  *(undefined8 *)(param_10 + 0x50) = in_x10;
  *(undefined8 *)(param_10 + 0x58) = in_x11;
  *(undefined8 *)(param_10 + 0x60) = in_x12;
  *(undefined8 *)(param_10 + 0x68) = in_x13;
  *(undefined8 *)(param_10 + 0x70) = in_x14;
  *(undefined8 *)(param_10 + 0x78) = in_x15;
  *(undefined8 *)(param_10 + 0x80) = in_x16;
  *(undefined8 *)(param_10 + 0x88) = in_x17;
  *(undefined8 *)(param_10 + 0x90) = in_x18;
  *(undefined8 *)(param_10 + 0x98) = unaff_x19;
  *(undefined8 *)(param_10 + 0xa0) = unaff_x20;
  *(undefined8 *)(param_10 + 0xa8) = unaff_x21;
  *(undefined8 *)(param_10 + 0xb0) = unaff_x22;
  *(undefined8 *)(param_10 + 0xb8) = unaff_x23;
  *(undefined8 *)(param_10 + 0xc0) = unaff_x24;
  *(undefined8 *)(param_10 + 200) = unaff_x25;
  *(undefined8 *)(param_10 + 0xd0) = unaff_x26;
  *(undefined8 *)(param_10 + 0xd8) = unaff_x27;
  *(undefined8 *)(param_10 + 0xe0) = unaff_x28;
  *(undefined8 *)(param_10 + 0xe8) = unaff_x29;
  *(undefined8 *)(param_10 + 0xf0) = unaff_x30;
  *(BADSPACEBASE **)(param_10 + 0xf8) = register0x00000008;
  *(undefined8 *)(param_10 + 0x100) = unaff_x30;
  *(undefined8 *)(param_10 + 0x110) = param_2;
  *(undefined8 *)(param_10 + 0x118) = param_3;
  *(undefined8 *)(param_10 + 0x120) = param_4;
  *(undefined8 *)(param_10 + 0x128) = param_5;
  *(undefined8 *)(param_10 + 0x130) = param_6;
  *(undefined8 *)(param_10 + 0x138) = param_7;
  *(undefined8 *)(param_10 + 0x140) = param_8;
  *(undefined8 *)(param_10 + 0x148) = param_9;
  *(undefined8 *)(param_10 + 0x150) = unaff_d8;
  *(undefined8 *)(param_10 + 0x158) = unaff_d9;
  *(undefined8 *)(param_10 + 0x160) = unaff_d10;
  *(undefined8 *)(param_10 + 0x168) = unaff_d11;
  *(undefined8 *)(param_10 + 0x170) = unaff_d12;
  *(undefined8 *)(param_10 + 0x178) = unaff_d13;
  *(undefined8 *)(param_10 + 0x180) = unaff_d14;
  *(undefined8 *)(param_10 + 0x188) = unaff_d15;
  *(undefined8 *)(param_10 + 400) = in_d16;
  *(undefined8 *)(param_10 + 0x198) = in_d17;
  *(undefined8 *)(param_10 + 0x1a0) = in_d18;
  *(undefined8 *)(param_10 + 0x1a8) = in_d19;
  *(undefined8 *)(param_10 + 0x1b0) = in_d20;
  *(undefined8 *)(param_10 + 0x1b8) = in_d21;
  *(undefined8 *)(param_10 + 0x1c0) = in_d22;
  *(undefined8 *)(param_10 + 0x1c8) = in_d23;
  *(undefined8 *)(param_10 + 0x1d0) = in_d24;
  *(undefined8 *)(param_10 + 0x1d8) = in_d25;
  *(undefined8 *)(param_10 + 0x1e0) = in_d26;
  *(undefined8 *)(param_10 + 0x1e8) = in_d27;
  *(undefined8 *)(param_10 + 0x1f0) = in_d28;
  *(undefined8 *)(param_10 + 0x1f8) = in_d29;
  *(undefined8 *)(param_10 + 0x200) = in_d30;
  *(undefined8 *)(param_10 + 0x208) = in_d31;
  return 0;
}


// ===== 00148640  FUN_00148640 =====

void FUN_00148640(void)

{
  (*(code *)PTR_00150e60)();
  return;
}


// ===== 00148660  <EXTERNAL>::__cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00150e68)();
  return;
}


// ===== 00148670  <EXTERNAL>::__cxa_atexit =====

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_00150e70)();
  return;
}


// ===== 00148680  <EXTERNAL>::__stack_chk_fail =====

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00150e78)();
  return;
}


// ===== 00148690  DGifExtensionToGCB =====

void DGifExtensionToGCB(void)

{
  (*(code *)PTR_DGifExtensionToGCB_00150e80)();
  return;
}


// ===== 001486a0  <EXTERNAL>::pthread_rwlock_wrlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_wrlock_00150e88)((int)__rwlock);
  return iVar1;
}


// ===== 001486b0  <EXTERNAL>::strerror =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00150e90)(__errnum);
  return pcVar1;
}


// ===== 001486c0  <EXTERNAL>::__android_log_print =====

void __android_log_print(void)

{
  (*(code *)PTR___android_log_print_00150e98)();
  return;
}


// ===== 001486d0  DGifGetImageDesc =====

void DGifGetImageDesc(void)

{
  (*(code *)PTR_DGifGetImageDesc_00150ea0)();
  return;
}


// ===== 001486e0  <EXTERNAL>::pthread_rwlock_unlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_unlock_00150ea8)((int)__rwlock);
  return iVar1;
}


// ===== 001486f0  <EXTERNAL>::pthread_rwlock_rdlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_rdlock_00150eb0)((int)__rwlock);
  return iVar1;
}


// ===== 00148700  DGifGetCode =====

void DGifGetCode(void)

{
  (*(code *)PTR_DGifGetCode_00150eb8)();
  return;
}


// ===== 00148710  DGifGetCodeNext =====

void DGifGetCodeNext(void)

{
  (*(code *)PTR_DGifGetCodeNext_00150ec0)();
  return;
}


// ===== 00148720  DGifGetLine =====

void DGifGetLine(void)

{
  (*(code *)PTR_DGifGetLine_00150ec8)();
  return;
}


// ===== 00148730  DGifGetExtension =====

void DGifGetExtension(void)

{
  (*(code *)PTR_DGifGetExtension_00150ed0)();
  return;
}


// ===== 00148740  GifAddExtensionBlock =====

void GifAddExtensionBlock(void)

{
  (*(code *)PTR_GifAddExtensionBlock_00150ed8)();
  return;
}


// ===== 00148750  DGifGetExtensionNext =====

void DGifGetExtensionNext(void)

{
  (*(code *)PTR_DGifGetExtensionNext_00150ee0)();
  return;
}


// ===== 00148760  <EXTERNAL>::strncmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00150ee8)((int)__s1);
  return iVar1;
}


// ===== 00148770  DGifGetRecordType =====

void DGifGetRecordType(void)

{
  (*(code *)PTR_DGifGetRecordType_00150ef0)();
  return;
}


// ===== 00148780  operator.new =====

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00150ef8)();
  return pvVar1;
}


// ===== 00148790  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00150f00)();
  return;
}


// ===== 001487a0  DGifOpen =====

void DGifOpen(void)

{
  (*(code *)PTR_DGifOpen_00150f08)();
  return;
}


// ===== 001487b0  <EXTERNAL>::memset =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00150f10)(__s,__c);
  return pvVar1;
}


// ===== 001487c0  DGifCloseFile =====

void DGifCloseFile(void)

{
  (*(code *)PTR_DGifCloseFile_00150f18)();
  return;
}


// ===== 001487d0  <EXTERNAL>::memcpy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00150f20)();
  return pvVar1;
}


// ===== 001487e0  <EXTERNAL>::dup =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dup(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_dup_00150f28)(__fd);
  return iVar1;
}


// ===== 001487f0  <EXTERNAL>::fdopen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fdopen(int __fd,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fdopen_00150f30)(__fd);
  return pFVar1;
}


// ===== 00148800  <EXTERNAL>::fseek =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_00150f38)((int)__stream,__off,__whence);
  return iVar1;
}


// ===== 00148810  <EXTERNAL>::__errno =====

void __errno(void)

{
  (*(code *)PTR___errno_00150f40)();
  return;
}


// ===== 00148820  <EXTERNAL>::ftell =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long ftell(FILE *__stream)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_ftell_00150f48)();
  return lVar1;
}


// ===== 00148830  <EXTERNAL>::AndroidBitmap_getInfo =====

void AndroidBitmap_getInfo(void)

{
  (*(code *)PTR_AndroidBitmap_getInfo_00150f50)();
  return;
}


// ===== 00148840  <EXTERNAL>::AndroidBitmap_lockPixels =====

void AndroidBitmap_lockPixels(void)

{
  (*(code *)PTR_AndroidBitmap_lockPixels_00150f58)();
  return;
}


// ===== 00148850  <EXTERNAL>::AndroidBitmap_unlockPixels =====

void AndroidBitmap_unlockPixels(void)

{
  (*(code *)PTR_AndroidBitmap_unlockPixels_00150f60)();
  return;
}


// ===== 00148860  GifMakeMapObject =====

void GifMakeMapObject(void)

{
  (*(code *)PTR_GifMakeMapObject_00150f68)();
  return;
}


// ===== 00148870  <EXTERNAL>::pthread_rwlock_destroy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_destroy(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_destroy_00150f70)((int)__rwlock);
  return iVar1;
}


// ===== 00148880  <EXTERNAL>::fclose =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00150f78)((int)__stream);
  return iVar1;
}


// ===== 00148890  <EXTERNAL>::fread =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_00150f80)();
  return sVar1;
}


// ===== 001488a0  <EXTERNAL>::memmove =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00150f88)();
  return pvVar1;
}


// ===== 001488b0  <EXTERNAL>::vsnprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsnprintf_00150f90)((int)__s);
  return iVar1;
}


// ===== 001488c0  DGifOpenFileHandle =====

void DGifOpenFileHandle(void)

{
  (*(code *)PTR_DGifOpenFileHandle_00150f98)();
  return;
}


// ===== 001488d0  DGifGetScreenDesc =====

void DGifGetScreenDesc(void)

{
  (*(code *)PTR_DGifGetScreenDesc_00150fa0)();
  return;
}


// ===== 001488e0  <EXTERNAL>::__open_2 =====

void __open_2(void)

{
  (*(code *)PTR___open_2_00150fa8)();
  return;
}


// ===== 001488f0  <EXTERNAL>::calloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00150fb0)();
  return pvVar1;
}


// ===== 00148900  <EXTERNAL>::close =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00150fb8)(__fd);
  return iVar1;
}


// ===== 00148910  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00150fc0)();
  return;
}


// ===== 00148920  GifFreeMapObject =====

void GifFreeMapObject(void)

{
  (*(code *)PTR_GifFreeMapObject_00150fc8)();
  return;
}


// ===== 00148930  DGifGetImageHeader =====

void DGifGetImageHeader(void)

{
  (*(code *)PTR_DGifGetImageHeader_00150fd0)();
  return;
}


// ===== 00148940  openbsd_reallocarray =====

void openbsd_reallocarray(void)

{
  (*(code *)PTR_openbsd_reallocarray_00150fd8)();
  return;
}


// ===== 00148950  <EXTERNAL>::malloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00150fe0)();
  return pvVar1;
}


// ===== 00148960  GifFreeSavedImages =====

void GifFreeSavedImages(void)

{
  (*(code *)PTR_GifFreeSavedImages_00150fe8)();
  return;
}


// ===== 00148970  GifFreeExtensions =====

void GifFreeExtensions(void)

{
  (*(code *)PTR_GifFreeExtensions_00150ff0)();
  return;
}


// ===== 00148980  FreeLastSavedImage =====

void FreeLastSavedImage(void)

{
  (*(code *)PTR_FreeLastSavedImage_00150ff8)();
  return;
}


// ===== 00148990  <EXTERNAL>::realloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_00151000)();
  return pvVar1;
}


// ===== 001489a0  <EXTERNAL>::dl_iterate_phdr =====

void dl_iterate_phdr(void)

{
  (*(code *)PTR_dl_iterate_phdr_00151008)();
  return;
}


// ===== 001489b0  <EXTERNAL>::posix_memalign =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int posix_memalign(void **__memptr,size_t __alignment,size_t __size)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_posix_memalign_00151010)((int)__memptr);
  return iVar1;
}


// ===== 001489c0  <EXTERNAL>::syslog =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void syslog(int __pri,char *__fmt,...)

{
  (*(code *)PTR_syslog_00151018)(__pri);
  return;
}


// ===== 001489d0  <EXTERNAL>::snprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00151020)((int)__s);
  return iVar1;
}


// ===== 001489e0  <EXTERNAL>::openlog =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void openlog(char *__ident,int __option,int __facility)

{
  (*(code *)PTR_openlog_00151028)(__ident,__option,__facility);
  return;
}


// ===== 001489f0  <EXTERNAL>::memchr =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memchr(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memchr_00151030)(__s,__c);
  return pvVar1;
}


// ===== 00148a00  <EXTERNAL>::fwrite =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00151038)();
  return sVar1;
}


// ===== 00148a10  <EXTERNAL>::pthread_getspecific =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * pthread_getspecific(pthread_key_t __key)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_pthread_getspecific_00151040)(__key);
  return pvVar1;
}


// ===== 00148a20  <EXTERNAL>::__system_property_get =====

void __system_property_get(void)

{
  (*(code *)PTR___system_property_get_00151048)();
  return;
}


// ===== 00148a30  <EXTERNAL>::vfprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vfprintf_00151050)((int)__s);
  return iVar1;
}


// ===== 00148a40  <EXTERNAL>::fprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00151058)((int)__stream);
  return iVar1;
}


// ===== 00148a50  <EXTERNAL>::abort =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00151060)();
  return;
}


// ===== 00148a60  <EXTERNAL>::closelog =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void closelog(void)

{
  (*(code *)PTR_closelog_00151068)();
  return;
}


// ===== 00148a70  <EXTERNAL>::strlen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00151070)();
  return sVar1;
}


// ===== 00148a80  <EXTERNAL>::getauxval =====

void getauxval(void)

{
  (*(code *)PTR_getauxval_00151078)();
  return;
}


// ===== 00148a90  <EXTERNAL>::pthread_cond_broadcast =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_broadcast(pthread_cond_t *__cond)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_broadcast_00151080)((int)__cond);
  return iVar1;
}


// ===== 00148aa0  <EXTERNAL>::strcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00151088)((int)__s1);
  return iVar1;
}


// ===== 00148ab0  <EXTERNAL>::pthread_key_delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_key_delete(pthread_key_t __key)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_key_delete_00151090)(__key);
  return iVar1;
}


// ===== 00148ac0  <EXTERNAL>::pthread_setspecific =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_setspecific(pthread_key_t __key,void *__pointer)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_setspecific_00151098)(__key);
  return iVar1;
}


// ===== 00148ad0  <EXTERNAL>::pthread_cond_wait =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_wait_001510a0)((int)__cond);
  return iVar1;
}


// ===== 00148ae0  <EXTERNAL>::strerror_r =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror_r(int __errnum,char *__buf,size_t __buflen)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_r_001510a8)(__errnum);
  return pcVar1;
}


// ===== 00148af0  <EXTERNAL>::syscall =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_syscall_001510b0)();
  return lVar1;
}


// ===== 00148b00  <EXTERNAL>::pthread_once =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_once(pthread_once_t *__once_control,__init_routine *__init_routine)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_once_001510b8)((int)__once_control);
  return iVar1;
}


// ===== 00148b10  <EXTERNAL>::vasprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vasprintf(char **__ptr,char *__f,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vasprintf_001510c0)((int)__ptr);
  return iVar1;
}


// ===== 00148b20  <EXTERNAL>::pthread_mutex_lock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_001510c8)((int)__mutex);
  return iVar1;
}


// ===== 00148b30  <EXTERNAL>::android_set_abort_message =====

void android_set_abort_message(void)

{
  (*(code *)PTR_android_set_abort_message_001510d0)();
  return;
}


// ===== 00148b40  <EXTERNAL>::pthread_mutex_destroy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_001510d8)((int)__mutex);
  return iVar1;
}


// ===== 00148b50  <EXTERNAL>::pthread_mutex_unlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_001510e0)((int)__mutex);
  return iVar1;
}


// ===== 00148b60  <EXTERNAL>::getpid =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_001510e8)();
  return _Var1;
}


// ===== 00148b70  <EXTERNAL>::memcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_001510f0)((int)__s1);
  return iVar1;
}


// ===== 00148b80  <EXTERNAL>::pthread_key_create =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_key_create(pthread_key_t *__key,__destr_function *__destr_function)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_key_create_001510f8)((int)__key);
  return iVar1;
}


// ===== 00148b90  <EXTERNAL>::__assert2 =====

void __assert2(void)

{
  (*(code *)PTR___assert2_00151100)();
  return;
}


// ===== 00148ba0  <EXTERNAL>::fflush =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00151108)((int)__stream);
  return iVar1;
}


// ===== 00148bb0  <EXTERNAL>::fputc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_00151110)(__c);
  return iVar1;
}


// ===== 00148bc0  std::bad_array_new_length::~bad_array_new_length =====

void __thiscall std::bad_array_new_length::~bad_array_new_length(bad_array_new_length *this)

{
  (*(code *)PTR__bad_array_new_length_00151118)();
  return;
}


// ===== 00148bd0  __cxa_begin_catch =====

void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_00151120)();
  return;
}


// ===== 00148be0  std::terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
  (*(code *)PTR_terminate_00151128)();
  return;
}


// ===== 00148bf0  __cxa_guard_acquire =====

void __cxa_guard_acquire(void)

{
  (*(code *)PTR___cxa_guard_acquire_00151130)();
  return;
}


// ===== 00148c00  __cxa_guard_release =====

void __cxa_guard_release(void)

{
  (*(code *)PTR___cxa_guard_release_00151138)();
  return;
}


// ===== 00148c10  std::runtime_error::~runtime_error =====

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
  (*(code *)PTR__runtime_error_00151140)();
  return;
}


// ===== 00148c20  __cxa_allocate_exception =====

void __cxa_allocate_exception(void)

{
  (*(code *)PTR___cxa_allocate_exception_00151148)();
  return;
}


// ===== 00148c30  __cxa_throw =====

void __cxa_throw(void)

{
  (*(code *)PTR___cxa_throw_00151150)();
  return;
}


// ===== 00148c40  __cxa_free_exception =====

void __cxa_free_exception(void)

{
  (*(code *)PTR___cxa_free_exception_00151158)();
  return;
}


// ===== 00148c50  std::out_of_range::~out_of_range =====

void __thiscall std::out_of_range::~out_of_range(out_of_range *this)

{
  (*(code *)PTR__out_of_range_00151160)();
  return;
}


// ===== 00148c60  std::runtime_error::~runtime_error =====

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
  (*(code *)PTR__runtime_error_00151168)();
  return;
}


// ===== 00148c70  __cxa_end_catch =====

void __cxa_end_catch(void)

{
  (*(code *)PTR___cxa_end_catch_00151170)();
  return;
}


// ===== 00148c80  std::out_of_range::~out_of_range =====

void __thiscall std::out_of_range::~out_of_range(out_of_range *this)

{
  (*(code *)PTR__out_of_range_00151178)();
  return;
}


// ===== 00148c90  std::bad_array_new_length::~bad_array_new_length =====

void __thiscall std::bad_array_new_length::~bad_array_new_length(bad_array_new_length *this)

{
  (*(code *)PTR__bad_array_new_length_00151180)();
  return;
}


// ===== 00148ca0  std::out_of_range::~out_of_range =====

void __thiscall std::out_of_range::~out_of_range(out_of_range *this)

{
  (*(code *)PTR__out_of_range_00151188)();
  return;
}


// ===== 00148cb0  __cxa_get_globals =====

void __cxa_get_globals(void)

{
  (*(code *)PTR___cxa_get_globals_00151190)();
  return;
}


// ===== 00148cc0  __cxa_get_globals_fast =====

void __cxa_get_globals_fast(void)

{
  (*(code *)PTR___cxa_get_globals_fast_00151198)();
  return;
}


// ===== 00148cd0  std::get_unexpected =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::get_unexpected(void)

{
  (*(code *)PTR_get_unexpected_001511a0)();
  return;
}


// ===== 00148ce0  std::get_terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::get_terminate(void)

{
  (*(code *)PTR_get_terminate_001511a8)();
  return;
}


// ===== 00148cf0  std::get_new_handler =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::get_new_handler(void)

{
  (*(code *)PTR_get_new_handler_001511b0)();
  return;
}


// ===== 00148d00  __cxa_demangle =====

void __cxa_demangle(void)

{
  (*(code *)PTR___cxa_demangle_001511b8)();
  return;
}


// ===== 00148d10  __emutls_get_address =====

void __emutls_get_address(void)

{
  (*(code *)PTR___emutls_get_address_001511c0)();
  return;
}


// ===== 00148d20  std::bad_array_new_length::~bad_array_new_length =====

void __thiscall std::bad_array_new_length::~bad_array_new_length(bad_array_new_length *this)

{
  (*(code *)PTR__bad_array_new_length_001511c8)();
  return;
}


// ===== 00148d30  std::bad_array_new_length::~bad_array_new_length =====

void __thiscall std::bad_array_new_length::~bad_array_new_length(bad_array_new_length *this)

{
  (*(code *)PTR__bad_array_new_length_001511d0)();
  return;
}


// ===== 00148d40  std::bad_array_new_length::~bad_array_new_length =====

void __thiscall std::bad_array_new_length::~bad_array_new_length(bad_array_new_length *this)

{
  (*(code *)PTR__bad_array_new_length_001511d8)();
  return;
}


// ===== 00148d50  std::bad_alloc::bad_alloc =====

void __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
  (*(code *)PTR_bad_alloc_001511e0)();
  return;
}


