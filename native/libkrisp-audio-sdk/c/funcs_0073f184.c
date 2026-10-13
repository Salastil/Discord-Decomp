// ===== 0073f184  FUN_0073f184 =====

void FUN_0073f184(long param_1,undefined8 *param_2)

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
      FUN_00739f00();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x30;
  uVar3 = *param_2;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0079e170;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x15;
  *(char **)((long)puVar1 + lVar2 + 0x20) = "typeinfo name for ";
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = 0x12;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  return;
}


// ===== 0073f234  FUN_0073f234 =====

undefined8 FUN_0073f234(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar3 = (byte *)*param_1;
  pbVar1 = (byte *)param_1[1];
  if (pbVar3 == pbVar1) {
    return 1;
  }
  if (*pbVar3 == 0x68) {
    pbVar2 = pbVar3 + 1;
    *param_1 = (long)pbVar2;
    if (pbVar2 == pbVar1) {
      return 1;
    }
    pbVar4 = pbVar2;
    if (*pbVar2 == 0x6e) {
      pbVar4 = pbVar3 + 2;
      *param_1 = (long)pbVar4;
    }
    if (pbVar1 == pbVar4) {
      return 1;
    }
    if (*pbVar4 - 0x3a < 0xfffffff6) {
      return 1;
    }
    do {
      pbVar3 = pbVar4;
      if (*pbVar4 - 0x3a < 0xfffffff6) break;
      pbVar4 = pbVar4 + 1;
      *param_1 = (long)pbVar4;
      pbVar3 = pbVar1;
    } while (pbVar4 != pbVar1);
  }
  else {
    if (*pbVar3 != 0x76) {
      return 1;
    }
    pbVar2 = pbVar3 + 1;
    *param_1 = (long)pbVar2;
    if (pbVar2 == pbVar1) {
      return 1;
    }
    pbVar4 = pbVar2;
    if (*pbVar2 == 0x6e) {
      pbVar4 = pbVar3 + 2;
      *param_1 = (long)pbVar4;
    }
    if (pbVar1 == pbVar4) {
      return 1;
    }
    if (*pbVar4 - 0x3a < 0xfffffff6) {
      return 1;
    }
    do {
      pbVar3 = pbVar4;
      if (*pbVar4 - 0x3a < 0xfffffff6) break;
      pbVar4 = pbVar4 + 1;
      *param_1 = (long)pbVar4;
      pbVar3 = pbVar1;
    } while (pbVar4 != pbVar1);
    if (pbVar3 == pbVar2) {
      return 1;
    }
    if (pbVar3 == pbVar1) {
      return 1;
    }
    if (*pbVar3 != 0x5f) {
      return 1;
    }
    pbVar2 = pbVar3 + 1;
    *param_1 = (long)pbVar2;
    if (pbVar2 == pbVar1) {
      return 1;
    }
    pbVar4 = pbVar2;
    if (*pbVar2 == 0x6e) {
      pbVar4 = pbVar3 + 2;
      *param_1 = (long)pbVar4;
    }
    if (pbVar1 == pbVar4) {
      return 1;
    }
    if (*pbVar4 - 0x3a < 0xfffffff6) {
      return 1;
    }
    do {
      pbVar3 = pbVar4;
      if (*pbVar4 - 0x3a < 0xfffffff6) break;
      pbVar4 = pbVar4 + 1;
      *param_1 = (long)pbVar4;
      pbVar3 = pbVar1;
    } while (pbVar4 != pbVar1);
  }
  if (((pbVar3 != pbVar2) && (pbVar3 != pbVar1)) && (*pbVar3 == 0x5f)) {
    *param_1 = (long)(pbVar3 + 1);
    return 0;
  }
  return 1;
}


// ===== 0073f3e4  FUN_0073f3e4 =====

void FUN_0073f3e4(long param_1,undefined8 *param_2)

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
      FUN_00739f00();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x30;
  uVar3 = *param_2;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0079e170;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x15;
  *(char **)((long)puVar1 + lVar2 + 0x20) = "covariant return thunk to ";
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = 0x1a;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  return;
}


// ===== 0073f494  FUN_0073f494 =====

void FUN_0073f494(long param_1,undefined8 *param_2,undefined8 *param_3)

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
      FUN_00739f00();
    }
    lVar2 = 0;
    *puVar1 = pvVar5;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0079e1f0;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x16;
  uVar3 = *param_2;
  uVar4 = *param_3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar4;
  return;
}


// ===== 0073f53c  FUN_0073f53c =====

void FUN_0073f53c(long param_1,undefined8 *param_2)

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
      FUN_00739f00();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x30;
  uVar3 = *param_2;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0079e170;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x15;
  *(char **)((long)puVar1 + lVar2 + 0x20) = "thread-local initialization routine for ";
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = 0x28;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  return;
}


// ===== 0073f5ec  FUN_0073f5ec =====

void FUN_0073f5ec(long param_1,undefined8 *param_2)

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
      FUN_00739f00();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x30;
  uVar3 = *param_2;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0079e170;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x15;
  *(char **)((long)puVar1 + lVar2 + 0x20) = "virtual thunk to ";
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = 0x11;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  return;
}


// ===== 0073f69c  FUN_0073f69c =====

void FUN_0073f69c(long param_1,undefined8 *param_2)

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
      FUN_00739f00();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x30;
  uVar3 = *param_2;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0079e170;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x15;
  *(char **)((long)puVar1 + lVar2 + 0x20) = "non-virtual thunk to ";
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = 0x15;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  return;
}


// ===== 0073f748  FUN_0073f748 =====

void FUN_0073f748(long param_1,undefined8 *param_2)

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
      FUN_00739f00();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x30;
  uVar3 = *param_2;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0079e170;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x15;
  *(char **)((long)puVar1 + lVar2 + 0x20) = "reference temporary for ";
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = 0x18;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  return;
}


// ===== 0073f7f8  FUN_0073f7f8 =====

undefined8 FUN_0073f7f8(long *param_1,undefined8 *param_2)

{
  long *__src;
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  long *__ptr;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  char *pcVar7;
  size_t __n;
  undefined1 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  void *pvVar11;
  
  pcVar5 = (char *)*param_1;
  pcVar7 = (char *)param_1[1];
  if (pcVar5 != pcVar7) {
    __src = param_1 + 0x28;
    do {
      if (*pcVar5 != 'W') {
        return 0;
      }
      pcVar1 = pcVar5 + 1;
      *param_1 = (long)pcVar1;
      if ((pcVar1 == pcVar7) || (*pcVar1 != 'P')) {
        uVar8 = 0;
      }
      else {
        uVar8 = 1;
        *param_1 = (long)(pcVar5 + 2);
      }
      lVar2 = FUN_0073fc64(param_1);
      if (lVar2 == 0) {
        return 1;
      }
      pvVar11 = (void *)param_1[0x266];
      lVar6 = *(long *)((long)pvVar11 + 8);
      puVar3 = (undefined8 *)pvVar11;
      if (lVar6 - 0xfc0U < 0xfffffffffffff010) {
        puVar3 = (undefined8 *)malloc(0x1000);
        if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00739f00();
        }
        lVar6 = 0;
        *puVar3 = pvVar11;
        puVar3[1] = 0;
        param_1[0x266] = (long)puVar3;
      }
      uVar4 = *param_2;
      *(long *)((long)puVar3 + 8) = lVar6 + 0x30;
      puVar9 = (undefined8 *)((long)puVar3 + lVar6 + 0x10);
      *puVar9 = &PTR_FUN_0079e2d0;
      *(undefined8 *)((long)puVar3 + lVar6 + 0x20) = uVar4;
      *(long *)((long)puVar3 + lVar6 + 0x28) = lVar2;
      *(undefined1 *)((long)puVar3 + lVar6 + 0x18) = 0x1b;
      *(undefined1 *)((long)puVar3 + lVar6 + 0x30) = uVar8;
      *(ushort *)((long)puVar3 + lVar6 + 0x19) =
           *(ushort *)((long)puVar3 + lVar6 + 0x19) & 0xf000 | 0x540;
      *param_2 = puVar9;
      plVar10 = (long *)param_1[0x26];
      if (plVar10 == (long *)param_1[0x27]) {
        __ptr = (long *)param_1[0x25];
        __n = (long)plVar10 - (long)__ptr;
        if (__ptr == __src) {
          pvVar11 = malloc(__n * 2);
          if (pvVar11 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar10 != __src) {
            memcpy(pvVar11,__src,__n);
          }
          param_1[0x25] = (long)pvVar11;
        }
        else {
          pvVar11 = realloc(__ptr,__n * 2);
          param_1[0x25] = (long)pvVar11;
          if (pvVar11 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar10 = (long *)((long)pvVar11 + __n);
        param_1[0x27] = (long)((long)pvVar11 + ((long)__n >> 2) * 8);
      }
      param_1[0x26] = (long)(plVar10 + 1);
      *plVar10 = (long)puVar9;
      pcVar5 = (char *)*param_1;
      pcVar7 = (char *)param_1[1];
    } while (pcVar5 != pcVar7);
  }
  return 0;
}


// ===== 0073f9b8  FUN_0073f9b8 =====

undefined8 FUN_0073f9b8(void)

{
  return 0;
}


// ===== 0073f9c4  FUN_0073f9c4 =====

undefined8 FUN_0073f9c4(void)

{
  return 0;
}


// ===== 0073f9d0  FUN_0073f9d0 =====

undefined8 FUN_0073f9d0(void)

{
  return 0;
}


// ===== 0073f9dc  FUN_0073f9dc =====

void FUN_0073f9dc(void)

{
  return;
}


// ===== 0073f9e4  FUN_0073f9e4 =====

void FUN_0073f9e4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *__ptr;
  size_t __size;
  long lVar2;
  long *plVar3;
  size_t __n;
  void *__src;
  
  __n = *(size_t *)(param_1 + 0x18);
  if (__n != 0) {
    lVar2 = param_2[1];
    __ptr = (void *)*param_2;
    __src = *(void **)(param_1 + 0x10);
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
  plVar3 = *(long **)(param_1 + 0x20);
  (**(code **)(*plVar3 + 0x20))(plVar3,param_2);
  if ((*(ushort *)((long)plVar3 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0073fabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  return;
}


// ===== 0073fac4  FUN_0073fac4 =====

void FUN_0073fac4(void)

{
  return;
}


// ===== 0073facc  FUN_0073facc =====

undefined1  [16] FUN_0073facc(void)

{
  return ZEXT816(0);
}


// ===== 0073fadc  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0073fae4  FUN_0073fae4 =====

void FUN_0073fae4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  long lVar6;
  size_t sVar7;
  long *plVar8;
  
  lVar6 = param_2[1];
  pvVar5 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar6 + 0x18U) {
    sVar7 = param_2[2] * 2;
    uVar1 = lVar6 + 0x3f8;
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
  uVar4 = s_construction_vtable_for_001eeb1a._16_8_;
  uVar3 = s_construction_vtable_for_001eeb1a._0_8_;
  pcVar2 = (char *)((long)pvVar5 + lVar6);
  *(undefined8 *)(pcVar2 + 8) = s_construction_vtable_for_001eeb1a._8_8_;
  *(undefined8 *)pcVar2 = uVar3;
  *(undefined8 *)(pcVar2 + 0x10) = uVar4;
  plVar8 = *(long **)(param_1 + 0x10);
  lVar6 = *plVar8;
  param_2[1] = param_2[1] + 0x18;
  (**(code **)(lVar6 + 0x20))(plVar8,param_2);
  if ((*(ushort *)((long)plVar8 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
  }
  lVar6 = param_2[1];
  pvVar5 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar6 + 4U) {
    sVar7 = param_2[2] * 2;
    uVar1 = lVar6 + 0x3e4;
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
  *(undefined4 *)((long)pvVar5 + lVar6) = 0x2d6e692d;
  plVar8 = *(long **)(param_1 + 0x18);
  lVar6 = *plVar8;
  param_2[1] = param_2[1] + 4;
  (**(code **)(lVar6 + 0x20))(plVar8,param_2);
  if ((*(ushort *)((long)plVar8 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0073fc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
  return;
}


// ===== 0073fc5c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0073fc64  FUN_0073fc64 =====

undefined8 * FUN_0073fc64(undefined8 *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  
  pbVar1 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if ((pbVar2 == pbVar1) || (*pbVar1 - 0x3a < 0xfffffff6)) {
    return (undefined8 *)0x0;
  }
  pbVar3 = pbVar1 + 1;
  pbVar1 = pbVar1 + 1;
  uVar8 = 0;
  do {
    uVar7 = uVar8;
    pbVar5 = pbVar1;
    pcVar9 = (char *)pbVar3;
    *param_1 = pbVar5;
    lVar6 = (ulong)pbVar5[-1] + uVar7 * 10;
    uVar8 = lVar6 - 0x30;
    if (pbVar5 == pbVar2) break;
    pbVar3 = (byte *)pcVar9 + 1;
    pbVar1 = pbVar5 + 1;
  } while (*pbVar5 - 0x30 < 10);
  if ((ulong)((long)pbVar2 - (long)pcVar9) <= lVar6 - 0x31U) {
    return (undefined8 *)0x0;
  }
  *param_1 = pbVar5 + (ulong)pbVar5[-1] + uVar7 * 10 + -0x30;
  if ((uVar8 < 10) || (*(long *)pbVar5 != 0x5f4c41424f4c475f || *(short *)(pbVar5 + 8) != 0x4e5f)) {
    puVar10 = (undefined8 *)param_1[0x266];
    lVar6 = puVar10[1];
    if (0xfffffffffffff00f < lVar6 - 0xfd0U) goto LAB_0073fd6c;
    puVar4 = (undefined8 *)malloc(0x1000);
    if (puVar4 == (undefined8 *)0x0) goto LAB_0073fe0c;
    *puVar4 = puVar10;
    puVar4[1] = 0;
  }
  else {
    puVar10 = (undefined8 *)param_1[0x266];
    lVar6 = puVar10[1];
    if (0xfffffffffffff00f < lVar6 - 0xfd0U) {
      pcVar9 = "(anonymous namespace)";
      uVar8 = 0x15;
      goto LAB_0073fd6c;
    }
    puVar4 = (undefined8 *)malloc(0x1000);
    if (puVar4 == (undefined8 *)0x0) {
LAB_0073fe0c:
                    /* WARNING: Subroutine does not return */
      FUN_00739f00();
    }
    *puVar4 = puVar10;
    puVar4[1] = 0;
    pcVar9 = "(anonymous namespace)";
    uVar8 = 0x15;
  }
  lVar6 = 0;
  param_1[0x266] = puVar4;
  puVar10 = puVar4;
LAB_0073fd6c:
  puVar10[1] = lVar6 + 0x20;
  puVar4 = (undefined8 *)((long)puVar10 + lVar6 + 0x10);
  *puVar4 = &PTR_FUN_0079e260;
  *(char **)((long)puVar10 + lVar6 + 0x20) = pcVar9;
  *(ulong *)((long)puVar10 + lVar6 + 0x28) = uVar8;
  *(undefined1 *)((long)puVar10 + lVar6 + 0x18) = 8;
  *(ushort *)((long)puVar10 + lVar6 + 0x19) =
       *(ushort *)((long)puVar10 + lVar6 + 0x19) & 0xf000 | 0x540;
  return puVar4;
}


// ===== 0073fe10  FUN_0073fe10 =====

undefined8 FUN_0073fe10(long *param_1,long *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  
  pbVar1 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  *param_2 = 0;
  if ((pbVar2 != pbVar1) && (0xfffffff5 < *pbVar1 - 0x3a)) {
    if (*pbVar1 - 0x30 < 10) {
      lVar4 = 0;
      do {
        pbVar3 = pbVar1 + 1;
        *param_1 = (long)pbVar3;
        *param_2 = lVar4 * 10;
        lVar4 = lVar4 * 10 + (ulong)*pbVar1 + -0x30;
        *param_2 = lVar4;
        if (pbVar3 == pbVar2) {
          return 0;
        }
        pbVar1 = pbVar3;
      } while (*pbVar3 - 0x30 < 10);
    }
    return 0;
  }
  return 1;
}


// ===== 0073fe90  FUN_0073fe90 =====

void FUN_0073fe90(long param_1,undefined8 *param_2)

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
      FUN_00739f00();
    }
    lVar2 = 0;
    *puVar1 = pvVar3;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0079e260;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 8;
  uVar5 = param_2[1];
  uVar4 = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar5;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar4;
  return;
}


// ===== 0073ff30  FUN_0073ff30 =====

void FUN_0073ff30(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *__ptr;
  size_t __size;
  long lVar2;
  size_t __n;
  void *__src;
  
  __n = *(size_t *)(param_1 + 0x18);
  if (__n != 0) {
    lVar2 = param_2[1];
    __ptr = (void *)*param_2;
    __src = *(void **)(param_1 + 0x10);
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


// ===== 0073ffc4  FUN_0073ffc4 =====

undefined1  [16] FUN_0073ffc4(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x10);
}


// ===== 0073ffd4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0073ffdc  FUN_0073ffdc =====

void FUN_0073ffdc(long param_1,undefined8 *param_2)

{
  void *__ptr;
  long lVar1;
  size_t __size;
  ulong uVar2;
  undefined1 uVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x10);
  if ((plVar4 != (long *)0x0) &&
     ((**(code **)(*plVar4 + 0x20))(plVar4,param_2), (*(ushort *)((long)plVar4 + 9) & 0xc0) != 0x40)
     ) {
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  }
  if ((*(long *)(param_1 + 0x10) != 0) || (*(char *)(param_1 + 0x20) != '\0')) {
    lVar1 = param_2[1];
    __ptr = (void *)*param_2;
    uVar3 = 0x2e;
    if (*(char *)(param_1 + 0x20) != '\0') {
      uVar3 = 0x3a;
    }
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
    *(undefined1 *)((long)__ptr + lVar1) = uVar3;
  }
  plVar4 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
  if ((*(ushort *)((long)plVar4 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007400f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}


// ===== 00740100  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00740108  FUN_00740108 =====

long FUN_00740108(long *param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  short *psVar3;
  undefined8 *puVar4;
  void *pvVar5;
  
  psVar3 = (short *)*param_1;
  if (((ulong)(param_1[1] - (long)psVar3) < 2) || (*psVar3 != 0x7453)) {
    puVar4 = (undefined8 *)0x0;
    if ((short *)param_1[1] != psVar3) goto LAB_00740148;
  }
  else {
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(psVar3 + 1);
    lVar1 = *(long *)((long)pvVar5 + 8);
    puVar2 = (undefined8 *)pvVar5;
    if (lVar1 - 0xfd0U < 0xfffffffffffff010) {
      puVar2 = (undefined8 *)malloc(0x1000);
      if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00739f00();
      }
      lVar1 = 0;
      *puVar2 = pvVar5;
      puVar2[1] = 0;
      param_1[0x266] = (long)puVar2;
    }
    *(long *)((long)puVar2 + 8) = lVar1 + 0x20;
    puVar4 = (undefined8 *)((long)puVar2 + lVar1 + 0x10);
    *puVar4 = &PTR_FUN_0079e260;
    *(undefined8 *)((long)puVar2 + lVar1 + 0x28) = 3;
    *(ushort *)((long)puVar2 + lVar1 + 0x19) =
         *(ushort *)((long)puVar2 + lVar1 + 0x19) & 0xf000 | 0x540;
    *(undefined **)((long)puVar2 + lVar1 + 0x20) = &DAT_001ea8d8;
    *(undefined1 *)((long)puVar2 + lVar1 + 0x18) = 8;
    psVar3 = (short *)*param_1;
    if ((short *)param_1[1] != psVar3) {
LAB_00740148:
      if ((char)*psVar3 == 'S') {
        lVar1 = FUN_00740ce8(param_1,param_2);
        if (lVar1 == 0) {
          return 0;
        }
        if (*(char *)(lVar1 + 8) != '\x1b') {
          if (param_3 == (undefined1 *)0x0) {
            return 0;
          }
          if (puVar4 != (undefined8 *)0x0) {
            return 0;
          }
          *param_3 = 1;
          return lVar1;
        }
        goto LAB_00740230;
      }
    }
  }
  lVar1 = 0;
LAB_00740230:
  lVar1 = FUN_00740fc4(param_1,param_2,puVar4,lVar1);
  return lVar1;
}


// ===== 00740278  FUN_00740278 =====

undefined8 * FUN_00740278(long *param_1,ulong param_2)

{
  long *__src;
  ushort uVar1;
  long lVar2;
  char cVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  void *pvVar13;
  long lVar14;
  undefined8 *puVar15;
  ushort uVar16;
  long lVar17;
  char *pcVar18;
  long lVar19;
  char *pcVar20;
  long lVar21;
  size_t sVar22;
  long *plVar23;
  undefined1 auVar24 [16];
  
  pcVar18 = (char *)*param_1;
  pcVar20 = (char *)param_1[1];
  if ((pcVar18 == pcVar20) || (*pcVar18 != 'I')) {
    return (undefined8 *)0x0;
  }
  pcVar18 = pcVar18 + 1;
  *param_1 = (long)pcVar18;
  if ((param_2 & 1) != 0) {
    plVar10 = (long *)param_1[0x53];
    param_1[0x54] = (long)plVar10;
    if (plVar10 == (long *)param_1[0x55]) {
      if (plVar10 == param_1 + 0x56) {
        plVar10 = (long *)malloc(0);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        param_1[0x53] = (long)plVar10;
      }
      else {
        plVar10 = (long *)realloc(plVar10,0);
        param_1[0x53] = (long)plVar10;
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      param_1[0x54] = (long)plVar10;
      param_1[0x55] = (long)plVar10;
    }
    param_1[0x54] = (long)(plVar10 + 1);
    *plVar10 = (long)(param_1 + 0x48);
    pcVar18 = (char *)*param_1;
    pcVar20 = (char *)param_1[1];
    param_1[0x49] = param_1[0x48];
  }
  lVar19 = param_1[2];
  lVar2 = param_1[3];
  plVar10 = param_1 + 5;
  __src = param_1 + 0x4b;
LAB_00740350:
  if ((pcVar18 == pcVar20) || (*pcVar18 != 'E')) {
    puVar11 = (undefined8 *)FUN_0073e5f4(param_1);
    if ((param_2 & 1) == 0) {
      if (puVar11 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      plVar23 = (long *)param_1[3];
      if (plVar23 == (long *)param_1[4]) {
        plVar12 = (long *)param_1[2];
        sVar22 = (long)plVar23 - (long)plVar12;
        if (plVar12 == plVar10) {
          pvVar13 = malloc(sVar22 * 2);
          if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar23 != plVar10) {
            memcpy(pvVar13,plVar10,sVar22);
          }
          param_1[2] = (long)pvVar13;
        }
        else {
          pvVar13 = realloc(plVar12,sVar22 * 2);
          param_1[2] = (long)pvVar13;
          if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar23 = (long *)((long)pvVar13 + sVar22);
        param_1[3] = (long)plVar23;
        param_1[4] = (long)((long)pvVar13 + ((long)sVar22 >> 2) * 8);
      }
      param_1[3] = (long)(plVar23 + 1);
      goto LAB_0074060c;
    }
    if (puVar11 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    plVar23 = (long *)param_1[3];
    if (plVar23 == (long *)param_1[4]) {
      plVar12 = (long *)param_1[2];
      sVar22 = (long)plVar23 - (long)plVar12;
      if (plVar12 == plVar10) {
        pvVar13 = malloc(sVar22 * 2);
        if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (plVar23 != plVar10) {
          memcpy(pvVar13,plVar10,sVar22);
        }
        param_1[2] = (long)pvVar13;
      }
      else {
        pvVar13 = realloc(plVar12,sVar22 * 2);
        param_1[2] = (long)pvVar13;
        if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      plVar23 = (long *)((long)pvVar13 + sVar22);
      param_1[3] = (long)plVar23;
      param_1[4] = (long)((long)pvVar13 + ((long)sVar22 >> 2) * 8);
    }
    cVar3 = *(char *)(puVar11 + 1);
    param_1[3] = (long)(plVar23 + 1);
    *plVar23 = (long)puVar11;
    if (cVar3 != ')') {
      if (cVar3 == '\"') {
        puVar11 = (undefined8 *)puVar11[3];
      }
      goto LAB_00740548;
    }
    pvVar13 = (void *)param_1[0x266];
    plVar23 = (long *)puVar11[2];
    lVar14 = puVar11[3];
    lVar17 = *(long *)((long)pvVar13 + 8);
    puVar15 = (undefined8 *)pvVar13;
    if (lVar17 - 0xfd0U < 0xfffffffffffff010) {
      puVar15 = (undefined8 *)malloc(0x1000);
      if (puVar15 == (undefined8 *)0x0) goto LAB_0074072c;
      lVar17 = 0;
      *puVar15 = pvVar13;
      puVar15[1] = 0;
      param_1[0x266] = (long)puVar15;
    }
    *(long *)((long)puVar15 + 8) = lVar17 + 0x20;
    lVar21 = lVar14 << 3;
    puVar11 = (undefined8 *)((long)puVar15 + lVar17 + 0x10);
    *puVar11 = &PTR_FUN_007a0080;
    *(undefined1 *)((long)puVar15 + lVar17 + 0x18) = 0x28;
    uVar1 = *(ushort *)((long)puVar15 + lVar17 + 0x19) & 0xf000;
    *(long **)((long)puVar15 + lVar17 + 0x20) = plVar23;
    *(long *)((long)puVar15 + lVar17 + 0x28) = lVar14;
    uVar16 = uVar1 | 0xa80;
    *(ushort *)((long)puVar15 + lVar17 + 0x19) = uVar16;
    plVar12 = plVar23;
    lVar5 = lVar21;
    lVar8 = lVar14;
    while (plVar7 = plVar23, lVar6 = lVar21, lVar9 = lVar14, lVar8 != 0) {
      if ((*(ushort *)(*plVar12 + 9) & 0x300) != 0x100) goto joined_r0x007404e0;
      plVar12 = plVar12 + 1;
      lVar5 = lVar5 + -8;
      lVar8 = lVar5;
    }
    uVar16 = uVar1 | 0x980;
    *(ushort *)((long)puVar15 + lVar17 + 0x19) = uVar16;
joined_r0x007404e0:
    do {
      if (lVar9 == 0) goto LAB_0074050c;
      if ((*(ushort *)(*plVar7 + 9) & 0xc00) != 0x400) goto joined_r0x00740518;
      lVar6 = lVar6 + -8;
      plVar7 = plVar7 + 1;
      lVar9 = lVar6;
    } while( true );
  }
  lVar14 = 0;
  goto LAB_00740694;
LAB_0074050c:
  uVar16 = uVar16 & 0xf3ff | 0x400;
  *(ushort *)((long)puVar15 + lVar17 + 0x19) = uVar16;
joined_r0x00740518:
  do {
    if (lVar14 == 0) break;
    if ((*(ushort *)(*plVar23 + 9) & 0xc0) != 0x40) goto LAB_00740548;
    lVar21 = lVar21 + -8;
    plVar23 = plVar23 + 1;
    lVar14 = lVar21;
  } while( true );
  *(ushort *)((long)puVar15 + lVar17 + 0x19) = uVar16 & 0xff7f | 0x40;
LAB_00740548:
  plVar23 = (long *)param_1[0x49];
  if (plVar23 == (long *)param_1[0x4a]) {
    plVar12 = (long *)param_1[0x48];
    sVar22 = (long)plVar23 - (long)plVar12;
    if (plVar12 == __src) {
      pvVar13 = malloc(sVar22 * 2);
      if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (plVar23 != __src) {
        memcpy(pvVar13,__src,sVar22);
      }
      param_1[0x48] = (long)pvVar13;
    }
    else {
      pvVar13 = realloc(plVar12,sVar22 * 2);
      param_1[0x48] = (long)pvVar13;
      if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    plVar23 = (long *)((long)pvVar13 + sVar22);
    param_1[0x49] = (long)plVar23;
    param_1[0x4a] = (long)((long)pvVar13 + ((long)sVar22 >> 2) * 8);
  }
  param_1[0x49] = (long)(plVar23 + 1);
LAB_0074060c:
  *plVar23 = (long)puVar11;
  pcVar18 = (char *)*param_1;
  pcVar20 = (char *)param_1[1];
  if ((pcVar18 != pcVar20) && (*pcVar18 == 'Q')) {
    uVar4 = *(undefined1 *)((long)param_1 + 0x30a);
    *param_1 = (long)(pcVar18 + 1);
    *(undefined1 *)((long)param_1 + 0x30a) = 1;
                    /* try { // try from 0074063c to 00740643 has its CatchHandler @ 00740740 */
    lVar14 = FUN_00741a30(param_1);
    *(undefined1 *)((long)param_1 + 0x30a) = uVar4;
    if (lVar14 == 0) {
      return (undefined8 *)0x0;
    }
    pcVar18 = (char *)*param_1;
    if (pcVar18 == (char *)param_1[1]) {
      return (undefined8 *)0x0;
    }
    if (*pcVar18 != 'E') {
      return (undefined8 *)0x0;
    }
LAB_00740694:
    *param_1 = (long)(pcVar18 + 1);
    auVar24 = FUN_0073ea94(param_1,lVar2 - lVar19 >> 3);
    pvVar13 = (void *)param_1[0x266];
    lVar19 = *(long *)((long)pvVar13 + 8);
    puVar11 = (undefined8 *)pvVar13;
    if (lVar19 - 0xfc0U < 0xfffffffffffff010) {
      puVar11 = (undefined8 *)malloc(0x1000);
      if (puVar11 == (undefined8 *)0x0) {
LAB_0074072c:
                    /* WARNING: Subroutine does not return */
        FUN_00739f00();
      }
      lVar19 = 0;
      *puVar11 = pvVar13;
      puVar11[1] = 0;
      param_1[0x266] = (long)puVar11;
    }
    *(long *)((long)puVar11 + 8) = lVar19 + 0x30;
    puVar15 = (undefined8 *)((long)puVar11 + lVar19 + 0x10);
    *puVar15 = &PTR_FUN_007a00f0;
    *(undefined1 *)((long)puVar11 + lVar19 + 0x18) = 0x2b;
    *(undefined1 (*) [16])((long)puVar11 + lVar19 + 0x20) = auVar24;
    *(long *)((long)puVar11 + lVar19 + 0x30) = lVar14;
    *(ushort *)((long)puVar11 + lVar19 + 0x19) =
         *(ushort *)((long)puVar11 + lVar19 + 0x19) & 0xf000 | 0x540;
    return puVar15;
  }
  goto LAB_00740350;
}


// ===== 00740748  FUN_00740748 =====

void FUN_00740748(long param_1,undefined8 *param_2,undefined8 *param_3)

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
      FUN_00739f00();
    }
    lVar2 = 0;
    *puVar1 = pvVar5;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_007a0160;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x2d;
  uVar3 = *param_2;
  uVar4 = *param_3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar4;
  return;
}


// ===== 007407f0  FUN_007407f0 =====

undefined8 * FUN_007407f0(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  size_t __n;
  ulong uVar13;
  void *pvVar14;
  long *plVar15;
  undefined8 local_48;
  
  pbVar1 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if ((pbVar1 != pbVar2) && (*pbVar1 == 0x54)) {
    pbVar11 = pbVar1 + 1;
    *param_1 = (long)pbVar11;
    if (pbVar11 != pbVar2) {
      if (*pbVar11 == 0x4c) {
        pbVar11 = pbVar1 + 2;
        *param_1 = (long)pbVar11;
        if (pbVar2 == pbVar11) {
          return (undefined8 *)0x0;
        }
        if (*pbVar11 - 0x3a < 0xfffffff6) {
          return (undefined8 *)0x0;
        }
        lVar7 = 0;
        pbVar3 = pbVar1 + 4;
        do {
          pbVar11 = pbVar3;
          pbVar10 = pbVar11 + -1;
          *param_1 = (long)pbVar10;
          lVar8 = (ulong)pbVar11[-2] + lVar7 * 10;
          lVar7 = lVar8 + -0x30;
          if (pbVar10 == pbVar2) break;
          pbVar3 = pbVar11 + 1;
        } while (pbVar11[-1] - 0x30 < 10);
        if (pbVar10 == pbVar2) {
          return (undefined8 *)0x0;
        }
        if (pbVar11[-1] != 0x5f) {
          return (undefined8 *)0x0;
        }
        uVar9 = lVar8 - 0x2f;
        *param_1 = (long)pbVar11;
      }
      else {
        uVar9 = 0;
      }
      if (pbVar11 != pbVar2) {
        if (*pbVar11 == 0x5f) {
          uVar13 = 0;
        }
        else {
          if (*pbVar11 - 0x3a < 0xfffffff6) {
            return (undefined8 *)0x0;
          }
          lVar7 = 0;
          pbVar3 = pbVar11;
          do {
            pbVar11 = pbVar3 + 1;
            *param_1 = (long)pbVar11;
            lVar8 = (ulong)*pbVar3 + lVar7 * 10;
            lVar7 = lVar8 + -0x30;
            if (pbVar11 == pbVar2) break;
            pbVar3 = pbVar11;
          } while (*pbVar11 - 0x30 < 10);
          if (pbVar11 == pbVar2) {
            return (undefined8 *)0x0;
          }
          if (*pbVar11 != 0x5f) {
            return (undefined8 *)0x0;
          }
          uVar13 = lVar8 - 0x2f;
        }
        *param_1 = (long)(pbVar11 + 1);
        if (*(char *)((long)param_1 + 0x30a) == '\0') {
          if ((*(char *)((long)param_1 + 0x309) == '\0') || (uVar9 != 0)) {
            uVar6 = param_1[0x54] - param_1[0x53] >> 3;
            if ((uVar9 < uVar6) &&
               ((plVar15 = *(long **)(param_1[0x53] + uVar9 * 8), plVar15 != (long *)0x0 &&
                (uVar13 < (ulong)(plVar15[1] - *plVar15 >> 3))))) {
              return *(undefined8 **)(*plVar15 + uVar13 * 8);
            }
            if (uVar6 < uVar9) {
              return (undefined8 *)0x0;
            }
            if (param_1[0x62] == uVar9) {
              if (uVar9 == uVar6) {
                local_48 = 0;
                FUN_00741624(param_1 + 0x53,&local_48);
              }
              puVar4 = (undefined8 *)FUN_007416fc(param_1,&DAT_001bc1a0);
              return puVar4;
            }
            return (undefined8 *)0x0;
          }
          pvVar14 = (void *)param_1[0x266];
          lVar7 = *(long *)((long)pvVar14 + 8);
          puVar4 = (undefined8 *)pvVar14;
          if (lVar7 - 0xfc0U < 0xfffffffffffff010) {
            puVar4 = (undefined8 *)malloc(0x1000);
            if (puVar4 == (undefined8 *)0x0) {
LAB_00740bac:
                    /* WARNING: Subroutine does not return */
              FUN_00739f00();
            }
            lVar7 = 0;
            *puVar4 = pvVar14;
            puVar4[1] = 0;
            param_1[0x266] = (long)puVar4;
          }
          *(long *)((long)puVar4 + 8) = lVar7 + 0x30;
          puVar12 = (undefined8 *)((long)puVar4 + lVar7 + 0x10);
          *puVar12 = &PTR_FUN_0079e340;
          *(ulong *)((long)puVar4 + lVar7 + 0x20) = uVar13;
          *(undefined8 *)((long)puVar4 + lVar7 + 0x28) = 0;
          *(undefined1 *)((long)puVar4 + lVar7 + 0x30) = 0;
          *(ushort *)((long)puVar4 + lVar7 + 0x19) =
               *(ushort *)((long)puVar4 + lVar7 + 0x19) & 0xf000 | 0xa80;
          plVar15 = (long *)param_1[0x5b];
          plVar5 = (long *)param_1[0x5c];
          *(undefined1 *)((long)puVar4 + lVar7 + 0x18) = 0x2c;
          if (plVar15 == plVar5) {
            plVar5 = (long *)param_1[0x5a];
            __n = (long)plVar15 - (long)plVar5;
            if (plVar5 == param_1 + 0x5d) {
              pvVar14 = malloc(__n * 2);
              if (pvVar14 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              if (plVar15 != plVar5) {
                memmove(pvVar14,plVar5,__n);
              }
              param_1[0x5a] = (long)pvVar14;
            }
            else {
              pvVar14 = realloc(plVar5,__n * 2);
              param_1[0x5a] = (long)pvVar14;
              if (pvVar14 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
            }
            plVar15 = (long *)((long)pvVar14 + __n);
            param_1[0x5c] = (long)((long)pvVar14 + ((long)__n >> 2) * 8);
          }
          param_1[0x5b] = (long)(plVar15 + 1);
          *plVar15 = (long)puVar12;
          return puVar12;
        }
        pvVar14 = (void *)param_1[0x266];
        lVar7 = *(long *)((long)pvVar14 + 8);
        puVar4 = (undefined8 *)pvVar14;
        if (lVar7 - 0xfd0U < 0xfffffffffffff010) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_00740bac;
          lVar7 = 0;
          *puVar4 = pvVar14;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        *(long *)((long)puVar4 + 8) = lVar7 + 0x20;
        puVar12 = (undefined8 *)((long)puVar4 + lVar7 + 0x10);
        *puVar12 = &PTR_FUN_0079e260;
        *(undefined1 *)((long)puVar4 + lVar7 + 0x18) = 8;
        *(ushort *)((long)puVar4 + lVar7 + 0x19) =
             *(ushort *)((long)puVar4 + lVar7 + 0x19) & 0xf000 | 0x540;
        *(byte **)((long)puVar4 + lVar7 + 0x20) = pbVar1;
        *(long *)((long)puVar4 + lVar7 + 0x28) = (long)pbVar11 - (long)pbVar1;
        return puVar12;
      }
    }
  }
  return (undefined8 *)0x0;
}


// ===== 00740bb4  FUN_00740bb4 =====

undefined8 * FUN_00740bb4(long *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  void *pvVar7;
  
  pcVar2 = (char *)*param_1;
  if ((pcVar2 != (char *)param_1[1]) && (*pcVar2 == 'D')) {
    pcVar1 = pcVar2 + 1;
    *param_1 = (long)pcVar1;
    if ((pcVar1 != (char *)param_1[1]) && ((*pcVar1 == 't' || (*pcVar1 == 'T')))) {
      *param_1 = (long)(pcVar2 + 2);
      lVar3 = FUN_00741a30();
      if (lVar3 == 0) {
        return (undefined8 *)0x0;
      }
      pcVar2 = (char *)*param_1;
      if ((pcVar2 != (char *)param_1[1]) && (*pcVar2 == 'E')) {
        pvVar7 = (void *)param_1[0x266];
        *param_1 = (long)(pcVar2 + 1);
        lVar5 = *(long *)((long)pvVar7 + 8);
        puVar4 = (undefined8 *)pvVar7;
        if (lVar5 - 0xfb0U < 0xfffffffffffff010) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00739f00();
          }
          lVar5 = 0;
          *puVar4 = pvVar7;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        *(long *)((long)puVar4 + 8) = lVar5 + 0x40;
        puVar6 = (undefined8 *)((long)puVar4 + lVar5 + 0x10);
        *puVar6 = &PTR_FUN_0079ec60;
        *(undefined1 *)((long)puVar4 + lVar5 + 0x18) = 0x3c;
        *(long *)((long)puVar4 + lVar5 + 0x30) = lVar3;
        *(char **)((long)puVar4 + lVar5 + 0x20) = "decltype";
        *(undefined8 *)((long)puVar4 + lVar5 + 0x28) = 8;
        *(undefined8 *)((long)puVar4 + lVar5 + 0x38) = 0;
        *(undefined8 *)((long)puVar4 + lVar5 + 0x40) = 0;
        *(ushort *)((long)puVar4 + lVar5 + 0x19) =
             *(ushort *)((long)puVar4 + lVar5 + 0x19) & 0xf000 | 0x540;
        return puVar6;
      }
    }
  }
  return (undefined8 *)0x0;
}


// ===== 00740ce8  FUN_00740ce8 =====

undefined8 * FUN_00740ce8(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined4 uVar10;
  void *pvVar11;
  size_t __n;
  long *__src;
  long *plVar12;
  
  pbVar1 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if ((pbVar1 != pbVar2) && (*pbVar1 == 0x53)) {
    pbVar6 = pbVar1 + 1;
    *param_1 = (long)pbVar6;
    if (pbVar2 != pbVar6) {
      bVar3 = *pbVar6;
      uVar8 = (uint)bVar3;
      if (bVar3 < 0x61) {
        if (bVar3 == 0x5f) {
          *param_1 = (long)(pbVar1 + 2);
          if ((undefined8 *)param_1[0x25] == (undefined8 *)param_1[0x26]) {
            return (undefined8 *)0x0;
          }
          return *(undefined8 **)param_1[0x25];
        }
        if (uVar8 < 0x30) {
          return (undefined8 *)0x0;
        }
      }
      else if (uVar8 < 0x7b) {
        if (bVar3 < 0x69) {
          if (bVar3 == 0x61) {
            uVar10 = 0;
          }
          else if (bVar3 == 0x62) {
            uVar10 = 1;
          }
          else {
            if (uVar8 != 100) {
              return (undefined8 *)0x0;
            }
            uVar10 = 5;
          }
        }
        else if (bVar3 == 0x69) {
          uVar10 = 3;
        }
        else if (bVar3 == 0x6f) {
          uVar10 = 4;
        }
        else {
          if (bVar3 != 0x73) {
            return (undefined8 *)0x0;
          }
          uVar10 = 2;
        }
        pvVar11 = (void *)param_1[0x266];
        *param_1 = (long)(pbVar1 + 2);
        lVar7 = *(long *)((long)pvVar11 + 8);
        puVar4 = (undefined8 *)pvVar11;
        if (lVar7 - 0xfe0U < 0xfffffffffffff010) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00739f00();
          }
          lVar7 = 0;
          *puVar4 = pvVar11;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        *(long *)((long)puVar4 + 8) = lVar7 + 0x10;
        puVar4 = (undefined8 *)(lVar7 + 0x10 + (long)puVar4);
        *(undefined1 *)(puVar4 + 1) = 0x30;
        *(undefined4 *)((long)puVar4 + 0xc) = uVar10;
        *(ushort *)((long)puVar4 + 9) = *(ushort *)((long)puVar4 + 9) & 0xf000 | 0x540;
        *puVar4 = &PTR_FUN_0079fc90;
        puVar5 = (undefined8 *)FUN_0074dedc(param_1,puVar4);
        if (puVar5 != puVar4) {
          plVar12 = (long *)param_1[0x26];
          if (plVar12 == (long *)param_1[0x27]) {
            __src = (long *)param_1[0x25];
            __n = (long)plVar12 - (long)__src;
            if (__src == param_1 + 0x28) {
              pvVar11 = malloc(__n * 2);
              if (pvVar11 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              if (plVar12 != __src) {
                memmove(pvVar11,__src,__n);
              }
              param_1[0x25] = (long)pvVar11;
            }
            else {
              pvVar11 = realloc(__src,__n * 2);
              param_1[0x25] = (long)pvVar11;
              if (pvVar11 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
            }
            plVar12 = (long *)((long)pvVar11 + __n);
            param_1[0x27] = (long)((long)pvVar11 + ((long)__n >> 2) * 8);
          }
          param_1[0x26] = (long)(plVar12 + 1);
          *plVar12 = (long)puVar5;
          return puVar5;
        }
        return puVar4;
      }
      if ((uVar8 < 0x3a) || (uVar8 - 0x41 < 0x1a)) {
        lVar7 = 0;
        while( true ) {
          bVar3 = *pbVar6;
          if (bVar3 < 0x30) break;
          if (bVar3 < 0x3a) {
            lVar9 = -0x30;
          }
          else {
            if (0x19 < bVar3 - 0x41) break;
            lVar9 = -0x37;
          }
          pbVar6 = pbVar6 + 1;
          *param_1 = (long)pbVar6;
          lVar7 = (ulong)bVar3 + lVar7 * 0x24 + lVar9;
          if (pbVar6 == pbVar2) {
            return (undefined8 *)0x0;
          }
        }
        if ((pbVar6 != pbVar2) && (*pbVar6 == 0x5f)) {
          *param_1 = (long)(pbVar6 + 1);
          if (lVar7 + 1U < (ulong)(param_1[0x26] - param_1[0x25] >> 3)) {
            return *(undefined8 **)(param_1[0x25] + (lVar7 + 1U) * 8);
          }
        }
      }
    }
  }
  return (undefined8 *)0x0;
}


// ===== 00740fc4  FUN_00740fc4 =====

undefined8 * FUN_00740fc4(long *param_1,undefined1 *param_2,undefined8 *param_3,long param_4)

{
  long *__src;
  bool bVar1;
  char *pcVar2;
  undefined4 uVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *__ptr;
  bool bVar10;
  byte *pbVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  byte *pbVar15;
  undefined **ppuVar16;
  undefined1 uVar17;
  byte *pbVar18;
  void *pvVar19;
  size_t __n;
  long *plVar20;
  undefined1 auVar21 [16];
  long local_68;
  undefined8 *local_60;
  undefined1 local_58 [4];
  int local_54;
  
  local_68 = param_4;
  local_60 = param_3;
  uVar5 = FUN_0073f7f8(param_1,&local_68);
  if ((uVar5 & 1) != 0) goto LAB_00741000;
  pbVar11 = (byte *)*param_1;
  pbVar15 = (byte *)param_1[1];
  puVar7 = param_3;
  if (param_3 == (undefined8 *)0x0) {
LAB_0074103c:
    bVar1 = true;
joined_r0x00741044:
    if (pbVar11 == pbVar15) goto LAB_007411a8;
    if (*pbVar11 == 0x4c) {
      pbVar11 = pbVar11 + 1;
      *param_1 = (long)pbVar11;
    }
    if ((pbVar15 != pbVar11) && (bVar4 = *pbVar11, 0x30 < bVar4)) {
      if (bVar4 < 0x3a) {
        puVar6 = (undefined8 *)FUN_0073fc64(param_1);
      }
      else {
        if (bVar4 != 0x55) goto LAB_007410a4;
        puVar6 = (undefined8 *)FUN_007481d4(param_1,param_2);
      }
      goto LAB_007411b8;
    }
LAB_007410a4:
    if ((1 < (ulong)((long)pbVar15 - (long)pbVar11)) && (*(short *)pbVar11 == 0x4344)) {
      lVar14 = param_1[2];
      lVar12 = param_1[3];
      *param_1 = (long)(pbVar11 + 2);
      lVar9 = FUN_0073fc64(param_1);
      if (lVar9 == 0) {
        return (undefined8 *)0x0;
      }
      __src = param_1 + 5;
      while( true ) {
        plVar20 = (long *)param_1[3];
        if (plVar20 == (long *)param_1[4]) {
          __ptr = (long *)param_1[2];
          __n = (long)plVar20 - (long)__ptr;
          if (__ptr == __src) {
            pvVar19 = malloc(__n * 2);
            if (pvVar19 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (plVar20 != __src) {
              memcpy(pvVar19,__src,__n);
            }
            param_1[2] = (long)pvVar19;
          }
          else {
            pvVar19 = realloc(__ptr,__n * 2);
            param_1[2] = (long)pvVar19;
            if (pvVar19 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          plVar20 = (long *)((long)pvVar19 + __n);
          param_1[4] = (long)((long)pvVar19 + ((long)__n >> 2) * 8);
        }
        param_1[3] = (long)(plVar20 + 1);
        *plVar20 = lVar9;
        pcVar2 = (char *)*param_1;
        if ((pcVar2 != (char *)param_1[1]) && (*pcVar2 == 'E')) break;
        lVar9 = FUN_0073fc64(param_1);
        if (lVar9 == 0) {
          return (undefined8 *)0x0;
        }
      }
      *param_1 = (long)(pcVar2 + 1);
      auVar21 = FUN_0073ea94(param_1,lVar12 - lVar14 >> 3);
      pvVar19 = (void *)param_1[0x266];
      lVar14 = *(long *)((long)pvVar19 + 8);
      puVar8 = (undefined8 *)pvVar19;
      if (lVar14 - 0xfd0U < 0xfffffffffffff010) {
        puVar8 = (undefined8 *)malloc(0x1000);
        if (puVar8 == (undefined8 *)0x0) goto LAB_00741578;
        lVar14 = 0;
        *puVar8 = pvVar19;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar14 + 0x20;
      puVar6 = (undefined8 *)((long)puVar8 + lVar14 + 0x10);
      *puVar6 = &PTR_FUN_0079fde0;
      *(undefined1 (*) [16])((long)puVar8 + lVar14 + 0x20) = auVar21;
      *(undefined1 *)((long)puVar8 + lVar14 + 0x18) = 0x35;
      *(ushort *)((long)puVar8 + lVar14 + 0x19) =
           *(ushort *)((long)puVar8 + lVar14 + 0x19) & 0xf000 | 0x540;
      goto LAB_007411b8;
    }
    if ((pbVar15 == pbVar11) || (1 < *pbVar11 - 0x43)) goto LAB_007411a8;
    if (param_3 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    if (local_68 != 0) {
      return (undefined8 *)0x0;
    }
    if (*(char *)(param_3 + 1) == '0') {
      pvVar19 = (void *)param_1[0x266];
      lVar14 = *(long *)((long)pvVar19 + 8);
      puVar7 = (undefined8 *)pvVar19;
      if (lVar14 - 0xfe0U < 0xfffffffffffff010) {
        puVar7 = (undefined8 *)malloc(0x1000);
        if (puVar7 == (undefined8 *)0x0) goto LAB_00741578;
        lVar14 = 0;
        *puVar7 = pvVar19;
        puVar7[1] = 0;
        param_1[0x266] = (long)puVar7;
      }
      *(long *)((long)puVar7 + 8) = lVar14 + 0x10;
      puVar7 = (undefined8 *)(lVar14 + 0x10 + (long)puVar7);
      uVar3 = *(undefined4 *)((long)param_3 + 0xc);
      *(undefined1 *)(puVar7 + 1) = 0x2f;
      *puVar7 = &PTR_FUN_0079fd18;
      *(undefined4 *)((long)puVar7 + 0xc) = uVar3;
      *(ushort *)((long)puVar7 + 9) = *(ushort *)((long)puVar7 + 9) & 0xf000 | 0x540;
      pbVar11 = (byte *)*param_1;
      pbVar15 = (byte *)param_1[1];
      local_60 = puVar7;
    }
    if (pbVar11 != pbVar15) {
      if (*pbVar11 == 0x43) {
        pbVar18 = pbVar11 + 1;
        *param_1 = (long)pbVar18;
        if (pbVar18 == pbVar15) {
          bVar10 = false;
          pbVar18 = pbVar15;
        }
        else if (*pbVar18 == 0x49) {
          bVar10 = true;
          *param_1 = (long)(pbVar11 + 2);
          pbVar18 = pbVar11 + 2;
        }
        else {
          bVar10 = false;
        }
        if ((pbVar15 == pbVar18) || (4 < *pbVar18 - 0x31)) goto LAB_00741000;
        local_54 = *pbVar18 - 0x30;
        *param_1 = (long)(pbVar18 + 1);
        if (param_2 != (undefined1 *)0x0) {
          *param_2 = 1;
        }
        if ((bVar10) && (lVar14 = FUN_0073dec0(param_1,param_2), lVar14 == 0)) {
          puVar6 = (undefined8 *)0x0;
          goto LAB_007411b8;
        }
        local_58[0] = 0;
      }
      else {
        if ((ulong)((long)pbVar15 - (long)pbVar11) < 2) {
          return (undefined8 *)0x0;
        }
        if (*pbVar11 != 0x44) {
          return (undefined8 *)0x0;
        }
        bVar4 = pbVar11[1];
        if (0x35 < bVar4) {
          return (undefined8 *)0x0;
        }
        if ((1L << ((ulong)bVar4 & 0x3f) & 0x37000000000000U) == 0) {
          return (undefined8 *)0x0;
        }
        local_54 = bVar4 - 0x30;
        *param_1 = (long)(pbVar11 + 2);
        if (param_2 != (undefined1 *)0x0) {
          *param_2 = 1;
        }
        local_58[0] = 1;
      }
      puVar6 = (undefined8 *)FUN_0074e7b8(param_1,&local_60,local_58,&local_54);
      goto LAB_007411b8;
    }
LAB_00741000:
    puVar6 = (undefined8 *)0x0;
  }
  else {
    if (pbVar11 != pbVar15) {
      if (*pbVar11 != 0x46) goto LAB_0074103c;
      bVar1 = false;
      pbVar11 = pbVar11 + 1;
      *param_1 = (long)pbVar11;
      goto joined_r0x00741044;
    }
    bVar1 = true;
LAB_007411a8:
    puVar6 = (undefined8 *)FUN_0074d810(param_1,param_2);
LAB_007411b8:
    lVar14 = local_68;
    if ((puVar6 == (undefined8 *)0x0) || (local_68 == 0)) {
      if (puVar6 == (undefined8 *)0x0) goto LAB_00741000;
    }
    else {
      pvVar19 = (void *)param_1[0x266];
      lVar12 = *(long *)((long)pvVar19 + 8);
      puVar8 = (undefined8 *)pvVar19;
      if (lVar12 - 0xfd0U < 0xfffffffffffff010) {
        puVar8 = (undefined8 *)malloc(0x1000);
        if (puVar8 == (undefined8 *)0x0) goto LAB_00741578;
        lVar12 = 0;
        *puVar8 = pvVar19;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar12 + 0x20;
      puVar13 = (undefined8 *)((long)puVar8 + lVar12 + 0x10);
      *puVar13 = &PTR_FUN_0079fec0;
      *(long *)((long)puVar8 + lVar12 + 0x20) = lVar14;
      *(undefined8 **)((long)puVar8 + lVar12 + 0x28) = puVar6;
      *(undefined1 *)((long)puVar8 + lVar12 + 0x18) = 0x1c;
      *(ushort *)((long)puVar8 + lVar12 + 0x19) =
           *(ushort *)((long)puVar8 + lVar12 + 0x19) & 0xf000 | 0x540;
      puVar6 = puVar13;
    }
    puVar8 = (undefined8 *)FUN_0074dedc(param_1,puVar6);
    if (puVar8 == (undefined8 *)0x0) {
      bVar1 = true;
    }
    if (bVar1) {
      if (puVar7 == (undefined8 *)0x0) {
        return puVar8;
      }
      if (puVar8 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      pvVar19 = (void *)param_1[0x266];
      lVar14 = *(long *)((long)pvVar19 + 8);
      puVar6 = (undefined8 *)pvVar19;
      if (lVar14 - 0xfd0U < 0xfffffffffffff010) {
        puVar6 = (undefined8 *)malloc(0x1000);
        if (puVar6 == (undefined8 *)0x0) {
LAB_00741578:
                    /* WARNING: Subroutine does not return */
          FUN_00739f00();
        }
        lVar14 = 0;
        *puVar6 = pvVar19;
        puVar6[1] = 0;
        param_1[0x266] = (long)puVar6;
      }
      lVar12 = (long)puVar6 + lVar14;
      uVar17 = 0x18;
      *(long *)((long)puVar6 + 8) = lVar14 + 0x20;
      ppuVar16 = &PTR_FUN_0079ffa0;
    }
    else {
      pvVar19 = (void *)param_1[0x266];
      lVar14 = *(long *)((long)pvVar19 + 8);
      puVar6 = (undefined8 *)pvVar19;
      if (lVar14 - 0xfd0U < 0xfffffffffffff010) {
        puVar6 = (undefined8 *)malloc(0x1000);
        if (puVar6 == (undefined8 *)0x0) goto LAB_00741578;
        lVar14 = 0;
        *puVar6 = pvVar19;
        puVar6[1] = 0;
        param_1[0x266] = (long)puVar6;
      }
      lVar12 = (long)puVar6 + lVar14;
      uVar17 = 0x19;
      *(long *)((long)puVar6 + 8) = lVar14 + 0x20;
      ppuVar16 = &PTR_FUN_0079ff30;
    }
    puVar6 = (undefined8 *)(lVar12 + 0x10);
    *puVar6 = ppuVar16;
    *(undefined8 **)(lVar12 + 0x20) = puVar7;
    *(undefined8 **)(lVar12 + 0x28) = puVar8;
    *(undefined1 *)(lVar12 + 0x18) = uVar17;
    *(ushort *)(lVar12 + 0x19) = *(ushort *)(lVar12 + 0x19) & 0xf000 | 0x540;
  }
  return puVar6;
}


// ===== 00741584  FUN_00741584 =====

void FUN_00741584(long param_1,undefined8 *param_2)

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
      FUN_00739f00();
    }
    lVar2 = 0;
    *puVar1 = pvVar3;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0079e260;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 8;
  uVar5 = param_2[1];
  uVar4 = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar5;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar4;
  return;
}


// ===== 00741624  FUN_00741624 =====

void FUN_00741624(undefined8 *param_1,undefined8 *param_2)

{
  void *__dest;
  undefined8 uVar1;
  size_t __n;
  undefined8 *__src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 == (undefined8 *)param_1[2]) {
    __src = (undefined8 *)*param_1;
    __n = (long)puVar2 - (long)__src;
    if (__src == param_1 + 3) {
      __dest = malloc(__n * 2);
      if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (puVar2 != __src) {
        memmove(__dest,__src,__n);
      }
      *param_1 = __dest;
    }
    else {
      __dest = realloc(__src,__n * 2);
      *param_1 = __dest;
      if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    puVar2 = (undefined8 *)((long)__dest + __n);
    param_1[1] = puVar2;
    param_1[2] = (void *)((long)__dest + ((long)__n >> 2) * 8);
  }
  uVar1 = *param_2;
  param_1[1] = puVar2 + 1;
  *puVar2 = uVar1;
  return;
}


// ===== 007416fc  FUN_007416fc =====

undefined8 * FUN_007416fc(long param_1,char *param_2)

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
      FUN_00739f00();
    }
    lVar3 = 0;
    *puVar1 = pvVar5;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar3 + 0x20;
  sVar2 = strlen(param_2);
  puVar4 = (undefined8 *)((long)puVar1 + lVar3 + 0x10);
  *puVar4 = &PTR_FUN_0079e260;
  *(undefined1 *)((long)puVar1 + lVar3 + 0x18) = 8;
  *(char **)((long)puVar1 + lVar3 + 0x20) = param_2;
  *(size_t *)((long)puVar1 + lVar3 + 0x28) = sVar2;
  *(ushort *)((long)puVar1 + lVar3 + 0x19) =
       *(ushort *)((long)puVar1 + lVar3 + 0x19) & 0xf000 | 0x540;
  return puVar4;
}


// ===== 007417a8  FUN_007417a8 =====

byte FUN_007417a8(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    *(undefined1 *)(param_1 + 0x20) = 1;
    if ((*(byte *)((long)puVar2 + 9) & 0xc0) == 0x80) {
                    /* try { // try from 007417f0 to 007417f7 has its CatchHandler @ 00741824 */
      bVar1 = (**(code **)*puVar2)(puVar2);
    }
    else {
      bVar1 = *(byte *)((long)puVar2 + 9) < 0x40;
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}


// ===== 0074182c  FUN_0074182c =====

byte FUN_0074182c(long param_1)

{
  byte bVar1;
  long *plVar2;
  
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    plVar2 = *(long **)(param_1 + 0x18);
    *(undefined1 *)(param_1 + 0x20) = 1;
    if ((*(byte *)((long)plVar2 + 10) & 3) == 2) {
                    /* try { // try from 00741874 to 0074187b has its CatchHandler @ 007418a8 */
      bVar1 = (**(code **)(*plVar2 + 8))(plVar2);
    }
    else {
      bVar1 = (*(byte *)((long)plVar2 + 10) & 3) == 0;
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}


// ===== 007418b0  FUN_007418b0 =====

byte FUN_007418b0(long param_1)

{
  ushort uVar1;
  byte bVar2;
  long *plVar3;
  
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    plVar3 = *(long **)(param_1 + 0x18);
    *(undefined1 *)(param_1 + 0x20) = 1;
    uVar1 = *(ushort *)((long)plVar3 + 9) >> 10 & 3;
    if (uVar1 == 2) {
                    /* try { // try from 007418f8 to 007418ff has its CatchHandler @ 0074192c */
      bVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
    }
    else {
      bVar2 = uVar1 == 0;
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  else {
    bVar2 = 0;
  }
  return bVar2 & 1;
}


// ===== 00741934  FUN_00741934 =====

void FUN_00741934(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x20) = 1;
                    /* try { // try from 00741964 to 0074196b has its CatchHandler @ 00741980 */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(*(long **)(param_1 + 0x18));
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}


// ===== 00741988  FUN_00741988 =====

void FUN_00741988(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x20) = 1;
                    /* try { // try from 007419b8 to 007419bb has its CatchHandler @ 007419d0 */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}


// ===== 007419d8  FUN_007419d8 =====

void FUN_007419d8(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x20) = 1;
                    /* try { // try from 00741a08 to 00741a0b has its CatchHandler @ 00741a20 */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x28))();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}


// ===== 00741a28  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00741a30  FUN_00741a30 =====

/* WARNING: Type propagation algorithm not settling */

long * FUN_00741a30(long *param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  bool bVar4;
  bool bVar5;
  size_t sVar6;
  undefined8 *puVar7;
  long *__ptr;
  long lVar8;
  long *plVar9;
  void *pvVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long **pplVar15;
  ushort uVar16;
  int iVar17;
  byte *pbVar18;
  ushort uVar19;
  byte *pbVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long *plVar25;
  char *pcVar26;
  long *plVar27;
  byte *pbVar28;
  size_t sVar29;
  undefined1 uVar30;
  undefined1 auVar31 [16];
  byte local_9c [4];
  undefined1 local_98 [16];
  long *local_88;
  size_t sStack_80;
  long *local_78;
  undefined1 local_70 [16];
  undefined1 local_48 [4];
  int local_44;
  
  pbVar18 = (byte *)*param_1;
  pbVar28 = (byte *)param_1[1];
  uVar21 = (long)pbVar28 - (long)pbVar18;
  if (uVar21 < 2) goto LAB_00741a64;
  sVar3 = *(short *)pbVar18;
  if (sVar3 == 0x7367) {
    pbVar18 = pbVar18 + 2;
    uVar30 = 1;
    uVar21 = (long)pbVar28 - (long)pbVar18;
    *param_1 = (long)pbVar18;
    local_48[0] = 1;
    if (uVar21 < 2) goto LAB_00741a64;
  }
  else {
    uVar30 = 0;
    local_48[0] = 0;
  }
  uVar22 = 0;
  pbVar20 = pbVar18 + 1;
  bVar1 = *pbVar18;
  uVar23 = 0x3d;
  do {
    uVar24 = uVar22 + uVar23 >> 1;
    if ((byte)(&DAT_0079e3a0)[uVar24 * 0x10] < bVar1) {
      uVar22 = uVar24 + 1;
      uVar24 = uVar23;
    }
    else if (((&DAT_0079e3a0)[uVar24 * 0x10] == bVar1) &&
            ((byte)(&UNK_0079e3a1)[uVar24 * 0x10] < *pbVar20)) {
      uVar22 = uVar24 + 1;
      uVar24 = uVar23;
    }
    uVar23 = uVar24;
  } while (uVar24 != uVar22);
  lVar13 = uVar22 * 0x10;
  if (((&DAT_0079e3a0)[lVar13] != bVar1) || ((&UNK_0079e3a1)[lVar13] != *pbVar20)) {
    if (bVar1 == 0x66) {
      if ((*pbVar20 == 0x70) ||
         (((uVar21 != 2 && (*pbVar20 == 0x4c)) && (0xfffffff5 < pbVar18[2] - 0x3a)))) {
        puVar7 = (undefined8 *)FUN_00743d84(param_1);
        return puVar7;
      }
      if ((pbVar18 != pbVar28) && (*param_1 = (long)pbVar20, pbVar28 != pbVar20)) {
        bVar1 = *pbVar20;
        if (bVar1 < 0x6c) {
          if (bVar1 == 0x4c) {
            bVar5 = true;
            bVar4 = true;
          }
          else {
            if (bVar1 != 0x52) {
              return (undefined8 *)0x0;
            }
            bVar5 = false;
            bVar4 = true;
          }
        }
        else if (bVar1 == 0x6c) {
          bVar4 = false;
          bVar5 = true;
        }
        else {
          if (bVar1 != 0x72) {
            return (undefined8 *)0x0;
          }
          bVar5 = false;
          bVar4 = false;
        }
        *param_1 = (long)(pbVar18 + 2);
        if (1 < (ulong)((long)pbVar28 - (long)(pbVar18 + 2))) {
          bVar1 = pbVar18[2];
          uVar21 = 0;
          uVar22 = 0x3d;
          do {
            uVar23 = uVar21 + uVar22 >> 1;
            if ((byte)(&DAT_0079e3a0)[uVar23 * 0x10] < bVar1) {
              uVar21 = uVar23 + 1;
              uVar23 = uVar22;
            }
            else if (((&DAT_0079e3a0)[uVar23 * 0x10] == bVar1) &&
                    ((byte)(&UNK_0079e3a1)[uVar23 * 0x10] < pbVar18[3])) {
              uVar21 = uVar23 + 1;
              uVar23 = uVar22;
            }
            uVar22 = uVar23;
          } while (uVar23 != uVar21);
          lVar13 = uVar21 * 0x10;
          if (((&DAT_0079e3a0)[lVar13] == bVar1) && ((&UNK_0079e3a1)[lVar13] == pbVar18[3])) {
            cVar2 = (&UNK_0079e3a2)[lVar13];
            *param_1 = (long)(pbVar18 + 4);
            if ((cVar2 == '\x02') ||
               ((cVar2 == '\x04' &&
                (pcVar26 = *(char **)(&UNK_0079e3a8 + lVar13), sVar29 = strlen(pcVar26),
                pcVar26[sVar29 - 1] == '*')))) {
              lVar11 = FUN_00741a30(param_1);
              if (lVar11 == 0) {
                return (undefined8 *)0x0;
              }
              if (bVar4) {
                lVar12 = FUN_00741a30(param_1);
                if (lVar12 == 0) {
                  return (undefined8 *)0x0;
                }
                lVar8 = lVar12;
                if (!bVar5) {
                  lVar8 = lVar11;
                  lVar11 = lVar12;
                }
              }
              else {
                lVar8 = lVar11;
                lVar11 = 0;
              }
              plVar27 = *(long **)(&UNK_0079e3a8 + lVar13);
              sVar29 = strlen((char *)plVar27);
              if ((sVar29 < 8) || (*plVar27 != 0x726f74617265706f)) goto LAB_00742d68;
              lVar13 = sVar29 - 8;
              plVar25 = plVar27 + 1;
              if ((lVar13 != 0) && ((char)*plVar25 == ' ')) {
                plVar25 = (long *)((long)plVar27 + 9);
                lVar13 = sVar29 - 9;
              }
              pvVar10 = (void *)param_1[0x266];
              lVar12 = *(long *)((long)pvVar10 + 8);
              puVar7 = (undefined8 *)pvVar10;
              if (lVar12 - 0xfb0U < 0xfffffffffffff010) {
                puVar7 = (undefined8 *)malloc(0x1000);
                if (puVar7 == (undefined8 *)0x0) goto LAB_00742da8;
                lVar12 = 0;
                *puVar7 = pvVar10;
                puVar7[1] = 0;
                param_1[0x266] = (long)puVar7;
              }
              *(long *)((long)puVar7 + 8) = lVar12 + 0x40;
              puVar14 = (undefined8 *)((long)puVar7 + lVar12 + 0x10);
              *puVar14 = &PTR_FUN_0079f440;
              *(undefined1 *)((long)puVar7 + lVar12 + 0x18) = 0x47;
              *(long *)((long)puVar7 + lVar12 + 0x20) = lVar8;
              *(long *)((long)puVar7 + lVar12 + 0x28) = lVar11;
              *(long **)((long)puVar7 + lVar12 + 0x30) = plVar25;
              *(long *)((long)puVar7 + lVar12 + 0x38) = lVar13;
              *(ushort *)((long)puVar7 + lVar12 + 0x19) =
                   *(ushort *)((long)puVar7 + lVar12 + 0x19) & 0xf000 | 0x540;
              *(bool *)((long)puVar7 + lVar12 + 0x40) = bVar5;
              return puVar14;
            }
          }
        }
      }
      goto LAB_00741a64;
    }
    if (bVar1 == 0x54) {
      puVar7 = (undefined8 *)FUN_007407f0(param_1);
      return puVar7;
    }
    if (bVar1 == 0x4c) {
      puVar7 = (undefined8 *)FUN_00743404(param_1);
      return puVar7;
    }
    if (*(short *)pbVar18 == 0x6c69) {
      lVar13 = param_1[2];
      lVar11 = param_1[3];
      pbVar18 = pbVar18 + 2;
      plVar27 = param_1 + 5;
      *param_1 = (long)pbVar18;
      while ((pbVar18 == pbVar28 || (*pbVar18 != 0x45))) {
        lVar8 = FUN_00744140(param_1);
        if (lVar8 == 0) {
          return (undefined8 *)0x0;
        }
        plVar25 = (long *)param_1[3];
        if (plVar25 == (long *)param_1[4]) {
          plVar9 = (long *)param_1[2];
          sVar29 = (long)plVar25 - (long)plVar9;
          if (plVar9 == plVar27) {
            pvVar10 = malloc(sVar29 * 2);
            if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (plVar25 != plVar27) {
              memcpy(pvVar10,plVar27,sVar29);
            }
            param_1[2] = (long)pvVar10;
          }
          else {
            pvVar10 = realloc(plVar9,sVar29 * 2);
            param_1[2] = (long)pvVar10;
            if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          plVar25 = (long *)((long)pvVar10 + sVar29);
          param_1[3] = (long)plVar25;
          param_1[4] = (long)((long)pvVar10 + ((long)sVar29 >> 2) * 8);
        }
        param_1[3] = (long)(plVar25 + 1);
        *plVar25 = lVar8;
        pbVar28 = (byte *)param_1[1];
        pbVar18 = (byte *)*param_1;
      }
      *param_1 = (long)(pbVar18 + 1);
      local_70 = FUN_0073ea94(param_1,lVar11 - lVar13 >> 3);
      puVar7 = (undefined8 *)FUN_007443a8(param_1,local_70);
      return puVar7;
    }
    uVar21 = (long)pbVar28 - (long)pbVar18;
    if (1 < uVar21) {
      if (*(short *)pbVar18 == 0x636d) {
        *param_1 = (long)(pbVar18 + 2);
        puVar7 = (undefined8 *)FUN_0074444c(param_1);
        return puVar7;
      }
      if (*(short *)pbVar18 == 0x786e) {
        *param_1 = (long)(pbVar18 + 2);
        local_70._0_8_ = FUN_00741a30(param_1);
        if (local_70._0_8_ != 0) {
          local_88 = (long *)CONCAT44(local_88._4_4_,2);
          puVar7 = (undefined8 *)FUN_007445b4(param_1,local_70,&local_88);
          return puVar7;
        }
        return (undefined8 *)0x0;
      }
    }
    if (((pbVar28 == pbVar18) || (uVar21 < 2)) || (bVar1 != 0x72)) {
      if (1 < uVar21) goto LAB_00741ec8;
    }
    else {
      if ((*pbVar20 | 0x20) == 0x71) {
        puVar7 = (undefined8 *)FUN_00744674(param_1);
        return puVar7;
      }
LAB_00741ec8:
      if (*(short *)pbVar18 == 0x6f73) {
        *param_1 = (long)(pbVar18 + 2);
        puVar7 = (undefined8 *)FUN_00744b44(param_1);
        return puVar7;
      }
    }
    uVar21 = FUN_0073bdcc(param_1,&DAT_001e02d4,2);
    if ((uVar21 & 1) != 0) {
      local_70._0_8_ = FUN_00741a30(param_1);
      if (local_70._0_8_ != 0) {
        puVar7 = (undefined8 *)FUN_00744e98(param_1,local_70);
        return puVar7;
      }
      return (undefined8 *)0x0;
    }
    uVar21 = FUN_0073bdcc(param_1,&DAT_001c08cf,2);
    if ((uVar21 & 1) != 0) {
      if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'T')) {
        local_70._0_8_ = FUN_007407f0(param_1);
        if (local_70._0_8_ != 0) {
          puVar7 = (undefined8 *)FUN_00744f38(param_1,local_70);
          return puVar7;
        }
        return (undefined8 *)0x0;
      }
      local_70._0_8_ = FUN_00743d84(param_1);
      if (local_70._0_8_ == 0) {
        return (undefined8 *)0x0;
      }
LAB_00742a7c:
      puVar7 = (undefined8 *)FUN_00744fd8(param_1,local_70);
      return puVar7;
    }
    uVar21 = FUN_0073bdcc(param_1,&DAT_001c9426,2);
    if ((uVar21 & 1) != 0) {
      lVar13 = param_1[2];
      lVar11 = param_1[3];
      plVar27 = param_1 + 5;
      while ((pcVar26 = (char *)*param_1, pcVar26 == (char *)param_1[1] || (*pcVar26 != 'E'))) {
        lVar8 = FUN_0073e5f4(param_1);
        if (lVar8 == 0) {
          return (undefined8 *)0x0;
        }
        plVar25 = (long *)param_1[3];
        if (plVar25 == (long *)param_1[4]) {
          plVar9 = (long *)param_1[2];
          sVar29 = (long)plVar25 - (long)plVar9;
          if (plVar9 == plVar27) {
            pvVar10 = malloc(sVar29 * 2);
            if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (plVar25 != plVar27) {
              memcpy(pvVar10,plVar27,sVar29);
            }
            param_1[2] = (long)pvVar10;
          }
          else {
            pvVar10 = realloc(plVar9,sVar29 * 2);
            param_1[2] = (long)pvVar10;
            if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          plVar25 = (long *)((long)pvVar10 + sVar29);
          param_1[3] = (long)plVar25;
          param_1[4] = (long)((long)pvVar10 + ((long)sVar29 >> 2) * 8);
        }
        param_1[3] = (long)(plVar25 + 1);
        *plVar25 = lVar8;
      }
      *param_1 = (long)(pcVar26 + 1);
      local_70 = FUN_0073ea94(param_1,lVar11 - lVar13 >> 3);
      lVar13 = FUN_0074508c(param_1,local_70);
      local_70._0_8_ = lVar13;
      goto LAB_00742a7c;
    }
    uVar21 = FUN_0073bdcc(param_1,&DAT_001f0b02,2);
    if ((uVar21 & 1) != 0) {
      local_88 = (long *)FUN_0073c980(param_1);
      if (local_88 == (long *)0x0) {
        return (undefined8 *)0x0;
      }
      lVar13 = param_1[2];
      lVar11 = param_1[3];
      while ((pcVar26 = (char *)*param_1, pcVar26 == (char *)param_1[1] || (*pcVar26 != 'E'))) {
        local_70._0_8_ = FUN_00744140(param_1);
        if (local_70._0_8_ == 0) {
          return (undefined8 *)0x0;
        }
        FUN_0073e91c(param_1 + 2,local_70);
      }
      *param_1 = (long)(pcVar26 + 1);
      local_70 = FUN_0073ea94(param_1,lVar11 - lVar13 >> 3);
      puVar7 = (undefined8 *)FUN_00745128(param_1,&local_88,local_70);
      return puVar7;
    }
    uVar21 = FUN_0073bdcc(param_1,&DAT_001ec868,2);
    if ((uVar21 & 1) != 0) {
      puVar7 = (undefined8 *)FUN_007451d4(param_1,"throw");
      return puVar7;
    }
    uVar21 = FUN_0073bdcc(param_1,&DAT_001f0b0b,2);
    if ((uVar21 & 1) != 0) {
      local_70._0_8_ = FUN_00741a30(param_1);
      if (local_70._0_8_ != 0) {
        puVar7 = (undefined8 *)FUN_00745280(param_1,local_70);
        return puVar7;
      }
      return (undefined8 *)0x0;
    }
    pcVar26 = (char *)*param_1;
    if ((pcVar26 == (char *)param_1[1]) || (*pcVar26 != 'u')) {
      puVar7 = (undefined8 *)FUN_00745320(param_1,sVar3 == 0x7367);
      return puVar7;
    }
    *param_1 = (long)(pcVar26 + 1);
    local_88 = (long *)FUN_0073fc64(param_1);
    if (local_88 == (long *)0x0) {
      return (undefined8 *)0x0;
    }
    auVar31 = (**(code **)(*local_88 + 0x30))();
    if (((auVar31._8_8_ == 8) && (*auVar31._0_8_ == 0x666f646975755f5f)) &&
       (pcVar26 = (char *)*param_1, pcVar26 != (char *)param_1[1])) {
      if (*pcVar26 == 'z') {
        *param_1 = (long)(pcVar26 + 1);
        local_98._0_8_ = FUN_00741a30(param_1);
      }
      else {
        if (*pcVar26 != 't') goto LAB_00742b74;
        *param_1 = (long)(pcVar26 + 1);
        local_98._0_8_ = FUN_0073c980(param_1);
      }
      if ((long *)local_98._0_8_ == (long *)0x0) {
        return (undefined8 *)0x0;
      }
      lVar13 = param_1[3] - param_1[2];
      FUN_0073e91c(param_1 + 2,local_98);
    }
    else {
LAB_00742b74:
      lVar13 = param_1[3] - param_1[2];
      while( true ) {
        pcVar26 = (char *)*param_1;
        if ((pcVar26 != (char *)param_1[1]) && (*pcVar26 == 'E')) break;
        local_70._0_8_ = FUN_0073e5f4(param_1);
        if (local_70._0_8_ == 0) {
          return (undefined8 *)0x0;
        }
        FUN_0073e91c(param_1 + 2,local_70);
      }
      *param_1 = (long)(pcVar26 + 1);
    }
    local_70 = FUN_0073ea94(param_1,lVar13 >> 3);
    iVar17 = 1;
    pplVar15 = &local_88;
LAB_00742998:
    local_78 = (long *)CONCAT44(local_78._4_4_,iVar17);
    puVar7 = (undefined8 *)FUN_007430f4(param_1,pplVar15,local_70,&local_78);
    return puVar7;
  }
  plVar25 = *(long **)(&UNK_0079e3a8 + lVar13);
  pbVar20 = pbVar18 + 2;
  *param_1 = (long)pbVar20;
  sVar6 = strlen((char *)plVar25);
  plVar27 = plVar25;
  sVar29 = sVar6;
  if ((byte)(&UNK_0079e3a2)[lVar13] < 0xb) {
    if ((sVar6 < 8) || (*plVar25 != 0x726f74617265706f)) {
LAB_00742d68:
                    /* WARNING: Subroutine does not return */
      FUN_0073a468("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0xb49,
                   "operator name does not start with \'operator\'");
    }
    sVar29 = sVar6 - 8;
    plVar27 = plVar25 + 1;
    if ((sVar29 != 0) && ((char)*plVar27 == ' ')) {
      plVar27 = (long *)((long)plVar25 + 9);
      sVar29 = sVar6 - 9;
    }
  }
  plVar9 = (long *)0x0;
  local_88 = plVar27;
  sStack_80 = sVar29;
  local_70._0_8_ = plVar27;
  local_70._8_8_ = sVar29;
  switch((&UNK_0079e3a2)[lVar13]) {
  case 0:
    bVar1 = (&UNK_0079e3a3)[lVar13];
    lVar13 = FUN_00741a30(param_1);
    if (lVar13 == 0) {
      return (undefined8 *)0x0;
    }
    pvVar10 = (void *)param_1[0x266];
    lVar11 = *(long *)((long)pvVar10 + 8);
    puVar7 = (undefined8 *)pvVar10;
    if (lVar11 - 0xfc0U < 0xfffffffffffff010) {
      puVar7 = (undefined8 *)malloc(0x1000);
      if (puVar7 == (undefined8 *)0x0) {
LAB_00742da8:
                    /* WARNING: Subroutine does not return */
        FUN_00739f00();
      }
      lVar11 = 0;
      *puVar7 = pvVar10;
      puVar7[1] = 0;
      param_1[0x266] = (long)puVar7;
    }
    *(long *)((long)puVar7 + 8) = lVar11 + 0x30;
    plVar9 = (long *)((long)puVar7 + lVar11 + 0x10);
    *plVar9 = (long)&PTR_FUN_0079e800;
    *(undefined1 *)((long)puVar7 + lVar11 + 0x18) = 0x42;
    uVar19 = bVar1 >> 1 | 0x540;
    *(long **)((long)puVar7 + lVar11 + 0x20) = plVar27;
    *(size_t *)((long)puVar7 + lVar11 + 0x28) = sVar29;
    uVar16 = *(ushort *)((long)puVar7 + lVar11 + 0x19) & 0xf000;
    goto LAB_00742624;
  case 1:
    if ((pbVar20 == pbVar28) || (*pbVar20 != 0x5f)) {
      plVar9 = (long *)FUN_00741a30(param_1);
      if (plVar9 != (long *)0x0) {
        local_98._0_4_ = (int)(char)(&UNK_0079e3a3)[lVar13] >> 1;
        local_70._0_8_ = plVar9;
        plVar9 = (long *)FUN_00742dc0(param_1,local_70,&local_88,local_98);
      }
    }
    else {
      cVar2 = (&UNK_0079e3a3)[lVar13];
      *param_1 = (long)(pbVar18 + 3);
      local_78 = (long *)CONCAT44(local_78._4_4_,(int)cVar2 >> 1);
      plVar9 = (long *)FUN_00741a30(param_1);
      if (plVar9 != (long *)0x0) {
        local_98._0_8_ = plVar9;
        plVar9 = (long *)FUN_00745f74(param_1,local_70,local_98,&local_78);
      }
    }
    break;
  case 2:
    local_44 = (int)(char)(&UNK_0079e3a3)[lVar13] >> 1;
    plVar9 = (long *)FUN_00741a30(param_1);
    if ((plVar9 != (long *)0x0) &&
       (local_98._0_8_ = plVar9, plVar9 = (long *)FUN_00741a30(param_1), plVar9 != (long *)0x0)) {
      local_78 = plVar9;
      plVar9 = (long *)FUN_00745994(param_1,local_98,local_70,&local_78,&local_44);
    }
    break;
  case 3:
    plVar9 = (long *)FUN_00741a30(param_1);
    if ((plVar9 != (long *)0x0) &&
       (local_70._0_8_ = plVar9, plVar9 = (long *)FUN_00741a30(param_1), plVar9 != (long *)0x0)) {
      local_78 = (long *)CONCAT44(local_78._4_4_,(int)(char)(&UNK_0079e3a3)[lVar13] >> 1);
      local_98._0_8_ = plVar9;
      plVar9 = (long *)FUN_00742e80(param_1,local_70,local_98,&local_78);
    }
    break;
  case 4:
    plVar9 = (long *)FUN_00741a30(param_1);
    if ((plVar9 != (long *)0x0) &&
       (local_70._0_8_ = plVar9, plVar9 = (long *)FUN_00741a30(param_1), plVar9 != (long *)0x0)) {
      local_78 = (long *)CONCAT44(local_78._4_4_,(int)(char)(&UNK_0079e3a3)[lVar13] >> 1);
      local_98._0_8_ = plVar9;
      plVar9 = (long *)FUN_00742f3c(param_1,local_70,&local_88,local_98,&local_78);
    }
    break;
  case 5:
    lVar11 = param_1[2];
    lVar8 = param_1[3];
    plVar27 = param_1 + 5;
    while ((pbVar20 == pbVar28 || (*pbVar20 != 0x5f))) {
      lVar12 = FUN_00741a30(param_1);
      if (lVar12 == 0) {
        return (undefined8 *)0x0;
      }
      plVar25 = (long *)param_1[3];
      if (plVar25 == (long *)param_1[4]) {
        plVar9 = (long *)param_1[2];
        sVar29 = (long)plVar25 - (long)plVar9;
        if (plVar9 == plVar27) {
          pvVar10 = malloc(sVar29 * 2);
          if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar25 != plVar27) {
            memcpy(pvVar10,plVar27,sVar29);
          }
          param_1[2] = (long)pvVar10;
        }
        else {
          pvVar10 = realloc(plVar9,sVar29 * 2);
          param_1[2] = (long)pvVar10;
          if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar25 = (long *)((long)pvVar10 + sVar29);
        param_1[3] = (long)plVar25;
        param_1[4] = (long)((long)pvVar10 + ((long)sVar29 >> 2) * 8);
      }
      param_1[3] = (long)(plVar25 + 1);
      *plVar25 = lVar12;
      pbVar28 = (byte *)param_1[1];
      pbVar20 = (byte *)*param_1;
    }
    *param_1 = (long)(pbVar20 + 1);
    local_70 = FUN_0073ea94(param_1,lVar8 - lVar11 >> 3);
    local_78 = (long *)FUN_0073c980(param_1);
    if (local_78 == (long *)0x0) {
      return (undefined8 *)0x0;
    }
    uVar21 = FUN_0073bdcc(param_1,&DAT_001dc13c,2);
    lVar11 = param_1[2];
    lVar8 = param_1[3];
    while( true ) {
      pcVar26 = (char *)*param_1;
      if ((pcVar26 != (char *)param_1[1]) && (*pcVar26 == 'E')) {
        *param_1 = (long)(pcVar26 + 1);
        local_98 = FUN_0073ea94(param_1,lVar8 - lVar11 >> 3);
        local_9c[0] = (&UNK_0079e3a3)[lVar13] & 1;
        local_44 = (int)(char)(&UNK_0079e3a3)[lVar13] >> 1;
        puVar7 = (undefined8 *)
                 FUN_00743008(param_1,local_70,&local_78,local_98,local_48,local_9c,&local_44);
        return puVar7;
      }
      if ((uVar21 & 1) == 0) break;
      lVar12 = FUN_00741a30(param_1);
      if (lVar12 == 0) {
        return (undefined8 *)0x0;
      }
      plVar25 = (long *)param_1[3];
      if (plVar25 == (long *)param_1[4]) {
        plVar9 = (long *)param_1[2];
        sVar29 = (long)plVar25 - (long)plVar9;
        if (plVar9 == plVar27) {
          pvVar10 = malloc(sVar29 * 2);
          if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar25 != plVar27) {
            memcpy(pvVar10,plVar27,sVar29);
          }
          param_1[2] = (long)pvVar10;
        }
        else {
          pvVar10 = realloc(plVar9,sVar29 * 2);
          param_1[2] = (long)pvVar10;
          if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar25 = (long *)((long)pvVar10 + sVar29);
        param_1[3] = (long)plVar25;
        param_1[4] = (long)((long)pvVar10 + ((long)sVar29 >> 2) * 8);
      }
      param_1[3] = (long)(plVar25 + 1);
      *plVar25 = lVar12;
    }
    goto LAB_00741a64;
  case 6:
    plVar27 = (long *)FUN_00741a30(param_1);
    plVar9 = plVar27;
    if (plVar27 != (long *)0x0) {
      pvVar10 = (void *)param_1[0x266];
      bVar1 = (&UNK_0079e3a3)[lVar13];
      lVar13 = *(long *)((long)pvVar10 + 8);
      puVar7 = (undefined8 *)pvVar10;
      if (lVar13 - 0xfd0U < 0xfffffffffffff010) {
        puVar7 = (undefined8 *)malloc(0x1000);
        if (puVar7 == (undefined8 *)0x0) goto LAB_00742da8;
        lVar13 = 0;
        *puVar7 = pvVar10;
        puVar7[1] = 0;
        param_1[0x266] = (long)puVar7;
      }
      *(long *)((long)puVar7 + 8) = lVar13 + 0x20;
      plVar9 = (long *)((long)puVar7 + lVar13 + 0x10);
      *plVar9 = (long)&PTR_FUN_0079ea30;
      *(undefined1 *)((long)puVar7 + lVar13 + 0x18) = 0x41;
      *(long **)((long)puVar7 + lVar13 + 0x20) = plVar27;
      *(undefined1 *)((long)puVar7 + lVar13 + 0x28) = uVar30;
      *(ushort *)((long)puVar7 + lVar13 + 0x19) =
           *(ushort *)((long)puVar7 + lVar13 + 0x19) & 0xf000 | bVar1 >> 1 | 0x540;
      *(byte *)((long)puVar7 + lVar13 + 0x29) = bVar1 & 1;
    }
    break;
  case 7:
    local_98._0_8_ = FUN_00741a30(param_1);
    plVar9 = (long *)local_98._0_8_;
    if ((long *)local_98._0_8_ != (long *)0x0) {
      lVar11 = param_1[2];
      lVar8 = param_1[3];
      plVar27 = param_1 + 5;
      while( true ) {
        pcVar26 = (char *)*param_1;
        if ((pcVar26 != (char *)param_1[1]) && (*pcVar26 == 'E')) {
          *param_1 = (long)(pcVar26 + 1);
          local_70 = FUN_0073ea94(param_1,lVar8 - lVar11 >> 3);
          pplVar15 = (long **)local_98;
          iVar17 = (int)(char)(&UNK_0079e3a3)[lVar13] >> 1;
          goto LAB_00742998;
        }
        plVar9 = (long *)FUN_00741a30(param_1);
        if (plVar9 == (long *)0x0) break;
        plVar25 = (long *)param_1[3];
        if (plVar25 == (long *)param_1[4]) {
          __ptr = (long *)param_1[2];
          sVar29 = (long)plVar25 - (long)__ptr;
          if (__ptr == plVar27) {
            pvVar10 = malloc(sVar29 * 2);
            if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (plVar25 != plVar27) {
              memcpy(pvVar10,plVar27,sVar29);
            }
            param_1[2] = (long)pvVar10;
          }
          else {
            pvVar10 = realloc(__ptr,sVar29 * 2);
            param_1[2] = (long)pvVar10;
            if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          plVar25 = (long *)((long)pvVar10 + sVar29);
          param_1[3] = (long)plVar25;
          param_1[4] = (long)((long)pvVar10 + ((long)sVar29 >> 2) * 8);
        }
        param_1[3] = (long)(plVar25 + 1);
        *plVar25 = (long)plVar9;
      }
    }
    break;
  case 8:
    lVar11 = param_1[0x61];
    *(undefined1 *)(param_1 + 0x61) = 0;
                    /* try { // try from 00742070 to 00742077 has its CatchHandler @ 00742db8 */
    local_98._0_8_ = FUN_0073c980(param_1);
    *(char *)(param_1 + 0x61) = (char)lVar11;
    if ((long *)local_98._0_8_ == (long *)0x0) {
      return (undefined8 *)0x0;
    }
    pcVar26 = (char *)*param_1;
    lVar11 = param_1[3] - param_1[2] >> 3;
    if ((pcVar26 == (char *)param_1[1]) || (*pcVar26 != '_')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
      *param_1 = (long)(pcVar26 + 1);
    }
    plVar27 = param_1 + 5;
    do {
      pcVar26 = (char *)*param_1;
      if ((pcVar26 != (char *)param_1[1]) && (*pcVar26 == 'E')) {
        *param_1 = (long)(pcVar26 + 1);
        local_70 = FUN_0073ea94(param_1,lVar11);
        if (!bVar4) goto LAB_00742a28;
        goto LAB_00742a30;
      }
      lVar8 = FUN_00741a30(param_1);
      if (lVar8 == 0) {
        return (undefined8 *)0x0;
      }
      plVar25 = (long *)param_1[3];
      if (plVar25 == (long *)param_1[4]) {
        plVar9 = (long *)param_1[2];
        sVar29 = (long)plVar25 - (long)plVar9;
        if (plVar9 == plVar27) {
          pvVar10 = malloc(sVar29 * 2);
          if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar25 != plVar27) {
            memcpy(pvVar10,plVar27,sVar29);
          }
          param_1[2] = (long)pvVar10;
        }
        else {
          pvVar10 = realloc(plVar9,sVar29 * 2);
          param_1[2] = (long)pvVar10;
          if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar25 = (long *)((long)pvVar10 + sVar29);
        param_1[3] = (long)plVar25;
        param_1[4] = (long)((long)pvVar10 + ((long)sVar29 >> 2) * 8);
      }
      param_1[3] = (long)(plVar25 + 1);
      *plVar25 = lVar8;
    } while (bVar4);
    local_70 = FUN_0073ea94(param_1,lVar11);
LAB_00742a28:
    if (local_70._8_8_ == 1) {
LAB_00742a30:
      local_78 = (long *)CONCAT44(local_78._4_4_,(int)(char)(&UNK_0079e3a3)[lVar13] >> 1);
      puVar7 = (undefined8 *)FUN_007431b4(param_1,local_98,local_70,&local_78);
      return puVar7;
    }
LAB_00741a64:
    plVar9 = (long *)0x0;
    break;
  case 9:
    local_70._0_8_ = FUN_00741a30(param_1);
    plVar9 = (long *)local_70._0_8_;
    if ((((long *)local_70._0_8_ != (long *)0x0) &&
        (local_98._0_8_ = FUN_00741a30(param_1), plVar9 = (long *)local_98._0_8_,
        (long *)local_98._0_8_ != (long *)0x0)) &&
       (local_78 = (long *)FUN_00741a30(param_1), plVar9 = local_78, local_78 != (long *)0x0)) {
      local_44 = (int)(char)(&UNK_0079e3a3)[lVar13] >> 1;
      plVar9 = (long *)FUN_00743274(param_1,local_70,local_98,&local_78,&local_44);
    }
    break;
  case 10:
    break;
  case 0xb:
    local_70._0_8_ = FUN_0073c980(param_1);
    plVar9 = (long *)local_70._0_8_;
    if (((long *)local_70._0_8_ != (long *)0x0) &&
       (local_98._0_8_ = FUN_00741a30(param_1), plVar9 = (long *)local_98._0_8_,
       (long *)local_98._0_8_ != (long *)0x0)) {
      local_78 = (long *)CONCAT44(local_78._4_4_,(int)(char)(&UNK_0079e3a3)[lVar13] >> 1);
      plVar9 = (long *)FUN_0074333c(param_1,&local_88,local_70,local_98,&local_78);
    }
    break;
  case 0xc:
    bVar1 = (&UNK_0079e3a3)[lVar13];
    if ((bVar1 & 1) == 0) {
      lVar13 = FUN_00741a30(param_1);
    }
    else {
      lVar13 = FUN_0073c980(param_1);
    }
    if (lVar13 == 0) goto LAB_00741a64;
    pvVar10 = (void *)param_1[0x266];
    lVar11 = *(long *)((long)pvVar10 + 8);
    puVar7 = (undefined8 *)pvVar10;
    if (lVar11 - 0xfb0U < 0xfffffffffffff010) {
      puVar7 = (undefined8 *)malloc(0x1000);
      if (puVar7 == (undefined8 *)0x0) goto LAB_00742da8;
      lVar11 = 0;
      *puVar7 = pvVar10;
      puVar7[1] = 0;
      param_1[0x266] = (long)puVar7;
    }
    *(long *)((long)puVar7 + 8) = lVar11 + 0x40;
    plVar9 = (long *)((long)puVar7 + lVar11 + 0x10);
    *plVar9 = (long)&PTR_FUN_0079ec60;
    *(undefined1 *)((long)puVar7 + lVar11 + 0x18) = 0x3c;
    uVar19 = 0x540;
    *(long **)((long)puVar7 + lVar11 + 0x20) = plVar27;
    *(size_t *)((long)puVar7 + lVar11 + 0x28) = sVar29;
    uVar16 = *(ushort *)((long)puVar7 + lVar11 + 0x19) & 0xf000 | (ushort)(bVar1 >> 1);
    *(undefined8 *)((long)puVar7 + lVar11 + 0x38) = 0;
    *(undefined8 *)((long)puVar7 + lVar11 + 0x40) = 0;
LAB_00742624:
    plVar9[4] = lVar13;
    *(ushort *)((long)plVar9 + 9) = uVar16 | uVar19;
    break;
  default:
                    /* catch() { ... } // from try @ 00742070 with catch @ 00742db8 */
    *(char *)(param_1 + 0x61) = (char)plVar25;
                    /* WARNING: Subroutine does not return */
    FUN_00755eac();
  }
  return plVar9;
}


// ===== 00742dc0  FUN_00742dc0 =====

void FUN_00742dc0(long param_1,undefined8 *param_2,undefined8 *param_3,ushort *param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar4 + 8);
  puVar2 = (undefined8 *)pvVar4;
  if (lVar3 - 0xfc0U < 0xfffffffffffff010) {
    puVar2 = (undefined8 *)malloc(0x1000);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00739f00();
    }
    lVar3 = 0;
    *puVar2 = pvVar4;
    puVar2[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar2;
  }
  *(long *)((long)puVar2 + 8) = lVar3 + 0x30;
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_0079e870;
  uVar1 = *param_4;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0x38;
  uVar6 = param_3[1];
  uVar5 = *param_3;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x20) = *param_2;
  *(ushort *)((long)puVar2 + lVar3 + 0x19) =
       *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000 | uVar1 & 0x3f | 0x540;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x30) = uVar6;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x28) = uVar5;
  return;
}


// ===== 00742e80  FUN_00742e80 =====

void FUN_00742e80(long param_1,undefined8 *param_2,undefined8 *param_3,ushort *param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  
  pvVar6 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar6 + 8);
  puVar2 = (undefined8 *)pvVar6;
  if (lVar3 - 0xfd0U < 0xfffffffffffff010) {
    puVar2 = (undefined8 *)malloc(0x1000);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00739f00();
    }
    lVar3 = 0;
    *puVar2 = pvVar6;
    puVar2[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar2;
  }
  *(long *)((long)puVar2 + 8) = lVar3 + 0x20;
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_0079e8e0;
  uVar1 = *param_4;
  uVar5 = *param_2;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0x37;
  uVar4 = *param_3;
  *(ushort *)((long)puVar2 + lVar3 + 0x19) =
       *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000 | uVar1 & 0x3f | 0x540;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x20) = uVar5;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x28) = uVar4;
  return;
}


// ===== 00742f3c  FUN_00742f3c =====

void FUN_00742f3c(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 ushort *param_5)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  pvVar5 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar5 + 8);
  puVar2 = (undefined8 *)pvVar5;
  if (lVar3 - 0xfc0U < 0xfffffffffffff010) {
    puVar2 = (undefined8 *)malloc(0x1000);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00739f00();
    }
    lVar3 = 0;
    *puVar2 = pvVar5;
    puVar2[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar2;
  }
  *(long *)((long)puVar2 + 8) = lVar3 + 0x30;
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_0079e950;
  uVar1 = *param_5;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0x3a;
  uVar7 = param_3[1];
  uVar6 = *param_3;
  uVar4 = *param_4;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x20) = *param_2;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x30) = uVar7;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x28) = uVar6;
  *(ushort *)((long)puVar2 + lVar3 + 0x19) =
       *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000 | uVar1 & 0x3f | 0x540;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x38) = uVar4;
  return;
}


// ===== 00743008  FUN_00743008 =====

void FUN_00743008(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined1 *param_5,undefined1 *param_6,ushort *param_7)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  pvVar7 = *(void **)(param_1 + 0x1330);
  lVar5 = *(long *)((long)pvVar7 + 8);
  puVar4 = (undefined8 *)pvVar7;
  if (lVar5 - 0xfb0U < 0xfffffffffffff010) {
    puVar4 = (undefined8 *)malloc(0x1000);
    if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00739f00();
    }
    lVar5 = 0;
    *puVar4 = pvVar7;
    puVar4[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar4;
  }
  *(long *)((long)puVar4 + 8) = lVar5 + 0x40;
  uVar6 = *param_3;
  *(undefined ***)((long)puVar4 + lVar5 + 0x10) = &PTR_FUN_0079e9c0;
  uVar3 = *param_7;
  *(undefined1 *)((long)puVar4 + lVar5 + 0x18) = 0x40;
  uVar9 = param_2[1];
  uVar8 = *param_2;
  uVar1 = *param_5;
  uVar2 = *param_6;
  uVar11 = param_4[1];
  uVar10 = *param_4;
  *(undefined8 *)((long)puVar4 + lVar5 + 0x30) = uVar6;
  *(undefined8 *)((long)puVar4 + lVar5 + 0x28) = uVar9;
  *(undefined8 *)((long)puVar4 + lVar5 + 0x20) = uVar8;
  *(undefined1 *)((long)puVar4 + lVar5 + 0x48) = uVar1;
  *(undefined8 *)((long)puVar4 + lVar5 + 0x40) = uVar11;
  *(undefined8 *)((long)puVar4 + lVar5 + 0x38) = uVar10;
  *(ushort *)((long)puVar4 + lVar5 + 0x19) =
       *(ushort *)((long)puVar4 + lVar5 + 0x19) & 0xf000 | uVar3 & 0x3f | 0x540;
  *(undefined1 *)((long)puVar4 + lVar5 + 0x49) = uVar2;
  return;
}


// ===== 007430f4  FUN_007430f4 =====

void FUN_007430f4(long param_1,undefined8 *param_2,undefined8 *param_3,ushort *param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar4 + 8);
  puVar2 = (undefined8 *)pvVar4;
  if (lVar3 - 0xfc0U < 0xfffffffffffff010) {
    puVar2 = (undefined8 *)malloc(0x1000);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00739f00();
    }
    lVar3 = 0;
    *puVar2 = pvVar4;
    puVar2[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar2;
  }
  *(long *)((long)puVar2 + 8) = lVar3 + 0x30;
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_0079eaa0;
  uVar1 = *param_4;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0x3f;
  uVar6 = param_3[1];
  uVar5 = *param_3;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x20) = *param_2;
  *(ushort *)((long)puVar2 + lVar3 + 0x19) =
       *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000 | uVar1 & 0x3f | 0x540;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x30) = uVar6;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x28) = uVar5;
  return;
}


// ===== 007431b4  FUN_007431b4 =====

void FUN_007431b4(long param_1,undefined8 *param_2,undefined8 *param_3,ushort *param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar4 + 8);
  puVar2 = (undefined8 *)pvVar4;
  if (lVar3 - 0xfc0U < 0xfffffffffffff010) {
    puVar2 = (undefined8 *)malloc(0x1000);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00739f00();
    }
    lVar3 = 0;
    *puVar2 = pvVar4;
    puVar2[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar2;
  }
  *(long *)((long)puVar2 + 8) = lVar3 + 0x30;
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_0079eb10;
  uVar1 = *param_4;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0x44;
  uVar6 = param_3[1];
  uVar5 = *param_3;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x20) = *param_2;
  *(ushort *)((long)puVar2 + lVar3 + 0x19) =
       *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000 | uVar1 & 0x3f | 0x540;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x30) = uVar6;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x28) = uVar5;
  return;
}


// ===== 00743274  FUN_00743274 =====

void FUN_00743274(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 ushort *param_5)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *pvVar7;
  
  pvVar7 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar7 + 8);
  puVar2 = (undefined8 *)pvVar7;
  if (lVar3 - 0xfc0U < 0xfffffffffffff010) {
    puVar2 = (undefined8 *)malloc(0x1000);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00739f00();
    }
    lVar3 = 0;
    *puVar2 = pvVar7;
    puVar2[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar2;
  }
  *(long *)((long)puVar2 + 8) = lVar3 + 0x30;
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_0079eb80;
  uVar1 = *param_5;
  uVar5 = *param_2;
  uVar6 = *param_3;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0x39;
  uVar4 = *param_4;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x20) = uVar5;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x28) = uVar6;
  *(ushort *)((long)puVar2 + lVar3 + 0x19) =
       *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000 | uVar1 & 0x3f | 0x540;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x30) = uVar4;
  return;
}


// ===== 0074333c  FUN_0074333c =====

void FUN_0074333c(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 ushort *param_5)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined8 uVar7;
  
  pvVar6 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar6 + 8);
  puVar2 = (undefined8 *)pvVar6;
  if (lVar3 - 0xfc0U < 0xfffffffffffff010) {
    puVar2 = (undefined8 *)malloc(0x1000);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00739f00();
    }
    lVar3 = 0;
    *puVar2 = pvVar6;
    puVar2[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar2;
  }
  *(long *)((long)puVar2 + 8) = lVar3 + 0x30;
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_0079ebf0;
  uVar1 = *param_5;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0x3d;
  uVar4 = *param_3;
  uVar7 = *param_2;
  uVar5 = *param_4;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x28) = param_2[1];
  *(undefined8 *)((long)puVar2 + lVar3 + 0x20) = uVar7;
  *(ushort *)((long)puVar2 + lVar3 + 0x19) =
       *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000 | uVar1 & 0x3f | 0x540;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x30) = uVar4;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x38) = uVar5;
  return;
}


// ===== 00743404  FUN_00743404 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_00743404(long *param_1)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  ulong uVar6;
  char *pcVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  short *psVar11;
  byte *pbVar12;
  byte *pbVar13;
  void *pvVar14;
  undefined8 local_40;
  long lStack_38;
  long local_18;
  
  psVar2 = (short *)*param_1;
  psVar3 = (short *)param_1[1];
  if (psVar2 == psVar3) {
    return (undefined8 *)0x0;
  }
  if ((char)*psVar2 != 'L') {
    return (undefined8 *)0x0;
  }
  psVar11 = (short *)((long)psVar2 + 1);
  uVar6 = (long)psVar3 - (long)psVar11;
  *param_1 = (long)psVar11;
  if (psVar3 == psVar11) {
code_r0x007434b8:
    local_18 = FUN_0073c980();
    if (local_18 == 0) {
      return (undefined8 *)0x0;
    }
    local_40 = (byte *)*param_1;
    pbVar4 = (byte *)param_1[1];
    pbVar12 = local_40;
    if ((local_40 != pbVar4) && (*local_40 == 0x6e)) {
      pbVar12 = local_40 + 1;
      *param_1 = (long)pbVar12;
    }
    if (pbVar4 == pbVar12) {
      return (undefined8 *)0x0;
    }
    if (*pbVar12 - 0x3a < 0xfffffff6) {
      return (undefined8 *)0x0;
    }
    do {
      pbVar13 = pbVar12;
      if (*pbVar12 - 0x3a < 0xfffffff6) break;
      pbVar12 = pbVar12 + 1;
      *param_1 = (long)pbVar12;
      pbVar13 = pbVar4;
    } while (pbVar12 != pbVar4);
    lStack_38 = (long)pbVar13 - (long)local_40;
    if (lStack_38 == 0) {
      return (undefined8 *)0x0;
    }
    if (pbVar13 == pbVar4) {
      return (undefined8 *)0x0;
    }
    if (*pbVar13 == 0x45) {
      *param_1 = (long)(pbVar13 + 1);
      puVar5 = (undefined8 *)FUN_007489f4(param_1,&local_18,&local_40);
      return puVar5;
    }
    return (undefined8 *)0x0;
  }
  switch(*(char *)psVar11) {
  case 'A':
    local_40 = (byte *)FUN_0073c980();
    if (local_40 == (byte *)0x0) {
      return (undefined8 *)0x0;
    }
    pcVar7 = (char *)*param_1;
    if (pcVar7 != (char *)param_1[1]) {
      if (*pcVar7 == 'E') {
        *param_1 = (long)(pcVar7 + 1);
        puVar5 = (undefined8 *)FUN_00748088(param_1,&local_40);
        return puVar5;
      }
      return (undefined8 *)0x0;
    }
    return (undefined8 *)0x0;
  default:
    goto code_r0x007434b8;
  case 'D':
    if (uVar6 < 2) {
      return (undefined8 *)0x0;
    }
    if (*psVar11 != 0x6e44) {
      return (undefined8 *)0x0;
    }
    psVar11 = (short *)((long)psVar2 + 3);
    *param_1 = (long)psVar11;
    if (psVar11 == psVar3) {
      return (undefined8 *)0x0;
    }
    if (*(char *)psVar11 == '0') {
      psVar11 = psVar2 + 2;
      *param_1 = (long)psVar11;
    }
    if (psVar11 != psVar3) {
      if ((char)*psVar11 == 'E') {
        *param_1 = (long)((long)psVar11 + 1);
        puVar5 = (undefined8 *)FUN_00748128(param_1,"nullptr");
        return puVar5;
      }
      return (undefined8 *)0x0;
    }
    return (undefined8 *)0x0;
  case 'T':
    return (undefined8 *)0x0;
  case 'U':
    if (uVar6 < 2) {
      return (undefined8 *)0x0;
    }
    if ((char)psVar2[1] != 'l') {
      return (undefined8 *)0x0;
    }
    local_40 = (byte *)FUN_007481d4(param_1,0);
    if (local_40 == (byte *)0x0) {
      return (undefined8 *)0x0;
    }
    pcVar7 = (char *)*param_1;
    if (pcVar7 != (char *)param_1[1]) {
      if (*pcVar7 == 'E') {
        *param_1 = (long)(pcVar7 + 1);
        puVar5 = (undefined8 *)FUN_00748954(param_1,&local_40);
        return puVar5;
      }
      return (undefined8 *)0x0;
    }
    return (undefined8 *)0x0;
  case '_':
    if (uVar6 < 2) {
      return (undefined8 *)0x0;
    }
    if (*psVar11 != 0x5a5f) {
      return (undefined8 *)0x0;
    }
    *param_1 = (long)((long)psVar2 + 3);
    puVar5 = (undefined8 *)FUN_0073be2c();
    if (puVar5 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    pcVar7 = (char *)*param_1;
    if (pcVar7 != (char *)param_1[1]) {
      if (*pcVar7 == 'E') {
        *param_1 = (long)(pcVar7 + 1);
        return puVar5;
      }
      return (undefined8 *)0x0;
    }
    return (undefined8 *)0x0;
  case 'a':
    pcVar7 = "signed char";
    uVar8 = 0xb;
    break;
  case 'b':
    if ((uVar6 < 3) || (*psVar11 != 0x3062 || *(char *)((long)psVar2 + 3) != 'E')) {
      uVar6 = FUN_0073bdcc(param_1,&DAT_001d7a73,3);
      if ((uVar6 & 1) == 0) {
        return (undefined8 *)0x0;
      }
      local_40 = (byte *)CONCAT44(local_40._4_4_,1);
    }
    else {
      local_40 = (byte *)((ulong)local_40._4_4_ << 0x20);
      *param_1 = (long)(psVar2 + 2);
    }
    puVar5 = (undefined8 *)FUN_00747fe0(param_1,&local_40);
    return puVar5;
  case 'c':
    pcVar7 = "char";
    uVar8 = 4;
    break;
  case 'd':
    *param_1 = (long)(psVar2 + 1);
    if ((ulong)((long)psVar3 - (long)(psVar2 + 1)) < 0x11) {
      return (undefined8 *)0x0;
    }
    if ((9 < *(byte *)(psVar2 + 1) - 0x30) && (5 < *(byte *)(psVar2 + 1) - 0x61)) {
      return (undefined8 *)0x0;
    }
    if ((9 < *(byte *)((long)psVar2 + 3) - 0x30) && (5 < *(byte *)((long)psVar2 + 3) - 0x61)) {
      return (undefined8 *)0x0;
    }
    if ((9 < *(byte *)(psVar2 + 2) - 0x30) && (5 < *(byte *)(psVar2 + 2) - 0x61)) {
      return (undefined8 *)0x0;
    }
    if ((9 < *(byte *)((long)psVar2 + 5) - 0x30) && (5 < *(byte *)((long)psVar2 + 5) - 0x61)) {
      return (undefined8 *)0x0;
    }
    if ((9 < *(byte *)(psVar2 + 3) - 0x30) && (5 < *(byte *)(psVar2 + 3) - 0x61)) {
      return (undefined8 *)0x0;
    }
    if ((9 < *(byte *)((long)psVar2 + 7) - 0x30) && (5 < *(byte *)((long)psVar2 + 7) - 0x61)) {
      return (undefined8 *)0x0;
    }
    if ((9 < *(byte *)(psVar2 + 4) - 0x30) && (5 < *(byte *)(psVar2 + 4) - 0x61)) {
      return (undefined8 *)0x0;
    }
    if ((9 < *(byte *)((long)psVar2 + 9) - 0x30) && (5 < *(byte *)((long)psVar2 + 9) - 0x61)) {
      return (undefined8 *)0x0;
    }
    if ((9 < *(byte *)(psVar2 + 5) - 0x30) && (5 < *(byte *)(psVar2 + 5) - 0x61)) {
      return (undefined8 *)0x0;
    }
    if ((9 < *(byte *)((long)psVar2 + 0xb) - 0x30) && (5 < *(byte *)((long)psVar2 + 0xb) - 0x61)) {
      return (undefined8 *)0x0;
    }
    if ((9 < *(byte *)(psVar2 + 6) - 0x30) && (5 < *(byte *)(psVar2 + 6) - 0x61)) {
      return (undefined8 *)0x0;
    }
    if ((9 < *(byte *)((long)psVar2 + 0xd) - 0x30) && (5 < *(byte *)((long)psVar2 + 0xd) - 0x61)) {
      return (undefined8 *)0x0;
    }
    if ((9 < *(byte *)(psVar2 + 7) - 0x30) && (5 < *(byte *)(psVar2 + 7) - 0x61)) {
      return (undefined8 *)0x0;
    }
    if ((9 < *(byte *)((long)psVar2 + 0xf) - 0x30) && (5 < *(byte *)((long)psVar2 + 0xf) - 0x61)) {
      return (undefined8 *)0x0;
    }
    if ((9 < *(byte *)(psVar2 + 8) - 0x30) && (5 < *(byte *)(psVar2 + 8) - 0x61)) {
      return (undefined8 *)0x0;
    }
    if ((9 < *(byte *)((long)psVar2 + 0x11) - 0x30) && (5 < *(byte *)((long)psVar2 + 0x11) - 0x61))
    {
      return (undefined8 *)0x0;
    }
    psVar11 = psVar2 + 9;
    *param_1 = (long)psVar11;
    if (psVar11 == psVar3) {
      return (undefined8 *)0x0;
    }
    if ((char)*psVar11 != 'E') {
      return (undefined8 *)0x0;
    }
    pvVar14 = (void *)param_1[0x266];
    *param_1 = (long)((long)psVar2 + 0x13);
    lVar9 = *(long *)((long)pvVar14 + 8);
    puVar5 = (undefined8 *)pvVar14;
    if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
      puVar5 = (undefined8 *)malloc(0x1000);
      if (puVar5 == (undefined8 *)0x0) {
LAB_00743d80:
                    /* WARNING: Subroutine does not return */
        FUN_00739f00();
      }
      lVar9 = 0;
      *puVar5 = pvVar14;
      puVar5[1] = 0;
      param_1[0x266] = (long)puVar5;
    }
    *(long *)((long)puVar5 + 8) = lVar9 + 0x20;
    puVar10 = (undefined8 *)((long)puVar5 + lVar9 + 0x10);
    *puVar10 = &PTR_FUN_0079ee20;
    *(undefined1 *)((long)puVar5 + lVar9 + 0x18) = 0x4f;
    *(ushort *)((long)puVar5 + lVar9 + 0x19) =
         *(ushort *)((long)puVar5 + lVar9 + 0x19) & 0xf000 | 0x540;
    uVar8 = 0x10;
    goto LAB_00743a84;
  case 'e':
    psVar11 = psVar2 + 1;
    *param_1 = (long)psVar11;
    if ((ulong)((long)psVar3 - (long)psVar11) < 0x21) {
      return (undefined8 *)0x0;
    }
    lVar9 = 0;
    psVar1 = psVar2 + 0x11;
    do {
      if (9 < *(byte *)((long)psVar11 + lVar9) - 0x30 && 5 < *(byte *)((long)psVar11 + lVar9) - 0x61
         ) {
        return (undefined8 *)0x0;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != 0x20);
    *param_1 = (long)psVar1;
    if (psVar1 == psVar3) {
      return (undefined8 *)0x0;
    }
    if ((char)*psVar1 != 'E') {
      return (undefined8 *)0x0;
    }
    pvVar14 = (void *)param_1[0x266];
    *param_1 = (long)((long)psVar2 + 0x23);
    lVar9 = *(long *)((long)pvVar14 + 8);
    puVar5 = (undefined8 *)pvVar14;
    if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
      puVar5 = (undefined8 *)malloc(0x1000);
      if (puVar5 == (undefined8 *)0x0) goto LAB_00743d80;
      lVar9 = 0;
      *puVar5 = pvVar14;
      puVar5[1] = 0;
      param_1[0x266] = (long)puVar5;
    }
    *(long *)((long)puVar5 + 8) = lVar9 + 0x20;
    puVar10 = (undefined8 *)((long)puVar5 + lVar9 + 0x10);
    *puVar10 = &PTR_FUN_0079ee90;
    *(undefined1 *)((long)puVar5 + lVar9 + 0x18) = 0x50;
    *(ushort *)((long)puVar5 + lVar9 + 0x19) =
         *(ushort *)((long)puVar5 + lVar9 + 0x19) & 0xf000 | 0x540;
    uVar8 = 0x20;
    goto LAB_00743a84;
  case 'f':
    *param_1 = (long)(psVar2 + 1);
    if ((ulong)((long)psVar3 - (long)(psVar2 + 1)) < 9) {
      return (undefined8 *)0x0;
    }
    if ((9 < *(byte *)(psVar2 + 1) - 0x30) && (5 < *(byte *)(psVar2 + 1) - 0x61)) {
      return (undefined8 *)0x0;
    }
    if ((9 < *(byte *)((long)psVar2 + 3) - 0x30) && (5 < *(byte *)((long)psVar2 + 3) - 0x61)) {
      return (undefined8 *)0x0;
    }
    if ((9 < *(byte *)(psVar2 + 2) - 0x30) && (5 < *(byte *)(psVar2 + 2) - 0x61)) {
      return (undefined8 *)0x0;
    }
    if ((9 < *(byte *)((long)psVar2 + 5) - 0x30) && (5 < *(byte *)((long)psVar2 + 5) - 0x61)) {
      return (undefined8 *)0x0;
    }
    if ((9 < *(byte *)(psVar2 + 3) - 0x30) && (5 < *(byte *)(psVar2 + 3) - 0x61)) {
      return (undefined8 *)0x0;
    }
    if ((9 < *(byte *)((long)psVar2 + 7) - 0x30) && (5 < *(byte *)((long)psVar2 + 7) - 0x61)) {
      return (undefined8 *)0x0;
    }
    if ((9 < *(byte *)(psVar2 + 4) - 0x30) && (5 < *(byte *)(psVar2 + 4) - 0x61)) {
      return (undefined8 *)0x0;
    }
    if ((9 < *(byte *)((long)psVar2 + 9) - 0x30) && (5 < *(byte *)((long)psVar2 + 9) - 0x61)) {
      return (undefined8 *)0x0;
    }
    psVar11 = psVar2 + 5;
    *param_1 = (long)psVar11;
    if (psVar11 == psVar3) {
      return (undefined8 *)0x0;
    }
    if ((char)*psVar11 != 'E') {
      return (undefined8 *)0x0;
    }
    pvVar14 = (void *)param_1[0x266];
    *param_1 = (long)((long)psVar2 + 0xb);
    lVar9 = *(long *)((long)pvVar14 + 8);
    puVar5 = (undefined8 *)pvVar14;
    if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
      puVar5 = (undefined8 *)malloc(0x1000);
      if (puVar5 == (undefined8 *)0x0) goto LAB_00743d80;
      lVar9 = 0;
      *puVar5 = pvVar14;
      puVar5[1] = 0;
      param_1[0x266] = (long)puVar5;
    }
    *(long *)((long)puVar5 + 8) = lVar9 + 0x20;
    puVar10 = (undefined8 *)((long)puVar5 + lVar9 + 0x10);
    *puVar10 = &PTR_FUN_0079edb0;
    *(undefined1 *)((long)puVar5 + lVar9 + 0x18) = 0x4e;
    *(ushort *)((long)puVar5 + lVar9 + 0x19) =
         *(ushort *)((long)puVar5 + lVar9 + 0x19) & 0xf000 | 0x540;
    uVar8 = 8;
LAB_00743a84:
    puVar10[2] = psVar2 + 1;
    puVar10[3] = uVar8;
    return puVar10;
  case 'h':
    pcVar7 = "unsigned char";
    uVar8 = 0xd;
    break;
  case 'i':
    pcVar7 = "";
    uVar8 = 0;
    break;
  case 'j':
    pcVar7 = "u";
    goto LAB_00743994;
  case 'l':
    pcVar7 = "l";
LAB_00743994:
    uVar8 = 1;
    break;
  case 'm':
    pcVar7 = "ul";
    uVar8 = 2;
    break;
  case 'n':
    pcVar7 = "__int128";
    uVar8 = 8;
    break;
  case 'o':
    pcVar7 = "unsigned __int128";
    uVar8 = 0x11;
    break;
  case 's':
    pcVar7 = "short";
    uVar8 = 5;
    break;
  case 't':
    pcVar7 = "unsigned short";
    uVar8 = 0xe;
    break;
  case 'w':
    pcVar7 = "wchar_t";
    uVar8 = 7;
    break;
  case 'x':
    pcVar7 = "ll";
    uVar8 = 2;
    break;
  case 'y':
    pcVar7 = "ull";
    uVar8 = 3;
  }
  *param_1 = (long)(psVar2 + 1);
  puVar5 = (undefined8 *)FUN_00747eec(param_1,pcVar7,uVar8);
  return puVar5;
}


// ===== 00743d84  FUN_00743d84 =====

undefined8 * FUN_00743d84(long *param_1)

{
  short *psVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  void *pvVar12;
  byte *local_40;
  long lStack_38;
  
  psVar1 = (short *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if ((ulong)((long)pbVar2 - (long)psVar1) < 3) {
    if ((long)pbVar2 - (long)psVar1 != 2) {
      return (undefined8 *)0x0;
    }
  }
  else if (*psVar1 == 0x7066 && (char)psVar1[1] == 'T') {
    pvVar12 = (void *)param_1[0x266];
    *param_1 = (long)psVar1 + 3;
    lVar11 = *(long *)((long)pvVar12 + 8);
    puVar3 = (undefined8 *)pvVar12;
    if (0xfffffffffffff00f < lVar11 - 0xfd0U) {
LAB_00743f98:
      *(long *)((long)puVar3 + 8) = lVar11 + 0x20;
      puVar6 = (undefined8 *)((long)puVar3 + lVar11 + 0x10);
      *puVar6 = &PTR_FUN_0079e260;
      *(undefined1 *)((long)puVar3 + lVar11 + 0x18) = 8;
      *(ushort *)((long)puVar3 + lVar11 + 0x19) =
           *(ushort *)((long)puVar3 + lVar11 + 0x19) & 0xf000 | 0x540;
      *(undefined **)((long)puVar3 + lVar11 + 0x20) = &DAT_001f922d;
      *(undefined8 *)((long)puVar3 + lVar11 + 0x28) = 4;
      return puVar6;
    }
    puVar3 = (undefined8 *)malloc(0x1000);
    if (puVar3 != (undefined8 *)0x0) {
      lVar11 = 0;
      *puVar3 = pvVar12;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
      goto LAB_00743f98;
    }
    goto LAB_0074413c;
  }
  if (*psVar1 == 0x7066) {
    pbVar4 = (byte *)(psVar1 + 1);
    *param_1 = (long)pbVar4;
    if (pbVar4 != pbVar2) {
      if (*pbVar4 == 0x72) {
        pbVar4 = (byte *)((long)psVar1 + 3);
        *param_1 = (long)pbVar4;
      }
      if (pbVar4 != pbVar2) {
        if (*pbVar4 == 0x56) {
          pbVar4 = pbVar4 + 1;
          *param_1 = (long)pbVar4;
        }
        if (pbVar4 != pbVar2) {
          if (*pbVar4 == 0x4b) {
            pbVar4 = pbVar4 + 1;
            *param_1 = (long)pbVar4;
          }
          if (pbVar2 != pbVar4) {
            pbVar7 = pbVar4;
            pbVar10 = pbVar4;
            if (*pbVar4 - 0x3a < 0xfffffff6) {
              lVar11 = 0;
              pbVar5 = pbVar4;
              pbVar4 = (byte *)0x0;
            }
            else {
              do {
                pbVar9 = pbVar7;
                pbVar5 = pbVar10;
                if (*pbVar10 - 0x3a < 0xfffffff6) break;
                pbVar10 = pbVar10 + 1;
                *param_1 = (long)pbVar10;
                pbVar9 = pbVar2;
                pbVar7 = pbVar7 + 1;
                pbVar5 = pbVar2;
              } while (pbVar10 != pbVar2);
              lVar11 = (long)pbVar9 - (long)pbVar4;
            }
            if ((pbVar5 != pbVar2) && (*pbVar5 == 0x5f)) {
              pvVar12 = (void *)param_1[0x266];
              *param_1 = (long)(pbVar5 + 1);
              lVar8 = *(long *)((long)pvVar12 + 8);
              puVar3 = (undefined8 *)pvVar12;
              if (lVar8 - 0xfd0U < 0xfffffffffffff010) {
                puVar3 = (undefined8 *)malloc(0x1000);
                if (puVar3 == (undefined8 *)0x0) {
LAB_0074413c:
                    /* WARNING: Subroutine does not return */
                  FUN_00739f00();
                }
                lVar8 = 0;
                *puVar3 = pvVar12;
                puVar3[1] = 0;
                param_1[0x266] = (long)puVar3;
              }
              *(long *)((long)puVar3 + 8) = lVar8 + 0x20;
              puVar6 = (undefined8 *)((long)puVar3 + lVar8 + 0x10);
              *puVar6 = &PTR_FUN_0079f3d0;
              *(byte **)((long)puVar3 + lVar8 + 0x20) = pbVar4;
              *(long *)((long)puVar3 + lVar8 + 0x28) = lVar11;
              *(undefined1 *)((long)puVar3 + lVar8 + 0x18) = 0x43;
              *(ushort *)((long)puVar3 + lVar8 + 0x19) =
                   *(ushort *)((long)puVar3 + lVar8 + 0x19) & 0xf000 | 0x540;
              return puVar6;
            }
          }
        }
      }
    }
  }
  else if (*psVar1 == 0x4c66) {
    pbVar4 = (byte *)(psVar1 + 1);
    *param_1 = (long)pbVar4;
    if ((pbVar2 != pbVar4) && (pbVar10 = pbVar4, 0xfffffff5 < *pbVar4 - 0x3a)) {
      do {
        pbVar7 = pbVar10;
        if (*pbVar10 - 0x3a < 0xfffffff6) break;
        pbVar10 = pbVar10 + 1;
        *param_1 = (long)pbVar10;
        pbVar7 = pbVar2;
      } while (pbVar10 != pbVar2);
      if (pbVar7 == pbVar4) {
        return (undefined8 *)0x0;
      }
      if (pbVar7 == pbVar2) {
        return (undefined8 *)0x0;
      }
      if (*pbVar7 == 0x70) {
        local_40 = pbVar7 + 1;
        *param_1 = (long)local_40;
        if (local_40 != pbVar2) {
          if (*local_40 == 0x72) {
            local_40 = pbVar7 + 2;
            *param_1 = (long)local_40;
          }
          if (local_40 != pbVar2) {
            if (*local_40 == 0x56) {
              local_40 = local_40 + 1;
              *param_1 = (long)local_40;
            }
            if (local_40 != pbVar2) {
              if (*local_40 == 0x4b) {
                local_40 = local_40 + 1;
                *param_1 = (long)local_40;
              }
              if (pbVar2 != local_40) {
                pbVar10 = local_40;
                pbVar4 = local_40;
                if (*local_40 - 0x3a < 0xfffffff6) {
                  lStack_38 = 0;
                  pbVar7 = local_40;
                  local_40 = (byte *)0x0;
                }
                else {
                  do {
                    pbVar5 = pbVar10;
                    pbVar7 = pbVar4;
                    if (*pbVar4 - 0x3a < 0xfffffff6) break;
                    pbVar4 = pbVar4 + 1;
                    *param_1 = (long)pbVar4;
                    pbVar5 = pbVar2;
                    pbVar10 = pbVar10 + 1;
                    pbVar7 = pbVar2;
                  } while (pbVar4 != pbVar2);
                  lStack_38 = (long)pbVar5 - (long)local_40;
                }
                if ((pbVar7 != pbVar2) && (*pbVar7 == 0x5f)) {
                  *param_1 = (long)(pbVar7 + 1);
                  puVar3 = (undefined8 *)FUN_0074b210(param_1,&local_40);
                  return puVar3;
                }
              }
            }
          }
        }
      }
    }
  }
  return (undefined8 *)0x0;
}


// ===== 00744140  FUN_00744140 =====

void FUN_00744140(long *param_1)

{
  char *pcVar1;
  char cVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  void *pvVar10;
  
  pcVar1 = (char *)*param_1;
  if ((((char *)param_1[1] != pcVar1) && (1 < (ulong)(param_1[1] - (long)pcVar1))) &&
     (*pcVar1 == 'd')) {
    cVar2 = pcVar1[1];
    if (cVar2 == 'X') {
      *param_1 = (long)(pcVar1 + 2);
      lVar4 = FUN_00741a30();
      if (lVar4 == 0) {
        return;
      }
      lVar5 = FUN_00741a30(param_1);
      if (lVar5 == 0) {
        return;
      }
      lVar8 = FUN_00744140(param_1);
      if (lVar8 == 0) {
        return;
      }
      pvVar10 = (void *)param_1[0x266];
      lVar9 = *(long *)((long)pvVar10 + 8);
      puVar6 = (undefined8 *)pvVar10;
      if (lVar9 - 0xfc0U < 0xfffffffffffff010) {
        puVar6 = (undefined8 *)malloc(0x1000);
        if (puVar6 == (undefined8 *)0x0) {
LAB_007443a4:
                    /* WARNING: Subroutine does not return */
          FUN_00739f00();
        }
        lVar9 = 0;
        *puVar6 = pvVar10;
        puVar6[1] = 0;
        param_1[0x266] = (long)puVar6;
      }
      *(long *)((long)puVar6 + 8) = lVar9 + 0x30;
      puVar7 = (undefined8 *)((long)puVar6 + lVar9 + 0x10);
      *puVar7 = &PTR_FUN_0079f590;
      uVar3 = *(ushort *)((long)puVar6 + lVar9 + 0x19);
      *(undefined1 *)((long)puVar6 + lVar9 + 0x18) = 0x52;
      *(long *)((long)puVar6 + lVar9 + 0x20) = lVar4;
      *(long *)((long)puVar6 + lVar9 + 0x28) = lVar5;
      *(long *)((long)puVar6 + lVar9 + 0x30) = lVar8;
    }
    else {
      if (cVar2 == 'x') {
        *param_1 = (long)(pcVar1 + 2);
        lVar4 = FUN_00741a30();
        if (lVar4 == 0) {
          return;
        }
        lVar5 = FUN_00744140(param_1);
        if (lVar5 == 0) {
          return;
        }
        pvVar10 = (void *)param_1[0x266];
        lVar8 = *(long *)((long)pvVar10 + 8);
        puVar6 = (undefined8 *)pvVar10;
        if (lVar8 - 0xfc0U < 0xfffffffffffff010) {
          puVar6 = (undefined8 *)malloc(0x1000);
          if (puVar6 == (undefined8 *)0x0) goto LAB_007443a4;
          lVar8 = 0;
          *puVar6 = pvVar10;
          puVar6[1] = 0;
          param_1[0x266] = (long)puVar6;
        }
        *(long *)((long)puVar6 + 8) = lVar8 + 0x30;
        *(undefined ***)((long)puVar6 + lVar8 + 0x10) = &PTR_FUN_0079f520;
        *(undefined1 *)((long)puVar6 + lVar8 + 0x18) = 0x51;
        *(long *)((long)puVar6 + lVar8 + 0x20) = lVar4;
        *(long *)((long)puVar6 + lVar8 + 0x28) = lVar5;
        *(ushort *)((long)puVar6 + lVar8 + 0x19) =
             *(ushort *)((long)puVar6 + lVar8 + 0x19) & 0xf000 | 0x540;
        *(undefined1 *)((long)puVar6 + lVar8 + 0x30) = 1;
        return;
      }
      if (cVar2 != 'i') goto LAB_0074422c;
      *param_1 = (long)(pcVar1 + 2);
      lVar4 = FUN_0073fc64();
      if (lVar4 == 0) {
        return;
      }
      lVar5 = FUN_00744140(param_1);
      if (lVar5 == 0) {
        return;
      }
      pvVar10 = (void *)param_1[0x266];
      lVar8 = *(long *)((long)pvVar10 + 8);
      puVar6 = (undefined8 *)pvVar10;
      if (lVar8 - 0xfc0U < 0xfffffffffffff010) {
        puVar6 = (undefined8 *)malloc(0x1000);
        if (puVar6 == (undefined8 *)0x0) goto LAB_007443a4;
        lVar8 = 0;
        *puVar6 = pvVar10;
        puVar6[1] = 0;
        param_1[0x266] = (long)puVar6;
      }
      *(long *)((long)puVar6 + 8) = lVar8 + 0x30;
      puVar7 = (undefined8 *)((long)puVar6 + lVar8 + 0x10);
      *puVar7 = &PTR_FUN_0079f520;
      uVar3 = *(ushort *)((long)puVar6 + lVar8 + 0x19);
      *(undefined1 *)((long)puVar6 + lVar8 + 0x18) = 0x51;
      *(long *)((long)puVar6 + lVar8 + 0x20) = lVar4;
      *(long *)((long)puVar6 + lVar8 + 0x28) = lVar5;
      *(undefined1 *)((long)puVar6 + lVar8 + 0x30) = 0;
    }
    *(ushort *)((long)puVar7 + 9) = uVar3 & 0xf000 | 0x540;
    return;
  }
LAB_0074422c:
  FUN_00741a30();
  return;
}


// ===== 007443a8  FUN_007443a8 =====

void FUN_007443a8(long param_1,undefined8 *param_2)

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
      FUN_00739f00();
    }
    lVar2 = 0;
    *puVar1 = pvVar3;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x30;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0079f600;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x46;
  uVar5 = param_2[1];
  uVar4 = *param_2;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = 0;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar5;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar4;
  return;
}


// ===== 0074444c  FUN_0074444c =====

undefined8 * FUN_0074444c(long *param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  long lVar10;
  void *pvVar11;
  
  puVar2 = (undefined8 *)FUN_0073c980();
  puVar3 = puVar2;
  if ((puVar2 != (undefined8 *)0x0) &&
     (puVar3 = (undefined8 *)FUN_00741a30(param_1), puVar3 != (undefined8 *)0x0)) {
    pbVar9 = (byte *)*param_1;
    pbVar1 = (byte *)param_1[1];
    pbVar5 = pbVar9;
    if ((pbVar9 != pbVar1) && (*pbVar9 == 0x6e)) {
      pbVar5 = pbVar9 + 1;
      *param_1 = (long)pbVar5;
    }
    if (pbVar1 != pbVar5) {
      if (*pbVar5 - 0x3a < 0xfffffff6) {
        pbVar9 = (byte *)0x0;
        lVar10 = 0;
      }
      else {
        do {
          pbVar6 = pbVar5;
          if (*pbVar5 - 0x3a < 0xfffffff6) break;
          pbVar5 = pbVar5 + 1;
          *param_1 = (long)pbVar5;
          pbVar6 = pbVar1;
        } while (pbVar5 != pbVar1);
        lVar10 = (long)pbVar6 - (long)pbVar9;
        pbVar5 = pbVar6;
      }
      if ((pbVar5 != pbVar1) && (*pbVar5 == 0x45)) {
        pvVar11 = (void *)param_1[0x266];
        *param_1 = (long)(pbVar5 + 1);
        lVar7 = *(long *)((long)pvVar11 + 8);
        puVar4 = (undefined8 *)pvVar11;
        if (lVar7 - 0xfc0U < 0xfffffffffffff010) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00739f00();
          }
          lVar7 = 0;
          *puVar4 = pvVar11;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        *(long *)((long)puVar4 + 8) = lVar7 + 0x30;
        puVar8 = (undefined8 *)((long)puVar4 + lVar7 + 0x10);
        *puVar8 = &PTR_FUN_0079f670;
        *(undefined1 *)((long)puVar4 + lVar7 + 0x18) = 0x45;
        *(undefined8 **)((long)puVar4 + lVar7 + 0x20) = puVar2;
        *(undefined8 **)((long)puVar4 + lVar7 + 0x28) = puVar3;
        *(byte **)((long)puVar4 + lVar7 + 0x30) = pbVar9;
        *(long *)((long)puVar4 + lVar7 + 0x38) = lVar10;
        *(ushort *)((long)puVar4 + lVar7 + 0x19) =
             *(ushort *)((long)puVar4 + lVar7 + 0x19) & 0xf000 | 0x542;
        return puVar8;
      }
    }
    puVar3 = (undefined8 *)0x0;
  }
  return puVar3;
}


// ===== 007445b4  FUN_007445b4 =====

void FUN_007445b4(long param_1,undefined8 *param_2,ushort *param_3)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar5 + 8);
  puVar2 = (undefined8 *)pvVar5;
  if (lVar3 - 0xfb0U < 0xfffffffffffff010) {
    puVar2 = (undefined8 *)malloc(0x1000);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00739f00();
    }
    lVar3 = 0;
    *puVar2 = pvVar5;
    puVar2[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar2;
  }
  *(long *)((long)puVar2 + 8) = lVar3 + 0x40;
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_0079ec60;
  uVar1 = *param_3;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0x3c;
  uVar4 = *param_2;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x38) = 0;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x40) = 0;
  *(char **)((long)puVar2 + lVar3 + 0x20) = "noexcept ";
  *(undefined8 *)((long)puVar2 + lVar3 + 0x28) = 9;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x30) = uVar4;
  *(ushort *)((long)puVar2 + lVar3 + 0x19) =
       *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000 | uVar1 & 0x3f | 0x540;
  return;
}


// ===== 00744674  FUN_00744674 =====

undefined8 * FUN_00744674(long *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  short *psVar7;
  char *pcVar8;
  long lVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined1 uVar12;
  short *psVar13;
  void *pvVar14;
  long *plVar15;
  undefined8 *puVar16;
  size_t sVar17;
  long lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  psVar7 = (short *)*param_1;
  psVar13 = (short *)param_1[1];
  if ((ulong)((long)psVar13 - (long)psVar7) < 2) {
    return (undefined8 *)0x0;
  }
  if (*psVar7 == 0x5172) {
    lVar11 = param_1[2];
    lVar2 = param_1[3];
    psVar7 = psVar7 + 1;
    plVar1 = param_1 + 5;
    *param_1 = (long)psVar7;
    while ((psVar7 == psVar13 || ((char)*psVar7 != '_'))) {
      lVar4 = FUN_0073c980(param_1);
      if (lVar4 == 0) {
        return (undefined8 *)0x0;
      }
      plVar15 = (long *)param_1[3];
      if (plVar15 == (long *)param_1[4]) {
        plVar6 = (long *)param_1[2];
        sVar17 = (long)plVar15 - (long)plVar6;
        if (plVar6 == plVar1) {
          pvVar14 = malloc(sVar17 * 2);
          if (pvVar14 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar15 != plVar1) {
            memcpy(pvVar14,plVar1,sVar17);
          }
          param_1[2] = (long)pvVar14;
        }
        else {
          pvVar14 = realloc(plVar6,sVar17 * 2);
          param_1[2] = (long)pvVar14;
          if (pvVar14 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar15 = (long *)((long)pvVar14 + sVar17);
        param_1[4] = (long)((long)pvVar14 + ((long)sVar17 >> 2) * 8);
      }
      param_1[3] = (long)(plVar15 + 1);
      *plVar15 = lVar4;
      psVar13 = (short *)param_1[1];
      psVar7 = (short *)*param_1;
    }
    *param_1 = (long)((long)psVar7 + 1);
    auVar19 = FUN_0073ea94(param_1,lVar2 - lVar11 >> 3);
    psVar7 = (short *)*param_1;
    if (psVar7 == (short *)param_1[1]) {
      return (undefined8 *)0x0;
    }
  }
  else {
    if (*psVar7 != 0x7172) {
      return (undefined8 *)0x0;
    }
    auVar19 = ZEXT816(0);
    psVar7 = psVar7 + 1;
    *param_1 = (long)psVar7;
    if (psVar7 == psVar13) {
      return (undefined8 *)0x0;
    }
  }
  lVar11 = param_1[2];
  lVar2 = param_1[3];
  plVar1 = param_1 + 5;
  do {
    if ((char)*psVar7 == 'X') {
      *param_1 = (long)((long)psVar7 + 1);
      lVar4 = FUN_00741a30(param_1);
      if (lVar4 == 0) {
        return (undefined8 *)0x0;
      }
      pcVar8 = (char *)*param_1;
      pcVar3 = (char *)param_1[1];
      if ((pcVar8 == pcVar3) || (*pcVar8 != 'N')) {
        uVar12 = 0;
        if (pcVar8 != pcVar3) goto LAB_007448f4;
LAB_00744920:
        lVar18 = 0;
      }
      else {
        pcVar8 = pcVar8 + 1;
        uVar12 = 1;
        *param_1 = (long)pcVar8;
        if (pcVar8 == pcVar3) goto LAB_00744920;
LAB_007448f4:
        if (*pcVar8 != 'R') goto LAB_00744920;
        *param_1 = (long)(pcVar8 + 1);
        lVar18 = FUN_0073dec0(param_1,0);
        if (lVar18 == 0) {
          return (undefined8 *)0x0;
        }
      }
      pvVar14 = (void *)param_1[0x266];
      lVar9 = *(long *)((long)pvVar14 + 8);
      puVar5 = (undefined8 *)pvVar14;
      if (lVar9 - 0xfc0U < 0xfffffffffffff010) {
        puVar5 = (undefined8 *)malloc(0x1000);
        if (puVar5 == (undefined8 *)0x0) goto LAB_00744b34;
        lVar9 = 0;
        *puVar5 = pvVar14;
        puVar5[1] = 0;
        param_1[0x266] = (long)puVar5;
      }
      *(long *)((long)puVar5 + 8) = lVar9 + 0x30;
      puVar16 = (undefined8 *)((long)puVar5 + lVar9 + 0x10);
      *puVar16 = &PTR_FUN_0079f6e0;
      *(undefined1 *)((long)puVar5 + lVar9 + 0x18) = 0x54;
      *(long *)((long)puVar5 + lVar9 + 0x20) = lVar4;
      *(undefined1 *)((long)puVar5 + lVar9 + 0x28) = uVar12;
      *(ushort *)((long)puVar5 + lVar9 + 0x19) =
           *(ushort *)((long)puVar5 + lVar9 + 0x19) & 0xf000 | 0x540;
      *(long *)((long)puVar5 + lVar9 + 0x30) = lVar18;
    }
    else {
      if ((char)*psVar7 == 'T') {
        *param_1 = (long)((long)psVar7 + 1);
        lVar4 = FUN_0073c980(param_1);
        if (lVar4 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar14 = (void *)param_1[0x266];
        lVar18 = *(long *)((long)pvVar14 + 8);
        puVar16 = (undefined8 *)pvVar14;
        if (lVar18 - 0xfd0U < 0xfffffffffffff010) {
          puVar16 = (undefined8 *)malloc(0x1000);
          if (puVar16 == (undefined8 *)0x0) goto LAB_00744b34;
          lVar18 = 0;
          *puVar16 = pvVar14;
          puVar16[1] = 0;
          param_1[0x266] = (long)puVar16;
        }
        lVar9 = (long)puVar16 + lVar18;
        ppuVar10 = &PTR_FUN_0079f750;
        *(long *)((long)puVar16 + 8) = lVar18 + 0x20;
        uVar12 = 0x55;
      }
      else {
        if ((char)*psVar7 != 'Q') {
          return (undefined8 *)0x0;
        }
        *param_1 = (long)((long)psVar7 + 1);
        lVar4 = FUN_00741a30(param_1);
        if (lVar4 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar14 = (void *)param_1[0x266];
        lVar18 = *(long *)((long)pvVar14 + 8);
        puVar16 = (undefined8 *)pvVar14;
        if (lVar18 - 0xfd0U < 0xfffffffffffff010) {
          puVar16 = (undefined8 *)malloc(0x1000);
          if (puVar16 == (undefined8 *)0x0) goto LAB_00744b34;
          lVar18 = 0;
          *puVar16 = pvVar14;
          puVar16[1] = 0;
          param_1[0x266] = (long)puVar16;
        }
        lVar9 = (long)puVar16 + lVar18;
        ppuVar10 = &PTR_FUN_0079f7c0;
        *(long *)((long)puVar16 + 8) = lVar18 + 0x20;
        uVar12 = 0x56;
      }
      puVar16 = (undefined8 *)(lVar9 + 0x10);
      *puVar16 = ppuVar10;
      *(undefined1 *)(lVar9 + 0x18) = uVar12;
      *(ushort *)(lVar9 + 0x19) = *(ushort *)(lVar9 + 0x19) & 0xf000 | 0x540;
      *(long *)(lVar9 + 0x20) = lVar4;
    }
    plVar15 = (long *)param_1[3];
    if (plVar15 == (long *)param_1[4]) {
      plVar6 = (long *)param_1[2];
      sVar17 = (long)plVar15 - (long)plVar6;
      if (plVar6 == plVar1) {
        pvVar14 = malloc(sVar17 * 2);
        if (pvVar14 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (plVar15 != plVar1) {
          memcpy(pvVar14,plVar1,sVar17);
        }
        param_1[2] = (long)pvVar14;
      }
      else {
        pvVar14 = realloc(plVar6,sVar17 * 2);
        param_1[2] = (long)pvVar14;
        if (pvVar14 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      plVar15 = (long *)((long)pvVar14 + sVar17);
      param_1[4] = (long)((long)pvVar14 + ((long)sVar17 >> 2) * 8);
    }
    param_1[3] = (long)(plVar15 + 1);
    *plVar15 = (long)puVar16;
    psVar7 = (short *)*param_1;
    if ((psVar7 != (short *)param_1[1]) && ((char)*psVar7 == 'E')) {
      *param_1 = (long)((long)psVar7 + 1);
      auVar20 = FUN_0073ea94(param_1,lVar2 - lVar11 >> 3);
      pvVar14 = (void *)param_1[0x266];
      lVar11 = *(long *)((long)pvVar14 + 8);
      puVar16 = (undefined8 *)pvVar14;
      if (lVar11 - 0xfc0U < 0xfffffffffffff010) {
        puVar16 = (undefined8 *)malloc(0x1000);
        if (puVar16 == (undefined8 *)0x0) {
LAB_00744b34:
                    /* WARNING: Subroutine does not return */
          FUN_00739f00();
        }
        lVar11 = 0;
        *puVar16 = pvVar14;
        puVar16[1] = 0;
        param_1[0x266] = (long)puVar16;
      }
      *(long *)((long)puVar16 + 8) = lVar11 + 0x30;
      puVar5 = (undefined8 *)((long)puVar16 + lVar11 + 0x10);
      *puVar5 = &PTR_FUN_0079f830;
      *(undefined1 *)((long)puVar16 + lVar11 + 0x18) = 0x53;
      *(undefined1 (*) [16])((long)puVar16 + lVar11 + 0x30) = auVar20;
      *(undefined1 (*) [16])((long)puVar16 + lVar11 + 0x20) = auVar19;
      *(ushort *)((long)puVar16 + lVar11 + 0x19) =
           *(ushort *)((long)puVar16 + lVar11 + 0x19) & 0xf000 | 0x540;
      return puVar5;
    }
    if (psVar7 == (short *)param_1[1]) {
      return (undefined8 *)0x0;
    }
  } while( true );
}


// ===== 00744b44  FUN_00744b44 =====

undefined8 * FUN_00744b44(long *param_1)

{
  long *__src;
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *__ptr;
  undefined8 *puVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  long *plVar11;
  void *pvVar12;
  undefined1 uVar13;
  byte *pbVar14;
  size_t __n;
  long lVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  undefined1 auVar18 [16];
  
  puVar2 = (undefined8 *)FUN_0073c980();
  puVar3 = puVar2;
  if ((puVar2 != (undefined8 *)0x0) &&
     (puVar3 = (undefined8 *)FUN_00741a30(param_1), puVar3 != (undefined8 *)0x0)) {
    pbVar16 = (byte *)*param_1;
    pbVar5 = (byte *)param_1[1];
    pbVar14 = pbVar16;
    if ((pbVar16 != pbVar5) && (*pbVar16 == 0x6e)) {
      pbVar14 = pbVar16 + 1;
      *param_1 = (long)pbVar14;
    }
    if (pbVar5 != pbVar14) {
      if (*pbVar14 - 0x3a < 0xfffffff6) {
        pbVar16 = (byte *)0x0;
        lVar10 = 0;
      }
      else {
        do {
          pbVar8 = pbVar14;
          if (*pbVar14 - 0x3a < 0xfffffff6) break;
          pbVar14 = pbVar14 + 1;
          *param_1 = (long)pbVar14;
          pbVar8 = pbVar5;
        } while (pbVar14 != pbVar5);
        lVar10 = (long)pbVar8 - (long)pbVar16;
        pbVar14 = pbVar8;
      }
      if (pbVar14 != pbVar5) {
        lVar7 = param_1[2];
        lVar1 = param_1[3];
        __src = param_1 + 5;
        do {
          if (*pbVar14 != 0x5f) {
            if ((pbVar14 == pbVar5) || (*pbVar14 != 0x70)) {
              uVar13 = 0;
            }
            else {
              pbVar14 = pbVar14 + 1;
              uVar13 = 1;
              *param_1 = (long)pbVar14;
            }
            if ((pbVar14 != pbVar5) && (*pbVar14 == 0x45)) {
              *param_1 = (long)(pbVar14 + 1);
              auVar18 = FUN_0073ea94(param_1,lVar1 - lVar7 >> 3);
              pvVar12 = (void *)param_1[0x266];
              lVar7 = *(long *)((long)pvVar12 + 8);
              puVar4 = (undefined8 *)pvVar12;
              if (lVar7 - 4000U < 0xfffffffffffff010) {
                puVar4 = (undefined8 *)malloc(0x1000);
                if (puVar4 == (undefined8 *)0x0) goto LAB_00744e8c;
                lVar7 = 0;
                *puVar4 = pvVar12;
                puVar4[1] = 0;
                param_1[0x266] = (long)puVar4;
              }
              *(long *)((long)puVar4 + 8) = lVar7 + 0x50;
              puVar17 = (undefined8 *)((long)puVar4 + lVar7 + 0x10);
              *puVar17 = &PTR_FUN_0079f8a0;
              *(undefined1 *)((long)puVar4 + lVar7 + 0x18) = 0x3b;
              *(undefined1 (*) [16])((long)puVar4 + lVar7 + 0x40) = auVar18;
              *(undefined1 *)((long)puVar4 + lVar7 + 0x50) = uVar13;
              *(ushort *)((long)puVar4 + lVar7 + 0x19) =
                   *(ushort *)((long)puVar4 + lVar7 + 0x19) & 0xf000 | 0x540;
              *(undefined8 **)((long)puVar4 + lVar7 + 0x20) = puVar2;
              *(undefined8 **)((long)puVar4 + lVar7 + 0x28) = puVar3;
              *(byte **)((long)puVar4 + lVar7 + 0x30) = pbVar16;
              *(long *)((long)puVar4 + lVar7 + 0x38) = lVar10;
              return puVar17;
            }
            break;
          }
          pbVar14 = pbVar14 + 1;
          *param_1 = (long)pbVar14;
          if ((pbVar5 == pbVar14) || (pbVar8 = pbVar14, *pbVar14 - 0x3a < 0xfffffff6)) {
            pbVar14 = (byte *)0x0;
            lVar15 = 0;
          }
          else {
            do {
              pbVar9 = pbVar8;
              if (*pbVar8 - 0x3a < 0xfffffff6) break;
              pbVar8 = pbVar8 + 1;
              *param_1 = (long)pbVar8;
              pbVar9 = pbVar5;
            } while (pbVar8 != pbVar5);
            lVar15 = (long)pbVar9 - (long)pbVar14;
          }
          pvVar12 = (void *)param_1[0x266];
          lVar6 = *(long *)((long)pvVar12 + 8);
          puVar4 = (undefined8 *)pvVar12;
          if (lVar6 - 0xfd0U < 0xfffffffffffff010) {
            puVar4 = (undefined8 *)malloc(0x1000);
            if (puVar4 == (undefined8 *)0x0) {
LAB_00744e8c:
                    /* WARNING: Subroutine does not return */
              FUN_00739f00();
            }
            lVar6 = 0;
            *puVar4 = pvVar12;
            puVar4[1] = 0;
            param_1[0x266] = (long)puVar4;
          }
          *(long *)((long)puVar4 + 8) = lVar6 + 0x20;
          puVar17 = (undefined8 *)((long)puVar4 + lVar6 + 0x10);
          *puVar17 = &PTR_FUN_0079e260;
          *(byte **)((long)puVar4 + lVar6 + 0x20) = pbVar14;
          *(undefined1 *)((long)puVar4 + lVar6 + 0x18) = 8;
          *(long *)((long)puVar4 + lVar6 + 0x28) = lVar15;
          *(ushort *)((long)puVar4 + lVar6 + 0x19) =
               *(ushort *)((long)puVar4 + lVar6 + 0x19) & 0xf000 | 0x540;
          plVar11 = (long *)param_1[3];
          if (plVar11 == (long *)param_1[4]) {
            __ptr = (long *)param_1[2];
            __n = (long)plVar11 - (long)__ptr;
            if (__ptr == __src) {
              pvVar12 = malloc(__n * 2);
              if (pvVar12 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              if (plVar11 != __src) {
                memcpy(pvVar12,__src,__n);
              }
              param_1[2] = (long)pvVar12;
            }
            else {
              pvVar12 = realloc(__ptr,__n * 2);
              param_1[2] = (long)pvVar12;
              if (pvVar12 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
            }
            plVar11 = (long *)((long)pvVar12 + __n);
            param_1[4] = (long)((long)pvVar12 + ((long)__n >> 2) * 8);
          }
          param_1[3] = (long)(plVar11 + 1);
          *plVar11 = (long)puVar17;
          pbVar14 = (byte *)*param_1;
          pbVar5 = (byte *)param_1[1];
        } while (pbVar14 != pbVar5);
      }
    }
    puVar3 = (undefined8 *)0x0;
  }
  return puVar3;
}


// ===== 00744e98  FUN_00744e98 =====

void FUN_00744e98(long param_1,undefined8 *param_2)

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
      FUN_00739f00();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0079f4b0;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x2a;
  uVar3 = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  return;
}


// ===== 00744f38  FUN_00744f38 =====

void FUN_00744f38(long param_1,undefined8 *param_2)

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
      FUN_00739f00();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0079f910;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x3e;
  uVar3 = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  return;
}


// ===== 00744fd8  FUN_00744fd8 =====

void FUN_00744fd8(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar4 + 8);
  puVar1 = (undefined8 *)pvVar4;
  if (lVar2 - 0xfb0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00739f00();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x40;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0079ec60;
  uVar3 = *param_2;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x3c;
  *(char **)((long)puVar1 + lVar2 + 0x20) = "sizeof... ";
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = 10;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x38) = 0;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x40) = 0;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  return;
}


// ===== 0074508c  FUN_0074508c =====

void FUN_0074508c(long param_1,undefined8 *param_2)

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
      FUN_00739f00();
    }
    lVar2 = 0;
    *puVar1 = pvVar3;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0079f980;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0;
  uVar5 = param_2[1];
  uVar4 = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar5;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar4;
  return;
}


// ===== 00745128  FUN_00745128 =====

void FUN_00745128(long param_1,undefined8 *param_2,undefined8 *param_3)

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
      FUN_00739f00();
    }
    lVar2 = 0;
    *puVar1 = pvVar3;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x30;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0079f600;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x46;
  uVar5 = param_3[1];
  uVar4 = *param_3;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar5;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar4;
  return;
}


// ===== 007451d4  FUN_007451d4 =====

undefined8 * FUN_007451d4(long param_1,char *param_2)

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
      FUN_00739f00();
    }
    lVar3 = 0;
    *puVar1 = pvVar5;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar3 + 0x20;
  sVar2 = strlen(param_2);
  puVar4 = (undefined8 *)((long)puVar1 + lVar3 + 0x10);
  *puVar4 = &PTR_FUN_0079e260;
  *(undefined1 *)((long)puVar1 + lVar3 + 0x18) = 8;
  *(char **)((long)puVar1 + lVar3 + 0x20) = param_2;
  *(size_t *)((long)puVar1 + lVar3 + 0x28) = sVar2;
  *(ushort *)((long)puVar1 + lVar3 + 0x19) =
       *(ushort *)((long)puVar1 + lVar3 + 0x19) & 0xf000 | 0x540;
  return puVar4;
}


// ===== 00745280  FUN_00745280 =====

void FUN_00745280(long param_1,undefined8 *param_2)

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
      FUN_00739f00();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0079f9f0;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x48;
  uVar3 = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  return;
}


// ===== 00745320  FUN_00745320 =====

undefined8 * FUN_00745320(long *param_1,ulong param_2)

{
  byte *pbVar1;
  short *psVar2;
  char *pcVar3;
  ushort uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  void *pvVar12;
  undefined8 *local_70;
  undefined8 *local_68;
  
  psVar2 = (short *)*param_1;
  uVar11 = param_1[1] - (long)psVar2;
  if (uVar11 < 3) {
    if (uVar11 == 2) goto LAB_00745384;
  }
  else {
    if (*psVar2 == 0x7273 && (char)psVar2[1] == 'N') {
      *param_1 = (long)psVar2 + 3;
      puVar8 = (undefined8 *)FUN_0074d2dc(param_1);
      if (puVar8 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      puVar5 = puVar8;
      if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
        lVar7 = FUN_00740278(param_1,0);
        if (lVar7 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar12 = (void *)param_1[0x266];
        lVar10 = *(long *)((long)pvVar12 + 8);
        puVar6 = (undefined8 *)pvVar12;
        if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
          puVar6 = (undefined8 *)malloc(0x1000);
          if (puVar6 == (undefined8 *)0x0) goto LAB_00745990;
          lVar10 = 0;
          *puVar6 = pvVar12;
          puVar6[1] = 0;
          param_1[0x266] = (long)puVar6;
        }
        *(long *)((long)puVar6 + 8) = lVar10 + 0x20;
        puVar5 = (undefined8 *)((long)puVar6 + lVar10 + 0x10);
        *puVar5 = &PTR_FUN_007a0160;
        *(undefined8 **)((long)puVar6 + lVar10 + 0x20) = puVar8;
        *(long *)((long)puVar6 + lVar10 + 0x28) = lVar7;
        *(undefined1 *)((long)puVar6 + lVar10 + 0x18) = 0x2d;
        *(ushort *)((long)puVar6 + lVar10 + 0x19) =
             *(ushort *)((long)puVar6 + lVar10 + 0x19) & 0xf000 | 0x540;
      }
      while ((pcVar3 = (char *)*param_1, pcVar3 == (char *)param_1[1] || (*pcVar3 != 'E'))) {
        puVar8 = (undefined8 *)FUN_0073fc64(param_1);
        if (puVar8 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        puVar6 = puVar8;
        if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
          lVar7 = FUN_00740278(param_1,0);
          if (lVar7 == 0) {
            return (undefined8 *)0x0;
          }
          pvVar12 = (void *)param_1[0x266];
          lVar10 = *(long *)((long)pvVar12 + 8);
          puVar9 = (undefined8 *)pvVar12;
          if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
            puVar9 = (undefined8 *)malloc(0x1000);
            if (puVar9 == (undefined8 *)0x0) goto LAB_00745990;
            lVar10 = 0;
            *puVar9 = pvVar12;
            puVar9[1] = 0;
            param_1[0x266] = (long)puVar9;
          }
          *(long *)((long)puVar9 + 8) = lVar10 + 0x20;
          puVar6 = (undefined8 *)((long)puVar9 + lVar10 + 0x10);
          *puVar6 = &PTR_FUN_007a0160;
          *(undefined8 **)((long)puVar9 + lVar10 + 0x20) = puVar8;
          *(long *)((long)puVar9 + lVar10 + 0x28) = lVar7;
          *(undefined1 *)((long)puVar9 + lVar10 + 0x18) = 0x2d;
          *(ushort *)((long)puVar9 + lVar10 + 0x19) =
               *(ushort *)((long)puVar9 + lVar10 + 0x19) & 0xf000 | 0x540;
        }
        pvVar12 = (void *)param_1[0x266];
        lVar7 = *(long *)((long)pvVar12 + 8);
        puVar8 = (undefined8 *)pvVar12;
        if (lVar7 - 0xfd0U < 0xfffffffffffff010) {
          puVar8 = (undefined8 *)malloc(0x1000);
          if (puVar8 == (undefined8 *)0x0) goto LAB_00745990;
          lVar7 = 0;
          *puVar8 = pvVar12;
          puVar8[1] = 0;
          param_1[0x266] = (long)puVar8;
        }
        *(long *)((long)puVar8 + 8) = lVar7 + 0x20;
        puVar9 = (undefined8 *)((long)puVar8 + lVar7 + 0x10);
        *puVar9 = &PTR_FUN_0079fa60;
        *(undefined1 *)((long)puVar8 + lVar7 + 0x18) = 0x17;
        *(undefined8 **)((long)puVar8 + lVar7 + 0x20) = puVar5;
        *(undefined8 **)((long)puVar8 + lVar7 + 0x28) = puVar6;
        *(ushort *)((long)puVar8 + lVar7 + 0x19) =
             *(ushort *)((long)puVar8 + lVar7 + 0x19) & 0xf000 | 0x540;
        puVar5 = puVar9;
      }
      *param_1 = (long)(pcVar3 + 1);
      lVar7 = FUN_0074d460(param_1);
      if (lVar7 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar12 = (void *)param_1[0x266];
      lVar10 = *(long *)((long)pvVar12 + 8);
      puVar8 = (undefined8 *)pvVar12;
      if (0xfffffffffffff00f < lVar10 - 0xfd0U) {
LAB_007458c0:
        *(long *)((long)puVar8 + 8) = lVar10 + 0x20;
        puVar6 = (undefined8 *)((long)puVar8 + lVar10 + 0x10);
        *puVar6 = &PTR_FUN_0079fa60;
        uVar4 = *(ushort *)((long)puVar8 + lVar10 + 0x19);
        *(undefined1 *)((long)puVar8 + lVar10 + 0x18) = 0x17;
        *(undefined8 **)((long)puVar8 + lVar10 + 0x20) = puVar5;
        *(long *)((long)puVar8 + lVar10 + 0x28) = lVar7;
        goto LAB_00745964;
      }
      puVar8 = (undefined8 *)malloc(0x1000);
      if (puVar8 != (undefined8 *)0x0) {
        lVar10 = 0;
        *puVar8 = pvVar12;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
        goto LAB_007458c0;
      }
      goto LAB_00745990;
    }
LAB_00745384:
    if (*psVar2 == 0x7273) {
      pbVar1 = (byte *)(psVar2 + 1);
      *param_1 = (long)pbVar1;
      if (((byte *)param_1[1] != pbVar1) && (0xfffffff5 < *pbVar1 - 0x3a)) {
        puVar5 = (undefined8 *)FUN_0073fc64(param_1);
        if (puVar5 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        local_68 = puVar5;
        if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
          local_70 = (undefined8 *)FUN_00740278(param_1,0);
          if (local_70 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          puVar5 = (undefined8 *)FUN_00740748(param_1,&local_68,&local_70);
        }
        puVar6 = (undefined8 *)0x0;
        do {
          puVar8 = puVar5;
          if (puVar6 == (undefined8 *)0x0) {
            if ((param_2 & 1) != 0) {
              pvVar12 = (void *)param_1[0x266];
              lVar7 = *(long *)((long)pvVar12 + 8);
              puVar5 = (undefined8 *)pvVar12;
              if (lVar7 - 0xfd0U < 0xfffffffffffff010) {
                puVar5 = (undefined8 *)malloc(0x1000);
                if (puVar5 == (undefined8 *)0x0) goto LAB_00745990;
                lVar7 = 0;
                *puVar5 = pvVar12;
                puVar5[1] = 0;
                param_1[0x266] = (long)puVar5;
              }
              *(long *)((long)puVar5 + 8) = lVar7 + 0x20;
              puVar9 = (undefined8 *)((long)puVar5 + lVar7 + 0x10);
              *puVar9 = &PTR_FUN_0079fc20;
              *(undefined1 *)((long)puVar5 + lVar7 + 0x18) = 0x2e;
              *(ushort *)((long)puVar5 + lVar7 + 0x19) =
                   *(ushort *)((long)puVar5 + lVar7 + 0x19) & 0xf000 | 0x540;
              puVar5 = (undefined8 *)((long)puVar5 + lVar7 + 0x20);
              goto LAB_007457e0;
            }
          }
          else {
            pvVar12 = (void *)param_1[0x266];
            lVar7 = *(long *)((long)pvVar12 + 8);
            puVar5 = (undefined8 *)pvVar12;
            if (lVar7 - 0xfd0U < 0xfffffffffffff010) {
              puVar5 = (undefined8 *)malloc(0x1000);
              if (puVar5 == (undefined8 *)0x0) goto LAB_00745990;
              lVar7 = 0;
              *puVar5 = pvVar12;
              puVar5[1] = 0;
              param_1[0x266] = (long)puVar5;
            }
            *(long *)((long)puVar5 + 8) = lVar7 + 0x20;
            puVar9 = (undefined8 *)((long)puVar5 + lVar7 + 0x10);
            *puVar9 = &PTR_FUN_0079fa60;
            *(undefined1 *)((long)puVar5 + lVar7 + 0x18) = 0x17;
            *(undefined8 **)((long)puVar5 + lVar7 + 0x20) = puVar6;
            *(ushort *)((long)puVar5 + lVar7 + 0x19) =
                 *(ushort *)((long)puVar5 + lVar7 + 0x19) & 0xf000 | 0x540;
            puVar5 = (undefined8 *)((long)puVar5 + lVar7 + 0x28);
LAB_007457e0:
            *puVar5 = puVar8;
            puVar8 = puVar9;
          }
          pcVar3 = (char *)*param_1;
          if ((pcVar3 != (char *)param_1[1]) && (*pcVar3 == 'E')) {
            *param_1 = (long)(pcVar3 + 1);
            goto LAB_007458f4;
          }
          puVar5 = (undefined8 *)FUN_0073fc64(param_1);
          if (puVar5 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          puVar6 = puVar8;
          if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
            lVar7 = FUN_00740278(param_1,0);
            if (lVar7 == 0) {
              return (undefined8 *)0x0;
            }
            pvVar12 = (void *)param_1[0x266];
            lVar10 = *(long *)((long)pvVar12 + 8);
            puVar8 = (undefined8 *)pvVar12;
            if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
              puVar8 = (undefined8 *)malloc(0x1000);
              if (puVar8 == (undefined8 *)0x0) goto LAB_00745990;
              lVar10 = 0;
              *puVar8 = pvVar12;
              puVar8[1] = 0;
              param_1[0x266] = (long)puVar8;
            }
            *(long *)((long)puVar8 + 8) = lVar10 + 0x20;
            puVar9 = (undefined8 *)((long)puVar8 + lVar10 + 0x10);
            *puVar9 = &PTR_FUN_007a0160;
            *(undefined1 *)((long)puVar8 + lVar10 + 0x18) = 0x2d;
            *(undefined8 **)((long)puVar8 + lVar10 + 0x20) = puVar5;
            *(long *)((long)puVar8 + lVar10 + 0x28) = lVar7;
            *(ushort *)((long)puVar8 + lVar10 + 0x19) =
                 *(ushort *)((long)puVar8 + lVar10 + 0x19) & 0xf000 | 0x540;
            puVar5 = puVar9;
          }
        } while( true );
      }
      puVar8 = (undefined8 *)FUN_0074d2dc(param_1);
      if (puVar8 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      local_68 = puVar8;
      if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
        local_70 = (undefined8 *)FUN_00740278(param_1,0);
        if (local_70 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        puVar8 = (undefined8 *)FUN_00740748(param_1,&local_68,&local_70);
      }
LAB_007458f4:
      lVar7 = FUN_0074d460(param_1);
      if (lVar7 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar12 = (void *)param_1[0x266];
      lVar10 = *(long *)((long)pvVar12 + 8);
      puVar5 = (undefined8 *)pvVar12;
      if (0xfffffffffffff00f < lVar10 - 0xfd0U) {
LAB_00745934:
        *(long *)((long)puVar5 + 8) = lVar10 + 0x20;
        puVar6 = (undefined8 *)((long)puVar5 + lVar10 + 0x10);
        *puVar6 = &PTR_FUN_0079fa60;
        uVar4 = *(ushort *)((long)puVar5 + lVar10 + 0x19);
        *(undefined8 **)((long)puVar5 + lVar10 + 0x20) = puVar8;
        *(long *)((long)puVar5 + lVar10 + 0x28) = lVar7;
        *(undefined1 *)((long)puVar5 + lVar10 + 0x18) = 0x17;
LAB_00745964:
        *(ushort *)((long)puVar6 + 9) = uVar4 & 0xf000 | 0x540;
        return puVar6;
      }
      puVar5 = (undefined8 *)malloc(0x1000);
      if (puVar5 != (undefined8 *)0x0) {
        lVar10 = 0;
        *puVar5 = pvVar12;
        puVar5[1] = 0;
        param_1[0x266] = (long)puVar5;
        goto LAB_00745934;
      }
      goto LAB_00745990;
    }
  }
  puVar5 = (undefined8 *)FUN_0074d460(param_1);
  puVar8 = puVar5;
  if ((puVar5 != (undefined8 *)0x0) && ((param_2 & 1) != 0)) {
    pvVar12 = (void *)param_1[0x266];
    lVar7 = *(long *)((long)pvVar12 + 8);
    puVar6 = (undefined8 *)pvVar12;
    if (lVar7 - 0xfd0U < 0xfffffffffffff010) {
      puVar6 = (undefined8 *)malloc(0x1000);
      if (puVar6 == (undefined8 *)0x0) {
LAB_00745990:
                    /* WARNING: Subroutine does not return */
        FUN_00739f00();
      }
      lVar7 = 0;
      *puVar6 = pvVar12;
      puVar6[1] = 0;
      param_1[0x266] = (long)puVar6;
    }
    *(long *)((long)puVar6 + 8) = lVar7 + 0x20;
    puVar8 = (undefined8 *)((long)puVar6 + lVar7 + 0x10);
    *puVar8 = &PTR_FUN_0079fc20;
    *(undefined8 **)((long)puVar6 + lVar7 + 0x20) = puVar5;
    *(undefined1 *)((long)puVar6 + lVar7 + 0x18) = 0x2e;
    *(ushort *)((long)puVar6 + lVar7 + 0x19) =
         *(ushort *)((long)puVar6 + lVar7 + 0x19) & 0xf000 | 0x540;
  }
  return puVar8;
}


// ===== 00745994  FUN_00745994 =====

void FUN_00745994(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 ushort *param_5)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  pvVar5 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar5 + 8);
  puVar2 = (undefined8 *)pvVar5;
  if (lVar3 - 0xfc0U < 0xfffffffffffff010) {
    puVar2 = (undefined8 *)malloc(0x1000);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00739f00();
    }
    lVar3 = 0;
    *puVar2 = pvVar5;
    puVar2[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar2;
  }
  *(long *)((long)puVar2 + 8) = lVar3 + 0x30;
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_0079e790;
  uVar1 = *param_5;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0x36;
  uVar7 = param_3[1];
  uVar6 = *param_3;
  uVar4 = *param_4;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x20) = *param_2;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x30) = uVar7;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x28) = uVar6;
  *(ushort *)((long)puVar2 + lVar3 + 0x19) =
       *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000 | uVar1 & 0x3f | 0x540;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x38) = uVar4;
  return;
}


// ===== 00745a60  FUN_00745a60 =====

void FUN_00745a60(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  void *pvVar5;
  size_t __size;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  size_t sVar10;
  char *__src;
  
  if (*(int *)(param_2 + 4) == 0) {
    if (*(long *)(param_1 + 0x20) == 2) {
      if (**(short **)(param_1 + 0x18) == 0x3e3e) goto LAB_00745ef0;
      goto LAB_00745a88;
    }
    if ((*(long *)(param_1 + 0x20) != 1) || ((char)**(short **)(param_1 + 0x18) != '>'))
    goto LAB_00745a88;
LAB_00745ef0:
    lVar6 = param_2[1];
    pvVar5 = (void *)*param_2;
    *(undefined4 *)(param_2 + 4) = 1;
    uVar8 = lVar6 + 1;
    if ((ulong)param_2[2] < uVar8) {
      sVar10 = param_2[2] * 2;
      uVar8 = lVar6 + 0x3e1;
      if (sVar10 < uVar8 || sVar10 - uVar8 == 0) {
        sVar10 = uVar8;
      }
      param_2[2] = sVar10;
      pvVar5 = realloc(pvVar5,sVar10);
      *param_2 = pvVar5;
      if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar6 = param_2[1];
      uVar8 = lVar6 + 1;
    }
    bVar3 = true;
    param_2[1] = uVar8;
    *(undefined1 *)((long)pvVar5 + lVar6) = 0x28;
  }
  else {
LAB_00745a88:
    bVar3 = false;
  }
  plVar9 = *(long **)(param_1 + 0x10);
  uVar2 = (uint)*(ushort *)(param_1 + 9) << 10;
  bVar4 = (uVar2 & 0xfc00) != 0x4400;
  uVar1 = 0xf;
  if (bVar4) {
    uVar1 = (int)((uint)*(ushort *)(param_1 + 9) << 0x1a) >> 0x1a;
  }
  if (bVar4) {
    uVar1 = uVar1 + 1;
  }
  if ((uint)((int)((uint)*(ushort *)((long)plVar9 + 9) << 0x1a) >> 0x1a) < uVar1) {
    (**(code **)(*plVar9 + 0x20))(plVar9,param_2);
    if ((*(ushort *)((long)plVar9 + 9) & 0xc0) != 0x40) {
      (**(code **)(*plVar9 + 0x28))(plVar9,param_2);
    }
  }
  else {
    lVar6 = param_2[1];
    pvVar5 = (void *)*param_2;
    uVar8 = lVar6 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    if ((ulong)param_2[2] < uVar8) {
      sVar10 = param_2[2] * 2;
      uVar8 = lVar6 + 0x3e1;
      if (sVar10 < uVar8 || sVar10 - uVar8 == 0) {
        sVar10 = uVar8;
      }
      param_2[2] = sVar10;
      pvVar5 = realloc(pvVar5,sVar10);
      *param_2 = pvVar5;
      if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar6 = param_2[1];
      uVar8 = lVar6 + 1;
    }
    param_2[1] = uVar8;
    lVar7 = *plVar9;
    *(undefined1 *)((long)pvVar5 + lVar6) = 0x28;
    (**(code **)(lVar7 + 0x20))(plVar9,param_2);
    if ((*(ushort *)((long)plVar9 + 9) & 0xc0) != 0x40) {
      (**(code **)(*plVar9 + 0x28))(plVar9,param_2);
    }
    lVar6 = param_2[1];
    pvVar5 = (void *)*param_2;
    uVar8 = lVar6 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
    if ((ulong)param_2[2] < uVar8) {
      sVar10 = param_2[2] * 2;
      uVar8 = lVar6 + 0x3e1;
      if (sVar10 < uVar8 || sVar10 - uVar8 == 0) {
        sVar10 = uVar8;
      }
      param_2[2] = sVar10;
      pvVar5 = realloc(pvVar5,sVar10);
      *param_2 = pvVar5;
      if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar6 = param_2[1];
      uVar8 = lVar6 + 1;
    }
    param_2[1] = uVar8;
    *(undefined1 *)((long)pvVar5 + lVar6) = 0x29;
  }
  if ((*(long *)(param_1 + 0x20) == 1) && (__src = *(char **)(param_1 + 0x18), *__src == ',')) {
    sVar10 = 1;
  }
  else {
    lVar6 = param_2[1];
    pvVar5 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar6 + 1U) {
      sVar10 = param_2[2] * 2;
      uVar8 = lVar6 + 0x3e1;
      if (sVar10 < uVar8 || sVar10 - uVar8 == 0) {
        sVar10 = uVar8;
      }
      param_2[2] = sVar10;
      pvVar5 = realloc(pvVar5,sVar10);
      *param_2 = pvVar5;
      if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar6 = param_2[1];
    }
    *(undefined1 *)((long)pvVar5 + lVar6) = 0x20;
    param_2[1] = param_2[1] + 1;
    sVar10 = *(size_t *)(param_1 + 0x20);
    if (sVar10 == 0) {
      lVar6 = param_2[1];
      goto LAB_00745cdc;
    }
    __src = *(char **)(param_1 + 0x18);
  }
  lVar6 = param_2[1];
  pvVar5 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar6 + sVar10) {
    __size = param_2[2] * 2;
    uVar8 = lVar6 + sVar10 + 0x3e0;
    if (__size < uVar8 || __size - uVar8 == 0) {
      __size = uVar8;
    }
    param_2[2] = __size;
    pvVar5 = realloc(pvVar5,__size);
    *param_2 = pvVar5;
    if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = param_2[1];
  }
  memcpy((void *)((long)pvVar5 + lVar6),__src,sVar10);
  lVar6 = param_2[1] + sVar10;
  param_2[1] = lVar6;
LAB_00745cdc:
  pvVar5 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar6 + 1U) {
    sVar10 = param_2[2] * 2;
    uVar8 = lVar6 + 0x3e1;
    if (sVar10 < uVar8 || sVar10 - uVar8 == 0) {
      sVar10 = uVar8;
    }
    param_2[2] = sVar10;
    pvVar5 = realloc(pvVar5,sVar10);
    *param_2 = pvVar5;
    if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = param_2[1];
  }
  *(undefined1 *)((long)pvVar5 + lVar6) = 0x20;
  lVar7 = param_2[1];
  plVar9 = *(long **)(param_1 + 0x28);
  lVar6 = lVar7 + 1;
  param_2[1] = lVar6;
  uVar1 = (int)((uint)*(ushort *)(param_1 + 9) << 0x1a) >> 0x1a;
  if ((uVar2 & 0xffff) == 0x4400) {
    uVar1 = uVar1 + 1;
  }
  if ((uint)((int)((uint)*(ushort *)((long)plVar9 + 9) << 0x1a) >> 0x1a) < uVar1) {
    (**(code **)(*plVar9 + 0x20))(plVar9,param_2);
    if ((*(ushort *)((long)plVar9 + 9) & 0xc0) != 0x40) {
      (**(code **)(*plVar9 + 0x28))(plVar9,param_2);
    }
  }
  else {
    uVar8 = lVar7 + 2;
    pvVar5 = (void *)*param_2;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    if ((ulong)param_2[2] < uVar8) {
      sVar10 = param_2[2] * 2;
      uVar8 = lVar7 + 0x3e2;
      if (sVar10 < uVar8 || sVar10 - uVar8 == 0) {
        sVar10 = uVar8;
      }
      param_2[2] = sVar10;
      pvVar5 = realloc(pvVar5,sVar10);
      *param_2 = pvVar5;
      if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar6 = param_2[1];
      uVar8 = lVar6 + 1;
    }
    lVar7 = *plVar9;
    param_2[1] = uVar8;
    *(undefined1 *)((long)pvVar5 + lVar6) = 0x28;
    (**(code **)(lVar7 + 0x20))(plVar9,param_2);
    if ((*(ushort *)((long)plVar9 + 9) & 0xc0) != 0x40) {
      (**(code **)(*plVar9 + 0x28))(plVar9,param_2);
    }
    lVar6 = param_2[1];
    pvVar5 = (void *)*param_2;
    uVar8 = lVar6 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
    if ((ulong)param_2[2] < uVar8) {
      sVar10 = param_2[2] * 2;
      uVar8 = lVar6 + 0x3e1;
      if (sVar10 < uVar8 || sVar10 - uVar8 == 0) {
        sVar10 = uVar8;
      }
      param_2[2] = sVar10;
      pvVar5 = realloc(pvVar5,sVar10);
      *param_2 = pvVar5;
      if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar6 = param_2[1];
      uVar8 = lVar6 + 1;
    }
    param_2[1] = uVar8;
    *(undefined1 *)((long)pvVar5 + lVar6) = 0x29;
  }
  if (bVar3) {
    lVar6 = param_2[1];
    pvVar5 = (void *)*param_2;
    uVar8 = lVar6 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
    if ((ulong)param_2[2] < uVar8) {
      sVar10 = param_2[2] * 2;
      uVar8 = lVar6 + 0x3e1;
      if (sVar10 < uVar8 || sVar10 - uVar8 == 0) {
        sVar10 = uVar8;
      }
      param_2[2] = sVar10;
      pvVar5 = realloc(pvVar5,sVar10);
      *param_2 = pvVar5;
      if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar6 = param_2[1];
      uVar8 = lVar6 + 1;
    }
    param_2[1] = uVar8;
    *(undefined1 *)((long)pvVar5 + lVar6) = 0x29;
  }
  return;
}


// ===== 00745f6c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00745f74  FUN_00745f74 =====

void FUN_00745f74(long param_1,undefined8 *param_2,undefined8 *param_3,ushort *param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  
  pvVar5 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar5 + 8);
  puVar2 = (undefined8 *)pvVar5;
  if (lVar3 - 0xfc0U < 0xfffffffffffff010) {
    puVar2 = (undefined8 *)malloc(0x1000);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00739f00();
    }
    lVar3 = 0;
    *puVar2 = pvVar5;
    puVar2[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar2;
  }
  *(long *)((long)puVar2 + 8) = lVar3 + 0x30;
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_0079e800;
  uVar1 = *param_4;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0x42;
  uVar6 = *param_2;
  uVar4 = *param_3;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x28) = param_2[1];
  *(undefined8 *)((long)puVar2 + lVar3 + 0x20) = uVar6;
  *(ushort *)((long)puVar2 + lVar3 + 0x19) =
       *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000 | uVar1 & 0x3f | 0x540;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x30) = uVar4;
  return;
}


// ===== 00746034  FUN_00746034 =====

void FUN_00746034(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  size_t __size;
  long lVar2;
  long lVar3;
  ulong uVar4;
  size_t sVar5;
  long *plVar6;
  void *__src;
  
  sVar5 = *(size_t *)(param_1 + 0x18);
  if (sVar5 != 0) {
    lVar2 = param_2[1];
    pvVar1 = (void *)*param_2;
    __src = *(void **)(param_1 + 0x10);
    if ((ulong)param_2[2] < lVar2 + sVar5) {
      __size = param_2[2] * 2;
      uVar4 = lVar2 + sVar5 + 0x3e0;
      if (__size < uVar4 || __size - uVar4 == 0) {
        __size = uVar4;
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
    param_2[1] = param_2[1] + sVar5;
  }
  plVar6 = *(long **)(param_1 + 0x20);
  if ((*(ushort *)((long)plVar6 + 9) & 0x3f) < (*(ushort *)(param_1 + 9) & 0x3f)) {
    (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
    if ((*(ushort *)((long)plVar6 + 9) & 0xc0) != 0x40) {
                    /* WARNING: Could not recover jumptable at 0x00746110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
      return;
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
  return;
}


// ===== 00746214  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074621c  FUN_0074621c =====

void FUN_0074621c(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  size_t __size;
  long lVar2;
  long lVar3;
  ulong uVar4;
  void *__src;
  long *plVar5;
  size_t sVar6;
  
  plVar5 = *(long **)(param_1 + 0x10);
  if ((uint)((int)((uint)*(ushort *)((long)plVar5 + 9) << 0x1a) >> 0x1a) <
      ((int)((uint)*(ushort *)(param_1 + 9) << 0x1a) >> 0x1a) + 1U) {
    (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
    if ((*(ushort *)((long)plVar5 + 9) & 0xc0) != 0x40) {
      (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
    }
    sVar6 = *(size_t *)(param_1 + 0x20);
  }
  else {
    lVar2 = param_2[1];
    pvVar1 = (void *)*param_2;
    uVar4 = lVar2 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    if ((ulong)param_2[2] < uVar4) {
      sVar6 = param_2[2] * 2;
      uVar4 = lVar2 + 0x3e1;
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
      uVar4 = lVar2 + 1;
    }
    param_2[1] = uVar4;
    lVar3 = *plVar5;
    *(undefined1 *)((long)pvVar1 + lVar2) = 0x28;
    (**(code **)(lVar3 + 0x20))(plVar5,param_2);
    if ((*(ushort *)((long)plVar5 + 9) & 0xc0) != 0x40) {
      (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
    }
    lVar2 = param_2[1];
    pvVar1 = (void *)*param_2;
    uVar4 = lVar2 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
    if ((ulong)param_2[2] < uVar4) {
      sVar6 = param_2[2] * 2;
      uVar4 = lVar2 + 0x3e1;
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
      uVar4 = lVar2 + 1;
    }
    param_2[1] = uVar4;
    *(undefined1 *)((long)pvVar1 + lVar2) = 0x29;
    sVar6 = *(size_t *)(param_1 + 0x20);
  }
  if (sVar6 != 0) {
    lVar2 = param_2[1];
    pvVar1 = (void *)*param_2;
    __src = *(void **)(param_1 + 0x18);
    if ((ulong)param_2[2] < lVar2 + sVar6) {
      __size = param_2[2] * 2;
      uVar4 = lVar2 + sVar6 + 0x3e0;
      if (__size < uVar4 || __size - uVar4 == 0) {
        __size = uVar4;
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
    memcpy((void *)((long)pvVar1 + lVar2),__src,sVar6);
    param_2[1] = param_2[1] + sVar6;
  }
  return;
}


// ===== 007463fc  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00746404  FUN_00746404 =====

void FUN_00746404(long param_1,undefined8 *param_2)

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
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x5b;
  plVar6 = *(long **)(param_1 + 0x18);
  if ((*(ushort *)((long)plVar6 + 9) & 0x3f) < 0x13) {
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
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x5d;
  return;
}


// ===== 0074675c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00746764  FUN_00746764 =====

void FUN_00746764(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  size_t __size;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  size_t sVar6;
  void *__src;
  
  plVar5 = *(long **)(param_1 + 0x10);
  if ((uint)((int)((uint)*(ushort *)((long)plVar5 + 9) << 0x1a) >> 0x1a) <
      ((int)((uint)*(ushort *)(param_1 + 9) << 0x1a) >> 0x1a) + 1U) {
    (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
    if ((*(ushort *)((long)plVar5 + 9) & 0xc0) != 0x40) {
      (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
    }
    sVar6 = *(size_t *)(param_1 + 0x20);
  }
  else {
    lVar2 = param_2[1];
    pvVar1 = (void *)*param_2;
    uVar4 = lVar2 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    if ((ulong)param_2[2] < uVar4) {
      sVar6 = param_2[2] * 2;
      uVar4 = lVar2 + 0x3e1;
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
      uVar4 = lVar2 + 1;
    }
    param_2[1] = uVar4;
    lVar3 = *plVar5;
    *(undefined1 *)((long)pvVar1 + lVar2) = 0x28;
    (**(code **)(lVar3 + 0x20))(plVar5,param_2);
    if ((*(ushort *)((long)plVar5 + 9) & 0xc0) != 0x40) {
      (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
    }
    lVar2 = param_2[1];
    pvVar1 = (void *)*param_2;
    uVar4 = lVar2 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
    if ((ulong)param_2[2] < uVar4) {
      sVar6 = param_2[2] * 2;
      uVar4 = lVar2 + 0x3e1;
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
      uVar4 = lVar2 + 1;
    }
    param_2[1] = uVar4;
    *(undefined1 *)((long)pvVar1 + lVar2) = 0x29;
    sVar6 = *(size_t *)(param_1 + 0x20);
  }
  if (sVar6 != 0) {
    lVar2 = param_2[1];
    pvVar1 = (void *)*param_2;
    __src = *(void **)(param_1 + 0x18);
    if ((ulong)param_2[2] < lVar2 + sVar6) {
      __size = param_2[2] * 2;
      uVar4 = lVar2 + sVar6 + 0x3e0;
      if (__size < uVar4 || __size - uVar4 == 0) {
        __size = uVar4;
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
    memcpy((void *)((long)pvVar1 + lVar2),__src,sVar6);
    param_2[1] = param_2[1] + sVar6;
  }
  plVar5 = *(long **)(param_1 + 0x28);
  if ((*(ushort *)((long)plVar5 + 9) & 0x3f) < (*(ushort *)(param_1 + 9) & 0x3f)) {
    (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
    if ((*(ushort *)((long)plVar5 + 9) & 0xc0) != 0x40) {
                    /* WARNING: Could not recover jumptable at 0x00746984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
      return;
    }
  }
  else {
    lVar2 = param_2[1];
    pvVar1 = (void *)*param_2;
    uVar4 = lVar2 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    if ((ulong)param_2[2] < uVar4) {
      sVar6 = param_2[2] * 2;
      uVar4 = lVar2 + 0x3e1;
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
      uVar4 = lVar2 + 1;
    }
    param_2[1] = uVar4;
    lVar3 = *plVar5;
    *(undefined1 *)((long)pvVar1 + lVar2) = 0x28;
    (**(code **)(lVar3 + 0x20))(plVar5,param_2);
    if ((*(ushort *)((long)plVar5 + 9) & 0xc0) != 0x40) {
      (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
    }
    lVar2 = param_2[1];
    pvVar1 = (void *)*param_2;
    uVar4 = lVar2 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
    if ((ulong)param_2[2] < uVar4) {
      sVar6 = param_2[2] * 2;
      uVar4 = lVar2 + 0x3e1;
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
      uVar4 = lVar2 + 1;
    }
    param_2[1] = uVar4;
    *(undefined1 *)((long)pvVar1 + lVar2) = 0x29;
  }
  return;
}


// ===== 00746a90  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00746a98  FUN_00746a98 =====

void FUN_00746a98(long param_1,undefined8 *param_2)

{
  char cVar1;
  void *pvVar2;
  long lVar3;
  size_t sVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  
  lVar3 = param_2[1];
  if (*(char *)(param_1 + 0x38) != '\0') {
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar3 + 2U) {
      sVar4 = param_2[2] * 2;
      uVar6 = lVar3 + 0x3e2;
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
    *(undefined2 *)((long)pvVar2 + lVar3) = 0x3a3a;
    lVar3 = param_2[1] + 2;
    param_2[1] = lVar3;
  }
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 3U) {
    sVar4 = param_2[2] * 2;
    uVar6 = lVar3 + 0x3e3;
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
  *(undefined1 *)((undefined2 *)((long)pvVar2 + lVar3) + 1) = 0x77;
  *(undefined2 *)((long)pvVar2 + lVar3) = 0x656e;
  lVar5 = param_2[1];
  cVar1 = *(char *)(param_1 + 0x39);
  lVar3 = lVar5 + 3;
  param_2[1] = lVar3;
  if (cVar1 != '\0') {
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar5 + 5U) {
      sVar4 = param_2[2] * 2;
      uVar6 = lVar5 + 0x3e5;
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
    *(undefined2 *)((long)pvVar2 + lVar3) = 0x5d5b;
    lVar3 = param_2[1] + 2;
    param_2[1] = lVar3;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar6 = lVar3 + 1;
    pvVar2 = (void *)*param_2;
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
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x28;
    FUN_00746df8(param_1 + 0x10,param_2);
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
    lVar3 = param_2[1];
  }
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 1U) {
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
  }
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x20;
  plVar7 = *(long **)(param_1 + 0x20);
  lVar3 = *plVar7;
  param_2[1] = param_2[1] + 1;
  (**(code **)(lVar3 + 0x20))(plVar7,param_2);
  if ((*(ushort *)((long)plVar7 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
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
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x28;
    FUN_00746df8(param_1 + 0x28,param_2);
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
  return;
}


// ===== 00746df0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00746df8  FUN_00746df8 =====

void FUN_00746df8(long *param_1,undefined8 *param_2)

{
  void *pvVar1;
  size_t sVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  bool bVar9;
  long lVar10;
  
  if (param_1[1] != 0) {
    lVar10 = param_2[1];
    lVar8 = 0;
    bVar9 = true;
    do {
      lVar3 = lVar10;
      if (!bVar9) {
        pvVar1 = (void *)*param_2;
        if ((ulong)param_2[2] < lVar10 + 2U) {
          sVar2 = param_2[2] * 2;
          uVar4 = lVar10 + 0x3e2;
          if (sVar2 < uVar4 || sVar2 - uVar4 == 0) {
            sVar2 = uVar4;
          }
          param_2[2] = sVar2;
          pvVar1 = realloc(pvVar1,sVar2);
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
      plVar7 = *(long **)(*param_1 + lVar8 * 8);
      if ((*(ushort *)((long)plVar7 + 9) >> 1 & 0x1f) < 9) {
        (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
        if ((*(ushort *)((long)plVar7 + 9) & 0xc0) != 0x40) {
          (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
        }
      }
      else {
        uVar4 = lVar3 + 1;
        pvVar1 = (void *)*param_2;
        *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
        lVar6 = lVar3;
        if ((ulong)param_2[2] < uVar4) {
          sVar2 = param_2[2] * 2;
          uVar4 = lVar3 + 0x3e1;
          if (sVar2 < uVar4 || sVar2 - uVar4 == 0) {
            sVar2 = uVar4;
          }
          param_2[2] = sVar2;
          pvVar1 = realloc(pvVar1,sVar2);
          *param_2 = pvVar1;
          if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar4 = param_2[1] + 1;
          lVar6 = param_2[1];
        }
        param_2[1] = uVar4;
        lVar5 = *plVar7;
        *(undefined1 *)((long)pvVar1 + lVar6) = 0x28;
        (**(code **)(lVar5 + 0x20))(plVar7,param_2);
        if ((*(ushort *)((long)plVar7 + 9) & 0xc0) != 0x40) {
          (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
        }
        lVar6 = param_2[1];
        pvVar1 = (void *)*param_2;
        uVar4 = lVar6 + 1;
        *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
        if ((ulong)param_2[2] < uVar4) {
          sVar2 = param_2[2] * 2;
          uVar4 = lVar6 + 0x3e1;
          if (sVar2 < uVar4 || sVar2 - uVar4 == 0) {
            sVar2 = uVar4;
          }
          param_2[2] = sVar2;
          pvVar1 = realloc(pvVar1,sVar2);
          *param_2 = pvVar1;
          if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          lVar6 = param_2[1];
          uVar4 = lVar6 + 1;
        }
        param_2[1] = uVar4;
        *(undefined1 *)((long)pvVar1 + lVar6) = 0x29;
      }
      if (lVar3 == param_2[1]) {
        param_2[1] = lVar10;
      }
      else {
        bVar9 = false;
        lVar10 = param_2[1];
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != param_1[1]);
  }
  return;
}


// ===== 00747028  FUN_00747028 =====

void FUN_00747028(long param_1,undefined8 *param_2)

{
  char cVar1;
  void *pvVar2;
  long lVar3;
  size_t sVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  
  lVar3 = param_2[1];
  if (*(char *)(param_1 + 0x18) != '\0') {
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar3 + 2U) {
      sVar4 = param_2[2] * 2;
      uVar6 = lVar3 + 0x3e2;
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
    *(undefined2 *)((long)pvVar2 + lVar3) = 0x3a3a;
    lVar3 = param_2[1] + 2;
    param_2[1] = lVar3;
  }
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 6U) {
    sVar4 = param_2[2] * 2;
    uVar6 = lVar3 + 0x3e6;
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
  *(undefined2 *)((undefined4 *)((long)pvVar2 + lVar3) + 1) = 0x6574;
  *(undefined4 *)((long)pvVar2 + lVar3) = 0x656c6564;
  lVar5 = param_2[1];
  cVar1 = *(char *)(param_1 + 0x19);
  lVar3 = lVar5 + 6;
  param_2[1] = lVar3;
  if (cVar1 != '\0') {
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar5 + 8U) {
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
    }
    *(undefined2 *)((long)pvVar2 + lVar3) = 0x5d5b;
    lVar3 = param_2[1] + 2;
    param_2[1] = lVar3;
  }
  uVar6 = lVar3 + 1;
  pvVar2 = (void *)*param_2;
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
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x20;
  plVar7 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
  if ((*(ushort *)((long)plVar7 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007471e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
  return;
}


// ===== 007471f8  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00747200  FUN_00747200 =====

void FUN_00747200(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  size_t sVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x20))(plVar5);
  if ((*(ushort *)((long)plVar5 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
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
  FUN_00746df8(param_1 + 0x18,param_2);
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


// ===== 00747324  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074732c  FUN_0074732c =====

void FUN_0074732c(long param_1,undefined8 *param_2)

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
  FUN_00746df8(param_1 + 0x18,param_2);
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


// ===== 00747504  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074750c  FUN_0074750c =====

void FUN_0074750c(long param_1,undefined8 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00747898. Too many branches */
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


// ===== 007479b0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 007479b8  FUN_007479b8 =====

void FUN_007479b8(long param_1,undefined8 *param_2)

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
                    /* try { // try from 00747a98 to 00747a9f has its CatchHandler @ 00747cec */
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


// ===== 00747cf4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00747cfc  FUN_00747cfc =====

void FUN_00747cfc(long param_1,undefined8 *param_2)

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


// ===== 00747ee4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00747eec  FUN_00747eec =====

undefined8 * FUN_00747eec(long *param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined1 auVar6 [16];
  
  auVar6 = FUN_0073c840(param_1,1);
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
        FUN_00739f00();
      }
      lVar3 = 0;
      *puVar2 = pvVar5;
      puVar2[1] = 0;
      param_1[0x266] = (long)puVar2;
    }
    *(long *)((long)puVar2 + 8) = lVar3 + 0x30;
    puVar4 = (undefined8 *)((long)puVar2 + lVar3 + 0x10);
    *puVar4 = &PTR_FUN_0079ecd0;
    *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0x4d;
    *(undefined1 (*) [16])((long)puVar2 + lVar3 + 0x30) = auVar6;
    *(undefined8 *)((long)puVar2 + lVar3 + 0x20) = param_2;
    *(undefined8 *)((long)puVar2 + lVar3 + 0x28) = param_3;
    *(ushort *)((long)puVar2 + lVar3 + 0x19) =
         *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000 | 0x540;
  }
  return puVar4;
}


// ===== 00747fe0  FUN_00747fe0 =====

void FUN_00747fe0(long param_1,int *param_2)

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
      FUN_00739f00();
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
  *puVar2 = &PTR_FUN_0079ed40;
  *(ushort *)((long)puVar2 + 9) = *(ushort *)((long)puVar2 + 9) & 0xf000 | 0x540;
  *(bool *)((long)puVar2 + 0xb) = iVar1 != 0;
  return;
}


// ===== 00748088  FUN_00748088 =====

void FUN_00748088(long param_1,undefined8 *param_2)

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
      FUN_00739f00();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0079ef00;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x4a;
  uVar3 = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  return;
}


// ===== 00748128  FUN_00748128 =====

undefined8 * FUN_00748128(long param_1,char *param_2)

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
      FUN_00739f00();
    }
    lVar3 = 0;
    *puVar1 = pvVar5;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar3 + 0x20;
  sVar2 = strlen(param_2);
  puVar4 = (undefined8 *)((long)puVar1 + lVar3 + 0x10);
  *puVar4 = &PTR_FUN_0079e260;
  *(undefined1 *)((long)puVar1 + lVar3 + 0x18) = 8;
  *(char **)((long)puVar1 + lVar3 + 0x20) = param_2;
  *(size_t *)((long)puVar1 + lVar3 + 0x28) = sVar2;
  *(ushort *)((long)puVar1 + lVar3 + 0x19) =
       *(ushort *)((long)puVar1 + lVar3 + 0x19) & 0xf000 | 0x540;
  return puVar4;
}


// ===== 007481d4  FUN_007481d4 =====

undefined8 * FUN_007481d4(long *param_1,long param_2)

{
  short *psVar1;
  long lVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char *pcVar6;
  long *plVar7;
  uint __c;
  char cVar8;
  long lVar9;
  byte *pbVar10;
  ulong uVar11;
  char *pcVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  void *pvVar17;
  byte *pbVar18;
  size_t sVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
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
  pbVar13 = (byte *)param_1[1];
  if ((ulong)((long)pbVar13 - (long)psVar1) < 2) {
    return (undefined8 *)0x0;
  }
  if (*psVar1 == 0x7455) {
    pbVar10 = (byte *)(psVar1 + 1);
    *param_1 = (long)pbVar10;
    if (pbVar13 == pbVar10) {
      return (undefined8 *)0x0;
    }
    if (*pbVar10 - 0x3a < 0xfffffff6) {
      pbVar18 = (byte *)0x0;
      lVar9 = 0;
    }
    else {
      pbVar18 = (byte *)(psVar1 + 1);
      pbVar14 = pbVar10;
      do {
        pbVar15 = pbVar18;
        pbVar16 = pbVar14;
        if (*pbVar14 - 0x3a < 0xfffffff6) break;
        pbVar14 = pbVar14 + 1;
        pbVar18 = pbVar18 + 1;
        *param_1 = (long)pbVar14;
        pbVar15 = pbVar13;
        pbVar16 = pbVar13;
      } while (pbVar14 != pbVar13);
      lVar9 = (long)pbVar15 - (long)pbVar10;
      pbVar18 = pbVar10;
      pbVar10 = pbVar16;
    }
    if (pbVar10 == pbVar13) {
      return (undefined8 *)0x0;
    }
    if (*pbVar10 != 0x5f) {
      return (undefined8 *)0x0;
    }
    pvVar17 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar10 + 1);
    lVar20 = *(long *)((long)pvVar17 + 8);
    puVar4 = (undefined8 *)pvVar17;
    if (lVar20 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) {
LAB_00748910:
                    /* WARNING: Subroutine does not return */
        FUN_00739f00();
      }
      lVar20 = 0;
      *puVar4 = pvVar17;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar20 + 0x20;
    puVar5 = (undefined8 *)((long)puVar4 + lVar20 + 0x10);
    *puVar5 = &PTR_FUN_0079ef70;
    *(byte **)((long)puVar4 + lVar20 + 0x20) = pbVar18;
    *(long *)((long)puVar4 + lVar20 + 0x28) = lVar9;
    *(undefined1 *)((long)puVar4 + lVar20 + 0x18) = 0x33;
    *(ushort *)((long)puVar4 + lVar20 + 0x19) =
         *(ushort *)((long)puVar4 + lVar20 + 0x19) & 0xf000 | 0x540;
    return puVar5;
  }
  if (*psVar1 != 0x6c55) {
    if (*psVar1 != 0x6255) {
      return (undefined8 *)0x0;
    }
    pbVar10 = (byte *)(psVar1 + 1);
    *param_1 = (long)pbVar10;
    if (pbVar13 == pbVar10) {
      return (undefined8 *)0x0;
    }
    if (0xfffffff5 < *pbVar10 - 0x3a) {
      while (0xfffffff5 < *pbVar10 - 0x3a) {
        pbVar10 = pbVar10 + 1;
        *param_1 = (long)pbVar10;
        if (pbVar10 == pbVar13) {
          return (undefined8 *)0x0;
        }
      }
    }
    if (pbVar10 == pbVar13) {
      return (undefined8 *)0x0;
    }
    if (*pbVar10 != 0x5f) {
      return (undefined8 *)0x0;
    }
    pvVar17 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar10 + 1);
    lVar9 = *(long *)((long)pvVar17 + 8);
    puVar4 = (undefined8 *)pvVar17;
    if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_00748910;
      lVar9 = 0;
      *puVar4 = pvVar17;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
    puVar5 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
    *puVar5 = &PTR_FUN_0079e260;
    *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 8;
    *(ushort *)((long)puVar4 + lVar9 + 0x19) =
         *(ushort *)((long)puVar4 + lVar9 + 0x19) & 0xf000 | 0x540;
    *(char **)((long)puVar4 + lVar9 + 0x20) = "\'block-literal\'";
    *(undefined8 *)((long)puVar4 + lVar9 + 0x28) = 0xf;
    return puVar5;
  }
  plVar22 = (long *)param_1[0x54];
  plVar21 = (long *)param_1[0x53];
  *param_1 = (long)(psVar1 + 1);
  lVar9 = param_1[0x62];
  sVar19 = (long)plVar22 - (long)plVar21;
  uStack_c8 = (long)sVar19 >> 3;
  local_b0 = auStack_68;
  param_1[0x62] = uStack_c8;
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
  if (plVar22 == (long *)param_1[0x55]) {
    if (plVar21 == param_1 + 0x56) {
      pvVar17 = malloc(sVar19 * 2);
      if (pvVar17 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (plVar22 != plVar21) {
        memmove(pvVar17,plVar21,sVar19);
      }
      param_1[0x53] = (long)pvVar17;
    }
    else {
      pvVar17 = realloc(plVar21,sVar19 * 2);
      param_1[0x53] = (long)pvVar17;
      if (pvVar17 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    plVar22 = (long *)((long)pvVar17 + sVar19);
    param_1[0x54] = (long)plVar22;
    param_1[0x55] = (long)((long)pvVar17 + ((long)sVar19 >> 2) * 8);
  }
  param_1[0x54] = (long)(plVar22 + 1);
  *plVar22 = (long)&local_c0;
  pcVar6 = (char *)*param_1;
  lVar20 = param_1[2];
  lVar2 = param_1[3];
  uVar11 = param_1[1] - (long)pcVar6;
  if (uVar11 != 0) {
    plVar22 = param_1 + 5;
    while (*pcVar6 == 'T') {
      if (uVar11 < 2) {
        __c = 0;
      }
      else {
        __c = (uint)(byte)pcVar6[1];
      }
      pcVar6 = (char *)memchr("yptnk",__c,5);
      if ((pcVar6 == (char *)0x0) || (pcVar6 == "")) break;
                    /* try { // try from 007485b0 to 007485bb has its CatchHandler @ 00748934 */
      puVar4 = (undefined8 *)FUN_007494e8(param_1,&local_c0);
      if (puVar4 == (undefined8 *)0x0) goto LAB_00748878;
      plVar21 = (long *)param_1[3];
      if (plVar21 == (long *)param_1[4]) {
        plVar7 = (long *)param_1[2];
        sVar19 = (long)plVar21 - (long)plVar7;
        if (plVar7 == plVar22) {
          pvVar17 = malloc(sVar19 * 2);
          if (pvVar17 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar21 != plVar22) {
            memcpy(pvVar17,plVar22,sVar19);
          }
          param_1[2] = (long)pvVar17;
        }
        else {
          pvVar17 = realloc(plVar7,sVar19 * 2);
          param_1[2] = (long)pvVar17;
          if (pvVar17 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar21 = (long *)((long)pvVar17 + sVar19);
        param_1[3] = (long)plVar21;
        param_1[4] = (long)((long)pvVar17 + ((long)sVar19 >> 2) * 8);
      }
      param_1[3] = (long)(plVar21 + 1);
      *plVar21 = (long)puVar4;
      pcVar6 = (char *)*param_1;
      uVar11 = param_1[1] - (long)pcVar6;
      if (uVar11 == 0) break;
    }
  }
                    /* try { // try from 00748614 to 00748627 has its CatchHandler @ 00748930 */
  lVar20 = lVar2 - lVar20 >> 3;
  local_e0 = FUN_0073ea94(param_1,lVar20);
  if (local_e0._8_8_ == 0) {
    if (param_1[0x54] == param_1[0x53]) {
                    /* try { // try from 007488f0 to 0074890f has its CatchHandler @ 00748930 */
                    /* WARNING: Subroutine does not return */
      FUN_0073a468("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0x82,
                   "Popping empty vector!");
    }
    param_1[0x54] = param_1[0x54] + -8;
  }
  pcVar6 = (char *)*param_1;
  pcVar12 = (char *)param_1[1];
  local_e8 = (undefined8 *)0x0;
  if (pcVar6 == pcVar12) {
LAB_007486b0:
    plVar22 = param_1 + 5;
    do {
                    /* try { // try from 007486c4 to 007486cb has its CatchHandler @ 00748938 */
      puVar4 = (undefined8 *)FUN_0073c980(param_1);
      if (puVar4 == (undefined8 *)0x0) goto LAB_00748878;
      plVar21 = (long *)param_1[3];
      if (plVar21 == (long *)param_1[4]) {
        plVar7 = (long *)param_1[2];
        sVar19 = (long)plVar21 - (long)plVar7;
        if (plVar7 == plVar22) {
          pvVar17 = malloc(sVar19 * 2);
          if (pvVar17 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar21 != plVar22) {
            memcpy(pvVar17,plVar22,sVar19);
          }
          param_1[2] = (long)pvVar17;
        }
        else {
          pvVar17 = realloc(plVar7,sVar19 * 2);
          param_1[2] = (long)pvVar17;
          if (pvVar17 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar21 = (long *)((long)pvVar17 + sVar19);
        param_1[3] = (long)plVar21;
        param_1[4] = (long)((long)pvVar17 + ((long)sVar19 >> 2) * 8);
      }
      param_1[3] = (long)(plVar21 + 1);
      *plVar21 = (long)puVar4;
      if ((char *)param_1[1] == (char *)*param_1) {
        cVar8 = '\0';
      }
      else {
        cVar8 = *(char *)*param_1;
        if (cVar8 == 'E') break;
      }
    } while (cVar8 != 'Q');
  }
  else {
    if (*pcVar6 == 'Q') {
      uVar3 = *(undefined1 *)((long)param_1 + 0x30a);
      *param_1 = (long)(pcVar6 + 1);
      *(undefined1 *)((long)param_1 + 0x30a) = 1;
                    /* try { // try from 00748678 to 0074867f has its CatchHandler @ 0074891c */
      puVar4 = (undefined8 *)FUN_00741a30(param_1);
      *(undefined1 *)((long)param_1 + 0x30a) = uVar3;
      local_e8 = puVar4;
      if (puVar4 == (undefined8 *)0x0) goto LAB_00748878;
      pcVar6 = (char *)*param_1;
      pcVar12 = (char *)param_1[1];
    }
    if ((pcVar12 == pcVar6) || (*pcVar6 != 'v')) goto LAB_007486b0;
    *param_1 = (long)(pcVar6 + 1);
  }
                    /* try { // try from 00748768 to 00748773 has its CatchHandler @ 00748928 */
  local_f8 = FUN_0073ea94(param_1,lVar20);
  pbVar13 = (byte *)*param_1;
  pbVar10 = (byte *)param_1[1];
  local_100 = (undefined8 *)0x0;
  if (pbVar13 != pbVar10) {
    if (*pbVar13 == 0x51) {
      uVar3 = *(undefined1 *)((long)param_1 + 0x30a);
      *param_1 = (long)(pbVar13 + 1);
      *(undefined1 *)((long)param_1 + 0x30a) = 1;
                    /* try { // try from 007487a8 to 007487af has its CatchHandler @ 00748918 */
      puVar4 = (undefined8 *)FUN_00741a30(param_1);
      *(undefined1 *)((long)param_1 + 0x30a) = uVar3;
      local_100 = puVar4;
      if (puVar4 == (undefined8 *)0x0) goto LAB_00748878;
      pbVar13 = (byte *)*param_1;
      pbVar10 = (byte *)param_1[1];
    }
    if ((pbVar13 != pbVar10) && (*pbVar13 == 0x45)) {
      pbVar13 = pbVar13 + 1;
      *param_1 = (long)pbVar13;
      if (pbVar10 != pbVar13) {
        pbVar18 = pbVar13;
        if (*pbVar13 - 0x3a < 0xfffffff6) {
          lStack_108 = 0;
          pbVar14 = pbVar13;
          pbVar13 = (byte *)0x0;
        }
        else {
          do {
            pbVar14 = pbVar18;
            if (*pbVar18 - 0x3a < 0xfffffff6) break;
            pbVar18 = pbVar18 + 1;
            *param_1 = (long)pbVar18;
            pbVar14 = pbVar10;
          } while (pbVar18 != pbVar10);
          lStack_108 = (long)pbVar14 - (long)pbVar13;
        }
        local_110 = pbVar13;
        if ((pbVar14 != pbVar10) && (*pbVar14 == 0x5f)) {
          *param_1 = (long)(pbVar14 + 1);
          puVar4 = (undefined8 *)
                   FUN_00749e54(param_1,local_e0,&local_e8,local_f8,&local_100,&local_110);
          goto LAB_00748878;
        }
      }
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_00748878:
  if ((ulong)(local_d0[0x54] - local_d0[0x53] >> 3) < uStack_c8) {
                    /* try { // try from 007488cc to 007488eb has its CatchHandler @ 0074892c */
                    /* WARNING: Subroutine does not return */
    FUN_0073a468("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0xa4f,
                 &DAT_001c717f);
  }
  local_d0[0x54] = local_d0[0x53] + uStack_c8 * 8;
  if (local_c0 != &local_a8) {
    free(local_c0);
  }
  param_1[0x62] = lVar9;
  return puVar4;
}


// ===== 00748954  FUN_00748954 =====

void FUN_00748954(long param_1,undefined8 *param_2)

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
      FUN_00739f00();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0079f2f0;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x4b;
  uVar3 = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  return;
}


// ===== 007489f4  FUN_007489f4 =====

void FUN_007489f4(long param_1,undefined8 *param_2,undefined8 *param_3)

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
      FUN_00739f00();
    }
    lVar2 = 0;
    *puVar1 = pvVar3;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x30;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0079f360;
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


// ===== 00748aa0  FUN_00748aa0 =====

void FUN_00748aa0(long param_1,undefined8 *param_2)

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
    if (sVar6 == 0) goto LAB_00748cf0;
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
    if (sVar6 == 0) goto LAB_00748cf0;
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
LAB_00748cf0:
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


// ===== 00748d8c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00748d94  FUN_00748d94 =====

void FUN_00748d94(long param_1,undefined8 *param_2)

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
  __src = "false";
  if (cVar2 != '\0') {
    __src = "true";
  }
  memcpy((void *)((long)__ptr + lVar3),__src,__n);
  param_2[1] = param_2[1] + __n;
  return;
}


// ===== 00748e3c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00748e44  FUN_00748e44 =====

void FUN_00748e44(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  bool bVar7;
  int iVar8;
  void *__ptr;
  char cVar9;
  char cVar10;
  undefined1 *puVar11;
  size_t __size;
  long lVar12;
  undefined1 *puVar13;
  char cVar14;
  char cVar15;
  byte *pbVar16;
  size_t __n;
  char local_40 [28];
  undefined4 local_24;
  
  if (7 < *(ulong *)(param_1 + 0x18)) {
    pbVar16 = *(byte **)(param_1 + 0x10);
    cVar9 = '\t';
    cVar2 = cVar9;
    if (0xfffffff5 < *pbVar16 - 0x3a) {
      cVar2 = '\0';
    }
    cVar14 = -0x57;
    cVar3 = -0x57;
    if (0xfffffff5 < pbVar16[1] - 0x3a) {
      cVar3 = -0x30;
    }
    if (0xfffffff5 < pbVar16[2] - 0x3a) {
      cVar9 = '\0';
    }
    if (0xfffffff5 < pbVar16[3] - 0x3a) {
      cVar14 = -0x30;
    }
    cVar10 = '\t';
    cVar4 = cVar10;
    if (0xfffffff5 < pbVar16[4] - 0x3a) {
      cVar4 = '\0';
    }
    cVar15 = -0x57;
    cVar5 = cVar15;
    if (0xfffffff5 < pbVar16[5] - 0x3a) {
      cVar5 = -0x30;
    }
    if (0xfffffff5 < pbVar16[6] - 0x3a) {
      cVar10 = '\0';
    }
    if (0xfffffff5 < pbVar16[7] - 0x3a) {
      cVar15 = -0x30;
    }
    puVar11 = (undefined1 *)((ulong)&local_24 | 1);
    local_24 = (float)CONCAT13(cVar15 + pbVar16[7] + (cVar10 + pbVar16[6]) * '\x10',
                               CONCAT12(cVar5 + pbVar16[5] + (cVar4 + pbVar16[4]) * '\x10',
                                        CONCAT11(cVar14 + pbVar16[3] + (cVar9 + pbVar16[2]) * '\x10'
                                                 ,cVar3 + pbVar16[1] + (cVar2 + *pbVar16) * '\x10'))
                              );
    puVar13 = (undefined1 *)((ulong)&local_24 | 3);
    do {
      uVar6 = puVar11[-1];
      puVar11[-1] = *puVar13;
      *puVar13 = uVar6;
      bVar7 = puVar11 < puVar13 + -1;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + -1;
    } while (bVar7);
    local_40[0] = '\0';
    local_40[1] = '\0';
    local_40[2] = '\0';
    local_40[3] = '\0';
    local_40[4] = '\0';
    local_40[5] = '\0';
    local_40[6] = '\0';
    local_40[7] = '\0';
    local_40[8] = '\0';
    local_40[9] = '\0';
    local_40[10] = '\0';
    local_40[0xb] = '\0';
    local_40[0xc] = '\0';
    local_40[0xd] = '\0';
    local_40[0xe] = '\0';
    local_40[0xf] = '\0';
    local_40[0x10] = '\0';
    local_40[0x11] = '\0';
    local_40[0x12] = '\0';
    local_40[0x13] = '\0';
    local_40[0x14] = '\0';
    local_40[0x15] = '\0';
    local_40[0x16] = '\0';
    local_40[0x17] = '\0';
    iVar8 = snprintf(local_40,0x18,"%af",(double)local_24);
    if (iVar8 != 0) {
      lVar12 = param_2[1];
      __n = (size_t)iVar8;
      __ptr = (void *)*param_2;
      if ((ulong)param_2[2] < lVar12 + __n) {
        __size = param_2[2] * 2;
        uVar1 = lVar12 + __n + 0x3e0;
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
        lVar12 = param_2[1];
      }
      memcpy((void *)((long)__ptr + lVar12),local_40,__n);
      param_2[1] = param_2[1] + __n;
    }
  }
  return;
}


// ===== 00748ff8  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00749000  FUN_00749000 =====

void FUN_00749000(long param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  int iVar5;
  void *__ptr;
  byte *pbVar6;
  undefined1 *puVar7;
  size_t __size;
  long lVar8;
  undefined1 *puVar9;
  size_t __n;
  byte bVar10;
  byte bVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  char local_50 [40];
  undefined8 local_28;
  
  if (0xf < *(ulong *)(param_1 + 0x18)) {
    pbVar6 = *(byte **)(param_1 + 0x10);
    bVar10 = pbVar6[2];
    bVar11 = pbVar6[3];
    puVar9 = (undefined1 *)((ulong)&local_28 | 1);
    auVar18._0_4_ = (CONCAT12(bVar10,(ushort)*pbVar6) & 0xffff) - 0x3a;
    auVar18._4_4_ = bVar10 - 0x3a;
    auVar18._8_4_ = pbVar6[4] - 0x3a;
    auVar18._12_4_ = pbVar6[6] - 0x3a;
    auVar17._0_4_ = pbVar6[8] - 0x3a;
    auVar17._4_4_ = pbVar6[10] - 0x3a;
    auVar17._8_4_ = pbVar6[0xc] - 0x3a;
    auVar17._12_4_ = pbVar6[0xe] - 0x3a;
    auVar15._0_4_ = pbVar6[9] - 0x3a;
    auVar15._4_4_ = pbVar6[0xb] - 0x3a;
    auVar15._8_4_ = pbVar6[0xd] - 0x3a;
    auVar15._12_4_ = pbVar6[0xf] - 0x3a;
    auVar13._8_4_ = 0xfffffff6;
    auVar13._0_8_ = 0xfffffff6fffffff6;
    auVar13._12_4_ = 0xfffffff6;
    auVar13 = NEON_cmhi(auVar13,auVar17,4);
    auVar16._8_4_ = 0xfffffff6;
    auVar16._0_8_ = 0xfffffff6fffffff6;
    auVar16._12_4_ = 0xfffffff6;
    auVar17 = NEON_cmhi(auVar16,auVar18,4);
    auVar19._8_4_ = 0xfffffff6;
    auVar19._0_8_ = 0xfffffff6fffffff6;
    auVar19._12_4_ = 0xfffffff6;
    auVar16 = NEON_cmhi(auVar19,auVar15,4);
    auVar2._8_4_ = 0xfffffff6;
    auVar2._0_8_ = 0xfffffff6fffffff6;
    auVar2._12_4_ = 0xfffffff6;
    auVar3._4_4_ = bVar11 - 0x3a;
    auVar3._0_4_ = (CONCAT12(bVar11,(ushort)pbVar6[1]) & 0xffff) - 0x3a;
    auVar3._8_4_ = pbVar6[5] - 0x3a;
    auVar3._12_4_ = pbVar6[7] - 0x3a;
    auVar19 = NEON_cmhi(auVar2,auVar3,4);
    uVar12 = CONCAT17(auVar13[0xc],
                      CONCAT16(auVar13[8],
                               CONCAT15(auVar13[4],
                                        CONCAT14(auVar13[0],
                                                 CONCAT13(auVar17[0xc],
                                                          CONCAT12(auVar17[8],
                                                                   CONCAT11(auVar17[4],auVar17[0])))
                                                )))) & 0x909090909090909;
    uVar14 = NEON_bsl(CONCAT17(auVar16[0xc],
                               CONCAT16(auVar16[8],
                                        CONCAT15(auVar16[4],
                                                 CONCAT14(auVar16[0],
                                                          CONCAT13(auVar19[0xc],
                                                                   CONCAT12(auVar19[8],
                                                                            CONCAT11(auVar19[4],
                                                                                     auVar19[0])))))
                                       )),0xa9a9a9a9a9a9a9a9,0xd0d0d0d0d0d0d0d0,1);
    local_28 = CONCAT17((char)((ulong)uVar14 >> 0x38) + pbVar6[0xf] +
                        ((char)(uVar12 >> 0x38) + pbVar6[0xe]) * '\x10',
                        CONCAT16((char)((ulong)uVar14 >> 0x30) + pbVar6[0xd] +
                                 ((char)(uVar12 >> 0x30) + pbVar6[0xc]) * '\x10',
                                 CONCAT15((char)((ulong)uVar14 >> 0x28) + pbVar6[0xb] +
                                          ((char)(uVar12 >> 0x28) + pbVar6[10]) * '\x10',
                                          CONCAT14((char)((ulong)uVar14 >> 0x20) + pbVar6[9] +
                                                   ((char)(uVar12 >> 0x20) + pbVar6[8]) * '\x10',
                                                   CONCAT13((char)((ulong)uVar14 >> 0x18) +
                                                            pbVar6[7] +
                                                            ((char)(uVar12 >> 0x18) + pbVar6[6]) *
                                                            '\x10',CONCAT12((char)((ulong)uVar14 >>
                                                                                  0x10) + pbVar6[5]
                                                                            + ((char)(uVar12 >> 0x10
                                                                                     ) + pbVar6[4])
                                                                              * '\x10',
                                                                            CONCAT11((char)((ulong)
                                                  uVar14 >> 8) + bVar11 +
                                                  ((char)(uVar12 >> 8) + bVar10) * '\x10',
                                                  (char)uVar14 + pbVar6[1] +
                                                  ((char)uVar12 + *pbVar6) * '\x10')))))));
    puVar7 = (undefined1 *)((ulong)&local_28 | 7);
    do {
      uVar1 = puVar9[-1];
      puVar9[-1] = *puVar7;
      *puVar7 = uVar1;
      bVar4 = puVar9 < puVar7 + -1;
      puVar9 = puVar9 + 1;
      puVar7 = puVar7 + -1;
    } while (bVar4);
    local_50[8] = '\0';
    local_50[9] = '\0';
    local_50[10] = '\0';
    local_50[0xb] = '\0';
    local_50[0xc] = '\0';
    local_50[0xd] = '\0';
    local_50[0xe] = '\0';
    local_50[0xf] = '\0';
    local_50[0] = '\0';
    local_50[1] = '\0';
    local_50[2] = '\0';
    local_50[3] = '\0';
    local_50[4] = '\0';
    local_50[5] = '\0';
    local_50[6] = '\0';
    local_50[7] = '\0';
    local_50[0x18] = '\0';
    local_50[0x19] = '\0';
    local_50[0x1a] = '\0';
    local_50[0x1b] = '\0';
    local_50[0x1c] = '\0';
    local_50[0x1d] = '\0';
    local_50[0x1e] = '\0';
    local_50[0x1f] = '\0';
    local_50[0x10] = '\0';
    local_50[0x11] = '\0';
    local_50[0x12] = '\0';
    local_50[0x13] = '\0';
    local_50[0x14] = '\0';
    local_50[0x15] = '\0';
    local_50[0x16] = '\0';
    local_50[0x17] = '\0';
    iVar5 = snprintf(local_50,0x20,"%a",local_28);
    if (iVar5 != 0) {
      lVar8 = param_2[1];
      __n = (size_t)iVar5;
      __ptr = (void *)*param_2;
      if ((ulong)param_2[2] < lVar8 + __n) {
        __size = param_2[2] * 2;
        uVar12 = lVar8 + __n + 0x3e0;
        if (__size < uVar12 || __size - uVar12 == 0) {
          __size = uVar12;
        }
        param_2[2] = __size;
        __ptr = realloc(__ptr,__size);
        *param_2 = __ptr;
        if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar8 = param_2[1];
      }
      memcpy((void *)((long)__ptr + lVar8),local_50,__n);
      param_2[1] = param_2[1] + __n;
    }
  }
  return;
}


// ===== 007491c4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 007491cc  FUN_007491cc =====

void FUN_007491cc(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  bool bVar3;
  int iVar4;
  void *__ptr;
  char *pcVar5;
  size_t __size;
  byte *pbVar6;
  char *pcVar7;
  long lVar8;
  char cVar9;
  char cVar10;
  size_t __n;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  char local_60 [47];
  char cStack_31;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (0x1f < *(ulong *)(param_1 + 0x18)) {
    pbVar6 = *(byte **)(param_1 + 0x10);
    if ((&local_30 < pbVar6 + 0x20) && (pbVar6 < &stack0xffffffffffffffe0)) {
      lVar8 = 0;
      pcVar5 = &cStack_31;
      do {
        pbVar2 = pbVar6 + lVar8;
        lVar8 = lVar8 + 2;
        bVar11 = *pbVar2;
        bVar12 = pbVar2[1];
        cVar9 = '\t';
        if (0xfffffff5 < bVar11 - 0x3a) {
          cVar9 = '\0';
        }
        cVar10 = -0x57;
        if (0xfffffff5 < bVar12 - 0x3a) {
          cVar10 = -0x30;
        }
        pcVar5 = pcVar5 + 1;
        *pcVar5 = cVar10 + bVar12 + (cVar9 + bVar11) * '\x10';
      } while (lVar8 != 0x20);
    }
    else {
      bVar11 = pbVar6[2];
      bVar13 = pbVar6[3];
      bVar12 = pbVar6[0x12];
      bVar14 = pbVar6[0x13];
      auVar20._8_4_ = 0xfffffff6;
      auVar20._0_8_ = 0xfffffff6fffffff6;
      auVar20._12_4_ = 0xfffffff6;
      pcVar5 = (char *)((ulong)&local_30 | 0xf);
      auVar19._0_4_ = pbVar6[0x18] - 0x3a;
      auVar19._4_4_ = pbVar6[0x1a] - 0x3a;
      auVar19._8_4_ = pbVar6[0x1c] - 0x3a;
      auVar19._12_4_ = pbVar6[0x1e] - 0x3a;
      auVar25._0_4_ = (CONCAT12(bVar11,(ushort)*pbVar6) & 0xffff) - 0x3a;
      auVar25._4_4_ = bVar11 - 0x3a;
      auVar25._8_4_ = pbVar6[4] - 0x3a;
      auVar25._12_4_ = pbVar6[6] - 0x3a;
      auVar18._0_4_ = pbVar6[8] - 0x3a;
      auVar18._4_4_ = pbVar6[10] - 0x3a;
      auVar18._8_4_ = pbVar6[0xc] - 0x3a;
      auVar18._12_4_ = pbVar6[0xe] - 0x3a;
      auVar17._0_4_ = (CONCAT12(bVar12,(ushort)pbVar6[0x10]) & 0xffff) - 0x3a;
      auVar17._4_4_ = bVar12 - 0x3a;
      auVar17._8_4_ = pbVar6[0x14] - 0x3a;
      auVar17._12_4_ = pbVar6[0x16] - 0x3a;
      auVar23._0_4_ = pbVar6[9] - 0x3a;
      auVar23._4_4_ = pbVar6[0xb] - 0x3a;
      auVar23._8_4_ = pbVar6[0xd] - 0x3a;
      auVar23._12_4_ = pbVar6[0xf] - 0x3a;
      auVar24._0_4_ = (CONCAT12(bVar14,(ushort)pbVar6[0x11]) & 0xffff) - 0x3a;
      auVar24._4_4_ = bVar14 - 0x3a;
      auVar24._8_4_ = pbVar6[0x15] - 0x3a;
      auVar24._12_4_ = pbVar6[0x17] - 0x3a;
      auVar19 = NEON_cmhi(auVar20,auVar19,4);
      auVar18 = NEON_cmhi(auVar20,auVar18,4);
      auVar25 = NEON_cmhi(auVar20,auVar25,4);
      auVar17 = NEON_cmhi(auVar20,auVar17,4);
      auVar15._4_4_ = pbVar6[0x1b] - 0x3a;
      auVar15._0_4_ = pbVar6[0x19] - 0x3a;
      auVar15._8_4_ = pbVar6[0x1d] - 0x3a;
      auVar15._12_4_ = pbVar6[0x1f] - 0x3a;
      auVar26 = NEON_cmhi(auVar20,auVar15,4);
      auVar15 = NEON_cmhi(auVar20,auVar24,4);
      auVar24 = NEON_cmhi(auVar20,auVar23,4);
      auVar21._4_4_ = bVar13 - 0x3a;
      auVar21._0_4_ = (CONCAT12(bVar13,(ushort)pbVar6[1]) & 0xffff) - 0x3a;
      auVar21._8_4_ = pbVar6[5] - 0x3a;
      auVar21._12_4_ = pbVar6[7] - 0x3a;
      auVar21 = NEON_cmhi(auVar20,auVar21,4);
      auVar22[8] = 0xa9;
      auVar22._0_8_ = 0xa9a9a9a9a9a9a9a9;
      auVar22[9] = 0xa9;
      auVar22[10] = 0xa9;
      auVar22[0xb] = 0xa9;
      auVar22[0xc] = 0xa9;
      auVar22[0xd] = 0xa9;
      auVar22[0xe] = 0xa9;
      auVar22[0xf] = 0xa9;
      auVar16[1] = auVar21[4];
      auVar16[0] = auVar21[0];
      auVar16[2] = auVar21[8];
      auVar16[3] = auVar21[0xc];
      auVar16[4] = auVar24[0];
      auVar16[5] = auVar24[4];
      auVar16[6] = auVar24[8];
      auVar16[7] = auVar24[0xc];
      auVar16[8] = auVar15[0];
      auVar16[9] = auVar15[4];
      auVar16[10] = auVar15[8];
      auVar16[0xb] = auVar15[0xc];
      auVar16[0xc] = auVar26[0];
      auVar16[0xd] = auVar26[4];
      auVar16[0xe] = auVar26[8];
      auVar16[0xf] = auVar26[0xc];
      auVar26[8] = 0xd0;
      auVar26._0_8_ = 0xd0d0d0d0d0d0d0d0;
      auVar26[9] = 0xd0;
      auVar26[10] = 0xd0;
      auVar26[0xb] = 0xd0;
      auVar26[0xc] = 0xd0;
      auVar26[0xd] = 0xd0;
      auVar26[0xe] = 0xd0;
      auVar26[0xf] = 0xd0;
      uVar1 = (ulong)CONCAT15(auVar18[0xc],
                              CONCAT14(auVar18[8],
                                       CONCAT13(auVar18[4],
                                                CONCAT12(auVar18[0],
                                                         CONCAT11(auVar25[0xc],auVar25[8]))))) &
              0x90909090909;
      auVar15 = NEON_bsl(auVar16,auVar22,auVar26,1);
      uStack_28 = CONCAT17(auVar15[0xf] + pbVar6[0x1f] +
                           ((auVar19[0xc] & 9) + pbVar6[0x1e]) * '\x10',
                           CONCAT16(auVar15[0xe] + pbVar6[0x1d] +
                                    ((auVar19[8] & 9) + pbVar6[0x1c]) * '\x10',
                                    CONCAT15(auVar15[0xd] + pbVar6[0x1b] +
                                             ((auVar19[4] & 9) + pbVar6[0x1a]) * '\x10',
                                             CONCAT14(auVar15[0xc] + pbVar6[0x19] +
                                                      ((auVar19[0] & 9) + pbVar6[0x18]) * '\x10',
                                                      CONCAT13(auVar15[0xb] + pbVar6[0x17] +
                                                               ((auVar17[0xc] & 9) + pbVar6[0x16]) *
                                                               '\x10',CONCAT12(auVar15[10] +
                                                                               pbVar6[0x15] +
                                                                               ((auVar17[8] & 9) +
                                                                               pbVar6[0x14]) *
                                                                               '\x10',CONCAT11(
                                                  auVar15[9] + bVar14 +
                                                  ((auVar17[4] & 9) + bVar12) * '\x10',
                                                  auVar15[8] + pbVar6[0x11] +
                                                  ((auVar17[0] & 9) + pbVar6[0x10]) * '\x10')))))));
      local_30 = CONCAT17(auVar15[7] + pbVar6[0xf] + ((char)(uVar1 >> 0x28) + pbVar6[0xe]) * '\x10',
                          CONCAT16(auVar15[6] + pbVar6[0xd] +
                                   ((char)(uVar1 >> 0x20) + pbVar6[0xc]) * '\x10',
                                   CONCAT15(auVar15[5] + pbVar6[0xb] +
                                            ((char)(uVar1 >> 0x18) + pbVar6[10]) * '\x10',
                                            CONCAT14(auVar15[4] + pbVar6[9] +
                                                     ((char)(uVar1 >> 0x10) + pbVar6[8]) * '\x10',
                                                     CONCAT13(auVar15[3] + pbVar6[7] +
                                                              ((char)(uVar1 >> 8) + pbVar6[6]) *
                                                              '\x10',CONCAT12(auVar15[2] + pbVar6[5]
                                                                              + ((char)uVar1 +
                                                                                pbVar6[4]) * '\x10',
                                                                              CONCAT11(auVar15[1] +
                                                                                       bVar13 + ((
                                                  auVar25[4] & 9) + bVar11) * '\x10',
                                                  auVar15[0] + pbVar6[1] +
                                                  ((auVar25[0] & 9) + *pbVar6) * '\x10')))))));
    }
    if (&local_30 < pcVar5) {
      pcVar7 = (char *)((ulong)&local_30 | 1);
      do {
        cVar9 = pcVar7[-1];
        pcVar7[-1] = *pcVar5;
        *pcVar5 = cVar9;
        bVar3 = pcVar7 < pcVar5 + -1;
        pcVar7 = pcVar7 + 1;
        pcVar5 = pcVar5 + -1;
      } while (bVar3);
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
    iVar4 = snprintf(local_60,0x2a,"%LaL",local_30);
    if (iVar4 != 0) {
      lVar8 = param_2[1];
      __n = (size_t)iVar4;
      __ptr = (void *)*param_2;
      if ((ulong)param_2[2] < lVar8 + __n) {
        __size = param_2[2] * 2;
        uVar1 = lVar8 + __n + 0x3e0;
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
        lVar8 = param_2[1];
      }
      memcpy((void *)((long)__ptr + lVar8),local_60,__n);
      param_2[1] = param_2[1] + __n;
    }
  }
  return;
}


// ===== 007493cc  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 007493d4  FUN_007493d4 =====

void FUN_007493d4(long param_1,undefined8 *param_2)

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


// ===== 007494e0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 007494e8  FUN_007494e8 =====

undefined8 * FUN_007494e8(long *param_1,undefined8 *param_2)

{
  short *psVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *__ptr;
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
  undefined8 *puVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined1 auVar18 [16];
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
LAB_0074951c:
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
        if (puVar4 == (undefined8 *)0x0) goto LAB_00749dec;
        lVar7 = 0;
        *puVar4 = pvVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar7 + 0x20;
      puVar17 = (undefined8 *)((long)puVar4 + lVar7 + 0x10);
      *puVar17 = &PTR_FUN_0079efe0;
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
        *puVar4 = puVar17;
      }
      pvVar13 = (void *)param_1[0x266];
      lVar9 = *(long *)((long)pvVar13 + 8);
      puVar4 = (undefined8 *)pvVar13;
      if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) {
LAB_00749dec:
                    /* WARNING: Subroutine does not return */
          FUN_00739f00();
        }
        lVar9 = 0;
        *puVar4 = pvVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
      puVar3 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
      *puVar3 = &PTR_FUN_0079f050;
      uVar6 = *(ushort *)((long)puVar4 + lVar9 + 0x19);
      uVar10 = 0x23;
      *(undefined8 **)((long)puVar4 + lVar9 + 0x20) = puVar17;
    }
    else if (*psVar1 == 0x6b54) {
      *param_1 = (long)(psVar1 + 1);
      lVar9 = FUN_0073dec0(param_1,0);
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
        if (puVar4 == (undefined8 *)0x0) goto LAB_00749dec;
        lVar5 = 0;
        *puVar4 = pvVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar5 + 0x20;
      puVar17 = (undefined8 *)((long)puVar4 + lVar5 + 0x10);
      *puVar17 = &PTR_FUN_0079efe0;
      *(undefined4 *)((long)puVar4 + lVar5 + 0x1c) = 0;
      *(int *)((long)puVar4 + lVar5 + 0x20) = (int)lVar7;
      *(undefined1 *)((long)puVar4 + lVar5 + 0x18) = 0x21;
      *(ushort *)((long)puVar4 + lVar5 + 0x19) =
           *(ushort *)((long)puVar4 + lVar5 + 0x19) & 0xf000 | 0x540;
      if (param_2 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)param_2[1];
        if (puVar4 == (undefined8 *)param_2[2]) {
          puVar15 = param_2 + 3;
          puVar3 = (undefined8 *)*param_2;
          sVar12 = (long)puVar4 - (long)puVar3;
          if (puVar3 == puVar15) {
            pvVar13 = malloc(sVar12 * 2);
            if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (puVar4 != puVar15) {
              memcpy(pvVar13,puVar15,sVar12);
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
        *puVar4 = puVar17;
      }
      pvVar13 = (void *)param_1[0x266];
      lVar7 = *(long *)((long)pvVar13 + 8);
      puVar4 = (undefined8 *)pvVar13;
      if (lVar7 - 0xfd0U < 0xfffffffffffff010) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_00749dec;
        lVar7 = 0;
        *puVar4 = pvVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar7 + 0x20;
      puVar3 = (undefined8 *)((long)puVar4 + lVar7 + 0x10);
      *puVar3 = &PTR_FUN_0079f0c0;
      uVar6 = *(ushort *)((long)puVar4 + lVar7 + 0x19);
      uVar10 = 0x24;
      *(long *)((long)puVar4 + lVar7 + 0x20) = lVar9;
      *(undefined8 **)((long)puVar4 + lVar7 + 0x28) = puVar17;
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
            if (puVar4 == (undefined8 *)0x0) goto LAB_00749dec;
            lVar7 = 0;
            *puVar4 = pvVar13;
            puVar4[1] = 0;
            param_1[0x266] = (long)puVar4;
          }
          *(long *)((long)puVar4 + 8) = lVar7 + 0x20;
          puVar17 = (undefined8 *)((long)puVar4 + lVar7 + 0x10);
          *puVar17 = &PTR_FUN_0079efe0;
          *(undefined1 *)((long)puVar4 + lVar7 + 0x18) = 0x21;
          *(undefined4 *)((long)puVar4 + lVar7 + 0x1c) = 2;
          *(int *)((long)puVar4 + lVar7 + 0x20) = (int)lVar9;
          *(ushort *)((long)puVar4 + lVar7 + 0x19) =
               *(ushort *)((long)puVar4 + lVar7 + 0x19) & 0xf000 | 0x540;
          if (param_2 != (undefined8 *)0x0) {
            puVar4 = (undefined8 *)param_2[1];
            if (puVar4 == (undefined8 *)param_2[2]) {
              puVar15 = param_2 + 3;
              puVar3 = (undefined8 *)*param_2;
              sVar12 = (long)puVar4 - (long)puVar3;
              if (puVar3 == puVar15) {
                pvVar13 = malloc(sVar12 * 2);
                if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                if (puVar4 != puVar15) {
                  memcpy(pvVar13,puVar15,sVar12);
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
            *puVar4 = puVar17;
          }
          plVar16 = (long *)param_1[0x54];
          plVar14 = (long *)param_1[0x53];
          local_a8 = &stack0xffffffffffffffa0;
          sVar12 = (long)plVar16 - (long)plVar14;
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
          if (plVar16 == (long *)param_1[0x55]) {
            if (plVar14 == param_1 + 0x56) {
              pvVar13 = malloc(sVar12 * 2);
              if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              if (plVar16 != plVar14) {
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
            plVar16 = (long *)((long)pvVar13 + sVar12);
            param_1[0x54] = (long)plVar16;
            param_1[0x55] = (long)((long)pvVar13 + ((long)sVar12 >> 2) * 8);
          }
          param_1[0x54] = (long)(plVar16 + 1);
          *plVar16 = (long)&local_b8;
          plVar16 = param_1 + 5;
          pcVar8 = (char *)*param_1;
          pcVar11 = (char *)param_1[1];
          do {
            if ((pcVar8 != pcVar11) && (*pcVar8 == 'E')) {
              lVar5 = 0;
              goto LAB_00749d24;
            }
                    /* try { // try from 00749c30 to 00749c3b has its CatchHandler @ 00749e40 */
            puVar4 = (undefined8 *)FUN_007494e8(param_1,&local_b8);
            if (puVar4 == (undefined8 *)0x0) goto LAB_00749dac;
            plVar14 = (long *)param_1[3];
            if (plVar14 == (long *)param_1[4]) {
              __ptr = (long *)param_1[2];
              sVar12 = (long)plVar14 - (long)__ptr;
              if (__ptr == plVar16) {
                pvVar13 = malloc(sVar12 * 2);
                if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                if (plVar14 != plVar16) {
                  memcpy(pvVar13,plVar16,sVar12);
                }
                param_1[2] = (long)pvVar13;
              }
              else {
                pvVar13 = realloc(__ptr,sVar12 * 2);
                param_1[2] = (long)pvVar13;
                if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
              }
              plVar14 = (long *)((long)pvVar13 + sVar12);
              param_1[3] = (long)plVar14;
              param_1[4] = (long)((long)pvVar13 + ((long)sVar12 >> 2) * 8);
            }
            param_1[3] = (long)(plVar14 + 1);
            *plVar14 = (long)puVar4;
            pcVar8 = (char *)*param_1;
            pcVar11 = (char *)param_1[1];
          } while ((pcVar8 == pcVar11) || (*pcVar8 != 'Q'));
          uVar10 = *(undefined1 *)((long)param_1 + 0x30a);
          *param_1 = (long)(pcVar8 + 1);
          *(undefined1 *)((long)param_1 + 0x30a) = 1;
                    /* try { // try from 00749cec to 00749cf3 has its CatchHandler @ 00749e2c */
          lVar5 = FUN_00741a30(param_1);
          *(undefined1 *)((long)param_1 + 0x30a) = uVar10;
          if ((lVar5 == 0) ||
             ((pcVar8 = (char *)*param_1, pcVar8 == (char *)param_1[1] || (*pcVar8 != 'E')))) {
            puVar4 = (undefined8 *)0x0;
          }
          else {
LAB_00749d24:
            *param_1 = (long)(pcVar8 + 1);
                    /* try { // try from 00749d2c to 00749d37 has its CatchHandler @ 00749e38 */
            auVar18 = FUN_0073ea94(param_1,lVar7 - lVar9 >> 3);
            pvVar13 = (void *)param_1[0x266];
            lVar9 = *(long *)((long)pvVar13 + 8);
            puVar3 = (undefined8 *)pvVar13;
            if (lVar9 - 0xfc0U < 0xfffffffffffff010) {
              puVar3 = (undefined8 *)malloc(0x1000);
              if (puVar3 == (undefined8 *)0x0) goto LAB_00749dec;
              lVar9 = 0;
              *puVar3 = pvVar13;
              puVar3[1] = 0;
              param_1[0x266] = (long)puVar3;
            }
            *(long *)((long)puVar3 + 8) = lVar9 + 0x30;
            puVar4 = (undefined8 *)((long)puVar3 + lVar9 + 0x10);
            *puVar4 = &PTR_FUN_0079f1a0;
            *(undefined1 *)((long)puVar3 + lVar9 + 0x18) = 0x26;
            *(undefined8 **)((long)puVar3 + lVar9 + 0x20) = puVar17;
            *(undefined1 (*) [16])((long)puVar3 + lVar9 + 0x28) = auVar18;
            *(long *)((long)puVar3 + lVar9 + 0x38) = lVar5;
            *(ushort *)((long)puVar3 + lVar9 + 0x19) =
                 *(ushort *)((long)puVar3 + lVar9 + 0x19) & 0xf000 | 0x500;
          }
LAB_00749dac:
          if ((ulong)(local_c8[0x54] - local_c8[0x53] >> 3) < uStack_c0) {
                    /* try { // try from 00749df8 to 00749e17 has its CatchHandler @ 00749e3c */
                    /* WARNING: Subroutine does not return */
            FUN_0073a468("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",
                         0xa4f,&DAT_001c717f);
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
          local_c8 = (long *)FUN_007494e8(param_1);
          if (local_c8 == (long *)0x0) {
            return (undefined8 *)0x0;
          }
          puVar4 = (undefined8 *)FUN_0074a100(param_1,&local_c8);
          return puVar4;
        }
        goto LAB_0074951c;
      }
      iVar2 = *(int *)((long)param_1 + 0x31c);
      pvVar13 = (void *)param_1[0x266];
      *param_1 = (long)(psVar1 + 1);
      *(int *)((long)param_1 + 0x31c) = iVar2 + 1;
      lVar9 = *(long *)((long)pvVar13 + 8);
      puVar4 = (undefined8 *)pvVar13;
      if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_00749dec;
        lVar9 = 0;
        *puVar4 = pvVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
      puVar17 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
      *puVar17 = &PTR_FUN_0079efe0;
      *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 0x21;
      *(undefined4 *)((long)puVar4 + lVar9 + 0x1c) = 1;
      *(int *)((long)puVar4 + lVar9 + 0x20) = iVar2;
      *(ushort *)((long)puVar4 + lVar9 + 0x19) =
           *(ushort *)((long)puVar4 + lVar9 + 0x19) & 0xf000 | 0x540;
      if (param_2 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)param_2[1];
        if (puVar4 == (undefined8 *)param_2[2]) {
          puVar15 = param_2 + 3;
          puVar3 = (undefined8 *)*param_2;
          sVar12 = (long)puVar4 - (long)puVar3;
          if (puVar3 == puVar15) {
            pvVar13 = malloc(sVar12 * 2);
            if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (puVar4 != puVar15) {
              memcpy(pvVar13,puVar15,sVar12);
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
        *puVar4 = puVar17;
      }
      lVar9 = FUN_0073c980(param_1);
      if (lVar9 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar13 = (void *)param_1[0x266];
      lVar7 = *(long *)((long)pvVar13 + 8);
      puVar4 = (undefined8 *)pvVar13;
      if (lVar7 - 0xfd0U < 0xfffffffffffff010) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_00749dec;
        lVar7 = 0;
        *puVar4 = pvVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar7 + 0x20;
      puVar3 = (undefined8 *)((long)puVar4 + lVar7 + 0x10);
      *puVar3 = &PTR_FUN_0079f130;
      uVar6 = *(ushort *)((long)puVar4 + lVar7 + 0x19);
      uVar10 = 0x25;
      *(undefined8 **)((long)puVar4 + lVar7 + 0x20) = puVar17;
      *(long *)((long)puVar4 + lVar7 + 0x28) = lVar9;
    }
    *(undefined1 *)(puVar3 + 1) = uVar10;
    *(ushort *)((long)puVar3 + 9) = uVar6 & 0xf000 | 0x500;
  }
  return puVar3;
}


// ===== 00749e54  FUN_00749e54 =====

void FUN_00749e54(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
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
      FUN_00739f00();
    }
    lVar2 = 0;
    *puVar1 = pvVar5;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x50;
  uVar3 = *param_3;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0079f280;
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


// ===== 00749f34  FUN_00749f34 =====

void FUN_00749f34(long *param_1)

{
  long lVar1;
  long *__ptr;
  
  lVar1 = *param_1;
  if ((ulong)(*(long *)(lVar1 + 0x2a0) - *(long *)(lVar1 + 0x298) >> 3) < (ulong)param_1[1]) {
                    /* try { // try from 00749f8c to 00749fab has its CatchHandler @ 00749fac */
                    /* WARNING: Subroutine does not return */
    FUN_0073a468("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0xa4f,
                 &DAT_001c717f);
  }
  __ptr = (long *)param_1[2];
  *(long *)(lVar1 + 0x2a0) = *(long *)(lVar1 + 0x298) + param_1[1] * 8;
  if (__ptr != param_1 + 5) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00749fb0  FUN_00749fb0 =====

void FUN_00749fb0(long param_1,undefined8 *param_2)

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


// ===== 0074a0f8  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074a100  FUN_0074a100 =====

void FUN_0074a100(long param_1,undefined8 *param_2)

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
      FUN_00739f00();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0079f210;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x27;
  uVar3 = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x500;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  return;
}


// ===== 0074a1a0  FUN_0074a1a0 =====

void FUN_0074a1a0(long param_1,undefined8 *param_2)

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
      if (iVar2 != 0) goto LAB_0074a300;
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
LAB_0074a300:
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


// ===== 0074a3cc  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074a3d4  FUN_0074a3d4 =====

void FUN_0074a3d4(undefined8 param_1,undefined8 *param_2)

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
  uVar2 = s_typename_001be379._0_8_;
  ((char *)((long)__ptr + lVar3))[8] = ' ';
  *(undefined8 *)((long)__ptr + lVar3) = uVar2;
  param_2[1] = param_2[1] + 9;
  return;
}


// ===== 0074a45c  FUN_0074a45c =====

void FUN_0074a45c(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  if ((*(ushort *)((long)plVar1 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0074a4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  return;
}


// ===== 0074a4c4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074a4cc  FUN_0074a4cc =====

void FUN_0074a4cc(long param_1,undefined8 *param_2)

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


// ===== 0074a578  FUN_0074a578 =====

void FUN_0074a578(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  if ((*(ushort *)((long)plVar1 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0074a5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  return;
}


// ===== 0074a5e0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074a5e8  FUN_0074a5e8 =====

void FUN_0074a5e8(long param_1,undefined8 *param_2)

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


// ===== 0074a6a4  FUN_0074a6a4 =====

void FUN_0074a6a4(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  if ((*(ushort *)((long)plVar1 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0074a718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),param_2);
  return;
}


// ===== 0074a71c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074a724  FUN_0074a724 =====

void FUN_0074a724(long param_1,undefined8 *param_2)

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
  uVar4 = s_template<_001f73b5._0_8_;
  ((char *)((long)pvVar5 + lVar6))[8] = '<';
  *(undefined8 *)((long)pvVar5 + lVar6) = uVar4;
  param_2[1] = param_2[1] + 9;
                    /* try { // try from 0074a7a8 to 0074a7b3 has its CatchHandler @ 0074a838 */
  FUN_00746df8(param_1 + 0x18,param_2);
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
  *(undefined8 *)pcVar2 = s_>_typename_001d9bf7._0_8_;
  pcVar2[7] = 'a';
  pcVar2[8] = 'm';
  pcVar2[9] = 'e';
  pcVar2[10] = ' ';
  param_2[1] = param_2[1] + 0xb;
  *(undefined4 *)(param_2 + 4) = uVar3;
  return;
}


// ===== 0074a840  FUN_0074a840 =====

void FUN_0074a840(long param_1,undefined8 *param_2)

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
    uVar3 = s_requires_001f9222._0_8_;
    pcVar2 = (char *)((long)__ptr + lVar4);
    pcVar2[8] = 's';
    pcVar2[9] = ' ';
    *(undefined8 *)pcVar2 = uVar3;
    plVar5 = *(long **)(param_1 + 0x28);
    lVar4 = *plVar5;
    param_2[1] = param_2[1] + 10;
    (**(code **)(lVar4 + 0x20))(plVar5,param_2);
    if ((*(ushort *)((long)plVar5 + 9) & 0xc0) != 0x40) {
                    /* WARNING: Could not recover jumptable at 0x0074a958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
      return;
    }
  }
  return;
}


// ===== 0074a960  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074a968  FUN_0074a968 =====

void FUN_0074a968(long param_1,undefined8 *param_2)

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


// ===== 0074a9f8  FUN_0074a9f8 =====

void FUN_0074a9f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0074aa08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))();
  return;
}


// ===== 0074aa0c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074aa14  FUN_0074aa14 =====

void FUN_0074aa14(long param_1,undefined8 *param_2)

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
  FUN_0074ab74(param_1,param_2);
  return;
}


// ===== 0074ab6c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074ab74  FUN_0074ab74 =====

void FUN_0074ab74(long param_1,undefined8 *param_2)

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
                    /* try { // try from 0074abec to 0074abf7 has its CatchHandler @ 0074aecc */
    FUN_00746df8(param_1 + 0x10,param_2);
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
    uVar3 = s_requires_001f9222._0_8_;
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
  FUN_00746df8(param_1 + 0x28,param_2);
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
    uVar3 = s_requires_001f9222._0_8_;
    pcVar1 = (char *)((long)pvVar4 + lVar5);
    pcVar1[8] = 's';
    pcVar1[9] = ' ';
    *(undefined8 *)pcVar1 = uVar3;
    plVar8 = *(long **)(param_1 + 0x38);
    lVar5 = *plVar8;
    param_2[1] = param_2[1] + 10;
    (**(code **)(lVar5 + 0x20))(plVar8,param_2);
    if ((*(ushort *)((long)plVar8 + 9) & 0xc0) != 0x40) {
                    /* WARNING: Could not recover jumptable at 0x0074aeac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
      return;
    }
  }
  return;
}


// ===== 0074aed4  FUN_0074aed4 =====

void FUN_0074aed4(long param_1,undefined8 *param_2)

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
    FUN_0074ab74(lVar3,param_2);
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


// ===== 0074afd0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074afd8  FUN_0074afd8 =====

void FUN_0074afd8(long param_1,undefined8 *param_2)

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


// ===== 0074b208  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074b210  FUN_0074b210 =====

void FUN_0074b210(long param_1,undefined8 *param_2)

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
      FUN_00739f00();
    }
    lVar2 = 0;
    *puVar1 = pvVar3;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0079f3d0;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x43;
  uVar5 = param_2[1];
  uVar4 = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar5;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar4;
  return;
}


// ===== 0074b2b0  FUN_0074b2b0 =====

void FUN_0074b2b0(long param_1,undefined8 *param_2)

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


// ===== 0074b39c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074b3a4  FUN_0074b3a4 =====

void FUN_0074b3a4(long param_1,undefined8 *param_2)

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
  if ((*(char *)(param_1 + 0x30) == '\0') || (plVar7 != (long *)0x0)) {
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
      local_48 = &PTR_FUN_0079f4b0;
      FUN_0074bb28(&local_48,param_2);
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
LAB_0074b5d4:
        lVar2 = param_2[1];
        uVar6 = lVar2 + 1;
      }
LAB_0074b5dc:
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
          goto LAB_0074b5d4;
        }
        goto LAB_0074b5dc;
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
  else {
    lVar2 = param_2[1];
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
  if (((*(byte *)(param_1 + 0x30) & 1) == 0) && (*(long *)(param_1 + 0x18) == 0)) goto LAB_0074ba00;
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
  if (*(char *)(param_1 + 0x30) == '\0') {
    plVar7 = *(long **)(param_1 + 0x18);
    if ((*(ushort *)((long)plVar7 + 9) & 0x3c) == 0) {
      (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
      if ((*(ushort *)((long)plVar7 + 9) & 0xc0) != 0x40) {
        (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
      }
      goto LAB_0074ba00;
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
      goto LAB_0074b9ec;
    }
  }
  else {
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
    local_48 = &PTR_FUN_0079f4b0;
    FUN_0074bb28(&local_48,param_2);
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
LAB_0074b9ec:
      lVar2 = param_2[1];
      uVar6 = lVar2 + 1;
    }
  }
  param_2[1] = uVar6;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x29;
LAB_0074ba00:
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


// ===== 0074bb20  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074bb28  FUN_0074bb28 =====

void FUN_0074bb28(long param_1,undefined8 *param_2)

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
                    /* try { // try from 0074bb68 to 0074bb93 has its CatchHandler @ 0074bcd0 */
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
                    /* try { // try from 0074bc1c to 0074bc4b has its CatchHandler @ 0074bcd8 */
        (**(code **)(lVar10 + 0x20))(plVar8,param_2);
        if ((*(ushort *)((long)plVar8 + 9) & 0xc0) != 0x40) {
          (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
        }
        uVar9 = uVar9 + 1;
      } while (uVar4 != uVar9);
    }
    goto LAB_0074bca8;
  }
  param_2[1] = lVar10;
LAB_0074bca8:
  *(undefined4 *)(param_2 + 3) = uVar2;
  *(undefined4 *)((long)param_2 + 0x1c) = uVar3;
  return;
}


// ===== 0074bce0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074bce8  FUN_0074bce8 =====

void FUN_0074bce8(long param_1,undefined8 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0074bf18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
  return;
}


// ===== 0074bf2c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074bf34  FUN_0074bf34 =====

void FUN_0074bf34(long param_1,undefined8 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0074c184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  return;
}


// ===== 0074c198  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074c1a0  FUN_0074c1a0 =====

void FUN_0074c1a0(long param_1,undefined8 *param_2)

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
  FUN_00746df8(param_1 + 0x18,param_2);
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


// ===== 0074c2b4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074c2bc  FUN_0074c2bc =====

void FUN_0074c2bc(long param_1,undefined8 *param_2)

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


// ===== 0074c4c4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074c4cc  FUN_0074c4cc =====

void FUN_0074c4cc(long param_1,undefined8 *param_2)

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
  if (((*(byte *)(param_1 + 0x18) & 1) != 0) || (*(long *)(param_1 + 0x20) != 0)) {
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
      uVar2 = s_noexcept_001dc14f._0_8_;
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


// ===== 0074c7b0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074c7b8  FUN_0074c7b8 =====

void FUN_0074c7b8(long param_1,undefined8 *param_2)

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
  uVar2 = s_typename_001f0b33._0_8_;
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


// ===== 0074c8d4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074c8dc  FUN_0074c8dc =====

void FUN_0074c8dc(long param_1,undefined8 *param_2)

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
  uVar2 = s_requires_001f9222._0_8_;
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


// ===== 0074c9f8  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074ca00  FUN_0074ca00 =====

void FUN_0074ca00(long param_1,undefined8 *param_2)

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
    FUN_00746df8(param_1 + 0x10,param_2);
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


// ===== 0074cd50  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074cd58  FUN_0074cd58 =====

void FUN_0074cd58(long param_1,undefined8 *param_2)

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
  *(undefined8 *)pcVar9 = s_at_offset_001e875e._0_8_;
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
      if (sVar4 == 0) goto LAB_0074cfe4;
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
LAB_0074cfe4:
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


// ===== 0074d060  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074d068  FUN_0074d068 =====

void FUN_0074d068(long param_1,undefined8 *param_2)

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
  uVar2 = s_sizeof____001d144d._0_8_;
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
  local_38 = &PTR_FUN_0079f4b0;
  FUN_0074bb28(&local_38,param_2);
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


// ===== 0074d1e0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074d1e8  FUN_0074d1e8 =====

void FUN_0074d1e8(long param_1)

{
  FUN_00746df8(param_1 + 0x10);
  return;
}


// ===== 0074d1f4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074d1fc  FUN_0074d1fc =====

void FUN_0074d1fc(long param_1,undefined8 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0074d2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  return;
}


// ===== 0074d2d4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074d2dc  FUN_0074d2dc =====

void FUN_0074d2dc(long *param_1)

{
  char cVar1;
  long lVar2;
  long *__ptr;
  void *__dest;
  size_t __n;
  long *plVar3;
  long *plVar4;
  
  if ((char *)param_1[1] == (char *)*param_1) {
LAB_0074d360:
    FUN_00740ce8();
    return;
  }
  cVar1 = *(char *)*param_1;
  if (cVar1 == 'D') {
    lVar2 = FUN_00740bb4();
    if (lVar2 == 0) {
      return;
    }
    plVar4 = (long *)param_1[0x26];
    if (plVar4 != (long *)param_1[0x27]) goto LAB_0074d434;
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
LAB_0074d418:
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
    if (cVar1 != 'T') goto LAB_0074d360;
    lVar2 = FUN_007407f0();
    if (lVar2 == 0) {
      return;
    }
    plVar4 = (long *)param_1[0x26];
    if (plVar4 != (long *)param_1[0x27]) goto LAB_0074d434;
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
      goto LAB_0074d418;
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
LAB_0074d434:
  param_1[0x26] = (long)(plVar4 + 1);
  *plVar4 = lVar2;
  return;
}


// ===== 0074d460  FUN_0074d460 =====

undefined8 * FUN_0074d460(long *param_1)

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
          puVar3 = (undefined8 *)FUN_0074d2dc(param_1);
          if (puVar3 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
        }
        else {
          puVar4 = (undefined8 *)FUN_0073fc64(param_1);
          if (puVar4 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          puVar3 = puVar4;
          if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
            lVar6 = FUN_00740278(param_1,0);
            if (lVar6 == 0) {
              return (undefined8 *)0x0;
            }
            pvVar9 = (void *)param_1[0x266];
            lVar8 = *(long *)((long)pvVar9 + 8);
            puVar5 = (undefined8 *)pvVar9;
            if (lVar8 - 0xfd0U < 0xfffffffffffff010) {
              puVar5 = (undefined8 *)malloc(0x1000);
              if (puVar5 == (undefined8 *)0x0) goto LAB_0074d6ec;
              lVar8 = 0;
              *puVar5 = pvVar9;
              puVar5[1] = 0;
              param_1[0x266] = (long)puVar5;
            }
            *(long *)((long)puVar5 + 8) = lVar8 + 0x20;
            puVar3 = (undefined8 *)((long)puVar5 + lVar8 + 0x10);
            *puVar3 = &PTR_FUN_007a0160;
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
LAB_0074d5f0:
          *(long *)((long)puVar4 + 8) = lVar6 + 0x20;
          puVar5 = (undefined8 *)((long)puVar4 + lVar6 + 0x10);
          *puVar5 = &PTR_FUN_0079fad0;
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
          goto LAB_0074d5f0;
        }
        goto LAB_0074d6ec;
      }
      if (*(short *)pbVar1 == 0x6e6f) {
        *param_1 = (long)(pbVar1 + 2);
      }
    }
    puVar3 = (undefined8 *)FUN_0074d810(param_1,0);
  }
  else {
    puVar3 = (undefined8 *)FUN_0073fc64(param_1);
  }
  puVar4 = puVar3;
  if ((((puVar3 != (undefined8 *)0x0) && ((char *)param_1[1] != (char *)*param_1)) &&
      (*(char *)*param_1 == 'I')) &&
     (puVar4 = (undefined8 *)FUN_00740278(param_1,0), puVar4 != (undefined8 *)0x0)) {
    pvVar9 = (void *)param_1[0x266];
    lVar6 = *(long *)((long)pvVar9 + 8);
    puVar5 = (undefined8 *)pvVar9;
    if (lVar6 - 0xfd0U < 0xfffffffffffff010) {
      puVar5 = (undefined8 *)malloc(0x1000);
      if (puVar5 == (undefined8 *)0x0) {
LAB_0074d6ec:
                    /* WARNING: Subroutine does not return */
        FUN_00739f00();
      }
      lVar6 = 0;
      *puVar5 = pvVar9;
      puVar5[1] = 0;
      param_1[0x266] = (long)puVar5;
    }
    *(long *)((long)puVar5 + 8) = lVar6 + 0x20;
    puVar7 = (undefined8 *)((long)puVar5 + lVar6 + 0x10);
    *puVar7 = &PTR_FUN_007a0160;
    *(undefined8 **)((long)puVar5 + lVar6 + 0x20) = puVar3;
    *(undefined8 **)((long)puVar5 + lVar6 + 0x28) = puVar4;
    *(undefined1 *)((long)puVar5 + lVar6 + 0x18) = 0x2d;
    *(ushort *)((long)puVar5 + lVar6 + 0x19) =
         *(ushort *)((long)puVar5 + lVar6 + 0x19) & 0xf000 | 0x540;
    puVar4 = puVar7;
  }
  return puVar4;
}


// ===== 0074d6f0  FUN_0074d6f0 =====

void FUN_0074d6f0(long param_1,undefined8 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0074d7ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  return;
}


// ===== 0074d7f4  FUN_0074d7f4 =====

void FUN_0074d7f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0074d804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
  return;
}


// ===== 0074d808  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074d810  FUN_0074d810 =====

undefined8 * FUN_0074d810(long *param_1,undefined1 *param_2)

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
      if ((byte)(&DAT_0079e3a0)[uVar16 * 0x10] < bVar4) {
        uVar14 = uVar16 + 1;
        uVar16 = uVar15;
      }
      else if (((&DAT_0079e3a0)[uVar16 * 0x10] == bVar4) &&
              ((byte)(&UNK_0079e3a1)[uVar16 * 0x10] < pbVar2[1])) {
        uVar14 = uVar16 + 1;
        uVar16 = uVar15;
      }
      uVar15 = uVar16;
    } while (uVar16 != uVar14);
    lVar11 = uVar14 * 0x10;
    if (((&DAT_0079e3a0)[lVar11] == bVar4) && ((&UNK_0079e3a1)[lVar11] == pbVar2[1])) {
      bVar4 = (&UNK_0079e3a2)[lVar11];
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
                    /* try { // try from 0074d8f0 to 0074d8f7 has its CatchHandler @ 0074db84 */
        lVar6 = FUN_0073c980();
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
            if (puVar7 == (undefined8 *)0x0) goto LAB_0074db80;
            lVar13 = 0;
            *puVar7 = pvVar17;
            puVar7[1] = 0;
            param_1[0x266] = (long)puVar7;
          }
          *(long *)((long)puVar7 + 8) = lVar13 + 0x20;
          puVar8 = (undefined8 *)((long)puVar7 + lVar13 + 0x10);
          *puVar8 = &PTR_FUN_0079fb40;
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
      if ((bVar4 == 4) && (((&UNK_0079e3a3)[lVar11] & 1) == 0)) {
        return (undefined8 *)0x0;
      }
      __s = *(char **)(&UNK_0079e3a8 + lVar11);
      sVar9 = strlen(__s);
      pvVar17 = (void *)param_1[0x266];
      lVar11 = *(long *)((long)pvVar17 + 8);
      puVar8 = (undefined8 *)pvVar17;
      if (0xfffffffffffff00f < lVar11 - 0xfd0U) {
LAB_0074db30:
        *(long *)((long)puVar8 + 8) = lVar11 + 0x20;
        puVar7 = (undefined8 *)((long)puVar8 + lVar11 + 0x10);
        *puVar7 = &PTR_FUN_0079e260;
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
        goto LAB_0074db30;
      }
      goto LAB_0074db80;
    }
    if (*(short *)pbVar2 == 0x696c) {
      *param_1 = (long)(pbVar2 + 2);
      lVar11 = FUN_0073fc64();
      if (lVar11 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar17 = (void *)param_1[0x266];
      lVar6 = *(long *)((long)pvVar17 + 8);
      puVar8 = (undefined8 *)pvVar17;
      if (lVar6 - 0xfd0U < 0xfffffffffffff010) {
        puVar8 = (undefined8 *)malloc(0x1000);
        if (puVar8 == (undefined8 *)0x0) goto LAB_0074db80;
        lVar6 = 0;
        *puVar8 = pvVar17;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      lVar13 = (long)puVar8 + lVar6;
      ppuVar10 = &PTR_FUN_0079fbb0;
      *(long *)((long)puVar8 + 8) = lVar6 + 0x20;
      uVar12 = 0x14;
      goto LAB_0074da90;
    }
  }
  if ((pbVar2 != pbVar3) && (*pbVar2 == 0x76)) {
    pbVar1 = pbVar2 + 1;
    *param_1 = (long)pbVar1;
    if ((pbVar3 != pbVar1) && (*pbVar1 - 0x30 < 10)) {
      *param_1 = (long)(pbVar2 + 2);
      lVar11 = FUN_0073fc64();
      if (lVar11 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar17 = (void *)param_1[0x266];
      lVar6 = *(long *)((long)pvVar17 + 8);
      puVar8 = (undefined8 *)pvVar17;
      if (lVar6 - 0xfd0U < 0xfffffffffffff010) {
        puVar8 = (undefined8 *)malloc(0x1000);
        if (puVar8 == (undefined8 *)0x0) {
LAB_0074db80:
                    /* WARNING: Subroutine does not return */
          FUN_00739f00();
        }
        lVar6 = 0;
        *puVar8 = pvVar17;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      lVar13 = (long)puVar8 + lVar6;
      ppuVar10 = &PTR_FUN_0079fb40;
      *(long *)((long)puVar8 + 8) = lVar6 + 0x20;
      uVar12 = 4;
LAB_0074da90:
      *(undefined8 *)(lVar13 + 0x10) = ppuVar10;
      *(undefined1 *)(lVar13 + 0x18) = uVar12;
      *(long *)(lVar13 + 0x20) = lVar11;
      *(ushort *)(lVar13 + 0x19) = *(ushort *)(lVar13 + 0x19) & 0xf000 | 0x540;
      return (undefined8 *)(lVar13 + 0x10);
    }
  }
  return (undefined8 *)0x0;
}


// ===== 0074db90  FUN_0074db90 =====

void FUN_0074db90(long param_1,undefined8 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0074dc1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x20))();
  return;
}


// ===== 0074dc24  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074dc2c  FUN_0074dc2c =====

void FUN_0074dc2c(long param_1,undefined8 *param_2)

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
  uVar2 = s_operator_001f2d8f._0_8_;
  ((char *)((long)__ptr + lVar3))[8] = ' ';
  *(undefined8 *)((long)__ptr + lVar3) = uVar2;
  plVar4 = *(long **)(param_1 + 0x10);
  lVar3 = *plVar4;
  param_2[1] = param_2[1] + 9;
  (**(code **)(lVar3 + 0x20))(plVar4,param_2);
  if ((*(ushort *)((long)plVar4 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0074dd00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}


// ===== 0074dd08  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074dd10  FUN_0074dd10 =====

void FUN_0074dd10(long param_1,undefined8 *param_2)

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
  *(undefined8 *)pcVar2 = s_operator___001f0b3e._0_8_;
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
                    /* WARNING: Could not recover jumptable at 0x0074dde8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}


// ===== 0074ddf0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074ddf8  FUN_0074ddf8 =====

void FUN_0074ddf8(long param_1,undefined8 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0074deb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  return;
}


// ===== 0074dec0  FUN_0074dec0 =====

void FUN_0074dec0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0074ded0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  return;
}


// ===== 0074ded4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074dedc  FUN_0074dedc =====

undefined8 * FUN_0074dedc(long *param_1,undefined8 *param_2)

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
      auVar7 = FUN_0074e4f4(param_1);
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
          FUN_00739f00();
        }
        lVar4 = 0;
        *puVar2 = pvVar6;
        puVar2[1] = 0;
        param_1[0x266] = (long)puVar2;
      }
      *(long *)((long)puVar2 + 8) = lVar4 + 0x30;
      uVar1 = *(ushort *)((long)puVar5 + 9);
      param_2 = (undefined8 *)((long)puVar2 + lVar4 + 0x10);
      *param_2 = &PTR_FUN_0079fd70;
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


// ===== 0074dfec  FUN_0074dfec =====

void FUN_0074dfec(long param_1,undefined8 *param_2)

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
      goto LAB_0074e114;
    }
    if (iVar2 == 1) {
      pcVar6 = "basic_string";
      sVar5 = 0xc;
      goto LAB_0074e114;
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
    FUN_0073a468("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0x6a9,
                 &DAT_001c717f);
  }
  pcVar6 = (char *)((long)pcVar6 + 6);
LAB_0074e114:
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


// ===== 0074e1a4  FUN_0074e1a4 =====

undefined1  [16] FUN_0074e1a4(long param_1)

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
  FUN_0073a468("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0x6a9,
               &DAT_001c717f);
}


// ===== 0074e280  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074e288  FUN_0074e288 =====

void FUN_0074e288(long *param_1,undefined8 *param_2)

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
    uVar6 = s_<char,_std::char_traits<char>_001e269a._21_8_;
    uVar5 = s_<char,_std::char_traits<char>_001e269a._0_8_;
    pcVar2 = (char *)((long)pvVar7 + lVar8);
    uVar4 = CONCAT53(s_<char,_std::char_traits<char>_001e269a._16_5_,
                     s_<char,_std::char_traits<char>_001e269a._13_3_);
    *(ulong *)(pcVar2 + 8) =
         CONCAT35(s_<char,_std::char_traits<char>_001e269a._13_3_,
                  s_<char,_std::char_traits<char>_001e269a._8_5_);
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
      uVar5 = s___std__allocator<char>_001eeb54._0_8_;
      pcVar2 = (char *)((long)pvVar7 + lVar8);
      uVar4 = CONCAT62(s___std__allocator<char>_001eeb54._16_6_,
                       s___std__allocator<char>_001eeb54._14_2_);
      *(ulong *)(pcVar2 + 8) =
           CONCAT26(s___std__allocator<char>_001eeb54._14_2_,s___std__allocator<char>_001eeb54._8_6_
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


// ===== 0074e4c4  FUN_0074e4c4 =====

undefined1  [16] FUN_0074e4c4(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = *(undefined8 *)(&DAT_00214a68 + (long)*(int *)(param_1 + 0xc) * 8);
  auVar1._0_8_ = &DAT_00214a98 + *(int *)(&DAT_00214a98 + (long)*(int *)(param_1 + 0xc) * 4);
  return auVar1;
}


// ===== 0074e4ec  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074e4f4  FUN_0074e4f4 =====

undefined1  [16] FUN_0074e4f4(long *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  ulong local_8;
  
  local_8 = 0;
  uVar1 = FUN_0073fe10(param_1,&local_8);
  lVar2 = 0;
  uVar3 = 0;
  if ((uVar1 & 1) == 0) {
    lVar2 = *param_1;
    if ((ulong)(param_1[1] - lVar2) < local_8) {
      lVar2 = 0;
      uVar3 = 0;
    }
    else {
      *param_1 = lVar2 + local_8;
      uVar3 = local_8;
    }
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = lVar2;
  return auVar4;
}


// ===== 0074e55c  FUN_0074e55c =====

void FUN_0074e55c(long param_1,undefined8 *param_2)

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


// ===== 0074e6b0  FUN_0074e6b0 =====

void FUN_0074e6b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0074e6c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  return;
}


// ===== 0074e6c4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074e6cc  FUN_0074e6cc =====

void FUN_0074e6cc(long param_1,undefined8 *param_2)

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
  FUN_00746df8(param_1 + 0x10,param_2);
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


// ===== 0074e7b0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074e7b8  FUN_0074e7b8 =====

void FUN_0074e7b8(long param_1,undefined8 *param_2,undefined1 *param_3,undefined4 *param_4)

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
      FUN_00739f00();
    }
    lVar4 = 0;
    *puVar3 = pvVar6;
    puVar3[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar3;
  }
  uVar5 = *param_2;
  *(long *)((long)puVar3 + 8) = lVar4 + 0x20;
  *(undefined ***)((long)puVar3 + lVar4 + 0x10) = &PTR_FUN_0079fe50;
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


// ===== 0074e878  FUN_0074e878 =====

void FUN_0074e878(long param_1,undefined8 *param_2)

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


// ===== 0074e97c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074e984  FUN_0074e984 =====

void FUN_0074e984(long param_1,undefined8 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0074ea7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  return;
}


// ===== 0074ea84  FUN_0074ea84 =====

void FUN_0074ea84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0074ea94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
  return;
}


// ===== 0074ea98  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074eaa0  FUN_0074eaa0 =====

void FUN_0074eaa0(long param_1,undefined8 *param_2)

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
  uVar2 = s___friend_001c4fa3._0_8_;
  ((char *)((long)__ptr + lVar3))[8] = ' ';
  *(undefined8 *)((long)__ptr + lVar3) = uVar2;
  plVar4 = *(long **)(param_1 + 0x18);
  lVar3 = *plVar4;
  param_2[1] = param_2[1] + 9;
  (**(code **)(lVar3 + 0x20))(plVar4,param_2);
  if ((*(ushort *)((long)plVar4 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0074ebb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}


// ===== 0074ebb8  FUN_0074ebb8 =====

void FUN_0074ebb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0074ebc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
  return;
}


// ===== 0074ebcc  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074ebd4  FUN_0074ebd4 =====

void FUN_0074ebd4(long param_1,undefined8 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0074ecd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  return;
}


// ===== 0074ecd8  FUN_0074ecd8 =====

void FUN_0074ecd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0074ece8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
  return;
}


// ===== 0074ecec  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074ecf4  FUN_0074ecf4 =====

byte * FUN_0074ecf4(byte *param_1,byte *param_2)

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


// ===== 0074eda4  FUN_0074eda4 =====

undefined8 * FUN_0074eda4(long param_1,char *param_2)

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
      FUN_00739f00();
    }
    lVar3 = 0;
    *puVar1 = pvVar5;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar3 + 0x20;
  sVar2 = strlen(param_2);
  puVar4 = (undefined8 *)((long)puVar1 + lVar3 + 0x10);
  *puVar4 = &PTR_FUN_0079e260;
  *(undefined1 *)((long)puVar1 + lVar3 + 0x18) = 8;
  *(char **)((long)puVar1 + lVar3 + 0x20) = param_2;
  *(size_t *)((long)puVar1 + lVar3 + 0x28) = sVar2;
  *(ushort *)((long)puVar1 + lVar3 + 0x19) =
       *(ushort *)((long)puVar1 + lVar3 + 0x19) & 0xf000 | 0x540;
  return puVar4;
}


// ===== 0074ee50  FUN_0074ee50 =====

void FUN_0074ee50(long param_1,undefined8 *param_2,undefined8 *param_3)

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
      FUN_00739f00();
    }
    lVar2 = 0;
    *puVar1 = pvVar5;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_007a0010;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x1a;
  uVar3 = *param_2;
  uVar4 = *param_3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar4;
  return;
}


// ===== 0074eef8  FUN_0074eef8 =====

void FUN_0074eef8(long param_1,undefined8 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0074eff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  return;
}


// ===== 0074effc  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074f004  FUN_0074f004 =====

ulong FUN_0074f004(long param_1,long param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0074f044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)*puVar2)();
  return uVar3;
}


// ===== 0074f070  FUN_0074f070 =====

ulong FUN_0074f070(long param_1,long param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0074f0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar2 + 8))();
  return uVar3;
}


// ===== 0074f0dc  FUN_0074f0dc =====

ulong FUN_0074f0dc(long param_1,long param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0074f11c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar2 + 0x10))();
  return uVar3;
}


// ===== 0074f148  FUN_0074f148 =====

void FUN_0074f148(long param_1,long param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0074f178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + uVar1 * 8) + 0x18))();
  return;
}


// ===== 0074f194  FUN_0074f194 =====

void FUN_0074f194(long param_1,long param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0074f1c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + uVar1 * 8) + 0x20))();
  return;
}


// ===== 0074f1e0  FUN_0074f1e0 =====

void FUN_0074f1e0(long param_1,long param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0074f210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + uVar1 * 8) + 0x28))();
  return;
}


// ===== 0074f22c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074f234  FUN_0074f234 =====

void FUN_0074f234(long param_1,undefined8 *param_2)

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
                    /* try { // try from 0074f2a4 to 0074f2af has its CatchHandler @ 0074f31c */
  FUN_00746df8(param_1 + 0x10,param_2);
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


// ===== 0074f324  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074f32c  FUN_0074f32c =====

void FUN_0074f32c(long param_1,undefined8 param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0074f3dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  return;
}


// ===== 0074f3e0  FUN_0074f3e0 =====

void FUN_0074f3e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0074f3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  return;
}


// ===== 0074f3f4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074f3fc  FUN_0074f3fc =====

void FUN_0074f3fc(long param_1)

{
  FUN_00746df8(param_1 + 0x10);
  return;
}


// ===== 0074f408  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074f410  FUN_0074f410 =====

void FUN_0074f410(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  if ((*(ushort *)((long)plVar1 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0074f474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  return;
}


// ===== 0074f478  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074f480  FUN_0074f480 =====

void FUN_0074f480(long param_1,undefined8 *param_2)

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
  *(undefined8 *)pcVar1 = s__enable_if__001c2aa5._0_8_;
  pcVar1[8] = '_';
  pcVar1[9] = 'i';
  pcVar1[10] = 'f';
  pcVar1[0xb] = ':';
  param_2[1] = param_2[1] + 0xc;
  FUN_00746df8(param_1 + 0x10,param_2);
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


// ===== 0074f570  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074f578  FUN_0074f578 =====

void FUN_0074f578(long param_1,undefined8 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0074f648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  return;
}


// ===== 0074f650  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074f658  FUN_0074f658 =====

undefined8 FUN_0074f658(void)

{
  return 1;
}


// ===== 0074f664  FUN_0074f664 =====

undefined8 FUN_0074f664(void)

{
  return 1;
}


// ===== 0074f670  FUN_0074f670 =====

void FUN_0074f670(long param_1,undefined8 *param_2)

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
      if ((uVar3 & 1) != 0) goto LAB_0074f720;
    }
    else if (*(byte *)((long)puVar2 + 9) < 0x40) goto LAB_0074f720;
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
LAB_0074f720:
  plVar1 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  if ((*(ushort *)((long)plVar1 + 9) & 0xc0) != 0x40) {
                    /* WARNING: Could not recover jumptable at 0x0074f774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
    return;
  }
  return;
}


// ===== 0074f77c  FUN_0074f77c =====

void FUN_0074f77c(long param_1,undefined8 *param_2)

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
  FUN_00746df8(param_1 + 0x20,param_2);
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
    uVar2 = s_volatile_001f2da7._0_8_;
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
    uVar2 = s_restrict_001f52ae._0_8_;
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
    if (*(char *)(param_1 + 0x44) != '\x01') goto LAB_0074fa50;
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
LAB_0074fa50:
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
    uVar2 = s_requires_001f9222._0_8_;
    pcVar1 = (char *)((long)pvVar3 + lVar6);
    pcVar1[8] = 's';
    pcVar1[9] = ' ';
    *(undefined8 *)pcVar1 = uVar2;
    plVar4 = *(long **)(param_1 + 0x38);
    lVar6 = *plVar4;
    param_2[1] = param_2[1] + 10;
    (**(code **)(lVar6 + 0x20))(plVar4,param_2);
    if ((*(ushort *)((long)plVar4 + 9) & 0xc0) != 0x40) {
                    /* WARNING: Could not recover jumptable at 0x0074fb54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
      return;
    }
  }
  return;
}


// ===== 0074fb78  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074fb80  FUN_0074fb80 =====

void FUN_0074fb80(long param_1,undefined8 *param_2)

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


// ===== 0074fcec  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0074fcf4  FUN_0074fcf4 =====

undefined8 * FUN_0074fcf4(long *param_1)

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
  ushort uVar10;
  short *psVar11;
  long lVar12;
  undefined1 uVar13;
  short *psVar14;
  short *psVar15;
  long *plVar16;
  size_t sVar17;
  uint uVar18;
  undefined8 *puVar19;
  undefined1 auVar20 [16];
  
  psVar14 = (short *)*param_1;
  psVar11 = (short *)param_1[1];
  if ((psVar14 == psVar11) || ((char)*psVar14 != 'r')) {
    uVar18 = 0;
  }
  else {
    psVar14 = (short *)((long)psVar14 + 1);
    uVar18 = 4;
    *param_1 = (long)psVar14;
  }
  psVar15 = psVar11;
  if (psVar14 != psVar11) {
    if ((char)*psVar14 == 'V') {
      psVar14 = (short *)((long)psVar14 + 1);
      uVar18 = uVar18 | 2;
      *param_1 = (long)psVar14;
    }
    if ((psVar14 != psVar11) && (psVar15 = psVar14, (char)*psVar14 == 'K')) {
      uVar18 = uVar18 | 1;
      *param_1 = (long)psVar14 + 1;
      psVar15 = (short *)((long)psVar14 + 1);
    }
  }
  if ((ulong)((long)psVar11 - (long)psVar15) < 2) {
LAB_0074fda4:
    puVar19 = (undefined8 *)0x0;
  }
  else {
    if (*psVar15 == 0x6f44) {
      pvVar7 = (void *)param_1[0x266];
      *param_1 = (long)(psVar15 + 1);
      lVar4 = *(long *)((long)pvVar7 + 8);
      puVar8 = (undefined8 *)pvVar7;
      if (lVar4 - 0xfd0U < 0xfffffffffffff010) {
        puVar8 = (undefined8 *)malloc(0x1000);
        if (puVar8 == (undefined8 *)0x0) {
LAB_00750298:
                    /* WARNING: Subroutine does not return */
          FUN_00739f00();
        }
        lVar4 = 0;
        *puVar8 = pvVar7;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar4 + 0x20;
      puVar19 = (undefined8 *)((long)puVar8 + lVar4 + 0x10);
      *puVar19 = &PTR_FUN_0079e260;
      *(undefined1 *)((long)puVar8 + lVar4 + 0x18) = 8;
      *(ushort *)((long)puVar8 + lVar4 + 0x19) =
           *(ushort *)((long)puVar8 + lVar4 + 0x19) & 0xf000 | 0x540;
      *(char **)((long)puVar8 + lVar4 + 0x20) = "noexcept";
      *(undefined8 *)((long)puVar8 + lVar4 + 0x28) = 8;
      goto LAB_00750034;
    }
    if (*psVar15 == 0x4f44) {
      *param_1 = (long)(psVar15 + 1);
      lVar4 = FUN_00741a30(param_1);
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
        if (puVar8 == (undefined8 *)0x0) goto LAB_00750298;
        lVar12 = 0;
        *puVar8 = pvVar7;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar12 + 0x20;
      puVar19 = (undefined8 *)((long)puVar8 + lVar12 + 0x10);
      *puVar19 = &PTR_FUN_007a0470;
      uVar10 = *(ushort *)((long)puVar8 + lVar12 + 0x19);
      uVar13 = 0x11;
      *(long *)((long)puVar8 + lVar12 + 0x20) = lVar4;
    }
    else {
      if (*psVar15 != 0x7744) goto LAB_0074fda4;
      lVar4 = param_1[2];
      lVar12 = param_1[3];
      psVar15 = psVar15 + 1;
      plVar1 = param_1 + 5;
      *param_1 = (long)psVar15;
      while ((psVar15 == psVar11 || ((char)*psVar15 != 'E'))) {
        lVar3 = FUN_0073c980(param_1);
        if (lVar3 == 0) {
          return (undefined8 *)0x0;
        }
        plVar16 = (long *)param_1[3];
        if (plVar16 == (long *)param_1[4]) {
          plVar6 = (long *)param_1[2];
          sVar17 = (long)plVar16 - (long)plVar6;
          if (plVar6 == plVar1) {
            pvVar7 = malloc(sVar17 * 2);
            if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (plVar16 != plVar1) {
              memcpy(pvVar7,plVar1,sVar17);
            }
            param_1[2] = (long)pvVar7;
          }
          else {
            pvVar7 = realloc(plVar6,sVar17 * 2);
            param_1[2] = (long)pvVar7;
            if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          plVar16 = (long *)((long)pvVar7 + sVar17);
          param_1[4] = (long)((long)pvVar7 + ((long)sVar17 >> 2) * 8);
        }
        param_1[3] = (long)(plVar16 + 1);
        *plVar16 = lVar3;
        psVar11 = (short *)param_1[1];
        psVar15 = (short *)*param_1;
      }
      *param_1 = (long)((long)psVar15 + 1);
      auVar20 = FUN_0073ea94(param_1,lVar12 - lVar4 >> 3);
      pvVar7 = (void *)param_1[0x266];
      lVar4 = *(long *)((long)pvVar7 + 8);
      puVar8 = (undefined8 *)pvVar7;
      if (lVar4 - 0xfd0U < 0xfffffffffffff010) {
        puVar8 = (undefined8 *)malloc(0x1000);
        if (puVar8 == (undefined8 *)0x0) goto LAB_00750298;
        lVar4 = 0;
        *puVar8 = pvVar7;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar4 + 0x20;
      puVar19 = (undefined8 *)((long)puVar8 + lVar4 + 0x10);
      *puVar19 = &PTR_FUN_007a04e0;
      uVar10 = *(ushort *)((long)puVar8 + lVar4 + 0x19);
      uVar13 = 0x12;
      *(undefined1 (*) [16])((long)puVar8 + lVar4 + 0x20) = auVar20;
    }
    *(undefined1 *)(puVar19 + 1) = uVar13;
    *(ushort *)((long)puVar19 + 9) = uVar10 & 0xf000 | 0x540;
  }
LAB_00750034:
  psVar14 = (short *)*param_1;
  psVar11 = (short *)param_1[1];
  if ((1 < (ulong)((long)psVar11 - (long)psVar14)) && (*psVar14 == 0x7844)) {
    psVar14 = psVar14 + 1;
    *param_1 = (long)psVar14;
  }
  if ((psVar14 == psVar11) || ((char)*psVar14 != 'F')) {
    return (undefined8 *)0x0;
  }
  psVar15 = (short *)((long)psVar14 + 1);
  *param_1 = (long)psVar15;
  if ((psVar15 != psVar11) && (*(char *)psVar15 == 'Y')) {
    *param_1 = (long)(psVar14 + 1);
  }
  lVar4 = FUN_0073c980(param_1);
  if (lVar4 == 0) {
    return (undefined8 *)0x0;
  }
  lVar12 = param_1[2];
  lVar3 = param_1[3];
  plVar1 = param_1 + 5;
  do {
    while( true ) {
      psVar14 = (short *)*param_1;
      if (psVar14 != (short *)param_1[1]) break;
LAB_00750118:
      if (1 < (ulong)(param_1[1] - (long)psVar14)) {
        if (*psVar14 == 0x4552) {
          uVar13 = 1;
          lVar5 = 2;
          goto LAB_007501f4;
        }
        if (*psVar14 == 0x454f) {
          lVar5 = 2;
          uVar13 = 2;
          goto LAB_007501f4;
        }
      }
      lVar5 = FUN_0073c980(param_1);
      if (lVar5 == 0) {
        return (undefined8 *)0x0;
      }
      plVar16 = (long *)param_1[3];
      if (plVar16 == (long *)param_1[4]) {
        plVar6 = (long *)param_1[2];
        sVar17 = (long)plVar16 - (long)plVar6;
        if (plVar6 == plVar1) {
          pvVar7 = malloc(sVar17 * 2);
          if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar16 != plVar1) {
            memcpy(pvVar7,plVar1,sVar17);
          }
          param_1[2] = (long)pvVar7;
        }
        else {
          pvVar7 = realloc(plVar6,sVar17 * 2);
          param_1[2] = (long)pvVar7;
          if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar16 = (long *)((long)pvVar7 + sVar17);
        param_1[4] = (long)((long)pvVar7 + ((long)sVar17 >> 2) * 8);
      }
      param_1[3] = (long)(plVar16 + 1);
      *plVar16 = lVar5;
    }
    if ((char)*psVar14 == 'E') break;
    if ((char)*psVar14 != 'v') goto LAB_00750118;
    *param_1 = (long)((long)psVar14 + 1);
  } while( true );
  uVar13 = 0;
  lVar5 = 1;
LAB_007501f4:
  *param_1 = (long)((long)psVar14 + lVar5);
  auVar20 = FUN_0073ea94(param_1,lVar3 - lVar12 >> 3);
  pvVar7 = (void *)param_1[0x266];
  lVar12 = *(long *)((long)pvVar7 + 8);
  puVar8 = (undefined8 *)pvVar7;
  if (lVar12 - 0xfb0U < 0xfffffffffffff010) {
    puVar8 = (undefined8 *)malloc(0x1000);
    if (puVar8 == (undefined8 *)0x0) goto LAB_00750298;
    lVar12 = 0;
    *puVar8 = pvVar7;
    puVar8[1] = 0;
    param_1[0x266] = (long)puVar8;
  }
  *(long *)((long)puVar8 + 8) = lVar12 + 0x40;
  puVar9 = (undefined8 *)((long)puVar8 + lVar12 + 0x10);
  *puVar9 = &PTR_FUN_007a0550;
  *(undefined1 *)((long)puVar8 + lVar12 + 0x18) = 0x10;
  *(long *)((long)puVar8 + lVar12 + 0x20) = lVar4;
  *(undefined1 (*) [16])((long)puVar8 + lVar12 + 0x28) = auVar20;
  *(uint *)((long)puVar8 + lVar12 + 0x38) = uVar18;
  *(ushort *)((long)puVar8 + lVar12 + 0x19) =
       *(ushort *)((long)puVar8 + lVar12 + 0x19) & 0xf000 | 0x100;
  *(undefined1 *)((long)puVar8 + lVar12 + 0x3c) = uVar13;
  *(undefined8 **)((long)puVar8 + lVar12 + 0x40) = puVar19;
  return puVar9;
}


// ===== 0075029c  FUN_0075029c =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_0075029c(long *param_1)

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
LAB_007503ec:
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
            lVar4 = FUN_0075029c(param_1);
            if (lVar4 == 0) {
              return (undefined8 *)0x0;
            }
            pvVar19 = (void *)param_1[0x266];
            lVar6 = *(long *)((long)pvVar19 + 8);
            puVar7 = (undefined8 *)pvVar19;
            if (lVar6 - 0xfc0U < 0xfffffffffffff010) {
              puVar7 = (undefined8 *)malloc(0x1000);
              if (puVar7 == (undefined8 *)0x0) goto LAB_00750670;
              lVar6 = 0;
              *puVar7 = pvVar19;
              puVar7[1] = 0;
              param_1[0x266] = (long)puVar7;
            }
            *(long *)((long)puVar7 + 8) = lVar6 + 0x30;
            puVar8 = (undefined8 *)((long)puVar7 + lVar6 + 0x10);
            *puVar8 = &PTR_FUN_007a05c0;
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
        lVar4 = FUN_00740278(param_1,0);
        if (lVar4 == 0) {
          return (undefined8 *)0x0;
        }
      }
      lVar6 = FUN_0075029c(param_1);
      if (lVar6 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar19 = (void *)param_1[0x266];
      lVar9 = *(long *)((long)pvVar19 + 8);
      puVar7 = (undefined8 *)pvVar19;
      if (0xfffffffffffff00f < lVar9 - 0xfc0U) {
LAB_00750504:
        *(long *)((long)puVar7 + 8) = lVar9 + 0x30;
        puVar8 = (undefined8 *)((long)puVar7 + lVar9 + 0x10);
        *puVar8 = &PTR_FUN_007a0630;
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
        goto LAB_00750504;
      }
      goto LAB_00750670;
    }
    if (*pbVar10 != 0x72) goto LAB_007503ec;
    pbVar10 = pbVar10 + 1;
    uVar15 = 4;
    *param_1 = (long)pbVar10;
  }
  if (pbVar10 != pbVar1) {
    if (*pbVar10 == 0x56) {
      pbVar10 = pbVar10 + 1;
      uVar15 = uVar15 | 2;
      *param_1 = (long)pbVar10;
    }
    if ((pbVar10 != pbVar1) && (*pbVar10 == 0x4b)) {
      uVar15 = uVar15 | 1;
      *param_1 = (long)(pbVar10 + 1);
    }
  }
  puVar8 = (undefined8 *)FUN_0073c980(param_1);
  puVar7 = puVar8;
  if ((puVar8 != (undefined8 *)0x0) && (uVar15 != 0)) {
    pvVar19 = (void *)param_1[0x266];
    lVar4 = *(long *)((long)pvVar19 + 8);
    puVar5 = (undefined8 *)pvVar19;
    if (lVar4 - 0xfd0U < 0xfffffffffffff010) {
      puVar5 = (undefined8 *)malloc(0x1000);
      if (puVar5 == (undefined8 *)0x0) {
LAB_00750670:
                    /* WARNING: Subroutine does not return */
        FUN_00739f00();
      }
      lVar4 = 0;
      *puVar5 = pvVar19;
      puVar5[1] = 0;
      param_1[0x266] = (long)puVar5;
    }
    *(long *)((long)puVar5 + 8) = lVar4 + 0x20;
    uVar3 = *(ushort *)((long)puVar8 + 9);
    puVar7 = (undefined8 *)((long)puVar5 + lVar4 + 0x10);
    *puVar7 = &PTR_FUN_007a06a0;
    *(undefined8 **)((long)puVar5 + lVar4 + 0x20) = puVar8;
    *(undefined1 *)((long)puVar5 + lVar4 + 0x18) = 3;
    *(uint *)((long)puVar5 + lVar4 + 0x1c) = uVar15;
    *(ushort *)((long)puVar5 + lVar4 + 0x19) =
         *(ushort *)((long)puVar5 + lVar4 + 0x19) & 0xf000 | uVar3 & 0xfc0;
  }
  return puVar7;
}


// ===== 00750674  FUN_00750674 =====

undefined8 * FUN_00750674(long param_1,char *param_2)

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
      FUN_00739f00();
    }
    lVar3 = 0;
    *puVar1 = pvVar5;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar3 + 0x20;
  sVar2 = strlen(param_2);
  puVar4 = (undefined8 *)((long)puVar1 + lVar3 + 0x10);
  *puVar4 = &PTR_FUN_0079e260;
  *(undefined1 *)((long)puVar1 + lVar3 + 0x18) = 8;
  *(char **)((long)puVar1 + lVar3 + 0x20) = param_2;
  *(size_t *)((long)puVar1 + lVar3 + 0x28) = sVar2;
  *(ushort *)((long)puVar1 + lVar3 + 0x19) =
       *(ushort *)((long)puVar1 + lVar3 + 0x19) & 0xf000 | 0x540;
  return puVar4;
}


// ===== 00750720  FUN_00750720 =====

undefined8 * FUN_00750720(long param_1,char *param_2)

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
      FUN_00739f00();
    }
    lVar3 = 0;
    *puVar1 = pvVar5;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar3 + 0x20;
  sVar2 = strlen(param_2);
  puVar4 = (undefined8 *)((long)puVar1 + lVar3 + 0x10);
  *puVar4 = &PTR_FUN_0079e260;
  *(undefined1 *)((long)puVar1 + lVar3 + 0x18) = 8;
  *(char **)((long)puVar1 + lVar3 + 0x20) = param_2;
  *(size_t *)((long)puVar1 + lVar3 + 0x28) = sVar2;
  *(ushort *)((long)puVar1 + lVar3 + 0x19) =
       *(ushort *)((long)puVar1 + lVar3 + 0x19) & 0xf000 | 0x540;
  return puVar4;
}


// ===== 007507cc  FUN_007507cc =====

undefined8 * FUN_007507cc(long param_1,char *param_2)

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
      FUN_00739f00();
    }
    lVar3 = 0;
    *puVar1 = pvVar5;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar3 + 0x20;
  sVar2 = strlen(param_2);
  puVar4 = (undefined8 *)((long)puVar1 + lVar3 + 0x10);
  *puVar4 = &PTR_FUN_0079e260;
  *(undefined1 *)((long)puVar1 + lVar3 + 0x18) = 8;
  *(char **)((long)puVar1 + lVar3 + 0x20) = param_2;
  *(size_t *)((long)puVar1 + lVar3 + 0x28) = sVar2;
  *(ushort *)((long)puVar1 + lVar3 + 0x19) =
       *(ushort *)((long)puVar1 + lVar3 + 0x19) & 0xf000 | 0x540;
  return puVar4;
}


// ===== 00750878  FUN_00750878 =====

void FUN_00750878(long param_1,undefined8 *param_2,undefined8 *param_3)

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
      FUN_00739f00();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x30;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_007a0710;
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


// ===== 00750924  FUN_00750924 =====

void FUN_00750924(long param_1,undefined8 *param_2)

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
      FUN_00739f00();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_007a0780;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x1f;
  uVar3 = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  return;
}


// ===== 007509c4  FUN_007509c4 =====

void FUN_007509c4(long param_1,undefined8 *param_2,undefined1 *param_3)

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
      FUN_00739f00();
    }
    lVar3 = 0;
    *puVar2 = pvVar5;
    puVar2[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar2;
  }
  *(long *)((long)puVar2 + 8) = lVar3 + 0x20;
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_007a07f0;
  uVar4 = *param_2;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0x20;
  uVar1 = *param_3;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x20) = uVar4;
  *(ushort *)((long)puVar2 + lVar3 + 0x19) =
       *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000 | 0x540;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x28) = uVar1;
  return;
}


// ===== 00750a70  FUN_00750a70 =====

void FUN_00750a70(long param_1,undefined8 *param_2,undefined8 *param_3)

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
      FUN_00739f00();
    }
    lVar2 = 0;
    *puVar1 = pvVar3;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x30;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_007a0860;
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


// ===== 00750b1c  FUN_00750b1c =====

undefined8 * FUN_00750b1c(long *param_1)

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
LAB_00750b54:
    puVar7 = (undefined8 *)0x0;
  }
  else {
    pbVar1 = (byte *)(psVar3 + 1);
    *param_1 = (long)pbVar1;
    if ((pbVar5 == pbVar1) || (bVar6 = *pbVar1, bVar6 < 0x31)) {
LAB_00750d08:
      lVar13 = FUN_00741a30();
      if (lVar13 == 0) {
        return (undefined8 *)0x0;
      }
      pcVar4 = (char *)*param_1;
      if ((pcVar4 == (char *)param_1[1]) || (*pcVar4 != '_')) goto LAB_00750b54;
      *param_1 = (long)(pcVar4 + 1);
      lVar10 = FUN_0073c980(param_1);
      if (lVar10 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar16 = (void *)param_1[0x266];
      lVar11 = *(long *)((long)pvVar16 + 8);
      puVar8 = (undefined8 *)pvVar16;
      if (lVar11 - 0xfd0U < 0xfffffffffffff010) {
        puVar8 = (undefined8 *)malloc(0x1000);
        if (puVar8 == (undefined8 *)0x0) {
LAB_00750dd4:
                    /* WARNING: Subroutine does not return */
          FUN_00739f00();
        }
        lVar11 = 0;
        *puVar8 = pvVar16;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar11 + 0x20;
      puVar7 = (undefined8 *)((long)puVar8 + lVar11 + 0x10);
      *puVar7 = &PTR_FUN_007a0940;
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
          if (puVar7 == (undefined8 *)0x0) goto LAB_00750dd4;
          lVar13 = 0;
          *puVar7 = pvVar16;
          puVar7[1] = 0;
          param_1[0x266] = (long)puVar7;
        }
        *(long *)((long)puVar7 + 8) = lVar13 + 0x20;
        local_38 = (undefined8 *)((long)puVar7 + lVar13 + 0x10);
        *local_38 = &PTR_FUN_0079e260;
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
            puVar7 = (undefined8 *)FUN_007524e4(param_1,&local_38);
            return puVar7;
          }
          local_40 = (undefined8 *)FUN_0073c980();
          if (local_40 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          puVar7 = (undefined8 *)FUN_00752584(param_1,&local_40,&local_38);
          return puVar7;
        }
        goto LAB_00750b54;
      }
      if (bVar6 != 0x5f) goto LAB_00750d08;
      *param_1 = (long)psVar3 + 3;
      lVar13 = FUN_0073c980();
      if (lVar13 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar16 = (void *)param_1[0x266];
      lVar10 = *(long *)((long)pvVar16 + 8);
      puVar8 = (undefined8 *)pvVar16;
      if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
        puVar8 = (undefined8 *)malloc(0x1000);
        if (puVar8 == (undefined8 *)0x0) goto LAB_00750dd4;
        lVar10 = 0;
        *puVar8 = pvVar16;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar10 + 0x20;
      puVar7 = (undefined8 *)((long)puVar8 + lVar10 + 0x10);
      *puVar7 = &PTR_FUN_007a0940;
      uVar9 = *(ushort *)((long)puVar8 + lVar10 + 0x19);
      *(long *)((long)puVar8 + lVar10 + 0x20) = lVar13;
      *(undefined8 *)((long)puVar8 + lVar10 + 0x28) = 0;
    }
    *(undefined1 *)(puVar7 + 1) = 0x1d;
    *(ushort *)((long)puVar7 + 9) = uVar9 & 0xf000 | 0x540;
  }
  return puVar7;
}


// ===== 00750dd8  FUN_00750dd8 =====

undefined8 * FUN_00750dd8(long *param_1)

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
LAB_00750e00:
    puVar2 = (undefined8 *)FUN_0073dec0(param_1,0);
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
    if (*psVar1 != 0x6554) goto LAB_00750e00;
    pcVar6 = "enum";
    uVar7 = 4;
  }
  *param_1 = (long)(psVar1 + 1);
  puVar3 = (undefined8 *)FUN_0073dec0(param_1,0);
  puVar2 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    pvVar8 = (void *)param_1[0x266];
    lVar5 = *(long *)((long)pvVar8 + 8);
    puVar4 = (undefined8 *)pvVar8;
    if (lVar5 - 0xfc0U < 0xfffffffffffff010) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00739f00();
      }
      lVar5 = 0;
      *puVar4 = pvVar8;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar5 + 0x30;
    puVar2 = (undefined8 *)((long)puVar4 + lVar5 + 0x10);
    *puVar2 = &PTR_FUN_007a0a90;
    *(undefined1 *)((long)puVar4 + lVar5 + 0x18) = 6;
    *(undefined8 **)((long)puVar4 + lVar5 + 0x30) = puVar3;
    *(char **)((long)puVar4 + lVar5 + 0x20) = pcVar6;
    *(undefined8 *)((long)puVar4 + lVar5 + 0x28) = uVar7;
    *(ushort *)((long)puVar4 + lVar5 + 0x19) =
         *(ushort *)((long)puVar4 + lVar5 + 0x19) & 0xf000 | 0x540;
  }
  return puVar2;
}


// ===== 00750f28  FUN_00750f28 =====

void FUN_00750f28(long param_1,long *param_2)

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
      FUN_00739f00();
    }
    lVar3 = 0;
    *puVar2 = pvVar5;
    puVar2[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar2;
  }
  lVar4 = *param_2;
  *(long *)((long)puVar2 + 8) = lVar3 + 0x20;
  uVar1 = *(ushort *)(lVar4 + 9);
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_007a0b00;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0xc;
  *(ushort *)((long)puVar2 + lVar3 + 0x19) =
       uVar1 & 0xc0 | 0x500 | *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000;
  *(long *)((long)puVar2 + lVar3 + 0x20) = lVar4;
  return;
}


// ===== 00750fd4  FUN_00750fd4 =====

void FUN_00750fd4(long param_1,long *param_2,undefined4 *param_3)

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
      FUN_00739f00();
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
  *(undefined ***)((long)puVar3 + lVar4 + 0x10) = &PTR_FUN_007a0b70;
  *(undefined1 *)((long)puVar3 + lVar4 + 0x18) = 0xd;
  *(long *)((long)puVar3 + lVar4 + 0x20) = lVar5;
  *(undefined4 *)((long)puVar3 + lVar4 + 0x28) = uVar1;
  *(ushort *)((long)puVar3 + lVar4 + 0x19) =
       uVar2 & 0xc0 | 0x500 | *(ushort *)((long)puVar3 + lVar4 + 0x19) & 0xf000;
  *(undefined1 *)((long)puVar3 + lVar4 + 0x2c) = 0;
  return;
}


// ===== 00751090  FUN_00751090 =====

void FUN_00751090(long param_1,undefined8 *param_2)

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
      FUN_00739f00();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x30;
  uVar3 = *param_2;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_007a0860;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 5;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  *(char **)((long)puVar1 + lVar2 + 0x28) = " complex";
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = 8;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  return;
}


// ===== 00751140  FUN_00751140 =====

void FUN_00751140(long param_1,undefined8 *param_2)

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
      FUN_00739f00();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x30;
  uVar3 = *param_2;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_007a0860;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 5;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  *(char **)((long)puVar1 + lVar2 + 0x28) = " imaginary";
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = 10;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  return;
}


// ===== 007511f0  FUN_007511f0 =====

void FUN_007511f0(long param_1,undefined8 *param_2)

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


// ===== 00751460  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00751468  FUN_00751468 =====

void FUN_00751468(long param_1,undefined8 *param_2)

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
  FUN_00746df8(param_1 + 0x10,param_2);
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


// ===== 007515b0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 007515b8  FUN_007515b8 =====

undefined8 FUN_007515b8(void)

{
  return 1;
}


// ===== 007515c4  FUN_007515c4 =====

undefined8 FUN_007515c4(void)

{
  return 1;
}


// ===== 007515d0  FUN_007515d0 =====

void FUN_007515d0(long param_1,undefined8 *param_2)

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


// ===== 00751654  FUN_00751654 =====

void FUN_00751654(long param_1,undefined8 *param_2)

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
  FUN_00746df8(param_1 + 0x18,param_2);
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
    uVar1 = s_volatile_001f2da7._0_8_;
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
    uVar1 = s_restrict_001f52ae._0_8_;
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
    if (*(char *)(param_1 + 0x2c) != '\x01') goto LAB_00751920;
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
LAB_00751920:
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
                    /* WARNING: Could not recover jumptable at 0x007519c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
      return;
    }
  }
  return;
}


// ===== 007519e8  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 007519f0  FUN_007519f0 =====

void FUN_007519f0(long param_1,undefined8 *param_2)

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


// ===== 00751b5c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00751b64  FUN_00751b64 =====

void FUN_00751b64(long param_1,undefined8 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00751cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
    return;
  }
  return;
}


// ===== 00751cd0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00751cd8  FUN_00751cd8 =====

ulong FUN_00751cd8(long param_1)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *(byte *)((long)*(undefined8 **)(param_1 + 0x10) + 9);
  if ((bVar1 & 0xc0) == 0x80) {
                    /* WARNING: Could not recover jumptable at 0x00751cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x10))();
    return uVar2;
  }
  return (ulong)(bVar1 < 0x40);
}


// ===== 00751d08  FUN_00751d08 =====

ulong FUN_00751d08(long param_1)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *(byte *)((long)*(long **)(param_1 + 0x10) + 10);
  if ((bVar1 & 3) == 2) {
                    /* WARNING: Could not recover jumptable at 0x00751d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 8))();
    return uVar2;
  }
  return (ulong)((bVar1 & 3) == 0);
}


// ===== 00751d38  FUN_00751d38 =====

ulong FUN_00751d38(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  
  uVar1 = *(ushort *)((long)*(long **)(param_1 + 0x10) + 9) >> 10 & 3;
  if (uVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00751d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
    return uVar2;
  }
  return (ulong)(uVar1 == 0);
}


// ===== 00751d68  FUN_00751d68 =====

void FUN_00751d68(long param_1,undefined8 *param_2)

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
    uVar2 = s_volatile_001f2da7._0_8_;
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
    uVar2 = s_restrict_001f52ae._0_8_;
    ((char *)((long)pvVar3 + lVar5))[8] = 't';
    *(undefined8 *)((long)pvVar3 + lVar5) = uVar2;
    param_2[1] = param_2[1] + 9;
  }
  return;
}


// ===== 00751ee0  FUN_00751ee0 =====

void FUN_00751ee0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00751ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))();
  return;
}


// ===== 00751ef4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00751efc  FUN_00751efc =====

void FUN_00751efc(long param_1,undefined8 *param_2)

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


// ===== 00752068  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00752070  FUN_00752070 =====

void FUN_00752070(long param_1,undefined8 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00752140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  return;
}


// ===== 00752148  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00752150  FUN_00752150 =====

void FUN_00752150(long param_1,undefined8 *param_2)

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
    uVar1 = s_unsigned_001c943e._0_8_;
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


// ===== 00752430  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00752438  FUN_00752438 =====

void FUN_00752438(long param_1,undefined8 *param_2)

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


// ===== 007524dc  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 007524e4  FUN_007524e4 =====

void FUN_007524e4(long param_1,undefined8 *param_2)

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
      FUN_00739f00();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_007a08d0;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x1e;
  uVar3 = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  return;
}


// ===== 00752584  FUN_00752584 =====

void FUN_00752584(long param_1,undefined8 *param_2,undefined8 *param_3)

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
      FUN_00739f00();
    }
    lVar2 = 0;
    *puVar1 = pvVar5;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_007a0940;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x1d;
  uVar3 = *param_2;
  uVar4 = *param_3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar4;
  return;
}


// ===== 0075262c  FUN_0075262c =====

void FUN_0075262c(long param_1,undefined8 *param_2)

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
  uVar2 = CONCAT53(s_pixel_vector__001f73cd._8_5_,s_pixel_vector__001f73cd._5_3_);
  *(undefined8 *)((long)pvVar3 + lVar4) =
       CONCAT35(s_pixel_vector__001f73cd._5_3_,s_pixel_vector__001f73cd._0_5_);
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


// ===== 0075274c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00752754  FUN_00752754 =====

void FUN_00752754(long param_1,undefined8 *param_2)

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


// ===== 007528a8  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 007528b0  FUN_007528b0 =====

void FUN_007528b0(long param_1,undefined8 *param_2,undefined8 *param_3)

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
      FUN_00739f00();
    }
    lVar2 = 0;
    *puVar1 = pvVar5;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_007a09b0;
  uVar4 = *param_2;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0xf;
  uVar3 = *param_3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x400;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar4;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar3;
  return;
}


// ===== 00752954  FUN_00752954 =====

undefined8 FUN_00752954(void)

{
  return 1;
}


// ===== 00752960  FUN_00752960 =====

undefined8 FUN_00752960(void)

{
  return 1;
}


// ===== 0075296c  FUN_0075296c =====

void FUN_0075296c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0075297c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  return;
}


// ===== 00752980  FUN_00752980 =====

void FUN_00752980(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  size_t sVar4;
  long *plVar5;
  
  lVar3 = param_2[1];
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0073a468("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/Utility.h",0xae,&DAT_001c717f)
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
                    /* WARNING: Could not recover jumptable at 0x00752af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x28))(plVar5,param_2);
  return;
}


// ===== 00752b24  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00752b2c  FUN_00752b2c =====

void FUN_00752b2c(long param_1,undefined8 *param_2,long *param_3)

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
      FUN_00739f00();
    }
    lVar3 = 0;
    *puVar2 = pvVar6;
    puVar2[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar2;
  }
  lVar4 = *param_3;
  *(long *)((long)puVar2 + 8) = lVar3 + 0x20;
  uVar1 = *(ushort *)(lVar4 + 9);
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_007a0a20;
  uVar5 = *param_2;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0xe;
  *(ushort *)((long)puVar2 + lVar3 + 0x19) =
       uVar1 & 0xc0 | 0x500 | *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x20) = uVar5;
  *(long *)((long)puVar2 + lVar3 + 0x28) = lVar4;
  return;
}


// ===== 00752be0  FUN_00752be0 =====

ulong FUN_00752be0(long param_1)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *(byte *)((long)*(undefined8 **)(param_1 + 0x18) + 9);
  if ((bVar1 & 0xc0) == 0x80) {
                    /* WARNING: Could not recover jumptable at 0x00752c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x18))();
    return uVar2;
  }
  return (ulong)(bVar1 < 0x40);
}


// ===== 00752c10  FUN_00752c10 =====

void FUN_00752c10(long param_1,undefined8 *param_2)

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
      if ((uVar4 & 1) != 0) goto LAB_00752c94;
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
      goto LAB_00752d10;
    }
  }
LAB_00752c94:
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
LAB_00752d10:
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


// ===== 00752dd0  FUN_00752dd0 =====

void FUN_00752dd0(long param_1,undefined8 *param_2)

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
      if ((uVar4 & 1) != 0) goto LAB_00752e44;
      plVar3 = *(long **)(param_1 + 0x18);
      uVar1 = *(ushort *)((long)plVar3 + 9);
    }
    if (((uVar1 >> 10 & 3) != 0) &&
       (((uVar1 >> 10 & 3) != 2 ||
        (uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2), (uVar4 & 1) == 0))))
    goto LAB_00752e90;
  }
LAB_00752e44:
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
LAB_00752e90:
                    /* WARNING: Could not recover jumptable at 0x00752eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),param_2);
  return;
}


// ===== 00752eb4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00752ebc  FUN_00752ebc =====

void FUN_00752ebc(long param_1,undefined8 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00752fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}


// ===== 00752fec  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00752ff4  FUN_00752ff4 =====

ulong FUN_00752ff4(long param_1)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *(byte *)((long)*(undefined8 **)(param_1 + 0x10) + 9);
  if ((bVar1 & 0xc0) == 0x80) {
                    /* WARNING: Could not recover jumptable at 0x00753014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x10))();
    return uVar2;
  }
  return (ulong)(bVar1 < 0x40);
}


// ===== 00753024  FUN_00753024 =====

void FUN_00753024(long param_1,undefined8 *param_2)

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
    goto LAB_00753218;
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
LAB_00753188:
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
      if ((uVar4 & 1) != 0) goto LAB_00753188;
      plVar3 = *(long **)(param_1 + 0x10);
      uVar1 = *(ushort *)((long)plVar3 + 9);
    }
    if (((uVar1 >> 10 & 3) == 0) ||
       (((uVar1 >> 10 & 3) == 2 &&
        (uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2), (uVar4 & 1) != 0))))
    goto LAB_00753188;
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
LAB_00753218:
  *(undefined1 *)((long)pvVar5 + lVar6) = uVar7;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 00753364  FUN_00753364 =====

void FUN_00753364(long param_1,undefined8 *param_2)

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
      if ((uVar4 & 1) != 0) goto LAB_00753438;
      plVar3 = *(long **)(param_1 + 0x10);
      uVar1 = *(ushort *)((long)plVar3 + 9);
    }
    if (((uVar1 >> 10 & 3) != 0) &&
       (((uVar1 >> 10 & 3) != 2 ||
        (uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2), (uVar4 & 1) == 0))))
    goto LAB_00753484;
  }
LAB_00753438:
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
LAB_00753484:
                    /* WARNING: Could not recover jumptable at 0x007534a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))(*(long **)(param_1 + 0x10),param_2);
  return;
}


// ===== 007534b8  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 007534c0  FUN_007534c0 =====

ulong FUN_007534c0(long param_1)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *(byte *)((long)*(undefined8 **)(param_1 + 0x10) + 9);
  if ((bVar1 & 0xc0) == 0x80) {
                    /* WARNING: Could not recover jumptable at 0x007534e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x10))();
    return uVar2;
  }
  return (ulong)(bVar1 < 0x40);
}


// ===== 007534f0  FUN_007534f0 =====

void FUN_007534f0(long param_1,undefined8 *param_2)

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
  
  if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x1c) = 1;
                    /* try { // try from 00753518 to 0075360f has its CatchHandler @ 007536f8 */
  auVar9 = FUN_00753828();
  plVar6 = auVar9._8_8_;
  if (plVar6 == (long *)0x0) goto LAB_007536d4;
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
LAB_00753614:
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
      if ((uVar4 & 1) != 0) goto LAB_00753614;
      uVar1 = *(ushort *)((long)plVar6 + 9);
    }
    if (((uVar1 >> 10 & 3) == 0) ||
       (((uVar1 >> 10 & 3) == 2 &&
        (uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,param_2), (uVar4 & 1) != 0))))
    goto LAB_00753614;
  }
  bVar3 = (auVar9 & (undefined1  [16])0xffffffff) != (undefined1  [16])0x0;
  sVar8 = 1;
  if (bVar3) {
    sVar8 = 2;
  }
  lVar7 = param_2[1];
  pvVar5 = (void *)*param_2;
  __src = &UNK_001cd90d;
  if (bVar3) {
    __src = &DAT_001cd90f;
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
      abort();
    }
    lVar7 = param_2[1];
  }
  memcpy((void *)((long)pvVar5 + lVar7),__src,sVar8);
  param_2[1] = param_2[1] + sVar8;
LAB_007536d4:
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return;
}


// ===== 00753700  FUN_00753700 =====

void FUN_00753700(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ulong uVar3;
  void *__ptr;
  long *extraout_x1;
  long lVar4;
  size_t __size;
  
  if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x1c) = 1;
                    /* try { // try from 00753728 to 007537f3 has its CatchHandler @ 00753810 */
  FUN_00753828();
  if (extraout_x1 == (long *)0x0) goto LAB_007537f4;
  uVar1 = *(ushort *)((long)extraout_x1 + 9);
  uVar2 = uVar1 >> 8 & 3;
  if (uVar2 == 0) {
LAB_00753794:
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
      if ((uVar3 & 1) != 0) goto LAB_00753794;
      uVar1 = *(ushort *)((long)extraout_x1 + 9);
    }
    if (((uVar1 >> 10 & 3) == 0) ||
       (((uVar1 >> 10 & 3) == 2 &&
        (uVar3 = (**(code **)(*extraout_x1 + 0x10))(extraout_x1,param_2), (uVar3 & 1) != 0))))
    goto LAB_00753794;
  }
  (**(code **)(*extraout_x1 + 0x28))(extraout_x1,param_2);
LAB_007537f4:
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return;
}


// ===== 00753818  FUN_00753818 =====

void FUN_00753818(void)

{
  return;
}


// ===== 00753820  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00753828  FUN_00753828 =====

undefined1  [16] FUN_00753828(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  size_t __n;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
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
  
  plVar5 = *(long **)(param_1 + 0x10);
  local_88 = (undefined8 *)&stack0xffffffffffffffc0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uVar6 = *(uint *)(param_1 + 0x18);
  local_98 = &local_80;
  local_90 = &local_80;
  do {
    do {
                    /* try { // try from 00753878 to 00753883 has its CatchHandler @ 007539b8 */
      lVar2 = (**(code **)(*plVar5 + 0x18))(plVar5,param_2);
      if (*(char *)(lVar2 + 8) != '\r') {
        uVar7 = uVar6;
        if (local_98 == &local_80) goto LAB_00753968;
        goto LAB_00753964;
      }
      plVar5 = *(long **)(lVar2 + 0x10);
      uVar7 = *(uint *)(lVar2 + 0x18);
      if ((int)uVar6 <= (int)*(uint *)(lVar2 + 0x18)) {
        uVar7 = uVar6;
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
      *local_90 = plVar5;
      uVar3 = (long)puVar1 - (long)local_98 >> 3;
      uVar6 = uVar7;
      local_90 = puVar1;
    } while (uVar3 < 2);
    uVar4 = uVar3 - 1 >> 1;
    if (uVar3 <= uVar4) {
                    /* try { // try from 0075398c to 007539ab has its CatchHandler @ 007539b4 */
                    /* WARNING: Subroutine does not return */
      FUN_0073a468("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0x95,
                   "Invalid access!");
    }
  } while (plVar5 != (long *)local_98[uVar4]);
  plVar5 = (long *)0x0;
  if (local_98 != &local_80) {
LAB_00753964:
    free(local_98);
    uVar7 = uVar6;
  }
LAB_00753968:
  auVar8._4_4_ = 0;
  auVar8._0_4_ = uVar7;
  auVar8._8_8_ = plVar5;
  return auVar8;
}


// ===== 007539d4  FUN_007539d4 =====

void FUN_007539d4(void)

{
                    /* try { // try from 007539e0 to 007539e3 has its CatchHandler @ 007539f0 */
  FUN_00759c3c();
  return;
}


// ===== 00753a04  FUN_00753a04 =====

void FUN_00753a04(void)

{
                    /* try { // try from 00753a10 to 00753a13 has its CatchHandler @ 00753a20 */
  thunk_FUN_00759c3c();
  return;
}


// ===== 00753a34  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00753a3c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00753a44  FUN_00753a44 =====

undefined8 FUN_00753a44(undefined8 *param_1)

{
  return *param_1;
}


// ===== 00753a50  FUN_00753a50 =====

bool FUN_00753a50(ulong *param_1)

{
  return *param_1 >> 8 == 0x434c4e47432b2b;
}


// ===== 00753a74  FUN_00753a74 =====

long FUN_00753a74(long param_1)

{
  void *__s;
  
                    /* try { // try from 00753a88 to 00753a8f has its CatchHandler @ 00753ac0 */
  __s = (void *)FUN_00753ed4(param_1 + 0x8fU & 0xfffffffffffffff0);
  if (__s != (void *)0x0) {
    memset(__s,0,param_1 + 0x8fU & 0xfffffffffffffff0);
    return (long)__s + 0x80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00739f00();
}


// ===== 00753ac4  FUN_00753ac4 =====

ulong * FUN_00753ac4(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  
  uVar6 = *param_1;
                    /* try { // try from 00753ad8 to 00753adb has its CatchHandler @ 00753b5c */
  plVar3 = (long *)FUN_0073a114();
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
      FUN_00739f00();
    }
    *plVar3 = (long)puVar4;
    param_1 = param_1 + 4;
  }
  return param_1;
}


// ===== 00753b60  FUN_00753b60 =====

void FUN_00753b60(long param_1)

{
                    /* try { // try from 00753b70 to 00753b73 has its CatchHandler @ 00753b80 */
  FUN_007540a8(param_1 + -0x80);
  return;
}


// ===== 00753b84  FUN_00753b84 =====

long FUN_00753b84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + -0x78) = 0;
  uVar1 = FUN_00739eec();
  *(undefined8 *)(param_1 + -0x60) = uVar1;
  uVar1 = FUN_00739f40();
  *(undefined8 *)(param_1 + -0x70) = param_2;
  *(undefined8 *)(param_1 + -0x68) = param_3;
  *(undefined8 *)(param_1 + -0x58) = uVar1;
  *(undefined8 *)(param_1 + -0x20) = 0x434c4e47432b2b00;
  *(code **)(param_1 + -0x18) = FUN_00753bf4;
  return param_1 + -0x80;
}


// ===== 00753bf4  FUN_00753bf4 =====

void FUN_00753bf4(int param_1,long param_2)

{
  long lVar1;
  
  if (param_1 == 1) {
    lVar1 = FUN_00755c50(0xffffffffffffffff,param_2 + -0x58);
    if (lVar1 == 1) {
      if (*(code **)(param_2 + -0x48) != (code *)0x0) {
                    /* try { // try from 00753c2c to 00753c33 has its CatchHandler @ 00753c54 */
        (**(code **)(param_2 + -0x48))(param_2 + 0x20);
      }
                    /* try { // try from 00753c38 to 00753c3b has its CatchHandler @ 00753c58 */
      FUN_007540a8(param_2 + -0x60);
    }
    return;
  }
  FUN_00739f54(*(undefined8 *)(param_2 + -0x38));
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00753c2c with catch @ 00753c54
                        */
  FUN_002fb198();
}


// ===== 00753c5c  FUN_00753c5c =====

void FUN_00753c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar2 = FUN_0073a114();
  *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  lVar2 = FUN_00753b84(param_1,param_2,param_3);
  *(undefined8 *)(lVar2 + 8) = 1;
  FUN_00755c80(lVar2 + 0x60);
  lVar2 = FUN_00753cb8(lVar2);
  FUN_00753ac4(lVar2 + 0x60);
  FUN_00739f54(*(undefined8 *)(lVar2 + 0x28));
  plVar3 = (long *)FUN_0073a138();
  lVar2 = *plVar3;
  if (lVar2 == 0) {
    return;
  }
  if (*(ulong *)(lVar2 + 0x60) >> 8 == 0x434c4e47432b2b) {
    iVar1 = *(int *)(lVar2 + 0x38);
    if (-1 < iVar1) {
      *(int *)(lVar2 + 0x38) = iVar1 + -1;
      if (iVar1 + -1 != 0) {
        return;
      }
      *plVar3 = *(long *)(lVar2 + 0x30);
      lVar4 = lVar2;
      if (*(char *)(lVar2 + 0x60) == '\x01') {
        lVar4 = *(long *)(lVar2 + 8) + -0x80;
        FUN_007540a8(lVar2);
      }
      lVar2 = FUN_00755c50(0xffffffffffffffff,lVar4 + 8);
      if (lVar2 != 1) {
        return;
      }
      if (*(code **)(lVar4 + 0x18) != (code *)0x0) {
        (**(code **)(lVar4 + 0x18))(lVar4 + 0x80);
      }
      FUN_007540a8(lVar4);
      return;
    }
    *(int *)(lVar2 + 0x38) = iVar1 + 1;
    if (iVar1 != -1) {
      return;
    }
    lVar2 = *(long *)(lVar2 + 0x30);
  }
  else {
    FUN_0075608c((ulong *)(lVar2 + 0x60));
    lVar2 = 0;
  }
  *plVar3 = lVar2;
  return;
}


// ===== 00753cb8  FUN_00753cb8 =====

void FUN_00753cb8(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  FUN_00753ac4(param_1 + 0x60);
  FUN_00739f54(*(undefined8 *)(param_1 + 0x28));
  plVar2 = (long *)FUN_0073a138();
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
        FUN_007540a8(lVar3);
      }
      lVar3 = FUN_00755c50(0xffffffffffffffff,lVar4 + 8);
      if (lVar3 != 1) {
        return;
      }
      if (*(code **)(lVar4 + 0x18) != (code *)0x0) {
        (**(code **)(lVar4 + 0x18))(lVar4 + 0x80);
      }
      FUN_007540a8(lVar4);
      return;
    }
    *(int *)(lVar3 + 0x38) = iVar1 + 1;
    if (iVar1 != -1) {
      return;
    }
    lVar3 = *(long *)(lVar3 + 0x30);
  }
  else {
    FUN_0075608c((ulong *)(lVar3 + 0x60));
    lVar3 = 0;
  }
  *plVar2 = lVar3;
  return;
}


// ===== 00753cdc  FUN_00753cdc =====

void FUN_00753cdc(void)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = (long *)FUN_0073a138();
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
        FUN_007540a8(lVar3);
      }
      lVar3 = FUN_00755c50(0xffffffffffffffff,lVar4 + 8);
      if (lVar3 != 1) {
        return;
      }
      if (*(code **)(lVar4 + 0x18) != (code *)0x0) {
                    /* try { // try from 00753d70 to 00753d77 has its CatchHandler @ 00753dc0 */
        (**(code **)(lVar4 + 0x18))(lVar4 + 0x80);
      }
                    /* try { // try from 00753d78 to 00753d7f has its CatchHandler @ 00753dc4 */
      FUN_007540a8(lVar4);
      return;
    }
    *(int *)(lVar3 + 0x38) = iVar1 + 1;
    if (iVar1 != -1) {
      return;
    }
    lVar3 = *(long *)(lVar3 + 0x30);
  }
  else {
    FUN_0075608c((ulong *)(lVar3 + 0x60));
    lVar3 = 0;
  }
  *plVar2 = lVar3;
  return;
}


// ===== 00753dc8  FUN_00753dc8 =====

void FUN_00753dc8(void)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  
  plVar3 = (long *)FUN_0073a114();
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
    FUN_00755c80(puVar6);
    uVar7 = *puVar6;
                    /* try { // try from 00753e3c to 00753e3f has its CatchHandler @ 00753ea8 */
    plVar3 = (long *)FUN_0073a114();
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
      if (*plVar3 != 0) goto LAB_00753de8;
      *plVar3 = lVar8;
    }
    if ((uVar4 & 0xffffffffffffff00) == 0x434c4e47432b2b00) {
      FUN_00739f54(*(undefined8 *)(lVar8 + 0x28));
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00753e3c with catch @ 00753ea8
                        */
      FUN_002fb198();
    }
  }
LAB_00753de8:
                    /* WARNING: Subroutine does not return */
  FUN_00739f00();
}


// ===== 00753eac  FUN_00753eac =====

ulong FUN_00753eac(void)

{
  ulong uVar1;
  
                    /* try { // try from 00753eb8 to 00753ebb has its CatchHandler @ 00753ed0 */
  uVar1 = FUN_0073a138();
  if (uVar1 != 0) {
    uVar1 = (ulong)*(uint *)(uVar1 + 8);
  }
  return uVar1;
}


// ===== 00753ed4  FUN_00753ed4 =====

void FUN_00753ed4(size_t param_1)

{
  void *local_8;
  
  local_8 = (void *)0x0;
  if (param_1 < 2) {
    param_1 = 1;
  }
  posix_memalign(&local_8,0x10,param_1);
  if (local_8 == (void *)0x0) {
    FUN_00753f20(param_1);
  }
  return;
}


// ===== 00753f20  FUN_00753f20 =====

ushort * FUN_00753f20(long param_1)

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
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_007b16c8);
  if (DAT_007b16f0 == (ushort *)0x0) {
    DAT_007b16f0 = (ushort *)&DAT_007b170c;
    DAT_007b170c = 0x7d0080;
  }
  else if (DAT_007b16f0 == (ushort *)&DAT_007b1900) goto LAB_00753fdc;
  uVar5 = param_1 + 3U >> 2;
  uVar1 = uVar5 + 1;
  puVar4 = (ushort *)0x0;
  puVar6 = DAT_007b16f0;
  do {
    puVar9 = puVar6 + 2;
    if (((ulong)puVar9 & 0xf) != 0) {
                    /* try { // try from 00754064 to 00754083 has its CatchHandler @ 0075408c */
                    /* WARNING: Subroutine does not return */
      FUN_0073a468("%s:%d: %s","out/llvm-project/libcxxabi/src/fallback_malloc.cpp",0x92,
                   &DAT_001c717f);
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
                    /* try { // try from 00754004 to 00754023 has its CatchHandler @ 00754084 */
                    /* WARNING: Subroutine does not return */
        FUN_0073a468("%s:%d: %s","out/llvm-project/libcxxabi/src/fallback_malloc.cpp",0xa7,
                     &DAT_001c717f);
      }
      goto code_r0x00754048;
    }
    if (uVar5 < uVar8) {
      if (puVar4 == (ushort *)0x0) {
        DAT_007b16f0 = (ushort *)((ulong)*puVar6 * 4 + 0x7b1700);
        *puVar6 = 0;
      }
      else {
        *puVar4 = *puVar6;
        *puVar6 = 0;
      }
      goto code_r0x00754048;
    }
    uVar2 = *puVar6;
    puVar4 = puVar6;
    puVar6 = (ushort *)((ulong)uVar2 * 4 + 0x7b1700);
  } while ((ulong)uVar2 != 0x80);
LAB_00753fdc:
  puVar9 = (ushort *)0x0;
code_r0x00754048:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_007b16c8);
  return puVar9;
}


// ===== 007540a8  FUN_007540a8 =====

void FUN_007540a8(undefined *param_1)

{
  if (((undefined *)0x7b16ff < param_1) && (param_1 < &DAT_007b1900)) {
    FUN_007540d4();
    return;
  }
  free(param_1);
  return;
}


// ===== 007540d4  FUN_007540d4 =====

int FUN_007540d4(long param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  puVar5 = (ushort *)(param_1 + -4);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_007b16c8);
  if ((DAT_007b16f0 != (ushort *)0x0) && (DAT_007b16f0 != (ushort *)&DAT_007b1900)) {
    puVar3 = (ushort *)0x0;
    puVar4 = DAT_007b16f0;
    do {
      uVar1 = puVar4[1];
      if (puVar4 + (ulong)uVar1 * 2 == puVar5) {
        puVar4[1] = *(short *)(param_1 + -2) + uVar1;
        goto code_r0x007541bc;
      }
      if (puVar5 + (ulong)*(ushort *)(param_1 + -2) * 2 == puVar4) {
        *(ushort *)(param_1 + -2) = *(ushort *)(param_1 + -2) + uVar1;
        if (puVar3 == (ushort *)0x0) {
          DAT_007b16f0 = puVar5;
          *puVar5 = *puVar4;
        }
        else {
          *puVar3 = (ushort)((int)puVar5 - 0x7b1700U >> 2);
        }
        goto code_r0x007541bc;
      }
      uVar1 = *puVar4;
      puVar3 = puVar4;
      puVar4 = (ushort *)((ulong)uVar1 * 4 + 0x7b1700);
    } while ((ulong)uVar1 != 0x80);
  }
  iVar2 = (int)DAT_007b16f0;
  DAT_007b16f0 = puVar5;
  *puVar5 = (ushort)(iVar2 - 0x7b1700U >> 2);
code_r0x007541bc:
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_007b16c8);
  return iVar2;
}


// ===== 007541d8  FUN_007541d8 =====

/* WARNING: Type propagation algorithm not settling */

ulong * FUN_007541d8(int param_1,uint param_2,byte **param_3,long param_4,long param_5)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  undefined4 uVar6;
  char *pcVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong *puVar13;
  byte **ppbVar14;
  uint *puVar15;
  ulong uVar16;
  ulong uVar17;
  uint *puVar18;
  uint *puVar19;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  uint uVar23;
  byte *pbVar24;
  ulong uVar25;
  byte *pbVar26;
  byte *pbVar27;
  undefined1 auVar28 [12];
  ulong local_88;
  byte *local_80;
  byte *local_78;
  byte *local_70;
  byte *local_68;
  
  if (param_1 != 1) {
    return (ulong *)0x3;
  }
  if (param_4 == 0) {
    return (ulong *)0x3;
  }
  if (param_5 == 0) {
    return (ulong *)0x3;
  }
  uVar20 = (ulong)param_3 & 0xffffffffffffff00;
  if ((param_2 == 6) && (uVar20 == 0x434c4e47432b2b00)) {
    iVar4 = *(int *)(param_4 + -0x24);
    uVar21 = *(undefined8 *)(param_4 + -0x10);
    thunk_FUN_00756214(param_5,0,param_4);
    thunk_FUN_00756214(param_5,1,(long)iVar4);
    FUN_007560e0(param_5,uVar21);
    if (-1 < iVar4) {
      return (ulong *)0x7;
    }
    goto LAB_0075427c;
  }
  if ((param_2 & 1) == 0) {
    if ((param_2 >> 1 & 1) == 0) {
      return (ulong *)0x3;
    }
    if (((param_2 ^ 0xffffffff) & 0xc) == 0) {
      lVar22 = 0;
LAB_007542a0:
      uVar25 = 0;
      goto LAB_007542a4;
    }
  }
  else if ((param_2 & 0xe) != 0) {
    return (ulong *)0x3;
  }
  pcVar7 = (char *)FUN_00756024(param_5);
  if (pcVar7 == (char *)0x0) {
LAB_007546a4:
    return (ulong *)&DAT_00000008;
  }
  lVar22 = FUN_007560b0(param_5);
  uVar25 = FUN_00756058(param_5);
  local_70 = (byte *)(pcVar7 + 1);
  local_88 = uVar25;
  if (*pcVar7 != -1) {
    param_3 = (byte **)0x0;
    local_88 = FUN_00754774(&local_70);
  }
  pbVar11 = local_70 + 1;
  ppbVar14 = (byte **)(ulong)*local_70;
  if (ppbVar14 == (byte **)0xff) {
    local_80 = (byte *)0x0;
  }
  else {
    uVar17 = 0;
    uVar16 = 0;
    pbVar24 = pbVar11;
    do {
      pbVar11 = pbVar24 + 1;
      bVar2 = *pbVar24;
      uVar8 = uVar17 & 0x3f;
      uVar17 = uVar17 + 7;
      uVar16 = ((ulong)bVar2 & 0x7f) << uVar8 | uVar16;
      pbVar24 = pbVar11;
    } while ((char)bVar2 < '\0');
    local_80 = pbVar11 + uVar16;
  }
  uVar17 = 0;
  uVar16 = 0;
  uVar25 = lVar22 + ~uVar25;
  bVar2 = *pbVar11;
  pbVar11 = pbVar11 + 1;
  do {
    pbVar24 = pbVar11 + 1;
    bVar3 = *pbVar11;
    uVar8 = uVar17 & 0x3f;
    uVar17 = uVar17 + 7;
    uVar16 = ((ulong)bVar3 & 0x7f) << uVar8 | uVar16;
    pbVar11 = pbVar24;
  } while ((char)bVar3 < '\0');
  local_78 = pbVar24;
  local_70 = pbVar24;
  do {
    if (pbVar24 + (uVar16 & 0xffffffff) <= local_78) break;
    uVar8 = FUN_00754774(&local_78,bVar2,0);
    lVar9 = FUN_00754774(&local_78,bVar2,0);
    param_3 = (byte **)0x0;
    lVar22 = FUN_00754774(&local_78,bVar2);
    uVar17 = 0;
    uVar12 = 0;
    pbVar11 = local_78;
    do {
      local_78 = pbVar11 + 1;
      bVar3 = *pbVar11;
      uVar5 = uVar17 & 0x3f;
      uVar17 = uVar17 + 7;
      uVar12 = ((ulong)bVar3 & 0x7f) << uVar5 | uVar12;
      pbVar11 = local_78;
    } while ((char)bVar3 < '\0');
    if ((uVar8 <= uVar25) && (uVar25 < lVar9 + uVar8)) {
      if (lVar22 == 0) goto LAB_007546a4;
      lVar22 = lVar22 + local_88;
      if (uVar12 != 0) {
        uVar23 = 0;
        uVar17 = (ulong)ppbVar14 & 0xf;
        pbVar24 = pbVar24 + uVar12 + (uVar16 & 0xffffffff) + -1;
        pbVar11 = (byte *)(param_4 + 0x20);
        goto LAB_007544a8;
      }
      if ((param_2 & 1) == 0) goto LAB_007542a0;
      goto LAB_007546a4;
    }
  } while (uVar8 <= uVar25);
  FUN_00753ac4(param_4);
joined_r0x00754758:
  if (uVar20 != 0x434c4e47432b2b00) {
                    /* WARNING: Subroutine does not return */
    FUN_00739f00();
  }
  FUN_00739f54(*(undefined8 *)(param_4 + -0x38));
LAB_00754764:
  FUN_00753ac4(param_4);
  auVar28 = FUN_00739f54(*(undefined8 *)(param_4 + -0x38));
  uVar23 = auVar28._8_4_;
  if ((uVar23 & 0xff) == 0xff) {
    return (ulong *)0x0;
  }
  uVar1 = uVar23 & 0xf;
  puVar15 = (uint *)*auVar28._0_8_;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      if ((auVar28 & (undefined1  [12])0xf) == (undefined1  [12])0x0) goto LAB_00754884;
      if (uVar1 != 1) goto LAB_00754918;
      uVar20 = 0;
      puVar13 = (ulong *)0x0;
      puVar18 = puVar15;
      do {
        puVar19 = (uint *)((long)puVar18 + 1);
        uVar1 = *puVar18;
        uVar25 = uVar20 & 0x3f;
        uVar20 = uVar20 + 7;
        puVar13 = (ulong *)(((ulong)(byte)uVar1 & 0x7f) << uVar25 | (ulong)puVar13);
        puVar18 = puVar19;
      } while ((char)(byte)uVar1 < '\0');
    }
    else if (uVar1 == 2) {
      puVar19 = (uint *)((long)puVar15 + 2);
      puVar13 = (ulong *)(ulong)(ushort)*puVar15;
    }
    else {
      if (uVar1 != 3) {
LAB_00754918:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar19 = puVar15 + 1;
      puVar13 = (ulong *)(ulong)*puVar15;
    }
  }
  else if (uVar1 < 10) {
    if (uVar1 == 4) {
LAB_00754884:
      puVar19 = puVar15 + 2;
      puVar13 = *(ulong **)puVar15;
    }
    else {
      if (uVar1 != 9) goto LAB_00754918;
      uVar20 = 0;
      uVar25 = 0;
      puVar18 = puVar15;
      do {
        puVar19 = (uint *)((long)puVar18 + 1);
        bVar2 = (byte)*puVar18;
        uVar17 = uVar20 & 0x3f;
        uVar20 = uVar20 + 7;
        uVar25 = ((ulong)bVar2 & 0x7f) << uVar17 | uVar25;
        puVar18 = puVar19;
      } while ((char)bVar2 < '\0');
      uVar17 = -1L << (uVar20 & 0x3f);
      if (0x3f < uVar20 || bVar2 < 0x40) {
        uVar17 = 0;
      }
      puVar13 = (ulong *)(uVar25 | uVar17);
    }
  }
  else if (uVar1 == 10) {
    puVar19 = (uint *)((long)puVar15 + 2);
    puVar13 = (ulong *)(long)(short)*puVar15;
  }
  else {
    if (uVar1 != 0xb) {
      if (uVar1 != 0xc) goto LAB_00754918;
      goto LAB_00754884;
    }
    puVar19 = puVar15 + 1;
    puVar13 = (ulong *)(long)(int)*puVar15;
  }
  uVar6 = (uVar23 & 0xff) >> 4 & 7;
  if (uVar6 != 0) {
    if (uVar6 == 3) {
      if (puVar13 == (ulong *)0x0) goto LAB_007548ec;
      puVar13 = (ulong *)((long)puVar13 + (long)param_3);
    }
    else {
      if (uVar6 != 1) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (puVar13 == (ulong *)0x0) goto LAB_007548ec;
      puVar13 = (ulong *)((long)puVar13 + (long)puVar15);
    }
  }
  if ((puVar13 != (ulong *)0x0) && ((uVar23 >> 7 & 1) != 0)) {
    puVar13 = (ulong *)*puVar13;
  }
LAB_007548ec:
  *auVar28._0_8_ = puVar19;
  return puVar13;
LAB_007544a8:
  uVar16 = 0;
  uVar25 = 0;
  pbVar26 = pbVar24;
  do {
    pbVar27 = pbVar26 + 1;
    bVar2 = *pbVar26;
    uVar8 = uVar16 & 0x3f;
    uVar16 = uVar16 + 7;
    uVar25 = ((ulong)bVar2 & 0x7f) << uVar8 | uVar25;
    pbVar26 = pbVar27;
  } while ((char)bVar2 < '\0');
  uVar8 = -1L << (uVar16 & 0x3f);
  if (0x3f < uVar16 || bVar2 < 0x40) {
    uVar8 = 0;
  }
  uVar25 = uVar25 | uVar8;
  pbVar26 = pbVar11;
  if ((long)uVar25 < 1) {
    uVar1 = uVar25 == 0 | uVar23;
    if (((param_2 >> 3 & 1) == 0) && (uVar25 != 0)) {
      lVar9 = FUN_00753a44(param_4);
      if (uVar20 != 0x434c4e47432b2b00) goto joined_r0x00754724;
      if (lVar9 == 0x434c4e47432b2b01) {
        pbVar26 = *(byte **)(param_4 + -0x58);
      }
      if ((pbVar26 == (byte *)0x0) || (*(long *)(param_4 + -0x50) == 0)) goto LAB_00754764;
      param_3 = ppbVar14;
      uVar16 = FUN_0075491c(uVar25,local_80,ppbVar14,*(long *)(param_4 + -0x50),pbVar26,param_4,0);
joined_r0x00754620:
      uVar1 = uVar23;
      if ((uVar16 & 1) != 0) goto joined_r0x0075472c;
    }
  }
  else {
    if (((local_80 == (byte *)0x0) || (0xc < (uint)uVar17)) || ((0x1c1dU >> uVar17 & 1) == 0)) {
      FUN_00753ac4(param_4);
      goto joined_r0x00754758;
    }
    param_3 = (byte **)0x0;
    local_68 = local_80 + *(long *)(&DAT_00214ab8 + uVar17 * 8) * uVar25;
    plVar10 = (long *)FUN_00754774(&local_68,ppbVar14);
    if (plVar10 == (long *)0x0) {
      lVar9 = FUN_00753a44(param_4);
joined_r0x00754724:
      if (lVar9 == 0x434c4e47432b2b01) {
        pbVar26 = *(byte **)(param_4 + -0x58);
      }
      goto joined_r0x0075472c;
    }
    uVar1 = uVar23;
    if (uVar20 == 0x434c4e47432b2b00) {
      lVar9 = FUN_00753a44(param_4);
      local_68 = pbVar11;
      if (lVar9 == 0x434c4e47432b2b01) {
        local_68 = *(byte **)(param_4 + -0x58);
      }
      if ((local_68 != (byte *)0x0) && (*(long *)(param_4 + -0x50) != 0)) {
        param_3 = &local_68;
        uVar16 = (**(code **)(*plVar10 + 0x20))(plVar10);
        pbVar26 = local_68;
        goto joined_r0x00754620;
      }
      goto LAB_00754764;
    }
  }
  uVar23 = uVar1;
  uVar25 = 0;
  uVar16 = 0;
  pbVar24 = pbVar27;
  do {
    bVar2 = *pbVar24;
    uVar8 = uVar25 & 0x3f;
    uVar25 = uVar25 + 7;
    uVar16 = ((ulong)bVar2 & 0x7f) << uVar8 | uVar16;
    pbVar24 = pbVar24 + 1;
  } while ((char)bVar2 < '\0');
  uVar8 = -1L << (uVar25 & 0x3f);
  if (0x3f < uVar25 || bVar2 < 0x40) {
    uVar8 = 0;
  }
  if ((uVar16 | uVar8) == 0) goto LAB_00754674;
  pbVar24 = pbVar27 + (uVar16 | uVar8);
  goto LAB_007544a8;
LAB_00754674:
  if ((uVar23 & (param_2 & 2) >> 1) == 0) goto LAB_007546a4;
  pbVar24 = (byte *)0x0;
  uVar25 = 0;
  pbVar26 = (byte *)0x0;
joined_r0x0075472c:
  if ((param_2 & 1) != 0) {
    if (uVar20 == 0x434c4e47432b2b00) {
      *(int *)(param_4 + -0x24) = (int)uVar25;
      *(byte **)(param_4 + -0x20) = pbVar24;
      *(char **)(param_4 + -0x18) = pcVar7;
      *(long *)(param_4 + -0x10) = lVar22;
      *(byte **)(param_4 + -8) = pbVar26;
      return (ulong *)0x6;
    }
    return (ulong *)0x6;
  }
LAB_007542a4:
  thunk_FUN_00756214(param_5,0,param_4);
  thunk_FUN_00756214(param_5,1,uVar25);
  FUN_007560e0(param_5,lVar22);
  if (-1 < (long)uVar25) {
    return (ulong *)0x7;
  }
LAB_0075427c:
  *(undefined8 *)(param_4 + -0x10) = 0;
  return (ulong *)0x7;
}


// ===== 00754774  FUN_00754774 =====

/* WARNING: Type propagation algorithm not settling */

ulong * FUN_00754774(undefined8 *param_1,uint param_2,long param_3)

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
      if (uVar1 == 0) goto LAB_00754884;
      if (uVar1 != 1) goto LAB_00754918;
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
LAB_00754918:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar7 = puVar5 + 1;
      puVar4 = (ulong *)(ulong)*puVar5;
    }
  }
  else if (uVar1 < 10) {
    if (uVar1 == 4) {
LAB_00754884:
      puVar7 = puVar5 + 2;
      puVar4 = *(ulong **)puVar5;
    }
    else {
      if (uVar1 != 9) goto LAB_00754918;
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
      if (uVar1 != 0xc) goto LAB_00754918;
      goto LAB_00754884;
    }
    puVar7 = puVar5 + 1;
    puVar4 = (ulong *)(long)(int)*puVar5;
  }
  uVar1 = (param_2 & 0xff) >> 4 & 7;
  if (uVar1 != 0) {
    if (uVar1 == 3) {
      if (puVar4 == (ulong *)0x0) goto LAB_007548ec;
      puVar4 = (ulong *)((long)puVar4 + param_3);
    }
    else {
      if (uVar1 != 1) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (puVar4 == (ulong *)0x0) goto LAB_007548ec;
      puVar4 = (ulong *)((long)puVar4 + (long)puVar5);
    }
  }
  if ((puVar4 != (ulong *)0x0) && ((param_2 >> 7 & 1) != 0)) {
    puVar4 = (ulong *)*puVar4;
  }
LAB_007548ec:
  *param_1 = puVar7;
  return puVar4;
}


// ===== 0075491c  FUN_0075491c =====

bool FUN_0075491c(ulong param_1,long param_2,ulong param_3,undefined8 param_4,long param_5,
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
LAB_00754a30:
    FUN_00753ac4(param_6);
                    /* WARNING: Subroutine does not return */
    FUN_00739f00();
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
      FUN_00753ac4(param_6);
      FUN_00739f54(*(undefined8 *)(param_6 + -0x38));
      goto LAB_00754a30;
    }
    local_68 = param_2 + *(long *)(&DAT_00214ab8 + uVar7 * 8) * uVar6;
    plVar2 = (long *)FUN_00754774(&local_68,param_3 & 0xffffffff,param_7);
    local_68 = param_5;
    uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_4,&local_68);
    uVar4 = 0;
    uVar5 = 0;
  } while ((uVar3 & 1) == 0);
  return uVar6 == 0;
}


// ===== 00754a3c  FUN_00754a3c =====

undefined8 FUN_00754a3c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (PTR___cxa_thread_atexit_impl_007a3ad0 != (undefined *)0x0) {
                    /* try { // try from 00754a64 to 00754a6f has its CatchHandler @ 00754b50 */
    uVar2 = __cxa_thread_atexit_impl(param_1,param_2);
    return uVar2;
  }
  if (((DAT_007b1908 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007b1908), iVar1 != 0)) {
    FUN_00754b54();
    __cxa_atexit(FUN_00754b90,&DAT_007b1900,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007b1908);
  }
  pbVar3 = (byte *)FUN_00755340(&DAT_007aab50);
  if ((*pbVar3 & 1) == 0) {
                    /* try { // try from 00754ae4 to 00754b23 has its CatchHandler @ 00754b50 */
    iVar1 = pthread_setspecific(DAT_007b1910,&DAT_007b1910);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    *pbVar3 = 1;
  }
  puVar4 = (undefined8 *)malloc(0x18);
  if (puVar4 == (undefined8 *)0x0) {
    return 0xffffffff;
  }
  *puVar4 = param_1;
  puVar4[1] = param_2;
  puVar5 = (undefined8 *)FUN_00755340(&DAT_007aab70);
  puVar4[2] = *puVar5;
  *puVar5 = puVar4;
  return 0;
}


// ===== 00754b54  FUN_00754b54 =====

void FUN_00754b54(void)

{
  int iVar1;
  
  iVar1 = pthread_key_create(&DAT_007b1910,FUN_00754bfc);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0073a468("std::__libcpp_tls_create() failed in __cxa_thread_atexit()");
}


// ===== 00754b90  FUN_00754b90 =====

void FUN_00754b90(void)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *__ptr;
  
  puVar1 = (undefined8 *)FUN_00755340(&DAT_007aab70);
  __ptr = (undefined8 *)*puVar1;
  while (__ptr != (undefined8 *)0x0) {
    *puVar1 = __ptr[2];
                    /* try { // try from 00754bc4 to 00754bc7 has its CatchHandler @ 00754bf8 */
    (*(code *)*__ptr)(__ptr[1]);
    free(__ptr);
    __ptr = (undefined8 *)*puVar1;
  }
  puVar2 = (undefined1 *)FUN_00755340(&DAT_007aab50);
  *puVar2 = 0;
  return;
}


// ===== 00754bfc  FUN_00754bfc =====

void FUN_00754bfc(void)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *__ptr;
  
  puVar1 = (undefined8 *)FUN_00755340(&DAT_007aab70);
  __ptr = (undefined8 *)*puVar1;
  while (__ptr != (undefined8 *)0x0) {
    *puVar1 = __ptr[2];
    (*(code *)*__ptr)(__ptr[1]);
    free(__ptr);
    __ptr = (undefined8 *)*puVar1;
  }
  puVar2 = (undefined1 *)FUN_00755340(&DAT_007aab50);
  *puVar2 = 0;
  return;
}


// ===== 00754c64  FUN_00754c64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_00754c64(undefined1 param_1 [16],undefined1 param_2 [16])

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
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
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  bool bVar45;
  long lVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  ulong uVar50;
  ulong uVar51;
  ulong uVar52;
  ulong uVar53;
  ulong uVar54;
  ulong uVar55;
  ulong uVar56;
  ulong uVar57;
  uint uVar58;
  uint uVar59;
  ulong uVar60;
  ulong uVar61;
  int iVar62;
  ulong uVar63;
  ulong uVar64;
  ulong uVar65;
  ulong uVar66;
  ulong uVar67;
  ulong uVar68;
  ulong uVar69;
  ulong uVar70;
  ulong uVar71;
  ulong uVar72;
  ulong uVar73;
  ulong uVar74;
  
  uVar66 = param_2._8_8_;
  uVar57 = param_2._0_8_;
  uVar47 = param_1._8_8_;
  uVar63 = param_1._0_8_;
  uVar58 = param_1._14_2_ & 0x7fff;
  uVar59 = param_2._14_2_ & 0x7fff;
  uVar56 = (uVar66 ^ uVar47) & 0x8000000000000000;
  uVar64 = uVar47 & 0xffffffffffff;
  uVar60 = uVar66 & 0xffffffffffff;
  uVar61 = uVar60;
  if ((0xffff8001 < uVar58 - 0x7fff) && (0xffff8001 < uVar59 - 0x7fff)) {
    iVar62 = 0;
LAB_00754cc4:
    uVar61 = uVar61 | 0x1000000000000;
    uVar66 = uVar57 >> 0x31 | uVar61 << 0xf;
    uVar60 = 0x7504f33300000000 - uVar66;
    iVar62 = iVar62 + (uVar58 - uVar59);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar66;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar60;
    lVar46 = SUB168(auVar4 * auVar21,8);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = -lVar46;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar60;
    uVar60 = -(lVar46 * uVar60) >> 0x3f | SUB168(auVar5 * auVar22,8) << 1;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar60;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar66;
    lVar46 = SUB168(auVar6 * auVar23,8);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar60;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = -lVar46;
    uVar60 = -(lVar46 * uVar60) >> 0x3f | SUB168(auVar7 * auVar24,8) << 1;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar60;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar66;
    lVar46 = SUB168(auVar8 * auVar25,8);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar60;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = -lVar46;
    uVar60 = -(lVar46 * uVar60) >> 0x3f | SUB168(auVar9 * auVar26,8) << 1;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar60;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar66;
    lVar46 = SUB168(auVar10 * auVar27,8);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar60;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = -lVar46;
    uVar67 = (-(lVar46 * uVar60) >> 0x3f | SUB168(auVar11 * auVar28,8) << 1) - 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar57 << 0xf;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar67;
    uVar47 = SUB168(auVar12 * auVar29,8);
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar66;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar67;
    lVar46 = SUB168(auVar13 * auVar30,8);
    uVar60 = uVar66 * uVar67 + uVar47;
    if (CARRY8(uVar66 * uVar67,uVar47)) {
      lVar46 = lVar46 + 1;
    }
    uVar47 = 1 - uVar60;
    uVar60 = -(lVar46 + (ulong)(1 < uVar60));
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar47;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar67;
    lVar46 = SUB168(auVar14 * auVar31,8);
    uVar49 = uVar67 * uVar60;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar67;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar60;
    uVar67 = uVar47 * uVar67 >> 0x3f | lVar46 << 1;
    uVar48 = uVar63 >> 0x3f;
    uVar51 = uVar64 << 1;
    uVar60 = uVar49 * 2;
    uVar47 = uVar67 + uVar60;
    uVar72 = uVar48 | uVar51 & 0xffffffff;
    uVar68 = (uVar64 & 0x7fffffff80000000 | 0x1000000000000) >> 0x1f;
    uVar66 = uVar47 - 0x3667;
    uVar50 = uVar63 >> 0x1f & 0xffffffff;
    uVar53 = ((uVar49 >> 0x3f | SUB168(auVar15 * auVar32,8) << 1) - (lVar46 >> 0x3f)) +
             (ulong)CARRY8(uVar67,uVar60) + -1 + (ulong)(0x3666 < uVar47);
    uVar65 = uVar63 << 1;
    uVar47 = (uVar66 & 0xffffffff) * (uVar48 | uVar51 & 0xffffffff);
    uVar49 = uVar66 >> 0x20;
    uVar70 = uVar53 >> 0x20;
    uVar67 = (uVar66 & 0xffffffff) * uVar68;
    uVar52 = (uVar66 & 0xffffffff) * uVar50;
    uVar71 = uVar49 * (uVar65 & 0xfffffffe);
    uVar66 = (uVar65 & 0xfffffffe) * uVar70;
    uVar74 = uVar49 * uVar72;
    uVar69 = (uVar53 & 0xffffffff) * uVar68;
    uVar60 = uVar47 + uVar49 * uVar50;
    uVar55 = (uVar53 & 0xffffffff) * uVar50;
    uVar72 = uVar72 * uVar70;
    uVar73 = (ulong)CARRY8(uVar47,uVar49 * uVar50);
    uVar47 = uVar67 + uVar66;
    uVar67 = (ulong)CARRY8(uVar67,uVar66);
    uVar66 = uVar47 + uVar74;
    if (CARRY8(uVar47,uVar74)) {
      uVar67 = uVar67 + 1;
    }
    uVar47 = uVar66 + uVar55;
    uVar48 = (uVar53 & 0xffffffff) * (uVar48 | uVar51 & 0xffffffff);
    if (CARRY8(uVar66,uVar55)) {
      uVar67 = uVar67 + 1;
    }
    uVar51 = uVar69 + uVar72;
    uVar54 = (uVar53 & 0xffffffff) * (uVar65 & 0xffffffff);
    uVar53 = uVar49 * uVar68 + uVar50 * uVar70;
    uVar55 = uVar53 + uVar48;
    uVar71 = uVar71 + uVar52 >> 0x20 | (ulong)CARRY8(uVar71,uVar52) << 0x20;
    uVar66 = uVar51 << 0x20;
    uVar52 = uVar55 + uVar66;
    uVar74 = uVar47 >> 0x20 | uVar67 << 0x20;
    uVar66 = uVar70 * uVar68 + (ulong)CARRY8(uVar49 * uVar68,uVar50 * uVar70) +
             (ulong)CARRY8(uVar53,uVar48) + (uVar51 >> 0x20 | (ulong)CARRY8(uVar69,uVar72) << 0x20)
             + (ulong)CARRY8(uVar55,uVar66);
    uVar67 = uVar52 + uVar73 + (ulong)CARRY8(uVar60,uVar54);
    if (CARRY8(uVar52,uVar73) || CARRY8(uVar52 + uVar73,(ulong)CARRY8(uVar60,uVar54))) {
      uVar66 = uVar66 + 1;
    }
    uVar51 = (ulong)CARRY8(uVar60 + uVar54,uVar71);
    uVar48 = uVar67 + uVar74;
    if (CARRY8(uVar67,uVar74)) {
      uVar66 = uVar66 + 1;
    }
    bVar45 = CARRY8(uVar60 + uVar54 + uVar71,uVar47 << 0x20);
    uVar60 = uVar48 + uVar51 + (ulong)bVar45;
    if (CARRY8(uVar48,uVar51) || CARRY8(uVar48 + uVar51,(ulong)bVar45)) {
      uVar66 = uVar66 + 1;
    }
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar60;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar57;
    uVar49 = uVar60 >> 1 | uVar66 << 0x3f;
    uVar50 = uVar66 >> 0x31;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar49;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar57;
    uVar58 = iVar62 + 0x3fff;
    uVar67 = uVar63;
    uVar47 = uVar49;
    uVar48 = uVar66 >> 1;
    uVar51 = uVar64 | 0x1000000000000;
    if (uVar50 == 0) {
      uVar58 = iVar62 + 0x3ffe;
      uVar67 = uVar65;
      uVar47 = uVar60;
      uVar48 = uVar66;
      uVar51 = uVar63 >> 0x3f | (uVar64 | 0x1000000000000) << 1;
    }
    lVar46 = uVar49 * uVar57;
    if (uVar50 == 0) {
      lVar46 = uVar60 * uVar57;
    }
    lVar2 = (uVar63 << 0x30) -
            (SUB168(auVar17 * auVar34,8) + uVar49 * uVar61 + (uVar66 >> 1) * uVar57 +
            (ulong)(uVar49 * uVar57 != 0));
    if (uVar50 == 0) {
      lVar2 = (uVar63 << 0x31) -
              (SUB168(auVar16 * auVar33,8) + uVar60 * uVar61 + uVar66 * uVar57 +
              (ulong)(uVar60 * uVar57 != 0));
    }
    if ((int)uVar58 < 0x7fff) {
      if ((int)uVar58 < 1) {
        if (uVar58 == 0xffffff8f || (int)(uVar58 + 0x71) < 0 != SCARRY4(uVar58,0x71)) {
          auVar40._8_8_ = 0;
          auVar40._0_8_ = uVar56;
          return auVar40 << 0x40;
        }
        uVar59 = 1 - uVar58;
        uVar58 = uVar58 + 0x70;
        uVar64 = uVar47 >> ((ulong)uVar59 & 0x3f);
        uVar60 = uVar48 >> ((ulong)uVar59 & 0x3f);
        bVar45 = (uVar59 & 0x40) == 0;
        uVar63 = uVar67 << ((ulong)uVar58 & 0x3f);
        uVar47 = uVar60;
        if (bVar45) {
          uVar47 = (uVar48 << 1) << ((ulong)~uVar59 & 0x3f) | uVar64;
        }
        uVar64 = 0;
        if (bVar45) {
          uVar64 = uVar60;
        }
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar57;
        auVar35._8_8_ = 0;
        auVar35._0_8_ = uVar47;
        uVar60 = uVar63;
        uVar66 = 0;
        if ((uVar58 & 0x40) == 0) {
          uVar60 = uVar51 << ((ulong)uVar58 & 0x3f) | (uVar67 >> 1) >> ((ulong)~uVar58 & 0x3f);
          uVar66 = uVar63;
        }
        uVar67 = uVar57 * uVar47;
        uVar63 = uVar66 + uVar67 * -2;
        uVar60 = uVar60 - ((uVar67 >> 0x3f |
                           (SUB168(auVar18 * auVar35,8) + uVar57 * uVar64 + uVar61 * uVar47) * 2) +
                          (ulong)(uVar66 < uVar67 * 2));
      }
      else {
        uVar64 = uVar48 & 0xffffffffffff | (ulong)uVar58 << 0x30;
        uVar60 = (ulong)-lVar46 >> 0x3f | lVar2 << 1;
        uVar63 = lVar46 * -2;
      }
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar57;
      uVar66 = (uVar47 & 1) + uVar63;
      if (CARRY8(uVar47 & 1,uVar63)) {
        uVar60 = uVar60 + 1;
      }
      uVar48 = (ulong)(!CARRY8(uVar61,~uVar60) &&
                      !CARRY8(uVar61 + ~uVar60,(ulong)(uVar66 <= uVar57)));
      uVar63 = uVar47 + uVar48;
      uVar67 = SUB168(auVar19 * ZEXT816(3),8) + uVar61 * 3;
      if (CARRY8(uVar47,uVar48)) {
        uVar64 = uVar64 + 1;
      }
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar57;
      uVar67 = (ulong)((!CARRY8(uVar67,~uVar60) &&
                       !CARRY8(uVar67 + ~uVar60,(ulong)(uVar66 <= uVar57 * 3))) &&
                      uVar64 < 0x7fff000000000000);
      uVar47 = uVar63 + uVar67;
      if (CARRY8(uVar63,uVar67)) {
        uVar64 = uVar64 + 1;
      }
      uVar63 = SUB168(auVar20 * ZEXT816(5),8) + uVar61 * 5;
      uVar63 = (ulong)((!CARRY8(uVar63,~uVar60) &&
                       !CARRY8(uVar63 + ~uVar60,(ulong)(uVar66 <= uVar57 * 5))) &&
                      uVar64 < 0x7fff000000000000);
      if (CARRY8(uVar47,uVar63)) {
        uVar64 = uVar64 + 1;
      }
      auVar38._8_8_ = uVar64 | uVar56;
      auVar38._0_8_ = uVar47 + uVar63;
      return auVar38;
    }
    auVar39._8_8_ = 0;
    auVar39._0_8_ = uVar56 | 0x7fff000000000000;
    return auVar39 << 0x40;
  }
  uVar67 = uVar47 & 0x7fffffffffffffff;
  if (0x7fff000000000000 < uVar67 || CARRY8(uVar67 + 0x8000ffffffffffff,(ulong)(uVar63 != 0))) {
    auVar36._8_8_ = uVar47 | 0x800000000000;
    auVar36._0_8_ = uVar63;
    return auVar36;
  }
  uVar47 = uVar66 & 0x7fffffffffffffff;
  if (0x7fff000000000000 < uVar47 || CARRY8(uVar47 + 0x8000ffffffffffff,(ulong)(uVar57 != 0))) {
    auVar37._8_8_ = uVar66 | 0x800000000000;
    auVar37._0_8_ = uVar57;
    return auVar37;
  }
  if (uVar63 == 0 && uVar67 == 0x7fff000000000000) {
    if (uVar57 != 0 || uVar47 != 0x7fff000000000000) {
      auVar42._8_8_ = 0;
      auVar42._0_8_ = uVar56 | 0x7fff000000000000;
      return auVar42 << 0x40;
    }
  }
  else {
    if (uVar57 == 0 && uVar47 == 0x7fff000000000000) {
      auVar41._8_8_ = 0;
      auVar41._0_8_ = uVar56;
      return auVar41 << 0x40;
    }
    if (uVar63 != 0 || (param_1 & (undefined1  [16])0x7fffffffffffffff) != (undefined1  [16])0x0) {
      if (uVar57 == 0 && (param_2 & (undefined1  [16])0x7fffffffffffffff) == (undefined1  [16])0x0)
      {
        auVar44._8_8_ = 0;
        auVar44._0_8_ = uVar56 | 0x7fff000000000000;
        return auVar44 << 0x40;
      }
      if (uVar67 >> 0x30 == 0) {
        bVar45 = (param_1 & (undefined1  [16])0xffffffffffff) == (undefined1  [16])0x0;
        uVar67 = uVar63 >> 1;
        uVar66 = uVar63;
        if (!bVar45) {
          uVar66 = uVar64;
        }
        iVar62 = (int)LZCOUNT(uVar66) + (uint)bVar45 * 0x40;
        uVar3 = iVar62 - 0xf;
        uVar66 = uVar63 << ((ulong)uVar3 & 0x3f);
        uVar48 = uVar64 << ((ulong)uVar3 & 0x3f);
        bVar45 = (uVar3 & 0x40) == 0;
        uVar63 = 0;
        if (bVar45) {
          uVar63 = uVar66;
        }
        uVar64 = uVar66;
        if (bVar45) {
          uVar64 = uVar48 | uVar67 >> ((ulong)~uVar3 & 0x3f);
        }
        iVar62 = 0x10 - iVar62;
      }
      else {
        iVar62 = 0;
      }
      if (uVar47 >> 0x30 == 0) {
        bVar45 = (param_2 & (undefined1  [16])0xffffffffffff) == (undefined1  [16])0x0;
        uVar47 = uVar57 >> 1;
        uVar61 = uVar57;
        if (!bVar45) {
          uVar61 = uVar60;
        }
        iVar1 = (int)LZCOUNT(uVar61) + (uint)bVar45 * 0x40;
        uVar3 = iVar1 - 0xf;
        uVar61 = uVar57 << ((ulong)uVar3 & 0x3f);
        bVar45 = (uVar3 & 0x40) == 0;
        iVar62 = iVar1 + iVar62 + -0x10;
        uVar57 = 0;
        if (bVar45) {
          uVar57 = uVar61;
        }
        if (bVar45) {
          uVar61 = uVar60 << ((ulong)uVar3 & 0x3f) | uVar47 >> ((ulong)~uVar3 & 0x3f);
        }
      }
      goto LAB_00754cc4;
    }
    if (uVar57 != 0 || (param_2 & (undefined1  [16])0x7fffffffffffffff) != (undefined1  [16])0x0) {
      auVar43._8_8_ = 0;
      auVar43._0_8_ = uVar56;
      return auVar43 << 0x40;
    }
  }
  return _DAT_00200b40;
}


// ===== 00755278  FUN_00755278 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_00755278(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  ulong uVar7;
  
  if (param_1 != 0) {
    uVar2 = -param_1;
    if (-1 < (long)param_1) {
      uVar2 = param_1;
    }
    uVar1 = (int)LZCOUNT(uVar2) + 0x31;
    uVar7 = uVar2 << ((ulong)uVar1 & 0x3f);
    bVar6 = (uVar1 & 0x40) == 0;
    uVar3 = uVar7;
    if (bVar6) {
      uVar3 = (uVar2 >> 1) >> ((ulong)~uVar1 & 0x3f);
    }
    uVar4 = 0;
    if (bVar6) {
      uVar4 = uVar7;
    }
    auVar5._8_8_ = (uVar3 ^ 0x1000000000000) + ((ulong)(0x403e - (int)LZCOUNT(uVar2)) << 0x30) |
                   param_1 & 0x8000000000000000;
    auVar5._0_8_ = uVar4;
    return auVar5;
  }
  return _DAT_00200950;
}


// ===== 007552dc  FUN_007552dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_007552dc(uint param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  ulong uVar7;
  
  if (param_1 != 0) {
    uVar2 = -param_1;
    if (-1 < (int)param_1) {
      uVar2 = param_1;
    }
    uVar1 = (int)LZCOUNT(uVar2) + 0x51;
    uVar7 = (ulong)uVar2 << ((ulong)uVar1 & 0x3f);
    bVar6 = (uVar1 & 0x40) == 0;
    uVar3 = uVar7;
    if (bVar6) {
      uVar3 = (ulong)((uVar2 >> 1) >> ((ulong)~uVar1 & 0x3f));
    }
    uVar4 = 0;
    if (bVar6) {
      uVar4 = uVar7;
    }
    auVar5._8_8_ = (uVar3 ^ 0x1000000000000) + ((ulong)(0x401e - (int)LZCOUNT(uVar2)) << 0x30) |
                   (ulong)(param_1 & 0x80000000) << 0x20;
    auVar5._0_8_ = uVar4;
    return auVar5;
  }
  return _DAT_00200950;
}


// ===== 00755340  FUN_00755340 =====

void * FUN_00755340(size_t *param_1)

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
    pthread_once((pthread_once_t *)&DAT_007b1920,FUN_00755568);
    pthread_mutex_lock((pthread_mutex_t *)&DAT_007b1930);
    sVar3 = param_1[2];
    if (sVar3 == 0) {
      sVar3 = DAT_007b1928 + 1;
      DAT_007b1928 = sVar3;
      param_1[2] = sVar3;
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_007b1930);
    __ptr = (undefined8 *)pthread_getspecific(DAT_007b191c);
    if (__ptr == (undefined8 *)0x0) goto LAB_00755420;
LAB_00755374:
    uVar2 = __ptr[1];
    if (sVar3 <= uVar2) goto LAB_00755468;
    lVar4 = (sVar3 + 0x11 & 0xfffffffffffffff0) - 2;
    __ptr = (undefined8 *)realloc(__ptr,lVar4 * 8 + 0x10);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    memset(__ptr + uVar2 + 2,0,(lVar4 - uVar2) * 8);
  }
  else {
    __ptr = (undefined8 *)pthread_getspecific(DAT_007b191c);
    if (__ptr != (undefined8 *)0x0) goto LAB_00755374;
LAB_00755420:
    lVar4 = (sVar3 + 0x11 & 0xfffffffffffffff0) - 2;
    __ptr = (undefined8 *)malloc(lVar4 * 8 + 0x10);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    memset(__ptr + 2,0,lVar4 * 8);
    *__ptr = 1;
  }
  __key = DAT_007b191c;
  __ptr[1] = lVar4;
  pthread_setspecific(__key,__ptr);
LAB_00755468:
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


// ===== 0075552c  FUN_0075552c =====

ulong FUN_0075552c(ulong param_1)

{
  uint uVar1;
  
  if (DAT_007b1918 == '\x01') {
    uVar1 = pthread_key_delete(DAT_007b191c);
    param_1 = (ulong)uVar1;
    DAT_007b1918 = '\0';
  }
  return param_1;
}


// ===== 00755568  FUN_00755568 =====

void FUN_00755568(void)

{
  int iVar1;
  
  iVar1 = pthread_key_create(&DAT_007b191c,FUN_007555a4);
  if (iVar1 == 0) {
    DAT_007b1918 = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 007555a4  FUN_007555a4 =====

long * FUN_007555a4(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*param_1 != 0) {
    *param_1 = *param_1 + -1;
    uVar1 = pthread_setspecific(DAT_007b191c,param_1);
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


// ===== 00755630  FUN_00755630 =====

char FUN_00755630(char param_1,char param_2,char *param_3)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  
  if (DAT_007b1958 != '\0') {
    cVar3 = *param_3;
    if (cVar3 == param_1) {
      *param_3 = param_2;
    }
    return cVar3;
  }
  do {
    cVar3 = *param_3;
    if (*param_3 != param_1) {
      return cVar3;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_3,0x10);
    if (bVar2) {
      *param_3 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return cVar3;
}


// ===== 00755664  _INIT_0 =====

void _INIT_0(void)

{
  uint uVar1;
  int iVar2;
  char acStack_6c [92];
  
  uVar1 = getauxval(0x10);
  if ((uVar1 >> 8 & 1) == 0) {
    DAT_007b1958 = 0;
    return;
  }
  iVar2 = __system_property_get("ro.arch",acStack_6c);
  if (0 < iVar2) {
    iVar2 = strncmp(acStack_6c,"exynos9810",10);
    DAT_007b1958 = iVar2 != 0;
    return;
  }
  DAT_007b1958 = 1;
  return;
}


// ===== 007556fc  FUN_007556fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007556fc(ulong param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  undefined1 auVar29 [16];
  
  uVar2 = (uint)param_1;
  if (((uint)(param_1 >> 0x3e) & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(ulong *)(param_2 + 0x10);
  }
  auVar10._8_8_ = param_1;
  auVar10._0_8_ = param_1;
  auVar6 = NEON_ushl(auVar10,_DAT_002005a0,8);
  auVar7 = NEON_ushl(auVar10,_DAT_00200330,8);
  auVar9 = NEON_ushl(auVar10,_DAT_00200490,8);
  auVar8 = NEON_ushl(auVar10,_DAT_00200520,8);
  auVar11._8_8_ = uVar3;
  auVar11._0_8_ = uVar3;
  uVar5 = uVar3 >> 1;
  bVar13 = auVar9[0] & DAT_00200710 | auVar8[0] & DAT_00200860 |
           auVar7[0] & (byte)_DAT_00200720 | auVar6[0] & DAT_00200600;
  bVar14 = auVar9[1] & UNK_00200711 | auVar8[1] & UNK_00200861 |
           auVar7[1] & (byte)((ulong)_DAT_00200720 >> 8) | auVar6[1] & UNK_00200601;
  bVar15 = auVar9[2] & UNK_00200712 | auVar8[2] & UNK_00200862 |
           auVar7[2] & (byte)((ulong)_DAT_00200720 >> 0x10) | auVar6[2] & UNK_00200602;
  bVar16 = auVar9[3] & UNK_00200713 | auVar8[3] & UNK_00200863 |
           auVar7[3] & (byte)((ulong)_DAT_00200720 >> 0x18) | auVar6[3] & UNK_00200603;
  bVar17 = auVar9[4] & UNK_00200714 | auVar8[4] & UNK_00200864 |
           auVar7[4] & (byte)((ulong)_DAT_00200720 >> 0x20) | auVar6[4] & UNK_00200604;
  bVar18 = auVar9[5] & UNK_00200715 | auVar8[5] & UNK_00200865 |
           auVar7[5] & (byte)((ulong)_DAT_00200720 >> 0x28) | auVar6[5] & UNK_00200605;
  bVar19 = auVar9[6] & UNK_00200716 | auVar8[6] & UNK_00200866 |
           auVar7[6] & (byte)((ulong)_DAT_00200720 >> 0x30) | auVar6[6] & UNK_00200606;
  bVar20 = auVar9[7] & UNK_00200717 | auVar8[7] & UNK_00200867 |
           auVar7[7] & (byte)((ulong)_DAT_00200720 >> 0x38) | auVar6[7] & UNK_00200607;
  bVar21 = auVar9[8] & UNK_00200718 | auVar8[8] & UNK_00200868 |
           auVar7[8] & (byte)_UNK_00200728 | auVar6[8] & UNK_00200608;
  bVar22 = auVar9[9] & UNK_00200719 | auVar8[9] & UNK_00200869 |
           auVar7[9] & (byte)((ulong)_UNK_00200728 >> 8) | auVar6[9] & UNK_00200609;
  bVar23 = auVar9[10] & UNK_0020071a | auVar8[10] & UNK_0020086a |
           auVar7[10] & (byte)((ulong)_UNK_00200728 >> 0x10) | auVar6[10] & UNK_0020060a;
  bVar24 = auVar9[0xb] & UNK_0020071b | auVar8[0xb] & UNK_0020086b |
           auVar7[0xb] & (byte)((ulong)_UNK_00200728 >> 0x18) | auVar6[0xb] & UNK_0020060b;
  bVar25 = auVar9[0xc] & UNK_0020071c | auVar8[0xc] & UNK_0020086c |
           auVar7[0xc] & (byte)((ulong)_UNK_00200728 >> 0x20) | auVar6[0xc] & UNK_0020060c;
  bVar26 = auVar9[0xd] & UNK_0020071d | auVar8[0xd] & UNK_0020086d |
           auVar7[0xd] & (byte)((ulong)_UNK_00200728 >> 0x28) | auVar6[0xd] & UNK_0020060d;
  bVar27 = auVar9[0xe] & UNK_0020071e | auVar8[0xe] & UNK_0020086e |
           auVar7[0xe] & (byte)((ulong)_UNK_00200728 >> 0x30) | auVar6[0xe] & UNK_0020060e;
  bVar28 = auVar9[0xf] & UNK_0020071f | auVar8[0xf] & UNK_0020086f |
           auVar7[0xf] & (byte)((ulong)_UNK_00200728 >> 0x38) | auVar6[0xf] & UNK_0020060f;
  auVar29 = NEON_ushl(auVar11,_DAT_002006c0,8);
  auVar10 = NEON_ushl(auVar11,_DAT_00200610,8);
  auVar8[1] = bVar14;
  auVar8[0] = bVar13;
  auVar8[2] = bVar15;
  auVar8[3] = bVar16;
  auVar8[4] = bVar17;
  auVar8[5] = bVar18;
  auVar8[6] = bVar19;
  auVar8[7] = bVar20;
  auVar8[8] = bVar21;
  auVar8[9] = bVar22;
  auVar8[10] = bVar23;
  auVar8[0xb] = bVar24;
  auVar8[0xc] = bVar25;
  auVar8[0xd] = bVar26;
  auVar8[0xe] = bVar27;
  auVar8[0xf] = bVar28;
  auVar9[1] = bVar14;
  auVar9[0] = bVar13;
  auVar9[2] = bVar15;
  auVar9[3] = bVar16;
  auVar9[4] = bVar17;
  auVar9[5] = bVar18;
  auVar9[6] = bVar19;
  auVar9[7] = bVar20;
  auVar9[8] = bVar21;
  auVar9[9] = bVar22;
  auVar9[10] = bVar23;
  auVar9[0xb] = bVar24;
  auVar9[0xc] = bVar25;
  auVar9[0xd] = bVar26;
  auVar9[0xe] = bVar27;
  auVar9[0xf] = bVar28;
  auVar12 = NEON_ext(auVar8,auVar9,8,1);
  auVar8 = NEON_ushl(auVar11,_DAT_002000c0,8);
  auVar9 = NEON_ushl(auVar11,_DAT_002001e0,8);
  auVar11 = NEON_ushl(auVar11,_DAT_00200410,8);
  uVar4 = CONCAT17(bVar20 | auVar12[7],
                   CONCAT16(bVar19 | auVar12[6],
                            CONCAT15(bVar18 | auVar12[5],
                                     CONCAT14(bVar17 | auVar12[4],
                                              CONCAT13(bVar16 | auVar12[3],
                                                       CONCAT12(bVar15 | auVar12[2],
                                                                CONCAT11(bVar14 | auVar12[1],
                                                                         bVar13 | auVar12[0])))))))
          | auVar7._0_8_ & 0x8000 |
          auVar6._0_8_ & 0x10000 | ((ulong)(uVar2 >> 7) & 1) << 10 |
          (param_1 & 0x1000000) >> 7 | (param_1 & 0x1000) >> 6 | uVar3 >> 5 & 4;
  if ((param_1 & 0x10000000) != 0) {
    uVar4 = uVar4 | 0x3000000000000;
  }
  auVar7[0] = auVar10[0] & DAT_00200bc0 | auVar9[0] & DAT_00200960 |
              auVar29[0] & DAT_00200420 | auVar8[0] & (byte)_DAT_002001a0;
  auVar7[1] = auVar10[1] & UNK_00200bc1 | auVar9[1] & UNK_00200961 |
              auVar29[1] & UNK_00200421 | auVar8[1] & (byte)((ulong)_DAT_002001a0 >> 8);
  auVar7[2] = auVar10[2] & UNK_00200bc2 | auVar9[2] & UNK_00200962 |
              auVar29[2] & UNK_00200422 | auVar8[2] & (byte)((ulong)_DAT_002001a0 >> 0x10);
  auVar7[3] = auVar10[3] & UNK_00200bc3 | auVar9[3] & UNK_00200963 |
              auVar29[3] & UNK_00200423 | auVar8[3] & (byte)((ulong)_DAT_002001a0 >> 0x18);
  auVar7[4] = auVar10[4] & UNK_00200bc4 | auVar9[4] & UNK_00200964 |
              auVar29[4] & UNK_00200424 | auVar8[4] & (byte)((ulong)_DAT_002001a0 >> 0x20);
  auVar7[5] = auVar10[5] & UNK_00200bc5 | auVar9[5] & UNK_00200965 |
              auVar29[5] & UNK_00200425 | auVar8[5] & (byte)((ulong)_DAT_002001a0 >> 0x28);
  auVar7[6] = auVar10[6] & UNK_00200bc6 | auVar9[6] & UNK_00200966 |
              auVar29[6] & UNK_00200426 | auVar8[6] & (byte)((ulong)_DAT_002001a0 >> 0x30);
  auVar7[7] = auVar10[7] & UNK_00200bc7 | auVar9[7] & UNK_00200967 |
              auVar29[7] & UNK_00200427 | auVar8[7] & (byte)((ulong)_DAT_002001a0 >> 0x38);
  auVar7[8] = auVar10[8] & UNK_00200bc8 | auVar9[8] & UNK_00200968 |
              auVar29[8] & UNK_00200428 | auVar8[8] & (byte)_UNK_002001a8;
  auVar7[9] = auVar10[9] & UNK_00200bc9 | auVar9[9] & UNK_00200969 |
              auVar29[9] & UNK_00200429 | auVar8[9] & (byte)((ulong)_UNK_002001a8 >> 8);
  auVar7[10] = auVar10[10] & UNK_00200bca | auVar9[10] & UNK_0020096a |
               auVar29[10] & UNK_0020042a | auVar8[10] & (byte)((ulong)_UNK_002001a8 >> 0x10);
  auVar7[0xb] = auVar10[0xb] & UNK_00200bcb | auVar9[0xb] & UNK_0020096b |
                auVar29[0xb] & UNK_0020042b | auVar8[0xb] & (byte)((ulong)_UNK_002001a8 >> 0x18);
  auVar7[0xc] = auVar10[0xc] & UNK_00200bcc | auVar9[0xc] & UNK_0020096c |
                auVar29[0xc] & UNK_0020042c | auVar8[0xc] & (byte)((ulong)_UNK_002001a8 >> 0x20);
  auVar7[0xd] = auVar10[0xd] & UNK_00200bcd | auVar9[0xd] & UNK_0020096d |
                auVar29[0xd] & UNK_0020042d | auVar8[0xd] & (byte)((ulong)_UNK_002001a8 >> 0x28);
  auVar7[0xe] = auVar10[0xe] & UNK_00200bce | auVar9[0xe] & UNK_0020096e |
                auVar29[0xe] & UNK_0020042e | auVar8[0xe] & (byte)((ulong)_UNK_002001a8 >> 0x30);
  auVar7[0xf] = auVar10[0xf] & UNK_00200bcf | auVar9[0xf] & UNK_0020096f |
                auVar29[0xf] & UNK_0020042f | auVar8[0xf] & (byte)((ulong)_UNK_002001a8 >> 0x38);
  if ((uVar3 & 0x40000) != 0) {
    uVar4 = uVar4 | 0x180000000000;
  }
  auVar12 = NEON_ext(auVar7,auVar7,8,1);
  uVar4 = CONCAT17(auVar7[7] | auVar12[7],
                   CONCAT16(auVar7[6] | auVar12[6],
                            CONCAT15(auVar7[5] | auVar12[5],
                                     CONCAT14(auVar7[4] | auVar12[4],
                                              CONCAT13(auVar7[3] | auVar12[3],
                                                       CONCAT12(auVar7[2] | auVar12[2],
                                                                CONCAT11(auVar7[1] | auVar12[1],
                                                                         auVar7[0] | auVar12[0])))))
                           )) | (param_1 & 0x100) >> 1 |
          auVar9._8_8_ & 0x200000000000 | (uVar3 >> 2 & 0x1f) << 0x25 |
          auVar8._0_8_ & 0x80000 | uVar3 >> 0x10 & 1 |
          uVar3 >> 4 & 0x10000000 | (uVar3 >> 0xd & 1) << 0x1a |
          CONCAT17(auVar11[7] & (byte)((ulong)_DAT_002000d0 >> 0x38) |
                   (byte)(uVar3 >> 0x39) & UNK_00200347 |
                   auVar11[0xf] & (byte)((ulong)_UNK_002000d8 >> 0x38) | auVar10[0xf] & UNK_0020034f
                   ,CONCAT16(auVar11[6] & (byte)((ulong)_DAT_002000d0 >> 0x30) |
                             (byte)(uVar5 >> 0x30) & UNK_00200346 |
                             auVar11[0xe] & (byte)((ulong)_UNK_002000d8 >> 0x30) |
                             auVar10[0xe] & UNK_0020034e,
                             CONCAT15(auVar11[5] & (byte)((ulong)_DAT_002000d0 >> 0x28) |
                                      (byte)(uVar5 >> 0x28) & UNK_00200345 |
                                      auVar11[0xd] & (byte)((ulong)_UNK_002000d8 >> 0x28) |
                                      auVar10[0xd] & UNK_0020034d,
                                      CONCAT14(auVar11[4] & (byte)((ulong)_DAT_002000d0 >> 0x20) |
                                               (byte)(uVar5 >> 0x20) & UNK_00200344 |
                                               auVar11[0xc] & (byte)((ulong)_UNK_002000d8 >> 0x20) |
                                               auVar10[0xc] & UNK_0020034c,
                                               CONCAT13(auVar11[3] &
                                                        (byte)((ulong)_DAT_002000d0 >> 0x18) |
                                                        (byte)(uVar5 >> 0x18) & UNK_00200343 |
                                                        auVar11[0xb] &
                                                        (byte)((ulong)_UNK_002000d8 >> 0x18) |
                                                        auVar10[0xb] & UNK_0020034b,
                                                        CONCAT12(auVar11[2] &
                                                                 (byte)((ulong)_DAT_002000d0 >> 0x10
                                                                       ) | (byte)(uVar5 >> 0x10) &
                                                                           UNK_00200342 |
                                                                 auVar11[10] &
                                                                 (byte)((ulong)_UNK_002000d8 >> 0x10
                                                                       ) | auVar10[10] &
                                                                           UNK_0020034a,
                                                                 CONCAT11(auVar11[1] &
                                                                          (byte)((ulong)
                                                  _DAT_002000d0 >> 8) |
                                                  (byte)(uVar5 >> 8) & UNK_00200341 |
                                                  auVar11[9] & (byte)((ulong)_UNK_002000d8 >> 8) |
                                                  auVar10[9] & UNK_00200349,
                                                  auVar11[0] & (byte)_DAT_002000d0 |
                                                  (byte)uVar5 & DAT_00200340 |
                                                  auVar11[8] & (byte)_UNK_002000d8 |
                                                  auVar10[8] & UNK_00200348))))))) | uVar4;
  if ((uVar2 >> 0xb & 1) != 0) {
    uVar5 = id_aa64isar1_el1;
    if ((uVar5 & 0xf0000000000) != 0) {
      uVar4 = uVar4 | 0x800000000000;
    }
    if (uVar5 >> 0x3c != 0) {
      uVar4 = uVar4 | 0x8000000000000;
    }
    uVar1 = uVar4 | 0x10000000000000;
    if (uVar5 >> 0x3d == 0) {
      uVar1 = uVar4;
    }
    uVar4 = uVar1 | 0x20000000000000;
    if (uVar5 >> 0x3c < 3) {
      uVar4 = uVar1;
    }
  }
  if ((param_1 & 1) != 0) {
    uVar4 = uVar4 | 0x300;
  }
  DAT_007b1960 = auVar6._0_8_ & 0x400000 | ((ulong)(uVar2 >> 0x10) & 1) << 0x12 |
                 (param_1 & 0x4000000) >> 3 | ((ulong)(uVar2 >> 0x16) & 1) << 0x1e |
                 (param_1 & 0x20000) >> 4 | (uVar3 >> 0x2e & 1) << 0x3a |
                 (uVar3 & 0x4000) << 0xd | auVar8._0_8_ & 0x80000000 | (uVar3 & 2) << 0x23 | uVar4 |
                 0x8000000000000000;
  return;
}


// ===== 007559a8  _INIT_1 =====

void _INIT_1(void)

{
  int iVar1;
  ulong uVar2;
  char local_70 [8];
  ulong uStack_68;
  undefined8 local_60;
  
  if (DAT_007b1960 != 0) {
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
    FUN_007556fc(uVar2 | 0x4000000000000000,local_70);
  }
  return;
}


// ===== 00755a40  FUN_00755a40 =====

int FUN_00755a40(int param_1,int param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  if (DAT_007b1958 != '\0') {
    iVar3 = *param_3;
    if (iVar3 == param_1) {
      *param_3 = param_2;
    }
    return iVar3;
  }
  do {
    iVar3 = *param_3;
    if (*param_3 != param_1) {
      return iVar3;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_3,0x10);
    if (bVar2) {
      *param_3 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return iVar3;
}


// ===== 00755a80  FUN_00755a80 =====

int FUN_00755a80(int param_1,int param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  if (DAT_007b1958 != '\0') {
    iVar3 = *param_3;
    if (iVar3 == param_1) {
      *param_3 = param_2;
    }
    return iVar3;
  }
  do {
    iVar3 = *param_3;
    if (*param_3 != param_1) {
      return iVar3;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_3,0x10);
    if (bVar2) {
      *param_3 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return iVar3;
}


// ===== 00755ac0  FUN_00755ac0 =====

int FUN_00755ac0(int param_1,int param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  if (DAT_007b1958 != '\0') {
    iVar3 = *param_3;
    if (iVar3 == param_1) {
      *param_3 = param_2;
    }
    return iVar3;
  }
  do {
    iVar3 = *param_3;
    if (*param_3 != param_1) {
      return iVar3;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_3,0x10);
    if (bVar2) {
      *param_3 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return iVar3;
}


// ===== 00755b00  FUN_00755b00 =====

int FUN_00755b00(int param_1,int param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  if (DAT_007b1958 != '\0') {
    iVar3 = *param_3;
    if (iVar3 == param_1) {
      *param_3 = param_2;
    }
    return iVar3;
  }
  do {
    iVar3 = *param_3;
    if (*param_3 != param_1) {
      return iVar3;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_3,0x10);
    if (bVar2) {
      *param_3 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return iVar3;
}


// ===== 00755b40  FUN_00755b40 =====

long FUN_00755b40(long param_1,long param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_007b1958 != '\0') {
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


// ===== 00755b80  FUN_00755b80 =====

long FUN_00755b80(long param_1,long param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_007b1958 != '\0') {
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


// ===== 00755bc0  FUN_00755bc0 =====

int FUN_00755bc0(int param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  if (DAT_007b1958 == '\0') {
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
  iVar3 = *param_2;
  *param_2 = iVar3 + param_1;
  return iVar3;
}


// ===== 00755bf0  FUN_00755bf0 =====

int FUN_00755bf0(int param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  if (DAT_007b1958 == '\0') {
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


// ===== 00755c20  FUN_00755c20 =====

long FUN_00755c20(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_007b1958 == '\0') {
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


// ===== 00755c50  FUN_00755c50 =====

long FUN_00755c50(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_007b1958 == '\0') {
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


// ===== 00755c80  FUN_00755c80 =====

undefined8 FUN_00755c80(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_4f0 [624];
  undefined1 auStack_280 [528];
  undefined8 local_70;
  undefined1 auStack_68 [24];
  code *local_50;
  
  FUN_00759b98(auStack_280);
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_007560f0(auStack_4f0,auStack_280);
  iVar1 = FUN_00756300(auStack_4f0);
  while( true ) {
    if (iVar1 == 0) {
      return 5;
    }
    if ((iVar1 < 0) || (iVar1 = FUN_00756328(auStack_4f0,auStack_68), iVar1 != 0)) break;
    if ((local_50 != (code *)0x0) &&
       (iVar1 = (*local_50)(1,1,*param_1,param_1,auStack_4f0), iVar1 != 8)) {
      if (iVar1 != 6) {
        return 3;
      }
      FUN_00756198(auStack_4f0,0xfffffffe,&local_70);
      param_1[3] = local_70;
      uVar2 = FUN_00755d78(auStack_280,auStack_4f0,param_1);
      return uVar2;
    }
    iVar1 = FUN_00756300(auStack_4f0);
  }
  return 3;
}


// ===== 00755d78  FUN_00755d78 =====

undefined8 FUN_00755d78(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_80 [24];
  code *local_68;
  long local_38;
  
  FUN_007560f0(param_2,param_1);
  iVar2 = FUN_00756314(param_2);
  while( true ) {
    if (iVar2 == 0) {
      return 5;
    }
    if (iVar2 < 0) break;
    FUN_00756198(param_2,0xfffffffe,&local_38);
    iVar2 = FUN_00756328(param_2,auStack_80);
    if (iVar2 != 0) {
      return 2;
    }
    if (local_68 != (code *)0x0) {
      uVar3 = 6;
      if (local_38 != param_3[3]) {
        uVar3 = 2;
      }
      iVar2 = (*local_68)(1,uVar3,*param_3,param_3,param_2);
      puVar1 = PTR___sF_007a3898;
      if (iVar2 != 8) {
        if (iVar2 != 7) {
          return 2;
        }
        FUN_00756368(param_2);
        return 2;
      }
      if (local_38 == param_3[3]) {
        fprintf((FILE *)(PTR___sF_007a3898 + 0x130),"libunwind: %s - %s\n","unwind_phase2",
                "during phase1 personality function said it would stop here, but now in phase2 it did not stop here"
               );
        fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    iVar2 = FUN_00756314(param_2);
  }
  return 2;
}


// ===== 00755eac  FUN_00755eac =====

void FUN_00755eac(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_4a0 [624];
  undefined1 auStack_230 [528];
  
  FUN_00759b98(auStack_230);
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_00755d78(auStack_230,auStack_4a0,param_1);
  }
  else {
    FUN_00755f30(auStack_230,auStack_4a0,param_1,*(long *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = PTR___sF_007a3898;
  fprintf((FILE *)(PTR___sF_007a3898 + 0x130),"libunwind: %s - %s\n","_Unwind_Resume",
          "_Unwind_Resume() can\'t return");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00755f30  FUN_00755f30 =====

void FUN_00755f30(undefined8 param_1,undefined8 param_2,undefined8 *param_3,code *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined1 auStack_78 [24];
  code *local_60;
  
  FUN_007560f0(param_2,param_1);
  iVar1 = FUN_00756314(param_2);
  while( true ) {
    if (iVar1 < 1) {
      (*param_4)(1,0x1a,*param_3,param_3,param_2,param_5);
      return;
    }
    iVar1 = FUN_00756328(param_2,auStack_78);
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
      FUN_00756368(param_2);
    }
    iVar1 = FUN_00756314(param_2);
  }
  return;
}


// ===== 00756024  FUN_00756024 =====

undefined8 FUN_00756024(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_58 [16];
  undefined8 local_48;
  
  iVar1 = FUN_00756328(param_1,auStack_58);
  if (iVar1 != 0) {
    local_48 = 0;
  }
  return local_48;
}


// ===== 00756058  FUN_00756058 =====

undefined8 FUN_00756058(undefined8 param_1)

{
  int iVar1;
  undefined8 local_58 [9];
  
  iVar1 = FUN_00756328(param_1,local_58);
  if (iVar1 != 0) {
    local_58[0] = 0;
  }
  return local_58[0];
}


// ===== 0075608c  FUN_0075608c =====

void FUN_0075608c(long param_1)

{
  if (*(code **)(param_1 + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x007560a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 8))(1,param_1);
    return;
  }
  return;
}


// ===== 007560a8  thunk_FUN_00756214 =====

void thunk_FUN_00756214(void)

{
  FUN_00756214();
  return;
}


// ===== 007560b0  FUN_007560b0 =====

undefined8 FUN_007560b0(undefined8 param_1)

{
  undefined8 local_18;
  
  FUN_00756198(param_1,0xffffffff,&local_18);
  return local_18;
}


// ===== 007560e0  FUN_007560e0 =====

void FUN_007560e0(undefined8 param_1,undefined8 param_2)

{
  FUN_00756214(param_1,0xffffffff,param_2);
  return;
}


// ===== 007560f0  FUN_007560f0 =====

undefined8 FUN_007560f0(undefined8 *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = &PTR_FUN_007a0be0;
  param_1[1] = &DAT_007b1968;
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
  FUN_00756bb8(param_1,0);
  return 0;
}


// ===== 00756198  FUN_00756198 =====

undefined8 FUN_00756198(long *param_1,undefined4 param_2,undefined8 *param_3)

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


// ===== 00756214  FUN_00756214 =====

undefined8 FUN_00756214(long *param_1,int param_2,undefined8 param_3)

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


// ===== 00756300  FUN_00756300 =====

void FUN_00756300(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00756310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,0);
  return;
}


// ===== 00756314  FUN_00756314 =====

void FUN_00756314(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00756324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,1);
  return;
}


// ===== 00756328  FUN_00756328 =====

undefined4 FUN_00756328(long *param_1,long param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x48))();
  uVar1 = 0xffffe66b;
  if (*(long *)(param_2 + 8) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 00756368  FUN_00756368 =====

undefined8 FUN_00756368(long *param_1)

{
  (**(code **)(*param_1 + 0x50))();
  return 0xffffe674;
}


// ===== 00756390  FUN_00756390 =====

char * FUN_00756390(undefined8 param_1,uint *param_2,undefined8 *param_3,long *param_4,ulong param_5
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
      pcVar7 = (char *)FUN_00756520(param_1,lVar8,param_4);
      if (pcVar7 != (char *)0x0) {
        return pcVar7;
      }
    }
    else if (*param_4 != lVar8) {
      return "CIE start does not match";
    }
    lVar8 = (long)puVar10 + uVar9;
    local_48 = puVar10 + 1;
    lVar3 = FUN_00758270(param_1,&local_48,lVar8,(char)param_4[3],0);
    lVar4 = FUN_00758270(param_1,&local_48,lVar8,*(byte *)(param_4 + 3) & 0xf,0);
    bVar1 = *(byte *)((long)param_4 + 0x31);
    param_3[5] = 0;
    puVar10 = local_48;
    if ((bVar1 & 1) != 0) {
      lVar5 = FUN_007585fc(&local_48,lVar8);
      puVar2 = local_48;
      puVar10 = (uint *)((long)local_48 + lVar5);
      if ((*(byte *)((long)param_4 + 0x19) != 0xff) &&
         (lVar5 = FUN_00758270(param_1,&local_48,lVar8,*(byte *)((long)param_4 + 0x19) & 0xf,0),
         lVar5 != 0)) {
        local_48 = puVar2;
        uVar6 = FUN_00758270(param_1,&local_48,lVar8,*(undefined1 *)((long)param_4 + 0x19),0);
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


// ===== 00756520  FUN_00756520 =====

char * FUN_00756520(undefined8 param_1,uint *param_2,long *param_3)

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
      uVar7 = FUN_007585fc(&local_48,pbVar1);
      uVar13 = 0;
      uVar14 = 0;
      *(undefined4 *)(param_3 + 5) = uVar7;
      puVar5 = PTR___sF_007a3898;
      pbVar11 = local_48;
      pbVar15 = local_48;
      do {
        pbVar12 = pbVar11;
        if (pbVar15 == pbVar1) {
          fprintf((FILE *)(PTR___sF_007a3898 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
        uVar6 = FUN_007585fc(&local_48,pbVar1);
        *(undefined1 *)((long)param_3 + 0x32) = uVar6;
        bVar2 = *pbVar18;
      }
      if (bVar2 == 0x7a) {
        FUN_007585fc(&local_48,pbVar1);
LAB_007566a0:
        bVar2 = *pbVar18;
        if (bVar2 < 0x50) {
          if (bVar2 < 0x47) {
            if (bVar2 != 0x42) {
              if (bVar2 != 0) goto LAB_00756740;
              goto LAB_00756784;
            }
            *(undefined1 *)((long)param_3 + 0x33) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_007566a0;
          }
          if (bVar2 == 0x47) {
            *(undefined1 *)((long)param_3 + 0x34) = 1;
            goto LAB_00756740;
          }
          if (bVar2 == 0x4c) {
            pbVar18 = pbVar18 + 1;
            *(byte *)((long)param_3 + 0x19) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_007566a0;
          }
        }
        else if (bVar2 < 0x53) {
          if (bVar2 == 0x50) {
            bVar2 = *local_48;
            *(byte *)((long)param_3 + 0x1a) = bVar2;
            *(char *)((long)param_3 + 0x1b) = (char)(local_48 + 1) - (char)param_2;
            local_48 = local_48 + 1;
            lVar8 = FUN_00758270(param_1,&local_48,pbVar1,bVar2,0);
            param_3[4] = lVar8;
            pbVar18 = pbVar18 + 1;
            goto LAB_007566a0;
          }
          if (bVar2 == 0x52) {
            pbVar18 = pbVar18 + 1;
            *(byte *)(param_3 + 3) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_007566a0;
          }
        }
        else {
          if (bVar2 == 0x53) {
            *(undefined1 *)(param_3 + 6) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_007566a0;
          }
          if (bVar2 == 0x7a) {
            *(undefined1 *)((long)param_3 + 0x31) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_007566a0;
          }
        }
LAB_00756740:
        pbVar18 = pbVar18 + 1;
        goto LAB_007566a0;
      }
LAB_00756784:
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


// ===== 007567e8  FUN_007567e8 =====

void FUN_007567e8(void)

{
  return;
}


// ===== 007567f0  FUN_007567f0 =====

void FUN_007567f0(void)

{
  return;
}


// ===== 007567f8  FUN_007567f8 =====

bool FUN_007567f8(undefined8 param_1,uint param_2)

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


// ===== 0075683c  FUN_0075683c =====

undefined8 FUN_0075683c(long param_1,uint param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_007a3898;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_007568a4:
      return *(undefined8 *)(param_1 + 0x108);
    }
    if (param_2 == 0xffffffff) goto LAB_00756898;
    if (param_2 == 0x1d) {
      return *(undefined8 *)(param_1 + 0xf8);
    }
  }
  else if ((int)param_2 < 0x20) {
    if (param_2 == 0x1e) {
      return *(undefined8 *)(param_1 + 0x100);
    }
    if (param_2 == 0x1f) goto LAB_007568a4;
  }
  else {
    if (param_2 == 0x22) {
      return *(undefined8 *)(param_1 + 0x118);
    }
    if (param_2 == 0x20) {
LAB_00756898:
      return *(undefined8 *)(param_1 + 0x110);
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_007a3898 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8);
}


// ===== 00756924  FUN_00756924 =====

void FUN_00756924(long param_1,uint param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_007a3898;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_0075698c:
      *(undefined8 *)(param_1 + 0x108) = param_3;
      return;
    }
    if (param_2 == 0xffffffff) goto LAB_00756980;
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
    if (param_2 == 0x1f) goto LAB_0075698c;
  }
  else {
    if (param_2 == 0x22) {
      *(undefined8 *)(param_1 + 0x118) = param_3;
      return;
    }
    if (param_2 == 0x20) {
LAB_00756980:
      *(undefined8 *)(param_1 + 0x110) = param_3;
      return;
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_007a3898 + 0x130),"libunwind: %s - %s\n","setRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8) = param_3;
  return;
}


// ===== 00756a0c  FUN_00756a0c =====

bool FUN_00756a0c(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffffffe0) == 0x40;
}


// ===== 00756a20  FUN_00756a20 =====

undefined1  [16] FUN_00756a20(long param_1,int param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + (long)param_2 * 8 + -0xe0);
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 00756a30  FUN_00756a30 =====

void FUN_00756a30(undefined8 param_1,long param_2,int param_3)

{
  *(undefined8 *)(param_2 + (long)param_3 * 8 + -0xe0) = param_1;
  return;
}


// ===== 00756a40  FUN_00756a40 =====

ulong FUN_00756a40(long *param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_240 [528];
  
  if ((*(byte *)(param_1 + 0x4d) & 1) != 0) {
    return 0;
  }
  if (*(char *)((long)param_1 + 0x26a) == '\0') {
    lVar1 = param_1[1];
    uVar4 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
    uVar3 = FUN_00756f20(lVar1,uVar4,param_1[0x4b],param_1 + 2,(long)param_1 + 0x269,param_2 & 1);
    iVar2 = (int)uVar3;
  }
  else {
    memset(auStack_240,0,0x210);
    uVar3 = FUN_00756e00(param_1,auStack_240);
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


// ===== 00756b30  FUN_00756b30 =====

void FUN_00756b30(long param_1,undefined8 *param_2)

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


// ===== 00756b74  FUN_00756b74 =====

void FUN_00756b74(long param_1)

{
  FUN_00759b08(param_1 + 0x10);
  return;
}


// ===== 00756b80  FUN_00756b80 =====

undefined1 FUN_00756b80(long param_1)

{
  return *(undefined1 *)(param_1 + 0x269);
}


// ===== 00756b8c  FUN_00756b8c =====

undefined8 FUN_00756b8c(long *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  return 0;
}


// ===== 00756bb8  FUN_00756bb8 =====

void FUN_00756bb8(long *param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  int *piVar6;
  undefined *puVar7;
  ulong uVar8;
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
    uVar8 = lVar3 - (param_2 & 1);
    local_648 = uVar8;
    iVar2 = dl_iterate_phdr(FUN_0075945c,&local_658);
    if (((iVar2 != 0) && (local_678 != 0)) &&
       (uVar4 = FUN_00759188(param_1,uVar8,auStack_688,0), (uVar4 & 1) != 0)) {
      return;
    }
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_007b196c);
    for (puVar7 = PTR_DAT_007aab90; puVar7 < PTR_DAT_007aab98; puVar7 = puVar7 + 0x20) {
      if ((*(ulong *)(puVar7 + 8) <= uVar8) && (uVar8 < *(ulong *)(puVar7 + 0x10))) {
        lVar3 = *(long *)(puVar7 + 0x18);
        pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_007b196c);
        if ((lVar3 != 0) &&
           (lVar3 = FUN_00756390(param_1[1],lVar3,&local_6b8,auStack_6f0,0), lVar3 == 0)) {
          memset(&local_658,0,0x618);
          uVar8 = FUN_007573b4(param_1[1],&local_6b8,auStack_6f0,uVar8,4,&local_658);
          if ((uVar8 & 1) != 0) {
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
        goto LAB_00756d30;
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_007b196c);
LAB_00756d30:
    piVar5 = (int *)(**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
    if (piVar5 != (int *)0x0) {
      piVar6 = (int *)__errno();
      iVar2 = *piVar6;
      syscall(0x87,0xffffffff,piVar5,0,8);
      iVar1 = *piVar6;
      *piVar6 = iVar2;
      if (((iVar1 != 0xe) && (*piVar5 == -0x2d7fee98)) && (piVar5[1] == -0x2bffffff)) {
        param_1[0x4c] = 0;
        param_1[0x45] = (long)(piVar5 + 1);
        param_1[0x44] = (long)piVar5;
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


