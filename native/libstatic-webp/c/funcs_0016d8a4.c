// ===== 0016d8a4  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0016d8ac  FUN_0016d8ac =====

void FUN_0016d8ac(long param_1,undefined8 *param_2)

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


// ===== 0016d950  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0016d958  FUN_0016d958 =====

void FUN_0016d958(long param_1,undefined8 *param_2)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017d0b0;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x1e;
  uVar3 = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  return;
}


// ===== 0016d9f8  FUN_0016d9f8 =====

void FUN_0016d9f8(long param_1,undefined8 *param_2,undefined8 *param_3)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017d120;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x1d;
  uVar3 = *param_2;
  uVar4 = *param_3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar4;
  return;
}


// ===== 0016daa0  FUN_0016daa0 =====

void FUN_0016daa0(long param_1,undefined8 *param_2)

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
  uVar2 = CONCAT53(s_pixel_vector__00112f70._8_5_,s_pixel_vector__00112f70._5_3_);
  *(undefined8 *)((long)pvVar3 + lVar4) =
       CONCAT35(s_pixel_vector__00112f70._5_3_,s_pixel_vector__00112f70._0_5_);
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


// ===== 0016dbc0  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0016dbc8  FUN_0016dbc8 =====

void FUN_0016dbc8(long param_1,undefined8 *param_2)

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


// ===== 0016dd1c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0016dd24  FUN_0016dd24 =====

void FUN_0016dd24(long param_1,undefined8 *param_2,undefined8 *param_3)

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
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0017d190;
  uVar4 = *param_2;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0xf;
  uVar3 = *param_3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x400;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar4;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar3;
  return;
}


// ===== 0016ddc8  FUN_0016ddc8 =====

undefined8 FUN_0016ddc8(void)

{
  return 1;
}


// ===== 0016ddd4  FUN_0016ddd4 =====

undefined8 FUN_0016ddd4(void)

{
  return 1;
}


// ===== 0016dde0  FUN_0016dde0 =====

void FUN_0016dde0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0016ddf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  return;
}


// ===== 0016ddf4  FUN_0016ddf4 =====

void FUN_0016ddf4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  size_t sVar4;
  long *plVar5;
  
  lVar3 = param_2[1];
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00154b08("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/Utility.h",0xae,&DAT_00111743)
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
                    /* WARNING: Could not recover jumptable at 0x0016df68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x28))(plVar5,param_2);
  return;
}


// ===== 0016df98  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0016dfa0  FUN_0016dfa0 =====

void FUN_0016dfa0(long param_1,undefined8 *param_2,long *param_3)

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
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_0017d200;
  uVar5 = *param_2;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0xe;
  *(ushort *)((long)puVar2 + lVar3 + 0x19) =
       uVar1 & 0xc0 | 0x500 | *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x20) = uVar5;
  *(long *)((long)puVar2 + lVar3 + 0x28) = lVar4;
  return;
}


// ===== 0016e054  FUN_0016e054 =====

ulong FUN_0016e054(long param_1)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *(byte *)((long)*(undefined8 **)(param_1 + 0x18) + 9);
  if ((bVar1 & 0xc0) == 0x80) {
                    /* WARNING: Could not recover jumptable at 0x0016e074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x18))();
    return uVar2;
  }
  return (ulong)(bVar1 < 0x40);
}


// ===== 0016e084  FUN_0016e084 =====

void FUN_0016e084(long param_1,undefined8 *param_2)

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
      if ((uVar4 & 1) != 0) goto LAB_0016e108;
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
      goto LAB_0016e184;
    }
  }
LAB_0016e108:
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
LAB_0016e184:
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


// ===== 0016e244  FUN_0016e244 =====

void FUN_0016e244(long param_1,undefined8 *param_2)

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
      if ((uVar4 & 1) != 0) goto LAB_0016e2b8;
      plVar3 = *(long **)(param_1 + 0x18);
      uVar1 = *(ushort *)((long)plVar3 + 9);
    }
    if (((uVar1 >> 10 & 3) != 0) &&
       (((uVar1 >> 10 & 3) != 2 ||
        (uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2), (uVar4 & 1) == 0))))
    goto LAB_0016e304;
  }
LAB_0016e2b8:
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
LAB_0016e304:
                    /* WARNING: Could not recover jumptable at 0x0016e320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),param_2);
  return;
}


// ===== 0016e328  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0016e330  FUN_0016e330 =====

void FUN_0016e330(long param_1,undefined8 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0016e454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}


// ===== 0016e460  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0016e468  FUN_0016e468 =====

ulong FUN_0016e468(long param_1)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *(byte *)((long)*(undefined8 **)(param_1 + 0x10) + 9);
  if ((bVar1 & 0xc0) == 0x80) {
                    /* WARNING: Could not recover jumptable at 0x0016e488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x10))();
    return uVar2;
  }
  return (ulong)(bVar1 < 0x40);
}


// ===== 0016e498  FUN_0016e498 =====

void FUN_0016e498(long param_1,undefined8 *param_2)

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
    goto LAB_0016e68c;
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
LAB_0016e5fc:
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
      if ((uVar4 & 1) != 0) goto LAB_0016e5fc;
      plVar3 = *(long **)(param_1 + 0x10);
      uVar1 = *(ushort *)((long)plVar3 + 9);
    }
    if (((uVar1 >> 10 & 3) == 0) ||
       (((uVar1 >> 10 & 3) == 2 &&
        (uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2), (uVar4 & 1) != 0))))
    goto LAB_0016e5fc;
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
LAB_0016e68c:
  *(undefined1 *)((long)pvVar5 + lVar6) = uVar7;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 0016e7d8  FUN_0016e7d8 =====

void FUN_0016e7d8(long param_1,undefined8 *param_2)

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
      if ((uVar4 & 1) != 0) goto LAB_0016e8ac;
      plVar3 = *(long **)(param_1 + 0x10);
      uVar1 = *(ushort *)((long)plVar3 + 9);
    }
    if (((uVar1 >> 10 & 3) != 0) &&
       (((uVar1 >> 10 & 3) != 2 ||
        (uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2), (uVar4 & 1) == 0))))
    goto LAB_0016e8f8;
  }
LAB_0016e8ac:
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
LAB_0016e8f8:
                    /* WARNING: Could not recover jumptable at 0x0016e914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))(*(long **)(param_1 + 0x10),param_2);
  return;
}


// ===== 0016e92c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0016e934  FUN_0016e934 =====

ulong FUN_0016e934(long param_1)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *(byte *)((long)*(undefined8 **)(param_1 + 0x10) + 9);
  if ((bVar1 & 0xc0) == 0x80) {
                    /* WARNING: Could not recover jumptable at 0x0016e954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x10))();
    return uVar2;
  }
  return (ulong)(bVar1 < 0x40);
}


// ===== 0016e964  FUN_0016e964 =====

void FUN_0016e964(long param_1,undefined8 *param_2)

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
                    /* try { // try from 0016e9ac to 0016eaa7 has its CatchHandler @ 0016eb90 */
  auVar9 = FUN_0016ece4(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),param_2);
  plVar6 = auVar9._8_8_;
  if (plVar6 == (long *)0x0) goto LAB_0016eb6c;
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
LAB_0016eaac:
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
      if ((uVar4 & 1) != 0) goto LAB_0016eaac;
      uVar1 = *(ushort *)((long)plVar6 + 9);
    }
    if (((uVar1 >> 10 & 3) == 0) ||
       (((uVar1 >> 10 & 3) == 2 &&
        (uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,param_2), (uVar4 & 1) != 0))))
    goto LAB_0016eaac;
  }
  bVar3 = (auVar9 & (undefined1  [16])0xffffffff) != (undefined1  [16])0x0;
  sVar8 = 1;
  if (bVar3) {
    sVar8 = 2;
  }
  lVar7 = param_2[1];
  pvVar5 = (void *)*param_2;
  __src = &UNK_00111a80;
  if (bVar3) {
    __src = &DAT_00111a82;
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
                    /* try { // try from 0016eb84 to 0016eb8f has its CatchHandler @ 0016eb90 */
      abort();
    }
    lVar7 = param_2[1];
  }
  memcpy((void *)((long)pvVar5 + lVar7),__src,sVar8);
  param_2[1] = param_2[1] + sVar8;
LAB_0016eb6c:
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return;
}


// ===== 0016eb98  FUN_0016eb98 =====

void FUN_0016eb98(long param_1,undefined8 *param_2)

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
                    /* try { // try from 0016ebe0 to 0016eccb has its CatchHandler @ 0016eccc */
  FUN_0016ece4(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),param_2);
  if (extraout_x1 == (long *)0x0) goto LAB_0016ecb0;
  uVar1 = *(ushort *)((long)extraout_x1 + 9);
  uVar2 = uVar1 >> 8 & 3;
  if (uVar2 == 0) {
LAB_0016ec50:
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
      if ((uVar3 & 1) != 0) goto LAB_0016ec50;
      uVar1 = *(ushort *)((long)extraout_x1 + 9);
    }
    if (((uVar1 >> 10 & 3) == 0) ||
       (((uVar1 >> 10 & 3) == 2 &&
        (uVar3 = (**(code **)(*extraout_x1 + 0x10))(extraout_x1,param_2), (uVar3 & 1) != 0))))
    goto LAB_0016ec50;
  }
  (**(code **)(*extraout_x1 + 0x28))(extraout_x1,param_2);
LAB_0016ecb0:
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return;
}


// ===== 0016ecd4  FUN_0016ecd4 =====

void FUN_0016ecd4(void)

{
  return;
}


// ===== 0016ecdc  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0016ece4  FUN_0016ece4 =====

undefined1  [16] FUN_0016ece4(long *param_1,uint param_2,undefined8 param_3)

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
                    /* try { // try from 0016ed34 to 0016ed3f has its CatchHandler @ 0016ee74 */
      lVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_3);
      if (*(char *)(lVar2 + 8) != '\r') {
        uVar5 = param_2;
        if (local_98 == &local_80) goto LAB_0016ee24;
        goto LAB_0016ee20;
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
                    /* try { // try from 0016ee48 to 0016ee6f has its CatchHandler @ 0016ee70 */
                    /* WARNING: Subroutine does not return */
      FUN_00154b08("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0x96,
                   "Invalid access!");
    }
  } while (param_1 != (long *)local_98[uVar4]);
  param_1 = (long *)0x0;
  if (local_98 != &local_80) {
LAB_0016ee20:
    free(local_98);
    uVar5 = param_2;
  }
LAB_0016ee24:
  auVar6._4_4_ = 0;
  auVar6._0_4_ = uVar5;
  auVar6._8_8_ = param_1;
  return auVar6;
}


// ===== 0016ee90  operator.new =====

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
                    /* try { // try from 0016eebc to 0016eebf has its CatchHandler @ 0016eefc */
    (*pcVar2)();
  }
  this = (bad_alloc *)__cxa_allocate_exception(8);
  std::bad_alloc::bad_alloc(this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_PTR_0017d838,PTR__exception_0017d828);
}


// ===== 0016ef00  operator.new =====

/* operator new(unsigned long, std::nothrow_t const&) */

void * operator_new(ulong param_1,nothrow_t *param_2)

{
  void *pvVar1;
  
                    /* try { // try from 0016ef0c to 0016ef0f has its CatchHandler @ 0016ef1c */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}


// ===== 0016ef38  operator.new[] =====

/* operator new[](unsigned long) */

void * operator_new__(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(param_1);
  return pvVar1;
}


// ===== 0016ef40  operator.new[] =====

/* operator new[](unsigned long, std::nothrow_t const&) */

void * operator_new__(ulong param_1,nothrow_t *param_2)

{
  void *pvVar1;
  
                    /* try { // try from 0016ef4c to 0016ef4f has its CatchHandler @ 0016ef5c */
  pvVar1 = operator_new__(param_1);
  return pvVar1;
}


// ===== 0016ef78  operator.delete =====

/* operator delete(void*) */

void operator_delete(void *param_1)

{
  free(param_1);
  return;
}


// ===== 0016ef80  operator.delete =====

/* operator delete(void*, std::nothrow_t const&) */

void operator_delete(void *param_1,nothrow_t *param_2)

{
  operator_delete(param_1);
  return;
}


// ===== 0016ef88  operator.delete =====

/* operator delete(void*, unsigned long) */

void operator_delete(void *param_1,ulong param_2)

{
  operator_delete(param_1);
  return;
}


// ===== 0016ef90  operator.delete[] =====

/* operator delete[](void*) */

void operator_delete__(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0016ef98  operator.delete[] =====

/* operator delete[](void*, std::nothrow_t const&) */

void operator_delete__(void *param_1,nothrow_t *param_2)

{
  operator_delete__(param_1);
  return;
}


// ===== 0016efa0  operator.delete[] =====

/* operator delete[](void*, unsigned long) */

void operator_delete__(void *param_1,ulong param_2)

{
  operator_delete__(param_1);
  return;
}


// ===== 0016efa8  operator.new =====

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
                    /* try { // try from 0016efd4 to 0016eff7 has its CatchHandler @ 0016f038 */
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
  __cxa_throw(this,PTR_PTR_0017d838,PTR__exception_0017d828);
}


// ===== 0016f03c  operator.new =====

/* operator new(unsigned long, std::align_val_t, std::nothrow_t const&) */

void * operator_new(void)

{
  void *pvVar1;
  
                    /* try { // try from 0016f048 to 0016f04b has its CatchHandler @ 0016f058 */
  pvVar1 = operator_new();
  return pvVar1;
}


// ===== 0016f074  operator.new[] =====

/* operator new[](unsigned long, std::align_val_t) */

void * operator_new__(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new();
  return pvVar1;
}


// ===== 0016f07c  operator.new[] =====

/* operator new[](unsigned long, std::align_val_t, std::nothrow_t const&) */

void * operator_new__(void)

{
  void *pvVar1;
  
                    /* try { // try from 0016f088 to 0016f08b has its CatchHandler @ 0016f098 */
  pvVar1 = operator_new__();
  return pvVar1;
}


// ===== 0016f0b4  operator.delete =====

/* operator delete(void*, std::align_val_t) */

void operator_delete(void *param_1)

{
  free(param_1);
  return;
}


// ===== 0016f0bc  operator.delete =====

/* operator delete(void*, std::align_val_t, std::nothrow_t const&) */

void operator_delete(void)

{
  operator_delete();
  return;
}


// ===== 0016f0c4  operator.delete =====

/* operator delete(void*, unsigned long, std::align_val_t) */

void operator_delete(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  operator_delete(param_1,param_3);
  return;
}


// ===== 0016f0d0  operator.delete[] =====

/* operator delete[](void*, std::align_val_t) */

void operator_delete__(void)

{
  operator_delete();
  return;
}


// ===== 0016f0d8  operator.delete[] =====

/* operator delete[](void*, std::align_val_t, std::nothrow_t const&) */

void operator_delete__(void)

{
  operator_delete__();
  return;
}


// ===== 0016f0e0  operator.delete[] =====

/* operator delete[](void*, unsigned long, std::align_val_t) */

void operator_delete__(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  operator_delete__(param_1,param_3);
  return;
}


// ===== 0016f0ec  FUN_0016f0ec =====

undefined8 FUN_0016f0ec(undefined8 *param_1)

{
  return *param_1;
}


// ===== 0016f0f8  FUN_0016f0f8 =====

bool FUN_0016f0f8(ulong *param_1)

{
  return *param_1 >> 8 == 0x434c4e47432b2b;
}


// ===== 0016f11c  __cxa_allocate_exception =====

long __cxa_allocate_exception(long param_1)

