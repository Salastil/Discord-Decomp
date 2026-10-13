// ===== 0018e97c  FUN_0018e97c =====

undefined8 FUN_0018e97c(void)

{
  return 1;
}


// ===== 0018e988  FUN_0018e988 =====

undefined8 FUN_0018e988(void)

{
  return 1;
}


// ===== 0018e994  FUN_0018e994 =====

void FUN_0018e994(long param_1,undefined8 *param_2)

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


// ===== 0018ea18  FUN_0018ea18 =====

void FUN_0018ea18(long param_1,undefined8 *param_2)

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
        FUN_001834c8(*(undefined8 *)(*(long *)(param_1 + 0x18) + lVar10 * 8),param_2,0x12,0);
        lVar6 = param_2[1];
        if (lVar5 == lVar6) break;
        bVar11 = false;
        lVar10 = lVar10 + 1;
        lVar4 = lVar6;
        if (lVar10 == *(long *)(param_1 + 0x20)) goto LAB_0018eb54;
      }
      param_2[1] = lVar4;
      lVar10 = lVar10 + 1;
    } while (lVar10 != *(long *)(param_1 + 0x20));
  }
LAB_0018eb54:
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
    uVar1 = s_volatile_00128cc0._0_8_;
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
    uVar1 = s_restrict_00128ff8._0_8_;
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
    if (*(char *)(param_1 + 0x2c) != '\x01') goto LAB_0018eda8;
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
LAB_0018eda8:
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
                    /* WARNING: Could not recover jumptable at 0x0018ee64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x28))(plVar9,param_2);
      return;
    }
  }
  return;
}


// ===== 0018ee8c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0018ee94  FUN_0018ee94 =====

void FUN_0018ee94(long param_1,undefined8 *param_2)

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


// ===== 0018f000  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0018f008  FUN_0018f008 =====

void FUN_0018f008(long param_1,undefined8 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0018f168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
    return;
  }
  return;
}


// ===== 0018f174  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0018f17c  FUN_0018f17c =====

ulong FUN_0018f17c(long param_1)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *(byte *)((long)*(undefined8 **)(param_1 + 0x10) + 9);
  if ((bVar1 & 0xc0) == 0x80) {
                    /* WARNING: Could not recover jumptable at 0x0018f19c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x10))();
    return uVar2;
  }
  return (ulong)(bVar1 < 0x40);
}


// ===== 0018f1ac  FUN_0018f1ac =====

ulong FUN_0018f1ac(long param_1)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *(byte *)((long)*(long **)(param_1 + 0x10) + 10);
  if ((bVar1 & 3) == 2) {
                    /* WARNING: Could not recover jumptable at 0x0018f1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 8))();
    return uVar2;
  }
  return (ulong)((bVar1 & 3) == 0);
}


// ===== 0018f1dc  FUN_0018f1dc =====

ulong FUN_0018f1dc(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  
  uVar1 = *(ushort *)((long)*(long **)(param_1 + 0x10) + 9) >> 10 & 3;
  if (uVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x0018f1fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
    return uVar2;
  }
  return (ulong)(uVar1 == 0);
}


// ===== 0018f20c  FUN_0018f20c =====

void FUN_0018f20c(long param_1,undefined8 *param_2)

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
    uVar2 = s_volatile_00128cc0._0_8_;
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
    uVar2 = s_restrict_00128ff8._0_8_;
    ((char *)((long)pvVar3 + lVar5))[8] = 't';
    *(undefined8 *)((long)pvVar3 + lVar5) = uVar2;
    param_2[1] = param_2[1] + 9;
  }
  return;
}


// ===== 0018f384  FUN_0018f384 =====

void FUN_0018f384(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0018f394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))();
  return;
}


// ===== 0018f398  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0018f3a0  FUN_0018f3a0 =====

void FUN_0018f3a0(long param_1,undefined8 *param_2)

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


// ===== 0018f50c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0018f514  FUN_0018f514 =====

void FUN_0018f514(long param_1,undefined8 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0018f5e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  return;
}


// ===== 0018f5ec  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0018f5f4  FUN_0018f5f4 =====

void FUN_0018f5f4(long param_1,undefined8 *param_2)

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
    uVar2 = s_unsigned_00125a4d._0_8_;
    ((char *)((long)pvVar3 + lVar4))[8] = ' ';
    *(undefined8 *)((long)pvVar3 + lVar4) = uVar2;
    lVar1 = param_2[1];
    uVar6 = param_2[2];
    lVar4 = lVar1 + 9;
    param_2[1] = lVar4;
    pvVar3 = (void *)*param_2;
    if (lVar1 + 0x10U <= uVar6) goto LAB_0018f6c4;
  }
  else {
    uVar6 = param_2[2];
    pvVar3 = (void *)*param_2;
    if (lVar4 + 7U <= uVar6) goto LAB_0018f6c4;
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
LAB_0018f6c4:
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
  FUN_001834c8(*(undefined8 *)(param_1 + 0x10),param_2,0x13,0);
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


// ===== 0018f7c4  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0018f7cc  FUN_0018f7cc =====

void FUN_0018f7cc(long param_1,undefined8 *param_2)

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


// ===== 0018f870  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0018f878  FUN_0018f878 =====

void FUN_0018f878(long param_1,undefined8 *param_2)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_001a0b98;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x1e;
  uVar3 = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  return;
}


// ===== 0018f918  FUN_0018f918 =====

void FUN_0018f918(long param_1,undefined8 *param_2,undefined8 *param_3)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_001a0c08;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x1d;
  uVar3 = *param_2;
  uVar4 = *param_3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar4;
  return;
}


// ===== 0018f9c0  FUN_0018f9c0 =====

void FUN_0018f9c0(long param_1,undefined8 *param_2)

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
  uVar2 = CONCAT53(s_pixel_vector__001291c1._8_5_,s_pixel_vector__001291c1._5_3_);
  *(undefined8 *)((long)pvVar3 + lVar4) =
       CONCAT35(s_pixel_vector__001291c1._5_3_,s_pixel_vector__001291c1._0_5_);
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


// ===== 0018fae0  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0018fae8  FUN_0018fae8 =====

void FUN_0018fae8(long param_1,undefined8 *param_2)

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


// ===== 0018fc3c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0018fc44  FUN_0018fc44 =====

void FUN_0018fc44(long param_1,undefined8 *param_2,undefined8 *param_3)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_001a0c78;
  uVar4 = *param_2;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0xf;
  uVar3 = *param_3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x400;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar4;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar3;
  return;
}


// ===== 0018fce8  FUN_0018fce8 =====

undefined8 FUN_0018fce8(void)

{
  return 1;
}


// ===== 0018fcf4  FUN_0018fcf4 =====

undefined8 FUN_0018fcf4(void)

{
  return 1;
}


// ===== 0018fd00  FUN_0018fd00 =====

void FUN_0018fd00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0018fd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  return;
}


// ===== 0018fd14  FUN_0018fd14 =====

void FUN_0018fd14(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  size_t sVar4;
  long *plVar5;
  
  lVar3 = param_2[1];
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00176a28("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/Utility.h",0xae,&DAT_001257a9)
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
                    /* WARNING: Could not recover jumptable at 0x0018fe88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x28))(plVar5,param_2);
  return;
}


// ===== 0018feb8  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0018fec0  FUN_0018fec0 =====

void FUN_0018fec0(long param_1,undefined8 *param_2,long *param_3)

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
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_001a0ce8;
  uVar5 = *param_2;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0xe;
  *(ushort *)((long)puVar2 + lVar3 + 0x19) =
       uVar1 & 0xc0 | 0x500 | *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x20) = uVar5;
  *(long *)((long)puVar2 + lVar3 + 0x28) = lVar4;
  return;
}


// ===== 0018ff74  FUN_0018ff74 =====

ulong FUN_0018ff74(long param_1)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *(byte *)((long)*(undefined8 **)(param_1 + 0x18) + 9);
  if ((bVar1 & 0xc0) == 0x80) {
                    /* WARNING: Could not recover jumptable at 0x0018ff94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x18))();
    return uVar2;
  }
  return (ulong)(bVar1 < 0x40);
}


// ===== 0018ffa4  FUN_0018ffa4 =====

void FUN_0018ffa4(long param_1,undefined8 *param_2)

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
      if ((uVar4 & 1) != 0) goto LAB_00190028;
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
      goto LAB_001900a4;
    }
  }
LAB_00190028:
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
LAB_001900a4:
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


// ===== 00190164  FUN_00190164 =====

void FUN_00190164(long param_1,undefined8 *param_2)

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
      if ((uVar4 & 1) != 0) goto LAB_001901d8;
      plVar3 = *(long **)(param_1 + 0x18);
      uVar1 = *(ushort *)((long)plVar3 + 9);
    }
    if (((uVar1 >> 10 & 3) != 0) &&
       (((uVar1 >> 10 & 3) != 2 ||
        (uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2), (uVar4 & 1) == 0))))
    goto LAB_00190224;
  }
LAB_001901d8:
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
LAB_00190224:
                    /* WARNING: Could not recover jumptable at 0x00190240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),param_2);
  return;
}


// ===== 00190248  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00190250  FUN_00190250 =====

void FUN_00190250(long param_1,undefined8 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00190374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}


// ===== 00190380  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00190388  FUN_00190388 =====

ulong FUN_00190388(long param_1)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *(byte *)((long)*(undefined8 **)(param_1 + 0x10) + 9);
  if ((bVar1 & 0xc0) == 0x80) {
                    /* WARNING: Could not recover jumptable at 0x001903a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x10))();
    return uVar2;
  }
  return (ulong)(bVar1 < 0x40);
}


// ===== 001903b8  FUN_001903b8 =====

void FUN_001903b8(long param_1,undefined8 *param_2)

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
    goto LAB_001905ac;
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
LAB_0019051c:
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
      if ((uVar4 & 1) != 0) goto LAB_0019051c;
      plVar3 = *(long **)(param_1 + 0x10);
      uVar1 = *(ushort *)((long)plVar3 + 9);
    }
    if (((uVar1 >> 10 & 3) == 0) ||
       (((uVar1 >> 10 & 3) == 2 &&
        (uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2), (uVar4 & 1) != 0))))
    goto LAB_0019051c;
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
LAB_001905ac:
  *(undefined1 *)((long)pvVar5 + lVar6) = uVar7;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 001906f8  FUN_001906f8 =====

void FUN_001906f8(long param_1,undefined8 *param_2)

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
      if ((uVar4 & 1) != 0) goto LAB_001907cc;
      plVar3 = *(long **)(param_1 + 0x10);
      uVar1 = *(ushort *)((long)plVar3 + 9);
    }
    if (((uVar1 >> 10 & 3) != 0) &&
       (((uVar1 >> 10 & 3) != 2 ||
        (uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2), (uVar4 & 1) == 0))))
    goto LAB_00190818;
  }
LAB_001907cc:
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
LAB_00190818:
                    /* WARNING: Could not recover jumptable at 0x00190834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))(*(long **)(param_1 + 0x10),param_2);
  return;
}


// ===== 0019084c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00190854  FUN_00190854 =====

ulong FUN_00190854(long param_1)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *(byte *)((long)*(undefined8 **)(param_1 + 0x10) + 9);
  if ((bVar1 & 0xc0) == 0x80) {
                    /* WARNING: Could not recover jumptable at 0x00190874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x10))();
    return uVar2;
  }
  return (ulong)(bVar1 < 0x40);
}


// ===== 00190884  FUN_00190884 =====

void FUN_00190884(long param_1,undefined8 *param_2)

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
                    /* try { // try from 001908cc to 001909c7 has its CatchHandler @ 00190ab0 */
  auVar9 = FUN_00190c04(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),param_2);
  plVar6 = auVar9._8_8_;
  if (plVar6 == (long *)0x0) goto LAB_00190a8c;
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
LAB_001909cc:
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
      if ((uVar4 & 1) != 0) goto LAB_001909cc;
      uVar1 = *(ushort *)((long)plVar6 + 9);
    }
    if (((uVar1 >> 10 & 3) == 0) ||
       (((uVar1 >> 10 & 3) == 2 &&
        (uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,param_2), (uVar4 & 1) != 0))))
    goto LAB_001909cc;
  }
  bVar3 = (auVar9 & (undefined1  [16])0xffffffff) != (undefined1  [16])0x0;
  sVar8 = 1;
  if (bVar3) {
    sVar8 = 2;
  }
  lVar7 = param_2[1];
  pvVar5 = (void *)*param_2;
  __src = &UNK_00126055;
  if (bVar3) {
    __src = &DAT_00126057;
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
                    /* try { // try from 00190aa4 to 00190aaf has its CatchHandler @ 00190ab0 */
      abort();
    }
    lVar7 = param_2[1];
  }
  memcpy((void *)((long)pvVar5 + lVar7),__src,sVar8);
  param_2[1] = param_2[1] + sVar8;
LAB_00190a8c:
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return;
}


// ===== 00190ab8  FUN_00190ab8 =====

void FUN_00190ab8(long param_1,undefined8 *param_2)

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
                    /* try { // try from 00190b00 to 00190beb has its CatchHandler @ 00190bec */
  FUN_00190c04(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),param_2);
  if (extraout_x1 == (long *)0x0) goto LAB_00190bd0;
  uVar1 = *(ushort *)((long)extraout_x1 + 9);
  uVar2 = uVar1 >> 8 & 3;
  if (uVar2 == 0) {
LAB_00190b70:
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
      if ((uVar3 & 1) != 0) goto LAB_00190b70;
      uVar1 = *(ushort *)((long)extraout_x1 + 9);
    }
    if (((uVar1 >> 10 & 3) == 0) ||
       (((uVar1 >> 10 & 3) == 2 &&
        (uVar3 = (**(code **)(*extraout_x1 + 0x10))(extraout_x1,param_2), (uVar3 & 1) != 0))))
    goto LAB_00190b70;
  }
  (**(code **)(*extraout_x1 + 0x28))(extraout_x1,param_2);
LAB_00190bd0:
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return;
}


// ===== 00190bf4  FUN_00190bf4 =====

void FUN_00190bf4(void)

{
  return;
}


// ===== 00190bfc  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00190c04  FUN_00190c04 =====

undefined1  [16] FUN_00190c04(long *param_1,uint param_2,undefined8 param_3)

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
                    /* try { // try from 00190c54 to 00190c5f has its CatchHandler @ 00190d94 */
      lVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_3);
      if (*(char *)(lVar2 + 8) != '\r') {
        uVar5 = param_2;
        if (local_98 == &local_80) goto LAB_00190d44;
        goto LAB_00190d40;
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
                    /* try { // try from 00190d68 to 00190d8f has its CatchHandler @ 00190d90 */
                    /* WARNING: Subroutine does not return */
      FUN_00176a28("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0x96,
                   "Invalid access!");
    }
  } while (param_1 != (long *)local_98[uVar4]);
  param_1 = (long *)0x0;
  if (local_98 != &local_80) {
LAB_00190d40:
    free(local_98);
    uVar5 = param_2;
  }
LAB_00190d44:
  auVar6._4_4_ = 0;
  auVar6._0_4_ = uVar5;
  auVar6._8_8_ = param_1;
  return auVar6;
}


// ===== 00190db0  operator.new =====

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
                    /* try { // try from 00190ddc to 00190ddf has its CatchHandler @ 00190e1c */
    (*pcVar2)();
  }
  this = (bad_alloc *)__cxa_allocate_exception(8);
  std::bad_alloc::bad_alloc(this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_PTR_001a1138,PTR__bad_exception_001a12f8);
}


// ===== 00190e20  operator.new =====

/* operator new(unsigned long, std::nothrow_t const&) */

void * operator_new(ulong param_1,nothrow_t *param_2)

{
  void *pvVar1;
  
                    /* try { // try from 00190e2c to 00190e2f has its CatchHandler @ 00190e3c */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}


// ===== 00190e58  operator.new[] =====

/* operator new[](unsigned long) */

void * operator_new__(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(param_1);
  return pvVar1;
}


// ===== 00190e60  operator.new[] =====

/* operator new[](unsigned long, std::nothrow_t const&) */

void * operator_new__(ulong param_1,nothrow_t *param_2)

{
  void *pvVar1;
  
                    /* try { // try from 00190e6c to 00190e6f has its CatchHandler @ 00190e7c */
  pvVar1 = operator_new__(param_1);
  return pvVar1;
}


// ===== 00190e98  operator.delete =====

/* operator delete(void*) */

void operator_delete(void *param_1)

{
  free(param_1);
  return;
}


// ===== 00190ea0  operator.delete =====

/* operator delete(void*, std::nothrow_t const&) */

void operator_delete(void *param_1,nothrow_t *param_2)

{
  operator_delete(param_1);
  return;
}


// ===== 00190ea8  operator.delete =====

/* operator delete(void*, unsigned long) */

void operator_delete(void *param_1,ulong param_2)

{
  operator_delete(param_1);
  return;
}


// ===== 00190eb0  operator.delete[] =====

/* operator delete[](void*) */

void operator_delete__(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00190eb8  operator.delete[] =====

/* operator delete[](void*, std::nothrow_t const&) */

void operator_delete__(void *param_1,nothrow_t *param_2)

{
  operator_delete__(param_1);
  return;
}


// ===== 00190ec0  operator.delete[] =====

/* operator delete[](void*, unsigned long) */

void operator_delete__(void *param_1,ulong param_2)

{
  operator_delete__(param_1);
  return;
}


// ===== 00190ec8  operator.new =====

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
                    /* try { // try from 00190ef4 to 00190f17 has its CatchHandler @ 00190f58 */
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
  __cxa_throw(this,PTR_PTR_001a1138,PTR__bad_exception_001a12f8);
}


// ===== 00190f5c  operator.new =====

/* operator new(unsigned long, std::align_val_t, std::nothrow_t const&) */

void * operator_new(void)

{
  void *pvVar1;
  
                    /* try { // try from 00190f68 to 00190f6b has its CatchHandler @ 00190f78 */
  pvVar1 = operator_new();
  return pvVar1;
}


// ===== 00190f94  operator.new[] =====

/* operator new[](unsigned long, std::align_val_t) */

void * operator_new__(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new();
  return pvVar1;
}


// ===== 00190f9c  operator.new[] =====

/* operator new[](unsigned long, std::align_val_t, std::nothrow_t const&) */

void * operator_new__(void)

{
  void *pvVar1;
  
                    /* try { // try from 00190fa8 to 00190fab has its CatchHandler @ 00190fb8 */
  pvVar1 = operator_new__();
  return pvVar1;
}


// ===== 00190fd4  operator.delete =====

/* operator delete(void*, std::align_val_t) */

void operator_delete(void *param_1)

{
  free(param_1);
  return;
}


// ===== 00190fdc  operator.delete =====

/* operator delete(void*, std::align_val_t, std::nothrow_t const&) */

void operator_delete(void)

{
  operator_delete();
  return;
}


// ===== 00190fe4  operator.delete =====

/* operator delete(void*, unsigned long, std::align_val_t) */

void operator_delete(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  operator_delete(param_1,param_3);
  return;
}


// ===== 00190ff0  operator.delete[] =====

/* operator delete[](void*, std::align_val_t) */

void operator_delete__(void)

{
  operator_delete();
  return;
}


// ===== 00190ff8  operator.delete[] =====

/* operator delete[](void*, std::align_val_t, std::nothrow_t const&) */

void operator_delete__(void)

{
  operator_delete__();
  return;
}


// ===== 00191000  operator.delete[] =====

/* operator delete[](void*, unsigned long, std::align_val_t) */

void operator_delete__(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  operator_delete__(param_1,param_3);
  return;
}


// ===== 0019100c  FUN_0019100c =====

undefined8 FUN_0019100c(undefined8 *param_1)

{
  return *param_1;
}


// ===== 00191018  FUN_00191018 =====

bool FUN_00191018(ulong *param_1)

{
  return *param_1 >> 8 == 0x434c4e47432b2b;
}


// ===== 0019103c  __cxa_allocate_exception =====

long __cxa_allocate_exception(long param_1)

