// ===== 009fcbec  cxxbridge1$unique_ptr$std$vector$i32$drop =====

void cxxbridge1_unique_ptr_std_vector_i32_drop(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    pvVar1 = (void *)*puVar2;
    if (pvVar1 != (void *)0x0) {
      puVar2[1] = pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(puVar2);
    return;
  }
  return;
}


// ===== 009fcc30  cxxbridge1$std$vector$i64$new =====

void cxxbridge1_std_vector_i64_new(void)

{
  undefined8 *puVar1;
  
                    /* try { // try from 009fcc38 to 009fcc3f has its CatchHandler @ 009fcc50 */
  puVar1 = (undefined8 *)operator_new(0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return;
}


// ===== 009fcc54  cxxbridge1$std$vector$i64$size =====

long cxxbridge1_std_vector_i64_size(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}


// ===== 009fcc64  cxxbridge1$std$vector$i64$capacity =====

long cxxbridge1_std_vector_i64_capacity(long *param_1)

{
  return param_1[2] - *param_1 >> 3;
}


// ===== 009fcc78  cxxbridge1$std$vector$i64$get_unchecked =====

long cxxbridge1_std_vector_i64_get_unchecked(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}


// ===== 009fcc84  cxxbridge1$std$vector$i64$reserve =====

void cxxbridge1_std_vector_i64_reserve(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar11 = (undefined8 *)*param_1;
  if (param_2 <= (ulong)(param_1[2] - (long)puVar11 >> 3)) {
    return;
  }
  if (param_2 >> 0x3d != 0) {
    FUN_00a009b4(param_1);
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009fccc0 with catch @ 009fcd8c
                        */
    FUN_00ab7c24();
  }
  puVar12 = (undefined8 *)param_1[1];
                    /* try { // try from 009fccc0 to 009fcd8b has its CatchHandler @ 009fcd8c */
  pvVar5 = operator_new(param_2 << 3);
  lVar3 = (long)puVar12 - (long)puVar11;
  puVar2 = (undefined8 *)((long)pvVar5 + lVar3);
  puVar6 = puVar2;
  if (lVar3 != 0) {
    if ((0x17 < lVar3 - 8U) && (0x1f < (ulong)((long)puVar11 - (long)pvVar5))) {
      puVar8 = puVar12 + -2;
      uVar1 = (lVar3 - 8U >> 3) + 1;
      puVar9 = (undefined8 *)((long)pvVar5 + ((long)puVar8 - (long)puVar11));
      uVar7 = uVar1 & 0x3ffffffffffffffc;
      puVar12 = puVar12 + -uVar7;
      puVar6 = puVar2 + -uVar7;
      uVar10 = uVar7;
      do {
        puVar4 = puVar8 + -1;
        uVar15 = puVar8[-2];
        uVar14 = puVar8[1];
        uVar13 = *puVar8;
        uVar10 = uVar10 - 4;
        puVar8 = puVar8 + -4;
        puVar9[-1] = *puVar4;
        puVar9[-2] = uVar15;
        puVar9[1] = uVar14;
        *puVar9 = uVar13;
        puVar9 = puVar9 + -4;
      } while (uVar10 != 0);
      if (uVar1 == uVar7) goto LAB_009fcd54;
    }
    do {
      puVar12 = puVar12 + -1;
      puVar6 = puVar6 + -1;
      *puVar6 = *puVar12;
    } while (puVar12 != puVar11);
  }
LAB_009fcd54:
  *param_1 = (long)puVar6;
  param_1[1] = (long)puVar2;
  param_1[2] = (long)((long)pvVar5 + param_2 * 8);
  if (puVar11 == (undefined8 *)0x0) {
    return;
  }
  operator_delete(puVar11);
  return;
}


// ===== 009fcd90  cxxbridge1$unique_ptr$std$vector$i64$null =====

void cxxbridge1_unique_ptr_std_vector_i64_null(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 009fcd98  cxxbridge1$unique_ptr$std$vector$i64$raw =====

void cxxbridge1_unique_ptr_std_vector_i64_raw(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}


// ===== 009fcda0  cxxbridge1$unique_ptr$std$vector$i64$get =====

undefined8 cxxbridge1_unique_ptr_std_vector_i64_get(undefined8 *param_1)

{
  return *param_1;
}


// ===== 009fcda8  cxxbridge1$unique_ptr$std$vector$i64$release =====

undefined8 cxxbridge1_unique_ptr_std_vector_i64_release(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  return uVar1;
}


// ===== 009fcdb8  cxxbridge1$unique_ptr$std$vector$i64$drop =====

void cxxbridge1_unique_ptr_std_vector_i64_drop(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    pvVar1 = (void *)*puVar2;
    if (pvVar1 != (void *)0x0) {
      puVar2[1] = pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(puVar2);
    return;
  }
  return;
}


// ===== 009fcdfc  cxxbridge1$std$vector$f32$new =====

void cxxbridge1_std_vector_f32_new(void)

{
  undefined8 *puVar1;
  
                    /* try { // try from 009fce04 to 009fce0b has its CatchHandler @ 009fce1c */
  puVar1 = (undefined8 *)operator_new(0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return;
}


// ===== 009fce20  cxxbridge1$std$vector$f32$size =====

long cxxbridge1_std_vector_f32_size(long *param_1)

{
  return param_1[1] - *param_1 >> 2;
}


// ===== 009fce30  cxxbridge1$std$vector$f32$capacity =====

long cxxbridge1_std_vector_f32_capacity(long *param_1)

{
  return param_1[2] - *param_1 >> 2;
}


// ===== 009fce44  cxxbridge1$std$vector$f32$get_unchecked =====

long cxxbridge1_std_vector_f32_get_unchecked(long *param_1,long param_2)

{
  return *param_1 + param_2 * 4;
}


// ===== 009fce50  cxxbridge1$std$vector$f32$reserve =====

void cxxbridge1_std_vector_f32_reserve(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar11 = (undefined4 *)*param_1;
  if (param_2 <= (ulong)(param_1[2] - (long)puVar11 >> 2)) {
    return;
  }
  if (param_2 >> 0x3e != 0) {
    FUN_00a009c8(param_1);
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009fce8c with catch @ 009fcf58
                        */
    FUN_00ab7c24();
  }
  puVar12 = (undefined4 *)param_1[1];
                    /* try { // try from 009fce8c to 009fcf57 has its CatchHandler @ 009fcf58 */
  pvVar5 = operator_new(param_2 << 2);
  lVar3 = (long)puVar12 - (long)puVar11;
  puVar2 = (undefined4 *)((long)pvVar5 + lVar3);
  puVar6 = puVar2;
  if (lVar3 != 0) {
    if ((0x1b < lVar3 - 4U) && (0x1f < (ulong)((long)puVar11 - (long)pvVar5))) {
      puVar8 = (undefined8 *)(puVar12 + -4);
      uVar1 = (lVar3 - 4U >> 2) + 1;
      puVar9 = (undefined8 *)((long)pvVar5 + ((long)puVar8 - (long)puVar11));
      uVar7 = uVar1 & 0x7ffffffffffffff8;
      puVar12 = puVar12 + -uVar7;
      puVar6 = puVar2 + -uVar7;
      uVar10 = uVar7;
      do {
        puVar4 = puVar8 + -1;
        uVar15 = puVar8[-2];
        uVar14 = puVar8[1];
        uVar13 = *puVar8;
        uVar10 = uVar10 - 8;
        puVar8 = puVar8 + -4;
        puVar9[-1] = *puVar4;
        puVar9[-2] = uVar15;
        puVar9[1] = uVar14;
        *puVar9 = uVar13;
        puVar9 = puVar9 + -4;
      } while (uVar10 != 0);
      if (uVar1 == uVar7) goto LAB_009fcf20;
    }
    do {
      puVar12 = puVar12 + -1;
      puVar6 = puVar6 + -1;
      *puVar6 = *puVar12;
    } while (puVar12 != puVar11);
  }
LAB_009fcf20:
  *param_1 = (long)puVar6;
  param_1[1] = (long)puVar2;
  param_1[2] = (long)((long)pvVar5 + param_2 * 4);
  if (puVar11 == (undefined4 *)0x0) {
    return;
  }
  operator_delete(puVar11);
  return;
}


// ===== 009fcf5c  cxxbridge1$unique_ptr$std$vector$f32$null =====

void cxxbridge1_unique_ptr_std_vector_f32_null(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 009fcf64  cxxbridge1$unique_ptr$std$vector$f32$raw =====

void cxxbridge1_unique_ptr_std_vector_f32_raw(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}


// ===== 009fcf6c  cxxbridge1$unique_ptr$std$vector$f32$get =====

undefined8 cxxbridge1_unique_ptr_std_vector_f32_get(undefined8 *param_1)

{
  return *param_1;
}


// ===== 009fcf74  cxxbridge1$unique_ptr$std$vector$f32$release =====

undefined8 cxxbridge1_unique_ptr_std_vector_f32_release(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  return uVar1;
}


// ===== 009fcf84  cxxbridge1$unique_ptr$std$vector$f32$drop =====

void cxxbridge1_unique_ptr_std_vector_f32_drop(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    pvVar1 = (void *)*puVar2;
    if (pvVar1 != (void *)0x0) {
      puVar2[1] = pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(puVar2);
    return;
  }
  return;
}


// ===== 009fcfc8  cxxbridge1$std$vector$f64$new =====

void cxxbridge1_std_vector_f64_new(void)

{
  undefined8 *puVar1;
  
                    /* try { // try from 009fcfd0 to 009fcfd7 has its CatchHandler @ 009fcfe8 */
  puVar1 = (undefined8 *)operator_new(0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return;
}


// ===== 009fcfec  cxxbridge1$std$vector$f64$size =====

long cxxbridge1_std_vector_f64_size(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}


// ===== 009fcffc  cxxbridge1$std$vector$f64$capacity =====

long cxxbridge1_std_vector_f64_capacity(long *param_1)

{
  return param_1[2] - *param_1 >> 3;
}


// ===== 009fd010  cxxbridge1$std$vector$f64$get_unchecked =====

long cxxbridge1_std_vector_f64_get_unchecked(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}


// ===== 009fd01c  cxxbridge1$std$vector$f64$reserve =====

void cxxbridge1_std_vector_f64_reserve(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar11 = (undefined8 *)*param_1;
  if (param_2 <= (ulong)(param_1[2] - (long)puVar11 >> 3)) {
    return;
  }
  if (param_2 >> 0x3d != 0) {
    FUN_00a009dc(param_1);
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009fd058 with catch @ 009fd124
                        */
    FUN_00ab7c24();
  }
  puVar12 = (undefined8 *)param_1[1];
                    /* try { // try from 009fd058 to 009fd123 has its CatchHandler @ 009fd124 */
  pvVar5 = operator_new(param_2 << 3);
  lVar3 = (long)puVar12 - (long)puVar11;
  puVar2 = (undefined8 *)((long)pvVar5 + lVar3);
  puVar6 = puVar2;
  if (lVar3 != 0) {
    if ((0x17 < lVar3 - 8U) && (0x1f < (ulong)((long)puVar11 - (long)pvVar5))) {
      puVar8 = puVar12 + -2;
      uVar1 = (lVar3 - 8U >> 3) + 1;
      puVar9 = (undefined8 *)((long)pvVar5 + ((long)puVar8 - (long)puVar11));
      uVar7 = uVar1 & 0x3ffffffffffffffc;
      puVar12 = puVar12 + -uVar7;
      puVar6 = puVar2 + -uVar7;
      uVar10 = uVar7;
      do {
        puVar4 = puVar8 + -1;
        uVar15 = puVar8[-2];
        uVar14 = puVar8[1];
        uVar13 = *puVar8;
        uVar10 = uVar10 - 4;
        puVar8 = puVar8 + -4;
        puVar9[-1] = *puVar4;
        puVar9[-2] = uVar15;
        puVar9[1] = uVar14;
        *puVar9 = uVar13;
        puVar9 = puVar9 + -4;
      } while (uVar10 != 0);
      if (uVar1 == uVar7) goto LAB_009fd0ec;
    }
    do {
      puVar12 = puVar12 + -1;
      puVar6 = puVar6 + -1;
      *puVar6 = *puVar12;
    } while (puVar12 != puVar11);
  }
LAB_009fd0ec:
  *param_1 = (long)puVar6;
  param_1[1] = (long)puVar2;
  param_1[2] = (long)((long)pvVar5 + param_2 * 8);
  if (puVar11 == (undefined8 *)0x0) {
    return;
  }
  operator_delete(puVar11);
  return;
}


// ===== 009fd128  cxxbridge1$unique_ptr$std$vector$f64$null =====

void cxxbridge1_unique_ptr_std_vector_f64_null(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 009fd130  cxxbridge1$unique_ptr$std$vector$f64$raw =====

void cxxbridge1_unique_ptr_std_vector_f64_raw(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}


// ===== 009fd138  cxxbridge1$unique_ptr$std$vector$f64$get =====

undefined8 cxxbridge1_unique_ptr_std_vector_f64_get(undefined8 *param_1)

{
  return *param_1;
}


// ===== 009fd140  cxxbridge1$unique_ptr$std$vector$f64$release =====

undefined8 cxxbridge1_unique_ptr_std_vector_f64_release(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  return uVar1;
}


// ===== 009fd150  cxxbridge1$unique_ptr$std$vector$f64$drop =====

void cxxbridge1_unique_ptr_std_vector_f64_drop(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    pvVar1 = (void *)*puVar2;
    if (pvVar1 != (void *)0x0) {
      puVar2[1] = pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(puVar2);
    return;
  }
  return;
}


// ===== 009fd194  cxxbridge1$std$vector$usize$new =====

void cxxbridge1_std_vector_usize_new(void)

{
  undefined8 *puVar1;
  
                    /* try { // try from 009fd19c to 009fd1a3 has its CatchHandler @ 009fd1b4 */
  puVar1 = (undefined8 *)operator_new(0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return;
}


// ===== 009fd1b8  cxxbridge1$std$vector$usize$size =====

long cxxbridge1_std_vector_usize_size(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}


// ===== 009fd1c8  cxxbridge1$std$vector$usize$capacity =====

long cxxbridge1_std_vector_usize_capacity(long *param_1)

{
  return param_1[2] - *param_1 >> 3;
}


// ===== 009fd1dc  cxxbridge1$std$vector$usize$get_unchecked =====

long cxxbridge1_std_vector_usize_get_unchecked(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}


// ===== 009fd1e8  cxxbridge1$std$vector$usize$reserve =====

void cxxbridge1_std_vector_usize_reserve(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar11 = (undefined8 *)*param_1;
  if (param_2 <= (ulong)(param_1[2] - (long)puVar11 >> 3)) {
    return;
  }
  if (param_2 >> 0x3d != 0) {
    FUN_00a00964(param_1);
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009fd224 with catch @ 009fd2f0
                        */
    FUN_00ab7c24();
  }
  puVar12 = (undefined8 *)param_1[1];
                    /* try { // try from 009fd224 to 009fd2ef has its CatchHandler @ 009fd2f0 */
  pvVar5 = operator_new(param_2 << 3);
  lVar3 = (long)puVar12 - (long)puVar11;
  puVar2 = (undefined8 *)((long)pvVar5 + lVar3);
  puVar6 = puVar2;
  if (lVar3 != 0) {
    if ((0x17 < lVar3 - 8U) && (0x1f < (ulong)((long)puVar11 - (long)pvVar5))) {
      puVar8 = puVar12 + -2;
      uVar1 = (lVar3 - 8U >> 3) + 1;
      puVar9 = (undefined8 *)((long)pvVar5 + ((long)puVar8 - (long)puVar11));
      uVar7 = uVar1 & 0x3ffffffffffffffc;
      puVar12 = puVar12 + -uVar7;
      puVar6 = puVar2 + -uVar7;
      uVar10 = uVar7;
      do {
        puVar4 = puVar8 + -1;
        uVar15 = puVar8[-2];
        uVar14 = puVar8[1];
        uVar13 = *puVar8;
        uVar10 = uVar10 - 4;
        puVar8 = puVar8 + -4;
        puVar9[-1] = *puVar4;
        puVar9[-2] = uVar15;
        puVar9[1] = uVar14;
        *puVar9 = uVar13;
        puVar9 = puVar9 + -4;
      } while (uVar10 != 0);
      if (uVar1 == uVar7) goto LAB_009fd2b8;
    }
    do {
      puVar12 = puVar12 + -1;
      puVar6 = puVar6 + -1;
      *puVar6 = *puVar12;
    } while (puVar12 != puVar11);
  }
LAB_009fd2b8:
  *param_1 = (long)puVar6;
  param_1[1] = (long)puVar2;
  param_1[2] = (long)((long)pvVar5 + param_2 * 8);
  if (puVar11 == (undefined8 *)0x0) {
    return;
  }
  operator_delete(puVar11);
  return;
}


// ===== 009fd2f4  cxxbridge1$unique_ptr$std$vector$usize$null =====

void cxxbridge1_unique_ptr_std_vector_usize_null(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 009fd2fc  cxxbridge1$unique_ptr$std$vector$usize$raw =====

void cxxbridge1_unique_ptr_std_vector_usize_raw(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}


// ===== 009fd304  cxxbridge1$unique_ptr$std$vector$usize$get =====

undefined8 cxxbridge1_unique_ptr_std_vector_usize_get(undefined8 *param_1)

{
  return *param_1;
}


// ===== 009fd30c  cxxbridge1$unique_ptr$std$vector$usize$release =====

undefined8 cxxbridge1_unique_ptr_std_vector_usize_release(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  return uVar1;
}


// ===== 009fd31c  cxxbridge1$unique_ptr$std$vector$usize$drop =====

void cxxbridge1_unique_ptr_std_vector_usize_drop(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    pvVar1 = (void *)*puVar2;
    if (pvVar1 != (void *)0x0) {
      puVar2[1] = pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(puVar2);
    return;
  }
  return;
}


// ===== 009fd360  cxxbridge1$std$vector$isize$new =====

void cxxbridge1_std_vector_isize_new(void)

{
  undefined8 *puVar1;
  
                    /* try { // try from 009fd368 to 009fd36f has its CatchHandler @ 009fd380 */
  puVar1 = (undefined8 *)operator_new(0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return;
}


// ===== 009fd384  cxxbridge1$std$vector$isize$size =====

long cxxbridge1_std_vector_isize_size(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}


// ===== 009fd394  cxxbridge1$std$vector$isize$capacity =====

long cxxbridge1_std_vector_isize_capacity(long *param_1)

{
  return param_1[2] - *param_1 >> 3;
}


// ===== 009fd3a8  cxxbridge1$std$vector$isize$get_unchecked =====

long cxxbridge1_std_vector_isize_get_unchecked(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}


// ===== 009fd3b4  cxxbridge1$std$vector$isize$reserve =====

void cxxbridge1_std_vector_isize_reserve(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar11 = (undefined8 *)*param_1;
  if (param_2 <= (ulong)(param_1[2] - (long)puVar11 >> 3)) {
    return;
  }
  if (param_2 >> 0x3d != 0) {
    FUN_00a009b4(param_1);
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009fd3f0 with catch @ 009fd4bc
                        */
    FUN_00ab7c24();
  }
  puVar12 = (undefined8 *)param_1[1];
                    /* try { // try from 009fd3f0 to 009fd4bb has its CatchHandler @ 009fd4bc */
  pvVar5 = operator_new(param_2 << 3);
  lVar3 = (long)puVar12 - (long)puVar11;
  puVar2 = (undefined8 *)((long)pvVar5 + lVar3);
  puVar6 = puVar2;
  if (lVar3 != 0) {
    if ((0x17 < lVar3 - 8U) && (0x1f < (ulong)((long)puVar11 - (long)pvVar5))) {
      puVar8 = puVar12 + -2;
      uVar1 = (lVar3 - 8U >> 3) + 1;
      puVar9 = (undefined8 *)((long)pvVar5 + ((long)puVar8 - (long)puVar11));
      uVar7 = uVar1 & 0x3ffffffffffffffc;
      puVar12 = puVar12 + -uVar7;
      puVar6 = puVar2 + -uVar7;
      uVar10 = uVar7;
      do {
        puVar4 = puVar8 + -1;
        uVar15 = puVar8[-2];
        uVar14 = puVar8[1];
        uVar13 = *puVar8;
        uVar10 = uVar10 - 4;
        puVar8 = puVar8 + -4;
        puVar9[-1] = *puVar4;
        puVar9[-2] = uVar15;
        puVar9[1] = uVar14;
        *puVar9 = uVar13;
        puVar9 = puVar9 + -4;
      } while (uVar10 != 0);
      if (uVar1 == uVar7) goto LAB_009fd484;
    }
    do {
      puVar12 = puVar12 + -1;
      puVar6 = puVar6 + -1;
      *puVar6 = *puVar12;
    } while (puVar12 != puVar11);
  }
LAB_009fd484:
  *param_1 = (long)puVar6;
  param_1[1] = (long)puVar2;
  param_1[2] = (long)((long)pvVar5 + param_2 * 8);
  if (puVar11 == (undefined8 *)0x0) {
    return;
  }
  operator_delete(puVar11);
  return;
}


// ===== 009fd4c0  cxxbridge1$unique_ptr$std$vector$isize$null =====

void cxxbridge1_unique_ptr_std_vector_isize_null(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 009fd4c8  cxxbridge1$unique_ptr$std$vector$isize$raw =====

void cxxbridge1_unique_ptr_std_vector_isize_raw(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}


// ===== 009fd4d0  cxxbridge1$unique_ptr$std$vector$isize$get =====

undefined8 cxxbridge1_unique_ptr_std_vector_isize_get(undefined8 *param_1)

{
  return *param_1;
}


// ===== 009fd4d8  cxxbridge1$unique_ptr$std$vector$isize$release =====

undefined8 cxxbridge1_unique_ptr_std_vector_isize_release(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  return uVar1;
}


// ===== 009fd4e8  cxxbridge1$unique_ptr$std$vector$isize$drop =====

void cxxbridge1_unique_ptr_std_vector_isize_drop(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    pvVar1 = (void *)*puVar2;
    if (pvVar1 != (void *)0x0) {
      puVar2[1] = pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(puVar2);
    return;
  }
  return;
}


// ===== 009fd52c  cxxbridge1$std$vector$string$new =====

void cxxbridge1_std_vector_string_new(void)

{
  undefined8 *puVar1;
  
                    /* try { // try from 009fd534 to 009fd53b has its CatchHandler @ 009fd54c */
  puVar1 = (undefined8 *)operator_new(0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return;
}


// ===== 009fd550  cxxbridge1$std$vector$string$size =====

long cxxbridge1_std_vector_string_size(long *param_1)

{
  return (param_1[1] - *param_1 >> 3) * -0x5555555555555555;
}


// ===== 009fd56c  cxxbridge1$std$vector$string$capacity =====

long cxxbridge1_std_vector_string_capacity(long *param_1)

{
  return (param_1[2] - *param_1 >> 3) * -0x5555555555555555;
}


// ===== 009fd58c  cxxbridge1$std$vector$string$get_unchecked =====

long cxxbridge1_std_vector_string_get_unchecked(long *param_1,long param_2)

{
  return *param_1 + param_2 * 0x18;
}


// ===== 009fd5a0  cxxbridge1$std$vector$string$reserve =====

void cxxbridge1_std_vector_string_reserve(void)

{
                    /* try { // try from 009fd5a8 to 009fd5ab has its CatchHandler @ 009fd5b4 */
  FUN_009fd5b8();
  return;
}


// ===== 009fd5b8  FUN_009fd5b8 =====

void FUN_009fd5b8(long *param_1,ulong param_2)

{
  long lVar1;
  byte *pbVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  pbVar7 = (byte *)*param_1;
  if ((ulong)((param_1[2] - (long)pbVar7 >> 3) * -0x5555555555555555) < param_2) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      puVar4 = (undefined8 *)FUN_00a009f0(param_1);
      *puVar4 = 0;
      return;
    }
    pbVar8 = (byte *)param_1[1];
    pvVar3 = operator_new(param_2 * 0x18);
    lVar1 = (long)pvVar3 + ((long)pbVar8 - (long)pbVar7);
    pvVar3 = (void *)((long)pvVar3 + param_2 * 0x18);
    lVar5 = lVar1;
    if ((long)pbVar8 - (long)pbVar7 == 0) {
      *param_1 = lVar1;
      param_1[1] = lVar1;
      param_1[2] = (long)pvVar3;
    }
    else {
      do {
        uVar10 = *(undefined8 *)(pbVar8 + -0x10);
        uVar9 = *(undefined8 *)(pbVar8 + -0x18);
        *(undefined8 *)(lVar5 + -8) = *(undefined8 *)(pbVar8 + -8);
        pbVar6 = pbVar8 + -0x18;
        *(undefined8 *)(lVar5 + -0x10) = uVar10;
        *(undefined8 *)(lVar5 + -0x18) = uVar9;
        lVar5 = lVar5 + -0x18;
        pbVar8[-0x10] = 0;
        pbVar8[-0xf] = 0;
        pbVar8[-0xe] = 0;
        pbVar8[-0xd] = 0;
        pbVar8[-0xc] = 0;
        pbVar8[-0xb] = 0;
        pbVar8[-10] = 0;
        pbVar8[-9] = 0;
        pbVar8[-8] = 0;
        pbVar8[-7] = 0;
        pbVar8[-6] = 0;
        pbVar8[-5] = 0;
        pbVar8[-4] = 0;
        pbVar8[-3] = 0;
        pbVar8[-2] = 0;
        pbVar8[-1] = 0;
        pbVar8[-0x18] = 0;
        pbVar8[-0x17] = 0;
        pbVar8[-0x16] = 0;
        pbVar8[-0x15] = 0;
        pbVar8[-0x14] = 0;
        pbVar8[-0x13] = 0;
        pbVar8[-0x12] = 0;
        pbVar8[-0x11] = 0;
        pbVar8 = pbVar6;
      } while (pbVar6 != pbVar7);
      pbVar8 = (byte *)*param_1;
      pbVar7 = (byte *)param_1[1];
      *param_1 = lVar5;
      param_1[1] = lVar1;
      param_1[2] = (long)pvVar3;
      pbVar6 = pbVar7;
      while (pbVar2 = pbVar6, pbVar2 != pbVar8) {
        pbVar6 = pbVar2 + -0x18;
        pbVar7 = pbVar8;
        if ((*pbVar6 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -8));
        }
      }
    }
    if (pbVar7 != (byte *)0x0) {
      operator_delete(pbVar7);
      return;
    }
  }
  return;
}


// ===== 009fd6d4  cxxbridge1$unique_ptr$std$vector$string$null =====

void cxxbridge1_unique_ptr_std_vector_string_null(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 009fd6dc  cxxbridge1$unique_ptr$std$vector$string$raw =====

void cxxbridge1_unique_ptr_std_vector_string_raw(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}


// ===== 009fd6e4  cxxbridge1$unique_ptr$std$vector$string$get =====

undefined8 cxxbridge1_unique_ptr_std_vector_string_get(undefined8 *param_1)

{
  return *param_1;
}


// ===== 009fd6ec  cxxbridge1$unique_ptr$std$vector$string$release =====

undefined8 cxxbridge1_unique_ptr_std_vector_string_release(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  return uVar1;
}


// ===== 009fd6fc  cxxbridge1$unique_ptr$std$vector$string$drop =====

void cxxbridge1_unique_ptr_std_vector_string_drop(undefined8 *param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  puVar2 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  pbVar3 = (byte *)*puVar2;
  if (pbVar3 != (byte *)0x0) {
    pbVar1 = (byte *)puVar2[1];
    pbVar4 = pbVar3;
    if (pbVar1 != pbVar3) {
      do {
        pbVar4 = pbVar1 + -0x18;
        if ((*pbVar4 & 1) != 0) {
          operator_delete(*(void **)(pbVar1 + -8));
        }
        pbVar1 = pbVar4;
      } while (pbVar4 != pbVar3);
      pbVar4 = (byte *)*puVar2;
    }
    puVar2[1] = pbVar3;
    operator_delete(pbVar4);
  }
  operator_delete(puVar2);
  return;
}


// ===== 009fd788  cxxbridge1$std$vector$u8$push_back =====

void cxxbridge1_std_vector_u8_push_back(ulong *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar11 = (undefined1 *)param_1[1];
  if (puVar11 < (undefined1 *)param_1[2]) {
    puVar10 = puVar11 + 1;
    *puVar11 = *param_2;
    goto LAB_009fd90c;
  }
  puVar12 = (undefined1 *)*param_1;
  uVar13 = (long)puVar11 - (long)puVar12;
  uVar8 = uVar13 + 1;
  if ((long)uVar8 < 0) {
    FUN_00a00928(param_1);
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009fd7fc with catch @ 009fd930
                        */
    FUN_00ab7c24();
  }
  uVar3 = (long)param_1[2] - (long)puVar12;
  uVar5 = uVar3 * 2;
  if (uVar5 < uVar8 || uVar5 - uVar8 == 0) {
    uVar5 = uVar8;
  }
  if (0x3ffffffffffffffe < uVar3) {
    uVar5 = 0x7fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
                    /* try { // try from 009fd7fc to 009fd92f has its CatchHandler @ 009fd930 */
    pvVar2 = operator_new(uVar5);
  }
  puVar4 = (undefined1 *)((long)pvVar2 + uVar13);
  puVar10 = puVar4 + 1;
  *puVar4 = *param_2;
  if (puVar11 == puVar12) {
    *param_1 = (ulong)puVar4;
    param_1[1] = (ulong)puVar10;
    param_1[2] = (long)pvVar2 + uVar5;
  }
  else {
    if ((uVar13 < 8) || ((ulong)((long)puVar12 - (long)pvVar2) < 0x20)) {
LAB_009fd8e4:
      do {
        puVar4 = puVar4 + -1;
        puVar11 = puVar11 + -1;
        *puVar4 = *puVar11;
      } while (puVar11 != puVar12);
    }
    else if (uVar13 < 0x20) {
      uVar3 = 0;
LAB_009fd89c:
      uVar8 = uVar13 & 0xfffffffffffffff8;
      puVar9 = (undefined8 *)(puVar11 + (-8 - uVar3));
      puVar11 = puVar11 + -uVar8;
      puVar4 = puVar4 + -uVar8;
      lVar6 = uVar3 - uVar8;
      puVar7 = (undefined8 *)((long)pvVar2 + ((long)puVar9 - (long)puVar12));
      do {
        lVar6 = lVar6 + 8;
        *puVar7 = *puVar9;
        puVar9 = puVar9 + -1;
        puVar7 = puVar7 + -1;
      } while (lVar6 != 0);
      if (uVar13 != uVar8) goto LAB_009fd8e4;
    }
    else {
      puVar7 = (undefined8 *)(puVar11 + -0x10);
      uVar3 = uVar13 & 0xffffffffffffffe0;
      puVar9 = (undefined8 *)((long)pvVar2 + ((long)puVar7 - (long)puVar12));
      uVar8 = uVar3;
      do {
        puVar1 = puVar7 + -1;
        uVar16 = puVar7[-2];
        uVar15 = puVar7[1];
        uVar14 = *puVar7;
        uVar8 = uVar8 - 0x20;
        puVar7 = puVar7 + -4;
        puVar9[-1] = *puVar1;
        puVar9[-2] = uVar16;
        puVar9[1] = uVar15;
        *puVar9 = uVar14;
        puVar9 = puVar9 + -4;
      } while (uVar8 != 0);
      if (uVar13 != uVar3) {
        if ((uVar13 & 0x18) == 0) {
          puVar4 = puVar4 + -uVar3;
          puVar11 = puVar11 + -uVar3;
          goto LAB_009fd8e4;
        }
        goto LAB_009fd89c;
      }
    }
    puVar11 = (undefined1 *)*param_1;
    *param_1 = (ulong)pvVar2;
    param_1[1] = (ulong)puVar10;
    param_1[2] = (long)pvVar2 + uVar5;
  }
  if (puVar11 != (undefined1 *)0x0) {
    operator_delete(puVar11);
  }
LAB_009fd90c:
  param_1[1] = (ulong)puVar10;
  return;
}


// ===== 009fd934  cxxbridge1$std$vector$u8$pop_back =====

void cxxbridge1_std_vector_u8_pop_back(long param_1,undefined1 *param_2)

{
  *param_2 = *(undefined1 *)(*(long *)(param_1 + 8) + -1);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -1;
  return;
}


// ===== 009fd950  cxxbridge1$std$vector$u16$push_back =====

void cxxbridge1_std_vector_u16_push_back(long *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined2 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  long lVar13;
  undefined2 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar12 = (undefined2 *)param_1[1];
  if (puVar12 < (undefined2 *)param_1[2]) {
    puVar14 = puVar12 + 1;
    *puVar12 = *param_2;
    goto LAB_009fda88;
  }
  puVar11 = (undefined2 *)*param_1;
  lVar13 = (long)puVar12 - (long)puVar11 >> 1;
  if (lVar13 == -2 || lVar13 + 2 < 0 != SCARRY8(lVar13,2)) {
    FUN_00a0093c(param_1);
LAB_009fdac0:
    FUN_00a008f4();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009fd9d0 with catch @ 009fdac4
                        */
    FUN_00ab7c24();
  }
  uVar5 = param_1[2] - (long)puVar11;
  uVar6 = uVar5;
  if (uVar5 <= lVar13 + 1U) {
    uVar6 = lVar13 + 1;
  }
  if (0x7ffffffffffffffd < uVar5) {
    uVar6 = 0x7fffffffffffffff;
  }
  if (uVar6 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if ((long)uVar6 < 0) goto LAB_009fdac0;
                    /* try { // try from 009fd9d0 to 009fdac3 has its CatchHandler @ 009fdac4 */
    pvVar4 = operator_new(uVar6 << 1);
  }
  puVar1 = (undefined2 *)((long)pvVar4 + lVar13 * 2);
  pvVar2 = (void *)((long)pvVar4 + uVar6 * 2);
  puVar14 = puVar1 + 1;
  *puVar1 = *param_2;
  if ((long)puVar12 - (long)puVar11 == 0) {
    *param_1 = (long)puVar1;
    param_1[1] = (long)puVar14;
    param_1[2] = (long)pvVar2;
  }
  else {
    uVar6 = ((long)puVar12 - (long)puVar11) - 2;
    puVar7 = puVar1;
    if ((uVar6 < 0x1e) ||
       ((ulong)((long)puVar12 + (-((long)puVar12 - (long)puVar11) - (long)pvVar4)) < 0x20)) {
LAB_009fda64:
      do {
        puVar12 = puVar12 + -1;
        puVar7 = puVar7 + -1;
        *puVar7 = *puVar12;
      } while (puVar12 != puVar11);
    }
    else {
      puVar10 = (undefined8 *)(puVar12 + -8);
      uVar6 = (uVar6 >> 1) + 1;
      uVar9 = uVar6 & 0xfffffffffffffff0;
      puVar12 = puVar12 + -uVar9;
      puVar7 = puVar1 + -uVar9;
      puVar8 = (undefined8 *)(puVar1 + -8);
      uVar5 = uVar9;
      do {
        puVar3 = puVar10 + -1;
        uVar17 = puVar10[-2];
        uVar16 = puVar10[1];
        uVar15 = *puVar10;
        uVar5 = uVar5 - 0x10;
        puVar10 = puVar10 + -4;
        puVar8[-1] = *puVar3;
        puVar8[-2] = uVar17;
        puVar8[1] = uVar16;
        *puVar8 = uVar15;
        puVar8 = puVar8 + -4;
      } while (uVar5 != 0);
      if (uVar6 != uVar9) goto LAB_009fda64;
    }
    *param_1 = (long)puVar7;
    param_1[1] = (long)puVar14;
    param_1[2] = (long)pvVar2;
  }
  if (puVar11 != (undefined2 *)0x0) {
    operator_delete(puVar11);
  }
LAB_009fda88:
  param_1[1] = (long)puVar14;
  return;
}


// ===== 009fdac8  cxxbridge1$std$vector$u16$pop_back =====

void cxxbridge1_std_vector_u16_pop_back(long param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  
  puVar2 = (undefined2 *)(*(long *)(param_1 + 8) + -2);
  uVar1 = *puVar2;
  *(undefined2 **)(param_1 + 8) = puVar2;
  *param_2 = uVar1;
  return;
}


// ===== 009fdadc  cxxbridge1$std$vector$u32$push_back =====

void cxxbridge1_std_vector_u32_push_back(long *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar12 = (undefined4 *)param_1[1];
  if (puVar12 < (undefined4 *)param_1[2]) {
    puVar14 = puVar12 + 1;
    *puVar12 = *param_2;
    goto LAB_009fdc1c;
  }
  puVar11 = (undefined4 *)*param_1;
  lVar13 = (long)puVar12 - (long)puVar11 >> 2;
  uVar6 = lVar13 + 1;
  if (uVar6 >> 0x3e != 0) {
    FUN_00a00950(param_1);
LAB_009fdc54:
    FUN_00a008f4();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009fdb64 with catch @ 009fdc58
                        */
    FUN_00ab7c24();
  }
  uVar5 = param_1[2] - (long)puVar11;
  uVar8 = (long)uVar5 >> 1;
  if (uVar8 <= uVar6) {
    uVar8 = uVar6;
  }
  if (0x7ffffffffffffffb < uVar5) {
    uVar8 = 0x3fffffffffffffff;
  }
  if (uVar8 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (uVar8 >> 0x3e != 0) goto LAB_009fdc54;
                    /* try { // try from 009fdb64 to 009fdc57 has its CatchHandler @ 009fdc58 */
    pvVar4 = operator_new(uVar8 << 2);
  }
  puVar1 = (undefined4 *)((long)pvVar4 + lVar13 * 4);
  pvVar2 = (void *)((long)pvVar4 + uVar8 * 4);
  puVar14 = puVar1 + 1;
  *puVar1 = *param_2;
  if ((long)puVar12 - (long)puVar11 == 0) {
    *param_1 = (long)puVar1;
    param_1[1] = (long)puVar14;
    param_1[2] = (long)pvVar2;
  }
  else {
    uVar6 = ((long)puVar12 - (long)puVar11) - 4;
    puVar7 = puVar1;
    if ((uVar6 < 0x1c) ||
       ((ulong)((long)puVar12 + (-((long)puVar12 - (long)puVar11) - (long)pvVar4)) < 0x20)) {
LAB_009fdbf8:
      do {
        puVar12 = puVar12 + -1;
        puVar7 = puVar7 + -1;
        *puVar7 = *puVar12;
      } while (puVar12 != puVar11);
    }
    else {
      puVar10 = (undefined8 *)(puVar12 + -4);
      uVar6 = (uVar6 >> 2) + 1;
      uVar5 = uVar6 & 0x7ffffffffffffff8;
      puVar12 = puVar12 + -uVar5;
      puVar7 = puVar1 + -uVar5;
      puVar9 = (undefined8 *)(puVar1 + -4);
      uVar8 = uVar5;
      do {
        puVar3 = puVar10 + -1;
        uVar17 = puVar10[-2];
        uVar16 = puVar10[1];
        uVar15 = *puVar10;
        uVar8 = uVar8 - 8;
        puVar10 = puVar10 + -4;
        puVar9[-1] = *puVar3;
        puVar9[-2] = uVar17;
        puVar9[1] = uVar16;
        *puVar9 = uVar15;
        puVar9 = puVar9 + -4;
      } while (uVar8 != 0);
      if (uVar6 != uVar5) goto LAB_009fdbf8;
    }
    *param_1 = (long)puVar7;
    param_1[1] = (long)puVar14;
    param_1[2] = (long)pvVar2;
  }
  if (puVar11 != (undefined4 *)0x0) {
    operator_delete(puVar11);
  }
LAB_009fdc1c:
  param_1[1] = (long)puVar14;
  return;
}


// ===== 009fdc5c  cxxbridge1$std$vector$u32$pop_back =====

void cxxbridge1_std_vector_u32_pop_back(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(*(long *)(param_1 + 8) + -4);
  uVar1 = *puVar2;
  *(undefined4 **)(param_1 + 8) = puVar2;
  *param_2 = uVar1;
  return;
}


// ===== 009fdc70  cxxbridge1$std$vector$u64$push_back =====

void cxxbridge1_std_vector_u64_push_back(long *param_1,undefined8 *param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar11 = (undefined8 *)param_1[1];
  if (puVar11 < (undefined8 *)param_1[2]) {
    puVar13 = puVar11 + 1;
    *puVar11 = *param_2;
    goto LAB_009fddb0;
  }
  puVar10 = (undefined8 *)*param_1;
  lVar12 = (long)puVar11 - (long)puVar10 >> 3;
  uVar5 = lVar12 + 1;
  if (uVar5 >> 0x3d != 0) {
    FUN_00a00964(param_1);
LAB_009fdde8:
    FUN_00a008f4();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009fdcf8 with catch @ 009fddec
                        */
    FUN_00ab7c24();
  }
  uVar4 = param_1[2] - (long)puVar10;
  uVar7 = (long)uVar4 >> 2;
  if (uVar7 <= uVar5) {
    uVar7 = uVar5;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar7 = 0x1fffffffffffffff;
  }
  if (uVar7 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar7 >> 0x3d != 0) goto LAB_009fdde8;
                    /* try { // try from 009fdcf8 to 009fddeb has its CatchHandler @ 009fddec */
    pvVar3 = operator_new(uVar7 << 3);
  }
  puVar8 = (undefined8 *)((long)pvVar3 + lVar12 * 8);
  pvVar1 = (void *)((long)pvVar3 + uVar7 * 8);
  puVar13 = puVar8 + 1;
  *puVar8 = *param_2;
  if ((long)puVar11 - (long)puVar10 == 0) {
    *param_1 = (long)puVar8;
    param_1[1] = (long)puVar13;
    param_1[2] = (long)pvVar1;
  }
  else {
    uVar5 = ((long)puVar11 - (long)puVar10) - 8;
    puVar6 = puVar8;
    if ((uVar5 < 0x38) ||
       ((ulong)((long)puVar11 + (-((long)puVar11 - (long)puVar10) - (long)pvVar3)) < 0x20)) {
LAB_009fdd8c:
      do {
        puVar11 = puVar11 + -1;
        puVar6 = puVar6 + -1;
        *puVar6 = *puVar11;
      } while (puVar11 != puVar10);
    }
    else {
      puVar9 = puVar11 + -2;
      uVar5 = (uVar5 >> 3) + 1;
      uVar4 = uVar5 & 0x3ffffffffffffffc;
      puVar11 = puVar11 + -uVar4;
      puVar6 = puVar8 + -uVar4;
      puVar8 = puVar8 + -2;
      uVar7 = uVar4;
      do {
        puVar2 = puVar9 + -1;
        uVar16 = puVar9[-2];
        uVar15 = puVar9[1];
        uVar14 = *puVar9;
        uVar7 = uVar7 - 4;
        puVar9 = puVar9 + -4;
        puVar8[-1] = *puVar2;
        puVar8[-2] = uVar16;
        puVar8[1] = uVar15;
        *puVar8 = uVar14;
        puVar8 = puVar8 + -4;
      } while (uVar7 != 0);
      if (uVar5 != uVar4) goto LAB_009fdd8c;
    }
    *param_1 = (long)puVar6;
    param_1[1] = (long)puVar13;
    param_1[2] = (long)pvVar1;
  }
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_009fddb0:
  param_1[1] = (long)puVar13;
  return;
}


// ===== 009fddf0  cxxbridge1$std$vector$u64$pop_back =====

void cxxbridge1_std_vector_u64_pop_back(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + -8);
  uVar2 = *puVar1;
  *(undefined8 **)(param_1 + 8) = puVar1;
  *param_2 = uVar2;
  return;
}


// ===== 009fde04  cxxbridge1$std$vector$i8$push_back =====

void cxxbridge1_std_vector_i8_push_back(ulong *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar11 = (undefined1 *)param_1[1];
  if (puVar11 < (undefined1 *)param_1[2]) {
    puVar10 = puVar11 + 1;
    *puVar11 = *param_2;
    goto LAB_009fdf88;
  }
  puVar12 = (undefined1 *)*param_1;
  uVar13 = (long)puVar11 - (long)puVar12;
  uVar8 = uVar13 + 1;
  if ((long)uVar8 < 0) {
    FUN_00a00978(param_1);
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009fde78 with catch @ 009fdfac
                        */
    FUN_00ab7c24();
  }
  uVar3 = (long)param_1[2] - (long)puVar12;
  uVar5 = uVar3 * 2;
  if (uVar5 < uVar8 || uVar5 - uVar8 == 0) {
    uVar5 = uVar8;
  }
  if (0x3ffffffffffffffe < uVar3) {
    uVar5 = 0x7fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
                    /* try { // try from 009fde78 to 009fdfab has its CatchHandler @ 009fdfac */
    pvVar2 = operator_new(uVar5);
  }
  puVar4 = (undefined1 *)((long)pvVar2 + uVar13);
  puVar10 = puVar4 + 1;
  *puVar4 = *param_2;
  if (puVar11 == puVar12) {
    *param_1 = (ulong)puVar4;
    param_1[1] = (ulong)puVar10;
    param_1[2] = (long)pvVar2 + uVar5;
  }
  else {
    if ((uVar13 < 8) || ((ulong)((long)puVar12 - (long)pvVar2) < 0x20)) {
LAB_009fdf60:
      do {
        puVar4 = puVar4 + -1;
        puVar11 = puVar11 + -1;
        *puVar4 = *puVar11;
      } while (puVar11 != puVar12);
    }
    else if (uVar13 < 0x20) {
      uVar3 = 0;
LAB_009fdf18:
      uVar8 = uVar13 & 0xfffffffffffffff8;
      puVar9 = (undefined8 *)(puVar11 + (-8 - uVar3));
      puVar11 = puVar11 + -uVar8;
      puVar4 = puVar4 + -uVar8;
      lVar6 = uVar3 - uVar8;
      puVar7 = (undefined8 *)((long)pvVar2 + ((long)puVar9 - (long)puVar12));
      do {
        lVar6 = lVar6 + 8;
        *puVar7 = *puVar9;
        puVar9 = puVar9 + -1;
        puVar7 = puVar7 + -1;
      } while (lVar6 != 0);
      if (uVar13 != uVar8) goto LAB_009fdf60;
    }
    else {
      puVar7 = (undefined8 *)(puVar11 + -0x10);
      uVar3 = uVar13 & 0xffffffffffffffe0;
      puVar9 = (undefined8 *)((long)pvVar2 + ((long)puVar7 - (long)puVar12));
      uVar8 = uVar3;
      do {
        puVar1 = puVar7 + -1;
        uVar16 = puVar7[-2];
        uVar15 = puVar7[1];
        uVar14 = *puVar7;
        uVar8 = uVar8 - 0x20;
        puVar7 = puVar7 + -4;
        puVar9[-1] = *puVar1;
        puVar9[-2] = uVar16;
        puVar9[1] = uVar15;
        *puVar9 = uVar14;
        puVar9 = puVar9 + -4;
      } while (uVar8 != 0);
      if (uVar13 != uVar3) {
        if ((uVar13 & 0x18) == 0) {
          puVar4 = puVar4 + -uVar3;
          puVar11 = puVar11 + -uVar3;
          goto LAB_009fdf60;
        }
        goto LAB_009fdf18;
      }
    }
    puVar11 = (undefined1 *)*param_1;
    *param_1 = (ulong)pvVar2;
    param_1[1] = (ulong)puVar10;
    param_1[2] = (long)pvVar2 + uVar5;
  }
  if (puVar11 != (undefined1 *)0x0) {
    operator_delete(puVar11);
  }
LAB_009fdf88:
  param_1[1] = (ulong)puVar10;
  return;
}


// ===== 009fdfb0  cxxbridge1$std$vector$i8$pop_back =====

void cxxbridge1_std_vector_i8_pop_back(long param_1,undefined1 *param_2)

{
  *param_2 = *(undefined1 *)(*(long *)(param_1 + 8) + -1);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -1;
  return;
}


// ===== 009fdfcc  cxxbridge1$std$vector$i16$push_back =====

void cxxbridge1_std_vector_i16_push_back(long *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined2 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  long lVar13;
  undefined2 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar12 = (undefined2 *)param_1[1];
  if (puVar12 < (undefined2 *)param_1[2]) {
    puVar14 = puVar12 + 1;
    *puVar12 = *param_2;
    goto LAB_009fe104;
  }
  puVar11 = (undefined2 *)*param_1;
  lVar13 = (long)puVar12 - (long)puVar11 >> 1;
  if (lVar13 == -2 || lVar13 + 2 < 0 != SCARRY8(lVar13,2)) {
    FUN_00a0098c(param_1);
LAB_009fe13c:
    FUN_00a008f4();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009fe04c with catch @ 009fe140
                        */
    FUN_00ab7c24();
  }
  uVar5 = param_1[2] - (long)puVar11;
  uVar6 = uVar5;
  if (uVar5 <= lVar13 + 1U) {
    uVar6 = lVar13 + 1;
  }
  if (0x7ffffffffffffffd < uVar5) {
    uVar6 = 0x7fffffffffffffff;
  }
  if (uVar6 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if ((long)uVar6 < 0) goto LAB_009fe13c;
                    /* try { // try from 009fe04c to 009fe13f has its CatchHandler @ 009fe140 */
    pvVar4 = operator_new(uVar6 << 1);
  }
  puVar1 = (undefined2 *)((long)pvVar4 + lVar13 * 2);
  pvVar2 = (void *)((long)pvVar4 + uVar6 * 2);
  puVar14 = puVar1 + 1;
  *puVar1 = *param_2;
  if ((long)puVar12 - (long)puVar11 == 0) {
    *param_1 = (long)puVar1;
    param_1[1] = (long)puVar14;
    param_1[2] = (long)pvVar2;
  }
  else {
    uVar6 = ((long)puVar12 - (long)puVar11) - 2;
    puVar7 = puVar1;
    if ((uVar6 < 0x1e) ||
       ((ulong)((long)puVar12 + (-((long)puVar12 - (long)puVar11) - (long)pvVar4)) < 0x20)) {
LAB_009fe0e0:
      do {
        puVar12 = puVar12 + -1;
        puVar7 = puVar7 + -1;
        *puVar7 = *puVar12;
      } while (puVar12 != puVar11);
    }
    else {
      puVar10 = (undefined8 *)(puVar12 + -8);
      uVar6 = (uVar6 >> 1) + 1;
      uVar9 = uVar6 & 0xfffffffffffffff0;
      puVar12 = puVar12 + -uVar9;
      puVar7 = puVar1 + -uVar9;
      puVar8 = (undefined8 *)(puVar1 + -8);
      uVar5 = uVar9;
      do {
        puVar3 = puVar10 + -1;
        uVar17 = puVar10[-2];
        uVar16 = puVar10[1];
        uVar15 = *puVar10;
        uVar5 = uVar5 - 0x10;
        puVar10 = puVar10 + -4;
        puVar8[-1] = *puVar3;
        puVar8[-2] = uVar17;
        puVar8[1] = uVar16;
        *puVar8 = uVar15;
        puVar8 = puVar8 + -4;
      } while (uVar5 != 0);
      if (uVar6 != uVar9) goto LAB_009fe0e0;
    }
    *param_1 = (long)puVar7;
    param_1[1] = (long)puVar14;
    param_1[2] = (long)pvVar2;
  }
  if (puVar11 != (undefined2 *)0x0) {
    operator_delete(puVar11);
  }
LAB_009fe104:
  param_1[1] = (long)puVar14;
  return;
}


// ===== 009fe144  cxxbridge1$std$vector$i16$pop_back =====

void cxxbridge1_std_vector_i16_pop_back(long param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  
  puVar2 = (undefined2 *)(*(long *)(param_1 + 8) + -2);
  uVar1 = *puVar2;
  *(undefined2 **)(param_1 + 8) = puVar2;
  *param_2 = uVar1;
  return;
}


// ===== 009fe158  cxxbridge1$std$vector$i32$push_back =====

void cxxbridge1_std_vector_i32_push_back(long *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar12 = (undefined4 *)param_1[1];
  if (puVar12 < (undefined4 *)param_1[2]) {
    puVar14 = puVar12 + 1;
    *puVar12 = *param_2;
    goto LAB_009fe298;
  }
  puVar11 = (undefined4 *)*param_1;
  lVar13 = (long)puVar12 - (long)puVar11 >> 2;
  uVar6 = lVar13 + 1;
  if (uVar6 >> 0x3e != 0) {
    FUN_00a009a0(param_1);
LAB_009fe2d0:
    FUN_00a008f4();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009fe1e0 with catch @ 009fe2d4
                        */
    FUN_00ab7c24();
  }
  uVar5 = param_1[2] - (long)puVar11;
  uVar8 = (long)uVar5 >> 1;
  if (uVar8 <= uVar6) {
    uVar8 = uVar6;
  }
  if (0x7ffffffffffffffb < uVar5) {
    uVar8 = 0x3fffffffffffffff;
  }
  if (uVar8 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (uVar8 >> 0x3e != 0) goto LAB_009fe2d0;
                    /* try { // try from 009fe1e0 to 009fe2d3 has its CatchHandler @ 009fe2d4 */
    pvVar4 = operator_new(uVar8 << 2);
  }
  puVar1 = (undefined4 *)((long)pvVar4 + lVar13 * 4);
  pvVar2 = (void *)((long)pvVar4 + uVar8 * 4);
  puVar14 = puVar1 + 1;
  *puVar1 = *param_2;
  if ((long)puVar12 - (long)puVar11 == 0) {
    *param_1 = (long)puVar1;
    param_1[1] = (long)puVar14;
    param_1[2] = (long)pvVar2;
  }
  else {
    uVar6 = ((long)puVar12 - (long)puVar11) - 4;
    puVar7 = puVar1;
    if ((uVar6 < 0x1c) ||
       ((ulong)((long)puVar12 + (-((long)puVar12 - (long)puVar11) - (long)pvVar4)) < 0x20)) {
LAB_009fe274:
      do {
        puVar12 = puVar12 + -1;
        puVar7 = puVar7 + -1;
        *puVar7 = *puVar12;
      } while (puVar12 != puVar11);
    }
    else {
      puVar10 = (undefined8 *)(puVar12 + -4);
      uVar6 = (uVar6 >> 2) + 1;
      uVar5 = uVar6 & 0x7ffffffffffffff8;
      puVar12 = puVar12 + -uVar5;
      puVar7 = puVar1 + -uVar5;
      puVar9 = (undefined8 *)(puVar1 + -4);
      uVar8 = uVar5;
      do {
        puVar3 = puVar10 + -1;
        uVar17 = puVar10[-2];
        uVar16 = puVar10[1];
        uVar15 = *puVar10;
        uVar8 = uVar8 - 8;
        puVar10 = puVar10 + -4;
        puVar9[-1] = *puVar3;
        puVar9[-2] = uVar17;
        puVar9[1] = uVar16;
        *puVar9 = uVar15;
        puVar9 = puVar9 + -4;
      } while (uVar8 != 0);
      if (uVar6 != uVar5) goto LAB_009fe274;
    }
    *param_1 = (long)puVar7;
    param_1[1] = (long)puVar14;
    param_1[2] = (long)pvVar2;
  }
  if (puVar11 != (undefined4 *)0x0) {
    operator_delete(puVar11);
  }
LAB_009fe298:
  param_1[1] = (long)puVar14;
  return;
}


// ===== 009fe2d8  cxxbridge1$std$vector$i32$pop_back =====

void cxxbridge1_std_vector_i32_pop_back(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(*(long *)(param_1 + 8) + -4);
  uVar1 = *puVar2;
  *(undefined4 **)(param_1 + 8) = puVar2;
  *param_2 = uVar1;
  return;
}


// ===== 009fe2ec  cxxbridge1$std$vector$i64$push_back =====

void cxxbridge1_std_vector_i64_push_back(long *param_1,undefined8 *param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar11 = (undefined8 *)param_1[1];
  if (puVar11 < (undefined8 *)param_1[2]) {
    puVar13 = puVar11 + 1;
    *puVar11 = *param_2;
    goto LAB_009fe42c;
  }
  puVar10 = (undefined8 *)*param_1;
  lVar12 = (long)puVar11 - (long)puVar10 >> 3;
  uVar5 = lVar12 + 1;
  if (uVar5 >> 0x3d != 0) {
    FUN_00a009b4(param_1);
LAB_009fe464:
    FUN_00a008f4();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009fe374 with catch @ 009fe468
                        */
    FUN_00ab7c24();
  }
  uVar4 = param_1[2] - (long)puVar10;
  uVar7 = (long)uVar4 >> 2;
  if (uVar7 <= uVar5) {
    uVar7 = uVar5;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar7 = 0x1fffffffffffffff;
  }
  if (uVar7 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar7 >> 0x3d != 0) goto LAB_009fe464;
                    /* try { // try from 009fe374 to 009fe467 has its CatchHandler @ 009fe468 */
    pvVar3 = operator_new(uVar7 << 3);
  }
  puVar8 = (undefined8 *)((long)pvVar3 + lVar12 * 8);
  pvVar1 = (void *)((long)pvVar3 + uVar7 * 8);
  puVar13 = puVar8 + 1;
  *puVar8 = *param_2;
  if ((long)puVar11 - (long)puVar10 == 0) {
    *param_1 = (long)puVar8;
    param_1[1] = (long)puVar13;
    param_1[2] = (long)pvVar1;
  }
  else {
    uVar5 = ((long)puVar11 - (long)puVar10) - 8;
    puVar6 = puVar8;
    if ((uVar5 < 0x38) ||
       ((ulong)((long)puVar11 + (-((long)puVar11 - (long)puVar10) - (long)pvVar3)) < 0x20)) {
LAB_009fe408:
      do {
        puVar11 = puVar11 + -1;
        puVar6 = puVar6 + -1;
        *puVar6 = *puVar11;
      } while (puVar11 != puVar10);
    }
    else {
      puVar9 = puVar11 + -2;
      uVar5 = (uVar5 >> 3) + 1;
      uVar4 = uVar5 & 0x3ffffffffffffffc;
      puVar11 = puVar11 + -uVar4;
      puVar6 = puVar8 + -uVar4;
      puVar8 = puVar8 + -2;
      uVar7 = uVar4;
      do {
        puVar2 = puVar9 + -1;
        uVar16 = puVar9[-2];
        uVar15 = puVar9[1];
        uVar14 = *puVar9;
        uVar7 = uVar7 - 4;
        puVar9 = puVar9 + -4;
        puVar8[-1] = *puVar2;
        puVar8[-2] = uVar16;
        puVar8[1] = uVar15;
        *puVar8 = uVar14;
        puVar8 = puVar8 + -4;
      } while (uVar7 != 0);
      if (uVar5 != uVar4) goto LAB_009fe408;
    }
    *param_1 = (long)puVar6;
    param_1[1] = (long)puVar13;
    param_1[2] = (long)pvVar1;
  }
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_009fe42c:
  param_1[1] = (long)puVar13;
  return;
}


// ===== 009fe46c  cxxbridge1$std$vector$i64$pop_back =====

void cxxbridge1_std_vector_i64_pop_back(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + -8);
  uVar2 = *puVar1;
  *(undefined8 **)(param_1 + 8) = puVar1;
  *param_2 = uVar2;
  return;
}


// ===== 009fe480  cxxbridge1$std$vector$f32$push_back =====

void cxxbridge1_std_vector_f32_push_back(long *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar12 = (undefined4 *)param_1[1];
  if (puVar12 < (undefined4 *)param_1[2]) {
    puVar14 = puVar12 + 1;
    *puVar12 = *param_2;
    goto LAB_009fe5c0;
  }
  puVar11 = (undefined4 *)*param_1;
  lVar13 = (long)puVar12 - (long)puVar11 >> 2;
  uVar6 = lVar13 + 1;
  if (uVar6 >> 0x3e != 0) {
    FUN_00a009c8(param_1);
LAB_009fe5f8:
    FUN_00a008f4();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009fe508 with catch @ 009fe5fc
                        */
    FUN_00ab7c24();
  }
  uVar5 = param_1[2] - (long)puVar11;
  uVar8 = (long)uVar5 >> 1;
  if (uVar8 <= uVar6) {
    uVar8 = uVar6;
  }
  if (0x7ffffffffffffffb < uVar5) {
    uVar8 = 0x3fffffffffffffff;
  }
  if (uVar8 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (uVar8 >> 0x3e != 0) goto LAB_009fe5f8;
                    /* try { // try from 009fe508 to 009fe5fb has its CatchHandler @ 009fe5fc */
    pvVar4 = operator_new(uVar8 << 2);
  }
  puVar1 = (undefined4 *)((long)pvVar4 + lVar13 * 4);
  pvVar2 = (void *)((long)pvVar4 + uVar8 * 4);
  puVar14 = puVar1 + 1;
  *puVar1 = *param_2;
  if ((long)puVar12 - (long)puVar11 == 0) {
    *param_1 = (long)puVar1;
    param_1[1] = (long)puVar14;
    param_1[2] = (long)pvVar2;
  }
  else {
    uVar6 = ((long)puVar12 - (long)puVar11) - 4;
    puVar7 = puVar1;
    if ((uVar6 < 0x1c) ||
       ((ulong)((long)puVar12 + (-((long)puVar12 - (long)puVar11) - (long)pvVar4)) < 0x20)) {
LAB_009fe59c:
      do {
        puVar12 = puVar12 + -1;
        puVar7 = puVar7 + -1;
        *puVar7 = *puVar12;
      } while (puVar12 != puVar11);
    }
    else {
      puVar10 = (undefined8 *)(puVar12 + -4);
      uVar6 = (uVar6 >> 2) + 1;
      uVar5 = uVar6 & 0x7ffffffffffffff8;
      puVar12 = puVar12 + -uVar5;
      puVar7 = puVar1 + -uVar5;
      puVar9 = (undefined8 *)(puVar1 + -4);
      uVar8 = uVar5;
      do {
        puVar3 = puVar10 + -1;
        uVar17 = puVar10[-2];
        uVar16 = puVar10[1];
        uVar15 = *puVar10;
        uVar8 = uVar8 - 8;
        puVar10 = puVar10 + -4;
        puVar9[-1] = *puVar3;
        puVar9[-2] = uVar17;
        puVar9[1] = uVar16;
        *puVar9 = uVar15;
        puVar9 = puVar9 + -4;
      } while (uVar8 != 0);
      if (uVar6 != uVar5) goto LAB_009fe59c;
    }
    *param_1 = (long)puVar7;
    param_1[1] = (long)puVar14;
    param_1[2] = (long)pvVar2;
  }
  if (puVar11 != (undefined4 *)0x0) {
    operator_delete(puVar11);
  }
LAB_009fe5c0:
  param_1[1] = (long)puVar14;
  return;
}


// ===== 009fe600  cxxbridge1$std$vector$f32$pop_back =====

void cxxbridge1_std_vector_f32_pop_back(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(*(long *)(param_1 + 8) + -4);
  uVar2 = *puVar1;
  *(undefined4 **)(param_1 + 8) = puVar1;
  *param_2 = uVar2;
  return;
}


// ===== 009fe614  cxxbridge1$std$vector$f64$push_back =====

void cxxbridge1_std_vector_f64_push_back(long *param_1,undefined8 *param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar11 = (undefined8 *)param_1[1];
  if (puVar11 < (undefined8 *)param_1[2]) {
    puVar13 = puVar11 + 1;
    *puVar11 = *param_2;
    goto LAB_009fe754;
  }
  puVar10 = (undefined8 *)*param_1;
  lVar12 = (long)puVar11 - (long)puVar10 >> 3;
  uVar5 = lVar12 + 1;
  if (uVar5 >> 0x3d != 0) {
    FUN_00a009dc(param_1);
LAB_009fe78c:
    FUN_00a008f4();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009fe69c with catch @ 009fe790
                        */
    FUN_00ab7c24();
  }
  uVar4 = param_1[2] - (long)puVar10;
  uVar7 = (long)uVar4 >> 2;
  if (uVar7 <= uVar5) {
    uVar7 = uVar5;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar7 = 0x1fffffffffffffff;
  }
  if (uVar7 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar7 >> 0x3d != 0) goto LAB_009fe78c;
                    /* try { // try from 009fe69c to 009fe78f has its CatchHandler @ 009fe790 */
    pvVar3 = operator_new(uVar7 << 3);
  }
  puVar8 = (undefined8 *)((long)pvVar3 + lVar12 * 8);
  pvVar1 = (void *)((long)pvVar3 + uVar7 * 8);
  puVar13 = puVar8 + 1;
  *puVar8 = *param_2;
  if ((long)puVar11 - (long)puVar10 == 0) {
    *param_1 = (long)puVar8;
    param_1[1] = (long)puVar13;
    param_1[2] = (long)pvVar1;
  }
  else {
    uVar5 = ((long)puVar11 - (long)puVar10) - 8;
    puVar6 = puVar8;
    if ((uVar5 < 0x38) ||
       ((ulong)((long)puVar11 + (-((long)puVar11 - (long)puVar10) - (long)pvVar3)) < 0x20)) {
LAB_009fe730:
      do {
        puVar11 = puVar11 + -1;
        puVar6 = puVar6 + -1;
        *puVar6 = *puVar11;
      } while (puVar11 != puVar10);
    }
    else {
      puVar9 = puVar11 + -2;
      uVar5 = (uVar5 >> 3) + 1;
      uVar4 = uVar5 & 0x3ffffffffffffffc;
      puVar11 = puVar11 + -uVar4;
      puVar6 = puVar8 + -uVar4;
      puVar8 = puVar8 + -2;
      uVar7 = uVar4;
      do {
        puVar2 = puVar9 + -1;
        uVar16 = puVar9[-2];
        uVar15 = puVar9[1];
        uVar14 = *puVar9;
        uVar7 = uVar7 - 4;
        puVar9 = puVar9 + -4;
        puVar8[-1] = *puVar2;
        puVar8[-2] = uVar16;
        puVar8[1] = uVar15;
        *puVar8 = uVar14;
        puVar8 = puVar8 + -4;
      } while (uVar7 != 0);
      if (uVar5 != uVar4) goto LAB_009fe730;
    }
    *param_1 = (long)puVar6;
    param_1[1] = (long)puVar13;
    param_1[2] = (long)pvVar1;
  }
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_009fe754:
  param_1[1] = (long)puVar13;
  return;
}


// ===== 009fe794  cxxbridge1$std$vector$f64$pop_back =====

void cxxbridge1_std_vector_f64_pop_back(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + -8);
  uVar2 = *puVar1;
  *(undefined8 **)(param_1 + 8) = puVar1;
  *param_2 = uVar2;
  return;
}


// ===== 009fe7a8  cxxbridge1$std$vector$usize$push_back =====

void cxxbridge1_std_vector_usize_push_back(long *param_1,undefined8 *param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar11 = (undefined8 *)param_1[1];
  if (puVar11 < (undefined8 *)param_1[2]) {
    puVar13 = puVar11 + 1;
    *puVar11 = *param_2;
    goto LAB_009fe8e8;
  }
  puVar10 = (undefined8 *)*param_1;
  lVar12 = (long)puVar11 - (long)puVar10 >> 3;
  uVar5 = lVar12 + 1;
  if (uVar5 >> 0x3d != 0) {
    FUN_00a00964(param_1);
LAB_009fe920:
    FUN_00a008f4();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009fe830 with catch @ 009fe924
                        */
    FUN_00ab7c24();
  }
  uVar4 = param_1[2] - (long)puVar10;
  uVar7 = (long)uVar4 >> 2;
  if (uVar7 <= uVar5) {
    uVar7 = uVar5;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar7 = 0x1fffffffffffffff;
  }
  if (uVar7 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar7 >> 0x3d != 0) goto LAB_009fe920;
                    /* try { // try from 009fe830 to 009fe923 has its CatchHandler @ 009fe924 */
    pvVar3 = operator_new(uVar7 << 3);
  }
  puVar8 = (undefined8 *)((long)pvVar3 + lVar12 * 8);
  pvVar1 = (void *)((long)pvVar3 + uVar7 * 8);
  puVar13 = puVar8 + 1;
  *puVar8 = *param_2;
  if ((long)puVar11 - (long)puVar10 == 0) {
    *param_1 = (long)puVar8;
    param_1[1] = (long)puVar13;
    param_1[2] = (long)pvVar1;
  }
  else {
    uVar5 = ((long)puVar11 - (long)puVar10) - 8;
    puVar6 = puVar8;
    if ((uVar5 < 0x38) ||
       ((ulong)((long)puVar11 + (-((long)puVar11 - (long)puVar10) - (long)pvVar3)) < 0x20)) {
LAB_009fe8c4:
      do {
        puVar11 = puVar11 + -1;
        puVar6 = puVar6 + -1;
        *puVar6 = *puVar11;
      } while (puVar11 != puVar10);
    }
    else {
      puVar9 = puVar11 + -2;
      uVar5 = (uVar5 >> 3) + 1;
      uVar4 = uVar5 & 0x3ffffffffffffffc;
      puVar11 = puVar11 + -uVar4;
      puVar6 = puVar8 + -uVar4;
      puVar8 = puVar8 + -2;
      uVar7 = uVar4;
      do {
        puVar2 = puVar9 + -1;
        uVar16 = puVar9[-2];
        uVar15 = puVar9[1];
        uVar14 = *puVar9;
        uVar7 = uVar7 - 4;
        puVar9 = puVar9 + -4;
        puVar8[-1] = *puVar2;
        puVar8[-2] = uVar16;
        puVar8[1] = uVar15;
        *puVar8 = uVar14;
        puVar8 = puVar8 + -4;
      } while (uVar7 != 0);
      if (uVar5 != uVar4) goto LAB_009fe8c4;
    }
    *param_1 = (long)puVar6;
    param_1[1] = (long)puVar13;
    param_1[2] = (long)pvVar1;
  }
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_009fe8e8:
  param_1[1] = (long)puVar13;
  return;
}


// ===== 009fe928  cxxbridge1$std$vector$usize$pop_back =====

void cxxbridge1_std_vector_usize_pop_back(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + -8);
  uVar2 = *puVar1;
  *(undefined8 **)(param_1 + 8) = puVar1;
  *param_2 = uVar2;
  return;
}


// ===== 009fe93c  cxxbridge1$std$vector$isize$push_back =====

void cxxbridge1_std_vector_isize_push_back(long *param_1,undefined8 *param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar11 = (undefined8 *)param_1[1];
  if (puVar11 < (undefined8 *)param_1[2]) {
    puVar13 = puVar11 + 1;
    *puVar11 = *param_2;
    goto LAB_009fea7c;
  }
  puVar10 = (undefined8 *)*param_1;
  lVar12 = (long)puVar11 - (long)puVar10 >> 3;
  uVar5 = lVar12 + 1;
  if (uVar5 >> 0x3d != 0) {
    FUN_00a009b4(param_1);
LAB_009feab4:
    FUN_00a008f4();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009fe9c4 with catch @ 009feab8
                        */
    FUN_00ab7c24();
  }
  uVar4 = param_1[2] - (long)puVar10;
  uVar7 = (long)uVar4 >> 2;
  if (uVar7 <= uVar5) {
    uVar7 = uVar5;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar7 = 0x1fffffffffffffff;
  }
  if (uVar7 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar7 >> 0x3d != 0) goto LAB_009feab4;
                    /* try { // try from 009fe9c4 to 009feab7 has its CatchHandler @ 009feab8 */
    pvVar3 = operator_new(uVar7 << 3);
  }
  puVar8 = (undefined8 *)((long)pvVar3 + lVar12 * 8);
  pvVar1 = (void *)((long)pvVar3 + uVar7 * 8);
  puVar13 = puVar8 + 1;
  *puVar8 = *param_2;
  if ((long)puVar11 - (long)puVar10 == 0) {
    *param_1 = (long)puVar8;
    param_1[1] = (long)puVar13;
    param_1[2] = (long)pvVar1;
  }
  else {
    uVar5 = ((long)puVar11 - (long)puVar10) - 8;
    puVar6 = puVar8;
    if ((uVar5 < 0x38) ||
       ((ulong)((long)puVar11 + (-((long)puVar11 - (long)puVar10) - (long)pvVar3)) < 0x20)) {
LAB_009fea58:
      do {
        puVar11 = puVar11 + -1;
        puVar6 = puVar6 + -1;
        *puVar6 = *puVar11;
      } while (puVar11 != puVar10);
    }
    else {
      puVar9 = puVar11 + -2;
      uVar5 = (uVar5 >> 3) + 1;
      uVar4 = uVar5 & 0x3ffffffffffffffc;
      puVar11 = puVar11 + -uVar4;
      puVar6 = puVar8 + -uVar4;
      puVar8 = puVar8 + -2;
      uVar7 = uVar4;
      do {
        puVar2 = puVar9 + -1;
        uVar16 = puVar9[-2];
        uVar15 = puVar9[1];
        uVar14 = *puVar9;
        uVar7 = uVar7 - 4;
        puVar9 = puVar9 + -4;
        puVar8[-1] = *puVar2;
        puVar8[-2] = uVar16;
        puVar8[1] = uVar15;
        *puVar8 = uVar14;
        puVar8 = puVar8 + -4;
      } while (uVar7 != 0);
      if (uVar5 != uVar4) goto LAB_009fea58;
    }
    *param_1 = (long)puVar6;
    param_1[1] = (long)puVar13;
    param_1[2] = (long)pvVar1;
  }
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
LAB_009fea7c:
  param_1[1] = (long)puVar13;
  return;
}


