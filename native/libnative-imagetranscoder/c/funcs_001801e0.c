// ===== 001801e0  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001801e8  FUN_001801e8 =====

void FUN_001801e8(long param_1,undefined8 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x001802b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  return;
}


// ===== 001802c0  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001802c8  FUN_001802c8 =====

void FUN_001802c8(long param_1,undefined8 *param_2)

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
    uVar2 = s_unsigned_00111170._0_8_;
    ((char *)((long)pvVar3 + lVar4))[8] = ' ';
    *(undefined8 *)((long)pvVar3 + lVar4) = uVar2;
    lVar1 = param_2[1];
    uVar6 = param_2[2];
    lVar4 = lVar1 + 9;
    param_2[1] = lVar4;
    pvVar3 = (void *)*param_2;
    if (lVar1 + 0x10U <= uVar6) goto LAB_00180398;
  }
  else {
    uVar6 = param_2[2];
    pvVar3 = (void *)*param_2;
    if (lVar4 + 7U <= uVar6) goto LAB_00180398;
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
LAB_00180398:
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
  FUN_0017419c(*(undefined8 *)(param_1 + 0x10),param_2,0x13,0);
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


// ===== 00180498  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001804a0  FUN_001804a0 =====

void FUN_001804a0(long param_1,undefined8 *param_2)

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


// ===== 00180544  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0018054c  FUN_0018054c =====

void FUN_0018054c(long param_1,undefined8 *param_2)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_00190c98;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x1e;
  uVar3 = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  return;
}


// ===== 001805ec  FUN_001805ec =====

void FUN_001805ec(long param_1,undefined8 *param_2,undefined8 *param_3)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_00190d08;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x1d;
  uVar3 = *param_2;
  uVar4 = *param_3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar4;
  return;
}


// ===== 00180694  FUN_00180694 =====

void FUN_00180694(long param_1,undefined8 *param_2)

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
  uVar2 = CONCAT53(s_pixel_vector__0011325a._8_5_,s_pixel_vector__0011325a._5_3_);
  *(undefined8 *)((long)pvVar3 + lVar4) =
       CONCAT35(s_pixel_vector__0011325a._5_3_,s_pixel_vector__0011325a._0_5_);
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


// ===== 001807b4  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001807bc  FUN_001807bc =====

void FUN_001807bc(long param_1,undefined8 *param_2)

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


// ===== 00180910  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00180918  FUN_00180918 =====

void FUN_00180918(long param_1,undefined8 *param_2,undefined8 *param_3)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_00190d78;
  uVar4 = *param_2;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0xf;
  uVar3 = *param_3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x400;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar4;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar3;
  return;
}


// ===== 001809bc  FUN_001809bc =====

undefined8 FUN_001809bc(void)

{
  return 1;
}


// ===== 001809c8  FUN_001809c8 =====

undefined8 FUN_001809c8(void)

{
  return 1;
}


// ===== 001809d4  FUN_001809d4 =====

void FUN_001809d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001809e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  return;
}


// ===== 001809e8  FUN_001809e8 =====

void FUN_001809e8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  size_t sVar4;
  long *plVar5;
  
  lVar3 = param_2[1];
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00169224("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/Utility.h",0xae,&DAT_00111157)
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
                    /* WARNING: Could not recover jumptable at 0x00180b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x28))(plVar5,param_2);
  return;
}


// ===== 00180b8c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00180b94  FUN_00180b94 =====

void FUN_00180b94(long param_1,undefined8 *param_2,long *param_3)

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
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_00190de8;
  uVar5 = *param_2;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0xe;
  *(ushort *)((long)puVar2 + lVar3 + 0x19) =
       uVar1 & 0xc0 | 0x500 | *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x20) = uVar5;
  *(long *)((long)puVar2 + lVar3 + 0x28) = lVar4;
  return;
}


// ===== 00180c48  FUN_00180c48 =====

ulong FUN_00180c48(long param_1)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *(byte *)((long)*(undefined8 **)(param_1 + 0x18) + 9);
  if ((bVar1 & 0xc0) == 0x80) {
                    /* WARNING: Could not recover jumptable at 0x00180c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x18))();
    return uVar2;
  }
  return (ulong)(bVar1 < 0x40);
}


// ===== 00180c78  FUN_00180c78 =====

void FUN_00180c78(long param_1,undefined8 *param_2)

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
      if ((uVar4 & 1) != 0) goto LAB_00180cfc;
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
      goto LAB_00180d78;
    }
  }
LAB_00180cfc:
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
LAB_00180d78:
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


// ===== 00180e38  FUN_00180e38 =====

void FUN_00180e38(long param_1,undefined8 *param_2)

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
      if ((uVar4 & 1) != 0) goto LAB_00180eac;
      plVar3 = *(long **)(param_1 + 0x18);
      uVar1 = *(ushort *)((long)plVar3 + 9);
    }
    if (((uVar1 >> 10 & 3) != 0) &&
       (((uVar1 >> 10 & 3) != 2 ||
        (uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2), (uVar4 & 1) == 0))))
    goto LAB_00180ef8;
  }
LAB_00180eac:
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
LAB_00180ef8:
                    /* WARNING: Could not recover jumptable at 0x00180f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),param_2);
  return;
}


// ===== 00180f1c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00180f24  FUN_00180f24 =====

void FUN_00180f24(long param_1,undefined8 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00181048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}


// ===== 00181054  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0018105c  FUN_0018105c =====

ulong FUN_0018105c(long param_1)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *(byte *)((long)*(undefined8 **)(param_1 + 0x10) + 9);
  if ((bVar1 & 0xc0) == 0x80) {
                    /* WARNING: Could not recover jumptable at 0x0018107c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x10))();
    return uVar2;
  }
  return (ulong)(bVar1 < 0x40);
}


// ===== 0018108c  FUN_0018108c =====

void FUN_0018108c(long param_1,undefined8 *param_2)

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
    goto LAB_00181280;
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
LAB_001811f0:
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
      if ((uVar4 & 1) != 0) goto LAB_001811f0;
      plVar3 = *(long **)(param_1 + 0x10);
      uVar1 = *(ushort *)((long)plVar3 + 9);
    }
    if (((uVar1 >> 10 & 3) == 0) ||
       (((uVar1 >> 10 & 3) == 2 &&
        (uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2), (uVar4 & 1) != 0))))
    goto LAB_001811f0;
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
LAB_00181280:
  *(undefined1 *)((long)pvVar5 + lVar6) = uVar7;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 001813cc  FUN_001813cc =====

void FUN_001813cc(long param_1,undefined8 *param_2)

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
      if ((uVar4 & 1) != 0) goto LAB_001814a0;
      plVar3 = *(long **)(param_1 + 0x10);
      uVar1 = *(ushort *)((long)plVar3 + 9);
    }
    if (((uVar1 >> 10 & 3) != 0) &&
       (((uVar1 >> 10 & 3) != 2 ||
        (uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2), (uVar4 & 1) == 0))))
    goto LAB_001814ec;
  }
LAB_001814a0:
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
LAB_001814ec:
                    /* WARNING: Could not recover jumptable at 0x00181508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))(*(long **)(param_1 + 0x10),param_2);
  return;
}


// ===== 00181520  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00181528  FUN_00181528 =====

ulong FUN_00181528(long param_1)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *(byte *)((long)*(undefined8 **)(param_1 + 0x10) + 9);
  if ((bVar1 & 0xc0) == 0x80) {
                    /* WARNING: Could not recover jumptable at 0x00181548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x10))();
    return uVar2;
  }
  return (ulong)(bVar1 < 0x40);
}


// ===== 00181558  FUN_00181558 =====

void FUN_00181558(long param_1,undefined8 *param_2)

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
                    /* try { // try from 001815a0 to 0018169b has its CatchHandler @ 00181784 */
  auVar9 = FUN_001818d8(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),param_2);
  plVar6 = auVar9._8_8_;
  if (plVar6 == (long *)0x0) goto LAB_00181760;
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
LAB_001816a0:
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
      if ((uVar4 & 1) != 0) goto LAB_001816a0;
      uVar1 = *(ushort *)((long)plVar6 + 9);
    }
    if (((uVar1 >> 10 & 3) == 0) ||
       (((uVar1 >> 10 & 3) == 2 &&
        (uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,param_2), (uVar4 & 1) != 0))))
    goto LAB_001816a0;
  }
  bVar3 = (auVar9 & (undefined1  [16])0xffffffff) != (undefined1  [16])0x0;
  sVar8 = 1;
  if (bVar3) {
    sVar8 = 2;
  }
  lVar7 = param_2[1];
  pvVar5 = (void *)*param_2;
  __src = &UNK_001114e4;
  if (bVar3) {
    __src = &DAT_001114e6;
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
                    /* try { // try from 00181778 to 00181783 has its CatchHandler @ 00181784 */
      abort();
    }
    lVar7 = param_2[1];
  }
  memcpy((void *)((long)pvVar5 + lVar7),__src,sVar8);
  param_2[1] = param_2[1] + sVar8;
LAB_00181760:
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return;
}


// ===== 0018178c  FUN_0018178c =====

void FUN_0018178c(long param_1,undefined8 *param_2)

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
                    /* try { // try from 001817d4 to 001818bf has its CatchHandler @ 001818c0 */
  FUN_001818d8(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),param_2);
  if (extraout_x1 == (long *)0x0) goto LAB_001818a4;
  uVar1 = *(ushort *)((long)extraout_x1 + 9);
  uVar2 = uVar1 >> 8 & 3;
  if (uVar2 == 0) {
LAB_00181844:
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
      if ((uVar3 & 1) != 0) goto LAB_00181844;
      uVar1 = *(ushort *)((long)extraout_x1 + 9);
    }
    if (((uVar1 >> 10 & 3) == 0) ||
       (((uVar1 >> 10 & 3) == 2 &&
        (uVar3 = (**(code **)(*extraout_x1 + 0x10))(extraout_x1,param_2), (uVar3 & 1) != 0))))
    goto LAB_00181844;
  }
  (**(code **)(*extraout_x1 + 0x28))(extraout_x1,param_2);
LAB_001818a4:
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return;
}


// ===== 001818c8  FUN_001818c8 =====

void FUN_001818c8(void)

{
  return;
}


// ===== 001818d0  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001818d8  FUN_001818d8 =====

undefined1  [16] FUN_001818d8(long *param_1,uint param_2,undefined8 param_3)

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
                    /* try { // try from 00181928 to 00181933 has its CatchHandler @ 00181a68 */
      lVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_3);
      if (*(char *)(lVar2 + 8) != '\r') {
        uVar5 = param_2;
        if (local_98 == &local_80) goto LAB_00181a18;
        goto LAB_00181a14;
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
                    /* try { // try from 00181a3c to 00181a63 has its CatchHandler @ 00181a64 */
                    /* WARNING: Subroutine does not return */
      FUN_00169224("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0x96,
                   "Invalid access!");
    }
  } while (param_1 != (long *)local_98[uVar4]);
  param_1 = (long *)0x0;
  if (local_98 != &local_80) {
LAB_00181a14:
    free(local_98);
    uVar5 = param_2;
  }
LAB_00181a18:
  auVar6._4_4_ = 0;
  auVar6._0_4_ = uVar5;
  auVar6._8_8_ = param_1;
  return auVar6;
}


// ===== 00181a84  std::type_info::~type_info =====

void __thiscall std::type_info::~type_info(type_info *this)

{
  ~type_info(this);
  return;
}


// ===== 00181a8c  FUN_00181a8c =====

void FUN_00181a8c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x181a94);
  (*pcVar1)();
}


// ===== 00181a94  FUN_00181a94 =====

void FUN_00181a94(void)

{
  return;
}


// ===== 00181a9c  FUN_00181a9c =====

void FUN_00181a9c(void)

{
  return;
}


// ===== 00181aa4  FUN_00181aa4 =====