{
  void *__s;
  
                    /* try { // try from 00191050 to 00191057 has its CatchHandler @ 00191088 */
  __s = (void *)FUN_0019180c(param_1 + 0x8fU & 0xfffffffffffffff0);
  if (__s != (void *)0x0) {
    memset(__s,0,param_1 + 0x8fU & 0xfffffffffffffff0);
    return (long)__s + 0x80;
  }
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 0019108c  __cxa_begin_catch =====

ulong * __cxa_begin_catch(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  
  uVar6 = *param_1;
                    /* try { // try from 001910a0 to 001910a3 has its CatchHandler @ 00191134 */
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


// ===== 00191138  __cxa_free_exception =====

void __cxa_free_exception(long param_1)

{
                    /* try { // try from 00191148 to 0019114b has its CatchHandler @ 00191158 */
  FUN_001919f0(param_1 + -0x80);
  return;
}


// ===== 0019115c  __cxa_allocate_dependent_exception =====

void __cxa_allocate_dependent_exception(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0019180c(0x80);
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


// ===== 00191198  __cxa_free_dependent_exception =====

void __cxa_free_dependent_exception(void)

{
  FUN_001919f0();
  return;
}


// ===== 001911a0  __cxa_throw =====

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
  *(code **)(param_1 + -0x18) = FUN_00191224;
  FUN_001932c0((undefined8 *)(param_1 + -0x20));
  iVar1 = FUN_0019128c(param_1 + -0x80);
  if (iVar1 == 1) {
    lVar2 = FUN_00193290(0xffffffffffffffff,extraout_x1 + -0x58);
    if (lVar2 == 1) {
      if (*(code **)(extraout_x1 + -0x48) != (code *)0x0) {
        (**(code **)(extraout_x1 + -0x48))(extraout_x1 + 0x20);
      }
      FUN_001919f0(extraout_x1 + -0x60);
    }
    return;
  }
  FUN_001763c0(*(undefined8 *)(extraout_x1 + -0x38));
                    /* WARNING: Subroutine does not return */
  FUN_0013ff50();
}


// ===== 00191224  FUN_00191224 =====

void FUN_00191224(int param_1,long param_2)

{
  long lVar1;
  
  if (param_1 == 1) {
    lVar1 = FUN_00193290(0xffffffffffffffff,param_2 + -0x58);
    if (lVar1 == 1) {
      if (*(code **)(param_2 + -0x48) != (code *)0x0) {
                    /* try { // try from 0019125c to 00191263 has its CatchHandler @ 00191284 */
        (**(code **)(param_2 + -0x48))(param_2 + 0x20);
      }
                    /* try { // try from 00191264 to 0019126b has its CatchHandler @ 00191288 */
      FUN_001919f0(param_2 + -0x60);
    }
    return;
  }
  FUN_001763c0(*(undefined8 *)(param_2 + -0x38));
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0019125c with catch @ 00191284
                        */
  FUN_0013ff50();
}


// ===== 0019128c  FUN_0019128c =====

undefined8 FUN_0019128c(long param_1)

{
  long lVar1;
  
  __cxa_begin_catch(param_1 + 0x60);
  lVar1 = FUN_001763c0(*(undefined8 *)(param_1 + 0x28));
  return *(undefined8 *)(lVar1 + -8);
}


// ===== 001912b0  __cxa_get_exception_ptr =====

undefined8 __cxa_get_exception_ptr(long param_1)

{
  return *(undefined8 *)(param_1 + -8);
}


// ===== 001912bc  __cxa_end_catch =====

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
      FUN_001936cc((ulong *)(lVar3 + 0x60));
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
          FUN_001919f0(lVar3);
        }
        lVar3 = FUN_00193290(0xffffffffffffffff,lVar4 + 8);
        if (lVar3 == 1) {
          if (*(code **)(lVar4 + 0x18) != (code *)0x0) {
                    /* try { // try from 001913a4 to 001913ab has its CatchHandler @ 001913b8 */
            (**(code **)(lVar4 + 0x18))(lVar4 + 0x80);
          }
                    /* try { // try from 001913ac to 001913b3 has its CatchHandler @ 001913bc */
          FUN_001919f0(lVar4);
        }
      }
    }
  }
  return;
}


// ===== 001913c0  __cxa_decrement_exception_refcount =====

void __cxa_decrement_exception_refcount(long param_1)

{
  long lVar1;
  
  if ((param_1 != 0) && (lVar1 = FUN_00193290(0xffffffffffffffff,param_1 + -0x78), lVar1 == 1)) {
    if (*(code **)(param_1 + -0x68) != (code *)0x0) {
                    /* try { // try from 001913f4 to 001913fb has its CatchHandler @ 00191414 */
      (**(code **)(param_1 + -0x68))(param_1);
    }
                    /* try { // try from 001913fc to 00191403 has its CatchHandler @ 00191418 */
    FUN_001919f0(param_1 + -0x80);
  }
  return;
}


// ===== 0019141c  __cxa_current_exception_type =====

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


// ===== 00191474  __cxa_rethrow =====

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
    FUN_001932c0(puVar6);
    uVar7 = *puVar6;
                    /* try { // try from 001914e8 to 001914eb has its CatchHandler @ 00191554 */
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
      if (*plVar3 != 0) goto LAB_00191494;
      *plVar3 = lVar8;
    }
    if ((uVar4 & 0xffffffffffffff00) == 0x434c4e47432b2b00) {
      FUN_001763c0(*(undefined8 *)(lVar8 + 0x28));
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 001914e8 with catch @ 00191554
                        */
      FUN_0013ff50();
    }
  }
LAB_00191494:
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 00191558  __cxa_increment_exception_refcount =====

void __cxa_increment_exception_refcount(long param_1)

{
  if (param_1 != 0) {
    FUN_00193290(1,param_1 + -0x78);
  }
  return;
}


// ===== 00191584  __cxa_current_primary_exception =====

long * __cxa_current_primary_exception(void)

{
  long *plVar1;
  long lVar2;
  
                    /* try { // try from 00191594 to 00191597 has its CatchHandler @ 0019160c */
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
    FUN_00193290(1,lVar2 + 8);
  }
  return plVar1;
}


// ===== 00191610  __cxa_rethrow_primary_exception =====

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
  puVar3 = (undefined8 *)FUN_0019180c(0x80);
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
    FUN_00193290(1,param_1 + -0x78);
    puVar3[2] = *(undefined8 *)(param_1 + -0x70);
    uVar4 = std::get_unexpected();
    puVar3[4] = uVar4;
    uVar4 = std::get_terminate();
    puVar3[5] = uVar4;
    *puVar9 = 0x434c4e47432b2b01;
    lVar5 = __cxa_get_globals();
    iVar1 = *(int *)(lVar5 + 8);
    puVar3[0xd] = FUN_00191740;
    *(int *)(lVar5 + 8) = iVar1 + 1;
    FUN_001932c0(puVar9);
    uVar8 = *puVar9;
                    /* try { // try from 001916c0 to 001916c3 has its CatchHandler @ 0019173c */
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


// ===== 00191740  FUN_00191740 =====

void FUN_00191740(int param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == 1) {
    lVar2 = *(long *)(param_2 + -0x58);
    if ((lVar2 != 0) && (lVar1 = FUN_00193290(0xffffffffffffffff,lVar2 + -0x78), lVar1 == 1)) {
      if (*(code **)(lVar2 + -0x68) != (code *)0x0) {
                    /* try { // try from 00191780 to 00191787 has its CatchHandler @ 001917ac */
        (**(code **)(lVar2 + -0x68))(lVar2);
      }
                    /* try { // try from 00191788 to 0019178f has its CatchHandler @ 001917b0 */
      FUN_001919f0(lVar2 + -0x80);
    }
    FUN_001919f0(param_2 + -0x60);
    return;
  }
  FUN_001763c0(*(undefined8 *)(param_2 + -0x38));
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00191780 with catch @ 001917ac
                        */
  FUN_0013ff50();
}


// ===== 001917b4  __cxa_uncaught_exception =====

ulong __cxa_uncaught_exception(void)

{
  ulong uVar1;
  
                    /* try { // try from 001917c0 to 001917c3 has its CatchHandler @ 001917e0 */
  uVar1 = __cxa_get_globals_fast();
  if (uVar1 != 0) {
    uVar1 = (ulong)(*(int *)(uVar1 + 8) != 0);
  }
  return uVar1;
}


// ===== 001917e4  __cxa_uncaught_exceptions =====

ulong __cxa_uncaught_exceptions(void)

{
  ulong uVar1;
  
                    /* try { // try from 001917f0 to 001917f3 has its CatchHandler @ 00191808 */
  uVar1 = __cxa_get_globals_fast();
  if (uVar1 != 0) {
    uVar1 = (ulong)*(uint *)(uVar1 + 8);
  }
  return uVar1;
}


// ===== 0019180c  FUN_0019180c =====

void FUN_0019180c(size_t param_1)

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
  FUN_00191868(param_1);
  return;
}


// ===== 00191868  FUN_00191868 =====

ushort * FUN_00191868(long param_1)

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
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_001a69d8);
  if (DAT_001a69d0 == (ushort *)0x0) {
    DAT_001a6a0c = 0x7d0080;
    DAT_001a69d0 = (ushort *)&DAT_001a6a0c;
  }
  else if (DAT_001a69d0 == (ushort *)&DAT_001a6c00) goto LAB_00191920;
  uVar5 = param_1 + 3U >> 2;
  uVar1 = uVar5 + 1;
  puVar4 = (ushort *)0x0;
  puVar6 = DAT_001a69d0;
  do {
    puVar9 = puVar6 + 2;
    if (((ulong)puVar9 & 0xf) != 0) {
                    /* try { // try from 001919ac to 001919cb has its CatchHandler @ 001919d4 */
                    /* WARNING: Subroutine does not return */
      FUN_00176a28("%s:%d: %s","out/llvm-project/libcxxabi/src/fallback_malloc.cpp",0x92,
                   &DAT_001257a9);
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
                    /* try { // try from 00191948 to 00191967 has its CatchHandler @ 001919cc */
                    /* WARNING: Subroutine does not return */
        FUN_00176a28("%s:%d: %s","out/llvm-project/libcxxabi/src/fallback_malloc.cpp",0xa7,
                     &DAT_001257a9);
      }
      goto LAB_0019198c;
    }
    if (uVar5 < uVar8) {
      uVar2 = *puVar6;
      if (puVar4 == (ushort *)0x0) {
        *puVar6 = 0;
        DAT_001a69d0 = (ushort *)((ulong)uVar2 * 4 + 0x1a6a00);
      }
      else {
        *puVar4 = uVar2;
        *puVar6 = 0;
      }
      goto LAB_0019198c;
    }
    uVar2 = *puVar6;
    puVar4 = puVar6;
    puVar6 = (ushort *)((ulong)uVar2 * 4 + 0x1a6a00);
  } while ((ulong)uVar2 != 0x80);
LAB_00191920:
  puVar9 = (ushort *)0x0;
LAB_0019198c:
                    /* try { // try from 0019198c to 00191997 has its CatchHandler @ 001919d0 */
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_001a69d8);
  return puVar9;
}


// ===== 001919f0  FUN_001919f0 =====

void * FUN_001919f0(void *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  
  if ((param_1 < (void *)0x1a6a00) || ((void *)0x1a6bff < param_1)) {
    free(param_1);
    return param_1;
  }
  puVar7 = (ushort *)((long)param_1 + -4);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_001a69d8);
  if ((DAT_001a69d0 != (ushort *)0x0) && (DAT_001a69d0 != (ushort *)&DAT_001a6c00)) {
    puVar2 = DAT_001a69d0;
    puVar6 = (ushort *)0x0;
    do {
      puVar5 = puVar2;
      uVar1 = puVar5[1];
      if (puVar5 + (ulong)uVar1 * 2 == puVar7) {
        puVar5[1] = *(short *)((long)param_1 + -2) + uVar1;
        goto LAB_00191b08;
      }
      if (puVar7 + (ulong)*(ushort *)((long)param_1 + -2) * 2 == puVar5) {
        *(ushort *)((long)param_1 + -2) = *(ushort *)((long)param_1 + -2) + uVar1;
        if (puVar6 == (ushort *)0x0) {
          DAT_001a69d0 = puVar7;
          *puVar7 = *puVar5;
        }
        else {
          *puVar6 = (ushort)((int)puVar7 - 0x1a6a00U >> 2);
        }
        goto LAB_00191b08;
      }
      puVar2 = (ushort *)((ulong)*puVar5 * 4 + 0x1a6a00);
      puVar6 = puVar5;
    } while ((ulong)*puVar5 != 0x80);
  }
  iVar4 = (int)DAT_001a69d0;
  DAT_001a69d0 = puVar7;
  *puVar7 = (ushort)(iVar4 - 0x1a6a00U >> 2);
LAB_00191b08:
                    /* try { // try from 00191b08 to 00191b13 has its CatchHandler @ 00191b28 */
  uVar3 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_001a69d8);
  return (void *)(ulong)uVar3;
}


// ===== 00191b2c  __gxx_personality_v0 =====

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
      thunk_FUN_00193854(param_5,0,param_4);
      thunk_FUN_00193854(param_5,1,(long)iVar2);
      FUN_00193720(param_5,uVar21);
      if (-1 < iVar2) {
        return (ulong *)0x7;
      }
      goto LAB_00191bbc;
    }
    FUN_00191d54(&local_60,6,0,param_4);
  }
  else {
    FUN_00191d54(&local_60,param_2,param_3 == 0x434c4e47432b2b00,param_4);
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
      goto code_r0x00191d18;
    }
    if (local_38 == 6) {
      thunk_FUN_00193854(param_5,0,param_4);
      thunk_FUN_00193854(param_5,1,local_60);
      FUN_00193720(param_5,local_48);
      if (-1 < local_60) {
        return (ulong *)0x7;
      }
LAB_00191bbc:
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
code_r0x00191d18:
    __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x3c8,
              "_Unwind_Reason_Code __cxxabiv1::__gxx_personality_v0(int, _Unwind_Action, uint64_t, _Unwind_Exception *, _Unwind_Context *)"
              ,"results.reason == _URC_HANDLER_FOUND");
  }
  uStack_104 = 0x127524;
  pcVar14 = "results.reason == _URC_HANDLER_FOUND";
  auVar31 = __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x3db);
  puVar20 = auVar31._0_8_;
  pcStack_b8 = FUN_00191d54;
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
      goto LAB_00192148;
    }
  }
  else if ((auVar31 & (undefined1  [16])0xe) != (undefined1  [16])0x0) {
    return puVar20;
  }
  puStack_f0 = (ulong *)pcVar14;
  puStack_c0 = &stack0xffffffffffffffd0;
  puVar5 = (ulong *)FUN_00193664(lVar9);
  if (puVar5 != (ulong *)0x0) {
    puVar20[2] = (ulong)puVar5;
    puVar6 = (ulong *)FUN_001936f0(lVar9);
    uVar7 = FUN_00193698(lVar9);
    pbStack_d0 = (byte *)((long)puVar5 + 1);
    if ((byte)*puVar5 == 0xff) {
      pbVar28 = (byte *)((long)puVar5 + 2);
      bVar1 = *pbStack_d0;
      uVar8 = uVar7;
    }
    else {
      uVar8 = FUN_00192500(&pbStack_d0,(byte)*puVar5,0);
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
      puVar6 = (ulong *)FUN_00192500(&pbStack_d8,puVar29,0);
      lVar9 = FUN_00192500(&pbStack_d8,puVar29,0);
      puVar5 = (ulong *)FUN_00192500(&pbStack_d8,puVar29,0);
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
        if (puVar5 == (ulong *)0x0) goto LAB_00192144;
        puVar20[3] = (ulong)((long)puVar5 + uVar8);
        if (uVar19 == 0) {
          uVar16 = 6;
          if ((auVar31 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
            uVar16 = 8;
          }
          goto LAB_00192148;
        }
        puVar6 = (ulong *)(ulong)uStack_104;
        uVar8 = uStack_e8 & 0xf;
        pbVar22 = pbVar22 + uVar19 + (uVar17 & 0xffffffff) + -1;
        puStack_100 = puStack_f0 + 4;
        uStack_f4 = 0x1c1dU >> uVar8 & 1;
        uVar7 = 0;
        goto LAB_00191f94;
      }
    } while (puVar6 <= puVar15);
    __cxa_begin_catch(puStack_f0);
    if ((uStack_104 & 1) != 0) {
      do {
        FUN_001763c0(puStack_f0[-7]);
LAB_0019224c:
        __cxa_begin_catch(puStack_f0);
      } while (((ulong)puVar6 & 1) != 0);
    }
                    /* WARNING: Subroutine does not return */
    std::terminate();
  }
LAB_00192144:
  uVar16 = 8;
LAB_00192148:
  *(undefined4 *)(puVar20 + 5) = uVar16;
  return puVar5;
LAB_00191f94:
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
        goto LAB_001921e8;
      }
      lVar9 = FUN_0019100c(puStack_f0);
      puVar10 = puStack_100;
      if (lVar9 == 0x434c4e47432b2b01) {
        puVar10 = (ulong *)puVar15[-0xb];
      }
      if ((puVar10 == (ulong *)0x0) || (puVar15[-10] == 0)) {
LAB_0019226c:
        __cxa_begin_catch(puVar15);
        FUN_001763c0(puVar15[-7]);
        puVar20 = puVar15;
        goto code_r0x00192284;
      }
      puVar5 = (ulong *)FUN_001926ec(uVar17,pbStack_e0,uStack_e8,puVar15[-10],puVar10,puVar15,0);
      param_6 = puVar15;
      uVar19 = uVar7;
      puVar29 = puVar10;
      if (((ulong)puVar5 & 1) != 0) {
        if ((auVar31 & (undefined1  [16])0x1) == (undefined1  [16])0x0) goto code_r0x001922c4;
        *puVar20 = uVar17;
        puVar20[1] = (ulong)pbVar22;
        uVar16 = 6;
        puVar20[4] = (ulong)puVar10;
        goto LAB_00192148;
      }
    }
  }
  else {
    if (pbStack_e0 == (byte *)0x0) goto LAB_0019224c;
    if (0xc < (uint)uVar8) goto LAB_0019224c;
    if (uStack_f4 == 0) goto LAB_0019224c;
    puStack_c8 = (ulong *)(pbStack_e0 + *(long *)(&DAT_0012c528 + uVar8 * 8) * uVar17);
    puVar10 = (ulong *)FUN_00192500(&puStack_c8,uStack_e8,0);
    puVar3 = puStack_f0;
    if (puVar10 == (ulong *)0x0) {
      puVar10 = puVar29;
      if ((auVar31 & (undefined1  [16])0xd) != (undefined1  [16])0x0) {
        *puVar20 = uVar17;
        puVar20[1] = (ulong)pbVar22;
LAB_001921e8:
        puVar6 = puStack_f0;
        puVar5 = (ulong *)FUN_0019100c(puStack_f0);
        if (puVar5 == (ulong *)0x434c4e47432b2b01) {
          puStack_100 = (ulong *)puVar6[-0xb];
        }
        puVar20[4] = (ulong)puStack_100;
        uVar16 = 6;
        goto LAB_00192148;
      }
code_r0x00192284:
      __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x2ec,
                "void __cxxabiv1::scan_eh_tab(scan_results &, _Unwind_Action, bool, _Unwind_Exception *, _Unwind_Context *)"
                ,"actions & (_UA_SEARCH_PHASE | _UA_HANDLER_FRAME | _UA_FORCE_UNWIND)");
code_r0x001922a4:
      __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x306,
                "void __cxxabiv1::scan_eh_tab(scan_results &, _Unwind_Action, bool, _Unwind_Exception *, _Unwind_Context *)"
                ,"actions & (_UA_SEARCH_PHASE | _UA_FORCE_UNWIND)");