// ===== 009feabc  cxxbridge1$std$vector$isize$pop_back =====

void cxxbridge1_std_vector_isize_pop_back(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + -8);
  uVar2 = *puVar1;
  *(undefined8 **)(param_1 + 8) = puVar1;
  *param_2 = uVar2;
  return;
}


// ===== 009fead0  cxxbridge1$std$shared_ptr$u8$null =====

void cxxbridge1_std_shared_ptr_u8_null(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 009fead8  cxxbridge1$std$shared_ptr$u8$raw =====

void cxxbridge1_std_shared_ptr_u8_raw(long *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  *param_1 = param_2;
                    /* try { // try from 009feaf0 to 009feaf7 has its CatchHandler @ 009feb1c */
  plVar2 = (long *)operator_new(0x20);
  puVar1 = PTR_vtable_00b01228;
  plVar2[2] = 0;
  plVar2[3] = param_2;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0;
  param_1[1] = (long)plVar2;
  return;
}


// ===== 009feb34  cxxbridge1$std$shared_ptr$u8$uninit =====

void * cxxbridge1_std_shared_ptr_u8_uninit(undefined8 *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  long *plVar3;
  
                    /* try { // try from 009feb44 to 009feb4b has its CatchHandler @ 009feb9c */
  pvVar2 = operator_new(1);
  *param_1 = pvVar2;
                    /* try { // try from 009feb54 to 009feb5b has its CatchHandler @ 009feb88 */
  plVar3 = (long *)operator_new(0x20);
  puVar1 = PTR_vtable_00b01228;
  plVar3[2] = 0;
  plVar3[3] = (long)pvVar2;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[1] = 0;
  param_1[1] = plVar3;
  return pvVar2;
}


// ===== 009feba0  cxxbridge1$std$shared_ptr$u8$clone =====

void cxxbridge1_std_shared_ptr_u8_clone(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 8);
  }
  return;
}


