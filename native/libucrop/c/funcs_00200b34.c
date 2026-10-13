// ===== 00200b34  FUN_00200b34 =====

void FUN_00200b34(void *param_1)

{
  operator_delete(param_1,0x28);
  return;
}


// ===== 00200b40  FUN_00200b40 =====

void FUN_00200b40(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  size_t sVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 0x10);
  if ((*(ushort *)((long)plVar6 + 9) & 0x3f) < (*(ushort *)(param_1 + 9) & 0x3f)) {
    (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
    if ((*(ushort *)((long)plVar6 + 9) & 0xc0) != 0x40) {
      (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
    }
  }
  else {
    lVar2 = param_2[1];
    pvVar1 = (void *)*param_2;
    uVar5 = lVar2 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    if ((ulong)param_2[2] < uVar5) {
      sVar3 = param_2[2] * 2;
      uVar5 = lVar2 + 0x3e1;
      if (sVar3 < uVar5 || sVar3 - uVar5 == 0) {
        sVar3 = uVar5;
      }
      param_2[2] = sVar3;
      pvVar1 = realloc(pvVar1,sVar3);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = param_2[1];
      uVar5 = lVar2 + 1;
    }
    param_2[1] = uVar5;
    lVar4 = *plVar6;
    *(undefined1 *)((long)pvVar1 + lVar2) = 0x28;
    (**(code **)(lVar4 + 0x20))(plVar6,param_2);
    if ((*(ushort *)((long)plVar6 + 9) & 0xc0) != 0x40) {
      (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
    }
    lVar2 = param_2[1];
    pvVar1 = (void *)*param_2;
    uVar5 = lVar2 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
    if ((ulong)param_2[2] < uVar5) {
      sVar3 = param_2[2] * 2;
      uVar5 = lVar2 + 0x3e1;
      if (sVar3 < uVar5 || sVar3 - uVar5 == 0) {
        sVar3 = uVar5;
      }
      param_2[2] = sVar3;
      pvVar1 = realloc(pvVar1,sVar3);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = param_2[1];
      uVar5 = lVar2 + 1;
    }
    param_2[1] = uVar5;
    *(undefined1 *)((long)pvVar1 + lVar2) = 0x29;
  }
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar2 + 3U) {
    sVar3 = param_2[2] * 2;
    uVar5 = lVar2 + 0x3e3;
    if (sVar3 < uVar5 || sVar3 - uVar5 == 0) {
      sVar3 = uVar5;
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
  *(undefined1 *)((undefined2 *)((long)pvVar1 + lVar2) + 1) = 0x20;
  *(undefined2 *)((long)pvVar1 + lVar2) = 0x3f20;
  lVar4 = param_2[1];
  plVar6 = *(long **)(param_1 + 0x18);
  lVar2 = lVar4 + 3;
  param_2[1] = lVar2;
  if ((*(ushort *)((long)plVar6 + 9) & 0x3f) < 0x13) {
    (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
    if ((*(ushort *)((long)plVar6 + 9) & 0xc0) != 0x40) {
      (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
    }
  }
  else {
    uVar5 = lVar4 + 4;
    pvVar1 = (void *)*param_2;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    if ((ulong)param_2[2] < uVar5) {
      sVar3 = param_2[2] * 2;
      uVar5 = lVar4 + 0x3e4;
      if (sVar3 < uVar5 || sVar3 - uVar5 == 0) {
        sVar3 = uVar5;
      }
      param_2[2] = sVar3;
      pvVar1 = realloc(pvVar1,sVar3);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = param_2[1];
      uVar5 = lVar2 + 1;
    }
    lVar4 = *plVar6;
    param_2[1] = uVar5;
    *(undefined1 *)((long)pvVar1 + lVar2) = 0x28;
    (**(code **)(lVar4 + 0x20))(plVar6,param_2);
    if ((*(ushort *)((long)plVar6 + 9) & 0xc0) != 0x40) {
      (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
    }
    lVar2 = param_2[1];
    pvVar1 = (void *)*param_2;
    uVar5 = lVar2 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
    if ((ulong)param_2[2] < uVar5) {
      sVar3 = param_2[2] * 2;
      uVar5 = lVar2 + 0x3e1;
      if (sVar3 < uVar5 || sVar3 - uVar5 == 0) {
        sVar3 = uVar5;
      }
      param_2[2] = sVar3;
      pvVar1 = realloc(pvVar1,sVar3);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = param_2[1];
      uVar5 = lVar2 + 1;
    }
    param_2[1] = uVar5;
    *(undefined1 *)((long)pvVar1 + lVar2) = 0x29;
  }
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar2 + 3U) {
    sVar3 = param_2[2] * 2;
    uVar5 = lVar2 + 0x3e3;
    if (sVar3 < uVar5 || sVar3 - uVar5 == 0) {
      sVar3 = uVar5;
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
  *(undefined1 *)((undefined2 *)((long)pvVar1 + lVar2) + 1) = 0x20;
  *(undefined2 *)((long)pvVar1 + lVar2) = 0x3a20;
  lVar4 = param_2[1];
  plVar6 = *(long **)(param_1 + 0x20);
  lVar2 = lVar4 + 3;
  param_2[1] = lVar2;
  if ((*(ushort *)((long)plVar6 + 9) >> 1 & 0x1f) < 9) {
    (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
    if ((*(ushort *)((long)plVar6 + 9) & 0xc0) != 0x40) {
                    /* WARNING: Could not recover jumptable at 0x00200ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
      return;
    }
  }
  else {
    uVar5 = lVar4 + 4;
    pvVar1 = (void *)*param_2;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    if ((ulong)param_2[2] < uVar5) {
      sVar3 = param_2[2] * 2;
      uVar5 = lVar4 + 0x3e4;
      if (sVar3 < uVar5 || sVar3 - uVar5 == 0) {
        sVar3 = uVar5;
      }
      param_2[2] = sVar3;
      pvVar1 = realloc(pvVar1,sVar3);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = param_2[1];
      uVar5 = lVar2 + 1;
    }
    lVar4 = *plVar6;
    param_2[1] = uVar5;
    *(undefined1 *)((long)pvVar1 + lVar2) = 0x28;
    (**(code **)(lVar4 + 0x20))(plVar6,param_2);
    if ((*(ushort *)((long)plVar6 + 9) & 0xc0) != 0x40) {
      (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
    }
    lVar2 = param_2[1];
    pvVar1 = (void *)*param_2;
    uVar5 = lVar2 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
    if ((ulong)param_2[2] < uVar5) {
      sVar3 = param_2[2] * 2;
      uVar5 = lVar2 + 0x3e1;
      if (sVar3 < uVar5 || sVar3 - uVar5 == 0) {
        sVar3 = uVar5;
      }
      param_2[2] = sVar3;
      pvVar1 = realloc(pvVar1,sVar3);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = param_2[1];
      uVar5 = lVar2 + 1;
    }
    param_2[1] = uVar5;
    *(undefined1 *)((long)pvVar1 + lVar2) = 0x29;
  }
  return;
}


// ===== 00200fe4  FUN_00200fe4 =====

void FUN_00200fe4(void *param_1)

{
  operator_delete(param_1,0x28);
  return;
}


// ===== 00200ff0  FUN_00200ff0 =====

void FUN_00200ff0(long param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  size_t __size;
  long lVar5;
  ulong uVar6;
  size_t sVar7;
  void *__src;
  
  sVar7 = *(size_t *)(param_1 + 0x18);
  lVar4 = param_2[1];
  if (sVar7 != 0) {
    __src = *(void **)(param_1 + 0x10);
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar4 + sVar7) {
      __size = param_2[2] * 2;
      uVar6 = lVar4 + sVar7 + 0x3e0;
      if (__size < uVar6 || __size - uVar6 == 0) {
        __size = uVar6;
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
    memcpy((void *)((long)pvVar2 + lVar4),__src,sVar7);
    lVar4 = param_2[1] + sVar7;
    param_2[1] = lVar4;
  }
  iVar1 = *(int *)(param_2 + 4);
  pvVar2 = (void *)*param_2;
  *(undefined4 *)(param_2 + 4) = 0;
  if ((ulong)param_2[2] < lVar4 + 1U) {
    sVar7 = param_2[2] * 2;
    uVar6 = lVar4 + 0x3e1;
    if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
      sVar7 = uVar6;
    }
    param_2[2] = sVar7;
    pvVar2 = realloc(pvVar2,sVar7);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar4) = 0x3c;
  plVar3 = *(long **)(param_1 + 0x20);
  lVar4 = *plVar3;
  param_2[1] = param_2[1] + 1;
                    /* try { // try from 002010d0 to 002010d7 has its CatchHandler @ 00201324 */
  (**(code **)(lVar4 + 0x20))(plVar3,param_2);
  lVar4 = param_2[1];
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar4 + 1U) {
    sVar7 = param_2[2] * 2;
    uVar6 = lVar4 + 0x3e1;
    if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
      sVar7 = uVar6;
    }
    param_2[2] = sVar7;
    pvVar2 = realloc(pvVar2,sVar7);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar4) = 0x3e;
  lVar5 = param_2[1];
  pvVar2 = (void *)*param_2;
  *(int *)(param_2 + 4) = iVar1 + 1;
  uVar6 = lVar5 + 2;
  lVar4 = lVar5 + 1;
  param_2[1] = lVar4;
  if ((ulong)param_2[2] < uVar6) {
    sVar7 = param_2[2] * 2;
    uVar6 = lVar5 + 0x3e2;
    if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
      sVar7 = uVar6;
    }
    param_2[2] = sVar7;
    pvVar2 = realloc(pvVar2,sVar7);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
    uVar6 = lVar4 + 1;
  }
  param_2[1] = uVar6;
  *(undefined1 *)((long)pvVar2 + lVar4) = 0x28;
  plVar3 = *(long **)(param_1 + 0x28);
  if ((*(ushort *)((long)plVar3 + 9) & 0x3f) < 0x13) {
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2);
    if ((*(ushort *)((long)plVar3 + 9) & 0xc0) != 0x40) {
      (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
    }
  }
  else {
    lVar4 = param_2[1];
    pvVar2 = (void *)*param_2;
    uVar6 = lVar4 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    if ((ulong)param_2[2] < uVar6) {
      sVar7 = param_2[2] * 2;
      uVar6 = lVar4 + 0x3e1;
      if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
        sVar7 = uVar6;
      }
      param_2[2] = sVar7;
      pvVar2 = realloc(pvVar2,sVar7);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
      uVar6 = lVar4 + 1;
    }
    param_2[1] = uVar6;
    lVar5 = *plVar3;
    *(undefined1 *)((long)pvVar2 + lVar4) = 0x28;
    (**(code **)(lVar5 + 0x20))(plVar3,param_2);
    if ((*(ushort *)((long)plVar3 + 9) & 0xc0) != 0x40) {
      (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
    }
    lVar4 = param_2[1];
    pvVar2 = (void *)*param_2;
    uVar6 = lVar4 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
    if ((ulong)param_2[2] < uVar6) {
      sVar7 = param_2[2] * 2;
      uVar6 = lVar4 + 0x3e1;
      if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
        sVar7 = uVar6;
      }
      param_2[2] = sVar7;
      pvVar2 = realloc(pvVar2,sVar7);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
      uVar6 = lVar4 + 1;
    }
    param_2[1] = uVar6;
    *(undefined1 *)((long)pvVar2 + lVar4) = 0x29;
  }
  lVar4 = param_2[1];
  pvVar2 = (void *)*param_2;
  uVar6 = lVar4 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar6) {
    sVar7 = param_2[2] * 2;
    uVar6 = lVar4 + 0x3e1;
    if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
      sVar7 = uVar6;
    }
    param_2[2] = sVar7;
    pvVar2 = realloc(pvVar2,sVar7);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
    uVar6 = lVar4 + 1;
  }
  param_2[1] = uVar6;
  *(undefined1 *)((long)pvVar2 + lVar4) = 0x29;
  return;
}


// ===== 0020132c  FUN_0020132c =====

void FUN_0020132c(void *param_1)

{
  operator_delete(param_1,0x30);
  return;
}


// ===== 00201338  FUN_00201338 =====

void FUN_00201338(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  size_t sVar3;
  ulong uVar4;
  size_t sVar5;
  long *plVar6;
  void *pvVar7;
  
  sVar5 = *(size_t *)(param_1 + 0x18);
  lVar2 = param_2[1];
  if (sVar5 != 0) {
    pvVar7 = *(void **)(param_1 + 0x10);
    pvVar1 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar2 + sVar5) {
      sVar3 = param_2[2] * 2;
      uVar4 = lVar2 + sVar5 + 0x3e0;
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
    }
    memcpy((void *)((long)pvVar1 + lVar2),pvVar7,sVar5);
    lVar2 = param_2[1] + sVar5;
    param_2[1] = lVar2;
  }
  uVar4 = lVar2 + 1;
  pvVar1 = (void *)*param_2;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  if ((ulong)param_2[2] < uVar4) {
    sVar5 = param_2[2] * 2;
    uVar4 = lVar2 + 0x3e1;
    if (sVar5 < uVar4 || sVar5 - uVar4 == 0) {
      sVar5 = uVar4;
    }
    param_2[2] = sVar5;
    pvVar1 = realloc(pvVar1,sVar5);
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
  plVar6 = *(long **)(param_1 + 0x20);
  (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
  if ((*(ushort *)((long)plVar6 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
  }
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar4 = lVar2 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar4) {
    sVar5 = param_2[2] * 2;
    uVar4 = lVar2 + 0x3e1;
    if (sVar5 < uVar4 || sVar5 - uVar4 == 0) {
      sVar5 = uVar4;
    }
    param_2[2] = sVar5;
    pvVar1 = realloc(pvVar1,sVar5);
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
  sVar5 = *(size_t *)(param_1 + 0x30);
  if (sVar5 != 0) {
    lVar2 = param_2[1];
    pvVar1 = (void *)*param_2;
    pvVar7 = *(void **)(param_1 + 0x28);
    if ((ulong)param_2[2] < lVar2 + sVar5) {
      sVar3 = param_2[2] * 2;
      uVar4 = lVar2 + sVar5 + 0x3e0;
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
    }
    memcpy((void *)((long)pvVar1 + lVar2),pvVar7,sVar5);
    param_2[1] = param_2[1] + sVar5;
  }
  return;
}


// ===== 00201520  FUN_00201520 =====

void FUN_00201520(void *param_1)

{
  operator_delete(param_1,0x38);
  return;
}


// ===== 0020152c  FUN_0020152c =====

undefined8 * FUN_0020152c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined1 auVar6 [16];
  
  auVar6 = FUN_001f5f00(param_1,1);
  if (((auVar6._8_8_ == 0) || (pcVar1 = (char *)*param_1, pcVar1 == (char *)param_1[1])) ||
     (*pcVar1 != 'E')) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar1 + 1);
    lVar3 = *(long *)((long)pvVar5 + 8);
    puVar2 = (undefined8 *)pvVar5;
    if (lVar3 - 0xfc0U < 0xfffffffffffff010) {
      puVar2 = (undefined8 *)malloc(0x1000);
      if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar3 = 0;
      *puVar2 = pvVar5;
      puVar2[1] = 0;
      param_1[0x266] = (long)puVar2;
    }
    *(long *)((long)puVar2 + 8) = lVar3 + 0x30;
    puVar4 = (undefined8 *)((long)puVar2 + lVar3 + 0x10);
    *puVar4 = &PTR_FUN_0021b8b0;
    *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0x4d;
    *(undefined1 (*) [16])((long)puVar2 + lVar3 + 0x30) = auVar6;
    *(undefined8 *)((long)puVar2 + lVar3 + 0x20) = param_2;
    *(undefined8 *)((long)puVar2 + lVar3 + 0x28) = param_3;
    *(ushort *)((long)puVar2 + lVar3 + 0x19) =
         *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000 | 0x540;
  }
  return puVar4;
}


// ===== 00201620  FUN_00201620 =====

void FUN_00201620(long param_1,int *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar4 + 8);
  puVar2 = (undefined8 *)pvVar4;
  if (lVar3 - 0xfe0U < 0xfffffffffffff010) {
    puVar2 = (undefined8 *)malloc(0x1000);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = 0;
    *puVar2 = pvVar4;
    puVar2[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar2;
  }
  iVar1 = *param_2;
  *(long *)((long)puVar2 + 8) = lVar3 + 0x10;
  puVar2 = (undefined8 *)(lVar3 + 0x10 + (long)puVar2);
  *(undefined1 *)(puVar2 + 1) = 0x49;
  *puVar2 = &PTR_FUN_0021b920;
  *(ushort *)((long)puVar2 + 9) = *(ushort *)((long)puVar2 + 9) & 0xf000 | 0x540;
  *(bool *)((long)puVar2 + 0xb) = iVar1 != 0;
  return;
}


// ===== 002016c8  FUN_002016c8 =====

void FUN_002016c8(long param_1,undefined8 *param_2)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0021bae0;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x4a;
  uVar3 = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  return;
}


// ===== 00201768  FUN_00201768 =====

undefined8 * FUN_00201768(long param_1,char *param_2)

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
  *puVar4 = &PTR_FUN_0021ae40;
  *(undefined1 *)((long)puVar1 + lVar3 + 0x18) = 8;
  *(char **)((long)puVar1 + lVar3 + 0x20) = param_2;
  *(size_t *)((long)puVar1 + lVar3 + 0x28) = sVar2;
  *(ushort *)((long)puVar1 + lVar3 + 0x19) =
       *(ushort *)((long)puVar1 + lVar3 + 0x19) & 0xf000 | 0x540;
  return puVar4;
}


// ===== 00201814  FUN_00201814 =====

undefined8 * FUN_00201814(long *param_1,long param_2)

{
  short *psVar1;
  long lVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char *pcVar6;
  uint __c;
  char cVar7;
  long lVar8;
  byte *pbVar9;
  ulong uVar10;
  char *pcVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  void *pvVar16;
  size_t sVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  byte *local_110;
  long lStack_108;
  undefined8 *local_100;
  undefined1 local_f8 [16];
  undefined8 *local_e8;
  undefined1 local_e0 [16];
  long *local_d0;
  ulong uStack_c8;
  undefined8 *local_c0;
  undefined8 *puStack_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  if (param_2 != 0) {
    param_1[0x54] = param_1[0x53];
  }
  psVar1 = (short *)*param_1;
  pbVar12 = (byte *)param_1[1];
  if ((ulong)((long)pbVar12 - (long)psVar1) < 2) {
    return (undefined8 *)0x0;
  }
  if (*psVar1 == 0x7455) {
    pbVar9 = (byte *)(psVar1 + 1);
    *param_1 = (long)pbVar9;
    pbVar13 = pbVar9;
    if ((pbVar12 == pbVar9) || (*pbVar9 - 0x3a < 0xfffffff6)) {
      lVar8 = 0;
      pbVar9 = (byte *)0x0;
    }
    else {
      pbVar14 = (byte *)(psVar1 + 1);
      do {
        pbVar15 = pbVar14;
        if (*pbVar13 - 0x3a < 0xfffffff6) break;
        pbVar13 = pbVar13 + 1;
        pbVar14 = pbVar14 + 1;
        *param_1 = (long)pbVar13;
        pbVar15 = pbVar12;
      } while (pbVar13 != pbVar12);
      lVar8 = (long)pbVar15 - (long)pbVar9;
    }
    if (pbVar13 == pbVar12) {
      return (undefined8 *)0x0;
    }
    if (*pbVar13 != 0x5f) {
      return (undefined8 *)0x0;
    }
    pvVar16 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar13 + 1);
    lVar18 = *(long *)((long)pvVar16 + 8);
    puVar4 = (undefined8 *)pvVar16;
    if (lVar18 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) {
LAB_00201f3c:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar18 = 0;
      *puVar4 = pvVar16;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar18 + 0x20;
    puVar5 = (undefined8 *)((long)puVar4 + lVar18 + 0x10);
    *puVar5 = &PTR_FUN_0021bb50;
    *(byte **)((long)puVar4 + lVar18 + 0x20) = pbVar9;
    *(long *)((long)puVar4 + lVar18 + 0x28) = lVar8;
    *(undefined1 *)((long)puVar4 + lVar18 + 0x18) = 0x33;
    *(ushort *)((long)puVar4 + lVar18 + 0x19) =
         *(ushort *)((long)puVar4 + lVar18 + 0x19) & 0xf000 | 0x540;
    return puVar5;
  }
  if (*psVar1 != 0x6c55) {
    if (*psVar1 != 0x6255) {
      return (undefined8 *)0x0;
    }
    pbVar9 = (byte *)(psVar1 + 1);
    *param_1 = (long)pbVar9;
    if ((pbVar12 != pbVar9) && (0xfffffff5 < *pbVar9 - 0x3a)) {
      do {
        if (*pbVar9 - 0x3a < 0xfffffff6) break;
        pbVar9 = pbVar9 + 1;
        *param_1 = (long)pbVar9;
      } while (pbVar9 != pbVar12);
    }
    if (pbVar9 == pbVar12) {
      return (undefined8 *)0x0;
    }
    if (*pbVar9 != 0x5f) {
      return (undefined8 *)0x0;
    }
    pvVar16 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar9 + 1);
    lVar8 = *(long *)((long)pvVar16 + 8);
    puVar4 = (undefined8 *)pvVar16;
    if (lVar8 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_00201f3c;
      lVar8 = 0;
      *puVar4 = pvVar16;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
    puVar5 = (undefined8 *)((long)puVar4 + lVar8 + 0x10);
    *puVar5 = &PTR_FUN_0021ae40;
    *(undefined1 *)((long)puVar4 + lVar8 + 0x18) = 8;
    *(ushort *)((long)puVar4 + lVar8 + 0x19) =
         *(ushort *)((long)puVar4 + lVar8 + 0x19) & 0xf000 | 0x540;
    *(char **)((long)puVar4 + lVar8 + 0x20) = "\'block-literal\'";
    *(undefined8 *)((long)puVar4 + lVar8 + 0x28) = 0xf;
    return puVar5;
  }
  plVar20 = (long *)param_1[0x54];
  plVar19 = (long *)param_1[0x53];
  *param_1 = (long)(psVar1 + 1);
  sVar17 = (long)plVar20 - (long)plVar19;
  uStack_c8 = (long)sVar17 >> 3;
  lVar8 = param_1[0x62];
  param_1[0x62] = uStack_c8;
  local_b0 = auStack_68;
  uStack_a0 = 0;
  local_a8 = 0;
  uStack_90 = 0;
  local_98 = 0;
  uStack_80 = 0;
  local_88 = 0;
  uStack_70 = 0;
  local_78 = 0;
  local_d0 = param_1;
  local_c0 = &local_a8;
  puStack_b8 = &local_a8;
  if (plVar20 == (long *)param_1[0x55]) {
    if (plVar19 == param_1 + 0x56) {
      pvVar16 = malloc(sVar17 * 2);
      if (pvVar16 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (plVar20 != plVar19) {
        memmove(pvVar16,plVar19,sVar17);
      }
      param_1[0x53] = (long)pvVar16;
    }
    else {
      pvVar16 = realloc(plVar19,sVar17 * 2);
      param_1[0x53] = (long)pvVar16;
      if (pvVar16 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    plVar20 = (long *)((long)pvVar16 + sVar17);
    param_1[0x54] = (long)plVar20;
    param_1[0x55] = (long)((long)pvVar16 + ((long)sVar17 >> 2) * 8);
  }
  param_1[0x54] = (long)(plVar20 + 1);
  *plVar20 = (long)&local_c0;
  pcVar6 = (char *)*param_1;
  lVar18 = param_1[2];
  lVar2 = param_1[3];
  uVar10 = param_1[1] - (long)pcVar6;
  if (uVar10 != 0) {
    while (*pcVar6 == 'T') {
      if (uVar10 < 2) {
        __c = 0;
      }
      else {
        __c = (uint)(byte)pcVar6[1];
      }
      pcVar6 = (char *)memchr("yptnk",__c,5);
      if ((pcVar6 == (char *)0x0) || (pcVar6 == "")) break;
                    /* try { // try from 00201bec to 00201bf7 has its CatchHandler @ 00201f80 */
      puVar4 = (undefined8 *)FUN_00202c50(param_1,&local_c0);
      if (puVar4 == (undefined8 *)0x0) goto LAB_00201ec0;
      plVar20 = (long *)param_1[3];
      if (plVar20 == (long *)param_1[4]) {
        plVar19 = (long *)param_1[2];
        sVar17 = (long)plVar20 - (long)plVar19;
        if (plVar19 == param_1 + 5) {
          pvVar16 = malloc(sVar17 * 2);
          if (pvVar16 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar20 != param_1 + 5) {
            memmove(pvVar16,plVar19,sVar17);
          }
          param_1[2] = (long)pvVar16;
        }
        else {
          pvVar16 = realloc(plVar19,sVar17 * 2);
          param_1[2] = (long)pvVar16;
          if (pvVar16 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar20 = (long *)((long)pvVar16 + sVar17);
        param_1[3] = (long)plVar20;
        param_1[4] = (long)((long)pvVar16 + ((long)sVar17 >> 2) * 8);
      }
      param_1[3] = (long)(plVar20 + 1);
      *plVar20 = (long)puVar4;
      pcVar6 = (char *)*param_1;
      uVar10 = param_1[1] - (long)pcVar6;
      if (uVar10 == 0) break;
    }
  }
                    /* try { // try from 00201c50 to 00201c63 has its CatchHandler @ 00201f7c */
  lVar18 = lVar2 - lVar18 >> 3;
  local_e0 = FUN_001f8168(param_1,lVar18);
  if (local_e0._8_8_ == 0) {
    if (param_1[0x54] == param_1[0x53]) {
                    /* try { // try from 00201f40 to 00201f5f has its CatchHandler @ 00201f7c */
                    /* WARNING: Subroutine does not return */
      FUN_001f3180("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0x81,
                   "Popping empty vector!");
    }
    param_1[0x54] = param_1[0x54] + -8;
  }
  pcVar6 = (char *)*param_1;
  pcVar11 = (char *)param_1[1];
  local_e8 = (undefined8 *)0x0;
  if (pcVar6 == pcVar11) {
LAB_00201cec:
    do {
                    /* try { // try from 00201d00 to 00201d07 has its CatchHandler @ 00201f84 */
      puVar4 = (undefined8 *)FUN_001f6040(param_1);
      if (puVar4 == (undefined8 *)0x0) goto LAB_00201ec0;
      plVar20 = (long *)param_1[3];
      if (plVar20 == (long *)param_1[4]) {
        plVar19 = (long *)param_1[2];
        sVar17 = (long)plVar20 - (long)plVar19;
        if (plVar19 == param_1 + 5) {
          pvVar16 = malloc(sVar17 * 2);
          if (pvVar16 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar20 != param_1 + 5) {
            memmove(pvVar16,plVar19,sVar17);
          }
          param_1[2] = (long)pvVar16;
        }
        else {
          pvVar16 = realloc(plVar19,sVar17 * 2);
          param_1[2] = (long)pvVar16;
          if (pvVar16 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar20 = (long *)((long)pvVar16 + sVar17);
        param_1[3] = (long)plVar20;
        param_1[4] = (long)((long)pvVar16 + ((long)sVar17 >> 2) * 8);
      }
      param_1[3] = (long)(plVar20 + 1);
      *plVar20 = (long)puVar4;
      if ((char *)param_1[1] == (char *)*param_1) {
        cVar7 = '\0';
      }
      else {
        cVar7 = *(char *)*param_1;
        if (cVar7 == 'E') break;
      }
    } while (cVar7 != 'Q');
  }
  else {
    if (*pcVar6 == 'Q') {
      uVar3 = *(undefined1 *)((long)param_1 + 0x30a);
      *param_1 = (long)(pcVar6 + 1);
      *(undefined1 *)((long)param_1 + 0x30a) = 1;
                    /* try { // try from 00201cb4 to 00201cbb has its CatchHandler @ 00201f68 */
      puVar4 = (undefined8 *)FUN_001fb034(param_1);
      *(undefined1 *)((long)param_1 + 0x30a) = uVar3;
      local_e8 = puVar4;
      if (puVar4 == (undefined8 *)0x0) goto LAB_00201ec0;
      pcVar6 = (char *)*param_1;
      pcVar11 = (char *)param_1[1];
    }
    if ((pcVar11 == pcVar6) || (*pcVar6 != 'v')) goto LAB_00201cec;
    *param_1 = (long)(pcVar6 + 1);
  }
                    /* try { // try from 00201da8 to 00201db3 has its CatchHandler @ 00201f74 */
  local_f8 = FUN_001f8168(param_1,lVar18);
  pbVar12 = (byte *)*param_1;
  pbVar9 = (byte *)param_1[1];
  local_100 = (undefined8 *)0x0;
  if (pbVar12 != pbVar9) {
    if (*pbVar12 == 0x51) {
      uVar3 = *(undefined1 *)((long)param_1 + 0x30a);
      *param_1 = (long)(pbVar12 + 1);
      *(undefined1 *)((long)param_1 + 0x30a) = 1;
                    /* try { // try from 00201de8 to 00201def has its CatchHandler @ 00201f64 */
      puVar4 = (undefined8 *)FUN_001fb034(param_1);
      *(undefined1 *)((long)param_1 + 0x30a) = uVar3;
      local_100 = puVar4;
      if (puVar4 == (undefined8 *)0x0) goto LAB_00201ec0;
      pbVar12 = (byte *)*param_1;
      pbVar9 = (byte *)param_1[1];
    }
    if ((pbVar12 != pbVar9) && (*pbVar12 == 0x45)) {
      local_110 = pbVar12 + 1;
      *param_1 = (long)local_110;
      pbVar12 = local_110;
      if ((pbVar9 == local_110) || (*local_110 - 0x3a < 0xfffffff6)) {
        lStack_108 = 0;
        local_110 = (byte *)0x0;
      }
      else {
        do {
          pbVar13 = pbVar12;
          if (*pbVar12 - 0x3a < 0xfffffff6) break;
          pbVar12 = pbVar12 + 1;
          *param_1 = (long)pbVar12;
          pbVar13 = pbVar9;
        } while (pbVar12 != pbVar9);
        lStack_108 = (long)pbVar13 - (long)local_110;
      }
      if ((pbVar12 != pbVar9) && (*pbVar12 == 0x5f)) {
        *param_1 = (long)(pbVar12 + 1);
        puVar4 = (undefined8 *)
                 FUN_002035c8(param_1,local_e0,&local_e8,local_f8,&local_100,&local_110);
        goto LAB_00201ec0;
      }
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_00201ec0:
  if ((ulong)(local_d0[0x54] - local_d0[0x53] >> 3) < uStack_c8) {
                    /* try { // try from 00201f18 to 00201f37 has its CatchHandler @ 00201f78 */
                    /* WARNING: Subroutine does not return */
    FUN_001f3180("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0xa4e,
                 &DAT_00125cb4);
  }
  local_d0[0x54] = local_d0[0x53] + uStack_c8 * 8;
  if (local_c0 != &local_a8) {
    free(local_c0);
  }
  param_1[0x62] = lVar8;
  return puVar4;
}


// ===== 00201fa0  FUN_00201fa0 =====

void FUN_00201fa0(long param_1,undefined8 *param_2)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0021bed0;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x4b;
  uVar3 = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  return;
}


// ===== 00202040  FUN_00202040 =====

void FUN_00202040(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pvVar3 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar3 + 8);
  puVar1 = (undefined8 *)pvVar3;
  if (lVar2 - 0xfc0U < 0xfffffffffffff010) {
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
  *(long *)((long)puVar1 + 8) = lVar2 + 0x30;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0021bf40;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x4c;
  uVar5 = param_3[1];
  uVar4 = *param_3;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar5;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar4;
  return;
}


// ===== 002020ec  FUN_002020ec =====

void FUN_002020ec(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  size_t sVar3;
  ulong uVar4;
  ulong uVar5;
  size_t sVar6;
  void *pvVar7;
  char *__src;
  ulong *puVar8;
  
  if (3 < *(ulong *)(param_1 + 0x18)) {
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
    *(undefined1 *)((long)pvVar1 + lVar2) = 0x28;
    sVar6 = *(size_t *)(param_1 + 0x18);
    lVar2 = param_2[1];
    if (sVar6 != 0) {
      pvVar7 = *(void **)(param_1 + 0x10);
      pvVar1 = (void *)*param_2;
      if ((ulong)param_2[2] < lVar2 + sVar6) {
        sVar3 = param_2[2] * 2;
        uVar5 = lVar2 + sVar6 + 0x3e0;
        if (sVar3 < uVar5 || sVar3 - uVar5 == 0) {
          sVar3 = uVar5;
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
      memcpy((void *)((long)pvVar1 + lVar2),pvVar7,sVar6);
      lVar2 = param_2[1] + sVar6;
      param_2[1] = lVar2;
    }
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
    *(undefined1 *)((long)pvVar1 + lVar2) = 0x29;
  }
  __src = *(char **)(param_1 + 0x20);
  if (*__src == 'n') {
    pvVar1 = (void *)*param_2;
    puVar8 = param_2 + 1;
    uVar4 = *puVar8;
    uVar5 = uVar4 + 1;
    if ((ulong)param_2[2] < uVar5) {
      sVar6 = param_2[2] * 2;
      uVar4 = uVar4 + 0x3e1;
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
      uVar4 = *puVar8;
      uVar5 = uVar4 + 1;
    }
    *puVar8 = uVar5;
    *(undefined1 *)((long)pvVar1 + uVar4) = 0x2d;
    sVar6 = *(long *)(param_1 + 0x28) - 1;
    if (sVar6 == 0) goto LAB_0020233c;
    uVar5 = param_2[1];
    pvVar1 = (void *)*param_2;
    lVar2 = *(long *)(param_1 + 0x20);
    if ((ulong)param_2[2] < uVar5 + sVar6) {
      sVar3 = param_2[2] * 2;
      uVar5 = uVar5 + sVar6 + 0x3e0;
      if (sVar3 < uVar5 || sVar3 - uVar5 == 0) {
        sVar3 = uVar5;
      }
      param_2[2] = sVar3;
      pvVar1 = realloc(pvVar1,sVar3);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar5 = *puVar8;
    }
    pvVar1 = (void *)((long)pvVar1 + uVar5);
    __src = (char *)(lVar2 + 1);
  }
  else {
    sVar6 = *(size_t *)(param_1 + 0x28);
    if (sVar6 == 0) goto LAB_0020233c;
    pvVar1 = (void *)*param_2;
    lVar2 = param_2[1];
    if ((ulong)param_2[2] < lVar2 + sVar6) {
      sVar3 = param_2[2] * 2;
      uVar5 = lVar2 + sVar6 + 0x3e0;
      if (sVar3 < uVar5 || sVar3 - uVar5 == 0) {
        sVar3 = uVar5;
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
  memcpy(pvVar1,__src,sVar6);
  param_2[1] = param_2[1] + sVar6;
LAB_0020233c:
  uVar5 = *(ulong *)(param_1 + 0x18);
  if ((uVar5 < 4) && (uVar5 != 0)) {
    lVar2 = param_2[1];
    pvVar1 = (void *)*param_2;
    pvVar7 = *(void **)(param_1 + 0x10);
    if ((ulong)param_2[2] < lVar2 + uVar5) {
      sVar6 = param_2[2] * 2;
      uVar4 = lVar2 + uVar5 + 0x3e0;
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
    memcpy((void *)((long)pvVar1 + lVar2),pvVar7,uVar5);
    param_2[1] = param_2[1] + uVar5;
  }
  return;
}


// ===== 002023d8  FUN_002023d8 =====

void FUN_002023d8(void *param_1)

{
  operator_delete(param_1,0x30);
  return;
}


// ===== 002023e4  FUN_002023e4 =====

void FUN_002023e4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  size_t __n;
  char *__src;
  char cVar2;
  void *__ptr;
  size_t __size;
  long lVar3;
  
  cVar2 = *(char *)(param_1 + 0xb);
  __ptr = (void *)*param_2;
  __n = 4;
  if (cVar2 == '\0') {
    __n = 5;
  }
  lVar3 = param_2[1];
  if ((ulong)param_2[2] < __n + lVar3) {
    __size = param_2[2] * 2;
    uVar1 = __n + lVar3 + 0x3e0;
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
  __src = "true";
  if (cVar2 == '\0') {
    __src = "false";
  }
  memcpy((void *)((long)__ptr + lVar3),__src,__n);
  param_2[1] = param_2[1] + __n;
  return;
}


// ===== 0020248c  FUN_0020248c =====

void FUN_0020248c(void *param_1)

{
  operator_delete(param_1,0x10);
  return;
}


// ===== 00202498  FUN_00202498 =====

void FUN_00202498(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *__ptr;
  size_t __size;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  size_t __n;
  char local_38 [24];
  
  if (7 < *(ulong *)(param_1 + 0x18)) {
    pbVar11 = *(byte **)(param_1 + 0x10);
    local_38[0] = '\0';
    local_38[1] = '\0';
    local_38[2] = '\0';
    local_38[3] = '\0';
    local_38[4] = '\0';
    local_38[5] = '\0';
    local_38[6] = '\0';
    local_38[7] = '\0';
    local_38[8] = '\0';
    local_38[9] = '\0';
    local_38[10] = '\0';
    local_38[0xb] = '\0';
    local_38[0xc] = '\0';
    local_38[0xd] = '\0';
    local_38[0xe] = '\0';
    local_38[0xf] = '\0';
    local_38[0x10] = '\0';
    local_38[0x11] = '\0';
    local_38[0x12] = '\0';
    local_38[0x13] = '\0';
    local_38[0x14] = '\0';
    local_38[0x15] = '\0';
    local_38[0x16] = '\0';
    local_38[0x17] = '\0';
    iVar7 = -0x57;
    iVar5 = iVar7;
    if (0xfffffff5 < pbVar11[1] - 0x3a) {
      iVar5 = -0x30;
    }
    iVar9 = 9;
    iVar2 = iVar9;
    if (0xfffffff5 < *pbVar11 - 0x3a) {
      iVar2 = 0;
    }
    if (0xfffffff5 < pbVar11[7] - 0x3a) {
      iVar7 = -0x30;
    }
    if (0xfffffff5 < pbVar11[6] - 0x3a) {
      iVar9 = 0;
    }
    iVar8 = -0x57;
    iVar3 = iVar8;
    if (0xfffffff5 < pbVar11[5] - 0x3a) {
      iVar3 = -0x30;
    }
    iVar10 = 9;
    iVar4 = iVar10;
    if (0xfffffff5 < pbVar11[4] - 0x3a) {
      iVar4 = 0;
    }
    if (0xfffffff5 < pbVar11[3] - 0x3a) {
      iVar8 = -0x30;
    }
    if (0xfffffff5 < pbVar11[2] - 0x3a) {
      iVar10 = 0;
    }
    iVar5 = snprintf(local_38,0x18,"%af",
                     (double)(float)((iVar5 + (uint)pbVar11[1] + (iVar2 + (uint)*pbVar11) * 0x10) *
                                     0x1000000 |
                                    iVar7 + (uint)pbVar11[7] + (iVar9 + (uint)pbVar11[6]) * 0x10 &
                                    0xff | (iVar3 + (uint)pbVar11[5] +
                                            (iVar4 + (uint)pbVar11[4]) * 0x10 & 0xff) << 8 |
                                    (iVar8 + (uint)pbVar11[3] + (iVar10 + (uint)pbVar11[2]) * 0x10 &
                                    0xff) << 0x10));
    if (iVar5 != 0) {
      lVar6 = param_2[1];
      __n = (size_t)iVar5;
      __ptr = (void *)*param_2;
      if ((ulong)param_2[2] < lVar6 + __n) {
        __size = param_2[2] * 2;
        uVar1 = lVar6 + __n + 0x3e0;
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
        lVar6 = param_2[1];
      }
      memcpy((void *)((long)__ptr + lVar6),local_38,__n);
      param_2[1] = param_2[1] + __n;
    }
  }
  return;
}


// ===== 00202624  FUN_00202624 =====

void FUN_00202624(void *param_1)

{
  operator_delete(param_1,0x20);
  return;
}


// ===== 00202630  FUN_00202630 =====

void FUN_00202630(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  void *__ptr;
  ulong uVar11;
  size_t __size;
  long lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  byte *pbVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  size_t __n;
  char local_40 [32];
  
  if (0xf < *(ulong *)(param_1 + 0x18)) {
    pbVar16 = *(byte **)(param_1 + 0x10);
    iVar13 = -0x57;
    iVar10 = iVar13;
    if (0xfffffff5 < pbVar16[9] - 0x3a) {
      iVar10 = -0x30;
    }
    iVar17 = 9;
    iVar1 = iVar17;
    if (0xfffffff5 < pbVar16[8] - 0x3a) {
      iVar1 = 0;
    }
    if (0xfffffff5 < pbVar16[0xb] - 0x3a) {
      iVar13 = -0x30;
    }
    if (0xfffffff5 < pbVar16[10] - 0x3a) {
      iVar17 = 0;
    }
    iVar14 = -0x57;
    iVar2 = iVar14;
    if (0xfffffff5 < pbVar16[7] - 0x3a) {
      iVar2 = -0x30;
    }
    iVar18 = 9;
    iVar3 = iVar18;
    if (0xfffffff5 < pbVar16[6] - 0x3a) {
      iVar3 = 0;
    }
    iVar4 = iVar14;
    if (0xfffffff5 < pbVar16[3] - 0x3a) {
      iVar4 = -0x30;
    }
    iVar5 = iVar18;
    if (0xfffffff5 < pbVar16[2] - 0x3a) {
      iVar5 = 0;
    }
    iVar6 = iVar14;
    if (0xfffffff5 < pbVar16[1] - 0x3a) {
      iVar6 = -0x30;
    }
    iVar7 = iVar18;
    if (0xfffffff5 < *pbVar16 - 0x3a) {
      iVar7 = 0;
    }
    if (0xfffffff5 < pbVar16[5] - 0x3a) {
      iVar14 = -0x30;
    }
    if (0xfffffff5 < pbVar16[4] - 0x3a) {
      iVar18 = 0;
    }
    iVar15 = -0x57;
    iVar8 = iVar15;
    if (0xfffffff5 < pbVar16[0xd] - 0x3a) {
      iVar8 = -0x30;
    }
    iVar19 = 9;
    iVar9 = iVar19;
    if (0xfffffff5 < pbVar16[0xc] - 0x3a) {
      iVar9 = 0;
    }
    if (0xfffffff5 < pbVar16[0xf] - 0x3a) {
      iVar15 = -0x30;
    }
    if (0xfffffff5 < pbVar16[0xe] - 0x3a) {
      iVar19 = 0;
    }
    local_40[8] = '\0';
    local_40[9] = '\0';
    local_40[10] = '\0';
    local_40[0xb] = '\0';
    local_40[0xc] = '\0';
    local_40[0xd] = '\0';
    local_40[0xe] = '\0';
    local_40[0xf] = '\0';
    local_40[0] = '\0';
    local_40[1] = '\0';
    local_40[2] = '\0';
    local_40[3] = '\0';
    local_40[4] = '\0';
    local_40[5] = '\0';
    local_40[6] = '\0';
    local_40[7] = '\0';
    local_40[0x18] = '\0';
    local_40[0x19] = '\0';
    local_40[0x1a] = '\0';
    local_40[0x1b] = '\0';
    local_40[0x1c] = '\0';
    local_40[0x1d] = '\0';
    local_40[0x1e] = '\0';
    local_40[0x1f] = '\0';
    local_40[0x10] = '\0';
    local_40[0x11] = '\0';
    local_40[0x12] = '\0';
    local_40[0x13] = '\0';
    local_40[0x14] = '\0';
    local_40[0x15] = '\0';
    local_40[0x16] = '\0';
    local_40[0x17] = '\0';
    uVar11 = ((ulong)(iVar13 + (uint)pbVar16[0xb] + (iVar17 + (uint)pbVar16[10]) * 0x10 & 0xff) <<
             0x28) >> 0x18 |
             ((ulong)(iVar14 + (uint)pbVar16[5] + (iVar18 + (uint)pbVar16[4]) * 0x10) & 0xff) <<
             0x28 | (ulong)(iVar15 + (uint)pbVar16[0xf] + (iVar19 + (uint)pbVar16[0xe]) * 0x10) &
                    0xff | (ulong)(iVar6 + (uint)pbVar16[1] + (iVar7 + (uint)*pbVar16) * 0x10) <<
                           0x38 |
             ((ulong)(iVar8 + (uint)pbVar16[0xd] + (iVar9 + (uint)pbVar16[0xc]) * 0x10 & 0xff) <<
             0x30) >> 0x28 |
             ((ulong)(iVar4 + (uint)pbVar16[3] + (iVar5 + (uint)pbVar16[2]) * 0x10) & 0xff) << 0x30;
    iVar10 = snprintf(local_40,0x20,"%a",
                      uVar11 & 0xffffff0000000000 |
                      uVar11 & 0xffffffff |
                      ((ulong)(iVar10 + (uint)pbVar16[9] + (iVar1 + (uint)pbVar16[8]) * 0x10 & 0xff)
                      << 0x20) >> 8 |
                      ((ulong)(iVar2 + (uint)pbVar16[7] + (iVar3 + (uint)pbVar16[6]) * 0x10) & 0xff)
                      << 0x20);
    if (iVar10 != 0) {
      lVar12 = param_2[1];
      __n = (size_t)iVar10;
      __ptr = (void *)*param_2;
      if ((ulong)param_2[2] < lVar12 + __n) {
        __size = param_2[2] * 2;
        uVar11 = lVar12 + __n + 0x3e0;
        if (__size < uVar11 || __size - uVar11 == 0) {
          __size = uVar11;
        }
        param_2[2] = __size;
        __ptr = realloc(__ptr,__size);
        *param_2 = __ptr;
        if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar12 = param_2[1];
      }
      memcpy((void *)((long)__ptr + lVar12),local_40,__n);
      param_2[1] = param_2[1] + __n;
    }
  }
  return;
}


// ===== 002028c4  FUN_002028c4 =====

void FUN_002028c4(void *param_1)

{
  operator_delete(param_1,0x20);
  return;
}


// ===== 002028d0  FUN_002028d0 =====

void FUN_002028d0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  int iVar2;
  void *__ptr;
  byte *pbVar3;
  size_t __size;
  byte *pbVar4;
  long lVar5;
  char cVar6;
  char cVar7;
  size_t __n;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
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
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  char local_60 [47];
  byte local_31;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (0x1f < *(ulong *)(param_1 + 0x18)) {
    pbVar4 = *(byte **)(param_1 + 0x10);
    if ((&local_30 < pbVar4 + 0x20) && (pbVar4 < &stack0xffffffffffffffe0)) {
      lVar5 = 0x20;
      pbVar3 = &local_31;
      pbVar4 = pbVar4 + 1;
      do {
        cVar6 = '\t';
        if (0xfffffff5 < pbVar4[-1] - 0x3a) {
          cVar6 = '\0';
        }
        cVar7 = -0x57;
        if (0xfffffff5 < *pbVar4 - 0x3a) {
          cVar7 = -0x30;
        }
        lVar5 = lVar5 + -2;
        bVar8 = cVar7 + *pbVar4 + (cVar6 + pbVar4[-1]) * '\x10';
        pbVar3 = pbVar3 + 1;
        *pbVar3 = bVar8;
        pbVar4 = pbVar4 + 2;
      } while (lVar5 != 0);
    }
    else {
      bVar8 = pbVar4[2];
      bVar10 = pbVar4[3];
      bVar9 = pbVar4[0x12];
      bVar11 = pbVar4[0x13];
      auVar20._8_4_ = 0xfffffff6;
      auVar20._0_8_ = 0xfffffff6fffffff6;
      auVar20._12_4_ = 0xfffffff6;
      pbVar3 = (byte *)((ulong)&local_30 | 0xf);
      auVar16._0_4_ = pbVar4[0x18] - 0x3a;
      auVar16._4_4_ = pbVar4[0x1a] - 0x3a;
      auVar16._8_4_ = pbVar4[0x1c] - 0x3a;
      auVar16._12_4_ = pbVar4[0x1e] - 0x3a;
      auVar22._0_4_ = (CONCAT12(bVar8,(ushort)*pbVar4) & 0xffff) - 0x3a;
      auVar22._4_4_ = bVar8 - 0x3a;
      auVar22._8_4_ = pbVar4[4] - 0x3a;
      auVar22._12_4_ = pbVar4[6] - 0x3a;
      auVar15._0_4_ = pbVar4[8] - 0x3a;
      auVar15._4_4_ = pbVar4[10] - 0x3a;
      auVar15._8_4_ = pbVar4[0xc] - 0x3a;
      auVar15._12_4_ = pbVar4[0xe] - 0x3a;
      auVar14._0_4_ = (CONCAT12(bVar9,(ushort)pbVar4[0x10]) & 0xffff) - 0x3a;
      auVar14._4_4_ = bVar9 - 0x3a;
      auVar14._8_4_ = pbVar4[0x14] - 0x3a;
      auVar14._12_4_ = pbVar4[0x16] - 0x3a;
      auVar17._0_4_ = pbVar4[9] - 0x3a;
      auVar17._4_4_ = pbVar4[0xb] - 0x3a;
      auVar17._8_4_ = pbVar4[0xd] - 0x3a;
      auVar17._12_4_ = pbVar4[0xf] - 0x3a;
      auVar18._0_4_ = (CONCAT12(bVar11,(ushort)pbVar4[0x11]) & 0xffff) - 0x3a;
      auVar18._4_4_ = bVar11 - 0x3a;
      auVar18._8_4_ = pbVar4[0x15] - 0x3a;
      auVar18._12_4_ = pbVar4[0x17] - 0x3a;
      auVar16 = NEON_cmhi(auVar20,auVar16,4);
      auVar15 = NEON_cmhi(auVar20,auVar15,4);
      auVar22 = NEON_cmhi(auVar20,auVar22,4);
      auVar14 = NEON_cmhi(auVar20,auVar14,4);
      auVar12._4_4_ = pbVar4[0x1b] - 0x3a;
      auVar12._0_4_ = pbVar4[0x19] - 0x3a;
      auVar12._8_4_ = pbVar4[0x1d] - 0x3a;
      auVar12._12_4_ = pbVar4[0x1f] - 0x3a;
      auVar23 = NEON_cmhi(auVar20,auVar12,4);
      auVar12 = NEON_cmhi(auVar20,auVar18,4);
      auVar18 = NEON_cmhi(auVar20,auVar17,4);
      auVar21._4_4_ = bVar10 - 0x3a;
      auVar21._0_4_ = (CONCAT12(bVar10,(ushort)pbVar4[1]) & 0xffff) - 0x3a;
      auVar21._8_4_ = pbVar4[5] - 0x3a;
      auVar21._12_4_ = pbVar4[7] - 0x3a;
      auVar21 = NEON_cmhi(auVar20,auVar21,4);
      auVar19[8] = 0xa9;
      auVar19._0_8_ = 0xa9a9a9a9a9a9a9a9;
      auVar19[9] = 0xa9;
      auVar19[10] = 0xa9;
      auVar19[0xb] = 0xa9;
      auVar19[0xc] = 0xa9;
      auVar19[0xd] = 0xa9;
      auVar19[0xe] = 0xa9;
      auVar19[0xf] = 0xa9;
      auVar13[1] = auVar21[4];
      auVar13[0] = auVar21[0];
      auVar13[2] = auVar21[8];
      auVar13[3] = auVar21[0xc];
      auVar13[4] = auVar18[0];
      auVar13[5] = auVar18[4];
      auVar13[6] = auVar18[8];
      auVar13[7] = auVar18[0xc];
      auVar13[8] = auVar12[0];
      auVar13[9] = auVar12[4];
      auVar13[10] = auVar12[8];
      auVar13[0xb] = auVar12[0xc];
      auVar13[0xc] = auVar23[0];
      auVar13[0xd] = auVar23[4];
      auVar13[0xe] = auVar23[8];
      auVar13[0xf] = auVar23[0xc];
      auVar23[8] = 0xd0;
      auVar23._0_8_ = 0xd0d0d0d0d0d0d0d0;
      auVar23[9] = 0xd0;
      auVar23[10] = 0xd0;
      auVar23[0xb] = 0xd0;
      auVar23[0xc] = 0xd0;
      auVar23[0xd] = 0xd0;
      auVar23[0xe] = 0xd0;
      auVar23[0xf] = 0xd0;
      uVar1 = (ulong)CONCAT15(auVar15[0xc],
                              CONCAT14(auVar15[8],
                                       CONCAT13(auVar15[4],
                                                CONCAT12(auVar15[0],
                                                         CONCAT11(auVar22[0xc],auVar22[8]))))) &
              0x90909090909;
      auVar21 = NEON_bsl(auVar13,auVar19,auVar23,1);
      local_30 = CONCAT17(auVar21[7] + pbVar4[0xf] + ((char)(uVar1 >> 0x28) + pbVar4[0xe]) * '\x10',
                          CONCAT16(auVar21[6] + pbVar4[0xd] +
                                   ((char)(uVar1 >> 0x20) + pbVar4[0xc]) * '\x10',
                                   CONCAT15(auVar21[5] + pbVar4[0xb] +
                                            ((char)(uVar1 >> 0x18) + pbVar4[10]) * '\x10',
                                            CONCAT14(auVar21[4] + pbVar4[9] +
                                                     ((char)(uVar1 >> 0x10) + pbVar4[8]) * '\x10',
                                                     CONCAT13(auVar21[3] + pbVar4[7] +
                                                              ((char)(uVar1 >> 8) + pbVar4[6]) *
                                                              '\x10',CONCAT12(auVar21[2] + pbVar4[5]
                                                                              + ((char)uVar1 +
                                                                                pbVar4[4]) * '\x10',
                                                                              CONCAT11(auVar21[1] +
                                                                                       bVar10 + ((
                                                  auVar22[4] & 9) + bVar8) * '\x10',
                                                  auVar21[0] + pbVar4[1] +
                                                  ((auVar22[0] & 9) + *pbVar4) * '\x10')))))));
      bVar8 = auVar21[0xf] + pbVar4[0x1f] + ((auVar16[0xc] & 9) + pbVar4[0x1e]) * '\x10';
      uStack_28 = CONCAT17(bVar8,CONCAT16(auVar21[0xe] + pbVar4[0x1d] +
                                          ((auVar16[8] & 9) + pbVar4[0x1c]) * '\x10',
                                          CONCAT15(auVar21[0xd] + pbVar4[0x1b] +
                                                   ((auVar16[4] & 9) + pbVar4[0x1a]) * '\x10',
                                                   CONCAT14(auVar21[0xc] + pbVar4[0x19] +
                                                            ((auVar16[0] & 9) + pbVar4[0x18]) *
                                                            '\x10',CONCAT13(auVar21[0xb] +
                                                                            pbVar4[0x17] +
                                                                            ((auVar14[0xc] & 9) +
                                                                            pbVar4[0x16]) * '\x10',
                                                                            CONCAT12(auVar21[10] +
                                                                                     pbVar4[0x15] +
                                                                                     ((auVar14[8] &
                                                                                      9) + pbVar4[
                                                  0x14]) * '\x10',
                                                  CONCAT11(auVar21[9] + bVar11 +
                                                           ((auVar14[4] & 9) + bVar9) * '\x10',
                                                           auVar21[8] + pbVar4[0x11] +
                                                           ((auVar14[0] & 9) + pbVar4[0x10]) *
                                                           '\x10')))))));
    }
    if (&local_30 < pbVar3) {
      bVar9 = (byte)local_30;
      local_30 = CONCAT71(local_30._1_7_,bVar8);
      *pbVar3 = bVar9;
      bVar8 = local_30._1_1_;
      local_30._0_2_ = CONCAT11(pbVar3[-1],(byte)local_30);
      pbVar3[-1] = bVar8;
      bVar8 = local_30._2_1_;
      local_30._0_3_ = CONCAT12(pbVar3[-2],(undefined2)local_30);
      pbVar3[-2] = bVar8;
      bVar8 = local_30._3_1_;
      local_30._0_4_ = CONCAT13(pbVar3[-3],(undefined3)local_30);
      pbVar3[-3] = bVar8;
      bVar8 = local_30._4_1_;
      local_30._0_5_ = CONCAT14(pbVar3[-4],(undefined4)local_30);
      pbVar3[-4] = bVar8;
      bVar8 = local_30._5_1_;
      local_30._0_6_ = CONCAT15(pbVar3[-5],(undefined5)local_30);
      pbVar3[-5] = bVar8;
      bVar8 = local_30._6_1_;
      local_30._0_7_ = CONCAT16(pbVar3[-6],(undefined6)local_30);
      pbVar3[-6] = bVar8;
      bVar8 = local_30._7_1_;
      local_30 = CONCAT17(pbVar3[-7],(undefined7)local_30);
      pbVar3[-7] = bVar8;
    }
    local_60[0x22] = '\0';
    local_60[0x23] = '\0';
    local_60[0x24] = '\0';
    local_60[0x25] = '\0';
    local_60[0x26] = '\0';
    local_60[0x27] = '\0';
    local_60[0x28] = '\0';
    local_60[0x29] = '\0';
    local_60[0x20] = '\0';
    local_60[0x21] = '\0';
    local_60[8] = '\0';
    local_60[9] = '\0';
    local_60[10] = '\0';
    local_60[0xb] = '\0';
    local_60[0xc] = '\0';
    local_60[0xd] = '\0';
    local_60[0xe] = '\0';
    local_60[0xf] = '\0';
    local_60[0] = '\0';
    local_60[1] = '\0';
    local_60[2] = '\0';
    local_60[3] = '\0';
    local_60[4] = '\0';
    local_60[5] = '\0';
    local_60[6] = '\0';
    local_60[7] = '\0';
    local_60[0x18] = '\0';
    local_60[0x19] = '\0';
    local_60[0x1a] = '\0';
    local_60[0x1b] = '\0';
    local_60[0x1c] = '\0';
    local_60[0x1d] = '\0';
    local_60[0x1e] = '\0';
    local_60[0x1f] = '\0';
    local_60[0x10] = '\0';
    local_60[0x11] = '\0';
    local_60[0x12] = '\0';
    local_60[0x13] = '\0';
    local_60[0x14] = '\0';
    local_60[0x15] = '\0';
    local_60[0x16] = '\0';
    local_60[0x17] = '\0';
    iVar2 = snprintf(local_60,0x2a,"%LaL",local_30);
    if (iVar2 != 0) {
      lVar5 = param_2[1];
      __n = (size_t)iVar2;
      __ptr = (void *)*param_2;
      if ((ulong)param_2[2] < lVar5 + __n) {
        __size = param_2[2] * 2;
        uVar1 = lVar5 + __n + 0x3e0;
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
        lVar5 = param_2[1];
      }
      memcpy((void *)((long)__ptr + lVar5),local_60,__n);
      param_2[1] = param_2[1] + __n;
    }
  }
  return;
}


// ===== 00202b2c  FUN_00202b2c =====

void FUN_00202b2c(void *param_1)

{
  operator_delete(param_1,0x20);
  return;
}


// ===== 00202b38  FUN_00202b38 =====

void FUN_00202b38(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  size_t sVar4;
  long *plVar5;
  
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
  *(undefined2 *)((long)pvVar2 + lVar3) = 0x3c22;
  plVar5 = *(long **)(param_1 + 0x10);
  lVar3 = *plVar5;
  param_2[1] = param_2[1] + 2;
  (**(code **)(lVar3 + 0x20))(plVar5,param_2);
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
  *(undefined2 *)((long)pvVar2 + lVar3) = 0x223e;
  param_2[1] = param_2[1] + 2;
  return;
}


// ===== 00202c44  FUN_00202c44 =====

void FUN_00202c44(void *param_1)

{
  operator_delete(param_1,0x18);
  return;
}


// ===== 00202c50  FUN_00202c50 =====

undefined8 * FUN_00202c50(long *param_1,undefined8 *param_2)

{
  short *psVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ushort uVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  undefined1 uVar10;
  char *pcVar11;
  size_t sVar12;
  void *pvVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined1 auVar17 [16];
  long *local_c8;
  ulong uStack_c0;
  undefined8 *local_b8;
  undefined8 *puStack_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  psVar1 = (short *)*param_1;
  if ((ulong)(param_1[1] - (long)psVar1) < 2) {
LAB_00202c84:
    puVar3 = (undefined8 *)0x0;
  }
  else {
    if (*psVar1 == 0x7954) {
      lVar9 = param_1[99];
      pvVar13 = (void *)param_1[0x266];
      *param_1 = (long)(psVar1 + 1);
      *(int *)(param_1 + 99) = (int)lVar9 + 1;
      lVar7 = *(long *)((long)pvVar13 + 8);
      puVar4 = (undefined8 *)pvVar13;
      if (lVar7 - 0xfd0U < 0xfffffffffffff010) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_00203560;
        lVar7 = 0;
        *puVar4 = pvVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar7 + 0x20;
      puVar16 = (undefined8 *)((long)puVar4 + lVar7 + 0x10);
      *puVar16 = &PTR_FUN_0021bbc0;
      *(undefined4 *)((long)puVar4 + lVar7 + 0x1c) = 0;
      *(int *)((long)puVar4 + lVar7 + 0x20) = (int)lVar9;
      *(undefined1 *)((long)puVar4 + lVar7 + 0x18) = 0x21;
      *(ushort *)((long)puVar4 + lVar7 + 0x19) =
           *(ushort *)((long)puVar4 + lVar7 + 0x19) & 0xf000 | 0x540;
      if (param_2 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)param_2[1];
        if (puVar4 == (undefined8 *)param_2[2]) {
          puVar3 = (undefined8 *)*param_2;
          sVar12 = (long)puVar4 - (long)puVar3;
          if (puVar3 == param_2 + 3) {
            pvVar13 = malloc(sVar12 * 2);
            if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (puVar4 != puVar3) {
              memmove(pvVar13,puVar3,sVar12);
            }
            *param_2 = pvVar13;
          }
          else {
            pvVar13 = realloc(puVar3,sVar12 * 2);
            *param_2 = pvVar13;
            if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          puVar4 = (undefined8 *)((long)pvVar13 + sVar12);
          param_2[1] = puVar4;
          param_2[2] = (void *)((long)pvVar13 + ((long)sVar12 >> 2) * 8);
        }
        param_2[1] = puVar4 + 1;
        *puVar4 = puVar16;
      }
      pvVar13 = (void *)param_1[0x266];
      lVar9 = *(long *)((long)pvVar13 + 8);
      puVar4 = (undefined8 *)pvVar13;
      if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) {
LAB_00203560:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar9 = 0;
        *puVar4 = pvVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
      puVar3 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
      *puVar3 = &PTR_FUN_0021bc30;
      uVar6 = *(ushort *)((long)puVar4 + lVar9 + 0x19);
      uVar10 = 0x23;
      *(undefined8 **)((long)puVar4 + lVar9 + 0x20) = puVar16;
    }
    else if (*psVar1 == 0x6b54) {
      *param_1 = (long)(psVar1 + 1);
      lVar9 = FUN_001f758c(param_1,0);
      if (lVar9 == 0) {
        return (undefined8 *)0x0;
      }
      lVar7 = param_1[99];
      pvVar13 = (void *)param_1[0x266];
      *(int *)(param_1 + 99) = (int)lVar7 + 1;
      lVar5 = *(long *)((long)pvVar13 + 8);
      puVar4 = (undefined8 *)pvVar13;
      if (lVar5 - 0xfd0U < 0xfffffffffffff010) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_00203560;
        lVar5 = 0;
        *puVar4 = pvVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar5 + 0x20;
      puVar16 = (undefined8 *)((long)puVar4 + lVar5 + 0x10);
      *puVar16 = &PTR_FUN_0021bbc0;
      *(undefined4 *)((long)puVar4 + lVar5 + 0x1c) = 0;
      *(int *)((long)puVar4 + lVar5 + 0x20) = (int)lVar7;
      *(undefined1 *)((long)puVar4 + lVar5 + 0x18) = 0x21;
      *(ushort *)((long)puVar4 + lVar5 + 0x19) =
           *(ushort *)((long)puVar4 + lVar5 + 0x19) & 0xf000 | 0x540;
      if (param_2 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)param_2[1];
        if (puVar4 == (undefined8 *)param_2[2]) {
          puVar3 = (undefined8 *)*param_2;
          sVar12 = (long)puVar4 - (long)puVar3;
          if (puVar3 == param_2 + 3) {
            pvVar13 = malloc(sVar12 * 2);
            if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (puVar4 != param_2 + 3) {
              memmove(pvVar13,puVar3,sVar12);
            }
            *param_2 = pvVar13;
          }
          else {
            pvVar13 = realloc(puVar3,sVar12 * 2);
            *param_2 = pvVar13;
            if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          puVar4 = (undefined8 *)((long)pvVar13 + sVar12);
          param_2[1] = puVar4;
          param_2[2] = (void *)((long)pvVar13 + ((long)sVar12 >> 2) * 8);
        }
        param_2[1] = puVar4 + 1;
        *puVar4 = puVar16;
      }
      pvVar13 = (void *)param_1[0x266];
      lVar7 = *(long *)((long)pvVar13 + 8);
      puVar4 = (undefined8 *)pvVar13;
      if (lVar7 - 0xfd0U < 0xfffffffffffff010) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_00203560;
        lVar7 = 0;
        *puVar4 = pvVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar7 + 0x20;
      puVar3 = (undefined8 *)((long)puVar4 + lVar7 + 0x10);
      *puVar3 = &PTR_FUN_0021bca0;
      uVar6 = *(ushort *)((long)puVar4 + lVar7 + 0x19);
      uVar10 = 0x24;
      *(long *)((long)puVar4 + lVar7 + 0x20) = lVar9;
      *(undefined8 **)((long)puVar4 + lVar7 + 0x28) = puVar16;
    }
    else {
      if (*psVar1 != 0x6e54) {
        if (*psVar1 == 0x7454) {
          lVar9 = param_1[100];
          pvVar13 = (void *)param_1[0x266];
          *param_1 = (long)(psVar1 + 1);
          *(int *)(param_1 + 100) = (int)lVar9 + 1;
          lVar7 = *(long *)((long)pvVar13 + 8);
          puVar4 = (undefined8 *)pvVar13;
          if (lVar7 - 0xfd0U < 0xfffffffffffff010) {
            puVar4 = (undefined8 *)malloc(0x1000);
            if (puVar4 == (undefined8 *)0x0) goto LAB_00203560;
            lVar7 = 0;
            *puVar4 = pvVar13;
            puVar4[1] = 0;
            param_1[0x266] = (long)puVar4;
          }
          *(long *)((long)puVar4 + 8) = lVar7 + 0x20;
          puVar16 = (undefined8 *)((long)puVar4 + lVar7 + 0x10);
          *puVar16 = &PTR_FUN_0021bbc0;
          *(undefined1 *)((long)puVar4 + lVar7 + 0x18) = 0x21;
          *(undefined4 *)((long)puVar4 + lVar7 + 0x1c) = 2;
          *(int *)((long)puVar4 + lVar7 + 0x20) = (int)lVar9;
          *(ushort *)((long)puVar4 + lVar7 + 0x19) =
               *(ushort *)((long)puVar4 + lVar7 + 0x19) & 0xf000 | 0x540;
          if (param_2 != (undefined8 *)0x0) {
            puVar4 = (undefined8 *)param_2[1];
            if (puVar4 == (undefined8 *)param_2[2]) {
              puVar3 = (undefined8 *)*param_2;
              sVar12 = (long)puVar4 - (long)puVar3;
              if (puVar3 == param_2 + 3) {
                pvVar13 = malloc(sVar12 * 2);
                if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                if (puVar4 != param_2 + 3) {
                  memmove(pvVar13,puVar3,sVar12);
                }
                *param_2 = pvVar13;
              }
              else {
                pvVar13 = realloc(puVar3,sVar12 * 2);
                *param_2 = pvVar13;
                if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
              }
              puVar4 = (undefined8 *)((long)pvVar13 + sVar12);
              param_2[1] = puVar4;
              param_2[2] = (void *)((long)pvVar13 + ((long)sVar12 >> 2) * 8);
            }
            param_2[1] = puVar4 + 1;
            *puVar4 = puVar16;
          }
          plVar15 = (long *)param_1[0x54];
          plVar14 = (long *)param_1[0x53];
          local_a8 = &stack0xffffffffffffffa0;
          sVar12 = (long)plVar15 - (long)plVar14;
          lVar9 = param_1[2];
          lVar7 = param_1[3];
          uStack_c0 = (long)sVar12 >> 3;
          uStack_98 = 0;
          local_a0 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          uStack_78 = 0;
          local_80 = 0;
          uStack_68 = 0;
          uStack_70 = 0;
          local_c8 = param_1;
          local_b8 = &local_a0;
          puStack_b0 = &local_a0;
          if (plVar15 == (long *)param_1[0x55]) {
            if (plVar14 == param_1 + 0x56) {
              pvVar13 = malloc(sVar12 * 2);
              if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              if (plVar15 != plVar14) {
                memmove(pvVar13,plVar14,sVar12);
              }
              param_1[0x53] = (long)pvVar13;
            }
            else {
              pvVar13 = realloc(plVar14,sVar12 * 2);
              param_1[0x53] = (long)pvVar13;
              if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
            }
            plVar15 = (long *)((long)pvVar13 + sVar12);
            param_1[0x54] = (long)plVar15;
            param_1[0x55] = (long)((long)pvVar13 + ((long)sVar12 >> 2) * 8);
          }
          param_1[0x54] = (long)(plVar15 + 1);
          *plVar15 = (long)&local_b8;
          pcVar8 = (char *)*param_1;
          pcVar11 = (char *)param_1[1];
          do {
            if ((pcVar8 != pcVar11) && (*pcVar8 == 'E')) {
              lVar5 = 0;
              goto LAB_00203498;
            }
                    /* try { // try from 002033a0 to 002033ab has its CatchHandler @ 002035b4 */
            puVar4 = (undefined8 *)FUN_00202c50(param_1,&local_b8);
            if (puVar4 == (undefined8 *)0x0) goto LAB_00203520;
            plVar15 = (long *)param_1[3];
            if (plVar15 == (long *)param_1[4]) {
              plVar14 = (long *)param_1[2];
              sVar12 = (long)plVar15 - (long)plVar14;
              if (plVar14 == param_1 + 5) {
                pvVar13 = malloc(sVar12 * 2);
                if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                if (plVar15 != param_1 + 5) {
                  memmove(pvVar13,plVar14,sVar12);
                }
                param_1[2] = (long)pvVar13;
              }
              else {
                pvVar13 = realloc(plVar14,sVar12 * 2);
                param_1[2] = (long)pvVar13;
                if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
              }
              plVar15 = (long *)((long)pvVar13 + sVar12);
              param_1[3] = (long)plVar15;
              param_1[4] = (long)((long)pvVar13 + ((long)sVar12 >> 2) * 8);
            }
            param_1[3] = (long)(plVar15 + 1);
            *plVar15 = (long)puVar4;
            pcVar8 = (char *)*param_1;
            pcVar11 = (char *)param_1[1];
          } while ((pcVar8 == pcVar11) || (*pcVar8 != 'Q'));
          uVar10 = *(undefined1 *)((long)param_1 + 0x30a);
          *param_1 = (long)(pcVar8 + 1);
          *(undefined1 *)((long)param_1 + 0x30a) = 1;
                    /* try { // try from 00203460 to 00203467 has its CatchHandler @ 002035a0 */
          lVar5 = FUN_001fb034(param_1);
          *(undefined1 *)((long)param_1 + 0x30a) = uVar10;
          if ((lVar5 == 0) ||
             ((pcVar8 = (char *)*param_1, pcVar8 == (char *)param_1[1] || (*pcVar8 != 'E')))) {
            puVar4 = (undefined8 *)0x0;
          }
          else {
LAB_00203498:
            *param_1 = (long)(pcVar8 + 1);
                    /* try { // try from 002034a0 to 002034ab has its CatchHandler @ 002035ac */
            auVar17 = FUN_001f8168(param_1,lVar7 - lVar9 >> 3);
            pvVar13 = (void *)param_1[0x266];
            lVar9 = *(long *)((long)pvVar13 + 8);
            puVar3 = (undefined8 *)pvVar13;
            if (lVar9 - 0xfc0U < 0xfffffffffffff010) {
              puVar3 = (undefined8 *)malloc(0x1000);
              if (puVar3 == (undefined8 *)0x0) goto LAB_00203560;
              lVar9 = 0;
              *puVar3 = pvVar13;
              puVar3[1] = 0;
              param_1[0x266] = (long)puVar3;
            }
            *(long *)((long)puVar3 + 8) = lVar9 + 0x30;
            puVar4 = (undefined8 *)((long)puVar3 + lVar9 + 0x10);
            *puVar4 = &PTR_FUN_0021bd80;
            *(undefined1 *)((long)puVar3 + lVar9 + 0x18) = 0x26;
            *(undefined8 **)((long)puVar3 + lVar9 + 0x20) = puVar16;
            *(undefined1 (*) [16])((long)puVar3 + lVar9 + 0x28) = auVar17;
            *(long *)((long)puVar3 + lVar9 + 0x38) = lVar5;
            *(ushort *)((long)puVar3 + lVar9 + 0x19) =
                 *(ushort *)((long)puVar3 + lVar9 + 0x19) & 0xf000 | 0x500;
          }
LAB_00203520:
          if ((ulong)(local_c8[0x54] - local_c8[0x53] >> 3) < uStack_c0) {
                    /* try { // try from 0020356c to 0020358b has its CatchHandler @ 002035b0 */
                    /* WARNING: Subroutine does not return */
            FUN_001f3180("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",
                         0xa4e,&DAT_00125cb4);
          }
          local_c8[0x54] = local_c8[0x53] + uStack_c0 * 8;
          if (local_b8 == &local_a0) {
            return puVar4;
          }
          free(local_b8);
          return puVar4;
        }
        if (*psVar1 == 0x7054) {
          *param_1 = (long)(psVar1 + 1);
          local_c8 = (long *)FUN_00202c50(param_1);
          if (local_c8 == (long *)0x0) {
            return (undefined8 *)0x0;
          }
          puVar4 = (undefined8 *)FUN_00203878(param_1,&local_c8);
          return puVar4;
        }
        goto LAB_00202c84;
      }
      iVar2 = *(int *)((long)param_1 + 0x31c);
      pvVar13 = (void *)param_1[0x266];
      *param_1 = (long)(psVar1 + 1);
      *(int *)((long)param_1 + 0x31c) = iVar2 + 1;
      lVar9 = *(long *)((long)pvVar13 + 8);
      puVar4 = (undefined8 *)pvVar13;
      if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_00203560;
        lVar9 = 0;
        *puVar4 = pvVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
      puVar16 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
      *puVar16 = &PTR_FUN_0021bbc0;
      *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 0x21;
      *(undefined4 *)((long)puVar4 + lVar9 + 0x1c) = 1;
      *(int *)((long)puVar4 + lVar9 + 0x20) = iVar2;
      *(ushort *)((long)puVar4 + lVar9 + 0x19) =
           *(ushort *)((long)puVar4 + lVar9 + 0x19) & 0xf000 | 0x540;
      if (param_2 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)param_2[1];
        if (puVar4 == (undefined8 *)param_2[2]) {
          puVar3 = (undefined8 *)*param_2;
          sVar12 = (long)puVar4 - (long)puVar3;
          if (puVar3 == param_2 + 3) {
            pvVar13 = malloc(sVar12 * 2);
            if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (puVar4 != param_2 + 3) {
              memmove(pvVar13,puVar3,sVar12);
            }
            *param_2 = pvVar13;
          }
          else {
            pvVar13 = realloc(puVar3,sVar12 * 2);
            *param_2 = pvVar13;
            if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          puVar4 = (undefined8 *)((long)pvVar13 + sVar12);
          param_2[1] = puVar4;
          param_2[2] = (void *)((long)pvVar13 + ((long)sVar12 >> 2) * 8);
        }
        param_2[1] = puVar4 + 1;
        *puVar4 = puVar16;
      }
      lVar9 = FUN_001f6040(param_1);
      if (lVar9 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar13 = (void *)param_1[0x266];
      lVar7 = *(long *)((long)pvVar13 + 8);
      puVar4 = (undefined8 *)pvVar13;
      if (lVar7 - 0xfd0U < 0xfffffffffffff010) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_00203560;
        lVar7 = 0;
        *puVar4 = pvVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar7 + 0x20;
      puVar3 = (undefined8 *)((long)puVar4 + lVar7 + 0x10);
      *puVar3 = &PTR_FUN_0021bd10;
      uVar6 = *(ushort *)((long)puVar4 + lVar7 + 0x19);
      uVar10 = 0x25;
      *(undefined8 **)((long)puVar4 + lVar7 + 0x20) = puVar16;
      *(long *)((long)puVar4 + lVar7 + 0x28) = lVar9;
    }
    *(undefined1 *)(puVar3 + 1) = uVar10;
    *(ushort *)((long)puVar3 + 9) = uVar6 & 0xf000 | 0x500;
  }
  return puVar3;
}


// ===== 002035c8  FUN_002035c8 =====

void FUN_002035c8(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  pvVar5 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar5 + 8);
  puVar1 = (undefined8 *)pvVar5;
  if (lVar2 - 4000U < 0xfffffffffffff010) {
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
  *(long *)((long)puVar1 + 8) = lVar2 + 0x50;
  uVar3 = *param_3;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0021be60;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x34;
  uVar4 = *param_5;
  uVar7 = param_2[1];
  uVar6 = *param_2;
  uVar9 = param_4[1];
  uVar8 = *param_4;
  uVar11 = param_6[1];
  uVar10 = *param_6;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar7;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar6;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x40) = uVar9;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x38) = uVar8;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x48) = uVar4;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x58) = uVar11;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x50) = uVar10;
  return;
}


// ===== 002036a8  FUN_002036a8 =====

void FUN_002036a8(long *param_1)

{
  long lVar1;
  long *__ptr;
  
  lVar1 = *param_1;
  if ((ulong)(*(long *)(lVar1 + 0x2a0) - *(long *)(lVar1 + 0x298) >> 3) < (ulong)param_1[1]) {
                    /* try { // try from 00203700 to 0020371f has its CatchHandler @ 00203720 */
                    /* WARNING: Subroutine does not return */
    FUN_001f3180("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0xa4e,
                 &DAT_00125cb4);
  }
  __ptr = (long *)param_1[2];
  *(long *)(lVar1 + 0x2a0) = *(long *)(lVar1 + 0x298) + param_1[1] * 8;
  if (__ptr != param_1 + 5) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00203724  FUN_00203724 =====

void FUN_00203724(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  size_t __size;
  long lVar3;
  size_t sVar4;
  void *__src;
  
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
  *(undefined8 *)((long)pvVar2 + lVar3) = 0x64656d616e6e7527;
  lVar3 = param_2[1] + 8;
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
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x27;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 0020386c  FUN_0020386c =====

void FUN_0020386c(void *param_1)

{
  operator_delete(param_1,0x20);
  return;
}


// ===== 00203878  FUN_00203878 =====

void FUN_00203878(long param_1,undefined8 *param_2)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0021bdf0;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x27;
  uVar3 = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x500;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  return;
}


// ===== 00203918  FUN_00203918 =====

void FUN_00203918(long param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined2 uVar7;
  size_t sVar8;
  long lVar9;
  byte local_31;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 2) {
    pvVar3 = (void *)*param_2;
    lVar5 = param_2[1];
    if ((ulong)param_2[2] < lVar5 + 3U) {
      sVar8 = param_2[2] * 2;
      uVar6 = lVar5 + 0x3e3;
      if (sVar8 < uVar6 || sVar8 - uVar6 == 0) {
        sVar8 = uVar6;
      }
      param_2[2] = sVar8;
      pvVar3 = realloc(pvVar3,sVar8);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar5 = param_2[1];
    }
    *(undefined1 *)((undefined2 *)((long)pvVar3 + lVar5) + 1) = 0x54;
    *(undefined2 *)((long)pvVar3 + lVar5) = 0x5424;
    lVar5 = 3;
  }
  else {
    if (iVar2 == 1) {
      pvVar3 = (void *)*param_2;
      lVar5 = param_2[1];
      if ((ulong)param_2[2] < lVar5 + 2U) {
        sVar8 = param_2[2] * 2;
        uVar6 = lVar5 + 0x3e2;
        if (sVar8 < uVar6 || sVar8 - uVar6 == 0) {
          sVar8 = uVar6;
        }
        param_2[2] = sVar8;
        pvVar3 = realloc(pvVar3,sVar8);
        *param_2 = pvVar3;
        if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar5 = param_2[1];
      }
      uVar7 = 0x4e24;
    }
    else {
      if (iVar2 != 0) goto LAB_00203a78;
      pvVar3 = (void *)*param_2;
      lVar5 = param_2[1];
      if ((ulong)param_2[2] < lVar5 + 2U) {
        sVar8 = param_2[2] * 2;
        uVar6 = lVar5 + 0x3e2;
        if (sVar8 < uVar6 || sVar8 - uVar6 == 0) {
          sVar8 = uVar6;
        }
        param_2[2] = sVar8;
        pvVar3 = realloc(pvVar3,sVar8);
        *param_2 = pvVar3;
        if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar5 = param_2[1];
      }
      uVar7 = 0x5424;
    }
    *(undefined2 *)((long)pvVar3 + lVar5) = uVar7;
    lVar5 = 2;
  }
  param_2[1] = param_2[1] + lVar5;
LAB_00203a78:
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar6 = (ulong)(*(int *)(param_1 + 0x10) - 1);
    lVar5 = 0;
    do {
      lVar9 = lVar5;
      lVar5 = lVar9 + -1;
      (&local_31)[lVar9] = (char)uVar6 + (char)(uVar6 / 10) * -10 | 0x30;
      bVar1 = 9 < uVar6;
      uVar6 = uVar6 / 10;
    } while (bVar1);
    lVar4 = param_2[1];
    pvVar3 = (void *)*param_2;
    if ((ulong)param_2[2] < (ulong)(lVar4 - lVar5)) {
      sVar8 = param_2[2] * 2;
      uVar6 = (lVar4 - lVar5) + 0x3e0;
      if (sVar8 < uVar6 || sVar8 - uVar6 == 0) {
        sVar8 = uVar6;
      }
      param_2[2] = sVar8;
      pvVar3 = realloc(pvVar3,sVar8);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
    }
    memcpy((void *)((long)pvVar3 + lVar4),&local_31 + lVar9,-lVar5);
    param_2[1] = param_2[1] - lVar5;
  }
  return;
}


// ===== 00203b44  FUN_00203b44 =====

void FUN_00203b44(void *param_1)

{
  operator_delete(param_1,0x18);
  return;
}


// ===== 00203b50  FUN_00203b50 =====

void FUN_00203b50(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  void *__ptr;
  long lVar3;
  size_t __size;
  
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
  uVar2 = s_typename_00123e3c._0_8_;
  ((char *)((long)__ptr + lVar3))[8] = ' ';
  *(undefined8 *)((long)__ptr + lVar3) = uVar2;
  param_2[1] = param_2[1] + 9;
  return;
}


// ===== 00203bd8  FUN_00203bd8 =====

void FUN_00203bd8(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  if ((*(ushort *)((long)plVar1 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00203c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  return;
}


// ===== 00203c40  FUN_00203c40 =====

void FUN_00203c40(void *param_1)

{
  operator_delete(param_1,0x18);
  return;
}


// ===== 00203c4c  FUN_00203c4c =====

void FUN_00203c4c(long param_1,undefined8 *param_2)

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


// ===== 00203cf8  FUN_00203cf8 =====

void FUN_00203cf8(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  if ((*(ushort *)((long)plVar1 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00203d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  return;
}


// ===== 00203d60  FUN_00203d60 =====

void FUN_00203d60(void *param_1)

{
  operator_delete(param_1,0x20);
  return;
}


// ===== 00203d6c  FUN_00203d6c =====

void FUN_00203d6c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  void *__ptr;
  long lVar3;
  size_t __size;
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if ((*(byte *)((long)puVar1 + 9) & 0xc0) == 0x80) {
    uVar2 = (**(code **)*puVar1)(puVar1,param_2);
    if ((uVar2 & 1) != 0) {
      return;
    }
  }
  else if (*(byte *)((long)puVar1 + 9) < 0x40) {
    return;
  }
  lVar3 = param_2[1];
  __ptr = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 1U) {
    __size = param_2[2] * 2;
    uVar2 = lVar3 + 0x3e1;
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
    lVar3 = param_2[1];
  }
  *(undefined1 *)((long)__ptr + lVar3) = 0x20;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 00203e28  FUN_00203e28 =====

void FUN_00203e28(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  if ((*(ushort *)((long)plVar1 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00203e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),param_2);
  return;
}


// ===== 00203ea0  FUN_00203ea0 =====

void FUN_00203ea0(void *param_1)

{
  operator_delete(param_1,0x20);
  return;
}


// ===== 00203eac  FUN_00203eac =====

void FUN_00203eac(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  long lVar6;
  size_t sVar7;
  
  lVar6 = param_2[1];
  pvVar5 = (void *)*param_2;
  uVar3 = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  if ((ulong)param_2[2] < lVar6 + 9U) {
    sVar7 = param_2[2] * 2;
    uVar1 = lVar6 + 0x3e9;
    if (sVar7 < uVar1 || sVar7 - uVar1 == 0) {
      sVar7 = uVar1;
    }
    param_2[2] = sVar7;
    pvVar5 = realloc(pvVar5,sVar7);
    *param_2 = pvVar5;
    if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = param_2[1];
  }
  uVar4 = s_template<_0012d8a7._0_8_;
  ((char *)((long)pvVar5 + lVar6))[8] = '<';
  *(undefined8 *)((long)pvVar5 + lVar6) = uVar4;
  param_2[1] = param_2[1] + 9;
                    /* try { // try from 00203f30 to 00203f3b has its CatchHandler @ 00203fc0 */
  FUN_00200418(param_1 + 0x18,param_2);
  lVar6 = param_2[1];
  pvVar5 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar6 + 0xbU) {
    sVar7 = param_2[2] * 2;
    uVar1 = lVar6 + 0x3eb;
    if (sVar7 < uVar1 || sVar7 - uVar1 == 0) {
      sVar7 = uVar1;
    }
    param_2[2] = sVar7;
    pvVar5 = realloc(pvVar5,sVar7);
    *param_2 = pvVar5;
    if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = param_2[1];
  }
  pcVar2 = (char *)((long)pvVar5 + lVar6);
  *(undefined8 *)pcVar2 = s_>_typename_00128b65._0_8_;
  pcVar2[7] = 'a';
  pcVar2[8] = 'm';
  pcVar2[9] = 'e';
  pcVar2[10] = ' ';
  param_2[1] = param_2[1] + 0xb;
  *(undefined4 *)(param_2 + 4) = uVar3;
  return;
}


// ===== 00203fc8  FUN_00203fc8 =====

void FUN_00203fc8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  void *__ptr;
  long lVar4;
  size_t __size;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x20))(plVar5);
  if ((*(ushort *)((long)plVar5 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar4 = param_2[1];
    __ptr = (void *)*param_2;
    if ((ulong)param_2[2] < lVar4 + 10U) {
      __size = param_2[2] * 2;
      uVar1 = lVar4 + 0x3ea;
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
      lVar4 = param_2[1];
    }
    uVar3 = s_requires_0012dbfd._0_8_;
    pcVar2 = (char *)((long)__ptr + lVar4);
    pcVar2[8] = 's';
    pcVar2[9] = ' ';
    *(undefined8 *)pcVar2 = uVar3;
    plVar5 = *(long **)(param_1 + 0x28);
    lVar4 = *plVar5;
    param_2[1] = param_2[1] + 10;
    (**(code **)(lVar4 + 0x20))(plVar5,param_2);
    if ((*(ushort *)((long)plVar5 + 9) & 0xc0) != 0x40) {
                    /* WARNING: Could not recover jumptable at 0x002040e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
      return;
    }
  }
  return;
}


// ===== 002040e8  FUN_002040e8 =====

void FUN_002040e8(void *param_1)

{
  operator_delete(param_1,0x30);
  return;
}


// ===== 002040f4  FUN_002040f4 =====

void FUN_002040f4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *__ptr;
  long lVar2;
  size_t __size;
  
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  lVar2 = param_2[1];
  __ptr = (void *)*param_2;
  if ((ulong)param_2[2] < lVar2 + 3U) {
    __size = param_2[2] * 2;
    uVar1 = lVar2 + 0x3e3;
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
  *(undefined1 *)((undefined2 *)((long)__ptr + lVar2) + 1) = 0x2e;
  *(undefined2 *)((long)__ptr + lVar2) = 0x2e2e;
  param_2[1] = param_2[1] + 3;
  return;
}


// ===== 00204184  FUN_00204184 =====

void FUN_00204184(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00204194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))();
  return;
}


// ===== 00204198  FUN_00204198 =====

void FUN_00204198(void *param_1)

{
  operator_delete(param_1,0x18);
  return;
}


// ===== 002041a4  FUN_002041a4 =====

void FUN_002041a4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  size_t __size;
  long lVar3;
  size_t sVar4;
  void *__src;
  
  lVar3 = param_2[1];
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 7U) {
    sVar4 = param_2[2] * 2;
    uVar1 = lVar3 + 999;
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
  *(undefined4 *)((long)pvVar2 + lVar3 + 3) = 0x6164626d;
  *(undefined4 *)((long)pvVar2 + lVar3) = 0x6d616c27;
  lVar3 = param_2[1] + 7;
  param_2[1] = lVar3;
  sVar4 = *(size_t *)(param_1 + 0x48);
  if (sVar4 != 0) {
    __src = *(void **)(param_1 + 0x40);
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
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x27;
  param_2[1] = param_2[1] + 1;
  FUN_00204308(param_1,param_2);
  return;
}


// ===== 002042fc  FUN_002042fc =====

void FUN_002042fc(void *param_1)

{
  operator_delete(param_1,0x50);
  return;
}


// ===== 00204308  FUN_00204308 =====

void FUN_00204308(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  long lVar5;
  size_t sVar6;
  ulong uVar7;
  long *plVar8;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar5 = param_2[1];
    pvVar4 = (void *)*param_2;
    uVar2 = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_2 + 4) = 0;
    if ((ulong)param_2[2] < lVar5 + 1U) {
      sVar6 = param_2[2] * 2;
      uVar7 = lVar5 + 0x3e1;
      if (sVar6 < uVar7 || sVar6 - uVar7 == 0) {
        sVar6 = uVar7;
      }
      param_2[2] = sVar6;
      pvVar4 = realloc(pvVar4,sVar6);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar5 = param_2[1];
    }
    *(undefined1 *)((long)pvVar4 + lVar5) = 0x3c;
    param_2[1] = param_2[1] + 1;
                    /* try { // try from 00204380 to 0020438b has its CatchHandler @ 00204660 */
    FUN_00200418(param_1 + 0x10,param_2);
    lVar5 = param_2[1];
    pvVar4 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar5 + 1U) {
      sVar6 = param_2[2] * 2;
      uVar7 = lVar5 + 0x3e1;
      if (sVar6 < uVar7 || sVar6 - uVar7 == 0) {
        sVar6 = uVar7;
      }
      param_2[2] = sVar6;
      pvVar4 = realloc(pvVar4,sVar6);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar5 = param_2[1];
    }
    *(undefined1 *)((long)pvVar4 + lVar5) = 0x3e;
    *(undefined4 *)(param_2 + 4) = uVar2;
    param_2[1] = param_2[1] + 1;
  }
  lVar5 = param_2[1];
  if (*(long *)(param_1 + 0x20) != 0) {
    pvVar4 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar5 + 10U) {
      sVar6 = param_2[2] * 2;
      uVar7 = lVar5 + 0x3ea;
      if (sVar6 < uVar7 || sVar6 - uVar7 == 0) {
        sVar6 = uVar7;
      }
      param_2[2] = sVar6;
      pvVar4 = realloc(pvVar4,sVar6);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar5 = param_2[1];
    }
    uVar3 = s_requires_0012dbfd._0_8_;
    pcVar1 = (char *)((long)pvVar4 + lVar5);
    pcVar1[8] = 's';
    pcVar1[9] = ' ';
    *(undefined8 *)pcVar1 = uVar3;
    plVar8 = *(long **)(param_1 + 0x20);
    lVar5 = *plVar8;
    param_2[1] = param_2[1] + 10;
    (**(code **)(lVar5 + 0x20))(plVar8,param_2);
    if ((*(ushort *)((long)plVar8 + 9) & 0xc0) != 0x40) {
      (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
    }
    lVar5 = param_2[1];
    pvVar4 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar5 + 1U) {
      sVar6 = param_2[2] * 2;
      uVar7 = lVar5 + 0x3e1;
      if (sVar6 < uVar7 || sVar6 - uVar7 == 0) {
        sVar6 = uVar7;
      }
      param_2[2] = sVar6;
      pvVar4 = realloc(pvVar4,sVar6);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar5 = param_2[1];
    }
    *(undefined1 *)((long)pvVar4 + lVar5) = 0x20;
    lVar5 = param_2[1] + 1;
    param_2[1] = lVar5;
  }
  uVar7 = lVar5 + 1;
  pvVar4 = (void *)*param_2;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  if ((ulong)param_2[2] < uVar7) {
    sVar6 = param_2[2] * 2;
    uVar7 = lVar5 + 0x3e1;
    if (sVar6 < uVar7 || sVar6 - uVar7 == 0) {
      sVar6 = uVar7;
    }
    param_2[2] = sVar6;
    pvVar4 = realloc(pvVar4,sVar6);
    *param_2 = pvVar4;
    if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = param_2[1];
    uVar7 = lVar5 + 1;
  }
  param_2[1] = uVar7;
  *(undefined1 *)((long)pvVar4 + lVar5) = 0x28;
  FUN_00200418(param_1 + 0x28,param_2);
  lVar5 = param_2[1];
  pvVar4 = (void *)*param_2;
  uVar7 = lVar5 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar7) {
    sVar6 = param_2[2] * 2;
    uVar7 = lVar5 + 0x3e1;
    if (sVar6 < uVar7 || sVar6 - uVar7 == 0) {
      sVar6 = uVar7;
    }
    param_2[2] = sVar6;
    pvVar4 = realloc(pvVar4,sVar6);
    *param_2 = pvVar4;
    if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = param_2[1];
    uVar7 = lVar5 + 1;
  }
  param_2[1] = uVar7;
  *(undefined1 *)((long)pvVar4 + lVar5) = 0x29;
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar5 = param_2[1];
    pvVar4 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar5 + 10U) {
      sVar6 = param_2[2] * 2;
      uVar7 = lVar5 + 0x3ea;
      if (sVar6 < uVar7 || sVar6 - uVar7 == 0) {
        sVar6 = uVar7;
      }
      param_2[2] = sVar6;
      pvVar4 = realloc(pvVar4,sVar6);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar5 = param_2[1];
    }
    uVar3 = s_requires_0012dbfd._0_8_;
    pcVar1 = (char *)((long)pvVar4 + lVar5);
    pcVar1[8] = 's';
    pcVar1[9] = ' ';
    *(undefined8 *)pcVar1 = uVar3;
    plVar8 = *(long **)(param_1 + 0x38);
    lVar5 = *plVar8;
    param_2[1] = param_2[1] + 10;
    (**(code **)(lVar5 + 0x20))(plVar8,param_2);
    if ((*(ushort *)((long)plVar8 + 9) & 0xc0) != 0x40) {
                    /* WARNING: Could not recover jumptable at 0x00204640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
      return;
    }
  }
  return;
}


// ===== 00204668  FUN_00204668 =====

void FUN_00204668(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  size_t sVar6;
  
  lVar5 = param_2[1];
  pvVar4 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar5 + 2U) {
    sVar6 = param_2[2] * 2;
    uVar1 = lVar5 + 0x3e2;
    if (sVar6 < uVar1 || sVar6 - uVar1 == 0) {
      sVar6 = uVar1;
    }
    param_2[2] = sVar6;
    pvVar4 = realloc(pvVar4,sVar6);
    *param_2 = pvVar4;
    if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = param_2[1];
  }
  *(undefined2 *)((long)pvVar4 + lVar5) = 0x5d5b;
  lVar3 = *(long *)(param_1 + 0x10);
  cVar2 = *(char *)(lVar3 + 8);
  lVar5 = param_2[1] + 2;
  param_2[1] = lVar5;
  if (cVar2 == '4') {
    FUN_00204308(lVar3,param_2);
    lVar5 = param_2[1];
  }
  pvVar4 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar5 + 5U) {
    sVar6 = param_2[2] * 2;
    uVar1 = lVar5 + 0x3e5;
    if (sVar6 < uVar1 || sVar6 - uVar1 == 0) {
      sVar6 = uVar1;
    }
    param_2[2] = sVar6;
    pvVar4 = realloc(pvVar4,sVar6);
    *param_2 = pvVar4;
    if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = param_2[1];
  }
  *(undefined1 *)((undefined4 *)((long)pvVar4 + lVar5) + 1) = 0x7d;
  *(undefined4 *)((long)pvVar4 + lVar5) = 0x2e2e2e7b;
  param_2[1] = param_2[1] + 5;
  return;
}


// ===== 00204764  FUN_00204764 =====

void FUN_00204764(void *param_1)

{
  operator_delete(param_1,0x18);
  return;
}


// ===== 00204770  FUN_00204770 =====

void FUN_00204770(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  size_t sVar3;
  size_t sVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  char *__src;
  
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar5 = lVar2 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  if ((ulong)param_2[2] < uVar5) {
    sVar4 = param_2[2] * 2;
    uVar5 = lVar2 + 0x3e1;
    if (sVar4 < uVar5 || sVar4 - uVar5 == 0) {
      sVar4 = uVar5;
    }
    param_2[2] = sVar4;
    pvVar1 = realloc(pvVar1,sVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
    uVar5 = lVar2 + 1;
  }
  param_2[1] = uVar5;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x28;
  plVar7 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
  if ((*(ushort *)((long)plVar7 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
  }
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar5 = lVar2 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar5) {
    sVar4 = param_2[2] * 2;
    uVar5 = lVar2 + 0x3e1;
    if (sVar4 < uVar5 || sVar4 - uVar5 == 0) {
      sVar4 = uVar5;
    }
    param_2[2] = sVar4;
    pvVar1 = realloc(pvVar1,sVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
    uVar5 = lVar2 + 1;
  }
  param_2[1] = uVar5;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x29;
  __src = *(char **)(param_1 + 0x18);
  if (*__src == 'n') {
    lVar2 = param_2[1];
    pvVar1 = (void *)*param_2;
    uVar5 = lVar2 + 1;
    if ((ulong)param_2[2] < uVar5) {
      sVar4 = param_2[2] * 2;
      uVar5 = lVar2 + 0x3e1;
      if (sVar4 < uVar5 || sVar4 - uVar5 == 0) {
        sVar4 = uVar5;
      }
      param_2[2] = sVar4;
      pvVar1 = realloc(pvVar1,sVar4);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = param_2[1];
      uVar5 = lVar2 + 1;
    }
    param_2[1] = uVar5;
    *(undefined1 *)((long)pvVar1 + lVar2) = 0x2d;
    sVar4 = *(long *)(param_1 + 0x20) - 1;
    if (sVar4 == 0) {
      return;
    }
    lVar2 = param_2[1];
    pvVar1 = (void *)*param_2;
    lVar6 = *(long *)(param_1 + 0x18);
    if ((ulong)param_2[2] < lVar2 + sVar4) {
      sVar3 = param_2[2] * 2;
      uVar5 = lVar2 + sVar4 + 0x3e0;
      if (sVar3 < uVar5 || sVar3 - uVar5 == 0) {
        sVar3 = uVar5;
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
    __src = (char *)(lVar6 + 1);
  }
  else {
    sVar4 = *(size_t *)(param_1 + 0x20);
    if (sVar4 == 0) {
      return;
    }
    lVar2 = param_2[1];
    pvVar1 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar2 + sVar4) {
      sVar3 = param_2[2] * 2;
      uVar5 = lVar2 + sVar4 + 0x3e0;
      if (sVar3 < uVar5 || sVar3 - uVar5 == 0) {
        sVar3 = uVar5;
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
  memcpy(pvVar1,__src,sVar4);
  param_2[1] = param_2[1] + sVar4;
  return;
}


// ===== 002049a0  FUN_002049a0 =====

void FUN_002049a0(void *param_1)

{
  operator_delete(param_1,0x28);
  return;
}


// ===== 002049ac  FUN_002049ac =====

void FUN_002049ac(long param_1,undefined8 *param_2)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0021bfb0;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x43;
  uVar5 = param_2[1];
  uVar4 = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar5;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar4;
  return;
}


// ===== 00204a4c  FUN_00204a4c =====

void FUN_00204a4c(long param_1,undefined8 *param_2)

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


// ===== 00204b38  FUN_00204b38 =====

void FUN_00204b38(void *param_1)

{
  operator_delete(param_1,0x20);
  return;
}


// ===== 00204b44  FUN_00204b44 =====

void FUN_00204b44(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  size_t sVar3;
  size_t sVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  void *pvVar8;
  undefined **local_48;
  undefined1 local_40;
  undefined2 local_3f;
  undefined8 local_38;
  
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar6 = lVar2 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  if ((ulong)param_2[2] < uVar6) {
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
    uVar6 = lVar2 + 1;
  }
  param_2[1] = uVar6;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x28;
  plVar7 = *(long **)(param_1 + 0x18);
  if ((*(char *)(param_1 + 0x30) == '\x01') && (plVar7 == (long *)0x0)) {
    lVar2 = param_2[1];
  }
  else {
    if (*(char *)(param_1 + 0x30) == '\0') {
      lVar2 = param_2[1];
      pvVar1 = (void *)*param_2;
      uVar6 = lVar2 + 1;
      *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
      if ((ulong)param_2[2] < uVar6) {
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
        uVar6 = lVar2 + 1;
      }
      param_2[1] = uVar6;
      *(undefined1 *)((long)pvVar1 + lVar2) = 0x28;
      local_40 = 0x2a;
      local_38 = *(undefined8 *)(param_1 + 0x10);
      local_3f = 0x540;
      local_48 = &PTR_FUN_0021c090;
      FUN_002052d4(&local_48,param_2);
      lVar2 = param_2[1];
      pvVar1 = (void *)*param_2;
      uVar6 = lVar2 + 1;
      *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
      if ((ulong)param_2[2] < uVar6) {
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
LAB_00204d78:
        lVar2 = param_2[1];
        uVar6 = lVar2 + 1;
      }
LAB_00204d80:
      param_2[1] = uVar6;
      *(undefined1 *)((long)pvVar1 + lVar2) = 0x29;
    }
    else {
      if ((*(ushort *)((long)plVar7 + 9) & 0x3c) != 0) {
        lVar2 = param_2[1];
        pvVar1 = (void *)*param_2;
        uVar6 = lVar2 + 1;
        *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
        if ((ulong)param_2[2] < uVar6) {
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
          uVar6 = lVar2 + 1;
        }
        param_2[1] = uVar6;
        *(undefined1 *)((long)pvVar1 + lVar2) = 0x28;
        (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
        if ((*(ushort *)((long)plVar7 + 9) & 0xc0) != 0x40) {
          (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
        }
        lVar2 = param_2[1];
        pvVar1 = (void *)*param_2;
        uVar6 = lVar2 + 1;
        *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
        if ((ulong)param_2[2] < uVar6) {
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
          goto LAB_00204d78;
        }
        goto LAB_00204d80;
      }
      (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
      if ((*(ushort *)((long)plVar7 + 9) & 0xc0) != 0x40) {
        (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
      }
    }
    lVar2 = param_2[1];
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
    *(undefined1 *)((long)pvVar1 + lVar2) = 0x20;
    lVar2 = param_2[1] + 1;
    param_2[1] = lVar2;
    sVar4 = *(size_t *)(param_1 + 0x28);
    if (sVar4 != 0) {
      pvVar8 = *(void **)(param_1 + 0x20);
      pvVar1 = (void *)*param_2;
      if ((ulong)param_2[2] < lVar2 + sVar4) {
        sVar3 = param_2[2] * 2;
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
      memcpy((void *)((long)pvVar1 + lVar2),pvVar8,sVar4);
      lVar2 = param_2[1] + sVar4;
      param_2[1] = lVar2;
    }
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
    *(undefined1 *)((long)pvVar1 + lVar2) = 0x20;
    lVar2 = param_2[1] + 1;
    param_2[1] = lVar2;
  }
  pvVar1 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar2 + 3U) {
    sVar4 = param_2[2] * 2;
    uVar6 = lVar2 + 0x3e3;
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
  *(undefined1 *)((undefined2 *)((long)pvVar1 + lVar2) + 1) = 0x2e;
  *(undefined2 *)((long)pvVar1 + lVar2) = 0x2e2e;
  lVar5 = param_2[1];
  lVar2 = lVar5 + 3;
  param_2[1] = lVar2;
  if (((*(byte *)(param_1 + 0x30) & 1) == 0) && (*(long *)(param_1 + 0x18) == 0)) goto LAB_002051a8;
  pvVar1 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar5 + 4U) {
    sVar4 = param_2[2] * 2;
    uVar6 = lVar5 + 0x3e4;
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
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x20;
  lVar2 = param_2[1] + 1;
  param_2[1] = lVar2;
  sVar4 = *(size_t *)(param_1 + 0x28);
  if (sVar4 != 0) {
    pvVar8 = *(void **)(param_1 + 0x20);
    pvVar1 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar2 + sVar4) {
      sVar3 = param_2[2] * 2;
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
    memcpy((void *)((long)pvVar1 + lVar2),pvVar8,sVar4);
    lVar2 = param_2[1] + sVar4;
    param_2[1] = lVar2;
  }
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
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x20;
  lVar5 = param_2[1];
  lVar2 = lVar5 + 1;
  param_2[1] = lVar2;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar6 = lVar5 + 2;
    pvVar1 = (void *)*param_2;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    if ((ulong)param_2[2] < uVar6) {
      sVar4 = param_2[2] * 2;
      uVar6 = lVar5 + 0x3e2;
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
      uVar6 = lVar2 + 1;
    }
    param_2[1] = uVar6;
    *(undefined1 *)((long)pvVar1 + lVar2) = 0x28;
    local_40 = 0x2a;
    local_38 = *(undefined8 *)(param_1 + 0x10);
    local_3f = 0x540;
    local_48 = &PTR_FUN_0021c090;
    FUN_002052d4(&local_48,param_2);
    lVar2 = param_2[1];
    pvVar1 = (void *)*param_2;
    uVar6 = lVar2 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
    if ((ulong)param_2[2] < uVar6) {
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
LAB_00205194:
      lVar2 = param_2[1];
      uVar6 = lVar2 + 1;
    }
  }
  else {
    plVar7 = *(long **)(param_1 + 0x18);
    if ((*(ushort *)((long)plVar7 + 9) & 0x3c) == 0) {
      (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
      if ((*(ushort *)((long)plVar7 + 9) & 0xc0) != 0x40) {
        (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
      }
      goto LAB_002051a8;
    }
    uVar6 = lVar5 + 2;
    pvVar1 = (void *)*param_2;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    if ((ulong)param_2[2] < uVar6) {
      sVar4 = param_2[2] * 2;
      uVar6 = lVar5 + 0x3e2;
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
      uVar6 = lVar2 + 1;
    }
    param_2[1] = uVar6;
    *(undefined1 *)((long)pvVar1 + lVar2) = 0x28;
    (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
    if ((*(ushort *)((long)plVar7 + 9) & 0xc0) != 0x40) {
      (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
    }
    lVar2 = param_2[1];
    pvVar1 = (void *)*param_2;
    uVar6 = lVar2 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
    if ((ulong)param_2[2] < uVar6) {
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
      goto LAB_00205194;
    }
  }
  param_2[1] = uVar6;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x29;
LAB_002051a8:
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar6 = lVar2 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar6) {
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
    uVar6 = lVar2 + 1;
  }
  param_2[1] = uVar6;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x29;
  return;
}


// ===== 002052c8  FUN_002052c8 =====

void FUN_002052c8(void *param_1)

{
  operator_delete(param_1,0x38);
  return;
}


// ===== 002052d4  FUN_002052d4 =====

void FUN_002052d4(long param_1,undefined8 *param_2)

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
                    /* try { // try from 00205314 to 0020533f has its CatchHandler @ 0020547c */
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
            abort();
          }
          lVar10 = param_2[1];
        }
        *(undefined2 *)((long)pvVar5 + lVar10) = 0x202c;
        plVar8 = *(long **)(param_1 + 0x10);
        *(uint *)(param_2 + 3) = uVar9;
        lVar10 = *plVar8;
        param_2[1] = param_2[1] + 2;
                    /* try { // try from 002053c8 to 002053f7 has its CatchHandler @ 00205484 */
        (**(code **)(lVar10 + 0x20))(plVar8,param_2);
        if ((*(ushort *)((long)plVar8 + 9) & 0xc0) != 0x40) {
          (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
        }
        uVar9 = uVar9 + 1;
      } while (uVar4 != uVar9);
    }
    goto LAB_00205454;
  }
  param_2[1] = lVar10;
LAB_00205454:
  *(undefined4 *)(param_2 + 3) = uVar2;
  *(undefined4 *)((long)param_2 + 0x1c) = uVar3;
  return;
}


// ===== 0020548c  FUN_0020548c =====

void FUN_0020548c(void *param_1)

{
  operator_delete(param_1,0x18);
  return;
}


// ===== 00205498  FUN_00205498 =====

void FUN_00205498(long param_1,undefined8 *param_2)

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
  if (*(char *)(param_1 + 0x20) == '\x01') {
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
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x2e;
    plVar6 = *(long **)(param_1 + 0x10);
    (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
    if ((*(ushort *)((long)plVar6 + 9) & 0xc0) != 0x40) {
      (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
    }
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
                    /* WARNING: Could not recover jumptable at 0x002056d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
  return;
}


// ===== 002056e4  FUN_002056e4 =====

void FUN_002056e4(void *param_1)

{
  operator_delete(param_1,0x28);
  return;
}


// ===== 002056f0  FUN_002056f0 =====

void FUN_002056f0(long param_1,undefined8 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00205940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  return;
}


// ===== 00205954  FUN_00205954 =====

void FUN_00205954(void *param_1)

{
  operator_delete(param_1,0x28);
  return;
}


// ===== 00205960  FUN_00205960 =====

void FUN_00205960(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  size_t sVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
  if ((plVar5 != (long *)0x0) &&
     ((**(code **)(*plVar5 + 0x20))(plVar5,param_2), (*(ushort *)((long)plVar5 + 9) & 0xc0) != 0x40)
     ) {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar4 = lVar2 + 1;
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
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x7b;
  FUN_00200418(param_1 + 0x18,param_2);
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar4 = lVar2 + 1;
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
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x7d;
  return;
}


// ===== 00205a74  FUN_00205a74 =====

void FUN_00205a74(void *param_1)

{
  operator_delete(param_1,0x28);
  return;
}


// ===== 00205a80  FUN_00205a80 =====

void FUN_00205a80(long param_1,undefined8 *param_2)

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


// ===== 00205c88  FUN_00205c88 =====

void FUN_00205c88(void *param_1)

{
  operator_delete(param_1,0x30);
  return;
}


// ===== 00205c94  FUN_00205c94 =====

void FUN_00205c94(long param_1,undefined8 *param_2)

{
  byte bVar1;
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
  bVar1 = *(byte *)(param_1 + 0x18);
  lVar4 = lVar5 + 1;
  param_2[1] = lVar4;
  if (((bVar1 & 1) != 0) || (*(long *)(param_1 + 0x20) != 0)) {
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
  bVar1 = *(byte *)(param_1 + 0x18);
  if (((bVar1 & 1) != 0) || (*(long *)(param_1 + 0x20) != 0)) {
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
    bVar1 = *(byte *)(param_1 + 0x18) & 1;
  }
  if (bVar1 == 0) {
    lVar4 = *(long *)(param_1 + 0x20);
  }
  else {
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
    uVar2 = s_noexcept_00128fb6._0_8_;
    ((char *)((long)pvVar3 + lVar4))[8] = 't';
    *(undefined8 *)((long)pvVar3 + lVar4) = uVar2;
    param_2[1] = param_2[1] + 9;
    lVar4 = *(long *)(param_1 + 0x20);
  }
  if (lVar4 != 0) {
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


// ===== 00205f88  FUN_00205f88 =====

void FUN_00205f88(void *param_1)

{
  operator_delete(param_1,0x28);
  return;
}


// ===== 00205f94  FUN_00205f94 =====

void FUN_00205f94(long param_1,undefined8 *param_2)

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
  uVar2 = s_typename_0012c982._0_8_;
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


// ===== 002060b0  FUN_002060b0 =====

void FUN_002060b0(void *param_1)

{
  operator_delete(param_1,0x18);
  return;
}


// ===== 002060bc  FUN_002060bc =====

void FUN_002060bc(long param_1,undefined8 *param_2)

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
  uVar2 = s_requires_0012dbfd._0_8_;
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


// ===== 002061d8  FUN_002061d8 =====

void FUN_002061d8(void *param_1)

{
  operator_delete(param_1,0x18);
  return;
}


// ===== 002061e4  FUN_002061e4 =====

void FUN_002061e4(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  size_t sVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar2 + 8U) {
    sVar5 = param_2[2] * 2;
    uVar4 = lVar2 + 1000;
    if (sVar5 < uVar4 || sVar5 - uVar4 == 0) {
      sVar5 = uVar4;
    }
    param_2[2] = sVar5;
    pvVar1 = realloc(pvVar1,sVar5);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
  }
  *(undefined8 *)((long)pvVar1 + lVar2) = 0x7365726975716572;
  lVar3 = param_2[1];
  lVar6 = *(long *)(param_1 + 0x18);
  lVar2 = lVar3 + 8;
  param_2[1] = lVar2;
  if (lVar6 != 0) {
    uVar4 = lVar3 + 9;
    pvVar1 = (void *)*param_2;
    if ((ulong)param_2[2] < uVar4) {
      sVar5 = param_2[2] * 2;
      uVar4 = lVar3 + 0x3e9;
      if (sVar5 < uVar4 || sVar5 - uVar4 == 0) {
        sVar5 = uVar4;
      }
      param_2[2] = sVar5;
      pvVar1 = realloc(pvVar1,sVar5);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = param_2[1];
      uVar4 = lVar2 + 1;
    }
    param_2[1] = uVar4;
    *(undefined1 *)((long)pvVar1 + lVar2) = 0x20;
    lVar2 = param_2[1];
    pvVar1 = (void *)*param_2;
    uVar4 = lVar2 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    if ((ulong)param_2[2] < uVar4) {
      sVar5 = param_2[2] * 2;
      uVar4 = lVar2 + 0x3e1;
      if (sVar5 < uVar4 || sVar5 - uVar4 == 0) {
        sVar5 = uVar4;
      }
      param_2[2] = sVar5;
      pvVar1 = realloc(pvVar1,sVar5);
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
    FUN_00200418(param_1 + 0x10,param_2);
    lVar2 = param_2[1];
    pvVar1 = (void *)*param_2;
    uVar4 = lVar2 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
    if ((ulong)param_2[2] < uVar4) {
      sVar5 = param_2[2] * 2;
      uVar4 = lVar2 + 0x3e1;
      if (sVar5 < uVar4 || sVar5 - uVar4 == 0) {
        sVar5 = uVar4;
      }
      param_2[2] = sVar5;
      pvVar1 = realloc(pvVar1,sVar5);
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
  }
  uVar4 = lVar2 + 1;
  pvVar1 = (void *)*param_2;
  if ((ulong)param_2[2] < uVar4) {
    sVar5 = param_2[2] * 2;
    uVar4 = lVar2 + 0x3e1;
    if (sVar5 < uVar4 || sVar5 - uVar4 == 0) {
      sVar5 = uVar4;
    }
    param_2[2] = sVar5;
    pvVar1 = realloc(pvVar1,sVar5);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
    uVar4 = lVar2 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x20;
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar4 = lVar2 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  if ((ulong)param_2[2] < uVar4) {
    sVar5 = param_2[2] * 2;
    uVar4 = lVar2 + 0x3e1;
    if (sVar5 < uVar4 || sVar5 - uVar4 == 0) {
      sVar5 = uVar4;
    }
    param_2[2] = sVar5;
    pvVar1 = realloc(pvVar1,sVar5);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
    uVar4 = lVar2 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x7b;
  if (*(long *)(param_1 + 0x28) != 0) {
    puVar8 = *(undefined8 **)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x28) << 3;
    do {
      plVar7 = (long *)*puVar8;
      (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
      if ((*(ushort *)((long)plVar7 + 9) & 0xc0) != 0x40) {
        (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
      }
      lVar2 = lVar2 + -8;
      puVar8 = puVar8 + 1;
    } while (lVar2 != 0);
  }
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar4 = lVar2 + 1;
  if ((ulong)param_2[2] < uVar4) {
    sVar5 = param_2[2] * 2;
    uVar4 = lVar2 + 0x3e1;
    if (sVar5 < uVar4 || sVar5 - uVar4 == 0) {
      sVar5 = uVar4;
    }
    param_2[2] = sVar5;
    pvVar1 = realloc(pvVar1,sVar5);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
    uVar4 = lVar2 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x20;
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar4 = lVar2 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar4) {
    sVar5 = param_2[2] * 2;
    uVar4 = lVar2 + 0x3e1;
    if (sVar5 < uVar4 || sVar5 - uVar4 == 0) {
      sVar5 = uVar4;
    }
    param_2[2] = sVar5;
    pvVar1 = realloc(pvVar1,sVar5);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
    uVar4 = lVar2 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x7d;
  return;
}


// ===== 00206534  FUN_00206534 =====

void FUN_00206534(void *param_1)

{
  operator_delete(param_1,0x30);
  return;
}


// ===== 00206540  FUN_00206540 =====

void FUN_00206540(long param_1,undefined8 *param_2)

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
  *(undefined8 *)pcVar9 = s_at_offset_0012b22a._0_8_;
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
      if (sVar4 == 0) goto LAB_002067cc;
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
LAB_002067cc:
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


// ===== 00206848  FUN_00206848 =====

void FUN_00206848(void *param_1)

{
  operator_delete(param_1,0x48);
  return;
}


// ===== 00206854  FUN_00206854 =====

void FUN_00206854(long param_1,undefined8 *param_2)

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
  uVar2 = s_sizeof____00127288._0_8_;
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
  local_38 = &PTR_FUN_0021c090;
  FUN_002052d4(&local_38,param_2);
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


// ===== 002069cc  FUN_002069cc =====

void FUN_002069cc(void *param_1)

{
  operator_delete(param_1,0x18);
  return;
}


// ===== 002069d8  FUN_002069d8 =====

void FUN_002069d8(long param_1)

{
  FUN_00200418(param_1 + 0x10);
  return;
}


// ===== 002069e4  FUN_002069e4 =====

void FUN_002069e4(void *param_1)

{
  operator_delete(param_1,0x20);
  return;
}


// ===== 002069f0  FUN_002069f0 =====

void FUN_002069f0(long param_1,undefined8 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00206ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  return;
}


// ===== 00206ac8  FUN_00206ac8 =====

void FUN_00206ac8(void *param_1)

{
  operator_delete(param_1,0x18);
  return;
}


// ===== 00206ad4  FUN_00206ad4 =====

void FUN_00206ad4(long *param_1)

{
  char cVar1;
  long lVar2;
  void *__dest;
  size_t __n;
  long *__ptr;
  long *plVar3;
  
  if ((char *)param_1[1] == (char *)*param_1) {
LAB_00206b5c:
    FUN_001fa33c();
    return;
  }
  cVar1 = *(char *)*param_1;
  if (cVar1 == 'D') {
    lVar2 = FUN_001fa20c();
    if (lVar2 == 0) {
      return;
    }
    plVar3 = (long *)param_1[0x26];
    if (plVar3 != (long *)param_1[0x27]) goto LAB_00206c08;
    __ptr = (long *)param_1[0x25];
    __n = (long)plVar3 - (long)__ptr;
    if (__ptr == param_1 + 0x28) {
      __dest = malloc(__n * 2);
      if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (plVar3 != __ptr) {
LAB_00206bd8:
        memmove(__dest,__ptr,__n);
      }
LAB_00206bec:
      param_1[0x25] = (long)__dest;
    }
    else {
      __dest = realloc(__ptr,__n * 2);
      param_1[0x25] = (long)__dest;
      if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
  }
  else {
    if (cVar1 != 'T') goto LAB_00206b5c;
    lVar2 = FUN_001f9e40();
    if (lVar2 == 0) {
      return;
    }
    plVar3 = (long *)param_1[0x26];
    if (plVar3 != (long *)param_1[0x27]) goto LAB_00206c08;
    __ptr = (long *)param_1[0x25];
    __n = (long)plVar3 - (long)__ptr;
    if (__ptr == param_1 + 0x28) {
      __dest = malloc(__n * 2);
      if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (plVar3 != param_1 + 0x28) goto LAB_00206bd8;
      goto LAB_00206bec;
    }
    __dest = realloc(__ptr,__n * 2);
    param_1[0x25] = (long)__dest;
    if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  plVar3 = (long *)((long)__dest + __n);
  param_1[0x27] = (long)((long)__dest + ((long)__n >> 2) * 8);
LAB_00206c08:
  param_1[0x26] = (long)(plVar3 + 1);
  *plVar3 = lVar2;
  return;
}


// ===== 00206c4c  FUN_00206c4c =====

undefined8 * FUN_00206c4c(long *param_1)

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
  if ((pbVar2 == pbVar1) || (*pbVar1 - 0x3a < 0xfffffff6)) {
    if (1 < (ulong)((long)pbVar2 - (long)pbVar1)) {
      if (*(short *)pbVar1 == 0x6e64) {
        pbVar1 = pbVar1 + 2;
        *param_1 = (long)pbVar1;
        if ((pbVar2 == pbVar1) || (*pbVar1 - 0x3a < 0xfffffff6)) {
          puVar3 = (undefined8 *)FUN_00206ad4(param_1);
          if (puVar3 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
        }
        else {
          puVar4 = (undefined8 *)FUN_001f9290(param_1);
          if (puVar4 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          puVar3 = puVar4;
          if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
            lVar6 = FUN_001f98bc(param_1,0);
            if (lVar6 == 0) {
              return (undefined8 *)0x0;
            }
            pvVar9 = (void *)param_1[0x266];
            lVar8 = *(long *)((long)pvVar9 + 8);
            puVar5 = (undefined8 *)pvVar9;
            if (lVar8 - 0xfd0U < 0xfffffffffffff010) {
              puVar5 = (undefined8 *)malloc(0x1000);
              if (puVar5 == (undefined8 *)0x0) goto LAB_00206ed8;
              lVar8 = 0;
              *puVar5 = pvVar9;
              puVar5[1] = 0;
              param_1[0x266] = (long)puVar5;
            }
            *(long *)((long)puVar5 + 8) = lVar8 + 0x20;
            puVar3 = (undefined8 *)((long)puVar5 + lVar8 + 0x10);
            *puVar3 = &PTR_FUN_0021cd40;
            *(undefined8 **)((long)puVar5 + lVar8 + 0x20) = puVar4;
            *(long *)((long)puVar5 + lVar8 + 0x28) = lVar6;
            *(undefined1 *)((long)puVar5 + lVar8 + 0x18) = 0x2d;
            *(ushort *)((long)puVar5 + lVar8 + 0x19) =
                 *(ushort *)((long)puVar5 + lVar8 + 0x19) & 0xf000 | 0x540;
          }
        }
        pvVar9 = (void *)param_1[0x266];
        lVar6 = *(long *)((long)pvVar9 + 8);
        puVar4 = (undefined8 *)pvVar9;
        if (0xfffffffffffff00f < lVar6 - 0xfd0U) {
LAB_00206ddc:
          *(long *)((long)puVar4 + 8) = lVar6 + 0x20;
          puVar5 = (undefined8 *)((long)puVar4 + lVar6 + 0x10);
          *puVar5 = &PTR_FUN_0021c6b0;
          *(undefined8 **)((long)puVar4 + lVar6 + 0x20) = puVar3;
          *(undefined1 *)((long)puVar4 + lVar6 + 0x18) = 0x32;
          *(ushort *)((long)puVar4 + lVar6 + 0x19) =
               *(ushort *)((long)puVar4 + lVar6 + 0x19) & 0xf000 | 0x540;
          return puVar5;
        }
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 != (undefined8 *)0x0) {
          lVar6 = 0;
          *puVar4 = pvVar9;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
          goto LAB_00206ddc;
        }
        goto LAB_00206ed8;
      }
      if (*(short *)pbVar1 == 0x6e6f) {
        *param_1 = (long)(pbVar1 + 2);
      }
    }
    puVar3 = (undefined8 *)FUN_00207000(param_1,0);
  }
  else {
    puVar3 = (undefined8 *)FUN_001f9290(param_1);
  }
  puVar4 = puVar3;
  if ((((puVar3 != (undefined8 *)0x0) && ((char *)param_1[1] != (char *)*param_1)) &&
      (*(char *)*param_1 == 'I')) &&
     (puVar4 = (undefined8 *)FUN_001f98bc(param_1,0), puVar4 != (undefined8 *)0x0)) {
    pvVar9 = (void *)param_1[0x266];
    lVar6 = *(long *)((long)pvVar9 + 8);
    puVar5 = (undefined8 *)pvVar9;
    if (lVar6 - 0xfd0U < 0xfffffffffffff010) {
      puVar5 = (undefined8 *)malloc(0x1000);
      if (puVar5 == (undefined8 *)0x0) {
LAB_00206ed8:
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
    *puVar7 = &PTR_FUN_0021cd40;
    *(undefined8 **)((long)puVar5 + lVar6 + 0x20) = puVar3;
    *(undefined8 **)((long)puVar5 + lVar6 + 0x28) = puVar4;
    *(undefined1 *)((long)puVar5 + lVar6 + 0x18) = 0x2d;
    *(ushort *)((long)puVar5 + lVar6 + 0x19) =
         *(ushort *)((long)puVar5 + lVar6 + 0x19) & 0xf000 | 0x540;
    puVar4 = puVar7;
  }
  return puVar4;
}


// ===== 00206edc  FUN_00206edc =====

void FUN_00206edc(long param_1,undefined8 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00206fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  return;
}


// ===== 00206fe0  FUN_00206fe0 =====

void FUN_00206fe0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00206ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
  return;
}


// ===== 00206ff4  FUN_00206ff4 =====

void FUN_00206ff4(void *param_1)

{
  operator_delete(param_1,0x20);
  return;
}


// ===== 00207000  FUN_00207000 =====

undefined8 * FUN_00207000(long *param_1,undefined1 *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  undefined1 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  size_t sVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined1 uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  char *__s;
  void *pvVar17;
  
  pbVar2 = (byte *)*param_1;
  pbVar3 = (byte *)param_1[1];
  if (1 < (ulong)((long)pbVar3 - (long)pbVar2)) {
    bVar4 = *pbVar2;
    uVar14 = 0;
    uVar15 = 0x3d;
    do {
      uVar16 = uVar14 + uVar15 >> 1;
      if ((byte)(&DAT_0021af80)[uVar16 * 0x10] < bVar4) {
        uVar14 = uVar16 + 1;
        uVar16 = uVar15;
      }
      else if (((&DAT_0021af80)[uVar16 * 0x10] == bVar4) &&
              ((byte)(&UNK_0021af81)[uVar16 * 0x10] < pbVar2[1])) {
        uVar14 = uVar16 + 1;
        uVar16 = uVar15;
      }
      uVar15 = uVar16;
    } while (uVar16 != uVar14);
    lVar11 = uVar14 * 0x10;
    if (((&DAT_0021af80)[lVar11] == bVar4) && ((&UNK_0021af81)[lVar11] == pbVar2[1])) {
      bVar4 = (&UNK_0021af82)[lVar11];
      *param_1 = (long)(pbVar2 + 2);
      if (bVar4 == 8) {
        uVar5 = *(undefined1 *)((long)param_1 + 0x309);
        lVar11 = param_1[0x61];
        *(undefined1 *)(param_1 + 0x61) = 0;
        uVar12 = uVar5;
        if (param_2 != (undefined1 *)0x0) {
          uVar12 = 1;
        }
        *(undefined1 *)((long)param_1 + 0x309) = uVar12;
                    /* try { // try from 002070dc to 002070e3 has its CatchHandler @ 00207368 */
        lVar6 = FUN_001f6040();
        if (lVar6 == 0) {
          puVar8 = (undefined8 *)0x0;
        }
        else {
          if (param_2 != (undefined1 *)0x0) {
            *param_2 = 1;
          }
          pvVar17 = (void *)param_1[0x266];
          lVar13 = *(long *)((long)pvVar17 + 8);
          puVar7 = (undefined8 *)pvVar17;
          if (lVar13 - 0xfd0U < 0xfffffffffffff010) {
            puVar7 = (undefined8 *)malloc(0x1000);
            if (puVar7 == (undefined8 *)0x0) goto LAB_00207364;
            lVar13 = 0;
            *puVar7 = pvVar17;
            puVar7[1] = 0;
            param_1[0x266] = (long)puVar7;
          }
          *(long *)((long)puVar7 + 8) = lVar13 + 0x20;
          puVar8 = (undefined8 *)((long)puVar7 + lVar13 + 0x10);
          *puVar8 = &PTR_FUN_0021c720;
          *(long *)((long)puVar7 + lVar13 + 0x20) = lVar6;
          *(undefined1 *)((long)puVar7 + lVar13 + 0x18) = 4;
          *(ushort *)((long)puVar7 + lVar13 + 0x19) =
               *(ushort *)((long)puVar7 + lVar13 + 0x19) & 0xf000 | 0x540;
        }
        *(undefined1 *)((long)param_1 + 0x309) = uVar5;
        *(char *)(param_1 + 0x61) = (char)lVar11;
        return puVar8;
      }
      if (10 < bVar4) {
        return (undefined8 *)0x0;
      }
      if ((bVar4 == 4) && (((&UNK_0021af83)[lVar11] & 1) == 0)) {
        return (undefined8 *)0x0;
      }
      __s = *(char **)(&UNK_0021af88 + lVar11);
      sVar9 = strlen(__s);
      pvVar17 = (void *)param_1[0x266];
      lVar11 = *(long *)((long)pvVar17 + 8);
      puVar8 = (undefined8 *)pvVar17;
      if (0xfffffffffffff00f < lVar11 - 0xfd0U) {
LAB_00207314:
        *(long *)((long)puVar8 + 8) = lVar11 + 0x20;
        puVar7 = (undefined8 *)((long)puVar8 + lVar11 + 0x10);
        *puVar7 = &PTR_FUN_0021ae40;
        *(char **)((long)puVar8 + lVar11 + 0x20) = __s;
        *(size_t *)((long)puVar8 + lVar11 + 0x28) = sVar9;
        *(undefined1 *)((long)puVar8 + lVar11 + 0x18) = 8;
        *(ushort *)((long)puVar8 + lVar11 + 0x19) =
             *(ushort *)((long)puVar8 + lVar11 + 0x19) & 0xf000 | 0x540;
        return puVar7;
      }
      puVar8 = (undefined8 *)malloc(0x1000);
      if (puVar8 != (undefined8 *)0x0) {
        lVar11 = 0;
        *puVar8 = pvVar17;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
        goto LAB_00207314;
      }
      goto LAB_00207364;
    }
    if (*(short *)pbVar2 == 0x696c) {
      *param_1 = (long)(pbVar2 + 2);
      lVar11 = FUN_001f9290();
      if (lVar11 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar17 = (void *)param_1[0x266];
      lVar6 = *(long *)((long)pvVar17 + 8);
      puVar8 = (undefined8 *)pvVar17;
      if (lVar6 - 0xfd0U < 0xfffffffffffff010) {
        puVar8 = (undefined8 *)malloc(0x1000);
        if (puVar8 == (undefined8 *)0x0) goto LAB_00207364;
        lVar6 = 0;
        *puVar8 = pvVar17;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      lVar13 = (long)puVar8 + lVar6;
      ppuVar10 = &PTR_FUN_0021c790;
      *(long *)((long)puVar8 + 8) = lVar6 + 0x20;
      uVar12 = 0x14;
      goto LAB_00207274;
    }
  }
  if ((pbVar2 != pbVar3) && (*pbVar2 == 0x76)) {
    pbVar1 = pbVar2 + 1;
    *param_1 = (long)pbVar1;
    if ((pbVar3 != pbVar1) && (*pbVar1 - 0x30 < 10)) {
      *param_1 = (long)(pbVar2 + 2);
      lVar11 = FUN_001f9290();
      if (lVar11 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar17 = (void *)param_1[0x266];
      lVar6 = *(long *)((long)pvVar17 + 8);
      puVar8 = (undefined8 *)pvVar17;
      if (lVar6 - 0xfd0U < 0xfffffffffffff010) {
        puVar8 = (undefined8 *)malloc(0x1000);
        if (puVar8 == (undefined8 *)0x0) {
LAB_00207364:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar6 = 0;
        *puVar8 = pvVar17;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      lVar13 = (long)puVar8 + lVar6;
      ppuVar10 = &PTR_FUN_0021c720;
      *(long *)((long)puVar8 + 8) = lVar6 + 0x20;
      uVar12 = 4;
LAB_00207274:
      *(undefined8 *)(lVar13 + 0x10) = ppuVar10;
      *(undefined1 *)(lVar13 + 0x18) = uVar12;
      *(long *)(lVar13 + 0x20) = lVar11;
      *(ushort *)(lVar13 + 0x19) = *(ushort *)(lVar13 + 0x19) & 0xf000 | 0x540;
      return (undefined8 *)(lVar13 + 0x10);
    }
  }
  return (undefined8 *)0x0;
}


// ===== 00207374  FUN_00207374 =====

void FUN_00207374(long param_1,undefined8 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00207400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x20))();
  return;
}


// ===== 00207408  FUN_00207408 =====

void FUN_00207408(void *param_1)

{
  operator_delete(param_1,0x18);
  return;
}


// ===== 00207414  FUN_00207414 =====

void FUN_00207414(long param_1,undefined8 *param_2)

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
  uVar2 = s_operator_0012ceba._0_8_;
  ((char *)((long)__ptr + lVar3))[8] = ' ';
  *(undefined8 *)((long)__ptr + lVar3) = uVar2;
  plVar4 = *(long **)(param_1 + 0x10);
  lVar3 = *plVar4;
  param_2[1] = param_2[1] + 9;
  (**(code **)(lVar3 + 0x20))(plVar4,param_2);
  if ((*(ushort *)((long)plVar4 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002074e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}


// ===== 002074f0  FUN_002074f0 =====

void FUN_002074f0(void *param_1)

{
  operator_delete(param_1,0x18);
  return;
}


// ===== 002074fc  FUN_002074fc =====

void FUN_002074fc(long param_1,undefined8 *param_2)

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
  *(undefined8 *)pcVar2 = s_operator___0012c98d._0_8_;
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
                    /* WARNING: Could not recover jumptable at 0x002075d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}


// ===== 002075dc  FUN_002075dc =====

void FUN_002075dc(void *param_1)

{
  operator_delete(param_1,0x18);
  return;
}


// ===== 002075e8  FUN_002075e8 =====

void FUN_002075e8(long param_1,undefined8 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x002076a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  return;
}


// ===== 002076b0  FUN_002076b0 =====

void FUN_002076b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x002076c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  return;
}


// ===== 002076c4  FUN_002076c4 =====

void FUN_002076c4(void *param_1)

{
  operator_delete(param_1,0x18);
  return;
}


// ===== 002076d0  FUN_002076d0 =====

undefined8 * FUN_002076d0(long *param_1,undefined8 *param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  char *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined1 auVar7 [16];
  
  pcVar3 = (char *)*param_1;
  puVar5 = param_2;
  if (pcVar3 != (char *)param_1[1]) {
    do {
      if (*pcVar3 != 'B') {
        return puVar5;
      }
      *param_1 = (long)(pcVar3 + 1);
      auVar7 = FUN_00207cf0(param_1);
      if (auVar7._8_8_ == 0) {
        return (undefined8 *)0x0;
      }
      pvVar6 = (void *)param_1[0x266];
      lVar4 = *(long *)((long)pvVar6 + 8);
      puVar2 = (undefined8 *)pvVar6;
      if (lVar4 - 0xfc0U < 0xfffffffffffff010) {
        puVar2 = (undefined8 *)malloc(0x1000);
        if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar4 = 0;
        *puVar2 = pvVar6;
        puVar2[1] = 0;
        param_1[0x266] = (long)puVar2;
      }
      *(long *)((long)puVar2 + 8) = lVar4 + 0x30;
      uVar1 = *(ushort *)((long)puVar5 + 9);
      param_2 = (undefined8 *)((long)puVar2 + lVar4 + 0x10);
      *param_2 = &PTR_FUN_0021c950;
      *(long *)((long)puVar2 + lVar4 + 0x28) = auVar7._0_8_;
      *(undefined8 **)((long)puVar2 + lVar4 + 0x20) = puVar5;
      *(undefined1 *)((long)puVar2 + lVar4 + 0x18) = 9;
      *(long *)((long)puVar2 + lVar4 + 0x30) = auVar7._8_8_;
      *(ushort *)((long)puVar2 + lVar4 + 0x19) =
           *(ushort *)((long)puVar2 + lVar4 + 0x19) & 0xf000 | uVar1 & 0xfc0;
      pcVar3 = (char *)*param_1;
      puVar5 = param_2;
    } while (pcVar3 != (char *)param_1[1]);
  }
  return param_2;
}


// ===== 002077e0  FUN_002077e0 =====

void FUN_002077e0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  int iVar2;
  void *pvVar3;
  size_t __size;
  long lVar4;
  size_t sVar5;
  char *pcVar6;
  
  lVar4 = param_2[1];
  pvVar3 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar4 + 5U) {
    sVar5 = param_2[2] * 2;
    uVar1 = lVar4 + 0x3e5;
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
  *(undefined1 *)((undefined4 *)((long)pvVar3 + lVar4) + 1) = 0x3a;
  *(undefined4 *)((long)pvVar3 + lVar4) = 0x3a647473;
  iVar2 = *(int *)(param_1 + 0xc);
  lVar4 = param_2[1] + 5;
  param_2[1] = lVar4;
  if (iVar2 < 3) {
    if (iVar2 == 0) {
      pcVar6 = "allocator";
      sVar5 = 9;
      goto LAB_00207908;
    }
    if (iVar2 == 1) {
      pcVar6 = "basic_string";
      sVar5 = 0xc;
      goto LAB_00207908;
    }
    pcVar6 = "basic_string";
    sVar5 = 6;
  }
  else if (iVar2 == 3) {
    pcVar6 = "basic_istream";
    sVar5 = 7;
  }
  else if (iVar2 == 4) {
    pcVar6 = "basic_ostream";
    sVar5 = 7;
  }
  else {
    pcVar6 = "basic_iostream";
    sVar5 = 8;
  }
  if (*(int *)pcVar6 != 0x69736162 || (short)*(int *)((long)pcVar6 + 4) != 0x5f63) {
                    /* WARNING: Subroutine does not return */
    FUN_001f3180("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0x6a8,
                 &DAT_00125cb4);
  }
  pcVar6 = (char *)((long)pcVar6 + 6);
LAB_00207908:
  pvVar3 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar4 + sVar5) {
    __size = param_2[2] * 2;
    uVar1 = lVar4 + sVar5 + 0x3e0;
    if (__size < uVar1 || __size - uVar1 == 0) {
      __size = uVar1;
    }
    param_2[2] = __size;
    pvVar3 = realloc(pvVar3,__size);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
  }
  memcpy((void *)((long)pvVar3 + lVar4),pcVar6,sVar5);
  param_2[1] = param_2[1] + sVar5;
  return;
}


// ===== 00207998  FUN_00207998 =====

undefined1  [16] FUN_00207998(long param_1)

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
  FUN_001f3180("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0x6a8,
               &DAT_00125cb4);
}


// ===== 00207a74  FUN_00207a74 =====

void FUN_00207a74(void *param_1)

{
  operator_delete(param_1,0x10);
  return;
}


// ===== 00207a80  FUN_00207a80 =====

void FUN_00207a80(long *param_1,undefined8 *param_2)

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
    uVar6 = s_<char,_std::char_traits<char>_0012a078._21_8_;
    uVar5 = s_<char,_std::char_traits<char>_0012a078._0_8_;
    pcVar2 = (char *)((long)pvVar7 + lVar8);
    uVar4 = CONCAT53(s_<char,_std::char_traits<char>_0012a078._16_5_,
                     s_<char,_std::char_traits<char>_0012a078._13_3_);
    *(ulong *)(pcVar2 + 8) =
         CONCAT35(s_<char,_std::char_traits<char>_0012a078._13_3_,
                  s_<char,_std::char_traits<char>_0012a078._8_5_);
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
      uVar5 = s___std__allocator<char>_0012c3c9._0_8_;
      pcVar2 = (char *)((long)pvVar7 + lVar8);
      uVar4 = CONCAT62(s___std__allocator<char>_0012c3c9._16_6_,
                       s___std__allocator<char>_0012c3c9._14_2_);
      *(ulong *)(pcVar2 + 8) =
           CONCAT26(s___std__allocator<char>_0012c3c9._14_2_,s___std__allocator<char>_0012c3c9._8_6_
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


// ===== 00207cbc  FUN_00207cbc =====

undefined1  [16] FUN_00207cbc(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = *(undefined8 *)(&DAT_00131b98 + (long)*(int *)(param_1 + 0xc) * 8);
  auVar1._0_8_ = &DAT_00131bc8 + *(int *)(&DAT_00131bc8 + (long)*(int *)(param_1 + 0xc) * 4);
  return auVar1;
}


// ===== 00207ce4  FUN_00207ce4 =====

void FUN_00207ce4(void *param_1)

{
  operator_delete(param_1,0x10);
  return;
}


// ===== 00207cf0  FUN_00207cf0 =====

undefined1  [16] FUN_00207cf0(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  ulong local_8;
  
  local_8 = 0;
  uVar1 = FUN_001f943c(param_1,&local_8);
  if ((uVar1 & 1) == 0) {
    lVar2 = *param_1;
    if (local_8 <= (ulong)(param_1[1] - lVar2)) {
      *param_1 = lVar2 + local_8;
      goto LAB_00207d3c;
    }
  }
  lVar2 = 0;
  local_8 = 0;
LAB_00207d3c:
  auVar3._8_8_ = local_8;
  auVar3._0_8_ = lVar2;
  return auVar3;
}


// ===== 00207d4c  FUN_00207d4c =====

void FUN_00207d4c(long param_1,undefined8 *param_2)

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


// ===== 00207ea0  FUN_00207ea0 =====

void FUN_00207ea0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00207eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  return;
}


// ===== 00207eb4  FUN_00207eb4 =====

void FUN_00207eb4(void *param_1)

{
  operator_delete(param_1,0x28);
  return;
}


// ===== 00207ec0  FUN_00207ec0 =====

void FUN_00207ec0(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  size_t sVar3;
  ulong uVar4;
  
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
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x5b;
  FUN_00200418(param_1 + 0x10,param_2);
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
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x5d;
  return;
}


// ===== 00207fa4  FUN_00207fa4 =====

void FUN_00207fa4(void *param_1)

{
  operator_delete(param_1,0x20);
  return;
}


// ===== 00207fb0  FUN_00207fb0 =====

void FUN_00207fb0(long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar5 + 8);
  puVar2 = (undefined8 *)pvVar5;
  if (lVar3 - 0xfe0U < 0xfffffffffffff010) {
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
  *(long *)((long)puVar2 + 8) = lVar3 + 0x10;
  puVar2 = (undefined8 *)(lVar3 + 0x10 + (long)puVar2);
  *(undefined1 *)(puVar2 + 1) = 0x2f;
  *puVar2 = &PTR_FUN_0021c8f8;
  uVar1 = *(undefined4 *)(lVar4 + 0xc);
  *(ushort *)((long)puVar2 + 9) = *(ushort *)((long)puVar2 + 9) & 0xf000 | 0x540;
  *(undefined4 *)((long)puVar2 + 0xc) = uVar1;
  return;
}


// ===== 00208054  FUN_00208054 =====

void FUN_00208054(long param_1,undefined8 *param_2,undefined1 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
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
  uVar5 = *param_2;
  *(long *)((long)puVar3 + 8) = lVar4 + 0x20;
  *(undefined ***)((long)puVar3 + lVar4 + 0x10) = &PTR_FUN_0021ca30;
  uVar2 = *param_3;
  *(undefined8 *)((long)puVar3 + lVar4 + 0x20) = uVar5;
  *(undefined1 *)((long)puVar3 + lVar4 + 0x18) = 0x31;
  uVar1 = *param_4;
  *(undefined1 *)((long)puVar3 + lVar4 + 0x28) = uVar2;
  *(ushort *)((long)puVar3 + lVar4 + 0x19) =
       *(ushort *)((long)puVar3 + lVar4 + 0x19) & 0xf000 | 0x540;
  *(undefined4 *)((long)puVar3 + lVar4 + 0x2c) = uVar1;
  return;
}


// ===== 00208114  FUN_00208114 =====

void FUN_00208114(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  size_t sVar3;
  size_t __size;
  long lVar4;
  undefined1 auVar5 [16];
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
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


// ===== 0020821c  FUN_0020821c =====

void FUN_0020821c(void *param_1)

{
  operator_delete(param_1,0x20);
  return;
}


// ===== 00208228  FUN_00208228 =====

void FUN_00208228(long param_1,undefined8 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00208320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  return;
}


// ===== 00208328  FUN_00208328 =====

void FUN_00208328(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00208338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
  return;
}


// ===== 0020833c  FUN_0020833c =====

void FUN_0020833c(void *param_1)

{
  operator_delete(param_1,0x20);
  return;
}


// ===== 00208348  FUN_00208348 =====

void FUN_00208348(long param_1,undefined8 *param_2)

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
  uVar2 = s___friend_00125126._0_8_;
  ((char *)((long)__ptr + lVar3))[8] = ' ';
  *(undefined8 *)((long)__ptr + lVar3) = uVar2;
  plVar4 = *(long **)(param_1 + 0x18);
  lVar3 = *plVar4;
  param_2[1] = param_2[1] + 9;
  (**(code **)(lVar3 + 0x20))(plVar4,param_2);
  if ((*(ushort *)((long)plVar4 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00208458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}


// ===== 00208460  FUN_00208460 =====

void FUN_00208460(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00208470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
  return;
}


// ===== 00208474  FUN_00208474 =====

void FUN_00208474(void *param_1)

{
  operator_delete(param_1,0x20);
  return;
}


// ===== 00208480  FUN_00208480 =====

void FUN_00208480(long param_1,undefined8 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0020857c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  return;
}


// ===== 00208584  FUN_00208584 =====

void FUN_00208584(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00208594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
  return;
}


// ===== 00208598  FUN_00208598 =====

void FUN_00208598(void *param_1)

{
  operator_delete(param_1,0x20);
  return;
}


// ===== 002085a4  FUN_002085a4 =====

byte * FUN_002085a4(byte *param_1,byte *param_2)

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


// ===== 00208654  FUN_00208654 =====

undefined8 * FUN_00208654(long param_1,char *param_2)

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
  *puVar4 = &PTR_FUN_0021ae40;
  *(undefined1 *)((long)puVar1 + lVar3 + 0x18) = 8;
  *(char **)((long)puVar1 + lVar3 + 0x20) = param_2;
  *(size_t *)((long)puVar1 + lVar3 + 0x28) = sVar2;
  *(ushort *)((long)puVar1 + lVar3 + 0x19) =
       *(ushort *)((long)puVar1 + lVar3 + 0x19) & 0xf000 | 0x540;
  return puVar4;
}


// ===== 00208700  FUN_00208700 =====

void FUN_00208700(long param_1,undefined8 *param_2,undefined8 *param_3)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0021cbf0;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x1a;
  uVar3 = *param_2;
  uVar4 = *param_3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar4;
  return;
}


// ===== 002087a8  FUN_002087a8 =====

void FUN_002087a8(long param_1,undefined8 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x002088a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  return;
}


// ===== 002088ac  FUN_002088ac =====

void FUN_002088ac(void *param_1)

{
  operator_delete(param_1,0x20);
  return;
}


// ===== 002088b8  FUN_002088b8 =====

ulong FUN_002088b8(long param_1,long param_2)

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
                    /* WARNING: Could not recover jumptable at 0x002088f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)*puVar2)();
  return uVar3;
}


// ===== 00208924  FUN_00208924 =====

ulong FUN_00208924(long param_1,long param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00208964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar2 + 8))();
  return uVar3;
}


// ===== 00208990  FUN_00208990 =====

ulong FUN_00208990(long param_1,long param_2)

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
                    /* WARNING: Could not recover jumptable at 0x002089d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar2 + 0x10))();
  return uVar3;
}


// ===== 002089fc  FUN_002089fc =====

void FUN_002089fc(long param_1,long param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00208a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + uVar1 * 8) + 0x18))();
  return;
}


// ===== 00208a48  FUN_00208a48 =====

void FUN_00208a48(long param_1,long param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00208a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + uVar1 * 8) + 0x20))();
  return;
}


// ===== 00208a94  FUN_00208a94 =====

void FUN_00208a94(long param_1,long param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00208ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + uVar1 * 8) + 0x28))();
  return;
}


// ===== 00208ae0  FUN_00208ae0 =====

void FUN_00208ae0(void *param_1)

{
  operator_delete(param_1,0x20);
  return;
}


// ===== 00208aec  FUN_00208aec =====

void FUN_00208aec(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  void *pvVar3;
  long lVar4;
  size_t sVar5;
  
  lVar4 = param_2[1];
  pvVar3 = (void *)*param_2;
  uVar2 = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
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
  *(undefined1 *)((long)pvVar3 + lVar4) = 0x3c;
  param_2[1] = param_2[1] + 1;
                    /* try { // try from 00208b5c to 00208b67 has its CatchHandler @ 00208bd4 */
  FUN_00200418(param_1 + 0x10,param_2);
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
  *(undefined1 *)((long)pvVar3 + lVar4) = 0x3e;
  param_2[1] = param_2[1] + 1;
  *(undefined4 *)(param_2 + 4) = uVar2;
  return;
}


// ===== 00208bdc  FUN_00208bdc =====

void FUN_00208bdc(void *param_1)

{
  operator_delete(param_1,0x28);
  return;
}


// ===== 00208be8  FUN_00208be8 =====

void FUN_00208be8(long param_1,undefined8 param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00208c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  return;
}


// ===== 00208c9c  FUN_00208c9c =====

void FUN_00208c9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00208cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  return;
}


// ===== 00208cb0  FUN_00208cb0 =====

void FUN_00208cb0(void *param_1)

{
  operator_delete(param_1,0x20);
  return;
}


// ===== 00208cbc  FUN_00208cbc =====

void FUN_00208cbc(long param_1)

{
  FUN_00200418(param_1 + 0x10);
  return;
}


// ===== 00208cc8  FUN_00208cc8 =====

void FUN_00208cc8(void *param_1)

{
  operator_delete(param_1,0x20);
  return;
}


// ===== 00208cd4  FUN_00208cd4 =====

void FUN_00208cd4(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  if ((*(ushort *)((long)plVar1 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00208d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  return;
}


// ===== 00208d3c  FUN_00208d3c =====

void FUN_00208d3c(void *param_1)

{
  operator_delete(param_1,0x20);
  return;
}


// ===== 00208d48  FUN_00208d48 =====

void FUN_00208d48(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  size_t sVar5;
  
  lVar3 = param_2[1];
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 0xcU) {
    sVar5 = param_2[2] * 2;
    uVar4 = lVar3 + 0x3ec;
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
  pcVar1 = (char *)((long)pvVar2 + lVar3);
  *(undefined8 *)pcVar1 = s__enable_if__0012493b._0_8_;
  pcVar1[8] = '_';
  pcVar1[9] = 'i';
  pcVar1[10] = 'f';
  pcVar1[0xb] = ':';
  param_2[1] = param_2[1] + 0xc;
  FUN_00200418(param_1 + 0x10,param_2);
  lVar3 = param_2[1];
  pvVar2 = (void *)*param_2;
  uVar4 = lVar3 + 1;
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
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x5d;
  return;
}


// ===== 00208e38  FUN_00208e38 =====

void FUN_00208e38(void *param_1)

{
  operator_delete(param_1,0x20);
  return;
}


// ===== 00208e44  FUN_00208e44 =====

void FUN_00208e44(long param_1,undefined8 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00208f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  return;
}


// ===== 00208f1c  FUN_00208f1c =====

void FUN_00208f1c(void *param_1)

{
  operator_delete(param_1,0x18);
  return;
}


// ===== 00208f28  FUN_00208f28 =====

undefined8 FUN_00208f28(void)

{
  return 1;
}


// ===== 00208f34  FUN_00208f34 =====

undefined8 FUN_00208f34(void)

{
  return 1;
}


// ===== 00208f40  FUN_00208f40 =====

void FUN_00208f40(long param_1,undefined8 *param_2)

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
      if ((uVar3 & 1) != 0) goto LAB_00208ff0;
    }
    else if (*(byte *)((long)puVar2 + 9) < 0x40) goto LAB_00208ff0;
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
LAB_00208ff0:
  plVar1 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  if ((*(ushort *)((long)plVar1 + 9) & 0xc0) != 0x40) {
                    /* WARNING: Could not recover jumptable at 0x00209044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
    return;
  }
  return;
}


// ===== 0020904c  FUN_0020904c =====

void FUN_0020904c(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  void *pvVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  size_t sVar7;
  ulong uVar8;
  
  lVar6 = param_2[1];
  pvVar3 = (void *)*param_2;
  uVar8 = lVar6 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  if ((ulong)param_2[2] < uVar8) {
    sVar7 = param_2[2] * 2;
    uVar8 = lVar6 + 0x3e1;
    if (sVar7 < uVar8 || sVar7 - uVar8 == 0) {
      sVar7 = uVar8;
    }
    param_2[2] = sVar7;
    pvVar3 = realloc(pvVar3,sVar7);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = param_2[1];
    uVar8 = lVar6 + 1;
  }
  param_2[1] = uVar8;
  *(undefined1 *)((long)pvVar3 + lVar6) = 0x28;
  FUN_00200418(param_1 + 0x20,param_2);
  lVar6 = param_2[1];
  pvVar3 = (void *)*param_2;
  uVar8 = lVar6 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar8) {
    sVar7 = param_2[2] * 2;
    uVar8 = lVar6 + 0x3e1;
    if (sVar7 < uVar8 || sVar7 - uVar8 == 0) {
      sVar7 = uVar8;
    }
    param_2[2] = sVar7;
    pvVar3 = realloc(pvVar3,sVar7);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = param_2[1];
    uVar8 = lVar6 + 1;
  }
  param_2[1] = uVar8;
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
      sVar7 = param_2[2] * 2;
      uVar8 = lVar6 + 0x3e6;
      if (sVar7 < uVar8 || sVar7 - uVar8 == 0) {
        sVar7 = uVar8;
      }
      param_2[2] = sVar7;
      pvVar3 = realloc(pvVar3,sVar7);
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
      sVar7 = param_2[2] * 2;
      uVar8 = lVar6 + 0x3e9;
      if (sVar7 < uVar8 || sVar7 - uVar8 == 0) {
        sVar7 = uVar8;
      }
      param_2[2] = sVar7;
      pvVar3 = realloc(pvVar3,sVar7);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar6 = param_2[1];
    }
    uVar2 = s_volatile_0012ced2._0_8_;
    ((char *)((long)pvVar3 + lVar6))[8] = 'e';
    *(undefined8 *)((long)pvVar3 + lVar6) = uVar2;
    uVar5 = *(uint *)(param_1 + 0x40);
    param_2[1] = param_2[1] + 9;
  }
  if ((uVar5 >> 2 & 1) != 0) {
    lVar6 = param_2[1];
    pvVar3 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar6 + 9U) {
      sVar7 = param_2[2] * 2;
      uVar8 = lVar6 + 0x3e9;
      if (sVar7 < uVar8 || sVar7 - uVar8 == 0) {
        sVar7 = uVar8;
      }
      param_2[2] = sVar7;
      pvVar3 = realloc(pvVar3,sVar7);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar6 = param_2[1];
    }
    uVar2 = s_restrict_0012d39f._0_8_;
    ((char *)((long)pvVar3 + lVar6))[8] = 't';
    *(undefined8 *)((long)pvVar3 + lVar6) = uVar2;
    param_2[1] = param_2[1] + 9;
  }
  if (*(char *)(param_1 + 0x44) == '\x02') {
    lVar6 = param_2[1];
    pvVar3 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar6 + 3U) {
      sVar7 = param_2[2] * 2;
      uVar8 = lVar6 + 0x3e3;
      if (sVar7 < uVar8 || sVar7 - uVar8 == 0) {
        sVar7 = uVar8;
      }
      param_2[2] = sVar7;
      pvVar3 = realloc(pvVar3,sVar7);
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
    if (*(char *)(param_1 + 0x44) != '\x01') goto LAB_00209320;
    lVar6 = param_2[1];
    pvVar3 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar6 + 2U) {
      sVar7 = param_2[2] * 2;
      uVar8 = lVar6 + 0x3e2;
      if (sVar7 < uVar8 || sVar7 - uVar8 == 0) {
        sVar7 = uVar8;
      }
      param_2[2] = sVar7;
      pvVar3 = realloc(pvVar3,sVar7);
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
LAB_00209320:
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
      sVar7 = param_2[2] * 2;
      uVar8 = lVar6 + 0x3ea;
      if (sVar7 < uVar8 || sVar7 - uVar8 == 0) {
        sVar7 = uVar8;
      }
      param_2[2] = sVar7;
      pvVar3 = realloc(pvVar3,sVar7);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar6 = param_2[1];
    }
    uVar2 = s_requires_0012dbfd._0_8_;
    pcVar1 = (char *)((long)pvVar3 + lVar6);
    pcVar1[8] = 's';
    pcVar1[9] = ' ';
    *(undefined8 *)pcVar1 = uVar2;
    plVar4 = *(long **)(param_1 + 0x38);
    lVar6 = *plVar4;
    param_2[1] = param_2[1] + 10;
    (**(code **)(lVar6 + 0x20))(plVar4,param_2);
    if ((*(ushort *)((long)plVar4 + 9) & 0xc0) != 0x40) {
                    /* WARNING: Could not recover jumptable at 0x00209424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
      return;
    }
  }
  return;
}


// ===== 00209448  FUN_00209448 =====

void FUN_00209448(void *param_1)

{
  operator_delete(param_1,0x48);
  return;
}


// ===== 00209454  FUN_00209454 =====

void FUN_00209454(long param_1,undefined8 *param_2)

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


// ===== 002095c0  FUN_002095c0 =====

void FUN_002095c0(void *param_1)

{
  operator_delete(param_1,0x28);
  return;
}


// ===== 002095cc  FUN_002095cc =====

undefined8 * FUN_002095cc(long *param_1)

{
  short *psVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ushort uVar9;
  short *psVar10;
  long lVar11;
  undefined1 uVar12;
  short *psVar13;
  size_t sVar14;
  long *plVar15;
  long *plVar16;
  uint uVar17;
  undefined8 *puVar18;
  undefined1 auVar19 [16];
  
  psVar13 = (short *)*param_1;
  psVar10 = (short *)param_1[1];
  if ((psVar13 == psVar10) || ((char)*psVar13 != 'r')) {
    uVar17 = 0;
  }
  else {
    psVar13 = (short *)((long)psVar13 + 1);
    uVar17 = 4;
    *param_1 = (long)psVar13;
  }
  if ((psVar13 != psVar10) && ((char)*psVar13 == 'V')) {
    psVar13 = (short *)((long)psVar13 + 1);
    uVar17 = uVar17 | 2;
    *param_1 = (long)psVar13;
  }
  if ((psVar13 != psVar10) && ((char)*psVar13 == 'K')) {
    psVar13 = (short *)((long)psVar13 + 1);
    uVar17 = uVar17 | 1;
    *param_1 = (long)psVar13;
  }
  if ((ulong)((long)psVar10 - (long)psVar13) < 2) {
LAB_00209674:
    puVar18 = (undefined8 *)0x0;
  }
  else {
    if (*psVar13 == 0x6f44) {
      pvVar6 = (void *)param_1[0x266];
      *param_1 = (long)(psVar13 + 1);
      lVar4 = *(long *)((long)pvVar6 + 8);
      puVar7 = (undefined8 *)pvVar6;
      if (lVar4 - 0xfd0U < 0xfffffffffffff010) {
        puVar7 = (undefined8 *)malloc(0x1000);
        if (puVar7 == (undefined8 *)0x0) {
LAB_00209b70:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar4 = 0;
        *puVar7 = pvVar6;
        puVar7[1] = 0;
        param_1[0x266] = (long)puVar7;
      }
      *(long *)((long)puVar7 + 8) = lVar4 + 0x20;
      puVar18 = (undefined8 *)((long)puVar7 + lVar4 + 0x10);
      *puVar18 = &PTR_FUN_0021ae40;
      *(undefined1 *)((long)puVar7 + lVar4 + 0x18) = 8;
      *(ushort *)((long)puVar7 + lVar4 + 0x19) =
           *(ushort *)((long)puVar7 + lVar4 + 0x19) & 0xf000 | 0x540;
      *(char **)((long)puVar7 + lVar4 + 0x20) = "noexcept";
      *(undefined8 *)((long)puVar7 + lVar4 + 0x28) = 8;
      goto LAB_00209908;
    }
    if (*psVar13 == 0x4f44) {
      *param_1 = (long)(psVar13 + 1);
      lVar4 = FUN_001fb034(param_1);
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
      pvVar6 = (void *)param_1[0x266];
      *param_1 = (long)(pcVar2 + 1);
      lVar11 = *(long *)((long)pvVar6 + 8);
      puVar7 = (undefined8 *)pvVar6;
      if (lVar11 - 0xfd0U < 0xfffffffffffff010) {
        puVar7 = (undefined8 *)malloc(0x1000);
        if (puVar7 == (undefined8 *)0x0) goto LAB_00209b70;
        lVar11 = 0;
        *puVar7 = pvVar6;
        puVar7[1] = 0;
        param_1[0x266] = (long)puVar7;
      }
      *(long *)((long)puVar7 + 8) = lVar11 + 0x20;
      puVar18 = (undefined8 *)((long)puVar7 + lVar11 + 0x10);
      *puVar18 = &PTR_FUN_0021d050;
      uVar9 = *(ushort *)((long)puVar7 + lVar11 + 0x19);
      uVar12 = 0x11;
      *(long *)((long)puVar7 + lVar11 + 0x20) = lVar4;
    }
    else {
      if (*psVar13 != 0x7744) goto LAB_00209674;
      lVar4 = param_1[2];
      lVar11 = param_1[3];
      psVar13 = psVar13 + 1;
      *param_1 = (long)psVar13;
      while ((psVar13 == psVar10 || ((char)*psVar13 != 'E'))) {
        lVar3 = FUN_001f6040(param_1);
        if (lVar3 == 0) {
          return (undefined8 *)0x0;
        }
        plVar15 = (long *)param_1[3];
        if (plVar15 == (long *)param_1[4]) {
          plVar16 = (long *)param_1[2];
          sVar14 = (long)plVar15 - (long)plVar16;
          if (plVar16 == param_1 + 5) {
            pvVar6 = malloc(sVar14 * 2);
            if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (plVar15 != param_1 + 5) {
              memmove(pvVar6,plVar16,sVar14);
            }
            param_1[2] = (long)pvVar6;
          }
          else {
            pvVar6 = realloc(plVar16,sVar14 * 2);
            param_1[2] = (long)pvVar6;
            if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          plVar15 = (long *)((long)pvVar6 + sVar14);
          param_1[4] = (long)((long)pvVar6 + ((long)sVar14 >> 2) * 8);
        }
        param_1[3] = (long)(plVar15 + 1);
        *plVar15 = lVar3;
        psVar10 = (short *)param_1[1];
        psVar13 = (short *)*param_1;
      }
      *param_1 = (long)((long)psVar13 + 1);
      auVar19 = FUN_001f8168(param_1,lVar11 - lVar4 >> 3);
      pvVar6 = (void *)param_1[0x266];
      lVar4 = *(long *)((long)pvVar6 + 8);
      puVar7 = (undefined8 *)pvVar6;
      if (lVar4 - 0xfd0U < 0xfffffffffffff010) {
        puVar7 = (undefined8 *)malloc(0x1000);
        if (puVar7 == (undefined8 *)0x0) goto LAB_00209b70;
        lVar4 = 0;
        *puVar7 = pvVar6;
        puVar7[1] = 0;
        param_1[0x266] = (long)puVar7;
      }
      *(long *)((long)puVar7 + 8) = lVar4 + 0x20;
      puVar18 = (undefined8 *)((long)puVar7 + lVar4 + 0x10);
      *puVar18 = &PTR_FUN_0021d0c0;
      uVar9 = *(ushort *)((long)puVar7 + lVar4 + 0x19);
      uVar12 = 0x12;
      *(undefined1 (*) [16])((long)puVar7 + lVar4 + 0x20) = auVar19;
    }
    *(undefined1 *)(puVar18 + 1) = uVar12;
    *(ushort *)((long)puVar18 + 9) = uVar9 & 0xf000 | 0x540;
  }
LAB_00209908:
  psVar13 = (short *)*param_1;
  psVar10 = (short *)param_1[1];
  if ((1 < (ulong)((long)psVar10 - (long)psVar13)) && (*psVar13 == 0x7844)) {
    psVar13 = psVar13 + 1;
    *param_1 = (long)psVar13;
  }
  if ((psVar13 == psVar10) || ((char)*psVar13 != 'F')) {
    return (undefined8 *)0x0;
  }
  psVar1 = (short *)((long)psVar13 + 1);
  *param_1 = (long)psVar1;
  if ((psVar1 != psVar10) && (*(char *)psVar1 == 'Y')) {
    *param_1 = (long)(psVar13 + 1);
  }
  lVar4 = FUN_001f6040(param_1);
  if (lVar4 == 0) {
    return (undefined8 *)0x0;
  }
  lVar11 = param_1[2];
  lVar3 = param_1[3];
  do {
    while( true ) {
      psVar13 = (short *)*param_1;
      if (psVar13 != (short *)param_1[1]) break;
LAB_002099ec:
      if (1 < (ulong)(param_1[1] - (long)psVar13)) {
        if (*psVar13 == 0x4552) {
          uVar12 = 1;
          lVar5 = 2;
          goto LAB_00209ac8;
        }
        if (*psVar13 == 0x454f) {
          lVar5 = 2;
          uVar12 = 2;
          goto LAB_00209ac8;
        }
      }
      lVar5 = FUN_001f6040(param_1);
      if (lVar5 == 0) {
        return (undefined8 *)0x0;
      }
      plVar15 = (long *)param_1[3];
      if (plVar15 == (long *)param_1[4]) {
        plVar16 = (long *)param_1[2];
        sVar14 = (long)plVar15 - (long)plVar16;
        if (plVar16 == param_1 + 5) {
          pvVar6 = malloc(sVar14 * 2);
          if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar15 != param_1 + 5) {
            memmove(pvVar6,plVar16,sVar14);
          }
          param_1[2] = (long)pvVar6;
        }
        else {
          pvVar6 = realloc(plVar16,sVar14 * 2);
          param_1[2] = (long)pvVar6;
          if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar15 = (long *)((long)pvVar6 + sVar14);
        param_1[4] = (long)((long)pvVar6 + ((long)sVar14 >> 2) * 8);
      }
      param_1[3] = (long)(plVar15 + 1);
      *plVar15 = lVar5;
    }
    if ((char)*psVar13 == 'E') break;
    if ((char)*psVar13 != 'v') goto LAB_002099ec;
    *param_1 = (long)((long)psVar13 + 1);
  } while( true );
  uVar12 = 0;
  lVar5 = 1;
LAB_00209ac8:
  *param_1 = (long)((long)psVar13 + lVar5);
  auVar19 = FUN_001f8168(param_1,lVar3 - lVar11 >> 3);
  pvVar6 = (void *)param_1[0x266];
  lVar11 = *(long *)((long)pvVar6 + 8);
  puVar7 = (undefined8 *)pvVar6;
  if (lVar11 - 0xfb0U < 0xfffffffffffff010) {
    puVar7 = (undefined8 *)malloc(0x1000);
    if (puVar7 == (undefined8 *)0x0) goto LAB_00209b70;
    lVar11 = 0;
    *puVar7 = pvVar6;
    puVar7[1] = 0;
    param_1[0x266] = (long)puVar7;
  }
  *(long *)((long)puVar7 + 8) = lVar11 + 0x40;
  puVar8 = (undefined8 *)((long)puVar7 + lVar11 + 0x10);
  *puVar8 = &PTR_FUN_0021d130;
  *(undefined1 *)((long)puVar7 + lVar11 + 0x18) = 0x10;
  *(long *)((long)puVar7 + lVar11 + 0x20) = lVar4;
  *(undefined1 (*) [16])((long)puVar7 + lVar11 + 0x28) = auVar19;
  *(uint *)((long)puVar7 + lVar11 + 0x38) = uVar17;
  *(ushort *)((long)puVar7 + lVar11 + 0x19) =
       *(ushort *)((long)puVar7 + lVar11 + 0x19) & 0xf000 | 0x100;
  *(undefined1 *)((long)puVar7 + lVar11 + 0x3c) = uVar12;
  *(undefined8 **)((long)puVar7 + lVar11 + 0x40) = puVar18;
  return puVar8;
}


// ===== 00209b74  FUN_00209b74 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_00209b74(long *param_1)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  byte *pbVar14;
  uint uVar15;
  ulong uVar16;
  byte *pbVar17;
  byte *pbVar18;
  void *pvVar19;
  
  pbVar10 = (byte *)*param_1;
  pbVar1 = (byte *)param_1[1];
  if (pbVar10 == pbVar1) {
LAB_00209cc4:
    uVar15 = 0;
  }
  else {
    if (*pbVar10 == 0x55) {
      pbVar18 = pbVar10 + 1;
      *param_1 = (long)pbVar18;
      if ((pbVar1 == pbVar18) || (*pbVar18 - 0x3a < 0xfffffff6)) {
        return (undefined8 *)0x0;
      }
      lVar4 = 0;
      pbVar18 = (byte *)0x0;
      do {
        pbVar17 = pbVar18;
        lVar6 = lVar4;
        pbVar14 = pbVar10 + lVar6 + 2;
        *param_1 = (long)pbVar14;
        uVar12 = (ulong)pbVar10[lVar6 + 1];
        pbVar18 = (byte *)(uVar12 + (long)pbVar17 * 10 + -0x30);
        if (pbVar14 == pbVar1) break;
        lVar4 = lVar6 + 1;
      } while (*pbVar14 - 0x30 < 10);
      if (pbVar1 + (-lVar6 - (long)pbVar10) + -2 < pbVar18) {
        return (undefined8 *)0x0;
      }
      pbVar11 = pbVar10 + uVar12 + (long)pbVar17 * 10 + lVar6 + -0x2e;
      *param_1 = (long)pbVar11;
      if (pbVar18 == (byte *)0x0) {
        return (undefined8 *)0x0;
      }
      if (((byte *)0x8 < pbVar18) &&
         (*(long *)(pbVar10 + lVar6 + 2) == 0x746f7270636a626f && pbVar10[lVar6 + 10] == 0x6f)) {
        *param_1 = (long)(pbVar10 + lVar6 + 0xb);
        param_1[1] = (long)pbVar11;
        if ((pbVar18 != (byte *)0x9) && (0xfffffff5 < pbVar10[lVar6 + 0xb] - 0x3a)) {
          uVar16 = 0;
          pbVar18 = pbVar10 + lVar6 + 0xc;
          uVar12 = (uVar12 + (long)pbVar17 * 10) - 0x3a;
          pbVar10 = pbVar10 + lVar6 + 0xc;
          do {
            pbVar14 = pbVar10;
            uVar13 = uVar12;
            *param_1 = (long)pbVar18;
            uVar16 = ((ulong)pbVar18[-1] + uVar16 * 10) - 0x30;
            if (uVar13 == 0) break;
            bVar2 = *pbVar18;
            pbVar18 = pbVar18 + 1;
            uVar12 = uVar13 - 1;
            pbVar10 = pbVar14 + 1;
          } while (bVar2 - 0x30 < 10);
          if (uVar16 <= uVar13) {
            *param_1 = (long)pbVar11;
            param_1[1] = (long)pbVar1;
            if (uVar16 == 0) {
              return (undefined8 *)0x0;
            }
            lVar4 = FUN_00209b74(param_1);
            if (lVar4 == 0) {
              return (undefined8 *)0x0;
            }
            pvVar19 = (void *)param_1[0x266];
            lVar6 = *(long *)((long)pvVar19 + 8);
            puVar7 = (undefined8 *)pvVar19;
            if (lVar6 - 0xfc0U < 0xfffffffffffff010) {
              puVar7 = (undefined8 *)malloc(0x1000);
              if (puVar7 == (undefined8 *)0x0) goto LAB_00209f48;
              lVar6 = 0;
              *puVar7 = pvVar19;
              puVar7[1] = 0;
              param_1[0x266] = (long)puVar7;
            }
            *(long *)((long)puVar7 + 8) = lVar6 + 0x30;
            puVar8 = (undefined8 *)((long)puVar7 + lVar6 + 0x10);
            *puVar8 = &PTR_FUN_0021d1a0;
            *(undefined1 *)((long)puVar7 + lVar6 + 0x18) = 0xb;
            *(long *)((long)puVar7 + lVar6 + 0x20) = lVar4;
            *(byte **)((long)puVar7 + lVar6 + 0x28) = pbVar14;
            *(ulong *)((long)puVar7 + lVar6 + 0x30) = uVar16;
            *(ushort *)((long)puVar7 + lVar6 + 0x19) =
                 *(ushort *)((long)puVar7 + lVar6 + 0x19) & 0xf000 | 0x540;
            return puVar8;
          }
        }
        *param_1 = (long)pbVar11;
        param_1[1] = (long)pbVar1;
        return (undefined8 *)0x0;
      }
      if ((pbVar11 == pbVar1) || (*pbVar11 != 0x49)) {
        lVar4 = 0;
      }
      else {
        lVar4 = FUN_001f98bc(param_1,0);
        if (lVar4 == 0) {
          return (undefined8 *)0x0;
        }
      }
      lVar6 = FUN_00209b74(param_1);
      if (lVar6 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar19 = (void *)param_1[0x266];
      lVar9 = *(long *)((long)pvVar19 + 8);
      puVar7 = (undefined8 *)pvVar19;
      if (0xfffffffffffff00f < lVar9 - 0xfc0U) {
LAB_00209ddc:
        *(long *)((long)puVar7 + 8) = lVar9 + 0x30;
        puVar8 = (undefined8 *)((long)puVar7 + lVar9 + 0x10);
        *puVar8 = &PTR_FUN_0021d210;
        *(undefined1 *)((long)puVar7 + lVar9 + 0x18) = 2;
        *(long *)((long)puVar7 + lVar9 + 0x20) = lVar6;
        *(byte **)((long)puVar7 + lVar9 + 0x28) = pbVar14;
        *(byte **)((long)puVar7 + lVar9 + 0x30) = pbVar18;
        *(long *)((long)puVar7 + lVar9 + 0x38) = lVar4;
        *(ushort *)((long)puVar7 + lVar9 + 0x19) =
             *(ushort *)((long)puVar7 + lVar9 + 0x19) & 0xf000 | 0x540;
        return puVar8;
      }
      puVar7 = (undefined8 *)malloc(0x1000);
      if (puVar7 != (undefined8 *)0x0) {
        lVar9 = 0;
        *puVar7 = pvVar19;
        puVar7[1] = 0;
        param_1[0x266] = (long)puVar7;
        goto LAB_00209ddc;
      }
      goto LAB_00209f48;
    }
    if (*pbVar10 != 0x72) goto LAB_00209cc4;
    pbVar10 = pbVar10 + 1;
    uVar15 = 4;
    *param_1 = (long)pbVar10;
  }
  if ((pbVar10 != pbVar1) && (*pbVar10 == 0x56)) {
    pbVar10 = pbVar10 + 1;
    uVar15 = uVar15 | 2;
    *param_1 = (long)pbVar10;
  }
  if ((pbVar10 != pbVar1) && (*pbVar10 == 0x4b)) {
    uVar15 = uVar15 | 1;
    *param_1 = (long)(pbVar10 + 1);
  }
  puVar8 = (undefined8 *)FUN_001f6040(param_1);
  puVar7 = puVar8;
  if ((puVar8 != (undefined8 *)0x0) && (uVar15 != 0)) {
    pvVar19 = (void *)param_1[0x266];
    lVar4 = *(long *)((long)pvVar19 + 8);
    puVar5 = (undefined8 *)pvVar19;
    if (lVar4 - 0xfd0U < 0xfffffffffffff010) {
      puVar5 = (undefined8 *)malloc(0x1000);
      if (puVar5 == (undefined8 *)0x0) {
LAB_00209f48:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar4 = 0;
      *puVar5 = pvVar19;
      puVar5[1] = 0;
      param_1[0x266] = (long)puVar5;
    }
    *(long *)((long)puVar5 + 8) = lVar4 + 0x20;
    uVar3 = *(ushort *)((long)puVar8 + 9);
    puVar7 = (undefined8 *)((long)puVar5 + lVar4 + 0x10);
    *puVar7 = &PTR_FUN_0021d280;
    *(undefined8 **)((long)puVar5 + lVar4 + 0x20) = puVar8;
    *(undefined1 *)((long)puVar5 + lVar4 + 0x18) = 3;
    *(uint *)((long)puVar5 + lVar4 + 0x1c) = uVar15;
    *(ushort *)((long)puVar5 + lVar4 + 0x19) =
         *(ushort *)((long)puVar5 + lVar4 + 0x19) & 0xf000 | uVar3 & 0xfc0;
  }
  return puVar7;
}


// ===== 00209f4c  FUN_00209f4c =====

undefined8 * FUN_00209f4c(long param_1,char *param_2)

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
  *puVar4 = &PTR_FUN_0021ae40;
  *(undefined1 *)((long)puVar1 + lVar3 + 0x18) = 8;
  *(char **)((long)puVar1 + lVar3 + 0x20) = param_2;
  *(size_t *)((long)puVar1 + lVar3 + 0x28) = sVar2;
  *(ushort *)((long)puVar1 + lVar3 + 0x19) =
       *(ushort *)((long)puVar1 + lVar3 + 0x19) & 0xf000 | 0x540;
  return puVar4;
}


// ===== 00209ff8  FUN_00209ff8 =====

undefined8 * FUN_00209ff8(long param_1,char *param_2)

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
  *puVar4 = &PTR_FUN_0021ae40;
  *(undefined1 *)((long)puVar1 + lVar3 + 0x18) = 8;
  *(char **)((long)puVar1 + lVar3 + 0x20) = param_2;
  *(size_t *)((long)puVar1 + lVar3 + 0x28) = sVar2;
  *(ushort *)((long)puVar1 + lVar3 + 0x19) =
       *(ushort *)((long)puVar1 + lVar3 + 0x19) & 0xf000 | 0x540;
  return puVar4;
}


// ===== 0020a0a4  FUN_0020a0a4 =====

undefined8 * FUN_0020a0a4(long param_1,char *param_2)

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
  *puVar4 = &PTR_FUN_0021ae40;
  *(undefined1 *)((long)puVar1 + lVar3 + 0x18) = 8;
  *(char **)((long)puVar1 + lVar3 + 0x20) = param_2;
  *(size_t *)((long)puVar1 + lVar3 + 0x28) = sVar2;
  *(ushort *)((long)puVar1 + lVar3 + 0x19) =
       *(ushort *)((long)puVar1 + lVar3 + 0x19) & 0xf000 | 0x540;
  return puVar4;
}


// ===== 0020a150  FUN_0020a150 =====

void FUN_0020a150(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 uVar5;
  
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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0021d2f0;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 7;
  uVar3 = *param_3;
  uVar5 = *param_2;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = param_2[1];
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar5;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  return;
}


// ===== 0020a1fc  FUN_0020a1fc =====

void FUN_0020a1fc(long param_1,undefined8 *param_2)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0021d360;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x1f;
  uVar3 = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  return;
}


// ===== 0020a29c  FUN_0020a29c =====

void FUN_0020a29c(long param_1,undefined8 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
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
  *(long *)((long)puVar2 + 8) = lVar3 + 0x20;
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_0021d3d0;
  uVar4 = *param_2;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0x20;
  uVar1 = *param_3;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x20) = uVar4;
  *(ushort *)((long)puVar2 + lVar3 + 0x19) =
       *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000 | 0x540;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x28) = uVar1;
  return;
}


// ===== 0020a348  FUN_0020a348 =====

void FUN_0020a348(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pvVar3 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar3 + 8);
  puVar1 = (undefined8 *)pvVar3;
  if (lVar2 - 0xfc0U < 0xfffffffffffff010) {
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
  *(long *)((long)puVar1 + 8) = lVar2 + 0x30;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0021d440;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 5;
  uVar5 = param_3[1];
  uVar4 = *param_3;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar5;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar4;
  return;
}


// ===== 0020a3f4  FUN_0020a3f4 =====

undefined8 * FUN_0020a3f4(long *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  short *psVar3;
  char *pcVar4;
  byte *pbVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ushort uVar9;
  long lVar10;
  long lVar11;
  byte *pbVar12;
  long lVar13;
  byte *pbVar14;
  byte *pbVar15;
  void *pvVar16;
  undefined8 *local_40;
  undefined8 *local_38;
  
  psVar3 = (short *)*param_1;
  pbVar5 = (byte *)param_1[1];
  if (((ulong)((long)pbVar5 - (long)psVar3) < 2) || (*psVar3 != 0x7644)) {
LAB_0020a42c:
    puVar7 = (undefined8 *)0x0;
  }
  else {
    pbVar1 = (byte *)(psVar3 + 1);
    *param_1 = (long)pbVar1;
    if ((pbVar5 == pbVar1) || (bVar6 = *pbVar1, bVar6 < 0x31)) {
LAB_0020a5dc:
      lVar13 = FUN_001fb034();
      if (lVar13 == 0) {
        return (undefined8 *)0x0;
      }
      pcVar4 = (char *)*param_1;
      if ((pcVar4 == (char *)param_1[1]) || (*pcVar4 != '_')) goto LAB_0020a42c;
      *param_1 = (long)(pcVar4 + 1);
      lVar10 = FUN_001f6040(param_1);
      if (lVar10 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar16 = (void *)param_1[0x266];
      lVar11 = *(long *)((long)pvVar16 + 8);
      puVar8 = (undefined8 *)pvVar16;
      if (lVar11 - 0xfd0U < 0xfffffffffffff010) {
        puVar8 = (undefined8 *)malloc(0x1000);
        if (puVar8 == (undefined8 *)0x0) {
LAB_0020a6a4:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar11 = 0;
        *puVar8 = pvVar16;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar11 + 0x20;
      puVar7 = (undefined8 *)((long)puVar8 + lVar11 + 0x10);
      *puVar7 = &PTR_FUN_0021d520;
      uVar9 = *(ushort *)((long)puVar8 + lVar11 + 0x19);
      *(long *)((long)puVar8 + lVar11 + 0x20) = lVar10;
      *(long *)((long)puVar8 + lVar11 + 0x28) = lVar13;
    }
    else {
      if (bVar6 < 0x3a) {
        pbVar14 = (byte *)(psVar3 + 1);
        pbVar12 = pbVar1;
        do {
          pbVar15 = pbVar14;
          if (*pbVar12 - 0x3a < 0xfffffff6) break;
          pbVar12 = pbVar12 + 1;
          pbVar14 = pbVar14 + 1;
          *param_1 = (long)pbVar12;
          pbVar15 = pbVar5;
        } while (pbVar12 != pbVar5);
        pvVar16 = (void *)param_1[0x266];
        lVar13 = *(long *)((long)pvVar16 + 8);
        puVar7 = (undefined8 *)pvVar16;
        if (lVar13 - 0xfd0U < 0xfffffffffffff010) {
          puVar7 = (undefined8 *)malloc(0x1000);
          if (puVar7 == (undefined8 *)0x0) goto LAB_0020a6a4;
          lVar13 = 0;
          *puVar7 = pvVar16;
          puVar7[1] = 0;
          param_1[0x266] = (long)puVar7;
        }
        *(long *)((long)puVar7 + 8) = lVar13 + 0x20;
        local_38 = (undefined8 *)((long)puVar7 + lVar13 + 0x10);
        *local_38 = &PTR_FUN_0021ae40;
        *(byte **)((long)puVar7 + lVar13 + 0x20) = pbVar1;
        *(undefined1 *)((long)puVar7 + lVar13 + 0x18) = 8;
        *(long *)((long)puVar7 + lVar13 + 0x28) = (long)pbVar15 - (long)pbVar1;
        *(ushort *)((long)puVar7 + lVar13 + 0x19) =
             *(ushort *)((long)puVar7 + lVar13 + 0x19) & 0xf000 | 0x540;
        pcVar4 = (char *)*param_1;
        if ((pcVar4 != (char *)param_1[1]) && (*pcVar4 == '_')) {
          pcVar2 = pcVar4 + 1;
          *param_1 = (long)pcVar2;
          if ((pcVar2 != (char *)param_1[1]) && (*pcVar2 == 'p')) {
            *param_1 = (long)(pcVar4 + 2);
            puVar7 = (undefined8 *)FUN_0020bdd8(param_1,&local_38);
            return puVar7;
          }
          local_40 = (undefined8 *)FUN_001f6040();
          if (local_40 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          puVar7 = (undefined8 *)FUN_0020be78(param_1,&local_40,&local_38);
          return puVar7;
        }
        goto LAB_0020a42c;
      }
      if (bVar6 != 0x5f) goto LAB_0020a5dc;
      *param_1 = (long)psVar3 + 3;
      lVar13 = FUN_001f6040();
      if (lVar13 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar16 = (void *)param_1[0x266];
      lVar10 = *(long *)((long)pvVar16 + 8);
      puVar8 = (undefined8 *)pvVar16;
      if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
        puVar8 = (undefined8 *)malloc(0x1000);
        if (puVar8 == (undefined8 *)0x0) goto LAB_0020a6a4;
        lVar10 = 0;
        *puVar8 = pvVar16;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar10 + 0x20;
      puVar7 = (undefined8 *)((long)puVar8 + lVar10 + 0x10);
      *puVar7 = &PTR_FUN_0021d520;
      uVar9 = *(ushort *)((long)puVar8 + lVar10 + 0x19);
      *(long *)((long)puVar8 + lVar10 + 0x20) = lVar13;
      *(undefined8 *)((long)puVar8 + lVar10 + 0x28) = 0;
    }
    *(undefined1 *)(puVar7 + 1) = 0x1d;
    *(ushort *)((long)puVar7 + 9) = uVar9 & 0xf000 | 0x540;
  }
  return puVar7;
}


// ===== 0020a6a8  FUN_0020a6a8 =====

undefined8 * FUN_0020a6a8(long *param_1)

{
  short *psVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  void *pvVar8;
  
  psVar1 = (short *)*param_1;
  if ((ulong)(param_1[1] - (long)psVar1) < 2) {
LAB_0020a6d0:
    puVar2 = (undefined8 *)FUN_001f758c(param_1,0);
    return puVar2;
  }
  if (*psVar1 == 0x7354) {
    pcVar6 = "struct";
    uVar7 = 6;
  }
  else if (*psVar1 == 0x7554) {
    pcVar6 = "union";
    uVar7 = 5;
  }
  else {
    if (*psVar1 != 0x6554) goto LAB_0020a6d0;
    pcVar6 = "enum";
    uVar7 = 4;
  }
  *param_1 = (long)(psVar1 + 1);
  puVar3 = (undefined8 *)FUN_001f758c(param_1,0);
  puVar2 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    pvVar8 = (void *)param_1[0x266];
    lVar5 = *(long *)((long)pvVar8 + 8);
    puVar4 = (undefined8 *)pvVar8;
    if (lVar5 - 0xfc0U < 0xfffffffffffff010) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar5 = 0;
      *puVar4 = pvVar8;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar5 + 0x30;
    puVar2 = (undefined8 *)((long)puVar4 + lVar5 + 0x10);
    *puVar2 = &PTR_FUN_0021d670;
    *(undefined1 *)((long)puVar4 + lVar5 + 0x18) = 6;
    *(undefined8 **)((long)puVar4 + lVar5 + 0x30) = puVar3;
    *(char **)((long)puVar4 + lVar5 + 0x20) = pcVar6;
    *(undefined8 *)((long)puVar4 + lVar5 + 0x28) = uVar7;
    *(ushort *)((long)puVar4 + lVar5 + 0x19) =
         *(ushort *)((long)puVar4 + lVar5 + 0x19) & 0xf000 | 0x540;
  }
  return puVar2;
}


// ===== 0020a7f4  FUN_0020a7f4 =====

void FUN_0020a7f4(long param_1,long *param_2)

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
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_0021d6e0;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0xc;
  *(ushort *)((long)puVar2 + lVar3 + 0x19) =
       uVar1 & 0xc0 | 0x500 | *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000;
  *(long *)((long)puVar2 + lVar3 + 0x20) = lVar4;
  return;
}


// ===== 0020a8a0  FUN_0020a8a0 =====

void FUN_0020a8a0(long param_1,long *param_2,undefined4 *param_3)

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
  *(undefined ***)((long)puVar3 + lVar4 + 0x10) = &PTR_FUN_0021d750;
  *(undefined1 *)((long)puVar3 + lVar4 + 0x18) = 0xd;
  *(long *)((long)puVar3 + lVar4 + 0x20) = lVar5;
  *(undefined4 *)((long)puVar3 + lVar4 + 0x28) = uVar1;
  *(ushort *)((long)puVar3 + lVar4 + 0x19) =
       uVar2 & 0xc0 | 0x500 | *(ushort *)((long)puVar3 + lVar4 + 0x19) & 0xf000;
  *(undefined1 *)((long)puVar3 + lVar4 + 0x2c) = 0;
  return;
}


// ===== 0020a95c  FUN_0020a95c =====

void FUN_0020a95c(long param_1,undefined8 *param_2)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0021d440;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 5;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  *(char **)((long)puVar1 + lVar2 + 0x28) = " complex";
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = 8;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  return;
}


// ===== 0020aa0c  FUN_0020aa0c =====

void FUN_0020aa0c(long param_1,undefined8 *param_2)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0021d440;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 5;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  *(char **)((long)puVar1 + lVar2 + 0x28) = " imaginary";
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = 10;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  return;
}


// ===== 0020aabc  FUN_0020aabc =====

void FUN_0020aabc(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  size_t sVar5;
  long *plVar6;
  
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar2 + 8U) {
    sVar5 = param_2[2] * 2;
    uVar4 = lVar2 + 1000;
    if (sVar5 < uVar4 || sVar5 - uVar4 == 0) {
      sVar5 = uVar4;
    }
    param_2[2] = sVar5;
    pvVar1 = realloc(pvVar1,sVar5);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
  }
  *(undefined8 *)((long)pvVar1 + lVar2) = 0x7470656378656f6e;
  lVar3 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar4 = lVar3 + 9;
  lVar2 = lVar3 + 8;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  param_2[1] = lVar2;
  if ((ulong)param_2[2] < uVar4) {
    sVar5 = param_2[2] * 2;
    uVar4 = lVar3 + 0x3e9;
    if (sVar5 < uVar4 || sVar5 - uVar4 == 0) {
      sVar5 = uVar4;
    }
    param_2[2] = sVar5;
    pvVar1 = realloc(pvVar1,sVar5);
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
  plVar6 = *(long **)(param_1 + 0x10);
  if ((*(ushort *)((long)plVar6 + 9) & 0x3f) < 0x13) {
    (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
    if ((*(ushort *)((long)plVar6 + 9) & 0xc0) != 0x40) {
      (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
    }
  }
  else {
    lVar2 = param_2[1];
    pvVar1 = (void *)*param_2;
    uVar4 = lVar2 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    if ((ulong)param_2[2] < uVar4) {
      sVar5 = param_2[2] * 2;
      uVar4 = lVar2 + 0x3e1;
      if (sVar5 < uVar4 || sVar5 - uVar4 == 0) {
        sVar5 = uVar4;
      }
      param_2[2] = sVar5;
      pvVar1 = realloc(pvVar1,sVar5);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = param_2[1];
      uVar4 = lVar2 + 1;
    }
    param_2[1] = uVar4;
    lVar3 = *plVar6;
    *(undefined1 *)((long)pvVar1 + lVar2) = 0x28;
    (**(code **)(lVar3 + 0x20))(plVar6,param_2);
    if ((*(ushort *)((long)plVar6 + 9) & 0xc0) != 0x40) {
      (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
    }
    lVar2 = param_2[1];
    pvVar1 = (void *)*param_2;
    uVar4 = lVar2 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
    if ((ulong)param_2[2] < uVar4) {
      sVar5 = param_2[2] * 2;
      uVar4 = lVar2 + 0x3e1;
      if (sVar5 < uVar4 || sVar5 - uVar4 == 0) {
        sVar5 = uVar4;
      }
      param_2[2] = sVar5;
      pvVar1 = realloc(pvVar1,sVar5);
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
  }
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar4 = lVar2 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar4) {
    sVar5 = param_2[2] * 2;
    uVar4 = lVar2 + 0x3e1;
    if (sVar5 < uVar4 || sVar5 - uVar4 == 0) {
      sVar5 = uVar4;
    }
    param_2[2] = sVar5;
    pvVar1 = realloc(pvVar1,sVar5);
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


// ===== 0020ad2c  FUN_0020ad2c =====

void FUN_0020ad2c(void *param_1)

{
  operator_delete(param_1,0x18);
  return;
}


// ===== 0020ad38  FUN_0020ad38 =====

void FUN_0020ad38(long param_1,undefined8 *param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  size_t sVar5;
  
  lVar3 = param_2[1];
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 5U) {
    sVar5 = param_2[2] * 2;
    uVar4 = lVar3 + 0x3e5;
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
  *(undefined1 *)((undefined4 *)((long)pvVar2 + lVar3) + 1) = 0x77;
  *(undefined4 *)((long)pvVar2 + lVar3) = 0x6f726874;
  lVar1 = param_2[1];
  pvVar2 = (void *)*param_2;
  uVar4 = lVar1 + 6;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  lVar3 = lVar1 + 5;
  param_2[1] = lVar3;
  if ((ulong)param_2[2] < uVar4) {
    sVar5 = param_2[2] * 2;
    uVar4 = lVar1 + 0x3e6;
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
  FUN_00200418(param_1 + 0x10,param_2);
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


// ===== 0020ae80  FUN_0020ae80 =====

void FUN_0020ae80(void *param_1)

{
  operator_delete(param_1,0x20);
  return;
}


// ===== 0020ae8c  FUN_0020ae8c =====

undefined8 FUN_0020ae8c(void)

{
  return 1;
}


// ===== 0020ae98  FUN_0020ae98 =====

undefined8 FUN_0020ae98(void)

{
  return 1;
}


// ===== 0020aea4  FUN_0020aea4 =====

void FUN_0020aea4(long param_1,undefined8 *param_2)

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


// ===== 0020af28  FUN_0020af28 =====

void FUN_0020af28(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  uint uVar3;
  long lVar4;
  size_t sVar5;
  ulong uVar6;
  long *plVar7;
  
  lVar4 = param_2[1];
  pvVar2 = (void *)*param_2;
  uVar6 = lVar4 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  if ((ulong)param_2[2] < uVar6) {
    sVar5 = param_2[2] * 2;
    uVar6 = lVar4 + 0x3e1;
    if (sVar5 < uVar6 || sVar5 - uVar6 == 0) {
      sVar5 = uVar6;
    }
    param_2[2] = sVar5;
    pvVar2 = realloc(pvVar2,sVar5);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
    uVar6 = lVar4 + 1;
  }
  param_2[1] = uVar6;
  *(undefined1 *)((long)pvVar2 + lVar4) = 0x28;
  FUN_00200418(param_1 + 0x18,param_2);
  lVar4 = param_2[1];
  pvVar2 = (void *)*param_2;
  uVar6 = lVar4 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar6) {
    sVar5 = param_2[2] * 2;
    uVar6 = lVar4 + 0x3e1;
    if (sVar5 < uVar6 || sVar5 - uVar6 == 0) {
      sVar5 = uVar6;
    }
    param_2[2] = sVar5;
    pvVar2 = realloc(pvVar2,sVar5);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
    uVar6 = lVar4 + 1;
  }
  param_2[1] = uVar6;
  *(undefined1 *)((long)pvVar2 + lVar4) = 0x29;
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))(*(long **)(param_1 + 0x10),param_2);
  uVar3 = *(uint *)(param_1 + 0x28);
  if ((uVar3 & 1) != 0) {
    lVar4 = param_2[1];
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar4 + 6U) {
      sVar5 = param_2[2] * 2;
      uVar6 = lVar4 + 0x3e6;
      if (sVar5 < uVar6 || sVar5 - uVar6 == 0) {
        sVar5 = uVar6;
      }
      param_2[2] = sVar5;
      pvVar2 = realloc(pvVar2,sVar5);
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
      sVar5 = param_2[2] * 2;
      uVar6 = lVar4 + 0x3e9;
      if (sVar5 < uVar6 || sVar5 - uVar6 == 0) {
        sVar5 = uVar6;
      }
      param_2[2] = sVar5;
      pvVar2 = realloc(pvVar2,sVar5);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
    }
    uVar1 = s_volatile_0012ced2._0_8_;
    ((char *)((long)pvVar2 + lVar4))[8] = 'e';
    *(undefined8 *)((long)pvVar2 + lVar4) = uVar1;
    uVar3 = *(uint *)(param_1 + 0x28);
    param_2[1] = param_2[1] + 9;
  }
  if ((uVar3 >> 2 & 1) != 0) {
    lVar4 = param_2[1];
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar4 + 9U) {
      sVar5 = param_2[2] * 2;
      uVar6 = lVar4 + 0x3e9;
      if (sVar5 < uVar6 || sVar5 - uVar6 == 0) {
        sVar5 = uVar6;
      }
      param_2[2] = sVar5;
      pvVar2 = realloc(pvVar2,sVar5);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
    }
    uVar1 = s_restrict_0012d39f._0_8_;
    ((char *)((long)pvVar2 + lVar4))[8] = 't';
    *(undefined8 *)((long)pvVar2 + lVar4) = uVar1;
    param_2[1] = param_2[1] + 9;
  }
  if (*(char *)(param_1 + 0x2c) == '\x02') {
    lVar4 = param_2[1];
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar4 + 3U) {
      sVar5 = param_2[2] * 2;
      uVar6 = lVar4 + 0x3e3;
      if (sVar5 < uVar6 || sVar5 - uVar6 == 0) {
        sVar5 = uVar6;
      }
      param_2[2] = sVar5;
      pvVar2 = realloc(pvVar2,sVar5);
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
    if (*(char *)(param_1 + 0x2c) != '\x01') goto LAB_0020b1f4;
    lVar4 = param_2[1];
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar4 + 2U) {
      sVar5 = param_2[2] * 2;
      uVar6 = lVar4 + 0x3e2;
      if (sVar5 < uVar6 || sVar5 - uVar6 == 0) {
        sVar5 = uVar6;
      }
      param_2[2] = sVar5;
      pvVar2 = realloc(pvVar2,sVar5);
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
LAB_0020b1f4:
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar4 = param_2[1];
    pvVar2 = (void *)*param_2;
    uVar6 = lVar4 + 1;
    if ((ulong)param_2[2] < uVar6) {
      sVar5 = param_2[2] * 2;
      uVar6 = lVar4 + 0x3e1;
      if (sVar5 < uVar6 || sVar5 - uVar6 == 0) {
        sVar5 = uVar6;
      }
      param_2[2] = sVar5;
      pvVar2 = realloc(pvVar2,sVar5);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
      uVar6 = lVar4 + 1;
    }
    param_2[1] = uVar6;
    *(undefined1 *)((long)pvVar2 + lVar4) = 0x20;
    plVar7 = *(long **)(param_1 + 0x30);
    (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
    if ((*(ushort *)((long)plVar7 + 9) & 0xc0) != 0x40) {
                    /* WARNING: Could not recover jumptable at 0x0020b298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
      return;
    }
  }
  return;
}


// ===== 0020b2bc  FUN_0020b2bc =====

void FUN_0020b2bc(void *param_1)

{
  operator_delete(param_1,0x38);
  return;
}


// ===== 0020b2c8  FUN_0020b2c8 =====

void FUN_0020b2c8(long param_1,undefined8 *param_2)

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


// ===== 0020b434  FUN_0020b434 =====

void FUN_0020b434(void *param_1)

{
  operator_delete(param_1,0x28);
  return;
}


// ===== 0020b440  FUN_0020b440 =====

void FUN_0020b440(long param_1,undefined8 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0020b5a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
    return;
  }
  return;
}


// ===== 0020b5ac  FUN_0020b5ac =====

void FUN_0020b5ac(void *param_1)

{
  operator_delete(param_1,0x30);
  return;
}


// ===== 0020b5b8  FUN_0020b5b8 =====

ulong FUN_0020b5b8(long param_1)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *(byte *)((long)*(undefined8 **)(param_1 + 0x10) + 9);
  if ((bVar1 & 0xc0) == 0x80) {
                    /* WARNING: Could not recover jumptable at 0x0020b5d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x10))();
    return uVar2;
  }
  return (ulong)(bVar1 < 0x40);
}


// ===== 0020b5e8  FUN_0020b5e8 =====

ulong FUN_0020b5e8(long param_1)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *(byte *)((long)*(long **)(param_1 + 0x10) + 10);
  if ((bVar1 & 3) == 2) {
                    /* WARNING: Could not recover jumptable at 0x0020b608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 8))();
    return uVar2;
  }
  return (ulong)((bVar1 & 3) == 0);
}


// ===== 0020b618  FUN_0020b618 =====

ulong FUN_0020b618(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  
  uVar1 = *(ushort *)((long)*(long **)(param_1 + 0x10) + 9) >> 10 & 3;
  if (uVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x0020b638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
    return uVar2;
  }
  return (ulong)(uVar1 == 0);
}


// ===== 0020b648  FUN_0020b648 =====

void FUN_0020b648(long param_1,undefined8 *param_2)

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
    uVar2 = s_volatile_0012ced2._0_8_;
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
    uVar2 = s_restrict_0012d39f._0_8_;
    ((char *)((long)pvVar3 + lVar5))[8] = 't';
    *(undefined8 *)((long)pvVar3 + lVar5) = uVar2;
    param_2[1] = param_2[1] + 9;
  }
  return;
}


// ===== 0020b7c0  FUN_0020b7c0 =====

void FUN_0020b7c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0020b7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))();
  return;
}


// ===== 0020b7d4  FUN_0020b7d4 =====

void FUN_0020b7d4(void *param_1)

{
  operator_delete(param_1,0x18);
  return;
}


// ===== 0020b7e0  FUN_0020b7e0 =====

void FUN_0020b7e0(long param_1,undefined8 *param_2)

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


// ===== 0020b94c  FUN_0020b94c =====

void FUN_0020b94c(void *param_1)

{
  operator_delete(param_1,0x28);
  return;
}


// ===== 0020b958  FUN_0020b958 =====

void FUN_0020b958(long param_1,undefined8 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0020ba28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  return;
}


// ===== 0020ba30  FUN_0020ba30 =====

void FUN_0020ba30(void *param_1)

{
  operator_delete(param_1,0x18);
  return;
}


// ===== 0020ba3c  FUN_0020ba3c =====

void FUN_0020ba3c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  long lVar3;
  size_t sVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  
  lVar3 = param_2[1];
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar3 + 9U) {
      sVar4 = param_2[2] * 2;
      uVar6 = lVar3 + 0x3e9;
      if (sVar4 < uVar6 || sVar4 - uVar6 == 0) {
        sVar4 = uVar6;
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
    uVar1 = s_unsigned_00125d0d._0_8_;
    ((char *)((long)pvVar2 + lVar3))[8] = ' ';
    *(undefined8 *)((long)pvVar2 + lVar3) = uVar1;
    lVar3 = param_2[1] + 9;
    param_2[1] = lVar3;
  }
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 7U) {
    sVar4 = param_2[2] * 2;
    uVar6 = lVar3 + 999;
    if (sVar4 < uVar6 || sVar4 - uVar6 == 0) {
      sVar4 = uVar6;
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
  *(undefined4 *)((long)pvVar2 + lVar3 + 3) = 0x746e4974;
  *(undefined4 *)((long)pvVar2 + lVar3) = 0x7469425f;
  lVar5 = param_2[1];
  pvVar2 = (void *)*param_2;
  uVar6 = lVar5 + 8;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  lVar3 = lVar5 + 7;
  param_2[1] = lVar3;
  if ((ulong)param_2[2] < uVar6) {
    sVar4 = param_2[2] * 2;
    uVar6 = lVar5 + 1000;
    if (sVar4 < uVar6 || sVar4 - uVar6 == 0) {
      sVar4 = uVar6;
    }
    param_2[2] = sVar4;
    pvVar2 = realloc(pvVar2,sVar4);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
    uVar6 = lVar3 + 1;
  }
  param_2[1] = uVar6;
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x28;
  plVar7 = *(long **)(param_1 + 0x10);
  if ((*(ushort *)((long)plVar7 + 9) & 0x3f) < 0x13) {
    (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
    if ((*(ushort *)((long)plVar7 + 9) & 0xc0) != 0x40) {
      (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
    }
  }
  else {
    lVar3 = param_2[1];
    pvVar2 = (void *)*param_2;
    uVar6 = lVar3 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    if ((ulong)param_2[2] < uVar6) {
      sVar4 = param_2[2] * 2;
      uVar6 = lVar3 + 0x3e1;
      if (sVar4 < uVar6 || sVar4 - uVar6 == 0) {
        sVar4 = uVar6;
      }
      param_2[2] = sVar4;
      pvVar2 = realloc(pvVar2,sVar4);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
      uVar6 = lVar3 + 1;
    }
    param_2[1] = uVar6;
    lVar5 = *plVar7;
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x28;
    (**(code **)(lVar5 + 0x20))(plVar7,param_2);
    if ((*(ushort *)((long)plVar7 + 9) & 0xc0) != 0x40) {
      (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
    }
    lVar3 = param_2[1];
    pvVar2 = (void *)*param_2;
    uVar6 = lVar3 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
    if ((ulong)param_2[2] < uVar6) {
      sVar4 = param_2[2] * 2;
      uVar6 = lVar3 + 0x3e1;
      if (sVar4 < uVar6 || sVar4 - uVar6 == 0) {
        sVar4 = uVar6;
      }
      param_2[2] = sVar4;
      pvVar2 = realloc(pvVar2,sVar4);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
      uVar6 = lVar3 + 1;
    }
    param_2[1] = uVar6;
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x29;
  }
  lVar3 = param_2[1];
  pvVar2 = (void *)*param_2;
  uVar6 = lVar3 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar6) {
    sVar4 = param_2[2] * 2;
    uVar6 = lVar3 + 0x3e1;
    if (sVar4 < uVar6 || sVar4 - uVar6 == 0) {
      sVar4 = uVar6;
    }
    param_2[2] = sVar4;
    pvVar2 = realloc(pvVar2,sVar4);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
    uVar6 = lVar3 + 1;
  }
  param_2[1] = uVar6;
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x29;
  return;
}


// ===== 0020bd1c  FUN_0020bd1c =====

void FUN_0020bd1c(void *param_1)

{
  operator_delete(param_1,0x20);
  return;
}


// ===== 0020bd28  FUN_0020bd28 =====

void FUN_0020bd28(long param_1,undefined8 *param_2)

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


// ===== 0020bdcc  FUN_0020bdcc =====

void FUN_0020bdcc(void *param_1)

{
  operator_delete(param_1,0x28);
  return;
}


// ===== 0020bdd8  FUN_0020bdd8 =====

void FUN_0020bdd8(long param_1,undefined8 *param_2)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0021d4b0;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x1e;
  uVar3 = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  return;
}


// ===== 0020be78  FUN_0020be78 =====

void FUN_0020be78(long param_1,undefined8 *param_2,undefined8 *param_3)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0021d520;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x1d;
  uVar3 = *param_2;
  uVar4 = *param_3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar4;
  return;
}


// ===== 0020bf20  FUN_0020bf20 =====

void FUN_0020bf20(long param_1,undefined8 *param_2)

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
  uVar2 = CONCAT53(s_pixel_vector__0012d8bf._8_5_,s_pixel_vector__0012d8bf._5_3_);
  *(undefined8 *)((long)pvVar3 + lVar4) =
       CONCAT35(s_pixel_vector__0012d8bf._5_3_,s_pixel_vector__0012d8bf._0_5_);
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


// ===== 0020c040  FUN_0020c040 =====

void FUN_0020c040(void *param_1)

{
  operator_delete(param_1,0x18);
  return;
}


// ===== 0020c04c  FUN_0020c04c =====

void FUN_0020c04c(long param_1,undefined8 *param_2)

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


// ===== 0020c1a0  FUN_0020c1a0 =====

void FUN_0020c1a0(void *param_1)

{
  operator_delete(param_1,0x20);
  return;
}


// ===== 0020c1ac  FUN_0020c1ac =====

void FUN_0020c1ac(long param_1,undefined8 *param_2,undefined8 *param_3)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0021d590;
  uVar4 = *param_2;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0xf;
  uVar3 = *param_3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x400;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar4;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar3;
  return;
}


// ===== 0020c250  FUN_0020c250 =====

undefined8 FUN_0020c250(void)

{
  return 1;
}


// ===== 0020c25c  FUN_0020c25c =====

undefined8 FUN_0020c25c(void)

{
  return 1;
}


// ===== 0020c268  FUN_0020c268 =====

void FUN_0020c268(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0020c278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  return;
}


// ===== 0020c27c  FUN_0020c27c =====

void FUN_0020c27c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  size_t sVar4;
  long *plVar5;
  
  lVar3 = param_2[1];
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_001f3180("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/Utility.h",0xae,&DAT_00125cb4)
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
                    /* WARNING: Could not recover jumptable at 0x0020c3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x28))(plVar5,param_2);
  return;
}


// ===== 0020c420  FUN_0020c420 =====

void FUN_0020c420(void *param_1)

{
  operator_delete(param_1,0x20);
  return;
}


// ===== 0020c42c  FUN_0020c42c =====

void FUN_0020c42c(long param_1,undefined8 *param_2,long *param_3)

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
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_0021d600;
  uVar5 = *param_2;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0xe;
  *(ushort *)((long)puVar2 + lVar3 + 0x19) =
       uVar1 & 0xc0 | 0x500 | *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x20) = uVar5;
  *(long *)((long)puVar2 + lVar3 + 0x28) = lVar4;
  return;
}


// ===== 0020c4e0  FUN_0020c4e0 =====

ulong FUN_0020c4e0(long param_1)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *(byte *)((long)*(undefined8 **)(param_1 + 0x18) + 9);
  if ((bVar1 & 0xc0) == 0x80) {
                    /* WARNING: Could not recover jumptable at 0x0020c500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x18))();
    return uVar2;
  }
  return (ulong)(bVar1 < 0x40);
}


// ===== 0020c510  FUN_0020c510 =====

void FUN_0020c510(long param_1,undefined8 *param_2)

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
      if ((uVar4 & 1) != 0) goto LAB_0020c594;
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
      goto LAB_0020c610;
    }
  }
LAB_0020c594:
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
LAB_0020c610:
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


// ===== 0020c6d0  FUN_0020c6d0 =====

void FUN_0020c6d0(long param_1,undefined8 *param_2)

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
      if ((uVar4 & 1) != 0) goto LAB_0020c744;
      plVar3 = *(long **)(param_1 + 0x18);
      uVar1 = *(ushort *)((long)plVar3 + 9);
    }
    if (((uVar1 >> 10 & 3) != 0) &&
       (((uVar1 >> 10 & 3) != 2 ||
        (uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2), (uVar4 & 1) == 0))))
    goto LAB_0020c790;
  }
LAB_0020c744:
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
LAB_0020c790:
                    /* WARNING: Could not recover jumptable at 0x0020c7ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),param_2);
  return;
}


// ===== 0020c7b4  FUN_0020c7b4 =====

void FUN_0020c7b4(void *param_1)

{
  operator_delete(param_1,0x20);
  return;
}


// ===== 0020c7c0  FUN_0020c7c0 =====

void FUN_0020c7c0(long param_1,undefined8 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0020c8e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}


// ===== 0020c8f0  FUN_0020c8f0 =====

void FUN_0020c8f0(void *param_1)

{
  operator_delete(param_1,0x28);
  return;
}


// ===== 0020c8fc  FUN_0020c8fc =====

ulong FUN_0020c8fc(long param_1)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *(byte *)((long)*(undefined8 **)(param_1 + 0x10) + 9);
  if ((bVar1 & 0xc0) == 0x80) {
                    /* WARNING: Could not recover jumptable at 0x0020c91c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x10))();
    return uVar2;
  }
  return (ulong)(bVar1 < 0x40);
}


// ===== 0020c92c  FUN_0020c92c =====

void FUN_0020c92c(long param_1,undefined8 *param_2)

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
    goto LAB_0020cb20;
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
LAB_0020ca90:
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
      if ((uVar4 & 1) != 0) goto LAB_0020ca90;
      plVar3 = *(long **)(param_1 + 0x10);
      uVar1 = *(ushort *)((long)plVar3 + 9);
    }
    if (((uVar1 >> 10 & 3) == 0) ||
       (((uVar1 >> 10 & 3) == 2 &&
        (uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2), (uVar4 & 1) != 0))))
    goto LAB_0020ca90;
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
LAB_0020cb20:
  *(undefined1 *)((long)pvVar5 + lVar6) = uVar7;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 0020cc6c  FUN_0020cc6c =====

void FUN_0020cc6c(long param_1,undefined8 *param_2)

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
      if ((uVar4 & 1) != 0) goto LAB_0020cd40;
      plVar3 = *(long **)(param_1 + 0x10);
      uVar1 = *(ushort *)((long)plVar3 + 9);
    }
    if (((uVar1 >> 10 & 3) != 0) &&
       (((uVar1 >> 10 & 3) != 2 ||
        (uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2), (uVar4 & 1) == 0))))
    goto LAB_0020cd8c;
  }
LAB_0020cd40:
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
LAB_0020cd8c:
                    /* WARNING: Could not recover jumptable at 0x0020cda8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))(*(long **)(param_1 + 0x10),param_2);
  return;
}


// ===== 0020cdc0  FUN_0020cdc0 =====

void FUN_0020cdc0(void *param_1)

{
  operator_delete(param_1,0x18);
  return;
}


// ===== 0020cdcc  FUN_0020cdcc =====

ulong FUN_0020cdcc(long param_1)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *(byte *)((long)*(undefined8 **)(param_1 + 0x10) + 9);
  if ((bVar1 & 0xc0) == 0x80) {
                    /* WARNING: Could not recover jumptable at 0x0020cdec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x10))();
    return uVar2;
  }
  return (ulong)(bVar1 < 0x40);
}


// ===== 0020cdfc  FUN_0020cdfc =====

void FUN_0020cdfc(long param_1,undefined8 *param_2)

{
  undefined *__src;
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  ulong uVar5;
  void *pvVar6;
  long *plVar7;
  long lVar8;
  size_t __size;
  size_t sVar9;
  undefined1 auVar10 [16];
  
  bVar1 = *(byte *)(param_1 + 0x1c);
  if ((bVar1 & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x1c) = 1;
                    /* try { // try from 0020ce2c to 0020cf1f has its CatchHandler @ 0020d00c */
  auVar10 = FUN_0020d140();
  plVar7 = auVar10._8_8_;
  if (plVar7 == (long *)0x0) goto LAB_0020cfe4;
  (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
  if (((*(byte *)((long)plVar7 + 10) & 3) == 0) ||
     (((*(byte *)((long)plVar7 + 10) & 3) == 2 &&
      (uVar5 = (**(code **)(*plVar7 + 8))(plVar7,param_2), (uVar5 & 1) != 0)))) {
    lVar8 = param_2[1];
    pvVar6 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar8 + 1U) {
      sVar9 = param_2[2] * 2;
      uVar5 = lVar8 + 0x3e1;
      if (sVar9 < uVar5 || sVar9 - uVar5 == 0) {
        sVar9 = uVar5;
      }
      param_2[2] = sVar9;
      pvVar6 = realloc(pvVar6,sVar9);
      *param_2 = pvVar6;
      if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar8 = param_2[1];
    }
    *(undefined1 *)((long)pvVar6 + lVar8) = 0x20;
    param_2[1] = param_2[1] + 1;
  }
  uVar2 = *(ushort *)((long)plVar7 + 9);
  uVar3 = uVar2 >> 8 & 3;
  if (uVar3 == 0) {
LAB_0020cf24:
    lVar8 = param_2[1];
    pvVar6 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar8 + 1U) {
      sVar9 = param_2[2] * 2;
      uVar5 = lVar8 + 0x3e1;
      if (sVar9 < uVar5 || sVar9 - uVar5 == 0) {
        sVar9 = uVar5;
      }
      param_2[2] = sVar9;
      pvVar6 = realloc(pvVar6,sVar9);
      *param_2 = pvVar6;
      if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar8 = param_2[1];
    }
    *(undefined1 *)((long)pvVar6 + lVar8) = 0x28;
    param_2[1] = param_2[1] + 1;
  }
  else {
    if (uVar3 == 2) {
      uVar5 = (**(code **)(*plVar7 + 8))(plVar7,param_2);
      if ((uVar5 & 1) != 0) goto LAB_0020cf24;
      uVar2 = *(ushort *)((long)plVar7 + 9);
    }
    if (((uVar2 >> 10 & 3) == 0) ||
       (((uVar2 >> 10 & 3) == 2 &&
        (uVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,param_2), (uVar5 & 1) != 0))))
    goto LAB_0020cf24;
  }
  bVar4 = (auVar10 & (undefined1  [16])0xffffffff) != (undefined1  [16])0x0;
  sVar9 = 1;
  if (bVar4) {
    sVar9 = 2;
  }
  lVar8 = param_2[1];
  pvVar6 = (void *)*param_2;
  __src = &UNK_0012677e;
  if (bVar4) {
    __src = &DAT_00126780;
  }
  if ((ulong)param_2[2] < lVar8 + sVar9) {
    __size = param_2[2] * 2;
    uVar5 = lVar8 + sVar9 + 0x3e0;
    if (__size < uVar5 || __size - uVar5 == 0) {
      __size = uVar5;
    }
    param_2[2] = __size;
    pvVar6 = realloc(pvVar6,__size);
    *param_2 = pvVar6;
    if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar8 = param_2[1];
  }
  memcpy((void *)((long)pvVar6 + lVar8),__src,sVar9);
  param_2[1] = param_2[1] + sVar9;
LAB_0020cfe4:
  *(byte *)(param_1 + 0x1c) = bVar1;
  return;
}


// ===== 0020d014  FUN_0020d014 =====

void FUN_0020d014(long param_1,undefined8 *param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ulong uVar4;
  void *__ptr;
  long *extraout_x1;
  long lVar5;
  size_t __size;
  
  bVar1 = *(byte *)(param_1 + 0x1c);
  if ((bVar1 & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x1c) = 1;
                    /* try { // try from 0020d040 to 0020d107 has its CatchHandler @ 0020d124 */
  FUN_0020d140();
  if (extraout_x1 == (long *)0x0) goto LAB_0020d108;
  uVar2 = *(ushort *)((long)extraout_x1 + 9);
  uVar3 = uVar2 >> 8 & 3;
  if (uVar3 == 0) {
LAB_0020d0a8:
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
  }
  else {
    if (uVar3 == 2) {
      uVar4 = (**(code **)(*extraout_x1 + 8))(extraout_x1,param_2);
      if ((uVar4 & 1) != 0) goto LAB_0020d0a8;
      uVar2 = *(ushort *)((long)extraout_x1 + 9);
    }
    if (((uVar2 >> 10 & 3) == 0) ||
       (((uVar2 >> 10 & 3) == 2 &&
        (uVar4 = (**(code **)(*extraout_x1 + 0x10))(extraout_x1,param_2), (uVar4 & 1) != 0))))
    goto LAB_0020d0a8;
  }
  (**(code **)(*extraout_x1 + 0x28))(extraout_x1,param_2);
LAB_0020d108:
  *(byte *)(param_1 + 0x1c) = bVar1;
  return;
}


// ===== 0020d12c  FUN_0020d12c =====

void FUN_0020d12c(void)

{
  return;
}


// ===== 0020d134  FUN_0020d134 =====

void FUN_0020d134(void *param_1)

{
  operator_delete(param_1,0x20);
  return;
}


// ===== 0020d140  FUN_0020d140 =====

undefined1  [16] FUN_0020d140(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  size_t __n;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  plVar5 = *(long **)(param_1 + 0x10);
  local_98 = (undefined8 *)&stack0xffffffffffffffb0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uVar6 = *(uint *)(param_1 + 0x18);
  local_a8 = &local_90;
  local_a0 = &local_90;
  do {
    do {
                    /* try { // try from 0020d194 to 0020d19f has its CatchHandler @ 0020d2dc */
      lVar1 = (**(code **)(*plVar5 + 0x18))(plVar5,param_2);
      if (*(char *)(lVar1 + 8) != '\r') {
        uVar7 = uVar6;
        if (local_a8 == &local_90) goto LAB_0020d288;
        goto LAB_0020d284;
      }
      plVar5 = *(long **)(lVar1 + 0x10);
      uVar7 = *(uint *)(lVar1 + 0x18);
      if ((int)uVar6 <= (int)*(uint *)(lVar1 + 0x18)) {
        uVar7 = uVar6;
      }
      if (local_a0 == local_98) {
        __n = (long)local_a0 - (long)local_a8;
        if (local_a8 == &local_90) {
          puVar2 = (undefined8 *)malloc(__n * 2);
          if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (local_a0 != &local_90) {
            memmove(puVar2,local_a8,__n);
          }
        }
        else {
          puVar2 = (undefined8 *)realloc(local_a8,__n * 2);
          if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        local_a0 = (undefined8 *)((long)puVar2 + __n);
        local_98 = puVar2 + ((long)__n >> 2);
        local_a8 = puVar2;
      }
      puVar2 = local_a0 + 1;
      *local_a0 = plVar5;
      uVar3 = (long)puVar2 - (long)local_a8 >> 3;
      uVar6 = uVar7;
      local_a0 = puVar2;
    } while (uVar3 < 2);
    uVar4 = uVar3 - 1 >> 1;
    if (uVar3 <= uVar4) {
                    /* try { // try from 0020d2b0 to 0020d2cf has its CatchHandler @ 0020d2d8 */
                    /* WARNING: Subroutine does not return */
      FUN_001f3180("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0x94,
                   "Invalid access!");
    }
  } while (plVar5 != (long *)local_a8[uVar4]);
  plVar5 = (long *)0x0;
  if (local_a8 != &local_90) {
LAB_0020d284:
    free(local_a8);
    uVar7 = uVar6;
  }
LAB_0020d288:
  auVar8._4_4_ = 0;
  auVar8._0_4_ = uVar7;
  auVar8._8_8_ = plVar5;
  return auVar8;
}


// ===== 0020d2f8  operator.new =====

/* operator new(unsigned long, std::nothrow_t const&) */

void * operator_new(ulong param_1,nothrow_t *param_2)

{
  void *pvVar1;
  
                    /* try { // try from 0020d304 to 0020d307 has its CatchHandler @ 0020d314 */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}


// ===== 0020d328  operator.new[] =====

/* operator new[](unsigned long, std::nothrow_t const&) */

void * operator_new__(ulong param_1,nothrow_t *param_2)

{
  void *pvVar1;
  
                    /* try { // try from 0020d334 to 0020d337 has its CatchHandler @ 0020d344 */
  pvVar1 = operator_new__(param_1);
  return pvVar1;
}


// ===== 0020d358  operator.delete =====

/* operator delete(void*) */

void operator_delete(void *param_1)

{
  free(param_1);
  return;
}


// ===== 0020d360  operator.delete =====

/* operator delete(void*, std::nothrow_t const&) */

void operator_delete(void *param_1,nothrow_t *param_2)

{
  operator_delete(param_1);
  return;
}


// ===== 0020d368  operator.delete =====

/* operator delete(void*, unsigned long) */

void operator_delete(void *param_1,ulong param_2)

{
  operator_delete(param_1);
  return;
}


// ===== 0020d370  operator.delete[] =====

/* operator delete[](void*) */

void operator_delete__(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0020d378  operator.delete[] =====

/* operator delete[](void*, std::nothrow_t const&) */

void operator_delete__(void *param_1,nothrow_t *param_2)

{
  operator_delete__(param_1);
  return;
}


// ===== 0020d380  operator.delete[] =====

/* operator delete[](void*, unsigned long) */

void operator_delete__(void *param_1,ulong param_2)

{
  operator_delete__(param_1);
  return;
}


// ===== 0020d388  operator.new =====

/* operator new(unsigned long, std::align_val_t, std::nothrow_t const&) */

void * operator_new(void)

{
  void *pvVar1;
  
                    /* try { // try from 0020d394 to 0020d397 has its CatchHandler @ 0020d3a4 */
  pvVar1 = operator_new();
  return pvVar1;
}


// ===== 0020d3b8  operator.new[] =====

/* operator new[](unsigned long, std::align_val_t, std::nothrow_t const&) */

void * operator_new__(void)

{
  void *pvVar1;
  
                    /* try { // try from 0020d3c4 to 0020d3c7 has its CatchHandler @ 0020d3d4 */
  pvVar1 = operator_new__();
  return pvVar1;
}


// ===== 0020d3e8  operator.delete =====

/* operator delete(void*, std::align_val_t) */

void operator_delete(void *param_1)

{
  free(param_1);
  return;
}


// ===== 0020d3f0  operator.delete =====

/* operator delete(void*, std::align_val_t, std::nothrow_t const&) */

void operator_delete(void)

{
  operator_delete();
  return;
}


// ===== 0020d3f8  operator.delete =====

/* operator delete(void*, unsigned long, std::align_val_t) */

void operator_delete(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  operator_delete(param_1,param_3);
  return;
}


// ===== 0020d404  operator.delete[] =====

/* operator delete[](void*, std::align_val_t) */

void operator_delete__(void)

{
  operator_delete();
  return;
}


// ===== 0020d40c  operator.delete[] =====

/* operator delete[](void*, std::align_val_t, std::nothrow_t const&) */

void operator_delete__(void)

{
  operator_delete__();
  return;
}


// ===== 0020d414  operator.delete[] =====

/* operator delete[](void*, unsigned long, std::align_val_t) */

void operator_delete__(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  operator_delete__(param_1,param_3);
  return;
}


// ===== 0020d420  FUN_0020d420 =====

undefined8 FUN_0020d420(undefined8 *param_1)

{
  return *param_1;
}


// ===== 0020d42c  FUN_0020d42c =====

bool FUN_0020d42c(ulong *param_1)

{
  return *param_1 >> 8 == 0x434c4e47432b2b;
}


// ===== 0020d450  __cxa_allocate_exception =====

long __cxa_allocate_exception(long param_1)

{
  void *__s;
  
                    /* try { // try from 0020d464 to 0020d46b has its CatchHandler @ 0020d49c */
  __s = (void *)FUN_0020dc30(param_1 + 0x8fU & 0xfffffffffffffff0);
  if (__s != (void *)0x0) {
    memset(__s,0,param_1 + 0x8fU & 0xfffffffffffffff0);
    return (long)__s + 0x80;
  }
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 0020d4a0  __cxa_begin_catch =====

ulong * __cxa_begin_catch(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  
  uVar6 = *param_1;
                    /* try { // try from 0020d4b4 to 0020d4b7 has its CatchHandler @ 0020d538 */
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
    param_1 = (ulong *)param_1[-1];
    *(int *)(plVar3 + 1) = (int)plVar3[1] + -1;
  }
  else {
    if (*plVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    *plVar3 = (long)puVar4;
    param_1 = param_1 + 4;
  }
  return param_1;
}


// ===== 0020d53c  __cxa_free_exception =====

void __cxa_free_exception(long param_1)

{
                    /* try { // try from 0020d54c to 0020d54f has its CatchHandler @ 0020d55c */
  FUN_0020de04(param_1 + -0x80);
  return;
}


// ===== 0020d560  __cxa_init_primary_exception =====

long __cxa_init_primary_exception(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + -0x78) = 0;
  uVar1 = std::get_unexpected();
  *(undefined8 *)(param_1 + -0x60) = uVar1;
  uVar1 = std::get_terminate();
  *(undefined8 *)(param_1 + -0x70) = param_2;
  *(undefined8 *)(param_1 + -0x68) = param_3;
  *(undefined8 *)(param_1 + -0x58) = uVar1;
  *(undefined8 *)(param_1 + -0x20) = 0x434c4e47432b2b00;
  *(code **)(param_1 + -0x18) = FUN_0020d5d0;
  return param_1 + -0x80;
}


// ===== 0020d5d0  FUN_0020d5d0 =====

void FUN_0020d5d0(int param_1,long param_2)

{
  long lVar1;
  
  if (param_1 == 1) {
    lVar1 = FUN_0020f0c0(0xffffffffffffffff,param_2 + -0x58);
    if (lVar1 == 1) {
      if (*(code **)(param_2 + -0x48) != (code *)0x0) {
                    /* try { // try from 0020d608 to 0020d60f has its CatchHandler @ 0020d630 */
        (**(code **)(param_2 + -0x48))(param_2 + 0x20);
      }
                    /* try { // try from 0020d614 to 0020d617 has its CatchHandler @ 0020d634 */
      FUN_0020de04(param_2 + -0x60);
    }
    return;
  }
  FUN_001f2e00(*(undefined8 *)(param_2 + -0x38));
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0020d608 with catch @ 0020d630
                        */
  FUN_001572c4();
}


// ===== 0020d638  __cxa_allocate_dependent_exception =====

void __cxa_allocate_dependent_exception(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0020dc30(0x80);
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


// ===== 0020d674  __cxa_free_dependent_exception =====

void __cxa_free_dependent_exception(void)

{
  FUN_0020de04();
  return;
}


// ===== 0020d67c  __cxa_throw =====

undefined8 __cxa_throw(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = __cxa_get_globals();
  *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  lVar1 = __cxa_init_primary_exception(param_1,param_2,param_3);
  *(undefined8 *)(lVar1 + 8) = 1;
  FUN_0020f0f0(lVar1 + 0x60);
  lVar1 = FUN_0020d6d8(lVar1);
  __cxa_begin_catch(lVar1 + 0x60);
  lVar1 = FUN_001f2e00(*(undefined8 *)(lVar1 + 0x28));
  return *(undefined8 *)(lVar1 + -8);
}


// ===== 0020d6d8  FUN_0020d6d8 =====

undefined8 FUN_0020d6d8(long param_1)

{
  long lVar1;
  
  __cxa_begin_catch(param_1 + 0x60);
  lVar1 = FUN_001f2e00(*(undefined8 *)(param_1 + 0x28));
  return *(undefined8 *)(lVar1 + -8);
}


// ===== 0020d6fc  __cxa_get_exception_ptr =====

undefined8 __cxa_get_exception_ptr(long param_1)

{
  return *(undefined8 *)(param_1 + -8);
}


// ===== 0020d708  __cxa_end_catch =====

void __cxa_end_catch(void)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = (long *)__cxa_get_globals_fast();
  lVar3 = *plVar2;
  if (lVar3 == 0) {
    return;
  }
  if (*(ulong *)(lVar3 + 0x60) >> 8 == 0x434c4e47432b2b) {
    iVar1 = *(int *)(lVar3 + 0x38);
    if (-1 < iVar1) {
      *(int *)(lVar3 + 0x38) = iVar1 + -1;
      if (iVar1 + -1 != 0) {
        return;
      }
      *plVar2 = *(long *)(lVar3 + 0x30);
      lVar4 = lVar3;
      if (*(char *)(lVar3 + 0x60) == '\x01') {
        lVar4 = *(long *)(lVar3 + 8) + -0x80;
        FUN_0020de04(lVar3);
      }
      lVar3 = FUN_0020f0c0(0xffffffffffffffff,lVar4 + 8);
      if (lVar3 != 1) {
        return;
      }
      if (*(code **)(lVar4 + 0x18) != (code *)0x0) {
                    /* try { // try from 0020d79c to 0020d7a3 has its CatchHandler @ 0020d7ec */
        (**(code **)(lVar4 + 0x18))(lVar4 + 0x80);
      }
                    /* try { // try from 0020d7a4 to 0020d7ab has its CatchHandler @ 0020d7f0 */
      FUN_0020de04(lVar4);
      return;
    }
    *(int *)(lVar3 + 0x38) = iVar1 + 1;
    if (iVar1 != -1) {
      return;
    }
    lVar3 = *(long *)(lVar3 + 0x30);
  }
  else {
    FUN_0020f680((ulong *)(lVar3 + 0x60));
    lVar3 = 0;
  }
  *plVar2 = lVar3;
  return;
}


// ===== 0020d7f4  __cxa_decrement_exception_refcount =====

void __cxa_decrement_exception_refcount(long param_1)

{
  long lVar1;
  
  if ((param_1 != 0) && (lVar1 = FUN_0020f0c0(0xffffffffffffffff,param_1 + -0x78), lVar1 == 1)) {
    if (*(code **)(param_1 + -0x68) != (code *)0x0) {
                    /* try { // try from 0020d828 to 0020d82f has its CatchHandler @ 0020d848 */
      (**(code **)(param_1 + -0x68))(param_1);
    }
                    /* try { // try from 0020d834 to 0020d837 has its CatchHandler @ 0020d84c */
    FUN_0020de04(param_1 + -0x80);
  }
  return;
}


// ===== 0020d850  __cxa_call_terminate =====

void __cxa_call_terminate(void)

{
  __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 0020d864  __cxa_current_exception_type =====

long * __cxa_current_exception_type(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)__cxa_get_globals_fast();
  if (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if ((lVar2 == 0) || (*(ulong *)(lVar2 + 0x60) >> 8 != 0x434c4e47432b2b)) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = *(long **)(lVar2 + 0x10);
    }
  }
  return plVar1;
}


// ===== 0020d8b4  __cxa_rethrow =====

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
    FUN_0020f0f0(puVar6);
    uVar7 = *puVar6;
                    /* try { // try from 0020d928 to 0020d92b has its CatchHandler @ 0020d994 */
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
      if (*plVar3 != 0) goto LAB_0020d8d4;
      *plVar3 = lVar8;
    }
    if ((uVar4 & 0xffffffffffffff00) == 0x434c4e47432b2b00) {
      FUN_001f2e00(*(undefined8 *)(lVar8 + 0x28));
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0020d928 with catch @ 0020d994
                        */
      FUN_001572c4();
    }
  }
LAB_0020d8d4:
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 0020d998  __cxa_increment_exception_refcount =====

void __cxa_increment_exception_refcount(long param_1)

{
  if (param_1 != 0) {
    FUN_0020f0c0(1,param_1 + -0x78);
  }
  return;
}


// ===== 0020d9c4  __cxa_current_primary_exception =====

long * __cxa_current_primary_exception(void)

{
  long *plVar1;
  long lVar2;
  
                    /* try { // try from 0020d9d4 to 0020d9d7 has its CatchHandler @ 0020da40 */
  plVar1 = (long *)__cxa_get_globals_fast();
  if (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if ((lVar2 == 0) || (*(ulong *)(lVar2 + 0x60) >> 8 != 0x434c4e47432b2b)) {
      plVar1 = (long *)0x0;
    }
    else {
      if ((*(ulong *)(lVar2 + 0x60) & 0xff) == 1) {
        lVar2 = *(long *)(lVar2 + 8) + -0x80;
      }
      plVar1 = (long *)(lVar2 + 0x80);
      FUN_0020f0c0(1,lVar2 + 8);
    }
  }
  return plVar1;
}


// ===== 0020da44  __cxa_rethrow_primary_exception =====

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
  
  if (param_1 != 0) {
    puVar3 = (undefined8 *)FUN_0020dc30(0x80);
    if (puVar3 == (undefined8 *)0x0) {
LAB_0020db5c:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
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
    FUN_0020f0c0(1,param_1 + -0x78);
    puVar3[2] = *(undefined8 *)(param_1 + -0x70);
    uVar4 = std::get_unexpected();
    puVar3[4] = uVar4;
    uVar4 = std::get_terminate();
    puVar3[5] = uVar4;
    *puVar9 = 0x434c4e47432b2b01;
    lVar5 = __cxa_get_globals();
    iVar1 = *(int *)(lVar5 + 8);
    puVar3[0xd] = FUN_0020db64;
    *(int *)(lVar5 + 8) = iVar1 + 1;
    FUN_0020f0f0(puVar9);
    uVar8 = *puVar9;
                    /* try { // try from 0020daf4 to 0020daf7 has its CatchHandler @ 0020db60 */
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
    }
    else {
      if (*plVar6 != 0) goto LAB_0020db5c;
      *plVar6 = (long)puVar3;
    }
  }
  return;
}


// ===== 0020db64  FUN_0020db64 =====

void FUN_0020db64(int param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == 1) {
    lVar2 = *(long *)(param_2 + -0x58);
    if ((lVar2 != 0) && (lVar1 = FUN_0020f0c0(0xffffffffffffffff,lVar2 + -0x78), lVar1 == 1)) {
      if (*(code **)(lVar2 + -0x68) != (code *)0x0) {
                    /* try { // try from 0020dba4 to 0020dbab has its CatchHandler @ 0020dbd0 */
        (**(code **)(lVar2 + -0x68))(lVar2);
      }
                    /* try { // try from 0020dbb0 to 0020dbb3 has its CatchHandler @ 0020dbd4 */
      FUN_0020de04(lVar2 + -0x80);
    }
    FUN_0020de04(param_2 + -0x60);
    return;
  }
  FUN_001f2e00(*(undefined8 *)(param_2 + -0x38));
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0020dba4 with catch @ 0020dbd0
                        */
  FUN_001572c4();
}


// ===== 0020dbd8  __cxa_uncaught_exception =====

ulong __cxa_uncaught_exception(void)

{
  ulong uVar1;
  
                    /* try { // try from 0020dbe4 to 0020dbe7 has its CatchHandler @ 0020dc04 */
  uVar1 = __cxa_get_globals_fast();
  if (uVar1 != 0) {
    uVar1 = (ulong)(*(int *)(uVar1 + 8) != 0);
  }
  return uVar1;
}


// ===== 0020dc08  __cxa_uncaught_exceptions =====

ulong __cxa_uncaught_exceptions(void)

{
  ulong uVar1;
  
                    /* try { // try from 0020dc14 to 0020dc17 has its CatchHandler @ 0020dc2c */
  uVar1 = __cxa_get_globals_fast();
  if (uVar1 != 0) {
    uVar1 = (ulong)*(uint *)(uVar1 + 8);
  }
  return uVar1;
}


// ===== 0020dc30  FUN_0020dc30 =====

void FUN_0020dc30(size_t param_1)

{
  void *local_8;
  
  local_8 = (void *)0x0;
  if (param_1 < 2) {
    param_1 = 1;
  }
  posix_memalign(&local_8,0x10,param_1);
  if (local_8 == (void *)0x0) {
    FUN_0020dc7c(param_1);
  }
  return;
}


// ===== 0020dc7c  FUN_0020dc7c =====

ushort * FUN_0020dc7c(long param_1)

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
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00223630);
  if (DAT_00223658 == (ushort *)0x0) {
    DAT_00223658 = (ushort *)&DAT_0022366c;
    DAT_0022366c = 0x7d0080;
  }
  else if (DAT_00223658 == (ushort *)&DAT_00223860) goto LAB_0020dd38;
  uVar5 = param_1 + 3U >> 2;
  uVar1 = uVar5 + 1;
  puVar4 = (ushort *)0x0;
  puVar6 = DAT_00223658;
  do {
    puVar9 = puVar6 + 2;
    if (((ulong)puVar9 & 0xf) != 0) {
                    /* try { // try from 0020ddc0 to 0020dddf has its CatchHandler @ 0020dde8 */
                    /* WARNING: Subroutine does not return */
      FUN_001f3180("%s:%d: %s","out/llvm-project/libcxxabi/src/fallback_malloc.cpp",0x92,
                   &DAT_00125cb4);
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
                    /* try { // try from 0020dd60 to 0020dd7f has its CatchHandler @ 0020dde0 */
                    /* WARNING: Subroutine does not return */
        FUN_001f3180("%s:%d: %s","out/llvm-project/libcxxabi/src/fallback_malloc.cpp",0xa7,
                     &DAT_00125cb4);
      }
      goto code_r0x0020dda4;
    }
    if (uVar5 < uVar8) {
      if (puVar4 == (ushort *)0x0) {
        DAT_00223658 = (ushort *)((ulong)*puVar6 * 4 + 0x223660);
        *puVar6 = 0;
      }
      else {
        *puVar4 = *puVar6;
        *puVar6 = 0;
      }
      goto code_r0x0020dda4;
    }
    uVar2 = *puVar6;
    puVar4 = puVar6;
    puVar6 = (ushort *)((ulong)uVar2 * 4 + 0x223660);
  } while ((ulong)uVar2 != 0x80);
LAB_0020dd38:
  puVar9 = (ushort *)0x0;
code_r0x0020dda4:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00223630);
  return puVar9;
}


// ===== 0020de04  FUN_0020de04 =====

void FUN_0020de04(undefined1 *param_1)

{
  if (((undefined1 *)((long)&DAT_00223658 + 7) < param_1) && (param_1 < &DAT_00223860)) {
    FUN_0020de30();
    return;
  }
  free(param_1);
  return;
}


// ===== 0020de30  FUN_0020de30 =====

int FUN_0020de30(long param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  puVar5 = (ushort *)(param_1 + -4);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00223630);
  if ((DAT_00223658 != (ushort *)0x0) && (DAT_00223658 != (ushort *)&DAT_00223860)) {
    puVar3 = (ushort *)0x0;
    puVar4 = DAT_00223658;
    do {
      uVar1 = puVar4[1];
      if (puVar4 + (ulong)uVar1 * 2 == puVar5) {
        puVar4[1] = *(short *)(param_1 + -2) + uVar1;
        goto code_r0x0020df18;
      }
      if (puVar5 + (ulong)*(ushort *)(param_1 + -2) * 2 == puVar4) {
        *(ushort *)(param_1 + -2) = *(ushort *)(param_1 + -2) + uVar1;
        if (puVar3 == (ushort *)0x0) {
          DAT_00223658 = puVar5;
          *puVar5 = *puVar4;
        }
        else {
          *puVar3 = (ushort)((int)puVar5 - 0x223660U >> 2);
        }
        goto code_r0x0020df18;
      }
      uVar1 = *puVar4;
      puVar3 = puVar4;
      puVar4 = (ushort *)((ulong)uVar1 * 4 + 0x223660);
    } while ((ulong)uVar1 != 0x80);
  }
  iVar2 = (int)DAT_00223658;
  DAT_00223658 = puVar5;
  *puVar5 = (ushort)(iVar2 - 0x223660U >> 2);
code_r0x0020df18:
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00223630);
  return iVar2;
}


// ===== 0020df34  __gxx_personality_v0 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 __gxx_personality_v0(int param_1,uint param_2,ulong param_3,long param_4,long param_5)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  char *pcVar4;
  byte *pbVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  byte *extraout_x9;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  byte *pbVar18;
  byte *pbVar19;
  ulong uVar20;
  long lVar21;
  undefined *puStack_130;
  byte *pbStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  ulong uStack_110;
  byte *pbStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  long *plStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long local_b8;
  char *local_b0;
  byte *local_a8;
  long *local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  byte *local_80;
  byte *local_78;
  byte *local_70;
  byte *local_68;
  
  if (param_1 != 1) {
    return 3;
  }
  if (param_4 == 0) {
    return 3;
  }
  if (param_5 == 0) {
    return 3;
  }
  if ((param_2 == 6) && ((long *)(param_3 & 0xffffffffffffff00) == (long *)0x434c4e47432b2b00)) {
    iVar2 = *(int *)(param_4 + -0x24);
    uVar15 = *(undefined8 *)(param_4 + -0x10);
    thunk_FUN_0020f828(param_5,0,param_4);
    thunk_FUN_0020f828(param_5,1,(long)iVar2);
    FUN_0020f6d4(param_5,uVar15);
    if (-1 < iVar2) {
      return 7;
    }
    goto LAB_0020dfd8;
  }
  if ((param_2 & 1) != 0) {
    if ((param_2 & 0xe) != 0) {
      return 3;
    }
LAB_0020e03c:
    pcVar4 = (char *)FUN_0020f618(param_5);
    if (pcVar4 == (char *)0x0) {
      return 8;
    }
    lVar16 = FUN_0020f6a4(param_5);
    uVar20 = FUN_0020f64c(param_5);
    local_70 = (byte *)(pcVar4 + 1);
    local_88 = uVar20;
    if (*pcVar4 != -1) {
      local_88 = FUN_0020e71c(&local_70,*pcVar4,0);
    }
    pbVar9 = local_70 + 1;
    local_90 = (ulong)*local_70;
    if (local_90 == 0xff) {
      local_80 = (byte *)0x0;
    }
    else {
      uVar13 = 0;
      uVar12 = 0;
      pbVar19 = pbVar9;
      do {
        pbVar9 = pbVar19 + 1;
        bVar1 = *pbVar19;
        uVar11 = uVar13 & 0x3f;
        uVar13 = uVar13 + 7;
        uVar12 = ((ulong)bVar1 & 0x7f) << uVar11 | uVar12;
        pbVar19 = pbVar9;
      } while ((char)bVar1 < '\0');
      local_80 = pbVar9 + uVar12;
    }
    uVar13 = 0;
    local_98 = 0;
    pbVar19 = (byte *)(lVar16 + ~uVar20);
    bVar1 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    do {
      pbVar18 = pbVar9 + 1;
      bVar3 = *pbVar9;
      uVar20 = uVar13 & 0x3f;
      uVar13 = uVar13 + 7;
      local_98 = ((ulong)bVar3 & 0x7f) << uVar20 | local_98;
      pbVar9 = pbVar18;
    } while ((char)bVar3 < '\0');
    local_98 = local_98 & 0xffffffff;
    pbVar9 = pbVar18 + local_98;
    local_78 = pbVar18;
    local_b0 = pcVar4;
    local_a0 = (long *)(param_3 & 0xffffffffffffff00);
    local_70 = pbVar18;
    do {
      if (pbVar9 <= local_78) break;
      pbVar5 = (byte *)FUN_0020e71c(&local_78,bVar1,0);
      lVar6 = FUN_0020e71c(&local_78,bVar1,0);
      lVar16 = FUN_0020e71c(&local_78,bVar1,0);
      uVar20 = 0;
      uVar13 = 0;
      pbVar10 = local_78;
      do {
        local_78 = pbVar10 + 1;
        bVar3 = *pbVar10;
        uVar12 = uVar20 & 0x3f;
        uVar20 = uVar20 + 7;
        uVar13 = ((ulong)bVar3 & 0x7f) << uVar12 | uVar13;
        pbVar10 = local_78;
      } while ((char)bVar3 < '\0');
      if ((pbVar5 <= pbVar19) && (pbVar19 < pbVar5 + lVar6)) {
        if (lVar16 == 0) {
          return 8;
        }
        lVar16 = lVar16 + local_88;
        if (uVar13 != 0) {
          local_a8 = (byte *)(param_4 + 0x20);
          local_88 = local_90 & 0xf;
          pbVar18 = pbVar18 + uVar13 + local_98 + -1;
          local_98 = CONCAT44(local_98._4_4_,0x1c1d >> local_88);
          plVar17 = local_a0;
          uVar13 = 0;
          local_b8 = lVar16;
          goto LAB_0020e204;
        }
        if ((param_2 & 1) != 0) {
          return 8;
        }
        goto LAB_0020dffc;
      }
    } while (pbVar5 <= pbVar19);
    __cxa_begin_catch(param_4);
    if (local_a0 == (long *)0x434c4e47432b2b00) {
      FUN_001f2e00(*(undefined8 *)(param_4 + -0x38));
    }
                    /* WARNING: Subroutine does not return */
    std::terminate();
  }
  if ((param_2 >> 1 & 1) == 0) {
    return 3;
  }
  if (((param_2 ^ 0xffffffff) & 0xc) != 0) goto LAB_0020e03c;
  lVar16 = 0;
LAB_0020dffc:
  uVar20 = 0;
  goto LAB_0020e000;
LAB_0020e204:
  uVar12 = 0;
  uVar20 = 0;
  pbVar9 = pbVar18;
  do {
    pbVar19 = pbVar9 + 1;
    bVar1 = *pbVar9;
    uVar11 = uVar12 & 0x3f;
    uVar12 = uVar12 + 7;
    uVar20 = ((ulong)bVar1 & 0x7f) << uVar11 | uVar20;
    pbVar9 = pbVar19;
  } while ((char)bVar1 < '\0');
  uVar11 = -1L << (uVar12 & 0x3f);
  if (0x3f < uVar12 || bVar1 < 0x40) {
    uVar11 = 0;
  }
  uVar20 = uVar20 | uVar11;
  if (0 < (long)uVar20) {
    if (((local_80 == (byte *)0x0) || (0xc < (uint)local_88)) || ((local_98 & 1) == 0)) {
      FUN_0020e6ec(plVar17 == (long *)0x434c4e47432b2b00,param_4);
    }
    else {
      local_68 = local_80 + *(long *)(&DAT_00131be8 + local_88 * 8) * uVar20;
      plVar7 = (long *)FUN_0020e71c(&local_68,local_90,0);
      if (plVar7 == (long *)0x0) {
        lVar6 = FUN_0020d420(param_4);
        goto joined_r0x0020e480;
      }
      uVar12 = uVar13;
      if (plVar17 != (long *)0x434c4e47432b2b00) goto LAB_0020e380;
      lVar16 = FUN_0020d420(param_4);
      local_68 = local_a8;
      if (lVar16 == 0x434c4e47432b2b01) {
        local_68 = *(byte **)(param_4 + -0x58);
      }
      plVar17 = plVar7;
      if ((local_68 != (byte *)0x0) && (*(long *)(param_4 + -0x50) != 0)) {
        uVar11 = (**(code **)(*plVar7 + 0x20))(plVar7,*(long *)(param_4 + -0x50),&local_68);
        plVar17 = local_a0;
        pbVar9 = local_68;
        goto joined_r0x0020e37c;
      }
    }
LAB_0020e4c0:
    __cxa_begin_catch(param_4);
    lVar16 = FUN_001f2e00(*(undefined8 *)(param_4 + -0x38));
    pcStack_118 = __cxa_call_unexpected;
    uStack_f8 = 0x434c4e47432b2b00;
    puStack_120 = &stack0xffffffffffffffa0;
    uStack_110 = uVar13;
    pbStack_108 = pbVar5;
    uStack_100 = uVar20;
    pbStack_f0 = pbVar18;
    pbStack_e8 = pbVar19;
    plStack_e0 = plVar17;
    uStack_d8 = (ulong)param_2;
    lStack_d0 = param_5;
    lStack_c8 = param_4;
    if (lVar16 == 0) {
      __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    __cxa_begin_catch();
    uVar20 = FUN_0020d42c(lVar16);
    if ((uVar20 & 1) == 0) {
      uVar8 = std::get_terminate();
      uVar15 = std::get_unexpected();
      uVar14 = 0;
      lVar6 = 0;
    }
    else {
      uVar15 = *(undefined8 *)(lVar16 + -0x40);
      uVar8 = *(undefined8 *)(lVar16 + -0x38);
      lVar6 = lVar16 + -0x60;
      pbVar18 = *(byte **)(lVar16 + -0x18);
      uVar14 = *(undefined8 *)(lVar16 + -0x10);
      plVar17 = (long *)(long)*(int *)(lVar16 + -0x24);
    }
    FUN_001f2db4(uVar15);
    __cxa_begin_catch();
    if ((uVar20 & 1) == 0) goto LAB_0020e65c;
    pbStack_128 = pbVar18 + 1;
    FUN_0020e71c(&pbStack_128,*pbVar18,uVar14);
    bVar1 = *pbStack_128;
    if (bVar1 != 0xff) goto LAB_0020e578;
    do {
      FUN_001f2e00(uVar8);
      pbStack_128 = extraout_x9;
LAB_0020e578:
      uVar20 = 0;
      uVar13 = 0;
      pbVar9 = pbStack_128 + 1;
      do {
        pbVar19 = pbVar9 + 1;
        bVar3 = *pbVar9;
        uVar12 = uVar20 & 0x3f;
        uVar20 = uVar20 + 7;
        uVar13 = ((ulong)bVar3 & 0x7f) << uVar12 | uVar13;
        pbVar9 = pbVar19;
      } while ((char)bVar3 < '\0');
      pbStack_128 = pbVar19;
      plVar7 = (long *)__cxa_get_globals_fast();
      lVar21 = *plVar7;
    } while (lVar21 == 0);
    bVar3 = FUN_0020d42c(lVar21 + 0x60);
    if ((bVar3 & lVar21 != lVar6) == 1) {
      uVar15 = *(undefined8 *)(lVar21 + 0x10);
      lVar6 = FUN_0020d420(lVar21 + 0x60);
      if (lVar6 == 0x434c4e47432b2b01) {
        lVar6 = *(long *)(lVar21 + 8);
      }
      else {
        lVar6 = lVar21 + 0x80;
      }
      uVar20 = FUN_0020e8c4(plVar17,pbVar19 + uVar13,bVar1,uVar15,lVar6,lVar16,uVar14);
      if ((uVar20 & 1) == 0) {
        lVar16 = plVar7[1];
        *(int *)(lVar21 + 0x38) = -*(int *)(lVar21 + 0x38);
        *(int *)(plVar7 + 1) = (int)lVar16 + 1;
        __cxa_end_catch();
        __cxa_end_catch();
        __cxa_begin_catch(lVar21 + 0x60);
        uVar15 = __cxa_rethrow();
        std::bad_exception::~bad_exception((bad_exception *)&puStack_130);
        __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
        FUN_0020f440(uVar15);
      }
    }
    pbVar18 = PTR_vtable_0021ded0;
    puStack_130 = PTR_vtable_0021ded0 + 0x10;
    uVar20 = FUN_0020e8c4(plVar17,pbVar19 + uVar13,bVar1,PTR_PTR_0021ded8,&puStack_130,lVar16,uVar14
                         );
    if ((uVar20 & 1) != 0) {
      std::bad_exception::~bad_exception((bad_exception *)&puStack_130);
LAB_0020e65c:
      __cxa_end_catch();
      FUN_001f2e00(uVar8);
    }
    __cxa_end_catch();
    plVar17 = (long *)__cxa_allocate_exception(8);
    *plVar17 = (long)(pbVar18 + 0x10);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar17,PTR_PTR_0021ded8,PTR__bad_exception_0021dea8);
  }
  uVar12 = (ulong)((uint)(uVar20 == 0) | (uint)uVar13);
  if (((param_2 >> 3 & 1) == 0) && (uVar20 != 0)) {
    lVar6 = FUN_0020d420(param_4);
    if (plVar17 != (long *)0x434c4e47432b2b00) {
joined_r0x0020e480:
      lVar16 = local_b8;
      pbVar9 = local_a8;
      if (lVar6 == 0x434c4e47432b2b01) {
        pbVar9 = *(byte **)(param_4 + -0x58);
      }
      goto joined_r0x0020e488;
    }
    pbVar5 = local_a8;
    if (lVar6 == 0x434c4e47432b2b01) {
      pbVar5 = *(byte **)(param_4 + -0x58);
    }
    if ((pbVar5 == (byte *)0x0) || (*(long *)(param_4 + -0x50) == 0)) goto LAB_0020e4c0;
    uVar11 = FUN_0020e8c4(uVar20,local_80,local_90,*(long *)(param_4 + -0x50),pbVar5,param_4,0);
    pbVar9 = pbVar5;
joined_r0x0020e37c:
    uVar12 = uVar13;
    lVar16 = local_b8;
    if ((uVar11 & 1) != 0) goto joined_r0x0020e488;
  }
LAB_0020e380:
  uVar20 = 0;
  uVar13 = 0;
  pbVar9 = pbVar19;
  do {
    bVar1 = *pbVar9;
    uVar11 = uVar20 & 0x3f;
    uVar20 = uVar20 + 7;
    uVar13 = ((ulong)bVar1 & 0x7f) << uVar11 | uVar13;
    pbVar9 = pbVar9 + 1;
  } while ((char)bVar1 < '\0');
  uVar11 = -1L << (uVar20 & 0x3f);
  if (0x3f < uVar20 || bVar1 < 0x40) {
    uVar11 = 0;
  }
  if ((uVar13 | uVar11) == 0) goto LAB_0020e3d0;
  pbVar18 = pbVar19 + (uVar13 | uVar11);
  uVar13 = uVar12;
  goto LAB_0020e204;
LAB_0020e3d0:
  if (((uint)uVar12 & (param_2 & 2) >> 1) == 0) {
    return 8;
  }
  pbVar18 = (byte *)0x0;
  uVar20 = 0;
  pbVar9 = (byte *)0x0;
  plVar17 = local_a0;
  lVar16 = local_b8;
joined_r0x0020e488:
  local_b8 = lVar16;
  if ((param_2 & 1) != 0) {
    if (plVar17 != (long *)0x434c4e47432b2b00) {
      return 6;
    }
    *(int *)(param_4 + -0x24) = (int)uVar20;
    *(byte **)(param_4 + -0x20) = pbVar18;
    *(char **)(param_4 + -0x18) = local_b0;
    *(long *)(param_4 + -0x10) = lVar16;
    *(byte **)(param_4 + -8) = pbVar9;
    return 6;
  }
LAB_0020e000:
  thunk_FUN_0020f828(param_5,0,param_4);
  thunk_FUN_0020f828(param_5,1,uVar20);
  FUN_0020f6d4(param_5,lVar16);
  if (-1 < (long)uVar20) {
    return 7;
  }
LAB_0020dfd8:
  *(undefined8 *)(param_4 + -0x10) = 0;
  return 7;
}


// ===== 0020e4d0  __cxa_call_unexpected =====

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
  uVar4 = FUN_0020d42c(param_1);
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
                    /* try { // try from 0020e540 to 0020e543 has its CatchHandler @ 0020e544 */
  FUN_001f2db4(uVar9);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0020e540 with catch @ 0020e544
                        */
  __cxa_begin_catch();
  if ((uVar4 & 1) != 0) {
    local_68 = unaff_x24 + 1;
    FUN_0020e71c(&local_68,*unaff_x24,uVar7);
    bVar1 = *local_68;
    if (bVar1 != 0xff) goto LAB_0020e578;
    do {
      FUN_001f2e00(uVar5);
      local_68 = extraout_x9;
LAB_0020e578:
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
                    /* try { // try from 0020e5a0 to 0020e5a3 has its CatchHandler @ 0020e6d8 */
      plVar6 = (long *)__cxa_get_globals_fast();
      lVar13 = *plVar6;
    } while (lVar13 == 0);
                    /* try { // try from 0020e5b0 to 0020e5b7 has its CatchHandler @ 0020e6d4 */
    bVar3 = FUN_0020d42c(lVar13 + 0x60);
    if ((bVar3 & lVar13 != lVar8) == 1) {
      uVar9 = *(undefined8 *)(lVar13 + 0x10);
                    /* try { // try from 0020e5d0 to 0020e617 has its CatchHandler @ 0020e6d0 */
      lVar8 = FUN_0020d420(lVar13 + 0x60);
      if (lVar8 == 0x434c4e47432b2b01) {
        lVar8 = *(long *)(lVar13 + 8);
      }
      else {
        lVar8 = lVar13 + 0x80;
      }
      uVar4 = FUN_0020e8c4(unaff_x22,pbVar11 + uVar10,bVar1,uVar9,lVar8,param_1,uVar7);
      if ((uVar4 & 1) == 0) {
        lVar8 = plVar6[1];
        *(int *)(lVar13 + 0x38) = -*(int *)(lVar13 + 0x38);
        *(int *)(plVar6 + 1) = (int)lVar8 + 1;
                    /* try { // try from 0020e6ac to 0020e6bf has its CatchHandler @ 0020e6d0 */
        __cxa_end_catch();
        __cxa_end_catch();
        __cxa_begin_catch(lVar13 + 0x60);
        uVar9 = __cxa_rethrow();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0020e62c with catch @ 0020e6c0
                       catch(type#1 @ 00000000) { ... } // from try @ 0020e668 with catch @ 0020e6c0
                       catch(type#1 @ 00000000) { ... } // from try @ 0020e67c with catch @ 0020e6c0
                        */
        std::bad_exception::~bad_exception((bad_exception *)&local_70);
                    /* try { // try from 0020e6dc to 0020e6df has its CatchHandler @ 0020e6e8 */
        __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
        FUN_0020f440(uVar9);
      }
    }
    unaff_x24 = PTR_vtable_0021ded0;
    local_70 = PTR_vtable_0021ded0 + 0x10;
                    /* try { // try from 0020e62c to 0020e64f has its CatchHandler @ 0020e6c0 */
    uVar4 = FUN_0020e8c4(unaff_x22,pbVar11 + uVar10,bVar1,PTR_PTR_0021ded8,&local_70,param_1,uVar7);
    if ((uVar4 & 1) == 0) goto LAB_0020e668;
    std::bad_exception::~bad_exception((bad_exception *)&local_70);
  }
  __cxa_end_catch();
  FUN_001f2e00(uVar5);
LAB_0020e668:
                    /* try { // try from 0020e668 to 0020e66b has its CatchHandler @ 0020e6c0 */
  __cxa_end_catch();
  plVar6 = (long *)__cxa_allocate_exception(8);
  *plVar6 = (long)(unaff_x24 + 0x10);
                    /* try { // try from 0020e67c to 0020e68f has its CatchHandler @ 0020e6c0 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(plVar6,PTR_PTR_0021ded8,PTR__bad_exception_0021dea8);
}


// ===== 0020e6ec  FUN_0020e6ec =====

void FUN_0020e6ec(ulong param_1,long param_2)

{
  __cxa_begin_catch(param_2);
  if ((param_1 & 1) != 0) {
    FUN_001f2e00(*(undefined8 *)(param_2 + -0x38));
  }
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 0020e71c  FUN_0020e71c =====

/* WARNING: Type propagation algorithm not settling */

ulong * FUN_0020e71c(undefined8 *param_1,uint param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  ulong *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  if ((param_2 & 0xff) == 0xff) {
    return (ulong *)0x0;
  }
  uVar1 = param_2 & 0xf;
  puVar5 = (uint *)*param_1;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      if (uVar1 == 0) goto LAB_0020e82c;
      if (uVar1 != 1) goto LAB_0020e8c0;
      uVar8 = 0;
      puVar4 = (ulong *)0x0;
      puVar6 = puVar5;
      do {
        puVar7 = (uint *)((long)puVar6 + 1);
        uVar1 = *puVar6;
        uVar3 = uVar8 & 0x3f;
        uVar8 = uVar8 + 7;
        puVar4 = (ulong *)(((ulong)(byte)uVar1 & 0x7f) << uVar3 | (ulong)puVar4);
        puVar6 = puVar7;
      } while ((char)(byte)uVar1 < '\0');
    }
    else if (uVar1 == 2) {
      puVar7 = (uint *)((long)puVar5 + 2);
      puVar4 = (ulong *)(ulong)(ushort)*puVar5;
    }
    else {
      if (uVar1 != 3) {
LAB_0020e8c0:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar7 = puVar5 + 1;
      puVar4 = (ulong *)(ulong)*puVar5;
    }
  }
  else if (uVar1 < 10) {
    if (uVar1 == 4) {
LAB_0020e82c:
      puVar7 = puVar5 + 2;
      puVar4 = *(ulong **)puVar5;
    }
    else {
      if (uVar1 != 9) goto LAB_0020e8c0;
      uVar8 = 0;
      uVar3 = 0;
      puVar6 = puVar5;
      do {
        puVar7 = (uint *)((long)puVar6 + 1);
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
      puVar4 = (ulong *)(uVar3 | uVar9);
    }
  }
  else if (uVar1 == 10) {
    puVar7 = (uint *)((long)puVar5 + 2);
    puVar4 = (ulong *)(long)(short)*puVar5;
  }
  else {
    if (uVar1 != 0xb) {
      if (uVar1 != 0xc) goto LAB_0020e8c0;
      goto LAB_0020e82c;
    }
    puVar7 = puVar5 + 1;
    puVar4 = (ulong *)(long)(int)*puVar5;
  }
  uVar1 = (param_2 & 0xff) >> 4 & 7;
  if (uVar1 != 0) {
    if (uVar1 == 3) {
      if (puVar4 == (ulong *)0x0) goto LAB_0020e894;
      puVar4 = (ulong *)((long)puVar4 + param_3);
    }
    else {
      if (uVar1 != 1) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (puVar4 == (ulong *)0x0) goto LAB_0020e894;
      puVar4 = (ulong *)((long)puVar4 + (long)puVar5);
    }
  }
  if ((puVar4 != (ulong *)0x0) && ((param_2 >> 7 & 1) != 0)) {
    puVar4 = (ulong *)*puVar4;
  }
LAB_0020e894:
  *param_1 = puVar7;
  return puVar4;
}


// ===== 0020e8c4  FUN_0020e8c4 =====

bool FUN_0020e8c4(ulong param_1,long param_2,ulong param_3,undefined8 param_4,long param_5,
                 undefined8 param_6,undefined8 param_7)

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
LAB_0020e9cc:
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
      FUN_0020e6ec(1,param_6);
      goto LAB_0020e9cc;
    }
    local_68 = param_2 + *(long *)(&DAT_00131be8 + uVar7 * 8) * uVar6;
    plVar2 = (long *)FUN_0020e71c(&local_68,param_3 & 0xffffffff,param_7);
    local_68 = param_5;
    uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_4,&local_68);
    uVar4 = 0;
    uVar5 = 0;
  } while ((uVar3 & 1) == 0);
  return uVar6 == 0;
}


// ===== 0020e9d8  __emutls_get_address =====

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
    pthread_once((pthread_once_t *)&DAT_00223868,FUN_0020ec00);
    pthread_mutex_lock((pthread_mutex_t *)&DAT_00223878);
    sVar3 = param_1[2];
    if (sVar3 == 0) {
      sVar3 = DAT_00223870 + 1;
      DAT_00223870 = sVar3;
      param_1[2] = sVar3;
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_00223878);
    __ptr = (undefined8 *)pthread_getspecific(DAT_00223864);
    if (__ptr == (undefined8 *)0x0) goto LAB_0020eab8;
LAB_0020ea0c:
    uVar2 = __ptr[1];
    if (sVar3 <= uVar2) goto LAB_0020eb00;
    lVar4 = (sVar3 + 0x11 & 0xfffffffffffffff0) - 2;
    __ptr = (undefined8 *)realloc(__ptr,lVar4 * 8 + 0x10);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    memset(__ptr + uVar2 + 2,0,(lVar4 - uVar2) * 8);
  }
  else {
    __ptr = (undefined8 *)pthread_getspecific(DAT_00223864);
    if (__ptr != (undefined8 *)0x0) goto LAB_0020ea0c;
LAB_0020eab8:
    lVar4 = (sVar3 + 0x11 & 0xfffffffffffffff0) - 2;
    __ptr = (undefined8 *)malloc(lVar4 * 8 + 0x10);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    memset(__ptr + 2,0,lVar4 * 8);
    *__ptr = 1;
  }
  __key = DAT_00223864;
  __ptr[1] = lVar4;
  pthread_setspecific(__key,__ptr);
LAB_0020eb00:
  if ((void *)__ptr[sVar3 + 1] != (void *)0x0) {
    return (void *)__ptr[sVar3 + 1];
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


// ===== 0020ebc4  FUN_0020ebc4 =====

ulong FUN_0020ebc4(ulong param_1)

{
  uint uVar1;
  
  if (DAT_00223860 == '\x01') {
    uVar1 = pthread_key_delete(DAT_00223864);
    param_1 = (ulong)uVar1;
    DAT_00223860 = '\0';
  }
  return param_1;
}


// ===== 0020ec00  FUN_0020ec00 =====

void FUN_0020ec00(void)

{
  int iVar1;
  
  iVar1 = pthread_key_create(&DAT_00223864,FUN_0020ec3c);
  if (iVar1 == 0) {
    DAT_00223860 = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0020ec3c  FUN_0020ec3c =====

long * FUN_0020ec3c(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*param_1 != 0) {
    *param_1 = *param_1 + -1;
    uVar1 = pthread_setspecific(DAT_00223864,param_1);
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


// ===== 0020ecd0  FUN_0020ecd0 =====

undefined8 FUN_0020ecd0(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  
  if (DAT_002238a0 == '\0') {
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


// ===== 0020ecfc  _INIT_0 =====

void _INIT_0(void)

{
  uint uVar1;
  int iVar2;
  char acStack_6c [92];
  
  uVar1 = getauxval(0x10);
  if ((uVar1 >> 8 & 1) == 0) {
    DAT_002238a0 = 0;
    return;
  }
  iVar2 = __system_property_get("ro.arch",acStack_6c);
  if (0 < iVar2) {
    iVar2 = strncmp(acStack_6c,"exynos9810",10);
    DAT_002238a0 = iVar2 != 0;
    return;
  }
  DAT_002238a0 = 1;
  return;
}


// ===== 0020ed94  FUN_0020ed94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0020ed94(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  if (((uint)(param_1 >> 0x3e) & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(ulong *)(param_2 + 0x10);
  }
  auVar10._8_8_ = param_1;
  auVar10._0_8_ = param_1;
  auVar6[8] = UNK_001229e8;
  auVar6._0_8_ = _DAT_001229e0;
  auVar5 = NEON_ushl(auVar10,_DAT_00122a50,8);
  auVar8 = NEON_ushl(auVar10,_DAT_00122950,8);
  auVar9 = NEON_ushl(auVar10,_DAT_001229b0,8);
  auVar6[9] = (char)_UNK_001229e9;
  auVar6[10] = (char)((uint7)_UNK_001229e9 >> 8);
  auVar6[0xb] = (char)((uint7)_UNK_001229e9 >> 0x10);
  auVar6[0xc] = (char)((uint7)_UNK_001229e9 >> 0x18);
  auVar6[0xd] = (char)((uint7)_UNK_001229e9 >> 0x20);
  auVar6[0xe] = (char)((uint7)_UNK_001229e9 >> 0x28);
  auVar6[0xf] = (char)((uint7)_UNK_001229e9 >> 0x30);
  auVar6 = NEON_ushl(auVar10,auVar6,8);
  auVar13._8_8_ = uVar3;
  auVar13._0_8_ = uVar3;
  auVar11[8] = UNK_001228f8;
  auVar11._0_8_ = _DAT_001228f0;
  auVar7[0] = auVar9[0] & DAT_00122b10 | auVar6[0] & (byte)_DAT_00122ba0 |
              auVar8[0] & DAT_00122b20 | auVar5[0] & DAT_00122a90;
  auVar7[1] = auVar9[1] & UNK_00122b11 | auVar6[1] & (byte)((ulong)_DAT_00122ba0 >> 8) |
              auVar8[1] & UNK_00122b21 | auVar5[1] & UNK_00122a91;
  auVar7[2] = auVar9[2] & UNK_00122b12 | auVar6[2] & (byte)((ulong)_DAT_00122ba0 >> 0x10) |
              auVar8[2] & UNK_00122b22 | auVar5[2] & UNK_00122a92;
  auVar7[3] = auVar9[3] & UNK_00122b13 | auVar6[3] & (byte)((ulong)_DAT_00122ba0 >> 0x18) |
              auVar8[3] & UNK_00122b23 | auVar5[3] & UNK_00122a93;
  auVar7[4] = auVar9[4] & UNK_00122b14 | auVar6[4] & (byte)((ulong)_DAT_00122ba0 >> 0x20) |
              auVar8[4] & UNK_00122b24 | auVar5[4] & UNK_00122a94;
  auVar7[5] = auVar9[5] & UNK_00122b15 | auVar6[5] & (byte)((ulong)_DAT_00122ba0 >> 0x28) |
              auVar8[5] & UNK_00122b25 | auVar5[5] & UNK_00122a95;
  auVar7[6] = auVar9[6] & UNK_00122b16 | auVar6[6] & (byte)((ulong)_DAT_00122ba0 >> 0x30) |
              auVar8[6] & UNK_00122b26 | auVar5[6] & UNK_00122a96;
  auVar7[7] = auVar9[7] & UNK_00122b17 | auVar6[7] & (byte)((ulong)_DAT_00122ba0 >> 0x38) |
              auVar8[7] & UNK_00122b27 | auVar5[7] & UNK_00122a97;
  auVar7[8] = auVar9[8] & UNK_00122b18 | auVar6[8] & (byte)_UNK_00122ba8 |
              auVar8[8] & UNK_00122b28 | auVar5[8] & UNK_00122a98;
  auVar7[9] = auVar9[9] & UNK_00122b19 | auVar6[9] & (byte)((ulong)_UNK_00122ba8 >> 8) |
              auVar8[9] & UNK_00122b29 | auVar5[9] & UNK_00122a99;
  auVar7[10] = auVar9[10] & UNK_00122b1a | auVar6[10] & (byte)((ulong)_UNK_00122ba8 >> 0x10) |
               auVar8[10] & UNK_00122b2a | auVar5[10] & UNK_00122a9a;
  auVar7[0xb] = auVar9[0xb] & UNK_00122b1b | auVar6[0xb] & (byte)((ulong)_UNK_00122ba8 >> 0x18) |
                auVar8[0xb] & UNK_00122b2b | auVar5[0xb] & UNK_00122a9b;
  auVar7[0xc] = auVar9[0xc] & UNK_00122b1c | auVar6[0xc] & (byte)((ulong)_UNK_00122ba8 >> 0x20) |
                auVar8[0xc] & UNK_00122b2c | auVar5[0xc] & UNK_00122a9c;
  auVar7[0xd] = auVar9[0xd] & UNK_00122b1d | auVar6[0xd] & (byte)((ulong)_UNK_00122ba8 >> 0x28) |
                auVar8[0xd] & UNK_00122b2d | auVar5[0xd] & UNK_00122a9d;
  auVar7[0xe] = auVar9[0xe] & UNK_00122b1e | auVar6[0xe] & (byte)((ulong)_UNK_00122ba8 >> 0x30) |
                auVar8[0xe] & UNK_00122b2e | auVar5[0xe] & UNK_00122a9e;
  auVar7[0xf] = auVar9[0xf] & UNK_00122b1f | auVar6[0xf] & (byte)((ulong)_UNK_00122ba8 >> 0x38) |
                auVar8[0xf] & UNK_00122b2f | auVar5[0xf] & UNK_00122a9f;
  auVar6 = NEON_ushl(auVar13,_DAT_00122ad0,8);
  auVar12 = NEON_ushl(auVar13,_DAT_00122aa0,8);
  auVar10 = NEON_ushl(auVar13,_DAT_00122840,8);
  auVar11[9] = (char)_UNK_001228f9;
  auVar11[10] = (char)((uint7)_UNK_001228f9 >> 8);
  auVar11[0xb] = (char)((uint7)_UNK_001228f9 >> 0x10);
  auVar11[0xc] = (char)((uint7)_UNK_001228f9 >> 0x18);
  auVar11[0xd] = (char)((uint7)_UNK_001228f9 >> 0x20);
  auVar11[0xe] = (char)((uint7)_UNK_001228f9 >> 0x28);
  auVar11[0xf] = (char)((uint7)_UNK_001228f9 >> 0x30);
  auVar11 = NEON_ushl(auVar13,auVar11,8);
  auVar13 = NEON_ext(auVar7,auVar7,8,1);
  auVar9[0] = auVar12[0] & (byte)_DAT_00122cd0 | auVar11[0] & (byte)_DAT_00122bf0 |
              auVar6[0] & (byte)_DAT_001229a0 | auVar10[0] & (byte)ram0x001228c0;
  auVar9[1] = auVar12[1] & (byte)((ulong)_DAT_00122cd0 >> 8) |
              auVar11[1] & (byte)((ulong)_DAT_00122bf0 >> 8) |
              auVar6[1] & (byte)((ulong)_DAT_001229a0 >> 8) |
              auVar10[1] & (byte)((ulong)ram0x001228c0 >> 8);
  auVar9[2] = auVar12[2] & (byte)((ulong)_DAT_00122cd0 >> 0x10) |
              auVar11[2] & (byte)((ulong)_DAT_00122bf0 >> 0x10) |
              auVar6[2] & (byte)((ulong)_DAT_001229a0 >> 0x10) |
              auVar10[2] & (byte)((ulong)ram0x001228c0 >> 0x10);
  auVar9[3] = auVar12[3] & (byte)((ulong)_DAT_00122cd0 >> 0x18) |
              auVar11[3] & (byte)((ulong)_DAT_00122bf0 >> 0x18) |
              auVar6[3] & (byte)((ulong)_DAT_001229a0 >> 0x18) |
              auVar10[3] & (byte)((ulong)ram0x001228c0 >> 0x18);
  auVar9[4] = auVar12[4] & (byte)((ulong)_DAT_00122cd0 >> 0x20) |
              auVar11[4] & (byte)((ulong)_DAT_00122bf0 >> 0x20) |
              auVar6[4] & (byte)((ulong)_DAT_001229a0 >> 0x20) |
              auVar10[4] & (byte)((ulong)ram0x001228c0 >> 0x20);
  auVar9[5] = auVar12[5] & (byte)((ulong)_DAT_00122cd0 >> 0x28) |
              auVar11[5] & (byte)((ulong)_DAT_00122bf0 >> 0x28) |
              auVar6[5] & (byte)((ulong)_DAT_001229a0 >> 0x28) |
              auVar10[5] & (byte)((ulong)ram0x001228c0 >> 0x28);
  auVar9[6] = auVar12[6] & (byte)((ulong)_DAT_00122cd0 >> 0x30) |
              auVar11[6] & (byte)((ulong)_DAT_00122bf0 >> 0x30) |
              auVar6[6] & (byte)((ulong)_DAT_001229a0 >> 0x30) |
              auVar10[6] & (byte)((ulong)ram0x001228c0 >> 0x30);
  auVar9[7] = auVar12[7] & (byte)((ulong)_DAT_00122cd0 >> 0x38) |
              auVar11[7] & (byte)((ulong)_DAT_00122bf0 >> 0x38) |
              auVar6[7] & (byte)((ulong)_DAT_001229a0 >> 0x38) |
              auVar10[7] & (byte)((ulong)ram0x001228c0 >> 0x38);
  auVar9[8] = auVar12[8] & (byte)_UNK_00122cd8 | auVar11[8] & (byte)_UNK_00122bf8 |
              auVar6[8] & (byte)_UNK_001229a8 | auVar10[8] & (byte)_UNK_001228c8;
  auVar9[9] = auVar12[9] & (byte)((ulong)_UNK_00122cd8 >> 8) |
              auVar11[9] & (byte)((ulong)_UNK_00122bf8 >> 8) |
              auVar6[9] & (byte)((ulong)_UNK_001229a8 >> 8) |
              auVar10[9] & (byte)((ulong)_UNK_001228c8 >> 8);
  auVar9[10] = auVar12[10] & (byte)((ulong)_UNK_00122cd8 >> 0x10) |
               auVar11[10] & (byte)((ulong)_UNK_00122bf8 >> 0x10) |
               auVar6[10] & (byte)((ulong)_UNK_001229a8 >> 0x10) |
               auVar10[10] & (byte)((ulong)_UNK_001228c8 >> 0x10);
  auVar9[0xb] = auVar12[0xb] & (byte)((ulong)_UNK_00122cd8 >> 0x18) |
                auVar11[0xb] & (byte)((ulong)_UNK_00122bf8 >> 0x18) |
                auVar6[0xb] & (byte)((ulong)_UNK_001229a8 >> 0x18) |
                auVar10[0xb] & (byte)((ulong)_UNK_001228c8 >> 0x18);
  auVar9[0xc] = auVar12[0xc] & (byte)((ulong)_UNK_00122cd8 >> 0x20) |
                auVar11[0xc] & (byte)((ulong)_UNK_00122bf8 >> 0x20) |
                auVar6[0xc] & (byte)((ulong)_UNK_001229a8 >> 0x20) |
                auVar10[0xc] & (byte)((ulong)_UNK_001228c8 >> 0x20);
  auVar9[0xd] = auVar12[0xd] & (byte)((ulong)_UNK_00122cd8 >> 0x28) |
                auVar11[0xd] & (byte)((ulong)_UNK_00122bf8 >> 0x28) |
                auVar6[0xd] & (byte)((ulong)_UNK_001229a8 >> 0x28) |
                auVar10[0xd] & (byte)((ulong)_UNK_001228c8 >> 0x28);
  auVar9[0xe] = auVar12[0xe] & (byte)((ulong)_UNK_00122cd8 >> 0x30) |
                auVar11[0xe] & (byte)((ulong)_UNK_00122bf8 >> 0x30) |
                auVar6[0xe] & (byte)((ulong)_UNK_001229a8 >> 0x30) |
                auVar10[0xe] & (byte)((ulong)_UNK_001228c8 >> 0x30);
  auVar9[0xf] = auVar12[0xf] & (byte)((ulong)_UNK_00122cd8 >> 0x38) |
                auVar11[0xf] & (byte)((ulong)_UNK_00122bf8 >> 0x38) |
                auVar6[0xf] & (byte)((ulong)_UNK_001229a8 >> 0x38) |
                auVar10[0xf] & (byte)((ulong)_UNK_001228c8 >> 0x38);
  uVar4 = CONCAT17(auVar7[7] | auVar13[7],
                   CONCAT16(auVar7[6] | auVar13[6],
                            CONCAT15(auVar7[5] | auVar13[5],
                                     CONCAT14(auVar7[4] | auVar13[4],
                                              CONCAT13(auVar7[3] | auVar13[3],
                                                       CONCAT12(auVar7[2] | auVar13[2],
                                                                CONCAT11(auVar7[1] | auVar13[1],
                                                                         auVar7[0] | auVar13[0])))))
                           )) | (param_1 & 0x80) << 3 |
          CONCAT17(auVar8[7] & (byte)((ulong)_DAT_00122bb0 >> 0x38) |
                   auVar5[7] & (byte)((ulong)_UNK_00122bb8 >> 0x38),
                   CONCAT16(auVar8[6] & (byte)((ulong)_DAT_00122bb0 >> 0x30) |
                            auVar5[6] & (byte)((ulong)_UNK_00122bb8 >> 0x30),
                            CONCAT15(auVar8[5] & (byte)((ulong)_DAT_00122bb0 >> 0x28) |
                                     auVar5[5] & (byte)((ulong)_UNK_00122bb8 >> 0x28),
                                     CONCAT14(auVar8[4] & (byte)((ulong)_DAT_00122bb0 >> 0x20) |
                                              auVar5[4] & (byte)((ulong)_UNK_00122bb8 >> 0x20),
                                              CONCAT13(auVar8[3] &
                                                       (byte)((ulong)_DAT_00122bb0 >> 0x18) |
                                                       auVar5[3] &
                                                       (byte)((ulong)_UNK_00122bb8 >> 0x18),
                                                       CONCAT12(auVar8[2] &
                                                                (byte)((ulong)_DAT_00122bb0 >> 0x10)
                                                                | auVar5[2] &
                                                                  (byte)((ulong)_UNK_00122bb8 >>
                                                                        0x10),
                                                                CONCAT11(auVar8[1] &
                                                                         (byte)((ulong)_DAT_00122bb0
                                                                               >> 8) |
                                                                         auVar5[1] &
                                                                         (byte)((ulong)_UNK_00122bb8
                                                                               >> 8),
                                                                         auVar8[0] &
                                                                         (byte)_DAT_00122bb0 |
                                                                         auVar5[0] &
                                                                         (byte)_UNK_00122bb8)))))))
          | (param_1 & 0x1000000) >> 7 | (param_1 & 0x1000) >> 6 | uVar3 >> 5 & 4;
  auVar6 = NEON_ext(auVar9,auVar9,8,1);
  if ((param_1 & 0x10000000) != 0) {
    uVar4 = uVar4 | 0x3000000000000;
  }
  if ((uVar3 & 0x40000) != 0) {
    uVar4 = uVar4 | 0x180000000000;
  }
  uVar4 = CONCAT17(auVar9[7] | auVar6[7],
                   CONCAT16(auVar9[6] | auVar6[6],
                            CONCAT15(auVar9[5] | auVar6[5],
                                     CONCAT14(auVar9[4] | auVar6[4],
                                              CONCAT13(auVar9[3] | auVar6[3],
                                                       CONCAT12(auVar9[2] | auVar6[2],
                                                                CONCAT11(auVar9[1] | auVar6[1],
                                                                         auVar9[0] | auVar6[0]))))))
                  ) | auVar11._8_8_ & 0x200000000000 |
          (param_1 & 0x100) >> 1 | (uVar3 >> 2 & 0x1f) << 0x25 |
          auVar10._0_8_ & 0x80000 | uVar3 >> 0x10 & 1 |
          uVar3 >> 4 & 0x10000000 | (uVar3 >> 0xd & 1) << 0x1a |
          uVar3 >> 1 & 0x100000000 | (uVar3 >> 0x18 & 1) << 0x38 |
          (uVar3 & 0x80000000000) << 0x10 | (uVar3 >> 0x19 & 1) << 0x37 | uVar4;
  if (((uint)param_1 >> 0xb & 1) != 0) {
    uVar2 = id_aa64isar1_el1;
    if ((uVar2 & 0xf0000000000) != 0) {
      uVar4 = uVar4 | 0x800000000000;
    }
    if (uVar2 >> 0x3c != 0) {
      uVar4 = uVar4 | 0x8000000000000;
    }
    uVar1 = uVar4 | 0x10000000000000;
    if (uVar2 >> 0x3d == 0) {
      uVar1 = uVar4;
    }
    uVar4 = uVar1 | 0x20000000000000;
    if (uVar2 >> 0x3c < 3) {
      uVar4 = uVar1;
    }
  }
  if ((param_1 & 1) != 0) {
    uVar4 = uVar4 | 0x300;
  }
  DAT_002238a8 = auVar5._0_8_ & 0x400000 | ((param_1 & 0x10000) >> 0x10) << 0x12 |
                 (param_1 & 0x4000000) >> 3 | ((param_1 & 0x400000) >> 0x16) << 0x1e |
                 (param_1 & 0x20000) >> 4 | (uVar3 >> 0x2e & 1) << 0x3a |
                 (uVar3 & 0x4000) << 0xd | auVar10._0_8_ & 0x80000000 | (uVar3 & 2) << 0x23 | uVar4
                 | 0x8000000000000000;
  return;
}


// ===== 0020f030  _INIT_1 =====

void _INIT_1(void)

{
  int iVar1;
  ulong uVar2;
  char local_70 [8];
  ulong uStack_68;
  undefined8 local_60;
  
  if (DAT_002238a8 != 0) {
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
    FUN_0020ed94(uVar2 | 0x4000000000000000,local_70);
  }
  return;
}


// ===== 0020f0c0  FUN_0020f0c0 =====

long FUN_0020f0c0(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_002238a0 == '\0') {
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


// ===== 0020f0f0  FUN_0020f0f0 =====

undefined8 FUN_0020f0f0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_4f0 [624];
  undefined1 auStack_280 [528];
  undefined8 local_70;
  undefined1 auStack_68 [24];
  code *local_50;
  
  FUN_002130b8(auStack_280);
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_0020f704(auStack_4f0,auStack_280);
  iVar1 = FUN_0020f914(auStack_4f0);
  while( true ) {
    if (iVar1 == 0) {
      return 5;
    }
    if ((iVar1 < 0) || (iVar1 = FUN_0020f93c(auStack_4f0,auStack_68), iVar1 != 0)) break;
    if ((local_50 != (code *)0x0) &&
       (iVar1 = (*local_50)(1,1,*param_1,param_1,auStack_4f0), iVar1 != 8)) {
      if (iVar1 != 6) {
        return 3;
      }
      FUN_0020f7ac(auStack_4f0,0xfffffffe,&local_70);
      param_1[3] = local_70;
      uVar2 = FUN_0020f1e8(auStack_280,auStack_4f0,param_1);
      return uVar2;
    }
    iVar1 = FUN_0020f914(auStack_4f0);
  }
  return 3;
}


// ===== 0020f1e8  FUN_0020f1e8 =====

/* WARNING: Removing unreachable block (ram,0x0020f248) */
/* WARNING: Removing unreachable block (ram,0x0020f258) */
/* WARNING: Removing unreachable block (ram,0x0020f260) */
/* WARNING: Removing unreachable block (ram,0x0020f288) */
/* WARNING: Removing unreachable block (ram,0x0020f28c) */
/* WARNING: Removing unreachable block (ram,0x0020f2ac) */
/* WARNING: Removing unreachable block (ram,0x0020f2cc) */
/* WARNING: Removing unreachable block (ram,0x0020f2d4) */
/* WARNING: Removing unreachable block (ram,0x0020f2f0) */
/* WARNING: Removing unreachable block (ram,0x0020f300) */
/* WARNING: Removing unreachable block (ram,0x0020f310) */
/* WARNING: Removing unreachable block (ram,0x0020f274) */
/* WARNING: Removing unreachable block (ram,0x0020f3e8) */
/* WARNING: Removing unreachable block (ram,0x0020f3ec) */

undefined8 FUN_0020f1e8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar4;
  undefined1 auStack_a8 [24];
  code *local_90;
  long local_48;
  
  FUN_0020f704(param_2,param_1);
  iVar2 = FUN_0020f928(param_2);
  if (iVar2 != 0) {
    do {
      if (iVar2 < 0) {
        return 2;
      }
      FUN_0020f7ac(param_2,0xfffffffe,&local_48);
      iVar2 = FUN_0020f93c(param_2,auStack_a8);
      if (iVar2 != 0) {
        return 2;
      }
      if (local_90 != (code *)0x0) {
        uVar4 = 6;
        if (local_48 != param_3[3]) {
          uVar4 = 2;
        }
        iVar2 = (*local_90)(1,uVar4,*param_3,param_3,param_2);
        puVar1 = PTR___sF_0021dac0;
        if (iVar2 != 8) {
          if (iVar2 != 7) {
            return 2;
          }
          uVar3 = FUN_0020f6f4(param_2);
          UNRECOVERED_JUMPTABLE = (code *)FUN_0020f6e4();
                    /* WARNING: Could not recover jumptable at 0x0020f414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
          return uVar3;
        }
        if (local_48 == param_3[3]) {
          fprintf((FILE *)(PTR___sF_0021dac0 + 0x130),"libunwind: %s - %s\n","unwind_phase2",
                  "during phase1 personality function said it would stop here, but now in phase2 it did not stop here"
                 );
          fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      iVar2 = FUN_0020f928(param_2);
    } while (iVar2 != 0);
  }
  return 5;
}


// ===== 0020f440  FUN_0020f440 =====

void FUN_0020f440(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_4a0 [624];
  undefined1 auStack_230 [528];
  
  FUN_002130b8(auStack_230);
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_0020f1e8(auStack_230,auStack_4a0,param_1);
  }
  else {
    FUN_0020f4c4(auStack_230,auStack_4a0,param_1,*(long *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = PTR___sF_0021dac0;
  fprintf((FILE *)(PTR___sF_0021dac0 + 0x130),"libunwind: %s - %s\n","_Unwind_Resume",
          "_Unwind_Resume() can\'t return");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0020f4c4  FUN_0020f4c4 =====

/* WARNING: Removing unreachable block (ram,0x0020f5c0) */
/* WARNING: Removing unreachable block (ram,0x0020f5c4) */
/* WARNING: Removing unreachable block (ram,0x0020f5c8) */
/* WARNING: Removing unreachable block (ram,0x0020f5d8) */

void FUN_0020f4c4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,code *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_98 [24];
  code *local_80;
  
  FUN_0020f704(param_2,param_1);
  iVar1 = FUN_0020f928(param_2);
  while( true ) {
    if (iVar1 < 1) {
      (*param_4)(1,0x1a,*param_3,param_3,param_2,param_5);
      return;
    }
    iVar1 = FUN_0020f93c(param_2,auStack_98);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = (*param_4)(1,10,*param_3,param_3,param_2,param_5);
    if (iVar1 != 0) {
      return;
    }
    if ((local_80 != (code *)0x0) &&
       (iVar1 = (*local_80)(1,10,*param_3,param_3,param_2), iVar1 != 8)) break;
    iVar1 = FUN_0020f928(param_2);
  }
  if (iVar1 != 7) {
    return;
  }
  uVar2 = FUN_0020f6f4(param_2);
  UNRECOVERED_JUMPTABLE = (code *)FUN_0020f6e4();
                    /* WARNING: Could not recover jumptable at 0x0020f534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}


// ===== 0020f618  FUN_0020f618 =====

undefined8 FUN_0020f618(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_58 [16];
  undefined8 local_48;
  
  iVar1 = FUN_0020f93c(param_1,auStack_58);
  if (iVar1 != 0) {
    local_48 = 0;
  }
  return local_48;
}


// ===== 0020f64c  FUN_0020f64c =====

undefined8 FUN_0020f64c(undefined8 param_1)

{
  int iVar1;
  undefined8 local_58 [9];
  
  iVar1 = FUN_0020f93c(param_1,local_58);
  if (iVar1 != 0) {
    local_58[0] = 0;
  }
  return local_58[0];
}


// ===== 0020f680  FUN_0020f680 =====

void FUN_0020f680(long param_1)

{
  if (*(code **)(param_1 + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0020f694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 8))(1,param_1);
    return;
  }
  return;
}


// ===== 0020f69c  thunk_FUN_0020f828 =====

void thunk_FUN_0020f828(void)

{
  FUN_0020f828();
  return;
}


// ===== 0020f6a4  FUN_0020f6a4 =====

undefined8 FUN_0020f6a4(undefined8 param_1)

{
  undefined8 local_18;
  
  FUN_0020f7ac(param_1,0xffffffff,&local_18);
  return local_18;
}


// ===== 0020f6d4  FUN_0020f6d4 =====

void FUN_0020f6d4(undefined8 param_1,undefined8 param_2)

{
  FUN_0020f828(param_1,0xffffffff,param_2);
  return;
}


// ===== 0020f6e4  FUN_0020f6e4 =====

code * FUN_0020f6e4(void)

{
  return FUN_00213018;
}


// ===== 0020f6f4  FUN_0020f6f4 =====

void FUN_0020f6f4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0020f700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))();
  return;
}


// ===== 0020f704  FUN_0020f704 =====

undefined8 FUN_0020f704(undefined8 *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = &PTR_FUN_0021d7c0;
  param_1[1] = &DAT_002238b0;
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
  FUN_002101b4(param_1,0);
  return 0;
}


// ===== 0020f7ac  FUN_0020f7ac =====

undefined8 FUN_0020f7ac(long *param_1,undefined4 param_2,undefined8 *param_3)

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


// ===== 0020f828  FUN_0020f828 =====

undefined8 FUN_0020f828(long *param_1,int param_2,undefined8 param_3)

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


// ===== 0020f914  FUN_0020f914 =====

void FUN_0020f914(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0020f924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,0);
  return;
}


// ===== 0020f928  FUN_0020f928 =====

void FUN_0020f928(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0020f938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,1);
  return;
}


// ===== 0020f93c  FUN_0020f93c =====

undefined4 FUN_0020f93c(long *param_1,long param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x48))();
  uVar1 = 0xffffe66b;
  if (*(long *)(param_2 + 8) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 0020f97c  FUN_0020f97c =====

char * FUN_0020f97c(undefined8 param_1,uint *param_2,undefined8 *param_3,long *param_4,ulong param_5
                   )

{
  byte bVar1;
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
      pcVar7 = (char *)FUN_0020fb14(param_1,lVar8,param_4);
      if (pcVar7 != (char *)0x0) {
        return pcVar7;
      }
    }
    else if (*param_4 != lVar8) {
      return "CIE start does not match";
    }
    lVar8 = (long)puVar10 + uVar9;
    local_48 = puVar10 + 1;
    lVar3 = FUN_00211784(param_1,&local_48,lVar8,(char)param_4[3],0);
    lVar4 = FUN_00211784(param_1,&local_48,lVar8,*(byte *)(param_4 + 3) & 0xf,0);
    bVar1 = *(byte *)((long)param_4 + 0x31);
    param_3[5] = 0;
    puVar10 = local_48;
    if ((bVar1 & 1) != 0) {
      lVar5 = FUN_00211b10(&local_48,lVar8);
      puVar2 = local_48;
      puVar10 = (uint *)((long)local_48 + lVar5);
      if ((*(byte *)((long)param_4 + 0x19) != 0xff) &&
         (lVar5 = FUN_00211784(param_1,&local_48,lVar8,*(byte *)((long)param_4 + 0x19) & 0xf,0),
         lVar5 != 0)) {
        local_48 = puVar2;
        uVar6 = FUN_00211784(param_1,&local_48,lVar8,*(undefined1 *)((long)param_4 + 0x19),0);
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


// ===== 0020fb14  FUN_0020fb14 =====

char * FUN_0020fb14(undefined8 param_1,uint *param_2,long *param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  long lVar7;
  char *pcVar8;
  uint *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint uVar16;
  byte *pbVar17;
  byte *local_48;
  
  *(undefined2 *)((long)param_3 + 0x33) = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  *(undefined2 *)(param_3 + 6) = 0;
  *param_3 = (long)param_2;
  *(undefined4 *)(param_3 + 3) = 0xff00;
  puVar9 = param_2 + 1;
  uVar12 = (ulong)*param_2;
  if (*param_2 == 0xffffffff) {
    uVar12 = *(ulong *)(param_2 + 1);
    puVar9 = param_2 + 3;
    pbVar1 = (byte *)(uVar12 + (long)puVar9);
  }
  else {
    pbVar1 = (byte *)((long)puVar9 + uVar12);
  }
  if (uVar12 == 0) {
    pcVar8 = (char *)0x0;
  }
  else if (*puVar9 == 0) {
    uVar3 = puVar9[1];
    if (((byte)uVar3 & 0xfd) == 1) {
      pbVar17 = (byte *)((long)puVar9 + 5);
      pbVar10 = pbVar17;
      do {
        local_48 = pbVar10 + 1;
        bVar2 = *pbVar10;
        pbVar10 = local_48;
      } while (bVar2 != 0);
      uVar6 = FUN_00211b10(&local_48,pbVar1);
      uVar13 = 0;
      uVar12 = 0xfffffffffffffff9;
      *(undefined4 *)(param_3 + 5) = uVar6;
      puVar4 = PTR___sF_0021dac0;
      pbVar10 = local_48;
      pbVar14 = local_48;
      do {
        pbVar11 = pbVar10;
        if (pbVar14 == pbVar1) {
          fprintf((FILE *)(PTR___sF_0021dac0 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                  "truncated sleb128 expression");
          fflush((FILE *)(puVar4 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
        pbVar15 = pbVar14 + 1;
        bVar2 = *pbVar14;
        uVar12 = uVar12 + 7;
        pbVar10 = pbVar11 + 1;
        uVar13 = ((ulong)bVar2 & 0x7f) << (uVar12 & 0x3f) | uVar13;
        pbVar14 = pbVar15;
      } while ((char)bVar2 < '\0');
      uVar16 = (uint)(-1L << ((ulong)((int)uVar12 + 7) & 0x3f));
      if (0x38 < uVar12 || bVar2 < 0x40) {
        uVar16 = 0;
      }
      *(uint *)((long)param_3 + 0x2c) = (uint)uVar13 | uVar16;
      if ((byte)uVar3 == 1) {
        local_48 = pbVar11 + 2;
        *(byte *)((long)param_3 + 0x32) = *pbVar15;
        bVar2 = *pbVar17;
      }
      else {
        local_48 = pbVar10;
        uVar5 = FUN_00211b10(&local_48,pbVar1);
        *(undefined1 *)((long)param_3 + 0x32) = uVar5;
        bVar2 = *pbVar17;
      }
      if (bVar2 == 0x7a) {
        FUN_00211b10(&local_48,pbVar1);
LAB_0020fc94:
        bVar2 = *pbVar17;
        if (bVar2 < 0x50) {
          if (bVar2 < 0x47) {
            if (bVar2 != 0x42) {
              if (bVar2 != 0) goto LAB_0020fd34;
              goto LAB_0020fd78;
            }
            *(undefined1 *)((long)param_3 + 0x33) = 1;
            pbVar17 = pbVar17 + 1;
            goto LAB_0020fc94;
          }
          if (bVar2 == 0x47) {
            *(undefined1 *)((long)param_3 + 0x34) = 1;
            goto LAB_0020fd34;
          }
          if (bVar2 == 0x4c) {
            pbVar17 = pbVar17 + 1;
            *(byte *)((long)param_3 + 0x19) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_0020fc94;
          }
        }
        else if (bVar2 < 0x53) {
          if (bVar2 == 0x50) {
            bVar2 = *local_48;
            *(byte *)((long)param_3 + 0x1a) = bVar2;
            *(char *)((long)param_3 + 0x1b) = (char)(local_48 + 1) - (char)param_2;
            local_48 = local_48 + 1;
            lVar7 = FUN_00211784(param_1,&local_48,pbVar1,bVar2,0);
            param_3[4] = lVar7;
            pbVar17 = pbVar17 + 1;
            goto LAB_0020fc94;
          }
          if (bVar2 == 0x52) {
            pbVar17 = pbVar17 + 1;
            *(byte *)(param_3 + 3) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_0020fc94;
          }
        }
        else {
          if (bVar2 == 0x53) {
            *(undefined1 *)(param_3 + 6) = 1;
            pbVar17 = pbVar17 + 1;
            goto LAB_0020fc94;
          }
          if (bVar2 == 0x7a) {
            *(undefined1 *)((long)param_3 + 0x31) = 1;
            pbVar17 = pbVar17 + 1;
            goto LAB_0020fc94;
          }
        }
LAB_0020fd34:
        pbVar17 = pbVar17 + 1;
        goto LAB_0020fc94;
      }
LAB_0020fd78:
      pcVar8 = (char *)0x0;
      param_3[1] = (long)pbVar1 - *param_3;
      param_3[2] = (long)local_48;
    }
    else {
      pcVar8 = "CIE version is not 1 or 3";
    }
  }
  else {
    pcVar8 = "CIE ID is not zero";
  }
  return pcVar8;
}


// ===== 0020fddc  FUN_0020fddc =====

void FUN_0020fddc(void)

{
  return;
}


// ===== 0020fde4  FUN_0020fde4 =====

void FUN_0020fde4(void)

{
  return;
}


// ===== 0020fdec  FUN_0020fdec =====

bool FUN_0020fdec(undefined8 param_1,uint param_2)

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


// ===== 0020fe30  FUN_0020fe30 =====

undefined8 FUN_0020fe30(long param_1,uint param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_0021dac0;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_0020fe98:
      return *(undefined8 *)(param_1 + 0x108);
    }
    if (param_2 == 0xffffffff) goto LAB_0020fe8c;
    if (param_2 == 0x1d) {
      return *(undefined8 *)(param_1 + 0xf8);
    }
  }
  else if ((int)param_2 < 0x20) {
    if (param_2 == 0x1e) {
      return *(undefined8 *)(param_1 + 0x100);
    }
    if (param_2 == 0x1f) goto LAB_0020fe98;
  }
  else {
    if (param_2 == 0x22) {
      return *(undefined8 *)(param_1 + 0x118);
    }
    if (param_2 == 0x20) {
LAB_0020fe8c:
      return *(undefined8 *)(param_1 + 0x110);
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_0021dac0 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8);
}


// ===== 0020ff18  FUN_0020ff18 =====

void FUN_0020ff18(long param_1,uint param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_0021dac0;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_0020ff80:
      *(undefined8 *)(param_1 + 0x108) = param_3;
      return;
    }
    if (param_2 == 0xffffffff) goto LAB_0020ff74;
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
    if (param_2 == 0x1f) goto LAB_0020ff80;
  }
  else {
    if (param_2 == 0x22) {
      *(undefined8 *)(param_1 + 0x118) = param_3;
      return;
    }
    if (param_2 == 0x20) {
LAB_0020ff74:
      *(undefined8 *)(param_1 + 0x110) = param_3;
      return;
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_0021dac0 + 0x130),"libunwind: %s - %s\n","setRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8) = param_3;
  return;
}


// ===== 00210000  FUN_00210000 =====

bool FUN_00210000(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffffffe0) == 0x40;
}


// ===== 00210014  FUN_00210014 =====

undefined1  [16] FUN_00210014(long param_1,int param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + (long)param_2 * 8 + -0xe0);
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 00210024  FUN_00210024 =====

void FUN_00210024(undefined8 param_1,long param_2,int param_3)

{
  *(undefined8 *)(param_2 + (long)param_3 * 8 + -0xe0) = param_1;
  return;
}


// ===== 00210034  FUN_00210034 =====

ulong FUN_00210034(long *param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_240 [528];
  
  if ((*(byte *)(param_1 + 0x4d) & 1) != 0) {
    return 0;
  }
  if (*(char *)((long)param_1 + 0x26a) == '\x01') {
    memset(auStack_240,0,0x210);
    uVar3 = FUN_00210410(param_1,auStack_240);
    iVar2 = (int)uVar3;
  }
  else {
    lVar1 = param_1[1];
    uVar4 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
    uVar3 = FUN_00210530(lVar1,uVar4,param_1[0x4b],param_1 + 2,(long)param_1 + 0x269,param_2 & 1);
    iVar2 = (int)uVar3;
  }
  if (iVar2 == 1) {
    uVar3 = uVar3 & 0xffffffff;
    (**(code **)(*param_1 + 0x68))(param_1,1);
    if ((*(byte *)(param_1 + 0x4d) & 1) != 0) {
      return 0;
    }
  }
  return uVar3;
}


// ===== 00210128  FUN_00210128 =====

void FUN_00210128(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)(param_1 + 0x268) == '\x01') {
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


// ===== 00210170  FUN_00210170 =====

void FUN_00210170(long param_1)

{
  FUN_00213018(param_1 + 0x10);
  return;
}


// ===== 0021017c  FUN_0021017c =====

undefined1 FUN_0021017c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x269);
}


// ===== 00210188  FUN_00210188 =====

undefined8 FUN_00210188(long *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  return 0;
}


// ===== 002101b4  FUN_002101b4 =====

void FUN_002101b4(long *param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  int *piVar7;
  undefined *puVar8;
  undefined1 auStack_6f0 [32];
  long local_6d0;
  long local_6b8;
  undefined4 uStack_6b0;
  long local_6a0;
  long lStack_698;
  long local_690;
  undefined1 auStack_688 [16];
  long local_678;
  long local_658;
  undefined1 *puStack_650;
  ulong local_648;
  
  *(undefined1 *)((long)param_1 + 0x26a) = 0;
  lVar3 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  if (lVar3 != 0) {
    local_658 = param_1[1];
    puStack_650 = auStack_688;
    uVar5 = (lVar3 - (param_2 & 1)) + (ulong)*(byte *)((long)param_1 + 0x269);
    local_648 = uVar5;
    iVar2 = dl_iterate_phdr(FUN_00212970,&local_658);
    if (((iVar2 != 0) && (local_678 != 0)) &&
       (uVar4 = FUN_0021269c(param_1,uVar5,auStack_688,0), (uVar4 & 1) != 0)) {
      return;
    }
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_002238b4);
    for (puVar8 = PTR_DAT_002233d8; puVar8 < PTR_DAT_002233e0; puVar8 = puVar8 + 0x20) {
      if ((*(ulong *)(puVar8 + 8) <= uVar5) && (uVar5 < *(ulong *)(puVar8 + 0x10))) {
        lVar3 = *(long *)(puVar8 + 0x18);
        pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_002238b4);
        if ((lVar3 != 0) &&
           (lVar3 = FUN_0020f97c(param_1[1],lVar3,&local_6b8,auStack_6f0,0), lVar3 == 0)) {
          memset(&local_658,0,0x618);
          uVar5 = FUN_002109ac(param_1[1],&local_6b8,auStack_6f0,uVar5,4,&local_658);
          if ((uVar5 & 1) != 0) {
            param_1[0x49] = 0;
            param_1[0x46] = local_690;
            param_1[0x47] = local_6d0;
            param_1[0x48] = local_648 & 0xffffffff;
            *(undefined4 *)(param_1 + 0x4a) = 0x3000000;
            param_1[0x45] = lStack_698;
            param_1[0x44] = local_6a0;
            param_1[0x4c] = 0;
            param_1[0x4b] = local_6b8;
            *(undefined4 *)((long)param_1 + 0x254) = uStack_6b0;
            return;
          }
        }
        goto LAB_00210334;
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_002238b4);
LAB_00210334:
    piVar6 = (int *)(**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
    if (piVar6 != (int *)0x0) {
      piVar7 = (int *)__errno();
      iVar2 = *piVar7;
      syscall(0x87,0xffffffff,piVar6,0,8);
      iVar1 = *piVar7;
      *piVar7 = iVar2;
      if (((iVar1 != 0xe) && (*piVar6 == -0x2d7fee98)) && (piVar6[1] == -0x2bffffff)) {
        param_1[0x4c] = 0;
        param_1[0x45] = (long)(piVar6 + 1);
        param_1[0x44] = (long)piVar6;
        *(undefined1 *)((long)param_1 + 0x26a) = 1;
        param_1[0x49] = 0;
        param_1[0x48] = 0;
        param_1[0x4b] = 0;
        param_1[0x4a] = 0;
        param_1[0x47] = 0;
        param_1[0x46] = 0;
        return;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x4d) = 1;
  return;
}


// ===== 002103f8  FUN_002103f8 =====

void FUN_002103f8(undefined8 param_1,undefined4 param_2)

{
  FUN_00212fe8(param_2);
  return;
}


// ===== 00210404  FUN_00210404 =====

long FUN_00210404(long param_1)

{
  return param_1 + 0x10;
}


// ===== 00210410  FUN_00210410 =====

undefined8 FUN_00210410(long param_1)

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


// ===== 00210530  FUN_00210530 =====

undefined8
FUN_00210530(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4,
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
  undefined8 *puVar12;
  undefined8 uVar13;
  int *piVar14;
  uint uVar15;
  ulong *puVar16;
  ulong uVar17;
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
  
  lVar7 = FUN_0020f97c(param_1,param_3,auStack_b0,auStack_e8,0);
  if (lVar7 == 0) {
    memset(auStack_700,0,0x618);
    uVar8 = FUN_002109ac(param_1,auStack_b0,auStack_e8,param_2,4,auStack_700);
    if ((uVar8 & 1) != 0) {
      uVar8 = FUN_00211440(param_1,auStack_700,param_4);
      if (((param_6 & 1) != 0) && (local_b4 == '\x01')) {
        for (uVar11 = *(ulong *)((long)param_4 + 0xf8) & 0xfffffffffffffff0; uVar11 < uVar8;
            uVar11 = uVar11 + 0x10) {
        }
      }
      memcpy(local_a00 + 0x1e,param_4,0x210);
      uVar11 = 0;
      uVar13 = 0;
      piVar14 = local_6e8;
      puVar16 = local_a00 + 0x1e;
      local_a00[0x3d] = uVar8;
      do {
        puVar3 = PTR___sF_0021dac0;
        iVar2 = *piVar14;
        if (iVar2 == 0) {
          uVar17 = local_a00[0x3d];
          uVar5 = local_a00[0x3b];
          uVar6 = local_a00[0x3c];
          if (uVar11 == local_b6) {
            if (local_b6 < 0x1f) {
              puVar12 = (undefined8 *)((long)param_4 + 0xe8);
              if ((local_b6 != 0x1d) &&
                 (puVar12 = (undefined8 *)((long)param_4 + 0xf0), local_b6 != 0x1e))
              goto LAB_00210814;
            }
            else {
              puVar12 = (undefined8 *)((long)param_4 + 0x108);
              if ((local_b6 != 0x22) &&
                 ((puVar12 = (undefined8 *)((long)param_4 + 0x100), local_b6 != 0x20 &&
                  (puVar12 = (undefined8 *)((long)param_4 + 0xf8), local_b6 != 0x1f)))) {
LAB_00210814:
                if (0x1c < local_b6) {
                  fprintf((FILE *)(PTR___sF_0021dac0 + 0x130),"libunwind: %s - %s\n","getRegister",
                          "unsupported arm64 register");
                  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                puVar12 = (undefined8 *)((long)param_4 + (ulong)local_b6 * 8);
              }
            }
            uVar13 = *puVar12;
          }
        }
        else {
          uVar15 = (uint)uVar11;
          if ((uVar15 & 0x60) == 0x40) {
            if (iVar2 < 5) {
              uVar17 = 0;
              if (iVar2 != 1) {
                if (iVar2 != 2) {
LAB_00210910:
                  fprintf((FILE *)(PTR___sF_0021dac0 + 0x130),"libunwind: %s - %s\n",
                          "getSavedFloatRegister","unsupported restore location for float register")
                  ;
                  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                uVar17 = *(ulong *)(*(long *)(piVar14 + 2) + uVar8);
              }
            }
            else if (iVar2 == 5) {
              uVar17 = *(ulong *)((long)param_4 +
                                 ((*(long *)(piVar14 + 2) << 0x20) + -0x4000000000 >> 0x1d) + 0x110)
              ;
            }
            else {
              if (iVar2 != 6) goto LAB_00210910;
              puVar9 = (ulong *)FUN_00211cd8(*(undefined8 *)(piVar14 + 2),param_1,param_4,uVar8);
              uVar17 = *puVar9;
            }
            local_a00[uVar11] = uVar17;
            uVar17 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
          }
          else if (uVar11 == local_b6) {
            uVar13 = FUN_00211574(param_1,param_4,uVar8,piVar14);
            uVar17 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
          }
          else if (uVar11 == 0x22) {
            local_a00[0x3f] = FUN_00211574(param_1,param_4,uVar8,piVar14);
            uVar17 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
          }
          else {
            if (0x20 < uVar11) {
              return 0xffffe672;
            }
            uVar10 = FUN_00211574(param_1,param_4,uVar8,piVar14);
            puVar3 = PTR___sF_0021dac0;
            uVar17 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            if ((int)uVar15 < 0x1f) {
              uVar5 = uVar10;
              if ((uVar15 != 0x1d) && (uVar5 = local_a00[0x3b], uVar6 = uVar10, uVar15 != 0x1e)) {
LAB_00210844:
                if (0x1c < uVar11) {
                  fprintf((FILE *)(PTR___sF_0021dac0 + 0x130),"libunwind: %s - %s\n","setRegister",
                          "unsupported arm64 register");
                  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                *puVar16 = uVar10;
                uVar17 = local_a00[0x3d];
                uVar5 = local_a00[0x3b];
                uVar6 = local_a00[0x3c];
              }
            }
            else {
              uVar17 = uVar10;
              if ((uVar15 != 0x1f) && (uVar17 = local_a00[0x3d], uVar15 != 0x20)) goto LAB_00210844;
            }
          }
        }
        local_a00[0x3c] = uVar6;
        local_a00[0x3b] = uVar5;
        local_a00[0x3d] = uVar17;
        uVar11 = uVar11 + 1;
        piVar14 = piVar14 + 4;
        puVar16 = puVar16 + 1;
        if (uVar11 == 0x60) {
          *param_5 = local_b8;
          memcpy(auStack_b20,param_4,0x210);
          uStack_78 = uStack_4c0;
          local_80 = local_4c8;
          uVar4 = local_80;
          local_80._0_4_ = (int)local_4c8;
          bVar1 = (int)local_80 != 0;
          if (bVar1) {
            local_80 = uVar4;
            FUN_00211574(param_1,auStack_b20,uVar8,&local_80);
          }
          local_a00[0x3e] = uVar13;
          memcpy(param_4,local_a00 + 0x1e,0x210);
          return 1;
        }
      } while( true );
    }
  }
  return 0xffffe66e;
}


// ===== 002109ac  FUN_002109ac =====

undefined8
FUN_002109ac(undefined8 param_1,long *param_2,long *param_3,long param_4,int param_5,
            undefined4 *param_6)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  long lVar7;
  char *__ptr;
  size_t __size;
  FILE *__s;
  uint uVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auStack_6f0 [8];
  undefined8 *local_6e8;
  undefined8 *puStack_6e0;
  undefined8 local_6d8;
  int local_6cc;
  undefined8 *local_6c8;
  undefined1 *local_6c0;
  undefined1 auStack_6a0 [544];
  undefined8 local_480 [124];
  byte *local_a0;
  ulong local_98 [7];
  
  puVar5 = (undefined8 *)auStack_6f0;
  lVar19 = 0;
  local_98[0] = param_3[2];
  local_98[1] = param_3[1] + *param_3;
  local_98[2] = 0xffffffffffffffff;
  local_98[3] = param_2[2];
  local_6cc = param_5;
  local_6d8 = param_1;
  local_98[4] = param_2[1] + *param_2;
  local_98[5] = param_4 - param_2[3];
  local_6c8 = (undefined8 *)0x0;
  local_6c0 = auStack_6a0;
  local_6e8 = local_480;
  puStack_6e0 = (undefined8 *)(param_6 + 0x8e);
  do {
    local_a0 = *(byte **)((long)local_98 + lVar19);
    pbVar1 = *(byte **)((long)local_98 + lVar19 + 8);
    uVar20 = *(ulong *)((long)local_98 + lVar19 + 0x10);
    if (local_a0 < pbVar1 && uVar20 != 0) {
      uVar16 = 0;
      pbVar11 = local_a0;
      do {
        puVar17 = local_6c8;
        puVar4 = PTR___sF_0021dac0;
        pbVar9 = pbVar11 + 1;
        bVar2 = *pbVar11;
        local_a0 = pbVar9;
        switch((ulong)bVar2) {
        case 0:
          break;
        case 1:
          uVar16 = FUN_00211784(local_6d8,&local_a0,pbVar1,(char)param_3[3],0);
          break;
        case 2:
          uVar8 = (uint)pbVar11[1];
          iVar13 = (int)param_3[5];
          local_a0 = pbVar11 + 2;
          goto LAB_00210e3c;
        case 3:
          uVar8 = (uint)*(ushort *)(pbVar11 + 1);
          iVar13 = (int)param_3[5];
          local_a0 = pbVar11 + 3;
          goto LAB_00210e3c;
        case 4:
          uVar8 = *(uint *)(pbVar11 + 1);
          iVar13 = (int)param_3[5];
          local_a0 = pbVar11 + 5;
LAB_00210e3c:
          uVar16 = uVar16 + iVar13 * uVar8;
          break;
        case 5:
          uVar18 = FUN_00211b10(&local_a0,pbVar1);
          lVar7 = FUN_00211b10(&local_a0,pbVar1);
          if (0x5f < uVar18) {
            __ptr = "libunwind: malformed DW_CFA_offset_extended DWARF unwind, reg too big\n";
            __size = 0x46;
            __s = (FILE *)(PTR___sF_0021dac0 + 0x130);
            goto LAB_00211330;
          }
          puVar17 = (undefined8 *)(param_6 + uVar18 * 4 + 6);
          lVar12 = (long)*(int *)((long)param_3 + 0x2c);
          if ((*(byte *)((long)puVar17 + 4) & 1) == 0) {
            uVar21 = *puVar17;
            *(undefined1 *)((long)puVar17 + 4) = 1;
            *(undefined8 *)((long)(local_6c0 + uVar18 * 0x10) + 8) = puVar17[1];
            *(undefined8 *)(local_6c0 + uVar18 * 0x10) = uVar21;
          }
LAB_00211188:
          lVar7 = lVar7 * lVar12;
LAB_0021118c:
          uVar6 = 2;
          goto LAB_00211190;
        case 6:
          uVar18 = FUN_00211b10(&local_a0,pbVar1);
          if (0x5f < uVar18) {
            __ptr = "libunwind: malformed DW_CFA_restore_extended DWARF unwind, reg too big\n";
LAB_00211220:
            __s = (FILE *)(PTR___sF_0021dac0 + 0x130);
            __size = 0x47;
            goto LAB_00211330;
          }
          puVar17 = (undefined8 *)(param_6 + uVar18 * 4 + 6);
          if (*(char *)((long)puVar17 + 4) == '\x01') {
            uVar22 = *(undefined8 *)((long)(local_6c0 + uVar18 * 0x10) + 8);
            uVar21 = *(undefined8 *)(local_6c0 + uVar18 * 0x10);
LAB_00210f98:
            puVar17[1] = uVar22;
            *puVar17 = uVar21;
          }
          break;
        case 7:
          uVar18 = FUN_00211b10(&local_a0,pbVar1);
          if (0x5f < uVar18) {
            __ptr = "libunwind: malformed DW_CFA_undefined DWARF unwind, reg too big\n";
LAB_00211324:
            __s = (FILE *)(PTR___sF_0021dac0 + 0x130);
            __size = 0x40;
            goto LAB_00211330;
          }
          puVar17 = (undefined8 *)(param_6 + uVar18 * 4 + 6);
          if ((*(byte *)((long)puVar17 + 4) & 1) == 0) {
            uVar21 = *puVar17;
            *(undefined1 *)((long)puVar17 + 4) = 1;
            *(undefined8 *)((long)(local_6c0 + uVar18 * 0x10) + 8) = puVar17[1];
            *(undefined8 *)(local_6c0 + uVar18 * 0x10) = uVar21;
          }
          *(undefined4 *)puVar17 = 1;
          break;
        case 8:
          uVar18 = FUN_00211b10(&local_a0,pbVar1);
          if (0x5f < uVar18) {
            __ptr = "libunwind: malformed DW_CFA_same_value DWARF unwind, reg too big\n";
LAB_00211308:
            __s = (FILE *)(PTR___sF_0021dac0 + 0x130);
            __size = 0x41;
            goto LAB_00211330;
          }
          puVar17 = (undefined8 *)(param_6 + uVar18 * 4 + 6);
          if ((*(byte *)((long)puVar17 + 4) & 1) == 0) {
            uVar21 = *puVar17;
            *(undefined1 *)((long)puVar17 + 4) = 1;
            *(undefined8 *)((long)(local_6c0 + uVar18 * 0x10) + 8) = puVar17[1];
            *(undefined8 *)(local_6c0 + uVar18 * 0x10) = uVar21;
          }
          *(undefined4 *)puVar17 = 0;
          break;
        case 9:
          uVar18 = FUN_00211b10(&local_a0,pbVar1);
          uVar14 = FUN_00211b10(&local_a0,pbVar1);
          if (0x5f < uVar18) {
            __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg too big\n";
            __size = 0x3f;
            __s = (FILE *)(PTR___sF_0021dac0 + 0x130);
            goto LAB_00211330;
          }
          if (0x5f < uVar14) {
            __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg2 too big\n";
            goto LAB_00211324;
          }
          puVar17 = (undefined8 *)(param_6 + uVar18 * 4 + 6);
          if ((*(byte *)((long)puVar17 + 4) & 1) == 0) {
            uVar21 = *puVar17;
            *(undefined1 *)((long)puVar17 + 4) = 1;
            *(undefined8 *)((long)(local_6c0 + uVar18 * 0x10) + 8) = puVar17[1];
            *(undefined8 *)(local_6c0 + uVar18 * 0x10) = uVar21;
          }
          puVar17[1] = uVar14;
          *(undefined4 *)puVar17 = 5;
          break;
        case 10:
          puVar17 = (undefined8 *)((long)puVar5 + -0x620);
          *puVar17 = local_6c8;
          memcpy((undefined1 *)((long)puVar5 + -0x618),param_6,0x618);
          local_6c8 = puVar17;
          puVar5 = puVar17;
          break;
        case 0xb:
          if (local_6c8 == (undefined8 *)0x0) {
            return 0;
          }
          memcpy(param_6,local_6c8 + 1,0x618);
          local_6c8 = (undefined8 *)*puVar17;
          break;
        case 0xc:
          uVar18 = FUN_00211b10(&local_a0,pbVar1);
          uVar6 = FUN_00211b10(&local_a0,pbVar1);
          if (0x5f < uVar18) {
            __ptr = "libunwind: malformed DW_CFA_def_cfa DWARF unwind, reg too big\n";
            __size = 0x3e;
            __s = (FILE *)(PTR___sF_0021dac0 + 0x130);
            goto LAB_00211330;
          }
          *param_6 = (int)uVar18;
          param_6[1] = uVar6;
          break;
        case 0xd:
          uVar18 = FUN_00211b10(&local_a0,pbVar1);
          if (0x5f < uVar18) {
            __ptr = "libunwind: malformed DW_CFA_def_cfa_register DWARF unwind, reg too big\n";
            goto LAB_00211220;
          }
          *param_6 = (int)uVar18;
          break;
        case 0xe:
          uVar6 = FUN_00211b10(&local_a0,pbVar1);
          param_6[1] = uVar6;
          break;
        case 0xf:
          *param_6 = 0;
          *(byte **)(param_6 + 2) = pbVar9;
          goto LAB_002110d0;
        case 0x10:
          uVar18 = FUN_00211b10(&local_a0,pbVar1);
          if (0x5f < uVar18) {
            __ptr = "libunwind: malformed DW_CFA_expression DWARF unwind, reg too big\n";
            goto LAB_00211308;
          }
          puVar17 = (undefined8 *)(param_6 + uVar18 * 4 + 6);
          if ((*(byte *)((long)puVar17 + 4) & 1) == 0) {
            uVar21 = *puVar17;
            *(undefined1 *)((long)puVar17 + 4) = 1;
            *(undefined8 *)((long)(local_6c0 + uVar18 * 0x10) + 8) = puVar17[1];
            *(undefined8 *)(local_6c0 + uVar18 * 0x10) = uVar21;
          }
          uVar6 = 6;
LAB_002110c8:
          *(undefined4 *)puVar17 = uVar6;
          puVar17[1] = local_a0;
LAB_002110d0:
          lVar7 = FUN_00211b10(&local_a0,pbVar1);
          local_a0 = local_a0 + lVar7;
          break;
        case 0x11:
          uVar18 = FUN_00211b10(&local_a0,pbVar1);
          puVar4 = PTR___sF_0021dac0;
          if (0x5f < uVar18) {
            __ptr = "libunwind: malformed DW_CFA_offset_extended_sf DWARF unwind, reg too big\n";
            __size = 0x49;
            __s = (FILE *)(PTR___sF_0021dac0 + 0x130);
            goto LAB_00211330;
          }
          uVar10 = 0;
          uVar14 = 0xfffffffffffffff9;
          pbVar11 = local_a0;
          pbVar9 = local_a0;
          do {
            if (pbVar9 == pbVar1) {
              fprintf((FILE *)(PTR___sF_0021dac0 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                      "truncated sleb128 expression");
              fflush((FILE *)(puVar4 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            bVar2 = *pbVar9;
            uVar14 = uVar14 + 7;
            pbVar11 = pbVar11 + 1;
            uVar10 = ((ulong)bVar2 & 0x7f) << (uVar14 & 0x3f) | uVar10;
            pbVar9 = pbVar9 + 1;
          } while ((char)bVar2 < '\0');
          puVar17 = (undefined8 *)(param_6 + uVar18 * 4 + 6);
          local_a0 = pbVar11;
          uVar15 = -1L << ((ulong)((int)uVar14 + 7) & 0x3f);
          iVar13 = *(int *)((long)param_3 + 0x2c);
          if (0x38 < uVar14 || bVar2 < 0x40) {
            uVar15 = 0;
          }
          if ((*(byte *)((long)puVar17 + 4) & 1) == 0) {
            uVar21 = *puVar17;
            *(undefined1 *)((long)puVar17 + 4) = 1;
            *(undefined8 *)((long)(local_6c0 + uVar18 * 0x10) + 8) = puVar17[1];
            *(undefined8 *)(local_6c0 + uVar18 * 0x10) = uVar21;
          }
          uVar10 = uVar10 | uVar15;
          uVar6 = 2;
LAB_00211078:
          *(undefined4 *)puVar17 = uVar6;
          puVar17[1] = uVar10 * (long)iVar13;
          break;
        case 0x12:
          uVar14 = FUN_00211b10(&local_a0,pbVar1);
          puVar4 = PTR___sF_0021dac0;
          uVar10 = 0;
          uVar18 = 0xfffffffffffffff9;
          pbVar11 = local_a0;
          pbVar9 = local_a0;
          do {
            uVar15 = uVar18;
            if (pbVar9 == pbVar1) {
              fprintf((FILE *)(PTR___sF_0021dac0 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                      "truncated sleb128 expression");
              fflush((FILE *)(puVar4 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            bVar2 = *pbVar9;
            uVar18 = uVar15 + 7;
            pbVar11 = pbVar11 + 1;
            uVar10 = ((ulong)bVar2 & 0x7f) << (uVar18 & 0x3f) | uVar10;
            pbVar9 = pbVar9 + 1;
          } while ((char)bVar2 < '\0');
          local_a0 = pbVar11;
          if (0x5f < uVar14) {
            __ptr = "libunwind: malformed DW_CFA_def_cfa_sf DWARF unwind, reg too big\n";
            goto LAB_00211308;
          }
          uVar8 = (uint)(-1L << (uVar15 + 0xe & 0x3f));
          if (0x38 < uVar18 || bVar2 < 0x40) {
            uVar8 = 0;
          }
          iVar13 = *(int *)((long)param_3 + 0x2c);
          *param_6 = (int)uVar14;
          param_6[1] = iVar13 * ((uint)uVar10 | uVar8);
          break;
        case 0x13:
          uVar14 = 0;
          uVar18 = 0xfffffffffffffff9;
          pbVar11 = pbVar9;
          do {
            if (pbVar11 == pbVar1) {
              fprintf((FILE *)(PTR___sF_0021dac0 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                      "truncated sleb128 expression");
              fflush((FILE *)(puVar4 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            bVar2 = *pbVar11;
            uVar18 = uVar18 + 7;
            pbVar9 = pbVar9 + 1;
            uVar14 = ((ulong)bVar2 & 0x7f) << (uVar18 & 0x3f) | uVar14;
            pbVar11 = pbVar11 + 1;
          } while ((char)bVar2 < '\0');
          local_a0 = pbVar9;
          uVar8 = (uint)(-1L << ((ulong)((int)uVar18 + 7) & 0x3f));
          if (0x38 < uVar18 || bVar2 < 0x40) {
            uVar8 = 0;
          }
          param_6[1] = *(int *)((long)param_3 + 0x2c) * ((uint)uVar14 | uVar8);
          break;
        case 0x14:
          uVar18 = FUN_00211b10(&local_a0,pbVar1);
          if (0x5f < uVar18) {
            fprintf((FILE *)(PTR___sF_0021dac0 + 0x130),
                    "libunwind: malformed DW_CFA_val_offset DWARF unwind, reg (%lu) out of range\n\n"
                    ,uVar18);
            goto LAB_00211338;
          }
          lVar7 = FUN_00211b10(&local_a0,pbVar1);
          puVar17 = (undefined8 *)(param_6 + uVar18 * 4 + 6);
          iVar13 = *(int *)((long)param_3 + 0x2c);
          if ((*(byte *)((long)puVar17 + 4) & 1) == 0) {
            uVar21 = *puVar17;
            *(undefined1 *)((long)puVar17 + 4) = 1;
            *(undefined8 *)((long)(local_6c0 + uVar18 * 0x10) + 8) = puVar17[1];
            *(undefined8 *)(local_6c0 + uVar18 * 0x10) = uVar21;
          }
          lVar7 = lVar7 * iVar13;
          uVar6 = 4;
LAB_00211190:
          *(undefined4 *)puVar17 = uVar6;
          puVar17[1] = lVar7;
          break;
        case 0x15:
          uVar18 = FUN_00211b10(&local_a0,pbVar1);
          puVar4 = PTR___sF_0021dac0;
          if (uVar18 < 0x60) {
            uVar10 = 0;
            uVar14 = 0xfffffffffffffff9;
            pbVar11 = local_a0;
            pbVar9 = local_a0;
            do {
              if (pbVar9 == pbVar1) {
                fprintf((FILE *)(PTR___sF_0021dac0 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                        "truncated sleb128 expression");
                fflush((FILE *)(puVar4 + 0x130));
                    /* WARNING: Subroutine does not return */
                abort();
              }
              bVar2 = *pbVar9;
              uVar14 = uVar14 + 7;
              pbVar11 = pbVar11 + 1;
              uVar10 = ((ulong)bVar2 & 0x7f) << (uVar14 & 0x3f) | uVar10;
              pbVar9 = pbVar9 + 1;
            } while ((char)bVar2 < '\0');
            puVar17 = (undefined8 *)(param_6 + uVar18 * 4 + 6);
            local_a0 = pbVar11;
            uVar15 = -1L << ((ulong)((int)uVar14 + 7) & 0x3f);
            iVar13 = *(int *)((long)param_3 + 0x2c);
            if (0x38 < uVar14 || bVar2 < 0x40) {
              uVar15 = 0;
            }
            if ((*(byte *)((long)puVar17 + 4) & 1) == 0) {
              uVar21 = *puVar17;
              *(undefined1 *)((long)puVar17 + 4) = 1;
              *(undefined8 *)((long)(local_6c0 + uVar18 * 0x10) + 8) = puVar17[1];
              *(undefined8 *)(local_6c0 + uVar18 * 0x10) = uVar21;
            }
            uVar10 = uVar10 | uVar15;
            uVar6 = 4;
            goto LAB_00211078;
          }
          __ptr = "libunwind: malformed DW_CFA_val_offset_sf DWARF unwind, reg too big\n";
          __size = 0x44;
          __s = (FILE *)(PTR___sF_0021dac0 + 0x130);
          goto LAB_00211330;
        case 0x16:
          uVar18 = FUN_00211b10(&local_a0,pbVar1);
          if (uVar18 < 0x60) {
            puVar17 = (undefined8 *)(param_6 + uVar18 * 4 + 6);
            if ((*(byte *)((long)puVar17 + 4) & 1) == 0) {
              uVar21 = *puVar17;
              *(undefined1 *)((long)puVar17 + 4) = 1;
              *(undefined8 *)((long)(local_6c0 + uVar18 * 0x10) + 8) = puVar17[1];
              *(undefined8 *)(local_6c0 + uVar18 * 0x10) = uVar21;
            }
            uVar6 = 7;
            goto LAB_002110c8;
          }
          __ptr = "libunwind: malformed DW_CFA_val_expression DWARF unwind, reg too big\n";
          __size = 0x45;
          __s = (FILE *)(PTR___sF_0021dac0 + 0x130);
          goto LAB_00211330;
        default:
          bVar3 = bVar2 >> 6;
          uVar18 = (ulong)bVar2 & 0x3f;
          if (bVar3 < 2) {
            if (bVar3 != 1) {
              return 0;
            }
            uVar16 = uVar16 + (uint)((int)param_3[5] * (int)uVar18);
          }
          else {
            if (bVar3 != 3) {
              lVar7 = FUN_00211b10(&local_a0,pbVar1);
              puVar17 = (undefined8 *)(param_6 + uVar18 * 4 + 6);
              lVar12 = (long)*(int *)((long)param_3 + 0x2c);
              if ((*(byte *)((long)puVar17 + 4) & 1) == 0) {
                uVar21 = *puVar17;
                *(undefined1 *)((long)puVar17 + 4) = 1;
                *(undefined8 *)((long)(local_6c0 + uVar18 * 0x10) + 8) = puVar17[1];
                *(undefined8 *)(local_6c0 + uVar18 * 0x10) = uVar21;
              }
              goto LAB_00211188;
            }
            puVar17 = (undefined8 *)(param_6 + uVar18 * 4 + 6);
            if (*(char *)((long)puVar17 + 4) == '\x01') {
              uVar22 = *(undefined8 *)((long)(local_6c0 + uVar18 * 0x10) + 8);
              uVar21 = *(undefined8 *)(local_6c0 + uVar18 * 0x10);
              goto LAB_00210f98;
            }
          }
          break;
        case 0x2d:
          if (local_6cc == 4) {
            if ((*(byte *)(param_6 + 0x8f) & 1) == 0) {
              uVar22 = puStack_6e0[1];
              uVar21 = *puStack_6e0;
              *(undefined1 *)(param_6 + 0x8f) = 1;
              local_6e8[1] = uVar22;
              *local_6e8 = uVar21;
            }
            *(ulong *)(param_6 + 0x90) = *(ulong *)(param_6 + 0x90) ^ 1;
          }
          break;
        case 0x2e:
          uVar6 = FUN_00211b10(&local_a0,pbVar1);
          param_6[4] = uVar6;
          break;
        case 0x2f:
          uVar18 = FUN_00211b10(&local_a0,pbVar1);
          if (uVar18 < 0x60) {
            lVar7 = FUN_00211b10(&local_a0,pbVar1);
            puVar17 = (undefined8 *)(param_6 + uVar18 * 4 + 6);
            iVar13 = *(int *)((long)param_3 + 0x2c);
            if ((*(byte *)((long)puVar17 + 4) & 1) == 0) {
              uVar21 = *puVar17;
              *(undefined1 *)((long)puVar17 + 4) = 1;
              *(undefined8 *)((long)(local_6c0 + uVar18 * 0x10) + 8) = puVar17[1];
              *(undefined8 *)(local_6c0 + uVar18 * 0x10) = uVar21;
            }
            lVar7 = -(lVar7 * iVar13);
            goto LAB_0021118c;
          }
          __ptr = 
          "libunwind: malformed DW_CFA_GNU_negative_offset_extended DWARF unwind, reg too big\n";
          __size = 0x53;
          __s = (FILE *)(PTR___sF_0021dac0 + 0x130);
LAB_00211330:
          fwrite(__ptr,__size,1,__s);
LAB_00211338:
          fflush((FILE *)(PTR___sF_0021dac0 + 0x130));
          return 0;
        }
      } while ((local_a0 < pbVar1) && (pbVar11 = local_a0, uVar16 < uVar20));
    }
    lVar19 = lVar19 + 0x18;
    if (lVar19 == 0x30) {
      return 1;
    }
  } while( true );
}


// ===== 00211440  FUN_00211440 =====

long FUN_00211440(undefined8 param_1,uint *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR___sF_0021dac0;
  uVar1 = *param_2;
  if ((int)uVar1 < 0x1e) {
    if ((int)uVar1 < 0) {
      if (uVar1 == 0xfffffffe) {
LAB_00211480:
        return *(long *)(param_3 + 0xf8) + (long)(int)param_2[1];
      }
      if (uVar1 == 0xffffffff) goto LAB_002114c4;
    }
    else {
      if (uVar1 == 0) {
        lVar3 = FUN_00211cd8(*(undefined8 *)(param_2 + 2),param_1,param_3,0);
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
    if (uVar1 == 0x1f) goto LAB_00211480;
  }
  else {
    if (uVar1 == 0x22) {
      return *(long *)(param_3 + 0x108) + (long)(int)param_2[1];
    }
    if (uVar1 == 0x20) {
LAB_002114c4:
      return *(long *)(param_3 + 0x100) + (long)(int)param_2[1];
    }
  }
  if (0x1c < uVar1) {
    fprintf((FILE *)(PTR___sF_0021dac0 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(long *)(param_3 + (ulong)uVar1 * 8) + (long)(int)param_2[1];
}


// ===== 00211574  FUN_00211574 =====

undefined8 FUN_00211574(undefined8 param_1,long param_2,long param_3,int *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  puVar2 = PTR___sF_0021dac0;
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
LAB_002116b0:
          return *(undefined8 *)(param_2 + 0xf8);
        }
        if (uVar5 == 0xffffffff) goto LAB_00211698;
        if (uVar5 == 0x1d) {
          return *(undefined8 *)(param_2 + 0xe8);
        }
      }
      else if ((int)uVar5 < 0x20) {
        if (uVar5 == 0x1e) {
          return *(undefined8 *)(param_2 + 0xf0);
        }
        if (uVar5 == 0x1f) goto LAB_002116b0;
      }
      else {
        if (uVar5 == 0x22) {
          return *(undefined8 *)(param_2 + 0x108);
        }
        if (uVar5 == 0x20) {
LAB_00211698:
          return *(undefined8 *)(param_2 + 0x100);
        }
      }
      if (0x1c < uVar5) {
        fprintf((FILE *)(PTR___sF_0021dac0 + 0x130),"libunwind: %s - %s\n","getRegister",
                "unsupported arm64 register");
        fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      return *(undefined8 *)(param_2 + (*(ulong *)(param_4 + 2) & 0x1f) * 8);
    }
    if (iVar1 == 6) {
      puVar4 = (undefined8 *)FUN_00211cd8(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return *puVar4;
    }
    if (iVar1 == 7) {
      uVar3 = FUN_00211cd8(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return uVar3;
    }
  }
  fprintf((FILE *)(PTR___sF_0021dac0 + 0x130),"libunwind: %s - %s\n","getSavedRegister",
          "unsupported restore location for register");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00211784  FUN_00211784 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_00211784(undefined8 param_1,long *param_2,ulong *param_3,uint param_4,long param_5)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  
  puVar3 = PTR___sF_0021dac0;
  uVar1 = param_4 & 0xf;
  puVar10 = (ulong *)*param_2;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      if ((param_4 & 0xf) == 0) goto LAB_002118d0;
      if (uVar1 != 1) {
LAB_00211adc:
        fprintf((FILE *)(PTR___sF_0021dac0 + 0x130),"libunwind: %s - %s\n","getEncodedP",
                "unknown pointer encoding");
        fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar4 = (undefined8 *)FUN_00211b10(param_2,param_3);
      puVar3 = PTR___sF_0021dac0;
    }
    else if (uVar1 == 2) {
      puVar4 = (undefined8 *)(ulong)(ushort)*puVar10;
      *param_2 = (long)puVar10 + 2;
      puVar3 = PTR___sF_0021dac0;
    }
    else {
      if (uVar1 != 3) goto LAB_00211adc;
      puVar4 = (undefined8 *)(ulong)(uint)*puVar10;
      *param_2 = (long)((long)puVar10 + 4);
      puVar3 = PTR___sF_0021dac0;
    }
  }
  else if (uVar1 < 10) {
    if (uVar1 == 4) {
LAB_002118d0:
      puVar4 = (undefined8 *)*puVar10;
      *param_2 = (long)(puVar10 + 1);
      puVar3 = PTR___sF_0021dac0;
    }
    else {
      if (uVar1 != 9) goto LAB_00211adc;
      uVar5 = 0;
      uVar7 = 0xfffffffffffffff9;
      puVar6 = puVar10;
      puVar8 = puVar10;
      do {
        if (puVar8 == param_3) {
          fprintf((FILE *)(PTR___sF_0021dac0 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                  "truncated sleb128 expression");
          fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
        bVar2 = (byte)*puVar8;
        uVar7 = uVar7 + 7;
        puVar6 = (ulong *)((long)puVar6 + 1);
        uVar5 = ((ulong)bVar2 & 0x7f) << (uVar7 & 0x3f) | uVar5;
        puVar8 = (ulong *)((long)puVar8 + 1);
      } while ((char)bVar2 < '\0');
      uVar9 = -1L << ((ulong)((int)uVar7 + 7) & 0x3f);
      *param_2 = (long)puVar6;
      if (0x38 < uVar7 || bVar2 < 0x40) {
        uVar9 = 0;
      }
      puVar4 = (undefined8 *)(uVar5 | uVar9);
      puVar3 = PTR___sF_0021dac0;
    }
  }
  else if (uVar1 == 10) {
    puVar4 = (undefined8 *)(long)(short)*puVar10;
    *param_2 = (long)puVar10 + 2;
    puVar3 = PTR___sF_0021dac0;
  }
  else {
    if (uVar1 != 0xb) {
      if (uVar1 != 0xc) goto LAB_00211adc;
      goto LAB_002118d0;
    }
    puVar4 = (undefined8 *)(long)(int)(uint)*puVar10;
    *param_2 = (long)((long)puVar10 + 4);
    puVar3 = PTR___sF_0021dac0;
  }
  uVar1 = (param_4 & 0xff) >> 4 & 7;
  PTR___sF_0021dac0 = puVar3;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
      if (uVar1 != 1) goto LAB_00211aa8;
      puVar4 = (undefined8 *)((long)puVar4 + (long)puVar10);
    }
LAB_0021195c:
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
      goto LAB_0021195c;
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
LAB_00211aa8:
  fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP","unknown pointer encoding");
  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00211b10  FUN_00211b10 =====

ulong FUN_00211b10(long *param_1,byte *param_2)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  puVar2 = PTR___sF_0021dac0;
  pbVar4 = (byte *)*param_1;
  if (pbVar4 != param_2) {
    pbVar5 = pbVar4 + 1;
    uVar3 = (ulong)*pbVar4 & 0x7f;
    if (-1 < (char)*pbVar4) {
LAB_00211b40:
      *param_1 = (long)pbVar5;
      return uVar3;
    }
    if (pbVar5 != param_2) {
      uVar3 = uVar3 | (ulong)((int)(char)pbVar4[1] & 0x7f) << 7;
      pbVar5 = pbVar4 + 2;
      if (-1 < (char)pbVar4[1]) goto LAB_00211b40;
      if (pbVar5 != param_2) {
        uVar3 = uVar3 | (ulong)((int)(char)pbVar4[2] & 0x7f) << 0xe;
        pbVar5 = pbVar4 + 3;
        if (-1 < (char)pbVar4[2]) goto LAB_00211b40;
        if (pbVar5 != param_2) {
          uVar3 = uVar3 | (ulong)((int)(char)pbVar4[3] & 0x7f) << 0x15;
          pbVar5 = pbVar4 + 4;
          if (-1 < (char)pbVar4[3]) goto LAB_00211b40;
          if (pbVar5 != param_2) {
            uVar3 = uVar3 | (ulong)((int)(char)pbVar4[4] & 0x7f) << 0x1c;
            pbVar5 = pbVar4 + 5;
            if (-1 < (char)pbVar4[4]) goto LAB_00211b40;
            if (pbVar5 != param_2) {
              uVar3 = uVar3 | (ulong)((int)(char)pbVar4[5] & 0x7f) << 0x23;
              pbVar5 = pbVar4 + 6;
              if (-1 < (char)pbVar4[5]) goto LAB_00211b40;
              if (pbVar5 != param_2) {
                uVar3 = uVar3 | (ulong)((int)(char)pbVar4[6] & 0x7f) << 0x2a;
                pbVar5 = pbVar4 + 7;
                if (-1 < (char)pbVar4[6]) goto LAB_00211b40;
                if (pbVar5 != param_2) {
                  uVar3 = uVar3 | (ulong)((int)(char)pbVar4[7] & 0x7f) << 0x31;
                  pbVar5 = pbVar4 + 8;
                  if (-1 < (char)pbVar4[7]) goto LAB_00211b40;
                  if (pbVar5 != param_2) {
                    uVar3 = uVar3 | (ulong)((int)(char)pbVar4[8] & 0x7f) << 0x38;
                    pbVar5 = pbVar4 + 9;
                    if (-1 < (char)pbVar4[8]) goto LAB_00211b40;
                    if (pbVar5 != param_2) {
                      bVar1 = *pbVar5;
                      if ((bVar1 & 0x7e) == 0) {
                        if (-1 < (char)bVar1) {
                          *param_1 = (long)(pbVar4 + 10);
                          return uVar3 | (ulong)bVar1 << 0x3f;
                        }
                        if (pbVar4 + 10 == param_2) goto LAB_00211c70;
                      }
                      fprintf((FILE *)(PTR___sF_0021dac0 + 0x130),"libunwind: %s - %s\n",
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
LAB_00211c70:
  fprintf((FILE *)(PTR___sF_0021dac0 + 0x130),"libunwind: %s - %s\n","getULEB128",
          "truncated uleb128 expression");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00211cd8  FUN_00211cd8 =====

ulong FUN_00211cd8(byte *param_1,undefined8 param_2,long param_3,ulong param_4)

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
  ulong uVar13;
  byte *pbVar14;
  ulong *puVar15;
  uint uVar16;
  ulong uVar17;
  byte *pbVar18;
  ulong uVar19;
  ulong *puVar20;
  undefined1 auVar21 [16];
  ulong local_380 [99];
  byte *local_68;
  
  local_68 = param_1;
  lVar11 = FUN_00211b10(&local_68,param_1 + 0x14);
  local_380[0] = param_4;
  pbVar6 = local_68 + lVar11;
  if (local_68 < pbVar6) {
    puVar1 = (ulong *)(param_3 + 0xf0);
    puVar2 = (ulong *)(param_3 + 0xe8);
    puVar3 = (ulong *)(param_3 + 0x108);
    puVar4 = (ulong *)(param_3 + 0xf8);
    puVar20 = local_380;
    puVar5 = (ulong *)(param_3 + 0x100);
    pbVar18 = local_68;
    do {
      puVar9 = PTR___sF_0021dac0;
      pbVar14 = pbVar18 + 1;
      local_68 = pbVar14;
      bVar8 = *pbVar18;
      uVar10 = (uint)bVar8;
      if (0x91 < uVar10 - 3) {
code_r0x0021255c:
        fprintf((FILE *)(PTR___sF_0021dac0 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
                "DWARF opcode not implemented");
        fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar16 = (uint)bVar8;
      puVar15 = puVar4;
      switch(uVar10) {
      case 3:
      case 0xe:
      case 0xf:
        uVar17 = *(ulong *)(pbVar18 + 1);
        local_68 = pbVar18 + 9;
        goto LAB_002121c0;
      case 4:
      case 5:
      case 7:
        goto code_r0x0021255c;
      case 6:
        puVar15 = (ulong *)*puVar20;
LAB_00212150:
        *puVar20 = *puVar15;
        goto LAB_00211d5c;
      case 8:
        uVar17 = (ulong)pbVar18[1];
        goto LAB_00212124;
      case 9:
        uVar17 = (ulong)(char)pbVar18[1];
LAB_00212124:
        local_68 = pbVar18 + 2;
        goto LAB_002121c0;
      case 10:
        uVar17 = (ulong)*(ushort *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_002121c0;
      case 0xb:
        uVar17 = (ulong)*(short *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_002121c0;
      case 0xc:
        uVar17 = (ulong)*(uint *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_002121c0;
      case 0xd:
        uVar17 = (ulong)*(int *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_002121c0;
      case 0x10:
        uVar17 = FUN_00211b10(&local_68,pbVar6);
        puVar20 = puVar20 + 1;
        *puVar20 = uVar17;
        goto LAB_00211d5c;
      case 0x11:
        uVar12 = 0;
        uVar17 = 0xfffffffffffffff9;
        pbVar18 = pbVar14;
        do {
          if (pbVar18 == pbVar6) {
            fprintf((FILE *)(PTR___sF_0021dac0 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                    "truncated sleb128 expression");
            fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar8 = *pbVar18;
          uVar17 = uVar17 + 7;
          pbVar14 = pbVar14 + 1;
          uVar12 = ((ulong)bVar8 & 0x7f) << (uVar17 & 0x3f) | uVar12;
          pbVar18 = pbVar18 + 1;
        } while ((char)bVar8 < '\0');
        uVar13 = -1L << ((ulong)((int)uVar17 + 7) & 0x3f);
        local_68 = pbVar14;
        if (0x38 < uVar17 || bVar8 < 0x40) {
          uVar13 = 0;
        }
        puVar20 = puVar20 + 1;
        *puVar20 = uVar12 | uVar13;
        goto LAB_00211d5c;
      case 0x12:
        uVar17 = *puVar20;
        goto LAB_00211d58;
      case 0x13:
        puVar20 = puVar20 + -1;
        goto LAB_00211d5c;
      case 0x14:
        uVar17 = puVar20[-1];
        goto LAB_00211d58;
      case 0x15:
        local_68 = pbVar18 + 2;
        uVar17 = puVar20[-(ulong)pbVar18[1]];
LAB_002121c0:
LAB_00211d58:
        puVar20[1] = uVar17;
        puVar20 = puVar20 + 1;
        goto LAB_00211d5c;
      case 0x16:
        auVar21 = NEON_ext(*(undefined1 (*) [16])(puVar20 + -1),*(undefined1 (*) [16])(puVar20 + -1)
                           ,8,1);
        *puVar20 = auVar21._8_8_;
        puVar20[-1] = auVar21._0_8_;
        goto LAB_00211d5c;
      case 0x17:
        uVar17 = *puVar20;
        *puVar20 = SUB168(*(undefined1 (*) [16])(puVar20 + -2),8);
        puVar20[-1] = SUB168(*(undefined1 (*) [16])(puVar20 + -2),0);
        puVar20[-2] = uVar17;
        goto LAB_00211d5c;
      case 0x18:
        puVar15 = (ulong *)*puVar20;
        puVar20 = puVar20 + -1;
        *puVar20 = *puVar15;
        goto LAB_00211d5c;
      case 0x19:
        uVar17 = *puVar20;
        if ((long)uVar17 < 0) goto LAB_002122f8;
        goto LAB_00211d5c;
      case 0x1a:
        uVar17 = puVar20[-1] & *puVar20;
        break;
      case 0x1b:
        uVar17 = 0;
        if (*puVar20 != 0) {
          uVar17 = (long)puVar20[-1] / (long)*puVar20;
        }
        break;
      case 0x1c:
        uVar17 = puVar20[-1] - *puVar20;
        break;
      case 0x1d:
        uVar17 = *puVar20;
        lVar11 = 0;
        if (uVar17 != 0) {
          lVar11 = (long)puVar20[-1] / (long)uVar17;
        }
        uVar17 = puVar20[-1] - lVar11 * uVar17;
        break;
      case 0x1e:
        uVar17 = puVar20[-1] * *puVar20;
        break;
      case 0x1f:
        uVar17 = *puVar20;
LAB_002122f8:
        *puVar20 = -uVar17;
        goto LAB_00211d5c;
      case 0x20:
        *puVar20 = ~*puVar20;
        goto LAB_00211d5c;
      case 0x21:
        uVar17 = puVar20[-1] | *puVar20;
        break;
      case 0x22:
        uVar17 = puVar20[-1] + *puVar20;
        break;
      case 0x23:
        lVar11 = FUN_00211b10(&local_68,pbVar6);
        *puVar20 = *puVar20 + lVar11;
        goto LAB_00211d5c;
      case 0x24:
        uVar17 = puVar20[-1] << (*puVar20 & 0x3f);
        break;
      case 0x25:
        uVar17 = puVar20[-1] >> (*puVar20 & 0x3f);
        break;
      case 0x26:
        uVar17 = (long)puVar20[-1] >> (*puVar20 & 0x3f);
        break;
      case 0x27:
        uVar17 = puVar20[-1] ^ *puVar20;
        break;
      case 0x28:
        puVar15 = puVar20 + -1;
        uVar17 = *puVar20;
        local_68 = pbVar18 + 3;
        puVar20 = puVar15;
        if (uVar17 != 0) {
          local_68 = pbVar18 + 3 + *(short *)(pbVar18 + 1);
        }
        goto LAB_00211d5c;
      case 0x29:
        uVar17 = (ulong)(puVar20[-1] == *puVar20);
        break;
      case 0x2a:
        uVar17 = (ulong)(*puVar20 <= puVar20[-1]);
        break;
      case 0x2b:
        uVar17 = (ulong)(*puVar20 < puVar20[-1]);
        break;
      case 0x2c:
        uVar17 = (ulong)(puVar20[-1] <= *puVar20);
        break;
      case 0x2d:
        uVar17 = (ulong)(puVar20[-1] < *puVar20);
        break;
      case 0x2e:
        uVar17 = (ulong)(puVar20[-1] != *puVar20);
        break;
      case 0x2f:
        local_68 = pbVar18 + (long)*(short *)(pbVar18 + 1) + 3;
        goto LAB_00211d5c;
      default:
        uVar17 = (ulong)(uVar16 - 0x30);
        goto LAB_00211d58;
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
        if (((uVar16 != 0x6f) && (puVar15 = puVar1, bVar8 != 0x6e)) &&
           (puVar15 = puVar2, bVar8 != 0x6d)) {
          puVar15 = (ulong *)(param_3 + (ulong)(uVar16 - 0x50) * 8);
        }
        goto LAB_00211d54;
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
        uVar12 = 0;
        uVar17 = 0xfffffffffffffff9;
        pbVar18 = pbVar14;
        do {
          if (pbVar18 == pbVar6) {
            fprintf((FILE *)(PTR___sF_0021dac0 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                    "truncated sleb128 expression");
            fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar7 = *pbVar18;
          uVar17 = uVar17 + 7;
          pbVar14 = pbVar14 + 1;
          uVar12 = ((ulong)bVar7 & 0x7f) << (uVar17 & 0x3f) | uVar12;
          pbVar18 = pbVar18 + 1;
        } while ((char)bVar7 < '\0');
        uVar13 = -1L << ((ulong)((int)uVar17 + 7) & 0x3f);
        local_68 = pbVar14;
        if (0x38 < uVar17 || bVar7 < 0x40) {
          uVar13 = 0;
        }
        if (bVar8 < 0x8e) {
          if (((bVar8 != 0x6e) && (puVar15 = puVar5, bVar8 != 0x6f)) &&
             (puVar15 = puVar2, bVar8 != 0x8d)) goto LAB_00211e94;
        }
        else if (bVar8 < 0x90) {
          puVar15 = puVar1;
          if ((bVar8 != 0x8e) && (puVar15 = puVar4, uVar16 != 0x8f)) {
LAB_00211e94:
            if (0x1c < uVar10 - 0x70) {
              fprintf((FILE *)(PTR___sF_0021dac0 + 0x130),"libunwind: %s - %s\n","getRegister",
                      "unsupported arm64 register");
              fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            puVar15 = (ulong *)(param_3 + (ulong)(uVar10 - 0x70) * 8);
          }
        }
        else {
          puVar15 = puVar5;
          if ((bVar8 != 0x90) && (puVar15 = puVar3, bVar8 != 0x92)) goto LAB_00211e94;
        }
        uVar17 = *puVar15 + (uVar12 | uVar13);
        goto LAB_00211d58;
      case 0x90:
        uVar17 = FUN_00211b10(&local_68,pbVar6);
        puVar9 = PTR___sF_0021dac0;
        uVar10 = (uint)uVar17;
        if ((int)uVar10 < 0x1e) {
          if (((uVar10 != 0xfffffffe) && (puVar15 = puVar5, uVar10 != 0xffffffff)) &&
             (puVar15 = puVar2, uVar10 != 0x1d)) goto LAB_002123f8;
        }
        else if ((int)uVar10 < 0x20) {
          puVar15 = puVar1;
          if ((uVar10 != 0x1e) && (puVar15 = puVar4, uVar10 != 0x1f)) {
LAB_002123f8:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_0021dac0 + 0x130),"libunwind: %s - %s\n","getRegister",
                      "unsupported arm64 register");
              fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            puVar15 = (ulong *)(param_3 + (uVar17 & 0x1f) * 8);
          }
        }
        else {
          puVar15 = puVar5;
          if ((uVar10 != 0x20) && (puVar15 = puVar3, uVar10 != 0x22)) goto LAB_002123f8;
        }
LAB_00211d54:
        uVar17 = *puVar15;
        goto LAB_00211d58;
      case 0x91:
        fprintf((FILE *)(PTR___sF_0021dac0 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
                "DW_OP_fbreg not implemented");
        fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x92:
        uVar12 = FUN_00211b10(&local_68,pbVar6);
        puVar9 = PTR___sF_0021dac0;
        uVar13 = 0;
        uVar17 = 0xfffffffffffffff9;
        pbVar18 = local_68;
        pbVar14 = local_68;
        do {
          if (pbVar14 == pbVar6) {
            fprintf((FILE *)(PTR___sF_0021dac0 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                    "truncated sleb128 expression");
            fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar8 = *pbVar14;
          uVar17 = uVar17 + 7;
          pbVar18 = pbVar18 + 1;
          uVar13 = ((ulong)bVar8 & 0x7f) << (uVar17 & 0x3f) | uVar13;
          pbVar14 = pbVar14 + 1;
        } while ((char)bVar8 < '\0');
        uVar19 = -1L << ((ulong)((int)uVar17 + 7) & 0x3f);
        local_68 = pbVar18;
        if (0x38 < uVar17 || bVar8 < 0x40) {
          uVar19 = 0;
        }
        uVar10 = (uint)uVar12;
        if ((int)uVar10 < 0x1e) {
          if (((uVar10 != 0xfffffffe) && (puVar15 = puVar5, uVar10 != 0xffffffff)) &&
             (puVar15 = puVar2, uVar10 != 0x1d)) goto LAB_00212424;
        }
        else if ((int)uVar10 < 0x20) {
          puVar15 = puVar1;
          if ((uVar10 != 0x1e) && (puVar15 = puVar4, uVar10 != 0x1f)) {
LAB_00212424:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_0021dac0 + 0x130),"libunwind: %s - %s\n","getRegister",
                      "unsupported arm64 register");
              fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            puVar15 = (ulong *)(param_3 + (uVar12 & 0x1f) * 8);
          }
        }
        else {
          puVar15 = puVar5;
          if ((uVar10 != 0x20) && (puVar15 = puVar3, uVar10 != 0x22)) goto LAB_00212424;
        }
        uVar17 = *puVar15 + (uVar13 | uVar19);
        goto LAB_00211d58;
      case 0x93:
        fprintf((FILE *)(PTR___sF_0021dac0 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
                "DW_OP_piece not implemented");
        fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x94:
        local_68 = pbVar18 + 2;
        puVar15 = (ulong *)*puVar20;
        bVar8 = pbVar18[1];
        if (bVar8 < 4) {
          if (bVar8 == 1) {
            *puVar20 = (ulong)(byte)*puVar15;
          }
          else {
            if (bVar8 != 2) {
LAB_00212600:
              fprintf((FILE *)(PTR___sF_0021dac0 + 0x130),"libunwind: %s - %s\n",
                      "evaluateExpression","DW_OP_deref_size with bad size");
              fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *puVar20 = (ulong)(ushort)*puVar15;
          }
        }
        else {
          if (bVar8 != 4) {
            if (bVar8 != 8) goto LAB_00212600;
            goto LAB_00212150;
          }
          *puVar20 = (ulong)(uint)*puVar15;
        }
        goto LAB_00211d5c;
      }
      puVar20[-1] = uVar17;
      puVar20 = puVar20 + -1;
LAB_00211d5c:
      pbVar18 = local_68;
    } while (local_68 < pbVar6);
    param_4 = *puVar20;
  }
  return param_4;
}


// ===== 0021269c  FUN_0021269c =====

undefined8 FUN_0021269c(long param_1,ulong param_2,long *param_3,uint param_4)

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
      (uVar3 = FUN_00212bbc(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],
                            param_3[2] + (ulong)param_4,&local_6b0,auStack_6e8), (uVar3 & 1) == 0))
     && ((param_3[4] == 0 ||
         (uVar3 = FUN_00212d84(*(undefined8 *)(param_1 + 8),param_2,param_3[4],(int)param_3[5],
                               &local_6b0,auStack_6e8), (uVar3 & 1) == 0)))) {
    lVar5 = *param_3;
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_002238b4);
    if (PTR_DAT_002233d8 < PTR_DAT_002233e0) {
      plVar4 = (long *)PTR_DAT_002233d8;
      if (lVar5 == -1) {
        do {
          if (((ulong)plVar4[1] <= param_2) && (param_2 < (ulong)plVar4[2])) goto LAB_002127a4;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_002233e0);
      }
      else {
        do {
          if (((lVar5 == *plVar4) && ((ulong)plVar4[1] <= param_2)) && (param_2 < (ulong)plVar4[2]))
          goto LAB_002127a4;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_002233e0);
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_002238b4);
    goto LAB_002127ec;
  }
LAB_0021280c:
  bVar2 = 1;
LAB_00212810:
  lVar5 = *param_3;
  memset(auStack_680,0,0x618);
  uVar3 = FUN_002109ac(*(undefined8 *)(param_1 + 8),&local_6b0,auStack_6e8,param_2,4,auStack_680);
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
      pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_002238b4);
      __src = PTR_DAT_002233d8;
      if (DAT_002233e8 <= PTR_DAT_002233e0) {
        __n = (long)DAT_002233e8 - (long)PTR_DAT_002233d8;
        __dest = (undefined *)malloc(__n * 4);
        memcpy(__dest,__src,__n);
        if ((undefined8 *)__src != &DAT_002238f0) {
          free(__src);
        }
        DAT_002233e8 = __dest + ((long)__n >> 3) * 0x20;
        PTR_DAT_002233e0 = __dest + __n;
        PTR_DAT_002233d8 = __dest;
      }
      *(long *)PTR_DAT_002233e0 = lVar5;
      *(long *)((long)PTR_DAT_002233e0 + 8) = local_698;
      *(long *)((long)PTR_DAT_002233e0 + 0x18) = local_6b0;
      *(long *)((long)PTR_DAT_002233e0 + 0x10) = local_690;
      PTR_DAT_002233e0 = (undefined *)((long)PTR_DAT_002233e0 + 0x20);
      pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_002238b4);
      return 1;
    }
    return 1;
  }
  return 1;
LAB_002127a4:
  lVar5 = plVar4[3];
  pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_002238b4);
  if ((lVar5 != 0) &&
     (uVar3 = FUN_00212bbc(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],lVar5,
                           &local_6b0,auStack_6e8), (uVar3 & 1) != 0)) {
    bVar2 = 0;
    goto LAB_00212810;
  }
LAB_002127ec:
  uVar3 = FUN_00212bbc(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],0,&local_6b0,
                       auStack_6e8);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  goto LAB_0021280c;
}


// ===== 00212970  FUN_00212970 =====

undefined8 FUN_00212970(ulong *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 local_70 [4];
  
  uVar12 = (ulong)(ushort)param_1[3];
  if (uVar12 != 0) {
    uVar6 = param_3[2];
    uVar13 = *param_1;
    if (uVar13 <= uVar6) {
      piVar9 = (int *)param_1[2];
      uVar5 = uVar12;
      do {
        if (((*piVar9 == 1) && (uVar1 = *(long *)(piVar9 + 4) + uVar13, uVar1 <= uVar6)) &&
           (uVar11 = *(ulong *)(piVar9 + 10), uVar6 < uVar11 + uVar1)) {
          puVar7 = (ulong *)param_3[1];
          uVar6 = uVar12 + 0xffffffff;
          *puVar7 = uVar1;
          puVar7[1] = uVar11;
          do {
            piVar9 = (int *)(param_1[2] + (uVar6 & 0xffffffff) * 0x38);
            if (*piVar9 == 0x6474e550) {
              uVar2 = *param_3;
              lVar3 = param_3[1];
              lVar8 = *(long *)(piVar9 + 10);
              lVar10 = *(long *)(piVar9 + 4) + uVar13;
              *(long *)(lVar3 + 0x20) = lVar10;
              *(long *)(lVar3 + 0x28) = lVar8;
              uVar5 = FUN_00212a9c(uVar2,lVar10,lVar8 + lVar10,local_70);
              if ((uVar5 & 1) != 0) {
                lVar10 = param_3[1];
                *(undefined8 *)(lVar10 + 0x10) = local_70[0];
                *(undefined8 *)(lVar10 + 0x18) = 0xffffffffffffffff;
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
        piVar9 = piVar9 + 0xe;
      } while (uVar5 != 0);
    }
  }
  return 0;
}


// ===== 00212a9c  FUN_00212a9c =====

undefined8 FUN_00212a9c(undefined8 param_1,byte *param_2,byte *param_3,undefined8 *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  byte *local_28;
  
  puVar3 = PTR___sF_0021dac0;
  if ((ulong)((long)param_3 - (long)param_2) < 4) {
    if (param_3 == param_2) {
      return 0;
    }
    fprintf((FILE *)(PTR___sF_0021dac0 + 0x130),
            "libunwind: unsupported .eh_frame_hdr at %lx: need at least 4 bytes of data but only got %zd\n"
            ,param_2);
  }
  else {
    if (*param_2 == 1) {
      local_28 = param_2 + 4;
      bVar1 = param_2[2];
      bVar2 = param_2[1];
      *(byte *)(param_4 + 3) = param_2[3];
      uVar4 = FUN_00211784(param_1,&local_28,param_3,bVar2,param_2);
      *param_4 = uVar4;
      if (bVar1 == 0xff) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_00211784(param_1,&local_28,param_3,bVar1,param_2);
      }
      param_4[1] = uVar4;
      param_4[2] = local_28;
      return 1;
    }
    fprintf((FILE *)(PTR___sF_0021dac0 + 0x130),
            "libunwind: unsupported .eh_frame_hdr version: %u at %lx\n",(ulong)(uint)*param_2,
            param_2);
  }
  fflush((FILE *)(puVar3 + 0x130));
  return 0;
}


// ===== 00212bbc  FUN_00212bbc =====

undefined8
FUN_00212bbc(undefined8 param_1,ulong param_2,uint *param_3,long param_4,uint *param_5,
            undefined8 *param_6,long param_7)

{
  uint *puVar1;
  byte bVar2;
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
        (puVar7 < puVar9)) && (lVar4 = FUN_0020fb14(param_1,puVar7,param_7), lVar4 == 0)) {
      local_68 = local_68 + 1;
      uVar8 = FUN_00211784(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x18),0);
      lVar4 = FUN_00211784(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x18) & 0xf,0);
      if ((uVar8 < param_2) && (param_2 <= lVar4 + uVar8)) {
        bVar2 = *(byte *)(param_7 + 0x31);
        param_6[5] = 0;
        puVar9 = local_68;
        if ((bVar2 & 1) != 0) {
          lVar5 = FUN_00211b10(&local_68,puVar1);
          puVar7 = local_68;
          puVar9 = (uint *)((long)local_68 + lVar5);
          if ((*(byte *)(param_7 + 0x19) != 0xff) &&
             (lVar5 = FUN_00211784(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x19) & 0xf,0),
             lVar5 != 0)) {
            local_68 = puVar7;
            uVar6 = FUN_00211784(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x19),0);
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


// ===== 00212d84  FUN_00212d84 =====

undefined8
FUN_00212d84(undefined8 param_1,ulong param_2,long param_3,ulong param_4,long param_5,
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
  uVar1 = FUN_00212a9c(param_1,param_3,lVar4,auStack_80);
  if (((uVar1 & 1) != 0) && (local_78 != 0)) {
    lVar2 = FUN_00212eec(local_68);
    lVar7 = 0;
    do {
      if (local_78 < 2) {
        lVar8 = lVar7 * lVar2;
        break;
      }
      uVar6 = local_78 >> 1;
      lVar8 = (uVar6 + lVar7) * lVar2;
      local_88 = local_70 + lVar8;
      uVar1 = FUN_00211784(param_1,&local_88,lVar4,local_68,param_3);
      uVar5 = local_78 - uVar6;
      local_78 = uVar6;
      if (uVar1 < param_2) {
        local_78 = uVar5;
        lVar7 = uVar6 + lVar7;
      }
    } while (uVar1 != param_2);
    local_88 = local_70 + lVar8;
    FUN_00211784(param_1,&local_88,lVar4,local_68,param_3);
    uVar3 = FUN_00211784(param_1,&local_88,lVar4,local_68,param_3);
    lVar4 = FUN_0020f97c(param_1,uVar3,param_5,param_6,0);
    if (((lVar4 == 0) && (*(ulong *)(param_5 + 0x18) <= param_2)) &&
       (param_2 < *(ulong *)(param_5 + 0x20))) {
      return 1;
    }
  }
  return 0;
}


// ===== 00212eec  FUN_00212eec =====

undefined8 FUN_00212eec(uint param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_0021dac0;
  param_1 = param_1 & 0xf;
  if (param_1 < 9) {
    if (param_1 < 3) {
      if (param_1 == 2) {
        return 4;
      }
      if (param_1 == 1) {
LAB_00212fb4:
        fprintf((FILE *)(PTR___sF_0021dac0 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
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
    if (param_1 == 9) goto LAB_00212fb4;
  }
  else {
    if (param_1 == 0xc) {
      return 0x10;
    }
    if (param_1 == 0xb) {
      return 8;
    }
  }
  fprintf((FILE *)(PTR___sF_0021dac0 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
          "Unknown DWARF encoding for search table.");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00212fe8  FUN_00212fe8 =====

char * FUN_00212fe8(int param_1)

{
  if (param_1 + 2U < 0x62) {
    return &DAT_00131dd4 + *(int *)(&DAT_00131dd4 + (ulong)(param_1 + 2U) * 4);
  }
  return "unknown register";
}


// ===== 00213018  FUN_00213018 =====

/* WARNING: Removing unreachable block (ram,0x002130b0) */

undefined1  [16] FUN_00213018(undefined1 (*param_1) [16])

{
  return *param_1;
}


// ===== 002130b8  FUN_002130b8 =====

undefined8
FUN_002130b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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


// ===== 00213154  operator.new =====

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
    (*pcVar2)();
  }
  this = (bad_alloc *)__cxa_allocate_exception(8);
  std::bad_alloc::bad_alloc(this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_PTR_0021dec8,PTR__bad_exception_0021deb8);
}


// ===== 002131c0  operator.new[] =====

/* operator new[](unsigned long) */

void * operator_new__(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(param_1);
  return pvVar1;
}


// ===== 002131c8  operator.new =====

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
  __cxa_throw(this,PTR_PTR_0021dec8,PTR__bad_exception_0021deb8);
}


// ===== 00213258  operator.new[] =====

/* operator new[](unsigned long, std::align_val_t) */

void * operator_new__(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new();
  return pvVar1;
}


// ===== 00213260  FUN_00213260 =====

void FUN_00213260(void)

{
  (*(code *)PTR_0021df48)();
  return;
}


// ===== 00213280  <EXTERNAL>::__cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_0021df50)();
  return;
}


// ===== 00213290  <EXTERNAL>::__cxa_atexit =====

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_0021df58)();
  return;
}


// ===== 002132a0  <EXTERNAL>::__android_log_print =====

void __android_log_print(void)

{
  (*(code *)PTR___android_log_print_0021df60)();
  return;
}


// ===== 002132b0  cimg_library::CImg<unsigned_char>::load =====

void __thiscall cimg_library::CImg<unsigned_char>::load(CImg<unsigned_char> *this,char *param_1)

{
  (*(code *)PTR_load_0021df68)();
  return;
}


// ===== 002132c0  cimg_library::CImg<unsigned_char>::rotate =====

void cimg_library::CImg<unsigned_char>::rotate(float param_1,uint param_2,uint param_3)

{
  (*(code *)PTR_rotate_0021df70)(param_2,param_3);
  return;
}


// ===== 002132d0  cimg_library::CImg<unsigned_char>::mirror =====

void __thiscall cimg_library::CImg<unsigned_char>::mirror(CImg<unsigned_char> *this,char param_1)

{
  (*(code *)PTR_mirror_0021df78)(this,param_1);
  return;
}


// ===== 002132e0  cimg_library::CImg<unsigned_char>::resize =====

void cimg_library::CImg<unsigned_char>::resize
               (int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
               float param_7,float param_8,float param_9,float param_10)

{
  (*(code *)PTR_resize_0021df80)(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


// ===== 002132f0  cimg_library::CImg<float>::CImg =====

void __thiscall
cimg_library::CImg<float>::CImg
          (CImg<float> *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  (*(code *)PTR_CImg_0021df88)(this,param_1,param_2,param_3,param_4);
  return;
}


// ===== 00213300  <EXTERNAL>::sincosf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void sincosf(float __x,float *__sinx,float *__cosx)

{
  (*(code *)PTR_sincosf_0021df90)();
  return;
}


// ===== 00213310  cimg_library::CImg<unsigned_char>::get_warp<float> =====

void cimg_library::CImg<unsigned_char>::get_warp<float>
               (CImg_conflict *param_1,uint param_2,uint param_3,uint param_4)

{
  (*(code *)PTR_get_warp<float>_0021df98)(param_1,param_2,param_3,param_4);
  return;
}


// ===== 00213320  cimg_library::CImg<unsigned_char>::assign =====

void __thiscall
cimg_library::CImg<unsigned_char>::assign
          (CImg<unsigned_char> *this,uchar *param_1,uint param_2,uint param_3,uint param_4,
          uint param_5)

{
  (*(code *)PTR_assign_0021dfa0)(this,param_1,param_2,param_3,param_4,param_5);
  return;
}


// ===== 00213330  operator.delete[] =====

void operator_delete__(void *param_1)

{
  (*(code *)PTR_operator_delete___0021dfa8)();
  return;
}


// ===== 00213340  cimg_library::CImg<unsigned_char>::_save_jpeg =====

void __thiscall
cimg_library::CImg<unsigned_char>::_save_jpeg
          (CImg<unsigned_char> *this,__sFILE *param_1,char *param_2,uint param_3)

{
  (*(code *)PTR__save_jpeg_0021dfb0)();
  return;
}


// ===== 00213350  cimg_library::CImg<unsigned_char>::_save_png =====

void __thiscall
cimg_library::CImg<unsigned_char>::_save_png
          (CImg<unsigned_char> *this,__sFILE *param_1,char *param_2,uint param_3)

{
  (*(code *)PTR__save_png_0021dfb8)();
  return;
}


// ===== 00213360  cimg_library::CImg<unsigned_char>::save =====

void __thiscall
cimg_library::CImg<unsigned_char>::save
          (CImg<unsigned_char> *this,char *param_1,int param_2,uint param_3)

{
  (*(code *)PTR_save_0021dfc0)(this,param_1,param_2,param_3);
  return;
}


// ===== 00213370  cimg_library::CImg<unsigned_char>::CImg =====

void __thiscall
cimg_library::CImg<unsigned_char>::CImg
          (CImg<unsigned_char> *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  (*(code *)PTR_CImg_0021dfc8)(this,param_1,param_2,param_3,param_4);
  return;
}


// ===== 00213380  __cxa_get_exception_ptr =====

void __cxa_get_exception_ptr(void)

{
  (*(code *)PTR___cxa_get_exception_ptr_0021dfd0)();
  return;
}


// ===== 00213390  cimg_library::CImgInstanceException::CImgInstanceException =====

void __thiscall
cimg_library::CImgInstanceException::CImgInstanceException
          (CImgInstanceException *this,CImgInstanceException *param_1)

{
  (*(code *)PTR_CImgInstanceException_0021dfd8)();
  return;
}


// ===== 002133a0  __cxa_begin_catch =====

void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_0021dfe0)();
  return;
}


// ===== 002133b0  cimg_library::CImgIOException::CImgIOException =====

void __thiscall
cimg_library::CImgIOException::CImgIOException(CImgIOException *this,CImgIOException *param_1)

{
  (*(code *)PTR_CImgIOException_0021dfe8)();
  return;
}


// ===== 002133c0  cimg_library::CImgException::~CImgException =====

void __thiscall cimg_library::CImgException::~CImgException(CImgException *this)

{
  (*(code *)PTR__CImgException_0021dff0)();
  return;
}


// ===== 002133d0  __cxa_end_catch =====

void __cxa_end_catch(void)

{
  (*(code *)PTR___cxa_end_catch_0021dff8)();
  return;
}


// ===== 002133e0  <EXTERNAL>::__stack_chk_fail =====

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_0021e000)();
  return;
}


// ===== 002133f0  cimg_library::CImg<unsigned_char>::get_rotate =====

void cimg_library::CImg<unsigned_char>::get_rotate(float param_1,uint param_2,uint param_3)

{
  (*(code *)PTR_get_rotate_0021e008)(param_2,param_3);
  return;
}


// ===== 00213400  cimg_library::CImg<unsigned_char>::assign =====

void __thiscall
cimg_library::CImg<unsigned_char>::assign
          (CImg<unsigned_char> *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  (*(code *)PTR_assign_0021e010)(this,param_1,param_2,param_3,param_4);
  return;
}


// ===== 00213410  <EXTERNAL>::memset =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0021e018)(__s,__c);
  return pvVar1;
}


// ===== 00213420  cimg_library::CImg<unsigned_char>::get_resize =====

void cimg_library::CImg<unsigned_char>::get_resize
               (int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
               float param_7,float param_8,float param_9,float param_10)

{
  (*(code *)PTR_get_resize_0021e020)(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


// ===== 00213430  cimg_library::CImg<float>::safe_size =====

void cimg_library::CImg<float>::safe_size(uint param_1,uint param_2,uint param_3,uint param_4)

{
  (*(code *)PTR_safe_size_0021e028)(param_1,param_2,param_3,param_4);
  return;
}


// ===== 00213440  operator.new[] =====

void * operator_new__(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new___0021e030)();
  return pvVar1;
}


// ===== 00213450  __cxa_allocate_exception =====

void __cxa_allocate_exception(void)

{
  (*(code *)PTR___cxa_allocate_exception_0021e038)();
  return;
}


// ===== 00213460  cimg_library::cimg::strbuffersize =====

void cimg_library::cimg::strbuffersize(ulong param_1)

{
  (*(code *)PTR_strbuffersize_0021e040)();
  return;
}


// ===== 00213470  cimg_library::CImgInstanceException::CImgInstanceException =====

void __thiscall
cimg_library::CImgInstanceException::CImgInstanceException
          (CImgInstanceException *this,char *param_1,...)

{
  (*(code *)PTR_CImgInstanceException_0021e048)();
  return;
}


// ===== 00213480  __cxa_throw =====

void __cxa_throw(void)

{
  (*(code *)PTR___cxa_throw_0021e050)();
  return;
}


// ===== 00213490  __cxa_free_exception =====

void __cxa_free_exception(void)

{
  (*(code *)PTR___cxa_free_exception_0021e058)();
  return;
}


// ===== 002134a0  cimg_library::CImg<unsigned_char>::CImg =====

void __thiscall
cimg_library::CImg<unsigned_char>::CImg(CImg<unsigned_char> *this,CImg_conflict *param_1)

{
  (*(code *)PTR_CImg_0021e060)();
  return;
}


// ===== 002134b0  cimg_library::CImg<unsigned_char>::set_linear_atX =====

void __thiscall
cimg_library::CImg<unsigned_char>::set_linear_atX
          (CImg<unsigned_char> *this,uchar *param_1,float param_2,int param_3,int param_4,
          int param_5,bool param_6)

{
  (*(code *)PTR_set_linear_atX_0021e068)(this,param_1,param_3,param_4,param_5,param_6);
  return;
}


// ===== 002134c0  cimg_library::CImg<unsigned_char>::set_linear_atXY =====

void __thiscall
cimg_library::CImg<unsigned_char>::set_linear_atXY
          (CImg<unsigned_char> *this,uchar *param_1,float param_2,float param_3,int param_4,
          int param_5,bool param_6)

{
  (*(code *)PTR_set_linear_atXY_0021e070)(this,param_1,param_4,param_5,param_6);
  return;
}


// ===== 002134d0  cimg_library::CImg<unsigned_char>::set_linear_atXYZ =====

void __thiscall
cimg_library::CImg<unsigned_char>::set_linear_atXYZ
          (CImg<unsigned_char> *this,uchar *param_1,float param_2,float param_3,float param_4,
          int param_5,bool param_6)

{
  (*(code *)PTR_set_linear_atXYZ_0021e078)(this,param_1,param_5,param_6);
  return;
}


// ===== 002134e0  cimg_library::CImg<unsigned_char>::fill =====

void __thiscall cimg_library::CImg<unsigned_char>::fill(CImg<unsigned_char> *this,uchar *param_1)

{
  (*(code *)PTR_fill_0021e080)();
  return;
}


// ===== 002134f0  cimg_library::CImg<unsigned_char>::_cubic_atXYZ =====

void __thiscall
cimg_library::CImg<unsigned_char>::_cubic_atXYZ
          (CImg<unsigned_char> *this,float param_1,float param_2,float param_3,int param_4)

{
  (*(code *)PTR__cubic_atXYZ_0021e088)(this,param_4);
  return;
}


// ===== 00213500  cimg_library::CImg<unsigned_char>::_cubic_atX_c =====

void __thiscall
cimg_library::CImg<unsigned_char>::_cubic_atX_c
          (CImg<unsigned_char> *this,float param_1,int param_2,int param_3,int param_4)

{
  (*(code *)PTR__cubic_atX_c_0021e090)(this,param_2,param_3,param_4);
  return;
}


// ===== 00213510  cimg_library::CImg<unsigned_char>::_cubic_atXY =====

void __thiscall
cimg_library::CImg<unsigned_char>::_cubic_atXY
          (CImg<unsigned_char> *this,float param_1,float param_2,int param_3,int param_4)

{
  (*(code *)PTR__cubic_atXY_0021e098)(this,param_3,param_4);
  return;
}


// ===== 00213520  cimg_library::CImg<unsigned_char>::_linear_atXYZ =====

void __thiscall
cimg_library::CImg<unsigned_char>::_linear_atXYZ
          (CImg<unsigned_char> *this,float param_1,float param_2,float param_3,int param_4)

{
  (*(code *)PTR__linear_atXYZ_0021e0a0)(this,param_4);
  return;
}


// ===== 00213530  cimg_library::CImg<unsigned_char>::_cubic_atX_p =====

void __thiscall
cimg_library::CImg<unsigned_char>::_cubic_atX_p
          (CImg<unsigned_char> *this,float param_1,int param_2,int param_3,int param_4)

{
  (*(code *)PTR__cubic_atX_p_0021e0a8)(this,param_2,param_3,param_4);
  return;
}


// ===== 00213540  cimg_library::CImg<unsigned_char>::_cubic_atXY_p =====

void __thiscall
cimg_library::CImg<unsigned_char>::_cubic_atXY_p
          (CImg<unsigned_char> *this,float param_1,float param_2,int param_3,int param_4)

{
  (*(code *)PTR__cubic_atXY_p_0021e0b0)(this,param_3,param_4);
  return;
}


// ===== 00213550  cimg_library::CImg<unsigned_char>::_linear_atX_p =====

void __thiscall
cimg_library::CImg<unsigned_char>::_linear_atX_p
          (CImg<unsigned_char> *this,float param_1,int param_2,int param_3,int param_4)

{
  (*(code *)PTR__linear_atX_p_0021e0b8)(this,param_2,param_3,param_4);
  return;
}


// ===== 00213560  cimg_library::CImg<unsigned_char>::_linear_atXY_p =====

void __thiscall
cimg_library::CImg<unsigned_char>::_linear_atXY_p
          (CImg<unsigned_char> *this,float param_1,float param_2,int param_3,int param_4)

{
  (*(code *)PTR__linear_atXY_p_0021e0c0)(this,param_3,param_4);
  return;
}


// ===== 00213570  cimg_library::CImg<unsigned_char>::cubic_atX =====

void __thiscall
cimg_library::CImg<unsigned_char>::cubic_atX
          (CImg<unsigned_char> *this,float param_1,int param_2,int param_3,int param_4,
          uchar *param_5)

{
  (*(code *)PTR_cubic_atX_0021e0c8)(this,param_2,param_3,param_4);
  return;
}


// ===== 00213580  cimg_library::CImg<unsigned_char>::cubic_atXY =====

void __thiscall
cimg_library::CImg<unsigned_char>::cubic_atXY
          (CImg<unsigned_char> *this,float param_1,float param_2,int param_3,int param_4,
          uchar *param_5)

{
  (*(code *)PTR_cubic_atXY_0021e0d0)(this,param_3,param_4);
  return;
}


// ===== 00213590  cimg_library::CImg<unsigned_char>::linear_atXY =====

void __thiscall
cimg_library::CImg<unsigned_char>::linear_atXY
          (CImg<unsigned_char> *this,float param_1,float param_2,int param_3,int param_4,
          uchar *param_5)

{
  (*(code *)PTR_linear_atXY_0021e0d8)(this,param_3,param_4);
  return;
}


// ===== 002135a0  cimg_library::CImg<unsigned_char>::_cubic_atXYZ_p =====

void __thiscall
cimg_library::CImg<unsigned_char>::_cubic_atXYZ_p
          (CImg<unsigned_char> *this,float param_1,float param_2,float param_3,int param_4)

{
  (*(code *)PTR__cubic_atXYZ_p_0021e0e0)(this,param_4);
  return;
}


// ===== 002135b0  cimg_library::CImg<unsigned_char>::_linear_atXYZ_p =====

void __thiscall
cimg_library::CImg<unsigned_char>::_linear_atXYZ_p
          (CImg<unsigned_char> *this,float param_1,float param_2,float param_3,int param_4)

{
  (*(code *)PTR__linear_atXYZ_p_0021e0e8)(this,param_4);
  return;
}


// ===== 002135c0  cimg_library::CImg<unsigned_char>::cubic_atXYZ =====

void __thiscall
cimg_library::CImg<unsigned_char>::cubic_atXYZ
          (CImg<unsigned_char> *this,float param_1,float param_2,float param_3,int param_4,
          uchar *param_5)

{
  (*(code *)PTR_cubic_atXYZ_0021e0f0)(this,param_4);
  return;
}


// ===== 002135d0  cimg_library::CImg<unsigned_char>::linear_atXYZ =====

void __thiscall
cimg_library::CImg<unsigned_char>::linear_atXYZ
          (CImg<unsigned_char> *this,float param_1,float param_2,float param_3,int param_4,
          uchar *param_5)

{
  (*(code *)PTR_linear_atXYZ_0021e0f8)(this,param_4);
  return;
}