code_r0x001922c4:
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
      uVar7 = FUN_00191018(lVar9);
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
      FUN_00176374(uVar21);
      __cxa_begin_catch();
      if ((uVar7 & 1) == 0) goto LAB_0019246c;
      pbStack_178 = pbVar22 + 1;
      FUN_00192500(&pbStack_178,*pbVar22,uVar24);
      bVar1 = *pbStack_178;
      if (bVar1 != 0xff) goto LAB_00192388;
      do {
        FUN_001763c0(uVar11);
        pbStack_178 = extraout_x9;
LAB_00192388:
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
      bVar4 = FUN_00191018(lVar30 + 0x60);
      if ((bVar4 & lVar30 != lVar27) == 1) {
        uVar21 = *(undefined8 *)(lVar30 + 0x10);
        lVar27 = FUN_0019100c(lVar30 + 0x60);
        if (lVar27 == 0x434c4e47432b2b01) {
          lVar27 = *(long *)(lVar30 + 8);
        }
        else {
          lVar27 = lVar30 + 0x80;
        }
        uVar7 = FUN_001926ec(uVar26,pbVar23 + uVar8,bVar1,uVar21,lVar27,lVar9,uVar24);
        if ((uVar7 & 1) == 0) {
          lVar9 = plVar12[1];
          *(int *)(lVar30 + 0x38) = -*(int *)(lVar30 + 0x38);
          *(int *)(plVar12 + 1) = (int)lVar9 + 1;
          __cxa_end_catch();
          __cxa_end_catch();
          __cxa_begin_catch(lVar30 + 0x60);
          uVar21 = __cxa_rethrow();
          std::bad_exception::~bad_exception((bad_exception *)&puStack_180);
          __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
          FUN_001934ec(uVar21);
        }
      }
      pbVar22 = PTR_vtable_001a1308;
      puStack_180 = PTR_vtable_001a1308 + 0x10;
      uVar26 = FUN_001926ec(uVar26,pbVar23 + uVar8,bVar1,PTR_PTR_001a1310,&puStack_180,lVar9,uVar24)
      ;
      if ((uVar26 & 1) != 0) {
        std::bad_exception::~bad_exception((bad_exception *)&puStack_180);
LAB_0019246c:
        __cxa_end_catch();
        FUN_001763c0(uVar11);
      }
      __cxa_end_catch();
      puVar13 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar13 = pbVar22 + 0x10;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar13,PTR_PTR_001a1310,PTR__bad_exception_001a12e8);
    }
    puVar5 = puVar10;
    if (((ulong)puVar6 & 1) != 0) {
      lVar9 = FUN_0019100c(puStack_f0);
      puStack_c8 = puStack_100;
      if (lVar9 == 0x434c4e47432b2b01) {
        puStack_c8 = (ulong *)puVar3[-0xb];
      }
      if ((puStack_c8 == (ulong *)0x0) || (puVar3[-10] == 0)) {
        __cxa_begin_catch(puVar3);
        FUN_001763c0(puVar3[-7]);
        puVar15 = param_6;
        puVar6 = puVar3;
        goto LAB_0019226c;
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
        goto code_r0x001922a4;
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
  if ((uVar17 | uVar18) == 0) goto LAB_00192184;
  pbVar22 = pbVar23 + (uVar17 | uVar18);
  uVar7 = uVar19;
  goto LAB_00191f94;
LAB_00192184:
  uVar16 = 6;
  if (((uint)uVar19 & (uVar25 & 2) >> 1) == 0) {
    uVar16 = 8;
  }
  goto LAB_00192148;
}


// ===== 00191d54  FUN_00191d54 =====

void FUN_00191d54(ulong *param_1,uint param_2,uint param_3,ulong *param_4,undefined8 param_5,
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
      goto LAB_00192148;
    }
  }
  else if ((param_2 & 0xe) != 0) {
    return;
  }
  local_90 = param_4;
  pcVar4 = (char *)FUN_00193664(param_5);
  if (pcVar4 != (char *)0x0) {
    param_1[2] = (ulong)pcVar4;
    local_a4 = param_3;
    puVar5 = (ulong *)FUN_001936f0(param_5);
    uVar6 = FUN_00193698(param_5);
    local_70 = (byte *)(pcVar4 + 1);
    if (*pcVar4 == -1) {
      pbVar23 = (byte *)(pcVar4 + 2);
      bVar1 = *local_70;
      uVar7 = uVar6;
    }
    else {
      uVar7 = FUN_00192500(&local_70,*pcVar4,0);
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
      puVar5 = (ulong *)FUN_00192500(&local_78,puVar24,0);
      lVar8 = FUN_00192500(&local_78,puVar24,0);
      lVar9 = FUN_00192500(&local_78,puVar24,0);
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
        if (lVar9 == 0) goto LAB_00192144;
        param_1[3] = lVar9 + uVar7;
        if (uVar17 != 0) {
          puVar5 = (ulong *)(ulong)local_a4;
          uVar7 = local_88 & 0xf;
          pbVar18 = pbVar18 + uVar17 + (uVar15 & 0xffffffff) + -1;
          local_a0 = local_90 + 4;
          local_94 = 0x1c1dU >> uVar7 & 1;
          uVar6 = 0;
          goto LAB_00191f94;
        }
        uVar14 = 6;
        if ((param_2 & 1) != 0) {
          uVar14 = 8;
        }
        goto LAB_00192148;
      }
    } while (puVar5 <= puVar13);
    __cxa_begin_catch(local_90);
    if ((local_a4 & 1) != 0) {
      do {
        FUN_001763c0(local_90[-7]);
LAB_0019224c:
        __cxa_begin_catch(local_90);
      } while (((ulong)puVar5 & 1) != 0);
    }
                    /* WARNING: Subroutine does not return */
    std::terminate();
  }
LAB_00192144:
  uVar14 = 8;
  goto LAB_00192148;
LAB_00191f94:
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
        goto LAB_001921e8;
      }
      lVar8 = FUN_0019100c(local_90);
      puVar10 = local_a0;
      if (lVar8 == 0x434c4e47432b2b01) {
        puVar10 = (ulong *)puVar13[-0xb];
      }
      if ((puVar10 == (ulong *)0x0) || (puVar13[-10] == 0)) {
LAB_0019226c:
        __cxa_begin_catch(puVar13);
        FUN_001763c0(puVar13[-7]);
        param_1 = puVar13;
        goto code_r0x00192284;
      }
      uVar16 = FUN_001926ec(uVar15,local_80,local_88,puVar13[-10],puVar10,puVar13,0);
      param_6 = puVar13;
      uVar17 = uVar6;
      puVar24 = puVar10;
      if ((uVar16 & 1) != 0) {
        if ((param_2 & 1) == 0) goto code_r0x001922c4;
        *param_1 = uVar15;
        param_1[1] = (ulong)pbVar18;
        uVar14 = 6;
        param_1[4] = (ulong)puVar10;
        goto LAB_00192148;
      }
    }
  }
  else {
    if (local_80 == (byte *)0x0) goto LAB_0019224c;
    if (0xc < (uint)uVar7) goto LAB_0019224c;
    if (local_94 == 0) goto LAB_0019224c;
    local_68 = (ulong *)(local_80 + *(long *)(&DAT_0012c528 + uVar7 * 8) * uVar15);
    puVar10 = (ulong *)FUN_00192500(&local_68,local_88,0);
    puVar2 = local_90;
    if (puVar10 == (ulong *)0x0) {
      puVar10 = puVar24;
      if ((param_2 & 0xd) != 0) {
        *param_1 = uVar15;
        param_1[1] = (ulong)pbVar18;
LAB_001921e8:
        puVar5 = local_90;
        lVar8 = FUN_0019100c(local_90);
        if (lVar8 == 0x434c4e47432b2b01) {
          local_a0 = (ulong *)puVar5[-0xb];
        }
        param_1[4] = (ulong)local_a0;
        uVar14 = 6;
        goto LAB_00192148;
      }
code_r0x00192284:
      __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x2ec,
                "void __cxxabiv1::scan_eh_tab(scan_results &, _Unwind_Action, bool, _Unwind_Exception *, _Unwind_Context *)"
                ,"actions & (_UA_SEARCH_PHASE | _UA_HANDLER_FRAME | _UA_FORCE_UNWIND)");
code_r0x001922a4:
      __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x306,
                "void __cxxabiv1::scan_eh_tab(scan_results &, _Unwind_Action, bool, _Unwind_Exception *, _Unwind_Context *)"
                ,"actions & (_UA_SEARCH_PHASE | _UA_FORCE_UNWIND)");