// ===== 009febc8  cxxbridge1$std$shared_ptr$u8$get =====

undefined8 cxxbridge1_std_shared_ptr_u8_get(undefined8 *param_1)

{
  return *param_1;
}


// ===== 009febd0  cxxbridge1$std$shared_ptr$u8$drop =====

void cxxbridge1_std_shared_ptr_u8_drop(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00ab1ce0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 009fec20  cxxbridge1$std$weak_ptr$u8$null =====

void cxxbridge1_std_weak_ptr_u8_null(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 009fec28  cxxbridge1$std$weak_ptr$u8$clone =====

void cxxbridge1_std_weak_ptr_u8_clone(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 0x10);
  }
  return;
}


// ===== 009fec50  cxxbridge1$std$weak_ptr$u8$downgrade =====

void cxxbridge1_std_weak_ptr_u8_downgrade(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 0x10);
  }
  return;
}


// ===== 009fec78  cxxbridge1$std$weak_ptr$u8$upgrade =====

void cxxbridge1_std_weak_ptr_u8_upgrade(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (param_1[1] != 0) {
    lVar1 = std::__ndk1::__shared_weak_count::lock();
    param_2[1] = lVar1;
    if (lVar1 != 0) {
      *param_2 = *param_1;
    }
  }
  return;
}