{
  void *__s;
  
                    /* try { // try from 0016f130 to 0016f137 has its CatchHandler @ 0016f168 */
  __s = (void *)FUN_0016f8ec(param_1 + 0x8fU & 0xfffffffffffffff0);
  if (__s != (void *)0x0) {
    memset(__s,0,param_1 + 0x8fU & 0xfffffffffffffff0);
    return (long)__s + 0x80;
  }
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 0016f16c  __cxa_begin_catch =====

ulong * __cxa_begin_catch(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  
  uVar6 = *param_1;
                    /* try { // try from 0016f180 to 0016f183 has its CatchHandler @ 0016f214 */
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


// ===== 0016f218  __cxa_free_exception =====

void __cxa_free_exception(long param_1)

{
                    /* try { // try from 0016f228 to 0016f22b has its CatchHandler @ 0016f238 */
  FUN_0016fad0(param_1 + -0x80);
  return;
}


// ===== 0016f23c  __cxa_allocate_dependent_exception =====

void __cxa_allocate_dependent_exception(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0016f8ec(0x80);
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


// ===== 0016f278  __cxa_free_dependent_exception =====

void __cxa_free_dependent_exception(void)

{
  FUN_0016fad0();
  return;
}


// ===== 0016f280  __cxa_throw =====

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
  *(code **)(param_1 + -0x18) = FUN_0016f304;
  FUN_00171330((undefined8 *)(param_1 + -0x20));
  iVar1 = FUN_0016f36c(param_1 + -0x80);
  if (iVar1 == 1) {
    lVar2 = FUN_00171300(0xffffffffffffffff,extraout_x1 + -0x58);
    if (lVar2 == 1) {
      if (*(code **)(extraout_x1 + -0x48) != (code *)0x0) {
        (**(code **)(extraout_x1 + -0x48))(extraout_x1 + 0x20);
      }
      FUN_0016fad0(extraout_x1 + -0x60);
    }
    return;
  }
  FUN_0015471c(*(undefined8 *)(extraout_x1 + -0x38));
                    /* WARNING: Subroutine does not return */
  FUN_001542c4();
}


// ===== 0016f304  FUN_0016f304 =====

void FUN_0016f304(int param_1,long param_2)

{
  long lVar1;
  
  if (param_1 == 1) {
    lVar1 = FUN_00171300(0xffffffffffffffff,param_2 + -0x58);
    if (lVar1 == 1) {
      if (*(code **)(param_2 + -0x48) != (code *)0x0) {
                    /* try { // try from 0016f33c to 0016f343 has its CatchHandler @ 0016f364 */
        (**(code **)(param_2 + -0x48))(param_2 + 0x20);
      }
                    /* try { // try from 0016f344 to 0016f34b has its CatchHandler @ 0016f368 */
      FUN_0016fad0(param_2 + -0x60);
    }
    return;
  }
  FUN_0015471c(*(undefined8 *)(param_2 + -0x38));
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0016f33c with catch @ 0016f364
                        */
  FUN_001542c4();
}


// ===== 0016f36c  FUN_0016f36c =====

undefined8 FUN_0016f36c(long param_1)

{
  long lVar1;
  
  __cxa_begin_catch(param_1 + 0x60);
  lVar1 = FUN_0015471c(*(undefined8 *)(param_1 + 0x28));
  return *(undefined8 *)(lVar1 + -8);
}


// ===== 0016f390  __cxa_get_exception_ptr =====

undefined8 __cxa_get_exception_ptr(long param_1)

{
  return *(undefined8 *)(param_1 + -8);
}


// ===== 0016f39c  __cxa_end_catch =====

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
      FUN_0017173c((ulong *)(lVar3 + 0x60));
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
          FUN_0016fad0(lVar3);
        }
        lVar3 = FUN_00171300(0xffffffffffffffff,lVar4 + 8);
        if (lVar3 == 1) {
          if (*(code **)(lVar4 + 0x18) != (code *)0x0) {
                    /* try { // try from 0016f484 to 0016f48b has its CatchHandler @ 0016f498 */
            (**(code **)(lVar4 + 0x18))(lVar4 + 0x80);
          }
                    /* try { // try from 0016f48c to 0016f493 has its CatchHandler @ 0016f49c */
          FUN_0016fad0(lVar4);
        }
      }
    }
  }
  return;
}


// ===== 0016f4a0  __cxa_decrement_exception_refcount =====

void __cxa_decrement_exception_refcount(long param_1)

{
  long lVar1;
  
  if ((param_1 != 0) && (lVar1 = FUN_00171300(0xffffffffffffffff,param_1 + -0x78), lVar1 == 1)) {
    if (*(code **)(param_1 + -0x68) != (code *)0x0) {
                    /* try { // try from 0016f4d4 to 0016f4db has its CatchHandler @ 0016f4f4 */
      (**(code **)(param_1 + -0x68))(param_1);
    }
                    /* try { // try from 0016f4dc to 0016f4e3 has its CatchHandler @ 0016f4f8 */
    FUN_0016fad0(param_1 + -0x80);
  }
  return;
}


// ===== 0016f4fc  __cxa_current_exception_type =====

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


// ===== 0016f554  __cxa_rethrow =====

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
    FUN_00171330(puVar6);
    uVar7 = *puVar6;
                    /* try { // try from 0016f5c8 to 0016f5cb has its CatchHandler @ 0016f634 */
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
      if (*plVar3 != 0) goto LAB_0016f574;
      *plVar3 = lVar8;
    }
    if ((uVar4 & 0xffffffffffffff00) == 0x434c4e47432b2b00) {
      FUN_0015471c(*(undefined8 *)(lVar8 + 0x28));
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0016f5c8 with catch @ 0016f634
                        */
      FUN_001542c4();
    }
  }
LAB_0016f574:
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 0016f638  __cxa_increment_exception_refcount =====

void __cxa_increment_exception_refcount(long param_1)

{
  if (param_1 != 0) {
    FUN_00171300(1,param_1 + -0x78);
  }
  return;
}


// ===== 0016f664  __cxa_current_primary_exception =====

long * __cxa_current_primary_exception(void)

{
  long *plVar1;
  long lVar2;
  
                    /* try { // try from 0016f674 to 0016f677 has its CatchHandler @ 0016f6ec */
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
    FUN_00171300(1,lVar2 + 8);
  }
  return plVar1;
}


// ===== 0016f6f0  __cxa_rethrow_primary_exception =====

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
  puVar3 = (undefined8 *)FUN_0016f8ec(0x80);
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
    FUN_00171300(1,param_1 + -0x78);
    puVar3[2] = *(undefined8 *)(param_1 + -0x70);
    uVar4 = std::get_unexpected();
    puVar3[4] = uVar4;
    uVar4 = std::get_terminate();
    puVar3[5] = uVar4;
    *puVar9 = 0x434c4e47432b2b01;
    lVar5 = __cxa_get_globals();
    iVar1 = *(int *)(lVar5 + 8);
    puVar3[0xd] = FUN_0016f820;
    *(int *)(lVar5 + 8) = iVar1 + 1;
    FUN_00171330(puVar9);
    uVar8 = *puVar9;
                    /* try { // try from 0016f7a0 to 0016f7a3 has its CatchHandler @ 0016f81c */
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


// ===== 0016f820  FUN_0016f820 =====

void FUN_0016f820(int param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == 1) {
    lVar2 = *(long *)(param_2 + -0x58);
    if ((lVar2 != 0) && (lVar1 = FUN_00171300(0xffffffffffffffff,lVar2 + -0x78), lVar1 == 1)) {
      if (*(code **)(lVar2 + -0x68) != (code *)0x0) {
                    /* try { // try from 0016f860 to 0016f867 has its CatchHandler @ 0016f88c */
        (**(code **)(lVar2 + -0x68))(lVar2);
      }
                    /* try { // try from 0016f868 to 0016f86f has its CatchHandler @ 0016f890 */
      FUN_0016fad0(lVar2 + -0x80);
    }
    FUN_0016fad0(param_2 + -0x60);
    return;
  }
  FUN_0015471c(*(undefined8 *)(param_2 + -0x38));
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0016f860 with catch @ 0016f88c
                        */
  FUN_001542c4();
}


// ===== 0016f894  __cxa_uncaught_exception =====

ulong __cxa_uncaught_exception(void)

{
  ulong uVar1;
  
                    /* try { // try from 0016f8a0 to 0016f8a3 has its CatchHandler @ 0016f8c0 */
  uVar1 = __cxa_get_globals_fast();
  if (uVar1 != 0) {
    uVar1 = (ulong)(*(int *)(uVar1 + 8) != 0);
  }
  return uVar1;
}


// ===== 0016f8c4  __cxa_uncaught_exceptions =====

ulong __cxa_uncaught_exceptions(void)

{
  ulong uVar1;
  
                    /* try { // try from 0016f8d0 to 0016f8d3 has its CatchHandler @ 0016f8e8 */
  uVar1 = __cxa_get_globals_fast();
  if (uVar1 != 0) {
    uVar1 = (ulong)*(uint *)(uVar1 + 8);
  }
  return uVar1;
}


// ===== 0016f8ec  FUN_0016f8ec =====

void FUN_0016f8ec(size_t param_1)

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
  FUN_0016f948(param_1);
  return;
}


// ===== 0016f948  FUN_0016f948 =====

ushort * FUN_0016f948(long param_1)

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
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00182738);
  if (DAT_00182730 == (ushort *)0x0) {
    DAT_0018276c = 0x7d0080;
    DAT_00182730 = (ushort *)&DAT_0018276c;
  }
  else if (DAT_00182730 == (ushort *)&DAT_00182960) goto LAB_0016fa00;
  uVar5 = param_1 + 3U >> 2;
  uVar1 = uVar5 + 1;
  puVar4 = (ushort *)0x0;
  puVar6 = DAT_00182730;
  do {
    puVar9 = puVar6 + 2;
    if (((ulong)puVar9 & 0xf) != 0) {
                    /* try { // try from 0016fa8c to 0016faab has its CatchHandler @ 0016fab4 */
                    /* WARNING: Subroutine does not return */
      FUN_00154b08("%s:%d: %s","out/llvm-project/libcxxabi/src/fallback_malloc.cpp",0x92,
                   &DAT_00111743);
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
                    /* try { // try from 0016fa28 to 0016fa47 has its CatchHandler @ 0016faac */
                    /* WARNING: Subroutine does not return */
        FUN_00154b08("%s:%d: %s","out/llvm-project/libcxxabi/src/fallback_malloc.cpp",0xa7,
                     &DAT_00111743);
      }
      goto LAB_0016fa6c;
    }
    if (uVar5 < uVar8) {
      uVar2 = *puVar6;
      if (puVar4 == (ushort *)0x0) {
        *puVar6 = 0;
        DAT_00182730 = (ushort *)((ulong)uVar2 * 4 + 0x182760);
      }
      else {
        *puVar4 = uVar2;
        *puVar6 = 0;
      }
      goto LAB_0016fa6c;
    }
    uVar2 = *puVar6;
    puVar4 = puVar6;
    puVar6 = (ushort *)((ulong)uVar2 * 4 + 0x182760);
  } while ((ulong)uVar2 != 0x80);
LAB_0016fa00:
  puVar9 = (ushort *)0x0;
LAB_0016fa6c:
                    /* try { // try from 0016fa6c to 0016fa77 has its CatchHandler @ 0016fab0 */
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00182738);
  return puVar9;
}


// ===== 0016fad0  FUN_0016fad0 =====

void * FUN_0016fad0(void *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  
  if ((param_1 < (void *)0x182760) || ((void *)0x18295f < param_1)) {
    free(param_1);
    return param_1;
  }
  puVar7 = (ushort *)((long)param_1 + -4);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00182738);
  if ((DAT_00182730 != (ushort *)0x0) && (DAT_00182730 != (ushort *)&DAT_00182960)) {
    puVar2 = DAT_00182730;
    puVar6 = (ushort *)0x0;
    do {
      puVar5 = puVar2;
      uVar1 = puVar5[1];
      if (puVar5 + (ulong)uVar1 * 2 == puVar7) {
        puVar5[1] = *(short *)((long)param_1 + -2) + uVar1;
        goto LAB_0016fbe8;
      }
      if (puVar7 + (ulong)*(ushort *)((long)param_1 + -2) * 2 == puVar5) {
        *(ushort *)((long)param_1 + -2) = *(ushort *)((long)param_1 + -2) + uVar1;
        if (puVar6 == (ushort *)0x0) {
          DAT_00182730 = puVar7;
          *puVar7 = *puVar5;
        }
        else {
          *puVar6 = (ushort)((int)puVar7 - 0x182760U >> 2);
        }
        goto LAB_0016fbe8;
      }
      puVar2 = (ushort *)((ulong)*puVar5 * 4 + 0x182760);
      puVar6 = puVar5;
    } while ((ulong)*puVar5 != 0x80);
  }
  iVar4 = (int)DAT_00182730;
  DAT_00182730 = puVar7;
  *puVar7 = (ushort)(iVar4 - 0x182760U >> 2);
LAB_0016fbe8:
                    /* try { // try from 0016fbe8 to 0016fbf3 has its CatchHandler @ 0016fc08 */
  uVar3 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00182738);
  return (void *)(ulong)uVar3;
}


// ===== 0016fc0c  __gxx_personality_v0 =====

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
      thunk_FUN_001718c4(param_5,0,param_4);
      thunk_FUN_001718c4(param_5,1,(long)iVar2);
      FUN_00171790(param_5,uVar21);
      if (-1 < iVar2) {
        return (ulong *)0x7;
      }
      goto LAB_0016fc9c;
    }
    FUN_0016fe34(&local_60,6,0,param_4);
  }
  else {
    FUN_0016fe34(&local_60,param_2,param_3 == 0x434c4e47432b2b00,param_4);
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
      goto code_r0x0016fdf8;
    }
    if (local_38 == 6) {
      thunk_FUN_001718c4(param_5,0,param_4);
      thunk_FUN_001718c4(param_5,1,local_60);
      FUN_00171790(param_5,local_48);
      if (-1 < local_60) {
        return (ulong *)0x7;
      }
LAB_0016fc9c:
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
code_r0x0016fdf8:
    __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x3c8,
              "_Unwind_Reason_Code __cxxabiv1::__gxx_personality_v0(int, _Unwind_Action, uint64_t, _Unwind_Exception *, _Unwind_Context *)"
              ,"results.reason == _URC_HANDLER_FOUND");
  }
  uStack_104 = 0x112213;
  pcVar14 = "results.reason == _URC_HANDLER_FOUND";
  auVar31 = __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x3db);
  puVar20 = auVar31._0_8_;
  pcStack_b8 = FUN_0016fe34;
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
      goto LAB_00170228;
    }
  }
  else if ((auVar31 & (undefined1  [16])0xe) != (undefined1  [16])0x0) {
    return puVar20;
  }
  puStack_f0 = (ulong *)pcVar14;
  puStack_c0 = &stack0xffffffffffffffd0;
  puVar5 = (ulong *)FUN_001716d4(lVar9);
  if (puVar5 != (ulong *)0x0) {
    puVar20[2] = (ulong)puVar5;
    puVar6 = (ulong *)FUN_00171760(lVar9);
    uVar7 = FUN_00171708(lVar9);
    pbStack_d0 = (byte *)((long)puVar5 + 1);
    if ((byte)*puVar5 == 0xff) {
      pbVar28 = (byte *)((long)puVar5 + 2);
      bVar1 = *pbStack_d0;
      uVar8 = uVar7;
    }
    else {
      uVar8 = FUN_001705e0(&pbStack_d0,(byte)*puVar5,0);
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
      puVar6 = (ulong *)FUN_001705e0(&pbStack_d8,puVar29,0);
      lVar9 = FUN_001705e0(&pbStack_d8,puVar29,0);
      puVar5 = (ulong *)FUN_001705e0(&pbStack_d8,puVar29,0);
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
        if (puVar5 == (ulong *)0x0) goto LAB_00170224;
        puVar20[3] = (ulong)((long)puVar5 + uVar8);
        if (uVar19 == 0) {
          uVar16 = 6;
          if ((auVar31 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
            uVar16 = 8;
          }
          goto LAB_00170228;
        }
        puVar6 = (ulong *)(ulong)uStack_104;
        uVar8 = uStack_e8 & 0xf;
        pbVar22 = pbVar22 + uVar19 + (uVar17 & 0xffffffff) + -1;
        puStack_100 = puStack_f0 + 4;
        uStack_f4 = 0x1c1dU >> uVar8 & 1;
        uVar7 = 0;
        goto LAB_00170074;
      }
    } while (puVar6 <= puVar15);
    __cxa_begin_catch(puStack_f0);
    if ((uStack_104 & 1) != 0) {
      do {
        FUN_0015471c(puStack_f0[-7]);
LAB_0017032c:
        __cxa_begin_catch(puStack_f0);
      } while (((ulong)puVar6 & 1) != 0);
    }
                    /* WARNING: Subroutine does not return */
    std::terminate();
  }
LAB_00170224:
  uVar16 = 8;
LAB_00170228:
  *(undefined4 *)(puVar20 + 5) = uVar16;
  return puVar5;
LAB_00170074:
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
        goto LAB_001702c8;
      }
      lVar9 = FUN_0016f0ec(puStack_f0);
      puVar10 = puStack_100;
      if (lVar9 == 0x434c4e47432b2b01) {
        puVar10 = (ulong *)puVar15[-0xb];
      }
      if ((puVar10 == (ulong *)0x0) || (puVar15[-10] == 0)) {
LAB_0017034c:
        __cxa_begin_catch(puVar15);
        FUN_0015471c(puVar15[-7]);
        puVar20 = puVar15;
        goto code_r0x00170364;
      }
      puVar5 = (ulong *)FUN_001707cc(uVar17,pbStack_e0,uStack_e8,puVar15[-10],puVar10,puVar15,0);
      param_6 = puVar15;
      uVar19 = uVar7;
      puVar29 = puVar10;
      if (((ulong)puVar5 & 1) != 0) {
        if ((auVar31 & (undefined1  [16])0x1) == (undefined1  [16])0x0) goto code_r0x001703a4;
        *puVar20 = uVar17;
        puVar20[1] = (ulong)pbVar22;
        uVar16 = 6;
        puVar20[4] = (ulong)puVar10;
        goto LAB_00170228;
      }
    }
  }
  else {
    if (pbStack_e0 == (byte *)0x0) goto LAB_0017032c;
    if (0xc < (uint)uVar8) goto LAB_0017032c;
    if (uStack_f4 == 0) goto LAB_0017032c;
    puStack_c8 = (ulong *)(pbStack_e0 + *(long *)(&DAT_00116068 + uVar8 * 8) * uVar17);
    puVar10 = (ulong *)FUN_001705e0(&puStack_c8,uStack_e8,0);
    puVar3 = puStack_f0;
    if (puVar10 == (ulong *)0x0) {
      puVar10 = puVar29;
      if ((auVar31 & (undefined1  [16])0xd) != (undefined1  [16])0x0) {
        *puVar20 = uVar17;
        puVar20[1] = (ulong)pbVar22;
LAB_001702c8:
        puVar6 = puStack_f0;
        puVar5 = (ulong *)FUN_0016f0ec(puStack_f0);
        if (puVar5 == (ulong *)0x434c4e47432b2b01) {
          puStack_100 = (ulong *)puVar6[-0xb];
        }
        puVar20[4] = (ulong)puStack_100;
        uVar16 = 6;
        goto LAB_00170228;
      }
code_r0x00170364:
      __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x2ec,
                "void __cxxabiv1::scan_eh_tab(scan_results &, _Unwind_Action, bool, _Unwind_Exception *, _Unwind_Context *)"
                ,"actions & (_UA_SEARCH_PHASE | _UA_HANDLER_FRAME | _UA_FORCE_UNWIND)");
code_r0x00170384:
      __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x306,
                "void __cxxabiv1::scan_eh_tab(scan_results &, _Unwind_Action, bool, _Unwind_Exception *, _Unwind_Context *)"
                ,"actions & (_UA_SEARCH_PHASE | _UA_FORCE_UNWIND)");