void FUN_00181aa4(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00181ad0  FUN_00181ad0 =====

void FUN_00181ad0(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00181afc  FUN_00181afc =====

void FUN_00181afc(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00181b28  FUN_00181b28 =====

void FUN_00181b28(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00181b54  FUN_00181b54 =====

void FUN_00181b54(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00181b80  FUN_00181b80 =====

void FUN_00181b80(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00181bac  FUN_00181bac =====

void FUN_00181bac(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00181bd8  FUN_00181bd8 =====

void FUN_00181bd8(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00181c04  FUN_00181c04 =====

void FUN_00181c04(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00181c30  FUN_00181c30 =====

void FUN_00181c30(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00181c5c  FUN_00181c5c =====

bool FUN_00181c5c(long param_1,long param_2)

{
  return *(long *)(param_1 + 8) == *(long *)(param_2 + 8);
}


// ===== 00181c74  FUN_00181c74 =====

undefined8 FUN_00181c74(void)

{
  return 0;
}


// ===== 00181c80  FUN_00181c80 =====

undefined8 FUN_00181c80(void)

{
  return 0;
}


// ===== 00181c8c  FUN_00181c8c =====

bool FUN_00181c8c(long param_1,long param_2)

{
  return *(long *)(param_1 + 8) == *(long *)(param_2 + 8);
}


// ===== 00181ca4  FUN_00181ca4 =====

long * FUN_00181ca4(long param_1,long param_2,undefined8 *param_3)

{
  long *local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined7 uStack_38;
  undefined1 local_31;
  undefined7 uStack_30;
  undefined8 uStack_29;
  
  if (*(long *)(param_1 + 8) != *(long *)(param_2 + 8)) {
    local_70 = (long *)__dynamic_cast(param_2,PTR_PTR_001921a0,PTR_PTR_001921a8,0);
    if (local_70 != (long *)0x0) {
      uStack_68 = 0;
      uStack_58 = 0xffffffffffffffff;
      uStack_30 = 0;
      uStack_48 = 0;
      local_50 = 0;
      uStack_38 = 0;
      local_31 = 0;
      local_40 = 0;
      uStack_29 = 0x100;
      local_60 = param_1;
      (**(code **)(*local_70 + 0x38))(local_70,&local_70,*param_3,1);
      local_70 = (long *)(ulong)((int)local_40 == 1);
      if ((int)local_40 == 1) {
        *param_3 = local_50;
      }
    }
    return local_70;
  }
  return (long *)0x1;
}


// ===== 00181d64  __dynamic_cast =====

long __dynamic_cast(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *local_90;
  long *plStack_88;
  long *local_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  undefined8 local_60;
  int local_58;
  int local_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined1 uStack_42;
  
  lVar3 = *(long *)(*param_1 + -0x10);
  plVar1 = *(long **)(*param_1 + -8);
  lVar4 = (long)param_1 + lVar3;
  lStack_78 = param_4;
  if (plVar1[1] == param_3[1]) {
    if (param_4 < 0) {
      if (param_4 == -2) goto LAB_00181ed0;
      iStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 1;
      uStack_44 = 0;
      uStack_42 = 0;
      lStack_68 = 0;
      local_70 = 0;
      local_58 = 0;
      local_54 = 0;
      local_60 = 0;
      local_90 = param_3;
      plStack_88 = param_1;
      local_80 = (long *)param_2;
      (**(code **)(*param_3 + 0x28))(param_3,&local_90,lVar4,lVar4,1,0);
      bVar2 = (int)local_60 == 1;
    }
    else {
      bVar2 = param_4 + lVar3 == 0;
    }
    if (!bVar2) {
      lVar4 = 0;
    }
  }
  else {
    if ((-1 < param_4) && (lVar3 = (long)param_1 - param_4, lVar4 <= lVar3)) {
      iStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 1;
      lStack_68 = 0;
      local_70 = 0;
      local_58 = 0;
      local_54 = 0;
      local_60 = 0;
      uStack_44 = 0;
      uStack_42 = 0;
      local_90 = plVar1;
      plStack_88 = (long *)lVar3;
      local_80 = param_3;
      (**(code **)(*plVar1 + 0x28))(plVar1,&local_90,lVar4,lVar4,1,0);
      if ((int)local_60 != 0) {
        return lVar3;
      }
    }
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_42 = 0;
    iStack_50 = 0;
    uStack_4c = 0;
    lStack_68 = 0;
    local_70 = 0;
    local_58 = 0;
    local_54 = 0;
    local_60 = 0;
    local_90 = param_3;
    plStack_88 = param_1;
    local_80 = (long *)param_2;
    lStack_78 = param_4;
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_90,lVar4,1,0);
    if (local_54 == 1) {
      if ((int)local_60 != 1) {
        if (iStack_50 != 0) {
          return 0;
        }
        if (local_60._4_4_ != 1) {
          return 0;
        }
        if (local_58 != 1) {
          return 0;
        }
      }
      return local_70;
    }
    if (local_54 == 0) {
      if ((local_58 == 1 && local_60._4_4_ == 1) && iStack_50 == 1) {
        return lStack_68;
      }
      return 0;
    }
LAB_00181ed0:
    lVar4 = 0;
  }
  return lVar4;
}


// ===== 00181f4c  FUN_00181f4c =====

void FUN_00181f4c(long param_1,long param_2,long param_3,undefined4 param_4)

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
      *(undefined1 *)(param_2 + 0x4e) = 1;
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
      return;
    }
    if (*(int *)(param_2 + 0x30) == 2) {
      *(undefined4 *)(param_2 + 0x30) = param_4;
      return;
    }
  }
  return;
}


// ===== 00181fc0  FUN_00181fc0 =====

void FUN_00181fc0(long param_1,long param_2,long param_3,undefined4 param_4)

{
  if (*(long *)(param_1 + 8) != *(long *)(*(long *)(param_2 + 0x10) + 8)) {
                    /* WARNING: Could not recover jumptable at 0x00181fe4. Too many branches */
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
      *(undefined1 *)(param_2 + 0x4e) = 1;
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
    }
    return;
  }
  *(long *)(param_2 + 0x20) = param_3;
  *(undefined4 *)(param_2 + 0x30) = param_4;
  *(undefined4 *)(param_2 + 0x3c) = 1;
  return;
}


// ===== 00182040  FUN_00182040 =====

void FUN_00182040(long param_1,long param_2,long *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (*(long *)(param_1 + 8) == *(long *)(*(long *)(param_2 + 0x10) + 8)) {
    if (*(long **)(param_2 + 0x20) == (long *)0x0) {
      *(long **)(param_2 + 0x20) = param_3;
      *(undefined4 *)(param_2 + 0x30) = param_4;
      *(undefined4 *)(param_2 + 0x3c) = 1;
      return;
    }
    if (*(long **)(param_2 + 0x20) == param_3) {
      if (*(int *)(param_2 + 0x30) == 2) {
        *(undefined4 *)(param_2 + 0x30) = param_4;
        return;
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x30) = 2;
      *(undefined1 *)(param_2 + 0x4e) = 1;
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
    }
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x14);
    uVar4 = *(ulong *)(param_1 + 0x20);
    if (param_3 == (long *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (long)uVar4 >> 8;
      if ((uVar4 & 1) != 0) {
        lVar5 = *(long *)(*param_3 + lVar5);
      }
    }
    uVar1 = 2;
    if ((uVar4 & 2) != 0) {
      uVar1 = param_4;
    }
    (**(code **)(**(long **)(param_1 + 0x18) + 0x38))
              (*(long **)(param_1 + 0x18),param_2,(long)param_3 + lVar5,uVar1);
    if (1 < uVar2) {
      uVar4 = param_1 + (ulong)uVar2 * 0x10 + 0x18;
      if (param_3 == (long *)0x0) {
        uVar7 = param_1 + 0x38;
        do {
          uVar1 = 2;
          if ((*(ulong *)(uVar7 - 8) & 2) != 0) {
            uVar1 = param_4;
          }
          (**(code **)(**(long **)(uVar7 - 0x10) + 0x38))(*(long **)(uVar7 - 0x10),param_2,0,uVar1);
        } while ((*(char *)(param_2 + 0x4e) == '\0') &&
                (bVar3 = uVar7 < uVar4, uVar7 = uVar7 + 0x10, bVar3));
      }
      else {
        uVar7 = param_1 + 0x38;
        do {
          uVar6 = *(ulong *)(uVar7 - 8);
          lVar5 = (long)uVar6 >> 8;
          if ((uVar6 & 1) != 0) {
            lVar5 = *(long *)(*param_3 + lVar5);
          }
          uVar1 = 2;
          if ((uVar6 & 2) != 0) {
            uVar1 = param_4;
          }
          (**(code **)(**(long **)(uVar7 - 0x10) + 0x38))
                    (*(long **)(uVar7 - 0x10),param_2,(long)param_3 + lVar5,uVar1);
        } while ((*(char *)(param_2 + 0x4e) == '\0') &&
                (bVar3 = uVar7 < uVar4, uVar7 = uVar7 + 0x10, bVar3));
      }
    }
  }
  return;
}


// ===== 00182200  FUN_00182200 =====

bool FUN_00182200(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x10) & 0x18) == 0) {
    if (param_2 == 0) {
      return false;
    }
    lVar2 = __dynamic_cast(param_2,PTR_PTR_001921a0,PTR_PTR_001921b0,0);
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


// ===== 001822c4  FUN_001822c4 =====

/* WARNING: Type propagation algorithm not settling */

ulong FUN_001822c4(long param_1,long param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  char *__s2;
  long lVar9;
  long *local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined7 uStack_58;
  undefined1 local_51;
  undefined7 uStack_50;
  undefined8 uStack_49;
  
  __s2 = *(char **)(param_2 + 8);
  if (__s2 == PTR_typeinfo_name_001921b8) {
    *param_3 = 0;
    return 1;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 0x18) == 0) {
    lVar5 = __dynamic_cast(param_2,PTR_PTR_001921a0,PTR_PTR_001921b0,0);
    if (lVar5 == 0) goto LAB_00182380;
    if ((*(byte *)(lVar5 + 0x10) & 0x18) == 0) {
      if (*(char **)(param_1 + 8) != __s2) goto LAB_00182380;
      goto LAB_00182324;
    }
  }
  if ((param_1 == param_2) || (iVar4 = strcmp(*(char **)(param_1 + 8),__s2), iVar4 == 0)) {
LAB_00182324:
    if ((long *)*param_3 == (long *)0x0) {
      return 1;
    }
    *param_3 = *(long *)*param_3;
    return 1;
  }
LAB_00182380:
  lVar5 = __dynamic_cast(param_2,PTR_PTR_001921a0,PTR_PTR_001921c0,0);
  if (lVar5 == 0) {
    return 0;
  }
  if ((long *)*param_3 == (long *)0x0) {
    lVar8 = 0;
    uVar3 = *(uint *)(lVar5 + 0x10);
    uVar1 = uVar3 & (uVar2 ^ 0xffffffff);
  }
  else {
    lVar8 = *(long *)*param_3;
    *param_3 = lVar8;
    uVar3 = *(uint *)(lVar5 + 0x10);
    uVar1 = uVar3 & (uVar2 ^ 0xffffffff);
  }
  if (((uVar1 & 7) == 0) && ((uVar2 & (uVar3 ^ 0xffffffff) & 0x60) == 0)) {
    lVar9 = *(long *)(param_1 + 0x18);
    lVar5 = *(long *)(lVar5 + 0x18);
    if (*(undefined **)(lVar9 + 8) == *(undefined **)(lVar5 + 8)) {
      return 1;
    }
    if (*(undefined **)(lVar9 + 8) == PTR_typeinfo_name_001921c8) {
      lVar5 = __dynamic_cast(lVar5,PTR_PTR_001921a0,PTR_PTR_001921d0,0);
      return (ulong)(lVar5 == 0);
    }
    lVar6 = __dynamic_cast(lVar9,PTR_PTR_001921a0,PTR_PTR_001921c0,0);
    if (lVar6 == 0) {
      lVar6 = __dynamic_cast(lVar9,PTR_PTR_001921a0,PTR_PTR_001921d8,0);
      if (lVar6 == 0) {
        local_80 = __dynamic_cast(lVar9,PTR_PTR_001921a0,PTR_PTR_001921a8,0);
        if (local_80 == 0) {
          return 0;
        }
        local_90 = (long *)__dynamic_cast(lVar5,PTR_PTR_001921a0,PTR_PTR_001921a8,0);
        if (local_90 == (long *)0x0) {
          return 0;
        }
        uStack_88 = 0;
        uStack_50 = 0;
        uStack_68 = 0;
        local_70 = 0;
        uStack_58 = 0;
        local_51 = 0;
        local_60 = 0;
        uStack_49 = 0x100;
        uStack_78 = 0xffffffffffffffff;
        (**(code **)(*local_90 + 0x38))(local_90,&local_90,lVar8,1);
        uVar7 = (ulong)((int)local_60 == 1);
        if ((int)local_60 != 1) {
          return uVar7;
        }
        if (*param_3 != 0) {
          *param_3 = local_70;
          return uVar7;
        }
        return uVar7;
      }
      if ((uVar2 & 1) != 0) {
        uVar7 = FUN_001826a0(lVar6,lVar5);
        return uVar7;
      }
    }
    else if ((uVar2 & 1) != 0) {
      uVar7 = FUN_0018257c(lVar6,lVar5);
      return uVar7;
    }
  }
  return 0;
}


// ===== 0018257c  FUN_0018257c =====

undefined8 FUN_0018257c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar2 = PTR_PTR_001921c0;
  puVar1 = PTR_PTR_001921a0;
  while( true ) {
    if (param_2 == 0) {
      return 0;
    }
    lVar3 = __dynamic_cast(param_2,puVar1,puVar2,0);
    if (lVar3 == 0) {
      return 0;
    }
    if ((*(uint *)(lVar3 + 0x10) & (*(uint *)(param_1 + 0x10) ^ 0xffffffff)) != 0) {
      return 0;
    }
    lVar5 = *(long *)(param_1 + 0x18);
    param_2 = *(long *)(lVar3 + 0x18);
    if (*(long *)(lVar5 + 8) == *(long *)(param_2 + 8)) break;
    if ((*(uint *)(param_1 + 0x10) & 1) == 0) {
      return 0;
    }
    param_1 = __dynamic_cast(lVar5,puVar1,puVar2,0);
    if (param_1 == 0) {
      lVar3 = __dynamic_cast(lVar5,PTR_PTR_001921a0,PTR_PTR_001921d8,0);
      if (lVar3 == 0) {
        return 0;
      }
      uVar4 = FUN_001826a0(lVar3,param_2);
      return uVar4;
    }
  }
  return 1;
}


// ===== 001826a0  FUN_001826a0 =====

ulong FUN_001826a0(long param_1,long param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = __dynamic_cast(param_2,PTR_PTR_001921a0,PTR_PTR_001921d8,0);
  if (uVar1 != 0) {
    if ((*(uint *)(uVar1 + 0x10) & (*(uint *)(param_1 + 0x10) ^ 0xffffffff)) == 0) {
      if (*(long *)(*(long *)(param_1 + 0x18) + 8) != *(long *)(*(long *)(uVar1 + 0x18) + 8)) {
        return 0;
      }
      return (ulong)(*(long *)(*(long *)(param_1 + 0x20) + 8) ==
                    *(long *)(*(long *)(uVar1 + 0x20) + 8));
    }
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 00182760  FUN_00182760 =====

bool FUN_00182760(long param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  char *__s2;
  
  __s2 = *(char **)(param_2 + 8);
  if (__s2 == PTR_typeinfo_name_001921b8) {
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (lVar3 = __dynamic_cast(*(long *)(param_1 + 0x18),PTR_PTR_001921a0,PTR_PTR_001921d0,0),
       lVar3 == 0)) {
      puVar4 = &DAT_001164b8;
    }
    else {
      puVar4 = &DAT_001164a8;
    }
    *param_3 = puVar4;
    return true;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x18) == 0) {
    lVar3 = __dynamic_cast(param_2,PTR_PTR_001921a0,PTR_PTR_001921b0,0);
    if (lVar3 == 0) goto LAB_00182830;
    if ((*(byte *)(lVar3 + 0x10) & 0x18) == 0) {
      if (*(char **)(param_1 + 8) == __s2) {
        return true;
      }
      goto LAB_00182830;
    }
  }
  if (param_1 == param_2) {
    return true;
  }
  iVar2 = strcmp(*(char **)(param_1 + 8),__s2);
  if (iVar2 == 0) {
    return true;
  }
LAB_00182830:
  lVar3 = __dynamic_cast(param_2,PTR_PTR_001921a0,PTR_PTR_001921d8,0);
  if (lVar3 == 0) {
    return false;
  }
  if ((((*(uint *)(lVar3 + 0x10) & (uVar1 ^ 0xffffffff) & 7) == 0) &&
      ((uVar1 & (*(uint *)(lVar3 + 0x10) ^ 0xffffffff) & 0x60) == 0)) &&
     (*(long *)(*(long *)(param_1 + 0x18) + 8) == *(long *)(*(long *)(lVar3 + 0x18) + 8))) {
    return *(long *)(*(long *)(param_1 + 0x20) + 8) == *(long *)(*(long *)(lVar3 + 0x20) + 8);
  }
  return false;
}


// ===== 00182900  FUN_00182900 =====

void FUN_00182900(long param_1,long *param_2,long *param_3,int param_4,uint param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  char *__s1;
  
  lVar7 = param_2[2];
  if ((param_5 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar7 + 8)) {
      if (*(long *)(param_1 + 8) != *(long *)(*param_2 + 8)) {
LAB_001829e0:
        uVar8 = *(ulong *)(param_1 + 0x20);
        uVar2 = *(uint *)(param_1 + 0x14);
        lVar7 = (long)uVar8 >> 8;
        if ((uVar8 & 1) != 0) {
          lVar7 = *(long *)(*param_3 + lVar7);
        }
        iVar5 = 2;
        if ((uVar8 & 2) != 0) {
          iVar5 = param_4;
        }
        (**(code **)(**(long **)(param_1 + 0x18) + 0x30))
                  (*(long **)(param_1 + 0x18),param_2,(long)param_3 + lVar7,iVar5,param_5 & 1);
        if (uVar2 < 2) {
          return;
        }
        puVar10 = (undefined8 *)(param_1 + 0x28);
        puVar1 = (undefined8 *)(param_1 + (ulong)uVar2 * 0x10 + 0x18);
        if (((*(uint *)(param_1 + 0x10) >> 1 & 1) != 0) || (*(int *)((long)param_2 + 0x3c) == 1)) {
          do {
            if (*(char *)((long)param_2 + 0x4e) != '\0') {
              return;
            }
            uVar8 = puVar10[1];
            lVar7 = (long)uVar8 >> 8;
            if ((uVar8 & 1) != 0) {
              lVar7 = *(long *)(*param_3 + lVar7);
            }
            puVar9 = puVar10 + 2;
            iVar5 = 2;
            if ((uVar8 & 2) != 0) {
              iVar5 = param_4;
            }
            (**(code **)(*(long *)*puVar10 + 0x30))
                      ((long *)*puVar10,param_2,(long)param_3 + lVar7,iVar5,param_5 & 1);
            puVar10 = puVar9;
          } while (puVar9 < puVar1);
          return;
        }
        if ((*(uint *)(param_1 + 0x10) & 1) == 0) {
          while( true ) {
            if (*(char *)((long)param_2 + 0x4e) != '\0') {
              return;
            }
            if (*(int *)((long)param_2 + 0x3c) == 1) break;
            uVar8 = puVar10[1];
            lVar7 = (long)uVar8 >> 8;
            if ((uVar8 & 1) != 0) {
              lVar7 = *(long *)(*param_3 + lVar7);
            }
            puVar9 = puVar10 + 2;
            iVar5 = 2;
            if ((uVar8 & 2) != 0) {
              iVar5 = param_4;
            }
            (**(code **)(*(long *)*puVar10 + 0x30))
                      ((long *)*puVar10,param_2,(long)param_3 + lVar7,iVar5,param_5 & 1);
            puVar10 = puVar9;
            if (puVar1 <= puVar9) {
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
          uVar8 = puVar10[1];
          lVar7 = (long)uVar8 >> 8;
          if ((uVar8 & 1) != 0) {
            lVar7 = *(long *)(*param_3 + lVar7);
          }
          puVar9 = puVar10 + 2;
          iVar5 = 2;
          if ((uVar8 & 2) != 0) {
            iVar5 = param_4;
          }
          (**(code **)(*(long *)*puVar10 + 0x30))
                    ((long *)*puVar10,param_2,(long)param_3 + lVar7,iVar5,param_5 & 1);
          puVar10 = puVar9;
          if (puVar1 <= puVar9) {
            return;
          }
        }
        return;
      }
LAB_00182974:
      if (((long *)param_2[4] == param_3) || ((long *)param_2[5] == param_3)) {
        if (param_4 != 1) {
          return;
        }
        *(undefined4 *)(param_2 + 7) = 1;
        return;
      }
      *(int *)(param_2 + 7) = param_4;
      if (*(int *)((long)param_2 + 0x44) != 4) {
        uVar2 = *(uint *)(param_1 + 0x14);
        if (uVar2 == 0) {
          *(undefined4 *)((long)param_2 + 0x44) = 4;
        }
        else {
          bVar4 = false;
          bVar3 = false;
          puVar10 = (undefined8 *)(param_1 + 0x18);
          do {
            *(undefined2 *)((long)param_2 + 0x4c) = 0;
            uVar8 = puVar10[1];
            lVar7 = (long)uVar8 >> 8;
            if ((uVar8 & 1) != 0) {
              lVar7 = *(long *)(*param_3 + lVar7);
            }
            uVar6 = 1;
            if ((uVar8 & 2) == 0) {
              uVar6 = 2;
            }
            (**(code **)(*(long *)*puVar10 + 0x28))
                      ((long *)*puVar10,param_2,param_3,(long)param_3 + lVar7,uVar6,param_5 & 1);
            if (*(char *)((long)param_2 + 0x4e) != '\0') break;
            if (*(char *)((long)param_2 + 0x4d) != '\0') {
              if (*(char *)((long)param_2 + 0x4c) == '\0') {
                if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
                  *(undefined4 *)((long)param_2 + 0x44) = 3;
                  if (bVar4) {
                    return;
                  }
                  goto LAB_00182c48;
                }
                bVar3 = true;
              }
              else {
                if (((int)param_2[6] == 1) || ((*(byte *)(param_1 + 0x10) >> 1 & 1) == 0)) {
                  *(undefined4 *)((long)param_2 + 0x44) = 3;
                  return;
                }
                bVar3 = true;
                bVar4 = true;
              }
            }
            puVar10 = puVar10 + 2;
          } while (puVar10 < (undefined8 *)(param_1 + (ulong)uVar2 * 0x10 + 0x18));
          uVar6 = 3;
          if (!bVar3) {
            uVar6 = 4;
          }
          *(undefined4 *)((long)param_2 + 0x44) = uVar6;
          if (bVar4) {
            return;
          }
        }
      }
LAB_00182c48:
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
  else if (lVar7 != param_1) {
    __s1 = *(char **)(param_1 + 8);
    iVar5 = strcmp(__s1,*(char **)(lVar7 + 8));
    if (iVar5 != 0) {
      if ((*param_2 != param_1) && (iVar5 = strcmp(__s1,*(char **)(*param_2 + 8)), iVar5 != 0))
      goto LAB_001829e0;
      goto LAB_00182974;
    }
  }
  if (((long *)param_2[1] == param_3) && (*(int *)((long)param_2 + 0x34) != 1)) {
    *(int *)((long)param_2 + 0x34) = param_4;
  }
  return;
}


// ===== 00182cb0  FUN_00182cb0 =====

void FUN_00182cb0(long param_1,long *param_2,long param_3,ulong param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  char *__s1;
  
  lVar2 = param_2[2];
  if ((param_5 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar2 + 8)) {
      if (*(long *)(param_1 + 8) != *(long *)(*param_2 + 8)) {
LAB_00182db0:
                    /* WARNING: Could not recover jumptable at 0x00182ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x10) + 0x30))
                  (*(long **)(param_1 + 0x10),param_2,param_3,param_4,param_5 & 1);
        return;
      }
LAB_00182d24:
      if ((param_2[4] == param_3) || (param_2[5] == param_3)) {
        if ((int)param_4 != 1) {
          return;
        }
        *(undefined4 *)(param_2 + 7) = 1;
        return;
      }
      *(int *)(param_2 + 7) = (int)param_4;
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
  else if (lVar2 != param_1) {
    __s1 = *(char **)(param_1 + 8);
    param_4 = param_4 & 0xffffffff;
    iVar1 = strcmp(__s1,*(char **)(lVar2 + 8));
    if (iVar1 != 0) {
      if ((*param_2 != param_1) && (iVar1 = strcmp(__s1,*(char **)(*param_2 + 8)), iVar1 != 0))
      goto LAB_00182db0;
      goto LAB_00182d24;
    }
  }
  if ((param_2[1] == param_3) && (*(int *)((long)param_2 + 0x34) != 1)) {
    *(int *)((long)param_2 + 0x34) = (int)param_4;
    return;
  }
  return;
}


// ===== 00182ea0  FUN_00182ea0 =====

void FUN_00182ea0(long param_1,long *param_2,long param_3,int param_4,uint param_5)

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
LAB_00182f40:
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
  else if (lVar2 != param_1) {
    __s1 = *(char **)(param_1 + 8);
    iVar1 = strcmp(__s1,*(char **)(lVar2 + 8));
    if (iVar1 != 0) {
      if ((*param_2 != param_1) && (iVar1 = strcmp(__s1,*(char **)(*param_2 + 8)), iVar1 != 0)) {
        return;
      }
      goto LAB_00182f40;
    }
  }
  if ((param_2[1] == param_3) && (*(int *)((long)param_2 + 0x34) != 1)) {
    *(int *)((long)param_2 + 0x34) = param_4;
    return;
  }
  return;
}


// ===== 00183004  FUN_00183004 =====

void FUN_00183004(long param_1,long param_2,long param_3,long *param_4,int param_5,uint param_6)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar10 = *(long *)(param_2 + 0x10);
  if ((param_6 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar10 + 8)) goto LAB_001830a4;
  }
  else if ((lVar10 != param_1) &&
          (iVar9 = strcmp(*(char **)(param_1 + 8),*(char **)(lVar10 + 8)), iVar9 != 0)) {
LAB_001830a4:
    cVar2 = *(char *)(param_2 + 0x4c);
    cVar3 = *(char *)(param_2 + 0x4d);
    uVar1 = *(uint *)(param_1 + 0x14);
    *(undefined2 *)(param_2 + 0x4c) = 0;
    uVar11 = *(ulong *)(param_1 + 0x20);
    lVar10 = (long)uVar11 >> 8;
    if ((uVar11 & 1) != 0) {
      lVar10 = *(long *)(*param_4 + lVar10);
    }
    iVar9 = 2;
    if ((uVar11 & 2) != 0) {
      iVar9 = param_5;
    }
    (**(code **)(**(long **)(param_1 + 0x18) + 0x28))
              (*(long **)(param_1 + 0x18),param_2,param_3,(long)param_4 + lVar10,iVar9,param_6 & 1);
    cVar4 = *(char *)(param_2 + 0x4d);
    cVar5 = *(char *)(param_2 + 0x4c);
    bVar7 = cVar4 != '\0' || cVar3 != '\0';
    bVar8 = cVar5 != '\0' || cVar2 != '\0';
    if (1 < uVar1) {
      puVar13 = (undefined8 *)(param_1 + 0x28);
      do {
        if (*(char *)(param_2 + 0x4e) != '\0') break;
        if (cVar5 == '\0') {
          if (cVar4 != '\0') {
            bVar6 = *(byte *)(param_1 + 0x10);
            goto joined_r0x001831bc;
          }
        }
        else {
          if (*(int *)(param_2 + 0x30) == 1) break;
          bVar6 = *(byte *)(param_1 + 0x10) >> 1;
joined_r0x001831bc:
          if ((bVar6 & 1) == 0) break;
        }
        *(undefined2 *)(param_2 + 0x4c) = 0;
        uVar11 = puVar13[1];
        lVar10 = (long)uVar11 >> 8;
        if ((uVar11 & 1) != 0) {
          lVar10 = *(long *)(*param_4 + lVar10);
        }
        puVar12 = puVar13 + 2;
        iVar9 = 2;
        if ((uVar11 & 2) != 0) {
          iVar9 = param_5;
        }
        (**(code **)(*(long *)*puVar13 + 0x28))
                  ((long *)*puVar13,param_2,param_3,(long)param_4 + lVar10,iVar9,param_6 & 1);
        cVar5 = *(char *)(param_2 + 0x4c);
        cVar4 = *(char *)(param_2 + 0x4d);
        bVar8 = cVar5 != '\0' || bVar8;
        bVar7 = cVar4 != '\0' || bVar7;
        puVar13 = puVar12;
      } while (puVar12 < (undefined8 *)(param_1 + (ulong)uVar1 * 0x10 + 0x18));
    }
    *(bool *)(param_2 + 0x4c) = bVar8;
    *(bool *)(param_2 + 0x4d) = bVar7;
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
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
      goto LAB_00183230;
    }
    iVar9 = *(int *)(param_2 + 0x30);
    if (*(int *)(param_2 + 0x30) == 2) {
      *(int *)(param_2 + 0x30) = param_5;
      iVar9 = param_5;
    }
    if (iVar9 != 1) {
      return;
    }
  }
  if (*(int *)(param_2 + 0x48) != 1) {
    return;
  }
LAB_00183230:
  *(undefined1 *)(param_2 + 0x4e) = 1;
  return;
}


// ===== 00183258  FUN_00183258 =====

void FUN_00183258(long param_1,long param_2,long param_3,long param_4,int param_5,ulong param_6)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x10);
  if ((param_6 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar2 + 8)) goto LAB_00183308;
  }
  else if ((lVar2 != param_1) &&
          (iVar1 = strcmp(*(char **)(param_1 + 8),*(char **)(lVar2 + 8)), iVar1 != 0)) {
LAB_00183308:
                    /* WARNING: Could not recover jumptable at 0x0018332c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x28))();
    return;
  }
  *(undefined1 *)(param_2 + 0x4d) = 1;
  if (*(long *)(param_2 + 8) == param_4) {
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
        *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
        goto LAB_00183394;
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
LAB_00183394:
      *(undefined1 *)(param_2 + 0x4e) = 1;
      return;
    }
  }
  return;
}


// ===== 001833b4  FUN_001833b4 =====

void FUN_001833b4(long param_1,long param_2,long param_3,long param_4,int param_5,uint param_6)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x10);
  if ((param_6 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar2 + 8)) {
      return;
    }
  }
  else if ((lVar2 != param_1) &&
          (iVar1 = strcmp(*(char **)(param_1 + 8),*(char **)(lVar2 + 8)), iVar1 != 0)) {
    return;
  }
  *(undefined1 *)(param_2 + 0x4d) = 1;
  if (*(long *)(param_2 + 8) == param_4) {
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
        *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
        *(undefined1 *)(param_2 + 0x4e) = 1;
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
      return;
    }
  }
  return;
}


// ===== 001834c0  std::type_info::~type_info =====

/* std::type_info::~type_info() */

void __thiscall std::type_info::~type_info(type_info *this)

{
  return;
}


// ===== 001834c8  std::type_info::~type_info =====

/* std::type_info::~type_info() */

void __thiscall std::type_info::~type_info(type_info *this)

{
  ~type_info(this);
  operator_delete(this);
  return;
}


// ===== 001834f4  std::bad_cast::bad_cast =====

/* std::bad_cast::bad_cast() */

void __thiscall std::bad_cast::bad_cast(bad_cast *this)

{
  *(undefined **)this = PTR_vtable_00192190 + 0x10;
  return;
}


// ===== 0018350c  std::bad_cast::~bad_cast =====

/* std::bad_cast::~bad_cast() */

void __thiscall std::bad_cast::~bad_cast(bad_cast *this)

{
  bad_array_new_length::~bad_array_new_length((bad_array_new_length *)this);
  return;
}


// ===== 00183514  std::bad_cast::~bad_cast =====

/* std::bad_cast::~bad_cast() */

void __thiscall std::bad_cast::~bad_cast(bad_cast *this)

{
  ~bad_cast(this);
  operator_delete(this);
  return;
}


// ===== 00183540  std::bad_cast::what =====

/* std::bad_cast::what() const */

char * std::bad_cast::what(void)

{
  return "std::bad_cast";
}


// ===== 00183550  std::bad_typeid::bad_typeid =====

/* std::bad_typeid::bad_typeid() */

void __thiscall std::bad_typeid::bad_typeid(bad_typeid *this)

{
  *(undefined **)this = PTR_vtable_00192198 + 0x10;
  return;
}


// ===== 00183568  std::bad_typeid::~bad_typeid =====

/* std::bad_typeid::~bad_typeid() */

void __thiscall std::bad_typeid::~bad_typeid(bad_typeid *this)

{
  bad_array_new_length::~bad_array_new_length((bad_array_new_length *)this);
  return;
}


// ===== 00183570  std::bad_typeid::~bad_typeid =====

/* std::bad_typeid::~bad_typeid() */

void __thiscall std::bad_typeid::~bad_typeid(bad_typeid *this)

{
  ~bad_typeid(this);
  operator_delete(this);
  return;
}


// ===== 0018359c  std::bad_typeid::what =====

/* std::bad_typeid::what() const */

char * std::bad_typeid::what(void)

{
  return "std::bad_typeid";
}


// ===== 001835ac  std::bad_array_new_length::~bad_array_new_length =====

/* std::bad_array_new_length::~bad_array_new_length() */

void __thiscall std::bad_array_new_length::~bad_array_new_length(bad_array_new_length *this)

{
  return;
}


// ===== 001835b4  std::exception::~exception =====

/* std::exception::~exception() */

void __thiscall std::exception::~exception(exception *this)

{
  bad_array_new_length::~bad_array_new_length((bad_array_new_length *)this);
  operator_delete(this);
  return;
}


// ===== 001835e0  std::exception::what =====

/* std::exception::what() const */

char * std::exception::what(void)

{
  return "std::exception";
}


// ===== 001835f0  std::bad_exception::~bad_exception =====

/* std::bad_exception::~bad_exception() */

void __thiscall std::bad_exception::~bad_exception(bad_exception *this)

{
  bad_array_new_length::~bad_array_new_length((bad_array_new_length *)this);
  operator_delete(this);
  return;
}


// ===== 0018361c  std::bad_exception::what =====

/* std::bad_exception::what() const */

char * std::bad_exception::what(void)

{
  return "std::bad_exception";
}


// ===== 0018362c  std::bad_alloc::bad_alloc =====

/* std::bad_alloc::bad_alloc() */

void __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
  *(undefined **)this = PTR_vtable_00192158 + 0x10;
  return;
}


// ===== 00183644  std::bad_alloc::~bad_alloc =====

/* std::bad_alloc::~bad_alloc() */

void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
  bad_array_new_length::~bad_array_new_length((bad_array_new_length *)this);
  operator_delete(this);
  return;
}


// ===== 00183670  std::bad_alloc::what =====

/* std::bad_alloc::what() const */

char * std::bad_alloc::what(void)

{
  return "std::bad_alloc";
}


// ===== 00183680  std::bad_array_new_length::bad_array_new_length =====

/* std::bad_array_new_length::bad_array_new_length() */

void __thiscall std::bad_array_new_length::bad_array_new_length(bad_array_new_length *this)

{
  *(undefined **)this = PTR_vtable_00192168 + 0x10;
  return;
}


// ===== 00183698  std::bad_array_new_length::~bad_array_new_length =====

/* std::bad_array_new_length::~bad_array_new_length() */

void __thiscall std::bad_array_new_length::~bad_array_new_length(bad_array_new_length *this)

{
  ~bad_array_new_length(this);
  operator_delete(this);
  return;
}


// ===== 001836c4  std::bad_array_new_length::what =====

/* std::bad_array_new_length::what() const */

char * std::bad_array_new_length::what(void)

{
  return "bad_array_new_length";
}


// ===== 001836d4  __cxa_pure_virtual =====

void __cxa_pure_virtual(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00169224("Pure virtual function called!");
}


// ===== 001836ec  __cxa_deleted_virtual =====

void __cxa_deleted_virtual(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00169224("Deleted virtual function called!");
}


// ===== 00183704  FUN_00183704 =====

undefined8 FUN_00183704(undefined8 *param_1)

{
  return *param_1;
}


// ===== 00183710  FUN_00183710 =====

bool FUN_00183710(ulong *param_1)

{
  return *param_1 >> 8 == 0x434c4e47432b2b;
}


// ===== 00183734  __cxa_allocate_exception =====

long __cxa_allocate_exception(long param_1)

{
  void *__s;
  
                    /* try { // try from 00183748 to 0018374f has its CatchHandler @ 00183780 */
  __s = (void *)FUN_00183f04(param_1 + 0x8fU & 0xfffffffffffffff0);
  if (__s != (void *)0x0) {
    memset(__s,0,param_1 + 0x8fU & 0xfffffffffffffff0);
    return (long)__s + 0x80;
  }
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 00183784  __cxa_begin_catch =====

ulong * __cxa_begin_catch(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  
  uVar6 = *param_1;
                    /* try { // try from 00183798 to 0018379b has its CatchHandler @ 0018382c */
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


// ===== 00183830  __cxa_free_exception =====

void __cxa_free_exception(long param_1)

{
                    /* try { // try from 00183840 to 00183843 has its CatchHandler @ 00183850 */
  FUN_001840e8(param_1 + -0x80);
  return;
}


// ===== 00183854  __cxa_allocate_dependent_exception =====

void __cxa_allocate_dependent_exception(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00183f04(0x80);
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


// ===== 00183890  __cxa_free_dependent_exception =====

void __cxa_free_dependent_exception(void)

{
  FUN_001840e8();
  return;
}


// ===== 00183898  __cxa_throw =====

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
  *(code **)(param_1 + -0x18) = FUN_0018391c;
  FUN_00185910((undefined8 *)(param_1 + -0x20));
  iVar1 = FUN_00183984(param_1 + -0x80);
  if (iVar1 == 1) {
    lVar2 = FUN_001858e0(0xffffffffffffffff,extraout_x1 + -0x58);
    if (lVar2 == 1) {
      if (*(code **)(extraout_x1 + -0x48) != (code *)0x0) {
        (**(code **)(extraout_x1 + -0x48))(extraout_x1 + 0x20);
      }
      FUN_001840e8(extraout_x1 + -0x60);
    }
    return;
  }
  FUN_00168f90(*(undefined8 *)(extraout_x1 + -0x38));
                    /* WARNING: Subroutine does not return */
  FUN_00168d28();
}


// ===== 0018391c  FUN_0018391c =====

void FUN_0018391c(int param_1,long param_2)

{
  long lVar1;
  
  if (param_1 == 1) {
    lVar1 = FUN_001858e0(0xffffffffffffffff,param_2 + -0x58);
    if (lVar1 == 1) {
      if (*(code **)(param_2 + -0x48) != (code *)0x0) {
                    /* try { // try from 00183954 to 0018395b has its CatchHandler @ 0018397c */
        (**(code **)(param_2 + -0x48))(param_2 + 0x20);
      }
                    /* try { // try from 0018395c to 00183963 has its CatchHandler @ 00183980 */
      FUN_001840e8(param_2 + -0x60);
    }
    return;
  }
  FUN_00168f90(*(undefined8 *)(param_2 + -0x38));
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00183954 with catch @ 0018397c
                        */
  FUN_00168d28();
}


// ===== 00183984  FUN_00183984 =====

undefined8 FUN_00183984(long param_1)

{
  long lVar1;
  
  __cxa_begin_catch(param_1 + 0x60);
  lVar1 = FUN_00168f90(*(undefined8 *)(param_1 + 0x28));
  return *(undefined8 *)(lVar1 + -8);
}


// ===== 001839a8  __cxa_get_exception_ptr =====

undefined8 __cxa_get_exception_ptr(long param_1)

{
  return *(undefined8 *)(param_1 + -8);
}


// ===== 001839b4  __cxa_end_catch =====

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
      FUN_00185d1c((ulong *)(lVar3 + 0x60));
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
          FUN_001840e8(lVar3);
        }
        lVar3 = FUN_001858e0(0xffffffffffffffff,lVar4 + 8);
        if (lVar3 == 1) {
          if (*(code **)(lVar4 + 0x18) != (code *)0x0) {
                    /* try { // try from 00183a9c to 00183aa3 has its CatchHandler @ 00183ab0 */
            (**(code **)(lVar4 + 0x18))(lVar4 + 0x80);
          }
                    /* try { // try from 00183aa4 to 00183aab has its CatchHandler @ 00183ab4 */
          FUN_001840e8(lVar4);
        }
      }
    }
  }
  return;
}


// ===== 00183ab8  __cxa_decrement_exception_refcount =====

void __cxa_decrement_exception_refcount(long param_1)

{
  long lVar1;
  
  if ((param_1 != 0) && (lVar1 = FUN_001858e0(0xffffffffffffffff,param_1 + -0x78), lVar1 == 1)) {
    if (*(code **)(param_1 + -0x68) != (code *)0x0) {
                    /* try { // try from 00183aec to 00183af3 has its CatchHandler @ 00183b0c */
      (**(code **)(param_1 + -0x68))(param_1);
    }
                    /* try { // try from 00183af4 to 00183afb has its CatchHandler @ 00183b10 */
    FUN_001840e8(param_1 + -0x80);
  }
  return;
}


// ===== 00183b14  __cxa_current_exception_type =====

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


// ===== 00183b6c  __cxa_rethrow =====

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
    FUN_00185910(puVar6);
    uVar7 = *puVar6;
                    /* try { // try from 00183be0 to 00183be3 has its CatchHandler @ 00183c4c */
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
      if (*plVar3 != 0) goto LAB_00183b8c;
      *plVar3 = lVar8;
    }
    if ((uVar4 & 0xffffffffffffff00) == 0x434c4e47432b2b00) {
      FUN_00168f90(*(undefined8 *)(lVar8 + 0x28));
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00183be0 with catch @ 00183c4c
                        */
      FUN_00168d28();
    }
  }