// ===== 009fecb8  cxxbridge1$std$weak_ptr$u8$drop =====

void cxxbridge1_std_weak_ptr_u8_drop(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 009fecc8  cxxbridge1$std$shared_ptr$u16$null =====

void cxxbridge1_std_shared_ptr_u16_null(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 009fecd0  cxxbridge1$std$shared_ptr$u16$raw =====

void cxxbridge1_std_shared_ptr_u16_raw(long *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  *param_1 = param_2;
                    /* try { // try from 009fece8 to 009fecef has its CatchHandler @ 009fed14 */
  plVar2 = (long *)operator_new(0x20);
  puVar1 = PTR_vtable_00b01230;
  plVar2[2] = 0;
  plVar2[3] = param_2;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0;
  param_1[1] = (long)plVar2;
  return;
}


// ===== 009fed2c  cxxbridge1$std$shared_ptr$u16$uninit =====

void * cxxbridge1_std_shared_ptr_u16_uninit(undefined8 *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  long *plVar3;
  
                    /* try { // try from 009fed3c to 009fed43 has its CatchHandler @ 009fed94 */
  pvVar2 = operator_new(2);
  *param_1 = pvVar2;
                    /* try { // try from 009fed4c to 009fed53 has its CatchHandler @ 009fed80 */
  plVar3 = (long *)operator_new(0x20);
  puVar1 = PTR_vtable_00b01230;
  plVar3[2] = 0;
  plVar3[3] = (long)pvVar2;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[1] = 0;
  param_1[1] = plVar3;
  return pvVar2;
}


// ===== 009fed98  cxxbridge1$std$shared_ptr$u16$clone =====

void cxxbridge1_std_shared_ptr_u16_clone(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 8);
  }
  return;
}


// ===== 009fedc0  cxxbridge1$std$shared_ptr$u16$get =====

undefined8 cxxbridge1_std_shared_ptr_u16_get(undefined8 *param_1)

{
  return *param_1;
}


// ===== 009fedc8  cxxbridge1$std$shared_ptr$u16$drop =====

void cxxbridge1_std_shared_ptr_u16_drop(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00ab1ce0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 009fee18  cxxbridge1$std$weak_ptr$u16$null =====

void cxxbridge1_std_weak_ptr_u16_null(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 009fee20  cxxbridge1$std$weak_ptr$u16$clone =====

void cxxbridge1_std_weak_ptr_u16_clone(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 0x10);
  }
  return;
}


// ===== 009fee48  cxxbridge1$std$weak_ptr$u16$downgrade =====

void cxxbridge1_std_weak_ptr_u16_downgrade(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 0x10);
  }
  return;
}


// ===== 009fee70  cxxbridge1$std$weak_ptr$u16$upgrade =====

void cxxbridge1_std_weak_ptr_u16_upgrade(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (param_1[1] != 0) {
    lVar1 = std::__ndk1::__shared_weak_count::lock();
    param_2[1] = lVar1;
    if (lVar1 != 0) {
      *param_2 = *param_1;
    }
  }
  return;
}


// ===== 009feeb0  cxxbridge1$std$weak_ptr$u16$drop =====

void cxxbridge1_std_weak_ptr_u16_drop(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 009feec0  cxxbridge1$std$shared_ptr$u32$null =====

void cxxbridge1_std_shared_ptr_u32_null(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 009feec8  cxxbridge1$std$shared_ptr$u32$raw =====

void cxxbridge1_std_shared_ptr_u32_raw(long *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  *param_1 = param_2;
                    /* try { // try from 009feee0 to 009feee7 has its CatchHandler @ 009fef0c */
  plVar2 = (long *)operator_new(0x20);
  puVar1 = PTR_vtable_00b01238;
  plVar2[2] = 0;
  plVar2[3] = param_2;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0;
  param_1[1] = (long)plVar2;
  return;
}


// ===== 009fef24  cxxbridge1$std$shared_ptr$u32$uninit =====

void * cxxbridge1_std_shared_ptr_u32_uninit(undefined8 *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  long *plVar3;
  
                    /* try { // try from 009fef34 to 009fef3b has its CatchHandler @ 009fef8c */
  pvVar2 = operator_new(4);
  *param_1 = pvVar2;
                    /* try { // try from 009fef44 to 009fef4b has its CatchHandler @ 009fef78 */
  plVar3 = (long *)operator_new(0x20);
  puVar1 = PTR_vtable_00b01238;
  plVar3[2] = 0;
  plVar3[3] = (long)pvVar2;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[1] = 0;
  param_1[1] = plVar3;
  return pvVar2;
}


// ===== 009fef90  cxxbridge1$std$shared_ptr$u32$clone =====

void cxxbridge1_std_shared_ptr_u32_clone(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 8);
  }
  return;
}