code_r0x001703a4:
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
      uVar7 = FUN_0016f0f8(lVar9);
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
      FUN_001546d0(uVar21);
      __cxa_begin_catch();
      if ((uVar7 & 1) == 0) goto LAB_0017054c;
      pbStack_178 = pbVar22 + 1;
      FUN_001705e0(&pbStack_178,*pbVar22,uVar24);
      bVar1 = *pbStack_178;
      if (bVar1 != 0xff) goto LAB_00170468;
      do {
        FUN_0015471c(uVar11);
        pbStack_178 = extraout_x9;
LAB_00170468:
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
      bVar4 = FUN_0016f0f8(lVar30 + 0x60);
      if ((bVar4 & lVar30 != lVar27) == 1) {
        uVar21 = *(undefined8 *)(lVar30 + 0x10);
        lVar27 = FUN_0016f0ec(lVar30 + 0x60);
        if (lVar27 == 0x434c4e47432b2b01) {
          lVar27 = *(long *)(lVar30 + 8);
        }
        else {
          lVar27 = lVar30 + 0x80;
        }
        uVar7 = FUN_001707cc(uVar26,pbVar23 + uVar8,bVar1,uVar21,lVar27,lVar9,uVar24);
        if ((uVar7 & 1) == 0) {
          lVar9 = plVar12[1];
          *(int *)(lVar30 + 0x38) = -*(int *)(lVar30 + 0x38);
          *(int *)(plVar12 + 1) = (int)lVar9 + 1;
          __cxa_end_catch();
          __cxa_end_catch();
          __cxa_begin_catch(lVar30 + 0x60);
          uVar21 = __cxa_rethrow();
          std::exception::~exception((exception *)&puStack_180);
          __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
          FUN_0017155c(uVar21);
        }
      }
      pbVar22 = PTR_vtable_0017d840;
      puStack_180 = PTR_vtable_0017d840 + 0x10;
      uVar26 = FUN_001707cc(uVar26,pbVar23 + uVar8,bVar1,PTR_PTR_0017d848,&puStack_180,lVar9,uVar24)
      ;
      if ((uVar26 & 1) != 0) {
        std::exception::~exception((exception *)&puStack_180);
LAB_0017054c:
        __cxa_end_catch();
        FUN_0015471c(uVar11);
      }
      __cxa_end_catch();
      puVar13 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar13 = pbVar22 + 0x10;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar13,PTR_PTR_0017d848,PTR__exception_0017d818);
    }
    puVar5 = puVar10;
    if (((ulong)puVar6 & 1) != 0) {
      lVar9 = FUN_0016f0ec(puStack_f0);
      puStack_c8 = puStack_100;
      if (lVar9 == 0x434c4e47432b2b01) {
        puStack_c8 = (ulong *)puVar3[-0xb];
      }
      if ((puStack_c8 == (ulong *)0x0) || (puVar3[-10] == 0)) {
        __cxa_begin_catch(puVar3);
        FUN_0015471c(puVar3[-7]);
        puVar15 = param_6;
        puVar6 = puVar3;
        goto LAB_0017034c;
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
        goto code_r0x00170384;
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
  if ((uVar17 | uVar18) == 0) goto LAB_00170264;
  pbVar22 = pbVar23 + (uVar17 | uVar18);
  uVar7 = uVar19;
  goto LAB_00170074;
LAB_00170264:
  uVar16 = 6;
  if (((uint)uVar19 & (uVar25 & 2) >> 1) == 0) {
    uVar16 = 8;
  }
  goto LAB_00170228;
}


// ===== 0016fe34  FUN_0016fe34 =====

void FUN_0016fe34(ulong *param_1,uint param_2,uint param_3,ulong *param_4,undefined8 param_5,
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
      goto LAB_00170228;
    }
  }
  else if ((param_2 & 0xe) != 0) {
    return;
  }
  local_90 = param_4;
  pcVar4 = (char *)FUN_001716d4(param_5);
  if (pcVar4 != (char *)0x0) {
    param_1[2] = (ulong)pcVar4;
    local_a4 = param_3;
    puVar5 = (ulong *)FUN_00171760(param_5);
    uVar6 = FUN_00171708(param_5);
    local_70 = (byte *)(pcVar4 + 1);
    if (*pcVar4 == -1) {
      pbVar23 = (byte *)(pcVar4 + 2);
      bVar1 = *local_70;
      uVar7 = uVar6;
    }
    else {
      uVar7 = FUN_001705e0(&local_70,*pcVar4,0);
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
      puVar5 = (ulong *)FUN_001705e0(&local_78,puVar24,0);
      lVar8 = FUN_001705e0(&local_78,puVar24,0);
      lVar9 = FUN_001705e0(&local_78,puVar24,0);
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
        if (lVar9 == 0) goto LAB_00170224;
        param_1[3] = lVar9 + uVar7;
        if (uVar17 != 0) {
          puVar5 = (ulong *)(ulong)local_a4;
          uVar7 = local_88 & 0xf;
          pbVar18 = pbVar18 + uVar17 + (uVar15 & 0xffffffff) + -1;
          local_a0 = local_90 + 4;
          local_94 = 0x1c1dU >> uVar7 & 1;
          uVar6 = 0;
          goto LAB_00170074;
        }
        uVar14 = 6;
        if ((param_2 & 1) != 0) {
          uVar14 = 8;
        }
        goto LAB_00170228;
      }
    } while (puVar5 <= puVar13);
    __cxa_begin_catch(local_90);
    if ((local_a4 & 1) != 0) {
      do {
        FUN_0015471c(local_90[-7]);
LAB_0017032c:
        __cxa_begin_catch(local_90);
      } while (((ulong)puVar5 & 1) != 0);
    }
                    /* WARNING: Subroutine does not return */
    std::terminate();
  }
LAB_00170224:
  uVar14 = 8;
  goto LAB_00170228;
LAB_00170074:
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
        goto LAB_001702c8;
      }
      lVar8 = FUN_0016f0ec(local_90);
      puVar10 = local_a0;
      if (lVar8 == 0x434c4e47432b2b01) {
        puVar10 = (ulong *)puVar13[-0xb];
      }
      if ((puVar10 == (ulong *)0x0) || (puVar13[-10] == 0)) {
LAB_0017034c:
        __cxa_begin_catch(puVar13);
        FUN_0015471c(puVar13[-7]);
        param_1 = puVar13;
        goto code_r0x00170364;
      }
      uVar16 = FUN_001707cc(uVar15,local_80,local_88,puVar13[-10],puVar10,puVar13,0);
      param_6 = puVar13;
      uVar17 = uVar6;
      puVar24 = puVar10;
      if ((uVar16 & 1) != 0) {
        if ((param_2 & 1) == 0) goto code_r0x001703a4;
        *param_1 = uVar15;
        param_1[1] = (ulong)pbVar18;
        uVar14 = 6;
        param_1[4] = (ulong)puVar10;
        goto LAB_00170228;
      }
    }
  }
  else {
    if (local_80 == (byte *)0x0) goto LAB_0017032c;
    if (0xc < (uint)uVar7) goto LAB_0017032c;
    if (local_94 == 0) goto LAB_0017032c;
    local_68 = (ulong *)(local_80 + *(long *)(&DAT_00116068 + uVar7 * 8) * uVar15);
    puVar10 = (ulong *)FUN_001705e0(&local_68,local_88,0);
    puVar2 = local_90;
    if (puVar10 == (ulong *)0x0) {
      puVar10 = puVar24;
      if ((param_2 & 0xd) != 0) {
        *param_1 = uVar15;
        param_1[1] = (ulong)pbVar18;
LAB_001702c8:
        puVar5 = local_90;
        lVar8 = FUN_0016f0ec(local_90);
        if (lVar8 == 0x434c4e47432b2b01) {
          local_a0 = (ulong *)puVar5[-0xb];
        }
        param_1[4] = (ulong)local_a0;
        uVar14 = 6;
        goto LAB_00170228;
      }
code_r0x00170364:
      __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x2ec,
                "void __cxxabiv1::scan_eh_tab(scan_results &, _Unwind_Action, bool, _Unwind_Exception *, _Unwind_Context *)"
                ,"actions & (_UA_SEARCH_PHASE | _UA_HANDLER_FRAME | _UA_FORCE_UNWIND)");
code_r0x00170384:
      __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x306,
                "void __cxxabiv1::scan_eh_tab(scan_results &, _Unwind_Action, bool, _Unwind_Exception *, _Unwind_Context *)"
                ,"actions & (_UA_SEARCH_PHASE | _UA_FORCE_UNWIND)");