LAB_00183b8c:
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 00183c50  __cxa_increment_exception_refcount =====

void __cxa_increment_exception_refcount(long param_1)

{
  if (param_1 != 0) {
    FUN_001858e0(1,param_1 + -0x78);
  }
  return;
}


// ===== 00183c7c  __cxa_current_primary_exception =====

long * __cxa_current_primary_exception(void)

{
  long *plVar1;
  long lVar2;
  
                    /* try { // try from 00183c8c to 00183c8f has its CatchHandler @ 00183d04 */
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
    FUN_001858e0(1,lVar2 + 8);
  }
  return plVar1;
}


// ===== 00183d08  __cxa_rethrow_primary_exception =====

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
  puVar3 = (undefined8 *)FUN_00183f04(0x80);
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
    FUN_001858e0(1,param_1 + -0x78);
    puVar3[2] = *(undefined8 *)(param_1 + -0x70);
    uVar4 = std::get_unexpected();
    puVar3[4] = uVar4;
    uVar4 = std::get_terminate();
    puVar3[5] = uVar4;
    *puVar9 = 0x434c4e47432b2b01;
    lVar5 = __cxa_get_globals();
    iVar1 = *(int *)(lVar5 + 8);
    puVar3[0xd] = FUN_00183e38;
    *(int *)(lVar5 + 8) = iVar1 + 1;
    FUN_00185910(puVar9);
    uVar8 = *puVar9;
                    /* try { // try from 00183db8 to 00183dbb has its CatchHandler @ 00183e34 */
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


// ===== 00183e38  FUN_00183e38 =====

void FUN_00183e38(int param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == 1) {
    lVar2 = *(long *)(param_2 + -0x58);
    if ((lVar2 != 0) && (lVar1 = FUN_001858e0(0xffffffffffffffff,lVar2 + -0x78), lVar1 == 1)) {
      if (*(code **)(lVar2 + -0x68) != (code *)0x0) {
                    /* try { // try from 00183e78 to 00183e7f has its CatchHandler @ 00183ea4 */
        (**(code **)(lVar2 + -0x68))(lVar2);
      }
                    /* try { // try from 00183e80 to 00183e87 has its CatchHandler @ 00183ea8 */
      FUN_001840e8(lVar2 + -0x80);
    }
    FUN_001840e8(param_2 + -0x60);
    return;
  }
  FUN_00168f90(*(undefined8 *)(param_2 + -0x38));
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00183e78 with catch @ 00183ea4
                        */
  FUN_00168d28();
}


// ===== 00183eac  __cxa_uncaught_exception =====

ulong __cxa_uncaught_exception(void)

{
  ulong uVar1;
  
                    /* try { // try from 00183eb8 to 00183ebb has its CatchHandler @ 00183ed8 */
  uVar1 = __cxa_get_globals_fast();
  if (uVar1 != 0) {
    uVar1 = (ulong)(*(int *)(uVar1 + 8) != 0);
  }
  return uVar1;
}


// ===== 00183edc  __cxa_uncaught_exceptions =====

ulong __cxa_uncaught_exceptions(void)

{
  ulong uVar1;
  
                    /* try { // try from 00183ee8 to 00183eeb has its CatchHandler @ 00183f00 */
  uVar1 = __cxa_get_globals_fast();
  if (uVar1 != 0) {
    uVar1 = (ulong)*(uint *)(uVar1 + 8);
  }
  return uVar1;
}


// ===== 00183f04  FUN_00183f04 =====

void FUN_00183f04(size_t param_1)

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
  FUN_00183f60(param_1);
  return;
}


// ===== 00183f60  FUN_00183f60 =====

ushort * FUN_00183f60(long param_1)

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
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_001965f8);
  if (DAT_001965f0 == (ushort *)0x0) {
    DAT_0019662c = 0x7d0080;
    DAT_001965f0 = (ushort *)&DAT_0019662c;
  }
  else if (DAT_001965f0 == (ushort *)&DAT_00196820) goto LAB_00184018;
  uVar5 = param_1 + 3U >> 2;
  uVar1 = uVar5 + 1;
  puVar4 = (ushort *)0x0;
  puVar6 = DAT_001965f0;
  do {
    puVar9 = puVar6 + 2;
    if (((ulong)puVar9 & 0xf) != 0) {
                    /* try { // try from 001840a4 to 001840c3 has its CatchHandler @ 001840cc */
                    /* WARNING: Subroutine does not return */
      FUN_00169224("%s:%d: %s","out/llvm-project/libcxxabi/src/fallback_malloc.cpp",0x92,
                   &DAT_00111157);
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
                    /* try { // try from 00184040 to 0018405f has its CatchHandler @ 001840c4 */
                    /* WARNING: Subroutine does not return */
        FUN_00169224("%s:%d: %s","out/llvm-project/libcxxabi/src/fallback_malloc.cpp",0xa7,
                     &DAT_00111157);
      }
      goto LAB_00184084;
    }
    if (uVar5 < uVar8) {
      uVar2 = *puVar6;
      if (puVar4 == (ushort *)0x0) {
        *puVar6 = 0;
        DAT_001965f0 = (ushort *)((ulong)uVar2 * 4 + 0x196620);
      }
      else {
        *puVar4 = uVar2;
        *puVar6 = 0;
      }
      goto LAB_00184084;
    }
    uVar2 = *puVar6;
    puVar4 = puVar6;
    puVar6 = (ushort *)((ulong)uVar2 * 4 + 0x196620);
  } while ((ulong)uVar2 != 0x80);
LAB_00184018:
  puVar9 = (ushort *)0x0;
LAB_00184084:
                    /* try { // try from 00184084 to 0018408f has its CatchHandler @ 001840c8 */
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_001965f8);
  return puVar9;
}


// ===== 001840e8  FUN_001840e8 =====

void * FUN_001840e8(void *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  
  if ((param_1 < (void *)0x196620) || ((void *)0x19681f < param_1)) {
    free(param_1);
    return param_1;
  }
  puVar7 = (ushort *)((long)param_1 + -4);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_001965f8);
  if ((DAT_001965f0 != (ushort *)0x0) && (DAT_001965f0 != (ushort *)&DAT_00196820)) {
    puVar2 = DAT_001965f0;
    puVar6 = (ushort *)0x0;
    do {
      puVar5 = puVar2;
      uVar1 = puVar5[1];
      if (puVar5 + (ulong)uVar1 * 2 == puVar7) {
        puVar5[1] = *(short *)((long)param_1 + -2) + uVar1;
        goto LAB_00184200;
      }
      if (puVar7 + (ulong)*(ushort *)((long)param_1 + -2) * 2 == puVar5) {
        *(ushort *)((long)param_1 + -2) = *(ushort *)((long)param_1 + -2) + uVar1;
        if (puVar6 == (ushort *)0x0) {
          DAT_001965f0 = puVar7;
          *puVar7 = *puVar5;
        }
        else {
          *puVar6 = (ushort)((int)puVar7 - 0x196620U >> 2);
        }
        goto LAB_00184200;
      }
      puVar2 = (ushort *)((ulong)*puVar5 * 4 + 0x196620);
      puVar6 = puVar5;
    } while ((ulong)*puVar5 != 0x80);
  }
  iVar4 = (int)DAT_001965f0;
  DAT_001965f0 = puVar7;
  *puVar7 = (ushort)(iVar4 - 0x196620U >> 2);
LAB_00184200:
                    /* try { // try from 00184200 to 0018420b has its CatchHandler @ 00184220 */
  uVar3 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_001965f8);
  return (void *)(ulong)uVar3;
}