// ===== 009fefb8  cxxbridge1$std$shared_ptr$u32$get =====

undefined8 cxxbridge1_std_shared_ptr_u32_get(undefined8 *param_1)

{
  return *param_1;
}


// ===== 009fefc0  cxxbridge1$std$shared_ptr$u32$drop =====

void cxxbridge1_std_shared_ptr_u32_drop(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00ab1ce0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 009ff010  cxxbridge1$std$weak_ptr$u32$null =====

void cxxbridge1_std_weak_ptr_u32_null(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 009ff018  cxxbridge1$std$weak_ptr$u32$clone =====

void cxxbridge1_std_weak_ptr_u32_clone(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 0x10);
  }
  return;
}


// ===== 009ff040  cxxbridge1$std$weak_ptr$u32$downgrade =====

void cxxbridge1_std_weak_ptr_u32_downgrade(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 0x10);
  }
  return;
}


// ===== 009ff068  cxxbridge1$std$weak_ptr$u32$upgrade =====

void cxxbridge1_std_weak_ptr_u32_upgrade(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (param_1[1] != 0) {
    lVar1 = std::__ndk1::__shared_weak_count::lock();
    param_2[1] = lVar1;
    if (lVar1 != 0) {
      *param_2 = *param_1;
    }
  }
  return;
}


// ===== 009ff0a8  cxxbridge1$std$weak_ptr$u32$drop =====

void cxxbridge1_std_weak_ptr_u32_drop(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 009ff0b8  cxxbridge1$std$shared_ptr$u64$null =====

void cxxbridge1_std_shared_ptr_u64_null(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 009ff0c0  cxxbridge1$std$shared_ptr$u64$raw =====

void cxxbridge1_std_shared_ptr_u64_raw(long *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  *param_1 = param_2;
                    /* try { // try from 009ff0d8 to 009ff0df has its CatchHandler @ 009ff104 */
  plVar2 = (long *)operator_new(0x20);
  puVar1 = PTR_vtable_00b01240;
  plVar2[2] = 0;
  plVar2[3] = param_2;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0;
  param_1[1] = (long)plVar2;
  return;
}


// ===== 009ff11c  cxxbridge1$std$shared_ptr$u64$uninit =====

void * cxxbridge1_std_shared_ptr_u64_uninit(undefined8 *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  long *plVar3;
  
                    /* try { // try from 009ff12c to 009ff133 has its CatchHandler @ 009ff184 */
  pvVar2 = operator_new(8);
  *param_1 = pvVar2;
                    /* try { // try from 009ff13c to 009ff143 has its CatchHandler @ 009ff170 */
  plVar3 = (long *)operator_new(0x20);
  puVar1 = PTR_vtable_00b01240;
  plVar3[2] = 0;
  plVar3[3] = (long)pvVar2;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[1] = 0;
  param_1[1] = plVar3;
  return pvVar2;
}


// ===== 009ff188  cxxbridge1$std$shared_ptr$u64$clone =====

void cxxbridge1_std_shared_ptr_u64_clone(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 8);
  }
  return;
}


// ===== 009ff1b0  cxxbridge1$std$shared_ptr$u64$get =====

undefined8 cxxbridge1_std_shared_ptr_u64_get(undefined8 *param_1)

{
  return *param_1;
}


// ===== 009ff1b8  cxxbridge1$std$shared_ptr$u64$drop =====

void cxxbridge1_std_shared_ptr_u64_drop(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00ab1ce0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 009ff208  cxxbridge1$std$weak_ptr$u64$null =====

void cxxbridge1_std_weak_ptr_u64_null(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 009ff210  cxxbridge1$std$weak_ptr$u64$clone =====

void cxxbridge1_std_weak_ptr_u64_clone(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 0x10);
  }
  return;
}


// ===== 009ff238  cxxbridge1$std$weak_ptr$u64$downgrade =====

void cxxbridge1_std_weak_ptr_u64_downgrade(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 0x10);
  }
  return;
}


// ===== 009ff260  cxxbridge1$std$weak_ptr$u64$upgrade =====

void cxxbridge1_std_weak_ptr_u64_upgrade(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (param_1[1] != 0) {
    lVar1 = std::__ndk1::__shared_weak_count::lock();
    param_2[1] = lVar1;
    if (lVar1 != 0) {
      *param_2 = *param_1;
    }
  }
  return;
}


// ===== 009ff2a0  cxxbridge1$std$weak_ptr$u64$drop =====

void cxxbridge1_std_weak_ptr_u64_drop(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 009ff2b0  cxxbridge1$std$shared_ptr$i8$null =====

void cxxbridge1_std_shared_ptr_i8_null(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 009ff2b8  cxxbridge1$std$shared_ptr$i8$raw =====

void cxxbridge1_std_shared_ptr_i8_raw(long *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  *param_1 = param_2;
                    /* try { // try from 009ff2d0 to 009ff2d7 has its CatchHandler @ 009ff2fc */
  plVar2 = (long *)operator_new(0x20);
  puVar1 = PTR_vtable_00b01248;
  plVar2[2] = 0;
  plVar2[3] = param_2;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0;
  param_1[1] = (long)plVar2;
  return;
}


// ===== 009ff314  cxxbridge1$std$shared_ptr$i8$uninit =====

void * cxxbridge1_std_shared_ptr_i8_uninit(undefined8 *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  long *plVar3;
  
                    /* try { // try from 009ff324 to 009ff32b has its CatchHandler @ 009ff37c */
  pvVar2 = operator_new(1);
  *param_1 = pvVar2;
                    /* try { // try from 009ff334 to 009ff33b has its CatchHandler @ 009ff368 */
  plVar3 = (long *)operator_new(0x20);
  puVar1 = PTR_vtable_00b01248;
  plVar3[2] = 0;
  plVar3[3] = (long)pvVar2;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[1] = 0;
  param_1[1] = plVar3;
  return pvVar2;
}


// ===== 009ff380  cxxbridge1$std$shared_ptr$i8$clone =====

void cxxbridge1_std_shared_ptr_i8_clone(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 8);
  }
  return;
}


// ===== 009ff3a8  cxxbridge1$std$shared_ptr$i8$get =====

undefined8 cxxbridge1_std_shared_ptr_i8_get(undefined8 *param_1)

{
  return *param_1;
}


// ===== 009ff3b0  cxxbridge1$std$shared_ptr$i8$drop =====

void cxxbridge1_std_shared_ptr_i8_drop(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00ab1ce0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 009ff400  cxxbridge1$std$weak_ptr$i8$null =====

void cxxbridge1_std_weak_ptr_i8_null(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 009ff408  cxxbridge1$std$weak_ptr$i8$clone =====

void cxxbridge1_std_weak_ptr_i8_clone(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 0x10);
  }
  return;
}


// ===== 009ff430  cxxbridge1$std$weak_ptr$i8$downgrade =====

void cxxbridge1_std_weak_ptr_i8_downgrade(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 0x10);
  }
  return;
}


// ===== 009ff458  cxxbridge1$std$weak_ptr$i8$upgrade =====

void cxxbridge1_std_weak_ptr_i8_upgrade(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (param_1[1] != 0) {
    lVar1 = std::__ndk1::__shared_weak_count::lock();
    param_2[1] = lVar1;
    if (lVar1 != 0) {
      *param_2 = *param_1;
    }
  }
  return;
}


// ===== 009ff498  cxxbridge1$std$weak_ptr$i8$drop =====

void cxxbridge1_std_weak_ptr_i8_drop(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 009ff4a8  cxxbridge1$std$shared_ptr$i16$null =====

void cxxbridge1_std_shared_ptr_i16_null(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 009ff4b0  cxxbridge1$std$shared_ptr$i16$raw =====

void cxxbridge1_std_shared_ptr_i16_raw(long *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  *param_1 = param_2;
                    /* try { // try from 009ff4c8 to 009ff4cf has its CatchHandler @ 009ff4f4 */
  plVar2 = (long *)operator_new(0x20);
  puVar1 = PTR_vtable_00b01250;
  plVar2[2] = 0;
  plVar2[3] = param_2;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0;
  param_1[1] = (long)plVar2;
  return;
}


// ===== 009ff50c  cxxbridge1$std$shared_ptr$i16$uninit =====

void * cxxbridge1_std_shared_ptr_i16_uninit(undefined8 *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  long *plVar3;
  
                    /* try { // try from 009ff51c to 009ff523 has its CatchHandler @ 009ff574 */
  pvVar2 = operator_new(2);
  *param_1 = pvVar2;
                    /* try { // try from 009ff52c to 009ff533 has its CatchHandler @ 009ff560 */
  plVar3 = (long *)operator_new(0x20);
  puVar1 = PTR_vtable_00b01250;
  plVar3[2] = 0;
  plVar3[3] = (long)pvVar2;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[1] = 0;
  param_1[1] = plVar3;
  return pvVar2;
}


// ===== 009ff578  cxxbridge1$std$shared_ptr$i16$clone =====

void cxxbridge1_std_shared_ptr_i16_clone(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 8);
  }
  return;
}


// ===== 009ff5a0  cxxbridge1$std$shared_ptr$i16$get =====

undefined8 cxxbridge1_std_shared_ptr_i16_get(undefined8 *param_1)

{
  return *param_1;
}


// ===== 009ff5a8  cxxbridge1$std$shared_ptr$i16$drop =====

void cxxbridge1_std_shared_ptr_i16_drop(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00ab1ce0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 009ff5f8  cxxbridge1$std$weak_ptr$i16$null =====

void cxxbridge1_std_weak_ptr_i16_null(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 009ff600  cxxbridge1$std$weak_ptr$i16$clone =====

void cxxbridge1_std_weak_ptr_i16_clone(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 0x10);
  }
  return;
}


// ===== 009ff628  cxxbridge1$std$weak_ptr$i16$downgrade =====

void cxxbridge1_std_weak_ptr_i16_downgrade(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 0x10);
  }
  return;
}


// ===== 009ff650  cxxbridge1$std$weak_ptr$i16$upgrade =====

void cxxbridge1_std_weak_ptr_i16_upgrade(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (param_1[1] != 0) {
    lVar1 = std::__ndk1::__shared_weak_count::lock();
    param_2[1] = lVar1;
    if (lVar1 != 0) {
      *param_2 = *param_1;
    }
  }
  return;
}


// ===== 009ff690  cxxbridge1$std$weak_ptr$i16$drop =====

void cxxbridge1_std_weak_ptr_i16_drop(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 009ff6a0  cxxbridge1$std$shared_ptr$i32$null =====

void cxxbridge1_std_shared_ptr_i32_null(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 009ff6a8  cxxbridge1$std$shared_ptr$i32$raw =====

void cxxbridge1_std_shared_ptr_i32_raw(long *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  *param_1 = param_2;
                    /* try { // try from 009ff6c0 to 009ff6c7 has its CatchHandler @ 009ff6ec */
  plVar2 = (long *)operator_new(0x20);
  puVar1 = PTR_vtable_00b01258;
  plVar2[2] = 0;
  plVar2[3] = param_2;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0;
  param_1[1] = (long)plVar2;
  return;
}


// ===== 009ff704  cxxbridge1$std$shared_ptr$i32$uninit =====

void * cxxbridge1_std_shared_ptr_i32_uninit(undefined8 *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  long *plVar3;
  
                    /* try { // try from 009ff714 to 009ff71b has its CatchHandler @ 009ff76c */
  pvVar2 = operator_new(4);
  *param_1 = pvVar2;
                    /* try { // try from 009ff724 to 009ff72b has its CatchHandler @ 009ff758 */
  plVar3 = (long *)operator_new(0x20);
  puVar1 = PTR_vtable_00b01258;
  plVar3[2] = 0;
  plVar3[3] = (long)pvVar2;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[1] = 0;
  param_1[1] = plVar3;
  return pvVar2;
}


// ===== 009ff770  cxxbridge1$std$shared_ptr$i32$clone =====

void cxxbridge1_std_shared_ptr_i32_clone(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 8);
  }
  return;
}


// ===== 009ff798  cxxbridge1$std$shared_ptr$i32$get =====

undefined8 cxxbridge1_std_shared_ptr_i32_get(undefined8 *param_1)

{
  return *param_1;
}


// ===== 009ff7a0  cxxbridge1$std$shared_ptr$i32$drop =====

void cxxbridge1_std_shared_ptr_i32_drop(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00ab1ce0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 009ff7f0  cxxbridge1$std$weak_ptr$i32$null =====

void cxxbridge1_std_weak_ptr_i32_null(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 009ff7f8  cxxbridge1$std$weak_ptr$i32$clone =====

void cxxbridge1_std_weak_ptr_i32_clone(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 0x10);
  }
  return;
}


// ===== 009ff820  cxxbridge1$std$weak_ptr$i32$downgrade =====

void cxxbridge1_std_weak_ptr_i32_downgrade(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 0x10);
  }
  return;
}


// ===== 009ff848  cxxbridge1$std$weak_ptr$i32$upgrade =====

void cxxbridge1_std_weak_ptr_i32_upgrade(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (param_1[1] != 0) {
    lVar1 = std::__ndk1::__shared_weak_count::lock();
    param_2[1] = lVar1;
    if (lVar1 != 0) {
      *param_2 = *param_1;
    }
  }
  return;
}


// ===== 009ff888  cxxbridge1$std$weak_ptr$i32$drop =====

void cxxbridge1_std_weak_ptr_i32_drop(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 009ff898  cxxbridge1$std$shared_ptr$i64$null =====

void cxxbridge1_std_shared_ptr_i64_null(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 009ff8a0  cxxbridge1$std$shared_ptr$i64$raw =====

void cxxbridge1_std_shared_ptr_i64_raw(long *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  *param_1 = param_2;
                    /* try { // try from 009ff8b8 to 009ff8bf has its CatchHandler @ 009ff8e4 */
  plVar2 = (long *)operator_new(0x20);
  puVar1 = PTR_vtable_00b01260;
  plVar2[2] = 0;
  plVar2[3] = param_2;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0;
  param_1[1] = (long)plVar2;
  return;
}


// ===== 009ff8fc  cxxbridge1$std$shared_ptr$i64$uninit =====

void * cxxbridge1_std_shared_ptr_i64_uninit(undefined8 *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  long *plVar3;
  
                    /* try { // try from 009ff90c to 009ff913 has its CatchHandler @ 009ff964 */
  pvVar2 = operator_new(8);
  *param_1 = pvVar2;
                    /* try { // try from 009ff91c to 009ff923 has its CatchHandler @ 009ff950 */
  plVar3 = (long *)operator_new(0x20);
  puVar1 = PTR_vtable_00b01260;
  plVar3[2] = 0;
  plVar3[3] = (long)pvVar2;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[1] = 0;
  param_1[1] = plVar3;
  return pvVar2;
}


// ===== 009ff968  cxxbridge1$std$shared_ptr$i64$clone =====

void cxxbridge1_std_shared_ptr_i64_clone(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 8);
  }
  return;
}


// ===== 009ff990  cxxbridge1$std$shared_ptr$i64$get =====

undefined8 cxxbridge1_std_shared_ptr_i64_get(undefined8 *param_1)

{
  return *param_1;
}


// ===== 009ff998  cxxbridge1$std$shared_ptr$i64$drop =====

void cxxbridge1_std_shared_ptr_i64_drop(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00ab1ce0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 009ff9e8  cxxbridge1$std$weak_ptr$i64$null =====

void cxxbridge1_std_weak_ptr_i64_null(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 009ff9f0  cxxbridge1$std$weak_ptr$i64$clone =====

void cxxbridge1_std_weak_ptr_i64_clone(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 0x10);
  }
  return;
}


// ===== 009ffa18  cxxbridge1$std$weak_ptr$i64$downgrade =====

void cxxbridge1_std_weak_ptr_i64_downgrade(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 0x10);
  }
  return;
}


// ===== 009ffa40  cxxbridge1$std$weak_ptr$i64$upgrade =====

void cxxbridge1_std_weak_ptr_i64_upgrade(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (param_1[1] != 0) {
    lVar1 = std::__ndk1::__shared_weak_count::lock();
    param_2[1] = lVar1;
    if (lVar1 != 0) {
      *param_2 = *param_1;
    }
  }
  return;
}


// ===== 009ffa80  cxxbridge1$std$weak_ptr$i64$drop =====

void cxxbridge1_std_weak_ptr_i64_drop(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 009ffa90  cxxbridge1$std$shared_ptr$f32$null =====

void cxxbridge1_std_shared_ptr_f32_null(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 009ffa98  cxxbridge1$std$shared_ptr$f32$raw =====

void cxxbridge1_std_shared_ptr_f32_raw(long *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  *param_1 = param_2;
                    /* try { // try from 009ffab0 to 009ffab7 has its CatchHandler @ 009ffadc */
  plVar2 = (long *)operator_new(0x20);
  puVar1 = PTR_vtable_00b01268;
  plVar2[2] = 0;
  plVar2[3] = param_2;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0;
  param_1[1] = (long)plVar2;
  return;
}


// ===== 009ffaf4  cxxbridge1$std$shared_ptr$f32$uninit =====

void * cxxbridge1_std_shared_ptr_f32_uninit(undefined8 *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  long *plVar3;
  
                    /* try { // try from 009ffb04 to 009ffb0b has its CatchHandler @ 009ffb5c */
  pvVar2 = operator_new(4);
  *param_1 = pvVar2;
                    /* try { // try from 009ffb14 to 009ffb1b has its CatchHandler @ 009ffb48 */
  plVar3 = (long *)operator_new(0x20);
  puVar1 = PTR_vtable_00b01268;
  plVar3[2] = 0;
  plVar3[3] = (long)pvVar2;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[1] = 0;
  param_1[1] = plVar3;
  return pvVar2;
}


// ===== 009ffb60  cxxbridge1$std$shared_ptr$f32$clone =====

void cxxbridge1_std_shared_ptr_f32_clone(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 8);
  }
  return;
}


// ===== 009ffb88  cxxbridge1$std$shared_ptr$f32$get =====

undefined8 cxxbridge1_std_shared_ptr_f32_get(undefined8 *param_1)

{
  return *param_1;
}


// ===== 009ffb90  cxxbridge1$std$shared_ptr$f32$drop =====

void cxxbridge1_std_shared_ptr_f32_drop(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00ab1ce0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 009ffbe0  cxxbridge1$std$weak_ptr$f32$null =====

void cxxbridge1_std_weak_ptr_f32_null(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 009ffbe8  cxxbridge1$std$weak_ptr$f32$clone =====

void cxxbridge1_std_weak_ptr_f32_clone(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 0x10);
  }
  return;
}


// ===== 009ffc10  cxxbridge1$std$weak_ptr$f32$downgrade =====

void cxxbridge1_std_weak_ptr_f32_downgrade(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 0x10);
  }
  return;
}


// ===== 009ffc38  cxxbridge1$std$weak_ptr$f32$upgrade =====

void cxxbridge1_std_weak_ptr_f32_upgrade(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (param_1[1] != 0) {
    lVar1 = std::__ndk1::__shared_weak_count::lock();
    param_2[1] = lVar1;
    if (lVar1 != 0) {
      *param_2 = *param_1;
    }
  }
  return;
}


// ===== 009ffc78  cxxbridge1$std$weak_ptr$f32$drop =====

void cxxbridge1_std_weak_ptr_f32_drop(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 009ffc88  cxxbridge1$std$shared_ptr$f64$null =====

void cxxbridge1_std_shared_ptr_f64_null(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 009ffc90  cxxbridge1$std$shared_ptr$f64$raw =====

void cxxbridge1_std_shared_ptr_f64_raw(long *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  *param_1 = param_2;
                    /* try { // try from 009ffca8 to 009ffcaf has its CatchHandler @ 009ffcd4 */
  plVar2 = (long *)operator_new(0x20);
  puVar1 = PTR_vtable_00b01270;
  plVar2[2] = 0;
  plVar2[3] = param_2;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0;
  param_1[1] = (long)plVar2;
  return;
}


// ===== 009ffcec  cxxbridge1$std$shared_ptr$f64$uninit =====

void * cxxbridge1_std_shared_ptr_f64_uninit(undefined8 *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  long *plVar3;
  
                    /* try { // try from 009ffcfc to 009ffd03 has its CatchHandler @ 009ffd54 */
  pvVar2 = operator_new(8);
  *param_1 = pvVar2;
                    /* try { // try from 009ffd0c to 009ffd13 has its CatchHandler @ 009ffd40 */
  plVar3 = (long *)operator_new(0x20);
  puVar1 = PTR_vtable_00b01270;
  plVar3[2] = 0;
  plVar3[3] = (long)pvVar2;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[1] = 0;
  param_1[1] = plVar3;
  return pvVar2;
}


// ===== 009ffd58  cxxbridge1$std$shared_ptr$f64$clone =====

void cxxbridge1_std_shared_ptr_f64_clone(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 8);
  }
  return;
}