code_r0x001703a4:
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
      uVar6 = FUN_0016f0f8(lVar8);
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
      FUN_001546d0(uVar22);
      __cxa_begin_catch();
      if ((uVar6 & 1) == 0) goto LAB_0017054c;
      pbStack_118 = pbVar18 + 1;
      FUN_001705e0(&pbStack_118,*pbVar18,uVar20);
      bVar1 = *pbStack_118;
      if (bVar1 != 0xff) goto LAB_00170468;
      do {
        FUN_0015471c(uVar11);
        pbStack_118 = extraout_x9;
LAB_00170468:
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
      bVar3 = FUN_0016f0f8(lVar25 + 0x60);
      if ((bVar3 & lVar25 != lVar9) == 1) {
        uVar22 = *(undefined8 *)(lVar25 + 0x10);
        lVar9 = FUN_0016f0ec(lVar25 + 0x60);
        if (lVar9 == 0x434c4e47432b2b01) {
          lVar9 = *(long *)(lVar25 + 8);
        }
        else {
          lVar9 = lVar25 + 0x80;
        }
        uVar6 = FUN_001707cc(uVar21,pbVar19 + uVar7,bVar1,uVar22,lVar9,lVar8,uVar20);
        if ((uVar6 & 1) == 0) {
          lVar8 = plVar12[1];
          *(int *)(lVar25 + 0x38) = -*(int *)(lVar25 + 0x38);
          *(int *)(plVar12 + 1) = (int)lVar8 + 1;
          __cxa_end_catch();
          __cxa_end_catch();
          __cxa_begin_catch(lVar25 + 0x60);
          uVar22 = __cxa_rethrow();
          std::exception::~exception((exception *)&puStack_120);
          __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
          FUN_0017155c(uVar22);
        }
      }
      pbVar18 = PTR_vtable_0017d840;
      puStack_120 = PTR_vtable_0017d840 + 0x10;
      uVar21 = FUN_001707cc(uVar21,pbVar19 + uVar7,bVar1,PTR_PTR_0017d848,&puStack_120,lVar8,uVar20)
      ;
      if ((uVar21 & 1) != 0) {
        std::exception::~exception((exception *)&puStack_120);
LAB_0017054c:
        __cxa_end_catch();
        FUN_0015471c(uVar11);
      }
      __cxa_end_catch();
      plVar12 = (long *)__cxa_allocate_exception(8);
      *plVar12 = (long)(pbVar18 + 0x10);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(plVar12,PTR_PTR_0017d848,PTR__exception_0017d818);
    }
    if (((ulong)puVar5 & 1) != 0) {
      lVar8 = FUN_0016f0ec(local_90);
      local_68 = local_a0;
      if (lVar8 == 0x434c4e47432b2b01) {
        local_68 = (ulong *)puVar2[-0xb];
      }
      if ((local_68 == (ulong *)0x0) || (puVar2[-10] == 0)) {
        __cxa_begin_catch(puVar2);
        FUN_0015471c(puVar2[-7]);
        puVar13 = param_6;
        puVar5 = puVar2;
        goto LAB_0017034c;
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
        goto code_r0x00170384;
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
  if ((uVar15 | uVar16) == 0) goto LAB_00170264;
  pbVar18 = pbVar19 + (uVar15 | uVar16);
  uVar6 = uVar17;
  goto LAB_00170074;
LAB_00170264:
  uVar14 = 6;
  if (((uint)uVar17 & (param_2 & 2) >> 1) == 0) {
    uVar14 = 8;
  }
LAB_00170228:
  *(undefined4 *)(param_1 + 5) = uVar14;
  return;
}


// ===== 001703c0  __cxa_call_unexpected =====

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
  uVar4 = FUN_0016f0f8(param_1);
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
                    /* try { // try from 00170430 to 00170433 has its CatchHandler @ 00170434 */
  FUN_001546d0(uVar9);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00170430 with catch @ 00170434
                        */
  __cxa_begin_catch();
  if ((uVar4 & 1) != 0) {
    local_68 = unaff_x24 + 1;
                    /* try { // try from 00170444 to 0017044f has its CatchHandler @ 001705cc */
    FUN_001705e0(&local_68,*unaff_x24,uVar7);
    bVar1 = *local_68;
    if (bVar1 != 0xff) goto LAB_00170468;
    do {
      FUN_0015471c(uVar5);
      local_68 = extraout_x9;
LAB_00170468:
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
                    /* try { // try from 00170490 to 00170493 has its CatchHandler @ 001705c8 */
      plVar6 = (long *)__cxa_get_globals_fast();
      lVar13 = *plVar6;
    } while (lVar13 == 0);
                    /* try { // try from 001704a0 to 001704a7 has its CatchHandler @ 001705c4 */
    bVar3 = FUN_0016f0f8(lVar13 + 0x60);
    if ((bVar3 & lVar13 != lVar8) == 1) {
      uVar9 = *(undefined8 *)(lVar13 + 0x10);
                    /* try { // try from 001704c0 to 00170507 has its CatchHandler @ 001705c0 */
      lVar8 = FUN_0016f0ec(lVar13 + 0x60);
      if (lVar8 == 0x434c4e47432b2b01) {
        lVar8 = *(long *)(lVar13 + 8);
      }
      else {
        lVar8 = lVar13 + 0x80;
      }
      uVar4 = FUN_001707cc(unaff_x22,pbVar11 + uVar10,bVar1,uVar9,lVar8,param_1,uVar7);
      if ((uVar4 & 1) == 0) {
        lVar8 = plVar6[1];
        *(int *)(lVar13 + 0x38) = -*(int *)(lVar13 + 0x38);
        *(int *)(plVar6 + 1) = (int)lVar8 + 1;
                    /* try { // try from 0017059c to 001705af has its CatchHandler @ 001705c0 */
        __cxa_end_catch();
        __cxa_end_catch();
        __cxa_begin_catch(lVar13 + 0x60);
        uVar9 = __cxa_rethrow();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0017051c with catch @ 001705b0
                       catch(type#1 @ 00000000) { ... } // from try @ 00170558 with catch @ 001705b0
                       catch(type#1 @ 00000000) { ... } // from try @ 0017056c with catch @ 001705b0
                        */
        std::exception::~exception((exception *)&local_70);
                    /* try { // try from 001705d0 to 001705d3 has its CatchHandler @ 001705dc */
        __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
        FUN_0017155c(uVar9);
      }
    }
    unaff_x24 = PTR_vtable_0017d840;
    local_70 = PTR_vtable_0017d840 + 0x10;
                    /* try { // try from 0017051c to 0017053f has its CatchHandler @ 001705b0 */
    uVar4 = FUN_001707cc(unaff_x22,pbVar11 + uVar10,bVar1,PTR_PTR_0017d848,&local_70,param_1,uVar7);
    if ((uVar4 & 1) == 0) goto LAB_00170558;
    std::exception::~exception((exception *)&local_70);
  }
  __cxa_end_catch();
  FUN_0015471c(uVar5);
LAB_00170558:
                    /* try { // try from 00170558 to 0017055b has its CatchHandler @ 001705b0 */
  __cxa_end_catch();
  plVar6 = (long *)__cxa_allocate_exception(8);
  *plVar6 = (long)(unaff_x24 + 0x10);
                    /* try { // try from 0017056c to 0017057f has its CatchHandler @ 001705b0 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(plVar6,PTR_PTR_0017d848,PTR__exception_0017d818);
}


// ===== 001705e0  FUN_001705e0 =====

undefined8 * FUN_001705e0(undefined8 *param_1,uint param_2,long param_3)

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
      if (uVar1 == 0) goto LAB_001706fc;
      if (uVar1 != 1) goto LAB_001707c8;
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
      if (uVar1 != 3) goto LAB_001707c8;
      puVar4 = (undefined8 *)(ulong)(uint)*puVar5;
joined_r0x00170698:
      puVar7 = (ulong *)((long)puVar5 + 4);
    }
  }
  else if (uVar1 < 10) {
    if (uVar1 == 4) goto LAB_001706fc;
    if (uVar1 != 9) goto LAB_001707c8;
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
      goto joined_r0x00170698;
    }
    if (uVar1 != 0xc) goto LAB_001707c8;
LAB_001706fc:
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
LAB_001707c8:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (puVar4 == (undefined8 *)0x0) goto LAB_00170764;
      puVar4 = (undefined8 *)((long)puVar4 + param_3);
    }
    else {
      if (uVar1 != 1) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (puVar4 == (undefined8 *)0x0) goto LAB_00170764;
      puVar4 = (undefined8 *)((long)puVar4 + (long)puVar5);
    }
  }
  if ((puVar4 != (undefined8 *)0x0) && ((param_2 >> 7 & 1) != 0)) {
    puVar4 = (undefined8 *)*puVar4;
    *param_1 = puVar7;
    return puVar4;
  }
LAB_00170764:
  *param_1 = puVar7;
  return puVar4;
}


// ===== 001707cc  FUN_001707cc =====

bool FUN_001707cc(ulong param_1,long param_2,ulong param_3,undefined8 param_4,long param_5,
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
LAB_001708e0:
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
      FUN_0015471c(*(undefined8 *)(param_6 + -0x38));
      goto LAB_001708e0;
    }
    local_68 = param_2 + *(long *)(&DAT_00116068 + uVar7 * 8) * uVar6;
    plVar2 = (long *)FUN_001705e0(&local_68,param_3 & 0xffffffff,param_7);
    local_68 = param_5;
    uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_4,&local_68);
    uVar4 = 0;
    uVar5 = 0;
  } while ((uVar3 & 1) == 0);
  return uVar6 == 0;
}


// ===== 001708ec  __emutls_get_address =====

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
    pthread_once((pthread_once_t *)&DAT_00182968,FUN_00170b14);
    pthread_mutex_lock((pthread_mutex_t *)&DAT_00182978);
    sVar3 = param_1[2];
    if (sVar3 == 0) {
      sVar3 = DAT_00182970 + 1;
      DAT_00182970 = sVar3;
      param_1[2] = sVar3;
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_00182978);
    __ptr = (undefined8 *)pthread_getspecific(DAT_00182964);
    if (__ptr == (undefined8 *)0x0) goto LAB_001709cc;
LAB_00170920:
    uVar2 = __ptr[1];
    if (sVar3 <= uVar2) goto LAB_00170a14;
    lVar4 = (sVar3 + 0x11 & 0xfffffffffffffff0) - 2;
    __ptr = (undefined8 *)realloc(__ptr,lVar4 * 8 + 0x10);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    memset(__ptr + uVar2 + 2,0,(lVar4 - uVar2) * 8);
  }
  else {
    __ptr = (undefined8 *)pthread_getspecific(DAT_00182964);
    if (__ptr != (undefined8 *)0x0) goto LAB_00170920;
LAB_001709cc:
    lVar4 = (sVar3 + 0x11 & 0xfffffffffffffff0) - 2;
    __ptr = (undefined8 *)malloc(lVar4 * 8 + 0x10);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    memset(__ptr + 2,0,lVar4 * 8);
    *__ptr = 1;
  }
  __key = DAT_00182964;
  __ptr[1] = lVar4;
  pthread_setspecific(__key,__ptr);
LAB_00170a14:
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


// ===== 00170ad8  FUN_00170ad8 =====

ulong FUN_00170ad8(ulong param_1)

{
  uint uVar1;
  
  if (DAT_00182960 == '\x01') {
    uVar1 = pthread_key_delete(DAT_00182964);
    param_1 = (ulong)uVar1;
    DAT_00182960 = '\0';
  }
  return param_1;
}


// ===== 00170b14  FUN_00170b14 =====

void FUN_00170b14(void)

{
  int iVar1;
  
  iVar1 = pthread_key_create(&DAT_00182964,FUN_00170b50);
  if (iVar1 == 0) {
    DAT_00182960 = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00170b50  FUN_00170b50 =====

long * FUN_00170b50(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*param_1 != 0) {
    *param_1 = *param_1 + -1;
    uVar1 = pthread_setspecific(DAT_00182964,param_1);
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


// ===== 00170bd8  _INIT_0 =====

void _INIT_0(void)

{
  uint uVar1;
  int iVar2;
  char acStack_6c [92];
  
  uVar1 = getauxval(0x10);
  if ((uVar1 >> 8 & 1) == 0) {
    DAT_001829a0 = 0;
    return;
  }
  iVar2 = __system_property_get("ro.arch",acStack_6c);
  if (0 < iVar2) {
    iVar2 = strncmp(acStack_6c,"exynos9810",10);
    DAT_001829a0 = iVar2 != 0;
    return;
  }
  DAT_001829a0 = 1;
  return;
}


// ===== 00170c70  FUN_00170c70 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00170c70(ulong param_1,long param_2)

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
    DAT_001829a8 = DAT_001829a8 | 0x400;
  }
  uVar2 = (uint)uVar4;
  if ((uVar3 >> 4 & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x8000;
  }
  if ((uVar3 >> 0x1b & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 2;
  }
  if ((uVar2 >> 7 & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 6;
  }
  if ((~uVar3 & 0xc0000) == 0) {
    DAT_001829a8 = DAT_001829a8 | 0x20;
  }
  if ((uVar3 >> 0x14 & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x10;
  }
  if ((uVar3 >> 0x17 & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 8;
  }
  if ((uVar3 >> 9 & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x10100;
  }
  if ((uVar3 >> 0x18 & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x20000;
  }
  if ((uVar3 >> 0xc & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x40;
  }
  if ((uVar3 >> 0x1a & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x800000;
  }
  if ((uVar3 >> 3 & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x4000;
  }
  if ((uVar3 >> 5 & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x800;
  }
  if ((uVar3 >> 6 & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x1000;
  }
  if ((uVar3 >> 0xd & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x100000;
  }
  if ((uVar3 >> 0xe & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x200000;
  }
  if ((uVar3 >> 0x1d & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x400000000000;
  }
  if ((uVar3 >> 0x1c & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x2000000000000;
  }
  if ((uVar2 >> 0x12 & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x180000000000;
  }
  if ((uVar2 >> 0x16 & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x380000000000;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x2000000000;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x6000000000;
  }
  if ((uVar2 >> 4 & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x8000000000;
  }
  if ((uVar2 >> 5 & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x10000000000;
  }
  if ((uVar2 >> 6 & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x20000000000;
  }
  if ((uVar4 & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x80000;
  }
  if ((uVar3 >> 8 & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x80;
  }
  if ((uVar2 >> 0x10 & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 1;
  }
  if ((uVar2 >> 0xd & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x4000000;
  }
  if ((uVar4 >> 0x20 & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x10000000;
  }
  if ((uVar4 >> 0x21 & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x100000000;
  }
  if ((uVar2 >> 0xf & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x2000000;
  }
  if ((uVar2 >> 8 & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x1000000;
  }
  if ((uVar2 >> 9 & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x200000000;
  }
  if ((uVar2 >> 10 & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x400000000;
  }
  if ((uVar2 >> 0xb & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x800000000;
  }
  if ((uVar2 >> 0x11 & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x4000000000000;
  }
  if ((uVar2 >> 0x15 & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x20000000;
  }
  if ((int)uVar2 < 0) {
    DAT_001829a8 = DAT_001829a8 | 0x40000000000000;
  }
  if ((uVar2 >> 0x17 & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x40000000000;
  }
  if ((uVar2 >> 0x18 & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x100000000000000;
  }
  if ((uVar2 >> 0x19 & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x80000000000000;
  }
  if ((uVar4 >> 0x2b & 1) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x800000000000000;
  }
  if ((uVar3 >> 0xb & 1) == 0) {
    if ((param_1 & 0x201) != 0) {
      DAT_001829a8 = DAT_001829a8 | 0x300;
    }
    if ((uVar4 & 1) != 0 || (param_1 & 0x10000) != 0) {
      DAT_001829a8 = DAT_001829a8 | 0x40000;
    }
    if ((param_1 & 0x4008000) != 0) {
      DAT_001829a8 = DAT_001829a8 | 0x400000;
    }
    if ((uVar4 & 0x100004000) != 0) {
      DAT_001829a8 = DAT_001829a8 | 0x8000000;
    }
    uVar5 = DAT_001829a8 | (ulong)(uVar2 << 0x13) & 0x80000000;
    if ((uVar4 & 2) != 0 && (param_1 & 0x400000) != 0) {
      uVar5 = uVar5 | 0x1000000000;
    }
    uVar5 = uVar5 | (param_1 & 0x20000) >> 4;
    goto LAB_00170dd8;
  }
  uVar4 = id_aa64pfr1_el1;
  if ((uVar4 & 0xf00) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x80000000000;
  }
  if ((uVar4 & 0xf0) == 0x10) {
    DAT_001829a8 = DAT_001829a8 | 0x1000000000000;
    if ((uVar4 & 0xf000000) != 0x2000000) goto LAB_001710c8;
LAB_0017111c:
    DAT_001829a8 = DAT_001829a8 | 0x200000000000000;
    uVar4 = id_aa64pfr0_el1;
    uVar3 = (uint)uVar4;
  }
  else {
    if ((uVar4 & 0xf000000) == 0x2000000) goto LAB_0017111c;
LAB_001710c8:
    uVar4 = id_aa64pfr0_el1;
    uVar3 = (uint)uVar4;
  }
  if ((~uVar3 & 0xf0000) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x300;
  }
  if ((uVar4 & 0xf00000000) != 0) {
    uVar4 = UnkSytemRegRead(3,0,0,4,4);
    if ((uVar4 & 0xf) == 1) {
      DAT_001829a8 = DAT_001829a8 | 0x1000000000;
    }
    else if ((uVar4 & 0xf) == 0) {
      DAT_001829a8 = DAT_001829a8 | 0x40000000;
    }
    if ((uVar4 & 0xf00000) != 0) {
      DAT_001829a8 = DAT_001829a8 | 0x80000000;
    }
  }
  uVar4 = id_aa64isar0_el1;
  if ((uVar4 & 0xf00000000) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x2000;
  }
  uVar4 = id_aa64isar1_el1;
  uVar5 = uVar4 >> 0x14 & 0xf;
  if ((uVar4 & 0xf) != 0) {
    DAT_001829a8 = DAT_001829a8 | 0x40000;
  }
  if (uVar5 != 0) {
    if (uVar5 == 3) {
      DAT_001829a8 = DAT_001829a8 | 0x400000000400000;
    }
    else {
      DAT_001829a8 = DAT_001829a8 | 0x400000;
    }
  }
  uVar5 = DAT_001829a8 | 0x800000000000;
  if ((uVar4 & 0xf0000000000) != 0x20000000000) {
    uVar5 = DAT_001829a8;
  }
  if ((uVar4 & 0xf00000000000) != 0) {
    uVar5 = uVar5 | 0x8000000;
  }
  if (uVar4 >> 0x3c != 0) {
    if (uVar4 >> 0x3d == 0) {
      DAT_001829a8 = uVar5 | 0x8008000000000000;
      return;
    }
    uVar1 = 0x38000000000000;
    if (uVar4 >> 0x3c < 3) {
      uVar1 = 0x18000000000000;
    }
    DAT_001829a8 = uVar5 | uVar1 | 0x8000000000000000;
    return;
  }
LAB_00170dd8:
  DAT_001829a8 = uVar5 | 0x8000000000000000;
  return;
}


// ===== 0017120c  _INIT_1 =====

void _INIT_1(void)

{
  int iVar1;
  ulong uVar2;
  char local_70 [8];
  ulong uStack_68;
  undefined8 local_60;
  
  if (DAT_001829a8 != 0) {
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
    FUN_00170c70(uVar2 | 0x4000000000000000,local_70);
  }
  return;
}


// ===== 001712a0  FUN_001712a0 =====

undefined8 FUN_001712a0(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  
  if (DAT_001829a0 == '\0') {
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


// ===== 001712d0  FUN_001712d0 =====

long FUN_001712d0(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_001829a0 == '\0') {
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


// ===== 00171300  FUN_00171300 =====

long FUN_00171300(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_001829a0 == '\0') {
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


// ===== 00171330  FUN_00171330 =====

undefined8 FUN_00171330(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_4f0 [624];
  undefined1 auStack_280 [528];
  undefined8 local_70;
  undefined1 auStack_68 [24];
  code *local_50;
  
  FUN_0017534c(auStack_280);
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_001717a0(auStack_4f0,auStack_280);
  iVar1 = FUN_001719b0(auStack_4f0);
  while( true ) {
    if (iVar1 == 0) {
      return 5;
    }
    if ((iVar1 < 0) || (iVar1 = FUN_001719d8(auStack_4f0,auStack_68), iVar1 != 0)) break;
    if ((local_50 != (code *)0x0) &&
       (iVar1 = (*local_50)(1,1,*param_1,param_1,auStack_4f0), iVar1 != 8)) {
      if (iVar1 != 6) {
        return 3;
      }
      FUN_00171848(auStack_4f0,0xfffffffe,&local_70);
      param_1[3] = local_70;
      uVar2 = FUN_00171428(auStack_280,auStack_4f0,param_1);
      return uVar2;
    }
    iVar1 = FUN_001719b0(auStack_4f0);
  }
  return 3;
}


// ===== 00171428  FUN_00171428 =====

undefined8 FUN_00171428(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_80 [24];
  code *local_68;
  long local_38;
  
  FUN_001717a0(param_2,param_1);
  iVar2 = FUN_001719c4(param_2);
  while( true ) {
    if (iVar2 == 0) {
      return 5;
    }
    if (iVar2 < 0) break;
    FUN_00171848(param_2,0xfffffffe,&local_38);
    iVar2 = FUN_001719d8(param_2,auStack_80);
    if (iVar2 != 0) {
      return 2;
    }
    if (local_68 != (code *)0x0) {
      uVar3 = 6;
      if (local_38 != param_3[3]) {
        uVar3 = 2;
      }
      iVar2 = (*local_68)(1,uVar3,*param_3,param_3,param_2);
      puVar1 = PTR___sF_0017d7f0;
      if (iVar2 != 8) {
        if (iVar2 != 7) {
          return 2;
        }
        FUN_00171a18(param_2);
        return 2;
      }
      if (local_38 == param_3[3]) {
        fprintf((FILE *)(PTR___sF_0017d7f0 + 0x130),"libunwind: %s - %s\n","unwind_phase2",
                "during phase1 personality function said it would stop here, but now in phase2 it did not stop here"
               );
        fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    iVar2 = FUN_001719c4(param_2);
  }
  return 2;
}


// ===== 0017155c  FUN_0017155c =====

void FUN_0017155c(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_4a0 [624];
  undefined1 auStack_230 [528];
  
  FUN_0017534c(auStack_230);
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_00171428(auStack_230,auStack_4a0,param_1);
  }
  else {
    FUN_001715e0(auStack_230,auStack_4a0,param_1,*(long *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = PTR___sF_0017d7f0;
  fprintf((FILE *)(PTR___sF_0017d7f0 + 0x130),"libunwind: %s - %s\n","_Unwind_Resume",
          "_Unwind_Resume() can\'t return");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 001715e0  FUN_001715e0 =====

void FUN_001715e0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,code *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined1 auStack_78 [24];
  code *local_60;
  
  FUN_001717a0(param_2,param_1);
  iVar1 = FUN_001719c4(param_2);
  while( true ) {
    if (iVar1 < 1) {
      (*param_4)(1,0x1a,*param_3,param_3,param_2,param_5);
      return;
    }
    iVar1 = FUN_001719d8(param_2,auStack_78);
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
      FUN_00171a18(param_2);
    }
    iVar1 = FUN_001719c4(param_2);
  }
  return;
}


// ===== 001716d4  FUN_001716d4 =====

undefined8 FUN_001716d4(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_58 [16];
  undefined8 local_48;
  
  iVar1 = FUN_001719d8(param_1,auStack_58);
  if (iVar1 != 0) {
    local_48 = 0;
  }
  return local_48;
}


// ===== 00171708  FUN_00171708 =====

undefined8 FUN_00171708(undefined8 param_1)

{
  int iVar1;
  undefined8 local_58 [9];
  
  iVar1 = FUN_001719d8(param_1,local_58);
  if (iVar1 != 0) {
    local_58[0] = 0;
  }
  return local_58[0];
}


// ===== 0017173c  FUN_0017173c =====

void FUN_0017173c(long param_1)

{
  if (*(code **)(param_1 + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00171750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 8))(1,param_1);
    return;
  }
  return;
}


// ===== 00171758  thunk_FUN_001718c4 =====

void thunk_FUN_001718c4(void)

{
  FUN_001718c4();
  return;
}


// ===== 00171760  FUN_00171760 =====

undefined8 FUN_00171760(undefined8 param_1)

{
  undefined8 local_18;
  
  FUN_00171848(param_1,0xffffffff,&local_18);
  return local_18;
}


// ===== 00171790  FUN_00171790 =====

void FUN_00171790(undefined8 param_1,undefined8 param_2)

{
  FUN_001718c4(param_1,0xffffffff,param_2);
  return;
}


// ===== 001717a0  FUN_001717a0 =====

undefined8 FUN_001717a0(undefined8 *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = &PTR_FUN_0017d3c0;
  param_1[1] = &DAT_001829b0;
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
  FUN_00172268(param_1,0);
  return 0;
}


// ===== 00171848  FUN_00171848 =====

undefined8 FUN_00171848(long *param_1,undefined4 param_2,undefined8 *param_3)

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


// ===== 001718c4  FUN_001718c4 =====

undefined8 FUN_001718c4(long *param_1,int param_2,undefined8 param_3)

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


// ===== 001719b0  FUN_001719b0 =====

void FUN_001719b0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001719c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,0);
  return;
}


// ===== 001719c4  FUN_001719c4 =====

void FUN_001719c4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001719d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,1);
  return;
}


// ===== 001719d8  FUN_001719d8 =====

undefined4 FUN_001719d8(long *param_1,long param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x48))();
  uVar1 = 0xffffe66b;
  if (*(long *)(param_2 + 8) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 00171a18  FUN_00171a18 =====

undefined8 FUN_00171a18(long *param_1)

{
  (**(code **)(*param_1 + 0x50))();
  return 0xffffe674;
}


// ===== 00171a40  FUN_00171a40 =====

char * FUN_00171a40(undefined8 param_1,uint *param_2,undefined8 *param_3,long *param_4,ulong param_5
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
      pcVar7 = (char *)FUN_00171bd0(param_1,lVar8,param_4);
      if (pcVar7 != (char *)0x0) {
        return pcVar7;
      }
    }
    else if (*param_4 != lVar8) {
      return "CIE start does not match";
    }
    lVar8 = (long)puVar10 + uVar9;
    local_48 = puVar10 + 1;
    lVar3 = FUN_00173a28(param_1,&local_48,lVar8,(char)param_4[3],0);
    lVar4 = FUN_00173a28(param_1,&local_48,lVar8,*(byte *)(param_4 + 3) & 0xf,0);
    cVar1 = *(char *)((long)param_4 + 0x31);
    param_3[5] = 0;
    puVar10 = local_48;
    if (cVar1 != '\0') {
      lVar5 = FUN_00173db4(&local_48,lVar8);
      puVar2 = local_48;
      puVar10 = (uint *)((long)local_48 + lVar5);
      if ((*(byte *)((long)param_4 + 0x19) != 0xff) &&
         (lVar5 = FUN_00173a28(param_1,&local_48,lVar8,*(byte *)((long)param_4 + 0x19) & 0xf,0),
         lVar5 != 0)) {
        local_48 = puVar2;
        uVar6 = FUN_00173a28(param_1,&local_48,lVar8,*(undefined1 *)((long)param_4 + 0x19),0);
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


// ===== 00171bd0  FUN_00171bd0 =====

char * FUN_00171bd0(undefined8 param_1,uint *param_2,long *param_3)

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
      uVar7 = FUN_00173db4(&local_48,pbVar1);
      uVar13 = 0;
      uVar14 = 0;
      *(undefined4 *)(param_3 + 5) = uVar7;
      puVar5 = PTR___sF_0017d7f0;
      pbVar11 = local_48;
      pbVar15 = local_48;
      do {
        pbVar12 = pbVar11;
        if (pbVar15 == pbVar1) {
          fprintf((FILE *)(PTR___sF_0017d7f0 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
        uVar6 = FUN_00173db4(&local_48,pbVar1);
        *(undefined1 *)((long)param_3 + 0x32) = uVar6;
        bVar2 = *pbVar18;
      }
      if (bVar2 == 0x7a) {
        FUN_00173db4(&local_48,pbVar1);
LAB_00171d50:
        bVar2 = *pbVar18;
        if (bVar2 < 0x50) {
          if (bVar2 < 0x47) {
            if (bVar2 != 0x42) {
              if (bVar2 != 0) goto LAB_00171df0;
              goto LAB_00171e34;
            }
            *(undefined1 *)((long)param_3 + 0x33) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_00171d50;
          }
          if (bVar2 == 0x47) {
            *(undefined1 *)((long)param_3 + 0x34) = 1;
            goto LAB_00171df0;
          }
          if (bVar2 == 0x4c) {
            pbVar18 = pbVar18 + 1;
            *(byte *)((long)param_3 + 0x19) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_00171d50;
          }
        }
        else if (bVar2 < 0x53) {
          if (bVar2 == 0x50) {
            bVar2 = *local_48;
            *(byte *)((long)param_3 + 0x1a) = bVar2;
            *(char *)((long)param_3 + 0x1b) = (char)(local_48 + 1) - (char)param_2;
            local_48 = local_48 + 1;
            lVar8 = FUN_00173a28(param_1,&local_48,pbVar1,bVar2,0);
            param_3[4] = lVar8;
            pbVar18 = pbVar18 + 1;
            goto LAB_00171d50;
          }
          if (bVar2 == 0x52) {
            pbVar18 = pbVar18 + 1;
            *(byte *)(param_3 + 3) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_00171d50;
          }
        }
        else {
          if (bVar2 == 0x53) {
            *(undefined1 *)(param_3 + 6) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_00171d50;
          }
          if (bVar2 == 0x7a) {
            *(undefined1 *)((long)param_3 + 0x31) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_00171d50;
          }
        }
LAB_00171df0:
        pbVar18 = pbVar18 + 1;
        goto LAB_00171d50;
      }
LAB_00171e34:
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


// ===== 00171e98  FUN_00171e98 =====

void FUN_00171e98(void)

{
  return;
}


// ===== 00171ea0  FUN_00171ea0 =====

void FUN_00171ea0(void)

{
  return;
}


// ===== 00171ea8  FUN_00171ea8 =====

bool FUN_00171ea8(undefined8 param_1,uint param_2)

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


// ===== 00171eec  FUN_00171eec =====

undefined8 FUN_00171eec(long param_1,uint param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_0017d7f0;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_00171f54:
      return *(undefined8 *)(param_1 + 0x108);
    }
    if (param_2 == 0xffffffff) goto LAB_00171f48;
    if (param_2 == 0x1d) {
      return *(undefined8 *)(param_1 + 0xf8);
    }
  }
  else if ((int)param_2 < 0x20) {
    if (param_2 == 0x1e) {
      return *(undefined8 *)(param_1 + 0x100);
    }
    if (param_2 == 0x1f) goto LAB_00171f54;
  }
  else {
    if (param_2 == 0x22) {
      return *(undefined8 *)(param_1 + 0x118);
    }
    if (param_2 == 0x20) {
LAB_00171f48:
      return *(undefined8 *)(param_1 + 0x110);
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_0017d7f0 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8);
}


// ===== 00171fd4  FUN_00171fd4 =====

void FUN_00171fd4(long param_1,uint param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_0017d7f0;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_0017203c:
      *(undefined8 *)(param_1 + 0x108) = param_3;
      return;
    }
    if (param_2 == 0xffffffff) goto LAB_00172030;
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
    if (param_2 == 0x1f) goto LAB_0017203c;
  }
  else {
    if (param_2 == 0x22) {
      *(undefined8 *)(param_1 + 0x118) = param_3;
      return;
    }
    if (param_2 == 0x20) {
LAB_00172030:
      *(undefined8 *)(param_1 + 0x110) = param_3;
      return;
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_0017d7f0 + 0x130),"libunwind: %s - %s\n","setRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8) = param_3;
  return;
}


// ===== 001720bc  FUN_001720bc =====

bool FUN_001720bc(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffffffe0) == 0x40;
}


// ===== 001720d0  FUN_001720d0 =====

undefined1  [16] FUN_001720d0(long param_1,int param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + (long)param_2 * 8 + -0xe0);
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 001720e0  FUN_001720e0 =====

void FUN_001720e0(undefined8 param_1,long param_2,int param_3)

{
  *(undefined8 *)(param_2 + (long)param_3 * 8 + -0xe0) = param_1;
  return;
}


// ===== 001720f0  FUN_001720f0 =====

ulong FUN_001720f0(long *param_1,uint param_2)

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
    uVar3 = FUN_00172614(lVar1,uVar4,param_1[0x4b],param_1 + 2,(long)param_1 + 0x269,param_2 & 1);
    iVar2 = (int)uVar3;
  }
  else {
    memset(auStack_240,0,0x210);
    uVar3 = FUN_001724f4(param_1,auStack_240);
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


// ===== 001721e0  FUN_001721e0 =====

void FUN_001721e0(long param_1,undefined8 *param_2)

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


// ===== 00172224  FUN_00172224 =====

void FUN_00172224(long param_1)

{
  FUN_001752bc(param_1 + 0x10);
  return;
}


// ===== 00172230  FUN_00172230 =====

undefined1 FUN_00172230(long param_1)

{
  return *(undefined1 *)(param_1 + 0x269);
}


// ===== 0017223c  FUN_0017223c =====

undefined8 FUN_0017223c(long *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  return 0;
}


// ===== 00172268  FUN_00172268 =====

void FUN_00172268(long *param_1,ulong param_2)

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
  iVar1 = dl_iterate_phdr(FUN_00174c0c,&local_648);
  if (((iVar1 == 0) || (local_668 == 0)) ||
     (uVar4 = FUN_00174938(param_1,uVar7,auStack_678,0), (uVar4 & 1) == 0)) {
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_001829b4);
    for (puVar6 = PTR_DAT_00181f68; puVar6 < PTR_DAT_00181f70; puVar6 = puVar6 + 0x20) {
      if ((*(ulong *)(puVar6 + 8) <= uVar7) && (uVar7 < *(ulong *)(puVar6 + 0x10))) {
        lVar3 = *(long *)(puVar6 + 0x18);
        pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001829b4);
        if ((lVar3 != 0) &&
           (lVar3 = FUN_00171a40(param_1[1],lVar3,&local_6a8,local_6e0,0), lVar3 == 0)) {
          memset(&local_648,0,0x618);
          uVar7 = FUN_00172a9c(param_1[1],&local_6a8,local_6e0,uVar7,4,&local_648);
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
        goto LAB_001723f0;
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001829b4);
LAB_001723f0:
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


// ===== 001724e8  FUN_001724e8 =====

void FUN_001724e8(undefined8 param_1,undefined4 param_2)

{
  FUN_0017528c(param_2);
  return;
}


// ===== 001724f4  FUN_001724f4 =====

undefined8 FUN_001724f4(long param_1)

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


// ===== 00172614  FUN_00172614 =====

undefined8
FUN_00172614(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4,
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
  
  lVar7 = FUN_00171a40(param_1,param_3,auStack_b0,auStack_e8,0);
  if (lVar7 == 0) {
    memset(auStack_700,0,0x618);
    uVar8 = FUN_00172a9c(param_1,auStack_b0,auStack_e8,param_2,4,auStack_700);
    if ((uVar8 & 1) != 0) {
      uVar8 = FUN_001736e4(param_1,auStack_700,param_4);
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
        puVar3 = PTR___sF_0017d7f0;
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
              goto LAB_001728f4;
            }
            else {
              puVar13 = (undefined8 *)((long)param_4 + 0x108);
              if ((local_b6 != 0x22) &&
                 ((puVar13 = (undefined8 *)((long)param_4 + 0x100), local_b6 != 0x20 &&
                  (puVar13 = (undefined8 *)((long)param_4 + 0xf8), local_b6 != 0x1f)))) {
LAB_001728f4:
                if (0x1c < local_b6) {
                  fprintf((FILE *)(PTR___sF_0017d7f0 + 0x130),"libunwind: %s - %s\n","getRegister",
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
LAB_00172a00:
                  fprintf((FILE *)(PTR___sF_0017d7f0 + 0x130),"libunwind: %s - %s\n",
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
              if (iVar2 != 6) goto LAB_00172a00;
              puVar9 = (ulong *)FUN_00173f7c(*(undefined8 *)(piVar15 + 2),param_1,param_4,uVar8);
              uVar18 = *puVar9;
            }
            local_a00[uVar12] = uVar18;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == local_b6) {
            uVar14 = FUN_00173818(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == 0x22) {
            uVar10 = FUN_00173818(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
          }
          else {
            if (0xffffffe0 < uVar16 - 0x40) {
              return 0xffffe672;
            }
            uVar11 = FUN_00173818(param_1,param_4,uVar8,piVar15);
            puVar3 = PTR___sF_0017d7f0;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
            if ((int)uVar16 < 0x1f) {
              uVar5 = uVar11;
              if ((uVar16 != 0x1d) && (uVar5 = local_a00[0x3b], uVar6 = uVar11, uVar16 != 0x1e))
              goto LAB_00172948;
            }
            else {
              uVar18 = uVar11;
              if ((uVar16 != 0x1f) &&
                 ((uVar18 = local_a00[0x3d], uVar10 = uVar11, uVar16 != 0x22 &&
                  (uVar10 = local_a00[0x3f], uVar16 != 0x20)))) {
LAB_00172948:
                if (0x1c < uVar12) {
                  fprintf((FILE *)(PTR___sF_0017d7f0 + 0x130),"libunwind: %s - %s\n","setRegister",
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
            FUN_00173818(param_1,auStack_b20,uVar8,&local_80);
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


// ===== 00172a9c  FUN_00172a9c =====

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_00172a9c(undefined8 param_1,long *param_2,long *param_3,long param_4,int param_5,
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
LAB_00172b20:
    lVar20 = lVar20 + 0x18;
    if (lVar20 == 0x30) {
      return 1;
    }
  }
  uVar17 = 0;
LAB_00172b50:
  puVar18 = local_6c0;
  puVar5 = PTR___sF_0017d7f0;
  pbVar10 = pbVar21 + 1;
  bVar3 = *pbVar21;
  apbStack_6a0[0xc0] = pbVar10;
  switch((ulong)bVar3) {
  case 0:
    goto code_r0x00173424;
  case 1:
    uVar17 = FUN_00173a28(local_6c8,apbStack_6a0 + 0xc0,pbVar2,(char)param_3[3],0);
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 2:
    uVar9 = (uint)pbVar21[1];
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 2;
    goto LAB_00172fd8;
  case 3:
    uVar9 = (uint)*(ushort *)(pbVar21 + 1);
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 3;
    goto LAB_00172fd8;
  case 4:
    uVar9 = *(uint *)(pbVar21 + 1);
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 5;
LAB_00172fd8:
    uVar17 = uVar17 + iVar13 * uVar9;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 5:
    uVar19 = FUN_00173db4(apbStack_6a0 + 0xc0,pbVar2);
    lVar8 = FUN_00173db4(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended DWARF unwind, reg too big\n";
      __size = 0x46;
      __s = (FILE *)(PTR___sF_0017d7f0 + 0x130);
      goto LAB_001735d4;
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
LAB_00172f74:
    puVar12[6] = 2;
    *(long *)(puVar12 + 8) = lVar8;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 6:
    uVar19 = FUN_00173db4(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_restore_extended DWARF unwind, reg too big\n";
LAB_001734c4:
      __s = (FILE *)(PTR___sF_0017d7f0 + 0x130);
      __size = 0x47;
      goto LAB_001735d4;
    }
    cVar4 = *(char *)(param_6 + uVar19 * 4 + 7);
joined_r0x00173404:
    if (cVar4 != '\0') {
      pbVar21 = apbStack_6a0[uVar19 * 2];
      *(byte **)(param_6 + uVar19 * 4 + 8) = apbStack_6a0[uVar19 * 2 + 1];
      *(byte **)(param_6 + uVar19 * 4 + 6) = pbVar21;
    }
    goto code_r0x00173424;
  case 7:
    uVar19 = FUN_00173db4(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_undefined DWARF unwind, reg too big\n";
LAB_001735c8:
      __s = (FILE *)(PTR___sF_0017d7f0 + 0x130);
      __size = 0x40;
      goto LAB_001735d4;
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
    uVar19 = FUN_00173db4(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_same_value DWARF unwind, reg too big\n";
LAB_001735ac:
      __s = (FILE *)(PTR___sF_0017d7f0 + 0x130);
      __size = 0x41;
      goto LAB_001735d4;
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
    uVar19 = FUN_00173db4(apbStack_6a0 + 0xc0,pbVar2);
    uVar14 = FUN_00173db4(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg too big\n";
      __size = 0x3f;
      __s = (FILE *)(PTR___sF_0017d7f0 + 0x130);
      goto LAB_001735d4;
    }
    if (0x5f < uVar14) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg2 too big\n";
      goto LAB_001735c8;
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
    uVar19 = FUN_00173db4(apbStack_6a0 + 0xc0,pbVar2);
    uVar7 = FUN_00173db4(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa DWARF unwind, reg too big\n";
      __size = 0x3e;
      __s = (FILE *)(PTR___sF_0017d7f0 + 0x130);
      goto LAB_001735d4;
    }
    *param_6 = (int)uVar19;
    param_6[1] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xd:
    uVar19 = FUN_00173db4(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa_register DWARF unwind, reg too big\n";
      goto LAB_001734c4;
    }
    *param_6 = (int)uVar19;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xe:
    uVar7 = FUN_00173db4(apbStack_6a0 + 0xc0,pbVar2);
    param_6[1] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xf:
    *param_6 = 0;
    *(byte **)(param_6 + 2) = pbVar10;
    goto LAB_00173358;
  case 0x10:
    uVar19 = FUN_00173db4(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_expression DWARF unwind, reg too big\n";
      goto LAB_001735ac;
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
LAB_00173350:
    puVar12[6] = uVar7;
    *(byte **)(puVar12 + 8) = apbStack_6a0[0xc0];
LAB_00173358:
    lVar8 = FUN_00173db4(apbStack_6a0 + 0xc0,pbVar2);
    apbStack_6a0[0xc0] = apbStack_6a0[0xc0] + lVar8;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x11:
    uVar19 = FUN_00173db4(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_0017d7f0;
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended_sf DWARF unwind, reg too big\n";
      __size = 0x49;
      __s = (FILE *)(PTR___sF_0017d7f0 + 0x130);
      goto LAB_001735d4;
    }
    uVar14 = 0;
    uVar11 = 0;
    pbVar21 = apbStack_6a0[0xc0];
    pbVar10 = apbStack_6a0[0xc0];
    do {
      if (pbVar10 == pbVar2) {
        fprintf((FILE *)(PTR___sF_0017d7f0 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
LAB_001732e4:
    puVar12[6] = uVar7;
    *(ulong *)(puVar12 + 8) = uVar11 * (long)iVar13;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x12:
    uVar14 = FUN_00173db4(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_0017d7f0;
    uVar19 = 0;
    uVar11 = 0;
    pbVar21 = apbStack_6a0[0xc0];
    pbVar10 = apbStack_6a0[0xc0];
    do {
      if (pbVar10 == pbVar2) {
        fprintf((FILE *)(PTR___sF_0017d7f0 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      goto LAB_001735ac;
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
        fprintf((FILE *)(PTR___sF_0017d7f0 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
    uVar19 = FUN_00173db4(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      fprintf((FILE *)(PTR___sF_0017d7f0 + 0x130),
              "libunwind: malformed DW_CFA_val_offset DWARF unwind, reg (%lu) out of range\n\n",
              uVar19);
      goto LAB_001735dc;
    }
    lVar8 = FUN_00173db4(apbStack_6a0 + 0xc0,pbVar2);
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
    uVar19 = FUN_00173db4(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_0017d7f0;
    if (uVar19 < 0x60) {
      uVar14 = 0;
      uVar11 = 0;
      pbVar21 = apbStack_6a0[0xc0];
      pbVar10 = apbStack_6a0[0xc0];
      do {
        if (pbVar10 == pbVar2) {
          fprintf((FILE *)(PTR___sF_0017d7f0 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      goto LAB_001732e4;
    }
    __ptr = "libunwind: malformed DW_CFA_val_offset_sf DWARF unwind, reg too big\n";
    __size = 0x44;
    __s = (FILE *)(PTR___sF_0017d7f0 + 0x130);
    goto LAB_001735d4;
  case 0x16:
    uVar19 = FUN_00173db4(apbStack_6a0 + 0xc0,pbVar2);
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
      goto LAB_00173350;
    }
    __ptr = "libunwind: malformed DW_CFA_val_expression DWARF unwind, reg too big\n";
    __size = 0x45;
    __s = (FILE *)(PTR___sF_0017d7f0 + 0x130);
    goto LAB_001735d4;
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
        goto joined_r0x00173404;
      }
      if (bVar1 != 0x80) {
        return 0;
      }
      local_6dc = param_5;
      lVar8 = FUN_00173db4(apbStack_6a0 + 0xc0,pbVar2);
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
    if (param_5 != 4) goto code_r0x00173424;
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
    uVar7 = FUN_00173db4(apbStack_6a0 + 0xc0,pbVar2);
    param_6[4] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x2f:
    uVar19 = FUN_00173db4(apbStack_6a0 + 0xc0,pbVar2);
    if (uVar19 < 0x60) {
      lVar8 = FUN_00173db4(apbStack_6a0 + 0xc0,pbVar2);
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
      goto LAB_00172f74;
    }
    __ptr = "libunwind: malformed DW_CFA_GNU_negative_offset_extended DWARF unwind, reg too big\n";
    __size = 0x53;
    __s = (FILE *)(PTR___sF_0017d7f0 + 0x130);
LAB_001735d4:
    fwrite(__ptr,__size,1,__s);
LAB_001735dc:
    fflush((FILE *)(PTR___sF_0017d7f0 + 0x130));
    return 0;
  }
joined_r0x00172f0c:
  if ((pbVar2 <= pbVar21) || (uVar16 <= uVar17)) goto LAB_00172b20;
  goto LAB_00172b50;
code_r0x00173424:
  pbVar21 = apbStack_6a0[0xc0];
  goto joined_r0x00172f0c;
}


// ===== 001736e4  FUN_001736e4 =====

long FUN_001736e4(undefined8 param_1,uint *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR___sF_0017d7f0;
  uVar1 = *param_2;
  if ((int)uVar1 < 0x1e) {
    if ((int)uVar1 < 0) {
      if (uVar1 == 0xfffffffe) {
LAB_00173724:
        return *(long *)(param_3 + 0xf8) + (long)(int)param_2[1];
      }
      if (uVar1 == 0xffffffff) goto LAB_00173768;
    }
    else {
      if (uVar1 == 0) {
        lVar3 = FUN_00173f7c(*(undefined8 *)(param_2 + 2),param_1,param_3,0);
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
    if (uVar1 == 0x1f) goto LAB_00173724;
  }
  else {
    if (uVar1 == 0x22) {
      return *(long *)(param_3 + 0x108) + (long)(int)param_2[1];
    }
    if (uVar1 == 0x20) {
LAB_00173768:
      return *(long *)(param_3 + 0x100) + (long)(int)param_2[1];
    }
  }
  if (0x1c < uVar1) {
    fprintf((FILE *)(PTR___sF_0017d7f0 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(long *)(param_3 + (ulong)uVar1 * 8) + (long)(int)param_2[1];
}


// ===== 00173818  FUN_00173818 =====

undefined8 FUN_00173818(undefined8 param_1,long param_2,long param_3,int *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  puVar2 = PTR___sF_0017d7f0;
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
LAB_00173954:
          return *(undefined8 *)(param_2 + 0xf8);
        }
        if (uVar5 == 0xffffffff) goto LAB_0017393c;
        if (uVar5 == 0x1d) {
          return *(undefined8 *)(param_2 + 0xe8);
        }
      }
      else if ((int)uVar5 < 0x20) {
        if (uVar5 == 0x1e) {
          return *(undefined8 *)(param_2 + 0xf0);
        }
        if (uVar5 == 0x1f) goto LAB_00173954;
      }
      else {
        if (uVar5 == 0x22) {
          return *(undefined8 *)(param_2 + 0x108);
        }
        if (uVar5 == 0x20) {
LAB_0017393c:
          return *(undefined8 *)(param_2 + 0x100);
        }
      }
      if (0x1c < uVar5) {
        fprintf((FILE *)(PTR___sF_0017d7f0 + 0x130),"libunwind: %s - %s\n","getRegister",
                "unsupported arm64 register");
        fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      return *(undefined8 *)(param_2 + (*(ulong *)(param_4 + 2) & 0xffffffff) * 8);
    }
    if (iVar1 == 6) {
      puVar4 = (undefined8 *)FUN_00173f7c(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return *puVar4;
    }
    if (iVar1 == 7) {
      uVar3 = FUN_00173f7c(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return uVar3;
    }
  }
  fprintf((FILE *)(PTR___sF_0017d7f0 + 0x130),"libunwind: %s - %s\n","getSavedRegister",
          "unsupported restore location for register");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00173a28  FUN_00173a28 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_00173a28(undefined8 param_1,long *param_2,ulong *param_3,uint param_4,long param_5)

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
  
  puVar3 = PTR___sF_0017d7f0;
  uVar1 = param_4 & 0xf;
  puVar10 = (ulong *)*param_2;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      if ((param_4 & 0xf) == 0) goto LAB_00173b74;
      if (uVar1 != 1) {
LAB_00173d80:
        fprintf((FILE *)(PTR___sF_0017d7f0 + 0x130),"libunwind: %s - %s\n","getEncodedP",
                "unknown pointer encoding");
        fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar4 = (undefined8 *)FUN_00173db4(param_2,param_3);
      puVar3 = PTR___sF_0017d7f0;
    }
    else if (uVar1 == 2) {
      puVar4 = (undefined8 *)(ulong)(ushort)*puVar10;
      *param_2 = (long)puVar10 + 2;
      puVar3 = PTR___sF_0017d7f0;
    }
    else {
      if (uVar1 != 3) goto LAB_00173d80;
      puVar4 = (undefined8 *)(ulong)(uint)*puVar10;
      *param_2 = (long)((long)puVar10 + 4);
      puVar3 = PTR___sF_0017d7f0;
    }
  }
  else if (uVar1 < 10) {
    if (uVar1 == 4) {
LAB_00173b74:
      puVar4 = (undefined8 *)*puVar10;
      *param_2 = (long)(puVar10 + 1);
      puVar3 = PTR___sF_0017d7f0;
    }
    else {
      if (uVar1 != 9) goto LAB_00173d80;
      uVar7 = 0;
      uVar5 = 0;
      puVar6 = puVar10;
      puVar9 = puVar10;
      do {
        if (puVar9 == param_3) {
          fprintf((FILE *)(PTR___sF_0017d7f0 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      puVar3 = PTR___sF_0017d7f0;
    }
  }
  else if (uVar1 == 10) {
    puVar4 = (undefined8 *)(long)(short)*puVar10;
    *param_2 = (long)puVar10 + 2;
    puVar3 = PTR___sF_0017d7f0;
  }
  else {
    if (uVar1 != 0xb) {
      if (uVar1 != 0xc) goto LAB_00173d80;
      goto LAB_00173b74;
    }
    puVar4 = (undefined8 *)(long)(int)(uint)*puVar10;
    *param_2 = (long)((long)puVar10 + 4);
    puVar3 = PTR___sF_0017d7f0;
  }
  uVar1 = (param_4 & 0xff) >> 4 & 7;
  PTR___sF_0017d7f0 = puVar3;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
      if (uVar1 != 1) goto LAB_00173d4c;
      puVar4 = (undefined8 *)((long)puVar4 + (long)puVar10);
    }
LAB_00173c00:
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
      goto LAB_00173c00;
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
LAB_00173d4c:
  fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP","unknown pointer encoding");
  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00173db4  FUN_00173db4 =====

ulong FUN_00173db4(long *param_1,byte *param_2)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  puVar2 = PTR___sF_0017d7f0;
  pbVar4 = (byte *)*param_1;
  if (pbVar4 != param_2) {
    pbVar5 = pbVar4 + 1;
    uVar3 = (ulong)*pbVar4 & 0x7f;
    if (-1 < (char)*pbVar4) {
LAB_00173de4:
      *param_1 = (long)pbVar5;
      return uVar3;
    }
    if (pbVar5 != param_2) {
      uVar3 = uVar3 | (ulong)((int)(char)pbVar4[1] & 0x7f) << 7;
      pbVar5 = pbVar4 + 2;
      if (-1 < (char)pbVar4[1]) goto LAB_00173de4;
      if (pbVar5 != param_2) {
        uVar3 = uVar3 | (ulong)((int)(char)pbVar4[2] & 0x7f) << 0xe;
        pbVar5 = pbVar4 + 3;
        if (-1 < (char)pbVar4[2]) goto LAB_00173de4;
        if (pbVar5 != param_2) {
          uVar3 = uVar3 | (ulong)((int)(char)pbVar4[3] & 0x7f) << 0x15;
          pbVar5 = pbVar4 + 4;
          if (-1 < (char)pbVar4[3]) goto LAB_00173de4;
          if (pbVar5 != param_2) {
            uVar3 = uVar3 | (ulong)((int)(char)pbVar4[4] & 0x7f) << 0x1c;
            pbVar5 = pbVar4 + 5;
            if (-1 < (char)pbVar4[4]) goto LAB_00173de4;
            if (pbVar5 != param_2) {
              uVar3 = uVar3 | (ulong)((int)(char)pbVar4[5] & 0x7f) << 0x23;
              pbVar5 = pbVar4 + 6;
              if (-1 < (char)pbVar4[5]) goto LAB_00173de4;
              if (pbVar5 != param_2) {
                uVar3 = uVar3 | (ulong)((int)(char)pbVar4[6] & 0x7f) << 0x2a;
                pbVar5 = pbVar4 + 7;
                if (-1 < (char)pbVar4[6]) goto LAB_00173de4;
                if (pbVar5 != param_2) {
                  uVar3 = uVar3 | (ulong)((int)(char)pbVar4[7] & 0x7f) << 0x31;
                  pbVar5 = pbVar4 + 8;
                  if (-1 < (char)pbVar4[7]) goto LAB_00173de4;
                  if (pbVar5 != param_2) {
                    uVar3 = uVar3 | (ulong)((int)(char)pbVar4[8] & 0x7f) << 0x38;
                    pbVar5 = pbVar4 + 9;
                    if (-1 < (char)pbVar4[8]) goto LAB_00173de4;
                    if (pbVar5 != param_2) {
                      bVar1 = *pbVar5;
                      if ((bVar1 & 0x7e) == 0) {
                        if (-1 < (char)bVar1) {
                          *param_1 = (long)(pbVar4 + 10);
                          return uVar3 | (ulong)bVar1 << 0x3f;
                        }
                        if (pbVar4 + 10 == param_2) goto LAB_00173f14;
                      }
                      fprintf((FILE *)(PTR___sF_0017d7f0 + 0x130),"libunwind: %s - %s\n",
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
LAB_00173f14:
  fprintf((FILE *)(PTR___sF_0017d7f0 + 0x130),"libunwind: %s - %s\n","getULEB128",
          "truncated uleb128 expression");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00173f7c  FUN_00173f7c =====

ulong FUN_00173f7c(byte *param_1,undefined8 param_2,long param_3,ulong param_4)

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
  lVar11 = FUN_00173db4(&local_68,param_1 + 0x14);
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
      puVar9 = PTR___sF_0017d7f0;
      pbVar13 = pbVar18 + 1;
      local_68 = pbVar13;
      bVar8 = *pbVar18;
      uVar10 = (uint)bVar8;
      if (0x91 < uVar10 - 3) {
code_r0x001747f8:
        fprintf((FILE *)(PTR___sF_0017d7f0 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
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
        goto LAB_00174464;
      case 4:
      case 5:
      case 7:
        goto code_r0x001747f8;
      case 6:
        puVar14 = (ulong *)*puVar19;
LAB_001743f4:
        *puVar19 = *puVar14;
        goto LAB_00174000;
      case 8:
        uVar16 = (ulong)pbVar18[1];
        goto LAB_001743c8;
      case 9:
        uVar16 = (ulong)(char)pbVar18[1];
LAB_001743c8:
        local_68 = pbVar18 + 2;
        goto LAB_00174464;
      case 10:
        uVar16 = (ulong)*(ushort *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_00174464;
      case 0xb:
        uVar16 = (ulong)*(short *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_00174464;
      case 0xc:
        uVar16 = (ulong)*(uint *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_00174464;
      case 0xd:
        uVar16 = (ulong)*(int *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_00174464;
      case 0x10:
        uVar16 = FUN_00173db4(&local_68,pbVar6);
        puVar19 = puVar19 + 1;
        *puVar19 = uVar16;
        goto LAB_00174000;
      case 0x11:
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = pbVar13;
        do {
          if (pbVar18 == pbVar6) {
            fprintf((FILE *)(PTR___sF_0017d7f0 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
        goto LAB_00174000;
      case 0x12:
        uVar16 = *puVar19;
        goto LAB_00173ffc;
      case 0x13:
        puVar19 = puVar19 + -1;
        goto LAB_00174000;
      case 0x14:
        uVar16 = puVar19[-1];
        goto LAB_00173ffc;
      case 0x15:
        local_68 = pbVar18 + 2;
        uVar16 = puVar19[-(ulong)pbVar18[1]];
LAB_00174464:
LAB_00173ffc:
        puVar19[1] = uVar16;
        puVar19 = puVar19 + 1;
        goto LAB_00174000;
      case 0x16:
        auVar20 = NEON_ext(*(undefined1 (*) [16])(puVar19 + -1),*(undefined1 (*) [16])(puVar19 + -1)
                           ,8,1);
        *puVar19 = auVar20._8_8_;
        puVar19[-1] = auVar20._0_8_;
        goto LAB_00174000;
      case 0x17:
        uVar16 = *puVar19;
        *puVar19 = SUB168(*(undefined1 (*) [16])(puVar19 + -2),8);
        puVar19[-1] = SUB168(*(undefined1 (*) [16])(puVar19 + -2),0);
        puVar19[-2] = uVar16;
        goto LAB_00174000;
      case 0x18:
        puVar14 = (ulong *)*puVar19;
        puVar19 = puVar19 + -1;
        *puVar19 = *puVar14;
        goto LAB_00174000;
      case 0x19:
        uVar16 = *puVar19;
        if ((long)uVar16 < 0) goto LAB_0017459c;
        goto LAB_00174000;
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
LAB_0017459c:
        *puVar19 = -uVar16;
        goto LAB_00174000;
      case 0x20:
        *puVar19 = ~*puVar19;
        goto LAB_00174000;
      case 0x21:
        uVar16 = puVar19[-1] | *puVar19;
        break;
      case 0x22:
        uVar16 = puVar19[-1] + *puVar19;
        break;
      case 0x23:
        lVar11 = FUN_00173db4(&local_68,pbVar6);
        *puVar19 = *puVar19 + lVar11;
        goto LAB_00174000;
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
        goto LAB_00174000;
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
        goto LAB_00174000;
      default:
        uVar16 = (ulong)(uVar15 - 0x30);
        goto LAB_00173ffc;
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
        goto LAB_00173ff8;
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
            fprintf((FILE *)(PTR___sF_0017d7f0 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
             (puVar14 = puVar2, bVar8 != 0x8d)) goto LAB_00174138;
        }
        else if (bVar8 < 0x90) {
          puVar14 = puVar1;
          if ((bVar8 != 0x8e) && (puVar14 = puVar4, uVar15 != 0x8f)) {
LAB_00174138:
            if (0x1c < uVar10 - 0x70) {
              fprintf((FILE *)(PTR___sF_0017d7f0 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((bVar8 != 0x90) && (puVar14 = puVar3, bVar8 != 0x92)) goto LAB_00174138;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_00173ffc;
      case 0x90:
        uVar10 = FUN_00173db4(&local_68,pbVar6);
        puVar9 = PTR___sF_0017d7f0;
        if ((int)uVar10 < 0x1e) {
          if (((uVar10 != 0xfffffffe) && (puVar14 = puVar5, uVar10 != 0xffffffff)) &&
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_0017469c;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_0017469c:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_0017d7f0 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_0017469c;
        }
LAB_00173ff8:
        uVar16 = *puVar14;
        goto LAB_00173ffc;
      case 0x91:
        fprintf((FILE *)(PTR___sF_0017d7f0 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
                "DW_OP_fbreg not implemented");
        fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x92:
        uVar10 = FUN_00173db4(&local_68,pbVar6);
        puVar9 = PTR___sF_0017d7f0;
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = local_68;
        pbVar13 = local_68;
        do {
          if (pbVar13 == pbVar6) {
            fprintf((FILE *)(PTR___sF_0017d7f0 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_001746c4;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_001746c4:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_0017d7f0 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_001746c4;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_00173ffc;
      case 0x93:
        fprintf((FILE *)(PTR___sF_0017d7f0 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
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
LAB_0017489c:
              fprintf((FILE *)(PTR___sF_0017d7f0 + 0x130),"libunwind: %s - %s\n",
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
            if (bVar8 != 8) goto LAB_0017489c;
            goto LAB_001743f4;
          }
          *puVar19 = (ulong)(uint)*puVar14;
        }
        goto LAB_00174000;
      }
      puVar19[-1] = uVar16;
      puVar19 = puVar19 + -1;
LAB_00174000:
      pbVar18 = local_68;
    } while (local_68 < pbVar6);
    param_4 = *puVar19;
  }
  return param_4;
}


// ===== 00174938  FUN_00174938 =====

undefined8 FUN_00174938(long param_1,ulong param_2,long *param_3,uint param_4)

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
      (uVar3 = FUN_00174e60(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],
                            param_3[2] + (ulong)param_4,&local_6b0,auStack_6e8), (uVar3 & 1) == 0))
     && ((param_3[4] == 0 ||
         (uVar3 = FUN_00175028(*(undefined8 *)(param_1 + 8),param_2,param_3[4],(int)param_3[5],
                               &local_6b0,auStack_6e8), (uVar3 & 1) == 0)))) {
    lVar5 = *param_3;
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_001829b4);
    if (PTR_DAT_00181f68 < PTR_DAT_00181f70) {
      plVar4 = (long *)PTR_DAT_00181f68;
      if (lVar5 == -1) {
        do {
          if (((ulong)plVar4[1] <= param_2) && (param_2 < (ulong)plVar4[2])) goto LAB_00174a40;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_00181f70);
      }
      else {
        do {
          if (((*plVar4 == lVar5) && ((ulong)plVar4[1] <= param_2)) && (param_2 < (ulong)plVar4[2]))
          goto LAB_00174a40;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_00181f70);
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001829b4);
    goto LAB_00174a88;
  }
LAB_00174aa8:
  bVar2 = 1;
LAB_00174aac:
  lVar5 = *param_3;
  memset(auStack_680,0,0x618);
  uVar3 = FUN_00172a9c(*(undefined8 *)(param_1 + 8),&local_6b0,auStack_6e8,param_2,4,auStack_680);
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
      pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_001829b4);
      __src = PTR_DAT_00181f68;
      if (DAT_00181f78 <= PTR_DAT_00181f70) {
        __n = (long)DAT_00181f78 - (long)PTR_DAT_00181f68;
        __dest = (undefined *)malloc(__n * 4);
        memcpy(__dest,__src,__n);
        if ((undefined8 *)__src != &DAT_001829f0) {
          free(__src);
        }
        DAT_00181f78 = __dest + ((long)__n >> 3) * 0x20;
        PTR_DAT_00181f70 = __dest + __n;
        PTR_DAT_00181f68 = __dest;
      }
      *(long *)PTR_DAT_00181f70 = lVar5;
      *(long *)((long)PTR_DAT_00181f70 + 8) = local_698;
      *(long *)((long)PTR_DAT_00181f70 + 0x18) = local_6b0;
      *(long *)((long)PTR_DAT_00181f70 + 0x10) = local_690;
      PTR_DAT_00181f70 = (undefined *)((long)PTR_DAT_00181f70 + 0x20);
      pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001829b4);
      return 1;
    }
    return 1;
  }
  return 1;
LAB_00174a40:
  lVar5 = plVar4[3];
  pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001829b4);
  if ((lVar5 != 0) &&
     (uVar3 = FUN_00174e60(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],lVar5,
                           &local_6b0,auStack_6e8), (uVar3 & 1) != 0)) {
    bVar2 = 0;
    goto LAB_00174aac;
  }
LAB_00174a88:
  uVar3 = FUN_00174e60(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],0,&local_6b0,
                       auStack_6e8);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  goto LAB_00174aa8;
}


// ===== 00174c0c  FUN_00174c0c =====

undefined8 FUN_00174c0c(ulong *param_1,undefined8 param_2,undefined8 *param_3)

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
              uVar5 = FUN_00174d40(uVar2,lVar8,lVar9 + lVar8,local_70);
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


// ===== 00174d40  FUN_00174d40 =====

undefined8 FUN_00174d40(undefined8 param_1,byte *param_2,byte *param_3,undefined8 *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  byte *local_28;
  
  puVar3 = PTR___sF_0017d7f0;
  if ((ulong)((long)param_3 - (long)param_2) < 4) {
    if (param_3 == param_2) {
      return 0;
    }
    fprintf((FILE *)(PTR___sF_0017d7f0 + 0x130),
            "libunwind: unsupported .eh_frame_hdr at %lx: need at least 4 bytes of data but only got %zd\n"
            ,param_2);
  }
  else {
    if (*param_2 == 1) {
      local_28 = param_2 + 4;
      bVar1 = param_2[2];
      bVar2 = param_2[1];
      *(byte *)(param_4 + 3) = param_2[3];
      uVar4 = FUN_00173a28(param_1,&local_28,param_3,bVar2,param_2);
      *param_4 = uVar4;
      if (bVar1 == 0xff) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_00173a28(param_1,&local_28,param_3,bVar1,param_2);
      }
      param_4[1] = uVar4;
      param_4[2] = local_28;
      return 1;
    }
    fprintf((FILE *)(PTR___sF_0017d7f0 + 0x130),
            "libunwind: unsupported .eh_frame_hdr version: %u at %lx\n",(ulong)(uint)*param_2,
            param_2);
  }
  fflush((FILE *)(puVar3 + 0x130));
  return 0;
}


// ===== 00174e60  FUN_00174e60 =====

undefined8
FUN_00174e60(undefined8 param_1,ulong param_2,uint *param_3,long param_4,uint *param_5,
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
        (puVar7 < puVar9)) && (lVar4 = FUN_00171bd0(param_1,puVar7,param_7), lVar4 == 0)) {
      local_68 = local_68 + 1;
      uVar8 = FUN_00173a28(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x18),0);
      lVar4 = FUN_00173a28(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x18) & 0xf,0);
      if ((uVar8 < param_2) && (param_2 <= lVar4 + uVar8)) {
        cVar2 = *(char *)(param_7 + 0x31);
        param_6[5] = 0;
        puVar9 = local_68;
        if (cVar2 != '\0') {
          lVar5 = FUN_00173db4(&local_68,puVar1);
          puVar7 = local_68;
          puVar9 = (uint *)((long)local_68 + lVar5);
          if ((*(byte *)(param_7 + 0x19) != 0xff) &&
             (lVar5 = FUN_00173a28(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x19) & 0xf,0),
             lVar5 != 0)) {
            local_68 = puVar7;
            uVar6 = FUN_00173a28(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x19),0);
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


// ===== 00175028  FUN_00175028 =====

undefined8
FUN_00175028(undefined8 param_1,ulong param_2,long param_3,ulong param_4,long param_5,
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
  uVar1 = FUN_00174d40(param_1,param_3,lVar4,auStack_80);
  if (((uVar1 & 1) != 0) && (local_78 != 0)) {
    lVar2 = FUN_00175190(local_68);
    lVar7 = 0;
    do {
      if (local_78 < 2) {
        lVar8 = lVar7 * lVar2;
        break;
      }
      uVar6 = local_78 >> 1;
      lVar8 = (uVar6 + lVar7) * lVar2;
      local_88 = local_70 + lVar8;
      uVar1 = FUN_00173a28(param_1,&local_88,lVar4,local_68,param_3);
      uVar5 = local_78 - uVar6;
      local_78 = uVar6;
      if (uVar1 < param_2) {
        local_78 = uVar5;
        lVar7 = uVar6 + lVar7;
      }
    } while (uVar1 != param_2);
    local_88 = local_70 + lVar8;
    FUN_00173a28(param_1,&local_88,lVar4,local_68,param_3);
    uVar3 = FUN_00173a28(param_1,&local_88,lVar4,local_68,param_3);
    lVar4 = FUN_00171a40(param_1,uVar3,param_5,param_6,0);
    if (((lVar4 == 0) && (*(ulong *)(param_5 + 0x18) <= param_2)) &&
       (param_2 < *(ulong *)(param_5 + 0x20))) {
      return 1;
    }
  }
  return 0;
}


// ===== 00175190  FUN_00175190 =====

undefined8 FUN_00175190(uint param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_0017d7f0;
  param_1 = param_1 & 0xf;
  if (param_1 < 9) {
    if (param_1 < 3) {
      if (param_1 == 2) {
        return 4;
      }
      if (param_1 == 1) {
LAB_00175258:
        fprintf((FILE *)(PTR___sF_0017d7f0 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
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
    if (param_1 == 9) goto LAB_00175258;
  }
  else {
    if (param_1 == 0xc) {
      return 0x10;
    }
    if (param_1 == 0xb) {
      return 8;
    }
  }
  fprintf((FILE *)(PTR___sF_0017d7f0 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
          "Unknown DWARF encoding for search table.");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0017528c  FUN_0017528c =====

char * FUN_0017528c(int param_1)

{
  if (param_1 + 2U < 0x62) {
    return &DAT_00116254 + *(int *)(&DAT_00116254 + (ulong)(param_1 + 2U) * 4);
  }
  return "unknown register";
}


// ===== 001752bc  FUN_001752bc =====

undefined1  [16] FUN_001752bc(undefined1 (*param_1) [16])

{
  return *param_1;
}


// ===== 0017534c  FUN_0017534c =====

undefined8
FUN_0017534c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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


// ===== 001753f0  FUN_001753f0 =====

void FUN_001753f0(void)

{
  (*(code *)PTR_0017d8b0)();
  return;
}


// ===== 00175410  <EXTERNAL>::__cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_0017d8b8)();
  return;
}


// ===== 00175420  <EXTERNAL>::__cxa_atexit =====

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_0017d8c0)();
  return;
}


// ===== 00175430  <EXTERNAL>::__stack_chk_fail =====

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_0017d8c8)();
  return;
}


// ===== 00175440  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0017d8d0)();
  return;
}


// ===== 00175450  <EXTERNAL>::lseek64 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off64_t lseek64(int __fd,__off64_t __offset,int __whence)

{
  __off64_t _Var1;
  
  _Var1 = (*(code *)PTR_lseek64_0017d8d8)(__fd,__offset,__whence);
  return _Var1;
}


// ===== 00175460  WebPGetInfo =====

void WebPGetInfo(void)

{
  (*(code *)PTR_WebPGetInfo_0017d8e0)();
  return;
}


// ===== 00175470  WebPInitDecoderConfigInternal =====

void WebPInitDecoderConfigInternal(void)

{
  (*(code *)PTR_WebPInitDecoderConfigInternal_0017d8e8)();
  return;
}


// ===== 00175480  <EXTERNAL>::AndroidBitmap_lockPixels =====

void AndroidBitmap_lockPixels(void)

{
  (*(code *)PTR_AndroidBitmap_lockPixels_0017d8f0)();
  return;
}


// ===== 00175490  WebPDecode =====

void WebPDecode(void)

{
  (*(code *)PTR_WebPDecode_0017d8f8)();
  return;
}


// ===== 001754a0  <EXTERNAL>::AndroidBitmap_unlockPixels =====

void AndroidBitmap_unlockPixels(void)

{
  (*(code *)PTR_AndroidBitmap_unlockPixels_0017d900)();
  return;
}


// ===== 001754b0  __cxa_guard_acquire =====

void __cxa_guard_acquire(void)

{
  (*(code *)PTR___cxa_guard_acquire_0017d908)();
  return;
}


// ===== 001754c0  __cxa_guard_release =====

void __cxa_guard_release(void)

{
  (*(code *)PTR___cxa_guard_release_0017d910)();
  return;
}


// ===== 001754d0  operator.new =====

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_0017d918)();
  return pvVar1;
}


// ===== 001754e0  <EXTERNAL>::memcpy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0017d920)();
  return pvVar1;
}


// ===== 001754f0  <EXTERNAL>::memmove =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0017d928)();
  return pvVar1;
}


// ===== 00175500  <EXTERNAL>::memset =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0017d930)(__s,__c);
  return pvVar1;
}


// ===== 00175510  <EXTERNAL>::vsnprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsnprintf_0017d938)((int)__s);
  return iVar1;
}


// ===== 00175520  WebPDemuxInternal =====

void WebPDemuxInternal(void)

{
  (*(code *)PTR_WebPDemuxInternal_0017d940)();
  return;
}


// ===== 00175530  WebPDemuxGetI =====

void WebPDemuxGetI(void)

{
  (*(code *)PTR_WebPDemuxGetI_0017d948)();
  return;
}


// ===== 00175540  WebPDemuxGetFrame =====

void WebPDemuxGetFrame(void)

{
  (*(code *)PTR_WebPDemuxGetFrame_0017d950)();
  return;
}


// ===== 00175550  WebPDemuxNextFrame =====

void WebPDemuxNextFrame(void)

{
  (*(code *)PTR_WebPDemuxNextFrame_0017d958)();
  return;
}


// ===== 00175560  WebPDemuxReleaseIterator =====

void WebPDemuxReleaseIterator(void)

{
  (*(code *)PTR_WebPDemuxReleaseIterator_0017d960)();
  return;
}


// ===== 00175570  WebPDemuxDelete =====

void WebPDemuxDelete(void)

{
  (*(code *)PTR_WebPDemuxDelete_0017d968)();
  return;
}


// ===== 00175580  <EXTERNAL>::AndroidBitmap_getInfo =====

void AndroidBitmap_getInfo(void)

{
  (*(code *)PTR_AndroidBitmap_getInfo_0017d970)();
  return;
}


// ===== 00175590  WebPGetFeaturesInternal =====

void WebPGetFeaturesInternal(void)

{
  (*(code *)PTR_WebPGetFeaturesInternal_0017d978)();
  return;
}


// ===== 001755a0  WebPSafeFree =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void WebPSafeFree(void *__ptr)

{
  (*(code *)PTR_WebPSafeFree_0017d980)();
  return;
}


// ===== 001755b0  WebPSafeCalloc =====

void WebPSafeCalloc(void)

{
  (*(code *)PTR_WebPSafeCalloc_0017d988)();
  return;
}


// ===== 001755c0  WebPSafeMalloc =====

void WebPSafeMalloc(void)

{
  (*(code *)PTR_WebPSafeMalloc_0017d990)();
  return;
}


// ===== 001755d0  WebPInitDecBufferInternal =====

void WebPInitDecBufferInternal(void)

{
  (*(code *)PTR_WebPInitDecBufferInternal_0017d998)();
  return;
}


// ===== 001755e0  WebPFreeDecBuffer =====

void WebPFreeDecBuffer(void)

{
  (*(code *)PTR_WebPFreeDecBuffer_0017d9a0)();
  return;
}


// ===== 001755f0  WebPCopyPlane =====

void WebPCopyPlane(void)

{
  (*(code *)PTR_WebPCopyPlane_0017d9a8)();
  return;
}


// ===== 00175600  WebPGetWorkerInterface =====

void WebPGetWorkerInterface(void)

{
  (*(code *)PTR_WebPGetWorkerInterface_0017d9b0)();
  return;
}


// ===== 00175610  WebPINewYUVA =====

void WebPINewYUVA(void)

{
  (*(code *)PTR_WebPINewYUVA_0017d9b8)();
  return;
}


// ===== 00175620  VP8GetInfo =====

void VP8GetInfo(void)

{
  (*(code *)PTR_VP8GetInfo_0017d9c0)();
  return;
}


// ===== 00175630  <EXTERNAL>::pthread_mutex_lock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_0017d9c8)((int)__mutex);
  return iVar1;
}


// ===== 00175640  <EXTERNAL>::pthread_mutex_unlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_0017d9d0)((int)__mutex);
  return iVar1;
}


// ===== 00175650  VP8LCheckSignature =====

void VP8LCheckSignature(void)

{
  (*(code *)PTR_VP8LCheckSignature_0017d9d8)();
  return;
}


// ===== 00175660  VP8LGetInfo =====

void VP8LGetInfo(void)

{
  (*(code *)PTR_VP8LGetInfo_0017d9e0)();
  return;
}


// ===== 00175670  <EXTERNAL>::__memcpy_chk =====

void __memcpy_chk(void)

{
  (*(code *)PTR___memcpy_chk_0017d9e8)();
  return;
}


// ===== 00175680  <EXTERNAL>::pthread_mutex_init =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_0017d9f0)((int)__mutex);
  return iVar1;
}


// ===== 00175690  <EXTERNAL>::pthread_cond_init =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_init(pthread_cond_t *__cond,pthread_condattr_t *__cond_attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_init_0017d9f8)((int)__cond);
  return iVar1;
}


// ===== 001756a0  <EXTERNAL>::pthread_mutex_destroy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_0017da00)((int)__mutex);
  return iVar1;
}


// ===== 001756b0  <EXTERNAL>::pthread_cond_wait =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_wait_0017da08)((int)__cond);
  return iVar1;
}


// ===== 001756c0  <EXTERNAL>::pthread_create =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0017da10)((int)__newthread);
  return iVar1;
}


// ===== 001756d0  <EXTERNAL>::pthread_cond_destroy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_destroy(pthread_cond_t *__cond)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_destroy_0017da18)((int)__cond);
  return iVar1;
}


// ===== 001756e0  <EXTERNAL>::pthread_cond_signal =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_signal(pthread_cond_t *__cond)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_signal_0017da20)((int)__cond);
  return iVar1;
}


// ===== 001756f0  <EXTERNAL>::pthread_join =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_0017da28)((int)__th);
  return iVar1;
}


// ===== 00175700  <EXTERNAL>::malloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0017da30)();
  return pvVar1;
}


// ===== 00175710  <EXTERNAL>::calloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0017da38)();
  return pvVar1;
}


// ===== 00175720  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0017da40)();
  return;
}


// ===== 00175730  <EXTERNAL>::dl_iterate_phdr =====

void dl_iterate_phdr(void)

{
  (*(code *)PTR_dl_iterate_phdr_0017da48)();
  return;
}


// ===== 00175740  <EXTERNAL>::strncmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0017da50)((int)__s1);
  return iVar1;
}


// ===== 00175750  <EXTERNAL>::posix_memalign =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int posix_memalign(void **__memptr,size_t __alignment,size_t __size)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_posix_memalign_0017da58)((int)__memptr);
  return iVar1;
}


// ===== 00175760  <EXTERNAL>::syslog =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void syslog(int __pri,char *__fmt,...)

{
  (*(code *)PTR_syslog_0017da60)(__pri);
  return;
}


// ===== 00175770  <EXTERNAL>::snprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0017da68)((int)__s);
  return iVar1;
}


// ===== 00175780  <EXTERNAL>::openlog =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void openlog(char *__ident,int __option,int __facility)

{
  (*(code *)PTR_openlog_0017da70)(__ident,__option,__facility);
  return;
}


// ===== 00175790  <EXTERNAL>::memchr =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memchr(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memchr_0017da78)(__s,__c);
  return pvVar1;
}


// ===== 001757a0  <EXTERNAL>::fwrite =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0017da80)();
  return sVar1;
}


// ===== 001757b0  <EXTERNAL>::realloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_0017da88)();
  return pvVar1;
}


// ===== 001757c0  <EXTERNAL>::pthread_getspecific =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * pthread_getspecific(pthread_key_t __key)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_pthread_getspecific_0017da90)(__key);
  return pvVar1;
}


// ===== 001757d0  <EXTERNAL>::pthread_rwlock_unlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_unlock_0017da98)((int)__rwlock);
  return iVar1;
}


// ===== 001757e0  <EXTERNAL>::__system_property_get =====

void __system_property_get(void)

{
  (*(code *)PTR___system_property_get_0017daa0)();
  return;
}


// ===== 001757f0  <EXTERNAL>::vfprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vfprintf_0017daa8)((int)__s);
  return iVar1;
}


// ===== 00175800  <EXTERNAL>::fprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0017dab0)((int)__stream);
  return iVar1;
}


// ===== 00175810  <EXTERNAL>::abort =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0017dab8)();
  return;
}


// ===== 00175820  <EXTERNAL>::closelog =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void closelog(void)

{
  (*(code *)PTR_closelog_0017dac0)();
  return;
}


// ===== 00175830  <EXTERNAL>::strlen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0017dac8)();
  return sVar1;
}


// ===== 00175840  <EXTERNAL>::getauxval =====

void getauxval(void)

{
  (*(code *)PTR_getauxval_0017dad0)();
  return;
}


// ===== 00175850  <EXTERNAL>::pthread_cond_broadcast =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_broadcast(pthread_cond_t *__cond)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_broadcast_0017dad8)((int)__cond);
  return iVar1;
}


// ===== 00175860  <EXTERNAL>::strcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0017dae0)((int)__s1);
  return iVar1;
}


// ===== 00175870  <EXTERNAL>::pthread_rwlock_rdlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_rdlock_0017dae8)((int)__rwlock);
  return iVar1;
}


// ===== 00175880  <EXTERNAL>::pthread_key_delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_key_delete(pthread_key_t __key)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_key_delete_0017daf0)(__key);
  return iVar1;
}


// ===== 00175890  <EXTERNAL>::pthread_setspecific =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_setspecific(pthread_key_t __key,void *__pointer)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_setspecific_0017daf8)(__key);
  return iVar1;
}


// ===== 001758a0  <EXTERNAL>::syscall =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_syscall_0017db00)();
  return lVar1;
}


// ===== 001758b0  <EXTERNAL>::pthread_once =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_once(pthread_once_t *__once_control,__init_routine *__init_routine)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_once_0017db08)((int)__once_control);
  return iVar1;
}


// ===== 001758c0  <EXTERNAL>::vasprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vasprintf(char **__ptr,char *__f,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vasprintf_0017db10)((int)__ptr);
  return iVar1;
}


// ===== 001758d0  <EXTERNAL>::pthread_rwlock_wrlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_wrlock_0017db18)((int)__rwlock);
  return iVar1;
}


// ===== 001758e0  <EXTERNAL>::android_set_abort_message =====

void android_set_abort_message(void)

{
  (*(code *)PTR_android_set_abort_message_0017db20)();
  return;
}


// ===== 001758f0  <EXTERNAL>::getpid =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_0017db28)();
  return _Var1;
}


// ===== 00175900  <EXTERNAL>::memcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_0017db30)((int)__s1);
  return iVar1;
}


// ===== 00175910  <EXTERNAL>::pthread_key_create =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_key_create(pthread_key_t *__key,__destr_function *__destr_function)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_key_create_0017db38)((int)__key);
  return iVar1;
}


// ===== 00175920  <EXTERNAL>::__assert2 =====

void __assert2(void)

{
  (*(code *)PTR___assert2_0017db40)();
  return;
}


// ===== 00175930  <EXTERNAL>::fflush =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_0017db48)((int)__stream);
  return iVar1;
}


// ===== 00175940  <EXTERNAL>::fputc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_0017db50)(__c);
  return iVar1;
}


// ===== 00175950  std::exception::~exception =====

void __thiscall std::exception::~exception(exception *this)

{
  (*(code *)PTR__exception_0017db58)();
  return;
}


// ===== 00175960  __cxa_begin_catch =====

void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_0017db60)();
  return;
}


// ===== 00175970  std::terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
  (*(code *)PTR_terminate_0017db68)();
  return;
}


// ===== 00175980  __cxa_get_globals =====

void __cxa_get_globals(void)

{
  (*(code *)PTR___cxa_get_globals_0017db70)();
  return;
}


// ===== 00175990  __cxa_get_globals_fast =====

void __cxa_get_globals_fast(void)

{
  (*(code *)PTR___cxa_get_globals_fast_0017db78)();
  return;
}


// ===== 001759a0  std::get_unexpected =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::get_unexpected(void)

{
  (*(code *)PTR_get_unexpected_0017db80)();
  return;
}


// ===== 001759b0  std::get_terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::get_terminate(void)

{
  (*(code *)PTR_get_terminate_0017db88)();
  return;
}


// ===== 001759c0  std::get_new_handler =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::get_new_handler(void)

{
  (*(code *)PTR_get_new_handler_0017db90)();
  return;
}


// ===== 001759d0  __cxa_demangle =====

void __cxa_demangle(void)

{
  (*(code *)PTR___cxa_demangle_0017db98)();
  return;
}


// ===== 001759e0  __emutls_get_address =====

void __emutls_get_address(void)

{
  (*(code *)PTR___emutls_get_address_0017dba0)();
  return;
}


// ===== 001759f0  std::exception::~exception =====

void __thiscall std::exception::~exception(exception *this)

{
  (*(code *)PTR__exception_0017dba8)();
  return;
}


// ===== 00175a00  std::exception::~exception =====

void __thiscall std::exception::~exception(exception *this)

{
  (*(code *)PTR__exception_0017dbb0)();
  return;
}


// ===== 00175a10  std::exception::~exception =====

void __thiscall std::exception::~exception(exception *this)

{
  (*(code *)PTR__exception_0017dbb8)();
  return;
}


// ===== 00175a20  std::exception::~exception =====

void __thiscall std::exception::~exception(exception *this)

{
  (*(code *)PTR__exception_0017dbc0)();
  return;
}


// ===== 00175a30  std::bad_alloc::bad_alloc =====

void __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
  (*(code *)PTR_bad_alloc_0017dbc8)();
  return;
}


// ===== 00175a40  std::type_info::~type_info =====

void __thiscall std::type_info::~type_info(type_info *this)

{
  (*(code *)PTR__type_info_0017dbd0)();
  return;
}


// ===== 00175a50  std::type_info::~type_info =====

void __thiscall std::type_info::~type_info(type_info *this)

{
  (*(code *)PTR__type_info_0017dbd8)();
  return;
}


// ===== 00175a60  std::bad_cast::~bad_cast =====

void __thiscall std::bad_cast::~bad_cast(bad_cast *this)

{
  (*(code *)PTR__bad_cast_0017dbe0)();
  return;
}


// ===== 00175a70  std::bad_typeid::~bad_typeid =====

void __thiscall std::bad_typeid::~bad_typeid(bad_typeid *this)

{
  (*(code *)PTR__bad_typeid_0017dbe8)();
  return;
}


// ===== 00175a80  __dynamic_cast =====

void __dynamic_cast(void)

{
  (*(code *)PTR___dynamic_cast_0017dbf0)();
  return;
}


// ===== 00175a90  __cxa_allocate_exception =====

void __cxa_allocate_exception(void)

{
  (*(code *)PTR___cxa_allocate_exception_0017dbf8)();
  return;
}


// ===== 00175aa0  __cxa_throw =====

void __cxa_throw(void)

{
  (*(code *)PTR___cxa_throw_0017dc00)();
  return;
}


// ===== 00175ab0  __cxa_end_catch =====

void __cxa_end_catch(void)

{
  (*(code *)PTR___cxa_end_catch_0017dc08)();
  return;
}


// ===== 00175ac0  operator.new[] =====

void * operator_new__(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new___0017dc10)();
  return pvVar1;
}


// ===== 00175ad0  operator.delete[] =====

void operator_delete__(void *param_1)

{
  (*(code *)PTR_operator_delete___0017dc18)();
  return;
}


// ===== 00175ae0  operator.new =====

void * operator_new(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_0017dc20)();
  return pvVar1;
}


// ===== 00175af0  operator.new[] =====

void * operator_new__(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new___0017dc28)();
  return pvVar1;
}


// ===== 00175b00  operator.delete =====

void operator_delete(void)

{
  (*(code *)PTR_operator_delete_0017dc30)();
  return;
}


// ===== 00175b10  operator.delete[] =====

void operator_delete__(void)

{
  (*(code *)PTR_operator_delete___0017dc38)();
  return;
}


// ===== 00175b20  __cxa_rethrow =====

void __cxa_rethrow(void)

{
  (*(code *)PTR___cxa_rethrow_0017dc40)();
  return;
}


// ===== 00184000  <EXTERNAL>::__cxa_finalize =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00184008  <EXTERNAL>::__cxa_atexit =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00184010  <EXTERNAL>::__stack_chk_fail =====

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00184018  <EXTERNAL>::lseek64 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off64_t lseek64(int __fd,__off64_t __offset,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00184020  <EXTERNAL>::AndroidBitmap_lockPixels =====

/* WARNING: Control flow encountered bad instruction data */

void AndroidBitmap_lockPixels(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00184028  <EXTERNAL>::AndroidBitmap_unlockPixels =====

/* WARNING: Control flow encountered bad instruction data */

void AndroidBitmap_unlockPixels(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00184030  <EXTERNAL>::memcpy =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00184038  <EXTERNAL>::memmove =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00184040  <EXTERNAL>::memset =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00184048  <EXTERNAL>::vsnprintf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00184050  <EXTERNAL>::AndroidBitmap_getInfo =====

/* WARNING: Control flow encountered bad instruction data */

void AndroidBitmap_getInfo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00184058  <EXTERNAL>::pthread_mutex_lock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00184060  <EXTERNAL>::pthread_mutex_unlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00184068  <EXTERNAL>::__memcpy_chk =====

/* WARNING: Control flow encountered bad instruction data */

void __memcpy_chk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00184070  <EXTERNAL>::pthread_mutex_init =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00184078  <EXTERNAL>::pthread_cond_init =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_init(pthread_cond_t *__cond,pthread_condattr_t *__cond_attr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00184080  <EXTERNAL>::pthread_mutex_destroy =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00184088  <EXTERNAL>::pthread_cond_wait =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00184090  <EXTERNAL>::pthread_create =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00184098  <EXTERNAL>::pthread_cond_destroy =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_destroy(pthread_cond_t *__cond)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001840a0  <EXTERNAL>::pthread_cond_signal =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_signal(pthread_cond_t *__cond)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001840a8  <EXTERNAL>::pthread_join =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001840b0  <EXTERNAL>::malloc =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001840b8  <EXTERNAL>::calloc =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001840c0  <EXTERNAL>::free =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001840c8  <EXTERNAL>::dl_iterate_phdr =====

/* WARNING: Control flow encountered bad instruction data */

void dl_iterate_phdr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001840d0  <EXTERNAL>::strncmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001840d8  <EXTERNAL>::posix_memalign =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int posix_memalign(void **__memptr,size_t __alignment,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001840e0  <EXTERNAL>::syslog =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void syslog(int __pri,char *__fmt,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001840e8  <EXTERNAL>::snprintf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001840f0  <EXTERNAL>::openlog =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void openlog(char *__ident,int __option,int __facility)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001840f8  <EXTERNAL>::memchr =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memchr(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00184100  <EXTERNAL>::fwrite =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00184108  <EXTERNAL>::realloc =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00184110  <EXTERNAL>::pthread_getspecific =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * pthread_getspecific(pthread_key_t __key)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00184118  <EXTERNAL>::pthread_rwlock_unlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00184120  <EXTERNAL>::__system_property_get =====

/* WARNING: Control flow encountered bad instruction data */

void __system_property_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00184128  <EXTERNAL>::vfprintf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00184130  <EXTERNAL>::fprintf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00184138  <EXTERNAL>::abort =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00184140  <EXTERNAL>::closelog =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void closelog(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00184148  <EXTERNAL>::strlen =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00184150  <EXTERNAL>::getauxval =====

/* WARNING: Control flow encountered bad instruction data */

void getauxval(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00184160  <EXTERNAL>::pthread_cond_broadcast =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_broadcast(pthread_cond_t *__cond)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00184168  <EXTERNAL>::strcmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00184170  <EXTERNAL>::pthread_rwlock_rdlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00184178  <EXTERNAL>::pthread_key_delete =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_key_delete(pthread_key_t __key)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00184180  <EXTERNAL>::pthread_setspecific =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_setspecific(pthread_key_t __key,void *__pointer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00184188  <EXTERNAL>::syscall =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00184190  <EXTERNAL>::pthread_once =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_once(pthread_once_t *__once_control,__init_routine *__init_routine)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00184198  <EXTERNAL>::vasprintf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vasprintf(char **__ptr,char *__f,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001841a0  <EXTERNAL>::pthread_rwlock_wrlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001841a8  <EXTERNAL>::android_set_abort_message =====

/* WARNING: Control flow encountered bad instruction data */

void android_set_abort_message(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001841b0  <EXTERNAL>::getpid =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001841b8  <EXTERNAL>::memcmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001841c0  <EXTERNAL>::pthread_key_create =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_key_create(pthread_key_t *__key,__destr_function *__destr_function)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001841c8  <EXTERNAL>::__assert2 =====

/* WARNING: Control flow encountered bad instruction data */

void __assert2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001841d0  <EXTERNAL>::fflush =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001841d8  <EXTERNAL>::fputc =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