// ===== 00184224  __gxx_personality_v0 =====

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
      thunk_FUN_00185ea4(param_5,0,param_4);
      thunk_FUN_00185ea4(param_5,1,(long)iVar2);
      FUN_00185d70(param_5,uVar21);
      if (-1 < iVar2) {
        return (ulong *)0x7;
      }
      goto LAB_001842b4;
    }
    FUN_0018444c(&local_60,6,0,param_4);
  }
  else {
    FUN_0018444c(&local_60,param_2,param_3 == 0x434c4e47432b2b00,param_4);
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
      goto code_r0x00184410;
    }
    if (local_38 == 6) {
      thunk_FUN_00185ea4(param_5,0,param_4);
      thunk_FUN_00185ea4(param_5,1,local_60);
      FUN_00185d70(param_5,local_48);
      if (-1 < local_60) {
        return (ulong *)0x7;
      }
LAB_001842b4:
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
code_r0x00184410:
    __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x3c8,
              "_Unwind_Reason_Code __cxxabiv1::__gxx_personality_v0(int, _Unwind_Action, uint64_t, _Unwind_Exception *, _Unwind_Context *)"
              ,"results.reason == _URC_HANDLER_FOUND");
  }
  uStack_104 = 0x1120c6;
  pcVar14 = "results.reason == _URC_HANDLER_FOUND";
  auVar31 = __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x3db);
  puVar20 = auVar31._0_8_;
  pcStack_b8 = FUN_0018444c;
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
      goto LAB_00184840;
    }
  }
  else if ((auVar31 & (undefined1  [16])0xe) != (undefined1  [16])0x0) {
    return puVar20;
  }
  puStack_f0 = (ulong *)pcVar14;
  puStack_c0 = &stack0xffffffffffffffd0;
  puVar5 = (ulong *)FUN_00185cb4(lVar9);
  if (puVar5 != (ulong *)0x0) {
    puVar20[2] = (ulong)puVar5;
    puVar6 = (ulong *)FUN_00185d40(lVar9);
    uVar7 = FUN_00185ce8(lVar9);
    pbStack_d0 = (byte *)((long)puVar5 + 1);
    if ((byte)*puVar5 == 0xff) {
      pbVar28 = (byte *)((long)puVar5 + 2);
      bVar1 = *pbStack_d0;
      uVar8 = uVar7;
    }
    else {
      uVar8 = FUN_00184bf8(&pbStack_d0,(byte)*puVar5,0);
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
      puVar6 = (ulong *)FUN_00184bf8(&pbStack_d8,puVar29,0);
      lVar9 = FUN_00184bf8(&pbStack_d8,puVar29,0);
      puVar5 = (ulong *)FUN_00184bf8(&pbStack_d8,puVar29,0);
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
        if (puVar5 == (ulong *)0x0) goto LAB_0018483c;
        puVar20[3] = (ulong)((long)puVar5 + uVar8);
        if (uVar19 == 0) {
          uVar16 = 6;
          if ((auVar31 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
            uVar16 = 8;
          }
          goto LAB_00184840;
        }
        puVar6 = (ulong *)(ulong)uStack_104;
        uVar8 = uStack_e8 & 0xf;
        pbVar22 = pbVar22 + uVar19 + (uVar17 & 0xffffffff) + -1;
        puStack_100 = puStack_f0 + 4;
        uStack_f4 = 0x1c1dU >> uVar8 & 1;
        uVar7 = 0;
        goto LAB_0018468c;
      }
    } while (puVar6 <= puVar15);
    __cxa_begin_catch(puStack_f0);
    if ((uStack_104 & 1) != 0) {
      do {
        FUN_00168f90(puStack_f0[-7]);
LAB_00184944:
        __cxa_begin_catch(puStack_f0);
      } while (((ulong)puVar6 & 1) != 0);
    }
                    /* WARNING: Subroutine does not return */
    std::terminate();
  }
LAB_0018483c:
  uVar16 = 8;
LAB_00184840:
  *(undefined4 *)(puVar20 + 5) = uVar16;
  return puVar5;
LAB_0018468c:
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
        goto LAB_001848e0;
      }
      lVar9 = FUN_00183704(puStack_f0);
      puVar10 = puStack_100;
      if (lVar9 == 0x434c4e47432b2b01) {
        puVar10 = (ulong *)puVar15[-0xb];
      }
      if ((puVar10 == (ulong *)0x0) || (puVar15[-10] == 0)) {
LAB_00184964:
        __cxa_begin_catch(puVar15);
        FUN_00168f90(puVar15[-7]);
        puVar20 = puVar15;
        goto code_r0x0018497c;
      }
      puVar5 = (ulong *)FUN_00184de4(uVar17,pbStack_e0,uStack_e8,puVar15[-10],puVar10,puVar15,0);
      param_6 = puVar15;
      uVar19 = uVar7;
      puVar29 = puVar10;
      if (((ulong)puVar5 & 1) != 0) {
        if ((auVar31 & (undefined1  [16])0x1) == (undefined1  [16])0x0) goto code_r0x001849bc;
        *puVar20 = uVar17;
        puVar20[1] = (ulong)pbVar22;
        uVar16 = 6;
        puVar20[4] = (ulong)puVar10;
        goto LAB_00184840;
      }
    }
  }
  else {
    if (pbStack_e0 == (byte *)0x0) goto LAB_00184944;
    if (0xc < (uint)uVar8) goto LAB_00184944;
    if (uStack_f4 == 0) goto LAB_00184944;
    puStack_c8 = (ulong *)(pbStack_e0 + *(long *)(&DAT_001166d8 + uVar8 * 8) * uVar17);
    puVar10 = (ulong *)FUN_00184bf8(&puStack_c8,uStack_e8,0);
    puVar3 = puStack_f0;
    if (puVar10 == (ulong *)0x0) {
      puVar10 = puVar29;
      if ((auVar31 & (undefined1  [16])0xd) != (undefined1  [16])0x0) {
        *puVar20 = uVar17;
        puVar20[1] = (ulong)pbVar22;
LAB_001848e0:
        puVar6 = puStack_f0;
        puVar5 = (ulong *)FUN_00183704(puStack_f0);
        if (puVar5 == (ulong *)0x434c4e47432b2b01) {
          puStack_100 = (ulong *)puVar6[-0xb];
        }
        puVar20[4] = (ulong)puStack_100;
        uVar16 = 6;
        goto LAB_00184840;
      }
code_r0x0018497c:
      __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x2ec,
                "void __cxxabiv1::scan_eh_tab(scan_results &, _Unwind_Action, bool, _Unwind_Exception *, _Unwind_Context *)"
                ,"actions & (_UA_SEARCH_PHASE | _UA_HANDLER_FRAME | _UA_FORCE_UNWIND)");
code_r0x0018499c:
      __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x306,
                "void __cxxabiv1::scan_eh_tab(scan_results &, _Unwind_Action, bool, _Unwind_Exception *, _Unwind_Context *)"
                ,"actions & (_UA_SEARCH_PHASE | _UA_FORCE_UNWIND)");
code_r0x001849bc:
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
      uVar7 = FUN_00183710(lVar9);
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
      FUN_00168f44(uVar21);
      __cxa_begin_catch();
      if ((uVar7 & 1) == 0) goto LAB_00184b64;
      pbStack_178 = pbVar22 + 1;
      FUN_00184bf8(&pbStack_178,*pbVar22,uVar24);
      bVar1 = *pbStack_178;
      if (bVar1 != 0xff) goto LAB_00184a80;
      do {
        FUN_00168f90(uVar11);
        pbStack_178 = extraout_x9;
LAB_00184a80:
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
      bVar4 = FUN_00183710(lVar30 + 0x60);
      if ((bVar4 & lVar30 != lVar27) == 1) {
        uVar21 = *(undefined8 *)(lVar30 + 0x10);
        lVar27 = FUN_00183704(lVar30 + 0x60);
        if (lVar27 == 0x434c4e47432b2b01) {
          lVar27 = *(long *)(lVar30 + 8);
        }
        else {
          lVar27 = lVar30 + 0x80;
        }
        uVar7 = FUN_00184de4(uVar26,pbVar23 + uVar8,bVar1,uVar21,lVar27,lVar9,uVar24);
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
          FUN_00185b3c(uVar21);
        }
      }
      pbVar22 = PTR_vtable_00192180;
      puStack_180 = PTR_vtable_00192180 + 0x10;
      uVar26 = FUN_00184de4(uVar26,pbVar23 + uVar8,bVar1,PTR_PTR_00192188,&puStack_180,lVar9,uVar24)
      ;
      if ((uVar26 & 1) != 0) {
        std::bad_array_new_length::~bad_array_new_length((bad_array_new_length *)&puStack_180);
LAB_00184b64:
        __cxa_end_catch();
        FUN_00168f90(uVar11);
      }
      __cxa_end_catch();
      puVar13 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar13 = pbVar22 + 0x10;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar13,PTR_PTR_00192188,PTR__bad_array_new_length_00192150);
    }
    puVar5 = puVar10;
    if (((ulong)puVar6 & 1) != 0) {
      lVar9 = FUN_00183704(puStack_f0);
      puStack_c8 = puStack_100;
      if (lVar9 == 0x434c4e47432b2b01) {
        puStack_c8 = (ulong *)puVar3[-0xb];
      }
      if ((puStack_c8 == (ulong *)0x0) || (puVar3[-10] == 0)) {
        __cxa_begin_catch(puVar3);
        FUN_00168f90(puVar3[-7]);
        puVar15 = param_6;
        puVar6 = puVar3;
        goto LAB_00184964;
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
        goto code_r0x0018499c;
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
  if ((uVar17 | uVar18) == 0) goto LAB_0018487c;
  pbVar22 = pbVar23 + (uVar17 | uVar18);
  uVar7 = uVar19;
  goto LAB_0018468c;
LAB_0018487c:
  uVar16 = 6;
  if (((uint)uVar19 & (uVar25 & 2) >> 1) == 0) {
    uVar16 = 8;
  }
  goto LAB_00184840;
}


// ===== 0018444c  FUN_0018444c =====

void FUN_0018444c(ulong *param_1,uint param_2,uint param_3,ulong *param_4,undefined8 param_5,
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
      goto LAB_00184840;
    }
  }
  else if ((param_2 & 0xe) != 0) {
    return;
  }
  local_90 = param_4;
  pcVar4 = (char *)FUN_00185cb4(param_5);
  if (pcVar4 != (char *)0x0) {
    param_1[2] = (ulong)pcVar4;
    local_a4 = param_3;
    puVar5 = (ulong *)FUN_00185d40(param_5);
    uVar6 = FUN_00185ce8(param_5);
    local_70 = (byte *)(pcVar4 + 1);
    if (*pcVar4 == -1) {
      pbVar23 = (byte *)(pcVar4 + 2);
      bVar1 = *local_70;
      uVar7 = uVar6;
    }
    else {
      uVar7 = FUN_00184bf8(&local_70,*pcVar4,0);
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
      puVar5 = (ulong *)FUN_00184bf8(&local_78,puVar24,0);
      lVar8 = FUN_00184bf8(&local_78,puVar24,0);
      lVar9 = FUN_00184bf8(&local_78,puVar24,0);
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
        if (lVar9 == 0) goto LAB_0018483c;
        param_1[3] = lVar9 + uVar7;
        if (uVar17 != 0) {
          puVar5 = (ulong *)(ulong)local_a4;
          uVar7 = local_88 & 0xf;
          pbVar18 = pbVar18 + uVar17 + (uVar15 & 0xffffffff) + -1;
          local_a0 = local_90 + 4;
          local_94 = 0x1c1dU >> uVar7 & 1;
          uVar6 = 0;
          goto LAB_0018468c;
        }
        uVar14 = 6;
        if ((param_2 & 1) != 0) {
          uVar14 = 8;
        }
        goto LAB_00184840;
      }
    } while (puVar5 <= puVar13);
    __cxa_begin_catch(local_90);
    if ((local_a4 & 1) != 0) {
      do {
        FUN_00168f90(local_90[-7]);
LAB_00184944:
        __cxa_begin_catch(local_90);
      } while (((ulong)puVar5 & 1) != 0);
    }
                    /* WARNING: Subroutine does not return */
    std::terminate();
  }
LAB_0018483c:
  uVar14 = 8;
  goto LAB_00184840;
LAB_0018468c:
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
        goto LAB_001848e0;
      }
      lVar8 = FUN_00183704(local_90);
      puVar10 = local_a0;
      if (lVar8 == 0x434c4e47432b2b01) {
        puVar10 = (ulong *)puVar13[-0xb];
      }
      if ((puVar10 == (ulong *)0x0) || (puVar13[-10] == 0)) {
LAB_00184964:
        __cxa_begin_catch(puVar13);
        FUN_00168f90(puVar13[-7]);
        param_1 = puVar13;
        goto code_r0x0018497c;
      }
      uVar16 = FUN_00184de4(uVar15,local_80,local_88,puVar13[-10],puVar10,puVar13,0);
      param_6 = puVar13;
      uVar17 = uVar6;
      puVar24 = puVar10;
      if ((uVar16 & 1) != 0) {
        if ((param_2 & 1) == 0) goto code_r0x001849bc;
        *param_1 = uVar15;
        param_1[1] = (ulong)pbVar18;
        uVar14 = 6;
        param_1[4] = (ulong)puVar10;
        goto LAB_00184840;
      }
    }
  }
  else {
    if (local_80 == (byte *)0x0) goto LAB_00184944;
    if (0xc < (uint)uVar7) goto LAB_00184944;
    if (local_94 == 0) goto LAB_00184944;
    local_68 = (ulong *)(local_80 + *(long *)(&DAT_001166d8 + uVar7 * 8) * uVar15);
    puVar10 = (ulong *)FUN_00184bf8(&local_68,local_88,0);
    puVar2 = local_90;
    if (puVar10 == (ulong *)0x0) {
      puVar10 = puVar24;
      if ((param_2 & 0xd) != 0) {
        *param_1 = uVar15;
        param_1[1] = (ulong)pbVar18;
LAB_001848e0:
        puVar5 = local_90;
        lVar8 = FUN_00183704(local_90);
        if (lVar8 == 0x434c4e47432b2b01) {
          local_a0 = (ulong *)puVar5[-0xb];
        }
        param_1[4] = (ulong)local_a0;
        uVar14 = 6;
        goto LAB_00184840;
      }
code_r0x0018497c:
      __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x2ec,
                "void __cxxabiv1::scan_eh_tab(scan_results &, _Unwind_Action, bool, _Unwind_Exception *, _Unwind_Context *)"
                ,"actions & (_UA_SEARCH_PHASE | _UA_HANDLER_FRAME | _UA_FORCE_UNWIND)");
code_r0x0018499c:
      __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x306,
                "void __cxxabiv1::scan_eh_tab(scan_results &, _Unwind_Action, bool, _Unwind_Exception *, _Unwind_Context *)"
                ,"actions & (_UA_SEARCH_PHASE | _UA_FORCE_UNWIND)");