// ===== 009ffd80  cxxbridge1$std$shared_ptr$f64$get =====

undefined8 cxxbridge1_std_shared_ptr_f64_get(undefined8 *param_1)

{
  return *param_1;
}


// ===== 009ffd88  cxxbridge1$std$shared_ptr$f64$drop =====

void cxxbridge1_std_shared_ptr_f64_drop(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00ab1ce0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 009ffdd8  cxxbridge1$std$weak_ptr$f64$null =====

void cxxbridge1_std_weak_ptr_f64_null(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 009ffde0  cxxbridge1$std$weak_ptr$f64$clone =====

void cxxbridge1_std_weak_ptr_f64_clone(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 0x10);
  }
  return;
}


// ===== 009ffe08  cxxbridge1$std$weak_ptr$f64$downgrade =====

void cxxbridge1_std_weak_ptr_f64_downgrade(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 0x10);
  }
  return;
}


// ===== 009ffe30  cxxbridge1$std$weak_ptr$f64$upgrade =====

void cxxbridge1_std_weak_ptr_f64_upgrade(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (param_1[1] != 0) {
    lVar1 = std::__ndk1::__shared_weak_count::lock();
    param_2[1] = lVar1;
    if (lVar1 != 0) {
      *param_2 = *param_1;
    }
  }
  return;
}


// ===== 009ffe70  cxxbridge1$std$weak_ptr$f64$drop =====

void cxxbridge1_std_weak_ptr_f64_drop(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 009ffe80  cxxbridge1$std$shared_ptr$bool$null =====

void cxxbridge1_std_shared_ptr_bool_null(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 009ffe88  cxxbridge1$std$shared_ptr$bool$raw =====

void cxxbridge1_std_shared_ptr_bool_raw(long *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  *param_1 = param_2;
                    /* try { // try from 009ffea0 to 009ffea7 has its CatchHandler @ 009ffecc */
  plVar2 = (long *)operator_new(0x20);
  puVar1 = PTR_vtable_00b01278;
  plVar2[2] = 0;
  plVar2[3] = param_2;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0;
  param_1[1] = (long)plVar2;
  return;
}


// ===== 009ffee4  cxxbridge1$std$shared_ptr$bool$uninit =====

void * cxxbridge1_std_shared_ptr_bool_uninit(undefined8 *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  long *plVar3;
  
                    /* try { // try from 009ffef4 to 009ffefb has its CatchHandler @ 009fff4c */
  pvVar2 = operator_new(1);
  *param_1 = pvVar2;
                    /* try { // try from 009fff04 to 009fff0b has its CatchHandler @ 009fff38 */
  plVar3 = (long *)operator_new(0x20);
  puVar1 = PTR_vtable_00b01278;
  plVar3[2] = 0;
  plVar3[3] = (long)pvVar2;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[1] = 0;
  param_1[1] = plVar3;
  return pvVar2;
}


// ===== 009fff50  cxxbridge1$std$shared_ptr$bool$clone =====

void cxxbridge1_std_shared_ptr_bool_clone(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 8);
  }
  return;
}


// ===== 009fff78  cxxbridge1$std$shared_ptr$bool$get =====

undefined8 cxxbridge1_std_shared_ptr_bool_get(undefined8 *param_1)

{
  return *param_1;
}


// ===== 009fff80  cxxbridge1$std$shared_ptr$bool$drop =====

void cxxbridge1_std_shared_ptr_bool_drop(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00ab1ce0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 009fffd0  cxxbridge1$std$weak_ptr$bool$null =====

void cxxbridge1_std_weak_ptr_bool_null(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 009fffd8  cxxbridge1$std$weak_ptr$bool$clone =====

void cxxbridge1_std_weak_ptr_bool_clone(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 0x10);
  }
  return;
}


// ===== 00a00000  cxxbridge1$std$weak_ptr$bool$downgrade =====

void cxxbridge1_std_weak_ptr_bool_downgrade(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 0x10);
  }
  return;
}


// ===== 00a00028  cxxbridge1$std$weak_ptr$bool$upgrade =====

void cxxbridge1_std_weak_ptr_bool_upgrade(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (param_1[1] != 0) {
    lVar1 = std::__ndk1::__shared_weak_count::lock();
    param_2[1] = lVar1;
    if (lVar1 != 0) {
      *param_2 = *param_1;
    }
  }
  return;
}


// ===== 00a00068  cxxbridge1$std$weak_ptr$bool$drop =====

void cxxbridge1_std_weak_ptr_bool_drop(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00a00078  cxxbridge1$std$shared_ptr$usize$null =====

void cxxbridge1_std_shared_ptr_usize_null(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00a00080  cxxbridge1$std$shared_ptr$usize$raw =====

void cxxbridge1_std_shared_ptr_usize_raw(long *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  *param_1 = param_2;
                    /* try { // try from 00a00098 to 00a0009f has its CatchHandler @ 00a000c4 */
  plVar2 = (long *)operator_new(0x20);
  puVar1 = PTR_vtable_00b01240;
  plVar2[2] = 0;
  plVar2[3] = param_2;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0;
  param_1[1] = (long)plVar2;
  return;
}


// ===== 00a000dc  cxxbridge1$std$shared_ptr$usize$uninit =====

void * cxxbridge1_std_shared_ptr_usize_uninit(undefined8 *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  long *plVar3;
  
                    /* try { // try from 00a000ec to 00a000f3 has its CatchHandler @ 00a00144 */
  pvVar2 = operator_new(8);
  *param_1 = pvVar2;
                    /* try { // try from 00a000fc to 00a00103 has its CatchHandler @ 00a00130 */
  plVar3 = (long *)operator_new(0x20);
  puVar1 = PTR_vtable_00b01240;
  plVar3[2] = 0;
  plVar3[3] = (long)pvVar2;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[1] = 0;
  param_1[1] = plVar3;
  return pvVar2;
}


// ===== 00a00148  cxxbridge1$std$shared_ptr$usize$clone =====

void cxxbridge1_std_shared_ptr_usize_clone(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 8);
  }
  return;
}


// ===== 00a00170  cxxbridge1$std$shared_ptr$usize$get =====

undefined8 cxxbridge1_std_shared_ptr_usize_get(undefined8 *param_1)

{
  return *param_1;
}


// ===== 00a00178  cxxbridge1$std$shared_ptr$usize$drop =====

void cxxbridge1_std_shared_ptr_usize_drop(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00ab1ce0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00a001c8  cxxbridge1$std$weak_ptr$usize$null =====

void cxxbridge1_std_weak_ptr_usize_null(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00a001d0  cxxbridge1$std$weak_ptr$usize$clone =====

void cxxbridge1_std_weak_ptr_usize_clone(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 0x10);
  }
  return;
}


// ===== 00a001f8  cxxbridge1$std$weak_ptr$usize$downgrade =====

void cxxbridge1_std_weak_ptr_usize_downgrade(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 0x10);
  }
  return;
}


// ===== 00a00220  cxxbridge1$std$weak_ptr$usize$upgrade =====

void cxxbridge1_std_weak_ptr_usize_upgrade(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (param_1[1] != 0) {
    lVar1 = std::__ndk1::__shared_weak_count::lock();
    param_2[1] = lVar1;
    if (lVar1 != 0) {
      *param_2 = *param_1;
    }
  }
  return;
}


// ===== 00a00260  cxxbridge1$std$weak_ptr$usize$drop =====

void cxxbridge1_std_weak_ptr_usize_drop(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00a00270  cxxbridge1$std$shared_ptr$isize$null =====

void cxxbridge1_std_shared_ptr_isize_null(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00a00278  cxxbridge1$std$shared_ptr$isize$raw =====

void cxxbridge1_std_shared_ptr_isize_raw(long *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  *param_1 = param_2;
                    /* try { // try from 00a00290 to 00a00297 has its CatchHandler @ 00a002bc */
  plVar2 = (long *)operator_new(0x20);
  puVar1 = PTR_vtable_00b01260;
  plVar2[2] = 0;
  plVar2[3] = param_2;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0;
  param_1[1] = (long)plVar2;
  return;
}


// ===== 00a002d4  cxxbridge1$std$shared_ptr$isize$uninit =====

void * cxxbridge1_std_shared_ptr_isize_uninit(undefined8 *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  long *plVar3;
  
                    /* try { // try from 00a002e4 to 00a002eb has its CatchHandler @ 00a0033c */
  pvVar2 = operator_new(8);
  *param_1 = pvVar2;
                    /* try { // try from 00a002f4 to 00a002fb has its CatchHandler @ 00a00328 */
  plVar3 = (long *)operator_new(0x20);
  puVar1 = PTR_vtable_00b01260;
  plVar3[2] = 0;
  plVar3[3] = (long)pvVar2;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[1] = 0;
  param_1[1] = plVar3;
  return pvVar2;
}


// ===== 00a00340  cxxbridge1$std$shared_ptr$isize$clone =====

void cxxbridge1_std_shared_ptr_isize_clone(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 8);
  }
  return;
}


// ===== 00a00368  cxxbridge1$std$shared_ptr$isize$get =====

undefined8 cxxbridge1_std_shared_ptr_isize_get(undefined8 *param_1)

{
  return *param_1;
}


// ===== 00a00370  cxxbridge1$std$shared_ptr$isize$drop =====

void cxxbridge1_std_shared_ptr_isize_drop(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00ab1ce0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00a003c0  cxxbridge1$std$weak_ptr$isize$null =====

void cxxbridge1_std_weak_ptr_isize_null(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00a003c8  cxxbridge1$std$weak_ptr$isize$clone =====

void cxxbridge1_std_weak_ptr_isize_clone(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 0x10);
  }
  return;
}


// ===== 00a003f0  cxxbridge1$std$weak_ptr$isize$downgrade =====

void cxxbridge1_std_weak_ptr_isize_downgrade(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 0x10);
  }
  return;
}


// ===== 00a00418  cxxbridge1$std$weak_ptr$isize$upgrade =====

void cxxbridge1_std_weak_ptr_isize_upgrade(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (param_1[1] != 0) {
    lVar1 = std::__ndk1::__shared_weak_count::lock();
    param_2[1] = lVar1;
    if (lVar1 != 0) {
      *param_2 = *param_1;
    }
  }
  return;
}


// ===== 00a00458  cxxbridge1$std$weak_ptr$isize$drop =====

void cxxbridge1_std_weak_ptr_isize_drop(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00a00468  cxxbridge1$std$shared_ptr$string$null =====

void cxxbridge1_std_shared_ptr_string_null(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00a00470  cxxbridge1$std$shared_ptr$string$raw =====

void cxxbridge1_std_shared_ptr_string_raw(long *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  *param_1 = param_2;
                    /* try { // try from 00a00490 to 00a00497 has its CatchHandler @ 00a004c0 */
  plVar2 = (long *)operator_new(0x20);
  puVar1 = PTR_vtable_00b01280;
  plVar2[2] = 0;
  plVar2[3] = param_2;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0;
  param_1[1] = (long)plVar2;
  return;
}


// ===== 00a004d4  cxxbridge1$std$shared_ptr$string$uninit =====

void * cxxbridge1_std_shared_ptr_string_uninit(undefined8 *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  long *plVar3;
  
                    /* try { // try from 00a004e8 to 00a004ef has its CatchHandler @ 00a00548 */
  pvVar2 = operator_new(0x18);
  *param_1 = pvVar2;
                    /* try { // try from 00a004fc to 00a00503 has its CatchHandler @ 00a00534 */
  plVar3 = (long *)operator_new(0x20);
  puVar1 = PTR_vtable_00b01280;
  plVar3[2] = 0;
  plVar3[3] = (long)pvVar2;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[1] = 0;
  param_1[1] = plVar3;
  return pvVar2;
}


// ===== 00a0054c  cxxbridge1$std$shared_ptr$string$clone =====

void cxxbridge1_std_shared_ptr_string_clone(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 8);
  }
  return;
}


// ===== 00a00574  cxxbridge1$std$shared_ptr$string$get =====

undefined8 cxxbridge1_std_shared_ptr_string_get(undefined8 *param_1)

{
  return *param_1;
}


// ===== 00a0057c  cxxbridge1$std$shared_ptr$string$drop =====

void cxxbridge1_std_shared_ptr_string_drop(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00ab1ce0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00a005cc  cxxbridge1$std$weak_ptr$string$null =====

void cxxbridge1_std_weak_ptr_string_null(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00a005d4  cxxbridge1$std$weak_ptr$string$clone =====

void cxxbridge1_std_weak_ptr_string_clone(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 0x10);
  }
  return;
}


// ===== 00a005fc  cxxbridge1$std$weak_ptr$string$downgrade =====

void cxxbridge1_std_weak_ptr_string_downgrade(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 0x10);
  }
  return;
}


// ===== 00a00624  cxxbridge1$std$weak_ptr$string$upgrade =====

void cxxbridge1_std_weak_ptr_string_upgrade(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (param_1[1] != 0) {
    lVar1 = std::__ndk1::__shared_weak_count::lock();
    param_2[1] = lVar1;
    if (lVar1 != 0) {
      *param_2 = *param_1;
    }
  }
  return;
}


// ===== 00a00664  cxxbridge1$std$weak_ptr$string$drop =====

void cxxbridge1_std_weak_ptr_string_drop(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00a00674  rust::cxxbridge1::Vec<unsigned_char>::Vec =====

/* rust::cxxbridge1::Vec<unsigned char>::Vec() */

void rust::cxxbridge1::Vec<unsigned_char>::Vec(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_char_new_00b06b48)();
  return;
}


// ===== 00a00678  rust::cxxbridge1::Vec<unsigned_char>::drop =====

/* rust::cxxbridge1::Vec<unsigned char>::drop() */

void rust::cxxbridge1::Vec<unsigned_char>::drop(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i8_drop_00b06af0)();
  return;
}


// ===== 00a0067c  rust::cxxbridge1::Vec<unsigned_char>::size =====

/* rust::cxxbridge1::Vec<unsigned char>::size() const */

void rust::cxxbridge1::Vec<unsigned_char>::size(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_char_len_00b06b98)();
  return;
}


// ===== 00a00680  rust::cxxbridge1::Vec<unsigned_char>::capacity =====

/* rust::cxxbridge1::Vec<unsigned char>::capacity() const */

void rust::cxxbridge1::Vec<unsigned_char>::capacity(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_u64_capacity_00b06ac8)();
  return;
}


// ===== 00a00684  rust::cxxbridge1::Vec<unsigned_char>::data =====

/* rust::cxxbridge1::Vec<unsigned char>::data() const */

void rust::cxxbridge1::Vec<unsigned_char>::data(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_data_00b06c10)();
  return;
}


// ===== 00a00688  rust::cxxbridge1::Vec<unsigned_char>::reserve_total =====

/* rust::cxxbridge1::Vec<unsigned char>::reserve_total(unsigned long) */

void rust::cxxbridge1::Vec<unsigned_char>::reserve_total(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i8_reserve_total_00b069d8)();
  return;
}


// ===== 00a0068c  rust::cxxbridge1::Vec<unsigned_char>::set_len =====

/* rust::cxxbridge1::Vec<unsigned char>::set_len(unsigned long) */

void rust::cxxbridge1::Vec<unsigned_char>::set_len(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_u8_set_len_00b06a50)();
  return;
}


// ===== 00a00690  rust::cxxbridge1::Vec<unsigned_char>::truncate =====

/* rust::cxxbridge1::Vec<unsigned char>::truncate(unsigned long) */

void rust::cxxbridge1::Vec<unsigned_char>::truncate(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_truncate_00b06988)();
  return;
}


// ===== 00a00694  rust::cxxbridge1::Vec<unsigned_short>::Vec =====

/* rust::cxxbridge1::Vec<unsigned short>::Vec() */

void rust::cxxbridge1::Vec<unsigned_short>::Vec(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_u16_new_00b06b30)();
  return;
}


// ===== 00a00698  rust::cxxbridge1::Vec<unsigned_short>::drop =====

/* rust::cxxbridge1::Vec<unsigned short>::drop() */

void rust::cxxbridge1::Vec<unsigned_short>::drop(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_u16_drop_00b06c38)();
  return;
}


// ===== 00a0069c  rust::cxxbridge1::Vec<unsigned_short>::size =====

/* rust::cxxbridge1::Vec<unsigned short>::size() const */

void rust::cxxbridge1::Vec<unsigned_short>::size(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_u16_len_00b06b80)();
  return;
}


// ===== 00a006a0  rust::cxxbridge1::Vec<unsigned_short>::capacity =====

/* rust::cxxbridge1::Vec<unsigned short>::capacity() const */

void rust::cxxbridge1::Vec<unsigned_short>::capacity(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_u64_capacity_00b06ab0)();
  return;
}


// ===== 00a006a4  rust::cxxbridge1::Vec<unsigned_short>::data =====

/* rust::cxxbridge1::Vec<unsigned short>::data() const */

void rust::cxxbridge1::Vec<unsigned_short>::data(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_data_00b06bf8)();
  return;
}


// ===== 00a006a8  rust::cxxbridge1::Vec<unsigned_short>::reserve_total =====

/* rust::cxxbridge1::Vec<unsigned short>::reserve_total(unsigned long) */

void rust::cxxbridge1::Vec<unsigned_short>::reserve_total(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i16_reserve_total_00b069c0)();
  return;
}


// ===== 00a006ac  rust::cxxbridge1::Vec<unsigned_short>::set_len =====

/* rust::cxxbridge1::Vec<unsigned short>::set_len(unsigned long) */

void rust::cxxbridge1::Vec<unsigned_short>::set_len(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_u8_set_len_00b06a38)();
  return;
}


// ===== 00a006b0  rust::cxxbridge1::Vec<unsigned_short>::truncate =====

/* rust::cxxbridge1::Vec<unsigned short>::truncate(unsigned long) */

void rust::cxxbridge1::Vec<unsigned_short>::truncate(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_truncate_00b06970)();
  return;
}


// ===== 00a006b4  rust::cxxbridge1::Vec<unsigned_int>::Vec =====

/* rust::cxxbridge1::Vec<unsigned int>::Vec() */

void rust::cxxbridge1::Vec<unsigned_int>::Vec(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_new_00b06b38)();
  return;
}


// ===== 00a006b8  rust::cxxbridge1::Vec<unsigned_int>::drop =====

/* rust::cxxbridge1::Vec<unsigned int>::drop() */

void rust::cxxbridge1::Vec<unsigned_int>::drop(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_drop_00b06c40)();
  return;
}


// ===== 00a006bc  rust::cxxbridge1::Vec<unsigned_int>::size =====

/* rust::cxxbridge1::Vec<unsigned int>::size() const */

void rust::cxxbridge1::Vec<unsigned_int>::size(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_len_00b06b88)();
  return;
}


// ===== 00a006c0  rust::cxxbridge1::Vec<unsigned_int>::capacity =====

/* rust::cxxbridge1::Vec<unsigned int>::capacity() const */

void rust::cxxbridge1::Vec<unsigned_int>::capacity(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_u64_capacity_00b06ab8)();
  return;
}


// ===== 00a006c4  rust::cxxbridge1::Vec<unsigned_int>::data =====

/* rust::cxxbridge1::Vec<unsigned int>::data() const */

void rust::cxxbridge1::Vec<unsigned_int>::data(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_data_00b06c00)();
  return;
}


// ===== 00a006c8  rust::cxxbridge1::Vec<unsigned_int>::reserve_total =====

/* rust::cxxbridge1::Vec<unsigned int>::reserve_total(unsigned long) */

void rust::cxxbridge1::Vec<unsigned_int>::reserve_total(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_f32_reserve_total_00b069c8)();
  return;
}


// ===== 00a006cc  rust::cxxbridge1::Vec<unsigned_int>::set_len =====

/* rust::cxxbridge1::Vec<unsigned int>::set_len(unsigned long) */

void rust::cxxbridge1::Vec<unsigned_int>::set_len(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_u8_set_len_00b06a40)();
  return;
}


// ===== 00a006d0  rust::cxxbridge1::Vec<unsigned_int>::truncate =====