code_r0x001922c4:
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
      uVar6 = FUN_00191018(lVar8);
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
      FUN_00176374(uVar22);
      __cxa_begin_catch();
      if ((uVar6 & 1) == 0) goto LAB_0019246c;
      pbStack_118 = pbVar18 + 1;
      FUN_00192500(&pbStack_118,*pbVar18,uVar20);
      bVar1 = *pbStack_118;
      if (bVar1 != 0xff) goto LAB_00192388;
      do {
        FUN_001763c0(uVar11);
        pbStack_118 = extraout_x9;
LAB_00192388:
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
      bVar3 = FUN_00191018(lVar25 + 0x60);
      if ((bVar3 & lVar25 != lVar9) == 1) {
        uVar22 = *(undefined8 *)(lVar25 + 0x10);
        lVar9 = FUN_0019100c(lVar25 + 0x60);
        if (lVar9 == 0x434c4e47432b2b01) {
          lVar9 = *(long *)(lVar25 + 8);
        }
        else {
          lVar9 = lVar25 + 0x80;
        }
        uVar6 = FUN_001926ec(uVar21,pbVar19 + uVar7,bVar1,uVar22,lVar9,lVar8,uVar20);
        if ((uVar6 & 1) == 0) {
          lVar8 = plVar12[1];
          *(int *)(lVar25 + 0x38) = -*(int *)(lVar25 + 0x38);
          *(int *)(plVar12 + 1) = (int)lVar8 + 1;
          __cxa_end_catch();
          __cxa_end_catch();
          __cxa_begin_catch(lVar25 + 0x60);
          uVar22 = __cxa_rethrow();
          std::bad_exception::~bad_exception((bad_exception *)&puStack_120);
          __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
          FUN_001934ec(uVar22);
        }
      }
      pbVar18 = PTR_vtable_001a1308;
      puStack_120 = PTR_vtable_001a1308 + 0x10;
      uVar21 = FUN_001926ec(uVar21,pbVar19 + uVar7,bVar1,PTR_PTR_001a1310,&puStack_120,lVar8,uVar20)
      ;
      if ((uVar21 & 1) != 0) {
        std::bad_exception::~bad_exception((bad_exception *)&puStack_120);
LAB_0019246c:
        __cxa_end_catch();
        FUN_001763c0(uVar11);
      }
      __cxa_end_catch();
      plVar12 = (long *)__cxa_allocate_exception(8);
      *plVar12 = (long)(pbVar18 + 0x10);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(plVar12,PTR_PTR_001a1310,PTR__bad_exception_001a12e8);
    }
    if (((ulong)puVar5 & 1) != 0) {
      lVar8 = FUN_0019100c(local_90);
      local_68 = local_a0;
      if (lVar8 == 0x434c4e47432b2b01) {
        local_68 = (ulong *)puVar2[-0xb];
      }
      if ((local_68 == (ulong *)0x0) || (puVar2[-10] == 0)) {
        __cxa_begin_catch(puVar2);
        FUN_001763c0(puVar2[-7]);
        puVar13 = param_6;
        puVar5 = puVar2;
        goto LAB_0019226c;
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
        goto code_r0x001922a4;
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
  if ((uVar15 | uVar16) == 0) goto LAB_00192184;
  pbVar18 = pbVar19 + (uVar15 | uVar16);
  uVar6 = uVar17;
  goto LAB_00191f94;
LAB_00192184:
  uVar14 = 6;
  if (((uint)uVar17 & (param_2 & 2) >> 1) == 0) {
    uVar14 = 8;
  }
LAB_00192148:
  *(undefined4 *)(param_1 + 5) = uVar14;
  return;
}


// ===== 001922e0  __cxa_call_unexpected =====

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
  uVar4 = FUN_00191018(param_1);
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
                    /* try { // try from 00192350 to 00192353 has its CatchHandler @ 00192354 */
  FUN_00176374(uVar9);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00192350 with catch @ 00192354
                        */
  __cxa_begin_catch();
  if ((uVar4 & 1) != 0) {
    local_68 = unaff_x24 + 1;
                    /* try { // try from 00192364 to 0019236f has its CatchHandler @ 001924ec */
    FUN_00192500(&local_68,*unaff_x24,uVar7);
    bVar1 = *local_68;
    if (bVar1 != 0xff) goto LAB_00192388;
    do {
      FUN_001763c0(uVar5);
      local_68 = extraout_x9;
LAB_00192388:
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
                    /* try { // try from 001923b0 to 001923b3 has its CatchHandler @ 001924e8 */
      plVar6 = (long *)__cxa_get_globals_fast();
      lVar13 = *plVar6;
    } while (lVar13 == 0);
                    /* try { // try from 001923c0 to 001923c7 has its CatchHandler @ 001924e4 */
    bVar3 = FUN_00191018(lVar13 + 0x60);
    if ((bVar3 & lVar13 != lVar8) == 1) {
      uVar9 = *(undefined8 *)(lVar13 + 0x10);
                    /* try { // try from 001923e0 to 00192427 has its CatchHandler @ 001924e0 */
      lVar8 = FUN_0019100c(lVar13 + 0x60);
      if (lVar8 == 0x434c4e47432b2b01) {
        lVar8 = *(long *)(lVar13 + 8);
      }
      else {
        lVar8 = lVar13 + 0x80;
      }
      uVar4 = FUN_001926ec(unaff_x22,pbVar11 + uVar10,bVar1,uVar9,lVar8,param_1,uVar7);
      if ((uVar4 & 1) == 0) {
        lVar8 = plVar6[1];
        *(int *)(lVar13 + 0x38) = -*(int *)(lVar13 + 0x38);
        *(int *)(plVar6 + 1) = (int)lVar8 + 1;
                    /* try { // try from 001924bc to 001924cf has its CatchHandler @ 001924e0 */
        __cxa_end_catch();
        __cxa_end_catch();
        __cxa_begin_catch(lVar13 + 0x60);
        uVar9 = __cxa_rethrow();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0019243c with catch @ 001924d0
                       catch(type#1 @ 00000000) { ... } // from try @ 00192478 with catch @ 001924d0
                       catch(type#1 @ 00000000) { ... } // from try @ 0019248c with catch @ 001924d0
                        */
        std::bad_exception::~bad_exception((bad_exception *)&local_70);
                    /* try { // try from 001924f0 to 001924f3 has its CatchHandler @ 001924fc */
        __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
        FUN_001934ec(uVar9);
      }
    }
    unaff_x24 = PTR_vtable_001a1308;
    local_70 = PTR_vtable_001a1308 + 0x10;
                    /* try { // try from 0019243c to 0019245f has its CatchHandler @ 001924d0 */
    uVar4 = FUN_001926ec(unaff_x22,pbVar11 + uVar10,bVar1,PTR_PTR_001a1310,&local_70,param_1,uVar7);
    if ((uVar4 & 1) == 0) goto LAB_00192478;
    std::bad_exception::~bad_exception((bad_exception *)&local_70);
  }
  __cxa_end_catch();
  FUN_001763c0(uVar5);
LAB_00192478:
                    /* try { // try from 00192478 to 0019247b has its CatchHandler @ 001924d0 */
  __cxa_end_catch();
  plVar6 = (long *)__cxa_allocate_exception(8);
  *plVar6 = (long)(unaff_x24 + 0x10);
                    /* try { // try from 0019248c to 0019249f has its CatchHandler @ 001924d0 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(plVar6,PTR_PTR_001a1310,PTR__bad_exception_001a12e8);
}


// ===== 00192500  FUN_00192500 =====

undefined8 * FUN_00192500(undefined8 *param_1,uint param_2,long param_3)

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
      if (uVar1 == 0) goto LAB_0019261c;
      if (uVar1 != 1) goto LAB_001926e8;
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
      if (uVar1 != 3) goto LAB_001926e8;
      puVar4 = (undefined8 *)(ulong)(uint)*puVar5;
joined_r0x001925b8:
      puVar7 = (ulong *)((long)puVar5 + 4);
    }
  }
  else if (uVar1 < 10) {
    if (uVar1 == 4) goto LAB_0019261c;
    if (uVar1 != 9) goto LAB_001926e8;
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
      goto joined_r0x001925b8;
    }
    if (uVar1 != 0xc) goto LAB_001926e8;
LAB_0019261c:
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
LAB_001926e8:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (puVar4 == (undefined8 *)0x0) goto LAB_00192684;
      puVar4 = (undefined8 *)((long)puVar4 + param_3);
    }
    else {
      if (uVar1 != 1) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (puVar4 == (undefined8 *)0x0) goto LAB_00192684;
      puVar4 = (undefined8 *)((long)puVar4 + (long)puVar5);
    }
  }
  if ((puVar4 != (undefined8 *)0x0) && ((param_2 >> 7 & 1) != 0)) {
    puVar4 = (undefined8 *)*puVar4;
    *param_1 = puVar7;
    return puVar4;
  }
LAB_00192684:
  *param_1 = puVar7;
  return puVar4;
}


// ===== 001926ec  FUN_001926ec =====

bool FUN_001926ec(ulong param_1,long param_2,ulong param_3,undefined8 param_4,long param_5,
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
LAB_00192800:
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
      FUN_001763c0(*(undefined8 *)(param_6 + -0x38));
      goto LAB_00192800;
    }
    local_68 = param_2 + *(long *)(&DAT_0012c528 + uVar7 * 8) * uVar6;
    plVar2 = (long *)FUN_00192500(&local_68,param_3 & 0xffffffff,param_7);
    local_68 = param_5;
    uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_4,&local_68);
    uVar4 = 0;
    uVar5 = 0;
  } while ((uVar3 & 1) == 0);
  return uVar6 == 0;
}


// ===== 0019280c  __emutls_get_address =====

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
    pthread_once((pthread_once_t *)&DAT_001a6c08,FUN_00192a34);
    pthread_mutex_lock((pthread_mutex_t *)&DAT_001a6c18);
    sVar3 = param_1[2];
    if (sVar3 == 0) {
      sVar3 = DAT_001a6c10 + 1;
      DAT_001a6c10 = sVar3;
      param_1[2] = sVar3;
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_001a6c18);
    __ptr = (undefined8 *)pthread_getspecific(DAT_001a6c04);
    if (__ptr == (undefined8 *)0x0) goto LAB_001928ec;
LAB_00192840:
    uVar2 = __ptr[1];
    if (sVar3 <= uVar2) goto LAB_00192934;
    lVar4 = (sVar3 + 0x11 & 0xfffffffffffffff0) - 2;
    __ptr = (undefined8 *)realloc(__ptr,lVar4 * 8 + 0x10);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    memset(__ptr + uVar2 + 2,0,(lVar4 - uVar2) * 8);
  }
  else {
    __ptr = (undefined8 *)pthread_getspecific(DAT_001a6c04);
    if (__ptr != (undefined8 *)0x0) goto LAB_00192840;
LAB_001928ec:
    lVar4 = (sVar3 + 0x11 & 0xfffffffffffffff0) - 2;
    __ptr = (undefined8 *)malloc(lVar4 * 8 + 0x10);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    memset(__ptr + 2,0,lVar4 * 8);
    *__ptr = 1;
  }
  __key = DAT_001a6c04;
  __ptr[1] = lVar4;
  pthread_setspecific(__key,__ptr);
LAB_00192934:
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


// ===== 001929f8  FUN_001929f8 =====

ulong FUN_001929f8(ulong param_1)

{
  uint uVar1;
  
  if (DAT_001a6c00 == '\x01') {
    uVar1 = pthread_key_delete(DAT_001a6c04);
    param_1 = (ulong)uVar1;
    DAT_001a6c00 = '\0';
  }
  return param_1;
}


// ===== 00192a34  FUN_00192a34 =====

void FUN_00192a34(void)

{
  int iVar1;
  
  iVar1 = pthread_key_create(&DAT_001a6c04,FUN_00192a70);
  if (iVar1 == 0) {
    DAT_001a6c00 = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00192a70  FUN_00192a70 =====

long * FUN_00192a70(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*param_1 != 0) {
    *param_1 = *param_1 + -1;
    uVar1 = pthread_setspecific(DAT_001a6c04,param_1);
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


// ===== 00192b00  FUN_00192b00 =====

long FUN_00192b00(long param_1,long param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_001a6c40 != '\0') {
    lVar3 = *param_3;
    if (lVar3 == param_1) {
      *param_3 = param_2;
    }
    return lVar3;
  }
  do {
    lVar3 = *param_3;
    if (lVar3 != param_1) {
      return lVar3;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_3,0x10);
    if (bVar2) {
      *param_3 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return lVar3;
}


// ===== 00192b34  _INIT_0 =====

void _INIT_0(void)

{
  uint uVar1;
  int iVar2;
  char acStack_6c [92];
  
  uVar1 = getauxval(0x10);
  if ((uVar1 >> 8 & 1) == 0) {
    DAT_001a6c40 = 0;
    return;
  }
  iVar2 = __system_property_get("ro.arch",acStack_6c);
  if (0 < iVar2) {
    iVar2 = strncmp(acStack_6c,"exynos9810",10);
    DAT_001a6c40 = iVar2 != 0;
    return;
  }
  DAT_001a6c40 = 1;
  return;
}


// ===== 00192bcc  FUN_00192bcc =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00192bcc(ulong param_1,long param_2)

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
    DAT_001a6c48 = DAT_001a6c48 | 0x400;
  }
  uVar2 = (uint)uVar4;
  if ((uVar3 >> 4 & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x8000;
  }
  if ((uVar3 >> 0x1b & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 2;
  }
  if ((uVar2 >> 7 & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 6;
  }
  if ((~uVar3 & 0xc0000) == 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x20;
  }
  if ((uVar3 >> 0x14 & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x10;
  }
  if ((uVar3 >> 0x17 & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 8;
  }
  if ((uVar3 >> 9 & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x10100;
  }
  if ((uVar3 >> 0x18 & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x20000;
  }
  if ((uVar3 >> 0xc & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x40;
  }
  if ((uVar3 >> 0x1a & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x800000;
  }
  if ((uVar3 >> 3 & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x4000;
  }
  if ((uVar3 >> 5 & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x800;
  }
  if ((uVar3 >> 6 & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x1000;
  }
  if ((uVar3 >> 0xd & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x100000;
  }
  if ((uVar3 >> 0xe & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x200000;
  }
  if ((uVar3 >> 0x1d & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x400000000000;
  }
  if ((uVar3 >> 0x1c & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x2000000000000;
  }
  if ((uVar2 >> 0x12 & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x180000000000;
  }
  if ((uVar2 >> 0x16 & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x380000000000;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x2000000000;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x6000000000;
  }
  if ((uVar2 >> 4 & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x8000000000;
  }
  if ((uVar2 >> 5 & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x10000000000;
  }
  if ((uVar2 >> 6 & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x20000000000;
  }
  if ((uVar4 & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x80000;
  }
  if ((uVar3 >> 8 & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x80;
  }
  if ((uVar2 >> 0x10 & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 1;
  }
  if ((uVar2 >> 0xd & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x4000000;
  }
  if ((uVar4 >> 0x20 & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x10000000;
  }
  if ((uVar4 >> 0x21 & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x100000000;
  }
  if ((uVar2 >> 0xf & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x2000000;
  }
  if ((uVar2 >> 8 & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x1000000;
  }
  if ((uVar2 >> 9 & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x200000000;
  }
  if ((uVar2 >> 10 & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x400000000;
  }
  if ((uVar2 >> 0xb & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x800000000;
  }
  if ((uVar2 >> 0x11 & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x4000000000000;
  }
  if ((uVar2 >> 0x15 & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x20000000;
  }
  if ((int)uVar2 < 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x40000000000000;
  }
  if ((uVar2 >> 0x17 & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x40000000000;
  }
  if ((uVar2 >> 0x18 & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x100000000000000;
  }
  if ((uVar2 >> 0x19 & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x80000000000000;
  }
  if ((uVar4 >> 0x2b & 1) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x800000000000000;
  }
  if ((uVar3 >> 0xb & 1) == 0) {
    if ((param_1 & 0x201) != 0) {
      DAT_001a6c48 = DAT_001a6c48 | 0x300;
    }
    if ((uVar4 & 1) != 0 || (param_1 & 0x10000) != 0) {
      DAT_001a6c48 = DAT_001a6c48 | 0x40000;
    }
    if ((param_1 & 0x4008000) != 0) {
      DAT_001a6c48 = DAT_001a6c48 | 0x400000;
    }
    if ((uVar4 & 0x100004000) != 0) {
      DAT_001a6c48 = DAT_001a6c48 | 0x8000000;
    }
    uVar5 = DAT_001a6c48 | (ulong)(uVar2 << 0x13) & 0x80000000;
    if ((uVar4 & 2) != 0 && (param_1 & 0x400000) != 0) {
      uVar5 = uVar5 | 0x1000000000;
    }
    uVar5 = uVar5 | (param_1 & 0x20000) >> 4;
    goto LAB_00192d34;
  }
  uVar4 = id_aa64pfr1_el1;
  if ((uVar4 & 0xf00) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x80000000000;
  }
  if ((uVar4 & 0xf0) == 0x10) {
    DAT_001a6c48 = DAT_001a6c48 | 0x1000000000000;
    if ((uVar4 & 0xf000000) != 0x2000000) goto LAB_00193024;
LAB_00193078:
    DAT_001a6c48 = DAT_001a6c48 | 0x200000000000000;
    uVar4 = id_aa64pfr0_el1;
    uVar3 = (uint)uVar4;
  }
  else {
    if ((uVar4 & 0xf000000) == 0x2000000) goto LAB_00193078;
LAB_00193024:
    uVar4 = id_aa64pfr0_el1;
    uVar3 = (uint)uVar4;
  }
  if ((~uVar3 & 0xf0000) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x300;
  }
  if ((uVar4 & 0xf00000000) != 0) {
    uVar4 = UnkSytemRegRead(3,0,0,4,4);
    if ((uVar4 & 0xf) == 1) {
      DAT_001a6c48 = DAT_001a6c48 | 0x1000000000;
    }
    else if ((uVar4 & 0xf) == 0) {
      DAT_001a6c48 = DAT_001a6c48 | 0x40000000;
    }
    if ((uVar4 & 0xf00000) != 0) {
      DAT_001a6c48 = DAT_001a6c48 | 0x80000000;
    }
  }
  uVar4 = id_aa64isar0_el1;
  if ((uVar4 & 0xf00000000) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x2000;
  }
  uVar4 = id_aa64isar1_el1;
  uVar5 = uVar4 >> 0x14 & 0xf;
  if ((uVar4 & 0xf) != 0) {
    DAT_001a6c48 = DAT_001a6c48 | 0x40000;
  }
  if (uVar5 != 0) {
    if (uVar5 == 3) {
      DAT_001a6c48 = DAT_001a6c48 | 0x400000000400000;
    }
    else {
      DAT_001a6c48 = DAT_001a6c48 | 0x400000;
    }
  }
  uVar5 = DAT_001a6c48 | 0x800000000000;
  if ((uVar4 & 0xf0000000000) != 0x20000000000) {
    uVar5 = DAT_001a6c48;
  }
  if ((uVar4 & 0xf00000000000) != 0) {
    uVar5 = uVar5 | 0x8000000;
  }
  if (uVar4 >> 0x3c != 0) {
    if (uVar4 >> 0x3d == 0) {
      DAT_001a6c48 = uVar5 | 0x8008000000000000;
      return;
    }
    uVar1 = 0x38000000000000;
    if (uVar4 >> 0x3c < 3) {
      uVar1 = 0x18000000000000;
    }
    DAT_001a6c48 = uVar5 | uVar1 | 0x8000000000000000;
    return;
  }
LAB_00192d34:
  DAT_001a6c48 = uVar5 | 0x8000000000000000;
  return;
}


// ===== 00193168  _INIT_1 =====

void _INIT_1(void)

{
  int iVar1;
  ulong uVar2;
  char local_70 [8];
  ulong uStack_68;
  undefined8 local_60;
  
  if (DAT_001a6c48 != 0) {
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
    FUN_00192bcc(uVar2 | 0x4000000000000000,local_70);
  }
  return;
}


// ===== 00193200  FUN_00193200 =====

undefined8 FUN_00193200(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  
  if (DAT_001a6c40 == '\0') {
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


// ===== 00193230  FUN_00193230 =====

int FUN_00193230(int param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  if (DAT_001a6c40 == '\0') {
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


// ===== 00193260  FUN_00193260 =====

long FUN_00193260(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_001a6c40 == '\0') {
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


// ===== 00193290  FUN_00193290 =====

long FUN_00193290(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_001a6c40 == '\0') {
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


// ===== 001932c0  FUN_001932c0 =====

undefined8 FUN_001932c0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_4f0 [624];
  undefined1 auStack_280 [528];
  undefined8 local_70;
  undefined1 auStack_68 [24];
  code *local_50;
  
  FUN_001972dc(auStack_280);
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00193730(auStack_4f0,auStack_280);
  iVar1 = FUN_00193940(auStack_4f0);
  while( true ) {
    if (iVar1 == 0) {
      return 5;
    }
    if ((iVar1 < 0) || (iVar1 = FUN_00193968(auStack_4f0,auStack_68), iVar1 != 0)) break;
    if ((local_50 != (code *)0x0) &&
       (iVar1 = (*local_50)(1,1,*param_1,param_1,auStack_4f0), iVar1 != 8)) {
      if (iVar1 != 6) {
        return 3;
      }
      FUN_001937d8(auStack_4f0,0xfffffffe,&local_70);
      param_1[3] = local_70;
      uVar2 = FUN_001933b8(auStack_280,auStack_4f0,param_1);
      return uVar2;
    }
    iVar1 = FUN_00193940(auStack_4f0);
  }
  return 3;
}


// ===== 001933b8  FUN_001933b8 =====

undefined8 FUN_001933b8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_80 [24];
  code *local_68;
  long local_38;
  
  FUN_00193730(param_2,param_1);
  iVar2 = FUN_00193954(param_2);
  while( true ) {
    if (iVar2 == 0) {
      return 5;
    }
    if (iVar2 < 0) break;
    FUN_001937d8(param_2,0xfffffffe,&local_38);
    iVar2 = FUN_00193968(param_2,auStack_80);
    if (iVar2 != 0) {
      return 2;
    }
    if (local_68 != (code *)0x0) {
      uVar3 = 6;
      if (local_38 != param_3[3]) {
        uVar3 = 2;
      }
      iVar2 = (*local_68)(1,uVar3,*param_3,param_3,param_2);
      puVar1 = PTR___sF_001a11d8;
      if (iVar2 != 8) {
        if (iVar2 != 7) {
          return 2;
        }
        FUN_001939a8(param_2);
        return 2;
      }
      if (local_38 == param_3[3]) {
        fprintf((FILE *)(PTR___sF_001a11d8 + 0x130),"libunwind: %s - %s\n","unwind_phase2",
                "during phase1 personality function said it would stop here, but now in phase2 it did not stop here"
               );
        fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    iVar2 = FUN_00193954(param_2);
  }
  return 2;
}


// ===== 001934ec  FUN_001934ec =====

void FUN_001934ec(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_4a0 [624];
  undefined1 auStack_230 [528];
  
  FUN_001972dc(auStack_230);
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_001933b8(auStack_230,auStack_4a0,param_1);
  }
  else {
    FUN_00193570(auStack_230,auStack_4a0,param_1,*(long *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = PTR___sF_001a11d8;
  fprintf((FILE *)(PTR___sF_001a11d8 + 0x130),"libunwind: %s - %s\n","_Unwind_Resume",
          "_Unwind_Resume() can\'t return");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00193570  FUN_00193570 =====

void FUN_00193570(undefined8 param_1,undefined8 param_2,undefined8 *param_3,code *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined1 auStack_78 [24];
  code *local_60;
  
  FUN_00193730(param_2,param_1);
  iVar1 = FUN_00193954(param_2);
  while( true ) {
    if (iVar1 < 1) {
      (*param_4)(1,0x1a,*param_3,param_3,param_2,param_5);
      return;
    }
    iVar1 = FUN_00193968(param_2,auStack_78);
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
      FUN_001939a8(param_2);
    }
    iVar1 = FUN_00193954(param_2);
  }
  return;
}


// ===== 00193664  FUN_00193664 =====

undefined8 FUN_00193664(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_58 [16];
  undefined8 local_48;
  
  iVar1 = FUN_00193968(param_1,auStack_58);
  if (iVar1 != 0) {
    local_48 = 0;
  }
  return local_48;
}


// ===== 00193698  FUN_00193698 =====

undefined8 FUN_00193698(undefined8 param_1)

{
  int iVar1;
  undefined8 local_58 [9];
  
  iVar1 = FUN_00193968(param_1,local_58);
  if (iVar1 != 0) {
    local_58[0] = 0;
  }
  return local_58[0];
}


// ===== 001936cc  FUN_001936cc =====

void FUN_001936cc(long param_1)

{
  if (*(code **)(param_1 + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001936e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 8))(1,param_1);
    return;
  }
  return;
}


// ===== 001936e8  thunk_FUN_00193854 =====

void thunk_FUN_00193854(void)

{
  FUN_00193854();
  return;
}


// ===== 001936f0  FUN_001936f0 =====

undefined8 FUN_001936f0(undefined8 param_1)

{
  undefined8 local_18;
  
  FUN_001937d8(param_1,0xffffffff,&local_18);
  return local_18;
}


// ===== 00193720  FUN_00193720 =====

void FUN_00193720(undefined8 param_1,undefined8 param_2)

{
  FUN_00193854(param_1,0xffffffff,param_2);
  return;
}


// ===== 00193730  FUN_00193730 =====

undefined8 FUN_00193730(undefined8 *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = &PTR_FUN_001a0ea8;
  param_1[1] = &DAT_001a6c50;
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
  FUN_001941f8(param_1,0);
  return 0;
}


// ===== 001937d8  FUN_001937d8 =====

undefined8 FUN_001937d8(long *param_1,undefined4 param_2,undefined8 *param_3)

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


// ===== 00193854  FUN_00193854 =====

undefined8 FUN_00193854(long *param_1,int param_2,undefined8 param_3)

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


// ===== 00193940  FUN_00193940 =====

void FUN_00193940(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00193950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,0);
  return;
}


// ===== 00193954  FUN_00193954 =====

void FUN_00193954(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00193964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,1);
  return;
}


// ===== 00193968  FUN_00193968 =====

undefined4 FUN_00193968(long *param_1,long param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x48))();
  uVar1 = 0xffffe66b;
  if (*(long *)(param_2 + 8) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 001939a8  FUN_001939a8 =====

undefined8 FUN_001939a8(long *param_1)

{
  (**(code **)(*param_1 + 0x50))();
  return 0xffffe674;
}


// ===== 001939d0  FUN_001939d0 =====

char * FUN_001939d0(undefined8 param_1,uint *param_2,undefined8 *param_3,long *param_4,ulong param_5
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
      pcVar7 = (char *)FUN_00193b60(param_1,lVar8,param_4);
      if (pcVar7 != (char *)0x0) {
        return pcVar7;
      }
    }
    else if (*param_4 != lVar8) {
      return "CIE start does not match";
    }
    lVar8 = (long)puVar10 + uVar9;
    local_48 = puVar10 + 1;
    lVar3 = FUN_001959b8(param_1,&local_48,lVar8,(char)param_4[3],0);
    lVar4 = FUN_001959b8(param_1,&local_48,lVar8,*(byte *)(param_4 + 3) & 0xf,0);
    cVar1 = *(char *)((long)param_4 + 0x31);
    param_3[5] = 0;
    puVar10 = local_48;
    if (cVar1 != '\0') {
      lVar5 = FUN_00195d44(&local_48,lVar8);
      puVar2 = local_48;
      puVar10 = (uint *)((long)local_48 + lVar5);
      if ((*(byte *)((long)param_4 + 0x19) != 0xff) &&
         (lVar5 = FUN_001959b8(param_1,&local_48,lVar8,*(byte *)((long)param_4 + 0x19) & 0xf,0),
         lVar5 != 0)) {
        local_48 = puVar2;
        uVar6 = FUN_001959b8(param_1,&local_48,lVar8,*(undefined1 *)((long)param_4 + 0x19),0);
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


// ===== 00193b60  FUN_00193b60 =====

char * FUN_00193b60(undefined8 param_1,uint *param_2,long *param_3)

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
      uVar7 = FUN_00195d44(&local_48,pbVar1);
      uVar13 = 0;
      uVar14 = 0;
      *(undefined4 *)(param_3 + 5) = uVar7;
      puVar5 = PTR___sF_001a11d8;
      pbVar11 = local_48;
      pbVar15 = local_48;
      do {
        pbVar12 = pbVar11;
        if (pbVar15 == pbVar1) {
          fprintf((FILE *)(PTR___sF_001a11d8 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
        uVar6 = FUN_00195d44(&local_48,pbVar1);
        *(undefined1 *)((long)param_3 + 0x32) = uVar6;
        bVar2 = *pbVar18;
      }
      if (bVar2 == 0x7a) {
        FUN_00195d44(&local_48,pbVar1);
LAB_00193ce0:
        bVar2 = *pbVar18;
        if (bVar2 < 0x50) {
          if (bVar2 < 0x47) {
            if (bVar2 != 0x42) {
              if (bVar2 != 0) goto LAB_00193d80;
              goto LAB_00193dc4;
            }
            *(undefined1 *)((long)param_3 + 0x33) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_00193ce0;
          }
          if (bVar2 == 0x47) {
            *(undefined1 *)((long)param_3 + 0x34) = 1;
            goto LAB_00193d80;
          }
          if (bVar2 == 0x4c) {
            pbVar18 = pbVar18 + 1;
            *(byte *)((long)param_3 + 0x19) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_00193ce0;
          }
        }
        else if (bVar2 < 0x53) {
          if (bVar2 == 0x50) {
            bVar2 = *local_48;
            *(byte *)((long)param_3 + 0x1a) = bVar2;
            *(char *)((long)param_3 + 0x1b) = (char)(local_48 + 1) - (char)param_2;
            local_48 = local_48 + 1;
            lVar8 = FUN_001959b8(param_1,&local_48,pbVar1,bVar2,0);
            param_3[4] = lVar8;
            pbVar18 = pbVar18 + 1;
            goto LAB_00193ce0;
          }
          if (bVar2 == 0x52) {
            pbVar18 = pbVar18 + 1;
            *(byte *)(param_3 + 3) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_00193ce0;
          }
        }
        else {
          if (bVar2 == 0x53) {
            *(undefined1 *)(param_3 + 6) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_00193ce0;
          }
          if (bVar2 == 0x7a) {
            *(undefined1 *)((long)param_3 + 0x31) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_00193ce0;
          }
        }
LAB_00193d80:
        pbVar18 = pbVar18 + 1;
        goto LAB_00193ce0;
      }
LAB_00193dc4:
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


// ===== 00193e28  FUN_00193e28 =====

void FUN_00193e28(void)

{
  return;
}


// ===== 00193e30  FUN_00193e30 =====

void FUN_00193e30(void)

{
  return;
}


// ===== 00193e38  FUN_00193e38 =====

bool FUN_00193e38(undefined8 param_1,uint param_2)

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


// ===== 00193e7c  FUN_00193e7c =====

undefined8 FUN_00193e7c(long param_1,uint param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_001a11d8;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_00193ee4:
      return *(undefined8 *)(param_1 + 0x108);
    }
    if (param_2 == 0xffffffff) goto LAB_00193ed8;
    if (param_2 == 0x1d) {
      return *(undefined8 *)(param_1 + 0xf8);
    }
  }
  else if ((int)param_2 < 0x20) {
    if (param_2 == 0x1e) {
      return *(undefined8 *)(param_1 + 0x100);
    }
    if (param_2 == 0x1f) goto LAB_00193ee4;
  }
  else {
    if (param_2 == 0x22) {
      return *(undefined8 *)(param_1 + 0x118);
    }
    if (param_2 == 0x20) {
LAB_00193ed8:
      return *(undefined8 *)(param_1 + 0x110);
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_001a11d8 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8);
}


// ===== 00193f64  FUN_00193f64 =====

void FUN_00193f64(long param_1,uint param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_001a11d8;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_00193fcc:
      *(undefined8 *)(param_1 + 0x108) = param_3;
      return;
    }
    if (param_2 == 0xffffffff) goto LAB_00193fc0;
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
    if (param_2 == 0x1f) goto LAB_00193fcc;
  }
  else {
    if (param_2 == 0x22) {
      *(undefined8 *)(param_1 + 0x118) = param_3;
      return;
    }
    if (param_2 == 0x20) {
LAB_00193fc0:
      *(undefined8 *)(param_1 + 0x110) = param_3;
      return;
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_001a11d8 + 0x130),"libunwind: %s - %s\n","setRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8) = param_3;
  return;
}


// ===== 0019404c  FUN_0019404c =====

bool FUN_0019404c(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffffffe0) == 0x40;
}


// ===== 00194060  FUN_00194060 =====

undefined1  [16] FUN_00194060(long param_1,int param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + (long)param_2 * 8 + -0xe0);
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 00194070  FUN_00194070 =====

void FUN_00194070(undefined8 param_1,long param_2,int param_3)

{
  *(undefined8 *)(param_2 + (long)param_3 * 8 + -0xe0) = param_1;
  return;
}


// ===== 00194080  FUN_00194080 =====

ulong FUN_00194080(long *param_1,uint param_2)

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
    uVar3 = FUN_001945a4(lVar1,uVar4,param_1[0x4b],param_1 + 2,(long)param_1 + 0x269,param_2 & 1);
    iVar2 = (int)uVar3;
  }
  else {
    memset(auStack_240,0,0x210);
    uVar3 = FUN_00194484(param_1,auStack_240);
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


// ===== 00194170  FUN_00194170 =====

void FUN_00194170(long param_1,undefined8 *param_2)

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


// ===== 001941b4  FUN_001941b4 =====

void FUN_001941b4(long param_1)

{
  FUN_0019724c(param_1 + 0x10);
  return;
}


// ===== 001941c0  FUN_001941c0 =====

undefined1 FUN_001941c0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x269);
}


// ===== 001941cc  FUN_001941cc =====

undefined8 FUN_001941cc(long *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  return 0;
}


// ===== 001941f8  FUN_001941f8 =====

void FUN_001941f8(long *param_1,ulong param_2)

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
  iVar1 = dl_iterate_phdr(FUN_00196b9c,&local_648);
  if (((iVar1 == 0) || (local_668 == 0)) ||
     (uVar4 = FUN_001968c8(param_1,uVar7,auStack_678,0), (uVar4 & 1) == 0)) {
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_001a6c54);
    for (puVar6 = PTR_DAT_001a6380; puVar6 < PTR_DAT_001a6388; puVar6 = puVar6 + 0x20) {
      if ((*(ulong *)(puVar6 + 8) <= uVar7) && (uVar7 < *(ulong *)(puVar6 + 0x10))) {
        lVar3 = *(long *)(puVar6 + 0x18);
        pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001a6c54);
        if ((lVar3 != 0) &&
           (lVar3 = FUN_001939d0(param_1[1],lVar3,&local_6a8,local_6e0,0), lVar3 == 0)) {
          memset(&local_648,0,0x618);
          uVar7 = FUN_00194a2c(param_1[1],&local_6a8,local_6e0,uVar7,4,&local_648);
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
        goto LAB_00194380;
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001a6c54);
LAB_00194380:
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


// ===== 00194478  FUN_00194478 =====

void FUN_00194478(undefined8 param_1,undefined4 param_2)

{
  FUN_0019721c(param_2);
  return;
}


// ===== 00194484  FUN_00194484 =====

undefined8 FUN_00194484(long param_1)

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


// ===== 001945a4  FUN_001945a4 =====

undefined8
FUN_001945a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4,
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
  
  lVar7 = FUN_001939d0(param_1,param_3,auStack_b0,auStack_e8,0);
  if (lVar7 == 0) {
    memset(auStack_700,0,0x618);
    uVar8 = FUN_00194a2c(param_1,auStack_b0,auStack_e8,param_2,4,auStack_700);
    if ((uVar8 & 1) != 0) {
      uVar8 = FUN_00195674(param_1,auStack_700,param_4);
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
        puVar3 = PTR___sF_001a11d8;
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
              goto LAB_00194884;
            }
            else {
              puVar13 = (undefined8 *)((long)param_4 + 0x108);
              if ((local_b6 != 0x22) &&
                 ((puVar13 = (undefined8 *)((long)param_4 + 0x100), local_b6 != 0x20 &&
                  (puVar13 = (undefined8 *)((long)param_4 + 0xf8), local_b6 != 0x1f)))) {
LAB_00194884:
                if (0x1c < local_b6) {
                  fprintf((FILE *)(PTR___sF_001a11d8 + 0x130),"libunwind: %s - %s\n","getRegister",
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
LAB_00194990:
                  fprintf((FILE *)(PTR___sF_001a11d8 + 0x130),"libunwind: %s - %s\n",
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
              if (iVar2 != 6) goto LAB_00194990;
              puVar9 = (ulong *)FUN_00195f0c(*(undefined8 *)(piVar15 + 2),param_1,param_4,uVar8);
              uVar18 = *puVar9;
            }
            local_a00[uVar12] = uVar18;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == local_b6) {
            uVar14 = FUN_001957a8(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == 0x22) {
            uVar10 = FUN_001957a8(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
          }
          else {
            if (0xffffffe0 < uVar16 - 0x40) {
              return 0xffffe672;
            }
            uVar11 = FUN_001957a8(param_1,param_4,uVar8,piVar15);
            puVar3 = PTR___sF_001a11d8;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
            if ((int)uVar16 < 0x1f) {
              uVar5 = uVar11;
              if ((uVar16 != 0x1d) && (uVar5 = local_a00[0x3b], uVar6 = uVar11, uVar16 != 0x1e))
              goto LAB_001948d8;
            }
            else {
              uVar18 = uVar11;
              if ((uVar16 != 0x1f) &&
                 ((uVar18 = local_a00[0x3d], uVar10 = uVar11, uVar16 != 0x22 &&
                  (uVar10 = local_a00[0x3f], uVar16 != 0x20)))) {
LAB_001948d8:
                if (0x1c < uVar12) {
                  fprintf((FILE *)(PTR___sF_001a11d8 + 0x130),"libunwind: %s - %s\n","setRegister",
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
            FUN_001957a8(param_1,auStack_b20,uVar8,&local_80);
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


// ===== 00194a2c  FUN_00194a2c =====

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_00194a2c(undefined8 param_1,long *param_2,long *param_3,long param_4,int param_5,
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
LAB_00194ab0:
    lVar20 = lVar20 + 0x18;
    if (lVar20 == 0x30) {
      return 1;
    }
  }
  uVar17 = 0;
LAB_00194ae0:
  puVar18 = local_6c0;
  puVar5 = PTR___sF_001a11d8;
  pbVar10 = pbVar21 + 1;
  bVar3 = *pbVar21;
  apbStack_6a0[0xc0] = pbVar10;
  switch((ulong)bVar3) {
  case 0:
    goto code_r0x001953b4;
  case 1:
    uVar17 = FUN_001959b8(local_6c8,apbStack_6a0 + 0xc0,pbVar2,(char)param_3[3],0);
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 2:
    uVar9 = (uint)pbVar21[1];
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 2;
    goto LAB_00194f68;
  case 3:
    uVar9 = (uint)*(ushort *)(pbVar21 + 1);
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 3;
    goto LAB_00194f68;
  case 4:
    uVar9 = *(uint *)(pbVar21 + 1);
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 5;
LAB_00194f68:
    uVar17 = uVar17 + iVar13 * uVar9;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 5:
    uVar19 = FUN_00195d44(apbStack_6a0 + 0xc0,pbVar2);
    lVar8 = FUN_00195d44(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended DWARF unwind, reg too big\n";
      __size = 0x46;
      __s = (FILE *)(PTR___sF_001a11d8 + 0x130);
      goto LAB_00195564;
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
LAB_00194f04:
    puVar12[6] = 2;
    *(long *)(puVar12 + 8) = lVar8;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 6:
    uVar19 = FUN_00195d44(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_restore_extended DWARF unwind, reg too big\n";
LAB_00195454:
      __s = (FILE *)(PTR___sF_001a11d8 + 0x130);
      __size = 0x47;
      goto LAB_00195564;
    }
    cVar4 = *(char *)(param_6 + uVar19 * 4 + 7);
joined_r0x00195394:
    if (cVar4 != '\0') {
      pbVar21 = apbStack_6a0[uVar19 * 2];
      *(byte **)(param_6 + uVar19 * 4 + 8) = apbStack_6a0[uVar19 * 2 + 1];
      *(byte **)(param_6 + uVar19 * 4 + 6) = pbVar21;
    }
    goto code_r0x001953b4;
  case 7:
    uVar19 = FUN_00195d44(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_undefined DWARF unwind, reg too big\n";
LAB_00195558:
      __s = (FILE *)(PTR___sF_001a11d8 + 0x130);
      __size = 0x40;
      goto LAB_00195564;
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
    uVar19 = FUN_00195d44(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_same_value DWARF unwind, reg too big\n";
LAB_0019553c:
      __s = (FILE *)(PTR___sF_001a11d8 + 0x130);
      __size = 0x41;
      goto LAB_00195564;
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
    uVar19 = FUN_00195d44(apbStack_6a0 + 0xc0,pbVar2);
    uVar14 = FUN_00195d44(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg too big\n";
      __size = 0x3f;
      __s = (FILE *)(PTR___sF_001a11d8 + 0x130);
      goto LAB_00195564;
    }
    if (0x5f < uVar14) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg2 too big\n";
      goto LAB_00195558;
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
    uVar19 = FUN_00195d44(apbStack_6a0 + 0xc0,pbVar2);
    uVar7 = FUN_00195d44(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa DWARF unwind, reg too big\n";
      __size = 0x3e;
      __s = (FILE *)(PTR___sF_001a11d8 + 0x130);
      goto LAB_00195564;
    }
    *param_6 = (int)uVar19;
    param_6[1] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xd:
    uVar19 = FUN_00195d44(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa_register DWARF unwind, reg too big\n";
      goto LAB_00195454;
    }
    *param_6 = (int)uVar19;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xe:
    uVar7 = FUN_00195d44(apbStack_6a0 + 0xc0,pbVar2);
    param_6[1] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xf:
    *param_6 = 0;
    *(byte **)(param_6 + 2) = pbVar10;
    goto LAB_001952e8;
  case 0x10:
    uVar19 = FUN_00195d44(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_expression DWARF unwind, reg too big\n";
      goto LAB_0019553c;
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
LAB_001952e0:
    puVar12[6] = uVar7;
    *(byte **)(puVar12 + 8) = apbStack_6a0[0xc0];
LAB_001952e8:
    lVar8 = FUN_00195d44(apbStack_6a0 + 0xc0,pbVar2);
    apbStack_6a0[0xc0] = apbStack_6a0[0xc0] + lVar8;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x11:
    uVar19 = FUN_00195d44(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_001a11d8;
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended_sf DWARF unwind, reg too big\n";
      __size = 0x49;
      __s = (FILE *)(PTR___sF_001a11d8 + 0x130);
      goto LAB_00195564;
    }
    uVar14 = 0;
    uVar11 = 0;
    pbVar21 = apbStack_6a0[0xc0];
    pbVar10 = apbStack_6a0[0xc0];
    do {
      if (pbVar10 == pbVar2) {
        fprintf((FILE *)(PTR___sF_001a11d8 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
LAB_00195274:
    puVar12[6] = uVar7;
    *(ulong *)(puVar12 + 8) = uVar11 * (long)iVar13;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x12:
    uVar14 = FUN_00195d44(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_001a11d8;
    uVar19 = 0;
    uVar11 = 0;
    pbVar21 = apbStack_6a0[0xc0];
    pbVar10 = apbStack_6a0[0xc0];
    do {
      if (pbVar10 == pbVar2) {
        fprintf((FILE *)(PTR___sF_001a11d8 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      goto LAB_0019553c;
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
        fprintf((FILE *)(PTR___sF_001a11d8 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
    uVar19 = FUN_00195d44(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      fprintf((FILE *)(PTR___sF_001a11d8 + 0x130),
              "libunwind: malformed DW_CFA_val_offset DWARF unwind, reg (%lu) out of range\n\n",
              uVar19);
      goto LAB_0019556c;
    }
    lVar8 = FUN_00195d44(apbStack_6a0 + 0xc0,pbVar2);
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
    uVar19 = FUN_00195d44(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_001a11d8;
    if (uVar19 < 0x60) {
      uVar14 = 0;
      uVar11 = 0;
      pbVar21 = apbStack_6a0[0xc0];
      pbVar10 = apbStack_6a0[0xc0];
      do {
        if (pbVar10 == pbVar2) {
          fprintf((FILE *)(PTR___sF_001a11d8 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      goto LAB_00195274;
    }
    __ptr = "libunwind: malformed DW_CFA_val_offset_sf DWARF unwind, reg too big\n";
    __size = 0x44;
    __s = (FILE *)(PTR___sF_001a11d8 + 0x130);
    goto LAB_00195564;
  case 0x16:
    uVar19 = FUN_00195d44(apbStack_6a0 + 0xc0,pbVar2);
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
      goto LAB_001952e0;
    }
    __ptr = "libunwind: malformed DW_CFA_val_expression DWARF unwind, reg too big\n";
    __size = 0x45;
    __s = (FILE *)(PTR___sF_001a11d8 + 0x130);
    goto LAB_00195564;
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
        goto joined_r0x00195394;
      }
      if (bVar1 != 0x80) {
        return 0;
      }
      local_6dc = param_5;
      lVar8 = FUN_00195d44(apbStack_6a0 + 0xc0,pbVar2);
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
    if (param_5 != 4) goto code_r0x001953b4;
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
    uVar7 = FUN_00195d44(apbStack_6a0 + 0xc0,pbVar2);
    param_6[4] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x2f:
    uVar19 = FUN_00195d44(apbStack_6a0 + 0xc0,pbVar2);
    if (uVar19 < 0x60) {
      lVar8 = FUN_00195d44(apbStack_6a0 + 0xc0,pbVar2);
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
      goto LAB_00194f04;
    }
    __ptr = "libunwind: malformed DW_CFA_GNU_negative_offset_extended DWARF unwind, reg too big\n";
    __size = 0x53;
    __s = (FILE *)(PTR___sF_001a11d8 + 0x130);
LAB_00195564:
    fwrite(__ptr,__size,1,__s);
LAB_0019556c:
    fflush((FILE *)(PTR___sF_001a11d8 + 0x130));
    return 0;
  }
joined_r0x00194e9c:
  if ((pbVar2 <= pbVar21) || (uVar16 <= uVar17)) goto LAB_00194ab0;
  goto LAB_00194ae0;
code_r0x001953b4:
  pbVar21 = apbStack_6a0[0xc0];
  goto joined_r0x00194e9c;
}


// ===== 00195674  FUN_00195674 =====

long FUN_00195674(undefined8 param_1,uint *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR___sF_001a11d8;
  uVar1 = *param_2;
  if ((int)uVar1 < 0x1e) {
    if ((int)uVar1 < 0) {
      if (uVar1 == 0xfffffffe) {
LAB_001956b4:
        return *(long *)(param_3 + 0xf8) + (long)(int)param_2[1];
      }
      if (uVar1 == 0xffffffff) goto LAB_001956f8;
    }
    else {
      if (uVar1 == 0) {
        lVar3 = FUN_00195f0c(*(undefined8 *)(param_2 + 2),param_1,param_3,0);
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
    if (uVar1 == 0x1f) goto LAB_001956b4;
  }
  else {
    if (uVar1 == 0x22) {
      return *(long *)(param_3 + 0x108) + (long)(int)param_2[1];
    }
    if (uVar1 == 0x20) {
LAB_001956f8:
      return *(long *)(param_3 + 0x100) + (long)(int)param_2[1];
    }
  }
  if (0x1c < uVar1) {
    fprintf((FILE *)(PTR___sF_001a11d8 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(long *)(param_3 + (ulong)uVar1 * 8) + (long)(int)param_2[1];
}


// ===== 001957a8  FUN_001957a8 =====

undefined8 FUN_001957a8(undefined8 param_1,long param_2,long param_3,int *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  puVar2 = PTR___sF_001a11d8;
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
LAB_001958e4:
          return *(undefined8 *)(param_2 + 0xf8);
        }
        if (uVar5 == 0xffffffff) goto LAB_001958cc;
        if (uVar5 == 0x1d) {
          return *(undefined8 *)(param_2 + 0xe8);
        }
      }
      else if ((int)uVar5 < 0x20) {
        if (uVar5 == 0x1e) {
          return *(undefined8 *)(param_2 + 0xf0);
        }
        if (uVar5 == 0x1f) goto LAB_001958e4;
      }
      else {
        if (uVar5 == 0x22) {
          return *(undefined8 *)(param_2 + 0x108);
        }
        if (uVar5 == 0x20) {
LAB_001958cc:
          return *(undefined8 *)(param_2 + 0x100);
        }
      }
      if (0x1c < uVar5) {
        fprintf((FILE *)(PTR___sF_001a11d8 + 0x130),"libunwind: %s - %s\n","getRegister",
                "unsupported arm64 register");
        fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      return *(undefined8 *)(param_2 + (*(ulong *)(param_4 + 2) & 0xffffffff) * 8);
    }
    if (iVar1 == 6) {
      puVar4 = (undefined8 *)FUN_00195f0c(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return *puVar4;
    }
    if (iVar1 == 7) {
      uVar3 = FUN_00195f0c(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return uVar3;
    }
  }
  fprintf((FILE *)(PTR___sF_001a11d8 + 0x130),"libunwind: %s - %s\n","getSavedRegister",
          "unsupported restore location for register");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 001959b8  FUN_001959b8 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_001959b8(undefined8 param_1,long *param_2,ulong *param_3,uint param_4,long param_5)

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
  
  puVar3 = PTR___sF_001a11d8;
  uVar1 = param_4 & 0xf;
  puVar10 = (ulong *)*param_2;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      if ((param_4 & 0xf) == 0) goto LAB_00195b04;
      if (uVar1 != 1) {
LAB_00195d10:
        fprintf((FILE *)(PTR___sF_001a11d8 + 0x130),"libunwind: %s - %s\n","getEncodedP",
                "unknown pointer encoding");
        fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar4 = (undefined8 *)FUN_00195d44(param_2,param_3);
      puVar3 = PTR___sF_001a11d8;
    }
    else if (uVar1 == 2) {
      puVar4 = (undefined8 *)(ulong)(ushort)*puVar10;
      *param_2 = (long)puVar10 + 2;
      puVar3 = PTR___sF_001a11d8;
    }
    else {
      if (uVar1 != 3) goto LAB_00195d10;
      puVar4 = (undefined8 *)(ulong)(uint)*puVar10;
      *param_2 = (long)((long)puVar10 + 4);
      puVar3 = PTR___sF_001a11d8;
    }
  }
  else if (uVar1 < 10) {
    if (uVar1 == 4) {
LAB_00195b04:
      puVar4 = (undefined8 *)*puVar10;
      *param_2 = (long)(puVar10 + 1);
      puVar3 = PTR___sF_001a11d8;
    }
    else {
      if (uVar1 != 9) goto LAB_00195d10;
      uVar7 = 0;
      uVar5 = 0;
      puVar6 = puVar10;
      puVar9 = puVar10;
      do {
        if (puVar9 == param_3) {
          fprintf((FILE *)(PTR___sF_001a11d8 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      puVar3 = PTR___sF_001a11d8;
    }
  }
  else if (uVar1 == 10) {
    puVar4 = (undefined8 *)(long)(short)*puVar10;
    *param_2 = (long)puVar10 + 2;
    puVar3 = PTR___sF_001a11d8;
  }
  else {
    if (uVar1 != 0xb) {
      if (uVar1 != 0xc) goto LAB_00195d10;
      goto LAB_00195b04;
    }
    puVar4 = (undefined8 *)(long)(int)(uint)*puVar10;
    *param_2 = (long)((long)puVar10 + 4);
    puVar3 = PTR___sF_001a11d8;
  }
  uVar1 = (param_4 & 0xff) >> 4 & 7;
  PTR___sF_001a11d8 = puVar3;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
      if (uVar1 != 1) goto LAB_00195cdc;
      puVar4 = (undefined8 *)((long)puVar4 + (long)puVar10);
    }
LAB_00195b90:
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
      goto LAB_00195b90;
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
LAB_00195cdc:
  fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP","unknown pointer encoding");
  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00195d44  FUN_00195d44 =====

ulong FUN_00195d44(long *param_1,byte *param_2)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  puVar2 = PTR___sF_001a11d8;
  pbVar4 = (byte *)*param_1;
  if (pbVar4 != param_2) {
    pbVar5 = pbVar4 + 1;
    uVar3 = (ulong)*pbVar4 & 0x7f;
    if (-1 < (char)*pbVar4) {
LAB_00195d74:
      *param_1 = (long)pbVar5;
      return uVar3;
    }
    if (pbVar5 != param_2) {
      uVar3 = uVar3 | (ulong)((int)(char)pbVar4[1] & 0x7f) << 7;
      pbVar5 = pbVar4 + 2;
      if (-1 < (char)pbVar4[1]) goto LAB_00195d74;
      if (pbVar5 != param_2) {
        uVar3 = uVar3 | (ulong)((int)(char)pbVar4[2] & 0x7f) << 0xe;
        pbVar5 = pbVar4 + 3;
        if (-1 < (char)pbVar4[2]) goto LAB_00195d74;
        if (pbVar5 != param_2) {
          uVar3 = uVar3 | (ulong)((int)(char)pbVar4[3] & 0x7f) << 0x15;
          pbVar5 = pbVar4 + 4;
          if (-1 < (char)pbVar4[3]) goto LAB_00195d74;
          if (pbVar5 != param_2) {
            uVar3 = uVar3 | (ulong)((int)(char)pbVar4[4] & 0x7f) << 0x1c;
            pbVar5 = pbVar4 + 5;
            if (-1 < (char)pbVar4[4]) goto LAB_00195d74;
            if (pbVar5 != param_2) {
              uVar3 = uVar3 | (ulong)((int)(char)pbVar4[5] & 0x7f) << 0x23;
              pbVar5 = pbVar4 + 6;
              if (-1 < (char)pbVar4[5]) goto LAB_00195d74;
              if (pbVar5 != param_2) {
                uVar3 = uVar3 | (ulong)((int)(char)pbVar4[6] & 0x7f) << 0x2a;
                pbVar5 = pbVar4 + 7;
                if (-1 < (char)pbVar4[6]) goto LAB_00195d74;
                if (pbVar5 != param_2) {
                  uVar3 = uVar3 | (ulong)((int)(char)pbVar4[7] & 0x7f) << 0x31;
                  pbVar5 = pbVar4 + 8;
                  if (-1 < (char)pbVar4[7]) goto LAB_00195d74;
                  if (pbVar5 != param_2) {
                    uVar3 = uVar3 | (ulong)((int)(char)pbVar4[8] & 0x7f) << 0x38;
                    pbVar5 = pbVar4 + 9;
                    if (-1 < (char)pbVar4[8]) goto LAB_00195d74;
                    if (pbVar5 != param_2) {
                      bVar1 = *pbVar5;
                      if ((bVar1 & 0x7e) == 0) {
                        if (-1 < (char)bVar1) {
                          *param_1 = (long)(pbVar4 + 10);
                          return uVar3 | (ulong)bVar1 << 0x3f;
                        }
                        if (pbVar4 + 10 == param_2) goto LAB_00195ea4;
                      }
                      fprintf((FILE *)(PTR___sF_001a11d8 + 0x130),"libunwind: %s - %s\n",
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
LAB_00195ea4:
  fprintf((FILE *)(PTR___sF_001a11d8 + 0x130),"libunwind: %s - %s\n","getULEB128",
          "truncated uleb128 expression");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00195f0c  FUN_00195f0c =====

ulong FUN_00195f0c(byte *param_1,undefined8 param_2,long param_3,ulong param_4)

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
  ulong auStack_380 [99];
  byte *local_68;
  
  local_68 = param_1;
  lVar11 = FUN_00195d44(&local_68,param_1 + 0x14);
  auStack_380[0] = param_4;
  pbVar6 = local_68 + lVar11;
  if (local_68 < pbVar6) {
    puVar1 = (ulong *)(param_3 + 0xf0);
    puVar2 = (ulong *)(param_3 + 0xe8);
    puVar3 = (ulong *)(param_3 + 0x108);
    puVar4 = (ulong *)(param_3 + 0xf8);
    puVar19 = auStack_380;
    puVar5 = (ulong *)(param_3 + 0x100);
    pbVar18 = local_68;
    do {
      puVar9 = PTR___sF_001a11d8;
      pbVar13 = pbVar18 + 1;
      local_68 = pbVar13;
      bVar8 = *pbVar18;
      uVar10 = (uint)bVar8;
      if (0x91 < uVar10 - 3) {
code_r0x00196788:
        fprintf((FILE *)(PTR___sF_001a11d8 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
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
        goto LAB_001963f4;
      case 4:
      case 5:
      case 7:
        goto code_r0x00196788;
      case 6:
        puVar14 = (ulong *)*puVar19;
LAB_00196384:
        *puVar19 = *puVar14;
        goto LAB_00195f90;
      case 8:
        uVar16 = (ulong)pbVar18[1];
        goto LAB_00196358;
      case 9:
        uVar16 = (ulong)(char)pbVar18[1];
LAB_00196358:
        local_68 = pbVar18 + 2;
        goto LAB_001963f4;
      case 10:
        uVar16 = (ulong)*(ushort *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_001963f4;
      case 0xb:
        uVar16 = (ulong)*(short *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_001963f4;
      case 0xc:
        uVar16 = (ulong)*(uint *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_001963f4;
      case 0xd:
        uVar16 = (ulong)*(int *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_001963f4;
      case 0x10:
        uVar16 = FUN_00195d44(&local_68,pbVar6);
        puVar19 = puVar19 + 1;
        *puVar19 = uVar16;
        goto LAB_00195f90;
      case 0x11:
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = pbVar13;
        do {
          if (pbVar18 == pbVar6) {
            fprintf((FILE *)(PTR___sF_001a11d8 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
        goto LAB_00195f90;
      case 0x12:
        uVar16 = *puVar19;
        goto LAB_00195f8c;
      case 0x13:
        puVar19 = puVar19 + -1;
        goto LAB_00195f90;
      case 0x14:
        uVar16 = puVar19[-1];
        goto LAB_00195f8c;
      case 0x15:
        local_68 = pbVar18 + 2;
        uVar16 = puVar19[-(ulong)pbVar18[1]];
LAB_001963f4:
LAB_00195f8c:
        puVar19[1] = uVar16;
        puVar19 = puVar19 + 1;
        goto LAB_00195f90;
      case 0x16:
        auVar20 = NEON_ext(*(undefined1 (*) [16])(puVar19 + -1),*(undefined1 (*) [16])(puVar19 + -1)
                           ,8,1);
        *puVar19 = auVar20._8_8_;
        puVar19[-1] = auVar20._0_8_;
        goto LAB_00195f90;
      case 0x17:
        uVar16 = *puVar19;
        *puVar19 = SUB168(*(undefined1 (*) [16])(puVar19 + -2),8);
        puVar19[-1] = SUB168(*(undefined1 (*) [16])(puVar19 + -2),0);
        puVar19[-2] = uVar16;
        goto LAB_00195f90;
      case 0x18:
        puVar14 = (ulong *)*puVar19;
        puVar19 = puVar19 + -1;
        *puVar19 = *puVar14;
        goto LAB_00195f90;
      case 0x19:
        uVar16 = *puVar19;
        if ((long)uVar16 < 0) goto LAB_0019652c;
        goto LAB_00195f90;
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
LAB_0019652c:
        *puVar19 = -uVar16;
        goto LAB_00195f90;
      case 0x20:
        *puVar19 = ~*puVar19;
        goto LAB_00195f90;
      case 0x21:
        uVar16 = puVar19[-1] | *puVar19;
        break;
      case 0x22:
        uVar16 = puVar19[-1] + *puVar19;
        break;
      case 0x23:
        lVar11 = FUN_00195d44(&local_68,pbVar6);
        *puVar19 = *puVar19 + lVar11;
        goto LAB_00195f90;
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
        goto LAB_00195f90;
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
        goto LAB_00195f90;
      default:
        uVar16 = (ulong)(uVar15 - 0x30);
        goto LAB_00195f8c;
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
        goto LAB_00195f88;
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
            fprintf((FILE *)(PTR___sF_001a11d8 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
             (puVar14 = puVar2, bVar8 != 0x8d)) goto LAB_001960c8;
        }
        else if (bVar8 < 0x90) {
          puVar14 = puVar1;
          if ((bVar8 != 0x8e) && (puVar14 = puVar4, uVar15 != 0x8f)) {
LAB_001960c8:
            if (0x1c < uVar10 - 0x70) {
              fprintf((FILE *)(PTR___sF_001a11d8 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((bVar8 != 0x90) && (puVar14 = puVar3, bVar8 != 0x92)) goto LAB_001960c8;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_00195f8c;
      case 0x90:
        uVar10 = FUN_00195d44(&local_68,pbVar6);
        puVar9 = PTR___sF_001a11d8;
        if ((int)uVar10 < 0x1e) {
          if (((uVar10 != 0xfffffffe) && (puVar14 = puVar5, uVar10 != 0xffffffff)) &&
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_0019662c;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_0019662c:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_001a11d8 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_0019662c;
        }
LAB_00195f88:
        uVar16 = *puVar14;
        goto LAB_00195f8c;
      case 0x91:
        fprintf((FILE *)(PTR___sF_001a11d8 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
                "DW_OP_fbreg not implemented");
        fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x92:
        uVar10 = FUN_00195d44(&local_68,pbVar6);
        puVar9 = PTR___sF_001a11d8;
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = local_68;
        pbVar13 = local_68;
        do {
          if (pbVar13 == pbVar6) {
            fprintf((FILE *)(PTR___sF_001a11d8 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_00196654;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_00196654:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_001a11d8 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_00196654;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_00195f8c;
      case 0x93:
        fprintf((FILE *)(PTR___sF_001a11d8 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
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
LAB_0019682c:
              fprintf((FILE *)(PTR___sF_001a11d8 + 0x130),"libunwind: %s - %s\n",
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
            if (bVar8 != 8) goto LAB_0019682c;
            goto LAB_00196384;
          }
          *puVar19 = (ulong)(uint)*puVar14;
        }
        goto LAB_00195f90;
      }
      puVar19[-1] = uVar16;
      puVar19 = puVar19 + -1;
LAB_00195f90:
      pbVar18 = local_68;
    } while (local_68 < pbVar6);
    param_4 = *puVar19;
  }
  return param_4;
}


// ===== 001968c8  FUN_001968c8 =====

undefined8 FUN_001968c8(long param_1,ulong param_2,long *param_3,uint param_4)

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
      (uVar3 = FUN_00196df0(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],
                            param_3[2] + (ulong)param_4,&local_6b0,auStack_6e8), (uVar3 & 1) == 0))
     && ((param_3[4] == 0 ||
         (uVar3 = FUN_00196fb8(*(undefined8 *)(param_1 + 8),param_2,param_3[4],(int)param_3[5],
                               &local_6b0,auStack_6e8), (uVar3 & 1) == 0)))) {
    lVar5 = *param_3;
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_001a6c54);
    if (PTR_DAT_001a6380 < PTR_DAT_001a6388) {
      plVar4 = (long *)PTR_DAT_001a6380;
      if (lVar5 == -1) {
        do {
          if (((ulong)plVar4[1] <= param_2) && (param_2 < (ulong)plVar4[2])) goto LAB_001969d0;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_001a6388);
      }
      else {
        do {
          if (((*plVar4 == lVar5) && ((ulong)plVar4[1] <= param_2)) && (param_2 < (ulong)plVar4[2]))
          goto LAB_001969d0;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_001a6388);
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001a6c54);
    goto LAB_00196a18;
  }
LAB_00196a38:
  bVar2 = 1;
LAB_00196a3c:
  lVar5 = *param_3;
  memset(auStack_680,0,0x618);
  uVar3 = FUN_00194a2c(*(undefined8 *)(param_1 + 8),&local_6b0,auStack_6e8,param_2,4,auStack_680);
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
      pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_001a6c54);
      __src = PTR_DAT_001a6380;
      if (DAT_001a6390 <= PTR_DAT_001a6388) {
        __n = (long)DAT_001a6390 - (long)PTR_DAT_001a6380;
        __dest = (undefined *)malloc(__n * 4);
        memcpy(__dest,__src,__n);
        if ((undefined8 *)__src != &DAT_001a6c90) {
          free(__src);
        }
        DAT_001a6390 = __dest + ((long)__n >> 3) * 0x20;
        PTR_DAT_001a6388 = __dest + __n;
        PTR_DAT_001a6380 = __dest;
      }
      *(long *)PTR_DAT_001a6388 = lVar5;
      *(long *)((long)PTR_DAT_001a6388 + 8) = local_698;
      *(long *)((long)PTR_DAT_001a6388 + 0x18) = local_6b0;
      *(long *)((long)PTR_DAT_001a6388 + 0x10) = local_690;
      PTR_DAT_001a6388 = (undefined *)((long)PTR_DAT_001a6388 + 0x20);
      pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001a6c54);
      return 1;
    }
    return 1;
  }
  return 1;
LAB_001969d0:
  lVar5 = plVar4[3];
  pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001a6c54);
  if ((lVar5 != 0) &&
     (uVar3 = FUN_00196df0(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],lVar5,
                           &local_6b0,auStack_6e8), (uVar3 & 1) != 0)) {
    bVar2 = 0;
    goto LAB_00196a3c;
  }
LAB_00196a18:
  uVar3 = FUN_00196df0(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],0,&local_6b0,
                       auStack_6e8);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  goto LAB_00196a38;
}


// ===== 00196b9c  FUN_00196b9c =====

undefined8 FUN_00196b9c(ulong *param_1,undefined8 param_2,undefined8 *param_3)

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
              uVar5 = FUN_00196cd0(uVar2,lVar8,lVar9 + lVar8,local_70);
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


// ===== 00196cd0  FUN_00196cd0 =====

undefined8 FUN_00196cd0(undefined8 param_1,byte *param_2,byte *param_3,undefined8 *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  byte *local_28;
  
  puVar3 = PTR___sF_001a11d8;
  if ((ulong)((long)param_3 - (long)param_2) < 4) {
    if (param_3 == param_2) {
      return 0;
    }
    fprintf((FILE *)(PTR___sF_001a11d8 + 0x130),
            "libunwind: unsupported .eh_frame_hdr at %lx: need at least 4 bytes of data but only got %zd\n"
            ,param_2);
  }
  else {
    if (*param_2 == 1) {
      local_28 = param_2 + 4;
      bVar1 = param_2[2];
      bVar2 = param_2[1];
      *(byte *)(param_4 + 3) = param_2[3];
      uVar4 = FUN_001959b8(param_1,&local_28,param_3,bVar2,param_2);
      *param_4 = uVar4;
      if (bVar1 == 0xff) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_001959b8(param_1,&local_28,param_3,bVar1,param_2);
      }
      param_4[1] = uVar4;
      param_4[2] = local_28;
      return 1;
    }
    fprintf((FILE *)(PTR___sF_001a11d8 + 0x130),
            "libunwind: unsupported .eh_frame_hdr version: %u at %lx\n",(ulong)(uint)*param_2,
            param_2);
  }
  fflush((FILE *)(puVar3 + 0x130));
  return 0;
}


// ===== 00196df0  FUN_00196df0 =====

undefined8
FUN_00196df0(undefined8 param_1,ulong param_2,uint *param_3,long param_4,uint *param_5,
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
        (puVar7 < puVar9)) && (lVar4 = FUN_00193b60(param_1,puVar7,param_7), lVar4 == 0)) {
      local_68 = local_68 + 1;
      uVar8 = FUN_001959b8(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x18),0);
      lVar4 = FUN_001959b8(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x18) & 0xf,0);
      if ((uVar8 < param_2) && (param_2 <= lVar4 + uVar8)) {
        cVar2 = *(char *)(param_7 + 0x31);
        param_6[5] = 0;
        puVar9 = local_68;
        if (cVar2 != '\0') {
          lVar5 = FUN_00195d44(&local_68,puVar1);
          puVar7 = local_68;
          puVar9 = (uint *)((long)local_68 + lVar5);
          if ((*(byte *)(param_7 + 0x19) != 0xff) &&
             (lVar5 = FUN_001959b8(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x19) & 0xf,0),
             lVar5 != 0)) {
            local_68 = puVar7;
            uVar6 = FUN_001959b8(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x19),0);
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


// ===== 00196fb8  FUN_00196fb8 =====

undefined8
FUN_00196fb8(undefined8 param_1,ulong param_2,long param_3,ulong param_4,long param_5,
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
  uVar1 = FUN_00196cd0(param_1,param_3,lVar4,auStack_80);
  if (((uVar1 & 1) != 0) && (local_78 != 0)) {
    lVar2 = FUN_00197120(local_68);
    lVar7 = 0;
    do {
      if (local_78 < 2) {
        lVar8 = lVar7 * lVar2;
        break;
      }
      uVar6 = local_78 >> 1;
      lVar8 = (uVar6 + lVar7) * lVar2;
      local_88 = local_70 + lVar8;
      uVar1 = FUN_001959b8(param_1,&local_88,lVar4,local_68,param_3);
      uVar5 = local_78 - uVar6;
      local_78 = uVar6;
      if (uVar1 < param_2) {
        local_78 = uVar5;
        lVar7 = uVar6 + lVar7;
      }
    } while (uVar1 != param_2);
    local_88 = local_70 + lVar8;
    FUN_001959b8(param_1,&local_88,lVar4,local_68,param_3);
    uVar3 = FUN_001959b8(param_1,&local_88,lVar4,local_68,param_3);
    lVar4 = FUN_001939d0(param_1,uVar3,param_5,param_6,0);
    if (((lVar4 == 0) && (*(ulong *)(param_5 + 0x18) <= param_2)) &&
       (param_2 < *(ulong *)(param_5 + 0x20))) {
      return 1;
    }
  }
  return 0;
}


// ===== 00197120  FUN_00197120 =====

undefined8 FUN_00197120(uint param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_001a11d8;
  param_1 = param_1 & 0xf;
  if (param_1 < 9) {
    if (param_1 < 3) {
      if (param_1 == 2) {
        return 4;
      }
      if (param_1 == 1) {
LAB_001971e8:
        fprintf((FILE *)(PTR___sF_001a11d8 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
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
    if (param_1 == 9) goto LAB_001971e8;
  }
  else {
    if (param_1 == 0xc) {
      return 0x10;
    }
    if (param_1 == 0xb) {
      return 8;
    }
  }
  fprintf((FILE *)(PTR___sF_001a11d8 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
          "Unknown DWARF encoding for search table.");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0019721c  FUN_0019721c =====

char * FUN_0019721c(int param_1)

{
  if (param_1 + 2U < 0x62) {
    return &DAT_0012c714 + *(int *)(&DAT_0012c714 + (ulong)(param_1 + 2U) * 4);
  }
  return "unknown register";
}


// ===== 0019724c  FUN_0019724c =====

undefined1  [16] FUN_0019724c(undefined1 (*param_1) [16])

{
  return *param_1;
}


// ===== 001972dc  FUN_001972dc =====

undefined8
FUN_001972dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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


// ===== 00197380  FUN_00197380 =====

void FUN_00197380(void)

{
  (*(code *)PTR_001a1378)();
  return;
}


// ===== 001973a0  <EXTERNAL>::__cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_001a1380)();
  return;
}


// ===== 001973b0  <EXTERNAL>::__cxa_atexit =====

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_001a1388)();
  return;
}


// ===== 001973c0  apng_drawable::ApngDecoder::decode =====

void __thiscall apng_drawable::ApngDecoder::decode(void)

{
  (*(code *)PTR_decode_001a1390)();
  return;
}


// ===== 001973d0  apng_drawable::StreamSource::checkPngSignature =====

void __thiscall apng_drawable::StreamSource::checkPngSignature(StreamSource *this)

{
  (*(code *)PTR_checkPngSignature_001a1398)();
  return;
}


// ===== 001973e0  png_create_read_struct =====

void png_create_read_struct(void)

{
  (*(code *)PTR_png_create_read_struct_001a13a0)();
  return;
}


// ===== 001973f0  png_create_info_struct =====

void png_create_info_struct(void)

{
  (*(code *)PTR_png_create_info_struct_001a13a8)();
  return;
}


// ===== 00197400  <EXTERNAL>::longjmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void longjmp(__jmp_buf_tag *__env,int __val)

{
  (*(code *)PTR_longjmp_001a13b0)(__env,__val);
  return;
}


// ===== 00197410  png_set_longjmp_fn =====

void png_set_longjmp_fn(void)

{
  (*(code *)PTR_png_set_longjmp_fn_001a13b8)();
  return;
}


// ===== 00197420  <EXTERNAL>::setjmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setjmp(__jmp_buf_tag *__env)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setjmp_001a13c0)((int)__env);
  return iVar1;
}


// ===== 00197430  png_destroy_read_struct =====

void png_destroy_read_struct(void)

{
  (*(code *)PTR_png_destroy_read_struct_001a13c8)();
  return;
}


// ===== 00197440  apng_drawable::StreamSource::init =====

void __thiscall apng_drawable::StreamSource::init(StreamSource *this,png_struct_def *param_1)

{
  (*(code *)PTR_init_001a13d0)();
  return;
}


// ===== 00197450  png_set_sig_bytes =====

void png_set_sig_bytes(void)

{
  (*(code *)PTR_png_set_sig_bytes_001a13d8)();
  return;
}


// ===== 00197460  png_read_info =====

void png_read_info(void)

{
  (*(code *)PTR_png_read_info_001a13e0)();
  return;
}


// ===== 00197470  png_set_expand =====

void png_set_expand(void)

{
  (*(code *)PTR_png_set_expand_001a13e8)();
  return;
}


// ===== 00197480  png_set_strip_16 =====

void png_set_strip_16(void)

{
  (*(code *)PTR_png_set_strip_16_001a13f0)();
  return;
}


// ===== 00197490  png_set_gray_to_rgb =====

void png_set_gray_to_rgb(void)

{
  (*(code *)PTR_png_set_gray_to_rgb_001a13f8)();
  return;
}


// ===== 001974a0  png_set_add_alpha =====

void png_set_add_alpha(void)

{
  (*(code *)PTR_png_set_add_alpha_001a1400)();
  return;
}


// ===== 001974b0  png_set_interlace_handling =====

void png_set_interlace_handling(void)

{
  (*(code *)PTR_png_set_interlace_handling_001a1408)();
  return;
}


// ===== 001974c0  png_read_update_info =====

void png_read_update_info(void)

{
  (*(code *)PTR_png_read_update_info_001a1410)();
  return;
}


// ===== 001974d0  png_get_image_width =====

void png_get_image_width(void)

{
  (*(code *)PTR_png_get_image_width_001a1418)();
  return;
}


// ===== 001974e0  png_get_image_height =====

void png_get_image_height(void)

{
  (*(code *)PTR_png_get_image_height_001a1420)();
  return;
}


// ===== 001974f0  png_get_channels =====

void png_get_channels(void)

{
  (*(code *)PTR_png_get_channels_001a1428)();
  return;
}


// ===== 00197500  png_get_rowbytes =====

void png_get_rowbytes(void)

{
  (*(code *)PTR_png_get_rowbytes_001a1430)();
  return;
}


// ===== 00197510  png_get_acTL =====

void png_get_acTL(void)

{
  (*(code *)PTR_png_get_acTL_001a1438)();
  return;
}


// ===== 00197520  operator.new[] =====

void * operator_new__(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new___001a1440)();
  return pvVar1;
}


// ===== 00197530  <EXTERNAL>::memset =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_001a1448)(__s,__c);
  return pvVar1;
}


// ===== 00197540  png_get_first_frame_is_hidden =====

void png_get_first_frame_is_hidden(void)

{
  (*(code *)PTR_png_get_first_frame_is_hidden_001a1450)();
  return;
}


// ===== 00197550  png_read_frame_head =====

void png_read_frame_head(void)

{
  (*(code *)PTR_png_read_frame_head_001a1458)();
  return;
}


// ===== 00197560  png_get_next_frame_fcTL =====

void png_get_next_frame_fcTL(void)

{
  (*(code *)PTR_png_get_next_frame_fcTL_001a1460)();
  return;
}


// ===== 00197570  operator.new =====

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_001a1468)();
  return pvVar1;
}


// ===== 00197580  apng_drawable::ApngFrame::ApngFrame =====

void __thiscall apng_drawable::ApngFrame::ApngFrame(ApngFrame *this,ulong param_1,ulong param_2)

{
  (*(code *)PTR_ApngFrame_001a1470)();
  return;
}


// ===== 00197590  png_read_image =====

void png_read_image(void)

{
  (*(code *)PTR_png_read_image_001a1478)();
  return;
}


// ===== 001975a0  <EXTERNAL>::memcpy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_001a1480)();
  return pvVar1;
}


// ===== 001975b0  apng_drawable::blendOver =====

void apng_drawable::blendOver
               (uchar **param_1,uchar **param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  (*(code *)PTR_blendOver_001a1488)(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


// ===== 001975c0  apng_drawable::saveFrame =====

void apng_drawable::saveFrame(uint *param_1,uint **param_2,uint param_3,uint param_4)

{
  (*(code *)PTR_saveFrame_001a1490)(param_1,param_2,param_3,param_4);
  return;
}


// ===== 001975d0  apng_drawable::ApngImage::setFrame =====

void __thiscall apng_drawable::ApngImage::setFrame(void)

{
  (*(code *)PTR_setFrame_001a1498)();
  return;
}


// ===== 001975e0  png_read_end =====

void png_read_end(void)

{
  (*(code *)PTR_png_read_end_001a14a0)();
  return;
}


// ===== 001975f0  operator.delete[] =====

void operator_delete__(void *param_1)

{
  (*(code *)PTR_operator_delete___001a14a8)();
  return;
}


// ===== 00197600  __cxa_begin_catch =====

void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_001a14b0)();
  return;
}


// ===== 00197610  __cxa_end_catch =====

void __cxa_end_catch(void)

{
  (*(code *)PTR___cxa_end_catch_001a14b8)();
  return;
}


// ===== 00197620  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001a14c0)();
  return;
}


// ===== 00197630  <EXTERNAL>::__stack_chk_fail =====

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_001a14c8)();
  return;
}


// ===== 00197640  apng_drawable::ApngImage::ApngImage =====

void __thiscall
apng_drawable::ApngImage::ApngImage
          (ApngImage *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  (*(code *)PTR_ApngImage_001a14d0)(this,param_1,param_2,param_3,param_4);
  return;
}


// ===== 00197650  std::__ndk1::__shared_weak_count::__release_weak =====

void __thiscall std::__ndk1::__shared_weak_count::__release_weak(__shared_weak_count *this)

{
  (*(code *)PTR___release_weak_001a14d8)();
  return;
}


// ===== 00197660  std::terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
  (*(code *)PTR_terminate_001a14e0)();
  return;
}


// ===== 00197670  apng_drawable::ApngDecoder::isApng =====

void apng_drawable::ApngDecoder::isApng(void)

{
  (*(code *)PTR_isApng_001a14e8)();
  return;
}


// ===== 00197680  apng_drawable::StreamSource::registerJavaClass =====

void apng_drawable::StreamSource::registerJavaClass(_JNIEnv *param_1)

{
  (*(code *)PTR_registerJavaClass_001a14f0)();
  return;
}


// ===== 00197690  apng_drawable::StreamSource::unregisterJavaClass =====

void apng_drawable::StreamSource::unregisterJavaClass(_JNIEnv *param_1)

{
  (*(code *)PTR_unregisterJavaClass_001a14f8)();
  return;
}


// ===== 001976a0  apng_drawable::StreamSource::StreamSource =====

void __thiscall
apng_drawable::StreamSource::StreamSource(StreamSource *this,_JNIEnv *param_1,_jobject *param_2)

{
  (*(code *)PTR_StreamSource_001a1500)();
  return;
}


// ===== 001976b0  apng_drawable::StreamSource::~StreamSource =====

void __thiscall apng_drawable::StreamSource::~StreamSource(StreamSource *this)

{
  (*(code *)PTR__StreamSource_001a1508)();
  return;
}


// ===== 001976c0  apng_drawable::copyFrameDurations =====

void apng_drawable::copyFrameDurations(_JNIEnv *param_1,shared_ptr *param_2,_jintArray **param_3)

{
  (*(code *)PTR_copyFrameDurations_001a1510)();
  return;
}


// ===== 001976d0  std::__ndk1::mutex::lock =====

void __thiscall std::__ndk1::mutex::lock(mutex *this)

{
  (*(code *)PTR_lock_001a1518)();
  return;
}


// ===== 001976e0  std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>,std::__ndk1::equal_to<int>,std::__ndk1::hash<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>>>::__emplace_unique_impl<unsigned_int&,std::__ndk1::shared_ptr<apng_drawable::ApngImage>> =====

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>,std::__ndk1::equal_to<int>,std::__ndk1::hash<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>>>
::__emplace_unique_impl<unsigned_int&,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>
          (__hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>,std::__ndk1::equal_to<int>,std::__ndk1::hash<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>>>
           *this,uint *param_1,shared_ptr *param_2)

{
  (*(code *)
    PTR___emplace_unique_impl<unsigned_int&,std___ndk1_shared_ptr<apng_drawable_ApngImage>>_001a1520
  )();
  return;
}


// ===== 001976f0  std::__ndk1::mutex::unlock =====

void __thiscall std::__ndk1::mutex::unlock(mutex *this)

{
  (*(code *)PTR_unlock_001a1528)();
  return;
}


// ===== 00197700  apng_drawable::ApngImage::getFrame =====

void apng_drawable::ApngImage::getFrame(uint param_1)

{
  (*(code *)PTR_getFrame_001a1530)(param_1);
  return;
}


// ===== 00197710  <EXTERNAL>::AndroidBitmap_lockPixels =====

void AndroidBitmap_lockPixels(void)

{
  (*(code *)PTR_AndroidBitmap_lockPixels_001a1538)();
  return;
}


// ===== 00197720  <EXTERNAL>::AndroidBitmap_getInfo =====

void AndroidBitmap_getInfo(void)

{
  (*(code *)PTR_AndroidBitmap_getInfo_001a1540)();
  return;
}


// ===== 00197730  <EXTERNAL>::AndroidBitmap_unlockPixels =====

void AndroidBitmap_unlockPixels(void)

{
  (*(code *)PTR_AndroidBitmap_unlockPixels_001a1548)();
  return;
}


// ===== 00197740  std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>,std::__ndk1::equal_to<int>,std::__ndk1::hash<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>>>::__emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>> =====

void std::__ndk1::
     __hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>,std::__ndk1::equal_to<int>,std::__ndk1::hash<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>>>
     ::
     __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
               (int *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  (*(code *)
    PTR___emplace_unique_key_args<int,std___ndk1_piecewise_construct_t_const&,std___ndk1_tuple<int_const&>,std___ndk1_tuple<>>_001a1550
  )();
  return;
}


// ===== 00197750  std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>,std::__ndk1::equal_to<int>,std::__ndk1::hash<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>>>::__emplace_unique_key_args<int,int&,std::__ndk1::shared_ptr<apng_drawable::ApngImage>> =====

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>,std::__ndk1::equal_to<int>,std::__ndk1::hash<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>>>
::__emplace_unique_key_args<int,int&,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>
          (__hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>,std::__ndk1::equal_to<int>,std::__ndk1::hash<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>>>
           *this,int *param_1,int *param_2,shared_ptr *param_3)

{
  (*(code *)
    PTR___emplace_unique_key_args<int,int&,std___ndk1_shared_ptr<apng_drawable_ApngImage>>_001a1558)
            ();
  return;
}


// ===== 00197760  std::__ndk1::__shared_weak_count::~__shared_weak_count =====

void __thiscall std::__ndk1::__shared_weak_count::~__shared_weak_count(__shared_weak_count *this)

{
  (*(code *)PTR____shared_weak_count_001a1560)();
  return;
}


// ===== 00197770  __cxa_allocate_exception =====

void __cxa_allocate_exception(void)

{
  (*(code *)PTR___cxa_allocate_exception_001a1568)();
  return;
}


// ===== 00197780  std::bad_array_new_length::bad_array_new_length =====

void __thiscall std::bad_array_new_length::bad_array_new_length(bad_array_new_length *this)

{
  (*(code *)PTR_bad_array_new_length_001a1570)();
  return;
}


// ===== 00197790  std::bad_exception::~bad_exception =====

void __thiscall std::bad_exception::~bad_exception(bad_exception *this)

{
  (*(code *)PTR__bad_exception_001a1578)();
  return;
}


// ===== 001977a0  __cxa_throw =====

void __cxa_throw(void)

{
  (*(code *)PTR___cxa_throw_001a1580)();
  return;
}


// ===== 001977b0  std::__ndk1::__next_prime =====

void std::__ndk1::__next_prime(ulong param_1)

{
  (*(code *)PTR___next_prime_001a1588)();
  return;
}


// ===== 001977c0  std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>,std::__ndk1::equal_to<int>,std::__ndk1::hash<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>>>::__do_rehash<true> =====

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>,std::__ndk1::equal_to<int>,std::__ndk1::hash<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>>>
::__do_rehash<true>(__hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>,std::__ndk1::equal_to<int>,std::__ndk1::hash<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::shared_ptr<apng_drawable::ApngImage>>>>
                    *this,ulong param_1)

{
  (*(code *)PTR___do_rehash<true>_001a1590)();
  return;
}


// ===== 001977d0  std::__ndk1::mutex::~mutex =====

void __thiscall std::__ndk1::mutex::~mutex(mutex *this)

{
  (*(code *)PTR__mutex_001a1598)();
  return;
}


// ===== 001977e0  _JNIEnv::CallIntMethod =====

void _JNIEnv::CallIntMethod(_jobject *param_1,_jmethodID *param_2,...)

{
  (*(code *)PTR_CallIntMethod_001a15a0)();
  return;
}


// ===== 001977f0  png_sig_cmp =====

void png_sig_cmp(void)

{
  (*(code *)PTR_png_sig_cmp_001a15a8)();
  return;
}


// ===== 00197800  png_set_read_fn =====

void png_set_read_fn(void)

{
  (*(code *)PTR_png_set_read_fn_001a15b0)();
  return;
}


// ===== 00197810  png_get_io_ptr =====

void png_get_io_ptr(void)

{
  (*(code *)PTR_png_get_io_ptr_001a15b8)();
  return;
}


// ===== 00197820  png_error =====

void png_error(void)

{
  (*(code *)PTR_png_error_001a15c0)();
  return;
}


// ===== 00197830  png_init_filter_functions_neon =====

void png_init_filter_functions_neon(void)

{
  (*(code *)PTR_png_init_filter_functions_neon_001a15c8)();
  return;
}


// ===== 00197840  png_riffle_palette_neon =====

void png_riffle_palette_neon(void)

{
  (*(code *)PTR_png_riffle_palette_neon_001a15d0)();
  return;
}


// ===== 00197850  png_do_expand_palette_rgba8_neon =====

void png_do_expand_palette_rgba8_neon(void)

{
  (*(code *)PTR_png_do_expand_palette_rgba8_neon_001a15d8)();
  return;
}


// ===== 00197860  png_do_expand_palette_rgb8_neon =====

void png_do_expand_palette_rgb8_neon(void)

{
  (*(code *)PTR_png_do_expand_palette_rgb8_neon_001a15e0)();
  return;
}


// ===== 00197870  <EXTERNAL>::memcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_001a15e8)((int)__s1);
  return iVar1;
}


// ===== 00197880  png_malloc_warn =====

void png_malloc_warn(void)

{
  (*(code *)PTR_png_malloc_warn_001a15f0)();
  return;
}


// ===== 00197890  png_zfree =====

void png_zfree(void)

{
  (*(code *)PTR_png_zfree_001a15f8)();
  return;
}


// ===== 001978a0  png_free =====

void png_free(void)

{
  (*(code *)PTR_png_free_001a1600)();
  return;
}


// ===== 001978b0  png_reset_crc =====

void png_reset_crc(void)

{
  (*(code *)PTR_png_reset_crc_001a1608)();
  return;
}


// ===== 001978c0  <EXTERNAL>::crc32 =====

void crc32(void)

{
  (*(code *)PTR_crc32_001a1610)();
  return;
}


// ===== 001978d0  png_calculate_crc =====

void png_calculate_crc(void)

{
  (*(code *)PTR_png_calculate_crc_001a1618)();
  return;
}


// ===== 001978e0  png_user_version_check =====

void png_user_version_check(void)

{
  (*(code *)PTR_png_user_version_check_001a1620)();
  return;
}


// ===== 001978f0  png_safecat =====

void png_safecat(void)

{
  (*(code *)PTR_png_safecat_001a1628)();
  return;
}


// ===== 00197900  png_warning =====

void png_warning(void)

{
  (*(code *)PTR_png_warning_001a1630)();
  return;
}


// ===== 00197910  png_create_png_struct =====

void png_create_png_struct(void)

{
  (*(code *)PTR_png_create_png_struct_001a1638)();
  return;
}


// ===== 00197920  png_set_mem_fn =====

void png_set_mem_fn(void)

{
  (*(code *)PTR_png_set_mem_fn_001a1640)();
  return;
}


// ===== 00197930  png_set_error_fn =====

void png_set_error_fn(void)

{
  (*(code *)PTR_png_set_error_fn_001a1648)();
  return;
}


// ===== 00197940  png_malloc_base =====

void png_malloc_base(void)

{
  (*(code *)PTR_png_malloc_base_001a1650)();
  return;
}


// ===== 00197950  png_destroy_info_struct =====

void png_destroy_info_struct(void)

{
  (*(code *)PTR_png_destroy_info_struct_001a1658)();
  return;
}


// ===== 00197960  png_free_data =====

void png_free_data(void)

{
  (*(code *)PTR_png_free_data_001a1660)();
  return;
}


// ===== 00197970  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_001a1668)();
  return;
}


// ===== 00197980  png_save_int_32 =====

void png_save_int_32(void)

{
  (*(code *)PTR_png_save_int_32_001a1670)();
  return;
}


// ===== 00197990  png_save_uint_32 =====

void png_save_uint_32(void)

{
  (*(code *)PTR_png_save_uint_32_001a1678)();
  return;
}


// ===== 001979a0  png_convert_to_rfc1123_buffer =====

void png_convert_to_rfc1123_buffer(void)

{
  (*(code *)PTR_png_convert_to_rfc1123_buffer_001a1680)();
  return;
}


// ===== 001979b0  png_format_number =====

void png_format_number(void)

{
  (*(code *)PTR_png_format_number_001a1688)();
  return;
}


// ===== 001979c0  png_handle_as_unknown =====

void png_handle_as_unknown(void)

{
  (*(code *)PTR_png_handle_as_unknown_001a1690)();
  return;
}


// ===== 001979d0  png_chunk_unknown_handling =====

void png_chunk_unknown_handling(void)

{
  (*(code *)PTR_png_chunk_unknown_handling_001a1698)();
  return;
}


// ===== 001979e0  <EXTERNAL>::inflateReset =====

void inflateReset(void)

{
  (*(code *)PTR_inflateReset_001a16a0)();
  return;
}


// ===== 001979f0  png_zstream_error =====

void png_zstream_error(void)

{
  (*(code *)PTR_png_zstream_error_001a16a8)();
  return;
}


// ===== 00197a00  png_colorspace_set_gamma =====

void png_colorspace_set_gamma(void)

{
  (*(code *)PTR_png_colorspace_set_gamma_001a16b0)();
  return;
}


// ===== 00197a10  png_chunk_report =====

void png_chunk_report(void)

{
  (*(code *)PTR_png_chunk_report_001a16b8)();
  return;
}


// ===== 00197a20  png_colorspace_sync_info =====

void png_colorspace_sync_info(void)

{
  (*(code *)PTR_png_colorspace_sync_info_001a16c0)();
  return;
}


// ===== 00197a30  png_colorspace_sync =====

void png_colorspace_sync(void)

{
  (*(code *)PTR_png_colorspace_sync_001a16c8)();
  return;
}


// ===== 00197a40  png_colorspace_set_chromaticities =====

void png_colorspace_set_chromaticities(void)

{
  (*(code *)PTR_png_colorspace_set_chromaticities_001a16d0)();
  return;
}


// ===== 00197a50  png_benign_error =====

void png_benign_error(void)

{
  (*(code *)PTR_png_benign_error_001a16d8)();
  return;
}


// ===== 00197a60  png_colorspace_set_endpoints =====

void png_colorspace_set_endpoints(void)

{
  (*(code *)PTR_png_colorspace_set_endpoints_001a16e0)();
  return;
}


// ===== 00197a70  png_colorspace_set_sRGB =====

void png_colorspace_set_sRGB(void)

{
  (*(code *)PTR_png_colorspace_set_sRGB_001a16e8)();
  return;
}


// ===== 00197a80  png_icc_check_length =====

void png_icc_check_length(void)

{
  (*(code *)PTR_png_icc_check_length_001a16f0)();
  return;
}


// ===== 00197a90  png_icc_check_header =====

void png_icc_check_header(void)

{
  (*(code *)PTR_png_icc_check_header_001a16f8)();
  return;
}


// ===== 00197aa0  png_icc_check_tag_table =====

void png_icc_check_tag_table(void)

{
  (*(code *)PTR_png_icc_check_tag_table_001a1700)();
  return;
}


// ===== 00197ab0  png_icc_set_sRGB =====

void png_icc_set_sRGB(void)

{
  (*(code *)PTR_png_icc_set_sRGB_001a1708)();
  return;
}


// ===== 00197ac0  <EXTERNAL>::adler32 =====

void adler32(void)

{
  (*(code *)PTR_adler32_001a1710)();
  return;
}


// ===== 00197ad0  png_colorspace_set_ICC =====

void png_colorspace_set_ICC(void)

{
  (*(code *)PTR_png_colorspace_set_ICC_001a1718)();
  return;
}


// ===== 00197ae0  png_colorspace_set_rgb_coefficients =====

void png_colorspace_set_rgb_coefficients(void)

{
  (*(code *)PTR_png_colorspace_set_rgb_coefficients_001a1720)();
  return;
}


// ===== 00197af0  png_muldiv =====

void png_muldiv(void)

{
  (*(code *)PTR_png_muldiv_001a1728)();
  return;
}


// ===== 00197b00  png_check_IHDR =====

void png_check_IHDR(void)

{
  (*(code *)PTR_png_check_IHDR_001a1730)();
  return;
}


// ===== 00197b10  png_check_fp_number =====

void png_check_fp_number(void)

{
  (*(code *)PTR_png_check_fp_number_001a1738)();
  return;
}


// ===== 00197b20  png_check_fp_string =====

void png_check_fp_string(void)

{
  (*(code *)PTR_png_check_fp_string_001a1740)();
  return;
}


// ===== 00197b30  png_ascii_from_fp =====

void png_ascii_from_fp(void)

{
  (*(code *)PTR_png_ascii_from_fp_001a1748)();
  return;
}


// ===== 00197b40  <EXTERNAL>::frexp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double frexp(double __x,int *__exponent)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_frexp_001a1750)();
  return dVar1;
}


// ===== 00197b50  <EXTERNAL>::modf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double modf(double __x,double *__iptr)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_modf_001a1758)();
  return dVar1;
}


// ===== 00197b60  png_ascii_from_fixed =====

void png_ascii_from_fixed(void)

{
  (*(code *)PTR_png_ascii_from_fixed_001a1760)();
  return;
}


// ===== 00197b70  png_fixed =====

void png_fixed(void)

{
  (*(code *)PTR_png_fixed_001a1768)();
  return;
}


// ===== 00197b80  png_fixed_error =====

void png_fixed_error(void)

{
  (*(code *)PTR_png_fixed_error_001a1770)();
  return;
}


// ===== 00197b90  png_muldiv_warn =====

void png_muldiv_warn(void)

{
  (*(code *)PTR_png_muldiv_warn_001a1778)();
  return;
}


// ===== 00197ba0  png_reciprocal =====

void png_reciprocal(void)

{
  (*(code *)PTR_png_reciprocal_001a1780)();
  return;
}


// ===== 00197bb0  png_gamma_significant =====

void png_gamma_significant(void)

{
  (*(code *)PTR_png_gamma_significant_001a1788)();
  return;
}


// ===== 00197bc0  png_reciprocal2 =====

void png_reciprocal2(void)

{
  (*(code *)PTR_png_reciprocal2_001a1790)();
  return;
}


// ===== 00197bd0  png_gamma_8bit_correct =====

void png_gamma_8bit_correct(void)

{
  (*(code *)PTR_png_gamma_8bit_correct_001a1798)();
  return;
}


// ===== 00197be0  <EXTERNAL>::pow =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double pow(double __x,double __y)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_pow_001a17a0)();
  return dVar1;
}


// ===== 00197bf0  png_gamma_16bit_correct =====

void png_gamma_16bit_correct(void)

{
  (*(code *)PTR_png_gamma_16bit_correct_001a17a8)();
  return;
}


// ===== 00197c00  png_gamma_correct =====

void png_gamma_correct(void)

{
  (*(code *)PTR_png_gamma_correct_001a17b0)();
  return;
}


// ===== 00197c10  png_destroy_gamma_table =====

void png_destroy_gamma_table(void)

{
  (*(code *)PTR_png_destroy_gamma_table_001a17b8)();
  return;
}


// ===== 00197c20  png_build_gamma_table =====

void png_build_gamma_table(void)

{
  (*(code *)PTR_png_build_gamma_table_001a17c0)();
  return;
}


// ===== 00197c30  png_calloc =====

void png_calloc(void)

{
  (*(code *)PTR_png_calloc_001a17c8)();
  return;
}


// ===== 00197c40  png_malloc =====

void png_malloc(void)

{
  (*(code *)PTR_png_malloc_001a17d0)();
  return;
}


// ===== 00197c50  png_image_free =====

void png_image_free(void)

{
  (*(code *)PTR_png_image_free_001a17d8)();
  return;
}


// ===== 00197c60  <EXTERNAL>::fclose =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_001a17e0)((int)__stream);
  return iVar1;
}


// ===== 00197c70  png_destroy_write_struct =====

void png_destroy_write_struct(void)

{
  (*(code *)PTR_png_destroy_write_struct_001a17e8)();
  return;
}


// ===== 00197c80  png_image_error =====

void png_image_error(void)

{
  (*(code *)PTR_png_image_error_001a17f0)();
  return;
}


// ===== 00197c90  <EXTERNAL>::fprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_001a17f8)((int)__stream);
  return iVar1;
}


// ===== 00197ca0  <EXTERNAL>::fputc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_001a1800)(__c);
  return iVar1;
}


// ===== 00197cb0  png_longjmp =====

void png_longjmp(void)

{
  (*(code *)PTR_png_longjmp_001a1808)();
  return;
}


// ===== 00197cc0  png_warning_parameter =====

void png_warning_parameter(void)

{
  (*(code *)PTR_png_warning_parameter_001a1810)();
  return;
}


// ===== 00197cd0  png_warning_parameter_signed =====

void png_warning_parameter_signed(void)

{
  (*(code *)PTR_png_warning_parameter_signed_001a1818)();
  return;
}


// ===== 00197ce0  png_formatted_warning =====

void png_formatted_warning(void)

{
  (*(code *)PTR_png_formatted_warning_001a1820)();
  return;
}


// ===== 00197cf0  png_chunk_error =====

void png_chunk_error(void)

{
  (*(code *)PTR_png_chunk_error_001a1828)();
  return;
}


// ===== 00197d00  png_chunk_warning =====

void png_chunk_warning(void)

{
  (*(code *)PTR_png_chunk_warning_001a1830)();
  return;
}


// ===== 00197d10  png_app_warning =====

void png_app_warning(void)

{
  (*(code *)PTR_png_app_warning_001a1838)();
  return;
}


// ===== 00197d20  png_app_error =====

void png_app_error(void)

{
  (*(code *)PTR_png_app_error_001a1840)();
  return;
}


// ===== 00197d30  png_chunk_benign_error =====

void png_chunk_benign_error(void)

{
  (*(code *)PTR_png_chunk_benign_error_001a1848)();
  return;
}


// ===== 00197d40  png_free_jmpbuf =====

void png_free_jmpbuf(void)

{
  (*(code *)PTR_png_free_jmpbuf_001a1850)();
  return;
}


// ===== 00197d50  <EXTERNAL>::abort =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_001a1858)();
  return;
}


// ===== 00197d60  png_safe_execute =====

void png_safe_execute(void)

{
  (*(code *)PTR_png_safe_execute_001a1860)();
  return;
}


// ===== 00197d70  png_get_valid =====

void png_get_valid(void)

{
  (*(code *)PTR_png_get_valid_001a1868)();
  return;
}


// ===== 00197d80  <EXTERNAL>::atof =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double atof(char *__nptr)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_atof_001a1870)();
  return dVar1;
}


// ===== 00197d90  png_destroy_png_struct =====

void png_destroy_png_struct(void)

{
  (*(code *)PTR_png_destroy_png_struct_001a1878)();
  return;
}


// ===== 00197da0  <EXTERNAL>::malloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_001a1880)();
  return pvVar1;
}


// ===== 00197db0  png_malloc_array =====

void png_malloc_array(void)

{
  (*(code *)PTR_png_malloc_array_001a1888)();
  return;
}


// ===== 00197dc0  png_realloc_array =====

void png_realloc_array(void)

{
  (*(code *)PTR_png_realloc_array_001a1890)();
  return;
}


// ===== 00197dd0  png_read_sig =====

void png_read_sig(void)

{
  (*(code *)PTR_png_read_sig_001a1898)();
  return;
}


// ===== 00197de0  png_read_chunk_header =====

void png_read_chunk_header(void)

{
  (*(code *)PTR_png_read_chunk_header_001a18a0)();
  return;
}


// ===== 00197df0  png_handle_unknown =====

void png_handle_unknown(void)

{
  (*(code *)PTR_png_handle_unknown_001a18a8)();
  return;
}


// ===== 00197e00  png_handle_IEND =====

void png_handle_IEND(void)

{
  (*(code *)PTR_png_handle_IEND_001a18b0)();
  return;
}


// ===== 00197e10  png_handle_IHDR =====

void png_handle_IHDR(void)

{
  (*(code *)PTR_png_handle_IHDR_001a18b8)();
  return;
}


// ===== 00197e20  png_handle_gAMA =====

void png_handle_gAMA(void)

{
  (*(code *)PTR_png_handle_gAMA_001a18c0)();
  return;
}


// ===== 00197e30  png_handle_tEXt =====

void png_handle_tEXt(void)

{
  (*(code *)PTR_png_handle_tEXt_001a18c8)();
  return;
}


// ===== 00197e40  png_handle_eXIf =====

void png_handle_eXIf(void)

{
  (*(code *)PTR_png_handle_eXIf_001a18d0)();
  return;
}


// ===== 00197e50  png_handle_sCAL =====

void png_handle_sCAL(void)

{
  (*(code *)PTR_png_handle_sCAL_001a18d8)();
  return;
}


// ===== 00197e60  png_handle_iTXt =====

void png_handle_iTXt(void)

{
  (*(code *)PTR_png_handle_iTXt_001a18e0)();
  return;
}


// ===== 00197e70  png_handle_zTXt =====

void png_handle_zTXt(void)

{
  (*(code *)PTR_png_handle_zTXt_001a18e8)();
  return;
}


// ===== 00197e80  png_handle_acTL =====

void png_handle_acTL(void)

{
  (*(code *)PTR_png_handle_acTL_001a18f0)();
  return;
}


// ===== 00197e90  png_handle_pCAL =====

void png_handle_pCAL(void)

{
  (*(code *)PTR_png_handle_pCAL_001a18f8)();
  return;
}


// ===== 00197ea0  png_handle_cHRM =====

void png_handle_cHRM(void)

{
  (*(code *)PTR_png_handle_cHRM_001a1900)();
  return;
}


// ===== 00197eb0  png_handle_sBIT =====

void png_handle_sBIT(void)

{
  (*(code *)PTR_png_handle_sBIT_001a1908)();
  return;
}


// ===== 00197ec0  png_handle_bKGD =====

void png_handle_bKGD(void)

{
  (*(code *)PTR_png_handle_bKGD_001a1910)();
  return;
}


// ===== 00197ed0  png_handle_pHYs =====

void png_handle_pHYs(void)

{
  (*(code *)PTR_png_handle_pHYs_001a1918)();
  return;
}


// ===== 00197ee0  png_handle_PLTE =====

void png_handle_PLTE(void)

{
  (*(code *)PTR_png_handle_PLTE_001a1920)();
  return;
}


// ===== 00197ef0  png_handle_oFFs =====

void png_handle_oFFs(void)

{
  (*(code *)PTR_png_handle_oFFs_001a1928)();
  return;
}


// ===== 00197f00  png_handle_fdAT =====

void png_handle_fdAT(void)

{
  (*(code *)PTR_png_handle_fdAT_001a1930)();
  return;
}


// ===== 00197f10  png_handle_sRGB =====

void png_handle_sRGB(void)

{
  (*(code *)PTR_png_handle_sRGB_001a1938)();
  return;
}


// ===== 00197f20  png_handle_iCCP =====

void png_handle_iCCP(void)

{
  (*(code *)PTR_png_handle_iCCP_001a1940)();
  return;
}


// ===== 00197f30  png_handle_tRNS =====

void png_handle_tRNS(void)

{
  (*(code *)PTR_png_handle_tRNS_001a1948)();
  return;
}


// ===== 00197f40  png_handle_fcTL =====

void png_handle_fcTL(void)

{
  (*(code *)PTR_png_handle_fcTL_001a1950)();
  return;
}


// ===== 00197f50  png_handle_sPLT =====

void png_handle_sPLT(void)

{
  (*(code *)PTR_png_handle_sPLT_001a1958)();
  return;
}


// ===== 00197f60  png_handle_hIST =====

void png_handle_hIST(void)

{
  (*(code *)PTR_png_handle_hIST_001a1960)();
  return;
}


// ===== 00197f70  png_handle_tIME =====

void png_handle_tIME(void)

{
  (*(code *)PTR_png_handle_tIME_001a1968)();
  return;
}


// ===== 00197f80  png_have_info =====

void png_have_info(void)

{
  (*(code *)PTR_png_have_info_001a1970)();
  return;
}


// ===== 00197f90  png_read_reset =====

void png_read_reset(void)

{
  (*(code *)PTR_png_read_reset_001a1978)();
  return;
}


// ===== 00197fa0  png_crc_finish =====

void png_crc_finish(void)

{
  (*(code *)PTR_png_crc_finish_001a1980)();
  return;
}


// ===== 00197fb0  png_ensure_sequence_number =====

void png_ensure_sequence_number(void)

{
  (*(code *)PTR_png_ensure_sequence_number_001a1988)();
  return;
}


// ===== 00197fc0  png_read_start_row =====

void png_read_start_row(void)

{
  (*(code *)PTR_png_read_start_row_001a1990)();
  return;
}


// ===== 00197fd0  png_read_transform_info =====

void png_read_transform_info(void)

{
  (*(code *)PTR_png_read_transform_info_001a1998)();
  return;
}


// ===== 00197fe0  png_read_row =====

void png_read_row(void)

{
  (*(code *)PTR_png_read_row_001a19a0)();
  return;
}


// ===== 00197ff0  png_read_IDAT_data =====

void png_read_IDAT_data(void)

{
  (*(code *)PTR_png_read_IDAT_data_001a19a8)();
  return;
}


// ===== 00198000  png_read_filter_row =====

void png_read_filter_row(void)

{
  (*(code *)PTR_png_read_filter_row_001a19b0)();
  return;
}


// ===== 00198010  png_combine_row =====

void png_combine_row(void)

{
  (*(code *)PTR_png_combine_row_001a19b8)();
  return;
}


// ===== 00198020  png_read_finish_row =====

void png_read_finish_row(void)

{
  (*(code *)PTR_png_read_finish_row_001a19c0)();
  return;
}


// ===== 00198030  png_do_read_transformations =====

void png_do_read_transformations(void)

{
  (*(code *)PTR_png_do_read_transformations_001a19c8)();
  return;
}


// ===== 00198040  png_do_read_interlace =====

void png_do_read_interlace(void)

{
  (*(code *)PTR_png_do_read_interlace_001a19d0)();
  return;
}


// ===== 00198050  png_read_finish_IDAT =====

void png_read_finish_IDAT(void)

{
  (*(code *)PTR_png_read_finish_IDAT_001a19d8)();
  return;
}


// ===== 00198060  <EXTERNAL>::inflateEnd =====

void inflateEnd(void)

{
  (*(code *)PTR_inflateEnd_001a19e0)();
  return;
}


// ===== 00198070  png_set_scale_16 =====

void png_set_scale_16(void)

{
  (*(code *)PTR_png_set_scale_16_001a19e8)();
  return;
}


// ===== 00198080  png_set_strip_alpha =====

void png_set_strip_alpha(void)

{
  (*(code *)PTR_png_set_strip_alpha_001a19f0)();
  return;
}


// ===== 00198090  png_set_packing =====

void png_set_packing(void)

{
  (*(code *)PTR_png_set_packing_001a19f8)();
  return;
}


// ===== 001980a0  png_set_packswap =====

void png_set_packswap(void)

{
  (*(code *)PTR_png_set_packswap_001a1a00)();
  return;
}


// ===== 001980b0  png_set_invert_mono =====

void png_set_invert_mono(void)

{
  (*(code *)PTR_png_set_invert_mono_001a1a08)();
  return;
}


// ===== 001980c0  png_set_shift =====

void png_set_shift(void)

{
  (*(code *)PTR_png_set_shift_001a1a10)();
  return;
}


// ===== 001980d0  png_set_bgr =====

void png_set_bgr(void)

{
  (*(code *)PTR_png_set_bgr_001a1a18)();
  return;
}


// ===== 001980e0  png_set_swap_alpha =====

void png_set_swap_alpha(void)

{
  (*(code *)PTR_png_set_swap_alpha_001a1a20)();
  return;
}


// ===== 001980f0  png_set_swap =====

void png_set_swap(void)

{
  (*(code *)PTR_png_set_swap_001a1a28)();
  return;
}


// ===== 00198100  png_set_invert_alpha =====

void png_set_invert_alpha(void)

{
  (*(code *)PTR_png_set_invert_alpha_001a1a30)();
  return;
}


// ===== 00198110  png_set_expand_16 =====

void png_set_expand_16(void)

{
  (*(code *)PTR_png_set_expand_16_001a1a38)();
  return;
}


// ===== 00198120  png_set_benign_errors =====

void png_set_benign_errors(void)

{
  (*(code *)PTR_png_set_benign_errors_001a1a40)();
  return;
}


// ===== 00198130  <EXTERNAL>::fopen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_001a1a48)();
  return pFVar1;
}


// ===== 00198140  <EXTERNAL>::__errno =====

void __errno(void)

{
  (*(code *)PTR___errno_001a1a50)();
  return;
}


// ===== 00198150  <EXTERNAL>::strerror =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_001a1a58)(__errnum);
  return pcVar1;
}


// ===== 00198160  png_set_rgb_to_gray_fixed =====

void png_set_rgb_to_gray_fixed(void)

{
  (*(code *)PTR_png_set_rgb_to_gray_fixed_001a1a60)();
  return;
}


// ===== 00198170  png_set_background_fixed =====

void png_set_background_fixed(void)

{
  (*(code *)PTR_png_set_background_fixed_001a1a68)();
  return;
}


// ===== 00198180  png_set_tRNS_to_alpha =====

void png_set_tRNS_to_alpha(void)

{
  (*(code *)PTR_png_set_tRNS_to_alpha_001a1a70)();
  return;
}


// ===== 00198190  png_set_alpha_mode_fixed =====

void png_set_alpha_mode_fixed(void)

{
  (*(code *)PTR_png_set_alpha_mode_fixed_001a1a78)();
  return;
}


// ===== 001981a0  png_set_keep_unknown_chunks =====

void png_set_keep_unknown_chunks(void)

{
  (*(code *)PTR_png_set_keep_unknown_chunks_001a1a80)();
  return;
}


// ===== 001981b0  png_read_data =====

void png_read_data(void)

{
  (*(code *)PTR_png_read_data_001a1a88)();
  return;
}


// ===== 001981c0  <EXTERNAL>::fread =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_001a1a90)();
  return sVar1;
}


// ===== 001981d0  png_set_gamma_fixed =====

void png_set_gamma_fixed(void)

{
  (*(code *)PTR_png_set_gamma_fixed_001a1a98)();
  return;
}


// ===== 001981e0  png_init_read_transformations =====

void png_init_read_transformations(void)

{
  (*(code *)PTR_png_init_read_transformations_001a1aa0)();
  return;
}


// ===== 001981f0  png_do_strip_channel =====

void png_do_strip_channel(void)

{
  (*(code *)PTR_png_do_strip_channel_001a1aa8)();
  return;
}


// ===== 00198200  png_do_invert =====

void png_do_invert(void)

{
  (*(code *)PTR_png_do_invert_001a1ab0)();
  return;
}


// ===== 00198210  png_do_check_palette_indexes =====

void png_do_check_palette_indexes(void)

{
  (*(code *)PTR_png_do_check_palette_indexes_001a1ab8)();
  return;
}


// ===== 00198220  png_do_bgr =====

void png_do_bgr(void)

{
  (*(code *)PTR_png_do_bgr_001a1ac0)();
  return;
}


// ===== 00198230  png_do_packswap =====

void png_do_packswap(void)

{
  (*(code *)PTR_png_do_packswap_001a1ac8)();
  return;
}


// ===== 00198240  png_do_swap =====

void png_do_swap(void)

{
  (*(code *)PTR_png_do_swap_001a1ad0)();
  return;
}