code_r0x001849bc:
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
      uVar6 = FUN_00183710(lVar8);
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
      FUN_00168f44(uVar22);
      __cxa_begin_catch();
      if ((uVar6 & 1) == 0) goto LAB_00184b64;
      pbStack_118 = pbVar18 + 1;
      FUN_00184bf8(&pbStack_118,*pbVar18,uVar20);
      bVar1 = *pbStack_118;
      if (bVar1 != 0xff) goto LAB_00184a80;
      do {
        FUN_00168f90(uVar11);
        pbStack_118 = extraout_x9;
LAB_00184a80:
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
      bVar3 = FUN_00183710(lVar25 + 0x60);
      if ((bVar3 & lVar25 != lVar9) == 1) {
        uVar22 = *(undefined8 *)(lVar25 + 0x10);
        lVar9 = FUN_00183704(lVar25 + 0x60);
        if (lVar9 == 0x434c4e47432b2b01) {
          lVar9 = *(long *)(lVar25 + 8);
        }
        else {
          lVar9 = lVar25 + 0x80;
        }
        uVar6 = FUN_00184de4(uVar21,pbVar19 + uVar7,bVar1,uVar22,lVar9,lVar8,uVar20);
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
          FUN_00185b3c(uVar22);
        }
      }
      pbVar18 = PTR_vtable_00192180;
      puStack_120 = PTR_vtable_00192180 + 0x10;
      uVar21 = FUN_00184de4(uVar21,pbVar19 + uVar7,bVar1,PTR_PTR_00192188,&puStack_120,lVar8,uVar20)
      ;
      if ((uVar21 & 1) != 0) {
        std::bad_array_new_length::~bad_array_new_length((bad_array_new_length *)&puStack_120);
LAB_00184b64:
        __cxa_end_catch();
        FUN_00168f90(uVar11);
      }
      __cxa_end_catch();
      plVar12 = (long *)__cxa_allocate_exception(8);
      *plVar12 = (long)(pbVar18 + 0x10);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(plVar12,PTR_PTR_00192188,PTR__bad_array_new_length_00192150);
    }
    if (((ulong)puVar5 & 1) != 0) {
      lVar8 = FUN_00183704(local_90);
      local_68 = local_a0;
      if (lVar8 == 0x434c4e47432b2b01) {
        local_68 = (ulong *)puVar2[-0xb];
      }
      if ((local_68 == (ulong *)0x0) || (puVar2[-10] == 0)) {
        __cxa_begin_catch(puVar2);
        FUN_00168f90(puVar2[-7]);
        puVar13 = param_6;
        puVar5 = puVar2;
        goto LAB_00184964;
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
        goto code_r0x0018499c;
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
  if ((uVar15 | uVar16) == 0) goto LAB_0018487c;
  pbVar18 = pbVar19 + (uVar15 | uVar16);
  uVar6 = uVar17;
  goto LAB_0018468c;
LAB_0018487c:
  uVar14 = 6;
  if (((uint)uVar17 & (param_2 & 2) >> 1) == 0) {
    uVar14 = 8;
  }
LAB_00184840:
  *(undefined4 *)(param_1 + 5) = uVar14;
  return;
}


// ===== 001849d8  __cxa_call_unexpected =====

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
  uVar4 = FUN_00183710(param_1);
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
                    /* try { // try from 00184a48 to 00184a4b has its CatchHandler @ 00184a4c */
  FUN_00168f44(uVar9);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00184a48 with catch @ 00184a4c
                        */
  __cxa_begin_catch();
  if ((uVar4 & 1) != 0) {
    local_68 = unaff_x24 + 1;
                    /* try { // try from 00184a5c to 00184a67 has its CatchHandler @ 00184be4 */
    FUN_00184bf8(&local_68,*unaff_x24,uVar7);
    bVar1 = *local_68;
    if (bVar1 != 0xff) goto LAB_00184a80;
    do {
      FUN_00168f90(uVar5);
      local_68 = extraout_x9;
LAB_00184a80:
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
                    /* try { // try from 00184aa8 to 00184aab has its CatchHandler @ 00184be0 */
      plVar6 = (long *)__cxa_get_globals_fast();
      lVar13 = *plVar6;
    } while (lVar13 == 0);
                    /* try { // try from 00184ab8 to 00184abf has its CatchHandler @ 00184bdc */
    bVar3 = FUN_00183710(lVar13 + 0x60);
    if ((bVar3 & lVar13 != lVar8) == 1) {
      uVar9 = *(undefined8 *)(lVar13 + 0x10);
                    /* try { // try from 00184ad8 to 00184b1f has its CatchHandler @ 00184bd8 */
      lVar8 = FUN_00183704(lVar13 + 0x60);
      if (lVar8 == 0x434c4e47432b2b01) {
        lVar8 = *(long *)(lVar13 + 8);
      }
      else {
        lVar8 = lVar13 + 0x80;
      }
      uVar4 = FUN_00184de4(unaff_x22,pbVar11 + uVar10,bVar1,uVar9,lVar8,param_1,uVar7);
      if ((uVar4 & 1) == 0) {
        lVar8 = plVar6[1];
        *(int *)(lVar13 + 0x38) = -*(int *)(lVar13 + 0x38);
        *(int *)(plVar6 + 1) = (int)lVar8 + 1;
                    /* try { // try from 00184bb4 to 00184bc7 has its CatchHandler @ 00184bd8 */
        __cxa_end_catch();
        __cxa_end_catch();
        __cxa_begin_catch(lVar13 + 0x60);
        uVar9 = __cxa_rethrow();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00184b34 with catch @ 00184bc8
                       catch(type#1 @ 00000000) { ... } // from try @ 00184b70 with catch @ 00184bc8
                       catch(type#1 @ 00000000) { ... } // from try @ 00184b84 with catch @ 00184bc8
                        */
        std::bad_array_new_length::~bad_array_new_length((bad_array_new_length *)&local_70);
                    /* try { // try from 00184be8 to 00184beb has its CatchHandler @ 00184bf4 */
        __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
        FUN_00185b3c(uVar9);
      }
    }
    unaff_x24 = PTR_vtable_00192180;
    local_70 = PTR_vtable_00192180 + 0x10;
                    /* try { // try from 00184b34 to 00184b57 has its CatchHandler @ 00184bc8 */
    uVar4 = FUN_00184de4(unaff_x22,pbVar11 + uVar10,bVar1,PTR_PTR_00192188,&local_70,param_1,uVar7);
    if ((uVar4 & 1) == 0) goto LAB_00184b70;
    std::bad_array_new_length::~bad_array_new_length((bad_array_new_length *)&local_70);
  }
  __cxa_end_catch();
  FUN_00168f90(uVar5);
LAB_00184b70:
                    /* try { // try from 00184b70 to 00184b73 has its CatchHandler @ 00184bc8 */
  __cxa_end_catch();
  plVar6 = (long *)__cxa_allocate_exception(8);
  *plVar6 = (long)(unaff_x24 + 0x10);
                    /* try { // try from 00184b84 to 00184b97 has its CatchHandler @ 00184bc8 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(plVar6,PTR_PTR_00192188,PTR__bad_array_new_length_00192150);
}


// ===== 00184bf8  FUN_00184bf8 =====

undefined8 * FUN_00184bf8(undefined8 *param_1,uint param_2,long param_3)

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
      if (uVar1 == 0) goto LAB_00184d14;
      if (uVar1 != 1) goto LAB_00184de0;
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
      if (uVar1 != 3) goto LAB_00184de0;
      puVar4 = (undefined8 *)(ulong)(uint)*puVar5;
joined_r0x00184cb0:
      puVar7 = (ulong *)((long)puVar5 + 4);
    }
  }
  else if (uVar1 < 10) {
    if (uVar1 == 4) goto LAB_00184d14;
    if (uVar1 != 9) goto LAB_00184de0;
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
      goto joined_r0x00184cb0;
    }
    if (uVar1 != 0xc) goto LAB_00184de0;
LAB_00184d14:
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
LAB_00184de0:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (puVar4 == (undefined8 *)0x0) goto LAB_00184d7c;
      puVar4 = (undefined8 *)((long)puVar4 + param_3);
    }
    else {
      if (uVar1 != 1) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (puVar4 == (undefined8 *)0x0) goto LAB_00184d7c;
      puVar4 = (undefined8 *)((long)puVar4 + (long)puVar5);
    }
  }
  if ((puVar4 != (undefined8 *)0x0) && ((param_2 >> 7 & 1) != 0)) {
    puVar4 = (undefined8 *)*puVar4;
    *param_1 = puVar7;
    return puVar4;
  }
LAB_00184d7c:
  *param_1 = puVar7;
  return puVar4;
}


// ===== 00184de4  FUN_00184de4 =====

bool FUN_00184de4(ulong param_1,long param_2,ulong param_3,undefined8 param_4,long param_5,
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
LAB_00184ef8:
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
      FUN_00168f90(*(undefined8 *)(param_6 + -0x38));
      goto LAB_00184ef8;
    }
    local_68 = param_2 + *(long *)(&DAT_001166d8 + uVar7 * 8) * uVar6;
    plVar2 = (long *)FUN_00184bf8(&local_68,param_3 & 0xffffffff,param_7);
    local_68 = param_5;
    uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_4,&local_68);
    uVar4 = 0;
    uVar5 = 0;
  } while ((uVar3 & 1) == 0);
  return uVar6 == 0;
}


// ===== 00184f04  __emutls_get_address =====

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
    pthread_once((pthread_once_t *)&DAT_00196828,FUN_0018512c);
    pthread_mutex_lock((pthread_mutex_t *)&DAT_00196838);
    sVar3 = param_1[2];
    if (sVar3 == 0) {
      sVar3 = DAT_00196830 + 1;
      DAT_00196830 = sVar3;
      param_1[2] = sVar3;
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_00196838);
    __ptr = (undefined8 *)pthread_getspecific(DAT_00196824);
    if (__ptr == (undefined8 *)0x0) goto LAB_00184fe4;
LAB_00184f38:
    uVar2 = __ptr[1];
    if (sVar3 <= uVar2) goto LAB_0018502c;
    lVar4 = (sVar3 + 0x11 & 0xfffffffffffffff0) - 2;
    __ptr = (undefined8 *)realloc(__ptr,lVar4 * 8 + 0x10);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    memset(__ptr + uVar2 + 2,0,(lVar4 - uVar2) * 8);
  }
  else {
    __ptr = (undefined8 *)pthread_getspecific(DAT_00196824);
    if (__ptr != (undefined8 *)0x0) goto LAB_00184f38;
LAB_00184fe4:
    lVar4 = (sVar3 + 0x11 & 0xfffffffffffffff0) - 2;
    __ptr = (undefined8 *)malloc(lVar4 * 8 + 0x10);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    memset(__ptr + 2,0,lVar4 * 8);
    *__ptr = 1;
  }
  __key = DAT_00196824;
  __ptr[1] = lVar4;
  pthread_setspecific(__key,__ptr);
LAB_0018502c:
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


// ===== 001850f0  FUN_001850f0 =====

ulong FUN_001850f0(ulong param_1)

{
  uint uVar1;
  
  if (DAT_00196820 == '\x01') {
    uVar1 = pthread_key_delete(DAT_00196824);
    param_1 = (ulong)uVar1;
    DAT_00196820 = '\0';
  }
  return param_1;
}


// ===== 0018512c  FUN_0018512c =====

void FUN_0018512c(void)

{
  int iVar1;
  
  iVar1 = pthread_key_create(&DAT_00196824,FUN_00185168);
  if (iVar1 == 0) {
    DAT_00196820 = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00185168  FUN_00185168 =====

long * FUN_00185168(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*param_1 != 0) {
    *param_1 = *param_1 + -1;
    uVar1 = pthread_setspecific(DAT_00196824,param_1);
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


// ===== 001851f0  FUN_001851f0 =====

undefined8 FUN_001851f0(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  
  if (DAT_00196860 == '\0') {
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


// ===== 0018521c  _INIT_0 =====

void _INIT_0(void)

{
  uint uVar1;
  int iVar2;
  char acStack_6c [92];
  
  uVar1 = getauxval(0x10);
  if ((uVar1 >> 8 & 1) == 0) {
    DAT_00196860 = 0;
    return;
  }
  iVar2 = __system_property_get("ro.arch",acStack_6c);
  if (0 < iVar2) {
    iVar2 = strncmp(acStack_6c,"exynos9810",10);
    DAT_00196860 = iVar2 != 0;
    return;
  }
  DAT_00196860 = 1;
  return;
}


// ===== 001852b4  FUN_001852b4 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_001852b4(ulong param_1,long param_2)

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
    DAT_00196868 = DAT_00196868 | 0x400;
  }
  uVar2 = (uint)uVar4;
  if ((uVar3 >> 4 & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 0x8000;
  }
  if ((uVar3 >> 0x1b & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 2;
  }
  if ((uVar2 >> 7 & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 6;
  }
  if ((~uVar3 & 0xc0000) == 0) {
    DAT_00196868 = DAT_00196868 | 0x20;
  }
  if ((uVar3 >> 0x14 & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 0x10;
  }
  if ((uVar3 >> 0x17 & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 8;
  }
  if ((uVar3 >> 9 & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 0x10100;
  }
  if ((uVar3 >> 0x18 & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 0x20000;
  }
  if ((uVar3 >> 0xc & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 0x40;
  }
  if ((uVar3 >> 0x1a & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 0x800000;
  }
  if ((uVar3 >> 3 & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 0x4000;
  }
  if ((uVar3 >> 5 & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 0x800;
  }
  if ((uVar3 >> 6 & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 0x1000;
  }
  if ((uVar3 >> 0xd & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 0x100000;
  }
  if ((uVar3 >> 0xe & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 0x200000;
  }
  if ((uVar3 >> 0x1d & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 0x400000000000;
  }
  if ((uVar3 >> 0x1c & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 0x2000000000000;
  }
  if ((uVar2 >> 0x12 & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 0x180000000000;
  }
  if ((uVar2 >> 0x16 & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 0x380000000000;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 0x2000000000;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 0x6000000000;
  }
  if ((uVar2 >> 4 & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 0x8000000000;
  }
  if ((uVar2 >> 5 & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 0x10000000000;
  }
  if ((uVar2 >> 6 & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 0x20000000000;
  }
  if ((uVar4 & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 0x80000;
  }
  if ((uVar3 >> 8 & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 0x80;
  }
  if ((uVar2 >> 0x10 & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 1;
  }
  if ((uVar2 >> 0xd & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 0x4000000;
  }
  if ((uVar4 >> 0x20 & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 0x10000000;
  }
  if ((uVar4 >> 0x21 & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 0x100000000;
  }
  if ((uVar2 >> 0xf & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 0x2000000;
  }
  if ((uVar2 >> 8 & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 0x1000000;
  }
  if ((uVar2 >> 9 & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 0x200000000;
  }
  if ((uVar2 >> 10 & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 0x400000000;
  }
  if ((uVar2 >> 0xb & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 0x800000000;
  }
  if ((uVar2 >> 0x11 & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 0x4000000000000;
  }
  if ((uVar2 >> 0x15 & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 0x20000000;
  }
  if ((int)uVar2 < 0) {
    DAT_00196868 = DAT_00196868 | 0x40000000000000;
  }
  if ((uVar2 >> 0x17 & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 0x40000000000;
  }
  if ((uVar2 >> 0x18 & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 0x100000000000000;
  }
  if ((uVar2 >> 0x19 & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 0x80000000000000;
  }
  if ((uVar4 >> 0x2b & 1) != 0) {
    DAT_00196868 = DAT_00196868 | 0x800000000000000;
  }
  if ((uVar3 >> 0xb & 1) == 0) {
    if ((param_1 & 0x201) != 0) {
      DAT_00196868 = DAT_00196868 | 0x300;
    }
    if ((uVar4 & 1) != 0 || (param_1 & 0x10000) != 0) {
      DAT_00196868 = DAT_00196868 | 0x40000;
    }
    if ((param_1 & 0x4008000) != 0) {
      DAT_00196868 = DAT_00196868 | 0x400000;
    }
    if ((uVar4 & 0x100004000) != 0) {
      DAT_00196868 = DAT_00196868 | 0x8000000;
    }
    uVar5 = DAT_00196868 | (ulong)(uVar2 << 0x13) & 0x80000000;
    if ((uVar4 & 2) != 0 && (param_1 & 0x400000) != 0) {
      uVar5 = uVar5 | 0x1000000000;
    }
    uVar5 = uVar5 | (param_1 & 0x20000) >> 4;
    goto LAB_0018541c;
  }
  uVar4 = id_aa64pfr1_el1;
  if ((uVar4 & 0xf00) != 0) {
    DAT_00196868 = DAT_00196868 | 0x80000000000;
  }
  if ((uVar4 & 0xf0) == 0x10) {
    DAT_00196868 = DAT_00196868 | 0x1000000000000;
    if ((uVar4 & 0xf000000) != 0x2000000) goto LAB_0018570c;
LAB_00185760:
    DAT_00196868 = DAT_00196868 | 0x200000000000000;
    uVar4 = id_aa64pfr0_el1;
    uVar3 = (uint)uVar4;
  }
  else {
    if ((uVar4 & 0xf000000) == 0x2000000) goto LAB_00185760;
LAB_0018570c:
    uVar4 = id_aa64pfr0_el1;
    uVar3 = (uint)uVar4;
  }
  if ((~uVar3 & 0xf0000) != 0) {
    DAT_00196868 = DAT_00196868 | 0x300;
  }
  if ((uVar4 & 0xf00000000) != 0) {
    uVar4 = UnkSytemRegRead(3,0,0,4,4);
    if ((uVar4 & 0xf) == 1) {
      DAT_00196868 = DAT_00196868 | 0x1000000000;
    }
    else if ((uVar4 & 0xf) == 0) {
      DAT_00196868 = DAT_00196868 | 0x40000000;
    }
    if ((uVar4 & 0xf00000) != 0) {
      DAT_00196868 = DAT_00196868 | 0x80000000;
    }
  }
  uVar4 = id_aa64isar0_el1;
  if ((uVar4 & 0xf00000000) != 0) {
    DAT_00196868 = DAT_00196868 | 0x2000;
  }
  uVar4 = id_aa64isar1_el1;
  uVar5 = uVar4 >> 0x14 & 0xf;
  if ((uVar4 & 0xf) != 0) {
    DAT_00196868 = DAT_00196868 | 0x40000;
  }
  if (uVar5 != 0) {
    if (uVar5 == 3) {
      DAT_00196868 = DAT_00196868 | 0x400000000400000;
    }
    else {
      DAT_00196868 = DAT_00196868 | 0x400000;
    }
  }
  uVar5 = DAT_00196868 | 0x800000000000;
  if ((uVar4 & 0xf0000000000) != 0x20000000000) {
    uVar5 = DAT_00196868;
  }
  if ((uVar4 & 0xf00000000000) != 0) {
    uVar5 = uVar5 | 0x8000000;
  }
  if (uVar4 >> 0x3c != 0) {
    if (uVar4 >> 0x3d == 0) {
      DAT_00196868 = uVar5 | 0x8008000000000000;
      return;
    }
    uVar1 = 0x38000000000000;
    if (uVar4 >> 0x3c < 3) {
      uVar1 = 0x18000000000000;
    }
    DAT_00196868 = uVar5 | uVar1 | 0x8000000000000000;
    return;
  }
LAB_0018541c:
  DAT_00196868 = uVar5 | 0x8000000000000000;
  return;
}


// ===== 00185850  _INIT_1 =====

void _INIT_1(void)

{
  int iVar1;
  ulong uVar2;
  char local_70 [8];
  ulong uStack_68;
  undefined8 local_60;
  
  if (DAT_00196868 != 0) {
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
    FUN_001852b4(uVar2 | 0x4000000000000000,local_70);
  }
  return;
}


// ===== 001858e0  FUN_001858e0 =====

long FUN_001858e0(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_00196860 == '\0') {
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


// ===== 00185910  FUN_00185910 =====

undefined8 FUN_00185910(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_4f0 [624];
  undefined1 auStack_280 [528];
  undefined8 local_70;
  undefined1 auStack_68 [24];
  code *local_50;
  
  FUN_0018992c(auStack_280);
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00185d80(auStack_4f0,auStack_280);
  iVar1 = FUN_00185f90(auStack_4f0);
  while( true ) {
    if (iVar1 == 0) {
      return 5;
    }
    if ((iVar1 < 0) || (iVar1 = FUN_00185fb8(auStack_4f0,auStack_68), iVar1 != 0)) break;
    if ((local_50 != (code *)0x0) &&
       (iVar1 = (*local_50)(1,1,*param_1,param_1,auStack_4f0), iVar1 != 8)) {
      if (iVar1 != 6) {
        return 3;
      }
      FUN_00185e28(auStack_4f0,0xfffffffe,&local_70);
      param_1[3] = local_70;
      uVar2 = FUN_00185a08(auStack_280,auStack_4f0,param_1);
      return uVar2;
    }
    iVar1 = FUN_00185f90(auStack_4f0);
  }
  return 3;
}


// ===== 00185a08  FUN_00185a08 =====

undefined8 FUN_00185a08(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_80 [24];
  code *local_68;
  long local_38;
  
  FUN_00185d80(param_2,param_1);
  iVar2 = FUN_00185fa4(param_2);
  while( true ) {
    if (iVar2 == 0) {
      return 5;
    }
    if (iVar2 < 0) break;
    FUN_00185e28(param_2,0xfffffffe,&local_38);
    iVar2 = FUN_00185fb8(param_2,auStack_80);
    if (iVar2 != 0) {
      return 2;
    }
    if (local_68 != (code *)0x0) {
      uVar3 = 6;
      if (local_38 != param_3[3]) {
        uVar3 = 2;
      }
      iVar2 = (*local_68)(1,uVar3,*param_3,param_3,param_2);
      puVar1 = PTR___sF_00192108;
      if (iVar2 != 8) {
        if (iVar2 != 7) {
          return 2;
        }
        FUN_00185ff8(param_2);
        return 2;
      }
      if (local_38 == param_3[3]) {
        fprintf((FILE *)(PTR___sF_00192108 + 0x130),"libunwind: %s - %s\n","unwind_phase2",
                "during phase1 personality function said it would stop here, but now in phase2 it did not stop here"
               );
        fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    iVar2 = FUN_00185fa4(param_2);
  }
  return 2;
}


// ===== 00185b3c  FUN_00185b3c =====

void FUN_00185b3c(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_4a0 [624];
  undefined1 auStack_230 [528];
  
  FUN_0018992c(auStack_230);
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_00185a08(auStack_230,auStack_4a0,param_1);
  }
  else {
    FUN_00185bc0(auStack_230,auStack_4a0,param_1,*(long *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = PTR___sF_00192108;
  fprintf((FILE *)(PTR___sF_00192108 + 0x130),"libunwind: %s - %s\n","_Unwind_Resume",
          "_Unwind_Resume() can\'t return");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00185bc0  FUN_00185bc0 =====

void FUN_00185bc0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,code *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined1 auStack_78 [24];
  code *local_60;
  
  FUN_00185d80(param_2,param_1);
  iVar1 = FUN_00185fa4(param_2);
  while( true ) {
    if (iVar1 < 1) {
      (*param_4)(1,0x1a,*param_3,param_3,param_2,param_5);
      return;
    }
    iVar1 = FUN_00185fb8(param_2,auStack_78);
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
      FUN_00185ff8(param_2);
    }
    iVar1 = FUN_00185fa4(param_2);
  }
  return;
}


// ===== 00185cb4  FUN_00185cb4 =====

undefined8 FUN_00185cb4(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_58 [16];
  undefined8 local_48;
  
  iVar1 = FUN_00185fb8(param_1,auStack_58);
  if (iVar1 != 0) {
    local_48 = 0;
  }
  return local_48;
}


// ===== 00185ce8  FUN_00185ce8 =====

undefined8 FUN_00185ce8(undefined8 param_1)

{
  int iVar1;
  undefined8 local_58 [9];
  
  iVar1 = FUN_00185fb8(param_1,local_58);
  if (iVar1 != 0) {
    local_58[0] = 0;
  }
  return local_58[0];
}


// ===== 00185d1c  FUN_00185d1c =====

void FUN_00185d1c(long param_1)

{
  if (*(code **)(param_1 + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00185d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 8))(1,param_1);
    return;
  }
  return;
}


// ===== 00185d38  thunk_FUN_00185ea4 =====

void thunk_FUN_00185ea4(void)

{
  FUN_00185ea4();
  return;
}


// ===== 00185d40  FUN_00185d40 =====

undefined8 FUN_00185d40(undefined8 param_1)

{
  undefined8 local_18;
  
  FUN_00185e28(param_1,0xffffffff,&local_18);
  return local_18;
}


// ===== 00185d70  FUN_00185d70 =====

void FUN_00185d70(undefined8 param_1,undefined8 param_2)

{
  FUN_00185ea4(param_1,0xffffffff,param_2);
  return;
}


// ===== 00185d80  FUN_00185d80 =====

undefined8 FUN_00185d80(undefined8 *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = &PTR_FUN_00191cd8;
  param_1[1] = &DAT_00196870;
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
  FUN_00186848(param_1,0);
  return 0;
}


// ===== 00185e28  FUN_00185e28 =====

undefined8 FUN_00185e28(long *param_1,undefined4 param_2,undefined8 *param_3)

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


// ===== 00185ea4  FUN_00185ea4 =====

undefined8 FUN_00185ea4(long *param_1,int param_2,undefined8 param_3)

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


// ===== 00185f90  FUN_00185f90 =====

void FUN_00185f90(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00185fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,0);
  return;
}


// ===== 00185fa4  FUN_00185fa4 =====

void FUN_00185fa4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00185fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,1);
  return;
}


// ===== 00185fb8  FUN_00185fb8 =====

undefined4 FUN_00185fb8(long *param_1,long param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x48))();
  uVar1 = 0xffffe66b;
  if (*(long *)(param_2 + 8) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 00185ff8  FUN_00185ff8 =====

undefined8 FUN_00185ff8(long *param_1)

{
  (**(code **)(*param_1 + 0x50))();
  return 0xffffe674;
}


// ===== 00186020  FUN_00186020 =====

char * FUN_00186020(undefined8 param_1,uint *param_2,undefined8 *param_3,long *param_4,ulong param_5
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
      pcVar7 = (char *)FUN_001861b0(param_1,lVar8,param_4);
      if (pcVar7 != (char *)0x0) {
        return pcVar7;
      }
    }
    else if (*param_4 != lVar8) {
      return "CIE start does not match";
    }
    lVar8 = (long)puVar10 + uVar9;
    local_48 = puVar10 + 1;
    lVar3 = FUN_00188008(param_1,&local_48,lVar8,(char)param_4[3],0);
    lVar4 = FUN_00188008(param_1,&local_48,lVar8,*(byte *)(param_4 + 3) & 0xf,0);
    cVar1 = *(char *)((long)param_4 + 0x31);
    param_3[5] = 0;
    puVar10 = local_48;
    if (cVar1 != '\0') {
      lVar5 = FUN_00188394(&local_48,lVar8);
      puVar2 = local_48;
      puVar10 = (uint *)((long)local_48 + lVar5);
      if ((*(byte *)((long)param_4 + 0x19) != 0xff) &&
         (lVar5 = FUN_00188008(param_1,&local_48,lVar8,*(byte *)((long)param_4 + 0x19) & 0xf,0),
         lVar5 != 0)) {
        local_48 = puVar2;
        uVar6 = FUN_00188008(param_1,&local_48,lVar8,*(undefined1 *)((long)param_4 + 0x19),0);
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


// ===== 001861b0  FUN_001861b0 =====

char * FUN_001861b0(undefined8 param_1,uint *param_2,long *param_3)

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
      uVar7 = FUN_00188394(&local_48,pbVar1);
      uVar13 = 0;
      uVar14 = 0;
      *(undefined4 *)(param_3 + 5) = uVar7;
      puVar5 = PTR___sF_00192108;
      pbVar11 = local_48;
      pbVar15 = local_48;
      do {
        pbVar12 = pbVar11;
        if (pbVar15 == pbVar1) {
          fprintf((FILE *)(PTR___sF_00192108 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
        uVar6 = FUN_00188394(&local_48,pbVar1);
        *(undefined1 *)((long)param_3 + 0x32) = uVar6;
        bVar2 = *pbVar18;
      }
      if (bVar2 == 0x7a) {
        FUN_00188394(&local_48,pbVar1);
LAB_00186330:
        bVar2 = *pbVar18;
        if (bVar2 < 0x50) {
          if (bVar2 < 0x47) {
            if (bVar2 != 0x42) {
              if (bVar2 != 0) goto LAB_001863d0;
              goto LAB_00186414;
            }
            *(undefined1 *)((long)param_3 + 0x33) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_00186330;
          }
          if (bVar2 == 0x47) {
            *(undefined1 *)((long)param_3 + 0x34) = 1;
            goto LAB_001863d0;
          }
          if (bVar2 == 0x4c) {
            pbVar18 = pbVar18 + 1;
            *(byte *)((long)param_3 + 0x19) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_00186330;
          }
        }
        else if (bVar2 < 0x53) {
          if (bVar2 == 0x50) {
            bVar2 = *local_48;
            *(byte *)((long)param_3 + 0x1a) = bVar2;
            *(char *)((long)param_3 + 0x1b) = (char)(local_48 + 1) - (char)param_2;
            local_48 = local_48 + 1;
            lVar8 = FUN_00188008(param_1,&local_48,pbVar1,bVar2,0);
            param_3[4] = lVar8;
            pbVar18 = pbVar18 + 1;
            goto LAB_00186330;
          }
          if (bVar2 == 0x52) {
            pbVar18 = pbVar18 + 1;
            *(byte *)(param_3 + 3) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_00186330;
          }
        }
        else {
          if (bVar2 == 0x53) {
            *(undefined1 *)(param_3 + 6) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_00186330;
          }
          if (bVar2 == 0x7a) {
            *(undefined1 *)((long)param_3 + 0x31) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_00186330;
          }
        }
LAB_001863d0:
        pbVar18 = pbVar18 + 1;
        goto LAB_00186330;
      }
LAB_00186414:
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


// ===== 00186478  FUN_00186478 =====

void FUN_00186478(void)

{
  return;
}


// ===== 00186480  FUN_00186480 =====

void FUN_00186480(void)

{
  return;
}


// ===== 00186488  FUN_00186488 =====

bool FUN_00186488(undefined8 param_1,uint param_2)

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


// ===== 001864cc  FUN_001864cc =====

undefined8 FUN_001864cc(long param_1,uint param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_00192108;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_00186534:
      return *(undefined8 *)(param_1 + 0x108);
    }
    if (param_2 == 0xffffffff) goto LAB_00186528;
    if (param_2 == 0x1d) {
      return *(undefined8 *)(param_1 + 0xf8);
    }
  }
  else if ((int)param_2 < 0x20) {
    if (param_2 == 0x1e) {
      return *(undefined8 *)(param_1 + 0x100);
    }
    if (param_2 == 0x1f) goto LAB_00186534;
  }
  else {
    if (param_2 == 0x22) {
      return *(undefined8 *)(param_1 + 0x118);
    }
    if (param_2 == 0x20) {
LAB_00186528:
      return *(undefined8 *)(param_1 + 0x110);
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_00192108 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8);
}


// ===== 001865b4  FUN_001865b4 =====

void FUN_001865b4(long param_1,uint param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_00192108;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_0018661c:
      *(undefined8 *)(param_1 + 0x108) = param_3;
      return;
    }
    if (param_2 == 0xffffffff) goto LAB_00186610;
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
    if (param_2 == 0x1f) goto LAB_0018661c;
  }
  else {
    if (param_2 == 0x22) {
      *(undefined8 *)(param_1 + 0x118) = param_3;
      return;
    }
    if (param_2 == 0x20) {
LAB_00186610:
      *(undefined8 *)(param_1 + 0x110) = param_3;
      return;
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_00192108 + 0x130),"libunwind: %s - %s\n","setRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8) = param_3;
  return;
}


// ===== 0018669c  FUN_0018669c =====

bool FUN_0018669c(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffffffe0) == 0x40;
}


// ===== 001866b0  FUN_001866b0 =====

undefined1  [16] FUN_001866b0(long param_1,int param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + (long)param_2 * 8 + -0xe0);
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 001866c0  FUN_001866c0 =====

void FUN_001866c0(undefined8 param_1,long param_2,int param_3)

{
  *(undefined8 *)(param_2 + (long)param_3 * 8 + -0xe0) = param_1;
  return;
}


// ===== 001866d0  FUN_001866d0 =====

ulong FUN_001866d0(long *param_1,uint param_2)

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
    uVar3 = FUN_00186bf4(lVar1,uVar4,param_1[0x4b],param_1 + 2,(long)param_1 + 0x269,param_2 & 1);
    iVar2 = (int)uVar3;
  }
  else {
    memset(auStack_240,0,0x210);
    uVar3 = FUN_00186ad4(param_1,auStack_240);
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


// ===== 001867c0  FUN_001867c0 =====

void FUN_001867c0(long param_1,undefined8 *param_2)

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


// ===== 00186804  FUN_00186804 =====

void FUN_00186804(long param_1)

{
  FUN_0018989c(param_1 + 0x10);
  return;
}


// ===== 00186810  FUN_00186810 =====

undefined1 FUN_00186810(long param_1)

{
  return *(undefined1 *)(param_1 + 0x269);
}


// ===== 0018681c  FUN_0018681c =====

undefined8 FUN_0018681c(long *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  return 0;
}


// ===== 00186848  FUN_00186848 =====

void FUN_00186848(long *param_1,ulong param_2)

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
  iVar1 = dl_iterate_phdr(FUN_001891ec,&local_648);
  if (((iVar1 == 0) || (local_668 == 0)) ||
     (uVar4 = FUN_00188f18(param_1,uVar7,auStack_678,0), (uVar4 & 1) == 0)) {
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00196874);
    for (puVar6 = PTR_DAT_001965a8; puVar6 < PTR_DAT_001965b0; puVar6 = puVar6 + 0x20) {
      if ((*(ulong *)(puVar6 + 8) <= uVar7) && (uVar7 < *(ulong *)(puVar6 + 0x10))) {
        lVar3 = *(long *)(puVar6 + 0x18);
        pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00196874);
        if ((lVar3 != 0) &&
           (lVar3 = FUN_00186020(param_1[1],lVar3,&local_6a8,local_6e0,0), lVar3 == 0)) {
          memset(&local_648,0,0x618);
          uVar7 = FUN_0018707c(param_1[1],&local_6a8,local_6e0,uVar7,4,&local_648);
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
        goto LAB_001869d0;
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00196874);
LAB_001869d0:
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


// ===== 00186ac8  FUN_00186ac8 =====

void FUN_00186ac8(undefined8 param_1,undefined4 param_2)

{
  FUN_0018986c(param_2);
  return;
}


// ===== 00186ad4  FUN_00186ad4 =====

undefined8 FUN_00186ad4(long param_1)

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


// ===== 00186bf4  FUN_00186bf4 =====

undefined8
FUN_00186bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4,
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
  
  lVar7 = FUN_00186020(param_1,param_3,auStack_b0,auStack_e8,0);
  if (lVar7 == 0) {
    memset(auStack_700,0,0x618);
    uVar8 = FUN_0018707c(param_1,auStack_b0,auStack_e8,param_2,4,auStack_700);
    if ((uVar8 & 1) != 0) {
      uVar8 = FUN_00187cc4(param_1,auStack_700,param_4);
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
        puVar3 = PTR___sF_00192108;
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
              goto LAB_00186ed4;
            }
            else {
              puVar13 = (undefined8 *)((long)param_4 + 0x108);
              if ((local_b6 != 0x22) &&
                 ((puVar13 = (undefined8 *)((long)param_4 + 0x100), local_b6 != 0x20 &&
                  (puVar13 = (undefined8 *)((long)param_4 + 0xf8), local_b6 != 0x1f)))) {
LAB_00186ed4:
                if (0x1c < local_b6) {
                  fprintf((FILE *)(PTR___sF_00192108 + 0x130),"libunwind: %s - %s\n","getRegister",
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
LAB_00186fe0:
                  fprintf((FILE *)(PTR___sF_00192108 + 0x130),"libunwind: %s - %s\n",
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
              if (iVar2 != 6) goto LAB_00186fe0;
              puVar9 = (ulong *)FUN_0018855c(*(undefined8 *)(piVar15 + 2),param_1,param_4,uVar8);
              uVar18 = *puVar9;
            }
            local_a00[uVar12] = uVar18;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == local_b6) {
            uVar14 = FUN_00187df8(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == 0x22) {
            uVar10 = FUN_00187df8(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
          }
          else {
            if (0xffffffe0 < uVar16 - 0x40) {
              return 0xffffe672;
            }
            uVar11 = FUN_00187df8(param_1,param_4,uVar8,piVar15);
            puVar3 = PTR___sF_00192108;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
            if ((int)uVar16 < 0x1f) {
              uVar5 = uVar11;
              if ((uVar16 != 0x1d) && (uVar5 = local_a00[0x3b], uVar6 = uVar11, uVar16 != 0x1e))
              goto LAB_00186f28;
            }
            else {
              uVar18 = uVar11;
              if ((uVar16 != 0x1f) &&
                 ((uVar18 = local_a00[0x3d], uVar10 = uVar11, uVar16 != 0x22 &&
                  (uVar10 = local_a00[0x3f], uVar16 != 0x20)))) {
LAB_00186f28:
                if (0x1c < uVar12) {
                  fprintf((FILE *)(PTR___sF_00192108 + 0x130),"libunwind: %s - %s\n","setRegister",
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
            FUN_00187df8(param_1,auStack_b20,uVar8,&local_80);
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


// ===== 0018707c  FUN_0018707c =====

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_0018707c(undefined8 param_1,long *param_2,long *param_3,long param_4,int param_5,
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
LAB_00187100:
    lVar20 = lVar20 + 0x18;
    if (lVar20 == 0x30) {
      return 1;
    }
  }
  uVar17 = 0;
LAB_00187130:
  puVar18 = local_6c0;
  puVar5 = PTR___sF_00192108;
  pbVar10 = pbVar21 + 1;
  bVar3 = *pbVar21;
  apbStack_6a0[0xc0] = pbVar10;
  switch((ulong)bVar3) {
  case 0:
    goto code_r0x00187a04;
  case 1:
    uVar17 = FUN_00188008(local_6c8,apbStack_6a0 + 0xc0,pbVar2,(char)param_3[3],0);
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 2:
    uVar9 = (uint)pbVar21[1];
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 2;
    goto LAB_001875b8;
  case 3:
    uVar9 = (uint)*(ushort *)(pbVar21 + 1);
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 3;
    goto LAB_001875b8;
  case 4:
    uVar9 = *(uint *)(pbVar21 + 1);
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 5;
LAB_001875b8:
    uVar17 = uVar17 + iVar13 * uVar9;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 5:
    uVar19 = FUN_00188394(apbStack_6a0 + 0xc0,pbVar2);
    lVar8 = FUN_00188394(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended DWARF unwind, reg too big\n";
      __size = 0x46;
      __s = (FILE *)(PTR___sF_00192108 + 0x130);
      goto LAB_00187bb4;
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
LAB_00187554:
    puVar12[6] = 2;
    *(long *)(puVar12 + 8) = lVar8;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 6:
    uVar19 = FUN_00188394(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_restore_extended DWARF unwind, reg too big\n";
LAB_00187aa4:
      __s = (FILE *)(PTR___sF_00192108 + 0x130);
      __size = 0x47;
      goto LAB_00187bb4;
    }
    cVar4 = *(char *)(param_6 + uVar19 * 4 + 7);
joined_r0x001879e4:
    if (cVar4 != '\0') {
      pbVar21 = apbStack_6a0[uVar19 * 2];
      *(byte **)(param_6 + uVar19 * 4 + 8) = apbStack_6a0[uVar19 * 2 + 1];
      *(byte **)(param_6 + uVar19 * 4 + 6) = pbVar21;
    }
    goto code_r0x00187a04;
  case 7:
    uVar19 = FUN_00188394(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_undefined DWARF unwind, reg too big\n";
LAB_00187ba8:
      __s = (FILE *)(PTR___sF_00192108 + 0x130);
      __size = 0x40;
      goto LAB_00187bb4;
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
    uVar19 = FUN_00188394(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_same_value DWARF unwind, reg too big\n";
LAB_00187b8c:
      __s = (FILE *)(PTR___sF_00192108 + 0x130);
      __size = 0x41;
      goto LAB_00187bb4;
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
    uVar19 = FUN_00188394(apbStack_6a0 + 0xc0,pbVar2);
    uVar14 = FUN_00188394(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg too big\n";
      __size = 0x3f;
      __s = (FILE *)(PTR___sF_00192108 + 0x130);
      goto LAB_00187bb4;
    }
    if (0x5f < uVar14) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg2 too big\n";
      goto LAB_00187ba8;
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
    uVar19 = FUN_00188394(apbStack_6a0 + 0xc0,pbVar2);
    uVar7 = FUN_00188394(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa DWARF unwind, reg too big\n";
      __size = 0x3e;
      __s = (FILE *)(PTR___sF_00192108 + 0x130);
      goto LAB_00187bb4;
    }
    *param_6 = (int)uVar19;
    param_6[1] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xd:
    uVar19 = FUN_00188394(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa_register DWARF unwind, reg too big\n";
      goto LAB_00187aa4;
    }
    *param_6 = (int)uVar19;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xe:
    uVar7 = FUN_00188394(apbStack_6a0 + 0xc0,pbVar2);
    param_6[1] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xf:
    *param_6 = 0;
    *(byte **)(param_6 + 2) = pbVar10;
    goto LAB_00187938;
  case 0x10:
    uVar19 = FUN_00188394(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_expression DWARF unwind, reg too big\n";
      goto LAB_00187b8c;
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
LAB_00187930:
    puVar12[6] = uVar7;
    *(byte **)(puVar12 + 8) = apbStack_6a0[0xc0];
LAB_00187938:
    lVar8 = FUN_00188394(apbStack_6a0 + 0xc0,pbVar2);
    apbStack_6a0[0xc0] = apbStack_6a0[0xc0] + lVar8;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x11:
    uVar19 = FUN_00188394(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_00192108;
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended_sf DWARF unwind, reg too big\n";
      __size = 0x49;
      __s = (FILE *)(PTR___sF_00192108 + 0x130);
      goto LAB_00187bb4;
    }
    uVar14 = 0;
    uVar11 = 0;
    pbVar21 = apbStack_6a0[0xc0];
    pbVar10 = apbStack_6a0[0xc0];
    do {
      if (pbVar10 == pbVar2) {
        fprintf((FILE *)(PTR___sF_00192108 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
LAB_001878c4:
    puVar12[6] = uVar7;
    *(ulong *)(puVar12 + 8) = uVar11 * (long)iVar13;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x12:
    uVar14 = FUN_00188394(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_00192108;
    uVar19 = 0;
    uVar11 = 0;
    pbVar21 = apbStack_6a0[0xc0];
    pbVar10 = apbStack_6a0[0xc0];
    do {
      if (pbVar10 == pbVar2) {
        fprintf((FILE *)(PTR___sF_00192108 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      goto LAB_00187b8c;
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
        fprintf((FILE *)(PTR___sF_00192108 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
    uVar19 = FUN_00188394(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      fprintf((FILE *)(PTR___sF_00192108 + 0x130),
              "libunwind: malformed DW_CFA_val_offset DWARF unwind, reg (%lu) out of range\n\n",
              uVar19);
      goto LAB_00187bbc;
    }
    lVar8 = FUN_00188394(apbStack_6a0 + 0xc0,pbVar2);
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
    uVar19 = FUN_00188394(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_00192108;
    if (uVar19 < 0x60) {
      uVar14 = 0;
      uVar11 = 0;
      pbVar21 = apbStack_6a0[0xc0];
      pbVar10 = apbStack_6a0[0xc0];
      do {
        if (pbVar10 == pbVar2) {
          fprintf((FILE *)(PTR___sF_00192108 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      goto LAB_001878c4;
    }
    __ptr = "libunwind: malformed DW_CFA_val_offset_sf DWARF unwind, reg too big\n";
    __size = 0x44;
    __s = (FILE *)(PTR___sF_00192108 + 0x130);
    goto LAB_00187bb4;
  case 0x16:
    uVar19 = FUN_00188394(apbStack_6a0 + 0xc0,pbVar2);
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
      goto LAB_00187930;
    }
    __ptr = "libunwind: malformed DW_CFA_val_expression DWARF unwind, reg too big\n";
    __size = 0x45;
    __s = (FILE *)(PTR___sF_00192108 + 0x130);
    goto LAB_00187bb4;
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
        goto joined_r0x001879e4;
      }
      if (bVar1 != 0x80) {
        return 0;
      }
      local_6dc = param_5;
      lVar8 = FUN_00188394(apbStack_6a0 + 0xc0,pbVar2);
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
    if (param_5 != 4) goto code_r0x00187a04;
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
    uVar7 = FUN_00188394(apbStack_6a0 + 0xc0,pbVar2);
    param_6[4] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x2f:
    uVar19 = FUN_00188394(apbStack_6a0 + 0xc0,pbVar2);
    if (uVar19 < 0x60) {
      lVar8 = FUN_00188394(apbStack_6a0 + 0xc0,pbVar2);
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
      goto LAB_00187554;
    }
    __ptr = "libunwind: malformed DW_CFA_GNU_negative_offset_extended DWARF unwind, reg too big\n";
    __size = 0x53;
    __s = (FILE *)(PTR___sF_00192108 + 0x130);
LAB_00187bb4:
    fwrite(__ptr,__size,1,__s);
LAB_00187bbc:
    fflush((FILE *)(PTR___sF_00192108 + 0x130));
    return 0;
  }
joined_r0x001874ec:
  if ((pbVar2 <= pbVar21) || (uVar16 <= uVar17)) goto LAB_00187100;
  goto LAB_00187130;
code_r0x00187a04:
  pbVar21 = apbStack_6a0[0xc0];
  goto joined_r0x001874ec;
}


// ===== 00187cc4  FUN_00187cc4 =====

long FUN_00187cc4(undefined8 param_1,uint *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR___sF_00192108;
  uVar1 = *param_2;
  if ((int)uVar1 < 0x1e) {
    if ((int)uVar1 < 0) {
      if (uVar1 == 0xfffffffe) {
LAB_00187d04:
        return *(long *)(param_3 + 0xf8) + (long)(int)param_2[1];
      }
      if (uVar1 == 0xffffffff) goto LAB_00187d48;
    }
    else {
      if (uVar1 == 0) {
        lVar3 = FUN_0018855c(*(undefined8 *)(param_2 + 2),param_1,param_3,0);
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
    if (uVar1 == 0x1f) goto LAB_00187d04;
  }
  else {
    if (uVar1 == 0x22) {
      return *(long *)(param_3 + 0x108) + (long)(int)param_2[1];
    }
    if (uVar1 == 0x20) {
LAB_00187d48:
      return *(long *)(param_3 + 0x100) + (long)(int)param_2[1];
    }
  }
  if (0x1c < uVar1) {
    fprintf((FILE *)(PTR___sF_00192108 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(long *)(param_3 + (ulong)uVar1 * 8) + (long)(int)param_2[1];
}


// ===== 00187df8  FUN_00187df8 =====

undefined8 FUN_00187df8(undefined8 param_1,long param_2,long param_3,int *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  puVar2 = PTR___sF_00192108;
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
LAB_00187f34:
          return *(undefined8 *)(param_2 + 0xf8);
        }
        if (uVar5 == 0xffffffff) goto LAB_00187f1c;
        if (uVar5 == 0x1d) {
          return *(undefined8 *)(param_2 + 0xe8);
        }
      }
      else if ((int)uVar5 < 0x20) {
        if (uVar5 == 0x1e) {
          return *(undefined8 *)(param_2 + 0xf0);
        }
        if (uVar5 == 0x1f) goto LAB_00187f34;
      }
      else {
        if (uVar5 == 0x22) {
          return *(undefined8 *)(param_2 + 0x108);
        }
        if (uVar5 == 0x20) {
LAB_00187f1c:
          return *(undefined8 *)(param_2 + 0x100);
        }
      }
      if (0x1c < uVar5) {
        fprintf((FILE *)(PTR___sF_00192108 + 0x130),"libunwind: %s - %s\n","getRegister",
                "unsupported arm64 register");
        fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      return *(undefined8 *)(param_2 + (*(ulong *)(param_4 + 2) & 0xffffffff) * 8);
    }
    if (iVar1 == 6) {
      puVar4 = (undefined8 *)FUN_0018855c(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return *puVar4;
    }
    if (iVar1 == 7) {
      uVar3 = FUN_0018855c(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return uVar3;
    }
  }
  fprintf((FILE *)(PTR___sF_00192108 + 0x130),"libunwind: %s - %s\n","getSavedRegister",
          "unsupported restore location for register");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00188008  FUN_00188008 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_00188008(undefined8 param_1,long *param_2,ulong *param_3,uint param_4,long param_5)

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
  
  puVar3 = PTR___sF_00192108;
  uVar1 = param_4 & 0xf;
  puVar10 = (ulong *)*param_2;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      if ((param_4 & 0xf) == 0) goto LAB_00188154;
      if (uVar1 != 1) {
LAB_00188360:
        fprintf((FILE *)(PTR___sF_00192108 + 0x130),"libunwind: %s - %s\n","getEncodedP",
                "unknown pointer encoding");
        fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar4 = (undefined8 *)FUN_00188394(param_2,param_3);
      puVar3 = PTR___sF_00192108;
    }
    else if (uVar1 == 2) {
      puVar4 = (undefined8 *)(ulong)(ushort)*puVar10;
      *param_2 = (long)puVar10 + 2;
      puVar3 = PTR___sF_00192108;
    }
    else {
      if (uVar1 != 3) goto LAB_00188360;
      puVar4 = (undefined8 *)(ulong)(uint)*puVar10;
      *param_2 = (long)((long)puVar10 + 4);
      puVar3 = PTR___sF_00192108;
    }
  }
  else if (uVar1 < 10) {
    if (uVar1 == 4) {
LAB_00188154:
      puVar4 = (undefined8 *)*puVar10;
      *param_2 = (long)(puVar10 + 1);
      puVar3 = PTR___sF_00192108;
    }
    else {
      if (uVar1 != 9) goto LAB_00188360;
      uVar7 = 0;
      uVar5 = 0;
      puVar6 = puVar10;
      puVar9 = puVar10;
      do {
        if (puVar9 == param_3) {
          fprintf((FILE *)(PTR___sF_00192108 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      puVar3 = PTR___sF_00192108;
    }
  }
  else if (uVar1 == 10) {
    puVar4 = (undefined8 *)(long)(short)*puVar10;
    *param_2 = (long)puVar10 + 2;
    puVar3 = PTR___sF_00192108;
  }
  else {
    if (uVar1 != 0xb) {
      if (uVar1 != 0xc) goto LAB_00188360;
      goto LAB_00188154;
    }
    puVar4 = (undefined8 *)(long)(int)(uint)*puVar10;
    *param_2 = (long)((long)puVar10 + 4);
    puVar3 = PTR___sF_00192108;
  }
  uVar1 = (param_4 & 0xff) >> 4 & 7;
  PTR___sF_00192108 = puVar3;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
      if (uVar1 != 1) goto LAB_0018832c;
      puVar4 = (undefined8 *)((long)puVar4 + (long)puVar10);
    }
LAB_001881e0:
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
      goto LAB_001881e0;
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
LAB_0018832c:
  fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP","unknown pointer encoding");
  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00188394  FUN_00188394 =====

ulong FUN_00188394(long *param_1,byte *param_2)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  puVar2 = PTR___sF_00192108;
  pbVar4 = (byte *)*param_1;
  if (pbVar4 != param_2) {
    pbVar5 = pbVar4 + 1;
    uVar3 = (ulong)*pbVar4 & 0x7f;
    if (-1 < (char)*pbVar4) {
LAB_001883c4:
      *param_1 = (long)pbVar5;
      return uVar3;
    }
    if (pbVar5 != param_2) {
      uVar3 = uVar3 | (ulong)((int)(char)pbVar4[1] & 0x7f) << 7;
      pbVar5 = pbVar4 + 2;
      if (-1 < (char)pbVar4[1]) goto LAB_001883c4;
      if (pbVar5 != param_2) {
        uVar3 = uVar3 | (ulong)((int)(char)pbVar4[2] & 0x7f) << 0xe;
        pbVar5 = pbVar4 + 3;
        if (-1 < (char)pbVar4[2]) goto LAB_001883c4;
        if (pbVar5 != param_2) {
          uVar3 = uVar3 | (ulong)((int)(char)pbVar4[3] & 0x7f) << 0x15;
          pbVar5 = pbVar4 + 4;
          if (-1 < (char)pbVar4[3]) goto LAB_001883c4;
          if (pbVar5 != param_2) {
            uVar3 = uVar3 | (ulong)((int)(char)pbVar4[4] & 0x7f) << 0x1c;
            pbVar5 = pbVar4 + 5;
            if (-1 < (char)pbVar4[4]) goto LAB_001883c4;
            if (pbVar5 != param_2) {
              uVar3 = uVar3 | (ulong)((int)(char)pbVar4[5] & 0x7f) << 0x23;
              pbVar5 = pbVar4 + 6;
              if (-1 < (char)pbVar4[5]) goto LAB_001883c4;
              if (pbVar5 != param_2) {
                uVar3 = uVar3 | (ulong)((int)(char)pbVar4[6] & 0x7f) << 0x2a;
                pbVar5 = pbVar4 + 7;
                if (-1 < (char)pbVar4[6]) goto LAB_001883c4;
                if (pbVar5 != param_2) {
                  uVar3 = uVar3 | (ulong)((int)(char)pbVar4[7] & 0x7f) << 0x31;
                  pbVar5 = pbVar4 + 8;
                  if (-1 < (char)pbVar4[7]) goto LAB_001883c4;
                  if (pbVar5 != param_2) {
                    uVar3 = uVar3 | (ulong)((int)(char)pbVar4[8] & 0x7f) << 0x38;
                    pbVar5 = pbVar4 + 9;
                    if (-1 < (char)pbVar4[8]) goto LAB_001883c4;
                    if (pbVar5 != param_2) {
                      bVar1 = *pbVar5;
                      if ((bVar1 & 0x7e) == 0) {
                        if (-1 < (char)bVar1) {
                          *param_1 = (long)(pbVar4 + 10);
                          return uVar3 | (ulong)bVar1 << 0x3f;
                        }
                        if (pbVar4 + 10 == param_2) goto LAB_001884f4;
                      }
                      fprintf((FILE *)(PTR___sF_00192108 + 0x130),"libunwind: %s - %s\n",
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
LAB_001884f4:
  fprintf((FILE *)(PTR___sF_00192108 + 0x130),"libunwind: %s - %s\n","getULEB128",
          "truncated uleb128 expression");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0018855c  FUN_0018855c =====

ulong FUN_0018855c(byte *param_1,undefined8 param_2,long param_3,ulong param_4)

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
  lVar11 = FUN_00188394(&local_68,param_1 + 0x14);
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
      puVar9 = PTR___sF_00192108;
      pbVar13 = pbVar18 + 1;
      local_68 = pbVar13;
      bVar8 = *pbVar18;
      uVar10 = (uint)bVar8;
      if (0x91 < uVar10 - 3) {
code_r0x00188dd8:
        fprintf((FILE *)(PTR___sF_00192108 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
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
        goto LAB_00188a44;
      case 4:
      case 5:
      case 7:
        goto code_r0x00188dd8;
      case 6:
        puVar14 = (ulong *)*puVar19;
LAB_001889d4:
        *puVar19 = *puVar14;
        goto LAB_001885e0;
      case 8:
        uVar16 = (ulong)pbVar18[1];
        goto LAB_001889a8;
      case 9:
        uVar16 = (ulong)(char)pbVar18[1];
LAB_001889a8:
        local_68 = pbVar18 + 2;
        goto LAB_00188a44;
      case 10:
        uVar16 = (ulong)*(ushort *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_00188a44;
      case 0xb:
        uVar16 = (ulong)*(short *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_00188a44;
      case 0xc:
        uVar16 = (ulong)*(uint *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_00188a44;
      case 0xd:
        uVar16 = (ulong)*(int *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_00188a44;
      case 0x10:
        uVar16 = FUN_00188394(&local_68,pbVar6);
        puVar19 = puVar19 + 1;
        *puVar19 = uVar16;
        goto LAB_001885e0;
      case 0x11:
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = pbVar13;
        do {
          if (pbVar18 == pbVar6) {
            fprintf((FILE *)(PTR___sF_00192108 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
        goto LAB_001885e0;
      case 0x12:
        uVar16 = *puVar19;
        goto LAB_001885dc;
      case 0x13:
        puVar19 = puVar19 + -1;
        goto LAB_001885e0;
      case 0x14:
        uVar16 = puVar19[-1];
        goto LAB_001885dc;
      case 0x15:
        local_68 = pbVar18 + 2;
        uVar16 = puVar19[-(ulong)pbVar18[1]];
LAB_00188a44:
LAB_001885dc:
        puVar19[1] = uVar16;
        puVar19 = puVar19 + 1;
        goto LAB_001885e0;
      case 0x16:
        auVar20 = NEON_ext(*(undefined1 (*) [16])(puVar19 + -1),*(undefined1 (*) [16])(puVar19 + -1)
                           ,8,1);
        *puVar19 = auVar20._8_8_;
        puVar19[-1] = auVar20._0_8_;
        goto LAB_001885e0;
      case 0x17:
        uVar16 = *puVar19;
        *puVar19 = SUB168(*(undefined1 (*) [16])(puVar19 + -2),8);
        puVar19[-1] = SUB168(*(undefined1 (*) [16])(puVar19 + -2),0);
        puVar19[-2] = uVar16;
        goto LAB_001885e0;
      case 0x18:
        puVar14 = (ulong *)*puVar19;
        puVar19 = puVar19 + -1;
        *puVar19 = *puVar14;
        goto LAB_001885e0;
      case 0x19:
        uVar16 = *puVar19;
        if ((long)uVar16 < 0) goto LAB_00188b7c;
        goto LAB_001885e0;
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
LAB_00188b7c:
        *puVar19 = -uVar16;
        goto LAB_001885e0;
      case 0x20:
        *puVar19 = ~*puVar19;
        goto LAB_001885e0;
      case 0x21:
        uVar16 = puVar19[-1] | *puVar19;
        break;
      case 0x22:
        uVar16 = puVar19[-1] + *puVar19;
        break;
      case 0x23:
        lVar11 = FUN_00188394(&local_68,pbVar6);
        *puVar19 = *puVar19 + lVar11;
        goto LAB_001885e0;
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
        goto LAB_001885e0;
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
        goto LAB_001885e0;
      default:
        uVar16 = (ulong)(uVar15 - 0x30);
        goto LAB_001885dc;
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
        goto LAB_001885d8;
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
            fprintf((FILE *)(PTR___sF_00192108 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
             (puVar14 = puVar2, bVar8 != 0x8d)) goto LAB_00188718;
        }
        else if (bVar8 < 0x90) {
          puVar14 = puVar1;
          if ((bVar8 != 0x8e) && (puVar14 = puVar4, uVar15 != 0x8f)) {
LAB_00188718:
            if (0x1c < uVar10 - 0x70) {
              fprintf((FILE *)(PTR___sF_00192108 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((bVar8 != 0x90) && (puVar14 = puVar3, bVar8 != 0x92)) goto LAB_00188718;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_001885dc;
      case 0x90:
        uVar10 = FUN_00188394(&local_68,pbVar6);
        puVar9 = PTR___sF_00192108;
        if ((int)uVar10 < 0x1e) {
          if (((uVar10 != 0xfffffffe) && (puVar14 = puVar5, uVar10 != 0xffffffff)) &&
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_00188c7c;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_00188c7c:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_00192108 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_00188c7c;
        }
LAB_001885d8:
        uVar16 = *puVar14;
        goto LAB_001885dc;
      case 0x91:
        fprintf((FILE *)(PTR___sF_00192108 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
                "DW_OP_fbreg not implemented");
        fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x92:
        uVar10 = FUN_00188394(&local_68,pbVar6);
        puVar9 = PTR___sF_00192108;
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = local_68;
        pbVar13 = local_68;
        do {
          if (pbVar13 == pbVar6) {
            fprintf((FILE *)(PTR___sF_00192108 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_00188ca4;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_00188ca4:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_00192108 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_00188ca4;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_001885dc;
      case 0x93:
        fprintf((FILE *)(PTR___sF_00192108 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
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
LAB_00188e7c:
              fprintf((FILE *)(PTR___sF_00192108 + 0x130),"libunwind: %s - %s\n",
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
            if (bVar8 != 8) goto LAB_00188e7c;
            goto LAB_001889d4;
          }
          *puVar19 = (ulong)(uint)*puVar14;
        }
        goto LAB_001885e0;
      }
      puVar19[-1] = uVar16;
      puVar19 = puVar19 + -1;
LAB_001885e0:
      pbVar18 = local_68;
    } while (local_68 < pbVar6);
    param_4 = *puVar19;
  }
  return param_4;
}


// ===== 00188f18  FUN_00188f18 =====

undefined8 FUN_00188f18(long param_1,ulong param_2,long *param_3,uint param_4)

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
      (uVar3 = FUN_00189440(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],
                            param_3[2] + (ulong)param_4,&local_6b0,auStack_6e8), (uVar3 & 1) == 0))
     && ((param_3[4] == 0 ||
         (uVar3 = FUN_00189608(*(undefined8 *)(param_1 + 8),param_2,param_3[4],(int)param_3[5],
                               &local_6b0,auStack_6e8), (uVar3 & 1) == 0)))) {
    lVar5 = *param_3;
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00196874);
    if (PTR_DAT_001965a8 < PTR_DAT_001965b0) {
      plVar4 = (long *)PTR_DAT_001965a8;
      if (lVar5 == -1) {
        do {
          if (((ulong)plVar4[1] <= param_2) && (param_2 < (ulong)plVar4[2])) goto LAB_00189020;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_001965b0);
      }
      else {
        do {
          if (((*plVar4 == lVar5) && ((ulong)plVar4[1] <= param_2)) && (param_2 < (ulong)plVar4[2]))
          goto LAB_00189020;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_001965b0);
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00196874);
    goto LAB_00189068;
  }
LAB_00189088:
  bVar2 = 1;
LAB_0018908c:
  lVar5 = *param_3;
  memset(auStack_680,0,0x618);
  uVar3 = FUN_0018707c(*(undefined8 *)(param_1 + 8),&local_6b0,auStack_6e8,param_2,4,auStack_680);
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
      pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_00196874);
      __src = PTR_DAT_001965a8;
      if (DAT_001965b8 <= PTR_DAT_001965b0) {
        __n = (long)DAT_001965b8 - (long)PTR_DAT_001965a8;
        __dest = (undefined *)malloc(__n * 4);
        memcpy(__dest,__src,__n);
        if ((undefined8 *)__src != &DAT_001968b0) {
          free(__src);
        }
        DAT_001965b8 = __dest + ((long)__n >> 3) * 0x20;
        PTR_DAT_001965b0 = __dest + __n;
        PTR_DAT_001965a8 = __dest;
      }
      *(long *)PTR_DAT_001965b0 = lVar5;
      *(long *)((long)PTR_DAT_001965b0 + 8) = local_698;
      *(long *)((long)PTR_DAT_001965b0 + 0x18) = local_6b0;
      *(long *)((long)PTR_DAT_001965b0 + 0x10) = local_690;
      PTR_DAT_001965b0 = (undefined *)((long)PTR_DAT_001965b0 + 0x20);
      pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00196874);
      return 1;
    }
    return 1;
  }
  return 1;
LAB_00189020:
  lVar5 = plVar4[3];
  pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00196874);
  if ((lVar5 != 0) &&
     (uVar3 = FUN_00189440(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],lVar5,
                           &local_6b0,auStack_6e8), (uVar3 & 1) != 0)) {
    bVar2 = 0;
    goto LAB_0018908c;
  }
LAB_00189068:
  uVar3 = FUN_00189440(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],0,&local_6b0,
                       auStack_6e8);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  goto LAB_00189088;
}


// ===== 001891ec  FUN_001891ec =====

undefined8 FUN_001891ec(ulong *param_1,undefined8 param_2,undefined8 *param_3)

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
              uVar5 = FUN_00189320(uVar2,lVar8,lVar9 + lVar8,local_70);
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


// ===== 00189320  FUN_00189320 =====

undefined8 FUN_00189320(undefined8 param_1,byte *param_2,byte *param_3,undefined8 *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  byte *local_28;
  
  puVar3 = PTR___sF_00192108;
  if ((ulong)((long)param_3 - (long)param_2) < 4) {
    if (param_3 == param_2) {
      return 0;
    }
    fprintf((FILE *)(PTR___sF_00192108 + 0x130),
            "libunwind: unsupported .eh_frame_hdr at %lx: need at least 4 bytes of data but only got %zd\n"
            ,param_2);
  }
  else {
    if (*param_2 == 1) {
      local_28 = param_2 + 4;
      bVar1 = param_2[2];
      bVar2 = param_2[1];
      *(byte *)(param_4 + 3) = param_2[3];
      uVar4 = FUN_00188008(param_1,&local_28,param_3,bVar2,param_2);
      *param_4 = uVar4;
      if (bVar1 == 0xff) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_00188008(param_1,&local_28,param_3,bVar1,param_2);
      }
      param_4[1] = uVar4;
      param_4[2] = local_28;
      return 1;
    }
    fprintf((FILE *)(PTR___sF_00192108 + 0x130),
            "libunwind: unsupported .eh_frame_hdr version: %u at %lx\n",(ulong)(uint)*param_2,
            param_2);
  }
  fflush((FILE *)(puVar3 + 0x130));
  return 0;
}


// ===== 00189440  FUN_00189440 =====

undefined8
FUN_00189440(undefined8 param_1,ulong param_2,uint *param_3,long param_4,uint *param_5,
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
        (puVar7 < puVar9)) && (lVar4 = FUN_001861b0(param_1,puVar7,param_7), lVar4 == 0)) {
      local_68 = local_68 + 1;
      uVar8 = FUN_00188008(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x18),0);
      lVar4 = FUN_00188008(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x18) & 0xf,0);
      if ((uVar8 < param_2) && (param_2 <= lVar4 + uVar8)) {
        cVar2 = *(char *)(param_7 + 0x31);
        param_6[5] = 0;
        puVar9 = local_68;
        if (cVar2 != '\0') {
          lVar5 = FUN_00188394(&local_68,puVar1);
          puVar7 = local_68;
          puVar9 = (uint *)((long)local_68 + lVar5);
          if ((*(byte *)(param_7 + 0x19) != 0xff) &&
             (lVar5 = FUN_00188008(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x19) & 0xf,0),
             lVar5 != 0)) {
            local_68 = puVar7;
            uVar6 = FUN_00188008(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x19),0);
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


// ===== 00189608  FUN_00189608 =====

undefined8
FUN_00189608(undefined8 param_1,ulong param_2,long param_3,ulong param_4,long param_5,
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
  uVar1 = FUN_00189320(param_1,param_3,lVar4,auStack_80);
  if (((uVar1 & 1) != 0) && (local_78 != 0)) {
    lVar2 = FUN_00189770(local_68);
    lVar7 = 0;
    do {
      if (local_78 < 2) {
        lVar8 = lVar7 * lVar2;
        break;
      }
      uVar6 = local_78 >> 1;
      lVar8 = (uVar6 + lVar7) * lVar2;
      local_88 = local_70 + lVar8;
      uVar1 = FUN_00188008(param_1,&local_88,lVar4,local_68,param_3);
      uVar5 = local_78 - uVar6;
      local_78 = uVar6;
      if (uVar1 < param_2) {
        local_78 = uVar5;
        lVar7 = uVar6 + lVar7;
      }
    } while (uVar1 != param_2);
    local_88 = local_70 + lVar8;
    FUN_00188008(param_1,&local_88,lVar4,local_68,param_3);
    uVar3 = FUN_00188008(param_1,&local_88,lVar4,local_68,param_3);
    lVar4 = FUN_00186020(param_1,uVar3,param_5,param_6,0);
    if (((lVar4 == 0) && (*(ulong *)(param_5 + 0x18) <= param_2)) &&
       (param_2 < *(ulong *)(param_5 + 0x20))) {
      return 1;
    }
  }
  return 0;
}


// ===== 00189770  FUN_00189770 =====

undefined8 FUN_00189770(uint param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_00192108;
  param_1 = param_1 & 0xf;
  if (param_1 < 9) {
    if (param_1 < 3) {
      if (param_1 == 2) {
        return 4;
      }
      if (param_1 == 1) {
LAB_00189838:
        fprintf((FILE *)(PTR___sF_00192108 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
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
    if (param_1 == 9) goto LAB_00189838;
  }
  else {
    if (param_1 == 0xc) {
      return 0x10;
    }
    if (param_1 == 0xb) {
      return 8;
    }
  }
  fprintf((FILE *)(PTR___sF_00192108 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
          "Unknown DWARF encoding for search table.");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0018986c  FUN_0018986c =====

char * FUN_0018986c(int param_1)

{
  if (param_1 + 2U < 0x62) {
    return &DAT_001168c4 + *(int *)(&DAT_001168c4 + (ulong)(param_1 + 2U) * 4);
  }
  return "unknown register";
}


// ===== 0018989c  FUN_0018989c =====

undefined1  [16] FUN_0018989c(undefined1 (*param_1) [16])

{
  return *param_1;
}


// ===== 0018992c  FUN_0018992c =====

undefined8
FUN_0018992c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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


// ===== 001899d0  FUN_001899d0 =====

void FUN_001899d0(void)

{
  (*(code *)PTR_001921f0)();
  return;
}


// ===== 001899f0  <EXTERNAL>::__cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_001921f8)();
  return;
}


// ===== 00189a00  <EXTERNAL>::__cxa_atexit =====

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_00192200)();
  return;
}


// ===== 00189a10  <EXTERNAL>::__android_log_print =====

void __android_log_print(void)

{
  (*(code *)PTR___android_log_print_00192208)();
  return;
}


// ===== 00189a20  <EXTERNAL>::__stack_chk_fail =====

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00192210)();
  return;
}


// ===== 00189a30  <EXTERNAL>::setjmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setjmp(__jmp_buf_tag *__env)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setjmp_00192218)((int)__env);
  return iVar1;
}


// ===== 00189a40  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00192220)();
  return;
}


// ===== 00189a50  <EXTERNAL>::memset =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00192228)(__s,__c);
  return pvVar1;
}


// ===== 00189a60  <EXTERNAL>::longjmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void longjmp(__jmp_buf_tag *__env,int __val)

{
  (*(code *)PTR_longjmp_00192230)(__env,__val);
  return;
}


// ===== 00189a70  operator.new =====

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00192238)();
  return pvVar1;
}


// ===== 00189a80  <EXTERNAL>::memcpy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00192240)();
  return pvVar1;
}


// ===== 00189a90  <EXTERNAL>::memmove =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00192248)();
  return pvVar1;
}


// ===== 00189aa0  std::__ndk1::__libcpp_verbose_abort =====

void std::__ndk1::__libcpp_verbose_abort(char *param_1,...)

{
  (*(code *)PTR___libcpp_verbose_abort_00192250)();
  return;
}


// ===== 00189ab0  <EXTERNAL>::exit =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00192258)(__status);
  return;
}


// ===== 00189ac0  <EXTERNAL>::fprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00192260)((int)__stream);
  return iVar1;
}


// ===== 00189ad0  <EXTERNAL>::__vsnprintf_chk =====

void __vsnprintf_chk(void)

{
  (*(code *)PTR___vsnprintf_chk_00192268)();
  return;
}


// ===== 00189ae0  <EXTERNAL>::getenv =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_00192270)();
  return pcVar1;
}


// ===== 00189af0  <EXTERNAL>::strlen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00192278)();
  return sVar1;
}


// ===== 00189b00  <EXTERNAL>::strncpy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_00192280)();
  return pcVar1;
}


// ===== 00189b10  <EXTERNAL>::__strlen_chk =====

void __strlen_chk(void)

{
  (*(code *)PTR___strlen_chk_00192288)();
  return;
}


// ===== 00189b20  <EXTERNAL>::sscanf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_00192290)((int)__s);
  return iVar1;
}


// ===== 00189b30  <EXTERNAL>::malloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00192298)();
  return pvVar1;
}


// ===== 00189b40  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_001922a0)();
  return;
}


// ===== 00189b50  __emutls_get_address =====

void __emutls_get_address(void)

{
  (*(code *)PTR___emutls_get_address_001922a8)();
  return;
}


// ===== 00189b60  <EXTERNAL>::fopen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_001922b0)();
  return pFVar1;
}


// ===== 00189b70  <EXTERNAL>::fgets =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_001922b8)(__s,__n);
  return pcVar1;
}


// ===== 00189b80  <EXTERNAL>::strchr =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_001922c0)(__s,__c);
  return pcVar1;
}


// ===== 00189b90  <EXTERNAL>::feof =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int feof(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_feof_001922c8)((int)__stream);
  return iVar1;
}


// ===== 00189ba0  <EXTERNAL>::fclose =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_001922d0)((int)__stream);
  return iVar1;
}


// ===== 00189bb0  <EXTERNAL>::strncmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_001922d8)((int)__s1);
  return iVar1;
}


// ===== 00189bc0  <EXTERNAL>::strstr =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_001922e0)();
  return pcVar1;
}


// ===== 00189bd0  <EXTERNAL>::__memcpy_chk =====

void __memcpy_chk(void)

{
  (*(code *)PTR___memcpy_chk_001922e8)();
  return;
}


// ===== 00189be0  <EXTERNAL>::posix_memalign =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int posix_memalign(void **__memptr,size_t __alignment,size_t __size)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_posix_memalign_001922f0)((int)__memptr);
  return iVar1;
}


// ===== 00189bf0  <EXTERNAL>::syslog =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void syslog(int __pri,char *__fmt,...)

{
  (*(code *)PTR_syslog_001922f8)(__pri);
  return;
}


// ===== 00189c00  <EXTERNAL>::snprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00192300)((int)__s);
  return iVar1;
}


// ===== 00189c10  <EXTERNAL>::openlog =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void openlog(char *__ident,int __option,int __facility)

{
  (*(code *)PTR_openlog_00192308)(__ident,__option,__facility);
  return;
}


// ===== 00189c20  <EXTERNAL>::memchr =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memchr(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memchr_00192310)(__s,__c);
  return pvVar1;
}


// ===== 00189c30  <EXTERNAL>::fwrite =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00192318)();
  return sVar1;
}


// ===== 00189c40  <EXTERNAL>::realloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_00192320)();
  return pvVar1;
}


// ===== 00189c50  <EXTERNAL>::pthread_getspecific =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * pthread_getspecific(pthread_key_t __key)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_pthread_getspecific_00192328)(__key);
  return pvVar1;
}


// ===== 00189c60  <EXTERNAL>::pthread_rwlock_unlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_unlock_00192330)((int)__rwlock);
  return iVar1;
}


// ===== 00189c70  <EXTERNAL>::__system_property_get =====

void __system_property_get(void)

{
  (*(code *)PTR___system_property_get_00192338)();
  return;
}


// ===== 00189c80  <EXTERNAL>::vfprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vfprintf_00192340)((int)__s);
  return iVar1;
}


// ===== 00189c90  <EXTERNAL>::abort =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00192348)();
  return;
}


// ===== 00189ca0  <EXTERNAL>::closelog =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void closelog(void)

{
  (*(code *)PTR_closelog_00192350)();
  return;
}


// ===== 00189cb0  <EXTERNAL>::getauxval =====

void getauxval(void)

{
  (*(code *)PTR_getauxval_00192358)();
  return;
}


// ===== 00189cc0  <EXTERNAL>::strcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00192360)((int)__s1);
  return iVar1;
}


// ===== 00189cd0  <EXTERNAL>::pthread_rwlock_rdlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_rdlock_00192368)((int)__rwlock);
  return iVar1;
}


// ===== 00189ce0  <EXTERNAL>::pthread_key_delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_key_delete(pthread_key_t __key)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_key_delete_00192370)(__key);
  return iVar1;
}


// ===== 00189cf0  <EXTERNAL>::pthread_setspecific =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_setspecific(pthread_key_t __key,void *__pointer)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_setspecific_00192378)(__key);
  return iVar1;
}


// ===== 00189d00  <EXTERNAL>::syscall =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_syscall_00192380)();
  return lVar1;
}


// ===== 00189d10  <EXTERNAL>::pthread_once =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_once(pthread_once_t *__once_control,__init_routine *__init_routine)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_once_00192388)((int)__once_control);
  return iVar1;
}


// ===== 00189d20  <EXTERNAL>::vasprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vasprintf(char **__ptr,char *__f,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vasprintf_00192390)((int)__ptr);
  return iVar1;
}


// ===== 00189d30  <EXTERNAL>::pthread_mutex_lock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_00192398)((int)__mutex);
  return iVar1;
}


// ===== 00189d40  <EXTERNAL>::pthread_rwlock_wrlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_wrlock_001923a0)((int)__rwlock);
  return iVar1;
}


// ===== 00189d50  <EXTERNAL>::android_set_abort_message =====

void android_set_abort_message(void)

{
  (*(code *)PTR_android_set_abort_message_001923a8)();
  return;
}


// ===== 00189d60  <EXTERNAL>::pthread_mutex_unlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_001923b0)((int)__mutex);
  return iVar1;
}


// ===== 00189d70  <EXTERNAL>::getpid =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_001923b8)();
  return _Var1;
}


// ===== 00189d80  <EXTERNAL>::memcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_001923c0)((int)__s1);
  return iVar1;
}


// ===== 00189d90  <EXTERNAL>::pthread_key_create =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_key_create(pthread_key_t *__key,__destr_function *__destr_function)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_key_create_001923c8)((int)__key);
  return iVar1;
}


// ===== 00189da0  <EXTERNAL>::__assert2 =====

void __assert2(void)

{
  (*(code *)PTR___assert2_001923d0)();
  return;
}


// ===== 00189db0  <EXTERNAL>::fflush =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_001923d8)((int)__stream);
  return iVar1;
}


// ===== 00189dc0  <EXTERNAL>::fputc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_001923e0)(__c);
  return iVar1;
}


// ===== 00189dd0  __cxa_get_globals =====

void __cxa_get_globals(void)

{
  (*(code *)PTR___cxa_get_globals_001923e8)();
  return;
}


// ===== 00189de0  __cxa_get_globals_fast =====

void __cxa_get_globals_fast(void)

{
  (*(code *)PTR___cxa_get_globals_fast_001923f0)();
  return;
}


// ===== 00189df0  std::get_unexpected =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::get_unexpected(void)

{
  (*(code *)PTR_get_unexpected_001923f8)();
  return;
}


// ===== 00189e00  std::terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
  (*(code *)PTR_terminate_00192400)();
  return;
}


// ===== 00189e10  std::get_terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::get_terminate(void)

{
  (*(code *)PTR_get_terminate_00192408)();
  return;
}


// ===== 00189e20  std::get_new_handler =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::get_new_handler(void)

{
  (*(code *)PTR_get_new_handler_00192410)();
  return;
}


// ===== 00189e30  std::bad_array_new_length::~bad_array_new_length =====

void __thiscall std::bad_array_new_length::~bad_array_new_length(bad_array_new_length *this)

{
  (*(code *)PTR__bad_array_new_length_00192418)();
  return;
}


// ===== 00189e40  std::bad_array_new_length::~bad_array_new_length =====

void __thiscall std::bad_array_new_length::~bad_array_new_length(bad_array_new_length *this)

{
  (*(code *)PTR__bad_array_new_length_00192420)();
  return;
}


// ===== 00189e50  std::bad_array_new_length::~bad_array_new_length =====

void __thiscall std::bad_array_new_length::~bad_array_new_length(bad_array_new_length *this)

{
  (*(code *)PTR__bad_array_new_length_00192428)();
  return;
}


// ===== 00189e60  std::bad_array_new_length::~bad_array_new_length =====

void __thiscall std::bad_array_new_length::~bad_array_new_length(bad_array_new_length *this)

{
  (*(code *)PTR__bad_array_new_length_00192430)();
  return;
}


// ===== 00189e70  std::bad_array_new_length::~bad_array_new_length =====

void __thiscall std::bad_array_new_length::~bad_array_new_length(bad_array_new_length *this)

{
  (*(code *)PTR__bad_array_new_length_00192438)();
  return;
}


// ===== 00189e80  std::bad_alloc::bad_alloc =====

void __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
  (*(code *)PTR_bad_alloc_00192440)();
  return;
}


// ===== 00189e90  std::type_info::~type_info =====

void __thiscall std::type_info::~type_info(type_info *this)

{
  (*(code *)PTR__type_info_00192448)();
  return;
}


// ===== 00189ea0  std::type_info::~type_info =====

void __thiscall std::type_info::~type_info(type_info *this)

{
  (*(code *)PTR__type_info_00192450)();
  return;
}


// ===== 00189eb0  std::bad_cast::~bad_cast =====

void __thiscall std::bad_cast::~bad_cast(bad_cast *this)

{
  (*(code *)PTR__bad_cast_00192458)();
  return;
}


// ===== 00189ec0  std::bad_typeid::~bad_typeid =====

void __thiscall std::bad_typeid::~bad_typeid(bad_typeid *this)

{
  (*(code *)PTR__bad_typeid_00192460)();
  return;
}


// ===== 00189ed0  __dynamic_cast =====

void __dynamic_cast(void)

{
  (*(code *)PTR___dynamic_cast_00192468)();
  return;
}


// ===== 00189ee0  __cxa_demangle =====

void __cxa_demangle(void)

{
  (*(code *)PTR___cxa_demangle_00192470)();
  return;
}


// ===== 00189ef0  __cxa_allocate_exception =====

void __cxa_allocate_exception(void)

{
  (*(code *)PTR___cxa_allocate_exception_00192478)();
  return;
}


// ===== 00189f00  __cxa_throw =====

void __cxa_throw(void)

{
  (*(code *)PTR___cxa_throw_00192480)();
  return;
}


// ===== 00189f10  __cxa_begin_catch =====

void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_00192488)();
  return;
}


// ===== 00189f20  __cxa_end_catch =====

void __cxa_end_catch(void)

{
  (*(code *)PTR___cxa_end_catch_00192490)();
  return;
}


// ===== 00189f30  operator.new[] =====

void * operator_new__(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new___00192498)();
  return pvVar1;
}


// ===== 00189f40  operator.delete[] =====

void operator_delete__(void *param_1)

{
  (*(code *)PTR_operator_delete___001924a0)();
  return;
}


// ===== 00189f50  operator.new =====

void * operator_new(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_001924a8)();
  return pvVar1;
}


// ===== 00189f60  operator.new[] =====

void * operator_new__(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new___001924b0)();
  return pvVar1;
}


// ===== 00189f70  operator.delete =====

void operator_delete(void)

{
  (*(code *)PTR_operator_delete_001924b8)();
  return;
}


// ===== 00189f80  operator.delete[] =====

void operator_delete__(void)

{
  (*(code *)PTR_operator_delete___001924c0)();
  return;
}


// ===== 00189f90  __cxa_rethrow =====

void __cxa_rethrow(void)

{
  (*(code *)PTR___cxa_rethrow_001924c8)();
  return;
}


// ===== 00189fa0  <EXTERNAL>::dl_iterate_phdr =====

void dl_iterate_phdr(void)

{
  (*(code *)PTR_dl_iterate_phdr_001924d0)();
  return;
}


// ===== 00198000  <EXTERNAL>::__cxa_finalize =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00198008  <EXTERNAL>::__cxa_atexit =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00198010  <EXTERNAL>::__android_log_print =====

/* WARNING: Control flow encountered bad instruction data */

void __android_log_print(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00198018  <EXTERNAL>::__stack_chk_fail =====

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00198020  <EXTERNAL>::setjmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setjmp(__jmp_buf_tag *__env)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00198028  <EXTERNAL>::memset =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00198030  <EXTERNAL>::longjmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void longjmp(__jmp_buf_tag *__env,int __val)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00198038  <EXTERNAL>::memcpy =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00198040  <EXTERNAL>::memmove =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00198048  <EXTERNAL>::exit =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00198058  <EXTERNAL>::fprintf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00198060  <EXTERNAL>::__vsnprintf_chk =====

/* WARNING: Control flow encountered bad instruction data */

void __vsnprintf_chk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00198068  <EXTERNAL>::getenv =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00198070  <EXTERNAL>::strlen =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00198078  <EXTERNAL>::strncpy =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00198080  <EXTERNAL>::__strlen_chk =====

/* WARNING: Control flow encountered bad instruction data */

void __strlen_chk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00198088  <EXTERNAL>::sscanf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00198090  <EXTERNAL>::malloc =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00198098  <EXTERNAL>::free =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001980a0  <EXTERNAL>::fopen =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001980a8  <EXTERNAL>::fgets =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001980b0  <EXTERNAL>::strchr =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001980b8  <EXTERNAL>::feof =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int feof(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001980c0  <EXTERNAL>::fclose =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001980c8  <EXTERNAL>::strncmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001980d0  <EXTERNAL>::strstr =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001980d8  <EXTERNAL>::__memcpy_chk =====

/* WARNING: Control flow encountered bad instruction data */

void __memcpy_chk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001980e0  <EXTERNAL>::posix_memalign =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int posix_memalign(void **__memptr,size_t __alignment,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001980e8  <EXTERNAL>::syslog =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void syslog(int __pri,char *__fmt,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001980f0  <EXTERNAL>::snprintf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001980f8  <EXTERNAL>::openlog =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void openlog(char *__ident,int __option,int __facility)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00198100  <EXTERNAL>::memchr =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memchr(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00198108  <EXTERNAL>::fwrite =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00198110  <EXTERNAL>::realloc =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00198118  <EXTERNAL>::pthread_getspecific =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * pthread_getspecific(pthread_key_t __key)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00198120  <EXTERNAL>::pthread_rwlock_unlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00198128  <EXTERNAL>::__system_property_get =====

/* WARNING: Control flow encountered bad instruction data */

void __system_property_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00198130  <EXTERNAL>::vfprintf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00198138  <EXTERNAL>::abort =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00198140  <EXTERNAL>::closelog =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void closelog(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00198148  <EXTERNAL>::getauxval =====

/* WARNING: Control flow encountered bad instruction data */

void getauxval(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00198150  <EXTERNAL>::strcmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00198158  <EXTERNAL>::pthread_rwlock_rdlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00198160  <EXTERNAL>::pthread_key_delete =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_key_delete(pthread_key_t __key)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00198168  <EXTERNAL>::pthread_setspecific =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_setspecific(pthread_key_t __key,void *__pointer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00198170  <EXTERNAL>::syscall =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00198178  <EXTERNAL>::pthread_once =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_once(pthread_once_t *__once_control,__init_routine *__init_routine)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00198180  <EXTERNAL>::vasprintf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vasprintf(char **__ptr,char *__f,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00198188  <EXTERNAL>::pthread_mutex_lock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00198190  <EXTERNAL>::pthread_rwlock_wrlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00198198  <EXTERNAL>::android_set_abort_message =====

/* WARNING: Control flow encountered bad instruction data */

void android_set_abort_message(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001981a0  <EXTERNAL>::pthread_mutex_unlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001981a8  <EXTERNAL>::getpid =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001981b0  <EXTERNAL>::memcmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001981b8  <EXTERNAL>::pthread_key_create =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_key_create(pthread_key_t *__key,__destr_function *__destr_function)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001981c0  <EXTERNAL>::__assert2 =====

/* WARNING: Control flow encountered bad instruction data */

void __assert2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001981c8  <EXTERNAL>::fflush =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001981d0  <EXTERNAL>::fputc =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001981d8  <EXTERNAL>::dl_iterate_phdr =====

/* WARNING: Control flow encountered bad instruction data */

void dl_iterate_phdr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