/* rust::cxxbridge1::Vec<unsigned int>::truncate(unsigned long) */

void rust::cxxbridge1::Vec<unsigned_int>::truncate(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_truncate_00b06978)();
  return;
}


// ===== 00a006d4  rust::cxxbridge1::Vec<unsigned_long>::Vec =====

/* rust::cxxbridge1::Vec<unsigned long>::Vec() */

void rust::cxxbridge1::Vec<unsigned_long>::Vec(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_string_new_00b06b40)();
  return;
}


// ===== 00a006d8  rust::cxxbridge1::Vec<unsigned_long>::drop =====

/* rust::cxxbridge1::Vec<unsigned long>::drop() */

void rust::cxxbridge1::Vec<unsigned_long>::drop(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_usize_drop_00b06c48)();
  return;
}


// ===== 00a006dc  rust::cxxbridge1::Vec<unsigned_long>::size =====

/* rust::cxxbridge1::Vec<unsigned long>::size() const */

void rust::cxxbridge1::Vec<unsigned_long>::size(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_usize_len_00b06b90)();
  return;
}


// ===== 00a006e0  rust::cxxbridge1::Vec<unsigned_long>::capacity =====

/* rust::cxxbridge1::Vec<unsigned long>::capacity() const */

void rust::cxxbridge1::Vec<unsigned_long>::capacity(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_u64_capacity_00b06ac0)();
  return;
}


// ===== 00a006e4  rust::cxxbridge1::Vec<unsigned_long>::data =====

/* rust::cxxbridge1::Vec<unsigned long>::data() const */

void rust::cxxbridge1::Vec<unsigned_long>::data(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_data_00b06c08)();
  return;
}


// ===== 00a006e8  rust::cxxbridge1::Vec<unsigned_long>::reserve_total =====

/* rust::cxxbridge1::Vec<unsigned long>::reserve_total(unsigned long) */

void rust::cxxbridge1::Vec<unsigned_long>::reserve_total(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_isize_reserve_total_00b069d0)();
  return;
}


// ===== 00a006ec  rust::cxxbridge1::Vec<unsigned_long>::set_len =====

/* rust::cxxbridge1::Vec<unsigned long>::set_len(unsigned long) */

void rust::cxxbridge1::Vec<unsigned_long>::set_len(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_u8_set_len_00b06a48)();
  return;
}


// ===== 00a006f0  rust::cxxbridge1::Vec<unsigned_long>::truncate =====

/* rust::cxxbridge1::Vec<unsigned long>::truncate(unsigned long) */

void rust::cxxbridge1::Vec<unsigned_long>::truncate(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_truncate_00b06980)();
  return;
}


// ===== 00a006f4  rust::cxxbridge1::Vec<signed_char>::Vec =====

/* rust::cxxbridge1::Vec<signed char>::Vec() */

void rust::cxxbridge1::Vec<signed_char>::Vec(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_char_new_00b06b10)();
  return;
}


// ===== 00a006f8  rust::cxxbridge1::Vec<signed_char>::drop =====

/* rust::cxxbridge1::Vec<signed char>::drop() */

void rust::cxxbridge1::Vec<signed_char>::drop(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i8_drop_00b06ae8)();
  return;
}


// ===== 00a006fc  rust::cxxbridge1::Vec<signed_char>::size =====

/* rust::cxxbridge1::Vec<signed char>::size() const */

void rust::cxxbridge1::Vec<signed_char>::size(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_char_len_00b06b70)();
  return;
}


// ===== 00a00700  rust::cxxbridge1::Vec<signed_char>::capacity =====

/* rust::cxxbridge1::Vec<signed char>::capacity() const */

void rust::cxxbridge1::Vec<signed_char>::capacity(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_u64_capacity_00b06a90)();
  return;
}


// ===== 00a00704  rust::cxxbridge1::Vec<signed_char>::data =====

/* rust::cxxbridge1::Vec<signed char>::data() const */

void rust::cxxbridge1::Vec<signed_char>::data(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_data_00b06bd8)();
  return;
}


// ===== 00a00708  rust::cxxbridge1::Vec<signed_char>::reserve_total =====

/* rust::cxxbridge1::Vec<signed char>::reserve_total(unsigned long) */

void rust::cxxbridge1::Vec<signed_char>::reserve_total(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i8_reserve_total_00b069b0)();
  return;
}


// ===== 00a0070c  rust::cxxbridge1::Vec<signed_char>::set_len =====

/* rust::cxxbridge1::Vec<signed char>::set_len(unsigned long) */

void rust::cxxbridge1::Vec<signed_char>::set_len(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_u8_set_len_00b06a18)();
  return;
}


// ===== 00a00710  rust::cxxbridge1::Vec<signed_char>::truncate =====

/* rust::cxxbridge1::Vec<signed char>::truncate(unsigned long) */

void rust::cxxbridge1::Vec<signed_char>::truncate(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_truncate_00b06958)();
  return;
}


// ===== 00a00714  rust::cxxbridge1::Vec<short>::Vec =====

/* rust::cxxbridge1::Vec<short>::Vec() */

void rust::cxxbridge1::Vec<short>::Vec(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_u16_new_00b068a8)();
  return;
}


// ===== 00a00718  rust::cxxbridge1::Vec<short>::drop =====

/* rust::cxxbridge1::Vec<short>::drop() */

void rust::cxxbridge1::Vec<short>::drop(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_u16_drop_00b06898)();
  return;
}


// ===== 00a0071c  rust::cxxbridge1::Vec<short>::size =====

/* rust::cxxbridge1::Vec<short>::size() const */

void rust::cxxbridge1::Vec<short>::size(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_u16_len_00b068a0)();
  return;
}


// ===== 00a00720  rust::cxxbridge1::Vec<short>::capacity =====

/* rust::cxxbridge1::Vec<short>::capacity() const */

void rust::cxxbridge1::Vec<short>::capacity(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_u64_capacity_00b06a78)();
  return;
}


// ===== 00a00724  rust::cxxbridge1::Vec<short>::data =====

/* rust::cxxbridge1::Vec<short>::data() const */

void rust::cxxbridge1::Vec<short>::data(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_data_00b06bc0)();
  return;
}


// ===== 00a00728  rust::cxxbridge1::Vec<short>::reserve_total =====

/* rust::cxxbridge1::Vec<short>::reserve_total(unsigned long) */

void rust::cxxbridge1::Vec<short>::reserve_total(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i16_reserve_total_00b068b0)();
  return;
}


// ===== 00a0072c  rust::cxxbridge1::Vec<short>::set_len =====

/* rust::cxxbridge1::Vec<short>::set_len(unsigned long) */

void rust::cxxbridge1::Vec<short>::set_len(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_u8_set_len_00b06a00)();
  return;
}


// ===== 00a00730  rust::cxxbridge1::Vec<short>::truncate =====

/* rust::cxxbridge1::Vec<short>::truncate(unsigned long) */

void rust::cxxbridge1::Vec<short>::truncate(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_truncate_00b06940)();
  return;
}


// ===== 00a00734  rust::cxxbridge1::Vec<int>::Vec =====

/* rust::cxxbridge1::Vec<int>::Vec() */

void rust::cxxbridge1::Vec<int>::Vec(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_new_00b06b00)();
  return;
}


// ===== 00a00738  rust::cxxbridge1::Vec<int>::drop =====

/* rust::cxxbridge1::Vec<int>::drop() */

void rust::cxxbridge1::Vec<int>::drop(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_drop_00b06c20)();
  return;
}


// ===== 00a0073c  rust::cxxbridge1::Vec<int>::size =====

/* rust::cxxbridge1::Vec<int>::size() const */

void rust::cxxbridge1::Vec<int>::size(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_len_00b06b60)();
  return;
}


// ===== 00a00740  rust::cxxbridge1::Vec<int>::capacity =====

/* rust::cxxbridge1::Vec<int>::capacity() const */

void rust::cxxbridge1::Vec<int>::capacity(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_u64_capacity_00b06a80)();
  return;
}


// ===== 00a00744  rust::cxxbridge1::Vec<int>::data =====

/* rust::cxxbridge1::Vec<int>::data() const */

void rust::cxxbridge1::Vec<int>::data(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_data_00b06bc8)();
  return;
}


// ===== 00a00748  rust::cxxbridge1::Vec<int>::reserve_total =====

/* rust::cxxbridge1::Vec<int>::reserve_total(unsigned long) */

void rust::cxxbridge1::Vec<int>::reserve_total(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_f32_reserve_total_00b069a0)();
  return;
}


// ===== 00a0074c  rust::cxxbridge1::Vec<int>::set_len =====

/* rust::cxxbridge1::Vec<int>::set_len(unsigned long) */

void rust::cxxbridge1::Vec<int>::set_len(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_u8_set_len_00b06a08)();
  return;
}


// ===== 00a00750  rust::cxxbridge1::Vec<int>::truncate =====

/* rust::cxxbridge1::Vec<int>::truncate(unsigned long) */

void rust::cxxbridge1::Vec<int>::truncate(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_truncate_00b06948)();
  return;
}


// ===== 00a00754  rust::cxxbridge1::Vec<long>::Vec =====

/* rust::cxxbridge1::Vec<long>::Vec() */

void rust::cxxbridge1::Vec<long>::Vec(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_string_new_00b06b08)();
  return;
}


// ===== 00a00758  rust::cxxbridge1::Vec<long>::drop =====

/* rust::cxxbridge1::Vec<long>::drop() */

void rust::cxxbridge1::Vec<long>::drop(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_usize_drop_00b06c28)();
  return;
}


// ===== 00a0075c  rust::cxxbridge1::Vec<long>::size =====

/* rust::cxxbridge1::Vec<long>::size() const */

void rust::cxxbridge1::Vec<long>::size(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_usize_len_00b06b68)();
  return;
}


// ===== 00a00760  rust::cxxbridge1::Vec<long>::capacity =====

/* rust::cxxbridge1::Vec<long>::capacity() const */

void rust::cxxbridge1::Vec<long>::capacity(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_u64_capacity_00b06a88)();
  return;
}


// ===== 00a00764  rust::cxxbridge1::Vec<long>::data =====

/* rust::cxxbridge1::Vec<long>::data() const */

void rust::cxxbridge1::Vec<long>::data(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_data_00b06bd0)();
  return;
}


// ===== 00a00768  rust::cxxbridge1::Vec<long>::reserve_total =====

/* rust::cxxbridge1::Vec<long>::reserve_total(unsigned long) */

void rust::cxxbridge1::Vec<long>::reserve_total(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_isize_reserve_total_00b069a8)();
  return;
}


// ===== 00a0076c  rust::cxxbridge1::Vec<long>::set_len =====

/* rust::cxxbridge1::Vec<long>::set_len(unsigned long) */

void rust::cxxbridge1::Vec<long>::set_len(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_u8_set_len_00b06a10)();
  return;
}


// ===== 00a00770  rust::cxxbridge1::Vec<long>::truncate =====

/* rust::cxxbridge1::Vec<long>::truncate(unsigned long) */

void rust::cxxbridge1::Vec<long>::truncate(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_truncate_00b06950)();
  return;
}


// ===== 00a00774  rust::cxxbridge1::Vec<float>::Vec =====

/* rust::cxxbridge1::Vec<float>::Vec() */

void rust::cxxbridge1::Vec<float>::Vec(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_new_00b06868)();
  return;
}


// ===== 00a00778  rust::cxxbridge1::Vec<float>::drop =====

/* rust::cxxbridge1::Vec<float>::drop() */

void rust::cxxbridge1::Vec<float>::drop(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_drop_00b06858)();
  return;
}


// ===== 00a0077c  rust::cxxbridge1::Vec<float>::size =====

/* rust::cxxbridge1::Vec<float>::size() const */

void rust::cxxbridge1::Vec<float>::size(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_len_00b06860)();
  return;
}


// ===== 00a00780  rust::cxxbridge1::Vec<float>::capacity =====

/* rust::cxxbridge1::Vec<float>::capacity() const */

void rust::cxxbridge1::Vec<float>::capacity(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_u64_capacity_00b06a68)();
  return;
}


// ===== 00a00784  rust::cxxbridge1::Vec<float>::data =====

/* rust::cxxbridge1::Vec<float>::data() const */

void rust::cxxbridge1::Vec<float>::data(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_data_00b06bb0)();
  return;
}


// ===== 00a00788  rust::cxxbridge1::Vec<float>::reserve_total =====

/* rust::cxxbridge1::Vec<float>::reserve_total(unsigned long) */

void rust::cxxbridge1::Vec<float>::reserve_total(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_f32_reserve_total_00b06870)();
  return;
}


// ===== 00a0078c  rust::cxxbridge1::Vec<float>::set_len =====

/* rust::cxxbridge1::Vec<float>::set_len(unsigned long) */

void rust::cxxbridge1::Vec<float>::set_len(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_u8_set_len_00b069f0)();
  return;
}


// ===== 00a00790  rust::cxxbridge1::Vec<float>::truncate =====

/* rust::cxxbridge1::Vec<float>::truncate(unsigned long) */

void rust::cxxbridge1::Vec<float>::truncate(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_truncate_00b06930)();
  return;
}


// ===== 00a00794  rust::cxxbridge1::Vec<double>::Vec =====

/* rust::cxxbridge1::Vec<double>::Vec() */

void rust::cxxbridge1::Vec<double>::Vec(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_string_new_00b06888)();
  return;
}


// ===== 00a00798  rust::cxxbridge1::Vec<double>::drop =====

/* rust::cxxbridge1::Vec<double>::drop() */

void rust::cxxbridge1::Vec<double>::drop(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_usize_drop_00b06878)();
  return;
}


// ===== 00a0079c  rust::cxxbridge1::Vec<double>::size =====

/* rust::cxxbridge1::Vec<double>::size() const */

void rust::cxxbridge1::Vec<double>::size(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_usize_len_00b06880)();
  return;
}


// ===== 00a007a0  rust::cxxbridge1::Vec<double>::capacity =====

/* rust::cxxbridge1::Vec<double>::capacity() const */

void rust::cxxbridge1::Vec<double>::capacity(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_u64_capacity_00b06a70)();
  return;
}


// ===== 00a007a4  rust::cxxbridge1::Vec<double>::data =====

/* rust::cxxbridge1::Vec<double>::data() const */

void rust::cxxbridge1::Vec<double>::data(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_data_00b06bb8)();
  return;
}


// ===== 00a007a8  rust::cxxbridge1::Vec<double>::reserve_total =====

/* rust::cxxbridge1::Vec<double>::reserve_total(unsigned long) */

void rust::cxxbridge1::Vec<double>::reserve_total(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_isize_reserve_total_00b06890)();
  return;
}


// ===== 00a007ac  rust::cxxbridge1::Vec<double>::set_len =====

/* rust::cxxbridge1::Vec<double>::set_len(unsigned long) */

void rust::cxxbridge1::Vec<double>::set_len(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_u8_set_len_00b069f8)();
  return;
}


// ===== 00a007b0  rust::cxxbridge1::Vec<double>::truncate =====

/* rust::cxxbridge1::Vec<double>::truncate(unsigned long) */

void rust::cxxbridge1::Vec<double>::truncate(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_truncate_00b06938)();
  return;
}


// ===== 00a007b4  rust::cxxbridge1::Vec<bool>::Vec =====

/* rust::cxxbridge1::Vec<bool>::Vec() */

void rust::cxxbridge1::Vec<bool>::Vec(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_char_new_00b06838)();
  return;
}


// ===== 00a007b8  rust::cxxbridge1::Vec<bool>::drop =====

/* rust::cxxbridge1::Vec<bool>::drop() */

void rust::cxxbridge1::Vec<bool>::drop(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i8_drop_00b06828)();
  return;
}


// ===== 00a007bc  rust::cxxbridge1::Vec<bool>::size =====

/* rust::cxxbridge1::Vec<bool>::size() const */

void rust::cxxbridge1::Vec<bool>::size(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_char_len_00b06830)();
  return;
}


// ===== 00a007c0  rust::cxxbridge1::Vec<bool>::capacity =====

/* rust::cxxbridge1::Vec<bool>::capacity() const */

void rust::cxxbridge1::Vec<bool>::capacity(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_u64_capacity_00b06818)();
  return;
}


// ===== 00a007c4  rust::cxxbridge1::Vec<bool>::data =====

/* rust::cxxbridge1::Vec<bool>::data() const */

void rust::cxxbridge1::Vec<bool>::data(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_data_00b06820)();
  return;
}


// ===== 00a007c8  rust::cxxbridge1::Vec<bool>::reserve_total =====

/* rust::cxxbridge1::Vec<bool>::reserve_total(unsigned long) */

void rust::cxxbridge1::Vec<bool>::reserve_total(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i8_reserve_total_00b06840)();
  return;
}


// ===== 00a007cc  rust::cxxbridge1::Vec<bool>::set_len =====

/* rust::cxxbridge1::Vec<bool>::set_len(unsigned long) */

void rust::cxxbridge1::Vec<bool>::set_len(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_u8_set_len_00b06848)();
  return;
}


// ===== 00a007d0  rust::cxxbridge1::Vec<bool>::truncate =====

/* rust::cxxbridge1::Vec<bool>::truncate(unsigned long) */

void rust::cxxbridge1::Vec<bool>::truncate(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_truncate_00b06850)();
  return;
}


// ===== 00a007d4  rust::cxxbridge1::Vec<char>::Vec =====

/* rust::cxxbridge1::Vec<char>::Vec() */

void rust::cxxbridge1::Vec<char>::Vec(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_char_new_00b06af8)();
  return;
}


// ===== 00a007d8  rust::cxxbridge1::Vec<char>::drop =====

/* rust::cxxbridge1::Vec<char>::drop() */

void rust::cxxbridge1::Vec<char>::drop(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i8_drop_00b06ae0)();
  return;
}


// ===== 00a007dc  rust::cxxbridge1::Vec<char>::size =====

/* rust::cxxbridge1::Vec<char>::size() const */

void rust::cxxbridge1::Vec<char>::size(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_char_len_00b06b58)();
  return;
}


// ===== 00a007e0  rust::cxxbridge1::Vec<char>::capacity =====

/* rust::cxxbridge1::Vec<char>::capacity() const */

void rust::cxxbridge1::Vec<char>::capacity(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_u64_capacity_00b06a60)();
  return;
}


// ===== 00a007e4  rust::cxxbridge1::Vec<char>::data =====

/* rust::cxxbridge1::Vec<char>::data() const */

void rust::cxxbridge1::Vec<char>::data(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_data_00b06ba8)();
  return;
}


// ===== 00a007e8  rust::cxxbridge1::Vec<char>::reserve_total =====

/* rust::cxxbridge1::Vec<char>::reserve_total(unsigned long) */

void rust::cxxbridge1::Vec<char>::reserve_total(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i8_reserve_total_00b06998)();
  return;
}


// ===== 00a007ec  rust::cxxbridge1::Vec<char>::set_len =====

/* rust::cxxbridge1::Vec<char>::set_len(unsigned long) */

void rust::cxxbridge1::Vec<char>::set_len(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_u8_set_len_00b069e8)();
  return;
}


// ===== 00a007f0  rust::cxxbridge1::Vec<char>::truncate =====

/* rust::cxxbridge1::Vec<char>::truncate(unsigned long) */

void rust::cxxbridge1::Vec<char>::truncate(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_truncate_00b06928)();
  return;
}


// ===== 00a007f4  rust::cxxbridge1::Vec<rust::cxxbridge1::detail::usize_ignore>::Vec =====

/* rust::cxxbridge1::Vec<rust::cxxbridge1::detail::usize_ignore>::Vec() */

void rust::cxxbridge1::Vec<rust::cxxbridge1::detail::usize_ignore>::Vec(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_string_new_00b06b50)();
  return;
}


// ===== 00a007f8  rust::cxxbridge1::Vec<rust::cxxbridge1::detail::usize_ignore>::drop =====

/* rust::cxxbridge1::Vec<rust::cxxbridge1::detail::usize_ignore>::drop() */

void rust::cxxbridge1::Vec<rust::cxxbridge1::detail::usize_ignore>::drop(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_usize_drop_00b06c50)();
  return;
}


// ===== 00a007fc  rust::cxxbridge1::Vec<rust::cxxbridge1::detail::usize_ignore>::size =====

/* rust::cxxbridge1::Vec<rust::cxxbridge1::detail::usize_ignore>::size() const */

void rust::cxxbridge1::Vec<rust::cxxbridge1::detail::usize_ignore>::size(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_usize_len_00b06ba0)();
  return;
}


// ===== 00a00800  rust::cxxbridge1::Vec<rust::cxxbridge1::detail::usize_ignore>::capacity =====

/* rust::cxxbridge1::Vec<rust::cxxbridge1::detail::usize_ignore>::capacity() const */

void rust::cxxbridge1::Vec<rust::cxxbridge1::detail::usize_ignore>::capacity(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_u64_capacity_00b06ad0)();
  return;
}


// ===== 00a00804  rust::cxxbridge1::Vec<rust::cxxbridge1::detail::usize_ignore>::data =====

/* rust::cxxbridge1::Vec<rust::cxxbridge1::detail::usize_ignore>::data() const */

void rust::cxxbridge1::Vec<rust::cxxbridge1::detail::usize_ignore>::data(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_data_00b06c18)();
  return;
}


// ===== 00a00808  rust::cxxbridge1::Vec<rust::cxxbridge1::detail::usize_ignore>::reserve_total =====

/* rust::cxxbridge1::Vec<rust::cxxbridge1::detail::usize_ignore>::reserve_total(unsigned long) */

void rust::cxxbridge1::Vec<rust::cxxbridge1::detail::usize_ignore>::reserve_total(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_isize_reserve_total_00b069e0)();
  return;
}


// ===== 00a0080c  rust::cxxbridge1::Vec<rust::cxxbridge1::detail::usize_ignore>::set_len =====

/* rust::cxxbridge1::Vec<rust::cxxbridge1::detail::usize_ignore>::set_len(unsigned long) */

void rust::cxxbridge1::Vec<rust::cxxbridge1::detail::usize_ignore>::set_len(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_u8_set_len_00b06a58)();
  return;
}


// ===== 00a00810  rust::cxxbridge1::Vec<rust::cxxbridge1::detail::usize_ignore>::truncate =====

/* rust::cxxbridge1::Vec<rust::cxxbridge1::detail::usize_ignore>::truncate(unsigned long) */

void rust::cxxbridge1::Vec<rust::cxxbridge1::detail::usize_ignore>::truncate(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_truncate_00b06990)();
  return;
}


// ===== 00a00814  rust::cxxbridge1::Vec<rust::cxxbridge1::detail::isize_ignore>::Vec =====

/* rust::cxxbridge1::Vec<rust::cxxbridge1::detail::isize_ignore>::Vec() */

void rust::cxxbridge1::Vec<rust::cxxbridge1::detail::isize_ignore>::Vec(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_string_new_00b06b18)();
  return;
}


// ===== 00a00818  rust::cxxbridge1::Vec<rust::cxxbridge1::detail::isize_ignore>::drop =====

/* rust::cxxbridge1::Vec<rust::cxxbridge1::detail::isize_ignore>::drop() */

void rust::cxxbridge1::Vec<rust::cxxbridge1::detail::isize_ignore>::drop(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_usize_drop_00b06c30)();
  return;
}


// ===== 00a0081c  rust::cxxbridge1::Vec<rust::cxxbridge1::detail::isize_ignore>::size =====

/* rust::cxxbridge1::Vec<rust::cxxbridge1::detail::isize_ignore>::size() const */

void rust::cxxbridge1::Vec<rust::cxxbridge1::detail::isize_ignore>::size(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_usize_len_00b06b78)();
  return;
}


// ===== 00a00820  rust::cxxbridge1::Vec<rust::cxxbridge1::detail::isize_ignore>::capacity =====

/* rust::cxxbridge1::Vec<rust::cxxbridge1::detail::isize_ignore>::capacity() const */

void rust::cxxbridge1::Vec<rust::cxxbridge1::detail::isize_ignore>::capacity(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_u64_capacity_00b06a98)();
  return;
}


// ===== 00a00824  rust::cxxbridge1::Vec<rust::cxxbridge1::detail::isize_ignore>::data =====

/* rust::cxxbridge1::Vec<rust::cxxbridge1::detail::isize_ignore>::data() const */

void rust::cxxbridge1::Vec<rust::cxxbridge1::detail::isize_ignore>::data(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_data_00b06be0)();
  return;
}


// ===== 00a00828  rust::cxxbridge1::Vec<rust::cxxbridge1::detail::isize_ignore>::reserve_total =====

/* rust::cxxbridge1::Vec<rust::cxxbridge1::detail::isize_ignore>::reserve_total(unsigned long) */

void rust::cxxbridge1::Vec<rust::cxxbridge1::detail::isize_ignore>::reserve_total(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_isize_reserve_total_00b069b8)();
  return;
}


// ===== 00a0082c  rust::cxxbridge1::Vec<rust::cxxbridge1::detail::isize_ignore>::set_len =====

/* rust::cxxbridge1::Vec<rust::cxxbridge1::detail::isize_ignore>::set_len(unsigned long) */

void rust::cxxbridge1::Vec<rust::cxxbridge1::detail::isize_ignore>::set_len(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_u8_set_len_00b06a20)();
  return;
}


// ===== 00a00830  rust::cxxbridge1::Vec<rust::cxxbridge1::detail::isize_ignore>::truncate =====

/* rust::cxxbridge1::Vec<rust::cxxbridge1::detail::isize_ignore>::truncate(unsigned long) */

void rust::cxxbridge1::Vec<rust::cxxbridge1::detail::isize_ignore>::truncate(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_truncate_00b06960)();
  return;
}


// ===== 00a00834  rust::cxxbridge1::Vec<rust::cxxbridge1::String>::Vec =====

/* rust::cxxbridge1::Vec<rust::cxxbridge1::String>::Vec() */

void rust::cxxbridge1::Vec<rust::cxxbridge1::String>::Vec(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_string_new_00b06b28)();
  return;
}


// ===== 00a00838  rust::cxxbridge1::Vec<rust::cxxbridge1::String>::drop =====

/* rust::cxxbridge1::Vec<rust::cxxbridge1::String>::drop() */

void rust::cxxbridge1::Vec<rust::cxxbridge1::String>::drop(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_string_drop_00b068d0)();
  return;
}


// ===== 00a0083c  rust::cxxbridge1::Vec<rust::cxxbridge1::String>::size =====

/* rust::cxxbridge1::Vec<rust::cxxbridge1::String>::size() const */

void rust::cxxbridge1::Vec<rust::cxxbridge1::String>::size(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_string_len_00b068d8)();
  return;
}


// ===== 00a00840  rust::cxxbridge1::Vec<rust::cxxbridge1::String>::capacity =====

/* rust::cxxbridge1::Vec<rust::cxxbridge1::String>::capacity() const */

void rust::cxxbridge1::Vec<rust::cxxbridge1::String>::capacity(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_u64_capacity_00b06aa8)();
  return;
}


// ===== 00a00844  rust::cxxbridge1::Vec<rust::cxxbridge1::String>::data =====

/* rust::cxxbridge1::Vec<rust::cxxbridge1::String>::data() const */

void rust::cxxbridge1::Vec<rust::cxxbridge1::String>::data(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_data_00b06bf0)();
  return;
}


// ===== 00a00848  rust::cxxbridge1::Vec<rust::cxxbridge1::String>::reserve_total =====

/* rust::cxxbridge1::Vec<rust::cxxbridge1::String>::reserve_total(unsigned long) */

void rust::cxxbridge1::Vec<rust::cxxbridge1::String>::reserve_total(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_string_reserve_total_00b068e0)();
  return;
}


// ===== 00a0084c  rust::cxxbridge1::Vec<rust::cxxbridge1::String>::set_len =====

/* rust::cxxbridge1::Vec<rust::cxxbridge1::String>::set_len(unsigned long) */

void rust::cxxbridge1::Vec<rust::cxxbridge1::String>::set_len(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_u8_set_len_00b06a30)();
  return;
}


// ===== 00a00850  rust::cxxbridge1::Vec<rust::cxxbridge1::String>::truncate =====

/* rust::cxxbridge1::Vec<rust::cxxbridge1::String>::truncate(unsigned long) */

void rust::cxxbridge1::Vec<rust::cxxbridge1::String>::truncate(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_string_truncate_00b068e8)();
  return;
}


// ===== 00a00854  rust::cxxbridge1::Vec<rust::cxxbridge1::Str>::Vec =====

/* rust::cxxbridge1::Vec<rust::cxxbridge1::Str>::Vec() */

void rust::cxxbridge1::Vec<rust::cxxbridge1::Str>::Vec(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_string_new_00b06b20)();
  return;
}


// ===== 00a00858  rust::cxxbridge1::Vec<rust::cxxbridge1::Str>::drop =====

/* rust::cxxbridge1::Vec<rust::cxxbridge1::Str>::drop() */

void rust::cxxbridge1::Vec<rust::cxxbridge1::Str>::drop(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_str_drop_00b068b8)();
  return;
}


// ===== 00a0085c  rust::cxxbridge1::Vec<rust::cxxbridge1::Str>::size =====

/* rust::cxxbridge1::Vec<rust::cxxbridge1::Str>::size() const */

void rust::cxxbridge1::Vec<rust::cxxbridge1::Str>::size(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_str_len_00b068c0)();
  return;
}


// ===== 00a00860  rust::cxxbridge1::Vec<rust::cxxbridge1::Str>::capacity =====

/* rust::cxxbridge1::Vec<rust::cxxbridge1::Str>::capacity() const */

void rust::cxxbridge1::Vec<rust::cxxbridge1::Str>::capacity(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_u64_capacity_00b06aa0)();
  return;
}


// ===== 00a00864  rust::cxxbridge1::Vec<rust::cxxbridge1::Str>::data =====

/* rust::cxxbridge1::Vec<rust::cxxbridge1::Str>::data() const */

void rust::cxxbridge1::Vec<rust::cxxbridge1::Str>::data(void)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_data_00b06be8)();
  return;
}


// ===== 00a00868  rust::cxxbridge1::Vec<rust::cxxbridge1::Str>::reserve_total =====

/* rust::cxxbridge1::Vec<rust::cxxbridge1::Str>::reserve_total(unsigned long) */

void rust::cxxbridge1::Vec<rust::cxxbridge1::Str>::reserve_total(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_str_reserve_total_00b068c8)();
  return;
}


// ===== 00a0086c  rust::cxxbridge1::Vec<rust::cxxbridge1::Str>::set_len =====

/* rust::cxxbridge1::Vec<rust::cxxbridge1::Str>::set_len(unsigned long) */

void rust::cxxbridge1::Vec<rust::cxxbridge1::Str>::set_len(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_u8_set_len_00b06a28)();
  return;
}


// ===== 00a00870  rust::cxxbridge1::Vec<rust::cxxbridge1::Str>::truncate =====

/* rust::cxxbridge1::Vec<rust::cxxbridge1::Str>::truncate(unsigned long) */

void rust::cxxbridge1::Vec<rust::cxxbridge1::Str>::truncate(ulong param_1)

{
  (*(code *)PTR_cxxbridge1_rust_vec_i32_truncate_00b06968)();
  return;
}


// ===== 00a00874  rust::cxxbridge1::panic<std::invalid_argument> =====

/* void rust::cxxbridge1::panic<std::invalid_argument>(char const*) */

void rust::cxxbridge1::panic<std::invalid_argument>(char *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = __cxa_allocate_exception(0x10);
                    /* try { // try from 00a00890 to 00a00897 has its CatchHandler @ 00a008b0 */
  FUN_00a008c4(uVar1,param_1);
  uVar2 = __cxa_throw(uVar1,PTR_typeinfo_00b00bc8,PTR__invalid_argument_00b00bc0);
                    /* catch() { ... } // from try @ 00a00890 with catch @ 00a008b0 */
  __cxa_free_exception(uVar1);
                    /* WARNING: Subroutine does not return */
  FUN_00ab2530(uVar2);
}


// ===== 00a008c4  FUN_00a008c4 =====

void FUN_00a008c4(logic_error *param_1,char *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  *(undefined **)param_1 = PTR_vtable_00b00bd0 + 0x10;
  return;
}


// ===== 00a008f4  FUN_00a008f4 =====

void FUN_00a008f4(void)

{
  bad_array_new_length *this;
  
  this = (bad_array_new_length *)__cxa_allocate_exception(8);
  std::bad_array_new_length::bad_array_new_length(this);
  __cxa_throw(this,PTR_typeinfo_00b00ba0,PTR__bad_array_new_length_00b00ba8);
                    /* WARNING: Subroutine does not return */
  FUN_009f4978("vector");
}


// ===== 00a00928  FUN_00a00928 =====

void FUN_00a00928(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_009f4978("vector");
}


// ===== 00a0093c  FUN_00a0093c =====

void FUN_00a0093c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_009f4978("vector");
}


// ===== 00a00950  FUN_00a00950 =====

void FUN_00a00950(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_009f4978("vector");
}


// ===== 00a00964  FUN_00a00964 =====

void FUN_00a00964(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_009f4978("vector");
}


// ===== 00a00978  FUN_00a00978 =====

void FUN_00a00978(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_009f4978("vector");
}


// ===== 00a0098c  FUN_00a0098c =====

void FUN_00a0098c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_009f4978("vector");
}


// ===== 00a009a0  FUN_00a009a0 =====

void FUN_00a009a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_009f4978("vector");
}


// ===== 00a009b4  FUN_00a009b4 =====

void FUN_00a009b4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_009f4978("vector");
}


// ===== 00a009c8  FUN_00a009c8 =====

void FUN_00a009c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_009f4978("vector");
}


// ===== 00a009dc  FUN_00a009dc =====

void FUN_00a009dc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_009f4978("vector");
}


// ===== 00a009f0  FUN_00a009f0 =====

void FUN_00a009f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_009f4978("vector");
}


// ===== 00a00a04  std::__ndk1::__shared_ptr_pointer<unsigned_char*,std::__ndk1::shared_ptr<unsigned_char>::__shared_ptr_default_delete<unsigned_char,unsigned_char>,std::__ndk1::allocator<unsigned_char>>::~__shared_ptr_pointer =====

/* std::__ndk1::__shared_ptr_pointer<unsigned char*, std::__ndk1::shared_ptr<unsigned
   char>::__shared_ptr_default_delete<unsigned char, unsigned char>, std::__ndk1::allocator<unsigned
   char> >::~__shared_ptr_pointer() */

void __thiscall
std::__ndk1::
__shared_ptr_pointer<unsigned_char*,std::__ndk1::shared_ptr<unsigned_char>::__shared_ptr_default_delete<unsigned_char,unsigned_char>,std::__ndk1::allocator<unsigned_char>>
::~__shared_ptr_pointer
          (__shared_ptr_pointer<unsigned_char*,std::__ndk1::shared_ptr<unsigned_char>::__shared_ptr_default_delete<unsigned_char,unsigned_char>,std::__ndk1::allocator<unsigned_char>>
           *this)

{
  std::__ndk1::__shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}


// ===== 00a00a28  FUN_00a00a28 =====

void FUN_00a00a28(long param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 00a00a38  FUN_00a00a38 =====

long FUN_00a00a38(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00b01288) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00a00a54  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00b014c8)();
  return;
}


// ===== 00a00a58  std::__ndk1::__shared_ptr_pointer<unsigned_short*,std::__ndk1::shared_ptr<unsigned_short>::__shared_ptr_default_delete<unsigned_short,unsigned_short>,std::__ndk1::allocator<unsigned_short>>::~__shared_ptr_pointer =====

/* std::__ndk1::__shared_ptr_pointer<unsigned short*, std::__ndk1::shared_ptr<unsigned
   short>::__shared_ptr_default_delete<unsigned short, unsigned short>,
   std::__ndk1::allocator<unsigned short> >::~__shared_ptr_pointer() */

void __thiscall
std::__ndk1::
__shared_ptr_pointer<unsigned_short*,std::__ndk1::shared_ptr<unsigned_short>::__shared_ptr_default_delete<unsigned_short,unsigned_short>,std::__ndk1::allocator<unsigned_short>>
::~__shared_ptr_pointer
          (__shared_ptr_pointer<unsigned_short*,std::__ndk1::shared_ptr<unsigned_short>::__shared_ptr_default_delete<unsigned_short,unsigned_short>,std::__ndk1::allocator<unsigned_short>>
           *this)

{
  std::__ndk1::__shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}


// ===== 00a00a7c  FUN_00a00a7c =====

void FUN_00a00a7c(long param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 00a00a8c  FUN_00a00a8c =====

long FUN_00a00a8c(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00b01290) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00a00aa8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00b014c8)();
  return;
}


// ===== 00a00aac  std::__ndk1::__shared_ptr_pointer<unsigned_int*,std::__ndk1::shared_ptr<unsigned_int>::__shared_ptr_default_delete<unsigned_int,unsigned_int>,std::__ndk1::allocator<unsigned_int>>::~__shared_ptr_pointer =====

/* std::__ndk1::__shared_ptr_pointer<unsigned int*, std::__ndk1::shared_ptr<unsigned
   int>::__shared_ptr_default_delete<unsigned int, unsigned int>, std::__ndk1::allocator<unsigned
   int> >::~__shared_ptr_pointer() */

void __thiscall
std::__ndk1::
__shared_ptr_pointer<unsigned_int*,std::__ndk1::shared_ptr<unsigned_int>::__shared_ptr_default_delete<unsigned_int,unsigned_int>,std::__ndk1::allocator<unsigned_int>>
::~__shared_ptr_pointer
          (__shared_ptr_pointer<unsigned_int*,std::__ndk1::shared_ptr<unsigned_int>::__shared_ptr_default_delete<unsigned_int,unsigned_int>,std::__ndk1::allocator<unsigned_int>>
           *this)

{
  std::__ndk1::__shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}


// ===== 00a00ad0  FUN_00a00ad0 =====

void FUN_00a00ad0(long param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 00a00ae0  FUN_00a00ae0 =====

long FUN_00a00ae0(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00b01298) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00a00afc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00b014c8)();
  return;
}


// ===== 00a00b00  std::__ndk1::__shared_ptr_pointer<unsigned_long*,std::__ndk1::shared_ptr<unsigned_long>::__shared_ptr_default_delete<unsigned_long,unsigned_long>,std::__ndk1::allocator<unsigned_long>>::~__shared_ptr_pointer =====

/* std::__ndk1::__shared_ptr_pointer<unsigned long*, std::__ndk1::shared_ptr<unsigned
   long>::__shared_ptr_default_delete<unsigned long, unsigned long>, std::__ndk1::allocator<unsigned
   long> >::~__shared_ptr_pointer() */

void __thiscall
std::__ndk1::
__shared_ptr_pointer<unsigned_long*,std::__ndk1::shared_ptr<unsigned_long>::__shared_ptr_default_delete<unsigned_long,unsigned_long>,std::__ndk1::allocator<unsigned_long>>
::~__shared_ptr_pointer
          (__shared_ptr_pointer<unsigned_long*,std::__ndk1::shared_ptr<unsigned_long>::__shared_ptr_default_delete<unsigned_long,unsigned_long>,std::__ndk1::allocator<unsigned_long>>
           *this)

{
  std::__ndk1::__shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}


// ===== 00a00b24  FUN_00a00b24 =====

void FUN_00a00b24(long param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 00a00b34  FUN_00a00b34 =====

long FUN_00a00b34(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00b012a0) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00a00b50  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00b014c8)();
  return;
}


// ===== 00a00b54  std::__ndk1::__shared_ptr_pointer<signed_char*,std::__ndk1::shared_ptr<signed_char>::__shared_ptr_default_delete<signed_char,signed_char>,std::__ndk1::allocator<signed_char>>::~__shared_ptr_pointer =====

/* std::__ndk1::__shared_ptr_pointer<signed char*, std::__ndk1::shared_ptr<signed
   char>::__shared_ptr_default_delete<signed char, signed char>, std::__ndk1::allocator<signed char>
   >::~__shared_ptr_pointer() */

void __thiscall
std::__ndk1::
__shared_ptr_pointer<signed_char*,std::__ndk1::shared_ptr<signed_char>::__shared_ptr_default_delete<signed_char,signed_char>,std::__ndk1::allocator<signed_char>>
::~__shared_ptr_pointer
          (__shared_ptr_pointer<signed_char*,std::__ndk1::shared_ptr<signed_char>::__shared_ptr_default_delete<signed_char,signed_char>,std::__ndk1::allocator<signed_char>>
           *this)

{
  std::__ndk1::__shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}


// ===== 00a00b78  FUN_00a00b78 =====

void FUN_00a00b78(long param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
  return;
}


